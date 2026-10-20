[Home](../../README.md) › [Programs](../components/README.md) › [ActiveX controls](../components/controls.md) › Type libraries

# Programming interfaces of the LEO controls

> **In short:** the methods, properties and events of each LEO ActiveX control, dumped from the type libraries inside
> the `.ocx` files. Useful for scripting the microscope from another program (the **LEO API control**, `leoapi.ocx`,
> was made for that) or for understanding what a control can do.

---

## Technical reference

*Full detail for maintenance and further reverse engineering: function names, addresses, parameters, sources. Inferred points are marked \*?\*.*

Dumped from the type libraries embedded in the OCX files (`tools/dump-typelib.ps1`, run in 32-bit PowerShell).
One page per control. The EXEs (sem.exe, leoserv.exe, remcon32.exe, leom.exe) have no embedded type library.

### LEO API Control (`leoapi.ocx`) — scripting interface
[leoapi.ocx.md](leoapi.ocx.md). ProgID `API.ApiCtrl.1`, dispinterface `_DApi` {71BD42C2-EBD3-11D0-AB3A-444553540000}.
Used by third-party software (release notes mention SIS). Parameters are addressed by **mnemonic**
(see [../parameters.csv](../parameters.csv)).

| Method | Use |
|---|---|
| `Initialise(machine)` | connect to the LEO server |
| `Set(param, value)` / `Get(param, value)` | write/read any AP_/DP_ parameter by mnemonic |
| `SetMulti` / `GetMulti` | several values at once |
| `GetLimits(param, min, max)` | parameter limits |
| `Execute(command)` | run a CMD_ command by mnemonic |
| `Grab(xoff, yoff, width, height, reduction, filename)` | save (part of) the current image to a file |
| `GetStagePosition(x,y,z,t,r,m)` / `MoveStage(x,y,z,t,r,m)` | stage |
| `SetNotify(param, on)` + event `Notify(param, reason)` | change notifications |
| `GetLastError`, `GetVersion`, `ClosingControl` | housekeeping |

Example (any COM-capable language on the SEM PC, e.g. VBScript):
```vb
Set api = CreateObject("API.ApiCtrl.1")
api.Initialise ""
api.Get "AP_MAG", mag
api.Set "AP_WD", 0.010        ' 10 mm (SI units, check limits with GetLimits)
api.Execute "CMD_AUTO_FOCUS_FINE"
```
(Calling conventions inferred from the type library; not tested on a live machine.)

### Other controls
| Control | Library | Main interface |
|---|---|---|
| [parammgr.ocx](parammgr.ocx.md) | PARAMMGRLib | parameter access by numeric ID: Get/SetValue, GetName/GetMnemonic/TranslateMnemonic, limits, step, XY values, licences, machine type, serial number, ExecuteCommand |
| [tabmgr.ocx](tabmgr.ocx.md) | TABMGRLib | parameter tab dialogs |
| [dialgmgr.ocx](dialgmgr.ocx.md) | DIALGMGRLib | dialogs |
| [imgmgr.ocx](imgmgr.ocx.md) | IMGMGRLib | image display, annotation, measurement, save/load |
| [lutmgr.ocx](lutmgr.ocx.md) | LUTMGRLib | LUT editor |
| [navmgr.ocx](navmgr.ocx.md), [StgMgr.ocx](StgMgr.ocx.md), [StgNav.ocx](StgNav.ocx.md), [leonavgt.ocx](leonavgt.ocx.md) | | stage navigation |
| [leoig.ocx](leoig.ocx.md) | | image gallery |
| [LEOTkb.ocx](LEOTkb.ocx.md) | | trackerball/knob panel |
| [leobtn.ocx](leobtn.ocx.md), [leocombo.ocx](leocombo.ocx.md), [leostat.ocx](leostat.ocx.md), [leoanalg.ocx](leoanalg.ocx.md) | | parameter-bound widgets |
| [Improc.ocx](Improc.ocx.md) | | image processing (Matrox MIL) |
| [Pchute2x.ocx](Pchute2x.ocx.md), [ControlResizer.ocx](ControlResizer.ocx.md) | | Parachute archive/restore, layout helper |

---
[← ActiveX controls](../components/controls.md) · [Home](../../README.md)
