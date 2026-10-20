import { restartComputer, backup } from './instructions.js';
import { administratorLogin, stageLogin, protectedProfileLogin } from './accounts.js';
import { OPERATIONS, parseMachineDate } from './key-code.js';

export const localize = (pair, language) => pair[language === 'fr' ? 1 : 0];

// Text markup (rendered by app.js): {A > B} = a LEO / Windows menu path, `x` = a key, login, file or value to type.
const UI = {
  skipContent: ['Skip to content', 'Aller au contenu'],
  utility: ['Key Recovery Helper', 'Key Recovery Helper'],
  generator: ['Code generator', 'Générateur de code'],
  skipGenerator: ['Straight to the code generator', 'Aller directement au générateur'],
  useGuide: ['Use the guide', 'Utiliser le guide'],
  back: ['Back', 'Retour'], continue: ['Continue', 'Continuer'],
  detailsTitle: ['Enter the machine details', 'Renseignez le microscope'],
  detailsDescription: ['Copy these from the microscope PC.', 'Recopiez-les depuis le PC du microscope.'],
  generatorDescription: ['Pick the window that asks for the code, then fill in its details.', 'Choisissez la fenêtre qui demande le code, puis remplissez les champs.'],
  leoScreen: ['LEO window', 'Fenêtre LEO'],
  selectedScreen: ['LEO window', 'Fenêtre LEO'],
  change: ['Change', 'Modifier'],
  accessRequirements: ['Before you start', 'Avant de commencer'],
  serialFormat: ['Four digits: 5678 for LEO 430-56-78. Keep leading zeros.', 'Quatre chiffres : 5678 pour LEO 430-56-78. Gardez les zéros initiaux.'],
  pcDate: ['Date on the microscope PC', 'Date du PC du microscope'],
  today: ['Set to today', 'Mettre à aujourd’hui'],
  dateHint: ['By that PC’s clock, even if it is wrong.', 'Selon l’horloge de ce PC, même si elle est fausse.'],
  duration: ['Duration in days', 'Durée en jours'],
  durationHint: ['The same number of days as in the LEO window.', 'Le même nombre de jours que dans la fenêtre LEO.'],
  generate: ['Get the code', 'Obtenir le code'],
  clear: ['Clear', 'Effacer'],
  resultTitle: ['Your Key Code', 'Votre Key Code'],
  copy: ['Copy', 'Copier'], copied: ['Copied', 'Copié'],
  copySuccess: ['Key Code copied to clipboard.', 'Key Code copié dans le presse-papiers.'],
  copyFallback: ['Clipboard unavailable. The code is selected; use your device’s Copy command.', 'Presse-papiers indisponible. Le code est sélectionné ; utilisez la commande Copier de votre appareil.'],
  serial: ['Serial', 'Numéro'],
  editDetails: ['Edit', 'Modifier'],
  nextSteps: ['On the microscope PC', 'Sur le PC du microscope'],
  midnight: ['The code changes at midnight on the microscope PC.', 'Le code change à minuit sur le PC du microscope.'],
  anotherTask: ['Start again', 'Recommencer'],
  privacy: ['Runs in your browser. Nothing is sent or saved.', 'Fonctionne dans votre navigateur. Rien n’est envoyé ni enregistré.'],
  documentation: ['Documentation ↗', 'Documentation ↗'],
  repo: ['GitHub', 'GitHub'],
  disclaimer: ['Independent preservation project, not affiliated with LEO or ZEISS. Use at your own risk.', 'Projet indépendant de préservation, sans lien avec LEO ni ZEISS. À utiliser à vos risques.'],
  legal: ['Legal notice', 'Mentions légales'],
  selectAnswer: ['Choose an answer to continue.', 'Choisissez une réponse pour continuer.'],
  serialError: ['Enter the four digits of the serial, leading zeros included (5678 for LEO 430-56-78).', 'Saisissez les quatre chiffres du numéro, zéros initiaux compris (5678 pour LEO 430-56-78).'],
  dateSet: ['Date filled from this device. Check that it matches the microscope PC.', 'Date renseignée à partir de cet appareil. Vérifiez qu’elle correspond à celle du PC du microscope.'],
  cleared: ['Machine details cleared.', 'Informations du microscope effacées.'],
  changed: ['Details changed. Get a new code.', 'Informations modifiées. Obtenez un nouveau code.'],
  calculationError: ['The code could not be calculated. Reload the page and try again.', 'Le calcul a échoué. Rechargez la page et réessayez.'],
  languageLabel: ['Change language', 'Changer de langue'],
  backup,
  rejected: ['A refused code means the window, serial, PC date or number of days differs: each one changes the code.', 'Un code refusé signifie que la fenêtre, le numéro, la date du PC ou le nombre de jours diffère : chacun change le code.'],
};
export const t = (key, language) => localize(UI[key], language);

// All operation presentation text — titles, menu paths, labels, hints, steps
// and notes — English then French. key-code.js holds only the mode and the
// duration flag; everything shown about a screen lives here. A French entry
// that omits a field (title, path) falls back to English, which keeps the LEO
// window and menu names in the software's own language.
const englishOperations = {
  rescue: {
    title: 'Rescue Serial Number',
    path: '{LEO Administrator > Service > Rescue SN…}',
    label: 'Dongle serial number',
    hint: 'The last four digits of “Dongle Serial Number” in the Rescue SN window.',
    server: true,
    steps: [administratorLogin[0], 'Open {Service > Rescue SN…}, check that “Dongle Serial Number” is the serial shown here, type the code. “Serial Numbers rescued” confirms it.', restartComputer[0], 'Check {Service > Serial Numbers…}: the same serial three times.'],
    note: 'Only the serial changes: calibration and licences stay those of the restored disk image.'
  },
  calibration: {
    title: 'Temporary Calibration',
    path: '{LEO Administrator > Users > Edit .. > Temporary Calibration Privilege > Action}',
    label: 'Database serial number',
    hint: 'The database serial, in {Service > Serial Numbers…}. After a disk restore it can differ from the dongle’s.',
    steps: [administratorLogin[0], protectedProfileLogin[0], 'Select the user, {Users > Edit ..}, then {Action} under Temporary Calibration Privilege. Enter the same number of days and the code.'],
    note: 'The edited user gets the Calibration privilege for that many days.'
  },
  licences: {
    title: 'All Licences (Temporary)',
    path: '{LEO Administrator > Licences .. > All Licences (Temporary)}',
    label: 'Database serial number',
    hint: 'The database serial, in {Service > Serial Numbers…}. After a disk restore it can differ from the dongle’s.',
    steps: [administratorLogin[0], 'Open {Licences ..}, click {All Licences (Temporary)}, enter the same number of days and the code.', restartComputer[0]],
    note: 'From the next LEO-32 start, every licence of this machine type is on for that many days. The stored licence list is not changed.'
  },
  dongle: {
    title: 'Write Dongle',
    path: '{LEO Administrator > Service > Write Dongle…}',
    label: 'Serial number to write',
    hint: 'The last four digits of the serial the dongle should hold.',
    server: true,
    steps: [administratorLogin[0], 'Open {Service > Write Dongle…}, type the two pairs (`56` `78` for LEO 430-56-78), then the code. “Dongle Written” confirms it.'],
    note: 'This writes a new serial into the dongle itself. For a mismatch after a disk restore, change the PC side instead: {Factory > Serial Number…} or {Rescue SN…}.'
  },
  stage: {
    title: 'Stage Administrator',
    path: '{Stage Administrator > Edit > Enter KeyCode}',
    label: 'Dongle serial number',
    hint: 'The last four digits of the dongle serial.',
    steps: [stageLogin[0], 'Development edits stages without a code. Use {Edit > Enter KeyCode} only on another machine type, with the same number of days.'],
    note: 'LEO 430: this code does not override the 400-series block on stage editing for Service and Factory.'
  }
};
const frenchOperations = {
  rescue: {
    label: 'Numéro de série du dongle',
    hint: 'Les quatre derniers chiffres de « Dongle Serial Number » dans la fenêtre Rescue SN.',
    steps: [administratorLogin[1], 'Ouvrez {Service > Rescue SN…}, vérifiez que « Dongle Serial Number » est le numéro affiché ici, saisissez le code. « Serial Numbers rescued » le confirme.', restartComputer[1], 'Vérifiez {Service > Serial Numbers…} : trois fois le même numéro.'],
    note: 'Seul le numéro change : étalonnage et licences restent ceux de l’image disque restaurée.'
  },
  calibration: {
    label: 'Numéro de série de la base de données',
    hint: 'Le numéro de la base de données, dans {Service > Serial Numbers…}. Après une restauration, il peut différer de celui du dongle.',
    steps: [administratorLogin[1], protectedProfileLogin[1], 'Sélectionnez l’utilisateur, {Users > Edit ..}, puis {Action} sous Temporary Calibration Privilege. Saisissez le même nombre de jours et le code.'],
    note: 'L’utilisateur modifié obtient le privilège Calibration pour ce nombre de jours.'
  },
  licences: {
    label: 'Numéro de série de la base de données',
    hint: 'Le numéro de la base de données, dans {Service > Serial Numbers…}. Après une restauration, il peut différer de celui du dongle.',
    steps: [administratorLogin[1], 'Ouvrez {Licences ..}, cliquez sur {All Licences (Temporary)}, saisissez le même nombre de jours et le code.', restartComputer[1]],
    note: 'Au prochain démarrage de LEO-32, toutes les licences de ce type de microscope sont actives pour ce nombre de jours. La liste enregistrée n’est pas modifiée.'
  },
  dongle: {
    label: 'Numéro de série à écrire',
    hint: 'Les quatre derniers chiffres du numéro que le dongle doit contenir.',
    steps: [administratorLogin[1], 'Ouvrez {Service > Write Dongle…}, saisissez les deux paires (`56` `78` pour LEO 430-56-78), puis le code. « Dongle Written » le confirme.'],
    note: 'Cela écrit un nouveau numéro dans le dongle lui-même. Pour une discordance après une restauration, modifiez plutôt le côté PC : {Factory > Serial Number…} ou {Rescue SN…}.'
  },
  stage: {
    label: 'Numéro de série du dongle',
    hint: 'Les quatre derniers chiffres du numéro du dongle.',
    steps: [stageLogin[1], 'Development modifie les platines sans code. N’utilisez {Edit > Enter KeyCode} que sur un autre type de microscope, avec le même nombre de jours.'],
    note: 'LEO 430 : ce code ne lève pas le blocage de la série 400 sur la modification des platines pour Service et Factory.'
  }
};
export function operationText(id, language) {
  const base = { ...OPERATIONS[id], ...englishOperations[id] };
  const operation = language === 'fr' ? { ...base, ...frenchOperations[id] } : base;
  operation.account = localize(id === 'stage' ? stageLogin : administratorLogin, language);
  if (id === 'calibration') operation.account += ' ' + localize(protectedProfileLogin, language);
  return operation;
}

const errorTranslations = {
  'Select a LEO screen.': 'Choisissez une fenêtre LEO.',
  'Enter the date shown on the microscope PC.': 'Saisissez la date affichée sur le PC du microscope.',
  'Enter a valid calendar date between years 0100 and 9999.': 'Saisissez une date valide, comprise entre les années 0100 et 9999.',
  'Enter a whole number of days from 1 to 32767, matching the LEO form.': 'Saisissez un nombre entier de jours entre 1 et 32767, identique à celui de la fenêtre LEO.',
  'These values exceed the original LEO routine’s integer range. Use a shorter duration.': 'Ces valeurs dépassent la plage de calcul de LEO. Réduisez la durée.',
  'This duration extends beyond the date range supported by LEO. Use fewer days.': 'Cette durée dépasse la plage de dates prise en charge par LEO. Réduisez le nombre de jours.'
};
export const errorText = (error, language) => language === 'fr' ? (errorTranslations[error.message] || t('calculationError', language)) : error.message;
export function displayDate(value, language) {
  const { year, month, day } = parseMachineDate(value);
  const months = language === 'fr' ? ['janv.', 'févr.', 'mars', 'avr.', 'mai', 'juin', 'juil.', 'août', 'sept.', 'oct.', 'nov.', 'déc.'] : ['Jan', 'Feb', 'Mar', 'Apr', 'May', 'Jun', 'Jul', 'Aug', 'Sep', 'Oct', 'Nov', 'Dec'];
  return `${String(day).padStart(2, '0')} ${months[month - 1]} ${String(year).padStart(4, '0')}`;
}
export const validityText = (date, language) => language === 'fr' ? `Valable le ${displayDate(date, language)}, selon l’horloge du PC du microscope.` : `Valid on ${displayDate(date, language)}, by the microscope PC’s clock.`;
