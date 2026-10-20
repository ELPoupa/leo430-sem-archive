[Home](../../README.md) › [ActiveX controls](../components/controls.md) › [Type libraries](README.md) › StgNav.ocx

# Type library StgNavLib

LEO Stage Navigation Graphic OLE Control

## _DStgNav (TKIND_DISPATCH) {6fb2fd31-472c-11d2-a9a9-0020afb710e4}

Dispatch interface for LEO Stage Navigation Graphic Control

- `long SetBackdropBitmap(BSTR szFileName)` id=1
- `long Initialise(long hWndParent, long hWndRegisteredParent, long hWndServer, long bDrawCrossHairs, long bDrawBorder)` id=2
- `void ClosingControl()` id=3
- `long LoadUserData(BSTR szFileName)` id=4
- `long SaveUserData(BSTR szFileName)` id=5
- `long SetOrigin(long iOriginCode)` id=6
- `long RotateObjectGroup(long IDParentObject, float fRotationDegrees)` id=7
- `long UnloadMetafile(long MetaFileID)` id=8
- `void ToggleCrossHairs(long bVisible)` id=9
- `long SetObjectGroupRotationCenter(long IDParentObject, long XCenter, long YCenter)` id=10
- `long MoveObjectGroup(long IDParentObject, long X, long Y, long bDeltaMove)` id=11
- `long GetMappingInfo(long* pOrigin, long* pXMin, long* pXMax, long* pYMin, long* pYMax)` id=12
- `long GetObjectGroupInfo(long IDParentObject, float* pfCurrentRotation, long* pXRotationCenter, long* pYRotationCenter, long* pOverallWidth, long* pOverallHeight)` id=13
- `long SetXYCoordinateExtents(long XExtent, long YExtent)` id=14
- `long LoadMetafile(long Left, long Top, long Right, long Bottom, BSTR szMetaFileName, long nObjectCategory, long bUserCanDelete, long bUserCanMove)` id=15
- `long AttachGroup(long SrcGroupID, long DestGroupID, long SrcToXpos, long SrcToYpos)` id=16
- `long UnattachGroup(long ParentGroupID)` id=17
- `long StartUserAttachGroup()` id=18
- `long StartUserUnattachGroup()` id=19
- `long SetFieldDisplayMode(long bEnabled)` id=20
- `long SetStageDisplayMode(long bEnabled, long nCarouselType, float fRotationAdjustment, long bPlanView)` id=21
- `long SelectStageCarouselType(long nCarouselType, float fRotationAdjustment)` id=22
- `long GetFieldDisplayMode()` id=23
- `long GetStageDisplayMode()` id=24
- `long GetStageDisplayPlanView()` id=25
- `void SetHelpContextID(long ContextID)` id=26
- `void AboutBox()` id=-552

## _DStgNavEvents (TKIND_DISPATCH) {6fb2fd32-472c-11d2-a9a9-0020afb710e4}

Event interface for Stage Navigation Graphic Control

- `void StageNavGraphicStatus(BSTR szStatus)` id=1
- `void ObjectMove(long IDObject, long bParentObject, long dX, long dY)` id=2
- `void ObjectMoved(long IDObject, long bParentObject)` id=3
- `void ObjectSelected(long IDObject, long bParentObject)` id=4
- `void MappingInfoChanged()` id=5
- `void UserAttachedGroup(long* pSrcGroupID, long* pParentGroupID, long bCancelled)` id=6
- `void UserUnattachedGroup(long IDGroup, long bCancelled)` id=7
- `void StageFieldDoubleClicked(long FieldX, long FieldY)` id=8
- `void StageXYDoubleClicked(float StageGotoX, float StageGotoY)` id=9
- `void StageZDoubleClicked(float StageGotoZ)` id=10
- `void InitialDraw()` id=11
- `void PrimeContextHelp()` id=12
- `void StageRDoubleClicked(float StageVectorR)` id=13

## StgNav (TKIND_COCLASS) {6fb2fd33-472c-11d2-a9a9-0020afb710e4}

LEO Stage Navigation Graphic OLE Control


