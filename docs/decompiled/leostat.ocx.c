// Decompiled with Ghidra from leostat.ocx
// Format: Portable Executable (PE), image base 10000000

// ---- FUN_10001010 @ 10001010

void FUN_10001010(void)

{
  FUN_10001050((CWinApp *)&DAT_1000dd68);
  return;
}


// ---- FUN_10001020 @ 10001020

void FUN_10001020(void)

{
  FUN_10008f55((_onexit_t)&LAB_10001030);
  return;
}


// ---- ~CWinApp @ 10001040

void __thiscall CWinApp::~CWinApp(CWinApp *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CWinApp(this);
  return;
}


// ---- FUN_10001050 @ 10001050

CWinApp * __fastcall FUN_10001050(CWinApp *param_1)

{
  CWinApp::CWinApp(param_1,(char *)0x0);
  *(undefined ***)param_1 = &PTR_LAB_1000a4cc;
  return param_1;
}


// ---- FUN_10001070 @ 10001070

CWinApp * __thiscall FUN_10001070(void *this,byte param_1)

{
  CWinApp::~CWinApp(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- DllRegisterServer @ 100010b0

undefined4 DllRegisterServer(void)

{
  AFX_MODULE_STATE *pAVar1;
  int iVar2;
  undefined4 local_8;
  int local_4;
  
                    /* 0x10b0  3  DllRegisterServer */
  pAVar1 = (AFX_MODULE_STATE *)FUN_10008dab();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)&local_8,pAVar1);
  pAVar1 = AfxGetModuleState();
  iVar2 = AfxOleRegisterTypeLib
                    (*(HINSTANCE__ **)(pAVar1 + 8),(_GUID *)&DAT_1000a4b8,(char *)0x0,(char *)0x0);
  if (iVar2 == 0) {
    *(undefined4 *)(local_4 + 4) = local_8;
    return 0x80040200;
  }
  iVar2 = COleObjectFactory::UpdateRegistryAll(1);
  if (iVar2 == 0) {
    *(undefined4 *)(local_4 + 4) = local_8;
    return 0x80040201;
  }
  *(undefined4 *)(local_4 + 4) = local_8;
  return 0;
}


// ---- DllUnregisterServer @ 10001130

undefined4 DllUnregisterServer(void)

{
  AFX_MODULE_STATE *pAVar1;
  int iVar2;
  undefined4 local_8;
  int local_4;
  
                    /* 0x1130  4  DllUnregisterServer */
  pAVar1 = (AFX_MODULE_STATE *)FUN_10008dab();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)&local_8,pAVar1);
  iVar2 = AfxOleUnregisterTypeLib((_GUID *)&DAT_1000a4b8,0,0,0);
  if (iVar2 == 0) {
    *(undefined4 *)(local_4 + 4) = local_8;
    return 0x80040200;
  }
  iVar2 = COleObjectFactory::UpdateRegistryAll(0);
  if (iVar2 == 0) {
    *(undefined4 *)(local_4 + 4) = local_8;
    return 0x80040201;
  }
  *(undefined4 *)(local_4 + 4) = local_8;
  return 0;
}


// ---- FUN_100011a0 @ 100011a0

void FUN_100011a0(void)

{
  return;
}


// ---- FUN_100011b0 @ 100011b0

void FUN_100011b0(void)

{
  return;
}


// ---- FUN_10004020 @ 10004020

undefined ** FUN_10004020(void)

{
  return &PTR_LAB_1000a570;
}


// ---- FUN_10004030 @ 10004030

void __fastcall FUN_10004030(CWnd *param_1)

{
  tagRECT local_70;
  CPaintDC local_60 [84];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_100091e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CPaintDC::CPaintDC(local_60,param_1);
  local_4 = 0;
  GetClientRect(*(HWND *)(param_1 + 0x20),&local_70);
  CWnd::IsWindowEnabled(param_1);
  CString::CString((CString *)&stack0xffffff80,(CString *)(param_1 + 0x40));
  FUN_100040e0((CDC *)local_60,local_70.left,(LPCSTR)local_70.top,local_70.right,local_70.bottom);
  local_4 = 0xffffffff;
  CPaintDC::~CPaintDC(local_60);
  ExceptionList = local_c;
  return;
}


// ---- FUN_100040e0 @ 100040e0

void FUN_100040e0(CDC *param_1,int param_2,LPCSTR param_3,undefined4 param_4,int param_5)

{
  undefined4 uVar1;
  DWORD DVar2;
  DWORD DVar3;
  void *unaff_EBP;
  int unaff_retaddr;
  int iVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_10009208;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  uVar1 = (**(code **)(*(int *)param_1 + 0x2c))(0x11);
  CDC::SetTextAlign(param_1,0);
  iVar4 = *(int *)param_1;
  DVar2 = GetSysColor(5);
  (**(code **)(iVar4 + 0x34))(DVar2);
  if (param_5 == 0) {
    iVar4 = 0x11;
  }
  else {
    iVar4 = 8;
  }
  DVar2 = GetSysColor(iVar4);
  (**(code **)(*(int *)param_1 + 0x38))(DVar2);
  GetTextExtentPoint32A
            (*(HDC *)(param_1 + 8),param_3,*(int *)(param_3 + -8),(LPSIZE)&stack0xffffffe0);
  ExtTextOutA(*(HDC *)(param_1 + 4),local_4 + 2,
              ((param_2 - (int)unaff_EBP) - unaff_retaddr) / 2 + unaff_retaddr,6,(RECT *)&local_4,
              param_3,*(UINT *)(param_3 + -8),(INT *)0x0);
  DVar2 = GetSysColor(0xf);
  DVar3 = GetSysColor(0x15);
  CDC::Draw3dRect(param_1,(tagRECT *)&local_4,DVar3,DVar2);
  (**(code **)(*(int *)param_1 + 0x30))(uVar1);
  CString::~CString((CString *)&param_2);
  ExceptionList = unaff_EBP;
  return;
}


// ---- FUN_100041e0 @ 100041e0

COleControl * FUN_100041e0(void)

{
  COleControl *pCVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1000922a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pCVar1 = operator_new(0x22c);
  local_4 = 0;
  if (pCVar1 != (COleControl *)0x0) {
    pCVar1 = FUN_10004530(pCVar1);
    ExceptionList = local_c;
    return pCVar1;
  }
  ExceptionList = local_c;
  return (COleControl *)0x0;
}


// ---- FUN_10004240 @ 10004240

void FUN_10004240(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ---- FUN_10004260 @ 10004260

undefined ** FUN_10004260(void)

{
  return &PTR_s_CLEOStaticCtrl_1000a5a8;
}


// ---- FUN_10004280 @ 10004280

undefined ** FUN_10004280(void)

{
  return &PTR_LAB_1000a5c0;
}


// ---- FUN_100042a0 @ 100042a0

undefined ** FUN_100042a0(void)

{
  return &PTR_LAB_1000a760;
}


// ---- FUN_100042b0 @ 100042b0

undefined * FUN_100042b0(void)

{
  return &DAT_1000e278;
}


// ---- FUN_100042f0 @ 100042f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100042f0(int *param_1)

{
  if (DAT_1000c7ec == -1) {
    _DAT_1000de88 = DAT_1000acd0;
    _DAT_1000de8c = DAT_1000acd4;
    _DAT_1000de90 = DAT_1000acd8;
    _DAT_1000de94 = DAT_1000acdc;
    DAT_1000c7ec = 1;
    *param_1 = 1;
    return &DAT_1000de88;
  }
  *param_1 = DAT_1000c7ec;
  return &DAT_1000de88;
}


// ---- FUN_10004360 @ 10004360

void FUN_10004360(void)

{
  FUN_10004380(&DAT_1000de38,(_GUID *)&DAT_1000a858,(CRuntimeClass *)&PTR_s_CLEOStaticCtrl_1000a5a8,
               0,"LEOSTAT.LEOStaticCtrl.1");
  return;
}


// ---- FUN_10004380 @ 10004380

COleObjectFactory * __thiscall
FUN_10004380(void *this,_GUID *param_1,CRuntimeClass *param_2,int param_3,char *param_4)

{
  COleObjectFactory::COleObjectFactory(this,param_1,param_2,param_3,param_4);
  *(undefined ***)this = &PTR_LAB_1000a888;
  return this;
}


// ---- ~COleObjectFactory @ 100043b0

void __thiscall COleObjectFactory::~COleObjectFactory(COleObjectFactory *this)

{
                    /* WARNING: Could not recover jumptable at 0x100088f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~COleObjectFactory(this);
  return;
}


// ---- FUN_100043c0 @ 100043c0

void FUN_100043c0(void)

{
  FUN_10008f55((_onexit_t)&LAB_100043d0);
  return;
}


// ---- FUN_100043f0 @ 100043f0

undefined4 FUN_100043f0(undefined4 *param_1)

{
  *param_1 = DAT_1000a858;
  param_1[1] = DAT_1000a85c;
  param_1[2] = DAT_1000a860;
  param_1[3] = DAT_1000a864;
  return 0;
}


// ---- FUN_10004420 @ 10004420

undefined4 FUN_10004420(void)

{
  return 1;
}


// ---- FUN_10004430 @ 10004430

void FUN_10004430(LCID param_1,ITypeLib **param_2)

{
  LoadRegTypeLib((GUID *)&DAT_1000a4b8,DAT_1000a4c8,DAT_1000a4ca,param_1,param_2);
  return;
}


// ---- FUN_10004460 @ 10004460

void __fastcall FUN_10004460(int param_1)

{
  undefined4 local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10009248;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2
            ((AFX_MAINTAIN_STATE2 *)&local_14,*(AFX_MODULE_STATE **)(param_1 + 0x1c));
  local_4 = 0;
  AfxGetTypeLibCache((_GUID *)&DAT_1000a4b8);
  *(undefined4 *)(local_10 + 4) = local_14;
  ExceptionList = local_c;
  return;
}


// ---- FUN_100044c0 @ 100044c0

undefined4 FUN_100044c0(void)

{
  return 0x20191;
}


// ---- FUN_10004530 @ 10004530

COleControl * __fastcall FUN_10004530(COleControl *param_1)

{
  CWnd *this;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1000927e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  COleControl::COleControl(param_1);
  this = (CWnd *)(param_1 + 0x1d8);
  local_4 = 0;
  CWnd::CWnd(this);
  *(undefined ***)this = &PTR_GetRuntimeClass_1000abb4;
  local_4._0_1_ = 1;
  CString::CString((CString *)(param_1 + 0x218));
  *(undefined ***)this = &PTR_GetRuntimeClass_1000aaf4;
  local_4 = CONCAT31(local_4._1_3_,2);
  *(undefined ***)param_1 = &PTR_FUN_1000a8fc;
  COleControl::InitializeIIDs(param_1,(_GUID *)&DAT_1000a868,(_GUID *)&DAT_1000a878);
  *(undefined4 *)(param_1 + 0x1cc) = 0;
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  *(undefined4 *)(param_1 + 0x21c) = 0;
  *(undefined4 *)(param_1 + 0x220) = 0;
  *(undefined4 *)(param_1 + 0x224) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 1;
  *(undefined4 *)(param_1 + 0x1d4) = 0;
  ExceptionList = local_c;
  return param_1;
}


// ---- FUN_100045f0 @ 100045f0

COleControl * __thiscall FUN_100045f0(void *this,byte param_1)

{
  FUN_10004680(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_10004610 @ 10004610

void __fastcall FUN_10004610(CStatic *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10009298;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  CString::~CString((CString *)(param_1 + 0x40));
  local_4 = 0xffffffff;
  CStatic::~CStatic(param_1);
  ExceptionList = local_c;
  return;
}


// ---- FUN_10004660 @ 10004660

CStatic * __thiscall FUN_10004660(void *this,byte param_1)

{
  FUN_10004610(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_10004680 @ 10004680

void __fastcall FUN_10004680(COleControl *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_100092ce;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)param_1 = &PTR_FUN_1000a8fc;
  local_4 = 1;
  if (*(int **)(param_1 + 0x1d4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x1d4) + 4))(1);
  }
  local_4._0_1_ = 2;
  CString::~CString((CString *)(param_1 + 0x218));
  local_4 = (uint)local_4._1_3_ << 8;
  CStatic::~CStatic((CStatic *)(param_1 + 0x1d8));
  local_4 = 0xffffffff;
  COleControl::~COleControl(param_1);
  ExceptionList = pvStack_c;
  return;
}


// ---- FUN_10004710 @ 10004710

void __thiscall FUN_10004710(COleControl *param_1,CDC *param_2,CRect *param_3)

{
  CDC *pCVar1;
  CRect *pCVar2;
  int iVar3;
  BOOL BVar4;
  
  pCVar2 = param_3;
  pCVar1 = param_2;
  COleControl::DoSuperclassPaint(param_1,param_2,param_3);
  iVar3 = COleControl::AmbientUserMode(param_1);
  if (iVar3 == 0) {
    BVar4 = IsWindow(*(HWND *)(param_1 + 0x1f8));
    if (BVar4 != 0) {
      COleControl::GetControlSize(param_1,(int *)&param_2,(int *)&param_3);
      if (param_3 != DAT_1000e274) {
        COleControl::SetControlSize(param_1,(int)param_2,(int)DAT_1000e274);
        return;
      }
      CString::CString((CString *)&stack0xffffffe8,(CString *)(param_1 + 0x218));
      FUN_100040e0(pCVar1,*(int *)pCVar2,*(LPCSTR *)(pCVar2 + 4),*(undefined4 *)(pCVar2 + 8),
                   *(int *)(pCVar2 + 0xc));
    }
  }
  return;
}


// ---- FUN_100047c0 @ 100047c0

void __thiscall FUN_100047c0(void *this,CPropExchange *param_1)

{
  (*(code *)**(undefined4 **)param_1)((int)this + 0x48,CONCAT22(DAT_1000a4c8,DAT_1000a4ca),1);
  COleControl::DoPropExchange(this,param_1);
  PX_Bool(param_1,s_OmitName_1000c840,(int *)((int)this + 0x228),0);
  return;
}


// ---- FUN_10004820 @ 10004820

void FUN_10004820(void)

{
  CDialog local_6c [96];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_100092e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CDialog::CDialog(local_6c,1,(CWnd *)0x0);
  local_4 = 0;
  CDialog::DoModal(local_6c);
  local_4 = 0xffffffff;
  CDialog::~CDialog(local_6c);
  ExceptionList = local_c;
  return;
}


// ---- FUN_10004880 @ 10004880

void __thiscall FUN_10004880(void *this,tagCREATESTRUCTA *param_1)

{
  int iVar1;
  
  iVar1 = COleControl::AmbientUserMode(this);
  if (iVar1 == 0) {
    COleControl::GetAmbientProperty(this,-0x2be,8,(void *)((int)this + 0x218));
  }
  else {
    CString::LoadStringA((CString *)((int)this + 0x218),0x65);
  }
  *(char **)(param_1 + 0x28) = s_STATIC_1000dc9c;
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 0x100;
  CWnd::PreCreateWindow(this,param_1);
  return;
}


// ---- FUN_100048d0 @ 100048d0

void __fastcall FUN_100048d0(int param_1)

{
  BOOL BVar1;
  
  BVar1 = IsWindow(*(HWND *)(param_1 + 0x1f8));
  if (BVar1 != 0) {
    CWnd::EnableWindow((CWnd *)(param_1 + 0x1d8),*(int *)(param_1 + 0xbc));
    InvalidateRect(*(HWND *)(param_1 + 0x1f8),(RECT *)0x0,1);
  }
  return;
}


// ---- FUN_10004910 @ 10004910

undefined4 __thiscall FUN_10004910(int *param_1,int param_2,int param_3)

{
  if ((param_1[0x73] != 0) && (param_1[0x70] != 0)) {
    if ((param_2 == param_1[0x70]) && ((param_3 == 3 || (param_3 == 4)))) {
      param_1[0x2f] = (uint)(param_3 == 3);
      (**(code **)(*param_1 + 0x110))();
      return 0;
    }
    FUN_100049a0((int)param_1);
  }
  return 0;
}


// ---- FUN_10004960 @ 10004960

void __fastcall FUN_10004960(undefined4 *param_1)

{
  *(undefined4 *)(param_1[1] + 4) = *param_1;
  return;
}


// ---- FUN_10004970 @ 10004970

undefined4 __fastcall FUN_10004970(int param_1)

{
  if ((*(int *)(param_1 + 0x1cc) != 0) && (*(int *)(param_1 + 0x1c0) != 0)) {
    FUN_100049a0(param_1);
  }
  return 0;
}


// ---- FUN_10004990 @ 10004990

undefined4 FUN_10004990(void)

{
  return 0;
}


// ---- FUN_100049a0 @ 100049a0

void __fastcall FUN_100049a0(int param_1)

{
  int iVar1;
  LRESULT LVar2;
  undefined4 *puVar3;
  CString *pCVar4;
  CString local_18 [4];
  void *local_14;
  undefined4 local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &DAT_10009310;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0x1cc) == 0) {
    ExceptionList = local_14;
    return;
  }
  ExceptionList = &local_c;
  CString::CString(local_18,&DAT_1000e284);
  iVar1 = *(int *)(param_1 + 0x1c0);
  local_4 = 0;
  if (0 < iVar1) {
    if (*(int *)(param_1 + 0x228) == 0) {
      iVar1 = FUN_10008460(*(void **)(param_1 + 0x1d4),iVar1,local_18);
    }
    else {
      iVar1 = FUN_100084d0(*(void **)(param_1 + 0x1d4),iVar1,&local_10,local_18);
    }
    if ((iVar1 != 1) ||
       (LVar2 = SendMessageA(*(HWND *)(param_1 + 0x1c4),DAT_1000e0b4,*(WPARAM *)(param_1 + 0x1c8),
                             *(LPARAM *)(param_1 + 0x1c0)), LVar2 < 0)) goto LAB_10004b01;
    *(LRESULT *)(param_1 + 0xbc) = LVar2;
    CWnd::EnableWindow((CWnd *)(param_1 + 0x1d8),LVar2);
    if (*(int *)(param_1 + 0x228) == 1) {
      puVar3 = (undefined4 *)CString::Left(local_18,(int)&local_14);
      iVar1 = _mbscmp((uchar *)*puVar3,&DAT_1000dca4);
      CString::~CString(local_18);
      if (iVar1 == 0) {
        pCVar4 = (CString *)CString::Right((CString *)&stack0xffffffe4,(int)local_18);
        local_c._0_1_ = 1;
        CString::operator=((CString *)(param_1 + 0x218),pCVar4);
        local_c = (void *)((uint)local_c._1_3_ << 8);
        CString::~CString((CString *)&stack0xffffffe4);
        goto LAB_10004af0;
      }
    }
    CString::operator=((CString *)(param_1 + 0x218),(CString *)&stack0xffffffe0);
  }
LAB_10004af0:
  InvalidateRect(*(HWND *)(param_1 + 0x1f8),(RECT *)0x0,1);
LAB_10004b01:
  local_c = (void *)0xffffffff;
  CString::~CString((CString *)&stack0xffffffe0);
  ExceptionList = local_14;
  return;
}


// ---- FUN_10004c80 @ 10004c80

void __fastcall FUN_10004c80(COleControl *param_1)

{
  COleControl::OnDestroy(param_1);
  (**(code **)(*(int *)(param_1 + 0x1d8) + 0x60))();
  return;
}


// ---- FUN_10004ca0 @ 10004ca0

undefined4 __thiscall FUN_10004ca0(int param_1,uint param_2,HWND param_3,HWND param_4)

{
  void **ppvVar1;
  uint uVar2;
  BOOL BVar3;
  LRESULT LVar4;
  void *this;
  undefined4 *this_00;
  int iVar5;
  undefined4 uVar6;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &UNK_1000932a;
  pvStack_c = ExceptionList;
  if (param_2 == 0) {
    ExceptionList = &pvStack_c;
    CString::LoadStringA((CString *)(param_1 + 0x218),0x65);
    ppvVar1 = ExceptionList;
  }
  else {
    uVar2 = param_2 >> 0x10;
    if (uVar2 < 0x12f) {
      ppvVar1 = &pvStack_c;
      if (uVar2 < 300) {
        ppvVar1 = &pvStack_c;
        switch(uVar2) {
        case 100:
        case 0x65:
        case 200:
        case 0xc9:
          break;
        default:
          goto LAB_10004ea5;
        }
      }
    }
    else {
      ppvVar1 = &pvStack_c;
      if (uVar2 != 400) {
LAB_10004ea5:
        return 0;
      }
    }
  }
  ExceptionList = ppvVar1;
  BVar3 = IsWindow(param_3);
  uVar6 = 0;
  if (BVar3 != 0) {
    BVar3 = IsWindow(param_4);
    uVar6 = 0;
    if (BVar3 != 0) {
      if (*(int *)(param_1 + 0x1cc) == 0) {
        *(HWND *)(param_1 + 0x1c4) = param_3;
        *(HWND *)(param_1 + 0x1c8) = param_4;
        LVar4 = SendMessageA(param_3,DAT_1000e16c,0,0);
        if (LVar4 != 0) {
          this = operator_new(0x20);
          uStack_4 = 0;
          if (this == (void *)0x0) {
            this_00 = (undefined4 *)0x0;
          }
          else {
            this_00 = FUN_100083e0(this,*(undefined4 *)(param_1 + 0x1c4),
                                   *(undefined4 *)(param_1 + 0x1c8));
          }
          uStack_4 = 0xffffffff;
          *(undefined4 **)(param_1 + 0x1d4) = this_00;
          if (param_1 == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = *(undefined4 *)(param_1 + 0x20);
          }
          iVar5 = FUN_10008550(this_00,1,1,uVar6);
          if (0 < iVar5) {
            *(undefined4 *)(param_1 + 0x1cc) = 1;
          }
        }
      }
      if (*(int *)(param_1 + 0x1cc) != 0) {
        if (*(uint *)(param_1 + 0x1c0) != param_2) {
          LVar4 = 0;
          if (param_2 != 0) {
            if (param_1 == 0) {
              uVar6 = 0;
            }
            else {
              uVar6 = *(undefined4 *)(param_1 + 0x20);
            }
            FUN_10008550(*(void **)(param_1 + 0x1d4),param_2,1,uVar6);
            LVar4 = SendMessageA(*(HWND *)(param_1 + 0x1c4),DAT_1000e0b0,
                                 *(WPARAM *)(param_1 + 0x1c8),param_2);
            if (LVar4 != 0) {
              if (param_1 == 0) {
                uVar6 = 0;
              }
              else {
                uVar6 = *(undefined4 *)(param_1 + 0x20);
              }
              FUN_10008550(*(void **)(param_1 + 0x1d4),param_2 - 1,1,uVar6);
            }
          }
          if (*(int *)(param_1 + 0x1c0) != 0) {
            if (param_1 == 0) {
              uVar6 = 0;
            }
            else {
              uVar6 = *(undefined4 *)(param_1 + 0x20);
            }
            FUN_10008550(*(void **)(param_1 + 0x1d4),*(int *)(param_1 + 0x1c0),0,uVar6);
            if (*(int *)(param_1 + 0x1d0) != 0) {
              if (param_1 == 0) {
                uVar6 = 0;
              }
              else {
                uVar6 = *(undefined4 *)(param_1 + 0x20);
              }
              FUN_10008550(*(void **)(param_1 + 0x1d4),*(int *)(param_1 + 0x1c0) + -1,0,uVar6);
            }
          }
          *(uint *)(param_1 + 0x1c0) = param_2;
          *(LRESULT *)(param_1 + 0x1d0) = LVar4;
        }
        FUN_100049a0(param_1);
      }
      uVar6 = *(undefined4 *)(param_1 + 0x1cc);
    }
  }
  ExceptionList = pvStack_c;
  return uVar6;
}


// ---- FUN_100050b0 @ 100050b0

void __thiscall FUN_100050b0(void *this,UINT_PTR param_1)

{
  COleControl *this_00;
  
  KillTimer(*(HWND *)((int)this + 0x20),param_1);
  if (param_1 == 1) {
    if (*(int *)((int)this + 0x21c) != 0) {
      COleControl::FireEvent(this_00,(long)this,(uchar *)0x1);
      *(undefined4 *)((int)this + 0x21c) = 0;
    }
  }
  else if (param_1 == 2) {
    if (*(int *)((int)this + 0x220) != 0) {
      COleControl::FireEvent(this_00,(long)this,(uchar *)0x1);
      *(undefined4 *)((int)this + 0x220) = 0;
      CWnd::Default(this);
      return;
    }
  }
  else if ((param_1 == 3) && (*(int *)((int)this + 0x224) != 0)) {
    COleControl::FireEvent(*(COleControl **)((int)this + 0x1c0),(long)this,(uchar *)0x1);
    *(undefined4 *)((int)this + 0x224) = 0;
    CWnd::Default(this);
    return;
  }
  CWnd::Default(this);
  return;
}


// ---- FUN_100051d0 @ 100051d0

void FUN_100051d0(void)

{
  func_0x10008c6e(1);
  return;
}


// ---- FUN_100051f0 @ 100051f0

void __fastcall FUN_100051f0(int param_1)

{
  EnableWindow(*(HWND *)(param_1 + 0x20),0);
  return;
}


// ---- FUN_10005200 @ 10005200

void __fastcall FUN_10005200(int param_1)

{
  EnableWindow(*(HWND *)(param_1 + 0x20),1);
  return;
}


// ---- FUN_10005210 @ 10005210

CStatic * __thiscall FUN_10005210(void *this,byte param_1)

{
  CStatic::~CStatic(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_10005240 @ 10005240

COlePropertyPage * FUN_10005240(void)

{
  COlePropertyPage *pCVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1000934a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pCVar1 = operator_new(0xd8);
  local_4 = 0;
  if (pCVar1 != (COlePropertyPage *)0x0) {
    pCVar1 = FUN_10005400(pCVar1);
    ExceptionList = local_c;
    return pCVar1;
  }
  ExceptionList = local_c;
  return (COlePropertyPage *)0x0;
}


// ---- FUN_100052b0 @ 100052b0

undefined ** FUN_100052b0(void)

{
  return &PTR_s_CLEOStaticPropPage_1000ac78;
}


// ---- FUN_100052d0 @ 100052d0

undefined ** FUN_100052d0(void)

{
  return &PTR_LAB_1000ac90;
}


// ---- FUN_100052f0 @ 100052f0

void FUN_100052f0(void)

{
  FUN_10005310(&DAT_1000e290,(_GUID *)&DAT_1000acd0,
               (CRuntimeClass *)&PTR_s_CLEOStaticPropPage_1000ac78,0,"LEOSTAT.LEOStaticPropPage.1");
  return;
}


// ---- FUN_10005310 @ 10005310

COleObjectFactory * __thiscall
FUN_10005310(void *this,_GUID *param_1,CRuntimeClass *param_2,int param_3,char *param_4)

{
  COleObjectFactory::COleObjectFactory(this,param_1,param_2,param_3,param_4);
  *(undefined ***)this = &PTR_LAB_1000ace0;
  return this;
}


// ---- FUN_10005340 @ 10005340

COleObjectFactory * __thiscall FUN_10005340(void *this,byte param_1)

{
  COleObjectFactory::~COleObjectFactory(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_10005360 @ 10005360

void FUN_10005360(void)

{
  FUN_10008f55((_onexit_t)&LAB_10005370);
  return;
}


// ---- FUN_10005390 @ 10005390

undefined4 FUN_10005390(undefined4 *param_1)

{
  *param_1 = DAT_1000acd0;
  param_1[1] = DAT_1000acd4;
  param_1[2] = DAT_1000acd8;
  param_1[3] = DAT_1000acdc;
  return 0;
}


// ---- FUN_10005400 @ 10005400

COlePropertyPage * __fastcall FUN_10005400(COlePropertyPage *param_1)

{
  COlePropertyPage::COlePropertyPage(param_1,100,100);
  *(undefined ***)param_1 = &PTR_FUN_1000ad54;
  return param_1;
}


// ---- FUN_10005420 @ 10005420

COlePropertyPage * __thiscall FUN_10005420(void *this,byte param_1)

{
  COlePropertyPage::~COlePropertyPage(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- ~COlePropertyPage @ 10005440

void __thiscall COlePropertyPage::~COlePropertyPage(COlePropertyPage *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008ce6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~COlePropertyPage(this);
  return;
}


// ---- FUN_10005450 @ 10005450

void FUN_10005450(CDataExchange *param_1)

{
  DDP_PostProcessing(param_1);
  return;
}


// ---- FUN_100082b0 @ 100082b0

undefined4 * FUN_100082b0(void)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1000936a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x20);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = FUN_10008330(puVar1);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


// ---- FUN_10008320 @ 10008320

undefined ** FUN_10008320(void)

{
  return &PTR_s_CServerComms_1000ae40;
}


// ---- FUN_10008330 @ 10008330

undefined4 * __fastcall FUN_10008330(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10009388;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_1000ae58;
  local_4 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0x809;
  param_1[5] = 0;
  param_1[6] = 0;
  FUN_100085b0((int)param_1);
  ExceptionList = local_c;
  return param_1;
}


// ---- FUN_10008390 @ 10008390

void __fastcall FUN_10008390(undefined4 *param_1)

{
  *param_1 = &PTR_GetRuntimeClass_1000ae6c;
  return;
}


// ---- FUN_100083a0 @ 100083a0

undefined4 * __thiscall FUN_100083a0(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_GetRuntimeClass_1000ae6c;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}


// ---- FUN_100083c0 @ 100083c0

undefined4 * __thiscall FUN_100083c0(void *this,byte param_1)

{
  FUN_10008450(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_100083e0 @ 100083e0

undefined4 * __thiscall FUN_100083e0(void *this,undefined4 param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_100093a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 4) = param_1;
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_1000ae58;
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0x809;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  FUN_100085b0((int)this);
  ExceptionList = local_c;
  return this;
}


// ---- FUN_10008450 @ 10008450

void __fastcall FUN_10008450(undefined4 *param_1)

{
  *param_1 = &PTR_GetRuntimeClass_1000ae6c;
  return;
}


// ---- FUN_10008460 @ 10008460

undefined4 __thiscall FUN_10008460(void *this,undefined4 param_1,CString *param_2)

{
  int iVar1;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 *local_168;
  undefined4 local_164;
  char local_160 [352];
  
  local_164 = param_1;
  local_168 = &local_164;
  local_170 = DAT_1000e580;
  local_16c = 0x164;
  iVar1 = FUN_10008600(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_170);
  *(int *)((int)this + 0xc) = iVar1;
  if (iVar1 == 1) {
    CString::operator=(param_2,local_160);
  }
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_100084d0 @ 100084d0

undefined4 __thiscall
FUN_100084d0(void *this,undefined4 param_1,undefined4 *param_2,CString *param_3)

{
  int iVar1;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 *local_16c;
  undefined4 local_168;
  undefined4 local_164;
  char local_160 [352];
  
  local_168 = param_1;
  local_16c = &local_168;
  local_174 = DAT_1000e574;
  local_170 = 0x168;
  iVar1 = FUN_10008600(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_174);
  *(int *)((int)this + 0xc) = iVar1;
  if (iVar1 == 1) {
    *param_2 = local_164;
    CString::operator=(param_3,local_160);
  }
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_10008550 @ 10008550

void __thiscall FUN_10008550(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  LRESULT LVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined1 *local_4;
  
  local_4 = (undefined1 *)&local_18;
  local_18 = param_1;
  local_14 = param_2;
  local_10 = param_3;
  local_c = DAT_1000e510;
  local_8 = 0xc;
  LVar1 = SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_c);
  *(LRESULT *)((int)this + 0xc) = LVar1;
  return;
}


// ---- FUN_100085b0 @ 100085b0

void __fastcall FUN_100085b0(int param_1)

{
  int iVar1;
  _OSVERSIONINFOA *p_Var2;
  _OSVERSIONINFOA local_94;
  
  p_Var2 = &local_94;
  for (iVar1 = 0x25; iVar1 != 0; iVar1 = iVar1 + -1) {
    p_Var2->dwOSVersionInfoSize = 0;
    p_Var2 = (_OSVERSIONINFOA *)&p_Var2->dwMajorVersion;
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  local_94.dwOSVersionInfoSize = 0x94;
  GetVersionExA(&local_94);
  if (local_94.dwPlatformId == 2) {
    *(undefined4 *)(param_1 + 0x1c) = 1;
  }
  return;
}


// ---- FUN_10008600 @ 10008600

void __thiscall
FUN_10008600(void *this,HWND param_1,UINT param_2,WPARAM param_3,undefined4 *param_4)

{
  if (*(int *)((int)this + 0x1c) != 0) {
    FUN_10008640(this,param_1,param_4);
    return;
  }
  SendMessageA(param_1,param_2,param_3,(LPARAM)param_4);
  return;
}


// ---- FUN_10008640 @ 10008640

LRESULT __thiscall FUN_10008640(void *this,HWND param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  DWORD DVar3;
  HANDLE hFileMappingObject;
  undefined4 *lpBaseAddress;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 uVar9;
  undefined4 local_10c;
  uint local_108;
  char *local_104;
  char local_100 [256];
  
  iVar2 = rand();
  uVar9 = *(undefined4 *)((int)this + 8);
  DVar3 = GetTickCount();
  sprintf(local_100,s_MMF_LEO_SC__lx__lx__lx_1000dccc,DVar3,uVar9,iVar2);
  hFileMappingObject =
       CreateFileMappingA((HANDLE)0xffffffff,(LPSECURITY_ATTRIBUTES)0x0,4,0,param_2[1] + 8,local_100
                         );
  if (hFileMappingObject == (HANDLE)0x0) {
    return 0;
  }
  lpBaseAddress = MapViewOfFile(hFileMappingObject,6,0,0,0);
  if (lpBaseAddress == (undefined4 *)0x0) {
    return 0;
  }
  *lpBaseAddress = param_2[1];
  uVar5 = param_2[1];
  puVar6 = (undefined4 *)param_2[2];
  puVar7 = lpBaseAddress;
  for (uVar4 = uVar5 >> 2; puVar7 = puVar7 + 1, uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
    puVar7 = (undefined4 *)((int)puVar7 + 1);
  }
  local_10c = *param_2;
  local_108 = 0xffffffff;
  pcVar8 = local_100;
  do {
    if (local_108 == 0) break;
    local_108 = local_108 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  local_108 = ~local_108;
  local_104 = local_100;
  DAT_1000e2dc = SendMessageA(param_1,0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_10c);
  uVar5 = param_2[1];
  puVar6 = (undefined4 *)param_2[2];
  puVar7 = lpBaseAddress;
  for (uVar4 = uVar5 >> 2; puVar7 = puVar7 + 1, uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar6 = *puVar7;
    puVar6 = puVar6 + 1;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined1 *)puVar6 = *(undefined1 *)puVar7;
    puVar7 = (undefined4 *)((int)puVar7 + 1);
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  UnmapViewOfFile(lpBaseAddress);
  CloseHandle(hFileMappingObject);
  return DAT_1000e2dc;
}


// ---- ~CWinApp @ 10008770

void __thiscall CWinApp::~CWinApp(CWinApp *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CWinApp(this);
  return;
}


// ---- GetConnectionHook @ 100087dc

IConnectionPoint * __thiscall CCmdTarget::GetConnectionHook(CCmdTarget *this,_GUID *param_1)

{
  IConnectionPoint *pIVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100087dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = GetConnectionHook(this,param_1);
  return pIVar1;
}


// ---- GetExtraConnectionPoints @ 100087e2

int __thiscall CCmdTarget::GetExtraConnectionPoints(CCmdTarget *this,CPtrArray *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100087e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetExtraConnectionPoints(this,param_1);
  return iVar1;
}


// ---- GetInterfaceHook @ 100087e8

IUnknown * __thiscall CCmdTarget::GetInterfaceHook(CCmdTarget *this,void *param_1)

{
  IUnknown *pIVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100087e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = GetInterfaceHook(this,param_1);
  return pIVar1;
}


// ---- OnCreateAggregates @ 100087ee

int __thiscall CCmdTarget::OnCreateAggregates(CCmdTarget *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100087ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCreateAggregates(this);
  return iVar1;
}


// ---- GetEventSinkMap @ 100087f4

AFX_EVENTSINKMAP * __thiscall CCmdTarget::GetEventSinkMap(CCmdTarget *this)

{
  AFX_EVENTSINKMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100087f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetEventSinkMap(this);
  return pAVar1;
}


// ---- GetInterfaceMap @ 100087fa

AFX_INTERFACEMAP * __thiscall CCmdTarget::GetInterfaceMap(CCmdTarget *this)

{
  AFX_INTERFACEMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100087fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetInterfaceMap(this);
  return pAVar1;
}


// ---- GetConnectionMap @ 10008800

AFX_CONNECTIONMAP * __thiscall CCmdTarget::GetConnectionMap(CCmdTarget *this)

{
  AFX_CONNECTIONMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008800. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetConnectionMap(this);
  return pAVar1;
}


// ---- GetDispatchMap @ 10008806

AFX_DISPMAP * __thiscall CCmdTarget::GetDispatchMap(CCmdTarget *this)

{
  AFX_DISPMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008806. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetDispatchMap(this);
  return pAVar1;
}


// ---- GetCommandMap @ 1000880c

AFX_OLECMDMAP * __thiscall CCmdTarget::GetCommandMap(CCmdTarget *this)

{
  AFX_OLECMDMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000880c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetCommandMap(this);
  return pAVar1;
}


// ---- GetTypeLib @ 10008818

long __thiscall CCmdTarget::GetTypeLib(CCmdTarget *this,ulong param_1,ITypeLib **param_2)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = GetTypeLib(this,param_1,param_2);
  return lVar1;
}


// ---- GetTypeLibCache @ 1000881e

CTypeLibCache * __thiscall CCmdTarget::GetTypeLibCache(CCmdTarget *this)

{
  CTypeLibCache *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000881e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetTypeLibCache(this);
  return pCVar1;
}


// ---- GetTypeInfoCount @ 10008824

uint __thiscall CCmdTarget::GetTypeInfoCount(CCmdTarget *this)

{
  uint uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = GetTypeInfoCount(this);
  return uVar1;
}


// ---- GetDispatchIID @ 1000882a

int __thiscall CCmdTarget::GetDispatchIID(CCmdTarget *this,_GUID *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000882a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetDispatchIID(this,param_1);
  return iVar1;
}


// ---- IsInvokeAllowed @ 10008830

int __thiscall CCmdTarget::IsInvokeAllowed(CCmdTarget *this,long param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = IsInvokeAllowed(this,param_1);
  return iVar1;
}


// ---- OnCmdMsg @ 1000883c

int __thiscall
CCmdTarget::OnCmdMsg
          (CCmdTarget *this,uint param_1,int param_2,void *param_3,AFX_CMDHANDLERINFO *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000883c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCmdMsg(this,param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- CWinApp @ 10008848

void __thiscall CWinApp::CWinApp(CWinApp *this,char *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10008848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CWinApp(this,param_1);
  return;
}


// ---- operator_delete @ 1000884e

void __cdecl operator_delete(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x1000884e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  operator_delete(param_1);
  return;
}


// ---- UpdateRegistryAll @ 10008860

int COleObjectFactory::UpdateRegistryAll(int param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008860. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = UpdateRegistryAll(param_1);
  return iVar1;
}


// ---- AfxOleRegisterTypeLib @ 10008866

int AfxOleRegisterTypeLib(HINSTANCE__ *param_1,_GUID *param_2,char *param_3,char *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008866. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AfxOleRegisterTypeLib(param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- AfxGetModuleState @ 1000886c

AFX_MODULE_STATE * AfxGetModuleState(void)

{
  AFX_MODULE_STATE *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000886c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = AfxGetModuleState();
  return pAVar1;
}


// ---- AFX_MAINTAIN_STATE2 @ 10008872

void __thiscall
AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2(AFX_MAINTAIN_STATE2 *this,AFX_MODULE_STATE *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10008872. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AFX_MAINTAIN_STATE2(this,param_1);
  return;
}


// ---- AfxOleUnregisterTypeLib @ 10008878

int AfxOleUnregisterTypeLib(_GUID *param_1,ushort param_2,ushort param_3,ulong param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AfxOleUnregisterTypeLib(param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- SetEnabled @ 1000887e

void __thiscall COleControl::SetEnabled(COleControl *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x1000887e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetEnabled(this,param_1);
  return;
}


// ---- GetEnabled @ 10008884

int __thiscall COleControl::GetEnabled(COleControl *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetEnabled(this);
  return iVar1;
}


// ---- ~CPaintDC @ 1000888a

void __thiscall CPaintDC::~CPaintDC(CPaintDC *this)

{
                    /* WARNING: Could not recover jumptable at 0x1000888a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CPaintDC(this);
  return;
}


// ---- CString @ 10008890

void __thiscall CString::CString(CString *this,CString *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10008890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CString(this,param_1);
  return;
}


// ---- IsWindowEnabled @ 10008896

int __thiscall CWnd::IsWindowEnabled(CWnd *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008896. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = IsWindowEnabled(this);
  return iVar1;
}


// ---- CPaintDC @ 1000889c

void __thiscall CPaintDC::CPaintDC(CPaintDC *this,CWnd *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x1000889c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CPaintDC(this,param_1);
  return;
}


// ---- ~CString @ 100088a2

void __thiscall CString::~CString(CString *this)

{
                    /* WARNING: Could not recover jumptable at 0x100088a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CString(this);
  return;
}


// ---- Draw3dRect @ 100088a8

void __thiscall CDC::Draw3dRect(CDC *this,tagRECT *param_1,ulong param_2,ulong param_3)

{
                    /* WARNING: Could not recover jumptable at 0x100088a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Draw3dRect(this,param_1,param_2,param_3);
  return;
}


// ---- SetTextAlign @ 100088ae

uint __thiscall CDC::SetTextAlign(CDC *this,uint param_1)

{
  uint uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100088ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = SetTextAlign(this,param_1);
  return uVar1;
}


// ---- operator_new @ 100088b4

void * __cdecl operator_new(uint param_1)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100088b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = operator_new(param_1);
  return pvVar1;
}


// ---- COleObjectFactory @ 100088ea

void __thiscall
COleObjectFactory::COleObjectFactory
          (COleObjectFactory *this,_GUID *param_1,CRuntimeClass *param_2,int param_3,char *param_4)

{
                    /* WARNING: Could not recover jumptable at 0x100088ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  COleObjectFactory(this,param_1,param_2,param_3,param_4);
  return;
}


// ---- ~COleObjectFactory @ 100088f0

void __thiscall COleObjectFactory::~COleObjectFactory(COleObjectFactory *this)

{
                    /* WARNING: Could not recover jumptable at 0x100088f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~COleObjectFactory(this);
  return;
}


// ---- AfxGetTypeLibCache @ 100088f6

CTypeLibCache * AfxGetTypeLibCache(_GUID *param_1)

{
  CTypeLibCache *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100088f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = AfxGetTypeLibCache(param_1);
  return pCVar1;
}


// ---- AfxOleUnregisterClass @ 100088fc

int AfxOleUnregisterClass(_GUID *param_1,char *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100088fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AfxOleUnregisterClass(param_1,param_2);
  return iVar1;
}


// ---- AfxOleRegisterControlClass @ 10008902

int AfxOleRegisterControlClass
              (HINSTANCE__ *param_1,_GUID *param_2,char *param_3,uint param_4,uint param_5,
              int param_6,ulong param_7,_GUID *param_8,ushort param_9,ushort param_10)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008902. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AfxOleRegisterControlClass
                    (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                     param_10);
  return iVar1;
}


// ---- DestroySharedMenu @ 10008908

void __thiscall COleControl::DestroySharedMenu(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008908. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DestroySharedMenu(this);
  return;
}


// ---- BuildSharedMenu @ 1000890e

int __thiscall COleControl::BuildSharedMenu(COleControl *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000890e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = BuildSharedMenu(this);
  return iVar1;
}


// ---- RemoveFrameLevelUI @ 10008914

void __thiscall COleControl::RemoveFrameLevelUI(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008914. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RemoveFrameLevelUI(this);
  return;
}


// ---- AddFrameLevelUI @ 1000891a

void __thiscall COleControl::AddFrameLevelUI(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x1000891a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AddFrameLevelUI(this);
  return;
}


// ---- OnActivateInPlace @ 10008920

long __thiscall COleControl::OnActivateInPlace(COleControl *this,int param_1,tagMSG *param_2)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008920. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = OnActivateInPlace(this,param_1,param_2);
  return lVar1;
}


// ---- OnHide @ 10008926

long __thiscall COleControl::OnHide(COleControl *this)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008926. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = OnHide(this);
  return lVar1;
}


// ---- OnFrameClose @ 1000892c

void __thiscall COleControl::OnFrameClose(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x1000892c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnFrameClose(this);
  return;
}


// ---- ResizeFrameWindow @ 10008932

void __thiscall COleControl::ResizeFrameWindow(COleControl *this,int param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10008932. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ResizeFrameWindow(this,param_1,param_2);
  return;
}


// ---- CreateFrameWindow @ 10008938

CControlFrameWnd * __thiscall COleControl::CreateFrameWindow(COleControl *this)

{
  CControlFrameWnd *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = CreateFrameWindow(this);
  return pCVar1;
}


// ---- OnOpen @ 1000893e

long __thiscall COleControl::OnOpen(COleControl *this,int param_1,tagMSG *param_2)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000893e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = OnOpen(this,param_1,param_2);
  return lVar1;
}


// ---- OnReflectorDestroyed @ 10008944

void __thiscall COleControl::OnReflectorDestroyed(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnReflectorDestroyed(this);
  return;
}


// ---- SetInitialDataFormats @ 1000894a

void __thiscall COleControl::SetInitialDataFormats(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x1000894a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetInitialDataFormats(this);
  return;
}


// ---- CreateControlWindow @ 10008950

int __thiscall
COleControl::CreateControlWindow(COleControl *this,HWND__ *param_1,CRect *param_2,tagRECT *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CreateControlWindow(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- ClientToParent @ 10008956

void __thiscall COleControl::ClientToParent(COleControl *this,tagRECT *param_1,tagPOINT *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10008956. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ClientToParent(this,param_1,param_2);
  return;
}


// ---- ParentToClient @ 1000895c

uint __thiscall
COleControl::ParentToClient(COleControl *this,tagRECT *param_1,tagPOINT *param_2,int param_3)

{
  uint uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000895c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = ParentToClient(this,param_1,param_2,param_3);
  return uVar1;
}


// ---- GetClientOffset @ 10008962

void __thiscall COleControl::GetClientOffset(COleControl *this,long *param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10008962. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetClientOffset(this,param_1,param_2);
  return;
}


// ---- GetWindowlessDropTarget @ 10008968

IDropTarget * __thiscall COleControl::GetWindowlessDropTarget(COleControl *this)

{
  IDropTarget *pIVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008968. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = GetWindowlessDropTarget(this);
  return pIVar1;
}


// ---- OnWindowlessMessage @ 1000896e

int __thiscall
COleControl::OnWindowlessMessage
          (COleControl *this,uint param_1,uint param_2,long param_3,long *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000896e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnWindowlessMessage(this,param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- OnInactiveMouseMove @ 10008974

void __thiscall
COleControl::OnInactiveMouseMove
          (COleControl *this,tagRECT *param_1,long param_2,long param_3,ulong param_4)

{
                    /* WARNING: Could not recover jumptable at 0x10008974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnInactiveMouseMove(this,param_1,param_2,param_3,param_4);
  return;
}


// ---- OnInactiveSetCursor @ 1000897a

int __thiscall
COleControl::OnInactiveSetCursor
          (COleControl *this,tagRECT *param_1,long param_2,long param_3,ulong param_4,int param_5)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000897a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnInactiveSetCursor(this,param_1,param_2,param_3,param_4,param_5);
  return iVar1;
}


// ---- GetActivationPolicy @ 10008980

ulong __thiscall COleControl::GetActivationPolicy(COleControl *this)

{
  ulong uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = GetActivationPolicy(this);
  return uVar1;
}


// ---- GetControlFlags @ 10008986

ulong __thiscall COleControl::GetControlFlags(COleControl *this)

{
  ulong uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008986. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = GetControlFlags(this);
  return uVar1;
}


// ---- ReparentControlWindow @ 1000898c

void __thiscall
COleControl::ReparentControlWindow(COleControl *this,HWND__ *param_1,HWND__ *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x1000898c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReparentControlWindow(this,param_1,param_2);
  return;
}


// ---- OnGetPredefinedValue @ 10008992

int __thiscall
COleControl::OnGetPredefinedValue(COleControl *this,long param_1,ulong param_2,tagVARIANT *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008992. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnGetPredefinedValue(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- OnGetPredefinedStrings @ 10008998

int __thiscall
COleControl::OnGetPredefinedStrings
          (COleControl *this,long param_1,CStringArray *param_2,CDWordArray *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008998. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnGetPredefinedStrings(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- OnMapPropertyToPage @ 1000899e

int __thiscall
COleControl::OnMapPropertyToPage(COleControl *this,long param_1,_GUID *param_2,int *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000899e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnMapPropertyToPage(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- OnGetDisplayString @ 100089a4

int __thiscall COleControl::OnGetDisplayString(COleControl *this,long param_1,CString *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100089a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnGetDisplayString(this,param_1,param_2);
  return iVar1;
}


// ---- OnProperties @ 100089aa

int __thiscall
COleControl::OnProperties(COleControl *this,tagMSG *param_1,HWND__ *param_2,tagRECT *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100089aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnProperties(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- OnEdit @ 100089b0

int __thiscall
COleControl::OnEdit(COleControl *this,tagMSG *param_1,HWND__ *param_2,tagRECT *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100089b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnEdit(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- OnDoVerb @ 100089b6

int __thiscall
COleControl::OnDoVerb
          (COleControl *this,long param_1,tagMSG *param_2,HWND__ *param_3,tagRECT *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100089b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnDoVerb(this,param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- OnEnumVerbs @ 100089bc

int __thiscall COleControl::OnEnumVerbs(COleControl *this,IEnumOLEVERB **param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100089bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnEnumVerbs(this,param_1);
  return iVar1;
}


// ---- OnSetData @ 100089c2

int __thiscall
COleControl::OnSetData(COleControl *this,tagFORMATETC *param_1,tagSTGMEDIUM *param_2,int param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100089c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnSetData(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- OnRenderData @ 100089c8

int __thiscall
COleControl::OnRenderData(COleControl *this,tagFORMATETC *param_1,tagSTGMEDIUM *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100089c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnRenderData(this,param_1,param_2);
  return iVar1;
}


// ---- OnRenderFileData @ 100089ce

int __thiscall COleControl::OnRenderFileData(COleControl *this,tagFORMATETC *param_1,CFile *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100089ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnRenderFileData(this,param_1,param_2);
  return iVar1;
}


// ---- OnRenderGlobalData @ 100089d4

int __thiscall
COleControl::OnRenderGlobalData(COleControl *this,tagFORMATETC *param_1,void **param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100089d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnRenderGlobalData(this,param_1,param_2);
  return iVar1;
}


// ---- OnGetNaturalExtent @ 100089da

int __thiscall
COleControl::OnGetNaturalExtent
          (COleControl *this,ulong param_1,long param_2,tagDVTARGETDEVICE *param_3,HDC__ *param_4,
          tagExtentInfo *param_5,tagSIZE *param_6)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100089da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnGetNaturalExtent(this,param_1,param_2,param_3,param_4,param_5,param_6);
  return iVar1;
}


// ---- OnQueryHitRect @ 100089e0

int __thiscall
COleControl::OnQueryHitRect
          (COleControl *this,ulong param_1,tagRECT *param_2,tagRECT *param_3,long param_4,
          ulong *param_5)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100089e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnQueryHitRect(this,param_1,param_2,param_3,param_4,param_5);
  return iVar1;
}


// ---- OnQueryHitPoint @ 100089e6

int __thiscall COleControl::OnQueryHitPoint(void)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100089e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnQueryHitPoint();
  return iVar1;
}


// ---- OnGetViewStatus @ 100089ec

ulong __thiscall COleControl::OnGetViewStatus(COleControl *this)

{
  ulong uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100089ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = OnGetViewStatus(this);
  return uVar1;
}


// ---- OnGetViewRect @ 100089f2

int __thiscall COleControl::OnGetViewRect(COleControl *this,ulong param_1,_RECTL *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100089f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnGetViewRect(this,param_1,param_2);
  return iVar1;
}


// ---- OnGetViewExtent @ 100089f8

int __thiscall
COleControl::OnGetViewExtent
          (COleControl *this,ulong param_1,long param_2,tagDVTARGETDEVICE *param_3,tagSIZE *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100089f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnGetViewExtent(this,param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- OnGetColorSet @ 100089fe

int __thiscall
COleControl::OnGetColorSet
          (COleControl *this,tagDVTARGETDEVICE *param_1,HDC__ *param_2,tagLOGPALETTE **param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100089fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnGetColorSet(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- OnHideToolBars @ 10008a04

void __thiscall COleControl::OnHideToolBars(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008a04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnHideToolBars(this);
  return;
}


// ---- OnShowToolBars @ 10008a0a

void __thiscall COleControl::OnShowToolBars(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008a0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnShowToolBars(this);
  return;
}


// ---- OnGetInPlaceMenu @ 10008a10

HMENU__ * __thiscall COleControl::OnGetInPlaceMenu(COleControl *this)

{
  HMENU__ *pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = OnGetInPlaceMenu(this);
  return pHVar1;
}


// ---- OnFreezeEvents @ 10008a16

void __thiscall COleControl::OnFreezeEvents(COleControl *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10008a16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnFreezeEvents(this,param_1);
  return;
}


// ---- OnAmbientPropertyChange @ 10008a1c

void __thiscall COleControl::OnAmbientPropertyChange(COleControl *this,long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10008a1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnAmbientPropertyChange(this,param_1);
  return;
}


// ---- OnMnemonic @ 10008a22

void __thiscall COleControl::OnMnemonic(COleControl *this,tagMSG *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10008a22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnMnemonic(this,param_1);
  return;
}


// ---- OnGetControlInfo @ 10008a28

void __thiscall COleControl::OnGetControlInfo(COleControl *this,tagCONTROLINFO *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10008a28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnGetControlInfo(this,param_1);
  return;
}


// ---- OnForeColorChanged @ 10008a2e

void __thiscall COleControl::OnForeColorChanged(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008a2e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnForeColorChanged(this);
  return;
}


// ---- OnFontChanged @ 10008a34

void __thiscall COleControl::OnFontChanged(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008a34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnFontChanged(this);
  return;
}


// ---- OnTextChanged @ 10008a3a

void __thiscall COleControl::OnTextChanged(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008a3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnTextChanged(this);
  return;
}


// ---- OnBorderStyleChanged @ 10008a40

void __thiscall COleControl::OnBorderStyleChanged(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008a40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnBorderStyleChanged(this);
  return;
}


// ---- OnBackColorChanged @ 10008a46

void __thiscall COleControl::OnBackColorChanged(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008a46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnBackColorChanged(this);
  return;
}


// ---- OnAppearanceChanged @ 10008a4c

void __thiscall COleControl::OnAppearanceChanged(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008a4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnAppearanceChanged(this);
  return;
}


// ---- OnKeyPressEvent @ 10008a52

void __thiscall COleControl::OnKeyPressEvent(COleControl *this,ushort param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10008a52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnKeyPressEvent(this,param_1);
  return;
}


// ---- OnKeyUpEvent @ 10008a58

void __thiscall COleControl::OnKeyUpEvent(COleControl *this,ushort param_1,ushort param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10008a58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnKeyUpEvent(this,param_1,param_2);
  return;
}


// ---- OnKeyDownEvent @ 10008a5e

void __thiscall COleControl::OnKeyDownEvent(COleControl *this,ushort param_1,ushort param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10008a5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnKeyDownEvent(this,param_1,param_2);
  return;
}


// ---- OnClick @ 10008a64

void __thiscall COleControl::OnClick(COleControl *this,ushort param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10008a64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnClick(this,param_1);
  return;
}


// ---- OnEventAdvise @ 10008a6a

void __thiscall COleControl::OnEventAdvise(COleControl *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10008a6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnEventAdvise(this,param_1);
  return;
}


// ---- OnSetObjectRects @ 10008a70

int __thiscall COleControl::OnSetObjectRects(COleControl *this,tagRECT *param_1,tagRECT *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnSetObjectRects(this,param_1,param_2);
  return iVar1;
}


// ---- OnClose @ 10008a76

void __thiscall COleControl::OnClose(COleControl *this,ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10008a76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnClose(this,param_1);
  return;
}


// ---- OnSetExtent @ 10008a7c

int __thiscall COleControl::OnSetExtent(COleControl *this,tagSIZE *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008a7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnSetExtent(this,param_1);
  return iVar1;
}


// ---- OnSetClientSite @ 10008a82

void __thiscall COleControl::OnSetClientSite(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008a82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnSetClientSite(this);
  return;
}


// ---- DisplayError @ 10008a88

void __thiscall
COleControl::DisplayError
          (COleControl *this,long param_1,char *param_2,char *param_3,char *param_4,uint param_5)

{
                    /* WARNING: Could not recover jumptable at 0x10008a88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DisplayError(this,param_1,param_2,param_3,param_4,param_5);
  return;
}


// ---- GetMessageString @ 10008a8e

void __thiscall COleControl::GetMessageString(COleControl *this,uint param_1,CString *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10008a8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetMessageString(this,param_1,param_2);
  return;
}


// ---- OnDrawMetafile @ 10008a94

void __thiscall COleControl::OnDrawMetafile(COleControl *this,CDC *param_1,CRect *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10008a94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnDrawMetafile(this,param_1,param_2);
  return;
}


// ---- GetClientRect @ 10008a9a

void __thiscall COleControl::GetClientRect(COleControl *this,tagRECT *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10008a9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetClientRect(this,param_1);
  return;
}


// ---- DefWindowProcA @ 10008aa0

long __thiscall
COleControl::DefWindowProcA(COleControl *this,uint param_1,uint param_2,long param_3)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008aa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = DefWindowProcA(this,param_1,param_2,param_3);
  return lVar1;
}


// ---- WindowProc @ 10008aa6

long __thiscall COleControl::WindowProc(COleControl *this,uint param_1,uint param_2,long param_3)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008aa6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = WindowProc(this,param_1,param_2,param_3);
  return lVar1;
}


// ---- GetConnectionHook @ 10008aac

IConnectionPoint * __thiscall COleControl::GetConnectionHook(COleControl *this,_GUID *param_1)

{
  IConnectionPoint *pIVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008aac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = GetConnectionHook(this,param_1);
  return pIVar1;
}


// ---- GetExtraConnectionPoints @ 10008ab2

int __thiscall COleControl::GetExtraConnectionPoints(COleControl *this,CPtrArray *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008ab2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetExtraConnectionPoints(this,param_1);
  return iVar1;
}


// ---- GetInterfaceHook @ 10008ab8

IUnknown * __thiscall COleControl::GetInterfaceHook(COleControl *this,void *param_1)

{
  IUnknown *pIVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008ab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = GetInterfaceHook(this,param_1);
  return pIVar1;
}


// ---- OnCreateAggregates @ 10008abe

int __thiscall COleControl::OnCreateAggregates(COleControl *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008abe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCreateAggregates(this);
  return iVar1;
}


// ---- GetInterfaceMap @ 10008ac4

AFX_INTERFACEMAP * __thiscall COleControl::GetInterfaceMap(COleControl *this)

{
  AFX_INTERFACEMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008ac4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetInterfaceMap(this);
  return pAVar1;
}


// ---- GetConnectionMap @ 10008aca

AFX_CONNECTIONMAP * __thiscall COleControl::GetConnectionMap(COleControl *this)

{
  AFX_CONNECTIONMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008aca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetConnectionMap(this);
  return pAVar1;
}


// ---- GetDispatchIID @ 10008ad0

int __thiscall COleControl::GetDispatchIID(COleControl *this,_GUID *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetDispatchIID(this,param_1);
  return iVar1;
}


// ---- IsInvokeAllowed @ 10008ad6

int __thiscall COleControl::IsInvokeAllowed(COleControl *this,long param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008ad6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = IsInvokeAllowed(this,param_1);
  return iVar1;
}


// ---- OnFinalRelease @ 10008adc

void __thiscall COleControl::OnFinalRelease(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008adc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnFinalRelease(this);
  return;
}


// ---- Serialize @ 10008ae2

void __thiscall COleControl::Serialize(COleControl *this,CArchive *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10008ae2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Serialize(this,param_1);
  return;
}


// ---- SetOccDialogInfo @ 10008ae8

int __thiscall CWnd::SetOccDialogInfo(CWnd *this,_AFX_OCC_DIALOG_INFO *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008ae8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetOccDialogInfo(this,param_1);
  return iVar1;
}


// ---- IsFrameWnd @ 10008aee

int __thiscall CWnd::IsFrameWnd(CWnd *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008aee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = IsFrameWnd(this);
  return iVar1;
}


// ---- CheckAutoCenter @ 10008af4

int __thiscall CWnd::CheckAutoCenter(CWnd *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008af4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CheckAutoCenter(this);
  return iVar1;
}


// ---- OnChildNotify @ 10008afa

int __thiscall CWnd::OnChildNotify(CWnd *this,uint param_1,uint param_2,long param_3,long *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008afa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnChildNotify(this,param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- PostNcDestroy @ 10008b00

void __thiscall CWnd::PostNcDestroy(CWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008b00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PostNcDestroy(this);
  return;
}


// ---- DefWindowProcA @ 10008b06

long __thiscall CWnd::DefWindowProcA(CWnd *this,uint param_1,uint param_2,long param_3)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008b06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = DefWindowProcA(this,param_1,param_2,param_3);
  return lVar1;
}


// ---- OnWndMsg @ 10008b0c

int __thiscall CWnd::OnWndMsg(CWnd *this,uint param_1,uint param_2,long param_3,long *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008b0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnWndMsg(this,param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- WindowProc @ 10008b12

long __thiscall CWnd::WindowProc(CWnd *this,uint param_1,uint param_2,long param_3)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008b12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = WindowProc(this,param_1,param_2,param_3);
  return lVar1;
}


// ---- OnAmbientProperty @ 10008b18

int __thiscall
CWnd::OnAmbientProperty(CWnd *this,COleControlSite *param_1,long param_2,tagVARIANT *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008b18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnAmbientProperty(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- PreTranslateMessage @ 10008b1e

int __thiscall CWnd::PreTranslateMessage(CWnd *this,tagMSG *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008b1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = PreTranslateMessage(this,param_1);
  return iVar1;
}


// ---- GetSuperWndProcAddr @ 10008b24

_func_long_HWND___ptr_uint_uint_long ** __thiscall CWnd::GetSuperWndProcAddr(CWnd *this)

{
  _func_long_HWND___ptr_uint_uint_long **pp_Var1;
  
                    /* WARNING: Could not recover jumptable at 0x10008b24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pp_Var1 = GetSuperWndProcAddr(this);
  return pp_Var1;
}


// ---- OnNotify @ 10008b2a

int __thiscall CWnd::OnNotify(CWnd *this,uint param_1,long param_2,long *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008b2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnNotify(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- OnCommand @ 10008b30

int __thiscall CWnd::OnCommand(CWnd *this,uint param_1,long param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCommand(this,param_1,param_2);
  return iVar1;
}


// ---- EndModalLoop @ 10008b36

void __thiscall CWnd::EndModalLoop(CWnd *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10008b36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EndModalLoop(this,param_1);
  return;
}


// ---- ContinueModal @ 10008b3c

int __thiscall CWnd::ContinueModal(CWnd *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008b3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ContinueModal(this);
  return iVar1;
}


// ---- WinHelpA @ 10008b42

void __thiscall CWnd::WinHelpA(CWnd *this,ulong param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10008b42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WinHelpA(this,param_1,param_2);
  return;
}


// ---- GetScrollBarCtrl @ 10008b48

CScrollBar * __thiscall CWnd::GetScrollBarCtrl(CWnd *this,int param_1)

{
  CScrollBar *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008b48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetScrollBarCtrl(this,param_1);
  return pCVar1;
}


// ---- OnToolHitTest @ 10008b4e

int __thiscall CWnd::OnToolHitTest(void)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008b4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnToolHitTest();
  return iVar1;
}


// ---- CalcWindowRect @ 10008b54

void __thiscall CWnd::CalcWindowRect(CWnd *this,tagRECT *param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10008b54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CalcWindowRect(this,param_1,param_2);
  return;
}


// ---- PreCreateWindow @ 10008b5a

int __thiscall CWnd::PreCreateWindow(CWnd *this,tagCREATESTRUCTA *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008b5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = PreCreateWindow(this,param_1);
  return iVar1;
}


// ---- DestroyWindow @ 10008b60

int __thiscall CWnd::DestroyWindow(CWnd *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008b60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = DestroyWindow(this);
  return iVar1;
}


// ---- Create @ 10008b66

int __thiscall
CWnd::Create(CWnd *this,char *param_1,char *param_2,ulong param_3,tagRECT *param_4,CWnd *param_5,
            uint param_6,CCreateContext *param_7)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008b66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Create(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return iVar1;
}


// ---- PreSubclassWindow @ 10008b6c

void __thiscall CWnd::PreSubclassWindow(CWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008b6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PreSubclassWindow(this);
  return;
}


// ---- GetMessageMap @ 10008b72

AFX_MSGMAP * __thiscall CWnd::GetMessageMap(CWnd *this)

{
  AFX_MSGMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008b72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetMessageMap(this);
  return pAVar1;
}


// ---- OnFinalRelease @ 10008b78

void __thiscall CWnd::OnFinalRelease(CWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008b78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnFinalRelease(this);
  return;
}


// ---- GetRuntimeClass @ 10008b7e

CRuntimeClass * __thiscall CStatic::GetRuntimeClass(CStatic *this)

{
  CRuntimeClass *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008b7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetRuntimeClass(this);
  return pCVar1;
}


// ---- ~CStatic @ 10008b84

void __thiscall CStatic::~CStatic(CStatic *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008b84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CStatic(this);
  return;
}


// ---- ~COleControl @ 10008b8a

void __thiscall COleControl::~COleControl(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008b8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~COleControl(this);
  return;
}


// ---- InitializeIIDs @ 10008b90

void __thiscall COleControl::InitializeIIDs(COleControl *this,_GUID *param_1,_GUID *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10008b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitializeIIDs(this,param_1,param_2);
  return;
}


// ---- CString @ 10008b96

void __thiscall CString::CString(CString *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008b96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CString(this);
  return;
}


// ---- CWnd @ 10008b9c

void __thiscall CWnd::CWnd(CWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008b9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CWnd(this);
  return;
}


// ---- COleControl @ 10008ba2

void __thiscall COleControl::COleControl(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008ba2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  COleControl(this);
  return;
}


// ---- SetControlSize @ 10008ba8

int __thiscall COleControl::SetControlSize(COleControl *this,int param_1,int param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetControlSize(this,param_1,param_2);
  return iVar1;
}


// ---- GetControlSize @ 10008bae

void __thiscall COleControl::GetControlSize(COleControl *this,int *param_1,int *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10008bae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetControlSize(this,param_1,param_2);
  return;
}


// ---- AmbientUserMode @ 10008bb4

int __thiscall COleControl::AmbientUserMode(COleControl *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008bb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AmbientUserMode(this);
  return iVar1;
}


// ---- DoSuperclassPaint @ 10008bba

void __thiscall COleControl::DoSuperclassPaint(COleControl *this,CDC *param_1,CRect *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10008bba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DoSuperclassPaint(this,param_1,param_2);
  return;
}


// ---- PX_Bool @ 10008bc0

int __cdecl PX_Bool(CPropExchange *param_1,char *param_2,int *param_3,int param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008bc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = PX_Bool(param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- DoPropExchange @ 10008bc6

void __thiscall COleControl::DoPropExchange(COleControl *this,CPropExchange *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10008bc6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DoPropExchange(this,param_1);
  return;
}


// ---- OnResetState @ 10008bcc

void __thiscall COleControl::OnResetState(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008bcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnResetState(this);
  return;
}


// ---- ~CDialog @ 10008bd2

void __thiscall CDialog::~CDialog(CDialog *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008bd2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CDialog(this);
  return;
}


// ---- DoModal @ 10008bd8

int __thiscall CDialog::DoModal(CDialog *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008bd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = DoModal(this);
  return iVar1;
}


// ---- CDialog @ 10008bde

void __thiscall CDialog::CDialog(CDialog *this,uint param_1,CWnd *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10008bde. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CDialog(this,param_1,param_2);
  return;
}


// ---- LoadStringA @ 10008be4

int __thiscall CString::LoadStringA(CString *this,uint param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008be4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = LoadStringA(this,param_1);
  return iVar1;
}


// ---- GetAmbientProperty @ 10008bea

int __thiscall
COleControl::GetAmbientProperty(COleControl *this,long param_1,ushort param_2,void *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008bea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetAmbientProperty(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- EnableWindow @ 10008bf0

int __thiscall CWnd::EnableWindow(CWnd *this,int param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = EnableWindow(this,param_1);
  return iVar1;
}


// ---- operator= @ 10008bf6

CString * __thiscall CString::operator=(CString *this,CString *param_1)

{
  CString *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008bf6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = operator=(this,param_1);
  return pCVar1;
}


// ---- Right @ 10008bfc

void __thiscall CString::Right(CString *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10008bfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Right(this,param_1);
  return;
}


// ---- Left @ 10008c02

void __thiscall CString::Left(CString *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10008c02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Left(this,param_1);
  return;
}


// ---- CString @ 10008c08

void __thiscall CString::CString(CString *this,char *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10008c08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CString(this,param_1);
  return;
}


// ---- OnDestroy @ 10008c32

void __thiscall COleControl::OnDestroy(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008c32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnDestroy(this);
  return;
}


// ---- FireEvent @ 10008c38

void __thiscall COleControl::FireEvent(COleControl *this,long param_1,uchar *param_2,...)

{
                    /* WARNING: Could not recover jumptable at 0x10008c38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FireEvent(this,param_1,param_2);
  return;
}


// ---- Default @ 10008c62

long __thiscall CWnd::Default(CWnd *this)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008c62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = Default(this);
  return lVar1;
}


// ---- AfxOleRegisterPropertyPageClass @ 10008c74

int AfxOleRegisterPropertyPageClass(HINSTANCE__ *param_1,_GUID *param_2,uint param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008c74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AfxOleRegisterPropertyPageClass(param_1,param_2,param_3);
  return iVar1;
}


// ---- OnEditProperty @ 10008c7a

int __thiscall COlePropertyPage::OnEditProperty(COlePropertyPage *this,long param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008c7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnEditProperty(this,param_1);
  return iVar1;
}


// ---- OnHelp @ 10008c80

int __thiscall COlePropertyPage::OnHelp(COlePropertyPage *this,char *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008c80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnHelp(this,param_1);
  return iVar1;
}


// ---- OnObjectsChanged @ 10008c86

void __thiscall COlePropertyPage::OnObjectsChanged(COlePropertyPage *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008c86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnObjectsChanged(this);
  return;
}


// ---- OnSetPageSite @ 10008c8c

void __thiscall COlePropertyPage::OnSetPageSite(COlePropertyPage *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008c8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnSetPageSite(this);
  return;
}


// ---- PreInitDialog @ 10008c92

void __thiscall CDialog::PreInitDialog(CDialog *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008c92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PreInitDialog(this);
  return;
}


// ---- OnCancel @ 10008c98

void __thiscall CDialog::OnCancel(CDialog *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008c98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnCancel(this);
  return;
}


// ---- OnOK @ 10008c9e

void __thiscall CDialog::OnOK(CDialog *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008c9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnOK(this);
  return;
}


// ---- OnSetFont @ 10008ca4

void __thiscall CDialog::OnSetFont(CDialog *this,CFont *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10008ca4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnSetFont(this,param_1);
  return;
}


// ---- OnInitDialog @ 10008caa

int __thiscall COlePropertyPage::OnInitDialog(COlePropertyPage *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008caa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnInitDialog(this);
  return iVar1;
}


// ---- SetOccDialogInfo @ 10008cb0

int __thiscall CDialog::SetOccDialogInfo(CDialog *this,_AFX_OCC_DIALOG_INFO *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetOccDialogInfo(this,param_1);
  return iVar1;
}


// ---- CheckAutoCenter @ 10008cb6

int __thiscall CDialog::CheckAutoCenter(CDialog *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008cb6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CheckAutoCenter(this);
  return iVar1;
}


// ---- WindowProc @ 10008cbc

long __thiscall
COlePropertyPage::WindowProc(COlePropertyPage *this,uint param_1,uint param_2,long param_3)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008cbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = WindowProc(this,param_1,param_2,param_3);
  return lVar1;
}


// ---- PreTranslateMessage @ 10008cc2

int __thiscall COlePropertyPage::PreTranslateMessage(COlePropertyPage *this,tagMSG *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008cc2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = PreTranslateMessage(this,param_1);
  return iVar1;
}


// ---- OnCommand @ 10008cc8

int __thiscall COlePropertyPage::OnCommand(COlePropertyPage *this,uint param_1,long param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCommand(this,param_1,param_2);
  return iVar1;
}


// ---- GetInterfaceMap @ 10008cce

AFX_INTERFACEMAP * __thiscall COlePropertyPage::GetInterfaceMap(COlePropertyPage *this)

{
  AFX_INTERFACEMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008cce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetInterfaceMap(this);
  return pAVar1;
}


// ---- OnFinalRelease @ 10008cd4

void __thiscall COlePropertyPage::OnFinalRelease(COlePropertyPage *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008cd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnFinalRelease(this);
  return;
}


// ---- OnCmdMsg @ 10008cda

int __thiscall
CDialog::OnCmdMsg(CDialog *this,uint param_1,int param_2,void *param_3,AFX_CMDHANDLERINFO *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008cda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCmdMsg(this,param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- COlePropertyPage @ 10008ce0

void __thiscall COlePropertyPage::COlePropertyPage(COlePropertyPage *this,uint param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10008ce0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  COlePropertyPage(this,param_1,param_2);
  return;
}


// ---- ~COlePropertyPage @ 10008ce6

void __thiscall COlePropertyPage::~COlePropertyPage(COlePropertyPage *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008ce6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~COlePropertyPage(this);
  return;
}


// ---- DDP_PostProcessing @ 10008cec

void DDP_PostProcessing(CDataExchange *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10008cec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DDP_PostProcessing(param_1);
  return;
}


// ---- GetRuntimeClass @ 10008cf2

CRuntimeClass * __thiscall CObject::GetRuntimeClass(CObject *this)

{
  CRuntimeClass *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008cf2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetRuntimeClass(this);
  return pCVar1;
}


// ---- operator= @ 10008cf8

CString * __thiscall CString::operator=(CString *this,char *param_1)

{
  CString *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008cf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = operator=(this,param_1);
  return pCVar1;
}


// ---- FUN_10008d08 @ 10008d08

undefined4 * FUN_10008d08(void)

{
  AFX_MODULE_STATE::AFX_MODULE_STATE((AFX_MODULE_STATE *)&DAT_1000e6c0,1,FUN_10008d66,0x600);
  DAT_1000e6c0 = &PTR_FUN_1000ae84;
  return &DAT_1000e6c0;
}


// ---- FUN_10008d30 @ 10008d30

AFX_MODULE_STATE * __thiscall FUN_10008d30(void *this,byte param_1)

{
  AFX_MODULE_STATE::~AFX_MODULE_STATE(this);
  if ((param_1 & 1) != 0) {
    CNoTrackObject::operator_delete(this);
  }
  return this;
}


// ---- ~AFX_MODULE_STATE @ 10008d4b

void __thiscall AFX_MODULE_STATE::~AFX_MODULE_STATE(AFX_MODULE_STATE *this)

{
                    /* WARNING: Could not recover jumptable at 0x10009128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~AFX_MODULE_STATE(this);
  return;
}


// ---- FUN_10008d50 @ 10008d50

void FUN_10008d50(void)

{
  FUN_10008f55((_onexit_t)&LAB_10008d5c);
  return;
}


// ---- FUN_10008d66 @ 10008d66

/* WARNING: Function: _EH_prolog replaced with injection: EH_prolog */

void FUN_10008d66(HWND__ *param_1,uint param_2,uint param_3,long param_4)

{
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_100093bc;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2
            ((AFX_MAINTAIN_STATE2 *)&local_18,(AFX_MODULE_STATE *)&DAT_1000e6c0);
  local_8 = 0;
  AfxWndProc(param_1,param_2,param_3,param_4);
  *(undefined4 *)(local_14 + 4) = local_18;
  ExceptionList = local_10;
  return;
}


// ---- FUN_10008dab @ 10008dab

undefined4 * FUN_10008dab(void)

{
  return &DAT_1000e6c0;
}


// ---- FUN_10008db1 @ 10008db1

int FUN_10008db1(HINSTANCE__ *param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  _AFX_THREAD_STATE *p_Var3;
  int iVar4;
  AFX_MODULE_STATE *pAVar5;
  CDynLinkLibrary *this;
  undefined4 local_c;
  int local_8;
  
  if (param_2 != 1) {
    if (param_2 == 0) {
      pAVar5 = AfxSetModuleState((AFX_MODULE_STATE *)&DAT_1000e6c0);
      p_Var3 = AfxGetThreadState();
      *(AFX_MODULE_STATE **)(p_Var3 + 8) = pAVar5;
      pAVar5 = AfxGetModuleState();
      if (*(int **)(pAVar5 + 4) != (int *)0x0) {
        (**(code **)(**(int **)(pAVar5 + 4) + 0x70))();
      }
      AfxLockTempMaps();
      AfxUnlockTempMaps(-1);
      AfxWinTerm();
      AfxTermExtensionModule((AFX_EXTENSION_MODULE *)&DAT_1000f750,1);
    }
    else if (param_2 == 3) {
      AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2
                ((AFX_MAINTAIN_STATE2 *)&local_c,(AFX_MODULE_STATE *)&DAT_1000e6c0);
      AfxLockTempMaps();
      AfxUnlockTempMaps(-1);
      AfxTermThread(param_1);
      *(undefined4 *)(local_8 + 4) = local_c;
    }
    return 1;
  }
  param_2 = 0;
  AfxCoreInitModule();
  p_Var3 = AfxGetThreadState();
  uVar1 = *(undefined4 *)(p_Var3 + 8);
  iVar4 = AfxWinInit(param_1,(HINSTANCE__ *)0x0,&DAT_1000e284,0);
  if (iVar4 != 0) {
    pAVar5 = AfxGetModuleState();
    piVar2 = *(int **)(pAVar5 + 4);
    if ((piVar2 == (int *)0x0) || (iVar4 = (**(code **)(*piVar2 + 0x58))(), iVar4 != 0)) {
      *(undefined4 *)(p_Var3 + 8) = uVar1;
      AfxInitExtensionModule((AFX_EXTENSION_MODULE *)&DAT_1000f750,param_1);
      this = operator_new(0x40);
      if (this != (CDynLinkLibrary *)0x0) {
        CDynLinkLibrary::CDynLinkLibrary(this,(AFX_EXTENSION_MODULE *)&DAT_1000f750,0);
      }
      param_2 = 1;
      goto LAB_10008e3d;
    }
    (**(code **)(*piVar2 + 0x70))();
  }
  AfxWinTerm();
LAB_10008e3d:
  *(undefined4 *)(p_Var3 + 8) = uVar1;
  p_Var3 = AfxGetThreadState();
  AfxSetModuleState(*(AFX_MODULE_STATE **)(p_Var3 + 8));
  return param_2;
}


// ---- FUN_10008ed8 @ 10008ed8

undefined4 FUN_10008ed8(undefined4 param_1,int param_2)

{
  HLOCAL hMem;
  _AFX_THREAD_STATE *p_Var1;
  AFX_MODULE_STATE *pAVar2;
  
  if (param_2 == 1) {
    hMem = LocalAlloc(0,0x2000);
    if (hMem == (HLOCAL)0x0) {
      return 0;
    }
    LocalFree(hMem);
    p_Var1 = AfxGetThreadState();
    pAVar2 = AfxSetModuleState((AFX_MODULE_STATE *)&DAT_1000e6c0);
    *(AFX_MODULE_STATE **)(p_Var1 + 8) = pAVar2;
  }
  else if (param_2 == 0) {
    p_Var1 = AfxGetThreadState();
    AfxSetModuleState(*(AFX_MODULE_STATE **)(p_Var1 + 8));
  }
  return 1;
}


// ---- FUN_10008f29 @ 10008f29

void __cdecl FUN_10008f29(_onexit_t param_1)

{
  if (DAT_1000f778 == -1) {
    _onexit(param_1);
    return;
  }
  __dllonexit(param_1,&DAT_1000f778,&DAT_1000f774);
  return;
}


// ---- FUN_10008f55 @ 10008f55

int __cdecl FUN_10008f55(_onexit_t param_1)

{
  int iVar1;
  
  iVar1 = FUN_10008f29(param_1);
  return (iVar1 != 0) - 1;
}


// ---- FUN_10008f9f @ 10008f9f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10008f9f(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *_Memory;
  undefined4 *puVar2;
  
  if (param_2 == 0) {
    if (0 < DAT_1000f76c) {
      DAT_1000f76c = DAT_1000f76c + -1;
      goto LAB_10008fb5;
    }
LAB_10008fdd:
    uVar1 = 0;
  }
  else {
LAB_10008fb5:
    _DAT_1000f770 = *(undefined4 *)_adjust_fdiv_exref;
    if (param_2 == 1) {
      DAT_1000f778 = malloc(0x80);
      if (DAT_1000f778 == (undefined4 *)0x0) goto LAB_10008fdd;
      *DAT_1000f778 = 0;
      DAT_1000f774 = DAT_1000f778;
      initterm(&DAT_1000c000,&DAT_1000c7d0);
      DAT_1000f76c = DAT_1000f76c + 1;
    }
    else if ((param_2 == 0) &&
            (_Memory = DAT_1000f778, puVar2 = DAT_1000f774, DAT_1000f778 != (undefined4 *)0x0)) {
      while (puVar2 = puVar2 + -1, _Memory <= puVar2) {
        if ((code *)*puVar2 != (code *)0x0) {
          (*(code *)*puVar2)();
          _Memory = DAT_1000f778;
        }
      }
      free(_Memory);
      DAT_1000f778 = (undefined4 *)0x0;
    }
    uVar1 = 1;
  }
  return uVar1;
}


// ---- entry @ 1000904a

int entry(HINSTANCE__ *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_2;
  iVar2 = DAT_1000f76c;
  if (param_2 != 0) {
    if ((param_2 != 1) && (param_2 != 2)) goto LAB_10009092;
    if ((PTR_FUN_1000dce4 != (undefined *)0x0) &&
       (iVar2 = (*(code *)PTR_FUN_1000dce4)(param_1,param_2,param_3), iVar2 == 0)) {
      return 0;
    }
    iVar2 = FUN_10008f9f(param_1,param_2);
  }
  if (iVar2 == 0) {
    return 0;
  }
LAB_10009092:
  iVar2 = FUN_10008db1(param_1,param_2);
  if (param_2 == 1) {
    if (iVar2 != 0) {
      return iVar2;
    }
    FUN_10008f9f(param_1,0);
  }
  if ((param_2 != 0) && (param_2 != 3)) {
    return iVar2;
  }
  iVar3 = FUN_10008f9f(param_1,param_2);
  param_2 = iVar2;
  if (iVar3 == 0) {
    param_2 = 0;
  }
  if (param_2 != 0) {
    if (PTR_FUN_1000dce4 != (undefined *)0x0) {
      iVar2 = (*(code *)PTR_FUN_1000dce4)(param_1,iVar1,param_3);
      return iVar2;
    }
    return param_2;
  }
  return 0;
}


// ---- FUN_100090e7 @ 100090e7

type_info * __thiscall FUN_100090e7(void *this,byte param_1)

{
  type_info::~type_info(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- _EH_prolog @ 10009104

/* WARNING: This is an inlined function */
/* WARNING: Function: _EH_prolog replaced with injection: EH_prolog */

void _EH_prolog(void)

{
  undefined1 auStack_c [12];
  
  ExceptionList = auStack_c;
                    /* WARNING: Could not recover jumptable at 0x10009104. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  return;
}


// ---- __dllonexit @ 1000910a

void __dllonexit(void)

{
                    /* WARNING: Could not recover jumptable at 0x1000910a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __dllonexit();
  return;
}


// ---- initterm @ 10009110

void __cdecl initterm(void)

{
                    /* WARNING: Could not recover jumptable at 0x10009110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  initterm();
  return;
}


// ---- ~type_info @ 10009116

void __thiscall type_info::~type_info(type_info *this)

{
                    /* WARNING: Could not recover jumptable at 0x10009116. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~type_info(this);
  return;
}


// ---- AFX_MODULE_STATE @ 1000911c

void __thiscall
AFX_MODULE_STATE::AFX_MODULE_STATE
          (AFX_MODULE_STATE *this,int param_1,_func_long_HWND___ptr_uint_uint_long *param_2,
          ulong param_3)

{
                    /* WARNING: Could not recover jumptable at 0x1000911c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AFX_MODULE_STATE(this,param_1,param_2,param_3);
  return;
}


// ---- operator_delete @ 10009122

void CNoTrackObject::operator_delete(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10009122. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  operator_delete(param_1);
  return;
}


// ---- ~AFX_MODULE_STATE @ 10009128

void __thiscall AFX_MODULE_STATE::~AFX_MODULE_STATE(AFX_MODULE_STATE *this)

{
                    /* WARNING: Could not recover jumptable at 0x10009128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~AFX_MODULE_STATE(this);
  return;
}


// ---- AfxWndProc @ 1000912e

long AfxWndProc(HWND__ *param_1,uint param_2,uint param_3,long param_4)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000912e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = AfxWndProc(param_1,param_2,param_3,param_4);
  return lVar1;
}


// ---- AfxTermThread @ 10009134

void AfxTermThread(HINSTANCE__ *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10009134. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AfxTermThread(param_1);
  return;
}


// ---- AfxTermExtensionModule @ 1000913a

void AfxTermExtensionModule(AFX_EXTENSION_MODULE *param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x1000913a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AfxTermExtensionModule(param_1,param_2);
  return;
}


// ---- AfxUnlockTempMaps @ 10009140

int AfxUnlockTempMaps(int param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AfxUnlockTempMaps(param_1);
  return iVar1;
}


// ---- AfxLockTempMaps @ 10009146

void AfxLockTempMaps(void)

{
                    /* WARNING: Could not recover jumptable at 0x10009146. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AfxLockTempMaps();
  return;
}


// ---- AfxSetModuleState @ 1000914c

AFX_MODULE_STATE * AfxSetModuleState(AFX_MODULE_STATE *param_1)

{
  AFX_MODULE_STATE *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000914c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = AfxSetModuleState(param_1);
  return pAVar1;
}


// ---- CDynLinkLibrary @ 10009152

void __thiscall
CDynLinkLibrary::CDynLinkLibrary(CDynLinkLibrary *this,AFX_EXTENSION_MODULE *param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10009152. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CDynLinkLibrary(this,param_1,param_2);
  return;
}


// ---- AfxInitExtensionModule @ 10009158

int AfxInitExtensionModule(AFX_EXTENSION_MODULE *param_1,HINSTANCE__ *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009158. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AfxInitExtensionModule(param_1,param_2);
  return iVar1;
}


// ---- AfxWinTerm @ 1000915e

void AfxWinTerm(void)

{
                    /* WARNING: Could not recover jumptable at 0x1000915e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AfxWinTerm();
  return;
}


// ---- AfxWinInit @ 10009164

int AfxWinInit(HINSTANCE__ *param_1,HINSTANCE__ *param_2,char *param_3,int param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009164. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AfxWinInit(param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- AfxGetThreadState @ 1000916a

_AFX_THREAD_STATE * AfxGetThreadState(void)

{
  _AFX_THREAD_STATE *p_Var1;
  
                    /* WARNING: Could not recover jumptable at 0x1000916a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  p_Var1 = AfxGetThreadState();
  return p_Var1;
}


// ---- AfxCoreInitModule @ 10009170

void AfxCoreInitModule(void)

{
                    /* WARNING: Could not recover jumptable at 0x10009170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AfxCoreInitModule();
  return;
}


// ---- AfxDllGetClassObject @ 10009176

long AfxDllGetClassObject(_GUID *param_1,_GUID *param_2,void **param_3)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009176. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = AfxDllGetClassObject(param_1,param_2,param_3);
  return lVar1;
}


// ---- AfxDllCanUnloadNow @ 1000917c

long AfxDllCanUnloadNow(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000917c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = AfxDllCanUnloadNow();
  return lVar1;
}


// ---- DllGetClassObject @ 10009182

HRESULT DllGetClassObject(IID *rclsid,IID *riid,LPVOID *ppv)

{
  AFX_MODULE_STATE *pAVar1;
  long lVar2;
  undefined4 local_c;
  int local_8;
  
                    /* 0x9182  2  DllGetClassObject */
  pAVar1 = (AFX_MODULE_STATE *)FUN_10008dab();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)&local_c,pAVar1);
  lVar2 = AfxDllGetClassObject(rclsid,riid,ppv);
  *(undefined4 *)(local_8 + 4) = local_c;
  return lVar2;
}


// ---- DllCanUnloadNow @ 100091b0

HRESULT DllCanUnloadNow(void)

{
  AFX_MODULE_STATE *pAVar1;
  long lVar2;
  undefined4 local_c;
  int local_8;
  
                    /* 0x91b0  1  DllCanUnloadNow */
  pAVar1 = (AFX_MODULE_STATE *)FUN_10008dab();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)&local_c,pAVar1);
  lVar2 = AfxDllCanUnloadNow();
  *(undefined4 *)(local_8 + 4) = local_c;
  return lVar2;
}


// ---- Unwind@100091e0 @ 100091e0

void Unwind_100091e0(void)

{
  int unaff_EBP;
  
  CPaintDC::~CPaintDC((CPaintDC *)(unaff_EBP + -0x60));
  return;
}


// ---- Unwind@10009200 @ 10009200

void Unwind_10009200(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 0x18));
  return;
}


// ---- Unwind@10009220 @ 10009220

void Unwind_10009220(void)

{
  int unaff_EBP;
  
  FUN_10004240(*(void **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10009240 @ 10009240

void Unwind_10009240(void)

{
  int unaff_EBP;
  
  FUN_10004960((undefined4 *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@10009260 @ 10009260

void Unwind_10009260(void)

{
  int unaff_EBP;
  
  COleControl::~COleControl(*(COleControl **)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@10009268 @ 10009268

void Unwind_10009268(void)

{
  int unaff_EBP;
  
  CStatic::~CStatic(*(CStatic **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10009270 @ 10009270

void Unwind_10009270(void)

{
  int unaff_EBP;
  
  FUN_10004610((CStatic *)(*(int *)(unaff_EBP + -0x14) + 0x1d8));
  return;
}


// ---- Unwind@10009290 @ 10009290

void Unwind_10009290(void)

{
  int unaff_EBP;
  
  CStatic::~CStatic(*(CStatic **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@100092b0 @ 100092b0

void Unwind_100092b0(void)

{
  int unaff_EBP;
  
  COleControl::~COleControl(*(COleControl **)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@100092b8 @ 100092b8

void Unwind_100092b8(void)

{
  int unaff_EBP;
  
  FUN_10004610((CStatic *)(*(int *)(unaff_EBP + -0x14) + 0x1d8));
  return;
}


// ---- Unwind@100092c6 @ 100092c6

void Unwind_100092c6(void)

{
  int unaff_EBP;
  
  CStatic::~CStatic(*(CStatic **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@100092e0 @ 100092e0

void Unwind_100092e0(void)

{
  int unaff_EBP;
  
  CDialog::~CDialog((CDialog *)(unaff_EBP + -0x6c));
  return;
}


// ---- Unwind@10009300 @ 10009300

void Unwind_10009300(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x18));
  return;
}


// ---- Unwind@10009308 @ 10009308

void Unwind_10009308(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@10009320 @ 10009320

void Unwind_10009320(void)

{
  int unaff_EBP;
  
  FUN_10004240(*(void **)(unaff_EBP + 8));
  return;
}


// ---- Unwind@10009340 @ 10009340

void Unwind_10009340(void)

{
  int unaff_EBP;
  
  FUN_10004240(*(void **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10009360 @ 10009360

void Unwind_10009360(void)

{
  int unaff_EBP;
  
  FUN_10004240(*(void **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10009380 @ 10009380

void Unwind_10009380(void)

{
  int unaff_EBP;
  
  FUN_10008390(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@100093a0 @ 100093a0

void Unwind_100093a0(void)

{
  int unaff_EBP;
  
  FUN_10008390(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@100093b4 @ 100093b4

void Unwind_100093b4(void)

{
  int unaff_EBP;
  
  FUN_10004960((undefined4 *)(unaff_EBP + -0x14));
  return;
}


