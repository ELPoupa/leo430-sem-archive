[Home](../README.md) › Raw data

# Raw analysis data

These folders hold the machine-made output the readable pages are built on: disassembly, decompiled code, tables
extracted from the binaries. They are meant for looking things up and for further reverse engineering; the pages in
[How the microscope works](subsystems/README.md) and [Programs](components/README.md) explain what they mean.
The script that made each one is in `tools/` ([what each does](tools.md)).

## Code
| Folder | Contents | Made with |
|---|---|---|
| [`decompiled/`](decompiled) | Ghidra C decompilation of every SEM program and DLL (`<name>.c`) | Ghidra headless (`tools/ghidra/`) |
| [`modules-asm/`](modules-asm) | annotated disassembly of the 16-bit controller modules, srv16 and tigasem (parameter names, strings, constants resolved) | `ne-annotate.ps1` |
| [`modules-digest/`](modules-digest) | one section per function of those modules: parameters read / written, hardware calls, text | `module-digest.ps1` |
| [`modules-api/`](modules-api) | one table per module: every exported function with its hardware call and parameters | `module-api-table.ps1` |
| [`firmware/asm/`](firmware/asm) | TMS34020 disassembly of every GSP firmware module, labelled with its symbols | `disasm-gsp.ps1`, `gsp-annotate.ps1` |
| [`firmware/*.md`](firmware/README.md) | symbol map of each firmware module | `coff-symbols.ps1` |
| [`dsp/`](dsp/README.md) | DSP program listings (plain and annotated), register map, command tables | `annotate-dsp.ps1`, `gsp-dsp-map.ps1` |
| [`callargs/`](callargs) | constant arguments recovered at every parameter call | `tools/ghidra/ExportCallArgs.java` |
| [`programs-digest/`](programs-digest) | one section per function of the 32-bit programs: what triggers it (menu, window message, ActiveX method), server calls, texts, calls | `c-digest.ps1` |
| [`ui/*-handlers.csv`](ui) | every message-map entry with the function it runs and what it reaches | `c-digest.ps1` |
| [`ui/*-dispatch.csv`](ui) | every ActiveX method / property of a control with the code that implements it | `mfc-dispmap.ps1` |
| [`ui/*-classes.csv`](ui) | every MFC class with its virtual-method table | `ghidra/entry-points.ps1` |
| [`ui/*-panels.csv`](ui) | for each tab / dialog class, the parameters it uses (and, for dialgmgr, the licence it needs) | `panel-params.ps1` |

## Tables
| File | Contents |
|---|---|
| [`parameters.csv`](parameters.csv) | all 1013 parameters: type, index, mnemonic, display name |
| [`parameter-usage.csv`](parameter-usage.csv) | which module writes / reads each parameter |
| [`tigasem-api.csv`](tigasem-api.csv) | the 439 functions of the PC ⇄ board API |
| [`exports.csv`](exports.csv), [`imports.csv`](imports.csv) | exported functions and dependencies of every binary |
| [`command-codes.csv`](command-codes.csv) | command codes from LEO's error help |
| [`components/remcon32-commands.csv`](components/remcon32-commands.csv) | RemCon32's 98 commands |
| [`firmware/serial-commands.csv`](firmware/serial-commands.csv) | serial commands with the functions that send them |

## Data dumps
| File | Contents |
|---|---|
| [`data/DATA.VAC.listing.txt`](data/DATA.VAC.listing.txt), [`DEFAULT.VAC.listing.txt`](data/DEFAULT.VAC.listing.txt) | the configuration files as LEO's own viewer prints them |
| [`data/vac-layout-disasm.csv`](data/vac-layout-disasm.csv) | complete DATA.VAC field layout (205 fields) |
| [`data/leo_user-licences.txt`](data/leo_user-licences.txt), [`leo_user-stages.txt`](data/leo_user-stages.txt) | licence and stage tables of the user database |
| [`data/access-levels.csv`](data/access-levels.csv) | who sees which parameter (from `access.leo`) |
| [`data/m007-rules.csv`](data/m007-rules.csv) | the ≈300 command / state availability rules |
| [`data/pm-messages.txt`](data/pm-messages.txt) | the 247 registered window messages the programs share |
| [`data/macros/`](data/macros) | LEO's factory macros, decoded |

## User interface and help
| Folder | Contents |
|---|---|
| [`ui/`](ui) | menus, dialogs and message handlers of every program (`<name>-resources.txt`, `<name>-msgmaps.csv`) |
| [`vb6/`](vb6) | forms, controls and event handlers of the Visual Basic programs |
| [`vb3/`](vb3/README.md) | decompiled Visual Basic 3 tools (hrru, speed, leosync) and how the p-code format works |
| [`typelibs/`](typelibs/README.md) | programming interfaces of the ActiveX controls |
| [`strings/`](strings) | the English / French / German string tables |
| [`help/`](help) | LEO's own help files and manuals converted to text |

---
[Home](../README.md)
