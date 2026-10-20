[Home](../../README.md) › [ActiveX controls](../components/controls.md) › [Type libraries](README.md) › LEOTkb.ocx

# Type library LEOTKBLib

LEO Trackerball OLE Control

## _DLEOTkb (TKIND_DISPATCH) {fd8cf384-1b12-11d2-bc4b-444553540000}

Dispatch interface for LEOTkb Control

- `VARIANT_BOOL Initialise(long hWndParent, long hWndRegisteredParent, long hWndServer, short iCommsPort)` id=1
- `void ClosingControl()` id=2
- `void ShowDialogs()` id=3
- `void HideDialogs()` id=4
- `VARIANT_BOOL AreDialogsHidden()` id=5
- `long GetSettingsTabCount()` id=6
- `long GetSettingsTabName(long ID, BSTR* strName)` id=7
- `long ActivateSettingsTab(long ID)` id=8
- `long AssignButton(long IdButton, long IdXParam, long IdYParam)` id=9
- `long SelectButton(long IdButton)` id=10
- `long GetSelectedButton()` id=11
- `long GetAssignedButton(long IdButton, long* IdXParam, long* IdYParam)` id=12
- `long SetAutoXYEnable(VARIANT_BOOL bEnable)` id=13
- `VARIANT_BOOL GetAutoXYEnable()` id=14
- `long GetInvertedAxes(long IdButton, VARIANT_BOOL* XAxis, VARIANT_BOOL* YAxis)` id=15
- `long SetInvertedAxes(long IdButton, VARIANT_BOOL XAxis, VARIANT_BOOL YAxis)` id=16
- `void AboutBox()` id=-552

## _DLEOTkbEvents (TKIND_DISPATCH) {fd8cf385-1b12-11d2-bc4b-444553540000}

Event interface for LEOTkb Control

- `void TrackBallChange(long AdjustMode, long IdParamX, long IdParamY, long dX, long dY, VARIANT_BOOL bLBDown, VARIANT_BOOL bMBDown, VARIANT_BOOL bRBDown)` id=1

## LEOTkb (TKIND_COCLASS) {fd8cf386-1b12-11d2-bc4b-444553540000}

LEO Trackerball OLE Control


