// LEO Administrator connects through ParamMgr, which starts LEOSERV.EXE itself when no server is running and waits
// for it (parammgr.ocx FUN_10008017 / FUN_10008310), so LEO-32 does not have to be started first.
export const serverStarts = [
  'No need to start LEO-32 first: LEO Administrator starts the LEO server itself, so the first change can take a minute.',
  'Inutile de lancer LEO-32 avant : LEO Administrator démarre lui-même le serveur LEO, la première modification peut donc prendre une minute.'
];

// One wording of the pre-change backup, shared by the guide steps (help.js)
// and the preparation note (i18n.js).
export const backup = [
  'Back up `C:\\LEO\\DATA.VAC` and `C:\\Program Files\\LEO Electron Microscopy Ltd\\LEO-32\\SYSTEM\\leo_user.mdb`.',
  'Sauvegardez `C:\\LEO\\DATA.VAC` et `C:\\Program Files\\LEO Electron Microscopy Ltd\\LEO-32\\SYSTEM\\leo_user.mdb`.'
];

// The serial and licences are checked when LEOSERV starts (docs/boot-chain.md);
// restarting Windows also reloads the DESkey driver.
export const restartComputer = [
  'Restart the PC ({Start > Shut Down… > Restart > OK}) and start {SEM User Interface}: serial and licences are checked when the LEO server starts.',
  'Redémarrez le PC ({Start > Shut Down… > Restart > OK}) et lancez {SEM User Interface} : numéro et licences sont vérifiés au démarrage du serveur LEO.'
];
