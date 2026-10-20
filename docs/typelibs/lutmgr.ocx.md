[Home](../../README.md) › [ActiveX controls](../components/controls.md) › [Type libraries](README.md) › lutmgr.ocx

# Type library LUTMGRLib

LEO LUT Editor OLE Control

## _DLUTMgr (TKIND_DISPATCH) {63472de1-aff2-11d0-a9a8-00608c5d307b}

Dispatch interface for LEO LUT Editor Control

- `VARIANT_BOOL ShowToolBar(long bToolTips)` id=1
- `VARIANT_BOOL HideToolBar()` id=2
- `VARIANT_BOOL DoLUTSelect()` id=3
- `VARIANT_BOOL DoLUTEdit()` id=4
- `VARIANT_BOOL DoLUTLoad()` id=5
- `VARIANT_BOOL DoLUTSave()` id=6
- `VARIANT_BOOL DoLUTReset()` id=7
- `VARIANT_BOOL DoLUTUndoLastEdit()` id=8
- `VARIANT_BOOL SetBackdropBitmap(BSTR szFileName)` id=9
- `VARIANT_BOOL DoLUTInvert()` id=10
- `VARIANT_BOOL DoLUTSteps()` id=11
- `VARIANT_BOOL DoLUTBriCon()` id=12
- `VARIANT_BOOL DoLUTGamma()` id=13
- `VARIANT_BOOL DoLUTRed()` id=14
- `VARIANT_BOOL DoLUTGreen()` id=15
- `VARIANT_BOOL DoLUTBlue()` id=16
- `VARIANT_BOOL DoLUTGrey()` id=17
- `VARIANT_BOOL DoLUTLevel()` id=18
- `VARIANT_BOOL DoLUTAtPoint()` id=19
- `VARIANT_BOOL DoLUTGreyWedge()` id=20
- `VARIANT_BOOL DoLUTSetSteps()` id=21
- `VARIANT_BOOL Initialise(long hWndParent, long hWndRegisteredParent, long hWndServer, long nLUTType, long bDrawBorder)` id=22
- `long GetToolBarHwnd()` id=23
- `VARIANT_BOOL IsToolBarHidden()` id=24
- `void ClosingControl()` id=25
- `VARIANT_BOOL LoadUserLUT(BSTR szFileName)` id=26
- `VARIANT_BOOL SaveUserLUT(BSTR szFileName, long bSaveAsASCII)` id=27
- `VARIANT_BOOL DoLUTSetFromFile(long hWndServer, long hWndRegisteredParent, BSTR szLUTFileName)` id=28
- `void AboutBox()` id=-552

## _DLUTMgrEvents (TKIND_DISPATCH) {63472de2-aff2-11d0-a9a8-00608c5d307b}

Event interface for LEO LUT Editor Control

- `void LUTMgrStatus(BSTR szStatusMessage)` id=1
- `void InputLUTModeChanged(long IdMode)` id=2
- `void DisplayLUTModeChanged(long IdMode)` id=3
- `void LUTMgrFilename(BSTR szFileName)` id=4

## LUTMgr (TKIND_COCLASS) {63472de3-aff2-11d0-a9a8-00608c5d307b}

LEO LUT-Editor OLE Control


