[Home](../../README.md) › [ActiveX controls](../components/controls.md) › [Type libraries](README.md) › tabmgr.ocx

# Type library TABMGRLib

LEO Tabbed-Dialog Manager OLE Control

## _DTabMgr (TKIND_DISPATCH) {93fe9aa1-88e1-11d0-bc4a-444553540000}

Dispatch interface for LEO Tabbed Dialog Control

- `VARIANT_BOOL Initialise(long hWndParent, long hWndServer)` id=1
- `VARIANT_BOOL ShowTabs()` id=2
- `VARIANT_BOOL HideTabs()` id=3
- `long GetTabCount()` id=4
- `long GetTabName(long TabID, BSTR* TabName)` id=5
- `long ActivateTab(long ID)` id=6
- `VARIANT_BOOL AreTabsHidden()` id=7
- `VARIANT_BOOL IsMyWindow(long hWnd)` id=8
- `void AboutBox()` id=-552

## _DTabMgrEvents (TKIND_DISPATCH) {93fe9aa2-88e1-11d0-bc4a-444553540000}

Event interface for LEO Tabbed Dialog Control

- `void NeedsDlgMgrDialog(long IdDialog)` id=1
- `void HideDlgMgrDialog(long IdDialog)` id=2
- `void PrimeContextHelp()` id=3

## TabMgr (TKIND_COCLASS) {93fe9aa3-88e1-11d0-bc4a-444553540000}

LEO Tabbed-Dialog Manager OLE Control


