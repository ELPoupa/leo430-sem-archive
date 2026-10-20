[Home](../../README.md) › [Programs](README.md) › RemCon32

# RemCon32: serial remote control

> **In short:** lets another computer drive the SEM by sending **text commands over RS-232**. Each command maps onto a
> server parameter or command. It is a licensed option (RS232 Remote Control).

```mermaid
flowchart LR
    PC(["Remote computer<br/>or modem"]) -- "RS-232 text command" --> R["remcon32.exe<br/>parses the command"]
    R -- "parameter / command" --> SRV["LEO server"]
    SRV -- "reply" --> R
    R --> PC
```
All 98 commands: [remcon32-commands.csv](remcon32-commands.csv).

---

## Technical reference

*Full detail for maintenance and further reverse engineering: function names, addresses, parameters, sources. Inferred points are marked \*?\*.*

`remcon32.exe` V1.16 (2001-06-08), LEO Electron Microscopy Ltd (originator: Champ Gohil). Win32 MFC.

### What it does
Lets a remote PC control the SEM over RS232 (optionally through a modem). It's a terminal window
(`CCommCtrl`, `CServerComms`, `CProtocolManager`) that:
- opens COM1–COM4; 300–9600 baud, data bits, stop bits, parity (none/odd/even), flow control (none, Xon/Xoff, RTS, Xon/RTS),
  echo, "open port and minimise on startup";
- parses incoming text commands and maps each onto a LEO parameter or command of the SEM server
  (`LEO_D_EXECUTE`, `PM_EXECUTE_COMMAND`, `LEO_D_GET_COMMAND` window messages to LEOSERV);
- can log a session, transmit a text file of commands, and run in **Local Mode** (type commands locally to test sequences);
- multiple instances allowed (V02.04), and it can auto-start when a user logs on to the SEM UI.

The help file ([`../help/REMCON32/REMCON32.txt`](../help/REMCON32/REMCON32.txt)) says the RS232 protocol itself was
"published by LEO under the OpenX policy" — that document is **not on the disk**. The command table below is
reconstructed from the binary.

### Command table (98 entries, decoded from the binary)
Full list: [`remcon32-commands.csv`](remcon32-commands.csv) (command text, LEO parameter, argument spec, handler kind).

| Kind | Commands |
|---|---|
| Queries (`XXX?`) | `VER?` version · `MAG?` · `FOC?` (WD) · `STG?` stage position · `C95?` · `IST?` stage type · `RAT?` scan rate · `AST?` `AFO?` `AGA?` auto-function status · `PIX?` pixel size · `REC?` photo status · `PHN?` photo number · `INT?` display channels · `DET?` detector · `VAC?` vacuum status · `VPS?` VP mode · `EHT?` `GUN?` actual kV · `PRB?` SCM/probe current · `ALS?` airlock · `RUA?` `RUO?` · `APR?` aperture · `STI?` stigmation · `ALN?` aperture align |
| Generic access | `SVAL name value` / `GVAL name` (any analogue value) · `SST name state` / `GST name` (any state) |
| Set parameters | `MAG` · `FOCS` (WD) · `EHT` (manual kV) · `FIL` (filament current) · `PROB` (probe current) · `BRGT` · `CRST` · `RATE` · `BBLK` (beam blank) · `EDX` (ext. scan control) · `ABGT` `ACST` (auto video) · `SPOT` · `LPR` (line scan) · `CTRB` `BEAM` (beam shift) · `STIG` `STIM` · `GALN` (gun align) · `GTLT` (gun tilt) · `GSHF` (gun shift) · `AALN` (aperture align) · `APER` · `SCM` · `VPTP` (VP target) · `ISRC` (HRRU source) · `DET` · `BLSH` (backlash) |
| Stage | `STG x y z t r m` (move) · `C95 …` (Cartesian 95 stage, 6 args) · `ISTG` (init) |
| Annotation / user | `ANXY` `IANN` `CANN` (annotation) · `SUA` `CUA` `DUA` · `CUO` `DUO` |
| Commands | `ABO` abort auto · `FREZ` freeze toggle · `ASTG` autostig · `CAF` / `FAF` coarse/fine autofocus · `AGAS` / `AGAP` coarse/fine auto align · `NORM` normal mode · `EMIS` emission mode · `DISP` · `FREC` `SREC` take photo · `LINT` `FINT` `FAVE` `CTAV` line/frame integration, frame/continuous average · `PXNR` · `BMON` beam on · `AGR` · `CCVO` column-chamber valve · `AIRL` airlock · `VPON` go to VP · `MAC` run macro · `DOC` |
| Errors | `ERR` · `CERR` (clear error) · `CSOF` |

Argument spec column = (number of tokens, mode) as passed to the registration routine at 0x0041B1C9;
handler kinds: 0x0041B0A5 query, 0x0041B134 query with custom handler, 0x0041B1C9 set/generic, 0x0041B25E execute, 0x0041B2ED set.

### Request syntax (from the parser at 0x0041B705 / 0x0041B7F1)
- One command per line, **fewer than 80 characters**.
- An optional leading **`$`** is stripped (so `$CSOF` = `CSOF`).
- The command name ends at the first `+`, `-` or digit; if no space separates them, one is inserted (`MAG1000` → `MAG 1000`).
- The line is **upper-cased** (commands are case-insensitive); 3-letter names are padded with a space to 4 characters, and the
  first 4 characters select the command (`MAG?`, `STG?`, `FAF`, `MAG 1000`…).
- Arguments are separated by **space, comma, tab or newline**; numeric arguments accept `+-0123456789.eEfF`.

Examples (by the syntax above): `MAG 1000` · `FOCS 0.0085` · `STG?` · `STG 10 20 15 0 0 0` · `$FAF` · `SVAL AP_WD 0.01`.

**Still to verify on the live machine:** reply framing and error format (`ERR`/`CERR` handle the error state), terminator
expected on input (CR, LF or both).

---
[← Programs](README.md) · [Home](../../README.md)
