[Home](../../README.md) › [Programs](README.md) › sem_init

# sem_init: board and DSP start-up (Windows side)

> **In short:** a small program started automatically when Windows starts. It loads the graphics firmware onto the
> board, downloads the **DSP program** (`DPRAM.IMG`), runs the register script `SEM_INIT.DAT`, then stays running:
> the LEO server refuses to start without it.

```mermaid
flowchart LR
    A["Initialise TIGA<br/>red light"] --> B["Initialise DSP<br/>amber"]
    B --> C["Load DPRAM.IMG<br/>into dual-port RAM"]
    C --> D["Run SEM_INIT.DAT<br/>register script"]
    D --> E(["Waiting for LEO<br/>green light"])
    E -. "status over DDE" .-> S["LEO server"]
```
Without the board, sem_init crashes and the server then reports "SEM Initialisation Program Not Running".

---

## Technical reference

*Full detail for maintenance and further reverse engineering: function names, addresses, parameters, sources. Inferred points are marked \*?\*.*

`C:\WINDOWS\sem_init.exe`, Win16, "Windows SEM Initialization Program (c) LEO Electron Microscopy Ltd, 1996".
Started at logon by `HKLM\...\Run "SEM init"`. Must keep running: LEOSERV checks for it.

### Sequence (from its strings and imports)
| Step | Window text / icon | What happens |
|---|---|---|
| 1 | red traffic light, "Initialise TIGA..." | TIGASEM `INITIALISETIGA`; loads the TIGA graphics manager `C:\TIGA\TIGAGM.OUT` and the LEO graphics engine `C:\WINDOWS\SYSTEM\TIGAWIN.RLM` onto the TMS34020 |
| 2 | amber, "Initialise DSP..." | DSP reset/initialisation through TIGASEM |
| 3 | "Load DPRAM..." → "Loaded DPRAM..." | allocates global memory for the **DSP program** and downloads `C:\WINDOWS\DPRAM.IMG` into the board's dual-port RAM |
| 4 | — | executes `C:\WINDOWS\SEM_INIT.DAT` (DSP register initialisation script, below) |
| 5 | green traffic light, "Waiting for LEO..." | idle; serves status to LEOSERV |

#### Interfaces
- **DDE server** `SEM_INIT_SERVER`, topic `SEM_INIT_STATUS`, item `STATUS` = `STARTING` · `DOWNLOADING` · `DOWNLOADED_OK` · `DOWNLOAD_FAILED` · `BUSY`.
- Registered window messages: `IS_SEM_INIT_READY`, `SEM_INIT_CLOSE`.
- Imports: TIGASEM, DDEML, KERNEL, USER, GDI.

#### Error messages
"SEM Init is already running" · "Not enough Global Memory for DSP Program" · "Graphics Mamager Load Failed: TIGAGM.OUT could not be found…" ·
"Graphics Engine Load Failed: TIGAWIN.RLM could not be found…" · "Unknown Error: The SEM Hardware Failed to Initialise…" ·
"Could Not Initialise DDE" · "Too many clocks or timers running".

#### Behaviour without the board (observed in the VMs)
TIGACD isn't installed (no board), so TIGASEM's driver entry table is null. sem_init then gets a general protection fault in
**TIGASEM.DLL at 0001:00E8** (`JMP FAR ES:[BX+18h]` with ES=0). It does not check whether the TIGA driver is present first.
LEOSERV then reports "SEM Initialisation Program Not Running".

### `SEM_INIT.DAT` — DSP register script
Text file, Leica Cambridge 1992, product **S300**, author A.M. Nightingale, revisions 1–A.
Syntax (from its header):
- `;` comment
- `AWAITDSP` — wait for the DSP command to complete
- `<addr>[W|B], <data>` — write a byte (default) or word (`W` suffix on the data) to dual-port RAM longword address `addr` (hex; see DPADD.H)

Registers set, in order (addresses 0x400 upward): COMMANDREG, STATUS, WHENTODO, BUFFERFLAG0/1, TRANSSTARTADD, TRANSNUMBER,
TRANSCTRL, SCANRATE, DETA/DETB (detector mixing, 4 × 3 bytes each), KA/KB, ALPHAA/B, BETAA/B, MAXFA/B, WINCTRL, INADDOFF, TINT,
DiffCtrl, DISPSYNCRATE, NUMRASTERS, STARTPIXEL, **NUMPIXELS = 0x400 (1024)**, BLANKPIXELS, STARTLINE, **NUMLINES = 0x300 (768)**,
BLANKLINES, NRMODE, TLD, TPO, TWIN, TNR, TIN, DETPAIRRATE, STEREORATE, DUALMAGRATE, SCANORIG, SCANAMP, MAXPIXELS, MAXLINES,
SLOWLINERATE, DIGILINERATE, FASTLINEAMP, SLOWLINEAMP, LINEGPOREG, FASTBLANKINC, FREEZE, STEREOMODE, EMISSIONCTRL, GUN1, MICRO1,
GUN2, MICRO2, EMAG, HISTCTRL, HISTEN, PEAKHI, AFRAMPSTART, AFRAMPSTEP, AFLINESPERINC, RASORIG, SPOTX, SPOTY, SPOTRATE, TRANSFORM,
GSPINTEN, AFCONTROL, AFINCSPERCOVAR, SCANEVLINE, INCOFFSCALE, EoStoreRatio. Contains 6 `AWAITDSP`.

This register map is the DSP side of the scan generator and video processing (scan raster, rates, detectors, autofocus,
histogram, stereo/dual-mag, freeze, gun/microshift).

### `DPRAM.IMG` — DSP program image
Text, one `addr/value;` line per byte (hex), 16 968 bytes in non-contiguous blocks between 0x0000 and 0xFFFF.
Downloaded by step 3 ("Not enough Global Memory for **DSP Program**"). Disassembling it
identified it: it is **Analog Devices ADSP-21xx** code (24-bit words, MSB first, padded to 4 bytes; PM word = byte address / 4). Full disassembly: [../dsp/README.md](../dsp/README.md).

---
[← Programs](README.md) · [Home](../../README.md)
