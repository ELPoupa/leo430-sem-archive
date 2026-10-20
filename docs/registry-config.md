[Home](../README.md) › Registry

# Registry settings

> **In short:** LEO-32 keeps its installation settings under `HKLM\Software\LEO Electron Microscopy Ltd\LEO-32`:
> version, paths, the machine type, which controller modules are enabled and how (`Gsp`, `EO`, `M100` … `M800`), the
> database location and user-interface preferences. Example values from a LEO 430 installation are listed below.

## Good to know for repair
- The values that change how the microscope starts are **`Machine`** (machine type, 2 = LEO 430), **`Gsp` /
  `ScanGen`** (which image hardware is fitted) and **`M600`** (where the machine configuration is read from; 6 =
  `C:\LEO\data.vac`). When copying an installation, keep these as they are.
- If `M600` is missing, LEOSERV uses 4, a mode whose configuration read never works (see
  [vacuum §6](subsystems/vacuum.md#6-machine-configuration-nvram--datavac)); if `Machine` is missing it uses 8
  (LEO 1530), which does not match a LEO 430.
- `VacCount` grows by one after every start where `data.vac` failed to load; it numbers the safety copies
  `C:\LEO\DATA<n>.VAC` ([LEO server](components/leoserv.md#good-to-know-for-repair)).

---

## Technical reference

*Full detail for maintenance and further reverse engineering: function names, addresses, parameters, sources. Inferred points are marked \*?\*.*

Source: `registry/REGFULL.REG` (exported from the untouched hives). The meanings of `Machine`, `Gsp`,
`ScanGen`, `ScanGenType`, `Ask`, `Trace`, `M100`…`M800` and `VacCount` come from the code that reads them (LEOSERV
`FUN_0046aef0`, `FUN_0046b220`, `FUN_0046b3d0`, `FUN_0046bee0`; m007 `UIF_INITIATE`, `INITIALISE_CONTROLLER`); the
others from their names and the LEO-32 release notes. Values marked *?* still need confirming.

### `HKLM\Software\LEO Electron Microscopy Ltd\LEO-32`
| Value | Data | Meaning |
|---|---|---|
| Release | `V02.04  11-Jun-2001` | installed LEO-32 version |
| Support Level | `6.0 SP2` | written by the installer; no program on the disk reads it |
| Main Directory | `C:\Program Files\LEO Electron Microscopy Ltd\LEO-32\` | program folder |
| DB Path | `...\LEO-32\SYSTEM\` | user/settings database folder |
| LeoPath | `C:\LEO\` | machine data and calibration folder |
| DB Version | `09.02` | database format version |
| Machine | 2 | **machine type** (default 8 if missing): same numbering as `SRV_Get_Machine_Type`, 2 = LEO 430 (list in [panels.md](components/panels.md)). LEOSERV also uses it to pick extra gun read-outs (`AP_EXTCURRENT`, `AP_ACTUALEXT` for the field-emission types 7, 8, 9, 19, 22, 23, 24) |
| Series Default / Install Default | "1" / "9" | written by the installer; no program on the disk reads them |
| Gsp | 1 | GSP image processor fitted → hardware mode 1: m007 sets `DP_GSP` = 1 (`UIF_INITIATE`) |
| EO | 1 | not read by LEOSERV; no reader found (only `m200.dll` and `leoimg.dll` hold a bare "EO" string, its use is not traced) *?* |
| M100…M800 | M200=1, M600=6, others 0 | passed at start-up to `SRV_Initialise_Controller(module, value)` (order 300, 600, 200, 400, 500, 700, 800, 100; defaults M200 = 1, M600 = 4, others 0). m007 hands the value only to the vacuum module: **`M600` = where the machine configuration lives** (6 = `C:\LEO\data.vac`, see [vacuum.md §6](subsystems/vacuum.md#6-machine-configuration-nvram--datavac)); the others are ignored by this version |
| ScanGen / ScanGenType | 0 / 0 | `ScanGen` ≠ 0 → hardware mode 2 (external scan generator: `DP_SCANGEN` = 1, `DP_GSP` = 0; it overrides `Gsp`); `ScanGenType` → `DP_SCANGEN_TYPE` |
| Frame Grabber | (missing = 0) | → `DP_FRAME_GRABBER` |
| IMPROC PRESENT / Install Improc Default | 1 / "1" | image processing (Matrox MIL) installed |
| CoolStage | "0" | LEO CoolStage not fitted |
| Pass Through Red/Green/Blue | 0x80 / 0x80 / 0x00 | live-image pass-through colour |
| VacCount | 1 | number in the name of LEOSERV's safety copy `C:\LEO\DATA<VacCount>.VAC`; +1 after every start where `data.vac` failed to load ([leoserv.md](components/leoserv.md#good-to-know-for-repair)) |
| DDE Access | 0 | DDE interface disabled |
| Ask / Trace | 0 / 0 | `Ask` ≠ 0: LEOSERV asks at start "Is The GSP/ScanGen Present?" and "Do You Wish To Perform Extended Tracing?" instead of reading `Gsp` / `ScanGen`; `Trace` ≠ 0: extended tracing (m007 passes it on as m300 `SEM_DEBUG`) |
| Launch / INF / Patch | 0 / 1 / "" | other flags |

#### Subkeys
- `Stage`: Motors=0xFFFFFFFF; X/Y/Z/T/R enabled, M disabled; step/backlash values X=0.05, Y=0.05, Z=0.0005, T=R=M=0.
- `EHT`: SE Supplies=1, Shutdown="".
- `Accounting`: last user name, logon/logoff stamps, Tiff/Print/Photo counters, Status.
- `Configuration`: File Number, Print Number, HRRU Number (running counters for file names), EHT Log Off (e.g. 1).
- `LogFile`: SIZE=0.

### `HKU\.DEFAULT\Software\LEO\SEM UIF` (UI settings)
- `General`: "LEO Version"="LEO-32  V02.04  11-Jun-2001".
- `StatusWindow`, `Settings`, `ToolBars`: global UI layout.
- Per-user subkeys (one per LEO user name, e.g. `SERVICE `): toolbar layout and `Current.STS-Summary` per LEO user account.
  (LEO users are the application's own accounts, separate from Windows logons.)

### Other SEM-related keys
- `HKLM\...\Run` → `"SEM init"="C:\WINDOWS\sem_init.exe"`.
- `HKLM\...\App Paths\{sem.exe, LEOserv.exe, admin32.exe}`.
- `HKLM\...\Uninstall\LEO32` → InstallShield uninstaller `DeIsL1.isu`.
- `HKLM\Software\CLASSES\*` → registrations of all LEO ActiveX controls (ApiCtrl, DialgMgr, ImgMgr, Improc,
  LEOAnalg, LEOButton, LEOCombo, LEOIG, LEONavgt, LEOStatic, LEOTkb, LUTMgr, NavMgr, ParamMgr, StgMgr, StgNav,
  TabMgr, Pchute2x, Mabry FTP) and the `SEMLUT` file type.
- `HKLM\System\CurrentControlSet\Services\VxD\DK2 Windows95 Driver` → StaticVxD DK2WN95.386, LPTPort=0x378.

---
[Home](../README.md)
