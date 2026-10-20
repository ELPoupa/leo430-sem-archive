[Home](../README.md) › Tools

# Tools

Every table, listing and dump in this repository was produced by a script in `tools/`, so the work can
be checked and repeated. Most are PowerShell (Windows PowerShell 5.1); run them from the repository root with
`powershell -ExecutionPolicy Bypass -File tools\<name>.ps1 …` (usage is in the first lines of each script).
External programs used: Ghidra (decompiler), MAME `unidasm` (x86-16, TMS34020 and ADSP-21xx disassembler), 7-Zip.

## Archive and inventory
| Script | Does |
|---|---|
| `collect-sem-files.ps1` | copies the SEM files listed in `sem-files.txt` from the extracted disk into `original/` |
| `make-manifest.ps1` | builds `manifest/files.csv` (every file with size, date, hash, version) |
| `filter-reg.ps1` | extracts the SEM-related keys from a registry export |
| `list-exports.ps1`, `list-imports.ps1` | exported functions and dependencies of every PE / NE binary |

## Programs (PC side)
| Script | Does |
|---|---|
| `ghidra/` | headless Ghidra decompilation of all binaries, and recovery of call arguments |
| `ghidra/entry-points.ps1`, `ghidra/AddFunctions.java`, `ghidra/redecompile.ps1` | find the functions Ghidra's analysis misses (incremental-link stubs, message-map handlers, class method tables, ActiveX methods) and re-decompile with them |
| `c-digest.ps1` | per-function digest of a decompiled 32-bit program (triggers, server calls, imports, texts) and its message-handler table |
| `c-annotate-dyn.ps1` | prints a decompiled function with run-time-loaded functions and registered window messages named |
| `mfc-dispmap.ps1` | ActiveX method / property → implementing code, from the MFC dispatch maps |
| `panel-params.ps1`, `panels-page.ps1` | which parameters each tab / dialog uses, and the "What is on each panel" page |
| `ne-annotate.ps1` | annotated disassembly of a 16-bit module (parameter names, strings, constants) |
| `module-digest.ps1` | per-function digest of an annotated module |
| `module-api-table.ps1` | per-export table (hardware calls, parameters) from a digest |
| `gen-module-notes.ps1` | the module note pages in `docs/components/modules/` |
| `build-parameter-usage.ps1` | `parameter-usage.csv`: which module uses each parameter |
| `m007-rules.ps1` | decodes the ≈300 availability rules of m007 into `data/m007-rules.csv` |
| `vb6-objects.ps1`, `vb-annotate.ps1` | forms / controls / handlers and annotated code of the Visual Basic programs |
| `vb3-pcode.ps1` (+ `vb3/opcodes.csv`, `vb3/<name>.names.csv`) | Visual Basic 3 p-code decompiler: procedures bound to control events, statements rebuilt from the stack code ([format](vb3/README.md)) |
| `vb3/classes.ps1` | property and event lists of the VB3 control classes (VBRUN300.DLL, CMDIALOG.VBX, SPIN.VBX) → `vb3/classes.csv` |
| `pe-resources.ps1`, `ne-resources.ps1` | menus and dialogs of 32-bit and 16-bit programs |
| `mfc-msgmaps.ps1` | which code handles each menu command and window message in an MFC program |
| `res-strings.ps1`, `ne-strings.ps1` | string tables |
| `dump-typelib.ps1` | programming interfaces of the ActiveX controls |
| `le-flatten.ps1` | flattens a Windows 9x VxD driver for disassembly |

## Board firmware and DSP
| Script | Does |
|---|---|
| `coff-symbols.ps1` | symbol maps of the GSP firmware modules |
| `disasm-gsp.ps1` | disassembly of every firmware module |
| `gsp-annotate.ps1` | names, strings and floating-point constants in a firmware listing |
| `gsp-string-xref.ps1` | which firmware function uses which string (serial commands) |
| `gsp-dsp-map.ps1` | GSP message codes → DSP commands |
| `annotate-dsp.ps1` | annotated DSP listings, register map and command table |

## Data files
| Script | Does |
|---|---|
| `vac-layout-from-disasm.ps1`, `vac-layout-from-viewer.ps1`, `map-vac-offsets.ps1` | the DATA.VAC field layout |
| `read-mdb.ps1` | dumps tables of the user database `leo_user.mdb` (32-bit PowerShell) |
| `read-macros.ps1` | prints LEO macro files as text |
| `rtf2txt.ps1`, `decompile-help.sh` | LEO's help files to text |

---
[Home](../README.md)
