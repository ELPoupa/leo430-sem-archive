// Shipped LEO logins documented in docs/components/service-accounts.md.
// These are the populated user database's defaults, not the empty-table fallbacks.
// Text markup (rendered by app.js): {A > B} = a LEO / Windows menu path, `x` = a key, login, file or value to type.
const accounts = Object.freeze({
  factory: { username: 'Factory', password: 'keele' },
  development: { username: 'Development', password: 'stansted' }
});

// Where each program is started from on the microscope PC.
const programs = {
  administrator: ['{Start > Programs > LEO-32 > LEO Administrator}', '{Start > Programs > LEO-32 > LEO Administrator}'],
  stage: ['Stage Administrator, `C:\\Program Files\\LEO Electron Microscopy Ltd\\LEO-32\\StageAdmin.exe` (no Start menu entry),',
    'Stage Administrator, `C:\\Program Files\\LEO Electron Microscopy Ltd\\LEO-32\\StageAdmin.exe` (pas d’entrée dans le menu Démarrer),']
};

export function loginStep(program, account = 'factory') {
  const { username, password } = accounts[account];
  return [
    `Open ${programs[program][0]} and log in as \`${username}\` / \`${password}\`.`,
    `Ouvrez ${programs[program][1]} et connectez-vous avec \`${username}\` / \`${password}\`.`
  ];
}

// Logins used across the guide and operation instructions, built once here so
// help.js and i18n.js share one source instead of each calling loginStep.
export const administratorLogin = loginStep('administrator');
export const stageLogin = loginStep('stage', 'development');

const development = accounts.development;
export const protectedProfileLogin = [
  `To edit the Service, Factory or Development profile itself, log in as \`${development.username}\` / \`${development.password}\` instead.`,
  `Pour modifier le profil Service, Factory ou Development lui-même, connectez-vous plutôt avec \`${development.username}\` / \`${development.password}\`.`
];
