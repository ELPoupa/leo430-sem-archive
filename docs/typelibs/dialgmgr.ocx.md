[Home](../../README.md) › [ActiveX controls](../components/controls.md) › [Type libraries](README.md) › dialgmgr.ocx

# Type library DIALGMGRLib

LEO Dialog Manager OLE Control

## _DDialgMgr (TKIND_DISPATCH) {b30339a2-549f-11cf-a9a8-00608c5d307b}

Dispatch interface for DialgMgr Control

- `long ExecuteDialog(long ID)` id=1
- `VARIANT_BOOL IsDialogActive(long ID)` id=2
- `long SelectDialog()` id=3
- `long SelectExecuteDialog()` id=4
- `VARIANT_BOOL Initialise(long HwndParent, long hWndServer)` id=5
- `long GetDialogCount()` id=6
- `long GetDialogName(long DialogID, BSTR* DialogName)` id=7
- `VARIANT_BOOL ShowDialogs()` id=8
- `VARIANT_BOOL HideDialogs()` id=9
- `VARIANT_BOOL AreDialogsHidden()` id=10
- `VARIANT_BOOL HideDialog(long ID)` id=11
- `VARIANT_BOOL IsMyWindow(long hWnd)` id=13
- `void AboutBox()` id=-552

## _DDialgMgrEvents (TKIND_DISPATCH) {b30339a3-549f-11cf-a9a8-00608c5d307b}

Event interface for DialgMgr Control

- `void ParameterClick(long ID, short bButtonClicked)` id=1
- `void ParameterDblClick(long ID, short ButtonClicked)` id=2
- `void PrimeContextHelp()` id=3

## DialgMgr (TKIND_COCLASS) {b30339a4-549f-11cf-a9a8-00608c5d307b}

LEO Dialog Manager OLE Control


