// Decompiled with Ghidra from leomouse.exe
// Format: Portable Executable (PE), image base 00400000

// ---- FUN_00401010 @ 00401010

void FUN_00401010(void)

{
  DAT_00407ce4 = RegisterWindowMessageA(s_LEO_MOUSE_REGISTER_00406420);
  return;
}


// ---- FUN_00403f40 @ 00403f40

CDialog * __thiscall FUN_00403f40(void *this,CWnd *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00404f38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CDialog::CDialog(this,0x66,param_1);
  local_4 = 0;
  *(undefined ***)this = &PTR_LAB_004053b8;
  *(undefined4 *)((int)this + 0x94) = 0;
  FUN_004047d0((int)this);
  ExceptionList = local_c;
  return this;
}


// ---- FUN_00403fc0 @ 00403fc0

CDialog * __thiscall FUN_00403fc0(void *this,byte param_1)

{
  CDialog::~CDialog(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- ~CDialog @ 00403fe0

void __thiscall CDialog::~CDialog(CDialog *this)

{
                    /* WARNING: Could not recover jumptable at 0x00404c0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CDialog(this);
  return;
}


// ---- FUN_00404010 @ 00404010

HWND FUN_00404010(void)

{
  HWND hWnd;
  LRESULT LVar1;
  
  hWnd = FindWindowA((LPCSTR)0x0,s_LEO_SRV_32_004078dc);
  if ((((hWnd == (HWND)0x0) &&
       (hWnd = FindWindowA((LPCSTR)0x0,s_LEO_SRV_32__E__004078cc), hWnd == (HWND)0x0)) &&
      (hWnd = FindWindowA((LPCSTR)0x0,s_LEO_SRV_32__W__004078bc), hWnd == (HWND)0x0)) &&
     (hWnd = FindWindowA((LPCSTR)0x0,s_LEO_SRV_32__EW__004078ac), hWnd == (HWND)0x0)) {
    return (HWND)0x0;
  }
  LVar1 = SendMessageA(hWnd,DAT_00407bcc,0,0);
  if (LVar1 == 0) {
    return (HWND)0x0;
  }
  return hWnd;
}


// ---- FUN_00404070 @ 00404070

undefined4 __fastcall FUN_00404070(CDialog *param_1)

{
  char cVar1;
  WPARAM wParam;
  HWND hWnd;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  char *local_11c;
  undefined4 local_118;
  undefined4 local_114;
  char *local_110;
  char local_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00404f5b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CString::CString((CString *)&local_11c);
  local_4 = 0;
  CDialog::OnInitDialog(param_1);
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  hWnd = FUN_00404010();
  CString::LoadStringA((CString *)&local_11c,0xe003);
  local_110 = local_10c;
  local_118 = DAT_00407ce4;
  uVar2 = 0xffffffff;
  local_114 = 0xff;
  pcVar4 = local_11c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  wParam = *(WPARAM *)(param_1 + 0x20);
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = local_10c;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  SendMessageA(hWnd,0x4a,wParam,(LPARAM)&local_118);
  GetCursorPos((LPPOINT)(param_1 + 0x6c));
  CString::LoadStringA((CString *)&local_11c,0xe000);
  CWnd::SetWindowTextA((CWnd *)param_1,local_11c);
  local_4 = 0xffffffff;
  CString::~CString((CString *)&local_11c);
  ExceptionList = local_c;
  return 1;
}


// ---- FUN_00404170 @ 00404170

void __fastcall FUN_00404170(int param_1)

{
  *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 0x68) | 1;
  SetForegroundWindow(*(HWND *)(param_1 + 100));
  return;
}


// ---- FUN_00404190 @ 00404190

void __fastcall FUN_00404190(CWnd *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x68);
  *(uint *)(param_1 + 0x68) = uVar1 & 0xfe;
  if ((uVar1 & 0xfe) == 0) {
    FUN_00404330(param_1);
  }
  SetForegroundWindow(*(HWND *)(param_1 + 100));
  return;
}


// ---- FUN_004041c0 @ 004041c0

void __fastcall FUN_004041c0(int param_1)

{
  *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 0x68) | 2;
  SetForegroundWindow(*(HWND *)(param_1 + 100));
  return;
}


// ---- FUN_004041e0 @ 004041e0

void __fastcall FUN_004041e0(CWnd *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x68);
  *(uint *)(param_1 + 0x68) = uVar1 & 0xfd;
  if ((uVar1 & 0xfd) == 0) {
    FUN_00404330(param_1);
  }
  SetForegroundWindow(*(HWND *)(param_1 + 100));
  return;
}


// ---- FUN_00404210 @ 00404210

void __fastcall FUN_00404210(int param_1)

{
  SetForegroundWindow(*(HWND *)(param_1 + 100));
  return;
}


// ---- FUN_00404220 @ 00404220

void __thiscall FUN_00404220(CWnd *param_1,uint param_2,int param_3,int param_4)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x9c) == 0) {
    if ((((byte)param_1[0x68] & 1) != 0) && ((param_2 & 1) == 0)) {
      FUN_00404190(param_1);
    }
    if ((((byte)param_1[0x68] & 2) != 0) && ((param_2 & 0x10) == 0)) {
      FUN_004041e0(param_1);
    }
    if (((byte)param_1[0x68] & 3) == 0) {
      FUN_00404330(param_1);
      return;
    }
  }
  uVar1 = *(uint *)(param_1 + 0x68);
  if ((param_2 & 4) == 0) {
    uVar1 = uVar1 & 0xfb;
  }
  else {
    if ((uVar1 & 0xfb) == 0) {
      FUN_00404330(param_1);
      return;
    }
    uVar1 = uVar1 | 4;
  }
  *(uint *)(param_1 + 0x68) = uVar1;
  *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + (param_3 - *(int *)(param_1 + 0x74));
  *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + (param_4 - *(int *)(param_1 + 0x78));
  if ((((1 < param_3) && (param_3 < 0x27)) && (1 < param_4)) && (param_4 < 0x27)) {
    *(int *)(param_1 + 0x74) = param_3;
    *(int *)(param_1 + 0x78) = param_4;
    return;
  }
  SetCursorPos(*(int *)(param_1 + 0x8c) - (*(int *)(param_1 + 0x8c) - *(int *)(param_1 + 0x84)) / 2,
               *(int *)(param_1 + 0x90) - (*(int *)(param_1 + 0x90) - *(int *)(param_1 + 0x88)) / 2)
  ;
  *(undefined4 *)(param_1 + 0x74) = 0x14;
  *(undefined4 *)(param_1 + 0x78) = 0x14;
  return;
}


// ---- FUN_00404330 @ 00404330

void __fastcall FUN_00404330(CWnd *param_1)

{
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  ClipCursor((RECT *)0x0);
  SetCursorPos(*(int *)(param_1 + 0x6c),*(int *)(param_1 + 0x70));
  ReleaseCapture();
  CWnd::SetWindowPos(param_1,(CWnd *)wndBottom_exref,0,0,0,0,0x80);
  SetForegroundWindow(*(HWND *)(param_1 + 100));
  return;
}


// ---- FUN_00404390 @ 00404390

undefined4 __thiscall FUN_00404390(CWnd *param_1,HWND param_2,int param_3)

{
  HWND pHVar1;
  AFX_MODULE_STATE *pAVar2;
  HCURSOR hCursor;
  DWORD dwFlags;
  tagRECT tStack_10;
  
  *(undefined4 *)(param_1 + 0x94) = 1;
  mouse_event(0x8044,0,0,0,0);
  GetCursorPos((LPPOINT)(param_1 + 0x6c));
  *(HWND *)(param_1 + 100) = param_2;
  GetWindowRect(param_2,&tStack_10);
  CWnd::SetWindowPos(param_1,(CWnd *)wndTopMost_exref,tStack_10.right + -0x5a,
                     tStack_10.bottom + -0x5a,0x28,0x28,0x48);
  GetWindowRect(*(HWND *)(param_1 + 0x20),&tStack_10);
  *(LONG *)(param_1 + 0x84) = tStack_10.left;
  *(LONG *)(param_1 + 0x88) = tStack_10.top;
  *(LONG *)(param_1 + 0x8c) = tStack_10.right;
  *(LONG *)(param_1 + 0x90) = tStack_10.bottom;
  ClipCursor(&tStack_10);
  pHVar1 = SetCapture(*(HWND *)(param_1 + 0x20));
  CWnd::FromHandle(pHVar1);
  SetCursorPos(*(int *)(param_1 + 0x8c) - (*(int *)(param_1 + 0x8c) - *(int *)(param_1 + 0x84)) / 2,
               *(int *)(param_1 + 0x90) - (*(int *)(param_1 + 0x90) - *(int *)(param_1 + 0x88)) / 2)
  ;
  pAVar2 = AfxGetModuleState();
  hCursor = LoadCursorA(*(HINSTANCE *)(pAVar2 + 8),&DAT_00000083);
  *(HCURSOR *)(param_1 + 0x98) = hCursor;
  SetCursor(hCursor);
  *(undefined4 *)(param_1 + 0x74) = 0x14;
  *(undefined4 *)(param_1 + 0x78) = 0x14;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(int *)(param_1 + 0x68) = param_3;
  if (param_3 == 1) {
    dwFlags = 0x8002;
  }
  else {
    dwFlags = 0x8020;
  }
  mouse_event(dwFlags,0,0,0,0);
  SetForegroundWindow(*(HWND *)(param_1 + 100));
  return 1;
}


// ---- FUN_004044f0 @ 004044f0

undefined4 __thiscall FUN_004044f0(void *this,undefined4 param_1,undefined4 *param_2)

{
  CWnd::SetWindowPos(this,(CWnd *)wndTopMost_exref,0,0,0,0,3);
  *param_2 = *(undefined4 *)((int)this + 0x7c);
  param_2[1] = *(undefined4 *)((int)this + 0x80);
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  if (*(int *)((int)this + 0x94) != 0) {
    SetCursorPos(*(int *)((int)this + 0x8c) -
                 (*(int *)((int)this + 0x8c) - *(int *)((int)this + 0x84)) / 2,
                 *(int *)((int)this + 0x90) -
                 (*(int *)((int)this + 0x90) - *(int *)((int)this + 0x88)) / 2);
    *(undefined4 *)((int)this + 0x74) = 0x14;
    *(undefined4 *)((int)this + 0x78) = 0x14;
  }
  return *(undefined4 *)((int)this + 0x68);
}


// ---- FUN_00404580 @ 00404580

undefined4 __fastcall FUN_00404580(int param_1)

{
  *(undefined4 *)(param_1 + 0x94) = 0;
  ClipCursor((RECT *)0x0);
  ReleaseCapture();
  PostMessageA(*(HWND *)(param_1 + 0x20),0x10,0,0);
  return 1;
}


// ---- FUN_004045c0 @ 004045c0

undefined4 __fastcall FUN_004045c0(int param_1)

{
  PostMessageA(*(HWND *)(param_1 + 0x20),0x10,0,0);
  return 1;
}


// ---- FUN_004045e0 @ 004045e0

undefined4 __thiscall FUN_004045e0(CWnd *param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x60) = param_2;
  CWnd::ShowWindow(param_1,0);
  return *(undefined4 *)(param_1 + 0x20);
}


// ---- FUN_00404600 @ 00404600

undefined4 __thiscall FUN_00404600(void *this,undefined4 param_1,int *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  HANDLE hFileMappingObject;
  LPVOID lpBaseAddress;
  uint uVar4;
  uint uVar5;
  CHAR *pCVar6;
  char *pcVar7;
  CHAR *pCVar8;
  CHAR local_104 [256];
  
  if (*param_2 != DAT_00407cdc) {
    return 0;
  }
  if (*(int *)((int)this + 0x9c) == 0) {
    uVar2 = FUN_004044f0(this,0,(undefined4 *)param_2[2]);
    return uVar2;
  }
  uVar4 = 0xffffffff;
  pcVar7 = &DAT_004078e8;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  if ((uint)param_2[1] < ~uVar4 - 1) {
    uVar2 = FUN_004044f0(this,0,(undefined4 *)param_2[2]);
    return uVar2;
  }
  uVar4 = 0xffffffff;
  pcVar7 = &DAT_004078e8;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  iVar3 = strncmp((char *)param_2[2],&DAT_004078e8,~uVar4 - 1);
  if (iVar3 != 0) {
    uVar2 = FUN_004044f0(this,0,(undefined4 *)param_2[2]);
    return uVar2;
  }
  uVar4 = param_2[1];
  pCVar6 = (CHAR *)param_2[2];
  pCVar8 = local_104;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pCVar8 = *(undefined4 *)pCVar6;
    pCVar6 = pCVar6 + 4;
    pCVar8 = pCVar8 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pCVar8 = *pCVar6;
    pCVar6 = pCVar6 + 1;
    pCVar8 = pCVar8 + 1;
  }
  hFileMappingObject = OpenFileMappingA(6,0,local_104);
  if (hFileMappingObject == (HANDLE)0x0) {
    return 0;
  }
  lpBaseAddress = MapViewOfFile(hFileMappingObject,6,0,0,0);
  uVar2 = FUN_004044f0(this,0,(undefined4 *)((int)lpBaseAddress + 4));
  UnmapViewOfFile(lpBaseAddress);
  CloseHandle(hFileMappingObject);
  return uVar2;
}


// ---- FUN_00404730 @ 00404730

undefined4 __fastcall FUN_00404730(CWnd *param_1)

{
  CWnd::SetWindowPos(param_1,(CWnd *)wndBottom_exref,0,0,0,0,0x80);
  SetForegroundWindow(*(HWND *)(param_1 + 100));
  return 1;
}


// ---- FUN_00404760 @ 00404760

void __fastcall FUN_00404760(int param_1)

{
  PostMessageA(*(HWND *)(param_1 + 0x20),0x4c8,0,0);
  return;
}


// ---- FUN_00404780 @ 00404780

undefined4 __fastcall FUN_00404780(CWnd *param_1)

{
  HWND pHVar1;
  
  if (*(int *)(param_1 + 0x94) != 0) {
    CWnd::SetWindowPos(param_1,(CWnd *)wndTopMost_exref,0,0,0,0,3);
    ClipCursor((RECT *)(param_1 + 0x84));
    pHVar1 = SetCapture(*(HWND *)(param_1 + 0x20));
    CWnd::FromHandle(pHVar1);
  }
  return 1;
}


// ---- FUN_004047d0 @ 004047d0

void __fastcall FUN_004047d0(int param_1)

{
  int iVar1;
  _OSVERSIONINFOA *p_Var2;
  _OSVERSIONINFOA local_94;
  
  p_Var2 = &local_94;
  for (iVar1 = 0x25; iVar1 != 0; iVar1 = iVar1 + -1) {
    p_Var2->dwOSVersionInfoSize = 0;
    p_Var2 = (_OSVERSIONINFOA *)&p_Var2->dwMajorVersion;
  }
  *(undefined4 *)(param_1 + 0x9c) = 0;
  local_94.dwOSVersionInfoSize = 0x94;
  GetVersionExA(&local_94);
  if (local_94.dwPlatformId == 2) {
    *(undefined4 *)(param_1 + 0x9c) = 1;
  }
  return;
}


// ---- FUN_00404930 @ 00404930

CWinApp * __fastcall FUN_00404930(CWinApp *param_1)

{
  CWinApp::CWinApp(param_1,(char *)0x0);
  *(undefined ***)param_1 = &PTR_LAB_00405490;
  return param_1;
}


// ---- FUN_00404950 @ 00404950

CWinApp * __thiscall FUN_00404950(void *this,byte param_1)

{
  CWinApp::~CWinApp(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- ~CWinApp @ 00404970

void __thiscall CWinApp::~CWinApp(CWinApp *this)

{
                    /* WARNING: Could not recover jumptable at 0x00404ce0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CWinApp(this);
  return;
}


// ---- FUN_00404990 @ 00404990

void FUN_00404990(void)

{
  FUN_00404930((CWinApp *)&DAT_00407ce8);
  return;
}


// ---- FUN_004049a0 @ 004049a0

void FUN_004049a0(void)

{
  FUN_00404d2c((_onexit_t)&LAB_004049b0);
  return;
}


// ---- DoModal @ 00404b18

int __thiscall CDialog::DoModal(CDialog *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00404b18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = DoModal(this);
  return iVar1;
}


// ---- ~CDialog @ 00404c0e

void __thiscall CDialog::~CDialog(CDialog *this)

{
                    /* WARNING: Could not recover jumptable at 0x00404c0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CDialog(this);
  return;
}


// ---- CDialog @ 00404c14

void __thiscall CDialog::CDialog(CDialog *this,uint param_1,CWnd *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00404c14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CDialog(this,param_1,param_2);
  return;
}


// ---- operator_delete @ 00404c1a

void __cdecl operator_delete(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00404c1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  operator_delete(param_1);
  return;
}


// ---- ~CString @ 00404c20

void __thiscall CString::~CString(CString *this)

{
                    /* WARNING: Could not recover jumptable at 0x00404c20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CString(this);
  return;
}


// ---- SetWindowTextA @ 00404c26

void __thiscall CWnd::SetWindowTextA(CWnd *this,char *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00404c26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetWindowTextA(this,param_1);
  return;
}


// ---- LoadStringA @ 00404c2c

int __thiscall CString::LoadStringA(CString *this,uint param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00404c2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = LoadStringA(this,param_1);
  return iVar1;
}


// ---- OnInitDialog @ 00404c32

int __thiscall CDialog::OnInitDialog(CDialog *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00404c32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnInitDialog(this);
  return iVar1;
}


// ---- CString @ 00404c38

void __thiscall CString::CString(CString *this)

{
                    /* WARNING: Could not recover jumptable at 0x00404c38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CString(this);
  return;
}


// ---- SetWindowPos @ 00404c3e

int __thiscall
CWnd::SetWindowPos(CWnd *this,CWnd *param_1,int param_2,int param_3,int param_4,int param_5,
                  uint param_6)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00404c3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetWindowPos(this,param_1,param_2,param_3,param_4,param_5,param_6);
  return iVar1;
}


// ---- AfxGetModuleState @ 00404c44

AFX_MODULE_STATE * AfxGetModuleState(void)

{
  AFX_MODULE_STATE *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00404c44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = AfxGetModuleState();
  return pAVar1;
}


// ---- FromHandle @ 00404c4a

CWnd * CWnd::FromHandle(HWND__ *param_1)

{
  CWnd *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00404c4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = FromHandle(param_1);
  return pCVar1;
}


// ---- ShowWindow @ 00404c50

int __thiscall CWnd::ShowWindow(CWnd *this,int param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00404c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ShowWindow(this,param_1);
  return iVar1;
}


// ---- CWinApp @ 00404cda

void __thiscall CWinApp::CWinApp(CWinApp *this,char *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00404cda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CWinApp(this,param_1);
  return;
}


// ---- ~CWinApp @ 00404ce0

void __thiscall CWinApp::~CWinApp(CWinApp *this)

{
                    /* WARNING: Could not recover jumptable at 0x00404ce0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CWinApp(this);
  return;
}


// ---- CString @ 00404ce6

void __thiscall CString::CString(CString *this,char *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00404ce6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CString(this,param_1);
  return;
}


// ---- FUN_00404d00 @ 00404d00

void __cdecl FUN_00404d00(_onexit_t param_1)

{
  if (DAT_00407de4 == -1) {
    _onexit(param_1);
    return;
  }
  __dllonexit(param_1,&DAT_00407de4,&DAT_00407de0);
  return;
}


// ---- FUN_00404d2c @ 00404d2c

int __cdecl FUN_00404d2c(_onexit_t param_1)

{
  int iVar1;
  
  iVar1 = FUN_00404d00(param_1);
  return (iVar1 != 0) - 1;
}


// ---- entry @ 00404d3e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void entry(void)

{
  undefined4 *puVar1;
  uint uVar2;
  HMODULE pHVar3;
  byte *pbVar4;
  HINSTANCE__ *pHVar5;
  char **local_74;
  _startupinfo local_70;
  int local_6c;
  char **local_68;
  int local_64;
  _STARTUPINFOA local_60;
  undefined1 *local_1c;
  void *pvStack_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_00405538;
  puStack_10 = &DAT_00404ec4;
  pvStack_14 = ExceptionList;
  local_1c = &stack0xffffff78;
  local_8 = 0;
  ExceptionList = &pvStack_14;
  __set_app_type(2);
  _DAT_00407de0 = 0xffffffff;
  DAT_00407de4 = 0xffffffff;
  puVar1 = (undefined4 *)__p__fmode();
  *puVar1 = DAT_00407dd4;
  puVar1 = (undefined4 *)__p__commode();
  *puVar1 = DAT_00407dd0;
  _DAT_00407ddc = *(undefined4 *)_adjust_fdiv_exref;
  FUN_00404ec3();
  if (DAT_004078f0 == 0) {
    __setusermatherr(&LAB_00404ec0);
  }
  FUN_00404eae();
  initterm(&DAT_00406414,&DAT_00406418);
  local_70.newmode = DAT_00407dcc;
  __getmainargs(&local_64,&local_74,&local_68,DAT_00407dc8,&local_70);
  initterm(&DAT_00406000,&DAT_00406410);
  pbVar4 = *(byte **)_acmdln_exref;
  if (*pbVar4 != 0x22) {
    do {
      if (*pbVar4 < 0x21) goto LAB_00404e31;
      pbVar4 = pbVar4 + 1;
    } while( true );
  }
  do {
    pbVar4 = pbVar4 + 1;
    if (*pbVar4 == 0) break;
  } while (*pbVar4 != 0x22);
  if (*pbVar4 != 0x22) goto LAB_00404e31;
  do {
    pbVar4 = pbVar4 + 1;
LAB_00404e31:
  } while ((*pbVar4 != 0) && (*pbVar4 < 0x21));
  local_60.dwFlags = 0;
  GetStartupInfoA(&local_60);
  if ((local_60.dwFlags & 1) == 0) {
    uVar2 = 10;
  }
  else {
    uVar2 = (uint)local_60.wShowWindow;
  }
  pHVar5 = (HINSTANCE__ *)0x0;
  pHVar3 = GetModuleHandleA((LPCSTR)0x0);
  local_6c = FUN_00404ed0(pHVar3,pHVar5,(char *)pbVar4,uVar2);
                    /* WARNING: Subroutine does not return */
  exit(local_6c);
}


// ---- __dllonexit @ 00404e9c

void __dllonexit(void)

{
                    /* WARNING: Could not recover jumptable at 0x00404e9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __dllonexit();
  return;
}


// ---- _XcptFilter @ 00404ea2

int __cdecl _XcptFilter(ulong _ExceptionNum,_EXCEPTION_POINTERS *_ExceptionPtr)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00404ea2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _XcptFilter(_ExceptionNum,_ExceptionPtr);
  return iVar1;
}


// ---- initterm @ 00404ea8

void __cdecl initterm(void)

{
                    /* WARNING: Could not recover jumptable at 0x00404ea8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  initterm();
  return;
}


// ---- FUN_00404eae @ 00404eae

void FUN_00404eae(void)

{
  _controlfp(0x10000,0x30000);
  return;
}


// ---- FUN_00404ec3 @ 00404ec3

void FUN_00404ec3(void)

{
  return;
}


// ---- _controlfp @ 00404eca

uint __cdecl _controlfp(uint _NewValue,uint _Mask)

{
  uint uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00404eca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = _controlfp(_NewValue,_Mask);
  return uVar1;
}


// ---- FUN_00404ed0 @ 00404ed0

void FUN_00404ed0(HINSTANCE__ *param_1,HINSTANCE__ *param_2,char *param_3,int param_4)

{
  AfxWinMain(param_1,param_2,param_3,param_4);
  return;
}


// ---- FUN_00404ee8 @ 00404ee8

undefined4 FUN_00404ee8(int param_1,undefined4 param_2)

{
  AFX_MODULE_STATE *pAVar1;
  
  pAVar1 = AfxGetModuleState();
  pAVar1[0x14] = SUB41(param_1,0);
  *(undefined4 *)(pAVar1 + 0x1040) = param_2;
  if (param_1 == 0) {
    _setmbcp(-3);
  }
  return 1;
}


// ---- AfxWinMain @ 00404f28

int AfxWinMain(HINSTANCE__ *param_1,HINSTANCE__ *param_2,char *param_3,int param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00404f28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AfxWinMain(param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- Unwind@00404f30 @ 00404f30

void Unwind_00404f30(void)

{
  int unaff_EBP;
  
  CDialog::~CDialog(*(CDialog **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@00404f50 @ 00404f50

void Unwind_00404f50(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x11c));
  return;
}


// ---- Unwind@00404f70 @ 00404f70

void Unwind_00404f70(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0xb8));
  return;
}


// ---- Unwind@00404f7b @ 00404f7b

void Unwind_00404f7b(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0xb4));
  return;
}


// ---- Unwind@00404f86 @ 00404f86

void Unwind_00404f86(void)

{
  int unaff_EBP;
  
  CDialog::~CDialog((CDialog *)(unaff_EBP + -0xac));
  return;
}


