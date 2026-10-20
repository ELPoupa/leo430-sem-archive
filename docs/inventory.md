[Home](../README.md) › Inventory

# Inventory: what is on the control PC

> **In short:** a Windows 98 SE PC with the LEO-32 suite in `C:\Program Files\LEO Electron Microscopy Ltd\LEO-32`,
> the machine data in `C:\LEO`, the board firmware in `C:\TIGA`, DOS board tools in `C:\GSPUTILS`, and a few drivers
> in `C:\WINDOWS`. Every SEM-related file is archived untouched in a private archive (not distributed with this public copy; see [Need files to recover a machine?](../README.md#need-files-to-recover-a-machine)).

| Folder on the PC | What it holds | Explained in |
|---|---|---|
| `C:\GSPUTILS`, `C:\TIGA` | DOS board tools, GSP firmware modules | [Board tools](components/board-tools.md), [Firmware](firmware/README.md) |
| `C:\WINDOWS` | `sem_init.exe`, `SEM_INIT.DAT`, `DPRAM.IMG`, `tigasem.dll`, dongle driver | [sem_init](components/sem_init.md), [DESkey](components/deskey.md) |
| `C:\Program Files\…\LEO-32` | programs, server, modules, controls, database | [Programs](components/README.md) |
| `C:\LEO` | **machine configuration and calibration** (`data.vac`, `config.LEO`, `access.leo`, `L500.ini`) | [File formats](file-formats.md) |
| `C:\Backups` | dated backups made by Parachute | [Utilities](components/utilities.md) |

---

## Technical reference

*Full detail for maintenance and further reverse engineering: function names, addresses, parameters, sources. Inferred points are marked \*?\*.*

Source: pristine image of the control PC of a **LEO 430** SEM.
All files listed here are archived untouched in a private archive, not in this public copy. The whole disk (8200 files) is in
[`manifest/files.csv`](../manifest/files.csv).

### System
| Item | Value |
|---|---|
| OS | Windows 98 SE 4.10.2222, FAT32, single partition labelled `LEO` |
| Original disk | 20 GB IDE |
| Original board | Intel 430TX + PIIX4 (from `BOOTLOG.TXT`), S3 Trio64V+ PCI display |
| LEO software | **LEO-32 V02.04 (11-Jun-2001)**, LEO Electron Microscopy Ltd, shared by the LEO 400/1400/1500 series |
| LEO setup files | dated 1999-09-16 (LEO-32 installation set) |
| Windows user profile | one local profile (`WINDOWS\Profiles\<name>`) |

### Components

#### 1. DOS-side image processor initialisation (runs from `AUTOEXEC.BAT`)
`AUTOEXEC.BAT` → `CALL LEOEXEC.BAT C:` which:
- sets `TIGA=-mC:\TIGA -lC:\TIGA` and adds `C:\GSPUTILS;C:\TIGA` to `PATH`
- `MCS2GSP C:\GSPUTILS\MMLCA.MCS` — loads the memory-module LCA (FPGA) configuration ("mcs2gsp V2.00 14-Nov-96")
- `GSPHALT` — halts the TMS34020 GSP
- `EPROM OFF` — disables the board EPROM (base address 0xEFF00000)
- `TIGACD` — TIGA Communications Driver 2.20 (Texas Instruments), installs on interrupt 0x7F
- `TIGALNK -lx` — TIGA Linking Loader 3.3, loads the graphics extensions
- on failure shows the "SEM INITIALIZATION FAILURE" box and waits for a key

| Folder | Files | Role |
|---|---|---|
| `C:\GSPUTILS` | `mcs2gsp.exe`, `mmlca.mcs`, `GSPHALT.EXE`, `EPROM.EXE` | Stereoscan image processor board utilities |
| `C:\TIGA` | `tigacd.exe`, `TIGALNK.EXE`, `TIGACFG.EXE`, `TIGA.CFG` ("LEO 400 Series 16 Colour Board 1024x768 60Hz"), `TIGA.CL`, `TIGAGM.OUT`, `*.rlm`, `g*.4x0` | TI TIGA runtime + graphics extensions for the TMS34020 board |

#### 2. Windows-side SEM initialisation
| File | Format | Role |
|---|---|---|
| `C:\WINDOWS\sem_init.exe` | NE (Win16) | "SEM Initialisation" (window "Initialise TIGA..."). Must be running for the LEO server. |
| `C:\WINDOWS\sem_init.dat` | text | "SEM Initialisation – DSP downloader data file", Leica Cambridge 1992, product **S300**, author A.M. Nightingale. Initial DSP/board register values. |
| `C:\WINDOWS\dpram.img` | text | Dual-port RAM image (address/value pairs, `n/XX;`) |
| `C:\WINDOWS\SYSTEM\tigasem.dll` | NE | Win16 TIGA interface for SEM |
| `C:\WINDOWS\SYSTEM\TIGAWIN.RLM` | TIGA module | Windows-side TIGA extension |

#### 3. LEO-32 application suite (`C:\Program Files\LEO Electron Microscopy Ltd\LEO-32`)
| File | Fmt | Version | Role |
|---|---|---|---|
| `sem.exe` | PE | 1.0.0.1 (2001-06-11) | **SEM User Interface** (main operator UI) |
| `leoserv.exe` | PE | 1.0.0.1 | **LEO SRV-32 server**, "Leo-32 Server V03.00 Jan 2000", talks to the microscope electronics |
| `Srv32.dll` / `srv16.dll` | PE / NE | | 32-bit and 16-bit server interface (thunk to 16-bit parts) |
| `leom.exe` | PE | 1.0.0.1 | LEOM MFC application |
| `leopm.dll` | PE | 1.0.0.1 | LEOPM DLL |
| `leoimg.dll` | PE | 1.0.0.1 | LEOIMG image DLL |
| `leodde32.dll` | PE | 1.0.0.5 | DDE interface |
| `leolut.exe` | PE | | Look-up table (LUT) tool |
| `leomouse.exe` | PE | | LEO mouse handling |
| `remcon32.exe` | PE | 1.16 | **RemCon32**, remote control over serial (command set incl. `STG?`, `$CSOF`) |
| `gunserv.exe`, `Gun Monitor.exe` | PE | | Electron gun server/monitor |
| `wobble.exe` | PE | | Wobbler |
| `admin32.exe` | PE | | LEO Administrator (configuration) |
| `StageAdmin.exe` | PE | | Stage administrator (service) |
| `Cal98.exe` | PE | | Calibration ("Cal 98") |
| `l500cal.exe` | PE | | LEO 1500 Calibration Wizard |
| `checkdb.exe` | PE | | Upgrade user database |
| `ImgArc.exe` | PE | | FTP remote archiving (uses Mabry FTP32/GetHst32 OCX) |
| `LeoPath.exe` | PE | | Path helper |
| `hrru.exe`, `speed.exe` | NE | | HRRU (photo recording unit) config / film speed |
| `convert.exe`, `view.exe` | NE | | Convert / view `DATA.VAC` |
| `leosync.exe` | NE | | LEO Sync |
| `m007 m070 m100 m200 m300 m400 m500 m600 m700 m800 .dll` | NE | | Win16 modules (per-subsystem drivers, loaded by the server) |
| `s400eng/fre/ger.dll` | NE | | LEO 400 string resources (EN/FR/DE) |
| `IMPROC\Improc.ocx` + `mil*.dll` | PE | MIL 4.00 | Image processing control on **Matrox Imaging Library 4.0** |
| `SYSTEM\*.ocx` | PE | | LEO ActiveX controls: DialgMgr, ImgMgr, LEOAnalg, leoapi, LEOBtn, LEOCombo, LEOIG, LEONavgt, LEOStat, LEOTkb, LUTMgr, NavMgr, ParamMgr, StgMgr, StgNav, TabMgr |
| `Parachute\*` | PE | 2.01 | Parachute archive/restore utility |
| `cmdialog.vbx`, `SPIN.VBX`, `THREED.VBX` | NE | | VB3 controls |
| `DISTRIB\*` | data | | Default macro/menu/toolbar sets (`default.MLL`, `Standard.MLC`, `default.utb`, ...) |
| `help\english\*` | help | | Online help + release notes |
| `readme.txt` | text | | Version history V02.03–V02.04 |

#### 4. Machine data and calibration (`C:\LEO`)
`config.LEO`, `access.leo`, `L500.ini`, `data.vac` / `DATA1.VAC` / `default.vac` / `data.old`
(machine parameter database, viewable with `view.exe`), `filament data.dat`, `gamma2.dat`, `hrru.spd`,
`loc38*.dat/.2at`, `loc3a*.dat/.2at`, `loi38*.dat`, `loi3a*.dat` (lookup/calibration tables).
**These hold the machine's calibration — keep them safe.**

#### 5. Configuration files
- `WINDOWS\SYSTEM\LEO.INI` — `[passthru]` hcnt/vcnt; `[HPAPP]` gauge/pressure monitor (Port=2, Comms Timeout, OrsayBoardTimeout, gain/offset)
- `WINDOWS\LEO.INI` — `[passthru]` only
- `C:\LEO\L500.ini` — user max EHT, filament, Protected Z, VP target/limit, EBBU
- `SYSTEM.INI`, `WIN.INI`, `CONTROL.INI`, `PROTOCOL.INI`, `CMOUSECC.INI`, `ODBCINST.INI`, `MOUSEDRV.INI`, `oeminfo.ini`
- Registry: full hives archived (`WINDOWS\SYSTEM.DAT`, `WINDOWS\USER.DAT`, `WINDOWS\Profiles\<name>\USER.DAT`, `SYSTEM.1ST`); text export in `registry/`.

#### 6. Drivers and runtime
- `WINDOWS\SYSTEM\DK2WN95.386` (VxD, loaded at boot) + `DK2WIN32.DLL` (32-bit API): DES "DK2 DESkey" parallel-port key driver, part of the original system. LEOSERV reads the key to enable the licensed options: [components/deskey.md](components/deskey.md).
- Logitech MouseWare (`LMOUSE.VXD`, `lmouse.drv`): the original PC used a Logitech mouse.
- Microsoft runtimes the SEM binaries need (VB5/VB6, MFC 4.0/4.2, MSVCRT, common controls, STDOLE) are also archived; see [`imports.csv`](imports.csv).

#### 7. Shortcuts
Start Menu `LEO-32`: SEM User Interface, RemCon32, LEO Administrator, FTP Remote Archiving, Parachute (+help), Release Notes.
Start Menu `LEO-32 Service`: Cal 98, Calibration Wizard, Convert DATA.VAC, HRRU Configuration, HRRU Film Speed Configuration, LEO Sync, Upgrade User Database, View DATA.VAC.
Desktop: SEM User Interface, RemCon32.

#### Branding
`C:\logo.sys` (LEO boot screen), `WINDOWS\logow.sys` (shutdown screen), `WINDOWS\SYSTEM\oemlogo.bmp`.

### Missing pieces
Referenced by SEM binaries but **not present anywhere on the disk**: `HCSTG.VBX` (hot/cold stage control, used by m500 only when that option is fitted; it is "Not Fitted" in the archived installation) and `7CMDIALOG.VBX`.

### Not archived (listed in the manifest only)
User images (`Images MEB`, `Temp\*`, user folders on the desktop), Symantec, printer drivers, Windows itself.
SEM TIFF images embed LEO metadata; see the image format notes (to do).

---
[Home](../README.md)
