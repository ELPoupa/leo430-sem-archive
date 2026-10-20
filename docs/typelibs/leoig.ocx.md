[Home](../../README.md) › [ActiveX controls](../components/controls.md) › [Type libraries](README.md) › leoig.ocx

# Type library LEOIGLib

LEOIG OLE Control module

## _DLEOIG (TKIND_DISPATCH) {4fde2da1-b63f-11d0-bbf4-0020af71e433}

Dispatch interface for LEO SEM Image Gallery Control

- `long UserInitialise(long hwndServer, long hWndRegisteredParent, long hwndParent)` id=1
- `void DisplayPropertyDlg()` id=2
- `void DisplayFilterDlg()` id=3
- `void CancelSelection()` id=4
- `void RefreshControl()` id=5
- `void InitControl()` id=6
- `VARIANT_BOOL GalleryPrintImage()` id=7
- `void ShowAbout()` id=8
- `void ShowHelp()` id=9
- `VARIANT_BOOL DeleteSelectedFile()` id=10
- `void AboutBox()` id=-552

## _DLEOIGEvents (TKIND_DISPATCH) {4fde2da2-b63f-11d0-bbf4-0020af71e433}

Event interface for LEO SEM Image Gallery Control

- `void BtnDblClk(BSTR strFilename)` id=1
- `void FilterChanged(BSTR strFilter)` id=2
- `void PrimeContextHelp()` id=3
- `void BtnClick(BSTR strUserText, long bProperty, long bPrint, long bDelete)` id=4
- `void FileDeleted()` id=5

## LEOIG (TKIND_COCLASS) {4fde2da3-b63f-11d0-bbf4-0020af71e433}

LEO SEM Image Gallery Control


