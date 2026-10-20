[Home](../../README.md) › [ActiveX controls](../components/controls.md) › [Type libraries](README.md) › parammgr.ocx

# Type library PARAMMGRLib

LEO Parameter Manager OLE Control

## _DParamMgr (TKIND_DISPATCH) {3203f401-3bab-11cf-a9a8-00608c5d307b}

Dispatch interface for Parameter Manager Control

- `long SetNotify(long ID, long bNotify, long hWndTarget)` id=1
- `long IsEnabled(long ID)` id=2
- `long IsVisible(long ID)` id=3
- `long IsReadOnly(long ID)` id=4
- `long IsEntryOnly(long ID)` id=5
- `long GetString(long ID, BSTR* lpszString)` id=6
- `long GetName(long ID, BSTR* lpszName)` id=7
- `long GetMnemonic(long ID, BSTR* lpszMnemonic)` id=8
- `long TranslateMnemonic(long* lpID, BSTR lpszMnemonic)` id=9
- `long StepValue(long ID, long bCoarse, short Direction)` id=12
- `long ServerMessages(long lWndStatus, long bLogMsg, long bDisplayMsg, long lMessageID)` id=13
- `long GetError(long lErrorID, BSTR* lpszErrorStr)` id=14
- `long IsReadWrite(long ID)` id=15
- `long GetValueAsString(long ID, float Value, BSTR* lpszValueString)` id=11
- `long GetValue(long ID, float* lpValue, BSTR* lpszValue)` id=10
- `long HelpMode(long bHelpOn)` id=16
- `long GetMachineType()` id=17
- `long GetHandles(long* lpServerHwnd, long* lpOCXHwnd)` id=18
- `long SetValue(long ID, float fValue, BSTR lpszValue)` id=19
- `long GetSerialNumber(BSTR* lpszSerialNum)` id=20
- `long GetParamGroup(long GroupMask, long* lpParamIDList, long lBufferSize)` id=21
- `long MouseAdjust(long lButton, OLE_HANDLE hWndInCursor)` id=22
- `long ParameterClick(long ID, long* lpXid, long* lpYid)` id=23
- `long ParameterDblClick(long ID)` id=24
- `long GetLimits(long ID, float* lpfLowLim, float* lpfHighLim)` id=25
- `long GetXyCoords(long ID, float* lpfX, float* lpfY, BSTR* lpszX, BSTR* lpszY)` id=26
- `long SetXyCoords(long ID, float fValueX, float fValueY)` id=27
- `long GetLicence(long LicenceID)` id=28
- `long LeftMouseAdjSetup(long ID, OLE_HANDLE hwndUIF)` id=29
- `long RightMouseAdjSetup(long ID, OLE_HANDLE hwndUIF)` id=30
- `long Initialise(BSTR lpszAppNameVer)` id=31
- `long ExecuteCommand(long ID)` id=32
- `long GetParameterCount(long lParamType)` id=33
- `long GetZoneData(VARIANT GetZoneData)` id=34
- `long SetZoneData(VARIANT SetZoneData)` id=35
- `long AvailableMacros(VARIANT AvailableMacros)` id=36
- `long ExecuteLibraryMacro(BSTR lpszMacroName)` id=37
- `long ExecuteFileMacro(BSTR lpszMacroName)` id=38
- `long ContinueMacro(BSTR lpszMacroName)` id=39
- `long StartMacroEditor()` id=40
- `long SaveSysConditions()` id=41
- `long RestoreSysConditions()` id=42
- `long QueryServer()` id=43
- `long SetCoarse(long bOnOff)` id=44
- `long GetCommandGroup(long ID, long* lpListOfCmdIDs, long lBufferSize)` id=45
- `long GetStates(long ID, long* lpListOfStates, long lBufferSize)` id=46
- `long SetSemLicences(long* lpSetLicences)` id=47
- `long GetAdminConfig(long* lpAdminConfig, long lBufferSize)` id=48
- `long SetAdminConfig(long* lpAdminConfig, long lBufferSize)` id=49
- `long SetUserPreferences()` id=50
- `long GetDirectories(BSTR* userDir, BSTR* imageDir, BSTR* mainDir)` id=51
- `long ParameterRightClick(long paramID)` id=52
- `long SpMouseAdj(long lLeftParm, long lMiddleParm)` id=53
- `long GetMaxAperNum(short* lpNumber)` id=54
- `long GetAperSize(short aperNo, float* lpAperSize)` id=55
- `long AdminFunction(long dwMagic, short nFunctionCode, short nFunctionData)` id=56
- `long ImageToFile(short left, short top, short right, short bottom, short reduction, BSTR lpszFilename)` id=57
- `long CreateAnnotationText(short x, short y, BSTR Text)` id=58
- `VARIANT_BOOL DeleteAnnotationText(long ID)` id=59
- `long MoveStage(float x, float y, float z, float t, float r, float m)` id=60
- `long GetStagePosition(float* x, float* y, float* z, float* t, float* r, float* m)` id=61
- `long GetUnscaledValue(long ID, float fValue, float* fUnscaled)` id=62
- `long GetScaledValue(long ID, float fValue, float* fScaled)` id=63
- `long DoFeatureScan(short* chords, long num_chords, long edx_livetime, long mark_feature)` id=64
- `long StopFeatureScan()` id=65
- `long GetUserPreferences(VARIANT UserPrefs)` id=66
- `long GetHistogramData(long* pData)` id=67
- `long GetLineData(VARIANT LineData)` id=68
- `long AutoLevel(long Level1Target, long Level1Threshold, long Level2Target, long Level2Threshold, long bShowProgress)` id=69
- `long AutoLevelAbort()` id=70
- `long GetAutoLevelStatus(long* Level, long bAutoLevel1)` id=71
- `long InitialiseWithUsername(BSTR lpszAppNameVer, BSTR lpszUsername, BSTR lpszPassword)` id=72
- `long GetColCalData(float* buffer, short bufsiz)` id=73
- `short GetFeatureScanStatus()` id=74
- `void SetServerCloseInhibit(long bInhibit)` id=75
- `long GetRegMachine()` id=76
- `BSTR GetRegDBPath()` id=77
- `BSTR GetRegMainDirectory()` id=78
- `BSTR GetRegDBVersion()` id=79
- `long SelectUserArea()` id=80
- `long ReadUserArea(short* state, long* left, long* top, long* width, long* height)` id=81
- `long CreateUserArea(short mode, long left, long top, long width, long height)` id=82
- `long DeleteUserArea()` id=83
- `long InhibitSpot(long bInhibit)` id=84
- `long GetRegDWEntry(BSTR szKey)` id=85
- `long InitialiseRegistered(long hRegisteredParent)` id=86
- `BSTR GetRegLeoPath()` id=87
- `long ValidateUsername(BSTR Username, BSTR Password)` id=88
- `VARIANT_BOOL GeneralFunction(long Password, short fn, long* iData, float* fData1, float* fData2)` id=89
- `BSTR GetStateValueAsEnglishString(long StateID, short StateValue)` id=90
- `void PointsListClear()` id=91
- `VARIANT_BOOL PointsListAdd(BSTR Label)` id=92
- `VARIANT_BOOL PointsListDelete(BSTR Label)` id=93
- `VARIANT_BOOL PointsListReplace(BSTR Label)` id=94
- `VARIANT_BOOL PointsListGotoPoint(BSTR Label)` id=95
- `VARIANT_BOOL PointsListGotoFirstPoint()` id=96
- `VARIANT_BOOL PointsListGotoNextPoint()` id=97
- `VARIANT_BOOL PointsListGotoLastPoint()` id=98
- `VARIANT_BOOL PointsListGotoPreviousPoint()` id=99
- `void PointsListGetFlags(long* SetMag, long* SetWD, long* MoveXYOnly)` id=100
- `void PointsListSetFlags(long SetMag, long SetWD, long MoveXYOnly)` id=101
- `short PointsListGetCount(short mode)` id=102
- `short PointsListGetMode()` id=103
- `short PointsListGetIndex(short mode)` id=104
- `VARIANT_BOOL PointsListGetData(short mode, short Index, float* x, float* y, float* z, float* t, float* r, float* m, float* Mag, float* WD, BSTR* Label)` id=105
- `VARIANT_BOOL PointsListSetData(short mode, short Index, float x, float y, float z, float t, float r, float m, float Mag, float WD, BSTR Label)` id=106
- `short PointsListGetLabelAsIndex(short mode, BSTR Label)` id=107
- `VARIANT_BOOL PointsListSave(short mode, BSTR PathAndFilename)` id=108
- `VARIANT_BOOL PointsListLoad(short mode, BSTR Filename)` id=109
- `VARIANT_BOOL PointsListSaveUser(short mode, BSTR Filename)` id=110
- `VARIANT_BOOL PointsListLoadUser(short mode, BSTR PathAndFilename)` id=111
- `long SpecialFunction(short functionID, long Data)` id=112
- `void HideDialog(long ID)` id=113
- `void ShowDialog(long ID)` id=114
- `void AboutBox()` id=-552

## _DParamMgrEvents (TKIND_DISPATCH) {3203f402-3bab-11cf-a9a8-00608c5d307b}

Event interface for Parameter Manager Control

- `void ParameterNotify(long ID, long idReason)` id=1
- `void ServerClosingDown()` id=2
- `void SEMLicencesChanged()` id=3
- `void FinishedMouseAdjust()` id=4
- `void PauseMacro(long hWndClient, BSTR lpszMacroName)` id=5
- `void QueryCloseServer()` id=6
- `void AutoLevelStatus(long Status, long Level, long bAutoLevel1)` id=7
- `void UserPreferencesChanged()` id=8
- `void MacroStatus(BSTR szMacroName, BSTR szLine, BSTR szError, BSTR szText, long lCode)` id=9
- `void LeoEvent(short EventID, long AuxData)` id=10
- `void StagePointsListChanged(short reason, short mode)` id=11

## ParamMgr (TKIND_COCLASS) {3203f403-3bab-11cf-a9a8-00608c5d307b}

LEO Parameter Manager OLE Control


