/**
 * LEO-32 Key Code arithmetic, transcribed from admin32 FUN_004981c0 and
 * StageAdmin FUN_00449c70. See docs/components/deskey.md in the repository.
 * No clock reads or browser state here: every machine input is explicit.
 *
 * This module is calculation only. Each operation keeps just the two inputs the
 * arithmetic needs: `mode` (the LEO routine's mode argument) and `duration`
 * (whether the form takes a day count). All presentation text — titles, menu
 * paths, hints, steps, notes, accounts — lives in i18n.js, in both languages.
 */
export const OPERATIONS = Object.freeze({
  rescue: Object.freeze({ mode: 2, duration: false }),
  calibration: Object.freeze({ mode: 1, duration: true }),
  licences: Object.freeze({ mode: 3, duration: true }),
  dongle: Object.freeze({ mode: 4, duration: false }),
  stage: Object.freeze({ mode: 5, duration: true })
});

export class InputError extends Error {
  constructor(field, message) {
    super(message);
    this.name = 'InputError';
    this.field = field;
  }
}

export function normalizeSerial(value) {
  // VB6 Trim removes outer ASCII spaces; do not silently repair punctuation,
  // interior spaces, Unicode lookalikes or incomplete serial numbers.
  if (typeof value !== 'string' || /[^\x20-\x7e]/.test(value)) {
    throw new InputError('serial', 'Use plain letters, digits and hyphens, for example LEO 430-12-34.');
  }
  const serial = value.replace(/^ +| +$/g, '').toUpperCase();
  if (!/^LEO 430-[0-9]{2}-[0-9]{2}$/.test(serial)) {
    throw new InputError('serial', 'Enter the full serial as LEO 430-12-34. Keep both pairs of digits, including any leading zeros.');
  }
  return serial;
}

export function parseMachineDate(value) {
  if (typeof value !== 'string' || !/^\d{4}-\d{2}-\d{2}$/.test(value)) {
    throw new InputError('date', 'Enter the date shown on the microscope PC.');
  }
  const [year, month, day] = value.split('-').map(Number);
  const leap = year % 4 === 0 && (year % 100 !== 0 || year % 400 === 0);
  const monthDays = [31, leap ? 29 : 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31];
  if (year < 100 || year > 9999 || month < 1 || month > 12 || day < 1 || day > monthDays[month - 1]) {
    throw new InputError('date', 'Enter a valid calendar date between years 0100 and 9999.');
  }
  return { year, month, day };
}

function parseDuration(value) {
  const text = typeof value === 'number' ? String(value) : value;
  if (typeof text !== 'string' || !/^[0-9]+$/.test(text) || Number(text) < 1 || Number(text) > 32767) {
    throw new InputError('duration', 'Enter a whole number of days from 1 to 32767, matching the LEO form.');
  }
  return Number(text);
}

function checked(value, max, field) {
  if (!Number.isInteger(value) || value < 0 || value > max) {
    throw new InputError(field, 'These values exceed the original LEO routine’s integer range. Use a shorter duration.');
  }
  return value;
}

export function calculateKeyCode({ operation, serial: rawSerial, date, duration }) {
  if (!Object.hasOwn(OPERATIONS, operation)) {
    throw new InputError('operation', 'Select a LEO screen.');
  }
  const settings = OPERATIONS[operation];
  const serial = normalizeSerial(rawSerial);
  const { year, month, day } = parseMachineDate(date);
  const days = settings.duration ? parseDuration(duration) : 0;
  const mode = settings.mode;
  const int32 = (value) => checked(value, 2147483647, 'duration');
  let serialTerm = 0;
  for (let i = 0; i < serial.length; i += 1) {
    const weight = checked((mode + 1) * (i + 1), 32767, 'serial');
    const term = checked(serial.charCodeAt(i) * weight, 32767, 'serial');
    serialTerm = int32(serialTerm + term);
  }
  // Retain the executable's checked signed-32-bit intermediate arithmetic.
  const dayTerm = int32(int32(mode * day) * 13);
  const monthTerm = int32(int32(mode * month) * 8);
  const yearTerm = int32(int32(mode * year) * 42);
  let code = int32(int32(int32(serialTerm + dayTerm) + monthTerm) + yearTerm);
  const multiplier = days === 0 ? 0 : days <= 3 ? 5 : days <= 5 ? 4 : 8;
  const durationTerm = int32(int32(int32(day + month + year) * days) * multiplier);
  code = int32(code + durationTerm);
  if (days > 0) {
    // The accepting LEO forms also call DateAdd. Reject a date that would fail
    // there, even if the key-code calculation itself fits a signed Long.
    const expiry = new Date(Date.UTC(year, month - 1, day + days));
    if (expiry.getUTCFullYear() > 9999) {
      throw new InputError('duration', 'This duration extends beyond the date range supported by LEO. Use fewer days.');
    }
  }
  return Object.freeze({ code: String(code), operation, mode, serial, date, days, multiplier,
    serialTerm, dateTerm: dayTerm + monthTerm + yearTerm, durationTerm });
}

export function localDateString(now = new Date()) {
  return `${String(now.getFullYear()).padStart(4, '0')}-${String(now.getMonth() + 1).padStart(2, '0')}-${String(now.getDate()).padStart(2, '0')}`;
}

export function formatMachineDate(value) {
  const { year, month, day } = parseMachineDate(value);
  const months = ['Jan', 'Feb', 'Mar', 'Apr', 'May', 'Jun', 'Jul', 'Aug', 'Sep', 'Oct', 'Nov', 'Dec'];
  return `${String(day).padStart(2, '0')} ${months[month - 1]} ${String(year).padStart(4, '0')}`;
}
