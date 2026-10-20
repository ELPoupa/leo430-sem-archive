// Decompiled with Ghidra from l500cal.exe
// Format: Portable Executable (PE), image base 00400000

// ---- FUN_00401010 @ 00401010

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00401010(void)

{
  _DAT_00415f88 = RegisterWindowMessageA(s_PM_SRV16_MISC_FUNC_004140c8);
  return;
}


// ---- FUN_00401030 @ 00401030

undefined4 * FUN_00401030(void)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0040c5ba;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x214);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = FUN_004010b0(puVar1);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


// ---- FUN_00401090 @ 00401090

undefined ** FUN_00401090(void)

{
  return &PTR_s_CMyPropertyPage_0040fc10;
}


// ---- FUN_004010a0 @ 004010a0

undefined ** FUN_004010a0(void)

{
  return &PTR_s_CABCC_0040e380;
}


// ---- FUN_004010b0 @ 004010b0

undefined4 * __fastcall FUN_004010b0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0040c61e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004069b0(param_1,0x98);
  local_4 = 0;
  CWnd::CWnd((CWnd *)(param_1 + 0x25));
  *(undefined ***)(param_1 + 0x25) = &PTR_FUN_0040e570;
  local_4._0_1_ = 1;
  CWnd::CWnd((CWnd *)(param_1 + 0x35));
  *(undefined ***)(param_1 + 0x35) = &PTR_FUN_0040e4b0;
  local_4._0_1_ = 2;
  CWnd::CWnd((CWnd *)(param_1 + 0x45));
  *(undefined ***)(param_1 + 0x45) = &PTR_FUN_0040e4b0;
  local_4._0_1_ = 3;
  CWnd::CWnd((CWnd *)(param_1 + 0x55));
  *(undefined ***)(param_1 + 0x55) = &PTR_FUN_0040e570;
  local_4._0_1_ = 4;
  CWnd::CWnd((CWnd *)(param_1 + 0x65));
  *(undefined ***)(param_1 + 0x65) = &PTR_FUN_0040e570;
  local_4 = CONCAT31(local_4._1_3_,5);
  CWnd::CWnd((CWnd *)(param_1 + 0x75));
  *(undefined ***)(param_1 + 0x75) = &PTR_FUN_0040e570;
  *param_1 = &PTR_FUN_0040e3b8;
  ExceptionList = local_c;
  return param_1;
}


// ---- FUN_00401190 @ 00401190

void __thiscall
FUN_00401190(CWnd *param_1,undefined4 param_2,char *param_3,ulong param_4,tagRECT *param_5,
            CWnd *param_6,uint param_7)

{
  CWnd::CreateControl(param_1,(_GUID *)&DAT_0040e630,param_3,param_4,param_5,param_6,param_7,
                      (CFile *)0x0,0,(ushort *)0x0);
  return;
}


// ---- FUN_004011c0 @ 004011c0

void __thiscall
FUN_004011c0(CWnd *param_1,undefined4 param_2,char *param_3,ulong param_4,tagRECT *param_5,
            CWnd *param_6,uint param_7)

{
  CWnd::CreateControl(param_1,(_GUID *)&DAT_0040e640,param_3,param_4,param_5,param_6,param_7,
                      (CFile *)0x0,0,(ushort *)0x0);
  return;
}


// ---- FUN_004011f0 @ 004011f0

CPropertyPage * __thiscall FUN_004011f0(void *this,byte param_1)

{
  FUN_00401220(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- ~CWnd @ 00401210

void __thiscall CWnd::~CWnd(CWnd *this)

{
  ~CWnd(this);
  return;
}


// ---- FUN_00401220 @ 00401220

void __fastcall FUN_00401220(CPropertyPage *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0040c67e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)param_1 = &PTR_FUN_0040e3b8;
  local_4 = 5;
  CWnd::~CWnd((CWnd *)(param_1 + 0x1d4));
  local_4._0_1_ = 4;
  CWnd::~CWnd((CWnd *)(param_1 + 0x194));
  local_4._0_1_ = 3;
  CWnd::~CWnd((CWnd *)(param_1 + 0x154));
  local_4._0_1_ = 2;
  CWnd::~CWnd((CWnd *)(param_1 + 0x114));
  local_4._0_1_ = 1;
  CWnd::~CWnd((CWnd *)(param_1 + 0xd4));
  local_4 = (uint)local_4._1_3_ << 8;
  CWnd::~CWnd((CWnd *)(param_1 + 0x94));
  local_4 = 0xffffffff;
  FUN_004069e0(param_1);
  ExceptionList = pvStack_c;
  return;
}


// ---- FUN_004012d0 @ 004012d0

void __thiscall FUN_004012d0(int param_1,CDataExchange *param_2)

{
  FUN_004069f0();
  DDX_Control(param_2,0x435,(CWnd *)(param_1 + 0x94));
  DDX_Control(param_2,0x431,(CWnd *)(param_1 + 0xd4));
  DDX_Control(param_2,0x430,(CWnd *)(param_1 + 0x114));
  DDX_Control(param_2,0x433,(CWnd *)(param_1 + 0x154));
  DDX_Control(param_2,0x432,(CWnd *)(param_1 + 0x194));
  DDX_Control(param_2,0x434,(CWnd *)(param_1 + 0x1d4));
  return;
}


// ---- FUN_00401350 @ 00401350

undefined ** FUN_00401350(void)

{
  return &PTR_LAB_0040fc28;
}


// ---- FUN_00401360 @ 00401360

undefined ** FUN_00401360(void)

{
  return &PTR_FUN_0040e398;
}


// ---- FUN_00401370 @ 00401370

int __fastcall FUN_00401370(CPropertyPage *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_00406a10(param_1);
  iVar1 = *(int *)(param_1 + 0x90);
  FUN_004044c0(param_1 + 0x94,*(undefined4 *)(iVar1 + 0x1d4),*(undefined4 *)(iVar1 + 0x18c),
               *(undefined4 *)(iVar1 + 400));
  iVar1 = *(int *)(param_1 + 0x90);
  FUN_00404360(param_1 + 0xd4,*(undefined4 *)(iVar1 + 0x1c0),*(undefined4 *)(iVar1 + 0x18c),
               *(undefined4 *)(iVar1 + 400));
  iVar1 = *(int *)(param_1 + 0x90);
  FUN_00404360(param_1 + 0x114,*(undefined4 *)(iVar1 + 0x1c4),*(undefined4 *)(iVar1 + 0x18c),
               *(undefined4 *)(iVar1 + 400));
  iVar1 = *(int *)(param_1 + 0x90);
  FUN_004044c0(param_1 + 0x154,*(undefined4 *)(iVar1 + 0x1cc),*(undefined4 *)(iVar1 + 0x18c),
               *(undefined4 *)(iVar1 + 400));
  iVar1 = *(int *)(param_1 + 0x90);
  FUN_004044c0(param_1 + 0x194,*(undefined4 *)(iVar1 + 0x1c8),*(undefined4 *)(iVar1 + 0x18c),
               *(undefined4 *)(iVar1 + 400));
  iVar1 = *(int *)(param_1 + 0x90);
  FUN_004044c0(param_1 + 0x1d4,*(undefined4 *)(iVar1 + 0x1d0),*(undefined4 *)(iVar1 + 0x18c),
               *(undefined4 *)(iVar1 + 400));
  return iVar2;
}


// ---- FUN_00401480 @ 00401480

undefined4 __fastcall FUN_00401480(CPropertyPage *param_1)

{
  AFX_MODULE_STATE *pAVar1;
  undefined4 uVar2;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &DAT_0040c698;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pAVar1 = AfxGetModuleState();
  CCmdTarget::BeginWaitCursor(*(CCmdTarget **)(pAVar1 + 4));
  uStack_4 = 0;
  uVar2 = FUN_00406a60(param_1);
  uStack_4 = 0xffffffff;
  pAVar1 = AfxGetModuleState();
  CCmdTarget::EndWaitCursor(*(CCmdTarget **)(pAVar1 + 4));
  ExceptionList = pvStack_c;
  return uVar2;
}


// ---- FUN_004014f0 @ 004014f0

void FUN_004014f0(void)

{
  return;
}


// ---- FUN_00401500 @ 00401500

void FUN_00401500(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ---- FUN_00401510 @ 00401510

void FUN_00401510(void)

{
  return;
}


// ---- FUN_00401520 @ 00401520

void __fastcall FUN_00401520(int param_1)

{
  EnableWindow(*(HWND *)(param_1 + 0x20),0);
  return;
}


// ---- FUN_00401530 @ 00401530

void __fastcall FUN_00401530(int param_1)

{
  EnableWindow(*(HWND *)(param_1 + 0x20),1);
  return;
}


// ---- FUN_00401540 @ 00401540

void FUN_00401540(void)

{
  AFX_MODULE_STATE *pAVar1;
  
  pAVar1 = AfxGetModuleState();
  CCmdTarget::EndWaitCursor(*(CCmdTarget **)(pAVar1 + 4));
  return;
}


// ---- FUN_00401590 @ 00401590

void FUN_00401590(void)

{
  CString::CString((CString *)&DAT_00415fa0,s_Adjust_Dual_Mag_Offset_so_that_a_00414118);
  CString::CString((CString *)&DAT_00415fa4,s_Now_repeat_the_adjustment_using_D_004140e8);
  return;
}


// ---- FUN_004015b0 @ 004015b0

void FUN_004015b0(void)

{
  FUN_0040c29c((_onexit_t)&LAB_004015c0);
  return;
}


// ---- FUN_00401610 @ 00401610

undefined4 * FUN_00401610(void)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0040c6ba;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x124);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = FUN_00401680(puVar1);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


// ---- FUN_00401670 @ 00401670

undefined ** FUN_00401670(void)

{
  return &PTR_s_CDualMag_0040e650;
}


// ---- FUN_00401680 @ 00401680

undefined4 * __fastcall FUN_00401680(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0040c6e6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004069b0(param_1,0x95);
  local_4 = 0;
  CWnd::CWnd((CWnd *)(param_1 + 0x28));
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_0040e4b0;
  local_4 = CONCAT31(local_4._1_3_,1);
  CWnd::CWnd((CWnd *)(param_1 + 0x38));
  *(undefined ***)(param_1 + 0x38) = &PTR_FUN_0040e4b0;
  *param_1 = &PTR_FUN_0040e6a0;
  ExceptionList = local_c;
  return param_1;
}


// ---- FUN_00401700 @ 00401700

CPropertyPage * __thiscall FUN_00401700(void *this,byte param_1)

{
  FUN_00401720(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_00401720 @ 00401720

void __fastcall FUN_00401720(CPropertyPage *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0040c706;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)param_1 = &PTR_FUN_0040e6a0;
  local_4 = 1;
  CWnd::~CWnd((CWnd *)(param_1 + 0xe0));
  local_4 = local_4 & 0xffffff00;
  CWnd::~CWnd((CWnd *)(param_1 + 0xa0));
  local_4 = 0xffffffff;
  FUN_004069e0(param_1);
  ExceptionList = pvStack_c;
  return;
}


// ---- FUN_00401790 @ 00401790

void __thiscall FUN_00401790(int param_1,CDataExchange *param_2)

{
  FUN_004069f0();
  DDX_Control(param_2,0x42b,(CWnd *)(param_1 + 0xa0));
  DDX_Control(param_2,0x42c,(CWnd *)(param_1 + 0xe0));
  return;
}


// ---- FUN_004017d0 @ 004017d0

undefined ** FUN_004017d0(void)

{
  return &PTR_FUN_0040e668;
}


// ---- FUN_004017e0 @ 004017e0

int __fastcall FUN_004017e0(CPropertyPage *param_1)

{
  int iVar1;
  AFX_MODULE_STATE *pAVar2;
  int iVar3;
  CWnd *this;
  char *pcVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0040c718;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pAVar2 = AfxGetModuleState();
  CCmdTarget::BeginWaitCursor(*(CCmdTarget **)(pAVar2 + 4));
  local_4 = 0;
  iVar3 = FUN_00406a10(param_1);
  FUN_00407f00((void *)(*(int *)(param_1 + 0x90) + 0x2c4),param_1 + 0x94,s_CMD_MODE_NORMAL_004141a4)
  ;
  FUN_00407f00((void *)(*(int *)(param_1 + 0x90) + 0x2c4),param_1 + 0x120,s_DP_ZOOM_0041419c);
  FUN_00407f00((void *)(*(int *)(param_1 + 0x90) + 0x2c4),param_1 + 0x9c,s_AP_ZOOMPOS_X_0041418c);
  FUN_00407f00((void *)(*(int *)(param_1 + 0x90) + 0x2c4),param_1 + 0x98,s_AP_ZOOM_FACTOR_0041417c);
  FUN_004080d0((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 300));
  FUN_00407f90((void *)(*(int *)(param_1 + 0x90) + 0x2c4),*(undefined4 *)(param_1 + 0x120),
               0x3f800000,0);
  FUN_00407f90((void *)(*(int *)(param_1 + 0x90) + 0x2c4),*(undefined4 *)(param_1 + 0x98),0x41200000
               ,0);
  FUN_00408030((void *)(*(int *)(param_1 + 0x90) + 0x2c4),*(undefined4 *)(param_1 + 0x9c),0x43670000
               ,0x43ad0000);
  iVar1 = *(int *)(param_1 + 0x90);
  FUN_00404360(param_1 + 0xa0,*(undefined4 *)(iVar1 + 0x124),*(undefined4 *)(iVar1 + 0x18c),
               *(undefined4 *)(iVar1 + 400));
  iVar1 = *(int *)(param_1 + 0x90);
  FUN_00404360(param_1 + 0xe0,*(int *)(iVar1 + 0x124) + 1,*(undefined4 *)(iVar1 + 0x18c),
               *(undefined4 *)(iVar1 + 400));
  DAT_00415fac = 0;
  pcVar4 = DAT_00415fa0;
  this = CWnd::GetDlgItem((CWnd *)param_1,0x40a);
  CWnd::SetWindowTextA(this,pcVar4);
  local_4 = 0xffffffff;
  pAVar2 = AfxGetModuleState();
  CCmdTarget::EndWaitCursor(*(CCmdTarget **)(pAVar2 + 4));
  ExceptionList = local_c;
  return iVar3;
}


// ---- FUN_004019a0 @ 004019a0

undefined4 __fastcall FUN_004019a0(CPropertyPage *param_1)

{
  HWND pHVar1;
  CWnd *this;
  undefined4 uVar2;
  
  FUN_004080d0((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x16c));
  if (DAT_00415fac == 1) {
    (**(code **)(*(int *)param_1 + 0xe0))();
    if ((((DAT_00415f90 != 0) || (DAT_00415f98 != 0)) || (DAT_00415f94 != 0)) || (DAT_00415f9c != 0)
       ) {
      pHVar1 = GetParent(*(HWND *)(param_1 + 0x20));
      this = CWnd::FromHandle(pHVar1);
      CWnd::MoveWindow(this,DAT_00415f90,DAT_00415f94,DAT_00415f98 - DAT_00415f90,
                       DAT_00415f9c - DAT_00415f94,1);
    }
    return 0xffffffff;
  }
  FUN_004080d0((void *)(*(int *)(param_1 + 0x90) + 0x2c4),*(undefined4 *)(param_1 + 0x94));
  uVar2 = FUN_00406ac0(param_1);
  return uVar2;
}


// ---- FUN_00401a60 @ 00401a60

undefined4 __fastcall FUN_00401a60(CWnd *param_1)

{
  int iVar1;
  AFX_MODULE_STATE *pAVar2;
  CWnd *pCVar3;
  HWND pHVar4;
  undefined4 uVar5;
  char *pcVar6;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &DAT_0040c738;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pAVar2 = AfxGetModuleState();
  CCmdTarget::BeginWaitCursor(*(CCmdTarget **)(pAVar2 + 4));
  uStack_4 = 0;
  FUN_004080d0((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x16c));
  if (DAT_00415fac == 0) {
    DAT_00415fac = 1;
    pcVar6 = DAT_00415fa4;
    pCVar3 = CWnd::GetDlgItem(param_1,0x40a);
    CWnd::SetWindowTextA(pCVar3,pcVar6);
    FUN_004080d0((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
                 *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x128));
    iVar1 = *(int *)(param_1 + 0x90);
    FUN_00404360(param_1 + 0xa0,*(undefined4 *)(iVar1 + 0x120),*(undefined4 *)(iVar1 + 0x18c),
                 *(undefined4 *)(iVar1 + 400));
    iVar1 = *(int *)(param_1 + 0x90);
    FUN_00404360(param_1 + 0xe0,*(undefined4 *)(iVar1 + 0x11c),*(undefined4 *)(iVar1 + 0x18c),
                 *(undefined4 *)(iVar1 + 400));
    FUN_00408030((void *)(*(int *)(param_1 + 0x90) + 0x2c4),*(undefined4 *)(param_1 + 0x9c),
                 0x43e60000,0x44160000);
    FUN_00407f90((void *)(*(int *)(param_1 + 0x90) + 0x2c4),*(undefined4 *)(param_1 + 0x98),
                 0x41200000,0);
    pHVar4 = GetParent(*(HWND *)(param_1 + 0x20));
    pCVar3 = CWnd::FromHandle(pHVar4);
    GetWindowRect(*(HWND *)(pCVar3 + 0x20),(LPRECT)&DAT_00415f90);
    pHVar4 = GetParent(*(HWND *)(param_1 + 0x20));
    pCVar3 = CWnd::FromHandle(pHVar4);
    CWnd::CenterWindow(pCVar3,(CWnd *)0x0);
    uStack_4 = 0xffffffff;
    pAVar2 = AfxGetModuleState();
    CCmdTarget::EndWaitCursor(*(CCmdTarget **)(pAVar2 + 4));
    ExceptionList = pvStack_c;
    return 0xffffffff;
  }
  pHVar4 = GetParent(*(HWND *)(param_1 + 0x20));
  pCVar3 = CWnd::FromHandle(pHVar4);
  CWnd::MoveWindow(pCVar3,DAT_00415f90,DAT_00415f94,DAT_00415f98 - DAT_00415f90,
                   DAT_00415f9c - DAT_00415f94,1);
  FUN_004080d0((void *)(*(int *)(param_1 + 0x90) + 0x2c4),*(undefined4 *)(param_1 + 0x94));
  uVar5 = FUN_00406a60((CPropertyPage *)param_1);
  uStack_4 = 0xffffffff;
  pAVar2 = AfxGetModuleState();
  CCmdTarget::EndWaitCursor(*(CCmdTarget **)(pAVar2 + 4));
  ExceptionList = pvStack_c;
  return uVar5;
}


// ---- FUN_00401ca0 @ 00401ca0

void __fastcall FUN_00401ca0(CPropertyPage *param_1)

{
  int iVar1;
  
  FUN_004080d0((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x168));
  iVar1 = *(int *)(param_1 + 0x90);
  if (DAT_00415fac == 0) {
    FUN_004080d0((void *)(iVar1 + 0x2c4),*(undefined4 *)(iVar1 + 300));
    CPropertyPage::OnCancel(param_1);
    return;
  }
  FUN_004080d0((void *)(iVar1 + 0x2c4),*(undefined4 *)(iVar1 + 0x128));
  CPropertyPage::OnCancel(param_1);
  return;
}


// ---- FUN_00401d40 @ 00401d40

void FUN_00401d40(void)

{
  CString::CString((CString *)&DAT_00415fb0,s_Position_a_small_reduced_raster_c_00414278);
  CString::CString((CString *)&DAT_00415fb4,s_Select_Dual_Mag_mode_and_positio_004141c0);
  return;
}


// ---- FUN_00401d60 @ 00401d60

void FUN_00401d60(void)

{
  FUN_0040c29c((_onexit_t)&LAB_00401d70);
  return;
}


// ---- FUN_00401d90 @ 00401d90

undefined4 * FUN_00401d90(void)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0040c75a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x114);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = FUN_00401e00(puVar1);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


// ---- FUN_00401df0 @ 00401df0

undefined ** FUN_00401df0(void)

{
  return &PTR_s_CDualMag400_0040e798;
}


// ---- FUN_00401e00 @ 00401e00

undefined4 * __fastcall FUN_00401e00(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0040c786;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004069b0(param_1,0xa7);
  local_4 = 0;
  CWnd::CWnd((CWnd *)(param_1 + 0x25));
  *(undefined ***)(param_1 + 0x25) = &PTR_FUN_0040e4b0;
  local_4 = CONCAT31(local_4._1_3_,1);
  CWnd::CWnd((CWnd *)(param_1 + 0x35));
  *(undefined ***)(param_1 + 0x35) = &PTR_FUN_0040e4b0;
  *param_1 = &PTR_FUN_0040e7e8;
  ExceptionList = local_c;
  return param_1;
}


// ---- FUN_00401e80 @ 00401e80

CPropertyPage * __thiscall FUN_00401e80(void *this,byte param_1)

{
  FUN_00401ea0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_00401ea0 @ 00401ea0

void __fastcall FUN_00401ea0(CPropertyPage *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0040c7a6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)param_1 = &PTR_FUN_0040e7e8;
  local_4 = 1;
  CWnd::~CWnd((CWnd *)(param_1 + 0xd4));
  local_4 = local_4 & 0xffffff00;
  CWnd::~CWnd((CWnd *)(param_1 + 0x94));
  local_4 = 0xffffffff;
  FUN_004069e0(param_1);
  ExceptionList = pvStack_c;
  return;
}


// ---- FUN_00401f10 @ 00401f10

void __thiscall FUN_00401f10(int param_1,CDataExchange *param_2)

{
  FUN_004069f0();
  DDX_Control(param_2,0x453,(CWnd *)(param_1 + 0x94));
  DDX_Control(param_2,0x456,(CWnd *)(param_1 + 0xd4));
  return;
}


// ---- FUN_00401f50 @ 00401f50

undefined ** FUN_00401f50(void)

{
  return &PTR_FUN_0040e7b0;
}


// ---- FUN_00401f60 @ 00401f60

int __fastcall FUN_00401f60(CPropertyPage *param_1)

{
  int iVar1;
  AFX_MODULE_STATE *pAVar2;
  int iVar3;
  CWnd *this;
  char *pcVar4;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &DAT_0040c7b8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pAVar2 = AfxGetModuleState();
  CCmdTarget::BeginWaitCursor(*(CCmdTarget **)(pAVar2 + 4));
  uStack_4 = 0;
  iVar3 = FUN_00406a10(param_1);
  FUN_004080d0((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x128));
  iVar1 = *(int *)(param_1 + 0x90);
  FUN_00404360(param_1 + 0x94,*(undefined4 *)(iVar1 + 0x120),*(undefined4 *)(iVar1 + 0x18c),
               *(undefined4 *)(iVar1 + 400));
  iVar1 = *(int *)(param_1 + 0x90);
  FUN_00404360(param_1 + 0xd4,*(undefined4 *)(iVar1 + 0x11c),*(undefined4 *)(iVar1 + 0x18c),
               *(undefined4 *)(iVar1 + 400));
  DAT_00415fbc = 0;
  pcVar4 = DAT_00415fb0;
  this = CWnd::GetDlgItem((CWnd *)param_1,0x40a);
  CWnd::SetWindowTextA(this,pcVar4);
  uStack_4 = 0xffffffff;
  pAVar2 = AfxGetModuleState();
  CCmdTarget::EndWaitCursor(*(CCmdTarget **)(pAVar2 + 4));
  ExceptionList = pvStack_c;
  return iVar3;
}


// ---- FUN_00402050 @ 00402050

undefined4 __fastcall FUN_00402050(CPropertyPage *param_1)

{
  AFX_MODULE_STATE *pAVar1;
  undefined4 uVar2;
  CWnd *this;
  char *pcVar3;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &DAT_0040c7d8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pAVar1 = AfxGetModuleState();
  CCmdTarget::BeginWaitCursor(*(CCmdTarget **)(pAVar1 + 4));
  uStack_4 = 0;
  DAT_00415fbc = DAT_00415fbc + 1;
  if (DAT_00415fbc != 1) {
    FUN_004080d0((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
                 *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x16c));
    uVar2 = FUN_00406a60(param_1);
    uStack_4 = 0xffffffff;
    pAVar1 = AfxGetModuleState();
    CCmdTarget::EndWaitCursor(*(CCmdTarget **)(pAVar1 + 4));
    ExceptionList = pvStack_c;
    return uVar2;
  }
  pcVar3 = DAT_00415fb4;
  this = CWnd::GetDlgItem((CWnd *)param_1,0x40a);
  CWnd::SetWindowTextA(this,pcVar3);
  uStack_4 = 0xffffffff;
  pAVar1 = AfxGetModuleState();
  CCmdTarget::EndWaitCursor(*(CCmdTarget **)(pAVar1 + 4));
  ExceptionList = pvStack_c;
  return 0xffffffff;
}


// ---- FUN_00402170 @ 00402170

undefined4 * FUN_00402170(void)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0040c7fa;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x98);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = FUN_004021e0(puVar1);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


// ---- FUN_004021d0 @ 004021d0

undefined ** FUN_004021d0(void)

{
  return &PTR_s_CLastPage_0040e8e0;
}


// ---- FUN_004021e0 @ 004021e0

undefined4 * __fastcall FUN_004021e0(undefined4 *param_1)

{
  FUN_004069b0(param_1,0x82);
  *param_1 = &PTR_FUN_0040e930;
  param_1[0x25] = 0;
  return param_1;
}


// ---- FUN_00402210 @ 00402210

CPropertyPage * __thiscall FUN_00402210(void *this,byte param_1)

{
  FUN_00402230(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_00402230 @ 00402230

void __fastcall FUN_00402230(CPropertyPage *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0040e930;
  FUN_004069e0(param_1);
  return;
}


// ---- FUN_00402240 @ 00402240

void __thiscall FUN_00402240(int param_1,CDataExchange *param_2)

{
  FUN_004069f0();
  DDX_Check(param_2,0x423,(int *)(param_1 + 0x94));
  return;
}


// ---- FUN_00402270 @ 00402270

undefined ** FUN_00402270(void)

{
  return &PTR_FUN_0040e8f8;
}


// ---- FUN_00402280 @ 00402280

int __fastcall FUN_00402280(CPropertyPage *param_1)

{
  int iVar1;
  HWND__ *pHVar2;
  CWnd *pCVar3;
  
  iVar1 = FUN_00406a10(param_1);
  pHVar2 = *(HWND__ **)(param_1 + 0x24);
  if (pHVar2 == (HWND__ *)0x0) {
    pHVar2 = GetParent(*(HWND *)(param_1 + 0x20));
  }
  pCVar3 = CWnd::FromHandle(pHVar2);
  if (pCVar3 != (CWnd *)0x0) {
    PostMessageA(*(HWND *)(pCVar3 + 0x20),0x470,0,5);
  }
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x130) = 0;
  CWnd::UpdateData((CWnd *)param_1,0);
  pCVar3 = CWnd::GetDlgItem((CWnd *)param_1,0x42e);
  SendMessageA(*(HWND *)(pCVar3 + 0x20),0xf1,1,0);
  return iVar1;
}


// ---- FUN_00402300 @ 00402300

void __fastcall FUN_00402300(CWnd *param_1)

{
  HWND__ *pHVar1;
  CWnd *pCVar2;
  CWnd *pCVar3;
  uint uVar4;
  
  pHVar1 = *(HWND__ **)(param_1 + 0x24);
  if (pHVar1 == (HWND__ *)0x0) {
    pHVar1 = GetParent(*(HWND *)(param_1 + 0x20));
  }
  pCVar2 = CWnd::FromHandle(pHVar1);
  CWnd::UpdateData(param_1,1);
  pCVar3 = CWnd::GetDlgItem(param_1,0x423);
  uVar4 = SendMessageA(*(HWND *)(pCVar3 + 0x20),0xf2,0,0);
  if ((uVar4 & 3) == 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x130) = 0;
    if (pCVar2 != (CWnd *)0x0) {
      SendMessageA(*(HWND *)(pCVar2 + 0x20),0x473,0,0x414320);
    }
  }
  else {
    *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x130) = 1;
    if (pCVar2 != (CWnd *)0x0) {
      SendMessageA(*(HWND *)(pCVar2 + 0x20),0x473,0,0x414328);
      return;
    }
  }
  return;
}


// ---- FUN_004023a0 @ 004023a0

void __fastcall FUN_004023a0(CWnd *param_1)

{
  CWnd *pCVar1;
  uint uVar2;
  
  pCVar1 = CWnd::GetDlgItem(param_1,0x42e);
  uVar2 = SendMessageA(*(HWND *)(pCVar1 + 0x20),0xf2,0,0);
  if ((uVar2 & 3) != 0) {
    SendMessageA(*(HWND *)(*(int *)(param_1 + 0x90) + 0x18c),DAT_00415fc0,
                 *(WPARAM *)(*(int *)(param_1 + 0x90) + 400),2);
  }
  CPropertyPage::OnWizardFinish((CPropertyPage *)param_1);
  return;
}


// ---- FUN_00402420 @ 00402420

code * FUN_00402420(void)

{
  return messageMap_exref;
}


// ---- FUN_00402440 @ 00402440

CWinApp * __fastcall FUN_00402440(CWinApp *param_1)

{
  CWinApp::CWinApp(param_1,(char *)0x0);
  *(undefined ***)param_1 = &PTR_LAB_0040ea60;
  return param_1;
}


// ---- FUN_00402460 @ 00402460

CWinApp * __thiscall FUN_00402460(void *this,byte param_1)

{
  CWinApp::~CWinApp(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- ~CWinApp @ 00402480

void __thiscall CWinApp::~CWinApp(CWinApp *this)

{
                    /* WARNING: Could not recover jumptable at 0x0040c0ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CWinApp(this);
  return;
}


// ---- FUN_004024a0 @ 004024a0

void FUN_004024a0(void)

{
  FUN_00402440((CWinApp *)&DAT_00415fc8);
  return;
}


// ---- FUN_004024b0 @ 004024b0

void FUN_004024b0(void)

{
  FUN_0040c29c((_onexit_t)&LAB_004024c0);
  return;
}


// ---- FUN_004024d0 @ 004024d0

undefined4 __fastcall FUN_004024d0(CWinApp *param_1)

{
  CDialog local_314 [516];
  CButton local_110 [64];
  CButton local_d0 [64];
  CButton local_90 [64];
  CWnd local_50 [68];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0040c847;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  AfxEnableControlContainer((COccManager *)0x0);
  CWinApp::Enable3dControls(param_1);
  FUN_00402670(local_314,(CWnd *)0x0);
  local_4 = 0;
  *(CDialog **)(param_1 + 0x20) = local_314;
  CDialog::DoModal(local_314);
  local_4 = 4;
  CWnd::~CWnd(local_50);
  local_4._0_1_ = 3;
  CButton::~CButton(local_90);
  local_4._0_1_ = 2;
  CButton::~CButton(local_d0);
  local_4 = CONCAT31(local_4._1_3_,1);
  CButton::~CButton(local_110);
  local_4 = 0xffffffff;
  CDialog::~CDialog(local_314);
  ExceptionList = local_c;
  return 0;
}


// ---- FUN_004025b0 @ 004025b0

void __fastcall FUN_004025b0(CDialog *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0040c892;
  local_c = ExceptionList;
  local_4 = 3;
  ExceptionList = &local_c;
  CWnd::~CWnd((CWnd *)(param_1 + 0x2c4));
  local_4._0_1_ = 2;
  CButton::~CButton((CButton *)(param_1 + 0x284));
  local_4._0_1_ = 1;
  CButton::~CButton((CButton *)(param_1 + 0x244));
  local_4 = (uint)local_4._1_3_ << 8;
  CButton::~CButton((CButton *)(param_1 + 0x204));
  local_4 = 0xffffffff;
  CDialog::~CDialog(param_1);
  ExceptionList = local_c;
  return;
}


// ---- FUN_00402670 @ 00402670

CDialog * __thiscall FUN_00402670(void *this,CWnd *param_1)

{
  HINSTANCE__ *hInstance;
  HICON pHVar1;
  LPCSTR lpIconName;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0040c8e0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CDialog::CDialog(this,0x66,param_1);
  local_4 = 0;
  CWnd::CWnd((CWnd *)((int)this + 0x204));
  *(undefined ***)((int)this + 0x204) = &PTR_GetRuntimeClass_0040ede8;
  local_4._0_1_ = 1;
  CWnd::CWnd((CWnd *)((int)this + 0x244));
  *(undefined ***)((int)this + 0x244) = &PTR_GetRuntimeClass_0040ede8;
  local_4._0_1_ = 2;
  CWnd::CWnd((CWnd *)((int)this + 0x284));
  *(undefined ***)((int)this + 0x284) = &PTR_GetRuntimeClass_0040ede8;
  local_4._0_1_ = 3;
  CWnd::CWnd((CWnd *)((int)this + 0x2c4));
  *(undefined ***)((int)this + 0x2c4) = &PTR_FUN_0040ed28;
  local_4 = CONCAT31(local_4._1_3_,4);
  *(undefined ***)this = &PTR_LAB_0040ec50;
  AfxGetModuleState();
  lpIconName = (LPCSTR)0x80;
  hInstance = AfxFindResourceHandle((char *)0x80,(char *)0xe);
  pHVar1 = LoadIconA(hInstance,lpIconName);
  *(HICON *)((int)this + 0x304) = pHVar1;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  ExceptionList = local_c;
  return this;
}


// ---- FUN_00402760 @ 00402760

void __thiscall
FUN_00402760(CWnd *param_1,undefined4 param_2,char *param_3,ulong param_4,tagRECT *param_5,
            CWnd *param_6,uint param_7)

{
  CWnd::CreateControl(param_1,(_GUID *)&DAT_0040eeb0,param_3,param_4,param_5,param_6,param_7,
                      (CFile *)0x0,0,(ushort *)0x0);
  return;
}


// ---- FUN_00402790 @ 00402790

CDialog * __thiscall FUN_00402790(void *this,byte param_1)

{
  FUN_004025b0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_004027b0 @ 004027b0

void __thiscall FUN_004027b0(void *this,CDataExchange *param_1)

{
  DDX_Control(param_1,0x476,(CWnd *)((int)this + 0x204));
  DDX_Control(param_1,0x46e,(CWnd *)((int)this + 0x244));
  DDX_Control(param_1,0x46d,(CWnd *)((int)this + 0x284));
  DDX_Control(param_1,0x3ea,(CWnd *)((int)this + 0x2c4));
  return;
}


// ---- FUN_00402820 @ 00402820

undefined4 __fastcall FUN_00402820(CDialog *param_1)

{
  CWnd *this;
  
  CDialog::OnInitDialog(param_1);
  SendMessageA(*(HWND *)(param_1 + 0x20),0x80,1,*(LPARAM *)(param_1 + 0x304));
  SendMessageA(*(HWND *)(param_1 + 0x20),0x80,0,*(LPARAM *)(param_1 + 0x304));
  this = CWnd::GetDlgItem((CWnd *)param_1,0x3fd);
  CWnd::SetFocus(this);
  CWnd::SetWindowPos((CWnd *)param_1,(CWnd *)wndTopMost_exref,0,0,0,0,3);
  FUN_00404250((int)param_1);
  SendMessageA(*(HWND *)(param_1 + 0x224),0xf1,1,0);
  return 0;
}


// ---- FUN_004028a0 @ 004028a0

void __fastcall FUN_004028a0(CWnd *param_1)

{
  BOOL BVar1;
  int iVar2;
  int iVar3;
  int unaff_ESI;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  HDC pHStack_54;
  
  BVar1 = IsIconic(*(HWND *)(param_1 + 0x20));
  if (BVar1 != 0) {
    func_0x0040c12c(param_1);
    SendMessageA(*(HWND *)(param_1 + 0x20),0x27,
                 -(uint)(&stack0x00000000 != (undefined1 *)0x58) & (uint)pHStack_54,0);
    iVar2 = GetSystemMetrics(0xb);
    iVar3 = GetSystemMetrics(0xc);
    GetClientRect(*(HWND *)(param_1 + 0x20),(LPRECT)&stack0xffffff98);
    DrawIcon(pHStack_54,(((iStack_60 - unaff_ESI) - iVar2) + 1) / 2,
             (((iStack_5c - iStack_64) - iVar3) + 1) / 2,*(HICON *)(param_1 + 0x304));
    func_0x0040c126();
    return;
  }
  CWnd::Default(param_1);
  return;
}


// ---- FUN_00402960 @ 00402960

undefined4 __fastcall FUN_00402960(int param_1)

{
  return *(undefined4 *)(param_1 + 0x304);
}


// ---- FUN_00402970 @ 00402970

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00402970(CWnd *param_1)

{
  CWnd *pCVar1;
  undefined1 uVar2;
  CWnd *pCVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  LRESULT LVar6;
  int iVar7;
  char *pcVar8;
  float local_14c;
  CString local_148 [4];
  CString local_144 [68];
  uint local_100;
  CDialog local_b4 [96];
  CListBox local_54 [68];
  void *local_10;
  void *pvStack_c;
  undefined1 *local_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  local_8 = &LAB_0040caba;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  CString::CString(local_144);
  local_4 = 0;
  pCVar3 = CWnd::GetDlgItem(param_1,0x3fd);
  CWnd::GetWindowTextA(pCVar3,local_144);
  puVar4 = (undefined4 *)operator+((char *)&local_14c,(CString *)s_LEO_Calibration__00414ee4);
  pCVar3 = param_1 + 0x2c4;
  local_8._0_1_ = 1;
  FUN_004080a0(pCVar3,*puVar4);
  local_8._0_1_ = 0;
  CString::~CString((CString *)&stack0xfffffeb0);
  pCVar1 = param_1 + 400;
  FUN_00407f60(pCVar3,param_1 + 0x18c,pCVar1);
  *(CWnd **)(param_1 + 0x200) = pCVar3;
  FUN_00407f00(pCVar3,param_1 + 0x170,s_DP_CALIBRATION_00414ed4);
  FUN_00407f30(pCVar3,*(undefined4 *)(param_1 + 0x170),&local_14c,0);
  if (local_14c < _DAT_0040eec4) {
    CWnd::MessageBoxA(param_1,s_You_must_be_logged_on_with_Servi_00414e7c,
                      s_Calibration_not_Enabled____00414eb8,0x10);
    goto LAB_00403ecf;
  }
  FUN_00407f00(pCVar3,param_1 + 0x164,s_DP_CALMODE_00414e70);
  FUN_00407f00(pCVar3,param_1 + 0x16c,s_CMD_OK_00414e68);
  FUN_00407f00(pCVar3,param_1 + 0x168,s_CMD_CANCEL_00414e5c);
  FUN_00407f00(pCVar3,param_1 + 0x15c,s_CMD_CAL_STAGEANGLE_00414e48);
  FUN_00407f00(pCVar3,param_1 + 0x154,s_CMD_CAL_LINETOFRAME_00414e34);
  FUN_00407f00(pCVar3,param_1 + 0x158,s_AP_LINE_FRAME_RATIO_00414e20);
  FUN_00407f00(pCVar3,param_1 + 0x174,s_CMD_CAL_SCANORTHOG_00414e0c);
  FUN_00407f00(pCVar3,param_1 + 0x178,s_AP_SCANORTHOG_00414dfc);
  FUN_00407f00(pCVar3,param_1 + 0x150,s_CMD_CAL_MAGCAL_00414dec);
  FUN_00407f00(pCVar3,param_1 + 0x194,s_DP_MAG_RANGE_00414ddc);
  FUN_00407f00(pCVar3,param_1 + 0x198,s_AP_MAG_00414dd4);
  FUN_00407f00(pCVar3,param_1 + 0x19c,s_AP_MAGCALX_00414dc8);
  FUN_00407f00(pCVar3,param_1 + 0x1a0,s_AP_MAGCALY_00414dbc);
  FUN_00407f00(pCVar3,param_1 + 0x1b0,s_DP_CROSSHAIRS_00414dac);
  FUN_00407f00(pCVar3,param_1 + 0x1b4,s_DP_GRATICULE_00414d9c);
  FUN_00407f00(pCVar3,param_1 + 0x14c,s_DP_MAGCAL_00414d90);
  FUN_00407f00(pCVar3,param_1 + 0x160,s_AP_STAGEANGLE_00414d80);
  FUN_00407f00(pCVar3,param_1 + 0x148,s_CMD_CAL_SCANRATEMAG_00414d6c);
  FUN_00407f00(pCVar3,param_1 + 0x144,s_AP_MAG_COMP_AMPL_00414d58);
  FUN_00407f00(pCVar3,param_1 + 0x140,s_AP_MAG_COMP_OFFSET_00414d44);
  FUN_00407f00(pCVar3,param_1 + 0x138,s_CMD_SCANRATE9_00414d34);
  FUN_00407f00(pCVar3,param_1 + 0xf8,s_CMD_SCANRATE10_00414d24);
  FUN_00407f00(pCVar3,param_1 + 0x13c,s_CMD_SCANRATE1_00414d14);
  FUN_00407f00(pCVar3,param_1 + 0x134,s_AP_CURSOR_WIDTH_00414d04);
  FUN_00407f00(pCVar3,param_1 + 0x17c,s_AP_MAG_SHIFT_X_00414cf4);
  FUN_00407f00(pCVar3,param_1 + 0x180,s_AP_MAG_SHIFT_Y_00414ce4);
  FUN_00407f00(pCVar3,param_1 + 0x1a4,s_CMD_CAL_MAG_SHIFT_00414cd0);
  FUN_00407f00(pCVar3,param_1 + 0x1a8,s_AP_BEAMSHIFT_X_00414cc0);
  FUN_00407f00(pCVar3,param_1 + 0x1ac,s_AP_BEAMSHIFT_Y_00414cb0);
  FUN_00407f00(pCVar3,param_1 + 0x184,s_AP_MAG_GAIN_X_00414ca0);
  FUN_00407f00(pCVar3,param_1 + 0x188,s_AP_MAG_GAIN_Y_00414c90);
  FUN_00407f00(pCVar3,param_1 + 0x1b8,s_CMD_EO_RESET_CAL_00414c7c);
  FUN_00407f00(pCVar3,param_1 + 0x1bc,s_CMD_CAL_BEAM_SHIFT_00414c68);
  FUN_00407f00(pCVar3,param_1 + 300,s_CMD_CAL_DUALMAG_00414c58);
  FUN_00407f00(pCVar3,param_1 + 0x128,s_CMD_CAL_DUAL_MAG_SLOPE_00414c40);
  FUN_00407f00(pCVar3,param_1 + 0x124,s_AP_DUAL_MAG_OFFSET_X_00414c28);
  FUN_00407f00(pCVar3,param_1 + 0x120,s_AP_DUAL_MAG_SLOPE_00414c14);
  FUN_00407f00(pCVar3,param_1 + 0x11c,s_AP_DUAL_MAG_Y_SLOPE_00414c00);
  FUN_00407f00(pCVar3,param_1 + 0x1c0,s_AP_AUTO_BRIGHT_00414bf0);
  FUN_00407f00(pCVar3,param_1 + 0x1c4,s_AP_AUTO_CONTRAST_00414bdc);
  FUN_00407f00(pCVar3,param_1 + 0x1c8,s_DP_ABCC_C_CAL_00414bcc);
  FUN_00407f00(pCVar3,param_1 + 0x1cc,s_DP_ABCC_B_CAL_00414bbc);
  FUN_00407f00(pCVar3,param_1 + 0x1d0,s_DP_DETECTOR_CHANNEL_00414ba8);
  FUN_00407f00(pCVar3,param_1 + 0x1d4,s_DP_AUTO_VIDEO_00414b98);
  FUN_00407f00(pCVar3,param_1 + 0x1d8,s_DP_COLUMN_TYPE_00414b88);
  FUN_00407f00(pCVar3,param_1 + 0x114,s_DP_WOBBLE_00414b7c);
  FUN_00407f00(pCVar3,param_1 + 0x10c,s_AP_LINE_AMPL_00414b6c);
  FUN_00407f00(pCVar3,param_1 + 0x110,s_CMD_CAL_LINEAMPL_00414b58);
  FUN_00407f00(pCVar3,param_1 + 0x104,s_AP_LINE_FRAME_RATIO_00414e20);
  FUN_00407f00(pCVar3,param_1 + 0x108,s_AP_FRAME_AMPL_00414b48);
  FUN_00407f00(pCVar3,param_1 + 0x100,s_CMD_CAL_FRAMEAMPL_00414b34);
  FUN_00407f00(pCVar3,param_1 + 0xfc,s_CMD_C1C2_HYSTERESIS_00414b20);
  FUN_00407f00(pCVar3,param_1 + 0xf4,s_DP_TILT_CORRECTION_00414b0c);
  FUN_00407f00(pCVar3,param_1 + 0xf0,s_DP_STAGE_ANGLE_00414afc);
  FUN_00407f00(pCVar3,param_1 + 0xec,s_DP_C3_ROT_CORRECTION_00414ae4);
  FUN_00407f00(pCVar3,param_1 + 0xe8,s_AP_SCAN_OFFSET_X_00414ad0);
  FUN_00407f00(pCVar3,param_1 + 0xe4,s_AP_SCAN_OFFSET_Y_00414abc);
  FUN_00407f00(pCVar3,param_1 + 0xe0,s_CMD_CAL_SCAN_CENTRE_00414aa8);
  FUN_00407f00(pCVar3,param_1 + 0xdc,s_AP_WD_00414aa0);
  FUN_00407f00(pCVar3,param_1 + 0xd8,s_AP_MAGCALWIDTH_00414a90);
  FUN_00407f00(pCVar3,param_1 + 0xd4,s_AP_MAGCALHEIGHT_00414a80);
  FUN_00407f00(pCVar3,param_1 + 0xd0,s_DP_CAL_SCANRATE_00414a70);
  FUN_00407f00(pCVar3,param_1 + 0xcc,s_DP_STIGBALANCE_00414a60);
  FUN_00407f00(pCVar3,param_1 + 0xc4,s_AP_STIGBALAMP_00414a50);
  FUN_00407f00(pCVar3,param_1 + 200,s_AP_STIGBALPERIOD_00414a3c);
  FUN_00407f00(pCVar3,param_1 + 0xb0,s_AP_STIGXUPPER_00414a2c);
  FUN_00407f00(pCVar3,param_1 + 0xb4,s_AP_STIGXLOWER_00414a1c);
  FUN_00407f00(pCVar3,param_1 + 0xb8,s_AP_STIGYUPPER_00414a0c);
  FUN_00407f00(pCVar3,param_1 + 0xbc,s_AP_STIGYLOWER_004149fc);
  FUN_00407f00(pCVar3,param_1 + 0xc0,s_CMD_CAL_STIGBALANCE_004149e8);
  FUN_00407f00(pCVar3,param_1 + 0xac,s_CMD_STIG_BALANCE_X_004149d4);
  FUN_00407f00(pCVar3,param_1 + 0xa8,s_CMD_STIG_BALANCE_Y_004149c0);
  FUN_00407f00(pCVar3,param_1 + 0xa4,s_AP_STIG_X_004149b4);
  FUN_00407f00(pCVar3,param_1 + 0xa0,s_AP_STIG_Y_004149a8);
  FUN_00407f00(pCVar3,param_1 + 0x9c,s_AP_IPROBE_0041499c);
  FUN_00407f00(pCVar3,param_1 + 0x7c,s_AP_OUTPUT_DEV_CAL_00414988);
  FUN_00407f00(pCVar3,param_1 + 0x80,s_CMD_CAL_OUTDEV_00414978);
  FUN_00407f00(pCVar3,param_1 + 0x84,s_CMD_HRRU_0041496c);
  FUN_00407f00(pCVar3,param_1 + 0x88,s_CMD_PRINTER_00414960);
  FUN_00407f00(pCVar3,param_1 + 0x8c,s_CMD_DISPLAY_00414954);
  FUN_00407f00(pCVar3,param_1 + 0x90,s_DP_OUT_TYPE_00414948);
  FUN_00407f00(pCVar3,param_1 + 0x94,s_DP_HRRU_FITTED_00414938);
  FUN_00407f00(pCVar3,param_1 + 0x98,s_CMD_TAKE_PHOTO_00414928);
  FUN_00407f00(pCVar3,param_1 + 0x74,s_DP_SCANRATE_0041491c);
  FUN_00407f00(pCVar3,param_1 + 0x1dc,s_CMD_MODE_REDUCED_00414908);
  FUN_00407f00(pCVar3,param_1 + 0x1e0,s_CMD_MODE_NORMAL_004141a4);
  FUN_00407f00(pCVar3,param_1 + 0x70,s_DP_MIX_DELAY_004148f8);
  FUN_00407f00(pCVar3,param_1 + 0x6c,s_AP_MANUALKV_004148ec);
  FUN_00407f00(pCVar3,param_1 + 0x1e4,s_DP_FRAME_GRABBER_004148d8);
  FUN_00407f00(pCVar3,param_1 + 0x1e8,s_DP_SCANGEN_TYPE_004148c8);
  FUN_00407f00(pCVar3,param_1 + 0x68,s_DP_SPOT_004148c0);
  FUN_00407f00(pCVar3,param_1 + 100,s_AP_SPOT_004148b8);
  FUN_00407f00(pCVar3,param_1 + 0x60,s_AP_SPOT_X_CAL_004148a8);
  FUN_00407f00(pCVar3,param_1 + 500,s_CMD_SCANRATEUP_00414898);
  FUN_00407f00(pCVar3,param_1 + 0x1f8,s_CMD_SCANRATEDOWN_00414884);
  FUN_00407f00(pCVar3,param_1 + 0x1fc,s_DP_IMAGE_STORE_00414874);
  FUN_00407ed0(pCVar3,*(undefined4 *)(param_1 + 0x114),1,*(undefined4 *)pCVar1);
  FUN_00407ed0(pCVar3,*(undefined4 *)(param_1 + 0x158),1,*(undefined4 *)pCVar1);
  FUN_00407ed0(pCVar3,*(undefined4 *)(param_1 + 0x178),1,*(undefined4 *)pCVar1);
  FUN_00407ed0(pCVar3,*(undefined4 *)(param_1 + 0x160),1,*(undefined4 *)pCVar1);
  FUN_00407ed0(pCVar3,*(undefined4 *)(param_1 + 0x198),1,*(undefined4 *)pCVar1);
  FUN_00407ed0(pCVar3,*(undefined4 *)(param_1 + 0x60),1,*(undefined4 *)pCVar1);
  FUN_00407f30(pCVar3,*(undefined4 *)(param_1 + 0x1d8),&local_14c,0);
  uVar5 = ftol();
  *(undefined4 *)(param_1 + 0x118) = uVar5;
  FUN_00407f30(pCVar3,*(undefined4 *)(param_1 + 0x1e4),&local_14c,0);
  uVar5 = ftol();
  *(undefined4 *)(param_1 + 0x1ec) = uVar5;
  FUN_00407f30(pCVar3,*(undefined4 *)(param_1 + 0x1e8),&local_14c,0);
  uVar5 = ftol();
  *(undefined4 *)(param_1 + 0x1f0) = uVar5;
  FUN_00406b90(local_144,s_LEO_Calibration_00414864,(CWnd *)0x0,0);
  local_8._0_1_ = 2;
  uVar2 = local_8._0_1_;
  local_8._0_1_ = 2;
  *(CString **)(param_1 + 0x78) = local_144;
  local_100 = local_100 & 0xfffffdff | 0xa0;
  switch(*(undefined4 *)(param_1 + 0x118)) {
  case 0:
  case 1:
  case 3:
    local_8._0_1_ = uVar2;
    puVar4 = operator_new(0x194);
    local_8._0_1_ = 0x15;
    if (puVar4 == (undefined4 *)0x0) {
      DAT_004160a0 = (CPropertyPage *)0x0;
    }
    else {
      DAT_004160a0 = (CPropertyPage *)FUN_00407af0(puVar4);
    }
    local_8._0_1_ = 2;
    CPropertySheet::AddPage((CPropertySheet *)local_144,DAT_004160a0);
    puVar4 = operator_new(0x118);
    local_8._0_1_ = 0x16;
    if (puVar4 == (undefined4 *)0x0) {
      DAT_004160bc = (CPropertyPage *)0x0;
    }
    else {
      DAT_004160bc = (CPropertyPage *)FUN_0040ac40(puVar4);
    }
    local_8._0_1_ = 2;
    CPropertySheet::AddPage((CPropertySheet *)local_144,DAT_004160bc);
    puVar4 = operator_new(0x158);
    local_8._0_1_ = 0x17;
    if (puVar4 == (undefined4 *)0x0) {
      DAT_004160d8 = (CPropertyPage *)0x0;
    }
    else {
      DAT_004160d8 = (CPropertyPage *)FUN_00408240(puVar4);
    }
    local_8._0_1_ = 2;
    CPropertySheet::AddPage((CPropertySheet *)local_144,DAT_004160d8);
    puVar4 = operator_new(0x154);
    local_8._0_1_ = 0x18;
    if (puVar4 == (undefined4 *)0x0) {
      DAT_004160dc = (CPropertyPage *)0x0;
    }
    else {
      DAT_004160dc = (CPropertyPage *)FUN_00409630(puVar4);
    }
    local_8._0_1_ = 2;
    CPropertySheet::AddPage((CPropertySheet *)local_144,DAT_004160dc);
    puVar4 = operator_new(0x154);
    local_8._0_1_ = 0x19;
    if (puVar4 == (undefined4 *)0x0) {
      DAT_004160e0 = (CPropertyPage *)0x0;
    }
    else {
      DAT_004160e0 = (CPropertyPage *)FUN_00405eb0(puVar4);
    }
    local_8._0_1_ = 2;
    CPropertySheet::AddPage((CPropertySheet *)local_144,DAT_004160e0);
    puVar4 = operator_new(0xd4);
    local_8._0_1_ = 0x1a;
    if (puVar4 == (undefined4 *)0x0) {
      DAT_004160b8 = (CPropertyPage *)0x0;
    }
    else {
      DAT_004160b8 = (CPropertyPage *)FUN_00409a90(puVar4);
    }
    local_8._0_1_ = 2;
    CPropertySheet::AddPage((CPropertySheet *)local_144,DAT_004160b8);
    puVar4 = operator_new(0x158);
    local_8._0_1_ = 0x1b;
    if (puVar4 == (undefined4 *)0x0) {
      DAT_00416098 = (CPropertyPage *)0x0;
    }
    else {
      DAT_00416098 = (CPropertyPage *)FUN_00405190(puVar4);
    }
    local_8._0_1_ = 2;
    CPropertySheet::AddPage((CPropertySheet *)local_144,DAT_00416098);
    puVar4 = operator_new(0x158);
    local_8._0_1_ = 0x1c;
    if (puVar4 == (undefined4 *)0x0) {
      DAT_004160f4 = (CPropertyPage *)0x0;
    }
    else {
      DAT_004160f4 = (CPropertyPage *)FUN_004071f0(puVar4);
    }
    local_8._0_1_ = 2;
    CPropertySheet::AddPage((CPropertySheet *)local_144,DAT_004160f4);
    puVar4 = operator_new(0x154);
    local_8._0_1_ = 0x1d;
    if (puVar4 == (undefined4 *)0x0) {
      DAT_00416094 = (CPropertyPage *)0x0;
    }
    else {
      DAT_00416094 = (CPropertyPage *)FUN_00409110(puVar4);
    }
    local_8._0_1_ = 2;
    CPropertySheet::AddPage((CPropertySheet *)local_144,DAT_00416094);
    puVar4 = operator_new(0x114);
    local_8._0_1_ = 0x1e;
    if (puVar4 == (undefined4 *)0x0) {
      DAT_004160f0 = (CPropertyPage *)0x0;
    }
    else {
      DAT_004160f0 = (CPropertyPage *)FUN_00401e00(puVar4);
    }
    local_8._0_1_ = 2;
    CPropertySheet::AddPage((CPropertySheet *)local_144,DAT_004160f0);
    puVar4 = operator_new(0x218);
    local_8._0_1_ = 0x1f;
    if (puVar4 == (undefined4 *)0x0) {
      DAT_004160e8 = (CPropertyPage *)0x0;
    }
    else {
      DAT_004160e8 = (CPropertyPage *)FUN_0040b520(puVar4);
    }
    local_8._0_1_ = 2;
    CPropertySheet::AddPage((CPropertySheet *)local_144,DAT_004160e8);
    puVar4 = operator_new(0xdc);
    local_8._0_1_ = 0x20;
    if (puVar4 == (undefined4 *)0x0) {
      DAT_004160c8 = (CPropertyPage *)0x0;
    }
    else {
      DAT_004160c8 = (CPropertyPage *)FUN_0040a1b0(puVar4);
    }
    local_8._0_1_ = 2;
    CPropertySheet::AddPage((CPropertySheet *)local_144,DAT_004160c8);
    puVar4 = operator_new(0x98);
    local_8 = (undefined1 *)CONCAT31(local_8._1_3_,0x21);
    if (puVar4 == (undefined4 *)0x0) {
LAB_00403ad0:
      DAT_004160d4 = (CPropertyPage *)0x0;
    }
    else {
      DAT_004160d4 = (CPropertyPage *)FUN_004021e0(puVar4);
    }
    break;
  default:
    goto switchD_004032a3_caseD_2;
  case 5:
  case 6:
  case 7:
  case 8:
    puVar4 = operator_new(0x194);
    local_8._0_1_ = 3;
    if (puVar4 == (undefined4 *)0x0) {
      DAT_004160a0 = (CPropertyPage *)0x0;
    }
    else {
      DAT_004160a0 = (CPropertyPage *)FUN_00407af0(puVar4);
    }
    local_8._0_1_ = 2;
    CPropertySheet::AddPage((CPropertySheet *)local_144,DAT_004160a0);
    if (*(int *)(param_1 + 0x1ec) == 0) {
      puVar4 = operator_new(0xd8);
      local_8._0_1_ = 4;
      if (puVar4 == (undefined4 *)0x0) {
        DAT_004160fc = (CPropertyPage *)0x0;
      }
      else {
        DAT_004160fc = (CPropertyPage *)FUN_00406690(puVar4);
      }
      local_8._0_1_ = 2;
      CPropertySheet::AddPage((CPropertySheet *)local_144,DAT_004160fc);
      puVar4 = operator_new(0x114);
      local_8._0_1_ = 5;
      if (puVar4 == (undefined4 *)0x0) {
        DAT_004160f8 = (CPropertyPage *)0x0;
      }
      else {
        DAT_004160f8 = (CPropertyPage *)FUN_004077e0(puVar4);
      }
      local_8._0_1_ = 2;
      CPropertySheet::AddPage((CPropertySheet *)local_144,DAT_004160f8);
    }
    puVar4 = operator_new(0x98);
    local_8._0_1_ = 6;
    if (puVar4 == (undefined4 *)0x0) {
      DAT_004160a4 = (CPropertyPage *)0x0;
    }
    else {
      DAT_004160a4 = (CPropertyPage *)FUN_0040bcc0(puVar4);
    }
    local_8._0_1_ = 2;
    CPropertySheet::AddPage((CPropertySheet *)local_144,DAT_004160a4);
    if (*(int *)(param_1 + 0x1ec) == 0) {
      pcVar8 = s_Adjust_Mag_Comp_Amplitude__prese_00414734;
    }
    else {
      pcVar8 = s_Adjust_Mag_Comp__Amplitude_if_ne_00414544;
    }
    CString::CString((CString *)&stack0xfffffe9c,pcVar8);
    FUN_0040bdf0((int)DAT_004160a4);
    FUN_0040be60(DAT_004160a4,s_Scanning_Calibration_Procedure_00414524);
    puVar4 = operator_new(600);
    local_8._0_1_ = 7;
    if (puVar4 == (undefined4 *)0x0) {
      DAT_004160a8 = (CPropertyPage *)0x0;
    }
    else {
      DAT_004160a8 = (CPropertyPage *)FUN_00408920(puVar4);
    }
    local_8._0_1_ = 2;
    CPropertySheet::AddPage((CPropertySheet *)local_144,DAT_004160a8);
    puVar4 = operator_new(0x98);
    local_8._0_1_ = 8;
    if (puVar4 == (undefined4 *)0x0) {
      DAT_004160ac = (CPropertyPage *)0x0;
    }
    else {
      DAT_004160ac = (CPropertyPage *)FUN_0040bcc0(puVar4);
    }
    local_8._0_1_ = 2;
    CPropertySheet::AddPage((CPropertySheet *)local_144,DAT_004160ac);
    CString::CString((CString *)&stack0xfffffe9c,s_Adjust_Mag_Cal_so_that_the_magni_0041449c);
    FUN_0040bdf0((int)DAT_004160ac);
    FUN_0040be60(DAT_004160ac,s_Magnification_Calibration_Proced_00414478);
    puVar4 = operator_new(0x198);
    local_8._0_1_ = 9;
    if (puVar4 == (undefined4 *)0x0) {
      _DAT_004160b0 = (CPropertyPage *)0x0;
    }
    else {
      _DAT_004160b0 = (CPropertyPage *)FUN_00404a70(puVar4);
    }
    local_8._0_1_ = 2;
    CPropertySheet::AddPage((CPropertySheet *)local_144,_DAT_004160b0);
    puVar4 = operator_new(0xd4);
    local_8._0_1_ = 10;
    if (puVar4 == (undefined4 *)0x0) {
      DAT_004160b4 = (CPropertyPage *)0x0;
    }
    else {
      DAT_004160b4 = (CPropertyPage *)FUN_00404730(puVar4);
    }
    local_8._0_1_ = 2;
    CPropertySheet::AddPage((CPropertySheet *)local_144,DAT_004160b4);
    puVar4 = operator_new(0xd4);
    local_8._0_1_ = 0xb;
    if (puVar4 == (undefined4 *)0x0) {
      DAT_004160b8 = (CPropertyPage *)0x0;
    }
    else {
      DAT_004160b8 = (CPropertyPage *)FUN_00409a90(puVar4);
    }
    local_8._0_1_ = 2;
    CPropertySheet::AddPage((CPropertySheet *)local_144,DAT_004160b8);
    puVar4 = operator_new(0x118);
    local_8._0_1_ = 0xc;
    if (puVar4 == (undefined4 *)0x0) {
      DAT_004160bc = (CPropertyPage *)0x0;
    }
    else {
      DAT_004160bc = (CPropertyPage *)FUN_0040ac40(puVar4);
    }
    local_8._0_1_ = 2;
    CPropertySheet::AddPage((CPropertySheet *)local_144,DAT_004160bc);
    puVar4 = operator_new(0x98);
    local_8._0_1_ = 0xd;
    if (puVar4 == (undefined4 *)0x0) {
      DAT_004160c0 = (CPropertyPage *)0x0;
    }
    else {
      DAT_004160c0 = (CPropertyPage *)FUN_0040bcc0(puVar4);
    }
    local_8._0_1_ = 2;
    CPropertySheet::AddPage((CPropertySheet *)local_144,DAT_004160c0);
    CString::CString((CString *)&stack0xfffffe9c,s_Centre_a_point_in_mag_range_3__t_00414360);
    FUN_0040bdf0((int)DAT_004160c0);
    FUN_0040be60(DAT_004160c0,s_Mag_Range_Offset_Calibration_Pro_00414338);
    puVar4 = operator_new(0x1d4);
    local_8._0_1_ = 0xe;
    if (puVar4 == (undefined4 *)0x0) {
      DAT_004160c4 = (CPropertyPage *)0x0;
    }
    else {
      DAT_004160c4 = (CPropertyPage *)FUN_00405740(puVar4);
    }
    local_8._0_1_ = 2;
    CPropertySheet::AddPage((CPropertySheet *)local_144,DAT_004160c4);
    puVar4 = operator_new(0xdc);
    local_8._0_1_ = 0xf;
    if (puVar4 == (undefined4 *)0x0) {
      DAT_004160c8 = (CPropertyPage *)0x0;
    }
    else {
      DAT_004160c8 = (CPropertyPage *)FUN_0040a1b0(puVar4);
    }
    local_8._0_1_ = 2;
    CPropertySheet::AddPage((CPropertySheet *)local_144,DAT_004160c8);
    iVar7 = FUN_00408070(pCVar3,6);
    if (iVar7 != 0) {
      puVar4 = operator_new(0x124);
      local_8._0_1_ = 0x10;
      if (puVar4 == (undefined4 *)0x0) {
        DAT_004160cc = (CPropertyPage *)0x0;
      }
      else {
        DAT_004160cc = (CPropertyPage *)FUN_00401680(puVar4);
      }
      local_8._0_1_ = 2;
      CPropertySheet::AddPage((CPropertySheet *)local_144,DAT_004160cc);
    }
    puVar4 = operator_new(0x160);
    local_8._0_1_ = 0x11;
    if (puVar4 == (undefined4 *)0x0) {
      DAT_00416100 = (CPropertyPage *)0x0;
    }
    else {
      DAT_00416100 = (CPropertyPage *)FUN_0040a860(puVar4);
    }
    local_8._0_1_ = 2;
    CPropertySheet::AddPage((CPropertySheet *)local_144,DAT_00416100);
    puVar4 = operator_new(0x214);
    local_8._0_1_ = 0x12;
    if (puVar4 == (undefined4 *)0x0) {
      DAT_004160d0 = (CPropertyPage *)0x0;
    }
    else {
      DAT_004160d0 = (CPropertyPage *)FUN_004010b0(puVar4);
    }
    local_8._0_1_ = 2;
    CPropertySheet::AddPage((CPropertySheet *)local_144,DAT_004160d0);
    puVar4 = operator_new(0x158);
    local_8._0_1_ = 0x13;
    if (puVar4 == (undefined4 *)0x0) {
      DAT_004160f4 = (CPropertyPage *)0x0;
    }
    else {
      DAT_004160f4 = (CPropertyPage *)FUN_004071f0(puVar4);
    }
    local_8._0_1_ = 2;
    CPropertySheet::AddPage((CPropertySheet *)local_144,DAT_004160f4);
    puVar4 = operator_new(0x98);
    local_8 = (undefined1 *)CONCAT31(local_8._1_3_,0x14);
    if (puVar4 == (undefined4 *)0x0) goto LAB_00403ad0;
    DAT_004160d4 = (CPropertyPage *)FUN_004021e0(puVar4);
  }
  local_8._0_1_ = 2;
  CPropertySheet::AddPage((CPropertySheet *)local_144,DAT_004160d4);
switchD_004032a3_caseD_2:
  CWnd::ShowWindow(param_1,0);
  LVar6 = SendMessageA(*(HWND *)(param_1 + 0x264),0xf0,0,0);
  if (LVar6 != 0) {
    FUN_00409dd0(local_b4,local_144);
    local_8._0_1_ = 0x22;
    CDialog::DoModal(local_b4);
    local_8._0_1_ = 0x23;
    CListBox::~CListBox(local_54);
    local_8._0_1_ = 2;
    CDialog::~CDialog(local_b4);
  }
  do {
    *(undefined4 *)(param_1 + 0x130) = 0;
    iVar7 = CPropertySheet::DoModal((CPropertySheet *)local_144);
  } while (*(int *)(param_1 + 0x130) != 0);
  LVar6 = SendMessageA(*(HWND *)(param_1 + 0x264),0xf0,0,0);
  if (LVar6 != 0) {
    CWnd::ShowWindow(param_1,1);
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (iVar7 == 2) {
    MessageBeep(0);
    FUN_004080d0(pCVar3,*(undefined4 *)(param_1 + 0x168));
  }
  FUN_00407f90(pCVar3,*(undefined4 *)(param_1 + 0x1b4),0,0);
  FUN_00407f90(pCVar3,*(undefined4 *)(param_1 + 0x1b0),0,0);
  FUN_00407ed0(pCVar3,*(undefined4 *)(param_1 + 0x114),0,*(undefined4 *)pCVar1);
  FUN_00407ed0(pCVar3,*(undefined4 *)(param_1 + 0x158),0,*(undefined4 *)pCVar1);
  FUN_00407ed0(pCVar3,*(undefined4 *)(param_1 + 0x178),0,*(undefined4 *)pCVar1);
  FUN_00407ed0(pCVar3,*(undefined4 *)(param_1 + 0x160),0,*(undefined4 *)pCVar1);
  FUN_00407ed0(pCVar3,*(undefined4 *)(param_1 + 0x198),0,*(undefined4 *)pCVar1);
  LVar6 = SendMessageA(*(HWND *)(param_1 + 0x2a4),0xf0,0,0);
  if (LVar6 != 0) {
    (**(code **)(*(int *)param_1 + 0x60))();
  }
  if (DAT_004160a0 != (CPropertyPage *)0x0) {
    (**(code **)(*(int *)DAT_004160a0 + 4))();
    DAT_004160a0 = (CPropertyPage *)0x0;
  }
  if (DAT_004160a4 != (CPropertyPage *)0x0) {
    (**(code **)(*(int *)DAT_004160a4 + 4))();
    DAT_004160a4 = (CPropertyPage *)0x0;
  }
  if (DAT_004160a8 != (CPropertyPage *)0x0) {
    (**(code **)(*(int *)DAT_004160a8 + 4))();
    DAT_004160a8 = (CPropertyPage *)0x0;
  }
  if (DAT_004160ac != (CPropertyPage *)0x0) {
    (**(code **)(*(int *)DAT_004160ac + 4))();
    DAT_004160ac = (CPropertyPage *)0x0;
  }
  if (DAT_004160b4 != (CPropertyPage *)0x0) {
    (**(code **)(*(int *)DAT_004160b4 + 4))();
    DAT_004160b4 = (CPropertyPage *)0x0;
  }
  if (DAT_004160b8 != (CPropertyPage *)0x0) {
    (**(code **)(*(int *)DAT_004160b8 + 4))();
    DAT_004160b8 = (CPropertyPage *)0x0;
  }
  if (DAT_004160bc != (CPropertyPage *)0x0) {
    (**(code **)(*(int *)DAT_004160bc + 4))();
    DAT_004160bc = (CPropertyPage *)0x0;
  }
  if (DAT_004160c0 != (CPropertyPage *)0x0) {
    (**(code **)(*(int *)DAT_004160c0 + 4))();
    DAT_004160c0 = (CPropertyPage *)0x0;
  }
  if (DAT_004160c4 != (CPropertyPage *)0x0) {
    (**(code **)(*(int *)DAT_004160c4 + 4))();
    DAT_004160c4 = (CPropertyPage *)0x0;
  }
  if (DAT_004160c8 != (CPropertyPage *)0x0) {
    (**(code **)(*(int *)DAT_004160c8 + 4))();
    DAT_004160c8 = (CPropertyPage *)0x0;
  }
  if (DAT_004160cc != (CPropertyPage *)0x0) {
    (**(code **)(*(int *)DAT_004160cc + 4))();
    DAT_004160cc = (CPropertyPage *)0x0;
  }
  if (DAT_004160d0 != (CPropertyPage *)0x0) {
    (**(code **)(*(int *)DAT_004160d0 + 4))();
    DAT_004160d0 = (CPropertyPage *)0x0;
  }
  if (DAT_004160d4 != (CPropertyPage *)0x0) {
    (**(code **)(*(int *)DAT_004160d4 + 4))();
    DAT_004160d4 = (CPropertyPage *)0x0;
  }
  if (DAT_004160d8 != (CPropertyPage *)0x0) {
    (**(code **)(*(int *)DAT_004160d8 + 4))();
    DAT_004160d8 = (CPropertyPage *)0x0;
  }
  if (DAT_004160dc != (CPropertyPage *)0x0) {
    (**(code **)(*(int *)DAT_004160dc + 4))();
    DAT_004160dc = (CPropertyPage *)0x0;
  }
  if (DAT_004160e0 != (CPropertyPage *)0x0) {
    (**(code **)(*(int *)DAT_004160e0 + 4))();
    DAT_004160e0 = (CPropertyPage *)0x0;
  }
  if (DAT_00416098 != (CPropertyPage *)0x0) {
    (**(code **)(*(int *)DAT_00416098 + 4))();
    DAT_00416098 = (CPropertyPage *)0x0;
  }
  if (DAT_004160e4 != (int *)0x0) {
    (**(code **)(*DAT_004160e4 + 4))();
    DAT_004160e4 = (int *)0x0;
  }
  if (DAT_00416094 != (CPropertyPage *)0x0) {
    (**(code **)(*(int *)DAT_00416094 + 4))();
    DAT_00416094 = (CPropertyPage *)0x0;
  }
  if (DAT_004160e8 != (CPropertyPage *)0x0) {
    (**(code **)(*(int *)DAT_004160e8 + 4))();
    DAT_004160e8 = (CPropertyPage *)0x0;
  }
  if (DAT_004160ec != (int *)0x0) {
    (**(code **)(*DAT_004160ec + 4))();
    DAT_004160ec = (int *)0x0;
  }
  if (DAT_004160f0 != (CPropertyPage *)0x0) {
    (**(code **)(*(int *)DAT_004160f0 + 4))();
    DAT_004160f0 = (CPropertyPage *)0x0;
  }
  if (DAT_004160f4 != (CPropertyPage *)0x0) {
    (**(code **)(*(int *)DAT_004160f4 + 4))();
    DAT_004160f4 = (CPropertyPage *)0x0;
  }
  if (DAT_004160f8 != (CPropertyPage *)0x0) {
    (**(code **)(*(int *)DAT_004160f8 + 4))();
    DAT_004160f8 = (CPropertyPage *)0x0;
  }
  if (DAT_004160fc != (CPropertyPage *)0x0) {
    (**(code **)(*(int *)DAT_004160fc + 4))();
    DAT_004160fc = (CPropertyPage *)0x0;
  }
  if (DAT_00416100 != (CPropertyPage *)0x0) {
    (**(code **)(*(int *)DAT_00416100 + 4))();
    DAT_00416100 = (CPropertyPage *)0x0;
  }
  local_8 = (undefined1 *)((uint)local_8._1_3_ << 8);
  FUN_00406c10((CPropertySheet *)local_144);
LAB_00403ecf:
  local_8 = (undefined1 *)0xffffffff;
  CString::~CString(local_148);
  ExceptionList = local_10;
  return;
}


// ---- FUN_00403f20 @ 00403f20

void __fastcall FUN_00403f20(CDialog *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0040cad8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  CListBox::~CListBox((CListBox *)(param_1 + 0x60));
  local_4 = 0xffffffff;
  CDialog::~CDialog(param_1);
  ExceptionList = local_c;
  return;
}


// ---- FUN_00404070 @ 00404070

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00404070(int param_1)

{
  void *this;
  AFX_MODULE_STATE *pAVar1;
  CPropertyPage *pCVar2;
  DWORD DVar3;
  uint uVar4;
  CString *pCVar5;
  float local_28;
  char *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  float local_18;
  float local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0040cb00;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pAVar1 = AfxGetModuleState();
  CCmdTarget::BeginWaitCursor(*(CCmdTarget **)(pAVar1 + 4));
  local_4 = 0;
  CString::CString((CString *)&local_24);
  this = (void *)(param_1 + 0x2c4);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00407f00(this,&local_10,s_DP_C1C2_HYSTERESIS_00414f30);
  FUN_00407f00(this,&local_20,s_DP_GSP_00414f28);
  FUN_00407f00(this,&local_1c,s_DP_SCANGEN_00414f1c);
  if (*(CPropertySheet **)(param_1 + 0x78) != (CPropertySheet *)0x0) {
    pCVar5 = (CString *)&local_24;
    pCVar2 = CPropertySheet::GetActivePage(*(CPropertySheet **)(param_1 + 0x78));
    CWnd::GetWindowTextA((CWnd *)pCVar2,pCVar5);
    CPropertySheet::SetTitle
              (*(CPropertySheet **)(param_1 + 0x78),s_Removing_Hysteresis__Please_Wait_00414ef8,0);
  }
  FUN_004080d0(this,*(undefined4 *)(param_1 + 0xfc));
  local_28 = 1.0;
  FUN_00407f30(this,local_20,&local_18,0);
  FUN_00407f30(this,local_1c,&local_14,0);
  if ((_DAT_0040eec4 < local_18) || (_DAT_0040eec4 < local_14)) {
    if (_DAT_0040eec4 < local_28) {
      do {
        FUN_00407f30(this,local_10,&local_28,0);
      } while (_DAT_0040eec4 < local_28);
    }
  }
  else {
    DVar3 = GetTickCount();
    uVar4 = GetTickCount();
    while (uVar4 < DVar3 + 1000) {
      uVar4 = GetTickCount();
    }
  }
  if (*(CPropertySheet **)(param_1 + 0x78) != (CPropertySheet *)0x0) {
    pCVar2 = CPropertySheet::GetActivePage(*(CPropertySheet **)(param_1 + 0x78));
    CWnd::SetWindowTextA((CWnd *)pCVar2,local_24);
  }
  local_4 = local_4 & 0xffffff00;
  CString::~CString((CString *)&local_24);
  local_4 = 0xffffffff;
  pAVar1 = AfxGetModuleState();
  CCmdTarget::EndWaitCursor(*(CCmdTarget **)(pAVar1 + 4));
  ExceptionList = local_c;
  return;
}


// ---- FUN_00404210 @ 00404210

void __fastcall FUN_00404210(int param_1)

{
  SendMessageA(*(HWND *)(param_1 + 0x2a4),0xf1,0,0);
  SendMessageA(*(HWND *)(param_1 + 0x264),0xf1,1,0);
  return;
}


// ---- FUN_00404250 @ 00404250

void __fastcall FUN_00404250(int param_1)

{
  SendMessageA(*(HWND *)(param_1 + 0x2a4),0xf1,1,0);
  SendMessageA(*(HWND *)(param_1 + 0x264),0xf1,0,0);
  return;
}


// ---- FUN_004042a0 @ 004042a0

CButton * __thiscall FUN_004042a0(void *this,byte param_1)

{
  CButton::~CButton(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_004042c0 @ 004042c0

CWnd * FUN_004042c0(void)

{
  CWnd *this;
  CWnd *pCVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0040cb1a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = operator_new(0x40);
  local_4 = 0;
  pCVar1 = (CWnd *)0x0;
  if (this != (CWnd *)0x0) {
    CWnd::CWnd(this);
    *(undefined ***)this = &PTR_FUN_0040e4b0;
    pCVar1 = this;
  }
  ExceptionList = local_c;
  return pCVar1;
}


// ---- FUN_00404310 @ 00404310

undefined ** FUN_00404310(void)

{
  return &PTR_s_CLEOAnalg_0040eec8;
}


// ---- FUN_00404320 @ 00404320

void __fastcall FUN_00404320(CWnd *param_1)

{
  CWnd::SetProperty(param_1,(long)param_1,2);
  return;
}


// ---- FUN_00404340 @ 00404340

void __fastcall FUN_00404340(CWnd *param_1)

{
  CWnd::SetProperty(param_1,(long)param_1,3);
  return;
}


// ---- FUN_00404360 @ 00404360

undefined4 __thiscall
FUN_00404360(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 in_stack_00000020;
  
  CWnd::InvokeHelper(this,(long)this,4,1,(void *)0x3,(uchar *)&param_3);
  return in_stack_00000020;
}


// ---- FUN_00404390 @ 00404390

CWnd * FUN_00404390(void)

{
  CWnd *this;
  CWnd *pCVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0040cb3a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = operator_new(0x40);
  local_4 = 0;
  pCVar1 = (CWnd *)0x0;
  if (this != (CWnd *)0x0) {
    CWnd::CWnd(this);
    *(undefined ***)this = &PTR_FUN_0040eef8;
    pCVar1 = this;
  }
  ExceptionList = local_c;
  return pCVar1;
}


// ---- FUN_004043e0 @ 004043e0

void __thiscall
FUN_004043e0(CWnd *param_1,undefined4 param_2,char *param_3,ulong param_4,tagRECT *param_5,
            CWnd *param_6,uint param_7)

{
  CWnd::CreateControl(param_1,(_GUID *)&DAT_0040efb8,param_3,param_4,param_5,param_6,param_7,
                      (CFile *)0x0,0,(ushort *)0x0);
  return;
}


// ---- FUN_00404410 @ 00404410

undefined ** FUN_00404410(void)

{
  return &PTR_s_CLEOButton_0040eee0;
}


// ---- FUN_00404420 @ 00404420

undefined4 __thiscall FUN_00404420(void *this)

{
  undefined4 in_stack_00000024;
  
  CWnd::InvokeHelper(this,(long)this,1,1,(void *)0x3,&stack0x00000010);
  return in_stack_00000024;
}


// ---- FUN_00404460 @ 00404460

CWnd * FUN_00404460(void)

{
  CWnd *this;
  CWnd *pCVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0040cb5a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = operator_new(0x40);
  local_4 = 0;
  pCVar1 = (CWnd *)0x0;
  if (this != (CWnd *)0x0) {
    CWnd::CWnd(this);
    *(undefined ***)this = &PTR_FUN_0040e570;
    pCVar1 = this;
  }
  ExceptionList = local_c;
  return pCVar1;
}


// ---- FUN_004044b0 @ 004044b0

undefined ** FUN_004044b0(void)

{
  return &PTR_s_CLEOCombo_0040efc8;
}


// ---- FUN_004044c0 @ 004044c0

undefined4 __thiscall
FUN_004044c0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 in_stack_00000020;
  
  CWnd::InvokeHelper(this,(long)this,1,1,(void *)0x3,(uchar *)&param_3);
  return in_stack_00000020;
}


// ---- FUN_004044f0 @ 004044f0

CWnd * FUN_004044f0(void)

{
  CWnd *this;
  CWnd *pCVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0040cb7a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = operator_new(0x40);
  local_4 = 0;
  pCVar1 = (CWnd *)0x0;
  if (this != (CWnd *)0x0) {
    CWnd::CWnd(this);
    *(undefined ***)this = &PTR_FUN_0040eff8;
    pCVar1 = this;
  }
  ExceptionList = local_c;
  return pCVar1;
}


// ---- FUN_00404540 @ 00404540

void __thiscall
FUN_00404540(CWnd *param_1,undefined4 param_2,char *param_3,ulong param_4,tagRECT *param_5,
            CWnd *param_6,uint param_7)

{
  CWnd::CreateControl(param_1,(_GUID *)&DAT_0040f0b8,param_3,param_4,param_5,param_6,param_7,
                      (CFile *)0x0,0,(ushort *)0x0);
  return;
}


// ---- FUN_00404570 @ 00404570

CWnd * __thiscall FUN_00404570(void *this,byte param_1)

{
  CWnd::~CWnd(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_00404590 @ 00404590

undefined ** FUN_00404590(void)

{
  return &PTR_s_CLEONavgt_0040efe0;
}


// ---- FUN_004045a0 @ 004045a0

undefined4 __thiscall
FUN_004045a0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 in_stack_00000020;
  
  CWnd::InvokeHelper(this,(long)this,5,1,(void *)0x3,(uchar *)&param_3);
  return in_stack_00000020;
}


// ---- FUN_004045d0 @ 004045d0

CWnd * FUN_004045d0(void)

{
  CWnd *this;
  CWnd *pCVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0040cb9a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = operator_new(0x40);
  local_4 = 0;
  pCVar1 = (CWnd *)0x0;
  if (this != (CWnd *)0x0) {
    CWnd::CWnd(this);
    *(undefined ***)this = &PTR_FUN_0040f0e0;
    pCVar1 = this;
  }
  ExceptionList = local_c;
  return pCVar1;
}


// ---- FUN_00404620 @ 00404620

void __thiscall
FUN_00404620(CWnd *param_1,undefined4 param_2,char *param_3,ulong param_4,tagRECT *param_5,
            CWnd *param_6,uint param_7)

{
  CWnd::CreateControl(param_1,(_GUID *)&DAT_0040f1a0,param_3,param_4,param_5,param_6,param_7,
                      (CFile *)0x0,0,(ushort *)0x0);
  return;
}


// ---- FUN_00404650 @ 00404650

undefined ** FUN_00404650(void)

{
  return &PTR_s_CLEOStatic_0040f0c8;
}


// ---- FUN_00404660 @ 00404660

undefined4 __thiscall
FUN_00404660(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 in_stack_00000020;
  
  CWnd::InvokeHelper(this,(long)this,2,1,(void *)0x3,(uchar *)&param_3);
  return in_stack_00000020;
}


// ---- FUN_004046c0 @ 004046c0

undefined4 * FUN_004046c0(void)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0040cbba;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0xd4);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = FUN_00404730(puVar1);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


// ---- FUN_00404720 @ 00404720

undefined ** FUN_00404720(void)

{
  return &PTR_s_CLineFrame_0040f1b0;
}


// ---- FUN_00404730 @ 00404730

undefined4 * __fastcall FUN_00404730(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0040cbd8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004069b0(param_1,0x87);
  local_4 = 0;
  CWnd::CWnd((CWnd *)(param_1 + 0x25));
  *(undefined ***)(param_1 + 0x25) = &PTR_FUN_0040e4b0;
  *param_1 = &PTR_FUN_0040f200;
  ExceptionList = local_c;
  return param_1;
}


// ---- FUN_00404790 @ 00404790

CPropertyPage * __thiscall FUN_00404790(void *this,byte param_1)

{
  FUN_004047b0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_004047b0 @ 004047b0

void __fastcall FUN_004047b0(CPropertyPage *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0040cbf8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)param_1 = &PTR_FUN_0040f200;
  local_4 = 0;
  CWnd::~CWnd((CWnd *)(param_1 + 0x94));
  local_4 = 0xffffffff;
  FUN_004069e0(param_1);
  ExceptionList = pvStack_c;
  return;
}


// ---- FUN_00404810 @ 00404810

void __thiscall FUN_00404810(int param_1,CDataExchange *param_2)

{
  FUN_004069f0();
  DDX_Control(param_2,0x3ec,(CWnd *)(param_1 + 0x94));
  return;
}


// ---- FUN_00404840 @ 00404840

undefined ** FUN_00404840(void)

{
  return &PTR_FUN_0040f1c8;
}


// ---- FUN_00404850 @ 00404850

int __fastcall FUN_00404850(CPropertyPage *param_1)

{
  int iVar1;
  AFX_MODULE_STATE *pAVar2;
  int iVar3;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &DAT_0040cc18;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pAVar2 = AfxGetModuleState();
  CCmdTarget::BeginWaitCursor(*(CCmdTarget **)(pAVar2 + 4));
  uStack_4 = 0;
  iVar3 = FUN_00406a10(param_1);
  FUN_004080d0((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x154));
  iVar1 = *(int *)(param_1 + 0x90);
  FUN_00404360(param_1 + 0x94,*(undefined4 *)(iVar1 + 0x158),*(undefined4 *)(iVar1 + 0x18c),
               *(undefined4 *)(iVar1 + 400));
  uStack_4 = 0xffffffff;
  pAVar2 = AfxGetModuleState();
  CCmdTarget::EndWaitCursor(*(CCmdTarget **)(pAVar2 + 4));
  ExceptionList = pvStack_c;
  return iVar3;
}


// ---- FUN_004048f0 @ 004048f0

undefined4 __fastcall FUN_004048f0(CPropertyPage *param_1)

{
  AFX_MODULE_STATE *pAVar1;
  undefined4 uVar2;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &DAT_0040cc38;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pAVar1 = AfxGetModuleState();
  CCmdTarget::BeginWaitCursor(*(CCmdTarget **)(pAVar1 + 4));
  uStack_4 = 0;
  FUN_004080d0((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x16c));
  uVar2 = FUN_00406a60(param_1);
  uStack_4 = 0xffffffff;
  pAVar1 = AfxGetModuleState();
  CCmdTarget::EndWaitCursor(*(CCmdTarget **)(pAVar1 + 4));
  ExceptionList = pvStack_c;
  return uVar2;
}


// ---- FUN_00404970 @ 00404970

void __fastcall FUN_00404970(CPropertyPage *param_1)

{
  FUN_004080d0((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x168));
  FUN_004080d0((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x154));
  CPropertyPage::OnCancel(param_1);
  return;
}


// ---- FUN_00404a00 @ 00404a00

undefined4 * FUN_00404a00(void)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0040cc5a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x198);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = FUN_00404a70(puVar1);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


// ---- FUN_00404a60 @ 00404a60

undefined ** FUN_00404a60(void)

{
  return &PTR_s_CMagCal_0040f2f8;
}


// ---- FUN_00404a70 @ 00404a70

undefined4 * __fastcall FUN_00404a70(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0040cca2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004069b0(param_1,0x89);
  local_4 = 0;
  CWnd::CWnd((CWnd *)(param_1 + 0x26));
  *(undefined ***)(param_1 + 0x26) = &PTR_GetRuntimeClass_0040ede8;
  local_4._0_1_ = 1;
  CWnd::CWnd((CWnd *)(param_1 + 0x36));
  *(undefined ***)(param_1 + 0x36) = &PTR_FUN_0040f0e0;
  local_4._0_1_ = 2;
  CWnd::CWnd((CWnd *)(param_1 + 0x46));
  *(undefined ***)(param_1 + 0x46) = &PTR_FUN_0040e4b0;
  local_4 = CONCAT31(local_4._1_3_,3);
  CWnd::CWnd((CWnd *)(param_1 + 0x56));
  *(undefined ***)(param_1 + 0x56) = &PTR_FUN_0040e4b0;
  *param_1 = &PTR_FUN_0040f3e0;
  ExceptionList = local_c;
  return param_1;
}


// ---- FUN_00404b20 @ 00404b20

CPropertyPage * __thiscall FUN_00404b20(void *this,byte param_1)

{
  FUN_00404b40(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_00404b40 @ 00404b40

void __fastcall FUN_00404b40(CPropertyPage *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0040cce2;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)param_1 = &PTR_FUN_0040f3e0;
  local_4 = 3;
  CWnd::~CWnd((CWnd *)(param_1 + 0x158));
  local_4._0_1_ = 2;
  CWnd::~CWnd((CWnd *)(param_1 + 0x118));
  local_4._0_1_ = 1;
  CWnd::~CWnd((CWnd *)(param_1 + 0xd8));
  local_4 = (uint)local_4._1_3_ << 8;
  CButton::~CButton((CButton *)(param_1 + 0x98));
  local_4 = 0xffffffff;
  FUN_004069e0(param_1);
  ExceptionList = pvStack_c;
  return;
}


// ---- FUN_00404bd0 @ 00404bd0

void __thiscall FUN_00404bd0(int param_1,CDataExchange *param_2)

{
  FUN_004069f0();
  DDX_Control(param_2,0x401,(CWnd *)(param_1 + 0x98));
  DDX_Control(param_2,0x3f0,(CWnd *)(param_1 + 0xd8));
  DDX_Control(param_2,0x3f3,(CWnd *)(param_1 + 0x118));
  DDX_Control(param_2,0x403,(CWnd *)(param_1 + 0x158));
  return;
}


// ---- FUN_00404c30 @ 00404c30

undefined ** FUN_00404c30(void)

{
  return &PTR_FUN_0040f310;
}


// ---- FUN_00404c40 @ 00404c40

int __fastcall FUN_00404c40(CPropertyPage *param_1)

{
  CWnd *pCVar1;
  int iVar2;
  AFX_MODULE_STATE *pAVar3;
  int iVar4;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &DAT_0040ccf8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pAVar3 = AfxGetModuleState();
  CCmdTarget::BeginWaitCursor(*(CCmdTarget **)(pAVar3 + 4));
  uStack_4 = 0;
  iVar4 = FUN_00406a10(param_1);
  iVar2 = *(int *)(param_1 + 0x90);
  FUN_00404660(param_1 + 0xd8,*(undefined4 *)(iVar2 + 0x194),*(undefined4 *)(iVar2 + 0x18c),
               *(undefined4 *)(iVar2 + 400));
  pCVar1 = (CWnd *)(param_1 + 0x118);
  FUN_00404320(pCVar1);
  FUN_00404340(pCVar1);
  iVar2 = *(int *)(param_1 + 0x90);
  FUN_00404360(pCVar1,*(undefined4 *)(iVar2 + 0x198),*(undefined4 *)(iVar2 + 0x18c),
               *(undefined4 *)(iVar2 + 400));
  pCVar1 = (CWnd *)(param_1 + 0x158);
  FUN_00404320(pCVar1);
  FUN_00404340(pCVar1);
  iVar2 = *(int *)(param_1 + 0x90);
  FUN_00404360(pCVar1,*(undefined4 *)(iVar2 + 0x19c),*(undefined4 *)(iVar2 + 0x18c),
               *(undefined4 *)(iVar2 + 400));
  CWnd::SetWindowTextA((CWnd *)(param_1 + 0x98),s_Calibrate_Y_00414fb4);
  *(undefined4 *)(param_1 + 0x94) = 1;
  FUN_00407f90((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x14c),0x3f800000,0);
  FUN_004080d0((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x150));
  iVar2 = *(int *)(param_1 + 0x90);
  FUN_00404360(pCVar1,*(undefined4 *)(iVar2 + 0x19c),*(undefined4 *)(iVar2 + 0x18c),
               *(undefined4 *)(iVar2 + 400));
  CWnd::SetWindowTextA((CWnd *)(param_1 + 0x98),s_Calibrate_Y_00414fb4);
  *(undefined4 *)(param_1 + 0x94) = 1;
  FUN_00407f90((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x14c),0x3f800000,0);
  FUN_00404fc0((int)param_1);
  uStack_4 = 0xffffffff;
  pAVar3 = AfxGetModuleState();
  CCmdTarget::EndWaitCursor(*(CCmdTarget **)(pAVar3 + 4));
  ExceptionList = pvStack_c;
  return iVar4;
}


// ---- FUN_00404e00 @ 00404e00

undefined4 __fastcall FUN_00404e00(CPropertyPage *param_1)

{
  AFX_MODULE_STATE *pAVar1;
  undefined4 uVar2;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &DAT_0040cd18;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pAVar1 = AfxGetModuleState();
  CCmdTarget::BeginWaitCursor(*(CCmdTarget **)(pAVar1 + 4));
  uStack_4 = 0;
  FUN_004080d0((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x16c));
  uVar2 = FUN_00406a60(param_1);
  uStack_4 = 0xffffffff;
  pAVar1 = AfxGetModuleState();
  CCmdTarget::EndWaitCursor(*(CCmdTarget **)(pAVar1 + 4));
  ExceptionList = pvStack_c;
  return uVar2;
}


// ---- FUN_00404e80 @ 00404e80

undefined4 __fastcall FUN_00404e80(CDialog *param_1)

{
  CDialog::OnInitDialog(param_1);
  return 1;
}


// ---- FUN_00404e90 @ 00404e90

undefined ** FUN_00404e90(void)

{
  return &PTR_LAB_0040f3a8;
}


// ---- FUN_00404ea0 @ 00404ea0

void __fastcall FUN_00404ea0(CPropertyPage *param_1)

{
  FUN_004080d0((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x168));
  FUN_004080d0((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x150));
  CPropertyPage::OnCancel(param_1);
  return;
}


// ---- FUN_00404ee0 @ 00404ee0

void __fastcall FUN_00404ee0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x90);
  if (*(int *)(param_1 + 0x94) == 1) {
    FUN_00404360((void *)(param_1 + 0x158),*(undefined4 *)(iVar1 + 0x1a0),
                 *(undefined4 *)(iVar1 + 0x18c),*(undefined4 *)(iVar1 + 400));
    CWnd::SetWindowTextA((CWnd *)(param_1 + 0x98),s_Calibrate_X_00414fc0);
    *(undefined4 *)(param_1 + 0x94) = 2;
    FUN_00407f90((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
                 *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x14c),0x40000000,0);
    return;
  }
  FUN_00404360((void *)(param_1 + 0x158),*(undefined4 *)(iVar1 + 0x19c),
               *(undefined4 *)(iVar1 + 0x18c),*(undefined4 *)(iVar1 + 400));
  CWnd::SetWindowTextA((CWnd *)(param_1 + 0x98),s_Calibrate_Y_00414fb4);
  *(undefined4 *)(param_1 + 0x94) = 1;
  FUN_00407f90((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x14c),0x3f800000,0);
  return;
}


// ---- FUN_00404fc0 @ 00404fc0

void __fastcall FUN_00404fc0(int param_1)

{
  FUN_00407f90((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x198),0x43480000,0);
  Sleep(500);
  FUN_00407f90((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x134),0x3a03126f,0);
  return;
}


// ---- FUN_00405010 @ 00405010

void __fastcall FUN_00405010(int param_1)

{
  FUN_00407f90((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x198),0x44fa0000,0);
  Sleep(500);
  FUN_00407f90((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x134),0x3851b717,0);
  return;
}


// ---- FUN_00405060 @ 00405060

void __fastcall FUN_00405060(int param_1)

{
  FUN_00407f90((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x198),0x469c4000,0);
  Sleep(500);
  FUN_00407f90((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x134),0x36a7c5ac,0);
  return;
}


// ---- FUN_004050b0 @ 004050b0

void __fastcall FUN_004050b0(int param_1)

{
  if (*(int *)(param_1 + 0x94) == 1) {
    func_0x00408100(*(undefined4 *)(*(int *)(param_1 + 0x90) + 0x19c),0);
    return;
  }
  func_0x00408100(*(undefined4 *)(*(int *)(param_1 + 0x90) + 0x1a0),0);
  return;
}


// ---- FUN_00405120 @ 00405120

undefined4 * FUN_00405120(void)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0040cd3a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x158);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = FUN_00405190(puVar1);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


// ---- FUN_00405180 @ 00405180

undefined ** FUN_00405180(void)

{
  return &PTR_s_CMagCal400_0040f4d8;
}


// ---- FUN_00405190 @ 00405190

undefined4 * __fastcall FUN_00405190(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0040cd74;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004069b0(param_1,0xa1);
  local_4 = 0;
  CWnd::CWnd((CWnd *)(param_1 + 0x26));
  *(undefined ***)(param_1 + 0x26) = &PTR_FUN_0040f0e0;
  local_4._0_1_ = 1;
  CWnd::CWnd((CWnd *)(param_1 + 0x36));
  *(undefined ***)(param_1 + 0x36) = &PTR_FUN_0040f0e0;
  local_4 = CONCAT31(local_4._1_3_,2);
  CWnd::CWnd((CWnd *)(param_1 + 0x46));
  *(undefined ***)(param_1 + 0x46) = &PTR_FUN_0040eef8;
  *param_1 = &PTR_FUN_0040f5e8;
  param_1[0x25] = 0;
  ExceptionList = local_c;
  return param_1;
}


// ---- FUN_00405230 @ 00405230

CPropertyPage * __thiscall FUN_00405230(void *this,byte param_1)

{
  FUN_00405250(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_00405250 @ 00405250

void __fastcall FUN_00405250(CPropertyPage *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0040cda4;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)param_1 = &PTR_FUN_0040f5e8;
  local_4 = 2;
  CWnd::~CWnd((CWnd *)(param_1 + 0x118));
  local_4._0_1_ = 1;
  CWnd::~CWnd((CWnd *)(param_1 + 0xd8));
  local_4 = (uint)local_4._1_3_ << 8;
  CWnd::~CWnd((CWnd *)(param_1 + 0x98));
  local_4 = 0xffffffff;
  FUN_004069e0(param_1);
  ExceptionList = pvStack_c;
  return;
}


// ---- FUN_004052d0 @ 004052d0

void __thiscall FUN_004052d0(int param_1,CDataExchange *param_2)

{
  FUN_004069f0();
  DDX_Control(param_2,1099,(CWnd *)(param_1 + 0x98));
  DDX_Control(param_2,0x44c,(CWnd *)(param_1 + 0xd8));
  DDX_Control(param_2,0x46f,(CWnd *)(param_1 + 0x118));
  return;
}


// ---- FUN_00405320 @ 00405320

undefined ** FUN_00405320(void)

{
  return &PTR_FUN_0040f4f0;
}


// ---- FUN_00405330 @ 00405330

undefined4 __fastcall FUN_00405330(CPropertyPage *param_1)

{
  AFX_MODULE_STATE *pAVar1;
  undefined4 uVar2;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &DAT_0040cdb8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pAVar1 = AfxGetModuleState();
  CCmdTarget::BeginWaitCursor(*(CCmdTarget **)(pAVar1 + 4));
  uStack_4 = 0;
  FUN_004080d0((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x16c));
  FUN_00407f90((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0xf4),0x3f800000,0);
  FUN_00407f90((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0xf0),0x3f800000,0);
  FUN_00407f90((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0xec),0x3f800000,0);
  uVar2 = FUN_00406a60(param_1);
  uStack_4 = 0xffffffff;
  pAVar1 = AfxGetModuleState();
  CCmdTarget::EndWaitCursor(*(CCmdTarget **)(pAVar1 + 4));
  ExceptionList = pvStack_c;
  return uVar2;
}


// ---- FUN_00405410 @ 00405410

int __fastcall FUN_00405410(CPropertyPage *param_1)

{
  int iVar1;
  AFX_MODULE_STATE *pAVar2;
  int iVar3;
  CWnd *this;
  char *pcVar4;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &DAT_0040cdd8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pAVar2 = AfxGetModuleState();
  CCmdTarget::BeginWaitCursor(*(CCmdTarget **)(pAVar2 + 4));
  uStack_4 = 0;
  iVar3 = FUN_00406a10(param_1);
  pcVar4 = s_Adjust_the_cursors_so_that_there_00414fdc;
  this = CWnd::GetDlgItem((CWnd *)param_1,0x40a);
  CWnd::SetWindowTextA(this,pcVar4);
  FUN_004080d0((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x150));
  iVar1 = *(int *)(param_1 + 0x90);
  FUN_00404660(param_1 + 0x98,*(undefined4 *)(iVar1 + 0xd4),*(undefined4 *)(iVar1 + 0x18c),
               *(undefined4 *)(iVar1 + 400));
  iVar1 = *(int *)(param_1 + 0x90);
  FUN_00404660(param_1 + 0xd8,*(undefined4 *)(iVar1 + 0xd8),*(undefined4 *)(iVar1 + 0x18c),
               *(undefined4 *)(iVar1 + 400));
  FUN_00407f90((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x198),0x43960000,0);
  FUN_00404420(param_1 + 0x118);
  FUN_00404070(*(int *)(param_1 + 0x90));
  FUN_00407f90((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0xf4),0,0);
  FUN_00407f90((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0xf0),0,0);
  FUN_00407f90((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0xec),0,0);
  uStack_4 = 0xffffffff;
  pAVar2 = AfxGetModuleState();
  CCmdTarget::EndWaitCursor(*(CCmdTarget **)(pAVar2 + 4));
  ExceptionList = pvStack_c;
  return iVar3;
}


// ---- FUN_004055a0 @ 004055a0

undefined ** FUN_004055a0(void)

{
  return &PTR_LAB_0040f510;
}


// ---- FUN_004056d0 @ 004056d0

undefined4 * FUN_004056d0(void)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0040cdfa;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x1d4);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = FUN_00405740(puVar1);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


// ---- FUN_00405730 @ 00405730

undefined ** FUN_00405730(void)

{
  return &PTR_s_CMagRangeCal_0040f6e0;
}


// ---- FUN_00405740 @ 00405740

undefined4 * __fastcall FUN_00405740(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0040ce50;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004069b0(param_1,0x8f);
  local_4 = 0;
  CWnd::CWnd((CWnd *)(param_1 + 0x25));
  *(undefined ***)(param_1 + 0x25) = &PTR_FUN_0040e4b0;
  local_4._0_1_ = 1;
  CWnd::CWnd((CWnd *)(param_1 + 0x35));
  *(undefined ***)(param_1 + 0x35) = &PTR_FUN_0040e4b0;
  local_4._0_1_ = 2;
  CWnd::CWnd((CWnd *)(param_1 + 0x45));
  *(undefined ***)(param_1 + 0x45) = &PTR_FUN_0040e4b0;
  local_4._0_1_ = 3;
  CWnd::CWnd((CWnd *)(param_1 + 0x55));
  *(undefined ***)(param_1 + 0x55) = &PTR_FUN_0040f0e0;
  local_4 = CONCAT31(local_4._1_3_,4);
  CWnd::CWnd((CWnd *)(param_1 + 0x65));
  *(undefined ***)(param_1 + 0x65) = &PTR_FUN_0040eff8;
  *param_1 = &PTR_FUN_0040f730;
  ExceptionList = local_c;
  return param_1;
}


// ---- FUN_00405800 @ 00405800

CPropertyPage * __thiscall FUN_00405800(void *this,byte param_1)

{
  FUN_00405820(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_00405820 @ 00405820

void __fastcall FUN_00405820(CPropertyPage *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0040cea0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)param_1 = &PTR_FUN_0040f730;
  local_4 = 4;
  CWnd::~CWnd((CWnd *)(param_1 + 0x194));
  local_4._0_1_ = 3;
  CWnd::~CWnd((CWnd *)(param_1 + 0x154));
  local_4._0_1_ = 2;
  CWnd::~CWnd((CWnd *)(param_1 + 0x114));
  local_4._0_1_ = 1;
  CWnd::~CWnd((CWnd *)(param_1 + 0xd4));
  local_4 = (uint)local_4._1_3_ << 8;
  CWnd::~CWnd((CWnd *)(param_1 + 0x94));
  local_4 = 0xffffffff;
  FUN_004069e0(param_1);
  ExceptionList = pvStack_c;
  return;
}


// ---- FUN_004058c0 @ 004058c0

void __thiscall FUN_004058c0(int param_1,CDataExchange *param_2)

{
  FUN_004069f0();
  DDX_Control(param_2,0x3f3,(CWnd *)(param_1 + 0x94));
  DDX_Control(param_2,0x40f,(CWnd *)(param_1 + 0xd4));
  DDX_Control(param_2,0x410,(CWnd *)(param_1 + 0x114));
  DDX_Control(param_2,0x3f0,(CWnd *)(param_1 + 0x154));
  DDX_Control(param_2,0x415,(CWnd *)(param_1 + 0x194));
  return;
}


// ---- FUN_00405930 @ 00405930

undefined ** FUN_00405930(void)

{
  return &PTR_FUN_0040f6f8;
}


// ---- FUN_00405940 @ 00405940

int __fastcall FUN_00405940(CPropertyPage *param_1)

{
  CWnd *this;
  int iVar1;
  AFX_MODULE_STATE *pAVar2;
  int iVar3;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &DAT_0040ceb8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pAVar2 = AfxGetModuleState();
  CCmdTarget::BeginWaitCursor(*(CCmdTarget **)(pAVar2 + 4));
  uStack_4 = 0;
  iVar3 = FUN_00406a10(param_1);
  DAT_00416114 = 0;
  FUN_004080d0((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x1a4));
  this = (CWnd *)(param_1 + 0x94);
  FUN_00404320(this);
  FUN_00404340(this);
  iVar1 = *(int *)(param_1 + 0x90);
  FUN_00404360(this,*(undefined4 *)(iVar1 + 0x198),*(undefined4 *)(iVar1 + 0x18c),
               *(undefined4 *)(iVar1 + 400));
  iVar1 = *(int *)(param_1 + 0x90);
  FUN_00404360(param_1 + 0xd4,*(undefined4 *)(iVar1 + 0x17c),*(undefined4 *)(iVar1 + 0x18c),
               *(undefined4 *)(iVar1 + 400));
  iVar1 = *(int *)(param_1 + 0x90);
  FUN_00404360(param_1 + 0x114,*(undefined4 *)(iVar1 + 0x180),*(undefined4 *)(iVar1 + 0x18c),
               *(undefined4 *)(iVar1 + 400));
  iVar1 = *(int *)(param_1 + 0x90);
  FUN_00404660(param_1 + 0x154,*(undefined4 *)(iVar1 + 0x194),*(undefined4 *)(iVar1 + 0x18c),
               *(undefined4 *)(iVar1 + 400));
  FUN_00407f90((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x1a8),0,0);
  FUN_00407f90((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x1ac),0,0);
  FUN_00407f90((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x1b0),0x3f800000,0);
  iVar1 = *(int *)(param_1 + 0x90);
  FUN_004045a0(param_1 + 0x194,*(undefined4 *)(iVar1 + 0x1a8),*(undefined4 *)(iVar1 + 0x18c),
               *(undefined4 *)(iVar1 + 400));
  uStack_4 = 0xffffffff;
  pAVar2 = AfxGetModuleState();
  CCmdTarget::EndWaitCursor(*(CCmdTarget **)(pAVar2 + 4));
  ExceptionList = pvStack_c;
  return iVar3;
}


// ---- FUN_00405b00 @ 00405b00

undefined4 __fastcall FUN_00405b00(CPropertyPage *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_00407f90((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x1b0),0,0);
  if (DAT_00416114 != 0) {
    DAT_00416114 = 0;
    iVar1 = *(int *)(param_1 + 0x90);
    FUN_00404360(param_1 + 0xd4,*(undefined4 *)(iVar1 + 0x17c),*(undefined4 *)(iVar1 + 0x18c),
                 *(undefined4 *)(iVar1 + 400));
    iVar1 = *(int *)(param_1 + 0x90);
    FUN_00404360(param_1 + 0x114,*(undefined4 *)(iVar1 + 0x180),*(undefined4 *)(iVar1 + 0x18c),
                 *(undefined4 *)(iVar1 + 400));
    FUN_00407f90((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
                 *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x1a8),0,0);
    FUN_00407f90((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
                 *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x1ac),0,0);
    return 0xffffffff;
  }
  FUN_004080d0((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x16c));
  uVar2 = FUN_00406ac0(param_1);
  return uVar2;
}


// ---- FUN_00405be0 @ 00405be0

undefined4 __fastcall FUN_00405be0(CPropertyPage *param_1)

{
  int iVar1;
  AFX_MODULE_STATE *pAVar2;
  undefined4 uVar3;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &DAT_0040ced8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pAVar2 = AfxGetModuleState();
  CCmdTarget::BeginWaitCursor(*(CCmdTarget **)(pAVar2 + 4));
  uStack_4 = 0;
  if (DAT_00416114 == 0) {
    DAT_00416114 = 1;
    FUN_00407f90((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
                 *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x1a8),0x42b40000,0);
    FUN_00407f90((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
                 *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x1ac),0x42b40000,0);
    iVar1 = *(int *)(param_1 + 0x90);
    FUN_00404360(param_1 + 0xd4,*(undefined4 *)(iVar1 + 0x184),*(undefined4 *)(iVar1 + 0x18c),
                 *(undefined4 *)(iVar1 + 400));
    iVar1 = *(int *)(param_1 + 0x90);
    FUN_00404360(param_1 + 0x114,*(undefined4 *)(iVar1 + 0x188),*(undefined4 *)(iVar1 + 0x18c),
                 *(undefined4 *)(iVar1 + 400));
    uStack_4 = 0xffffffff;
    pAVar2 = AfxGetModuleState();
    CCmdTarget::EndWaitCursor(*(CCmdTarget **)(pAVar2 + 4));
    ExceptionList = pvStack_c;
    return 0xffffffff;
  }
  FUN_004080d0((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x16c));
  FUN_00407f90((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x1a8),0,0);
  FUN_00407f90((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x1ac),0,0);
  FUN_00407f90((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x1b0),0,0);
  uVar3 = FUN_00406a60(param_1);
  uStack_4 = 0xffffffff;
  pAVar2 = AfxGetModuleState();
  CCmdTarget::EndWaitCursor(*(CCmdTarget **)(pAVar2 + 4));
  ExceptionList = pvStack_c;
  return uVar3;
}


// ---- FUN_00405d80 @ 00405d80

void __fastcall FUN_00405d80(CPropertyPage *param_1)

{
  FUN_004080d0((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x168));
  FUN_004080d0((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x1a4));
  CPropertyPage::OnCancel(param_1);
  return;
}


// ---- FUN_00405e40 @ 00405e40

undefined4 * FUN_00405e40(void)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0040cefa;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x154);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = FUN_00405eb0(puVar1);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


// ---- FUN_00405ea0 @ 00405ea0

undefined ** FUN_00405ea0(void)

{
  return &PTR_s_CMagShift_0040f828;
}


// ---- FUN_00405eb0 @ 00405eb0

undefined4 * __fastcall FUN_00405eb0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0040cf34;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004069b0(param_1,0x9f);
  local_4 = 0;
  CWnd::CWnd((CWnd *)(param_1 + 0x25));
  *(undefined ***)(param_1 + 0x25) = &PTR_FUN_0040f0e0;
  local_4._0_1_ = 1;
  CWnd::CWnd((CWnd *)(param_1 + 0x35));
  *(undefined ***)(param_1 + 0x35) = &PTR_FUN_0040e4b0;
  local_4 = CONCAT31(local_4._1_3_,2);
  CWnd::CWnd((CWnd *)(param_1 + 0x45));
  *(undefined ***)(param_1 + 0x45) = &PTR_FUN_0040e4b0;
  *param_1 = &PTR_FUN_0040f8a8;
  ExceptionList = local_c;
  return param_1;
}


// ---- FUN_00405f40 @ 00405f40

CPropertyPage * __thiscall FUN_00405f40(void *this,byte param_1)

{
  FUN_00405ff0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_00405f70 @ 00405f70

void FUN_00405f70(void)

{
  CString::CString((CString *)&DAT_00416118,s_Find_a_point_of_interest_which_i_004152b0);
  CString::CString((CString *)&DAT_0041611c,s_Adjust_the_magnification_to_the_T_00415250);
  CString::CString((CString *)&DAT_00416120,s_Adjust_the_magnification_to_the_T_004151f0);
  CString::CString((CString *)&DAT_00416124,s_Adjust_the_magnification_to_the_T_00415190);
  CString::CString((CString *)&DAT_00416128,s_Adjust_the_magnification_to_the_T_00415130);
  return;
}


// ---- FUN_00405fc0 @ 00405fc0

void FUN_00405fc0(void)

{
  FUN_0040c29c((_onexit_t)&LAB_00405fd0);
  return;
}


// ---- FUN_00405ff0 @ 00405ff0

void __fastcall FUN_00405ff0(CPropertyPage *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0040cf64;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)param_1 = &PTR_FUN_0040f8a8;
  local_4 = 2;
  CWnd::~CWnd((CWnd *)(param_1 + 0x114));
  local_4._0_1_ = 1;
  CWnd::~CWnd((CWnd *)(param_1 + 0xd4));
  local_4 = (uint)local_4._1_3_ << 8;
  CWnd::~CWnd((CWnd *)(param_1 + 0x94));
  local_4 = 0xffffffff;
  FUN_004069e0(param_1);
  ExceptionList = pvStack_c;
  return;
}


// ---- FUN_00406070 @ 00406070

void __thiscall FUN_00406070(int param_1,CDataExchange *param_2)

{
  FUN_004069f0();
  DDX_Control(param_2,0x3f0,(CWnd *)(param_1 + 0x94));
  DDX_Control(param_2,0x447,(CWnd *)(param_1 + 0xd4));
  DDX_Control(param_2,0x448,(CWnd *)(param_1 + 0x114));
  return;
}


// ---- FUN_004060c0 @ 004060c0

undefined ** FUN_004060c0(void)

{
  return &PTR_FUN_0040f840;
}


// ---- FUN_004060d0 @ 004060d0

void __fastcall FUN_004060d0(int param_1)

{
  func_0x00408100(*(undefined4 *)(*(int *)(param_1 + 0x90) + 0x17c),
                  *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x180));
  return;
}


// ---- FUN_004060f0 @ 004060f0

void __fastcall FUN_004060f0(CPropertyPage *param_1)

{
  FUN_00407f90((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x1b0),0,0);
  FUN_004080d0((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x16c));
  FUN_00406ac0(param_1);
  return;
}


// ---- FUN_00406130 @ 00406130

undefined4 __fastcall FUN_00406130(CWnd *param_1)

{
  AFX_MODULE_STATE *pAVar1;
  CWnd *this;
  undefined4 uVar2;
  char *pcVar3;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &DAT_0040cf78;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pAVar1 = AfxGetModuleState();
  CCmdTarget::BeginWaitCursor(*(CCmdTarget **)(pAVar1 + 4));
  uStack_4 = 0;
  DAT_00416130 = DAT_00416130 + 1;
  if (DAT_00416130 < 5) {
    pcVar3 = (char *)(&DAT_00416118)[DAT_00416130];
    this = CWnd::GetDlgItem(param_1,0x40a);
    CWnd::SetWindowTextA(this,pcVar3);
    uStack_4 = 0xffffffff;
    pAVar1 = AfxGetModuleState();
    CCmdTarget::EndWaitCursor(*(CCmdTarget **)(pAVar1 + 4));
    ExceptionList = pvStack_c;
    return 0xffffffff;
  }
  FUN_00407f90((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x1b0),0,0);
  FUN_004080d0((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x16c));
  uVar2 = FUN_00406a60((CPropertyPage *)param_1);
  uStack_4 = 0xffffffff;
  pAVar1 = AfxGetModuleState();
  CCmdTarget::EndWaitCursor(*(CCmdTarget **)(pAVar1 + 4));
  ExceptionList = pvStack_c;
  return uVar2;
}


// ---- FUN_00406220 @ 00406220

int __fastcall FUN_00406220(CPropertyPage *param_1)

{
  int iVar1;
  AFX_MODULE_STATE *pAVar2;
  int iVar3;
  CWnd *this;
  char *pcVar4;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &DAT_0040cf98;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pAVar2 = AfxGetModuleState();
  CCmdTarget::BeginWaitCursor(*(CCmdTarget **)(pAVar2 + 4));
  uStack_4 = 0;
  iVar3 = FUN_00406a10(param_1);
  DAT_00416130 = 0;
  pcVar4 = DAT_00416118;
  this = CWnd::GetDlgItem((CWnd *)param_1,0x40a);
  CWnd::SetWindowTextA(this,pcVar4);
  FUN_004080d0((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x1a4));
  iVar1 = *(int *)(param_1 + 0x90);
  FUN_00404360(param_1 + 0xd4,*(undefined4 *)(iVar1 + 0x17c),*(undefined4 *)(iVar1 + 0x18c),
               *(undefined4 *)(iVar1 + 400));
  iVar1 = *(int *)(param_1 + 0x90);
  FUN_00404360(param_1 + 0x114,*(undefined4 *)(iVar1 + 0x180),*(undefined4 *)(iVar1 + 0x18c),
               *(undefined4 *)(iVar1 + 400));
  iVar1 = *(int *)(param_1 + 0x90);
  FUN_00404660(param_1 + 0x94,*(undefined4 *)(iVar1 + 0x194),*(undefined4 *)(iVar1 + 0x18c),
               *(undefined4 *)(iVar1 + 400));
  FUN_00407f90((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x1b0),0x3f800000,0);
  uStack_4 = 0xffffffff;
  pAVar2 = AfxGetModuleState();
  CCmdTarget::EndWaitCursor(*(CCmdTarget **)(pAVar2 + 4));
  ExceptionList = pvStack_c;
  return iVar3;
}


// ---- FUN_00406350 @ 00406350

/* WARNING: Type propagation algorithm not settling */

void __thiscall FUN_00406350(int param_1,int param_2,undefined4 *param_3)

{
  float10 fVar1;
  float afStack_8 [2];
  
  afStack_8[0] = 0.0;
  afStack_8[1] = 1.0;
  FUN_00407f30((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x194),afStack_8 + 1,0);
  FUN_00407f30((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x198),afStack_8,0);
  fVar1 = (float10)func_0x0040c3a8();
  afStack_8[0] = (float)((float10)afStack_8[0] - fVar1 * (float10)*(int *)(param_2 + 0x10));
  FUN_00407f90((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x198),afStack_8[0],0);
  *param_3 = 0;
  return;
}


// ---- FUN_00406430 @ 00406430

undefined4 * FUN_00406430(void)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0040cfba;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x9c);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = FUN_004064a0(puVar1);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


// ---- FUN_00406490 @ 00406490

undefined ** FUN_00406490(void)

{
  return &PTR_s_CMidPage_0040f9b0;
}


// ---- FUN_004064a0 @ 004064a0

undefined4 * __fastcall FUN_004064a0(undefined4 *param_1)

{
  FUN_004069b0(param_1,0xa3);
  *param_1 = &PTR_FUN_0040f9e8;
  param_1[0x25] = 0;
  param_1[0x26] = 1;
  return param_1;
}


// ---- FUN_004064d0 @ 004064d0

CPropertyPage * __thiscall FUN_004064d0(void *this,byte param_1)

{
  FUN_004064f0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_004064f0 @ 004064f0

void __fastcall FUN_004064f0(CPropertyPage *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0040f9e8;
  FUN_004069e0(param_1);
  return;
}


// ---- FUN_00406500 @ 00406500

void __thiscall FUN_00406500(int param_1,CDataExchange *param_2)

{
  FUN_004069f0();
  DDX_Check(param_2,0x423,(int *)(param_1 + 0x94));
  DDX_Check(param_2,0x42e,(int *)(param_1 + 0x98));
  return;
}


// ---- FUN_00406540 @ 00406540

undefined ** FUN_00406540(void)

{
  return &PTR_FUN_0040f9c8;
}


// ---- FUN_00406550 @ 00406550

int __fastcall FUN_00406550(CPropertyPage *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00406a10(param_1);
  CWnd::UpdateData((CWnd *)param_1,0);
  return iVar1;
}


// ---- FUN_00406570 @ 00406570

undefined4 __fastcall FUN_00406570(CWnd *param_1)

{
  HWND__ *pHVar1;
  CWnd *this;
  undefined4 uVar2;
  
  CWnd::UpdateData(param_1,1);
  if (*(int *)(param_1 + 0x98) != 0) {
    SendMessageA(*(HWND *)(*(int *)(param_1 + 0x90) + 0x18c),DAT_00416134,
                 *(WPARAM *)(*(int *)(param_1 + 0x90) + 400),2);
  }
  if (*(int *)(param_1 + 0x94) != 0) {
    pHVar1 = *(HWND__ **)(param_1 + 0x24);
    if (pHVar1 == (HWND__ *)0x0) {
      pHVar1 = GetParent(*(HWND *)(param_1 + 0x20));
    }
    this = CWnd::FromHandle(pHVar1);
    if (this != (CWnd *)0x0) {
      CPropertySheet::SetActivePage((CPropertySheet *)this,0);
    }
    return 0;
  }
  uVar2 = FUN_00406a60((CPropertyPage *)param_1);
  return uVar2;
}


// ---- FUN_00406620 @ 00406620

undefined4 * FUN_00406620(void)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0040cfda;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0xd8);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = FUN_00406690(puVar1);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


// ---- FUN_00406680 @ 00406680

undefined ** FUN_00406680(void)

{
  return &PTR_s_CMixDelayCal_0040fae0;
}


// ---- FUN_00406690 @ 00406690

undefined4 * __fastcall FUN_00406690(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0040d014;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004069b0(param_1,0xb2);
  local_4 = 0;
  CString::CString((CString *)(param_1 + 0x25));
  local_4._0_1_ = 1;
  CWnd::CWnd((CWnd *)(param_1 + 0x26));
  *(undefined ***)(param_1 + 0x26) = &PTR_FUN_0040e570;
  local_4 = CONCAT31(local_4._1_3_,2);
  *param_1 = &PTR_FUN_0040fb18;
  CString::operator=((CString *)(param_1 + 0x25),&DAT_00416090);
  ExceptionList = local_c;
  return param_1;
}


// ---- FUN_00406720 @ 00406720

CPropertyPage * __thiscall FUN_00406720(void *this,byte param_1)

{
  FUN_00406740(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_00406740 @ 00406740

void __fastcall FUN_00406740(CPropertyPage *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0040d036;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)param_1 = &PTR_FUN_0040fb18;
  local_4 = 1;
  CWnd::~CWnd((CWnd *)(param_1 + 0x98));
  local_4 = local_4 & 0xffffff00;
  CString::~CString((CString *)(param_1 + 0x94));
  local_4 = 0xffffffff;
  FUN_004069e0(param_1);
  ExceptionList = pvStack_c;
  return;
}


// ---- FUN_004067b0 @ 004067b0

void __thiscall FUN_004067b0(int param_1,CDataExchange *param_2)

{
  FUN_004069f0();
  DDX_Text(param_2,0x40a,(CString *)(param_1 + 0x94));
  DDX_Control(param_2,0x47a,(CWnd *)(param_1 + 0x98));
  return;
}


// ---- FUN_004067f0 @ 004067f0

undefined ** FUN_004067f0(void)

{
  return &PTR_FUN_0040faf8;
}


// ---- FUN_00406800 @ 00406800

int __fastcall FUN_00406800(CPropertyPage *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_00406a10(param_1);
  CString::operator=((CString *)(param_1 + 0x94),s_Set_Video_Mix_Delay_so_that_the_v_0041536c);
  CWnd::UpdateData((CWnd *)param_1,0);
  FUN_004080d0((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x1dc));
  iVar1 = *(int *)(param_1 + 0x90);
  FUN_004044c0(param_1 + 0x98,*(undefined4 *)(iVar1 + 0x70),*(undefined4 *)(iVar1 + 0x18c),
               *(undefined4 *)(iVar1 + 400));
  return iVar2;
}


// ---- FUN_00406870 @ 00406870

void __fastcall FUN_00406870(CPropertyPage *param_1)

{
  FUN_004080d0((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x1e0));
  FUN_00406ac0(param_1);
  return;
}


// ---- FUN_004068a0 @ 004068a0

void __fastcall FUN_004068a0(CPropertyPage *param_1)

{
  FUN_004080d0((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x1e0));
  FUN_00406a60(param_1);
  return;
}


// ---- FUN_00406900 @ 00406900

CPropertyPage * FUN_00406900(void)

{
  CPropertyPage *pCVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0040d04a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pCVar1 = operator_new(0x94);
  local_4 = 0;
  if (pCVar1 != (CPropertyPage *)0x0) {
    pCVar1 = FUN_00406970(pCVar1);
    ExceptionList = local_c;
    return pCVar1;
  }
  ExceptionList = local_c;
  return (CPropertyPage *)0x0;
}


// ---- FUN_00406970 @ 00406970

CPropertyPage * __fastcall FUN_00406970(CPropertyPage *param_1)

{
  CPropertyPage::CPropertyPage(param_1);
  *(undefined ***)param_1 = &PTR_FUN_0040fc48;
  return param_1;
}


// ---- FUN_00406990 @ 00406990

CPropertyPage * __thiscall FUN_00406990(void *this,byte param_1)

{
  FUN_004069e0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_004069b0 @ 004069b0

CPropertyPage * __thiscall FUN_004069b0(void *this,uint param_1)

{
  CPropertyPage::CPropertyPage(this,param_1,0);
  *(undefined ***)this = &PTR_FUN_0040fc48;
  *(uint *)((int)this + 100) = *(uint *)((int)this + 100) & 0xffffffdf;
  return this;
}


// ---- FUN_004069e0 @ 004069e0

void __fastcall FUN_004069e0(CPropertyPage *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0040fc48;
  CPropertyPage::~CPropertyPage(param_1);
  return;
}


// ---- FUN_004069f0 @ 004069f0

void FUN_004069f0(void)

{
  return;
}


// ---- FUN_00406a10 @ 00406a10

int __fastcall FUN_00406a10(CPropertyPage *param_1)

{
  int iVar1;
  HWND__ *pHVar2;
  CWnd *pCVar3;
  AFX_MODULE_STATE *pAVar4;
  
  iVar1 = CPropertyPage::OnSetActive(param_1);
  pHVar2 = *(HWND__ **)(param_1 + 0x24);
  if (pHVar2 == (HWND__ *)0x0) {
    pHVar2 = GetParent(*(HWND *)(param_1 + 0x20));
  }
  pCVar3 = CWnd::FromHandle(pHVar2);
  if (pCVar3 != (CWnd *)0x0) {
    PostMessageA(*(HWND *)(pCVar3 + 0x20),0x470,0,3);
  }
  pAVar4 = AfxGetModuleState();
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(*(int *)(pAVar4 + 4) + 0x20);
  return iVar1;
}


// ---- FUN_00406a60 @ 00406a60

void __fastcall FUN_00406a60(CPropertyPage *param_1)

{
  LRESULT LVar1;
  
  LVar1 = SendMessageA(*(HWND *)(*(int *)(param_1 + 0x90) + 0x224),0xf0,0,0);
  if (LVar1 != 0) {
    SendMessageA(*(HWND *)(*(int *)(param_1 + 0x90) + 0x18c),DAT_0041613c,
                 *(WPARAM *)(*(int *)(param_1 + 0x90) + 400),2);
  }
  CPropertyPage::OnWizardNext(param_1);
  return;
}


// ---- FUN_00406ac0 @ 00406ac0

void __fastcall FUN_00406ac0(CPropertyPage *param_1)

{
  LRESULT LVar1;
  
  LVar1 = SendMessageA(*(HWND *)(*(int *)(param_1 + 0x90) + 0x224),0xf0,0,0);
  if (LVar1 != 0) {
    SendMessageA(*(HWND *)(*(int *)(param_1 + 0x90) + 0x18c),DAT_0041613c,
                 *(WPARAM *)(*(int *)(param_1 + 0x90) + 400),2);
  }
  CPropertyPage::OnWizardBack(param_1);
  return;
}


// ---- FUN_00406b60 @ 00406b60

undefined ** FUN_00406b60(void)

{
  return &PTR_s_CMyPropertySheet_0040fd40;
}


// ---- FUN_00406b70 @ 00406b70

CPropertySheet * __thiscall FUN_00406b70(void *this,byte param_1)

{
  FUN_00406c10(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_00406b90 @ 00406b90

CPropertySheet * __thiscall FUN_00406b90(void *this,char *param_1,CWnd *param_2,uint param_3)

{
  HINSTANCE__ *hInstance;
  HICON pHVar1;
  LPCSTR lpIconName;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0040d068;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CPropertySheet::CPropertySheet(this,param_1,param_2,param_3);
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_0040fdd8;
  AfxGetModuleState();
  lpIconName = (LPCSTR)0x80;
  hInstance = AfxFindResourceHandle((char *)0x80,(char *)0xe);
  pHVar1 = LoadIconA(hInstance,lpIconName);
  *(HICON *)((int)this + 0x8c) = pHVar1;
  ExceptionList = local_c;
  return this;
}


// ---- FUN_00406c10 @ 00406c10

void __fastcall FUN_00406c10(CPropertySheet *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0040fdd8;
  CPropertySheet::~CPropertySheet(param_1);
  return;
}


// ---- FUN_00406c30 @ 00406c30

undefined ** FUN_00406c30(void)

{
  return &PTR_LAB_0040fd58;
}


// ---- FUN_00406c40 @ 00406c40

undefined4 __fastcall FUN_00406c40(CPropertySheet *param_1)

{
  LONG LVar1;
  HWND hWnd;
  HWND hWnd_00;
  int iVar2;
  HMENU pHVar3;
  CMenu *pCVar4;
  int iVar5;
  int *piStack_54;
  int iStack_50;
  tagRECT tStack_44;
  tagRECT tStack_34;
  tagRECT tStack_24;
  int aiStack_14 [5];
  
  CPropertySheet::OnInitDialog(param_1);
  hWnd = GetDlgItem(*(HWND *)(param_1 + 0x20),0x3026);
  iVar5 = 0;
  aiStack_14[0] = 0x3023;
  aiStack_14[1] = 0x3024;
  aiStack_14[2] = 0x3025;
  aiStack_14[3] = 2;
  aiStack_14[4] = 9;
  if (hWnd != (HWND)0x0) {
    GetWindowRect(hWnd,&tStack_24);
    piStack_54 = aiStack_14;
    iStack_50 = 5;
    do {
      hWnd_00 = GetDlgItem(*(HWND *)(param_1 + 0x20),*piStack_54);
      if (hWnd_00 != (HWND)0x0) {
        GetWindowRect(hWnd_00,&tStack_44);
        LVar1 = tStack_44.top;
        iVar5 = tStack_44.top - tStack_24.top;
        iVar2 = ftol();
        tStack_44.top = LVar1 - iVar2;
        tStack_44.bottom = tStack_44.bottom - iVar2;
        CWnd::ScreenToClient((CWnd *)param_1,&tStack_44);
        MoveWindow(hWnd_00,tStack_44.left,tStack_44.top,tStack_44.right - tStack_44.left,
                   tStack_44.bottom - tStack_44.top,1);
      }
      piStack_54 = piStack_54 + 1;
      iStack_50 = iStack_50 + -1;
    } while (iStack_50 != 0);
    CWnd::ScreenToClient((CWnd *)param_1,&tStack_24);
    MoveWindow(hWnd,tStack_24.left,tStack_24.top - iVar5,tStack_24.right - tStack_24.left,
               tStack_24.bottom - tStack_24.top,1);
  }
  GetWindowRect(*(HWND *)(param_1 + 0x20),&tStack_34);
  tStack_34.bottom = tStack_34.bottom + iVar5 * -2;
  iVar2 = tStack_34.bottom - tStack_34.top;
  iVar5 = GetSystemMetrics(0x11);
  CWnd::SetWindowPos((CWnd *)param_1,(CWnd *)wndTopMost_exref,0,iVar5 - iVar2,
                     tStack_34.right - tStack_34.left,tStack_34.bottom - tStack_34.top,0);
  CWnd::ModifyStyle((CWnd *)param_1,0,0x80ca0000,0);
  CWnd::ModifyStyleEx((CWnd *)param_1,0,0x40000,0);
  pHVar3 = GetSystemMenu(*(HWND *)(param_1 + 0x20),0);
  pCVar4 = CMenu::FromHandle(pHVar3);
  if (pCVar4 != (CMenu *)0x0) {
    EnableMenuItem(*(HMENU *)(pCVar4 + 4),0xf020,0);
    EnableMenuItem(*(HMENU *)(pCVar4 + 4),0xf120,0);
    EnableMenuItem(*(HMENU *)(pCVar4 + 4),0xf060,1);
    EnableMenuItem(*(HMENU *)(pCVar4 + 4),0xf000,1);
    EnableMenuItem(*(HMENU *)(pCVar4 + 4),0xf030,1);
  }
  SendMessageA(*(HWND *)(param_1 + 0x20),0x80,1,*(LPARAM *)(param_1 + 0x8c));
  SendMessageA(*(HWND *)(param_1 + 0x20),0x80,0,*(LPARAM *)(param_1 + 0x8c));
  return 1;
}


// ---- FUN_00406e90 @ 00406e90

void __fastcall FUN_00406e90(CWnd *param_1)

{
  BOOL BVar1;
  int iVar2;
  int iVar3;
  int unaff_ESI;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  HDC pHStack_54;
  
  BVar1 = IsIconic(*(HWND *)(param_1 + 0x20));
  if (BVar1 != 0) {
    func_0x0040c12c(param_1);
    SendMessageA(*(HWND *)(param_1 + 0x20),0x27,
                 -(uint)(&stack0x00000000 != (undefined1 *)0x58) & (uint)pHStack_54,0);
    iVar2 = GetSystemMetrics(0xb);
    iVar3 = GetSystemMetrics(0xc);
    GetClientRect(*(HWND *)(param_1 + 0x20),(LPRECT)&stack0xffffff98);
    DrawIcon(pHStack_54,(((iStack_60 - unaff_ESI) - iVar2) + 1) / 2,
             (((iStack_5c - iStack_64) - iVar3) + 1) / 2,*(HICON *)(param_1 + 0x8c));
    func_0x0040c126();
    return;
  }
  CWnd::Default(param_1);
  return;
}


// ---- FUN_00406f50 @ 00406f50

undefined4 __fastcall FUN_00406f50(int param_1)

{
  return *(undefined4 *)(param_1 + 0x8c);
}


// ---- FUN_00406f60 @ 00406f60

void __thiscall FUN_00406f60(void *this,int param_1)

{
  BOOL BVar1;
  
  BVar1 = IsIconic(*(HWND *)((int)this + 0x20));
  if ((BVar1 == 0) && (param_1 == 2)) {
    SendMessageA(*(HWND *)((int)this + 0x20),0x112,0xf020,0);
    return;
  }
  CWnd::Default(this);
  return;
}


// ---- FUN_00406fa0 @ 00406fa0

void __thiscall FUN_00406fa0(void *this,int param_1)

{
  BOOL BVar1;
  
  BVar1 = IsIconic(*(HWND *)((int)this + 0x20));
  if ((BVar1 == 0) && (param_1 == 8)) {
    SendMessageA(*(HWND *)((int)this + 0x20),0x112,0xf020,0);
    return;
  }
  CWnd::Default(this);
  return;
}


// ---- FUN_00406fe0 @ 00406fe0

int __thiscall FUN_00406fe0(CPropertySheet *param_1,tagMSG *param_2)

{
  ushort uVar1;
  UINT Msg;
  HWND pHVar2;
  CWnd *pCVar3;
  CWnd *pCVar4;
  int iVar5;
  
  if ((*(int *)(param_2 + 4) == 0x100) && (*(int *)(param_2 + 8) == 9)) {
    uVar1 = GetKeyState(0x11);
    if ((uVar1 & 0x8000) != 0) {
      Msg = RegisterWindowMessageA(s_PM_NAVMGR_REQUEST_004153f0);
      pHVar2 = GetParent(*(HWND *)(param_1 + 0x20));
      pCVar3 = CWnd::FromHandle(pHVar2);
      pHVar2 = GetParent(*(HWND *)(param_1 + 0x20));
      pCVar4 = CWnd::FromHandle(pHVar2);
      PostMessageA(*(HWND *)(pCVar4 + 0x18c),Msg,*(WPARAM *)(pCVar3 + 0x20),0);
      return 0;
    }
  }
  iVar5 = CPropertySheet::PreTranslateMessage(param_1,param_2);
  return iVar5;
}


// ---- FUN_00407060 @ 00407060

CWnd * FUN_00407060(void)

{
  CWnd *this;
  CWnd *pCVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0040d08a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = operator_new(0x40);
  local_4 = 0;
  pCVar1 = (CWnd *)0x0;
  if (this != (CWnd *)0x0) {
    CWnd::CWnd(this);
    *(undefined ***)this = &PTR_FUN_0040fec8;
    pCVar1 = this;
  }
  ExceptionList = local_c;
  return pCVar1;
}


// ---- FUN_004070b0 @ 004070b0

void __thiscall
FUN_004070b0(CWnd *param_1,undefined4 param_2,char *param_3,ulong param_4,tagRECT *param_5,
            CWnd *param_6,uint param_7)

{
  CWnd::CreateControl(param_1,(_GUID *)&DAT_0040ff88,param_3,param_4,param_5,param_6,param_7,
                      (CFile *)0x0,0,(ushort *)0x0);
  return;
}


// ---- FUN_004070e0 @ 004070e0

undefined ** FUN_004070e0(void)

{
  return &PTR_s_CNavMgr_0040feb0;
}


// ---- FUN_00407130 @ 00407130

void FUN_00407130(void)

{
  CString::CString((CString *)&DAT_00416144,s_Measure_the_distance_between_the_004154e0);
  CString::CString((CString *)&DAT_00416148,s_Press_Photo_to_take_a_HRRU_photo_00415438);
  return;
}


// ---- FUN_00407150 @ 00407150

void FUN_00407150(void)

{
  FUN_0040c29c((_onexit_t)&LAB_00407160);
  return;
}


// ---- FUN_00407180 @ 00407180

undefined4 * FUN_00407180(void)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0040d0aa;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x158);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = FUN_004071f0(puVar1);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


// ---- FUN_004071e0 @ 004071e0

undefined ** FUN_004071e0(void)

{
  return &PTR_s_COutDevCal_0040ff98;
}


// ---- FUN_004071f0 @ 004071f0

undefined4 * __fastcall FUN_004071f0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0040d0e4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004069b0(param_1,0xac);
  local_4 = 0;
  CWnd::CWnd((CWnd *)(param_1 + 0x25));
  *(undefined ***)(param_1 + 0x25) = &PTR_FUN_0040f0e0;
  local_4._0_1_ = 1;
  CWnd::CWnd((CWnd *)(param_1 + 0x35));
  *(undefined ***)(param_1 + 0x35) = &PTR_FUN_0040eef8;
  local_4 = CONCAT31(local_4._1_3_,2);
  CWnd::CWnd((CWnd *)(param_1 + 0x45));
  *(undefined ***)(param_1 + 0x45) = &PTR_FUN_0040f0e0;
  *param_1 = &PTR_FUN_00410058;
  param_1[0x55] = 2;
  ExceptionList = local_c;
  return param_1;
}


// ---- FUN_00407290 @ 00407290

CPropertyPage * __thiscall FUN_00407290(void *this,byte param_1)

{
  FUN_004072b0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_004072b0 @ 004072b0

void __fastcall FUN_004072b0(CPropertyPage *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0040d114;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)param_1 = &PTR_FUN_00410058;
  local_4 = 2;
  CWnd::~CWnd((CWnd *)(param_1 + 0x114));
  local_4._0_1_ = 1;
  CWnd::~CWnd((CWnd *)(param_1 + 0xd4));
  local_4 = (uint)local_4._1_3_ << 8;
  CWnd::~CWnd((CWnd *)(param_1 + 0x94));
  local_4 = 0xffffffff;
  FUN_004069e0(param_1);
  ExceptionList = pvStack_c;
  return;
}


// ---- FUN_00407330 @ 00407330

void __thiscall FUN_00407330(int param_1,CDataExchange *param_2)

{
  FUN_004069f0();
  DDX_Control(param_2,0x466,(CWnd *)(param_1 + 0x94));
  DDX_Control(param_2,0x468,(CWnd *)(param_1 + 0xd4));
  DDX_Control(param_2,0x467,(CWnd *)(param_1 + 0x114));
  return;
}


// ---- FUN_00407380 @ 00407380

undefined ** FUN_00407380(void)

{
  return &PTR_FUN_0040ffb0;
}


// ---- FUN_00407390 @ 00407390

int __fastcall FUN_00407390(CPropertyPage *param_1)

{
  int iVar1;
  AFX_MODULE_STATE *pAVar2;
  int iVar3;
  CWnd *this;
  undefined4 uVar4;
  char *pcVar5;
  CPropertyPage *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0040d128;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = param_1;
  pAVar2 = AfxGetModuleState();
  CCmdTarget::BeginWaitCursor(*(CCmdTarget **)(pAVar2 + 4));
  local_4 = 0;
  iVar3 = FUN_00406a10(param_1);
  DAT_00416150 = 0;
  pcVar5 = DAT_00416144;
  this = CWnd::GetDlgItem((CWnd *)param_1,0x40a);
  CWnd::SetWindowTextA(this,pcVar5);
  local_10 = (CPropertyPage *)0x0;
  FUN_00407f30((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x90),&local_10,0);
  uVar4 = ftol();
  *(undefined4 *)(param_1 + 0x154) = uVar4;
  iVar1 = *(int *)(param_1 + 0x90);
  FUN_00404660(param_1 + 0x114,*(undefined4 *)(iVar1 + 0x90),*(undefined4 *)(iVar1 + 0x18c),
               *(undefined4 *)(iVar1 + 400));
  iVar1 = *(int *)(param_1 + 0x90);
  FUN_00404660((CWnd *)(param_1 + 0x94),*(undefined4 *)(iVar1 + 0x7c),*(undefined4 *)(iVar1 + 0x18c)
               ,*(undefined4 *)(iVar1 + 400));
  FUN_004080d0((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x8c));
  FUN_004080d0((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x80));
  CWnd::EnableWindow((CWnd *)(param_1 + 0x94),0);
  local_4 = 0xffffffff;
  pAVar2 = AfxGetModuleState();
  CCmdTarget::EndWaitCursor(*(CCmdTarget **)(pAVar2 + 4));
  ExceptionList = local_c;
  return iVar3;
}


// ---- FUN_004074e0 @ 004074e0

void __fastcall FUN_004074e0(CPropertyPage *param_1)

{
  FUN_004080d0((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x16c));
  FUN_00406ac0(param_1);
  return;
}


// ---- FUN_00407510 @ 00407510

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_00407510(CWnd *param_1)

{
  AFX_MODULE_STATE *pAVar1;
  CWnd *this;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  CWnd *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0040d148;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = param_1;
  pAVar1 = AfxGetModuleState();
  CCmdTarget::BeginWaitCursor(*(CCmdTarget **)(pAVar1 + 4));
  local_4 = 0;
  DAT_00416150 = DAT_00416150 + 1;
  if (DAT_00416150 == 1) {
    local_10 = (CWnd *)0x0;
    FUN_00407f30((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
                 *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x94),&local_10,0);
    if (_DAT_0040eec4 < (float)local_10) {
      pcVar4 = (char *)(&DAT_00416144)[DAT_00416150];
      this = CWnd::GetDlgItem(param_1,0x40a);
      CWnd::SetWindowTextA(this,pcVar4);
      FUN_004080d0((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
                   *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x16c));
      FUN_004080d0((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
                   *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x84));
      FUN_004080d0((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
                   *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x80));
      CWnd::EnableWindow(param_1 + 0x94,1);
      FUN_00404420(param_1 + 0xd4);
      local_4 = 0xffffffff;
      pAVar1 = AfxGetModuleState();
      CCmdTarget::EndWaitCursor(*(CCmdTarget **)(pAVar1 + 4));
      ExceptionList = local_c;
      return 0xffffffff;
    }
  }
  FUN_004080d0((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x16c));
  if (*(int *)(param_1 + 0x154) == 1) {
    iVar2 = *(int *)(param_1 + 0x90);
    uVar3 = *(undefined4 *)(iVar2 + 0x84);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x90);
    if (*(int *)(param_1 + 0x154) == 3) {
      uVar3 = *(undefined4 *)(iVar2 + 0x88);
    }
    else {
      uVar3 = *(undefined4 *)(iVar2 + 0x8c);
    }
  }
  FUN_004080d0((void *)(iVar2 + 0x2c4),uVar3);
  uVar3 = FUN_00406a60((CPropertyPage *)param_1);
  local_4 = 0xffffffff;
  pAVar1 = AfxGetModuleState();
  CCmdTarget::EndWaitCursor(*(CCmdTarget **)(pAVar1 + 4));
  ExceptionList = local_c;
  return uVar3;
}


// ---- FUN_004076e0 @ 004076e0

undefined ** FUN_004076e0(void)

{
  return &PTR_LAB_0040ffd0;
}


// ---- FUN_00407770 @ 00407770

undefined4 * FUN_00407770(void)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0040d16a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x114);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = FUN_004077e0(puVar1);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


// ---- FUN_004077d0 @ 004077d0

undefined ** FUN_004077d0(void)

{
  return &PTR_s_COverlayCal_00410150;
}


// ---- FUN_004077e0 @ 004077e0

undefined4 * __fastcall FUN_004077e0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0040d196;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004069b0(param_1,0xaf);
  local_4 = 0;
  CWnd::CWnd((CWnd *)(param_1 + 0x25));
  *(undefined ***)(param_1 + 0x25) = &PTR_FUN_0040e4b0;
  local_4 = CONCAT31(local_4._1_3_,1);
  CWnd::CWnd((CWnd *)(param_1 + 0x35));
  *(undefined ***)(param_1 + 0x35) = &PTR_FUN_0040e4b0;
  *param_1 = &PTR_FUN_00410188;
  ExceptionList = local_c;
  return param_1;
}


// ---- FUN_00407860 @ 00407860

CPropertyPage * __thiscall FUN_00407860(void *this,byte param_1)

{
  FUN_00407880(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_00407880 @ 00407880

void __fastcall FUN_00407880(CPropertyPage *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0040d1b6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)param_1 = &PTR_FUN_00410188;
  local_4 = 1;
  CWnd::~CWnd((CWnd *)(param_1 + 0xd4));
  local_4 = local_4 & 0xffffff00;
  CWnd::~CWnd((CWnd *)(param_1 + 0x94));
  local_4 = 0xffffffff;
  FUN_004069e0(param_1);
  ExceptionList = pvStack_c;
  return;
}


// ---- FUN_004078f0 @ 004078f0

void __thiscall FUN_004078f0(void *this,CDataExchange *param_1)

{
  DDX_Control(param_1,0x478,(CWnd *)((int)this + 0x94));
  DDX_Control(param_1,0x479,(CWnd *)((int)this + 0xd4));
  return;
}


// ---- FUN_00407930 @ 00407930

undefined ** FUN_00407930(void)

{
  return &PTR_FUN_00410168;
}


// ---- FUN_00407940 @ 00407940

int __fastcall FUN_00407940(CPropertyPage *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_00406a10(param_1);
  FUN_004080d0((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0xe0));
  FUN_004080d0((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x1dc));
  iVar1 = *(int *)(param_1 + 0x90);
  FUN_00404360(param_1 + 0x94,*(undefined4 *)(iVar1 + 0xe8),*(undefined4 *)(iVar1 + 0x18c),
               *(undefined4 *)(iVar1 + 400));
  iVar1 = *(int *)(param_1 + 0x90);
  FUN_00404360(param_1 + 0xd4,*(undefined4 *)(iVar1 + 0xe4),*(undefined4 *)(iVar1 + 0x18c),
               *(undefined4 *)(iVar1 + 400));
  return iVar2;
}


// ---- FUN_004079d0 @ 004079d0

void __fastcall FUN_004079d0(CPropertyPage *param_1)

{
  FUN_004080d0((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x16c));
  FUN_004080d0((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x1e0));
  FUN_00406ac0(param_1);
  return;
}


// ---- FUN_00407a10 @ 00407a10

void __fastcall FUN_00407a10(CPropertyPage *param_1)

{
  FUN_004080d0((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x16c));
  FUN_004080d0((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x1e0));
  FUN_00406a60(param_1);
  return;
}


// ---- FUN_00407a80 @ 00407a80

undefined4 * FUN_00407a80(void)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0040d1ca;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x194);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = FUN_00407af0(puVar1);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


// ---- FUN_00407ae0 @ 00407ae0

undefined ** FUN_00407ae0(void)

{
  return &PTR_s_CPage1_00410280;
}


// ---- FUN_00407af0 @ 00407af0

undefined4 * __fastcall FUN_00407af0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0040d212;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004069b0(param_1,0x81);
  local_4 = 0;
  CWnd::CWnd((CWnd *)(param_1 + 0x25));
  *(undefined ***)(param_1 + 0x25) = &PTR_GetRuntimeClass_0040ede8;
  local_4._0_1_ = 1;
  CWnd::CWnd((CWnd *)(param_1 + 0x35));
  *(undefined ***)(param_1 + 0x35) = &PTR_FUN_0040f0e0;
  local_4._0_1_ = 2;
  CWnd::CWnd((CWnd *)(param_1 + 0x45));
  *(undefined ***)(param_1 + 0x45) = &PTR_FUN_0040f0e0;
  local_4 = CONCAT31(local_4._1_3_,3);
  CWnd::CWnd((CWnd *)(param_1 + 0x55));
  *(undefined ***)(param_1 + 0x55) = &PTR_FUN_0040f0e0;
  *param_1 = &PTR_FUN_004102d0;
  ExceptionList = local_c;
  return param_1;
}


// ---- FUN_00407ba0 @ 00407ba0

CPropertyPage * __thiscall FUN_00407ba0(void *this,byte param_1)

{
  FUN_00407bc0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_00407bc0 @ 00407bc0

void __fastcall FUN_00407bc0(CPropertyPage *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0040d252;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)param_1 = &PTR_FUN_004102d0;
  local_4 = 3;
  CWnd::~CWnd((CWnd *)(param_1 + 0x154));
  local_4._0_1_ = 2;
  CWnd::~CWnd((CWnd *)(param_1 + 0x114));
  local_4._0_1_ = 1;
  CWnd::~CWnd((CWnd *)(param_1 + 0xd4));
  local_4 = (uint)local_4._1_3_ << 8;
  CButton::~CButton((CButton *)(param_1 + 0x94));
  local_4 = 0xffffffff;
  FUN_004069e0(param_1);
  ExceptionList = pvStack_c;
  return;
}


// ---- FUN_00407c50 @ 00407c50

void __thiscall FUN_00407c50(int param_1,CDataExchange *param_2)

{
  FUN_004069f0();
  DDX_Control(param_2,0x437,(CWnd *)(param_1 + 0x94));
  DDX_Control(param_2,0x436,(CWnd *)(param_1 + 0xd4));
  DDX_Control(param_2,0x438,(CWnd *)(param_1 + 0x114));
  DDX_Control(param_2,0x439,(CWnd *)(param_1 + 0x154));
  return;
}


// ---- FUN_00407cb0 @ 00407cb0

undefined ** FUN_00407cb0(void)

{
  return &PTR_FUN_00410298;
}


// ---- FUN_00407cc0 @ 00407cc0

int __fastcall FUN_00407cc0(CPropertyPage *param_1)

{
  int iVar1;
  int iVar2;
  HWND__ *pHVar3;
  CWnd *pCVar4;
  AFX_MODULE_STATE *pAVar5;
  char *pcVar6;
  
  iVar2 = FUN_00406a10(param_1);
  pHVar3 = *(HWND__ **)(param_1 + 0x24);
  if (pHVar3 == (HWND__ *)0x0) {
    pHVar3 = GetParent(*(HWND *)(param_1 + 0x20));
  }
  pCVar4 = CWnd::FromHandle(pHVar3);
  if (pCVar4 != (CWnd *)0x0) {
    PostMessageA(*(HWND *)(pCVar4 + 0x20),0x470,0,2);
  }
  iVar1 = *(int *)(param_1 + 0x90);
  FUN_00404660(param_1 + 0xd4,*(undefined4 *)(iVar1 + 0x1d8),*(undefined4 *)(iVar1 + 0x18c),
               *(undefined4 *)(iVar1 + 400));
  iVar1 = *(int *)(param_1 + 0x90);
  FUN_00404660(param_1 + 0x114,*(undefined4 *)(iVar1 + 0x1e8),*(undefined4 *)(iVar1 + 0x18c),
               *(undefined4 *)(iVar1 + 400));
  iVar1 = *(int *)(param_1 + 0x90);
  FUN_00404660(param_1 + 0x154,*(undefined4 *)(iVar1 + 0x1e4),*(undefined4 *)(iVar1 + 0x18c),
               *(undefined4 *)(iVar1 + 400));
  pAVar5 = AfxGetModuleState();
  iVar1 = *(int *)(*(int *)(*(int *)(pAVar5 + 4) + 0x20) + 0x118);
  if ((iVar1 != 6) && (iVar1 != 8)) {
    pcVar6 = s_Obtain_an_image_of_a_calibration_0041563c;
    pCVar4 = CWnd::GetDlgItem((CWnd *)param_1,0x40a);
    CWnd::SetWindowTextA(pCVar4,pcVar6);
    return iVar2;
  }
  pcVar6 = s_Obtain_an_image_of_a_Calibration_00415570;
  pCVar4 = CWnd::GetDlgItem((CWnd *)param_1,0x40a);
  CWnd::SetWindowTextA(pCVar4,pcVar6);
  CWnd::ShowWindow((CWnd *)(param_1 + 0x94),0);
  return iVar2;
}


// ---- FUN_00407dd0 @ 00407dd0

void __fastcall FUN_00407dd0(CPropertyPage *param_1)

{
  FUN_00407f90((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x114),0,0);
  FUN_00406a60(param_1);
  return;
}


// ---- FUN_00407e00 @ 00407e00

void __fastcall FUN_00407e00(int param_1)

{
  int iVar1;
  LRESULT LVar2;
  
  LVar2 = SendMessageA(*(HWND *)(param_1 + 0xb4),0xf0,0,0);
  iVar1 = *(int *)(param_1 + 0x90);
  if (LVar2 != 0) {
    FUN_00407f90((void *)(iVar1 + 0x2c4),*(undefined4 *)(iVar1 + 0x114),0x3f800000,0);
    return;
  }
  FUN_00407f90((void *)(iVar1 + 0x2c4),*(undefined4 *)(iVar1 + 0x114),0,0);
  return;
}


// ---- FUN_00407e60 @ 00407e60

CWnd * FUN_00407e60(void)

{
  CWnd *this;
  CWnd *pCVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0040d26a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = operator_new(0x40);
  local_4 = 0;
  pCVar1 = (CWnd *)0x0;
  if (this != (CWnd *)0x0) {
    CWnd::CWnd(this);
    *(undefined ***)this = &PTR_FUN_0040ed28;
    pCVar1 = this;
  }
  ExceptionList = local_c;
  return pCVar1;
}


// ---- FUN_00407ec0 @ 00407ec0

undefined ** FUN_00407ec0(void)

{
  return &PTR_s_CParamMgr_004103c8;
}


// ---- FUN_00407ed0 @ 00407ed0

undefined4 __thiscall
FUN_00407ed0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 in_stack_00000020;
  
  CWnd::InvokeHelper(this,(long)this,1,1,(void *)0x3,(uchar *)&param_3);
  return in_stack_00000020;
}


// ---- FUN_00407f00 @ 00407f00

undefined4 __thiscall FUN_00407f00(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 in_stack_0000001c;
  
  CWnd::InvokeHelper(this,(long)this,9,1,(void *)0x3,(uchar *)&param_2);
  return in_stack_0000001c;
}


// ---- FUN_00407f30 @ 00407f30

undefined4 __thiscall
FUN_00407f30(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 in_stack_00000020;
  
  CWnd::InvokeHelper(this,(long)this,10,1,(void *)0x3,(uchar *)&param_3);
  return in_stack_00000020;
}


// ---- FUN_00407f60 @ 00407f60

undefined4 __thiscall FUN_00407f60(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 in_stack_0000001c;
  
  CWnd::InvokeHelper(this,(long)this,0x12,1,(void *)0x3,(uchar *)&param_2);
  return in_stack_0000001c;
}


// ---- FUN_00407f90 @ 00407f90

undefined4 __thiscall
FUN_00407f90(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 in_stack_00000020;
  
  CWnd::InvokeHelper(this,(long)this,0x13,1,(void *)0x3,(uchar *)&param_3);
  return in_stack_00000020;
}


// ---- FUN_00408030 @ 00408030

undefined4 __thiscall
FUN_00408030(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 in_stack_00000020;
  
  CWnd::InvokeHelper(this,(long)this,0x1b,1,(void *)0x3,(uchar *)&param_3);
  return in_stack_00000020;
}


// ---- FUN_00408070 @ 00408070

undefined4 __thiscall FUN_00408070(void *this,undefined4 param_1)

{
  undefined4 in_stack_00000018;
  
  CWnd::InvokeHelper(this,(long)this,0x1c,1,(void *)0x3,(uchar *)&param_1);
  return in_stack_00000018;
}


// ---- FUN_004080a0 @ 004080a0

undefined4 __thiscall FUN_004080a0(void *this,undefined4 param_1)

{
  undefined4 in_stack_00000018;
  
  CWnd::InvokeHelper(this,(long)this,0x1f,1,(void *)0x3,(uchar *)&param_1);
  return in_stack_00000018;
}


// ---- FUN_004080d0 @ 004080d0

undefined4 __thiscall FUN_004080d0(void *this,undefined4 param_1)

{
  undefined4 in_stack_00000018;
  
  CWnd::InvokeHelper(this,(long)this,0x20,1,(void *)0x3,(uchar *)&param_1);
  return in_stack_00000018;
}


// ---- FUN_00408160 @ 00408160

undefined4 * FUN_00408160(void)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0040d28a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x158);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = FUN_00408240(puVar1);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


// ---- FUN_004081c0 @ 004081c0

undefined ** FUN_004081c0(void)

{
  return &PTR_s_CScanAmp_004103e0;
}


// ---- FUN_004081e0 @ 004081e0

void FUN_004081e0(void)

{
  CString::CString((CString *)&DAT_0041615c,s_Obtain_a_focused_image_of_the_Ca_00415900);
  CString::CString((CString *)&DAT_00416160,s_Adjust_Frame_Ampl_cal_so_that_th_004158cc);
  CString::CString((CString *)&DAT_00416164,s_Adjust_Line_Frame_cal_so_that_th_00415860);
  return;
}


// ---- FUN_00408210 @ 00408210

void FUN_00408210(void)

{
  FUN_0040c29c((_onexit_t)&LAB_00408220);
  return;
}


// ---- FUN_00408240 @ 00408240

undefined4 * __fastcall FUN_00408240(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0040d2e0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004069b0(param_1,0x9b);
  local_4 = 0;
  CWnd::CWnd((CWnd *)(param_1 + 0x25));
  *(undefined ***)(param_1 + 0x25) = &PTR_FUN_0040e4b0;
  local_4._0_1_ = 1;
  CString::CString((CString *)(param_1 + 0x35));
  local_4._0_1_ = 2;
  CWnd::CWnd((CWnd *)(param_1 + 0x36));
  *(undefined ***)(param_1 + 0x36) = &PTR_FUN_0040eef8;
  local_4._0_1_ = 3;
  CWnd::CWnd((CWnd *)(param_1 + 0x46));
  *(undefined ***)(param_1 + 0x46) = &PTR_FUN_0040f0e0;
  local_4 = CONCAT31(local_4._1_3_,4);
  *param_1 = &PTR_FUN_00410490;
  CString::operator=((CString *)(param_1 + 0x35),&DAT_00416090);
  param_1[0x24] = 0;
  ExceptionList = local_c;
  return param_1;
}


// ---- FUN_00408300 @ 00408300

CPropertyPage * __thiscall FUN_00408300(void *this,byte param_1)

{
  FUN_00408320(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_00408320 @ 00408320

void __fastcall FUN_00408320(CPropertyPage *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0040d322;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)param_1 = &PTR_FUN_00410490;
  local_4 = 3;
  CWnd::~CWnd((CWnd *)(param_1 + 0x118));
  local_4._0_1_ = 2;
  CWnd::~CWnd((CWnd *)(param_1 + 0xd8));
  local_4._0_1_ = 1;
  CString::~CString((CString *)(param_1 + 0xd4));
  local_4 = (uint)local_4._1_3_ << 8;
  CWnd::~CWnd((CWnd *)(param_1 + 0x94));
  local_4 = 0xffffffff;
  FUN_004069e0(param_1);
  ExceptionList = pvStack_c;
  return;
}


// ---- FUN_004083b0 @ 004083b0

void __thiscall FUN_004083b0(int param_1,CDataExchange *param_2)

{
  FUN_004069f0();
  DDX_Control(param_2,0x438,(CWnd *)(param_1 + 0x94));
  DDX_Text(param_2,0x40a,(CString *)(param_1 + 0xd4));
  DDX_Control(param_2,0x43c,(CWnd *)(param_1 + 0xd8));
  DDX_Control(param_2,0x469,(CWnd *)(param_1 + 0x118));
  return;
}


// ---- FUN_00408410 @ 00408410

undefined ** FUN_00408410(void)

{
  return &PTR_FUN_004103f8;
}


// ---- FUN_00408420 @ 00408420

void __fastcall FUN_00408420(CPropertyPage *param_1)

{
  FUN_004080d0((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x16c));
  FUN_00407f90((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x1b4),0,0);
  FUN_00407f90((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x1b0),0,0);
  FUN_00406ac0(param_1);
  return;
}


// ---- FUN_00408480 @ 00408480

undefined4 __fastcall FUN_00408480(CPropertyPage *param_1)

{
  int iVar1;
  AFX_MODULE_STATE *pAVar2;
  int iVar3;
  undefined4 uVar4;
  CWnd *pCVar5;
  bool bVar6;
  char *pcVar7;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &DAT_0040d338;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pAVar2 = AfxGetModuleState();
  CCmdTarget::BeginWaitCursor(*(CCmdTarget **)(pAVar2 + 4));
  uStack_4 = 0;
  iVar3 = DAT_0041616c + 1;
  if (DAT_0041616c == 0) {
    iVar1 = *(int *)(param_1 + 0x90);
    DAT_0041616c = iVar3;
    FUN_00404360(param_1 + 0x94,*(undefined4 *)(iVar1 + 0x108),*(undefined4 *)(iVar1 + 0x18c),
                 *(undefined4 *)(iVar1 + 400));
    FUN_004080d0((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
                 *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x16c));
    FUN_004080d0((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
                 *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x100));
    pcVar7 = (char *)(&DAT_0041615c)[DAT_0041616c];
    pCVar5 = CWnd::GetDlgItem((CWnd *)param_1,0x40a);
    CWnd::SetWindowTextA(pCVar5,pcVar7);
  }
  else if (DAT_0041616c == 1) {
    iVar1 = *(int *)(param_1 + 0x90);
    DAT_0041616c = iVar3;
    FUN_00404360(param_1 + 0x94,*(undefined4 *)(iVar1 + 0x104),*(undefined4 *)(iVar1 + 0x18c),
                 *(undefined4 *)(iVar1 + 400));
    FUN_00407f90((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
                 *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x1b4),0,0);
    FUN_00407f90((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
                 *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x1b0),0x3f800000,0);
    pcVar7 = (char *)(&DAT_0041615c)[DAT_0041616c];
    pCVar5 = CWnd::GetDlgItem((CWnd *)param_1,0x40a);
    CWnd::SetWindowTextA(pCVar5,pcVar7);
    FUN_004080d0((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
                 *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x16c));
    FUN_004080d0((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
                 *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x154));
  }
  else {
    bVar6 = DAT_0041616c == 2;
    DAT_0041616c = iVar3;
    if (bVar6) {
      FUN_004080d0((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
                   *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x16c));
      FUN_00407f90((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
                   *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x1b4),0,0);
      FUN_00407f90((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
                   *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x1b0),0,0);
      uVar4 = FUN_00406a60(param_1);
      uStack_4 = 0xffffffff;
      pAVar2 = AfxGetModuleState();
      CCmdTarget::EndWaitCursor(*(CCmdTarget **)(pAVar2 + 4));
      ExceptionList = pvStack_c;
      return uVar4;
    }
  }
  uStack_4 = 0xffffffff;
  pAVar2 = AfxGetModuleState();
  CCmdTarget::EndWaitCursor(*(CCmdTarget **)(pAVar2 + 4));
  ExceptionList = pvStack_c;
  return 0xffffffff;
}


// ---- FUN_004086a0 @ 004086a0

int __fastcall FUN_004086a0(CPropertyPage *param_1)

{
  int iVar1;
  AFX_MODULE_STATE *pAVar2;
  int iVar3;
  CWnd *this;
  char *pcVar4;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &DAT_0040d358;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pAVar2 = AfxGetModuleState();
  CCmdTarget::BeginWaitCursor(*(CCmdTarget **)(pAVar2 + 4));
  uStack_4 = 0;
  iVar3 = FUN_00406a10(param_1);
  FUN_00407f90((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x198),0x43960000,0);
  FUN_00404070(*(int *)(param_1 + 0x90));
  FUN_00407f90((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0xf4),0,0);
  FUN_00407f90((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0xf0),0,0);
  FUN_00407f90((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0xec),0,0);
  FUN_004080d0((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x110));
  FUN_00404420(param_1 + 0xd8);
  iVar1 = *(int *)(param_1 + 0x90);
  FUN_00404360(param_1 + 0x94,*(undefined4 *)(iVar1 + 0x10c),*(undefined4 *)(iVar1 + 0x18c),
               *(undefined4 *)(iVar1 + 400));
  FUN_00407f90((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x1b4),0x3f800000,0);
  DAT_0041616c = 0;
  pcVar4 = DAT_0041615c;
  this = CWnd::GetDlgItem((CWnd *)param_1,0x40a);
  CWnd::SetWindowTextA(this,pcVar4);
  iVar1 = *(int *)(param_1 + 0x90);
  FUN_00404660(param_1 + 0x118,*(undefined4 *)(iVar1 + 0x74),*(undefined4 *)(iVar1 + 0x18c),
               *(undefined4 *)(iVar1 + 400));
  uStack_4 = 0xffffffff;
  pAVar2 = AfxGetModuleState();
  CCmdTarget::EndWaitCursor(*(CCmdTarget **)(pAVar2 + 4));
  ExceptionList = pvStack_c;
  return iVar3;
}


// ---- FUN_004088d0 @ 004088d0

undefined ** FUN_004088d0(void)

{
  return &PTR_LAB_00410430;
}


// ---- FUN_00408920 @ 00408920

undefined4 * __fastcall FUN_00408920(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0040d3cc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004069b0(param_1,0x8c);
  local_4 = 0;
  CWnd::CWnd((CWnd *)(param_1 + 0x25));
  *(undefined ***)(param_1 + 0x25) = &PTR_FUN_0040e4b0;
  local_4._0_1_ = 1;
  CWnd::CWnd((CWnd *)(param_1 + 0x35));
  *(undefined ***)(param_1 + 0x35) = &PTR_FUN_0040e4b0;
  local_4._0_1_ = 2;
  CWnd::CWnd((CWnd *)(param_1 + 0x45));
  *(undefined ***)(param_1 + 0x45) = &PTR_FUN_0040eef8;
  local_4._0_1_ = 3;
  CWnd::CWnd((CWnd *)(param_1 + 0x55));
  *(undefined ***)(param_1 + 0x55) = &PTR_FUN_0040eef8;
  local_4._0_1_ = 4;
  CWnd::CWnd((CWnd *)(param_1 + 0x65));
  *(undefined ***)(param_1 + 0x65) = &PTR_FUN_0040f0e0;
  local_4._0_1_ = 5;
  CWnd::CWnd((CWnd *)(param_1 + 0x75));
  *(undefined ***)(param_1 + 0x75) = &PTR_FUN_0040f0e0;
  local_4 = CONCAT31(local_4._1_3_,6);
  CWnd::CWnd((CWnd *)(param_1 + 0x86));
  *(undefined ***)(param_1 + 0x86) = &PTR_FUN_0040e570;
  *param_1 = &PTR_FUN_004105f0;
  param_1[0x85] = 0;
  ExceptionList = local_c;
  return param_1;
}


// ---- FUN_00408a20 @ 00408a20

CPropertyPage * __thiscall FUN_00408a20(void *this,byte param_1)

{
  FUN_00408a40(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_00408a40 @ 00408a40

void __fastcall FUN_00408a40(CPropertyPage *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0040d43c;
  pvStack_c = ExceptionList;
  local_4 = 6;
  ExceptionList = &pvStack_c;
  CWnd::~CWnd((CWnd *)(param_1 + 0x218));
  local_4._0_1_ = 5;
  CWnd::~CWnd((CWnd *)(param_1 + 0x1d4));
  local_4._0_1_ = 4;
  CWnd::~CWnd((CWnd *)(param_1 + 0x194));
  local_4._0_1_ = 3;
  CWnd::~CWnd((CWnd *)(param_1 + 0x154));
  local_4._0_1_ = 2;
  CWnd::~CWnd((CWnd *)(param_1 + 0x114));
  local_4._0_1_ = 1;
  CWnd::~CWnd((CWnd *)(param_1 + 0xd4));
  local_4 = (uint)local_4._1_3_ << 8;
  CWnd::~CWnd((CWnd *)(param_1 + 0x94));
  local_4 = 0xffffffff;
  FUN_004069e0(param_1);
  ExceptionList = pvStack_c;
  return;
}


// ---- FUN_00408af0 @ 00408af0

void __thiscall FUN_00408af0(void *this,CDataExchange *param_1)

{
  DDX_Control(param_1,0x406,(CWnd *)((int)this + 0x94));
  DDX_Control(param_1,0x405,(CWnd *)((int)this + 0xd4));
  DDX_Control(param_1,0x407,(CWnd *)((int)this + 0x114));
  DDX_Control(param_1,0x408,(CWnd *)((int)this + 0x154));
  DDX_Control(param_1,0x3f0,(CWnd *)((int)this + 0x194));
  DDX_Control(param_1,0x469,(CWnd *)((int)this + 0x1d4));
  DDX_Check(param_1,0x480,(int *)((int)this + 0x214));
  DDX_Control(param_1,0x47a,(CWnd *)((int)this + 0x218));
  return;
}


// ---- FUN_00408b90 @ 00408b90

undefined ** FUN_00408b90(void)

{
  return &PTR_FUN_00410588;
}


// ---- FUN_00408ba0 @ 00408ba0

int __fastcall FUN_00408ba0(CPropertyPage *param_1)

{
  CWnd *this;
  CWnd *this_00;
  int iVar1;
  AFX_MODULE_STATE *pAVar2;
  int iVar3;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &DAT_0040d458;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pAVar2 = AfxGetModuleState();
  CCmdTarget::BeginWaitCursor(*(CCmdTarget **)(pAVar2 + 4));
  uStack_4 = 0;
  iVar3 = FUN_00406a10(param_1);
  FUN_004080d0((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x148));
  this = (CWnd *)(param_1 + 0x94);
  FUN_00404320(this);
  FUN_00404340(this);
  this_00 = (CWnd *)(param_1 + 0xd4);
  FUN_00404320(this_00);
  FUN_00404340(this_00);
  iVar1 = *(int *)(param_1 + 0x90);
  FUN_00404360(this,*(undefined4 *)(iVar1 + 0x144),*(undefined4 *)(iVar1 + 0x18c),
               *(undefined4 *)(iVar1 + 400));
  iVar1 = *(int *)(param_1 + 0x90);
  FUN_00404360(this_00,*(undefined4 *)(iVar1 + 0x140),*(undefined4 *)(iVar1 + 0x18c),
               *(undefined4 *)(iVar1 + 400));
  if (*(int *)(*(int *)(param_1 + 0x90) + 0x1ec) == 0) {
    FUN_00404420(param_1 + 0x114);
  }
  else {
    FUN_00404420(param_1 + 0x114);
  }
  FUN_00404420(param_1 + 0x154);
  iVar1 = *(int *)(param_1 + 0x90);
  FUN_00404660(param_1 + 0x1d4,*(undefined4 *)(iVar1 + 0x74),*(undefined4 *)(iVar1 + 0x18c),
               *(undefined4 *)(iVar1 + 400));
  iVar1 = *(int *)(param_1 + 0x90);
  FUN_00404660(param_1 + 0x194,*(undefined4 *)(iVar1 + 0x194),*(undefined4 *)(iVar1 + 0x18c),
               *(undefined4 *)(iVar1 + 400));
  FUN_00407f90((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x1b0),0x3f800000,0);
  iVar1 = *(int *)(param_1 + 0x90);
  FUN_004044c0(param_1 + 0x218,*(undefined4 *)(iVar1 + 0x1fc),*(undefined4 *)(iVar1 + 0x18c),
               *(undefined4 *)(iVar1 + 400));
  FUN_00407f90((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x1fc),0,0);
  FUN_004080d0((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x13c));
  uStack_4 = 0xffffffff;
  pAVar2 = AfxGetModuleState();
  CCmdTarget::EndWaitCursor(*(CCmdTarget **)(pAVar2 + 4));
  ExceptionList = pvStack_c;
  return iVar3;
}


// ---- FUN_00408df0 @ 00408df0

undefined4 __fastcall FUN_00408df0(CPropertyPage *param_1)

{
  AFX_MODULE_STATE *pAVar1;
  undefined4 uVar2;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &DAT_0040d478;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pAVar1 = AfxGetModuleState();
  CCmdTarget::BeginWaitCursor(*(CCmdTarget **)(pAVar1 + 4));
  uStack_4 = 0;
  FUN_00407f90((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x1b0),0,0);
  FUN_004080d0((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x16c));
  uVar2 = FUN_00406a60(param_1);
  uStack_4 = 0xffffffff;
  pAVar1 = AfxGetModuleState();
  CCmdTarget::EndWaitCursor(*(CCmdTarget **)(pAVar1 + 4));
  ExceptionList = pvStack_c;
  return uVar2;
}


// ---- FUN_00408e90 @ 00408e90

void __fastcall FUN_00408e90(CPropertyPage *param_1)

{
  FUN_004080d0((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x168));
  FUN_004080d0((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x148));
  CPropertyPage::OnCancel(param_1);
  return;
}


// ---- FUN_00408ed0 @ 00408ed0

void __fastcall FUN_00408ed0(CWnd *param_1)

{
  CWnd::UpdateData(param_1,1);
  if (*(int *)(param_1 + 0x214) != 0) {
    AfxBeginThread((_func_uint_void_ptr *)&LAB_00408f00,param_1,-0xf,0,0,(_SECURITY_ATTRIBUTES *)0x0
                  );
  }
  return;
}


// ---- FUN_00409040 @ 00409040

void FUN_00409040(void)

{
  CString::CString((CString *)&DAT_00416174,s_Focus_on_the_grid_and_adjust_mag_00415a94);
  CString::CString((CString *)&DAT_00416178,s_Move_the_cursors_to_the_outside_o_00415a58);
  CString::CString((CString *)&DAT_0041617c,s_Adjust_Mag_Comp_Amplitude_and_Ma_004159f8);
  return;
}


// ---- FUN_00409070 @ 00409070

void FUN_00409070(void)

{
  FUN_0040c29c((_onexit_t)&LAB_00409080);
  return;
}


// ---- FUN_004090a0 @ 004090a0

undefined4 * FUN_004090a0(void)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0040d49a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x154);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = FUN_00409110(puVar1);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


// ---- FUN_00409100 @ 00409100

undefined ** FUN_00409100(void)

{
  return &PTR_s_CScanCalMag_004106f0;
}


// ---- FUN_00409110 @ 00409110

undefined4 * __fastcall FUN_00409110(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0040d4d4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004069b0(param_1,0xa4);
  local_4 = 0;
  CWnd::CWnd((CWnd *)(param_1 + 0x25));
  *(undefined ***)(param_1 + 0x25) = &PTR_FUN_0040e4b0;
  local_4._0_1_ = 1;
  CWnd::CWnd((CWnd *)(param_1 + 0x35));
  *(undefined ***)(param_1 + 0x35) = &PTR_FUN_0040e4b0;
  local_4 = CONCAT31(local_4._1_3_,2);
  CWnd::CWnd((CWnd *)(param_1 + 0x45));
  *(undefined ***)(param_1 + 0x45) = &PTR_FUN_0040f0e0;
  *param_1 = &PTR_FUN_00410758;
  ExceptionList = local_c;
  return param_1;
}


// ---- FUN_004091a0 @ 004091a0

CPropertyPage * __thiscall FUN_004091a0(void *this,byte param_1)

{
  FUN_004091c0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_004091c0 @ 004091c0

void __fastcall FUN_004091c0(CPropertyPage *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0040d504;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)param_1 = &PTR_FUN_00410758;
  local_4 = 2;
  CWnd::~CWnd((CWnd *)(param_1 + 0x114));
  local_4._0_1_ = 1;
  CWnd::~CWnd((CWnd *)(param_1 + 0xd4));
  local_4 = (uint)local_4._1_3_ << 8;
  CWnd::~CWnd((CWnd *)(param_1 + 0x94));
  local_4 = 0xffffffff;
  FUN_004069e0(param_1);
  ExceptionList = pvStack_c;
  return;
}


// ---- FUN_00409240 @ 00409240

void __thiscall FUN_00409240(int param_1,CDataExchange *param_2)

{
  FUN_004069f0();
  DDX_Control(param_2,0x406,(CWnd *)(param_1 + 0x94));
  DDX_Control(param_2,0x405,(CWnd *)(param_1 + 0xd4));
  DDX_Control(param_2,0x44e,(CWnd *)(param_1 + 0x114));
  return;
}


// ---- FUN_00409290 @ 00409290

undefined ** FUN_00409290(void)

{
  return &PTR_FUN_00410708;
}


// ---- FUN_004092a0 @ 004092a0

int __fastcall FUN_004092a0(CPropertyPage *param_1)

{
  int iVar1;
  AFX_MODULE_STATE *pAVar2;
  int iVar3;
  CWnd *this;
  char *pcVar4;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &DAT_0040d518;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pAVar2 = AfxGetModuleState();
  CCmdTarget::BeginWaitCursor(*(CCmdTarget **)(pAVar2 + 4));
  uStack_4 = 0;
  iVar3 = FUN_00406a10(param_1);
  iVar1 = *(int *)(param_1 + 0x90);
  FUN_00404360(param_1 + 0x94,*(undefined4 *)(iVar1 + 0x144),*(undefined4 *)(iVar1 + 0x18c),
               *(undefined4 *)(iVar1 + 400));
  iVar1 = *(int *)(param_1 + 0x90);
  FUN_00404360(param_1 + 0xd4,*(undefined4 *)(iVar1 + 0x140),*(undefined4 *)(iVar1 + 0x18c),
               *(undefined4 *)(iVar1 + 400));
  FUN_00407f90((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x198),0x43960000,0);
  DAT_00416184 = 0;
  pcVar4 = DAT_00416174;
  this = CWnd::GetDlgItem((CWnd *)param_1,0x40a);
  CWnd::SetWindowTextA(this,pcVar4);
  iVar1 = *(int *)(param_1 + 0x90);
  FUN_00404660(param_1 + 0x114,*(undefined4 *)(iVar1 + 0xd0),*(undefined4 *)(iVar1 + 0x18c),
               *(undefined4 *)(iVar1 + 400));
  uStack_4 = 0xffffffff;
  pAVar2 = AfxGetModuleState();
  CCmdTarget::EndWaitCursor(*(CCmdTarget **)(pAVar2 + 4));
  ExceptionList = pvStack_c;
  return iVar3;
}


// ---- FUN_004093c0 @ 004093c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_004093c0(CWnd *param_1)

{
  AFX_MODULE_STATE *pAVar1;
  CWnd *this;
  DWORD DVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  CWnd *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0040d538;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = param_1;
  pAVar1 = AfxGetModuleState();
  CCmdTarget::BeginWaitCursor(*(CCmdTarget **)(pAVar1 + 4));
  local_4 = 0;
  DAT_00416184 = DAT_00416184 + 1;
  if (DAT_00416184 < 3) {
    pcVar6 = (char *)(&DAT_00416174)[DAT_00416184];
    this = CWnd::GetDlgItem(param_1,0x40a);
    CWnd::SetWindowTextA(this,pcVar6);
  }
  if (DAT_00416184 == 1) {
    FUN_004080d0((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
                 *(undefined4 *)(*(int *)(param_1 + 0x90) + 0xf8));
    FUN_004080d0((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
                 *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x148));
  }
  else {
    DVar2 = GetTickCount();
    uVar3 = GetTickCount();
    while (uVar3 < DVar2 + 500) {
      uVar3 = GetTickCount();
    }
    FUN_00407f30((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
                 *(undefined4 *)(*(int *)(param_1 + 0x90) + 0xd0),&local_10,0);
    local_10 = (CWnd *)((float)local_10 - _DAT_0040f9a0);
    if (((float)local_10 < _DAT_00410850) ||
       (iVar4 = FUN_00407f90((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
                             *(undefined4 *)(*(int *)(param_1 + 0x90) + 0xd0),local_10,0),
       iVar4 != 1)) {
      FUN_004080d0((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
                   *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x16c));
      uVar5 = FUN_00406a60((CPropertyPage *)param_1);
      local_4 = 0xffffffff;
      pAVar1 = AfxGetModuleState();
      CCmdTarget::EndWaitCursor(*(CCmdTarget **)(pAVar1 + 4));
      ExceptionList = local_c;
      return uVar5;
    }
  }
  local_4 = 0xffffffff;
  pAVar1 = AfxGetModuleState();
  CCmdTarget::EndWaitCursor(*(CCmdTarget **)(pAVar1 + 4));
  ExceptionList = local_c;
  return 0xffffffff;
}


// ---- FUN_00409550 @ 00409550

void __fastcall FUN_00409550(int param_1)

{
  func_0x00408100(*(undefined4 *)(*(int *)(param_1 + 0x90) + 0x144),0);
  return;
}


// ---- FUN_00409570 @ 00409570

void __fastcall FUN_00409570(int param_1)

{
  func_0x00408100(*(undefined4 *)(*(int *)(param_1 + 0x90) + 0x140),0);
  return;
}


// ---- FUN_004095c0 @ 004095c0

undefined4 * FUN_004095c0(void)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0040d55a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x154);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = FUN_00409630(puVar1);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


// ---- FUN_00409620 @ 00409620

undefined ** FUN_00409620(void)

{
  return &PTR_s_CScanCentre_00410858;
}


// ---- FUN_00409630 @ 00409630

undefined4 * __fastcall FUN_00409630(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0040d594;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004069b0(param_1,0x9d);
  local_4 = 0;
  CWnd::CWnd((CWnd *)(param_1 + 0x25));
  *(undefined ***)(param_1 + 0x25) = &PTR_FUN_0040f0e0;
  local_4._0_1_ = 1;
  CWnd::CWnd((CWnd *)(param_1 + 0x35));
  *(undefined ***)(param_1 + 0x35) = &PTR_FUN_0040e4b0;
  local_4 = CONCAT31(local_4._1_3_,2);
  CWnd::CWnd((CWnd *)(param_1 + 0x45));
  *(undefined ***)(param_1 + 0x45) = &PTR_FUN_0040e4b0;
  *param_1 = &PTR_FUN_004108c0;
  ExceptionList = local_c;
  return param_1;
}


// ---- FUN_004096c0 @ 004096c0

CPropertyPage * __thiscall FUN_004096c0(void *this,byte param_1)

{
  FUN_004096e0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_004096e0 @ 004096e0

void __fastcall FUN_004096e0(CPropertyPage *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0040d5c4;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)param_1 = &PTR_FUN_004108c0;
  local_4 = 2;
  CWnd::~CWnd((CWnd *)(param_1 + 0x114));
  local_4._0_1_ = 1;
  CWnd::~CWnd((CWnd *)(param_1 + 0xd4));
  local_4 = (uint)local_4._1_3_ << 8;
  CWnd::~CWnd((CWnd *)(param_1 + 0x94));
  local_4 = 0xffffffff;
  FUN_004069e0(param_1);
  ExceptionList = pvStack_c;
  return;
}


// ---- FUN_00409760 @ 00409760

void __thiscall FUN_00409760(int param_1,CDataExchange *param_2)

{
  FUN_004069f0();
  DDX_Control(param_2,0x3f0,(CWnd *)(param_1 + 0x94));
  DDX_Control(param_2,0x43e,(CWnd *)(param_1 + 0xd4));
  DDX_Control(param_2,0x440,(CWnd *)(param_1 + 0x114));
  return;
}


// ---- FUN_004097b0 @ 004097b0

undefined ** FUN_004097b0(void)

{
  return &PTR_FUN_00410870;
}


// ---- FUN_004097c0 @ 004097c0

void __fastcall FUN_004097c0(int param_1)

{
  func_0x00408100(*(undefined4 *)(*(int *)(param_1 + 0x90) + 0xe8),
                  *(undefined4 *)(*(int *)(param_1 + 0x90) + 0xe4));
  return;
}


// ---- FUN_004097e0 @ 004097e0

void __fastcall FUN_004097e0(int param_1)

{
  func_0x00408100(*(undefined4 *)(*(int *)(param_1 + 0x90) + 0xdc),
                  *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x198));
  return;
}


// ---- FUN_00409800 @ 00409800

undefined4 __fastcall FUN_00409800(CPropertyPage *param_1)

{
  AFX_MODULE_STATE *pAVar1;
  undefined4 uVar2;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &DAT_0040d5d8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pAVar1 = AfxGetModuleState();
  CCmdTarget::BeginWaitCursor(*(CCmdTarget **)(pAVar1 + 4));
  uStack_4 = 0;
  FUN_00407f90((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x1b0),0,0);
  FUN_004080d0((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x16c));
  uVar2 = FUN_00406a60(param_1);
  uStack_4 = 0xffffffff;
  pAVar1 = AfxGetModuleState();
  CCmdTarget::EndWaitCursor(*(CCmdTarget **)(pAVar1 + 4));
  ExceptionList = pvStack_c;
  return uVar2;
}


// ---- FUN_004098a0 @ 004098a0

int __fastcall FUN_004098a0(CPropertyPage *param_1)

{
  int iVar1;
  AFX_MODULE_STATE *pAVar2;
  int iVar3;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &DAT_0040d5f8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pAVar2 = AfxGetModuleState();
  CCmdTarget::BeginWaitCursor(*(CCmdTarget **)(pAVar2 + 4));
  uStack_4 = 0;
  iVar3 = FUN_00406a10(param_1);
  FUN_004080d0((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0xe0));
  iVar1 = *(int *)(param_1 + 0x90);
  FUN_00404360(param_1 + 0xd4,*(undefined4 *)(iVar1 + 0xe8),*(undefined4 *)(iVar1 + 0x18c),
               *(undefined4 *)(iVar1 + 400));
  iVar1 = *(int *)(param_1 + 0x90);
  FUN_00404360(param_1 + 0x114,*(undefined4 *)(iVar1 + 0xe4),*(undefined4 *)(iVar1 + 0x18c),
               *(undefined4 *)(iVar1 + 400));
  iVar1 = *(int *)(param_1 + 0x90);
  FUN_00404660(param_1 + 0x94,*(undefined4 *)(iVar1 + 0x194),*(undefined4 *)(iVar1 + 0x18c),
               *(undefined4 *)(iVar1 + 400));
  FUN_00407f90((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x1b0),0x3f800000,0);
  FUN_00407f90((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x1a8),0,0);
  FUN_00407f90((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x1ac),0,0);
  FUN_00404070(*(int *)(param_1 + 0x90));
  uStack_4 = 0xffffffff;
  pAVar2 = AfxGetModuleState();
  CCmdTarget::EndWaitCursor(*(CCmdTarget **)(pAVar2 + 4));
  ExceptionList = pvStack_c;
  return iVar3;
}


// ---- FUN_00409a20 @ 00409a20

undefined4 * FUN_00409a20(void)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0040d61a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0xd4);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = FUN_00409a90(puVar1);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


// ---- FUN_00409a80 @ 00409a80

undefined ** FUN_00409a80(void)

{
  return &PTR_s_CScanOrthog_004109b8;
}


// ---- FUN_00409a90 @ 00409a90

undefined4 * __fastcall FUN_00409a90(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0040d638;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004069b0(param_1,0x88);
  local_4 = 0;
  CWnd::CWnd((CWnd *)(param_1 + 0x25));
  *(undefined ***)(param_1 + 0x25) = &PTR_FUN_0040e4b0;
  *param_1 = &PTR_FUN_00410a08;
  ExceptionList = local_c;
  return param_1;
}


// ---- FUN_00409af0 @ 00409af0

CPropertyPage * __thiscall FUN_00409af0(void *this,byte param_1)

{
  FUN_00409b10(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_00409b10 @ 00409b10

void __fastcall FUN_00409b10(CPropertyPage *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0040d658;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)param_1 = &PTR_FUN_00410a08;
  local_4 = 0;
  CWnd::~CWnd((CWnd *)(param_1 + 0x94));
  local_4 = 0xffffffff;
  FUN_004069e0(param_1);
  ExceptionList = pvStack_c;
  return;
}


// ---- FUN_00409b70 @ 00409b70

void __thiscall FUN_00409b70(int param_1,CDataExchange *param_2)

{
  FUN_004069f0();
  DDX_Control(param_2,0x3ed,(CWnd *)(param_1 + 0x94));
  return;
}


// ---- FUN_00409ba0 @ 00409ba0

undefined ** FUN_00409ba0(void)

{
  return &PTR_FUN_004109d0;
}


// ---- FUN_00409bb0 @ 00409bb0

int __fastcall FUN_00409bb0(CPropertyPage *param_1)

{
  int iVar1;
  AFX_MODULE_STATE *pAVar2;
  int iVar3;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &DAT_0040d678;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pAVar2 = AfxGetModuleState();
  CCmdTarget::BeginWaitCursor(*(CCmdTarget **)(pAVar2 + 4));
  uStack_4 = 0;
  iVar3 = FUN_00406a10(param_1);
  FUN_004080d0((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x174));
  iVar1 = *(int *)(param_1 + 0x90);
  FUN_00404360(param_1 + 0x94,*(undefined4 *)(iVar1 + 0x178),*(undefined4 *)(iVar1 + 0x18c),
               *(undefined4 *)(iVar1 + 400));
  FUN_00407f90((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x1b4),0x3f800000,0);
  FUN_00407f90((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x198),0x43960000,0);
  uStack_4 = 0xffffffff;
  pAVar2 = AfxGetModuleState();
  CCmdTarget::EndWaitCursor(*(CCmdTarget **)(pAVar2 + 4));
  ExceptionList = pvStack_c;
  return iVar3;
}


// ---- FUN_00409c90 @ 00409c90

undefined4 __fastcall FUN_00409c90(CPropertyPage *param_1)

{
  AFX_MODULE_STATE *pAVar1;
  undefined4 uVar2;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &DAT_0040d698;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pAVar1 = AfxGetModuleState();
  CCmdTarget::BeginWaitCursor(*(CCmdTarget **)(pAVar1 + 4));
  uStack_4 = 0;
  FUN_004080d0((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x16c));
  FUN_00407f90((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x1b4),0,0);
  uVar2 = FUN_00406a60(param_1);
  uStack_4 = 0xffffffff;
  pAVar1 = AfxGetModuleState();
  CCmdTarget::EndWaitCursor(*(CCmdTarget **)(pAVar1 + 4));
  ExceptionList = pvStack_c;
  return uVar2;
}


// ---- FUN_00409d30 @ 00409d30

void __fastcall FUN_00409d30(CPropertyPage *param_1)

{
  CWnd *this;
  int iVar1;
  
  FUN_004080d0((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x168));
  FUN_004080d0((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x174));
  CPropertyPage::OnCancel(param_1);
  iVar1 = 0;
  this = CWnd::GetDlgItem((CWnd *)param_1,2);
  CWnd::EnableWindow(this,iVar1);
  return;
}


// ---- FUN_00409dd0 @ 00409dd0

CDialog * __thiscall FUN_00409dd0(void *this,undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0040d6b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CDialog::CDialog(this,0xae,(CWnd *)0x0);
  local_4 = 0;
  CWnd::CWnd((CWnd *)((int)this + 0x60));
  *(undefined ***)((int)this + 0x60) = &PTR_LAB_00410c10;
  *(undefined4 *)((int)this + 0xa0) = param_1;
  *(undefined ***)this = &PTR_LAB_00410b38;
  ExceptionList = local_c;
  return this;
}


// ---- FUN_00409e40 @ 00409e40

CDialog * __thiscall FUN_00409e40(void *this,byte param_1)

{
  FUN_00403f20(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_00409e80 @ 00409e80

code * FUN_00409e80(void)

{
  return messageMap_exref;
}


// ---- FUN_00409f20 @ 00409f20

undefined4 __fastcall FUN_00409f20(CDialog *param_1)

{
  char cVar1;
  int iVar2;
  AFX_MODULE_STATE *pAVar3;
  HRSRC hResInfo;
  HGLOBAL hResData;
  LPVOID pvVar4;
  int iVar5;
  int iVar6;
  uchar *local_18;
  int local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0040d6d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CDialog::OnInitDialog(param_1);
  local_10 = CPropertySheet::GetPageCount(*(CPropertySheet **)(param_1 + 0xa0));
  local_10 = local_10 + -1;
  local_14 = 1;
  if (1 < local_10) {
    do {
      CString::CString((CString *)&local_18,&DAT_00416090);
      local_4 = 0;
      iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0xa0) + 0x6c) + local_14 * 4);
      pAVar3 = AfxGetModuleState();
      hResInfo = FindResourceA(*(HMODULE *)(pAVar3 + 0xc),*(LPCSTR *)(iVar2 + 0x6c),(LPCSTR)0x5);
      hResData = LoadResource((HMODULE)0x0,hResInfo);
      pvVar4 = LockResource(hResData);
      iVar5 = (int)pvVar4 + 0x16;
      cVar1 = *(char *)((int)pvVar4 + 0x16);
      for (iVar6 = 0; (cVar1 != '\0' && (iVar6 < 0x40)); iVar6 = iVar6 + 2) {
        CString::operator+=((CString *)&local_18,cVar1);
        cVar1 = *(char *)(iVar5 + 2);
        iVar5 = iVar5 + 2;
      }
      iVar5 = _mbscmp(local_18,&DAT_00415af8);
      if (iVar5 == 0) {
        CString::operator=((CString *)&local_18,*(char **)(iVar2 + 0x74));
      }
      SendMessageA(*(HWND *)(param_1 + 0x80),0x180,0,(LPARAM)local_18);
      local_4 = 0xffffffff;
      CString::~CString((CString *)&local_18);
      local_14 = local_14 + 1;
    } while (local_14 < local_10);
  }
  SendMessageA(*(HWND *)(param_1 + 0x80),0x185,1,-1);
  ExceptionList = local_c;
  return 1;
}


// ---- FUN_0040a080 @ 0040a080

CListBox * __thiscall FUN_0040a080(void *this,byte param_1)

{
  CListBox::~CListBox(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_0040a0e0 @ 0040a0e0

void FUN_0040a0e0(void)

{
  CString::CString((CString *)&DAT_00416194,s_Using_the_stage_only__centre_a_p_00415be8);
  CString::CString((CString *)&DAT_00416198,s_Using_Beamshift_and_magnificatio_00415b88);
  CString::CString((CString *)&DAT_0041619c,s_Using_Beamshift_only__position_t_00415b0c);
  return;
}


// ---- FUN_0040a110 @ 0040a110

void FUN_0040a110(void)

{
  FUN_0040c29c((_onexit_t)&LAB_0040a120);
  return;
}


// ---- FUN_0040a140 @ 0040a140

undefined4 * FUN_0040a140(void)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0040d6fa;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0xdc);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = FUN_0040a1b0(puVar1);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


// ---- FUN_0040a1a0 @ 0040a1a0

undefined ** FUN_0040a1a0(void)

{
  return &PTR_s_CShiftCal_00410ce8;
}


// ---- FUN_0040a1b0 @ 0040a1b0

undefined4 * __fastcall FUN_0040a1b0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0040d734;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004069b0(param_1,0x92);
  local_4 = 0;
  CWnd::CWnd((CWnd *)(param_1 + 0x25));
  *(undefined ***)(param_1 + 0x25) = &PTR_FUN_0040eff8;
  local_4._0_1_ = 1;
  CString::CString((CString *)(param_1 + 0x35));
  local_4 = CONCAT31(local_4._1_3_,2);
  *param_1 = &PTR_FUN_00410d38;
  CString::operator=((CString *)(param_1 + 0x35),&DAT_00416090);
  param_1[0x36] = 0;
  ExceptionList = local_c;
  return param_1;
}


// ---- FUN_0040a240 @ 0040a240

CPropertyPage * __thiscall FUN_0040a240(void *this,byte param_1)

{
  FUN_0040a260(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_0040a260 @ 0040a260

void __fastcall FUN_0040a260(CPropertyPage *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0040d756;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)param_1 = &PTR_FUN_00410d38;
  local_4 = 1;
  CString::~CString((CString *)(param_1 + 0xd4));
  local_4 = local_4 & 0xffffff00;
  CWnd::~CWnd((CWnd *)(param_1 + 0x94));
  local_4 = 0xffffffff;
  FUN_004069e0(param_1);
  ExceptionList = pvStack_c;
  return;
}


// ---- FUN_0040a2d0 @ 0040a2d0

void __thiscall FUN_0040a2d0(int param_1,CDataExchange *param_2)

{
  FUN_004069f0();
  DDX_Control(param_2,0x417,(CWnd *)(param_1 + 0x94));
  DDX_Text(param_2,0x418,(CString *)(param_1 + 0xd4));
  DDV_MaxChars(param_2,(CString *)(param_1 + 0xd4),0x100);
  return;
}


// ---- FUN_0040a320 @ 0040a320

undefined ** FUN_0040a320(void)

{
  return &PTR_FUN_00410d00;
}


// ---- FUN_0040a330 @ 0040a330

int __fastcall FUN_0040a330(CPropertyPage *param_1)

{
  int iVar1;
  AFX_MODULE_STATE *pAVar2;
  int iVar3;
  undefined4 *puVar4;
  CWnd *pCVar5;
  int iVar6;
  undefined4 uVar7;
  char *pcVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  CString local_14 [4];
  CString local_10 [4];
  void *pvStack_c;
  undefined1 *local_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  local_8 = &LAB_0040d778;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pAVar2 = AfxGetModuleState();
  CCmdTarget::BeginWaitCursor(*(CCmdTarget **)(pAVar2 + 4));
  local_4 = 0;
  iVar3 = FUN_00406a10(param_1);
  CString::CString(local_14,s_Obtain_an_image_of_a_calibration_00415c1c);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_004080d0((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x1bc));
  FUN_00407f90((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x1b0),0x3f800000,0);
  FUN_00407f90((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x1a8),0,0);
  FUN_00407f90((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x1ac),0,0);
  iVar6 = *(int *)(param_1 + 0x90);
  FUN_004045a0(param_1 + 0x94,*(undefined4 *)(iVar6 + 0x1a8),*(undefined4 *)(iVar6 + 0x18c),
               *(undefined4 *)(iVar6 + 400));
  DAT_004161a4 = 0;
  iVar6 = *(int *)(param_1 + 0x90);
  iVar1 = *(int *)(iVar6 + 0x118);
  if ((iVar1 < 0) || ((1 < iVar1 && (iVar1 != 3)))) {
    pcVar8 = DAT_00416194;
    pCVar5 = CWnd::GetDlgItem((CWnd *)param_1,0x418);
    CWnd::SetWindowTextA(pCVar5,pcVar8);
    iVar6 = *(int *)(param_1 + 0x90);
    puVar10 = (undefined4 *)0x0;
    uVar9 = 0x461c4000;
    uVar7 = *(undefined4 *)(iVar6 + 0x198);
  }
  else {
    FUN_00407f30((void *)(iVar6 + 0x2c4),*(undefined4 *)(iVar6 + 0x6c),param_1 + 0xd8,0);
    FUN_00407f90((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
                 *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x6c),0x461c4000,0);
    puVar10 = &DAT_00416194 + DAT_004161a4;
    puVar4 = (undefined4 *)operator+(local_10,local_14);
    pcVar8 = (char *)*puVar4;
    local_8._0_1_ = 2;
    pCVar5 = CWnd::GetDlgItem((CWnd *)param_1,0x418);
    CWnd::SetWindowTextA(pCVar5,pcVar8);
    local_8 = (undefined1 *)CONCAT31(local_8._1_3_,1);
    CString::~CString(local_14);
    iVar6 = *(int *)(param_1 + 0x90);
    uVar9 = 0;
    uVar7 = 0x447a0000;
  }
  FUN_00407f90((void *)(iVar6 + 0x2c4),uVar7,uVar9,puVar10);
  local_4 = local_4 & 0xffffff00;
  CString::~CString(local_14);
  local_4 = 0xffffffff;
  pAVar2 = AfxGetModuleState();
  CCmdTarget::EndWaitCursor(*(CCmdTarget **)(pAVar2 + 4));
  ExceptionList = pvStack_c;
  return iVar3;
}


// ---- FUN_0040a540 @ 0040a540

void __fastcall FUN_0040a540(CPropertyPage *param_1)

{
  FUN_004080d0((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x16c));
  FUN_00407f90((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x1b0),0,0);
  FUN_00406ac0(param_1);
  return;
}


// ---- FUN_0040a580 @ 0040a580

undefined4 __fastcall FUN_0040a580(CPropertyPage *param_1)

{
  int iVar1;
  undefined4 uVar2;
  CWnd *pCVar3;
  bool bVar4;
  char *pcVar5;
  
  iVar1 = DAT_004161a4 + 1;
  if (DAT_004161a4 == 0) {
    DAT_004161a4 = iVar1;
    pcVar5 = DAT_00416198;
    pCVar3 = CWnd::GetDlgItem((CWnd *)param_1,0x418);
    CWnd::SetWindowTextA(pCVar3,pcVar5);
  }
  else {
    if (DAT_004161a4 == 1) {
      DAT_004161a4 = iVar1;
      pcVar5 = DAT_0041619c;
      pCVar3 = CWnd::GetDlgItem((CWnd *)param_1,0x418);
      CWnd::SetWindowTextA(pCVar3,pcVar5);
      SendMessageA(*(HWND *)(*(int *)(param_1 + 0x90) + 0x18c),DAT_004161a0,
                   *(WPARAM *)(*(int *)(param_1 + 0x90) + 400),0);
      return 0xffffffff;
    }
    bVar4 = DAT_004161a4 == 2;
    DAT_004161a4 = iVar1;
    if (bVar4) {
      SendMessageA(*(HWND *)(*(int *)(param_1 + 0x90) + 0x18c),DAT_004161a0,
                   *(WPARAM *)(*(int *)(param_1 + 0x90) + 400),1);
      FUN_004080d0((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
                   *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x16c));
      FUN_00407f90((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
                   *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x1b0),0,0);
      FUN_00407f90((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
                   *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x1a8),0,0);
      FUN_00407f90((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
                   *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x1ac),0,0);
      uVar2 = FUN_00406a60(param_1);
      return uVar2;
    }
  }
  return 0xffffffff;
}


// ---- FUN_0040a6a0 @ 0040a6a0

void __fastcall FUN_0040a6a0(CWnd *param_1)

{
  CWnd *this;
  char *pcVar1;
  
  FUN_004080d0((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x168));
  FUN_004080d0((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x1bc));
  DAT_004161a4 = 0;
  pcVar1 = DAT_00416194;
  this = CWnd::GetDlgItem(param_1,0x418);
  CWnd::SetWindowTextA(this,pcVar1);
  FUN_00407f90((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x1a8),0,0);
  FUN_00407f90((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x1ac),0,0);
  CPropertyPage::OnCancel((CPropertyPage *)param_1);
  return;
}


// ---- FUN_0040a760 @ 0040a760

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0040a760(CPropertyPage *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x90);
  iVar2 = *(int *)(iVar1 + 0x118);
  if ((-1 < iVar2) &&
     (((iVar2 < 2 || (iVar2 == 3)) && (_DAT_00410850 < *(float *)(param_1 + 0xd8))))) {
    FUN_00407f90((void *)(iVar1 + 0x2c4),*(undefined4 *)(iVar1 + 0x6c),*(float *)(param_1 + 0xd8),0)
    ;
  }
  CPropertyPage::OnKillActive(param_1);
  return;
}


// ---- FUN_0040a7f0 @ 0040a7f0

undefined4 * FUN_0040a7f0(void)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0040d79a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x160);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = FUN_0040a860(puVar1);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


// ---- FUN_0040a850 @ 0040a850

undefined ** FUN_0040a850(void)

{
  return &PTR_s_CSpotPosn_00410e30;
}


// ---- FUN_0040a860 @ 0040a860

undefined4 * __fastcall FUN_0040a860(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0040d7f0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004069b0(param_1,0xb4);
  local_4 = 0;
  CWnd::CWnd((CWnd *)(param_1 + 0x27));
  *(undefined ***)(param_1 + 0x27) = &PTR_FUN_0040e4b0;
  local_4._0_1_ = 1;
  CWnd::CWnd((CWnd *)(param_1 + 0x37));
  *(undefined ***)(param_1 + 0x37) = &PTR_FUN_0040eef8;
  local_4._0_1_ = 2;
  CWnd::CWnd((CWnd *)(param_1 + 0x47));
  *(undefined ***)(param_1 + 0x47) = &PTR_FUN_0040f0e0;
  local_4._0_1_ = 3;
  CString::CString((CString *)(param_1 + 0x57));
  local_4 = CONCAT31(local_4._1_3_,4);
  *param_1 = &PTR_FUN_00410e68;
  CString::operator=((CString *)(param_1 + 0x57),&DAT_00416090);
  ExceptionList = local_c;
  return param_1;
}


// ---- FUN_0040a910 @ 0040a910

CPropertyPage * __thiscall FUN_0040a910(void *this,byte param_1)

{
  FUN_0040a930(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_0040a930 @ 0040a930

void __fastcall FUN_0040a930(CPropertyPage *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0040d832;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)param_1 = &PTR_FUN_00410e68;
  local_4 = 3;
  CString::~CString((CString *)(param_1 + 0x15c));
  local_4._0_1_ = 2;
  CWnd::~CWnd((CWnd *)(param_1 + 0x11c));
  local_4._0_1_ = 1;
  CWnd::~CWnd((CWnd *)(param_1 + 0xdc));
  local_4 = (uint)local_4._1_3_ << 8;
  CWnd::~CWnd((CWnd *)(param_1 + 0x9c));
  local_4 = 0xffffffff;
  FUN_004069e0(param_1);
  ExceptionList = pvStack_c;
  return;
}


// ---- FUN_0040a9c0 @ 0040a9c0

void __thiscall FUN_0040a9c0(int param_1,CDataExchange *param_2)

{
  FUN_004069f0();
  DDX_Control(param_2,0x47d,(CWnd *)(param_1 + 0x9c));
  DDX_Control(param_2,0x416,(CWnd *)(param_1 + 0xdc));
  DDX_Control(param_2,0x47c,(CWnd *)(param_1 + 0x11c));
  DDX_Text(param_2,0x40a,(CString *)(param_1 + 0x15c));
  return;
}


// ---- FUN_0040aa20 @ 0040aa20

undefined ** FUN_0040aa20(void)

{
  return &PTR_FUN_00410e48;
}


// ---- FUN_0040aa30 @ 0040aa30

int __fastcall FUN_0040aa30(CPropertyPage *param_1)

{
  int iVar1;
  AFX_MODULE_STATE *pAVar2;
  int iVar3;
  CPropertyPage *local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0040d850;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = param_1;
  pAVar2 = AfxGetModuleState();
  CCmdTarget::BeginWaitCursor(*(CCmdTarget **)(pAVar2 + 4));
  local_4 = 0;
  iVar3 = FUN_00406a10(param_1);
  CString::CString((CString *)&local_10);
  local_4._0_1_ = 1;
  FUN_00404420(param_1 + 0xdc);
  iVar1 = *(int *)(param_1 + 0x90);
  FUN_00404360(param_1 + 0x9c,*(undefined4 *)(iVar1 + 0x60),*(undefined4 *)(iVar1 + 0x18c),
               *(undefined4 *)(iVar1 + 400));
  iVar1 = *(int *)(param_1 + 0x90);
  FUN_00404660(param_1 + 0x11c,*(undefined4 *)(iVar1 + 100),*(undefined4 *)(iVar1 + 0x18c),
               *(undefined4 *)(iVar1 + 400));
  CString::operator=((CString *)(param_1 + 0x15c),s_In_Spot_Mode_move_spot_in_X_acro_00415c7c);
  CWnd::UpdateData((CWnd *)param_1,0);
  *(undefined4 *)(param_1 + 0x94) = 0;
  FUN_00407f30((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x60),param_1 + 0x98,0);
  local_4 = (uint)local_4._1_3_ << 8;
  CString::~CString((CString *)&local_10);
  local_4 = 0xffffffff;
  pAVar2 = AfxGetModuleState();
  CCmdTarget::EndWaitCursor(*(CCmdTarget **)(pAVar2 + 4));
  ExceptionList = local_c;
  return iVar3;
}


// ---- FUN_0040ab60 @ 0040ab60

void __fastcall FUN_0040ab60(CWnd *param_1)

{
  CWnd *this;
  int iVar1;
  
  FUN_00407f90((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x60),*(undefined4 *)(param_1 + 0x98),0);
  iVar1 = 0;
  this = CWnd::GetDlgItem(param_1,2);
  CWnd::EnableWindow(this,iVar1);
  CPropertyPage::OnCancel((CPropertyPage *)param_1);
  return;
}


// ---- FUN_0040abd0 @ 0040abd0

undefined4 * FUN_0040abd0(void)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0040d86a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x118);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = FUN_0040ac40(puVar1);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


// ---- FUN_0040ac30 @ 0040ac30

undefined ** FUN_0040ac30(void)

{
  return &PTR_s_CStageAngle_00410f60;
}


// ---- FUN_0040ac40 @ 0040ac40

undefined4 * __fastcall FUN_0040ac40(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0040d8b2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004069b0(param_1,0x85);
  local_4 = 0;
  CWnd::CWnd((CWnd *)(param_1 + 0x25));
  *(undefined ***)(param_1 + 0x25) = &PTR_FUN_0040e4b0;
  local_4._0_1_ = 1;
  CWnd::CWnd((CWnd *)(param_1 + 0x35));
  *(undefined ***)(param_1 + 0x35) = &PTR_FUN_0040e570;
  local_4._0_1_ = 2;
  CString::CString((CString *)(param_1 + 0x45));
  local_4 = CONCAT31(local_4._1_3_,3);
  *param_1 = &PTR_FUN_00410fb0;
  CString::operator=((CString *)(param_1 + 0x45),&DAT_00416090);
  ExceptionList = local_c;
  return param_1;
}


// ---- FUN_0040ace0 @ 0040ace0

CPropertyPage * __thiscall FUN_0040ace0(void *this,byte param_1)

{
  FUN_0040ad00(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_0040ad00 @ 0040ad00

void __fastcall FUN_0040ad00(CPropertyPage *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0040d8e4;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)param_1 = &PTR_FUN_00410fb0;
  local_4 = 2;
  CString::~CString((CString *)(param_1 + 0x114));
  local_4._0_1_ = 1;
  CWnd::~CWnd((CWnd *)(param_1 + 0xd4));
  local_4 = (uint)local_4._1_3_ << 8;
  CWnd::~CWnd((CWnd *)(param_1 + 0x94));
  local_4 = 0xffffffff;
  FUN_004069e0(param_1);
  ExceptionList = pvStack_c;
  return;
}


// ---- FUN_0040ad80 @ 0040ad80

void __thiscall FUN_0040ad80(int param_1,CDataExchange *param_2)

{
  FUN_004069f0();
  DDX_Control(param_2,0x3eb,(CWnd *)(param_1 + 0x94));
  DDX_Control(param_2,0x47a,(CWnd *)(param_1 + 0xd4));
  DDX_Text(param_2,0x40a,(CString *)(param_1 + 0x114));
  return;
}


// ---- FUN_0040add0 @ 0040add0

undefined ** FUN_0040add0(void)

{
  return &PTR_FUN_00410f78;
}


// ---- FUN_0040ade0 @ 0040ade0

int __fastcall FUN_0040ade0(CPropertyPage *param_1)

{
  int iVar1;
  AFX_MODULE_STATE *pAVar2;
  int iVar3;
  undefined4 local_14;
  CString local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0040d900;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pAVar2 = AfxGetModuleState();
  CCmdTarget::BeginWaitCursor(*(CCmdTarget **)(pAVar2 + 4));
  local_4 = 0;
  iVar3 = FUN_00406a10(param_1);
  CString::CString(local_10);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_004080d0((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x15c));
  FUN_00407f90((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0xf0),0x3f800000,0);
  iVar1 = *(int *)(param_1 + 0x90);
  FUN_00404360(param_1 + 0x94,*(undefined4 *)(iVar1 + 0x160),*(undefined4 *)(iVar1 + 0x18c),
               *(undefined4 *)(iVar1 + 400));
  FUN_00407f90((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x1b4),0x3f800000,0);
  FUN_00407f00((void *)(*(int *)(param_1 + 0x90) + 0x2c4),&local_14,s_DP_C3_ROT_SIGN_00415ed4);
  iVar1 = *(int *)(param_1 + 0x90);
  switch(*(undefined4 *)(iVar1 + 0x118)) {
  case 0:
  case 1:
  case 6:
  case 8:
    CString::operator=((CString *)(param_1 + 0x114),s_Adjust_Stage_Angle_so_that_stage_00415e50);
    CWnd::ShowWindow((CWnd *)(param_1 + 0xd4),0);
    break;
  default:
    FUN_004044c0(param_1 + 0xd4,local_14,*(undefined4 *)(iVar1 + 0x18c),*(undefined4 *)(iVar1 + 400)
                );
    CString::operator=((CString *)(param_1 + 0x114),s_Adjust_Stage_Angle_so_that_stage_00415d58);
  }
  CWnd::UpdateData((CWnd *)param_1,0);
  local_4 = local_4 & 0xffffff00;
  CString::~CString(local_10);
  local_4 = 0xffffffff;
  pAVar2 = AfxGetModuleState();
  CCmdTarget::EndWaitCursor(*(CCmdTarget **)(pAVar2 + 4));
  ExceptionList = local_c;
  return iVar3;
}


// ---- FUN_0040af80 @ 0040af80

void __fastcall FUN_0040af80(CPropertyPage *param_1)

{
  FUN_004080d0((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x16c));
  FUN_00407f90((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x1b4),0,0);
  FUN_00406ac0(param_1);
  return;
}


// ---- FUN_0040afc0 @ 0040afc0

undefined4 __fastcall FUN_0040afc0(CPropertyPage *param_1)

{
  AFX_MODULE_STATE *pAVar1;
  undefined4 uVar2;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &DAT_0040d918;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pAVar1 = AfxGetModuleState();
  CCmdTarget::BeginWaitCursor(*(CCmdTarget **)(pAVar1 + 4));
  uStack_4 = 0;
  FUN_004080d0((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x16c));
  FUN_00407f90((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x1b4),0,0);
  uVar2 = FUN_00406a60(param_1);
  uStack_4 = 0xffffffff;
  pAVar1 = AfxGetModuleState();
  CCmdTarget::EndWaitCursor(*(CCmdTarget **)(pAVar1 + 4));
  ExceptionList = pvStack_c;
  return uVar2;
}


// ---- FUN_0040b060 @ 0040b060

void __fastcall FUN_0040b060(CWnd *param_1)

{
  CWnd *this;
  int iVar1;
  
  FUN_004080d0((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x168));
  FUN_004080d0((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x15c));
  iVar1 = 0;
  this = CWnd::GetDlgItem(param_1,2);
  CWnd::EnableWindow(this,iVar1);
  CPropertyPage::OnCancel((CPropertyPage *)param_1);
  return;
}


// ---- FUN_0040b120 @ 0040b120

undefined4 * FUN_0040b120(void)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0040d93a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x154);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = FUN_0040b190(puVar1);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


// ---- FUN_0040b180 @ 0040b180

undefined ** FUN_0040b180(void)

{
  return &PTR_s_CStereo_004110a8;
}


// ---- FUN_0040b190 @ 0040b190

undefined4 * __fastcall FUN_0040b190(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0040d974;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004069b0(param_1,0xa8);
  local_4 = 0;
  CWnd::CWnd((CWnd *)(param_1 + 0x25));
  *(undefined ***)(param_1 + 0x25) = &PTR_FUN_0040e4b0;
  local_4._0_1_ = 1;
  CWnd::CWnd((CWnd *)(param_1 + 0x35));
  *(undefined ***)(param_1 + 0x35) = &PTR_FUN_0040e4b0;
  local_4 = CONCAT31(local_4._1_3_,2);
  CWnd::CWnd((CWnd *)(param_1 + 0x45));
  *(undefined ***)(param_1 + 0x45) = &PTR_FUN_0040e4b0;
  *param_1 = &PTR_FUN_00411140;
  ExceptionList = local_c;
  return param_1;
}


// ---- FUN_0040b220 @ 0040b220

CPropertyPage * __thiscall FUN_0040b220(void *this,byte param_1)

{
  FUN_0040b240(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_0040b240 @ 0040b240

void __fastcall FUN_0040b240(CPropertyPage *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0040d9a4;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)param_1 = &PTR_FUN_00411140;
  local_4 = 2;
  CWnd::~CWnd((CWnd *)(param_1 + 0x114));
  local_4._0_1_ = 1;
  CWnd::~CWnd((CWnd *)(param_1 + 0xd4));
  local_4 = (uint)local_4._1_3_ << 8;
  CWnd::~CWnd((CWnd *)(param_1 + 0x94));
  local_4 = 0xffffffff;
  FUN_004069e0(param_1);
  ExceptionList = pvStack_c;
  return;
}


// ---- FUN_0040b2c0 @ 0040b2c0

void __thiscall FUN_0040b2c0(int param_1,CDataExchange *param_2)

{
  FUN_004069f0();
  DDX_Control(param_2,0x459,(CWnd *)(param_1 + 0x94));
  DDX_Control(param_2,0x458,(CWnd *)(param_1 + 0xd4));
  DDX_Control(param_2,0x457,(CWnd *)(param_1 + 0x114));
  return;
}


// ---- FUN_0040b310 @ 0040b310

undefined ** FUN_0040b310(void)

{
  return &PTR_FUN_004110c0;
}


// ---- FUN_0040b320 @ 0040b320

int __fastcall FUN_0040b320(CPropertyPage *param_1)

{
  AFX_MODULE_STATE *pAVar1;
  int iVar2;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &DAT_0040d9b8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pAVar1 = AfxGetModuleState();
  CCmdTarget::BeginWaitCursor(*(CCmdTarget **)(pAVar1 + 4));
  uStack_4 = 0;
  iVar2 = FUN_00406a10(param_1);
  uStack_4 = 0xffffffff;
  pAVar1 = AfxGetModuleState();
  CCmdTarget::EndWaitCursor(*(CCmdTarget **)(pAVar1 + 4));
  ExceptionList = pvStack_c;
  return iVar2;
}


// ---- FUN_0040b380 @ 0040b380

undefined4 __fastcall FUN_0040b380(CPropertyPage *param_1)

{
  AFX_MODULE_STATE *pAVar1;
  undefined4 uVar2;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &DAT_0040d9d8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pAVar1 = AfxGetModuleState();
  CCmdTarget::BeginWaitCursor(*(CCmdTarget **)(pAVar1 + 4));
  uStack_4 = 0;
  FUN_004080d0((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x16c));
  uVar2 = FUN_00406a60(param_1);
  uStack_4 = 0xffffffff;
  pAVar1 = AfxGetModuleState();
  CCmdTarget::EndWaitCursor(*(CCmdTarget **)(pAVar1 + 4));
  ExceptionList = pvStack_c;
  return uVar2;
}


// ---- FUN_0040b400 @ 0040b400

undefined ** FUN_0040b400(void)

{
  return &PTR_LAB_004110e0;
}


// ---- FUN_0040b450 @ 0040b450

void FUN_0040b450(void)

{
  CString::CString((CString *)&DAT_004161b4,s_Find_a_point_of_interest_at_50kX_00415f3c);
  CString::CString((CString *)&DAT_004161b8,s_Remove_Wobble_using_Stig_Bal_X_00415f1c);
  CString::CString((CString *)&DAT_004161bc,s_Remove_Wobble_using_Stig_Bal_Y_00415efc);
  return;
}


// ---- FUN_0040b480 @ 0040b480

void FUN_0040b480(void)

{
  FUN_0040c29c((_onexit_t)&LAB_0040b490);
  return;
}


// ---- FUN_0040b4b0 @ 0040b4b0

undefined4 * FUN_0040b4b0(void)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0040d9fa;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x218);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = FUN_0040b520(puVar1);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


// ---- FUN_0040b510 @ 0040b510

undefined ** FUN_0040b510(void)

{
  return &PTR_s_CStigBal_00411238;
}


// ---- FUN_0040b520 @ 0040b520

undefined4 * __fastcall FUN_0040b520(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0040da5e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004069b0(param_1,0xa6);
  local_4 = 0;
  CWnd::CWnd((CWnd *)(param_1 + 0x25));
  *(undefined ***)(param_1 + 0x25) = &PTR_GetRuntimeClass_0040ede8;
  local_4._0_1_ = 1;
  CWnd::CWnd((CWnd *)(param_1 + 0x35));
  *(undefined ***)(param_1 + 0x35) = &PTR_FUN_0040e4b0;
  local_4._0_1_ = 2;
  CWnd::CWnd((CWnd *)(param_1 + 0x45));
  *(undefined ***)(param_1 + 0x45) = &PTR_FUN_0040e4b0;
  local_4._0_1_ = 3;
  CWnd::CWnd((CWnd *)(param_1 + 0x55));
  *(undefined ***)(param_1 + 0x55) = &PTR_FUN_0040f0e0;
  local_4._0_1_ = 4;
  CWnd::CWnd((CWnd *)(param_1 + 0x65));
  *(undefined ***)(param_1 + 0x65) = &PTR_FUN_0040e4b0;
  local_4 = CONCAT31(local_4._1_3_,5);
  CWnd::CWnd((CWnd *)(param_1 + 0x75));
  *(undefined ***)(param_1 + 0x75) = &PTR_FUN_0040e4b0;
  *param_1 = &PTR_FUN_004112a0;
  param_1[0x85] = 0x2edbe6ff;
  ExceptionList = local_c;
  return param_1;
}


// ---- FUN_0040b600 @ 0040b600

CPropertyPage * __thiscall FUN_0040b600(void *this,byte param_1)

{
  FUN_0040b620(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_0040b620 @ 0040b620

void __fastcall FUN_0040b620(CPropertyPage *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0040dabe;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)param_1 = &PTR_FUN_004112a0;
  local_4 = 5;
  CWnd::~CWnd((CWnd *)(param_1 + 0x1d4));
  local_4._0_1_ = 4;
  CWnd::~CWnd((CWnd *)(param_1 + 0x194));
  local_4._0_1_ = 3;
  CWnd::~CWnd((CWnd *)(param_1 + 0x154));
  local_4._0_1_ = 2;
  CWnd::~CWnd((CWnd *)(param_1 + 0x114));
  local_4._0_1_ = 1;
  CWnd::~CWnd((CWnd *)(param_1 + 0xd4));
  local_4 = (uint)local_4._1_3_ << 8;
  CButton::~CButton((CButton *)(param_1 + 0x94));
  local_4 = 0xffffffff;
  FUN_004069e0(param_1);
  ExceptionList = pvStack_c;
  return;
}


// ---- FUN_0040b6d0 @ 0040b6d0

void __thiscall FUN_0040b6d0(int param_1,CDataExchange *param_2)

{
  FUN_004069f0();
  DDX_Control(param_2,0x437,(CWnd *)(param_1 + 0x94));
  DDX_Control(param_2,0x45c,(CWnd *)(param_1 + 0xd4));
  DDX_Control(param_2,0x45b,(CWnd *)(param_1 + 0x114));
  DDX_Control(param_2,0x461,(CWnd *)(param_1 + 0x154));
  DDX_Control(param_2,0x465,(CWnd *)(param_1 + 0x194));
  DDX_Control(param_2,0x464,(CWnd *)(param_1 + 0x1d4));
  return;
}


// ---- FUN_0040b750 @ 0040b750

undefined ** FUN_0040b750(void)

{
  return &PTR_FUN_00411250;
}


// ---- FUN_0040b760 @ 0040b760

int __fastcall FUN_0040b760(CPropertyPage *param_1)

{
  int iVar1;
  AFX_MODULE_STATE *pAVar2;
  int iVar3;
  CWnd *this;
  char *pcVar4;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &DAT_0040dad8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pAVar2 = AfxGetModuleState();
  CCmdTarget::BeginWaitCursor(*(CCmdTarget **)(pAVar2 + 4));
  uStack_4 = 0;
  iVar3 = FUN_00406a10(param_1);
  DAT_004161c4 = 0;
  FUN_004080d0((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0xc0));
  pcVar4 = (char *)(&DAT_004161b4)[DAT_004161c4];
  this = CWnd::GetDlgItem((CWnd *)param_1,0x40a);
  CWnd::SetWindowTextA(this,pcVar4);
  iVar1 = *(int *)(param_1 + 0x90);
  FUN_00404360(param_1 + 0xd4,*(undefined4 *)(iVar1 + 0xc4),*(undefined4 *)(iVar1 + 0x18c),
               *(undefined4 *)(iVar1 + 400));
  iVar1 = *(int *)(param_1 + 0x90);
  FUN_00404360(param_1 + 0x114,*(undefined4 *)(iVar1 + 200),*(undefined4 *)(iVar1 + 0x18c),
               *(undefined4 *)(iVar1 + 400));
  iVar1 = *(int *)(param_1 + 0x90);
  FUN_00404660(param_1 + 0x154,*(undefined4 *)(iVar1 + 0xcc),*(undefined4 *)(iVar1 + 0x18c),
               *(undefined4 *)(iVar1 + 400));
  FUN_00407f90((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0xa4),0,0);
  FUN_00407f90((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0xa0),0,0);
  FUN_00407f30((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x9c),param_1 + 0x214,0);
  FUN_00407f90((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x9c),0x2e5be6ff,0);
  FUN_00407f90((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0xc4),0x42480000,0);
  FUN_00407f90((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 200),0x43960000,0);
  uStack_4 = 0xffffffff;
  pAVar2 = AfxGetModuleState();
  CCmdTarget::EndWaitCursor(*(CCmdTarget **)(pAVar2 + 4));
  ExceptionList = pvStack_c;
  return iVar3;
}


// ---- FUN_0040b930 @ 0040b930

void __fastcall FUN_0040b930(CPropertyPage *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x90);
  if (DAT_004161c4 == 0) {
    uVar2 = *(undefined4 *)(iVar1 + 0x168);
  }
  else {
    uVar2 = *(undefined4 *)(iVar1 + 0x16c);
  }
  FUN_004080d0((void *)(iVar1 + 0x2c4),uVar2);
  FUN_00407f90((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
               *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x9c),0x2edbe6ff,0);
  FUN_00406ac0(param_1);
  return;
}


// ---- FUN_0040b990 @ 0040b990

undefined4 __fastcall FUN_0040b990(CPropertyPage *param_1)

{
  int iVar1;
  AFX_MODULE_STATE *pAVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  CWnd *this;
  undefined4 uVar6;
  char *pcVar7;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &DAT_0040daf8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pAVar2 = AfxGetModuleState();
  CCmdTarget::BeginWaitCursor(*(CCmdTarget **)(pAVar2 + 4));
  uStack_4 = 0;
  iVar3 = DAT_004161c4 + 1;
  if (DAT_004161c4 == 0) {
    DAT_004161c4 = iVar3;
    FUN_004080d0((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
                 *(undefined4 *)(*(int *)(param_1 + 0x90) + 0xc0));
    FUN_004080d0((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
                 *(undefined4 *)(*(int *)(param_1 + 0x90) + 0xac));
    iVar3 = *(int *)(param_1 + 0x90);
    FUN_00404360(param_1 + 0x194,*(undefined4 *)(iVar3 + 0xb0),*(undefined4 *)(iVar3 + 0x18c),
                 *(undefined4 *)(iVar3 + 400));
    iVar3 = *(int *)(param_1 + 0x90);
    uVar4 = *(undefined4 *)(iVar3 + 400);
    uVar6 = *(undefined4 *)(iVar3 + 0x18c);
    uVar5 = *(undefined4 *)(iVar3 + 0xb4);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x90);
    if (iVar3 != 2) {
      DAT_004161c4 = iVar3;
      FUN_004080d0((void *)(iVar1 + 0x2c4),*(undefined4 *)(iVar1 + 0x16c));
      FUN_00407f90((void *)(*(int *)(param_1 + 0x90) + 0x2c4),
                   *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x9c),*(undefined4 *)(param_1 + 0x214)
                   ,0);
      uVar4 = FUN_00406a60(param_1);
      uStack_4 = 0xffffffff;
      pAVar2 = AfxGetModuleState();
      CCmdTarget::EndWaitCursor(*(CCmdTarget **)(pAVar2 + 4));
      ExceptionList = pvStack_c;
      return uVar4;
    }
    DAT_004161c4 = iVar3;
    FUN_004080d0((void *)(iVar1 + 0x2c4),*(undefined4 *)(iVar1 + 0xa8));
    iVar3 = *(int *)(param_1 + 0x90);
    FUN_00404360(param_1 + 0x194,*(undefined4 *)(iVar3 + 0xb8),*(undefined4 *)(iVar3 + 0x18c),
                 *(undefined4 *)(iVar3 + 400));
    iVar3 = *(int *)(param_1 + 0x90);
    uVar4 = *(undefined4 *)(iVar3 + 400);
    uVar6 = *(undefined4 *)(iVar3 + 0x18c);
    uVar5 = *(undefined4 *)(iVar3 + 0xbc);
  }
  FUN_00404360(param_1 + 0x1d4,uVar5,uVar6,uVar4);
  pcVar7 = (char *)(&DAT_004161b4)[DAT_004161c4];
  this = CWnd::GetDlgItem((CWnd *)param_1,0x40a);
  CWnd::SetWindowTextA(this,pcVar7);
  uStack_4 = 0xffffffff;
  pAVar2 = AfxGetModuleState();
  CCmdTarget::EndWaitCursor(*(CCmdTarget **)(pAVar2 + 4));
  ExceptionList = pvStack_c;
  return 0xffffffff;
}


// ---- FUN_0040bb60 @ 0040bb60

void __fastcall FUN_0040bb60(int param_1)

{
  if (DAT_004161c4 == 1) {
    func_0x00408100(*(undefined4 *)(*(int *)(param_1 + 0x90) + 0xb0),
                    *(undefined4 *)(*(int *)(param_1 + 0x90) + 0xb4));
  }
  else if (DAT_004161c4 == 2) {
    func_0x00408100(*(undefined4 *)(*(int *)(param_1 + 0x90) + 0xb8),
                    *(undefined4 *)(*(int *)(param_1 + 0x90) + 0xbc));
    return;
  }
  return;
}


// ---- FUN_0040bc50 @ 0040bc50

undefined4 * FUN_0040bc50(void)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0040db1a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x98);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = FUN_0040bcc0(puVar1);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


// ---- FUN_0040bcb0 @ 0040bcb0

undefined ** FUN_0040bcb0(void)

{
  return &PTR_s_CTextPage_00411398;
}


// ---- FUN_0040bcc0 @ 0040bcc0

undefined4 * __fastcall FUN_0040bcc0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0040db46;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004069b0(param_1,0x8e);
  local_4 = 0;
  CString::CString((CString *)(param_1 + 0x25));
  local_4 = CONCAT31(local_4._1_3_,1);
  *param_1 = &PTR_FUN_004113d0;
  CString::operator=((CString *)(param_1 + 0x25),&DAT_00416090);
  ExceptionList = local_c;
  return param_1;
}


// ---- FUN_0040bd30 @ 0040bd30

CPropertyPage * __thiscall FUN_0040bd30(void *this,byte param_1)

{
  FUN_0040bd50(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_0040bd50 @ 0040bd50

void __fastcall FUN_0040bd50(CPropertyPage *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0040db58;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)param_1 = &PTR_FUN_004113d0;
  local_4 = 0;
  CString::~CString((CString *)(param_1 + 0x94));
  local_4 = 0xffffffff;
  FUN_004069e0(param_1);
  ExceptionList = pvStack_c;
  return;
}


// ---- FUN_0040bdb0 @ 0040bdb0

void __thiscall FUN_0040bdb0(int param_1,CDataExchange *param_2)

{
  FUN_004069f0();
  DDX_Text(param_2,0x40a,(CString *)(param_1 + 0x94));
  return;
}


// ---- FUN_0040bde0 @ 0040bde0

undefined ** FUN_0040bde0(void)

{
  return &PTR_FUN_004113b0;
}


// ---- FUN_0040bdf0 @ 0040bdf0

void __fastcall FUN_0040bdf0(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0040db78;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  CString::operator=((CString *)(param_1 + 0x94),(CString *)&stack0x00000004);
  local_4 = 0xffffffff;
  CString::~CString((CString *)&stack0x00000004);
  ExceptionList = local_c;
  return;
}


// ---- FUN_0040be60 @ 0040be60

void __thiscall FUN_0040be60(void *this,undefined4 param_1)

{
  *(uint *)((int)this + 100) = *(uint *)((int)this + 100) | 8;
  *(undefined4 *)((int)this + 0x74) = param_1;
  return;
}


// ---- operator_new @ 0040be80

void * __cdecl operator_new(uint param_1)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040be80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = operator_new(param_1);
  return pvVar1;
}


// ---- OnWizardFinish @ 0040be86

int __thiscall CPropertyPage::OnWizardFinish(CPropertyPage *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040be86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnWizardFinish(this);
  return iVar1;
}


// ---- OnQueryCancel @ 0040be8c

int __thiscall CPropertyPage::OnQueryCancel(CPropertyPage *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040be8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnQueryCancel(this);
  return iVar1;
}


// ---- OnKillActive @ 0040be92

int __thiscall CPropertyPage::OnKillActive(CPropertyPage *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040be92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnKillActive(this);
  return iVar1;
}


// ---- OnReset @ 0040be98

void __thiscall CPropertyPage::OnReset(CPropertyPage *this)

{
                    /* WARNING: Could not recover jumptable at 0x0040be98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnReset(this);
  return;
}


// ---- OnApply @ 0040be9e

int __thiscall CPropertyPage::OnApply(CPropertyPage *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040be9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnApply(this);
  return iVar1;
}


// ---- PreInitDialog @ 0040bea4

void __thiscall CDialog::PreInitDialog(CDialog *this)

{
                    /* WARNING: Could not recover jumptable at 0x0040bea4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PreInitDialog(this);
  return;
}


// ---- OnOK @ 0040beaa

void __thiscall CPropertyPage::OnOK(CPropertyPage *this)

{
                    /* WARNING: Could not recover jumptable at 0x0040beaa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnOK(this);
  return;
}


// ---- OnSetFont @ 0040beb0

void __thiscall CDialog::OnSetFont(CDialog *this,CFont *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0040beb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnSetFont(this,param_1);
  return;
}


// ---- OnInitDialog @ 0040beb6

int __thiscall CDialog::OnInitDialog(CDialog *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040beb6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnInitDialog(this);
  return iVar1;
}


// ---- DoModal @ 0040bebc

int __thiscall CDialog::DoModal(CDialog *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040bebc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = DoModal(this);
  return iVar1;
}


// ---- SetOccDialogInfo @ 0040bec2

int __thiscall CDialog::SetOccDialogInfo(CDialog *this,_AFX_OCC_DIALOG_INFO *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040bec2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetOccDialogInfo(this,param_1);
  return iVar1;
}


// ---- CheckAutoCenter @ 0040bec8

int __thiscall CDialog::CheckAutoCenter(CDialog *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040bec8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CheckAutoCenter(this);
  return iVar1;
}


// ---- PreTranslateMessage @ 0040bece

int __thiscall CPropertyPage::PreTranslateMessage(CPropertyPage *this,tagMSG *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040bece. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = PreTranslateMessage(this,param_1);
  return iVar1;
}


// ---- OnNotify @ 0040bed4

int __thiscall CPropertyPage::OnNotify(CPropertyPage *this,uint param_1,long param_2,long *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040bed4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnNotify(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- Create @ 0040beda

int __thiscall
CWnd::Create(CWnd *this,char *param_1,char *param_2,ulong param_3,tagRECT *param_4,CWnd *param_5,
            uint param_6,CCreateContext *param_7)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040beda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Create(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return iVar1;
}


// ---- OnCmdMsg @ 0040bee0

int __thiscall
CDialog::OnCmdMsg(CDialog *this,uint param_1,int param_2,void *param_3,AFX_CMDHANDLERINFO *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040bee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCmdMsg(this,param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- SetOccDialogInfo @ 0040bee6

int __thiscall CWnd::SetOccDialogInfo(CWnd *this,_AFX_OCC_DIALOG_INFO *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040bee6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetOccDialogInfo(this,param_1);
  return iVar1;
}


// ---- IsFrameWnd @ 0040beec

int __thiscall CWnd::IsFrameWnd(CWnd *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040beec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = IsFrameWnd(this);
  return iVar1;
}


// ---- CheckAutoCenter @ 0040bef2

int __thiscall CWnd::CheckAutoCenter(CWnd *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040bef2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CheckAutoCenter(this);
  return iVar1;
}


// ---- OnChildNotify @ 0040bef8

int __thiscall CWnd::OnChildNotify(CWnd *this,uint param_1,uint param_2,long param_3,long *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040bef8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnChildNotify(this,param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- PostNcDestroy @ 0040befe

void __thiscall CWnd::PostNcDestroy(CWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x0040befe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PostNcDestroy(this);
  return;
}


// ---- DefWindowProcA @ 0040bf04

long __thiscall CWnd::DefWindowProcA(CWnd *this,uint param_1,uint param_2,long param_3)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040bf04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = DefWindowProcA(this,param_1,param_2,param_3);
  return lVar1;
}


// ---- OnWndMsg @ 0040bf0a

int __thiscall CWnd::OnWndMsg(CWnd *this,uint param_1,uint param_2,long param_3,long *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040bf0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnWndMsg(this,param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- WindowProc @ 0040bf10

long __thiscall CWnd::WindowProc(CWnd *this,uint param_1,uint param_2,long param_3)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040bf10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = WindowProc(this,param_1,param_2,param_3);
  return lVar1;
}


// ---- OnAmbientProperty @ 0040bf16

int __thiscall
CWnd::OnAmbientProperty(CWnd *this,COleControlSite *param_1,long param_2,tagVARIANT *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040bf16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnAmbientProperty(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- PreTranslateMessage @ 0040bf1c

int __thiscall CWnd::PreTranslateMessage(CWnd *this,tagMSG *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040bf1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = PreTranslateMessage(this,param_1);
  return iVar1;
}


// ---- GetSuperWndProcAddr @ 0040bf22

_func_long_HWND___ptr_uint_uint_long ** __thiscall CWnd::GetSuperWndProcAddr(CWnd *this)

{
  _func_long_HWND___ptr_uint_uint_long **pp_Var1;
  
                    /* WARNING: Could not recover jumptable at 0x0040bf22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pp_Var1 = GetSuperWndProcAddr(this);
  return pp_Var1;
}


// ---- OnNotify @ 0040bf28

int __thiscall CWnd::OnNotify(CWnd *this,uint param_1,long param_2,long *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040bf28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnNotify(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- OnCommand @ 0040bf2e

int __thiscall CWnd::OnCommand(CWnd *this,uint param_1,long param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040bf2e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCommand(this,param_1,param_2);
  return iVar1;
}


// ---- EndModalLoop @ 0040bf34

void __thiscall CWnd::EndModalLoop(CWnd *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0040bf34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EndModalLoop(this,param_1);
  return;
}


// ---- ContinueModal @ 0040bf3a

int __thiscall CWnd::ContinueModal(CWnd *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040bf3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ContinueModal(this);
  return iVar1;
}


// ---- WinHelpA @ 0040bf40

void __thiscall CWnd::WinHelpA(CWnd *this,ulong param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0040bf40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WinHelpA(this,param_1,param_2);
  return;
}


// ---- GetScrollBarCtrl @ 0040bf46

CScrollBar * __thiscall CWnd::GetScrollBarCtrl(CWnd *this,int param_1)

{
  CScrollBar *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040bf46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetScrollBarCtrl(this,param_1);
  return pCVar1;
}


// ---- OnToolHitTest @ 0040bf4c

int __thiscall CWnd::OnToolHitTest(void)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040bf4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnToolHitTest();
  return iVar1;
}


// ---- CalcWindowRect @ 0040bf52

void __thiscall CWnd::CalcWindowRect(CWnd *this,tagRECT *param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0040bf52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CalcWindowRect(this,param_1,param_2);
  return;
}


// ---- PreCreateWindow @ 0040bf58

int __thiscall CWnd::PreCreateWindow(CWnd *this,tagCREATESTRUCTA *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040bf58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = PreCreateWindow(this,param_1);
  return iVar1;
}


// ---- DestroyWindow @ 0040bf5e

int __thiscall CWnd::DestroyWindow(CWnd *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040bf5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = DestroyWindow(this);
  return iVar1;
}


// ---- PreSubclassWindow @ 0040bf64

void __thiscall CWnd::PreSubclassWindow(CWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x0040bf64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PreSubclassWindow(this);
  return;
}


// ---- GetConnectionHook @ 0040bf6a

IConnectionPoint * __thiscall CCmdTarget::GetConnectionHook(CCmdTarget *this,_GUID *param_1)

{
  IConnectionPoint *pIVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040bf6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = GetConnectionHook(this,param_1);
  return pIVar1;
}


// ---- GetExtraConnectionPoints @ 0040bf70

int __thiscall CCmdTarget::GetExtraConnectionPoints(CCmdTarget *this,CPtrArray *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040bf70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetExtraConnectionPoints(this,param_1);
  return iVar1;
}


// ---- GetInterfaceHook @ 0040bf76

IUnknown * __thiscall CCmdTarget::GetInterfaceHook(CCmdTarget *this,void *param_1)

{
  IUnknown *pIVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040bf76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = GetInterfaceHook(this,param_1);
  return pIVar1;
}


// ---- OnCreateAggregates @ 0040bf7c

int __thiscall CCmdTarget::OnCreateAggregates(CCmdTarget *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040bf7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCreateAggregates(this);
  return iVar1;
}


// ---- GetEventSinkMap @ 0040bf82

AFX_EVENTSINKMAP * __thiscall CCmdTarget::GetEventSinkMap(CCmdTarget *this)

{
  AFX_EVENTSINKMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040bf82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetEventSinkMap(this);
  return pAVar1;
}


// ---- GetInterfaceMap @ 0040bf88

AFX_INTERFACEMAP * __thiscall CCmdTarget::GetInterfaceMap(CCmdTarget *this)

{
  AFX_INTERFACEMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040bf88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetInterfaceMap(this);
  return pAVar1;
}


// ---- GetConnectionMap @ 0040bf8e

AFX_CONNECTIONMAP * __thiscall CCmdTarget::GetConnectionMap(CCmdTarget *this)

{
  AFX_CONNECTIONMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040bf8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetConnectionMap(this);
  return pAVar1;
}


// ---- GetDispatchMap @ 0040bf94

AFX_DISPMAP * __thiscall CCmdTarget::GetDispatchMap(CCmdTarget *this)

{
  AFX_DISPMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040bf94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetDispatchMap(this);
  return pAVar1;
}


// ---- GetCommandMap @ 0040bf9a

AFX_OLECMDMAP * __thiscall CCmdTarget::GetCommandMap(CCmdTarget *this)

{
  AFX_OLECMDMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040bf9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetCommandMap(this);
  return pAVar1;
}


// ---- GetMessageMap @ 0040bfa0

AFX_MSGMAP * __thiscall CWnd::GetMessageMap(CWnd *this)

{
  AFX_MSGMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040bfa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetMessageMap(this);
  return pAVar1;
}


// ---- GetTypeLib @ 0040bfa6

long __thiscall CCmdTarget::GetTypeLib(CCmdTarget *this,ulong param_1,ITypeLib **param_2)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040bfa6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = GetTypeLib(this,param_1,param_2);
  return lVar1;
}


// ---- GetTypeLibCache @ 0040bfac

CTypeLibCache * __thiscall CCmdTarget::GetTypeLibCache(CCmdTarget *this)

{
  CTypeLibCache *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040bfac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetTypeLibCache(this);
  return pCVar1;
}


// ---- GetTypeInfoCount @ 0040bfb2

uint __thiscall CCmdTarget::GetTypeInfoCount(CCmdTarget *this)

{
  uint uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040bfb2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = GetTypeInfoCount(this);
  return uVar1;
}


// ---- GetDispatchIID @ 0040bfb8

int __thiscall CCmdTarget::GetDispatchIID(CCmdTarget *this,_GUID *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040bfb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetDispatchIID(this,param_1);
  return iVar1;
}


// ---- IsInvokeAllowed @ 0040bfbe

int __thiscall CCmdTarget::IsInvokeAllowed(CCmdTarget *this,long param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040bfbe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = IsInvokeAllowed(this,param_1);
  return iVar1;
}


// ---- OnFinalRelease @ 0040bfc4

void __thiscall CWnd::OnFinalRelease(CWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x0040bfc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnFinalRelease(this);
  return;
}


// ---- OnCmdMsg @ 0040bfca

int __thiscall
CCmdTarget::OnCmdMsg
          (CCmdTarget *this,uint param_1,int param_2,void *param_3,AFX_CMDHANDLERINFO *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040bfca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCmdMsg(this,param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- CWnd @ 0040bfd0

void __thiscall CWnd::CWnd(CWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x0040bfd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CWnd(this);
  return;
}


// ---- CreateControl @ 0040bfd6

int __thiscall
CWnd::CreateControl(CWnd *this,_GUID *param_1,char *param_2,ulong param_3,tagRECT *param_4,
                   CWnd *param_5,uint param_6,CFile *param_7,int param_8,ushort *param_9)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040bfd6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CreateControl(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9
                       );
  return iVar1;
}


// ---- operator_delete @ 0040bfdc

void __cdecl operator_delete(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0040bfdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  operator_delete(param_1);
  return;
}


// ---- ~CWnd @ 0040bfe2

void __thiscall CWnd::~CWnd(CWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x0040bfe2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CWnd(this);
  return;
}


// ---- DDX_Control @ 0040bfe8

void DDX_Control(CDataExchange *param_1,int param_2,CWnd *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0040bfe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DDX_Control(param_1,param_2,param_3);
  return;
}


// ---- EndWaitCursor @ 0040bfee

void __thiscall CCmdTarget::EndWaitCursor(CCmdTarget *this)

{
                    /* WARNING: Could not recover jumptable at 0x0040bfee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EndWaitCursor(this);
  return;
}


// ---- BeginWaitCursor @ 0040bff4

void __thiscall CCmdTarget::BeginWaitCursor(CCmdTarget *this)

{
                    /* WARNING: Could not recover jumptable at 0x0040bff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BeginWaitCursor(this);
  return;
}


// ---- AfxGetModuleState @ 0040bffa

AFX_MODULE_STATE * AfxGetModuleState(void)

{
  AFX_MODULE_STATE *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040bffa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = AfxGetModuleState();
  return pAVar1;
}


// ---- OnCancel @ 0040c000

void __thiscall CPropertyPage::OnCancel(CPropertyPage *this)

{
                    /* WARNING: Could not recover jumptable at 0x0040c000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnCancel(this);
  return;
}


// ---- CString @ 0040c006

void __thiscall CString::CString(CString *this,char *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0040c006. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CString(this,param_1);
  return;
}


// ---- ~CString @ 0040c00c

void __thiscall CString::~CString(CString *this)

{
                    /* WARNING: Could not recover jumptable at 0x0040c00c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CString(this);
  return;
}


// ---- SetWindowTextA @ 0040c012

void __thiscall CWnd::SetWindowTextA(CWnd *this,char *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0040c012. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetWindowTextA(this,param_1);
  return;
}


// ---- GetDlgItem @ 0040c018

CWnd * __thiscall CWnd::GetDlgItem(CWnd *this,int param_1)

{
  CWnd *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040c018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetDlgItem(this,param_1);
  return pCVar1;
}


// ---- MoveWindow @ 0040c01e

void __thiscall
CWnd::MoveWindow(CWnd *this,int param_1,int param_2,int param_3,int param_4,int param_5)

{
                    /* WARNING: Could not recover jumptable at 0x0040c01e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MoveWindow(this,param_1,param_2,param_3,param_4,param_5);
  return;
}


// ---- FromHandle @ 0040c024

CWnd * CWnd::FromHandle(HWND__ *param_1)

{
  CWnd *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040c024. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = FromHandle(param_1);
  return pCVar1;
}


// ---- CenterWindow @ 0040c02a

void __thiscall CWnd::CenterWindow(CWnd *this,CWnd *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0040c02a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CenterWindow(this,param_1);
  return;
}


// ---- DDX_Check @ 0040c030

void DDX_Check(CDataExchange *param_1,int param_2,int *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0040c030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DDX_Check(param_1,param_2,param_3);
  return;
}


// ---- UpdateData @ 0040c036

int __thiscall CWnd::UpdateData(CWnd *this,int param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040c036. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = UpdateData(this,param_1);
  return iVar1;
}


// ---- CWinApp @ 0040c0b4

void __thiscall CWinApp::CWinApp(CWinApp *this,char *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0040c0b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CWinApp(this,param_1);
  return;
}


// ---- ~CWinApp @ 0040c0ba

void __thiscall CWinApp::~CWinApp(CWinApp *this)

{
                    /* WARNING: Could not recover jumptable at 0x0040c0ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CWinApp(this);
  return;
}


// ---- ~CDialog @ 0040c0c0

void __thiscall CDialog::~CDialog(CDialog *this)

{
                    /* WARNING: Could not recover jumptable at 0x0040c0c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CDialog(this);
  return;
}


// ---- ~CButton @ 0040c0c6

void __thiscall CButton::~CButton(CButton *this)

{
                    /* WARNING: Could not recover jumptable at 0x0040c0c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CButton(this);
  return;
}


// ---- Enable3dControls @ 0040c0cc

int __thiscall CWinApp::Enable3dControls(CWinApp *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040c0cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Enable3dControls(this);
  return iVar1;
}


// ---- AfxEnableControlContainer @ 0040c0d2

void __cdecl AfxEnableControlContainer(COccManager *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0040c0d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AfxEnableControlContainer(param_1);
  return;
}


// ---- DrawItem @ 0040c0de

void __thiscall CButton::DrawItem(CButton *this,tagDRAWITEMSTRUCT *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0040c0de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DrawItem(this,param_1);
  return;
}


// ---- OnChildNotify @ 0040c0e4

int __thiscall
CButton::OnChildNotify(CButton *this,uint param_1,uint param_2,long param_3,long *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040c0e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnChildNotify(this,param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- GetRuntimeClass @ 0040c0ea

CRuntimeClass * __thiscall CButton::GetRuntimeClass(CButton *this)

{
  CRuntimeClass *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040c0ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetRuntimeClass(this);
  return pCVar1;
}


// ---- OnOK @ 0040c0f6

void __thiscall CDialog::OnOK(CDialog *this)

{
                    /* WARNING: Could not recover jumptable at 0x0040c0f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnOK(this);
  return;
}


// ---- AfxFindResourceHandle @ 0040c108

HINSTANCE__ * AfxFindResourceHandle(char *param_1,char *param_2)

{
  HINSTANCE__ *pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040c108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = AfxFindResourceHandle(param_1,param_2);
  return pHVar1;
}


// ---- CDialog @ 0040c10e

void __thiscall CDialog::CDialog(CDialog *this,uint param_1,CWnd *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0040c10e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CDialog(this,param_1,param_2);
  return;
}


// ---- SetWindowPos @ 0040c114

int __thiscall
CWnd::SetWindowPos(CWnd *this,CWnd *param_1,int param_2,int param_3,int param_4,int param_5,
                  uint param_6)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040c114. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetWindowPos(this,param_1,param_2,param_3,param_4,param_5,param_6);
  return iVar1;
}


// ---- SetFocus @ 0040c11a

CWnd * __thiscall CWnd::SetFocus(CWnd *this)

{
  CWnd *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040c11a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = SetFocus(this);
  return pCVar1;
}


// ---- Default @ 0040c120

long __thiscall CWnd::Default(CWnd *this)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040c120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = Default(this);
  return lVar1;
}


// ---- DoModal @ 0040c132

int __thiscall CPropertySheet::DoModal(CPropertySheet *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040c132. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = DoModal(this);
  return iVar1;
}


// ---- ~CListBox @ 0040c138

void __thiscall CListBox::~CListBox(CListBox *this)

{
                    /* WARNING: Could not recover jumptable at 0x0040c138. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CListBox(this);
  return;
}


// ---- ShowWindow @ 0040c13e

int __thiscall CWnd::ShowWindow(CWnd *this,int param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040c13e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ShowWindow(this,param_1);
  return iVar1;
}


// ---- AddPage @ 0040c144

void __thiscall CPropertySheet::AddPage(CPropertySheet *this,CPropertyPage *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0040c144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AddPage(this,param_1);
  return;
}


// ---- MessageBoxA @ 0040c14a

int __thiscall CWnd::MessageBoxA(CWnd *this,char *param_1,char *param_2,uint param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040c14a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = MessageBoxA(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- operator+ @ 0040c150

void operator+(char *param_1,CString *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0040c150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  operator+(param_1,param_2);
  return;
}


// ---- GetWindowTextA @ 0040c156

void __thiscall CWnd::GetWindowTextA(CWnd *this,CString *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0040c156. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetWindowTextA(this,param_1);
  return;
}


// ---- CString @ 0040c15c

void __thiscall CString::CString(CString *this)

{
                    /* WARNING: Could not recover jumptable at 0x0040c15c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CString(this);
  return;
}


// ---- SetTitle @ 0040c162

void __thiscall CPropertySheet::SetTitle(CPropertySheet *this,char *param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0040c162. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetTitle(this,param_1,param_2);
  return;
}


// ---- GetActivePage @ 0040c168

CPropertyPage * __thiscall CPropertySheet::GetActivePage(CPropertySheet *this)

{
  CPropertyPage *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040c168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetActivePage(this);
  return pCVar1;
}


// ---- SetProperty @ 0040c174

void __thiscall CWnd::SetProperty(CWnd *this,long param_1,ushort param_2,...)

{
                    /* WARNING: Could not recover jumptable at 0x0040c174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetProperty(this,param_1,param_2);
  return;
}


// ---- InvokeHelper @ 0040c17a

void __thiscall
CWnd::InvokeHelper(CWnd *this,long param_1,ushort param_2,ushort param_3,void *param_4,
                  uchar *param_5,...)

{
                    /* WARNING: Could not recover jumptable at 0x0040c17a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InvokeHelper(this,param_1,param_2,param_3,param_4,param_5);
  return;
}


// ---- EnableWindow @ 0040c180

int __thiscall CWnd::EnableWindow(CWnd *this,int param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040c180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = EnableWindow(this,param_1);
  return iVar1;
}


// ---- SetActivePage @ 0040c186

int __thiscall CPropertySheet::SetActivePage(CPropertySheet *this,int param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040c186. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetActivePage(this,param_1);
  return iVar1;
}


// ---- operator= @ 0040c18c

CString * __thiscall CString::operator=(CString *this,char *param_1)

{
  CString *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040c18c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = operator=(this,param_1);
  return pCVar1;
}


// ---- DDX_Text @ 0040c192

void DDX_Text(CDataExchange *param_1,int param_2,CString *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0040c192. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DDX_Text(param_1,param_2,param_3);
  return;
}


// ---- CPropertyPage @ 0040c198

void __thiscall CPropertyPage::CPropertyPage(CPropertyPage *this)

{
                    /* WARNING: Could not recover jumptable at 0x0040c198. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CPropertyPage(this);
  return;
}


// ---- CPropertyPage @ 0040c19e

void __thiscall CPropertyPage::CPropertyPage(CPropertyPage *this,uint param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0040c19e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CPropertyPage(this,param_1,param_2);
  return;
}


// ---- ~CPropertyPage @ 0040c1a4

void __thiscall CPropertyPage::~CPropertyPage(CPropertyPage *this)

{
                    /* WARNING: Could not recover jumptable at 0x0040c1a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CPropertyPage(this);
  return;
}


// ---- OnSetActive @ 0040c1aa

int __thiscall CPropertyPage::OnSetActive(CPropertyPage *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040c1aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnSetActive(this);
  return iVar1;
}


// ---- OnWizardNext @ 0040c1b0

long __thiscall CPropertyPage::OnWizardNext(CPropertyPage *this)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040c1b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = OnWizardNext(this);
  return lVar1;
}


// ---- OnWizardBack @ 0040c1b6

long __thiscall CPropertyPage::OnWizardBack(CPropertyPage *this)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040c1b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = OnWizardBack(this);
  return lVar1;
}


// ---- BuildPropPageArray @ 0040c1bc

void __thiscall CPropertySheet::BuildPropPageArray(CPropertySheet *this)

{
                    /* WARNING: Could not recover jumptable at 0x0040c1bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BuildPropPageArray(this);
  return;
}


// ---- OnCommand @ 0040c1c2

int __thiscall CPropertySheet::OnCommand(CPropertySheet *this,uint param_1,long param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040c1c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCommand(this,param_1,param_2);
  return iVar1;
}


// ---- ContinueModal @ 0040c1c8

int __thiscall CPropertySheet::ContinueModal(CPropertySheet *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040c1c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ContinueModal(this);
  return iVar1;
}


// ---- OnCmdMsg @ 0040c1ce

int __thiscall
CPropertySheet::OnCmdMsg
          (CPropertySheet *this,uint param_1,int param_2,void *param_3,AFX_CMDHANDLERINFO *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040c1ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCmdMsg(this,param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- ~CPropertySheet @ 0040c1d4

void __thiscall CPropertySheet::~CPropertySheet(CPropertySheet *this)

{
                    /* WARNING: Could not recover jumptable at 0x0040c1d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CPropertySheet(this);
  return;
}


// ---- CPropertySheet @ 0040c1da

void __thiscall
CPropertySheet::CPropertySheet(CPropertySheet *this,char *param_1,CWnd *param_2,uint param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0040c1da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CPropertySheet(this,param_1,param_2,param_3);
  return;
}


// ---- FromHandle @ 0040c1e0

CMenu * CMenu::FromHandle(HMENU__ *param_1)

{
  CMenu *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040c1e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = FromHandle(param_1);
  return pCVar1;
}


// ---- ModifyStyleEx @ 0040c1e6

int __thiscall CWnd::ModifyStyleEx(CWnd *this,ulong param_1,ulong param_2,uint param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040c1e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ModifyStyleEx(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- ModifyStyle @ 0040c1ec

int __thiscall CWnd::ModifyStyle(CWnd *this,ulong param_1,ulong param_2,uint param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040c1ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ModifyStyle(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- ScreenToClient @ 0040c1f2

void __thiscall CWnd::ScreenToClient(CWnd *this,tagRECT *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0040c1f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ScreenToClient(this,param_1);
  return;
}


// ---- OnInitDialog @ 0040c1f8

int __thiscall CPropertySheet::OnInitDialog(CPropertySheet *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040c1f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnInitDialog(this);
  return iVar1;
}


// ---- PreTranslateMessage @ 0040c1fe

int __thiscall CPropertySheet::PreTranslateMessage(CPropertySheet *this,tagMSG *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040c1fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = PreTranslateMessage(this,param_1);
  return iVar1;
}


// ---- AfxBeginThread @ 0040c204

CWinThread *
AfxBeginThread(_func_uint_void_ptr *param_1,void *param_2,int param_3,uint param_4,ulong param_5,
              _SECURITY_ATTRIBUTES *param_6)

{
  CWinThread *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040c204. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = AfxBeginThread(param_1,param_2,param_3,param_4,param_5,param_6);
  return pCVar1;
}


// ---- RemovePage @ 0040c23a

void __thiscall CPropertySheet::RemovePage(CPropertySheet *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0040c23a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RemovePage(this,param_1);
  return;
}


// ---- GetPageCount @ 0040c240

int __thiscall CPropertySheet::GetPageCount(CPropertySheet *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040c240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetPageCount(this);
  return iVar1;
}


// ---- operator+= @ 0040c246

CString * __thiscall CString::operator+=(CString *this,char param_1)

{
  CString *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040c246. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = operator+=(this,param_1);
  return pCVar1;
}


// ---- DDV_MaxChars @ 0040c24c

void DDV_MaxChars(CDataExchange *param_1,CString *param_2,int param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0040c24c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DDV_MaxChars(param_1,param_2,param_3);
  return;
}


// ---- operator+ @ 0040c252

void operator+(CString *param_1,CString *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0040c252. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  operator+(param_1,param_2);
  return;
}


// ---- operator= @ 0040c258

CString * __thiscall CString::operator=(CString *this,CString *param_1)

{
  CString *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040c258. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = operator=(this,param_1);
  return pCVar1;
}


// ---- FUN_0040c270 @ 0040c270

void __cdecl FUN_0040c270(_onexit_t param_1)

{
  if (DAT_004161f0 == -1) {
    _onexit(param_1);
    return;
  }
  __dllonexit(param_1,&DAT_004161f0,&DAT_004161ec);
  return;
}


// ---- FUN_0040c29c @ 0040c29c

int __cdecl FUN_0040c29c(_onexit_t param_1)

{
  int iVar1;
  
  iVar1 = FUN_0040c270(param_1);
  return (iVar1 != 0) - 1;
}


// ---- FUN_0040c2ae @ 0040c2ae

void FUN_0040c2ae(undefined4 param_1,undefined4 param_2,int param_3,undefined *param_4)

{
  void *local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_004114c8;
  puStack_10 = &DAT_0040c512;
  local_14 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_14;
  while( true ) {
    param_3 = param_3 + -1;
    if (param_3 < 0) break;
    (*(code *)param_4)();
  }
  local_8 = 0xffffffff;
  FUN_0040c316();
  ExceptionList = local_14;
  return;
}


// ---- FUN_0040c316 @ 0040c316

void FUN_0040c316(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) == 0) {
    FUN_0040c32e(*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc),
                 *(int *)(unaff_EBP + 0x10),*(undefined **)(unaff_EBP + 0x14));
  }
  return;
}


// ---- FUN_0040c32e @ 0040c32e

void FUN_0040c32e(undefined4 param_1,undefined4 param_2,int param_3,undefined *param_4)

{
  void *local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_004114d8;
  puStack_10 = &DAT_0040c512;
  local_14 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_14;
  while( true ) {
    param_3 = param_3 + -1;
    if (param_3 < 0) break;
    (*(code *)param_4)();
  }
  ExceptionList = local_14;
  return;
}


// ---- FUN_0040c38c @ 0040c38c

undefined4 __cdecl FUN_0040c38c(undefined4 *param_1)

{
  if (*(int *)*param_1 != -0x1f928c9d) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  terminate();
}


// ---- ftol @ 0040c3a2

void __cdecl ftol(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040c3a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ftol();
  return;
}


// ---- entry @ 0040c3ae

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
  
  puStack_c = &DAT_004114e8;
  puStack_10 = &DAT_0040c512;
  pvStack_14 = ExceptionList;
  local_1c = &stack0xffffff78;
  local_8 = 0;
  ExceptionList = &pvStack_14;
  __set_app_type(2);
  _DAT_004161ec = 0xffffffff;
  DAT_004161f0 = 0xffffffff;
  puVar1 = (undefined4 *)__p__fmode();
  *puVar1 = DAT_004161e0;
  puVar1 = (undefined4 *)__p__commode();
  *puVar1 = DAT_004161dc;
  _DAT_004161e8 = *(undefined4 *)_adjust_fdiv_exref;
  FUN_0040c53f();
  if (DAT_00415f80 == 0) {
    __setusermatherr(&LAB_0040c53c);
  }
  FUN_0040c52a();
  initterm(&DAT_004140ac,&DAT_004140b0);
  local_70.newmode = DAT_004161d8;
  __getmainargs(&local_64,&local_74,&local_68,DAT_004161d4,&local_70);
  initterm(&DAT_00414000,&DAT_004140a8);
  pbVar4 = *(byte **)_acmdln_exref;
  if (*pbVar4 != 0x22) {
    do {
      if (*pbVar4 < 0x21) goto LAB_0040c4a1;
      pbVar4 = pbVar4 + 1;
    } while( true );
  }
  do {
    pbVar4 = pbVar4 + 1;
    if (*pbVar4 == 0) break;
  } while (*pbVar4 != 0x22);
  if (*pbVar4 != 0x22) goto LAB_0040c4a1;
  do {
    pbVar4 = pbVar4 + 1;
LAB_0040c4a1:
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
  local_6c = FUN_0040c546(pHVar3,pHVar5,(char *)pbVar4,uVar2);
                    /* WARNING: Subroutine does not return */
  exit(local_6c);
}


// ---- __dllonexit @ 0040c50c

void __dllonexit(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040c50c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __dllonexit();
  return;
}


// ---- terminate @ 0040c518

void __cdecl terminate(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040c518. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  terminate();
  return;
}


// ---- _XcptFilter @ 0040c51e

int __cdecl _XcptFilter(ulong _ExceptionNum,_EXCEPTION_POINTERS *_ExceptionPtr)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040c51e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _XcptFilter(_ExceptionNum,_ExceptionPtr);
  return iVar1;
}


// ---- initterm @ 0040c524

void __cdecl initterm(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040c524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  initterm();
  return;
}


// ---- FUN_0040c52a @ 0040c52a

void FUN_0040c52a(void)

{
  _controlfp(0x10000,0x30000);
  return;
}


// ---- FUN_0040c53f @ 0040c53f

void FUN_0040c53f(void)

{
  return;
}


// ---- _controlfp @ 0040c540

uint __cdecl _controlfp(uint _NewValue,uint _Mask)

{
  uint uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040c540. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = _controlfp(_NewValue,_Mask);
  return uVar1;
}


// ---- FUN_0040c546 @ 0040c546

void FUN_0040c546(HINSTANCE__ *param_1,HINSTANCE__ *param_2,char *param_3,int param_4)

{
  AfxWinMain(param_1,param_2,param_3,param_4);
  return;
}


// ---- FUN_0040c55e @ 0040c55e

undefined4 FUN_0040c55e(int param_1,undefined4 param_2)

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


// ---- AfxWinMain @ 0040c59e

int AfxWinMain(HINSTANCE__ *param_1,HINSTANCE__ *param_2,char *param_3,int param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040c59e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AfxWinMain(param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- Unwind@0040c5b0 @ 0040c5b0

void Unwind_0040c5b0(void)

{
  int unaff_EBP;
  
  FUN_00401500(*(void **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@0040c5d0 @ 0040c5d0

void Unwind_0040c5d0(void)

{
  int unaff_EBP;
  
  FUN_004069e0(*(CPropertyPage **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@0040c5d8 @ 0040c5d8

void Unwind_0040c5d8(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0x94));
  return;
}


// ---- Unwind@0040c5e6 @ 0040c5e6

void Unwind_0040c5e6(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0xd4));
  return;
}


// ---- Unwind@0040c5f4 @ 0040c5f4

void Unwind_0040c5f4(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0x114));
  return;
}


// ---- Unwind@0040c602 @ 0040c602

void Unwind_0040c602(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0x154));
  return;
}


// ---- Unwind@0040c610 @ 0040c610

void Unwind_0040c610(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0x194));
  return;
}


// ---- Unwind@0040c630 @ 0040c630

void Unwind_0040c630(void)

{
  int unaff_EBP;
  
  FUN_004069e0(*(CPropertyPage **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@0040c638 @ 0040c638

void Unwind_0040c638(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0x94));
  return;
}


// ---- Unwind@0040c646 @ 0040c646

void Unwind_0040c646(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0xd4));
  return;
}


// ---- Unwind@0040c654 @ 0040c654

void Unwind_0040c654(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0x114));
  return;
}


// ---- Unwind@0040c662 @ 0040c662

void Unwind_0040c662(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0x154));
  return;
}


// ---- Unwind@0040c670 @ 0040c670

void Unwind_0040c670(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0x194));
  return;
}


// ---- Unwind@0040c690 @ 0040c690

void Unwind_0040c690(void)

{
  FUN_00401540();
  return;
}


// ---- Unwind@0040c6b0 @ 0040c6b0

void Unwind_0040c6b0(void)

{
  int unaff_EBP;
  
  FUN_00401500(*(void **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@0040c6d0 @ 0040c6d0

void Unwind_0040c6d0(void)

{
  int unaff_EBP;
  
  FUN_004069e0(*(CPropertyPage **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@0040c6d8 @ 0040c6d8

void Unwind_0040c6d8(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0xa0));
  return;
}


// ---- Unwind@0040c6f0 @ 0040c6f0

void Unwind_0040c6f0(void)

{
  int unaff_EBP;
  
  FUN_004069e0(*(CPropertyPage **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@0040c6f8 @ 0040c6f8

void Unwind_0040c6f8(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0xa0));
  return;
}


// ---- Unwind@0040c710 @ 0040c710

void Unwind_0040c710(void)

{
  FUN_00401540();
  return;
}


// ---- Unwind@0040c730 @ 0040c730

void Unwind_0040c730(void)

{
  FUN_00401540();
  return;
}


// ---- Unwind@0040c750 @ 0040c750

void Unwind_0040c750(void)

{
  int unaff_EBP;
  
  FUN_00401500(*(void **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@0040c770 @ 0040c770

void Unwind_0040c770(void)

{
  int unaff_EBP;
  
  FUN_004069e0(*(CPropertyPage **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@0040c778 @ 0040c778

void Unwind_0040c778(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0x94));
  return;
}


// ---- Unwind@0040c790 @ 0040c790

void Unwind_0040c790(void)

{
  int unaff_EBP;
  
  FUN_004069e0(*(CPropertyPage **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@0040c798 @ 0040c798

void Unwind_0040c798(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0x94));
  return;
}


// ---- Unwind@0040c7b0 @ 0040c7b0

void Unwind_0040c7b0(void)

{
  FUN_00401540();
  return;
}


// ---- Unwind@0040c7d0 @ 0040c7d0

void Unwind_0040c7d0(void)

{
  FUN_00401540();
  return;
}


// ---- Unwind@0040c7f0 @ 0040c7f0

void Unwind_0040c7f0(void)

{
  int unaff_EBP;
  
  FUN_00401500(*(void **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@0040c810 @ 0040c810

void Unwind_0040c810(void)

{
  int unaff_EBP;
  
  FUN_004025b0((CDialog *)(unaff_EBP + -0x314));
  return;
}


// ---- Unwind@0040c81b @ 0040c81b

void Unwind_0040c81b(void)

{
  int unaff_EBP;
  
  CDialog::~CDialog((CDialog *)(unaff_EBP + -0x314));
  return;
}


// ---- Unwind@0040c826 @ 0040c826

void Unwind_0040c826(void)

{
  int unaff_EBP;
  
  CButton::~CButton((CButton *)(unaff_EBP + -0x110));
  return;
}


// ---- Unwind@0040c831 @ 0040c831

void Unwind_0040c831(void)

{
  int unaff_EBP;
  
  CButton::~CButton((CButton *)(unaff_EBP + -0xd0));
  return;
}


// ---- Unwind@0040c83c @ 0040c83c

void Unwind_0040c83c(void)

{
  int unaff_EBP;
  
  CButton::~CButton((CButton *)(unaff_EBP + -0x90));
  return;
}


// ---- Unwind@0040c860 @ 0040c860

void Unwind_0040c860(void)

{
  int unaff_EBP;
  
  CDialog::~CDialog(*(CDialog **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@0040c868 @ 0040c868

void Unwind_0040c868(void)

{
  int unaff_EBP;
  
  CButton::~CButton((CButton *)(*(int *)(unaff_EBP + -0x10) + 0x204));
  return;
}


// ---- Unwind@0040c876 @ 0040c876

void Unwind_0040c876(void)

{
  int unaff_EBP;
  
  CButton::~CButton((CButton *)(*(int *)(unaff_EBP + -0x10) + 0x244));
  return;
}


// ---- Unwind@0040c884 @ 0040c884

void Unwind_0040c884(void)

{
  int unaff_EBP;
  
  CButton::~CButton((CButton *)(*(int *)(unaff_EBP + -0x10) + 0x284));
  return;
}


// ---- Unwind@0040c8a0 @ 0040c8a0

void Unwind_0040c8a0(void)

{
  int unaff_EBP;
  
  CDialog::~CDialog(*(CDialog **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@0040c8a8 @ 0040c8a8

void Unwind_0040c8a8(void)

{
  int unaff_EBP;
  
  CButton::~CButton((CButton *)(*(int *)(unaff_EBP + -0x10) + 0x204));
  return;
}


// ---- Unwind@0040c8b6 @ 0040c8b6

void Unwind_0040c8b6(void)

{
  int unaff_EBP;
  
  CButton::~CButton((CButton *)(*(int *)(unaff_EBP + -0x10) + 0x244));
  return;
}


// ---- Unwind@0040c8c4 @ 0040c8c4

void Unwind_0040c8c4(void)

{
  int unaff_EBP;
  
  CButton::~CButton((CButton *)(*(int *)(unaff_EBP + -0x10) + 0x284));
  return;
}


// ---- Unwind@0040c8d2 @ 0040c8d2

void Unwind_0040c8d2(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0x2c4));
  return;
}


// ---- Unwind@0040c8f0 @ 0040c8f0

void Unwind_0040c8f0(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x144));
  return;
}


// ---- Unwind@0040c8fb @ 0040c8fb

void Unwind_0040c8fb(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x14c));
  return;
}


// ---- Unwind@0040c906 @ 0040c906

void Unwind_0040c906(void)

{
  int unaff_EBP;
  
  FUN_00406c10((CPropertySheet *)(unaff_EBP + -0x140));
  return;
}


// ---- Unwind@0040c911 @ 0040c911

void Unwind_0040c911(void)

{
  int unaff_EBP;
  
  FUN_00401500(*(void **)(unaff_EBP + -0x14c));
  return;
}


// ---- Unwind@0040c91e @ 0040c91e

void Unwind_0040c91e(void)

{
  int unaff_EBP;
  
  FUN_00401500(*(void **)(unaff_EBP + -0x14c));
  return;
}


// ---- Unwind@0040c92b @ 0040c92b

void Unwind_0040c92b(void)

{
  int unaff_EBP;
  
  FUN_00401500(*(void **)(unaff_EBP + -0x14c));
  return;
}


// ---- Unwind@0040c938 @ 0040c938

void Unwind_0040c938(void)

{
  int unaff_EBP;
  
  FUN_00401500(*(void **)(unaff_EBP + -0x14c));
  return;
}


// ---- Unwind@0040c945 @ 0040c945

void Unwind_0040c945(void)

{
  int unaff_EBP;
  
  FUN_00401500(*(void **)(unaff_EBP + -0x14c));
  return;
}


// ---- Unwind@0040c952 @ 0040c952

void Unwind_0040c952(void)

{
  int unaff_EBP;
  
  FUN_00401500(*(void **)(unaff_EBP + -0x14c));
  return;
}


// ---- Unwind@0040c95f @ 0040c95f

void Unwind_0040c95f(void)

{
  int unaff_EBP;
  
  FUN_00401500(*(void **)(unaff_EBP + -0x14c));
  return;
}


// ---- Unwind@0040c96c @ 0040c96c

void Unwind_0040c96c(void)

{
  int unaff_EBP;
  
  FUN_00401500(*(void **)(unaff_EBP + -0x14c));
  return;
}


// ---- Unwind@0040c979 @ 0040c979

void Unwind_0040c979(void)

{
  int unaff_EBP;
  
  FUN_00401500(*(void **)(unaff_EBP + -0x14c));
  return;
}


// ---- Unwind@0040c986 @ 0040c986

void Unwind_0040c986(void)

{
  int unaff_EBP;
  
  FUN_00401500(*(void **)(unaff_EBP + -0x14c));
  return;
}


// ---- Unwind@0040c993 @ 0040c993

void Unwind_0040c993(void)

{
  int unaff_EBP;
  
  FUN_00401500(*(void **)(unaff_EBP + -0x14c));
  return;
}


// ---- Unwind@0040c9a0 @ 0040c9a0

void Unwind_0040c9a0(void)

{
  int unaff_EBP;
  
  FUN_00401500(*(void **)(unaff_EBP + -0x14c));
  return;
}


// ---- Unwind@0040c9ad @ 0040c9ad

void Unwind_0040c9ad(void)

{
  int unaff_EBP;
  
  FUN_00401500(*(void **)(unaff_EBP + -0x14c));
  return;
}


// ---- Unwind@0040c9ba @ 0040c9ba

void Unwind_0040c9ba(void)

{
  int unaff_EBP;
  
  FUN_00401500(*(void **)(unaff_EBP + -0x14c));
  return;
}


// ---- Unwind@0040c9c7 @ 0040c9c7

void Unwind_0040c9c7(void)

{
  int unaff_EBP;
  
  FUN_00401500(*(void **)(unaff_EBP + -0x14c));
  return;
}


// ---- Unwind@0040c9d4 @ 0040c9d4

void Unwind_0040c9d4(void)

{
  int unaff_EBP;
  
  FUN_00401500(*(void **)(unaff_EBP + -0x14c));
  return;
}


// ---- Unwind@0040c9e1 @ 0040c9e1

void Unwind_0040c9e1(void)

{
  int unaff_EBP;
  
  FUN_00401500(*(void **)(unaff_EBP + -0x14c));
  return;
}


// ---- Unwind@0040c9ee @ 0040c9ee

void Unwind_0040c9ee(void)

{
  int unaff_EBP;
  
  FUN_00401500(*(void **)(unaff_EBP + -0x14c));
  return;
}


// ---- Unwind@0040c9fb @ 0040c9fb

void Unwind_0040c9fb(void)

{
  int unaff_EBP;
  
  FUN_00401500(*(void **)(unaff_EBP + -0x14c));
  return;
}


// ---- Unwind@0040ca08 @ 0040ca08

void Unwind_0040ca08(void)

{
  int unaff_EBP;
  
  FUN_00401500(*(void **)(unaff_EBP + -0x14c));
  return;
}


// ---- Unwind@0040ca15 @ 0040ca15

void Unwind_0040ca15(void)

{
  int unaff_EBP;
  
  FUN_00401500(*(void **)(unaff_EBP + -0x14c));
  return;
}


// ---- Unwind@0040ca22 @ 0040ca22

void Unwind_0040ca22(void)

{
  int unaff_EBP;
  
  FUN_00401500(*(void **)(unaff_EBP + -0x14c));
  return;
}


// ---- Unwind@0040ca2f @ 0040ca2f

void Unwind_0040ca2f(void)

{
  int unaff_EBP;
  
  FUN_00401500(*(void **)(unaff_EBP + -0x14c));
  return;
}


// ---- Unwind@0040ca3c @ 0040ca3c

void Unwind_0040ca3c(void)

{
  int unaff_EBP;
  
  FUN_00401500(*(void **)(unaff_EBP + -0x14c));
  return;
}


// ---- Unwind@0040ca49 @ 0040ca49

void Unwind_0040ca49(void)

{
  int unaff_EBP;
  
  FUN_00401500(*(void **)(unaff_EBP + -0x14c));
  return;
}


// ---- Unwind@0040ca56 @ 0040ca56

void Unwind_0040ca56(void)

{
  int unaff_EBP;
  
  FUN_00401500(*(void **)(unaff_EBP + -0x14c));
  return;
}


// ---- Unwind@0040ca63 @ 0040ca63

void Unwind_0040ca63(void)

{
  int unaff_EBP;
  
  FUN_00401500(*(void **)(unaff_EBP + -0x14c));
  return;
}


// ---- Unwind@0040ca70 @ 0040ca70

void Unwind_0040ca70(void)

{
  int unaff_EBP;
  
  FUN_00401500(*(void **)(unaff_EBP + -0x14c));
  return;
}


// ---- Unwind@0040ca7d @ 0040ca7d

void Unwind_0040ca7d(void)

{
  int unaff_EBP;
  
  FUN_00401500(*(void **)(unaff_EBP + -0x14c));
  return;
}


// ---- Unwind@0040ca8a @ 0040ca8a

void Unwind_0040ca8a(void)

{
  int unaff_EBP;
  
  FUN_00401500(*(void **)(unaff_EBP + -0x14c));
  return;
}


// ---- Unwind@0040ca97 @ 0040ca97

void Unwind_0040ca97(void)

{
  int unaff_EBP;
  
  FUN_00401500(*(void **)(unaff_EBP + -0x14c));
  return;
}


// ---- Unwind@0040caa4 @ 0040caa4

void Unwind_0040caa4(void)

{
  int unaff_EBP;
  
  FUN_00403f20((CDialog *)(unaff_EBP + -0xb0));
  return;
}


// ---- Unwind@0040caaf @ 0040caaf

void Unwind_0040caaf(void)

{
  int unaff_EBP;
  
  CDialog::~CDialog((CDialog *)(unaff_EBP + -0xb0));
  return;
}


// ---- Unwind@0040cad0 @ 0040cad0

void Unwind_0040cad0(void)

{
  int unaff_EBP;
  
  CDialog::~CDialog(*(CDialog **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@0040caf0 @ 0040caf0

void Unwind_0040caf0(void)

{
  FUN_00401540();
  return;
}


// ---- Unwind@0040caf8 @ 0040caf8

void Unwind_0040caf8(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x24));
  return;
}


// ---- Unwind@0040cb10 @ 0040cb10

void Unwind_0040cb10(void)

{
  int unaff_EBP;
  
  FUN_00401500(*(void **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@0040cb30 @ 0040cb30

void Unwind_0040cb30(void)

{
  int unaff_EBP;
  
  FUN_00401500(*(void **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@0040cb50 @ 0040cb50

void Unwind_0040cb50(void)

{
  int unaff_EBP;
  
  FUN_00401500(*(void **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@0040cb70 @ 0040cb70

void Unwind_0040cb70(void)

{
  int unaff_EBP;
  
  FUN_00401500(*(void **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@0040cb90 @ 0040cb90

void Unwind_0040cb90(void)

{
  int unaff_EBP;
  
  FUN_00401500(*(void **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@0040cbb0 @ 0040cbb0

void Unwind_0040cbb0(void)

{
  int unaff_EBP;
  
  FUN_00401500(*(void **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@0040cbd0 @ 0040cbd0

void Unwind_0040cbd0(void)

{
  int unaff_EBP;
  
  FUN_004069e0(*(CPropertyPage **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@0040cbf0 @ 0040cbf0

void Unwind_0040cbf0(void)

{
  int unaff_EBP;
  
  FUN_004069e0(*(CPropertyPage **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@0040cc10 @ 0040cc10

void Unwind_0040cc10(void)

{
  FUN_00401540();
  return;
}


// ---- Unwind@0040cc30 @ 0040cc30

void Unwind_0040cc30(void)

{
  FUN_00401540();
  return;
}


// ---- Unwind@0040cc50 @ 0040cc50

void Unwind_0040cc50(void)

{
  int unaff_EBP;
  
  FUN_00401500(*(void **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@0040cc70 @ 0040cc70

void Unwind_0040cc70(void)

{
  int unaff_EBP;
  
  FUN_004069e0(*(CPropertyPage **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@0040cc78 @ 0040cc78

void Unwind_0040cc78(void)

{
  int unaff_EBP;
  
  CButton::~CButton((CButton *)(*(int *)(unaff_EBP + -0x10) + 0x98));
  return;
}


// ---- Unwind@0040cc86 @ 0040cc86

void Unwind_0040cc86(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0xd8));
  return;
}


// ---- Unwind@0040cc94 @ 0040cc94

void Unwind_0040cc94(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0x118));
  return;
}


// ---- Unwind@0040ccb0 @ 0040ccb0

void Unwind_0040ccb0(void)

{
  int unaff_EBP;
  
  FUN_004069e0(*(CPropertyPage **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@0040ccb8 @ 0040ccb8

void Unwind_0040ccb8(void)

{
  int unaff_EBP;
  
  CButton::~CButton((CButton *)(*(int *)(unaff_EBP + -0x10) + 0x98));
  return;
}


// ---- Unwind@0040ccc6 @ 0040ccc6

void Unwind_0040ccc6(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0xd8));
  return;
}


// ---- Unwind@0040ccd4 @ 0040ccd4

void Unwind_0040ccd4(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0x118));
  return;
}


// ---- Unwind@0040ccf0 @ 0040ccf0

void Unwind_0040ccf0(void)

{
  FUN_00401540();
  return;
}


// ---- Unwind@0040cd10 @ 0040cd10

void Unwind_0040cd10(void)

{
  FUN_00401540();
  return;
}


// ---- Unwind@0040cd30 @ 0040cd30

void Unwind_0040cd30(void)

{
  int unaff_EBP;
  
  FUN_00401500(*(void **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@0040cd50 @ 0040cd50

void Unwind_0040cd50(void)

{
  int unaff_EBP;
  
  FUN_004069e0(*(CPropertyPage **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@0040cd58 @ 0040cd58

void Unwind_0040cd58(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0x98));
  return;
}


// ---- Unwind@0040cd66 @ 0040cd66

void Unwind_0040cd66(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0xd8));
  return;
}


// ---- Unwind@0040cd80 @ 0040cd80

void Unwind_0040cd80(void)

{
  int unaff_EBP;
  
  FUN_004069e0(*(CPropertyPage **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@0040cd88 @ 0040cd88

void Unwind_0040cd88(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0x98));
  return;
}


// ---- Unwind@0040cd96 @ 0040cd96

void Unwind_0040cd96(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0xd8));
  return;
}


// ---- Unwind@0040cdb0 @ 0040cdb0

void Unwind_0040cdb0(void)

{
  FUN_00401540();
  return;
}


// ---- Unwind@0040cdd0 @ 0040cdd0

void Unwind_0040cdd0(void)

{
  FUN_00401540();
  return;
}


// ---- Unwind@0040cdf0 @ 0040cdf0

void Unwind_0040cdf0(void)

{
  int unaff_EBP;
  
  FUN_00401500(*(void **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@0040ce10 @ 0040ce10

void Unwind_0040ce10(void)

{
  int unaff_EBP;
  
  FUN_004069e0(*(CPropertyPage **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@0040ce18 @ 0040ce18

void Unwind_0040ce18(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0x94));
  return;
}


// ---- Unwind@0040ce26 @ 0040ce26

void Unwind_0040ce26(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0xd4));
  return;
}


// ---- Unwind@0040ce34 @ 0040ce34

void Unwind_0040ce34(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0x114));
  return;
}


// ---- Unwind@0040ce42 @ 0040ce42

void Unwind_0040ce42(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0x154));
  return;
}


// ---- Unwind@0040ce60 @ 0040ce60

void Unwind_0040ce60(void)

{
  int unaff_EBP;
  
  FUN_004069e0(*(CPropertyPage **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@0040ce68 @ 0040ce68

void Unwind_0040ce68(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0x94));
  return;
}


// ---- Unwind@0040ce76 @ 0040ce76

void Unwind_0040ce76(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0xd4));
  return;
}


// ---- Unwind@0040ce84 @ 0040ce84

void Unwind_0040ce84(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0x114));
  return;
}


// ---- Unwind@0040ce92 @ 0040ce92

void Unwind_0040ce92(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0x154));
  return;
}


// ---- Unwind@0040ceb0 @ 0040ceb0

void Unwind_0040ceb0(void)

{
  FUN_00401540();
  return;
}


// ---- Unwind@0040ced0 @ 0040ced0

void Unwind_0040ced0(void)

{
  FUN_00401540();
  return;
}


// ---- Unwind@0040cef0 @ 0040cef0

void Unwind_0040cef0(void)

{
  int unaff_EBP;
  
  FUN_00401500(*(void **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@0040cf10 @ 0040cf10

void Unwind_0040cf10(void)

{
  int unaff_EBP;
  
  FUN_004069e0(*(CPropertyPage **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@0040cf18 @ 0040cf18

void Unwind_0040cf18(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0x94));
  return;
}


// ---- Unwind@0040cf26 @ 0040cf26

void Unwind_0040cf26(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0xd4));
  return;
}


// ---- Unwind@0040cf40 @ 0040cf40

void Unwind_0040cf40(void)

{
  int unaff_EBP;
  
  FUN_004069e0(*(CPropertyPage **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@0040cf48 @ 0040cf48

void Unwind_0040cf48(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0x94));
  return;
}


// ---- Unwind@0040cf56 @ 0040cf56

void Unwind_0040cf56(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0xd4));
  return;
}


// ---- Unwind@0040cf70 @ 0040cf70

void Unwind_0040cf70(void)

{
  FUN_00401540();
  return;
}


// ---- Unwind@0040cf90 @ 0040cf90

void Unwind_0040cf90(void)

{
  FUN_00401540();
  return;
}


// ---- Unwind@0040cfb0 @ 0040cfb0

void Unwind_0040cfb0(void)

{
  int unaff_EBP;
  
  FUN_00401500(*(void **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@0040cfd0 @ 0040cfd0

void Unwind_0040cfd0(void)

{
  int unaff_EBP;
  
  FUN_00401500(*(void **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@0040cff0 @ 0040cff0

void Unwind_0040cff0(void)

{
  int unaff_EBP;
  
  FUN_004069e0(*(CPropertyPage **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@0040cff8 @ 0040cff8

void Unwind_0040cff8(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x10) + 0x94));
  return;
}


// ---- Unwind@0040d006 @ 0040d006

void Unwind_0040d006(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0x98));
  return;
}


// ---- Unwind@0040d020 @ 0040d020

void Unwind_0040d020(void)

{
  int unaff_EBP;
  
  FUN_004069e0(*(CPropertyPage **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@0040d028 @ 0040d028

void Unwind_0040d028(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x10) + 0x94));
  return;
}


// ---- Unwind@0040d040 @ 0040d040

void Unwind_0040d040(void)

{
  int unaff_EBP;
  
  FUN_00401500(*(void **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@0040d060 @ 0040d060

void Unwind_0040d060(void)

{
  int unaff_EBP;
  
  CPropertySheet::~CPropertySheet(*(CPropertySheet **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@0040d080 @ 0040d080

void Unwind_0040d080(void)

{
  int unaff_EBP;
  
  FUN_00401500(*(void **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@0040d0a0 @ 0040d0a0

void Unwind_0040d0a0(void)

{
  int unaff_EBP;
  
  FUN_00401500(*(void **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@0040d0c0 @ 0040d0c0

void Unwind_0040d0c0(void)

{
  int unaff_EBP;
  
  FUN_004069e0(*(CPropertyPage **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@0040d0c8 @ 0040d0c8

void Unwind_0040d0c8(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0x94));
  return;
}


// ---- Unwind@0040d0d6 @ 0040d0d6

void Unwind_0040d0d6(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0xd4));
  return;
}


// ---- Unwind@0040d0f0 @ 0040d0f0

void Unwind_0040d0f0(void)

{
  int unaff_EBP;
  
  FUN_004069e0(*(CPropertyPage **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@0040d0f8 @ 0040d0f8

void Unwind_0040d0f8(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0x94));
  return;
}


// ---- Unwind@0040d106 @ 0040d106

void Unwind_0040d106(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0xd4));
  return;
}


// ---- Unwind@0040d120 @ 0040d120

void Unwind_0040d120(void)

{
  FUN_00401540();
  return;
}


// ---- Unwind@0040d140 @ 0040d140

void Unwind_0040d140(void)

{
  FUN_00401540();
  return;
}


// ---- Unwind@0040d160 @ 0040d160

void Unwind_0040d160(void)

{
  int unaff_EBP;
  
  FUN_00401500(*(void **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@0040d180 @ 0040d180

void Unwind_0040d180(void)

{
  int unaff_EBP;
  
  FUN_004069e0(*(CPropertyPage **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@0040d188 @ 0040d188

void Unwind_0040d188(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0x94));
  return;
}


// ---- Unwind@0040d1a0 @ 0040d1a0

void Unwind_0040d1a0(void)

{
  int unaff_EBP;
  
  FUN_004069e0(*(CPropertyPage **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@0040d1a8 @ 0040d1a8

void Unwind_0040d1a8(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0x94));
  return;
}


// ---- Unwind@0040d1c0 @ 0040d1c0

void Unwind_0040d1c0(void)

{
  int unaff_EBP;
  
  FUN_00401500(*(void **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@0040d1e0 @ 0040d1e0

void Unwind_0040d1e0(void)

{
  int unaff_EBP;
  
  FUN_004069e0(*(CPropertyPage **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@0040d1e8 @ 0040d1e8

void Unwind_0040d1e8(void)

{
  int unaff_EBP;
  
  CButton::~CButton((CButton *)(*(int *)(unaff_EBP + -0x10) + 0x94));
  return;
}


// ---- Unwind@0040d1f6 @ 0040d1f6

void Unwind_0040d1f6(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0xd4));
  return;
}


// ---- Unwind@0040d204 @ 0040d204

void Unwind_0040d204(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0x114));
  return;
}


// ---- Unwind@0040d220 @ 0040d220

void Unwind_0040d220(void)

{
  int unaff_EBP;
  
  FUN_004069e0(*(CPropertyPage **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@0040d228 @ 0040d228

void Unwind_0040d228(void)

{
  int unaff_EBP;
  
  CButton::~CButton((CButton *)(*(int *)(unaff_EBP + -0x10) + 0x94));
  return;
}


// ---- Unwind@0040d236 @ 0040d236

void Unwind_0040d236(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0xd4));
  return;
}


// ---- Unwind@0040d244 @ 0040d244

void Unwind_0040d244(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0x114));
  return;
}


// ---- Unwind@0040d260 @ 0040d260

void Unwind_0040d260(void)

{
  int unaff_EBP;
  
  FUN_00401500(*(void **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@0040d280 @ 0040d280

void Unwind_0040d280(void)

{
  int unaff_EBP;
  
  FUN_00401500(*(void **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@0040d2a0 @ 0040d2a0

void Unwind_0040d2a0(void)

{
  int unaff_EBP;
  
  FUN_004069e0(*(CPropertyPage **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@0040d2a8 @ 0040d2a8

void Unwind_0040d2a8(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0x94));
  return;
}


// ---- Unwind@0040d2b6 @ 0040d2b6

void Unwind_0040d2b6(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x10) + 0xd4));
  return;
}


// ---- Unwind@0040d2c4 @ 0040d2c4

void Unwind_0040d2c4(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0xd8));
  return;
}


// ---- Unwind@0040d2d2 @ 0040d2d2

void Unwind_0040d2d2(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0x118));
  return;
}


// ---- Unwind@0040d2f0 @ 0040d2f0

void Unwind_0040d2f0(void)

{
  int unaff_EBP;
  
  FUN_004069e0(*(CPropertyPage **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@0040d2f8 @ 0040d2f8

void Unwind_0040d2f8(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0x94));
  return;
}


// ---- Unwind@0040d306 @ 0040d306

void Unwind_0040d306(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x10) + 0xd4));
  return;
}


// ---- Unwind@0040d314 @ 0040d314

void Unwind_0040d314(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0xd8));
  return;
}


// ---- Unwind@0040d330 @ 0040d330

void Unwind_0040d330(void)

{
  FUN_00401540();
  return;
}


// ---- Unwind@0040d350 @ 0040d350

void Unwind_0040d350(void)

{
  FUN_00401540();
  return;
}


// ---- Unwind@0040d370 @ 0040d370

void Unwind_0040d370(void)

{
  int unaff_EBP;
  
  FUN_004069e0(*(CPropertyPage **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@0040d378 @ 0040d378

void Unwind_0040d378(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0x94));
  return;
}


// ---- Unwind@0040d386 @ 0040d386

void Unwind_0040d386(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0xd4));
  return;
}


// ---- Unwind@0040d394 @ 0040d394

void Unwind_0040d394(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0x114));
  return;
}


// ---- Unwind@0040d3a2 @ 0040d3a2

void Unwind_0040d3a2(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0x154));
  return;
}


// ---- Unwind@0040d3b0 @ 0040d3b0

void Unwind_0040d3b0(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0x194));
  return;
}


// ---- Unwind@0040d3be @ 0040d3be

void Unwind_0040d3be(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0x1d4));
  return;
}


// ---- Unwind@0040d3e0 @ 0040d3e0

void Unwind_0040d3e0(void)

{
  int unaff_EBP;
  
  FUN_004069e0(*(CPropertyPage **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@0040d3e8 @ 0040d3e8

void Unwind_0040d3e8(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0x94));
  return;
}


// ---- Unwind@0040d3f6 @ 0040d3f6

void Unwind_0040d3f6(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0xd4));
  return;
}


// ---- Unwind@0040d404 @ 0040d404

void Unwind_0040d404(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0x114));
  return;
}


// ---- Unwind@0040d412 @ 0040d412

void Unwind_0040d412(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0x154));
  return;
}


// ---- Unwind@0040d420 @ 0040d420

void Unwind_0040d420(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0x194));
  return;
}


// ---- Unwind@0040d42e @ 0040d42e

void Unwind_0040d42e(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0x1d4));
  return;
}


// ---- Unwind@0040d450 @ 0040d450

void Unwind_0040d450(void)

{
  FUN_00401540();
  return;
}


// ---- Unwind@0040d470 @ 0040d470

void Unwind_0040d470(void)

{
  FUN_00401540();
  return;
}


// ---- Unwind@0040d490 @ 0040d490

void Unwind_0040d490(void)

{
  int unaff_EBP;
  
  FUN_00401500(*(void **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@0040d4b0 @ 0040d4b0

void Unwind_0040d4b0(void)

{
  int unaff_EBP;
  
  FUN_004069e0(*(CPropertyPage **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@0040d4b8 @ 0040d4b8

void Unwind_0040d4b8(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0x94));
  return;
}


// ---- Unwind@0040d4c6 @ 0040d4c6

void Unwind_0040d4c6(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0xd4));
  return;
}


// ---- Unwind@0040d4e0 @ 0040d4e0

void Unwind_0040d4e0(void)

{
  int unaff_EBP;
  
  FUN_004069e0(*(CPropertyPage **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@0040d4e8 @ 0040d4e8

void Unwind_0040d4e8(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0x94));
  return;
}


// ---- Unwind@0040d4f6 @ 0040d4f6

void Unwind_0040d4f6(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0xd4));
  return;
}


// ---- Unwind@0040d510 @ 0040d510

void Unwind_0040d510(void)

{
  FUN_00401540();
  return;
}


// ---- Unwind@0040d530 @ 0040d530

void Unwind_0040d530(void)

{
  FUN_00401540();
  return;
}


// ---- Unwind@0040d550 @ 0040d550

void Unwind_0040d550(void)

{
  int unaff_EBP;
  
  FUN_00401500(*(void **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@0040d570 @ 0040d570

void Unwind_0040d570(void)

{
  int unaff_EBP;
  
  FUN_004069e0(*(CPropertyPage **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@0040d578 @ 0040d578

void Unwind_0040d578(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0x94));
  return;
}


// ---- Unwind@0040d586 @ 0040d586

void Unwind_0040d586(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0xd4));
  return;
}


// ---- Unwind@0040d5a0 @ 0040d5a0

void Unwind_0040d5a0(void)

{
  int unaff_EBP;
  
  FUN_004069e0(*(CPropertyPage **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@0040d5a8 @ 0040d5a8

void Unwind_0040d5a8(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0x94));
  return;
}


// ---- Unwind@0040d5b6 @ 0040d5b6

void Unwind_0040d5b6(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0xd4));
  return;
}


// ---- Unwind@0040d5d0 @ 0040d5d0

void Unwind_0040d5d0(void)

{
  FUN_00401540();
  return;
}


// ---- Unwind@0040d5f0 @ 0040d5f0

void Unwind_0040d5f0(void)

{
  FUN_00401540();
  return;
}


// ---- Unwind@0040d610 @ 0040d610

void Unwind_0040d610(void)

{
  int unaff_EBP;
  
  FUN_00401500(*(void **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@0040d630 @ 0040d630

void Unwind_0040d630(void)

{
  int unaff_EBP;
  
  FUN_004069e0(*(CPropertyPage **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@0040d650 @ 0040d650

void Unwind_0040d650(void)

{
  int unaff_EBP;
  
  FUN_004069e0(*(CPropertyPage **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@0040d670 @ 0040d670

void Unwind_0040d670(void)

{
  FUN_00401540();
  return;
}


// ---- Unwind@0040d690 @ 0040d690

void Unwind_0040d690(void)

{
  FUN_00401540();
  return;
}


// ---- Unwind@0040d6b0 @ 0040d6b0

void Unwind_0040d6b0(void)

{
  int unaff_EBP;
  
  CDialog::~CDialog(*(CDialog **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@0040d6d0 @ 0040d6d0

void Unwind_0040d6d0(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x18));
  return;
}


// ---- Unwind@0040d6f0 @ 0040d6f0

void Unwind_0040d6f0(void)

{
  int unaff_EBP;
  
  FUN_00401500(*(void **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@0040d710 @ 0040d710

void Unwind_0040d710(void)

{
  int unaff_EBP;
  
  FUN_004069e0(*(CPropertyPage **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@0040d718 @ 0040d718

void Unwind_0040d718(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0x94));
  return;
}


// ---- Unwind@0040d726 @ 0040d726

void Unwind_0040d726(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x10) + 0xd4));
  return;
}


// ---- Unwind@0040d740 @ 0040d740

void Unwind_0040d740(void)

{
  int unaff_EBP;
  
  FUN_004069e0(*(CPropertyPage **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@0040d748 @ 0040d748

void Unwind_0040d748(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0x94));
  return;
}


// ---- Unwind@0040d760 @ 0040d760

void Unwind_0040d760(void)

{
  FUN_00401540();
  return;
}


// ---- Unwind@0040d768 @ 0040d768

void Unwind_0040d768(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@0040d770 @ 0040d770

void Unwind_0040d770(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@0040d790 @ 0040d790

void Unwind_0040d790(void)

{
  int unaff_EBP;
  
  FUN_00401500(*(void **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@0040d7b0 @ 0040d7b0

void Unwind_0040d7b0(void)

{
  int unaff_EBP;
  
  FUN_004069e0(*(CPropertyPage **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@0040d7b8 @ 0040d7b8

void Unwind_0040d7b8(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0x9c));
  return;
}


// ---- Unwind@0040d7c6 @ 0040d7c6

void Unwind_0040d7c6(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0xdc));
  return;
}


// ---- Unwind@0040d7d4 @ 0040d7d4

void Unwind_0040d7d4(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0x11c));
  return;
}


// ---- Unwind@0040d7e2 @ 0040d7e2

void Unwind_0040d7e2(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x10) + 0x15c));
  return;
}


// ---- Unwind@0040d800 @ 0040d800

void Unwind_0040d800(void)

{
  int unaff_EBP;
  
  FUN_004069e0(*(CPropertyPage **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@0040d808 @ 0040d808

void Unwind_0040d808(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0x9c));
  return;
}


// ---- Unwind@0040d816 @ 0040d816

void Unwind_0040d816(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0xdc));
  return;
}


// ---- Unwind@0040d824 @ 0040d824

void Unwind_0040d824(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0x11c));
  return;
}


// ---- Unwind@0040d840 @ 0040d840

void Unwind_0040d840(void)

{
  FUN_00401540();
  return;
}


// ---- Unwind@0040d848 @ 0040d848

void Unwind_0040d848(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@0040d860 @ 0040d860

void Unwind_0040d860(void)

{
  int unaff_EBP;
  
  FUN_00401500(*(void **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@0040d880 @ 0040d880

void Unwind_0040d880(void)

{
  int unaff_EBP;
  
  FUN_004069e0(*(CPropertyPage **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@0040d888 @ 0040d888

void Unwind_0040d888(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0x94));
  return;
}


// ---- Unwind@0040d896 @ 0040d896

void Unwind_0040d896(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0xd4));
  return;
}


// ---- Unwind@0040d8a4 @ 0040d8a4

void Unwind_0040d8a4(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x10) + 0x114));
  return;
}


// ---- Unwind@0040d8c0 @ 0040d8c0

void Unwind_0040d8c0(void)

{
  int unaff_EBP;
  
  FUN_004069e0(*(CPropertyPage **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@0040d8c8 @ 0040d8c8

void Unwind_0040d8c8(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0x94));
  return;
}


// ---- Unwind@0040d8d6 @ 0040d8d6

void Unwind_0040d8d6(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0xd4));
  return;
}


// ---- Unwind@0040d8f0 @ 0040d8f0

void Unwind_0040d8f0(void)

{
  FUN_00401540();
  return;
}


// ---- Unwind@0040d8f8 @ 0040d8f8

void Unwind_0040d8f8(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@0040d910 @ 0040d910

void Unwind_0040d910(void)

{
  FUN_00401540();
  return;
}


// ---- Unwind@0040d930 @ 0040d930

void Unwind_0040d930(void)

{
  int unaff_EBP;
  
  FUN_00401500(*(void **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@0040d950 @ 0040d950

void Unwind_0040d950(void)

{
  int unaff_EBP;
  
  FUN_004069e0(*(CPropertyPage **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@0040d958 @ 0040d958

void Unwind_0040d958(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0x94));
  return;
}


// ---- Unwind@0040d966 @ 0040d966

void Unwind_0040d966(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0xd4));
  return;
}


// ---- Unwind@0040d980 @ 0040d980

void Unwind_0040d980(void)

{
  int unaff_EBP;
  
  FUN_004069e0(*(CPropertyPage **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@0040d988 @ 0040d988

void Unwind_0040d988(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0x94));
  return;
}


// ---- Unwind@0040d996 @ 0040d996

void Unwind_0040d996(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0xd4));
  return;
}


// ---- Unwind@0040d9b0 @ 0040d9b0

void Unwind_0040d9b0(void)

{
  FUN_00401540();
  return;
}


// ---- Unwind@0040d9d0 @ 0040d9d0

void Unwind_0040d9d0(void)

{
  FUN_00401540();
  return;
}


// ---- Unwind@0040d9f0 @ 0040d9f0

void Unwind_0040d9f0(void)

{
  int unaff_EBP;
  
  FUN_00401500(*(void **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@0040da10 @ 0040da10

void Unwind_0040da10(void)

{
  int unaff_EBP;
  
  FUN_004069e0(*(CPropertyPage **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@0040da18 @ 0040da18

void Unwind_0040da18(void)

{
  int unaff_EBP;
  
  CButton::~CButton((CButton *)(*(int *)(unaff_EBP + -0x10) + 0x94));
  return;
}


// ---- Unwind@0040da26 @ 0040da26

void Unwind_0040da26(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0xd4));
  return;
}


// ---- Unwind@0040da34 @ 0040da34

void Unwind_0040da34(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0x114));
  return;
}


// ---- Unwind@0040da42 @ 0040da42

void Unwind_0040da42(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0x154));
  return;
}


// ---- Unwind@0040da50 @ 0040da50

void Unwind_0040da50(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0x194));
  return;
}


// ---- Unwind@0040da70 @ 0040da70

void Unwind_0040da70(void)

{
  int unaff_EBP;
  
  FUN_004069e0(*(CPropertyPage **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@0040da78 @ 0040da78

void Unwind_0040da78(void)

{
  int unaff_EBP;
  
  CButton::~CButton((CButton *)(*(int *)(unaff_EBP + -0x10) + 0x94));
  return;
}


// ---- Unwind@0040da86 @ 0040da86

void Unwind_0040da86(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0xd4));
  return;
}


// ---- Unwind@0040da94 @ 0040da94

void Unwind_0040da94(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0x114));
  return;
}


// ---- Unwind@0040daa2 @ 0040daa2

void Unwind_0040daa2(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0x154));
  return;
}


// ---- Unwind@0040dab0 @ 0040dab0

void Unwind_0040dab0(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0x194));
  return;
}


// ---- Unwind@0040dad0 @ 0040dad0

void Unwind_0040dad0(void)

{
  FUN_00401540();
  return;
}


// ---- Unwind@0040daf0 @ 0040daf0

void Unwind_0040daf0(void)

{
  FUN_00401540();
  return;
}


// ---- Unwind@0040db10 @ 0040db10

void Unwind_0040db10(void)

{
  int unaff_EBP;
  
  FUN_00401500(*(void **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@0040db30 @ 0040db30

void Unwind_0040db30(void)

{
  int unaff_EBP;
  
  FUN_004069e0(*(CPropertyPage **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@0040db38 @ 0040db38

void Unwind_0040db38(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x10) + 0x94));
  return;
}


// ---- Unwind@0040db50 @ 0040db50

void Unwind_0040db50(void)

{
  int unaff_EBP;
  
  FUN_004069e0(*(CPropertyPage **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@0040db70 @ 0040db70

void Unwind_0040db70(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 4));
  return;
}


