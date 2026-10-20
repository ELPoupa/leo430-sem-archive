[Home](../../README.md) › [ActiveX controls](../components/controls.md) › [Type libraries](README.md) › leoapi.ocx

# Type library APILib

LEO API OLE Control

## _DApi (TKIND_DISPATCH) {71bd42c2-ebd3-11d0-ab3a-444553540000}

Dispatch interface for LEO API Control

- `long Set(BSTR lpszParam, VARIANT* vValue)` id=1
- `long Get(BSTR lpszParam, VARIANT* vValue)` id=2
- `long Execute(BSTR lpszCommand)` id=3
- `long Initialise(BSTR lpszMachine)` id=4
- `long Grab(short xoff, short yoff, short width, short height, short reduction, BSTR lpszFilename)` id=5
- `long GetStagePosition(VARIANT* x, VARIANT* y, VARIANT* z, VARIANT* t, VARIANT* r, VARIANT* m)` id=6
- `long MoveStage(float x, float y, float z, float t, float r, float m)` id=7
- `long SetNotify(BSTR lpszParameter, long bNotify)` id=8
- `long GetLastError(VARIANT* Error)` id=9
- `long ClosingControl()` id=10
- `long GetLimits(BSTR lpszParam, VARIANT* vMinValue, VARIANT* vMaxValue)` id=11
- `long GetMulti(BSTR lpszParam, VARIANT* vValues)` id=12
- `long SetMulti(BSTR lpszParam, VARIANT* vValues)` id=13
- `long GetVersion(short* Version)` id=14
- `void AboutBox()` id=-552
- property/const `BSTR Caption` id=-518

## _DApiEvents (TKIND_DISPATCH) {71bd42c3-ebd3-11d0-ab3a-444553540000}

Event interface for LEO API Control

- `void Notify(BSTR lpszParameter, long Reason)` id=1

## Api (TKIND_COCLASS) {71bd42c4-ebd3-11d0-ab3a-444553540000}

LEO API Control


