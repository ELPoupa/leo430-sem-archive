import { administratorLogin, stageLogin } from './accounts.js';
import { restartComputer, backup } from './instructions.js';

// The guide chooses a route, never a serial, date or duration.
// Menu names stay in the language used by the original LEO software.
// Text markup (rendered by app.js): {A > B} = a LEO / Windows menu path, `x` = a key, login, file or value to type.
export const QUESTIONS = {
  task: {
    title: ['What is the problem?', 'Quel est le problème ?'],
    description: ['Pick what you see on the microscope PC.', 'Choisissez ce que vous voyez sur le PC du microscope.'],
    choices: [
      { id: 'restore', title: ['Serial number message at start-up', 'Message de numéro de série au démarrage'], description: ['Dongle, database or DATA.VAC disagree. Typical after restoring a disk image.', 'Dongle, base de données ou DATA.VAC ne concordent pas. Typique après la restauration d’une image disque.'], next: 'i/factory' },
      { id: 'unreadable', title: ['Dongle missing or not read', 'Dongle absent ou illisible'], description: ['“Dongle not found”, “Error reading dongle”, “DK2 Driver not Installed”, or no dongle at all.', '« Dongle not found », « Error reading dongle », « DK2 Driver not Installed », ou pas de dongle.'], next: 'q/dongle' },
      { id: 'options', title: ['Options greyed out, or no reaction', 'Options grisées, ou aucune réaction'], description: ['Buttons stay grey, or do nothing on the microscope.', 'Des boutons restent grisés, ou n’agissent pas sur le microscope.'], next: 'q/symptom' },
      { id: 'code', title: ['A LEO window asks for a Key Code', 'Une fenêtre LEO demande un Key Code'], description: ['Rescue SN, Write Dongle, temporary calibration or licences, Stage Administrator.', 'Rescue SN, Write Dongle, étalonnage ou licences temporaires, Stage Administrator.'], next: 'q/screen' }
    ]
  },
  screen: {
    parent: 'q/task',
    title: ['Which window asks for the code?', 'Quelle fenêtre demande le code ?'],
    description: ['Each window has its own code for the same serial and date.', 'Chaque fenêtre a son propre code pour le même numéro et la même date.'],
    choices: [
      { id: 'rescue', title: ['Rescue Serial Number', 'Rescue Serial Number'], description: ['{LEO Administrator > Service > Rescue SN…}', '{LEO Administrator > Service > Rescue SN…}'], next: 'd/rescue' },
      { id: 'calibration', title: ['Temporary Calibration', 'Temporary Calibration'], description: ['{LEO Administrator > Users > Edit .. > Temporary Calibration Privilege}', '{LEO Administrator > Users > Edit .. > Temporary Calibration Privilege}'], next: 'd/calibration' },
      { id: 'licences', title: ['All Licences (Temporary)', 'All Licences (Temporary)'], description: ['{LEO Administrator > Licences .. > All Licences (Temporary)}', '{LEO Administrator > Licences .. > All Licences (Temporary)}'], next: 'd/licences' },
      { id: 'dongle', title: ['Write Dongle', 'Write Dongle'], description: ['{LEO Administrator > Service > Write Dongle…}: writes a new serial into the dongle.', '{LEO Administrator > Service > Write Dongle…} : écrit un nouveau numéro dans le dongle.'], next: 'd/dongle' },
      { id: 'stage', title: ['Stage Administrator', 'Stage Administrator'], description: ['{Edit > Enter KeyCode}. No effect on a LEO 430: use Development instead.', '{Edit > Enter KeyCode}. Sans effet sur un LEO 430 : utilisez Development.'], next: 'i/stage-development' }
    ]
  },
  dongle: {
    parent: 'q/task',
    title: ['Is a dongle fitted?', 'Un dongle est-il branché ?'],
    description: ['The DESkey dongle is a small plug on the printer port (LPT1) at the back of the PC; a printer cable may sit behind it.', 'Le dongle DESkey est une petite prise sur le port imprimante (LPT1) à l’arrière du PC ; un câble d’imprimante peut être branché derrière.'],
    choices: [
      { id: 'present', title: ['Yes, it is fitted', 'Oui, il est branché'], description: ['LEO-32 cannot find or read it.', 'LEO-32 ne le trouve pas ou ne le lit pas.'], next: 'i/dongle-read' },
      { id: 'absent', title: ['No dongle', 'Pas de dongle'], description: ['Lost or broken. LEO-32 can skip the check.', 'Perdu ou en panne. LEO-32 peut ignorer la vérification.'], next: 'i/no-dongle' }
    ]
  },
  symptom: {
    parent: 'q/task',
    title: ['Grey, or no effect?', 'Grisé, ou sans effet ?'],
    description: ['Grey: LEO-32 switched it off. Clickable but nothing happens: the command does not get through.', 'Grisé : LEO-32 l’a désactivé. Cliquable mais sans effet : la commande ne passe pas.'],
    choices: [
      { id: 'grey', title: ['Greyed out', 'Grisé'], description: ['The button or menu item cannot be clicked.', 'Le bouton ou l’élément de menu n’est pas cliquable.'], next: 'q/options' },
      { id: 'noeffect', title: ['Clickable, but nothing happens', 'Cliquable, mais rien ne se passe'], description: ['For example {Pump}, {Beam On} or a stage move.', 'Par exemple {Pump}, {Beam On} ou un déplacement de platine.'], next: 'i/no-response' }
    ]
  },
  options: {
    parent: 'q/symptom',
    title: ['Do the three serial numbers match?', 'Les trois numéros de série sont-ils identiques ?'],
    description: [administratorLogin[0] + ' Then open {Service > Serial Numbers…}: dongle, database and DATA.VAC side by side.', administratorLogin[1] + ' Puis ouvrez {Service > Serial Numbers…} : dongle, base de données et DATA.VAC côte à côte.'],
    choices: [
      { id: 'matching', title: ['All three match', 'Les trois sont identiques'], description: ['The licence check passes.', 'La vérification des licences passe.'], next: 'i/options' },
      { id: 'different', title: ['They differ', 'Ils diffèrent'], description: ['All licences stay off until they agree.', 'Toutes les licences restent désactivées tant qu’ils diffèrent.'], next: 'i/factory' },
      { id: 'unreadable', title: ['No dongle number', 'Pas de numéro de dongle'], description: ['The dongle is missing or cannot be read.', 'Le dongle est absent ou illisible.'], next: 'q/dongle' }
    ]
  }
};

const verify = ['Check {Service > Serial Numbers…}: the same serial three times.', 'Vérifiez {Service > Serial Numbers…} : trois fois le même numéro.'];
const restoreNote = ['Only the serial changes: calibration and licences stay those of the restored disk image.', 'Seul le numéro change : étalonnage et licences restent ceux de l’image disque restaurée.'];
const omittedMessage = ['LEO-32 now shows “The Dongle check has been omitted. This should only occur during Factory Testing.”: expected with this setting.', 'LEO-32 affiche alors « The Dongle check has been omitted. This should only occur during Factory Testing. » : normal avec ce réglage.'];
export const GUIDANCE = {
  factory: {
    parent: 'q/task',
    title: ['Give the PC the dongle’s serial', 'Donner au PC le numéro du dongle'],
    description: ['Licences only switch on when dongle, database and DATA.VAC carry the same serial. The PC side is set to match the dongle. No Key Code needed.', 'Les licences ne s’activent que si dongle, base de données et DATA.VAC portent le même numéro. On aligne le PC sur le dongle. Aucun Key Code nécessaire.'],
    server: true,
    steps: [backup, administratorLogin, ['Open {Service > Serial Numbers…} and note the dongle serial.', 'Ouvrez {Service > Serial Numbers…} et notez le numéro du dongle.'], ['Open {Factory > Serial Number…}, type its two pairs (`56` `78` for LEO 430-56-78), leave {Omit Dongle Check} unticked, {OK}.', 'Ouvrez {Factory > Serial Number…}, saisissez les deux paires (`56` `78` pour LEO 430-56-78), laissez {Omit Dongle Check} décoché, {OK}.'], restartComputer, verify],
    note: restoreNote, next: 'q/task', action: ['Start again', 'Recommencer']
  },
  'dongle-read': {
    parent: 'q/dongle',
    title: ['Get the dongle read again', 'Faire relire le dongle'],
    description: ['A Key Code cannot help: the fault is the key, the port or the driver. Until it is fixed, all licensed options stay off.', 'Un Key Code n’y peut rien : le défaut vient de la clé, du port ou du pilote. D’ici là, toutes les options sous licence restent désactivées.'],
    steps: [['Push the dongle firmly onto LPT1. If a printer is plugged into it, try once without.', 'Enfoncez bien le dongle sur LPT1. Si une imprimante y est branchée, essayez une fois sans.'], ['In the BIOS, the parallel port must be enabled at address `378`. USB-to-parallel adapters do not work.', 'Dans le BIOS, le port parallèle doit être activé à l’adresse `378`. Les adaptateurs USB-parallèle ne fonctionnent pas.'], ['“DK2 Driver not Installed”: reinstall `C:\\WINDOWS\\SYSTEM\\DK2WN95.386` from LEO’s software distribution.', '« DK2 Driver not Installed » : réinstallez `C:\\WINDOWS\\SYSTEM\\DK2WN95.386` depuis la distribution du logiciel LEO.'], restartComputer, ['Check that {Service > Serial Numbers…} in LEO Administrator now shows a dongle serial.', 'Vérifiez que {Service > Serial Numbers…} dans LEO Administrator affiche un numéro de dongle.']],
    note: ['Still not read with all this correct: the key itself may be faulty. Full checklist: the “Dongle not found or not read” guide.', 'Toujours illisible alors que tout est correct : la clé elle-même est peut-être en panne. Liste complète : le guide « Dongle not found or not read ».'], next: 'q/options', action: ['Compare the serial numbers', 'Comparer les numéros de série']
  },
  'no-dongle': {
    parent: 'q/dongle',
    title: ['Run LEO-32 without a dongle', 'Utiliser LEO-32 sans dongle'],
    description: ['{Omit Dongle Check} skips the dongle and loads the licences already on the PC. Database and DATA.VAC must still match. No Key Code needed.', '{Omit Dongle Check} ignore le dongle et charge les licences déjà présentes sur le PC. Base de données et DATA.VAC doivent quand même concorder. Aucun Key Code nécessaire.'],
    server: true,
    steps: [backup, administratorLogin, ['Open {Service > Serial Numbers…} and compare the database and DATA.VAC serials.', 'Ouvrez {Service > Serial Numbers…} et comparez les numéros de la base de données et de DATA.VAC.'], ['Open {Factory > Serial Number…}. If the two matched, leave the boxes as they are; if not, type the microscope’s own serial from its nameplate or service records.', 'Ouvrez {Factory > Serial Number…}. S’ils étaient identiques, ne touchez pas aux cases ; sinon, saisissez le numéro du microscope relevé sur sa plaque signalétique ou dans son dossier de maintenance.'], ['Tick {Omit Dongle Check}, {OK}.', 'Cochez {Omit Dongle Check}, {OK}.'], restartComputer, omittedMessage],
    note: ['Factory-test setting: it uses the licence list already on the PC and adds none. Office installations of LEO-32 have their own key check.', 'Réglage de test usine : il utilise la liste des licences déjà sur le PC et n’en ajoute aucune. Les installations LEO-32 de bureau ont leur propre vérification de clé.'], next: 'i/restore-dongle-check', action: ['Turn the check back on later', 'Réactiver la vérification plus tard']
  },
  'restore-dongle-check': {
    parent: 'q/dongle',
    title: ['Turn the dongle check back on', 'Réactiver la vérification du dongle'],
    description: ['Once the machine’s own dongle is fitted and read again.', 'Une fois le dongle du microscope de nouveau branché et lisible.'],
    server: true,
    steps: [backup, administratorLogin, ['Check that {Service > Serial Numbers…} shows the same serial three times. If not, fix that first (“Serial number message at start-up”).', 'Vérifiez que {Service > Serial Numbers…} affiche trois fois le même numéro. Sinon, corrigez d’abord cela (« Message de numéro de série au démarrage »).'], ['Open {Factory > Serial Number…}, leave the serial as it is, untick {Omit Dongle Check}, {OK}.', 'Ouvrez {Factory > Serial Number…}, ne touchez pas au numéro, décochez {Omit Dongle Check}, {OK}.'], restartComputer, ['The “Dongle check has been omitted” message is gone.', 'Le message « Dongle check has been omitted » a disparu.']],
    note: ['The dongle is checked again at every LEO-32 start.', 'Le dongle est de nouveau vérifié à chaque démarrage de LEO-32.'], next: 'q/task', action: ['Start again', 'Recommencer']
  },
  options: {
    parent: 'q/options',
    title: ['Check the licence list', 'Vérifier la liste des licences'],
    description: ['The serials match, so a grey option is either a mode rule or a licence missing from the list.', 'Les numéros concordent : une option grisée relève d’une règle de mode ou d’une licence absente de la liste.'],
    steps: [['Rule out a mode first: spot mode, split screen, a running auto function or a low user level grey out some commands.', 'Écartez d’abord un mode : mode spot, écran partagé, fonction automatique en cours ou niveau d’utilisateur faible grisent certaines commandes.'], administratorLogin, ['Open {Licences ..} and find the option.', 'Ouvrez {Licences ..} et cherchez l’option.'], ['Listed but off: click {Restore Licences}. It puts back the machine’s stored set, live at once.', 'Listée mais désactivée : cliquez sur {Restore Licences}. Le jeu enregistré du microscope revient, actif immédiatement.'], ['Still missing: it was never licensed on this machine. It needs a `.lic` file made for this serial, installed with {Install from disk ..}.', 'Toujours absente : elle n’a jamais été sous licence sur ce microscope. Il faut un fichier `.lic` établi pour ce numéro, installé avec {Install from disk ..}.']],
    note: ['Do not press {Clear All}: it also erases the stored set, and only a backup of leo_user.mdb brings it back.', 'N’appuyez pas sur {Clear All} : cela efface aussi le jeu enregistré, que seule une sauvegarde de leo_user.mdb permet de retrouver.'], next: 'q/options', action: ['Back to the serial check', 'Retour à la vérification des numéros']
  },
  'no-response': {
    parent: 'q/symptom',
    title: ['Find why the microscope does not react', 'Trouver pourquoi le microscope ne réagit pas'],
    description: ['Commands go from LEO-32 through the image processor board to the EHT unit or the stage / vacuum controller, each on its own serial link. A command with no effect stopped on the way, or an interlock holds it. No Key Code involved.', 'Les commandes partent de LEO-32, passent par la carte de traitement d’image et arrivent à l’unité EHT ou au contrôleur platine / vide, chacun sur sa propre liaison série. Une commande sans effet s’est arrêtée en route, ou une sécurité la retient. Aucun Key Code n’intervient.'],
    steps: [
      ['Read LEO-32’s message list (also saved in `C:\\Program Files\\LEO Electron Microscopy Ltd\\LEO-32\\LOG\\leolog.leo`). 408 or 477: the EHT unit does not answer. 437 “Vacuum Command error” or 443 “Stage Command Error”: the stage / vacuum controller does not answer. 433–436: EHT fault, or high voltage blocked by the vacuum.', 'Lisez la liste des messages de LEO-32 (aussi enregistrée dans `C:\\Program Files\\LEO Electron Microscopy Ltd\\LEO-32\\LOG\\leolog.leo`). 408 ou 477 : l’unité EHT ne répond pas. 437 « Vacuum Command error » ou 443 « Stage Command Error » : le contrôleur platine / vide ne répond pas. 433 à 436 : défaut EHT, ou haute tension bloquée par le vide.'],
      ['A unit does not answer: check it is switched on and its cable to the image processor board is plugged in at both ends.', 'Une unité ne répond pas : vérifiez qu’elle est sous tension et que son câble vers la carte de traitement d’image est branché aux deux bouts.'],
      ['Only one action waits: an interlock. The beam waits for the vacuum (“Waiting Vac”), venting is refused with a reason, the stage will not move before it is initialised.', 'Une seule action attend : une sécurité. Le faisceau attend le vide (« Waiting Vac »), la remise à l’air est refusée avec un motif, la platine ne bouge pas avant d’être initialisée.'],
      ['Nothing reacts and no message: in `regedit`, the key `HKEY_LOCAL_MACHINE\\Software\\LEO Electron Microscopy Ltd\\LEO-32` must hold `Gsp = 1`, `ScanGen = 0`, `Machine = 2` and `M600 = 6`. Otherwise LEO-32 does not start its controller modules: the interface runs but drives nothing.', 'Rien ne réagit et aucun message : dans `regedit`, la clé `HKEY_LOCAL_MACHINE\\Software\\LEO Electron Microscopy Ltd\\LEO-32` doit contenir `Gsp = 1`, `ScanGen = 0`, `Machine = 2` et `M600 = 6`. Sinon LEO-32 ne démarre pas ses modules de contrôle : l’interface tourne mais ne pilote rien.'],
      restartComputer
    ],
    note: ['“SEM Initialisation Program Not Running” or “Failed to load … RLM” at start-up: the board itself did not start (see Start-up problems in the troubleshooting guide).', '« SEM Initialisation Program Not Running » ou « Failed to load … RLM » au démarrage : la carte elle-même n’a pas démarré (voir les problèmes de démarrage dans le guide de dépannage).'], next: 'q/task', action: ['Start again', 'Recommencer']
  },
  'stage-development': {
    parent: 'q/screen', title: ['Edit stages with Development', 'Modifier les platines avec Development'],
    description: ['On a LEO 430, Stage Administrator blocks stage editing for Service and Factory, even with a valid code. Development edits stages without one, so no Key Code is needed.', 'Sur un LEO 430, Stage Administrator bloque la modification des platines pour Service et Factory, même avec un code valide. Development les modifie sans code : aucun Key Code nécessaire.'],
    steps: [stageLogin, ['Pick the stage definition to edit. The predefined stage types are locked.', 'Choisissez la définition de platine à modifier. Les types prédéfinis sont verrouillés.']],
    note: ['Stage definitions set the axes, limits and step sizes. Note the current values before changing them.', 'Les définitions de platine fixent les axes, les limites et les pas. Notez les valeurs actuelles avant de les modifier.'], next: 'q/task', action: ['Start again', 'Recommencer']
  }
};

// Older links continue to the current procedure.
export const ROUTE_REDIRECTS = Object.freeze({
  'i/dongle': 'q/dongle',
  'q/restore': 'i/factory',
  'q/menus': 'i/factory',
  'q/stage': 'i/stage-development',
  'i/stage-blocked': 'i/stage-development',
  'i/stage-account': 'i/stage-development',
  'q/services': 'q/screen',
  'q/no-dongle-serials': 'i/no-dongle',
  'i/no-dongle-mismatch': 'i/no-dongle',
  'i/no-dongle-access': 'i/no-dongle',
  'i/find-dongle': 'q/dongle',
  'i/access': 'q/options'
});
