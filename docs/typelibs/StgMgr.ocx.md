[Home](../../README.md) › [ActiveX controls](../components/controls.md) › [Type libraries](README.md) › StgMgr.ocx

# Type library STGMGRLib

LEO Stage Manager OLE Control

## _DStgMgr (TKIND_DISPATCH) {de229491-464d-11d2-a9a9-0020afb710e4}

Dispatch interface for StgMgr Control

- `VARIANT_BOOL Initialise(long hWndParent, long hWndRegisteredParent, long hWndServer)` id=1
- `void ClosingControl()` id=2
- `void ShowDialogs()` id=3
- `void HideDialogs()` id=4
- `VARIANT_BOOL AreDialogsHidden()` id=5
- `long GetSettingsTabCount()` id=6
- `long GetSettingsTabName(long ID, BSTR* strName)` id=7
- `long ActivateSettingsTab(long ID)` id=8
- `void SurveyModeChanged(short nMode)` id=9
- `void SurveyWDChanged(float WD)` id=10
- `void ResolutionWDChanged(float WD)` id=11
- `VARIANT_BOOL IsMyWindow(long hWnd)` id=12
- `void AboutBox()` id=-552

## _DStgMgrEvents (TKIND_DISPATCH) {de229492-464d-11d2-a9a9-0020afb710e4}

Event interface for StgMgr Control

- `void NeedsDlgMgrDialog(long IdDialog)` id=1
- `void SetSurveyData(VARIANT_BOOL UseMinMag, VARIANT_BOOL SaveSurvey, VARIANT_BOOL AF, float pixSize, VARIANT_BOOL UseMacro, BSTR macName, float WD)` id=2
- `void SetResolutionData(VARIANT_BOOL AF, float pixSize, VARIANT_BOOL UseMacro, BSTR macName, float WD)` id=3
- `void SetExitData(VARIANT_BOOL UseMacro, BSTR macName)` id=4
- `void ExecuteDisplacement(float X_distance, float Y_distance)` id=5
- `void PrimeContextHelp()` id=6

## StgMgr (TKIND_COCLASS) {de229493-464d-11d2-a9a9-0020afb710e4}

LEO Stage Manager OLE Control


