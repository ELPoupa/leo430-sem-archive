[Home](../../README.md) › [Programs](README.md) › Service accounts

# Service accounts: Service, Factory, Development

> **In short:** LEO-32 ships with three LEO staff logins. **In the microscope software itself they are identical.**
> They only differ in the **service tools** (LEO Administrator, Stage Administrator): **Development > Factory >
> Service**.

```mermaid
flowchart LR
    S["Service<br/>service log, serial numbers,<br/>Rescue SN, Write Dongle"] --> F["Factory<br/>+ Factory menu: set serial by hand<br/>+ Set All / Clear All licences"]
    F --> D["Development<br/>+ edit the LEO accounts<br/>+ unrestricted stage editing"]
```

| Can do | Service | Factory | Development |
|---|---|---|---|
| Operate the microscope with full privileges | yes | yes | yes |
| LEO Administrator, service log, serial numbers | yes | yes | yes |
| Rescue Serial Number / Write Dongle (with the daily Key Code) | yes | yes | yes |
| Factory menu: set the serial by hand, Omit Dongle Check | no | yes | yes |
| Licence Administrator: Set All / Clear All | no | yes | yes |
| Edit the Service / Factory / Development profiles | no | no | yes |
| Stage Administrator: edit stages without a Key Code | no | no | yes |

Passwords and how each check was found are in the technical reference below.

---

## Technical reference

*Full detail for maintenance and further reverse engineering: function names, addresses, parameters, sources. Inferred points are marked \*?\*.*

LEO-32 has three built-in LEO staff accounts (plus `System` and `Guest`). This note compares what each one can do,
from the code that checks the user name and from their rows in `leo_user.mdb`.

Sources: `admin32.exe` (LEO Administrator, VB6 native code), `StageAdmin.exe`, `LeoPath.exe`, `LEOSERV.exe`,
the `Users` table of `leo_user.mdb`, and LEO's own help (`docs/help/ADMIN32/ADMIN32.txt`).

### In short
**Development > Factory > Service.** LEO's help gives the same order ("Access Hierarchy": Development, Factory,
Service, Administrator, User).

- In the **SEM itself** (sem.exe / LEOSERV), the three accounts are **identical**: same user level, same privileges.
- The differences are all in the **service tools** (LEO Administrator, Stage Administrator), which check the user name:
  - **Service:** the Service menu (service log, serial numbers, Rescue SN, Write Dongle).
  - **Factory:** adds the Factory menu and the "Set All / Clear All licences" buttons.
  - **Development:** adds editing of the LEO accounts themselves and permanent stage editing in Stage Administrator.

### Passwords
Passwords are case-insensitive.

| Account | Password in `leo_user.mdb` (as shipped) | Built-in password (used only if the `Users` table is empty) |
|---|---|---|
| `Development` | `stansted` | `phil` |
| `Factory` | `keele` | `champagne` |
| `Service` | `petrol` | `rustat` |
| `System` | (not listed here) | blank |

The built-in list is created when the `users` recordset opens with no rows (both BOF and EOF set): admin32
`FUN_00477530` (`ReDim` at `0x004776A5`), StageAdmin at `0x00443DA4`. Same four name/password pairs in both programs.

### Comparison
| What | Service | Factory | Development | Where it is decided |
|---|---|---|---|---|
| SEM user level (`UserLevelMax`) | 1 (service controls) | 1 | 1 | `Users` table |
| SEM privileges: calibrate, supervisor, gun align, gun off, stage init, unlock icons, change user level/directories | all | all | all | `Users` table |
| Log on to LEO Administrator | yes | yes | yes | needs `Supervisor` = True |
| Service menu → **Log…** (service incident reports): create/edit | yes | yes | yes | flag `0x0049B066`, set at log-on for these 3 names (`FUN_00450CA0`); other users get the reports read-only |
| Service menu → **Serial Numbers…** (shows dongle / database / Data.Vac serials) | yes | yes | yes | not name-checked |
| Service menu → **Rescue SN…**, **Write Dongle…** | yes | yes | yes | not name-checked; locked by the daily Key Code ([deskey.md](deskey.md)) |
| **Factory** menu → Serial Number… (Factory Settings: set the serial by hand, *Omit Dongle Check*; see [deskey.md](deskey.md)), Reset Reports | **no** (menu hidden) | yes | yes | `FUN_00450CA0`: menu `doFactory` (form slot `0x364`) hidden unless the name is FACTORY or DEVELOPMENT |
| Licence Administrator: **Set All** / **Clear All** buttons | no (greyed) | yes | yes | `FUN_0047EF30`: `btnClearAll` (`0x300`), `btnSetAll` (`0x304`) enabled only for FACTORY / DEVELOPMENT |
| Edit or delete the **Service, Factory, Development** profiles | no | no | **yes** | `FUN_0044DB10`: for the profile selected in the user list, these three are editable only when logged on as DEVELOPMENT |
| Stage Administrator: stage editing (other machine types) | for N days with a Key Code (mode 5, "Stage Edit Expire") | same | **always** | StageAdmin `0x00442ABC`: DEVELOPMENT skips the expiry check |
| Stage Administrator on a 400-series machine (machine type 0, 1, 2 = LEO 430, 4, 10; skipped when `keys.system` = `TEM`) | no editing, even with a Key Code ("Editing is not available for LEO 400 Series") | no | **yes** | StageAdmin `Main.Form_Load` `0x00441D70`: the 400-series block (`0x00442991`) clears the key-code edit right; the DEVELOPMENT test (`0x00442ABC`) comes after it and sets the edit flag `0x00456078` anyway |
| LeoPath (folder repair) sets the user folder to | `user\service` | `user\default` | `user\default` | `LeoPath.exe` |

The same `Users` row values (as shipped) for all three: `UserLevelChange`, `ChangeUserDirectory`, `ChangeImageDirectory`,
`CalibrateEnable`, `Supervisor`, `ButtonPriviledge`, `GunOffPriviledge`, `GunAlign`, `StageInit` = True;
`UserLevelMax` = 1; `ParameterAccessClass` = Default; `TempCalEnable` = False. Only the directories differ.

#### Other accounts, for reference
- `System`: user level 2, no calibration, supervisor. It is treated as a LEO account in the user list checks
  (`FUN_0044DCD0`, `FUN_0044DE70`, `FUN_0044E120` test for FACTORY / DEVELOPMENT / SERVICE / SYSTEM). In its profile
  editor one frame (`Frame4`, slot `0x32C`) is disabled (`FUN_0045CB00`) *?*.
- `Guest`: user level 2, no privileges, blank default password.
- LEOSERV only uses the names when no user database is configured (`DB Path` empty): `FUN_00416190` then accepts
  SYSTEM and SERVICE with full privileges and GUEST with level 2.

#### What Stage Administrator edits
From its help (`docs/help/STAGEADMIN/STAGEADMIN.txt`): stage type definitions kept in the LEO-32 database, used by the
stage module. Per stage: name, Cartesian or eucentric, side tilt, motor power when idle, SnapBack, centre of rotation.
Per axis: initialisation order, Protected Z priority, step size and the other axis data. It can create and delete
stage types, add or remove axes, and pick which one is the "Custom Stage". Users with the Calibration privilege can
inspect and select stage types, and can edit for a number of days with a Key Code. Development has unrestricted access
but may not edit the predefined stage types.

### How these checks were found
- Every literal `DEVELOPMENT` / `FACTORY` / `SERVICE` / `SYSTEM` in the SEM binaries (only admin32, StageAdmin,
  LeoPath and LEOSERV have them; sem.exe and the controller modules have none) was followed to its code.
- VB6 form controls are reached through a per-form slot table: slot = `0x2F8 + 4 × control index`. The control
  index is at `+0x0C` of each 0x28-byte control record (name pointer at `+0x20`). Checked on three forms (Rescue SN,
  Grant All Licences, main window) before reading the menu code.


---
[← Programs](README.md) · [Home](../../README.md)
