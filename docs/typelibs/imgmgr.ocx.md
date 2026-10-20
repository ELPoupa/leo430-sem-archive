[Home](../../README.md) › [ActiveX controls](../components/controls.md) › [Type libraries](README.md) › imgmgr.ocx

# Type library IMGMGRLib

LEO Image Manager OLE Control

## _DImgMgr (TKIND_DISPATCH) {19069a21-9920-11cf-a9a8-00608c5d307b}

Dispatch interface for ImgMgr Control

- `VARIANT_BOOL Initialise(long hWndParent, long hWndRegisteredParent, long hWndServer, long transRed, long transGreen, long transBlue)` id=1
- `VARIANT_BOOL ShowToolBar(long bToolTips)` id=2
- `VARIANT_BOOL HideToolBar()` id=3
- `VARIANT_BOOL DoAnnSelect()` id=4
- `VARIANT_BOOL DoAnnLoad()` id=5
- `VARIANT_BOOL DoAnnSave()` id=6
- `VARIANT_BOOL DoAnnLineProfile()` id=7
- `VARIANT_BOOL DoAnnVectorProfile()` id=8
- `VARIANT_BOOL DoAnnStoredHistogram()` id=9
- `VARIANT_BOOL DoAnnMagCal()` id=10
- `VARIANT_BOOL DoAnnScanCal()` id=11
- `VARIANT_BOOL DoAnnExportSelect()` id=12
- `VARIANT_BOOL DoAnnLiveProfile()` id=13
- `VARIANT_BOOL DoAnnLiveHistogram()` id=14
- `VARIANT_BOOL DoAnnDefineRaster()` id=15
- `void ClientAreaChanged()` id=16
- `VARIANT_BOOL DoAnnPrintSetup()` id=17
- `VARIANT_BOOL DoAnnSplitScreen()` id=18
- `VARIANT_BOOL DoAnnQuadMode()` id=19
- `VARIANT_BOOL DoAnnCrossHairs()` id=20
- `void HideAnnotation(long Scope)` id=21
- `void UnHideAnnotation(long Scope)` id=22
- `void ClosingControl()` id=23
- `void DoAnnGraticule()` id=24
- `VARIANT_BOOL DoAnnCalibrationLines()` id=25
- `VARIANT_BOOL DoAnnSpot()` id=26
- `VARIANT_BOOL DoAnnTIFFExport(long bNoHide)` id=27
- `VARIANT_BOOL DoAnnTIFFImport(long bNoHide)` id=28
- `VARIANT_BOOL DoAnnClipboard(long bNoHide)` id=29
- `VARIANT_BOOL DoAnnLineScan()` id=30
- `VARIANT_BOOL DumpImage(BSTR szFilename, float xScale, float yScale, long xOffs, long yOffs, long Width, long Height, long bColourAnn)` id=31
- `VARIANT_BOOL DoAnnPhoto(long bNoHide)` id=32
- `VARIANT_BOOL DoAnnImportSelect(short left, short top, short right, short bottom)` id=33
- `VARIANT_BOOL SetBackdropBitmap(BSTR szFilename)` id=34
- `VARIANT_BOOL DoAnnControl()` id=35
- `long DoAnnLoadDataZone(BSTR szFilename, BSTR szSaveFilename)` id=36
- `VARIANT_BOOL DoAnnUnloadDataZone(long IdLoadedDataZone)` id=37
- `long DoAnnCreatePoint(long x, long y, BSTR szCaption)` id=38
- `VARIANT_BOOL DoAnnDeletePoint(long IdPoint)` id=39
- `long DoAnnCreateArea(long x, long y, long w, long h, long zOrder, long IsBitmap, BSTR szDataFile, long CanMove, long CanSize)` id=40
- `VARIANT_BOOL DoAnnDeleteArea(long IdArea)` id=41
- `VARIANT_BOOL IsPanelHidden(long idPanel)` id=42
- `VARIANT_BOOL HidePanel(long idPanel, long bHidden)` id=43
- `VARIANT_BOOL IsToolBarHidden()` id=44
- `VARIANT_BOOL HideDialogs()` id=45
- `VARIANT_BOOL ShowDialogs()` id=46
- `VARIANT_BOOL AreDialogsHidden()` id=47
- `long DoAnnCreateText(long x, long y, BSTR szCaption)` id=48
- `long DoAnnCreatePoint2Point(long x1, long y1, long x2, long y2)` id=50
- `VARIANT_BOOL DoAnnDeletePoint2Point(long IdPoint2Point)` id=51
- `void ExternalKeyDown(long nChar, long nRepeatCount, long nFlags)` id=52
- `VARIANT_BOOL IsUserInteractionEnabled()` id=53
- `void SetUserInteraction(long bEnabled)` id=54
- `long DoAnnChangePointText(long IdPoint, BSTR szCaption)` id=55
- `void SetRedrawNotify(long bRedrawNotify)` id=56
- `long DoAnnCreateLine(long xPointStart, long yPointStart, long xPointEnd, long yPointEnd, long bHasArrowHead, BSTR szCaption)` id=57
- `VARIANT_BOOL DoAnnDeleteLine(long IdLine)` id=58
- `VARIANT_BOOL DoAnnBMPExport(long bNoHide)` id=59
- `VARIANT_BOOL DoAnnJPEGExport(long bNoHide)` id=60
- `long DoAnnCreatePropMenuItem(long IDParentObject, BSTR szEnglishCaption, BSTR szFrenchCaption, BSTR szGermanCaption)` id=61
- `VARIANT_BOOL DoAnnDeletePropMenuItem(long IDParentObject, long IDMenuItem)` id=62
- `long DoAnnChangeLineText(long IdLine, BSTR szCaption)` id=63
- `long DoAnnCreateAspectArea(long x, long y, long w, long h, long zOrder, long IsBitmap, BSTR szDataFile, long CanMove, long CanSize, long SnapX, long SnapY)` id=64
- `long GetGalleryWindow()` id=65
- `VARIANT_BOOL DoAnnLoadFilename(BSTR szFilename)` id=66
- `VARIANT_BOOL GetBackdropBitmapFilename(BSTR* szFilename)` id=67
- `void InhibitSpot(long bInhibit)` id=68
- `VARIANT_BOOL DoAnnOptions(long nNoHide)` id=69
- `void DoAnnShowImageGallery(short show)` id=70
- `void SetUpImageOrigin(long bUseImageOrigin)` id=71
- `void AboutBox()` id=-552
- property/const `long ReadyState` id=-525

## _DImgMgrEvents (TKIND_DISPATCH) {19069a22-9920-11cf-a9a8-00608c5d307b}

Event interface for ImgMgr Control

- `void ReadyStateChange()` id=-609
- `void ClickNoSelect(long idButton)` id=1
- `void ShowPreparePrinting()` id=2
- `void UnloadedDataZone(long IdDataZonePanel)` id=3
- `void RestoreDataZone(long IdDataZonePanel)` id=4
- `void ImgMgrStatus(BSTR szStatusMessage)` id=5
- `void DeletingAnnPoint(long IdPoint, long* pIsOK)` id=6
- `void DeletingAnnArea(long IdArea, long* pIsOK)` id=7
- `void ClickedAnnArea(long IdArea, long zOrder, long cx, long cy, short idButton, long bDoubleClick)` id=8
- `void MovedAnnArea(long IdArea, long x, long y, long w, long h, long zOrder)` id=9
- `void DeletingAnnText(long IdText, long* pIsOK)` id=10
- `void DblClickNoSelect(long idButton)` id=11
- `void DeletingAnnPoint2Point(long IdPoint2Point, long* pIsOK)` id=12
- `void KeyDownNoSelect(long nChar, long nRepeatCount, long nFlags)` id=13
- `void ClickedAnnPoint(long IdPoint, long cx, long cy, short idButton, long bDoubleClick)` id=14
- `void RedrawNotify(long top, long left, long right, long bottom)` id=15
- `void PrimeContextHelp()` id=16
- `void DeletingAnnLine(long IdLine, long* pIsOK)` id=17
- `void ClickedAnnLine(long IdLine, long cx, long cy, short idButton, long bDoubleClick)` id=18
- `void LoadedCurrentDataZone(BSTR* szFilePath, long IdDataZonePanel)` id=19
- `void PropMenuItemClicked(long IDParentObject, long IDMenuItem)` id=20

## ImgMgr (TKIND_COCLASS) {19069a23-9920-11cf-a9a8-00608c5d307b}

LEO Image Manager OLE Control


