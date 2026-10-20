[Home](../../README.md) › [ActiveX controls](../components/controls.md) › [Type libraries](README.md) › Improc.ocx

# Type library ImProcLib

LEO Image Processing OLE Control

## _DImProc (TKIND_DISPATCH) {3caf7d81-c08d-11d0-ba86-90f902c10700}

Dispatch interface for LEO Image Processing Control

- `VARIANT_BOOL Initialise(long hWndParent, long hWndServer)` id=1
- `VARIANT_BOOL ShowTabs()` id=2
- `VARIANT_BOOL HideTabs()` id=3
- `long GetTabCount()` id=4
- `long GetTabName(long TabID, BSTR* TabName)` id=5
- `long ActivateTab(long ID)` id=6
- `VARIANT_BOOL AreTabsHidden()` id=7
- `void AboutBox()` id=-552

## _DImProcEvents (TKIND_DISPATCH) {3caf7d82-c08d-11d0-ba86-90f902c10700}

Event interface for LEO Image Processing Control

- `void NeedsDlgMgrDialog(long IdDialog)` id=1
- `void HideDlgMgrDialog(long IdDialog)` id=2

## ImProc (TKIND_COCLASS) {3caf7d83-c08d-11d0-ba86-90f902c10700}

LEO Image Processing OLE Control


