[Home](../../README.md) › [ActiveX controls](../components/controls.md) › [Type libraries](README.md) › navmgr.ocx

# Type library NAVMGRLib

LEO Navigation Manager OLE Control

## _DNavMgr (TKIND_DISPATCH) {149e42a1-aff8-11cf-a9a8-00608c5d307b}

Dispatch interface for NavMgr Control

- `VARIANT_BOOL Initialise(long hWndParent, long hWndServer)` id=1
- `VARIANT_BOOL SelectPoint(long idCaller)` id=2
- `VARIANT_BOOL SelectArea(long idCaller)` id=3
- `VARIANT_BOOL CentrePoint(long idCaller)` id=4
- `VARIANT_BOOL CentreFeature(long idCaller)` id=5
- `VARIANT_BOOL StageMap(long idCaller)` id=6
- `VARIANT_BOOL DynamicStig(long idCaller)` id=7
- `void CursorCentrePoint()` id=8
- `void ExecuteDisplacement(float deltaX, float deltaY)` id=9
- `void RecaptureBackGround()` id=10
- `VARIANT_BOOL SelectLine(long idCaller)` id=11
- `VARIANT_BOOL SelectAspectArea(long idCaller, long SnapX, long SnapY)` id=12
- `void SurveyProperties()` id=13
- `void CancelResolutionMode()` id=14
- `void SetExitData(long useMacro, BSTR macName)` id=15
- `void SetResolutionData(long AF, float pixSize, long useMacro, BSTR macName, float WD)` id=16
- `void SetSurveyData(long useMinMag, long saveSurvey, long AF, float pixSize, long useMacro, BSTR macName, float WD)` id=17
- `void SetUpImageOrigin(long bUseImageOrigin)` id=18
- `void AboutBox()` id=-552

## _DNavMgrEvents (TKIND_DISPATCH) {149e42a2-aff8-11cf-a9a8-00608c5d307b}

Event interface for NavMgr Control

- `void SelectClick(long idCaller, short XCenter, short YCenter, short LeftRect, short TopRect, short RightRect, short BottomRect)` id=1
- `void NavMgrStatus(BSTR lpstrStatus)` id=2
- `void NeedsDialog(long IdDialog)` id=3
- `void CommandDone(long idCaller, long bCancelled)` id=4
- `void RedrawNotify(long bRedraw)` id=5
- `void SurveyModeChanged(short nMode)` id=6
- `void SurveyWDChanged(float WD)` id=7
- `void ResolutionWDChanged(float WD)` id=8

## NavMgr (TKIND_COCLASS) {149e42a3-aff8-11cf-a9a8-00608c5d307b}

LEO Navigation Manager OLE Control


