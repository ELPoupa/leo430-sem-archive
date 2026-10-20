import { OPERATIONS, InputError, calculateKeyCode, localDateString } from './key-code.js';
import { QUESTIONS, GUIDANCE, ROUTE_REDIRECTS } from './help.js';
import { t, localize, operationText, errorText, displayDate, validityText } from './i18n.js';
import { serverStarts } from './instructions.js';

const $ = (id) => document.getElementById(id);
const fields = ['operation', 'serial', 'date', 'duration'];
const answers = Object.create(null);
// The language screen pre-selects the browser's language: French when the browser prefers French, else English.
function preferredLanguage() {
  for (const tag of navigator.languages ?? [navigator.language]) {
    const code = String(tag).slice(0, 2).toLowerCase();
    if (code === 'fr' || code === 'en') return code;
  }
  return 'en';
}
let language = preferredLanguage();
let route = 'language';
let result = null;
let copyAttempt = 0;
let detailsRoute = 'generator';
let languageReturn = 'q/task';
let selectedOperation = '';
let detailContext = '';
const text = (key) => t(key, language);
const localized = (pair) => localize(pair, language);
const announce = (message) => { $('announcement').textContent = message; };

function validRoute(value) {
  if (['language', 'generator', 'code'].includes(value)) return true;
  const [kind, key, extra] = value.split('/');
  if (extra) return false;
  return kind === 'q' ? Object.hasOwn(QUESTIONS, key) : kind === 'i' ? Object.hasOwn(GUIDANCE, key) : kind === 'd' && Object.hasOwn(OPERATIONS, key);
}
function readLocation() {
  const parts = location.hash.slice(1).split('/');
  const requested = parts.slice(1).join('/');
  const candidate = Object.hasOwn(ROUTE_REDIRECTS, requested) ? ROUTE_REDIRECTS[requested] : requested;
  if (['en', 'fr'].includes(parts[0]) && validRoute(candidate)) {
    language = parts[0];
    if (candidate !== requested) history.replaceState(history.state, '', `#${language}/${candidate}`);
    return candidate;
  }
  return 'language';
}
function navigate(next, { replace = false } = {}) {
  next = Object.hasOwn(ROUTE_REDIRECTS, next) ? ROUTE_REDIRECTS[next] : next;
  if (!validRoute(next)) next = 'language';
  const depth = history.state?.leo === true ? history.state.depth : 0;
  history[replace ? 'replaceState' : 'pushState']({ leo: true, depth: replace ? depth : depth + 1, parent: route }, '', `#${language}/${next}`);
  show(next);
}
function clearErrors() {
  for (const field of fields) {
    $(field).removeAttribute('aria-invalid');
    $(`${field}-error`).textContent = '';
    $(`${field}-error`).hidden = true;
  }
}
function invalidate() {
  const hadResult = result !== null;
  result = null;
  copyAttempt += 1;
  $('key-code').textContent = '';
  $('copy-status').textContent = '';
  $('copy-code').textContent = text('copy');
  if (hadResult) announce(text('changed'));
}
function renderTranslations() {
  document.documentElement.lang = language;
  document.title = 'Key Recovery Helper · LEO 430';
  for (const element of document.querySelectorAll('[data-i18n]')) element.textContent = text(element.dataset.i18n);
  $('header-flag').src = `./flag-${language}.svg`;
  $('header-language').textContent = language === 'fr' ? 'Français' : 'English';
  $('change-language').setAttribute('aria-label', text('languageLabel'));
  const current = $('operation').value;
  const placeholder = language === 'fr' ? 'Choisissez la fenêtre LEO' : 'Choose the LEO screen';
  $('operation').replaceChildren(new Option(placeholder, ''), ...Object.keys(OPERATIONS).map((key) => new Option(operationText(key, language).title, key)));
  $('operation').value = current;
}
function renderProgress(step, direct) {
  $('switch-mode').textContent = text(direct ? 'useGuide' : 'skipGenerator');
  $('switch-mode').dataset.destination = direct ? 'q/task' : 'generator';
  $('switch-mode').hidden = route === 'code';
}
function renderQuestion(key) {
  const question = QUESTIONS[key];
  $('question-title').textContent = localized(question.title);
  renderInstructionText($('question-description'), localized(question.description));
  $('question-error').hidden = true;
  $('question-error').textContent = '';
  $('question-options').replaceChildren(...question.choices.map((choice) => {
    const label = document.createElement('label');
    label.className = 'task-choice';
    const input = document.createElement('input');
    input.type = 'radio'; input.name = 'answer'; input.value = choice.id;
    input.checked = answers[key] === choice.id;
    const copy = document.createElement('span'); copy.className = 'choice-copy';
    const title = document.createElement('span'); title.className = 'choice-title'; title.id = `choice-${choice.id}`; title.textContent = localized(choice.title);
    const description = document.createElement('span'); description.className = 'choice-description'; description.id = `hint-${choice.id}`; renderInstructionText(description, localized(choice.description));
    input.setAttribute('aria-labelledby', title.id); input.setAttribute('aria-describedby', description.id);
    copy.append(title, description); label.append(input, copy);
    return label;
  }));
}
function setOperation(id) {
  if (selectedOperation !== id) {
    $('serial').value = '';
    $('duration').value = '';
    selectedOperation = id;
    clearErrors();
    invalidate();
  }
  $('operation').value = id;
  renderOperation();
}
function renderOperation() {
  const id = $('operation').value;
  const operation = id ? operationText(id, language) : null;
  document.querySelector('.serial-field').hidden = !operation;
  document.querySelector('.date-duration').hidden = !operation;
  document.querySelector('.context-details').hidden = !operation;
  // before the form, only the cautions matter; the other notes are shown with the result
  $('operation-note').hidden = !operation || !['stage', 'dongle'].includes(id);
  renderInstructionText($('operation-path'), operation?.path || '');
  $('duration-field').hidden = !operation?.duration;
  $('duration').disabled = !operation?.duration;
  $('duration').required = !!operation?.duration;
  if (!operation) return;
  $('selected-title').textContent = operation.title;
  $('serial-label').textContent = operation.label;
  renderInstructionText($('serial-hint'), operation.hint);
  renderInstructionText($('operation-account'), operation.account);
  renderInstructionText($('operation-note'), operation.note);
  $('operation-note').classList.toggle('caution', ['stage', 'dongle'].includes(id));
}
function renderDetails(direct) {
  detailsRoute = route;
  $('operation-field').hidden = !direct;
  $('selected-operation').hidden = direct;
  $('details-title').textContent = text(direct ? 'generator' : 'detailsTitle');
  $('details-description').textContent = text(direct ? 'generatorDescription' : 'detailsDescription');
  setOperation(direct ? selectedOperation : route.split('/')[1]);
  const preparation = detailContext === 'q/screen' ? text('rejected') : (!direct && selectedOperation === 'rescue') ? text('backup') : '';
  renderInstructionText($('preparation-note'), preparation);
  $('preparation-note').hidden = !preparation;
}
// Authored text markup (never HTML): {A > B} is a LEO / Windows menu path, drawn like a menu bar;
// `x` is something to type or recognise (login, file, value), drawn as a key cap.
function menuPath(text) {
  const menu = document.createElement('span');
  menu.className = 'menu';
  text.split(' > ').forEach((item, index) => {
    if (index) {
      const sep = document.createElement('span');
      sep.className = 'menu-sep';
      const arrow = document.createElement('span'); arrow.setAttribute('aria-hidden', 'true'); arrow.textContent = '▶';
      const spoken = document.createElement('span'); spoken.className = 'sr-only'; spoken.textContent = ' → ';
      sep.append(arrow, spoken);
      menu.append(sep, document.createElement('wbr'));   // long paths may wrap after an arrow
    }
    const label = document.createElement('span'); label.className = 'menu-item'; label.textContent = item;
    menu.append(label);
  });
  return menu;
}
function renderInstructionText(element, content) {
  element.replaceChildren(...String(content ?? '').split(/(`[^`]+`|\{[^}]+\})/g).filter(Boolean).map((part) => {
    if (part.startsWith('`') && part.endsWith('`')) {
      const key = document.createElement('kbd');
      key.className = 'key';
      key.textContent = part.slice(1, -1);
      return key;
    }
    if (part.startsWith('{') && part.endsWith('}')) return menuPath(part.slice(1, -1));
    return document.createTextNode(part);
  }));
}
function renderList(element, steps) {
  element.replaceChildren(...steps.map((value) => {
    const item = document.createElement('li');
    const content = document.createElement('span');
    renderInstructionText(content, value);
    item.append(content);
    return item;
  }));
}
function renderResult() {
  const operation = operationText(result.operation, language);
  $('key-code').textContent = result.code;
  $('code-validity').textContent = validityText(result.date, language);
  $('result-operation').textContent = operation.title;
  $('result-serial').textContent = result.serial;
  $('result-date').textContent = displayDate(result.date, language);
  $('result-duration').textContent = String(result.days);
  $('result-duration-row').hidden = result.days === 0;
  renderInstructionText($('result-note'), operation.note);
  $('code-label').textContent = operation.title;
  $('result-note').classList.toggle('caution', ['stage', 'dongle'].includes(result.operation));
  renderList($('operation-steps'), operation.steps);
  $('result-server').hidden = !operation.server;
  $('result-server').textContent = localized(serverStarts);
  $('copy-status').textContent = '';
}
function renderInfo(key) {
  const info = GUIDANCE[key];
  $('info-title').textContent = localized(info.title);
  renderInstructionText($('info-description'), localized(info.description));
  renderInstructionText($('info-note'), localized(info.note));
  renderList($('info-steps'), info.steps.map(localized));
  $('info-server').hidden = !info.server;
  $('info-server').textContent = localized(serverStarts);
  $('info-action').textContent = localized(info.action);
  $('info-action').dataset.destination = info.next;
}
function show(next, focus = true) {
  if (next === 'code' && !result) {
    navigate(detailsRoute, { replace: true });
    return;
  }
  if (next !== 'code' && next !== 'language') invalidate();
  if (next.startsWith('d/') && route.startsWith('q/')) detailContext = route;
  if (next === 'generator') detailContext = '';
  route = next;
  renderTranslations();
  for (const id of ['language', 'question', 'details', 'result', 'info']) $(`${id}-screen`).hidden = true;
  const isLanguage = route === 'language';
  $('workbench').hidden = isLanguage;
  $('change-language').hidden = isLanguage;
  let heading;
  if (isLanguage) {
    $('language-screen').hidden = false;
    document.documentElement.lang = 'en';
    document.querySelector(`input[name="language"][value="${language}"]`).checked = true;
    updateLanguageButton();
    heading = 'language-title';
  } else {
    const [kind, key] = route.split('/');
    const direct = route === 'generator' || (route === 'code' && detailsRoute === 'generator');
    const step = kind === 'd' || route === 'generator' ? 2 : route === 'code' ? 3 : 1;
    renderProgress(step, direct, kind === 'i');
    if (kind === 'q') { renderQuestion(key); $('question-screen').hidden = false; heading = 'question-title'; }
    if (kind === 'd' || direct && route !== 'code') { clearErrors(); renderDetails(direct); $('details-screen').hidden = false; heading = 'details-title'; }
    if (route === 'code') { renderResult(); $('result-screen').hidden = false; heading = 'result-heading'; }
    if (kind === 'i') { renderInfo(key); $('info-screen').hidden = false; heading = 'info-title'; }
  }
  if (focus && heading) {
    $(heading).focus({ preventScroll: true });
    window.scrollTo({ top: 0, behavior: 'instant' });
  }
}
function updateLanguageButton() {
  const chosen = document.querySelector('input[name="language"]:checked').value;
  $('language-continue').replaceChildren(document.createTextNode(t('continue', chosen) + ' '));
  const arrow = document.createElement('span'); arrow.textContent = '→'; arrow.setAttribute('aria-hidden', 'true');
  $('language-continue').append(arrow);
  $('language-continue').lang = chosen;
}
$('language-form').addEventListener('change', updateLanguageButton);
$('language-form').addEventListener('submit', (event) => {
  event.preventDefault();
  language = document.querySelector('input[name="language"]:checked').value;
  navigate(languageReturn, { replace: history.state?.parent !== 'language' && history.state?.depth > 0 });
});
$('change-language').addEventListener('click', () => { languageReturn = route; navigate('language'); });
$('switch-mode').addEventListener('click', () => navigate($('switch-mode').dataset.destination));
$('new-task').addEventListener('click', () => navigate('q/task'));
$('change-task').addEventListener('click', () => navigate('q/task'));
$('info-action').addEventListener('click', () => navigate($('info-action').dataset.destination));
$('edit-details').addEventListener('click', () => navigate(detailsRoute));
$('back').addEventListener('click', () => {
  if (history.state?.leo && history.state.depth > 0) history.back();
  else {
    const [kind, key] = route.split('/');
    const parent = kind === 'q' ? QUESTIONS[key].parent : kind === 'i' ? GUIDANCE[key].parent : 'q/task';
    navigate(parent || 'language', { replace: true });
  }
});
document.querySelector('.brand').addEventListener('click', (event) => { event.preventDefault(); navigate(route === 'language' ? 'language' : 'q/task'); });
document.querySelector('.skip-link').addEventListener('click', (event) => { event.preventDefault(); $('main').focus(); });
$('question-form').addEventListener('change', () => {
  const key = route.split('/')[1];
  const value = document.querySelector('input[name="answer"]:checked')?.value;
  if (key === 'task' && answers.task !== value) {
    for (const name of Object.keys(answers)) delete answers[name];
  }
  answers[key] = value;
  $('question-error').hidden = true;
  document.querySelectorAll('[name="answer"]').forEach((input) => input.removeAttribute('aria-invalid'));
});
$('question-form').addEventListener('submit', (event) => {
  event.preventDefault();
  const question = QUESTIONS[route.split('/')[1]];
  const choice = question.choices.find((item) => item.id === document.querySelector('input[name="answer"]:checked')?.value);
  if (!choice) {
    $('question-error').textContent = text('selectAnswer');
    $('question-error').hidden = false;
    const first = document.querySelector('input[name="answer"]');
    first.setAttribute('aria-invalid', 'true'); first.focus();
    return;
  }
  navigate(choice.next);
});

function formatSerialInput(event) {
  if (event.isComposing) return;
  const input = $('serial');
  if (!/^[0-9]{3,4}$/.test(input.value)) return;
  const start = input.selectionStart; const end = input.selectionEnd; const direction = input.selectionDirection;
  input.value = `${input.value.slice(0, 2)}-${input.value.slice(2)}`;
  input.setSelectionRange(start + (start > 2 ? 1 : 0), end + (end > 2 ? 1 : 0), direction);
}
$('serial').addEventListener('input', formatSerialInput);
$('serial').addEventListener('compositionend', formatSerialInput);
$('calculator').addEventListener('input', () => { clearErrors(); invalidate(); });
$('operation').addEventListener('change', () => setOperation($('operation').value));
$('use-today').addEventListener('click', () => { $('date').value = localDateString(); clearErrors(); invalidate(); announce(text('dateSet')); });
function showError(field, message) {
  // The guided view presents a selected operation instead of a dropdown.
  // Operation validation failures only occur in the direct generator.
  $(`${field}-error`).textContent = message;
  $(`${field}-error`).hidden = false;
  $(field).setAttribute('aria-invalid', 'true'); $(field).focus(); announce(message);
}
$('calculator').addEventListener('submit', (event) => {
  event.preventDefault(); clearErrors(); invalidate();
  if (!$('operation').value) { showError('operation', language === 'fr' ? 'Choisissez une fenêtre LEO.' : 'Select a LEO screen.'); return; }
  const suffix = $('serial').value.replace(/^ +| +$/g, '');
  if (!/^[0-9]{2}-[0-9]{2}$/.test(suffix)) { showError('serial', text('serialError')); return; }
  try {
    result = calculateKeyCode({ operation: $('operation').value, serial: `LEO 430-${suffix}`, date: $('date').value, duration: $('duration').value });
    navigate('code');
    announce(`Key Code ${result.code}. ${validityText(result.date, language)}`);
    $('key-code').focus({ preventScroll: true });
  } catch (error) {
    showError(error instanceof InputError ? error.field : 'operation', error instanceof InputError ? errorText(error, language) : text('calculationError'));
  }
});
$('copy-code').addEventListener('click', async () => {
  if (!result) return;
  const snapshot = result; const attempt = ++copyAttempt;
  try {
    await navigator.clipboard.writeText(snapshot.code);
    if (result !== snapshot || attempt !== copyAttempt || route !== 'code') return;
    $('copy-code').textContent = text('copied'); $('copy-status').textContent = text('copySuccess');
  } catch {
    if (result !== snapshot || attempt !== copyAttempt || route !== 'code') return;
    $('key-code').focus();
    const range = document.createRange(); range.selectNodeContents($('key-code'));
    const selection = window.getSelection(); selection.removeAllRanges(); selection.addRange(range);
    $('copy-status').textContent = text('copyFallback');
  }
});
$('calculator').addEventListener('reset', (event) => {
  event.preventDefault();
  for (const field of ['serial', 'date', 'duration']) $(field).value = '';
  clearErrors(); invalidate(); announce(text('cleared'));
  if (selectedOperation) $('serial').focus(); else $('operation').focus();
});
window.addEventListener('popstate', () => show(readLocation()));
window.addEventListener('hashchange', () => {
  const next = readLocation();
  if (next !== route) show(next);
});
window.addEventListener('pageshow', (event) => {
  if (!event.persisted) return;
  invalidate();
  if (route === 'code') navigate(detailsRoute, { replace: true }); else show(route, false);
});
const initial = readLocation();
history.replaceState({ leo: true, depth: 0, parent: 'language' }, '', `#${language}/${initial}`);
show(initial, false);
$('load-message').hidden = true;
