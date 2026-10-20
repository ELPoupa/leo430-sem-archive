// Decompiled with Ghidra from leoapi.ocx
// Format: Portable Executable (PE), image base 10000000

// ---- FUN_10001010 @ 10001010

void FUN_10001010(void)

{
  FUN_10001020((CWinApp *)&DAT_1000e2a8);
  return;
}


// ---- FUN_10001020 @ 10001020

CWinApp * __fastcall FUN_10001020(CWinApp *param_1)

{
  CWinApp::CWinApp(param_1,(char *)0x0);
  *(undefined ***)param_1 = &PTR_LAB_1000a534;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  return param_1;
}


// ---- FUN_10001040 @ 10001040

CWinApp * __thiscall FUN_10001040(void *this,byte param_1)

{
  CWinApp::~CWinApp(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- ~CWinApp @ 10001060

void __thiscall CWinApp::~CWinApp(CWinApp *this)

{
                    /* WARNING: Could not recover jumptable at 0x100089e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CWinApp(this);
  return;
}


// ---- FUN_10001070 @ 10001070

void FUN_10001070(void)

{
  FUN_10009111((_onexit_t)&LAB_10001080);
  return;
}


// ---- DllRegisterServer @ 100010b0

undefined4 DllRegisterServer(void)

{
  AFX_MODULE_STATE *pAVar1;
  int iVar2;
  undefined4 local_8;
  int local_4;
  
                    /* 0x10b0  3  DllRegisterServer */
  pAVar1 = (AFX_MODULE_STATE *)FUN_10008f67();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)&local_8,pAVar1);
  pAVar1 = AfxGetModuleState();
  iVar2 = AfxOleRegisterTypeLib
                    (*(HINSTANCE__ **)(pAVar1 + 8),(_GUID *)&DAT_1000a520,(char *)0x0,(char *)0x0);
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
  pAVar1 = (AFX_MODULE_STATE *)FUN_10008f67();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)&local_8,pAVar1);
  iVar2 = AfxOleUnregisterTypeLib((_GUID *)&DAT_1000a520,1,0,0);
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


// ---- FUN_100011c0 @ 100011c0

COleControl * FUN_100011c0(void)

{
  COleControl *pCVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_100093da;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pCVar1 = operator_new(0x1d0);
  local_4 = 0;
  if (pCVar1 != (COleControl *)0x0) {
    pCVar1 = FUN_10001540(pCVar1);
    ExceptionList = local_c;
    return pCVar1;
  }
  ExceptionList = local_c;
  return (COleControl *)0x0;
}


// ---- FUN_10001230 @ 10001230

undefined ** FUN_10001230(void)

{
  return &PTR_s_CApiCtrl_1000a5d8;
}


// ---- FUN_10001250 @ 10001250

undefined ** FUN_10001250(void)

{
  return &PTR_LAB_1000a5f0;
}


// ---- FUN_10001270 @ 10001270

undefined ** FUN_10001270(void)

{
  return &PTR_LAB_1000a640;
}


// ---- FUN_10001280 @ 10001280

undefined * FUN_10001280(void)

{
  return &DAT_1000e3d8;
}


// ---- FUN_100012c0 @ 100012c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100012c0(int *param_1)

{
  if (DAT_1000d03c == -1) {
    _DAT_1000e3c8 = DAT_1000abe8;
    _DAT_1000e3cc = DAT_1000abec;
    _DAT_1000e3d0 = _DAT_1000abf0;
    _DAT_1000e3d4 = ram0x1000abf4;
    DAT_1000d03c = 1;
    *param_1 = 1;
    return &DAT_1000e3c8;
  }
  *param_1 = DAT_1000d03c;
  return &DAT_1000e3c8;
}


// ---- FUN_10001330 @ 10001330

void FUN_10001330(void)

{
  FUN_10001350(&DAT_1000e378,(_GUID *)&DAT_1000a8a0,(CRuntimeClass *)&PTR_s_CApiCtrl_1000a5d8,0,
               "API.ApiCtrl.1");
  return;
}


// ---- FUN_10001350 @ 10001350

COleObjectFactory * __thiscall
FUN_10001350(void *this,_GUID *param_1,CRuntimeClass *param_2,int param_3,char *param_4)

{
  COleObjectFactory::COleObjectFactory(this,param_1,param_2,param_3,param_4);
  *(undefined ***)this = &PTR_LAB_1000a8f0;
  return this;
}


// ---- ~COleObjectFactory @ 10001380

void __thiscall COleObjectFactory::~COleObjectFactory(COleObjectFactory *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008a4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~COleObjectFactory(this);
  return;
}


// ---- FUN_10001390 @ 10001390

void FUN_10001390(void)

{
  FUN_10009111((_onexit_t)&LAB_100013a0);
  return;
}


// ---- FUN_100013c0 @ 100013c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100013c0(undefined4 *param_1)

{
  *param_1 = DAT_1000a8a0;
  param_1[1] = DAT_1000a8a4;
  param_1[2] = _DAT_1000a8a8;
  param_1[3] = ram0x1000a8ac;
  return 0;
}


// ---- FUN_100013f0 @ 100013f0

undefined4 FUN_100013f0(void)

{
  return 1;
}


// ---- FUN_10001400 @ 10001400

void FUN_10001400(LCID param_1,ITypeLib **param_2)

{
  LoadRegTypeLib((GUID *)&DAT_1000a520,DAT_1000a530,DAT_1000a532,param_1,param_2);
  return;
}


// ---- FUN_10001430 @ 10001430

void __fastcall FUN_10001430(int param_1)

{
  undefined4 local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_100093f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2
            ((AFX_MAINTAIN_STATE2 *)&local_14,*(AFX_MODULE_STATE **)(param_1 + 0x1c));
  local_4 = 0;
  AfxGetTypeLibCache((_GUID *)&DAT_1000a520);
  *(undefined4 *)(local_10 + 4) = local_14;
  ExceptionList = local_c;
  return;
}


// ---- FUN_10001490 @ 10001490

undefined4 FUN_10001490(void)

{
  return 0x20591;
}


// ---- FUN_10001500 @ 10001500

bool FUN_10001500(undefined4 param_1,undefined4 *param_2)

{
  BSTR pOVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    return false;
  }
  pOVar1 = SysAllocString(L"LEO SEM API OCX");
  *param_2 = pOVar1;
  return pOVar1 != (BSTR)0x0;
}


// ---- FUN_10001530 @ 10001530

undefined4 FUN_10001530(void)

{
  return 1;
}


// ---- FUN_10001540 @ 10001540

COleControl * __fastcall FUN_10001540(COleControl *param_1)

{
  AFX_MODULE_STATE *pAVar1;
  HINSTANCE__ *hInstance;
  HBITMAP pHVar2;
  LPCSTR lpBitmapName;
  undefined **local_34;
  HANDLE local_30;
  undefined4 local_2c;
  int local_28;
  undefined1 local_24 [4];
  int local_20;
  int local_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10009430;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  COleControl::COleControl(param_1);
  local_4 = 0;
  *(undefined ***)param_1 = &PTR_FUN_1000a98c;
  COleControl::InitializeIIDs(param_1,(_GUID *)&DAT_1000a8b0,(_GUID *)&DAT_1000a8c0);
  pAVar1 = (AFX_MODULE_STATE *)FUN_10008f67();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)&local_2c,pAVar1);
  local_4._0_1_ = 1;
  AfxEnableControlContainer((COccManager *)0x0);
  local_30 = (HANDLE)0x0;
  local_34 = &PTR_LAB_1000a978;
  lpBitmapName = (LPCSTR)0xc9;
  local_4._0_1_ = 2;
  DAT_1000e36c = param_1;
  hInstance = AfxFindResourceHandle((char *)0xc9,(char *)0x2);
  pHVar2 = LoadBitmapA(hInstance,lpBitmapName);
  CGdiObject::Attach((CGdiObject *)&local_34,pHVar2);
  GetObjectA(local_30,0x18,local_24);
  *(int *)(param_1 + 0x1c8) = local_1c;
  *(int *)(param_1 + 0x1c4) = local_20;
  COleControl::SetInitialSize(param_1,local_20,local_1c);
  *(undefined4 *)(param_1 + 0x1cc) = 0;
  local_34 = &PTR_LAB_1000a964;
  local_4 = CONCAT31(local_4._1_3_,3);
  CGdiObject::DeleteObject((CGdiObject *)&local_34);
  *(undefined4 *)(local_28 + 4) = local_2c;
  ExceptionList = local_c;
  return param_1;
}


// ---- FUN_10001650 @ 10001650

COleControl * __thiscall FUN_10001650(void *this,byte param_1)

{
  FUN_10001670(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_10001670 @ 10001670

void __fastcall FUN_10001670(COleControl *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10009448;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = &PTR_FUN_1000a98c;
  local_4 = 0;
  if (*(int *)(param_1 + 0x1c0) != 0) {
    FUN_10001bd0((int)param_1);
  }
  local_4 = 0xffffffff;
  COleControl::~COleControl(param_1);
  ExceptionList = local_c;
  return;
}


// ---- FUN_100016d0 @ 100016d0

void __thiscall FUN_100016d0(void *this,CDC *param_1,CRect *param_2)

{
  HINSTANCE__ *hInstance;
  HBITMAP pHVar1;
  LPCSTR lpBitmapName;
  CPictureHolder local_40 [4];
  undefined **local_3c;
  HBITMAP__ *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24 [24];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_10009478;
  local_c = ExceptionList;
  local_38 = (HBITMAP__ *)0x0;
  local_3c = &PTR_LAB_1000a978;
  local_4 = 0;
  ExceptionList = &local_c;
  CPictureHolder::CPictureHolder(local_40);
  lpBitmapName = (LPCSTR)0xc9;
  local_4._0_1_ = 1;
  hInstance = AfxFindResourceHandle((char *)0xc9,(char *)0x2);
  pHVar1 = LoadBitmapA(hInstance,lpBitmapName);
  CGdiObject::Attach((CGdiObject *)&local_3c,pHVar1);
  GetObjectA(local_38,0x18,local_24);
  local_2c = *(undefined4 *)((int)this + 0x1c4);
  local_28 = *(undefined4 *)((int)this + 0x1c8);
  local_34 = 0;
  local_30 = 0;
  CPictureHolder::CreateFromBitmap(local_40,local_38,(HPALETTE__ *)0x0,0);
  CPictureHolder::Render(local_40,param_1,param_2,(CRect *)&local_34);
  local_4 = (uint)local_4._1_3_ << 8;
  CPictureHolder::~CPictureHolder(local_40);
  local_3c = &PTR_LAB_1000a964;
  local_4 = 2;
  CGdiObject::DeleteObject((CGdiObject *)&local_3c);
  ExceptionList = local_c;
  return;
}


// ---- FUN_100017c0 @ 100017c0

void __thiscall FUN_100017c0(void *this,CPropExchange *param_1)

{
  (*(code *)**(undefined4 **)param_1)((int)this + 0x48,CONCAT22(DAT_1000a530,DAT_1000a532),1);
  COleControl::DoPropExchange(this,param_1);
  return;
}


// ---- FUN_10001810 @ 10001810

void FUN_10001810(void)

{
  CDialog local_6c [96];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10009498;
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


// ---- FUN_10001870 @ 10001870

void __thiscall FUN_10001870(int param_1,char *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  void *unaff_EBX;
  char *pcVar5;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &UNK_100094c4;
  pvStack_c = ExceptionList;
  iVar4 = -1;
  pcVar5 = param_2;
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  if (iVar4 == -2) {
    ExceptionList = &pvStack_c;
    puVar2 = operator_new(0x1c);
    uStack_4 = 0;
    if (puVar2 != (undefined4 *)0x0) {
      piVar3 = FUN_10002050(puVar2);
      goto LAB_100018e9;
    }
  }
  else {
    ExceptionList = &pvStack_c;
    puVar2 = operator_new(0xe0);
    uStack_4 = 1;
    if (puVar2 != (undefined4 *)0x0) {
      piVar3 = FUN_10003970(puVar2);
      goto LAB_100018e9;
    }
  }
  piVar3 = (int *)0x0;
LAB_100018e9:
  *(int **)(param_1 + 0x1c0) = piVar3;
  uStack_4 = 0xffffffff;
  iVar4 = (**(code **)(*piVar3 + 0x20))(param_2);
  if (iVar4 == 0) {
    *(undefined4 *)(param_1 + 0x1cc) = 1;
  }
  ExceptionList = unaff_EBX;
  return;
}


// ---- FUN_10001920 @ 10001920

undefined4 __thiscall FUN_10001920(int param_1,undefined4 param_2,undefined2 *param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x1cc) == 0) {
    *param_3 = 10;
    *(undefined4 *)(param_3 + 4) = 0x3fb;
    return 0x3fb;
  }
  uVar1 = (**(code **)(**(int **)(param_1 + 0x1c0) + 0x14))(param_2,param_3);
  return uVar1;
}


// ---- FUN_10001960 @ 10001960

undefined4 __thiscall FUN_10001960(int param_1,undefined4 param_2,undefined2 *param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x1cc) == 0) {
    *param_3 = 10;
    *(undefined4 *)(param_3 + 4) = 0x3fb;
    return 0x3fb;
  }
  uVar1 = (**(code **)(**(int **)(param_1 + 0x1c0) + 0x18))(param_2,param_3);
  return uVar1;
}


// ---- FUN_100019a0 @ 100019a0

undefined4 __thiscall FUN_100019a0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x1cc) == 0) {
    return 0x3fb;
  }
  uVar1 = (**(code **)(**(int **)(param_1 + 0x1c0) + 0x1c))(param_2);
  return uVar1;
}


// ---- FUN_100019d0 @ 100019d0

undefined4 __thiscall
FUN_100019d0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x1cc) == 0) {
    return 0x3fb;
  }
  uVar1 = (**(code **)(**(int **)(param_1 + 0x1c0) + 0x24))
                    (param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}


// ---- FUN_10001a10 @ 10001a10

undefined4 __thiscall
FUN_10001a10(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x1cc) == 0) {
    return 0x3fb;
  }
  uVar1 = (**(code **)(**(int **)(param_1 + 0x1c0) + 0x28))
                    (param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}


// ---- FUN_10001a50 @ 10001a50

undefined4 __thiscall
FUN_10001a50(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x1cc) == 0) {
    return 0x3fb;
  }
  uVar1 = (**(code **)(**(int **)(param_1 + 0x1c0) + 0x2c))
                    (param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}


// ---- FUN_10001a90 @ 10001a90

undefined4 __thiscall FUN_10001a90(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x1cc) == 0) {
    return 0x3fb;
  }
  uVar1 = (**(code **)(**(int **)(param_1 + 0x1c0) + 0x30))(param_2,param_3);
  return uVar1;
}


// ---- FUN_10001ac0 @ 10001ac0

void __thiscall FUN_10001ac0(int param_1,undefined4 param_2)

{
  (**(code **)(**(int **)(param_1 + 0x1c0) + 0x34))(param_2);
  return;
}


// ---- FUN_10001b00 @ 10001b00

void __thiscall FUN_10001b00(void *this,undefined4 param_1,int *param_2)

{
  int *piVar1;
  COleControl *unaff_retaddr;
  void *pvStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  piVar1 = param_2;
  puStack_8 = &LAB_100094e0;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if (((*(int *)((int)this + 0x1cc) != 0) && (ExceptionList = &pvStack_c, param_2 != (int *)0x8)) &&
     (ExceptionList = &pvStack_c, param_2 != (int *)0x7)) {
    param_2 = (int *)&pvStack_18;
    ExceptionList = &pvStack_c;
    pvStack_18 = this;
    CString::CString((CString *)&pvStack_18,(CString *)&stack0x0000000c);
    (**(code **)(**(int **)((int)this + 0x1c0) + 0x48))(&param_2,param_1,piVar1);
    pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,1);
    COleControl::FireEvent(unaff_retaddr,(long)this,(uchar *)0x1);
    local_4 = local_4 & 0xffffff00;
    pvStack_18 = (void *)0x10001b89;
    CString::~CString((CString *)&param_2);
  }
  local_4 = 0xffffffff;
  pvStack_18 = (void *)0x10001b9a;
  CString::~CString((CString *)&stack0x0000000c);
  ExceptionList = pvStack_c;
  return;
}


// ---- FUN_10001bd0 @ 10001bd0

int __fastcall FUN_10001bd0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x1cc) == 0) {
    return 0x3fb;
  }
  *(undefined4 *)(param_1 + 0x1cc) = 0;
  iVar1 = (**(code **)(**(int **)(param_1 + 0x1c0) + 0x38))();
  if (iVar1 == 0) {
    if (*(int **)(param_1 + 0x1c0) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x1c0) + 4))(1);
    }
    *(undefined4 *)(param_1 + 0x1c0) = 0;
    iVar1 = 0;
  }
  return iVar1;
}


// ---- FUN_10001c20 @ 10001c20

undefined4 FUN_10001c20(undefined2 *param_1)

{
  *param_1 = 0x201;
  return 0;
}


// ---- FUN_10001c30 @ 10001c30

undefined4 __thiscall
FUN_10001c30(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x1cc) == 0) {
    return 0x3fb;
  }
  uVar1 = (**(code **)(**(int **)(param_1 + 0x1c0) + 0x3c))(param_2,param_3,param_4);
  return uVar1;
}


// ---- FUN_10001c60 @ 10001c60

undefined4 __thiscall FUN_10001c60(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x1cc) == 0) {
    return 0x3fb;
  }
  uVar1 = (**(code **)(**(int **)(param_1 + 0x1c0) + 0x40))(param_2,param_3);
  return uVar1;
}


// ---- FUN_10001c90 @ 10001c90

undefined4 __thiscall FUN_10001c90(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x1cc) == 0) {
    return 0x3fb;
  }
  uVar1 = (**(code **)(**(int **)(param_1 + 0x1c0) + 0x44))(param_2,param_3);
  return uVar1;
}


// ---- FUN_10001cd0 @ 10001cd0

void __fastcall FUN_10001cd0(undefined4 *param_1)

{
  *param_1 = &PTR_GetRuntimeClass_1000ab84;
  return;
}


// ---- FUN_10001ce0 @ 10001ce0

undefined4 * __thiscall FUN_10001ce0(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_GetRuntimeClass_1000ab84;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}


// ---- FUN_10001d00 @ 10001d00

void FUN_10001d00(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ---- FUN_10001d10 @ 10001d10

void __fastcall FUN_10001d10(undefined4 *param_1)

{
  *(undefined4 *)(param_1[1] + 4) = *param_1;
  return;
}


// ---- FUN_10001d20 @ 10001d20

CGdiObject * __thiscall FUN_10001d20(void *this,byte param_1)

{
  FUN_10001d40(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_10001d40 @ 10001d40

void __fastcall FUN_10001d40(CGdiObject *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_100094f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = &PTR_LAB_1000a964;
  local_4 = 0;
  CGdiObject::DeleteObject(param_1);
  *(undefined ***)param_1 = &PTR_GetRuntimeClass_1000ab84;
  ExceptionList = local_c;
  return;
}


// ---- FUN_10001d90 @ 10001d90

CGdiObject * __thiscall FUN_10001d90(void *this,byte param_1)

{
  FUN_10001db0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_10001db0 @ 10001db0

void __fastcall FUN_10001db0(CGdiObject *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10009518;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = &PTR_LAB_1000a964;
  local_4 = 0;
  CGdiObject::DeleteObject(param_1);
  *(undefined ***)param_1 = &PTR_GetRuntimeClass_1000ab84;
  ExceptionList = local_c;
  return;
}


// ---- FUN_10001e00 @ 10001e00

void __fastcall FUN_10001e00(int param_1)

{
  EnableWindow(*(HWND *)(param_1 + 0x20),0);
  return;
}


// ---- FUN_10001e10 @ 10001e10

void __fastcall FUN_10001e10(int param_1)

{
  EnableWindow(*(HWND *)(param_1 + 0x20),1);
  return;
}


// ---- FUN_10001e30 @ 10001e30

COlePropertyPage * FUN_10001e30(void)

{
  COlePropertyPage *pCVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1000953a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pCVar1 = operator_new(0xd8);
  local_4 = 0;
  if (pCVar1 != (COlePropertyPage *)0x0) {
    pCVar1 = FUN_10001ff0(pCVar1);
    ExceptionList = local_c;
    return pCVar1;
  }
  ExceptionList = local_c;
  return (COlePropertyPage *)0x0;
}


// ---- FUN_10001ea0 @ 10001ea0

undefined ** FUN_10001ea0(void)

{
  return &PTR_s_CApiPropPage_1000ab98;
}


// ---- FUN_10001ec0 @ 10001ec0

undefined ** FUN_10001ec0(void)

{
  return &PTR_LAB_1000abb0;
}


// ---- FUN_10001ee0 @ 10001ee0

void FUN_10001ee0(void)

{
  FUN_10001f00(&DAT_1000e3f0,(_GUID *)&DAT_1000abe8,(CRuntimeClass *)&PTR_s_CApiPropPage_1000ab98,0,
               "API.ApiPropPage.1");
  return;
}


// ---- FUN_10001f00 @ 10001f00

COleObjectFactory * __thiscall
FUN_10001f00(void *this,_GUID *param_1,CRuntimeClass *param_2,int param_3,char *param_4)

{
  COleObjectFactory::COleObjectFactory(this,param_1,param_2,param_3,param_4);
  *(undefined ***)this = &PTR_LAB_1000abf8;
  return this;
}


// ---- FUN_10001f30 @ 10001f30

COleObjectFactory * __thiscall FUN_10001f30(void *this,byte param_1)

{
  COleObjectFactory::~COleObjectFactory(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_10001f50 @ 10001f50

void FUN_10001f50(void)

{
  FUN_10009111((_onexit_t)&LAB_10001f60);
  return;
}


// ---- FUN_10001f80 @ 10001f80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10001f80(undefined4 *param_1)

{
  *param_1 = DAT_1000abe8;
  param_1[1] = DAT_1000abec;
  param_1[2] = _DAT_1000abf0;
  param_1[3] = ram0x1000abf4;
  return 0;
}


// ---- FUN_10001ff0 @ 10001ff0

COlePropertyPage * __fastcall FUN_10001ff0(COlePropertyPage *param_1)

{
  COlePropertyPage::COlePropertyPage(param_1,100,100);
  *(undefined ***)param_1 = &PTR_FUN_1000ac6c;
  return param_1;
}


// ---- FUN_10002010 @ 10002010

COlePropertyPage * __thiscall FUN_10002010(void *this,byte param_1)

{
  COlePropertyPage::~COlePropertyPage(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- ~COlePropertyPage @ 10002030

void __thiscall COlePropertyPage::~COlePropertyPage(COlePropertyPage *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008dd6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~COlePropertyPage(this);
  return;
}


// ---- FUN_10002040 @ 10002040

void FUN_10002040(CDataExchange *param_1)

{
  DDP_PostProcessing(param_1);
  return;
}


// ---- FUN_10002050 @ 10002050

undefined4 * __fastcall FUN_10002050(undefined4 *param_1)

{
  CWnd *this;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1000956d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_GetRuntimeClass_1000ae64;
  local_4 = 0;
  CString::CString((CString *)(param_1 + 6));
  local_4._0_1_ = 1;
  *param_1 = &PTR_GetRuntimeClass_1000ae18;
  this = operator_new(0x40);
  local_4._0_1_ = 2;
  if (this == (CWnd *)0x0) {
    this = (CWnd *)0x0;
  }
  else {
    CWnd::CWnd(this);
    *(undefined ***)this = &PTR_GetRuntimeClass_1000ad58;
  }
  param_1[2] = this;
  *(undefined4 *)(this + 0x20) = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  CString::operator=((CString *)(param_1 + 6),s_PM_OCX_not_initialised_1000d160);
  ExceptionList = local_c;
  return param_1;
}


// ---- FUN_10002100 @ 10002100

undefined4 FUN_10002100(void)

{
  return 0;
}


// ---- FUN_10002110 @ 10002110

undefined4 FUN_10002110(void)

{
  return 0;
}


// ---- FUN_10002120 @ 10002120

undefined4 FUN_10002120(void)

{
  return 0;
}


// ---- FUN_10002130 @ 10002130

undefined4 FUN_10002130(void)

{
  return 0;
}


// ---- FUN_10002140 @ 10002140

undefined4 FUN_10002140(void)

{
  return 0;
}


// ---- FUN_10002150 @ 10002150

CString * FUN_10002150(CString *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_1000959f;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  if ((DAT_1000f530 & 1) == 0) {
    DAT_1000f530 = DAT_1000f530 | 1;
    ExceptionList = &local_c;
    CString::CString((CString *)&DAT_1000f534,&DAT_1000e43c);
    FUN_10009111((_onexit_t)&LAB_100021e0);
  }
  CString::CString(param_1,(CString *)&DAT_1000f534);
  local_4 = local_4 & 0xffffff00;
  CString::~CString((CString *)&stack0x00000010);
  ExceptionList = local_c;
  return param_1;
}


// ---- FUN_100021f0 @ 100021f0

undefined4 * __thiscall FUN_100021f0(void *this,byte param_1)

{
  FUN_10002240(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_10002210 @ 10002210

undefined4 * __thiscall FUN_10002210(void *this,byte param_1)

{
  FUN_10001cd0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- ~CWnd @ 10002230

void __thiscall CWnd::~CWnd(CWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008e0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CWnd(this);
  return;
}


// ---- FUN_10002240 @ 10002240

void __fastcall FUN_10002240(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_100095c3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_GetRuntimeClass_1000ae18;
  local_4 = 1;
  if (param_1[4] == 0) {
    FUN_100036f0((int)param_1);
  }
  local_4 = local_4 & 0xffffff00;
  CString::~CString((CString *)(param_1 + 6));
  *param_1 = &PTR_GetRuntimeClass_1000ab84;
  ExceptionList = local_c;
  return;
}


// ---- FUN_100022a0 @ 100022a0

undefined4 __fastcall FUN_100022a0(int param_1)

{
  char *pcVar1;
  CWnd *this;
  char *pcVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  HWND__ *pHVar8;
  HMENU__ *pHVar9;
  void *pvVar10;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &UNK_100095da;
  pvStack_c = ExceptionList;
  if (*(int *)(param_1 + 0xc) == 0) {
    pvVar10 = (void *)0x0;
    pHVar9 = (HMENU__ *)0x0;
    pHVar8 = (HWND__ *)0x0;
    iVar7 = 0;
    iVar6 = 0;
    iVar5 = 0;
    iVar4 = 0;
    uVar3 = 0;
    pcVar2 = s_PM_OCX_Message_Window_1000d200;
    ExceptionList = &pvStack_c;
    pcVar1 = AfxRegisterWndClass(0,(HICON__ *)0x0,(HBRUSH__ *)0x0,(HICON__ *)0x0);
    iVar4 = CWnd::CreateEx(*(CWnd **)(param_1 + 8),0,pcVar1,pcVar2,uVar3,iVar4,iVar5,iVar6,iVar7,
                           pHVar8,pHVar9,pvVar10);
    if (iVar4 == 0) {
      CString::operator=((CString *)(param_1 + 0x18),s_Failed_to_create_message_window_1000d1e0);
      ExceptionList = pvStack_c;
      return 0x3fb;
    }
    this = operator_new(0x40);
    uStack_4 = 0;
    if (this == (CWnd *)0x0) {
      this = (CWnd *)0x0;
    }
    else {
      CWnd::CWnd(this);
      *(undefined ***)this = &PTR_FUN_1000aec0;
    }
    uStack_4 = 0xffffffff;
    *(CWnd **)(param_1 + 4) = this;
    uStack_1c = 0;
    uStack_18 = 0;
    uStack_14 = 0;
    uStack_10 = 0;
    iVar4 = CWnd::CreateControl(this,(_GUID *)&DAT_1000aeb0,(char *)0x1000d1dc,0,
                                (tagRECT *)&uStack_1c,*(CWnd **)(param_1 + 8),0x2329,(CFile *)0x0,0,
                                (ushort *)0x0);
    if (iVar4 == 0) {
      AfxMessageBox(s_API__Unable_to_create_PM_OCX_1000d1bc,0,0);
      CString::operator=((CString *)(param_1 + 0x18),s_Failed_to_create_PM_OCX_control_1000d19c);
      ExceptionList = pvStack_c;
      return 0x3fb;
    }
    iVar4 = func_0x10006200(0x1000d194);
    if (iVar4 != 1) {
      CString::operator=((CString *)(param_1 + 0x18),s_Control_Initialise_failed_1000d178);
      *(int *)(param_1 + 0x14) = iVar4;
      ExceptionList = pvStack_c;
      return 0x3fb;
    }
    *(undefined4 *)(param_1 + 0xc) = 1;
  }
  ExceptionList = pvStack_c;
  return 0;
}


// ---- FUN_10002410 @ 10002410

void __thiscall
FUN_10002410(CWnd *param_1,undefined4 param_2,char *param_3,ulong param_4,tagRECT *param_5,
            CWnd *param_6,uint param_7)

{
  CWnd::CreateControl(param_1,(_GUID *)&DAT_1000aeb0,param_3,param_4,param_5,param_6,param_7,
                      (CFile *)0x0,0,(ushort *)0x0);
  return;
}


// ---- FUN_10002440 @ 10002440

CWnd * __thiscall FUN_10002440(void *this,byte param_1)

{
  CWnd::~CWnd(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_10002460 @ 10002460

undefined4 __thiscall FUN_10002460(void *this,char *param_1,short *param_2)

{
  short *psVar1;
  int iVar2;
  undefined4 uVar3;
  double dVar4;
  char *pcVar5;
  char *local_24;
  undefined4 local_20;
  float local_1c;
  undefined4 local_18;
  float local_14;
  float local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10009608;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CString::CString((CString *)&local_20);
  local_4 = 0;
  CString::CString((CString *)&local_24,param_1);
  local_4._0_1_ = 1;
  if (*(int *)((int)this + 0xc) == 0) {
    local_4 = (uint)local_4._1_3_ << 8;
    *param_2 = 10;
    param_2[4] = 0x3fb;
    param_2[5] = 0;
    CString::~CString((CString *)&local_24);
    local_4 = 0xffffffff;
    CString::~CString((CString *)&local_20);
    ExceptionList = local_c;
    return 0x3fb;
  }
  iVar2 = FUN_10003930((int)this);
  if (iVar2 == 0) {
    local_4 = (uint)local_4._1_3_ << 8;
    CString::~CString((CString *)&local_24);
    local_4 = 0xffffffff;
    CString::~CString((CString *)&local_20);
    ExceptionList = local_c;
    return 0x401;
  }
  CString::MakeUpper((CString *)&local_24);
  iVar2 = FUN_10006090(*(void **)((int)this + 4),&local_18,local_24);
  if (iVar2 != 1) {
    CString::operator=((CString *)((int)this + 0x18),s_Unable_to_translate_mnemonic_1000d358);
    *(int *)((int)this + 0x14) = iVar2;
    local_4 = (uint)local_4._1_3_ << 8;
    *param_2 = 10;
    param_2[4] = 0x3ec;
    param_2[5] = 0;
    CString::~CString((CString *)&local_24);
    local_4 = 0xffffffff;
    CString::~CString((CString *)&local_20);
    ExceptionList = local_c;
    return 0x3ec;
  }
  iVar2 = strncmp(local_24,&DAT_1000d354,2);
  psVar1 = param_2;
  if (iVar2 == 0) {
    if (*param_2 == 4) {
      local_1c = *(float *)(param_2 + 4);
      iVar2 = FUN_100061a0(*(void **)((int)this + 4),local_18,&local_14,&local_10);
      if (iVar2 == 1) {
        if (local_1c < local_14) {
          CString::operator=((CString *)((int)this + 0x18),s_Floating_point_value_too_low_1000d31c);
          *psVar1 = 10;
          psVar1[4] = 0x3ef;
          psVar1[5] = 0;
LAB_10002728:
          local_4 = (uint)local_4._1_3_ << 8;
          CString::~CString((CString *)&local_24);
          local_4 = 0xffffffff;
          CString::~CString((CString *)&local_20);
          ExceptionList = local_c;
          return 0x3ef;
        }
        if (local_10 < local_1c) {
          CString::operator=((CString *)((int)this + 0x18),s_Floating_point_value_too_high_1000d2fc)
          ;
          *psVar1 = 10;
          psVar1[4] = 0x3f0;
          psVar1[5] = 0;
LAB_10002786:
          local_4 = (uint)local_4._1_3_ << 8;
          CString::~CString((CString *)&local_24);
          local_4 = 0xffffffff;
          CString::~CString((CString *)&local_20);
          ExceptionList = local_c;
          return 0x3f0;
        }
        iVar2 = FUN_10006160(*(void **)((int)this + 4),local_18,local_1c,0);
        if (iVar2 == 1) goto LAB_10002828;
        pcVar5 = s_Unable_to_set_value_1000d2e8;
      }
      else {
        pcVar5 = s_Unable_to_get_limits_1000d33c;
      }
      CString::operator=((CString *)((int)this + 0x18),pcVar5);
      *(int *)((int)this + 0x14) = iVar2;
      *psVar1 = 10;
      psVar1[4] = 0x3ee;
      psVar1[5] = 0;
    }
    else {
      if (*param_2 != 8) {
        CString::operator=((CString *)((int)this + 0x18),s_Unable_to_set_analogue_parameter_1000d278
                          );
        *psVar1 = 10;
        psVar1[4] = 0x3f1;
        psVar1[5] = 0;
        local_4 = (uint)local_4._1_3_ << 8;
        CString::~CString((CString *)&local_24);
        local_4 = 0xffffffff;
        CString::~CString((CString *)&local_20);
        ExceptionList = local_c;
        return 0x3f1;
      }
      CString::CString((CString *)&param_2,*(ushort **)(param_2 + 4));
      local_4._0_1_ = 2;
      dVar4 = atof((char *)param_2);
      iVar2 = FUN_100063f0(*(void **)((int)this + 4),local_18,(float)dVar4,&local_1c);
      if (iVar2 == 1) {
        iVar2 = FUN_100061a0(*(void **)((int)this + 4),local_18,&local_14,&local_10);
        if (iVar2 == 1) {
          if (local_1c < local_14) {
            CString::operator=((CString *)((int)this + 0x18),s_Floating_point_value_too_low_1000d31c
                              );
            *psVar1 = 10;
            psVar1[4] = 0x3ef;
            psVar1[5] = 0;
            local_4._0_1_ = 1;
            CString::~CString((CString *)&param_2);
            goto LAB_10002728;
          }
          if (local_10 < local_1c) {
            CString::operator=((CString *)((int)this + 0x18),
                               s_Floating_point_value_too_high_1000d2fc);
            *psVar1 = 10;
            psVar1[4] = 0x3f0;
            psVar1[5] = 0;
            local_4._0_1_ = 1;
            CString::~CString((CString *)&param_2);
            goto LAB_10002786;
          }
          iVar2 = FUN_10006160(*(void **)((int)this + 4),local_18,local_1c,0);
          if (iVar2 == 1) {
            local_4._0_1_ = 1;
            CString::~CString((CString *)&param_2);
            goto LAB_10002828;
          }
          pcVar5 = s_Unable_to_set_value_1000d2e8;
        }
        else {
          pcVar5 = s_Unable_to_get_limits_1000d33c;
        }
      }
      else {
        pcVar5 = s_Unable_to_convert_to_unscaled_va_1000d2c4;
      }
      CString::operator=((CString *)((int)this + 0x18),pcVar5);
      *(int *)((int)this + 0x14) = iVar2;
      *psVar1 = 10;
      psVar1[4] = 0x3ee;
      psVar1[5] = 0;
      local_4._0_1_ = 1;
      CString::~CString((CString *)&param_2);
    }
    local_4 = (uint)local_4._1_3_ << 8;
    CString::~CString((CString *)&local_24);
    local_4 = 0xffffffff;
    CString::~CString((CString *)&local_20);
    uVar3 = 0x3ee;
  }
  else {
    iVar2 = strncmp(local_24,&DAT_1000d274,2);
    psVar1 = param_2;
    if (iVar2 != 0) {
      CString::operator=((CString *)((int)this + 0x18),s_Invalid_parameter___not_AP__DP_1000d218);
      local_4 = (uint)local_4._1_3_ << 8;
      *param_2 = 10;
      param_2[4] = 0x3f2;
      param_2[5] = 0;
      CString::~CString((CString *)&local_24);
      local_4 = 0xffffffff;
      CString::~CString((CString *)&local_20);
      ExceptionList = local_c;
      return 0x3f2;
    }
    if ((*param_2 != 8) && (*param_2 != 4)) {
      CString::operator=((CString *)((int)this + 0x18),s_Unable_to_set_state_to_something_1000d238);
      *psVar1 = 10;
      psVar1[4] = 0x3f1;
      psVar1[5] = 0;
      local_4 = (uint)local_4._1_3_ << 8;
      CString::~CString((CString *)&local_24);
      local_4 = 0xffffffff;
      CString::~CString((CString *)&local_20);
      ExceptionList = local_c;
      return 0x3f1;
    }
    CString::operator=((CString *)&local_20,&DAT_1000e43c);
    local_1c = 0.0;
    if (*psVar1 == 8) {
      CString::operator=((CString *)&local_20,*(ushort **)(psVar1 + 4));
    }
    else {
      local_1c = *(float *)(psVar1 + 4);
    }
    iVar2 = FUN_10006160(*(void **)((int)this + 4),local_18,local_1c,local_20);
    if (iVar2 != 1) {
      CString::operator=((CString *)((int)this + 0x18),s_Unable_to_set_value_1000d2e8);
      *(int *)((int)this + 0x14) = iVar2;
      *psVar1 = 10;
      psVar1[4] = 0x3ed;
      psVar1[5] = 0;
      local_4 = (uint)local_4._1_3_ << 8;
      CString::~CString((CString *)&local_24);
      local_4 = 0xffffffff;
      CString::~CString((CString *)&local_20);
      ExceptionList = local_c;
      return 0x3ed;
    }
LAB_10002828:
    local_4 = (uint)local_4._1_3_ << 8;
    CString::~CString((CString *)&local_24);
    local_4 = 0xffffffff;
    CString::~CString((CString *)&local_20);
    uVar3 = 0;
  }
  ExceptionList = local_c;
  return uVar3;
}


// ---- FUN_100029f0 @ 100029f0

undefined4 __thiscall FUN_100029f0(void *this,char *param_1,short *param_2)

{
  int iVar1;
  short *psVar2;
  BSTR local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10009628;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CString::CString((CString *)&param_1,param_1);
  local_4 = 0;
  if (*(int *)((int)this + 0xc) == 0) {
    local_4 = 0xffffffff;
    *param_2 = 10;
    param_2[4] = 0x3fb;
    param_2[5] = 0;
    CString::~CString((CString *)&param_1);
    ExceptionList = local_c;
    return 0x3fb;
  }
  CString::MakeUpper((CString *)&param_1);
  iVar1 = FUN_10006090(*(void **)((int)this + 4),&local_10,param_1);
  if (iVar1 != 1) {
    CString::operator=((CString *)((int)this + 0x18),s_Unable_to_translate_mnemonic_1000d358);
    *(int *)((int)this + 0x14) = iVar1;
    local_4 = 0xffffffff;
    *param_2 = 10;
    param_2[4] = 1000;
    param_2[5] = 0;
    CString::~CString((CString *)&param_1);
    ExceptionList = local_c;
    return 1000;
  }
  local_18 = SysAllocString((OLECHAR *)&DAT_1000e43c);
  iVar1 = strncmp(param_1,&DAT_1000d354,2);
  if (iVar1 == 0) {
    iVar1 = FUN_10006130(*(void **)((int)this + 4),local_10,&local_14,&local_18);
    psVar2 = param_2;
    if (iVar1 != 1) {
      CString::operator=((CString *)((int)this + 0x18),s_Unable_to_get_value_1000d3b0);
      *(int *)((int)this + 0x14) = iVar1;
      local_4 = 0xffffffff;
      *param_2 = 10;
      param_2[4] = 0x3e9;
      param_2[5] = 0;
      CString::~CString((CString *)&param_1);
      ExceptionList = local_c;
      return 0x3e9;
    }
    if ((*param_2 != 8) && (*param_2 != 4)) {
      *param_2 = 4;
    }
    if (*param_2 != 8) {
LAB_10002d25:
      *param_2 = 4;
      *(undefined4 *)(param_2 + 4) = local_14;
      local_4 = 0xffffffff;
      CString::~CString((CString *)&param_1);
      ExceptionList = local_c;
      return 0;
    }
    iVar1 = FUN_100060f0(*(void **)((int)this + 4),local_10,local_14,&local_18);
    if (iVar1 != 1) {
      CString::operator=((CString *)((int)this + 0x18),s_Unable_to_get_scaled_value_1000d394);
      *(int *)((int)this + 0x14) = iVar1;
      *psVar2 = 10;
      psVar2[4] = 0x3e9;
      psVar2[5] = 0;
      local_4 = 0xffffffff;
      CString::~CString((CString *)&param_1);
      ExceptionList = local_c;
      return 0x3e9;
    }
  }
  else {
    iVar1 = strncmp(param_1,&DAT_1000d274,2);
    if (iVar1 != 0) {
      CString::operator=((CString *)((int)this + 0x18),s_Invalid_parameter___not_AP__DP_1000d218);
      local_4 = 0xffffffff;
      *param_2 = 10;
      param_2[4] = 0x3eb;
      param_2[5] = 0;
      CString::~CString((CString *)&param_1);
      ExceptionList = local_c;
      return 0x3eb;
    }
    iVar1 = FUN_10006130(*(void **)((int)this + 4),local_10,&local_14,&local_18);
    psVar2 = param_2;
    if (iVar1 != 1) {
      CString::operator=((CString *)((int)this + 0x18),s_Unable_to_get_value_1000d3b0);
      *(int *)((int)this + 0x14) = iVar1;
      local_4 = 0xffffffff;
      *param_2 = 10;
      param_2[4] = 0x3ea;
      param_2[5] = 0;
      CString::~CString((CString *)&param_1);
      ExceptionList = local_c;
      return 0x3ea;
    }
    if ((*param_2 != 8) && (*param_2 != 4)) {
      *param_2 = 8;
    }
    if (*param_2 != 8) goto LAB_10002d25;
    iVar1 = FUN_100060f0(*(void **)((int)this + 4),local_10,local_14,&local_18);
    if (iVar1 != 1) {
      CString::operator=((CString *)((int)this + 0x18),s_Unable_to_get_string_value_1000d378);
      *(int *)((int)this + 0x14) = iVar1;
      *psVar2 = 10;
      psVar2[4] = 0x3ea;
      psVar2[5] = 0;
      local_4 = 0xffffffff;
      CString::~CString((CString *)&param_1);
      ExceptionList = local_c;
      return 0x3ea;
    }
  }
  local_4 = 0xffffffff;
  *(BSTR *)(psVar2 + 4) = local_18;
  CString::~CString((CString *)&param_1);
  ExceptionList = local_c;
  return 0;
}


// ---- FUN_10002da0 @ 10002da0

undefined4 __thiscall FUN_10002da0(void *this,uchar *param_1)

{
  int iVar1;
  CString *pCVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  CString local_34 [4];
  CString local_30 [4];
  CString local_2c [4];
  BSTR local_28;
  undefined4 local_24;
  BSTR local_20;
  BSTR local_1c;
  CString local_18 [4];
  uint local_14;
  void *local_10;
  void *local_c;
  undefined1 *local_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  local_8 = &LAB_10009680;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CString::CString((CString *)&param_1,(char *)param_1);
  local_4._0_1_ = 0;
  local_4._1_3_ = 0;
  if (*(int *)((int)this + 0xc) == 0) {
    local_4 = 0xffffffff;
    CString::~CString((CString *)&param_1);
    ExceptionList = local_c;
    return 0x3fb;
  }
  CString::MakeUpper((CString *)&param_1);
  iVar1 = _mbscmp(param_1,(uchar *)s_CMD_FREEZE_ALL_1000d468);
  if (iVar1 != 0) {
    iVar1 = _mbscmp(param_1,(uchar *)s_CMD_UNFREEZE_ALL_1000d454);
    if (iVar1 != 0) {
      iVar1 = FUN_10003930((int)this);
      if (iVar1 == 0) {
        local_4 = 0xffffffff;
        CString::~CString((CString *)&param_1);
        ExceptionList = local_c;
        return 0x401;
      }
    }
  }
  iVar1 = strncmp((char *)param_1,&DAT_1000d450,3);
  if (iVar1 == 0) {
    iVar1 = FUN_10006090(*(void **)((int)this + 4),&local_24,param_1);
    if (iVar1 != 1) {
      CString::operator=((CString *)((int)this + 0x18),s_Unable_to_translate_mnemonic_1000d358);
      *(int *)((int)this + 0x14) = iVar1;
      local_4 = 0xffffffff;
      CString::~CString((CString *)&param_1);
      ExceptionList = local_c;
      return 0x3f3;
    }
    iVar1 = FUN_10006230(*(void **)((int)this + 4),local_24);
    if (iVar1 != 1) {
      CString::operator=((CString *)((int)this + 0x18),s_Unable_to_execute_CMD_command_1000d430);
      *(int *)((int)this + 0x14) = iVar1;
      local_4 = 0xffffffff;
      CString::~CString((CString *)&param_1);
      ExceptionList = local_c;
      return 0x3f4;
    }
  }
  else {
    iVar1 = strncmp((char *)param_1,&DAT_1000d42c,3);
    if (iVar1 == 0) {
      local_28 = SysAllocString((OLECHAR *)&DAT_1000e43c);
      local_1c = SysAllocString((OLECHAR *)&DAT_1000e43c);
      local_20 = SysAllocString((OLECHAR *)&DAT_1000e43c);
      iVar1 = FUN_100062c0(*(void **)((int)this + 4),&local_28,&local_1c,&local_20);
      CString::CString(local_30,(ushort *)local_28);
      local_4._0_1_ = 1;
      if (iVar1 == 1) {
        CString::CString(local_2c,&DAT_1000d408);
        uVar4 = 4;
        local_4._0_1_ = 2;
        CString::Mid((CString *)&param_1,(int)&local_14);
        local_8 = (undefined1 *)CONCAT31(local_8._1_3_,3);
        pCVar2 = (CString *)operator+((CString *)&local_1c,local_34);
        local_c = (void *)CONCAT31(local_c._1_3_,4);
        operator+((CString *)&stack0xffffffc4,pCVar2);
        local_10._0_1_ = 7;
        CString::~CString((CString *)&local_24);
        local_10 = (void *)CONCAT31(local_10._1_3_,6);
        CString::~CString((CString *)&local_20);
        iVar1 = FUN_10006290(*(void **)((int)this + 4),uVar4);
        if (iVar1 == 1) {
          local_10._0_1_ = 2;
          CString::~CString((CString *)&stack0xffffffc0);
          local_10._0_1_ = 1;
          CString::~CString((CString *)&stack0xffffffc8);
          local_10 = (void *)((uint)local_10._1_3_ << 8);
          CString::~CString((CString *)&stack0xffffffc4);
          goto LAB_100030e4;
        }
        pCVar2 = (CString *)
                 operator+((char *)&local_1c,(CString *)s_Unable_to_execute_Macro_File__1000d3e8);
        local_14._0_1_ = 8;
        CString::operator=((CString *)((int)this + 0x18),pCVar2);
        local_14._0_1_ = 6;
        CString::~CString((CString *)&local_20);
        *(int *)((int)this + 0x14) = iVar1;
        local_14._0_1_ = 2;
        CString::~CString((CString *)&stack0xffffffbc);
        local_14 = CONCAT31(local_14._1_3_,1);
        CString::~CString((CString *)&stack0xffffffc4);
      }
      else {
        CString::operator=((CString *)((int)this + 0x18),s_Unable_to_get_directories_1000d410);
        *(int *)((int)this + 0x14) = iVar1;
      }
      local_14 = local_14 & 0xffffff00;
      CString::~CString((CString *)&stack0xffffffc0);
      local_14 = 0xffffffff;
      CString::~CString((CString *)&local_c);
      ExceptionList = local_1c;
      return 0x3f5;
    }
    iVar1 = strncmp((char *)param_1,&DAT_1000d3e4,3);
    if (iVar1 != 0) {
      local_4 = 0xffffffff;
      CString::~CString((CString *)&param_1);
      ExceptionList = local_c;
      return 0x3f7;
    }
    puVar3 = (undefined4 *)CString::Mid((CString *)&param_1,(int)&local_14);
    local_8._0_1_ = 9;
    iVar1 = FUN_10006260(*(void **)((int)this + 4),*puVar3);
    local_8 = (undefined1 *)((uint)local_8._1_3_ << 8);
    CString::~CString(local_18);
    if (iVar1 != 1) {
      CString::operator=((CString *)((int)this + 0x18),s_Unable_to_execute_MCL_command_1000d3c4);
      *(int *)((int)this + 0x14) = iVar1;
      local_8 = (undefined1 *)0xffffffff;
      CString::~CString((CString *)&stack0x00000000);
      ExceptionList = local_10;
      return 0x3f6;
    }
  }
LAB_100030e4:
  local_8 = (undefined1 *)0xffffffff;
  CString::~CString((CString *)&stack0x00000000);
  ExceptionList = local_10;
  return 0;
}


// ---- FUN_100031c0 @ 100031c0

undefined4 __fastcall FUN_100031c0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    return 0x3fb;
  }
  iVar1 = FUN_100062f0(*(void **)(param_1 + 4));
  if (iVar1 != 1) {
    CString::operator=((CString *)(param_1 + 0x18),s_Unable_to_save_image_1000d478);
    *(int *)(param_1 + 0x14) = iVar1;
    return 0x3f8;
  }
  return 0;
}


// ---- FUN_10003230 @ 10003230

undefined4 __thiscall
FUN_10003230(int param_1,undefined2 *param_2,undefined2 *param_3,undefined2 *param_4,
            undefined2 *param_5,undefined2 *param_6,undefined2 *param_7)

{
  int iVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    return 0x3fb;
  }
  iVar1 = FUN_100063b0(*(void **)(param_1 + 4));
  if (iVar1 != 1) {
    CString::operator=((CString *)(param_1 + 0x18),s_Unable_to_get_stage_position_1000d490);
    *(int *)(param_1 + 0x14) = iVar1;
    *param_7 = 10;
    *param_6 = 10;
    *param_5 = 10;
    *param_4 = 10;
    *param_3 = 10;
    *param_2 = 10;
    *(undefined4 *)(param_7 + 4) = 0x3f9;
    *(undefined4 *)(param_6 + 4) = 0x3f9;
    *(undefined4 *)(param_5 + 4) = 0x3f9;
    *(undefined4 *)(param_4 + 4) = 0x3f9;
    *(undefined4 *)(param_3 + 4) = 0x3f9;
    *(undefined4 *)(param_2 + 4) = 0x3f9;
    return 0x3f9;
  }
  *param_7 = 4;
  *param_6 = 4;
  *param_5 = 4;
  *param_4 = 4;
  *param_3 = 4;
  *param_2 = 4;
  *(undefined4 *)(param_2 + 4) = uStack_18;
  *(undefined4 *)(param_3 + 4) = uStack_14;
  *(undefined4 *)(param_4 + 4) = uStack_10;
  *(undefined4 *)(param_5 + 4) = uStack_c;
  *(undefined4 *)(param_6 + 4) = uStack_8;
  *(undefined4 *)(param_7 + 4) = uStack_4;
  return 0;
}


// ---- FUN_10003350 @ 10003350

undefined4 __thiscall FUN_10003350(void *this,undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int *)((int)this + 0xc) == 0) {
    return 0x3fb;
  }
  iVar1 = FUN_10006340(*(void **)((int)this + 4),param_1,param_2);
  if (iVar1 != 1) {
    CString::operator=((CString *)((int)this + 0x18),s_Unable_to_move_stage_1000d4b0);
    *(int *)((int)this + 0x14) = iVar1;
    return 0x3fa;
  }
  return 0;
}


// ---- FUN_100033c0 @ 100033c0

undefined4 __thiscall FUN_100033c0(void *this,char *param_1,undefined4 param_2)

{
  int iVar1;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10009698;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = this;
  CString::CString((CString *)&param_1,param_1);
  local_4 = 0;
  if (*(int *)((int)this + 0xc) == 0) {
    local_4 = 0xffffffff;
    CString::~CString((CString *)&param_1);
    ExceptionList = local_c;
    return 0x3fb;
  }
  CString::MakeUpper((CString *)&param_1);
  iVar1 = FUN_10006090(*(void **)((int)this + 4),&local_10,param_1);
  if (iVar1 != 1) {
    CString::operator=((CString *)((int)this + 0x18),s_Unable_to_translate_mnemonic_1000d358);
    *(int *)((int)this + 0x14) = iVar1;
    local_4 = 0xffffffff;
    CString::~CString((CString *)&param_1);
    ExceptionList = local_c;
    return 0x3fc;
  }
  iVar1 = FUN_10006030(*(void **)((int)this + 4),local_10,param_2,0);
  if (iVar1 != 1) {
    CString::operator=((CString *)((int)this + 0x18),s_Unable_to_set_notification_for_p_1000d4c8);
    *(int *)((int)this + 0x14) = iVar1;
    local_4 = 0xffffffff;
    CString::~CString((CString *)&param_1);
    ExceptionList = local_c;
    return 0x3fd;
  }
  local_4 = 0xffffffff;
  CString::~CString((CString *)&param_1);
  ExceptionList = local_c;
  return 0;
}


// ---- FUN_10003500 @ 10003500

undefined4 __thiscall FUN_10003500(void *this,undefined2 *param_1)

{
  int iVar1;
  CString *pCVar2;
  CString local_18 [4];
  BSTR local_14;
  char local_10 [4];
  void *local_c;
  undefined1 *local_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  local_8 = &LAB_100096c0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CString::CString(local_18);
  local_4 = 0;
  local_14 = SysAllocString((OLECHAR *)&DAT_1000e43c);
  if (*(int *)((int)this + 0xc) != 0) {
    iVar1 = FUN_100060c0(*(void **)((int)this + 4),*(undefined4 *)((int)this + 0x14),&local_14);
    if (iVar1 == 1) {
      CString::operator=(local_18,(ushort *)local_14);
      pCVar2 = (CString *)operator+(local_10,(CString *)&DAT_1000d4f4);
      local_8._0_1_ = 1;
      CString::operator+=((CString *)&stack0xffffffe4,pCVar2);
      local_8 = (undefined1 *)((uint)local_8._1_3_ << 8);
      CString::~CString((CString *)&local_14);
      goto LAB_100035a5;
    }
  }
  CString::operator=(local_18,(CString *)((int)this + 0x18));
LAB_100035a5:
  local_14 = (BSTR)CString::AllocSysString(local_18);
  local_4 = 0xffffffff;
  *param_1 = 8;
  *(BSTR *)(param_1 + 4) = local_14;
  CString::~CString(local_18);
  ExceptionList = local_c;
  return 0;
}


// ---- FUN_100035f0 @ 100035f0

CString * __thiscall FUN_100035f0(void *this,CString *param_1,undefined4 param_2)

{
  int iVar1;
  BSTR local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_100096ef;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  if ((DAT_1000e444 & 1) == 0) {
    DAT_1000e444 = DAT_1000e444 | 1;
    ExceptionList = &local_c;
    CString::CString((CString *)&DAT_1000e440,&DAT_1000e43c);
    FUN_10009111((_onexit_t)&LAB_100036e0);
  }
  if (*(int *)((int)this + 0xc) == 0) {
    CString::CString(param_1,(CString *)&DAT_1000e440);
  }
  else {
    local_10 = SysAllocString((OLECHAR *)&DAT_1000e43c);
    iVar1 = FUN_10006060(*(void **)((int)this + 4),param_2,&local_10);
    if (iVar1 == 1) {
      CString::operator=((CString *)&DAT_1000e440,(ushort *)local_10);
    }
    CString::CString(param_1,(CString *)&DAT_1000e440);
  }
  local_4 = local_4 & 0xffffff00;
  CString::~CString((CString *)&stack0x00000010);
  ExceptionList = local_c;
  return param_1;
}


// ---- FUN_100036f0 @ 100036f0

undefined4 __fastcall FUN_100036f0(int param_1)

{
  HWND hWnd;
  BOOL BVar1;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    if (*(int **)(param_1 + 4) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 4) + 0x60))();
      if (*(int **)(param_1 + 4) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 4) + 4))(1);
      }
    }
    hWnd = (HWND)0x0;
    if (*(int *)(param_1 + 8) != 0) {
      hWnd = *(HWND *)(*(int *)(param_1 + 8) + 0x20);
    }
    BVar1 = IsWindow(hWnd);
    if (BVar1 != 0) {
      (**(code **)(**(int **)(param_1 + 8) + 0x60))();
    }
    *(undefined4 *)(param_1 + 0x10) = 1;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return 0;
}


// ---- FUN_10003750 @ 10003750

undefined4 __thiscall FUN_10003750(void *this,char *param_1,undefined2 *param_2,undefined2 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10009708;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CString::CString((CString *)&param_1,param_1);
  local_4 = 0;
  if (*(int *)((int)this + 0xc) == 0) {
    uVar2 = 0x3fb;
    *param_2 = 10;
  }
  else {
    CString::MakeUpper((CString *)&param_1);
    iVar1 = FUN_10006090(*(void **)((int)this + 4),&local_18,param_1);
    if (iVar1 == 1) {
      iVar1 = FUN_100061a0(*(void **)((int)this + 4),local_18,&local_14,&local_10);
      if (iVar1 == 1) {
        local_4 = 0xffffffff;
        *param_2 = 4;
        *(undefined4 *)(param_2 + 4) = local_14;
        *param_3 = 4;
        *(undefined4 *)(param_3 + 4) = local_10;
        CString::~CString((CString *)&param_1);
        ExceptionList = local_c;
        return 0;
      }
      CString::operator=((CString *)((int)this + 0x18),s_Unable_to_get_limits_1000d33c);
      *(int *)((int)this + 0x14) = iVar1;
      uVar2 = 0x3fe;
      *param_2 = 10;
    }
    else {
      CString::operator=((CString *)((int)this + 0x18),s_Unable_to_translate_mnemonic_1000d358);
      *(int *)((int)this + 0x14) = iVar1;
      uVar2 = 1000;
      *param_2 = 10;
    }
  }
  *(undefined4 *)(param_2 + 4) = uVar2;
  local_4 = 0xffffffff;
  *param_3 = 10;
  *(undefined4 *)(param_3 + 4) = uVar2;
  uVar2 = *(undefined4 *)(param_2 + 4);
  CString::~CString((CString *)&param_1);
  ExceptionList = local_c;
  return uVar2;
}


// ---- FUN_100038a0 @ 100038a0

undefined4 __thiscall FUN_100038a0(int param_1,undefined4 param_2,undefined2 *param_3)

{
  if (*(int *)(param_1 + 0xc) == 0) {
    return 0x3fb;
  }
  CString::operator=((CString *)(param_1 + 0x18),s_Not_implemented__yet__1000d4f8);
  *param_3 = 10;
  *(undefined4 *)(param_3 + 4) = 0x3ff;
  return 0x3ff;
}


// ---- FUN_100038e0 @ 100038e0

undefined4 __thiscall FUN_100038e0(void *this,undefined4 param_1,undefined2 *param_2)

{
  int iVar1;
  
  if (*(int *)((int)this + 0xc) == 0) {
    return 0x3fb;
  }
  iVar1 = FUN_10003930((int)this);
  if (iVar1 == 0) {
    return 0x401;
  }
  CString::operator=((CString *)((int)this + 0x18),s_Not_implemented__yet__1000d4f8);
  *param_2 = 10;
  *(undefined4 *)(param_2 + 4) = 0x3ff;
  return 0x3ff;
}


// ---- FUN_10003930 @ 10003930

undefined4 __fastcall FUN_10003930(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_100061d0(*(void **)(param_1 + 4),0x29);
  if (iVar1 != 1) {
    CString::operator=((CString *)(param_1 + 0x18),s_API_license_not_found_1000d510);
    *(int *)(param_1 + 0x14) = iVar1;
    return 0;
  }
  return 1;
}


// ---- FUN_10003970 @ 10003970

undefined4 * __fastcall FUN_10003970(undefined4 *param_1)

{
  CWnd *this;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10009764;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_GetRuntimeClass_1000ae64;
  local_4 = 0;
  CString::CString((CString *)(param_1 + 5));
  local_4._0_1_ = 1;
  FUN_10007900(param_1 + 6);
  param_1[6] = &PTR_FUN_1000afcc;
  local_4._0_1_ = 2;
  CString::CString((CString *)(param_1 + 0x35));
  local_4._0_1_ = 3;
  CString::CString((CString *)(param_1 + 0x36));
  local_4._0_1_ = 4;
  *param_1 = &PTR_GetRuntimeClass_1000af80;
  this = operator_new(0x40);
  local_4._0_1_ = 5;
  if (this == (CWnd *)0x0) {
    this = (CWnd *)0x0;
  }
  else {
    CWnd::CWnd(this);
    *(undefined ***)this = &PTR_GetRuntimeClass_1000ad58;
  }
  param_1[1] = this;
  *(undefined4 *)(this + 0x20) = 0;
  local_4 = CONCAT31(local_4._1_3_,4);
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  CString::operator=((CString *)(param_1 + 5),s_DDE_not_initialised_1000d528);
  ExceptionList = local_c;
  return param_1;
}


// ---- FUN_10003a60 @ 10003a60

undefined4 FUN_10003a60(void)

{
  return 1;
}


// ---- FUN_10003a70 @ 10003a70

void __fastcall FUN_10003a70(int param_1)

{
  DdeGetLastError(*(DWORD *)(param_1 + 4));
  return;
}


// ---- FUN_10003a80 @ 10003a80

undefined4 FUN_10003a80(void)

{
  return 0;
}


// ---- FUN_10003a90 @ 10003a90

undefined4 * __thiscall FUN_10003a90(void *this,byte param_1)

{
  FUN_10003ae0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- thunk_FUN_10007a30 @ 10003ab0

void __fastcall thunk_FUN_10007a30(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  puStack_8 = &LAB_10009e84;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_1000b484;
  iStack_4 = 9;
  FUN_10007af0((int)param_1);
  iStack_4._0_1_ = 8;
  FUN_10006740(param_1 + 0x28);
  iStack_4._0_1_ = 7;
  FUN_10006740(param_1 + 0x25);
  iStack_4._0_1_ = 6;
  FUN_10006740(param_1 + 0x22);
  iStack_4._0_1_ = 5;
  FUN_10006740(param_1 + 0x1f);
  iStack_4._0_1_ = 4;
  FUN_10006b30(param_1 + 0x15);
  iStack_4._0_1_ = 3;
  FUN_10007310((CObList *)(param_1 + 0xe));
  FUN_10006620(param_1 + 0xb);
  iStack_4._0_1_ = 1;
  CString::~CString((CString *)(param_1 + 10));
  iStack_4 = (uint)iStack_4._1_3_ << 8;
  FUN_10006d70((CObList *)(param_1 + 2));
  *param_1 = &PTR_GetRuntimeClass_1000ab84;
  ExceptionList = pvStack_c;
  return;
}


// ---- FUN_10003ac0 @ 10003ac0

undefined4 * __thiscall FUN_10003ac0(void *this,byte param_1)

{
  thunk_FUN_10007a30(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_10003ae0 @ 10003ae0

void __fastcall FUN_10003ae0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_100097aa;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_GetRuntimeClass_1000af80;
  local_4 = 3;
  CString::~CString((CString *)(param_1 + 0x36));
  local_4._0_1_ = 2;
  CString::~CString((CString *)(param_1 + 0x35));
  local_4._0_1_ = 1;
  FUN_10007a30(param_1 + 6);
  local_4 = (uint)local_4._1_3_ << 8;
  CString::~CString((CString *)(param_1 + 5));
  *param_1 = &PTR_GetRuntimeClass_1000ab84;
  ExceptionList = local_c;
  return;
}


// ---- FUN_10003b60 @ 10003b60

undefined4 __thiscall FUN_10003b60(void *param_1,char *param_2)

{
  bool bVar1;
  char *pcVar2;
  DWORD DVar3;
  AFX_MODULE_STATE *pAVar4;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  char *pcVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  HWND__ *pHVar11;
  HMENU__ *pHVar12;
  void *pvVar13;
  char acStack_100 [256];
  
  pvVar13 = (void *)0x0;
  pHVar12 = (HMENU__ *)0x0;
  pHVar11 = (HWND__ *)0x0;
  iVar10 = 0;
  iVar9 = 0;
  iVar8 = 0;
  iVar7 = 0;
  uVar6 = 0;
  pcVar5 = s_DDE_Message_Window_1000d65c;
  pcVar2 = AfxRegisterWndClass(0,(HICON__ *)0x0,(HBRUSH__ *)0x0,(HICON__ *)0x0);
  iVar7 = CWnd::CreateEx(*(CWnd **)((int)param_1 + 4),0,pcVar2,pcVar5,uVar6,iVar7,iVar8,iVar9,iVar10
                         ,pHVar11,pHVar12,pvVar13);
  if (iVar7 == 0) {
    CString::operator=((CString *)((int)param_1 + 0x14),s_API_OCX__Failed_to_create_messag_1000d630)
    ;
    return 0x3fb;
  }
  CString::operator=((CString *)((int)param_1 + 0xd4),param_2);
  CString::MakeUpper((CString *)((int)param_1 + 0xd4));
  DVar3 = GetCurrentThreadId();
  sprintf(acStack_100,s_API_DDE___Initialise_DDE___Threa_1000d600,DVar3);
  DAT_1000e450 = DVar3;
  pAVar4 = AfxGetModuleState();
  pvVar13 = (void *)((int)param_1 + 0x18);
  iVar7 = FUN_10007b40(pvVar13,*(char **)(pAVar4 + 0x10),0,(DWORD *)0x0);
  if (iVar7 == 0) {
    CString::operator=((CString *)((int)param_1 + 0x14),s_Unable_to_Initialise_DDE_1000d5e4);
    return 0x3fb;
  }
  iVar7 = FUN_10005040(param_1);
  if (iVar7 != 0) {
    CString::operator=((CString *)((int)param_1 + 0x14),s_Unable_to_connect_to_a_suitable_s_1000d5bc
                      );
    FUN_10007af0((int)pvVar13);
    return 0x3fb;
  }
  bVar1 = FUN_100057a0(param_1);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    CString::operator=((CString *)((int)param_1 + 0x14),s_Unable_to_communicate_with_serve_1000d598)
    ;
    FUN_10007af0((int)pvVar13);
    return 0x3fb;
  }
  bVar1 = FUN_10004ea0(param_1);
  if (CONCAT31(extraout_var_00,bVar1) != 0) {
    AfxMessageBox(s_Unable_to_find_server_drive_Plea_1000d55c,0,0);
    WNetConnectionDialog(*(HWND *)(*(int *)((int)param_1 + 4) + 0x20),1);
    bVar1 = FUN_10004ea0(param_1);
    if (CONCAT31(extraout_var_01,bVar1) != 0) {
      AfxMessageBox(s_Server_drive_still_not_found_1000d53c,0,0);
      CString::operator=((CString *)((int)param_1 + 0x14),s_Server_drive_still_not_found_1000d53c);
      FUN_10007af0((int)pvVar13);
      return 0x3fb;
    }
  }
  *(undefined4 *)((int)param_1 + 8) = 1;
  return 0;
}


// ---- FUN_10003d10 @ 10003d10

undefined4 __thiscall FUN_10003d10(void *this,char *param_1,short *param_2)

{
  int iVar1;
  CString *this_00;
  char *local_11c;
  CString local_118 [4];
  undefined4 local_114;
  undefined4 local_110;
  char local_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_100097ec;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CString::CString(local_118);
  local_4 = 0;
  CString::CString((CString *)&local_11c,param_1);
  local_4._0_1_ = 1;
  if (*(int *)((int)this + 8) == 0) {
    local_4 = (uint)local_4._1_3_ << 8;
    *param_2 = 10;
    param_2[4] = 0x3fb;
    param_2[5] = 0;
    CString::~CString((CString *)&local_11c);
    local_4 = 0xffffffff;
    CString::~CString(local_118);
    ExceptionList = local_c;
    return 0x3fb;
  }
  CString::MakeUpper((CString *)&local_11c);
  iVar1 = strncmp(local_11c,&DAT_1000d354,2);
  if (iVar1 == 0) {
    if (*param_2 != 4) {
      if (*param_2 == 8) {
        CString::operator=((CString *)((int)this + 0x14),s_Not_implemented__yet__1000d4f8);
        *param_2 = 10;
        param_2[4] = 0x3ee;
        param_2[5] = 0;
        local_4 = (uint)local_4._1_3_ << 8;
        CString::~CString((CString *)&local_11c);
        local_4 = 0xffffffff;
        CString::~CString(local_118);
        ExceptionList = local_c;
        return 0x3ee;
      }
      CString::operator=((CString *)((int)this + 0x14),s_Can_t_set_analogues_to_something_1000d6c0);
      *param_2 = 10;
      param_2[4] = 0x3f1;
      param_2[5] = 0;
      local_4 = (uint)local_4._1_3_ << 8;
      CString::~CString((CString *)&local_11c);
      local_4 = 0xffffffff;
      CString::~CString(local_118);
      ExceptionList = local_c;
      return 0x3f1;
    }
    sprintf(local_10c,&DAT_1000d710,(double)*(float *)(param_2 + 4));
    CString::CString((CString *)&local_114,local_10c);
    local_4._0_1_ = 2;
    iVar1 = (**(code **)(**(int **)((int)this + 0xc4) + 0x30))(1,param_1,local_114);
    if (iVar1 == 0) {
      CString::operator=((CString *)((int)this + 0x14),s_Can_t_set_value_1000d700);
      *param_2 = 10;
      param_2[4] = 0x3ee;
      param_2[5] = 0;
      local_4._0_1_ = 1;
      CString::~CString((CString *)&local_114);
      local_4 = (uint)local_4._1_3_ << 8;
      CString::~CString((CString *)&local_11c);
      local_4 = 0xffffffff;
      CString::~CString(local_118);
      ExceptionList = local_c;
      return 0x3ee;
    }
    this_00 = (CString *)&local_114;
  }
  else {
    iVar1 = strncmp(local_11c,&DAT_1000d274,2);
    if (iVar1 != 0) {
      CString::operator=((CString *)((int)this + 0x14),s_Parameter_type_must_be_AP_or_DP_1000d670);
      local_4 = (uint)local_4._1_3_ << 8;
      *param_2 = 10;
      param_2[4] = 0x3f2;
      param_2[5] = 0;
      CString::~CString((CString *)&local_11c);
      local_4 = 0xffffffff;
      CString::~CString(local_118);
      ExceptionList = local_c;
      return 0x3f2;
    }
    if (*param_2 != 8) {
      CString::operator=((CString *)((int)this + 0x14),s_Can_t_set_state_to_non_BSTR_1000d690);
      *param_2 = 10;
      param_2[4] = 0x3f1;
      param_2[5] = 0;
      local_4 = (uint)local_4._1_3_ << 8;
      CString::~CString((CString *)&local_11c);
      local_4 = 0xffffffff;
      CString::~CString(local_118);
      ExceptionList = local_c;
      return 0x3f1;
    }
    CString::operator=(local_118,*(ushort **)(param_2 + 4));
    CString::CString((CString *)&local_110,local_118);
    local_4._0_1_ = 3;
    iVar1 = (**(code **)(**(int **)((int)this + 200) + 0x30))(1,param_1,local_110);
    if (iVar1 == 0) {
      CString::operator=((CString *)((int)this + 0x14),s_Unable_to_set_state_1000d6ac);
      *param_2 = 10;
      param_2[4] = 0x3ed;
      param_2[5] = 0;
      local_4._0_1_ = 1;
      CString::~CString((CString *)&local_110);
      local_4 = (uint)local_4._1_3_ << 8;
      CString::~CString((CString *)&local_11c);
      local_4 = 0xffffffff;
      CString::~CString(local_118);
      ExceptionList = local_c;
      return 0x3ed;
    }
    this_00 = (CString *)&local_110;
  }
  local_4._0_1_ = 1;
  CString::~CString(this_00);
  local_4 = (uint)local_4._1_3_ << 8;
  CString::~CString((CString *)&local_11c);
  local_4 = 0xffffffff;
  CString::~CString(local_118);
  ExceptionList = local_c;
  return 0;
}


// ---- FUN_100040e0 @ 100040e0

undefined4 __thiscall FUN_100040e0(void *this,char *param_1,short *param_2)

{
  short *psVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  ushort *puVar5;
  CString *this_00;
  double dVar6;
  char *local_24;
  undefined4 local_20;
  char *local_1c;
  char *local_18;
  int local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  pcVar2 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10009820;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CString::CString((CString *)&local_24,param_1);
  local_4 = 0;
  CString::CString((CString *)&param_1);
  local_4._0_1_ = 1;
  if (*(int *)((int)this + 8) == 0) {
    local_4 = (uint)local_4._1_3_ << 8;
    *param_2 = 10;
    param_2[4] = 0x3fb;
    param_2[5] = 0;
    CString::~CString((CString *)&param_1);
    local_4 = 0xffffffff;
    CString::~CString((CString *)&local_24);
    ExceptionList = local_c;
    return 0x3fb;
  }
  CString::MakeUpper((CString *)&local_24);
  iVar3 = strncmp(local_24,&DAT_1000d354,2);
  psVar1 = param_2;
  if (iVar3 == 0) {
    if (*param_2 == 8) {
      CString::operator=((CString *)((int)this + 0x14),s_Not_implemented__yet__1000d4f8);
      *psVar1 = 10;
      psVar1[4] = 0x3e9;
      psVar1[5] = 0;
    }
    else {
      CString::CString((CString *)&param_2,pcVar2);
      local_4._0_1_ = 2;
      (**(code **)(**(int **)((int)this + 0xc4) + 0x20))(param_2,&local_1c,&local_14);
      if (local_14 != 0) {
        CString::operator=((CString *)&param_1,local_1c);
        operator_delete(local_1c);
        *psVar1 = 4;
        dVar6 = atof(param_1);
        *(float *)(psVar1 + 4) = (float)dVar6;
        this_00 = (CString *)&param_2;
        goto LAB_100042ea;
      }
      CString::operator=((CString *)((int)this + 0x14),s_Unable_to_get_value_1000d3b0);
      *psVar1 = 10;
      psVar1[4] = 0x3e9;
      psVar1[5] = 0;
      local_4._0_1_ = 1;
      CString::~CString((CString *)&param_2);
    }
    local_4 = (uint)local_4._1_3_ << 8;
    CString::~CString((CString *)&param_1);
    local_4 = 0xffffffff;
    CString::~CString((CString *)&local_24);
    uVar4 = 0x3e9;
  }
  else {
    iVar3 = strncmp(local_24,&DAT_1000d274,2);
    if (iVar3 != 0) {
      CString::operator=((CString *)((int)this + 0x14),s_Parameter_type_must_be_AP_or_DP_1000d670);
      local_4 = (uint)local_4._1_3_ << 8;
      *param_2 = 10;
      param_2[4] = 0x3eb;
      param_2[5] = 0;
      CString::~CString((CString *)&param_1);
      local_4 = 0xffffffff;
      CString::~CString((CString *)&local_24);
      ExceptionList = local_c;
      return 0x3eb;
    }
    CString::CString((CString *)&local_20,pcVar2);
    local_4._0_1_ = 3;
    (**(code **)(**(int **)((int)this + 200) + 0x20))(local_20,&local_18,&local_10);
    if (local_10 == 0) {
      CString::operator=((CString *)((int)this + 0x14),s_Unable_to_get_state_1000d714);
      local_4._0_1_ = 1;
      *param_2 = 10;
      param_2[4] = 0x3ea;
      param_2[5] = 0;
      CString::~CString((CString *)&local_20);
      local_4 = (uint)local_4._1_3_ << 8;
      CString::~CString((CString *)&param_1);
      local_4 = 0xffffffff;
      CString::~CString((CString *)&local_24);
      ExceptionList = local_c;
      return 0x3ea;
    }
    CString::operator=((CString *)&param_1,local_18);
    operator_delete(local_18);
    puVar5 = CString::AllocSysString((CString *)&param_1);
    *param_2 = 8;
    *(ushort **)(param_2 + 4) = puVar5;
    this_00 = (CString *)&local_20;
LAB_100042ea:
    local_4._0_1_ = 1;
    CString::~CString(this_00);
    local_4 = (uint)local_4._1_3_ << 8;
    CString::~CString((CString *)&param_1);
    local_4 = 0xffffffff;
    CString::~CString((CString *)&local_24);
    uVar4 = 0;
  }
  ExceptionList = local_c;
  return uVar4;
}


// ---- FUN_100043c0 @ 100043c0

undefined4 __thiscall FUN_100043c0(int param_1,char *param_2)

{
  int iVar1;
  void *unaff_ESI;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &DAT_10009838;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  CString::CString((CString *)&param_2,param_2);
  uStack_4 = 0;
  if (*(int *)(param_1 + 8) == 0) {
    uStack_4 = 0xffffffff;
    CString::~CString((CString *)&param_2);
    ExceptionList = pvStack_c;
    return 0x3fb;
  }
  CString::MakeUpper((CString *)&param_2);
  iVar1 = (**(code **)(**(int **)(param_1 + 0xcc) + 0x2c))(param_2);
  if (iVar1 == 0) {
    CString::operator=((CString *)(param_1 + 0x14),s_Unable_to_execute_command_1000d728);
    puStack_8 = (undefined *)0xffffffff;
    CString::~CString((CString *)&stack0x00000000);
    ExceptionList = unaff_ESI;
    return 0x3f7;
  }
  puStack_8 = (undefined *)0xffffffff;
  CString::~CString((CString *)&stack0x00000000);
  ExceptionList = unaff_ESI;
  return 0;
}


// ---- FUN_100044a0 @ 100044a0

undefined4 __thiscall
FUN_100044a0(void *this,undefined2 param_1,undefined2 param_2,short param_3,short param_4,
            short param_5,char *param_6)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 local_24;
  char *local_20;
  int local_1c;
  undefined2 local_18;
  undefined2 local_16;
  short local_14;
  short local_12;
  undefined2 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10009858;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CString::CString((CString *)&local_24);
  local_4 = 0;
  if (*(int *)((int)this + 8) == 0) {
    local_4 = 0xffffffff;
    CString::~CString((CString *)&local_24);
    ExceptionList = local_c;
    return 0x3fb;
  }
  local_18 = param_1;
  iVar1 = *(int *)((int)this + 0xdc);
  local_16 = param_2;
  local_12 = param_4;
  local_14 = param_3;
  local_10 = 0;
  if (iVar1 < 0) {
LAB_100047ba:
    pcVar3 = s_Unknown_server_type_1000d744;
  }
  else {
    if (1 < iVar1) {
      if (iVar1 == 2) {
        if (param_3 == 0x300) {
          if (param_4 != 0x240) {
LAB_100046b3:
            pcVar3 = s_Invalid_dimensions_of_image_1000d7f4;
            goto LAB_100047bf;
          }
          if (param_5 == -1) {
            pcVar3 = s_GRAB_MEDIUM_OVL_1000d8b0;
          }
          else {
            pcVar3 = s_GRAB_MEDIUM_1000d8a4;
          }
        }
        else {
          if ((param_3 != 0x600) || (param_4 != 0x480)) goto LAB_100046b3;
          pcVar3 = s_GRAB_HIGH_1000d898;
        }
        CString::operator=((CString *)&local_24,pcVar3);
        (**(code **)(**(int **)((int)this + 0xd0) + 0x20))(local_24,&local_20,&local_1c);
        if (local_1c == 0) {
          CString::operator=((CString *)((int)this + 0x14),s_Can_t_grab_image_1000d884);
        }
        else {
          iVar1 = strncmp(local_20,&DAT_1000d87c,4);
          if (iVar1 == 0) {
            operator_delete(local_20);
            (**(code **)(**(int **)((int)this + 0xd0) + 0x20))
                      (s_BMPFILE_1000d850,&local_20,&local_1c);
            if (local_1c == 0) {
              CString::operator=((CString *)((int)this + 0x14),s_Can_t_save_image_to_disk_1000d834);
              goto LAB_100047cf;
            }
            iVar1 = strncmp(local_20,&DAT_1000d87c,4);
            if (iVar1 == 0) {
              operator_delete(local_20);
              iVar1 = 0;
LAB_10004682:
              uVar2 = FUN_10005a50(this,param_6,iVar1);
              local_4 = 0xffffffff;
              CString::~CString((CString *)&local_24);
              ExceptionList = local_c;
              return uVar2;
            }
            pcVar3 = s_Unexpected_reply_from_image_save_1000d810;
          }
          else {
            pcVar3 = s_Unexpected_reply_from_image_grab_1000d858;
          }
          CString::operator=((CString *)((int)this + 0x14),pcVar3);
          operator_delete(local_20);
        }
        goto LAB_100047cf;
      }
      goto LAB_100047ba;
    }
    iVar1 = (**(code **)(**(int **)((int)this + 0xd0) + 0x30))(0x80,s_BMPINFO_1000d7ec,&local_18,9);
    if (iVar1 == 0) {
      pcVar3 = s_Can_t_set_Bitmap_parameters_1000d7d0;
    }
    else {
      iVar1 = (**(code **)(*(int *)this + 0x1c))(s_CMD_FREEZE_CHANNEL_1000d7bc);
      if (iVar1 == 0) {
        if (param_5 == -1) {
          pcVar3 = s_BMPFILEANN_1000d79c;
        }
        else {
          pcVar3 = s_BMPFILE_1000d850;
        }
        (**(code **)(**(int **)((int)this + 0xd0) + 0x20))(pcVar3,&local_20,&local_1c);
        if (local_1c != 0) {
          iVar1 = strncmp(local_20,&DAT_1000d87c,4);
          if (iVar1 != 0) {
            CString::operator=((CString *)((int)this + 0x14),
                               s_Unexpected_reply_from_image_save_1000d810);
            operator_delete(local_20);
            goto LAB_100047cf;
          }
          operator_delete(local_20);
          iVar1 = (**(code **)(*(int *)this + 0x1c))(s_CMD_UNFREEZE_CHANNEL_1000d770);
          if (iVar1 != 0) {
            CString::operator=((CString *)((int)this + 0x14),s_Can_t_unfreeze_image_1000d758);
            goto LAB_100047cf;
          }
          iVar1 = 1;
          goto LAB_10004682;
        }
        CString::operator=((CString *)((int)this + 0x14),s_Can_t_save_image_1000d788);
        goto LAB_100047cf;
      }
      pcVar3 = s_Can_t_freeze_image_1000d7a8;
    }
  }
LAB_100047bf:
  CString::operator=((CString *)((int)this + 0x14),pcVar3);
LAB_100047cf:
  local_4 = 0xffffffff;
  CString::~CString((CString *)&local_24);
  ExceptionList = local_c;
  return 0x3f8;
}


// ---- FUN_10004800 @ 10004800

undefined4 __thiscall
FUN_10004800(int *param_1,undefined2 *param_2,undefined2 *param_3,undefined2 *param_4,
            undefined2 *param_5,undefined2 *param_6,undefined2 *param_7)

{
  DWORD DVar1;
  int iVar2;
  char acStack_100 [240];
  int iStack_10;
  undefined4 uStack_c;
  
  DVar1 = GetCurrentThreadId();
  sprintf(acStack_100,s_API_DDE___GetStagePosition_DDE___1000d9b4,DVar1);
  if (DVar1 != DAT_1000e450) {
    AfxMessageBox(s_New_thread_ID_for_DDE__1000d99c,0,0);
    return 0;
  }
  *param_7 = 4;
  *param_6 = 4;
  *param_5 = 4;
  *param_4 = 4;
  *param_3 = 4;
  *param_2 = 4;
  iVar2 = (**(code **)(*param_1 + 0x18))(s_AP_STAGE_AT_X_1000d98c,param_2);
  if (iVar2 != 0) {
    CString::operator=((CString *)(param_1 + 5),s_Can_t_get_stage_X_position_1000d970);
    return 0x3f9;
  }
  iVar2 = (**(code **)(*param_1 + 0x18))(s_AP_STAGE_AT_Y_1000d960,param_3);
  if (iVar2 != 0) {
    CString::operator=((CString *)(param_1 + 5),s_Can_t_get_stage_Y_position_1000d944);
    return 0x3f9;
  }
  iVar2 = (**(code **)(*param_1 + 0x18))(s_AP_STAGE_AT_Z_1000d934,param_4);
  if (iVar2 != 0) {
    CString::operator=((CString *)(param_1 + 5),s_Can_t_get_stage_Z_position_1000d918);
    return 0x3f9;
  }
  iVar2 = (**(code **)(*param_1 + 0x18))(s_AP_STAGE_AT_T_1000d908,param_5);
  if (iVar2 != 0) {
    CString::operator=((CString *)(param_1 + 5),s_Can_t_get_stage_T_position_1000d8ec);
    return 0x3f9;
  }
  iVar2 = (**(code **)(*param_1 + 0x18))(s_AP_STAGE_AT_R_1000d8dc,uStack_c);
  if (iVar2 != 0) {
    CString::operator=((CString *)(param_1 + 5),s_Can_t_get_stage_R_position_1000d8c0);
    return 0x3f9;
  }
  *(undefined4 *)(iStack_10 + 8) = 0;
  return 0;
}


// ---- FUN_100049b0 @ 100049b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_100049b0(int *param_1,float param_2,float param_3,float param_4)

{
  int iVar1;
  
  if (param_1[2] == 0) {
    return 0x3fb;
  }
  if ((param_2 < _DAT_1000b00c) || (_DAT_1000b008 < param_2)) {
    CString::operator=((CString *)(param_1 + 5),s_X_position_out_of_range_0_0_1_1000d9e8);
    return 0x3fa;
  }
  if ((param_3 < _DAT_1000b00c) || (_DAT_1000b008 < param_3)) {
    CString::operator=((CString *)(param_1 + 5),s_Y_position_out_of_range_0_0_1_1000da08);
    return 0x3fa;
  }
  if ((_DAT_1000b00c <= param_4) && (param_4 <= _DAT_1000b008)) {
    iVar1 = param_1[0x37];
    if (-1 < iVar1) {
      if (iVar1 < 2) {
        iVar1 = (**(code **)(*param_1 + 0x14))();
        if (iVar1 != 0) {
          CString::operator=((CString *)(param_1 + 5),s_Can_t_set_stage_T_position_1000daa0);
          return 0x3fa;
        }
        iVar1 = (**(code **)(*param_1 + 0x14))(s_AP_STAGE_GOTO_R_1000da90);
        if (iVar1 != 0) {
          CString::operator=((CString *)(param_1 + 5),s_Can_t_set_stage_R_position_1000da74);
          return 0x3fa;
        }
        iVar1 = (**(code **)(*(int *)param_1[0x34] + 0x30))
                          (0x80,s_STAGEMOVE_1000da68,&stack0xffffffd4,0xd);
        if (iVar1 == 0) {
          CString::operator=((CString *)(param_1 + 5),s_Can_t_set_stage_XYZ_position_1000da48);
          return 0x3fa;
        }
        return 0;
      }
      if (iVar1 == 2) {
        CString::operator=((CString *)(param_1 + 5),s_Not_supported_1000dacc);
        return 0x3fa;
      }
    }
    CString::operator=((CString *)(param_1 + 5),s_Unknown_server_type_1000d744);
    return 0x3fa;
  }
  CString::operator=((CString *)(param_1 + 5),s_Z_position_out_of_range_0_0_1_1000da28);
  return 0x3fa;
}


// ---- FUN_10004bc0 @ 10004bc0

undefined4 __thiscall FUN_10004bc0(void *this,char *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  if (*(int *)((int)this + 8) == 0) {
    return 0x3fb;
  }
  iVar1 = strncmp(param_1,&DAT_1000d354,2);
  if (iVar1 == 0) {
    piVar2 = *(int **)((int)this + 0xc4);
    if (param_2 != 0) {
      iVar1 = (**(code **)(*piVar2 + 0x24))(param_1);
      if (iVar1 != 0) {
        return 0;
      }
      CString::operator=((CString *)((int)this + 0x14),s_Can_t_set_up_advise_loop_1000db0c);
      return 0x3fd;
    }
  }
  else {
    iVar1 = strncmp(param_1,&DAT_1000d274,2);
    if (iVar1 != 0) {
      CString::operator=((CString *)((int)this + 0x14),s_Unrecognised_Parameter_1000dadc);
      return 0x3fd;
    }
    piVar2 = *(int **)((int)this + 200);
    if (param_2 != 0) {
      iVar1 = (**(code **)(*piVar2 + 0x24))(param_1);
      if (iVar1 != 0) {
        return 0;
      }
      CString::operator=((CString *)((int)this + 0x14),s_Can_t_set_up_advise_loop_1000db0c);
      return 0x3fd;
    }
  }
  iVar1 = (**(code **)(*piVar2 + 0x28))(param_1);
  if (iVar1 != 0) {
    return 0;
  }
  CString::operator=((CString *)((int)this + 0x14),s_Can_t_unset_advise_loop_1000daf4);
  return 0x3fd;
}


// ---- FUN_10004cb0 @ 10004cb0

undefined4 __thiscall FUN_10004cb0(void *this,undefined2 *param_1)

{
  ushort *puVar1;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10009878;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = this;
  CString::CString((CString *)&local_10);
  local_4 = 0;
  SysAllocString((OLECHAR *)&DAT_1000e43c);
  CString::operator=((CString *)&local_10,(CString *)((int)this + 0x14));
  puVar1 = CString::AllocSysString((CString *)&local_10);
  local_4 = 0xffffffff;
  *param_1 = 8;
  *(ushort **)(param_1 + 4) = puVar1;
  CString::~CString((CString *)&local_10);
  ExceptionList = local_c;
  return 0;
}


// ---- FUN_10004d30 @ 10004d30

CString * __thiscall FUN_10004d30(void *this,CString *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_100098af;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  if ((DAT_1000e44c & 1) == 0) {
    DAT_1000e44c = DAT_1000e44c | 1;
    ExceptionList = &local_c;
    CString::CString((CString *)&DAT_1000e448,&DAT_1000e43c);
    FUN_10009111((_onexit_t)&LAB_10004df0);
  }
  if (*(int *)((int)this + 8) == 0) {
    CString::CString(param_1,(CString *)&DAT_1000e448);
  }
  else {
    CString::operator=((CString *)&DAT_1000e448,(CString *)&stack0x00000010);
    CString::CString(param_1,(CString *)&DAT_1000e448);
  }
  local_4 = local_4 & 0xffffff00;
  CString::~CString((CString *)&stack0x00000010);
  ExceptionList = local_c;
  return param_1;
}


// ---- FUN_10004e00 @ 10004e00

undefined4 __fastcall FUN_10004e00(int param_1)

{
  if (*(int *)(param_1 + 0xc) == 0) {
    if (*(int *)(param_1 + 8) == 0) {
      return 0x3fb;
    }
    if (*(int **)(param_1 + 0xc4) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xc4) + 0x18))();
      FUN_100064e0(*(int **)(param_1 + 0xc4));
    }
    if (*(int **)(param_1 + 200) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 200) + 0x18))();
      FUN_100064e0(*(int **)(param_1 + 200));
    }
    if (*(int **)(param_1 + 0xcc) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xcc) + 0x18))();
      FUN_100064e0(*(int **)(param_1 + 0xcc));
    }
    if (*(int **)(param_1 + 0xd0) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xd0) + 0x18))();
      FUN_100064e0(*(int **)(param_1 + 0xd0));
    }
    FUN_10007af0(param_1 + 0x18);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return 0;
}


// ---- FUN_10004ea0 @ 10004ea0

bool __fastcall FUN_10004ea0(void *param_1)

{
  DWORD DVar1;
  HGLOBAL lpBuffer;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uchar *local_28;
  DWORD local_24;
  DWORD local_20;
  HANDLE local_1c;
  int local_18;
  HGLOBAL local_14;
  DWORD local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_100098c8;
  local_c = ExceptionList;
  local_20 = 0x4000;
  local_24 = 0xffffffff;
  local_18 = 0;
  ExceptionList = &local_c;
  DVar1 = WNetOpenEnumA(1,0,0,(LPNETRESOURCEA)0x0,&local_1c);
  if (DVar1 != 0) {
    AfxMessageBox(s_Can_t_enumerate_network_drives_1000db54,0,0);
    ExceptionList = local_c;
    return true;
  }
  do {
    lpBuffer = GlobalAlloc(0x40,local_20);
    local_14 = lpBuffer;
    local_10 = WNetEnumResourceA(local_1c,&local_24,lpBuffer,&local_20);
    if (local_10 == 0) {
      uVar4 = 0;
      if (local_24 != 0) {
        piVar5 = (int *)((int)lpBuffer + 0x10);
        do {
          if (*piVar5 != 0) {
            pcVar2 = strtok((char *)piVar5[1],&DAT_1000db50);
            CString::CString((CString *)&local_28,pcVar2);
            local_4 = 0;
            CString::MakeUpper((CString *)&local_28);
            iVar3 = _mbscmp(local_28,*(uchar **)((int)param_1 + 0xd4));
            if ((iVar3 == 0) && (iVar3 = FUN_10005370(param_1,(CString *)*piVar5), iVar3 == 0)) {
              local_18 = 1;
            }
            local_4 = 0xffffffff;
            CString::~CString((CString *)&local_28);
          }
          uVar4 = uVar4 + 1;
          piVar5 = piVar5 + 8;
          lpBuffer = local_14;
        } while (uVar4 < local_24);
      }
    }
    else if (local_10 != 0x103) {
      AfxMessageBox(s_Unable_to_complete_drive_enumera_1000db28,0,0);
      GlobalFree(lpBuffer);
      break;
    }
    GlobalFree(lpBuffer);
  } while (local_10 != 0x103);
  WNetCloseEnum(local_1c);
  ExceptionList = local_c;
  return local_18 != 1;
}


// ---- FUN_10005040 @ 10005040

undefined4 __fastcall FUN_10005040(void *param_1)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 uVar2;
  undefined4 uVar3;
  CString *pCVar4;
  char *local_18;
  undefined1 *local_14;
  undefined1 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_100098f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CString::CString((CString *)&local_18);
  pCVar4 = (CString *)&local_18;
  local_14 = &stack0xffffffd4;
  local_4 = 0;
  uVar3 = extraout_ECX;
  CString::CString((CString *)&stack0xffffffd4,s_LEO_DDE_1000dbb0);
  local_10 = &stack0xffffffd0;
  local_4._0_1_ = 1;
  uVar2 = extraout_ECX_00;
  CString::CString((CString *)&stack0xffffffd0,s_LEO_VERSION__1000dba0);
  local_4._0_1_ = 0;
  iVar1 = FUN_100051f0(param_1,uVar2,uVar3,pCVar4);
  if (iVar1 == 0) {
    iVar1 = strncmp(local_18,&DAT_1000db9c,2);
    if (iVar1 == 0) {
      *(undefined4 *)((int)param_1 + 0xdc) = 0;
      local_4 = 0xffffffff;
      CString::~CString((CString *)&local_18);
      ExceptionList = local_c;
      return 0;
    }
    iVar1 = strncmp(local_18,&DAT_1000db98,3);
    if (iVar1 == 0) {
      *(undefined4 *)((int)param_1 + 0xdc) = 1;
      local_4 = 0xffffffff;
      CString::~CString((CString *)&local_18);
      ExceptionList = local_c;
      return 0;
    }
  }
  else {
    pCVar4 = (CString *)&local_18;
    local_10 = &stack0xffffffd4;
    uVar3 = extraout_ECX_01;
    CString::CString((CString *)&stack0xffffffd4,s_WINPCIT_DDE_1000db8c);
    local_14 = &stack0xffffffd0;
    local_4._0_1_ = 2;
    uVar2 = extraout_ECX_02;
    CString::CString((CString *)&stack0xffffffd0,s_WINPCIT_VERSION__1000db78);
    local_4 = (uint)local_4._1_3_ << 8;
    iVar1 = FUN_100051f0(param_1,uVar2,uVar3,pCVar4);
    if (iVar1 == 0) {
      iVar1 = strncmp(local_18,&DAT_1000db74,3);
      if (iVar1 == 0) {
        *(undefined4 *)((int)param_1 + 0xdc) = 2;
        local_4 = 0xffffffff;
        CString::~CString((CString *)&local_18);
        ExceptionList = local_c;
        return 0;
      }
    }
  }
  local_4 = 0xffffffff;
  CString::~CString((CString *)&local_18);
  ExceptionList = local_c;
  return 1;
}


// ---- FUN_100051f0 @ 100051f0

undefined4 __thiscall
FUN_100051f0(void *this,undefined4 param_1,undefined4 param_2,CString *param_3)

{
  int *piVar1;
  char *pcVar2;
  undefined4 unaff_EDI;
  char *pcVar3;
  CString local_1c [4];
  char *pcStack_18;
  void *local_14;
  int iStack_10;
  void *local_c;
  undefined1 *local_8;
  uint local_4;
  
  local_8 = &LAB_1000993a;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  local_14 = operator_new(0x18);
  local_4._0_1_ = 2;
  if (local_14 == (void *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = FUN_10005e30(local_14,(int)this + 0x18,*(undefined4 *)((int)this + 4));
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  if (piVar1 != (int *)0x0) {
    FUN_100064d0((int)piVar1);
    pcVar2 = (char *)operator+((char *)&local_14,(CString *)&DAT_1000dbc0);
    pcVar3 = s__NDDE__1000dbb8;
    local_8 = (undefined1 *)CONCAT31(local_8._1_3_,3);
    operator+((CString *)&stack0xffffffe0,pcVar2);
    local_c = (void *)CONCAT31(local_c._1_3_,5);
    CString::~CString(local_1c);
    (**(code **)(*piVar1 + 0x14))(unaff_EDI,local_4,pcVar3);
    (**(code **)(*piVar1 + 0x20))(local_8,&stack0xffffffd8,&stack0xffffffe0);
    if (iStack_10 != 0) {
      CString::operator=(param_3,pcStack_18);
      operator_delete(pcStack_18);
      FUN_100064e0(piVar1);
      local_4._0_1_ = 1;
      CString::~CString(local_1c);
      local_4 = (uint)local_4._1_3_ << 8;
      CString::~CString((CString *)&param_1);
      local_4 = 0xffffffff;
      CString::~CString((CString *)&param_2);
      ExceptionList = local_c;
      return 0;
    }
    FUN_100064e0(piVar1);
    local_4 = CONCAT31(local_4._1_3_,1);
    CString::~CString(local_1c);
  }
  local_4 = local_4 & 0xffffff00;
  CString::~CString((CString *)&param_1);
  local_4 = 0xffffffff;
  CString::~CString((CString *)&param_2);
  ExceptionList = local_c;
  return 1;
}


// ---- FUN_10005370 @ 10005370

undefined4 __thiscall FUN_10005370(void *this,CString *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  FILE *pFVar3;
  CString *pCVar4;
  CString *unaff_retaddr;
  CString local_44 [8];
  CString local_3c [4];
  CString local_38 [8];
  CString local_30 [4];
  CString local_2c [4];
  CString local_28 [4];
  CString local_24 [4];
  void *local_20;
  void *local_1c;
  void *local_18;
  void *local_14;
  void *local_10;
  CString *local_c;
  CString *local_8;
  CString *local_4;
  
  local_4 = (CString *)0xffffffff;
  local_8 = (CString *)&LAB_10009988;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CString::CString((CString *)&param_1,(char *)param_1);
  iVar1 = *(int *)((int)this + 0xdc);
  local_4 = (CString *)0x0;
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)operator+(local_2c,(char *)&param_1);
    pFVar3 = fopen((char *)*puVar2,&DAT_1000dc94);
    CString::~CString(local_30);
    if (pFVar3 != (FILE *)0x0) {
      pCVar4 = (CString *)operator+(local_2c,&stack0x00000000);
      local_c._0_1_ = (CString)0x2;
      CString::operator=(unaff_retaddr,pCVar4);
      local_c = (CString *)((uint)local_c._1_3_ << 8);
      CString::~CString(local_30);
      local_c = (CString *)0xffffffff;
      CString::~CString((CString *)&local_4);
      ExceptionList = local_14;
      return 0;
    }
    puVar2 = (undefined4 *)operator+(local_28,&stack0x00000000);
    pFVar3 = fopen((char *)*puVar2,&DAT_1000dc94);
    CString::~CString(local_2c);
    if (pFVar3 != (FILE *)0x0) {
      pCVar4 = (CString *)operator+(local_28,(char *)&local_4);
      local_10._0_1_ = (CString)0x3;
      CString::operator=(local_4,pCVar4);
      local_10 = (void *)((uint)local_10._1_3_ << 8);
      CString::~CString(local_2c);
      local_10 = (void *)0xffffffff;
      CString::~CString((CString *)&local_8);
      ExceptionList = local_18;
      return 0;
    }
    puVar2 = (undefined4 *)operator+(local_24,(char *)&local_4);
    pFVar3 = fopen((char *)*puVar2,&DAT_1000dc94);
    CString::~CString(local_28);
    if (pFVar3 != (FILE *)0x0) {
      pCVar4 = (CString *)operator+(local_24,(char *)&local_8);
      local_14._0_1_ = 4;
      CString::operator=(local_8,pCVar4);
      local_14 = (void *)((uint)local_14._1_3_ << 8);
      CString::~CString(local_28);
      local_14 = (void *)0xffffffff;
      CString::~CString((CString *)&local_c);
      ExceptionList = local_1c;
      return 0;
    }
    puVar2 = (undefined4 *)operator+((CString *)&local_20,(char *)&local_8);
    pFVar3 = fopen((char *)*puVar2,&DAT_1000dc94);
    CString::~CString(local_24);
    if (pFVar3 != (FILE *)0x0) {
      pCVar4 = (CString *)operator+((CString *)&local_20,(char *)&local_c);
      local_18._0_1_ = 5;
      CString::operator=(local_c,pCVar4);
      local_18 = (void *)((uint)local_18._1_3_ << 8);
      pCVar4 = local_24;
LAB_10005742:
      CString::~CString(pCVar4);
      local_18 = (void *)0xffffffff;
      CString::~CString((CString *)&local_10);
      ExceptionList = local_20;
      return 0;
    }
  }
  else if (iVar1 == 1) {
    puVar2 = (undefined4 *)operator+(local_38,(char *)&param_1);
    pFVar3 = fopen((char *)*puVar2,&DAT_1000dc94);
    CString::~CString(local_3c);
    if (pFVar3 != (FILE *)0x0) {
LAB_100053fd:
      CString::operator=(param_1,(CString *)&stack0x00000000);
      local_8 = (CString *)0xffffffff;
      CString::~CString((CString *)&stack0x00000000);
      ExceptionList = local_10;
      return 0;
    }
    puVar2 = (undefined4 *)operator+(local_38,&stack0x00000000);
    pFVar3 = fopen((char *)*puVar2,&DAT_1000dc94);
    CString::~CString(local_3c);
    if (pFVar3 != (FILE *)0x0) {
      pCVar4 = (CString *)operator+(local_38,(char *)&local_4);
      local_10._0_1_ = (CString)0x1;
      CString::operator=(local_4,pCVar4);
      local_10 = (void *)((uint)local_10._1_3_ << 8);
      pCVar4 = local_3c;
      goto LAB_10005742;
    }
  }
  else if (iVar1 == 2) {
    puVar2 = (undefined4 *)operator+(local_44,(char *)&param_1);
    pFVar3 = fopen((char *)*puVar2,&DAT_1000dc94);
    CString::~CString((CString *)&stack0xffffffb8);
    if (pFVar3 != (FILE *)0x0) goto LAB_100053fd;
    puVar2 = (undefined4 *)operator+(local_44,&stack0x00000000);
    pFVar3 = fopen((char *)*puVar2,&DAT_1000dc94);
    CString::~CString((CString *)&stack0xffffffb8);
    if (pFVar3 != (FILE *)0x0) {
      pCVar4 = (CString *)operator+(local_44,(char *)&local_4);
      local_10._0_1_ = (CString)0x6;
      CString::operator=(local_4,pCVar4);
      local_10 = (void *)((uint)local_10._1_3_ << 8);
      pCVar4 = (CString *)&stack0xffffffb8;
      goto LAB_10005742;
    }
  }
  local_14 = (void *)0xffffffff;
  CString::~CString((CString *)&local_c);
  ExceptionList = local_1c;
  return 1;
}


// ---- FUN_100057a0 @ 100057a0

bool __fastcall FUN_100057a0(void *param_1)

{
  int iVar1;
  void *pvStack_c;
  
  iVar1 = *(int *)((int)param_1 + 0xdc);
  if (-1 < iVar1) {
    pvStack_c = param_1;
    if (iVar1 < 2) {
      CString::CString((CString *)&pvStack_c,s_LEO_ANALOGUES__1000dcd4);
      iVar1 = FUN_10005900(param_1,(int *)((int)param_1 + 0xc4));
      if (iVar1 == 0) {
        CString::CString((CString *)&pvStack_c,s_LEO_DIGITALS__1000dcc4);
        iVar1 = FUN_10005900(param_1,(int *)((int)param_1 + 200));
        if (iVar1 == 0) {
          CString::CString((CString *)&pvStack_c,s_LEO_CMD__1000dcb8);
          iVar1 = FUN_10005900(param_1,(int *)((int)param_1 + 0xcc));
          if (iVar1 == 0) {
            CString::CString((CString *)&pvStack_c,s_LEO_SPECIAL__1000dca8);
            iVar1 = FUN_10005900(param_1,(int *)((int)param_1 + 0xd0));
            return iVar1 != 0;
          }
        }
      }
    }
    else if (iVar1 == 2) {
      CString::CString((CString *)&pvStack_c,s_WINPCIT_ANALOGUES__1000dd1c);
      iVar1 = FUN_10005900(param_1,(int *)((int)param_1 + 0xc4));
      if (iVar1 == 0) {
        CString::CString((CString *)&pvStack_c,s_WINPCIT_DIGITALS__1000dd08);
        iVar1 = FUN_10005900(param_1,(int *)((int)param_1 + 200));
        if (iVar1 == 0) {
          CString::CString((CString *)&pvStack_c,s_WINPCIT_CMD__1000dcf8);
          iVar1 = FUN_10005900(param_1,(int *)((int)param_1 + 0xcc));
          if (iVar1 == 0) {
            CString::CString((CString *)&pvStack_c,s_WINPCIT_SPECIAL__1000dce4);
            iVar1 = FUN_10005900(param_1,(int *)((int)param_1 + 0xd0));
            return iVar1 != 0;
          }
        }
      }
    }
  }
  return true;
}


// ---- FUN_10005900 @ 10005900

undefined4 __thiscall FUN_10005900(void *this,int *param_1)

{
  int *piVar1;
  void *this_00;
  undefined4 *puVar2;
  char *pcVar3;
  void *unaff_ESI;
  undefined4 unaff_retaddr;
  char *pcVar4;
  void *local_c;
  undefined1 *local_8;
  int local_4;
  
  local_8 = &LAB_100099c2;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  this_00 = operator_new(0x18);
  local_4._0_1_ = (CString)0x1;
  if (this_00 == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_10005e30(this_00,(int)this + 0x18,*(undefined4 *)((int)this + 4));
  }
  piVar1 = param_1;
  local_4 = (uint)local_4._1_3_ << 8;
  *param_1 = (int)puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    local_4 = 0xffffffff;
    CString::~CString((CString *)&stack0x00000008);
    ExceptionList = local_c;
    return 1;
  }
  FUN_100064d0((int)puVar2);
  pcVar3 = (char *)operator+((char *)&param_1,(CString *)&DAT_1000dbc0);
  pcVar4 = s__NDDE__1000dbb8;
  local_8 = (undefined1 *)CONCAT31(local_8._1_3_,2);
  operator+((CString *)&stack0xffffffe8,pcVar3);
  local_c = (void *)CONCAT31(local_c._1_3_,4);
  CString::~CString((CString *)&local_4);
  (**(code **)(*(int *)*piVar1 + 0x14))(unaff_ESI,unaff_retaddr,pcVar4);
  if (*piVar1 == 0) {
    FUN_100064e0((int *)0x0);
    *piVar1 = 0;
    CString::~CString((CString *)&stack0xffffffdc);
    CString::~CString((CString *)&local_8);
    ExceptionList = unaff_ESI;
    return 1;
  }
  CString::~CString((CString *)&stack0xffffffdc);
  CString::~CString((CString *)&local_8);
  ExceptionList = unaff_ESI;
  return 0;
}


// ---- FUN_10005a50 @ 10005a50

undefined4 __thiscall FUN_10005a50(void *this,char *param_1,int param_2)

{
  char *pcVar1;
  void *pvVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined1 local_44 [10];
  undefined4 local_3a;
  AFX_EXCEPTION_LINK local_34 [12];
  CFile *local_28;
  CString local_24 [4];
  int local_20;
  char *local_1c;
  char *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10009a04;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffb0;
  ExceptionList = &local_10;
  pcVar1 = (char *)operator+(local_24,(char *)((int)this + 0xd8));
  local_8 = 0;
  operator+((CString *)&local_1c,pcVar1);
  local_8._0_1_ = 2;
  CString::~CString(local_24);
  CString::CString((CString *)&local_18,param_1);
  local_8._0_1_ = 3;
  local_20 = 0;
  pvVar2 = operator_new(0x7fff);
  AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(local_34);
  local_8._0_1_ = 5;
  local_28 = operator_new(0x10);
  local_8._0_1_ = 6;
  if (local_28 == (CFile *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)CFile::CFile(local_28,local_1c,0);
  }
  local_8._0_1_ = 5;
  local_28 = operator_new(0x10);
  local_8._0_1_ = 7;
  if (local_28 == (CFile *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)CFile::CFile(local_28,local_18,0x1001);
  }
  local_8 = CONCAT31(local_8._1_3_,5);
  if (param_2 != 0) {
    (**(code **)(*piVar3 + 0x3c))(local_44,0xe);
    local_3a = 0x436;
    (**(code **)(*piVar4 + 0x40))(local_44,0xe);
  }
  do {
    iVar5 = (**(code **)(*piVar3 + 0x3c))(pvVar2,0x7fff);
    (**(code **)(*piVar4 + 0x40))(pvVar2,iVar5);
  } while (iVar5 != 0);
  (**(code **)(*piVar3 + 0x54))();
  (**(code **)(*piVar4 + 0x54))();
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))(1);
  }
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 4))(1);
  }
  local_8 = 3;
  AfxTryCleanup();
  operator_delete(pvVar2);
  local_8 = CONCAT31(local_8._1_3_,2);
  if (local_20 == 1) {
    CString::~CString((CString *)&local_18);
    local_8 = 0xffffffff;
    CString::~CString((CString *)&local_1c);
    ExceptionList = local_10;
    return 1;
  }
  CString::~CString((CString *)&local_18);
  local_8 = 0xffffffff;
  CString::~CString((CString *)&local_1c);
  ExceptionList = local_10;
  return 0;
}


// ---- Catch@10005bf4 @ 10005bf4

undefined4 Catch_10005bf4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = 1;
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0x28);
  return 0x10005ba1;
}


// ---- AfxTryCleanup @ 10005c30

void AfxTryCleanup(void)

{
                    /* WARNING: Could not recover jumptable at 0x10008e6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AfxTryCleanup();
  return;
}


// ---- FUN_10005c40 @ 10005c40

undefined4 __thiscall
FUN_10005c40(int param_1,undefined4 param_2,undefined2 *param_3,undefined2 *param_4)

{
  if (*(int *)(param_1 + 8) == 0) {
    return 0x3fb;
  }
  CString::operator=((CString *)(param_1 + 0x14),s_Not_implemented__yet__1000d4f8);
  *param_3 = 10;
  *param_4 = 10;
  *(undefined4 *)(param_3 + 4) = 0x3fe;
  *(undefined4 *)(param_4 + 4) = 0x3fe;
  return *(undefined4 *)(param_3 + 4);
}


// ---- FUN_10005c80 @ 10005c80

undefined4 __thiscall FUN_10005c80(int param_1,undefined4 param_2,undefined2 *param_3)

{
  if (*(int *)(param_1 + 8) == 0) {
    return 0x3fb;
  }
  CString::operator=((CString *)(param_1 + 0x14),s_Not_implemented__yet__1000d4f8);
  *param_3 = 10;
  *(undefined4 *)(param_3 + 4) = 0x3ff;
  return 0x3ff;
}


// ---- FUN_10005cc0 @ 10005cc0

undefined4 * FUN_10005cc0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10009a1a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0xac);
  local_4 = 0;
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_10007900(puVar1);
    *puVar1 = &PTR_FUN_1000afcc;
    puVar2 = puVar1;
  }
  ExceptionList = local_c;
  return puVar2;
}


// ---- FUN_10005d20 @ 10005d20

undefined ** FUN_10005d20(void)

{
  return &PTR_s_CMyClient_1000b010;
}


// ---- FUN_10005d30 @ 10005d30

void FUN_10005d30(undefined4 param_1,char *param_2)

{
  char acStack_400 [1024];
  
  vsprintf(acStack_400,param_2,&stack0x0000000c);
  return;
}


// ---- FUN_10005d60 @ 10005d60

undefined4 * FUN_10005d60(void)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10009a3a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x18);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = FUN_10005de0(puVar1);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


// ---- FUN_10005dc0 @ 10005dc0

undefined ** FUN_10005dc0(void)

{
  return &PTR_s_CDDEConv_1000b1e0;
}


// ---- FUN_10005dd0 @ 10005dd0

undefined ** FUN_10005dd0(void)

{
  return &PTR_s_CMyConv_1000b028;
}


// ---- FUN_10005de0 @ 10005de0

undefined4 * __fastcall FUN_10005de0(undefined4 *param_1)

{
  FUN_10006df0(param_1);
  *param_1 = &PTR_FUN_1000b040;
  param_1[5] = 0;
  return param_1;
}


// ---- FUN_10005e00 @ 10005e00

undefined4 * __thiscall FUN_10005e00(void *this,byte param_1)

{
  thunk_FUN_10006e90(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- thunk_FUN_10006e90 @ 10005e20

void __fastcall thunk_FUN_10006e90(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  puStack_8 = &LAB_10009c38;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_1000b374;
  uStack_4 = 0;
  FUN_10006ee0((int)param_1);
  FUN_100064c0(param_1);
  ExceptionList = pvStack_c;
  return;
}


// ---- FUN_10005e30 @ 10005e30

undefined4 * __thiscall FUN_10005e30(void *this,undefined4 param_1,undefined4 param_2)

{
  FUN_10006e30(this,param_1);
  *(undefined ***)this = &PTR_FUN_1000b040;
  *(undefined4 *)((int)this + 0x14) = param_2;
  return this;
}


// ---- FUN_10005e50 @ 10005e50

undefined4 FUN_10005e50(undefined4 param_1,undefined4 param_2,char *param_3)

{
  if ((DAT_1000e458 & 1) == 0) {
    DAT_1000e458 = DAT_1000e458 | 1;
    CString::CString((CString *)&DAT_1000e454);
    FUN_10009111((_onexit_t)&LAB_10005eb0);
  }
  CString::operator=((CString *)&DAT_1000e454,param_3);
  CString::CString((CString *)&stack0xfffffff8,(CString *)&DAT_1000e454);
  FUN_10005f40();
  return 1;
}


// ---- FUN_10005ed0 @ 10005ed0

undefined ** FUN_10005ed0(void)

{
  return &PTR_LAB_1000b078;
}


// ---- FUN_10005ef0 @ 10005ef0

undefined ** FUN_10005ef0(void)

{
  return &PTR_LAB_1000b098;
}


// ---- FUN_10005f40 @ 10005f40

void FUN_10005f40(void)

{
  undefined4 uStack_14;
  undefined1 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10009a58;
  local_c = ExceptionList;
  local_10 = (undefined1 *)&uStack_14;
  local_4 = 0;
  ExceptionList = &local_c;
  CString::CString((CString *)&uStack_14,(CString *)&stack0x00000004);
  FUN_10001b00(DAT_1000e36c,0,(int *)0x0);
  local_4 = 0xffffffff;
  uStack_14 = 0x10005f8f;
  CString::~CString((CString *)&stack0x00000004);
  ExceptionList = local_c;
  return;
}


// ---- FUN_10005fa0 @ 10005fa0

void __fastcall FUN_10005fa0(CWnd *param_1)

{
  CWnd::PostNcDestroy(param_1);
  if (param_1 != (CWnd *)0x0) {
    (**(code **)(*(int *)param_1 + 4))(1);
  }
  return;
}


// ---- FUN_10005fc0 @ 10005fc0

CWnd * FUN_10005fc0(void)

{
  CWnd *this;
  CWnd *pCVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10009a7a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = operator_new(0x40);
  local_4 = 0;
  pCVar1 = (CWnd *)0x0;
  if (this != (CWnd *)0x0) {
    CWnd::CWnd(this);
    *(undefined ***)this = &PTR_FUN_1000aec0;
    pCVar1 = this;
  }
  ExceptionList = local_c;
  return pCVar1;
}


// ---- FUN_10006020 @ 10006020

undefined ** FUN_10006020(void)

{
  return &PTR_s_CParamMgr_1000b120;
}


// ---- FUN_10006030 @ 10006030

undefined4 __thiscall
FUN_10006030(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 in_stack_00000020;
  
  CWnd::InvokeHelper(this,(long)this,1,1,(void *)0x3,(uchar *)&param_3);
  return in_stack_00000020;
}


// ---- FUN_10006060 @ 10006060

undefined4 __thiscall FUN_10006060(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 in_stack_0000001c;
  
  CWnd::InvokeHelper(this,(long)this,8,1,(void *)0x3,(uchar *)&param_2);
  return in_stack_0000001c;
}


// ---- FUN_10006090 @ 10006090

undefined4 __thiscall FUN_10006090(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 in_stack_0000001c;
  
  CWnd::InvokeHelper(this,(long)this,9,1,(void *)0x3,(uchar *)&param_2);
  return in_stack_0000001c;
}


// ---- FUN_100060c0 @ 100060c0

undefined4 __thiscall FUN_100060c0(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 in_stack_0000001c;
  
  CWnd::InvokeHelper(this,(long)this,0xe,1,(void *)0x3,(uchar *)&param_2);
  return in_stack_0000001c;
}


// ---- FUN_100060f0 @ 100060f0

undefined4 __thiscall
FUN_100060f0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 in_stack_00000020;
  
  CWnd::InvokeHelper(this,(long)this,0xb,1,(void *)0x3,(uchar *)&param_3);
  return in_stack_00000020;
}


// ---- FUN_10006130 @ 10006130

undefined4 __thiscall
FUN_10006130(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 in_stack_00000020;
  
  CWnd::InvokeHelper(this,(long)this,10,1,(void *)0x3,(uchar *)&param_3);
  return in_stack_00000020;
}


// ---- FUN_10006160 @ 10006160

undefined4 __thiscall
FUN_10006160(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 in_stack_00000020;
  
  CWnd::InvokeHelper(this,(long)this,0x13,1,(void *)0x3,(uchar *)&param_3);
  return in_stack_00000020;
}


// ---- FUN_100061a0 @ 100061a0

undefined4 __thiscall
FUN_100061a0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 in_stack_00000020;
  
  CWnd::InvokeHelper(this,(long)this,0x19,1,(void *)0x3,(uchar *)&param_3);
  return in_stack_00000020;
}


// ---- FUN_100061d0 @ 100061d0

undefined4 __thiscall FUN_100061d0(void *this,undefined4 param_1)

{
  undefined4 in_stack_00000018;
  
  CWnd::InvokeHelper(this,(long)this,0x1c,1,(void *)0x3,(uchar *)&param_1);
  return in_stack_00000018;
}


// ---- FUN_10006230 @ 10006230

undefined4 __thiscall FUN_10006230(void *this,undefined4 param_1)

{
  undefined4 in_stack_00000018;
  
  CWnd::InvokeHelper(this,(long)this,0x20,1,(void *)0x3,(uchar *)&param_1);
  return in_stack_00000018;
}


// ---- FUN_10006260 @ 10006260

undefined4 __thiscall FUN_10006260(void *this,undefined4 param_1)

{
  undefined4 in_stack_00000018;
  
  CWnd::InvokeHelper(this,(long)this,0x25,1,(void *)0x3,(uchar *)&param_1);
  return in_stack_00000018;
}


// ---- FUN_10006290 @ 10006290

undefined4 __thiscall FUN_10006290(void *this,undefined4 param_1)

{
  undefined4 in_stack_00000018;
  
  CWnd::InvokeHelper(this,(long)this,0x26,1,(void *)0x3,(uchar *)&param_1);
  return in_stack_00000018;
}


// ---- FUN_100062c0 @ 100062c0

undefined4 __thiscall
FUN_100062c0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 in_stack_00000020;
  
  CWnd::InvokeHelper(this,(long)this,0x33,1,(void *)0x3,(uchar *)&param_3);
  return in_stack_00000020;
}


// ---- FUN_100062f0 @ 100062f0

undefined4 __thiscall FUN_100062f0(void *this)

{
  undefined4 in_stack_00000028;
  
  CWnd::InvokeHelper(this,(long)this,0x39,1,(void *)0x3,&stack0x00000014);
  return in_stack_00000028;
}


// ---- FUN_10006340 @ 10006340

undefined4 __thiscall FUN_10006340(void *this,undefined4 param_1,undefined4 param_2)

{
  uchar local_c [8];
  
  CWnd::InvokeHelper(this,(long)this,0x3c,1,(void *)0x3,local_c);
  return param_2;
}


// ---- FUN_100063b0 @ 100063b0

undefined4 __thiscall FUN_100063b0(void *this)

{
  undefined4 in_stack_0000002c;
  
  CWnd::InvokeHelper(this,(long)this,0x3d,1,(void *)0x3,&stack0x00000018);
  return in_stack_0000002c;
}


// ---- FUN_100063f0 @ 100063f0

undefined4 __thiscall
FUN_100063f0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 in_stack_00000020;
  
  CWnd::InvokeHelper(this,(long)this,0x3e,1,(void *)0x3,(uchar *)&param_3);
  return in_stack_00000020;
}


// ---- FUN_10006430 @ 10006430

undefined4 FUN_10006430(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10009a9a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(8);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = FUN_10006490(puVar1);
    ExceptionList = local_c;
    return uVar2;
  }
  ExceptionList = local_c;
  return 0;
}


// ---- FUN_10006490 @ 10006490

void __fastcall FUN_10006490(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_1000b2a0;
  param_1[1] = 0;
  return;
}


// ---- FUN_100064a0 @ 100064a0

undefined4 * __thiscall FUN_100064a0(void *this,byte param_1)

{
  FUN_100064c0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_100064c0 @ 100064c0

void __fastcall FUN_100064c0(undefined4 *param_1)

{
  *param_1 = &PTR_GetRuntimeClass_1000ab84;
  return;
}


// ---- FUN_100064d0 @ 100064d0

void __fastcall FUN_100064d0(int param_1)

{
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  return;
}


// ---- FUN_100064e0 @ 100064e0

int __fastcall FUN_100064e0(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[1] + -1;
  param_1[1] = iVar1;
  if ((iVar1 == 0) && (param_1 != (int *)0x0)) {
    (**(code **)(*param_1 + 4))(1);
  }
  return iVar1;
}


// ---- FUN_10006500 @ 10006500

undefined4 FUN_10006500(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10009aba;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0xc);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = FUN_10006570(puVar1);
    ExceptionList = local_c;
    return uVar2;
  }
  ExceptionList = local_c;
  return 0;
}


// ---- FUN_10006560 @ 10006560

undefined ** FUN_10006560(void)

{
  return &PTR_DAT_1000b150;
}


// ---- FUN_10006570 @ 10006570

void __fastcall FUN_10006570(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_1000b2b4;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// ---- FUN_10006590 @ 10006590

undefined4 * __thiscall FUN_10006590(void *this,byte param_1)

{
  FUN_10006620(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_100065b0 @ 100065b0

undefined4 * __thiscall FUN_100065b0(void *this,int param_1,LPCSTR param_2)

{
  DWORD idInst;
  HSZ pHVar1;
  
  *(undefined ***)this = &PTR_FUN_1000b2b4;
  idInst = *(DWORD *)(param_1 + 4);
  *(DWORD *)((int)this + 8) = idInst;
  pHVar1 = DdeCreateStringHandleA(idInst,param_2,0x3ec);
  *(HSZ *)((int)this + 4) = pHVar1;
  return this;
}


// ---- FUN_100065e0 @ 100065e0

void __thiscall FUN_100065e0(void *this,int param_1,LPCSTR param_2)

{
  DWORD idInst;
  HSZ pHVar1;
  
  if (*(HSZ *)((int)this + 4) != (HSZ)0x0) {
    DdeFreeStringHandle(*(DWORD *)(param_1 + 4),*(HSZ *)((int)this + 4));
  }
  idInst = *(DWORD *)(param_1 + 4);
  *(DWORD *)((int)this + 8) = idInst;
  pHVar1 = DdeCreateStringHandleA(idInst,param_2,0x3ec);
  *(HSZ *)((int)this + 4) = pHVar1;
  return;
}


// ---- FUN_10006620 @ 10006620

void __fastcall FUN_10006620(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_1000b2b4;
  if ((HSZ)param_1[1] != (HSZ)0x0) {
    DdeFreeStringHandle(param_1[2],(HSZ)param_1[1]);
  }
  *param_1 = &PTR_GetRuntimeClass_1000ab84;
  return;
}


// ---- FUN_10006650 @ 10006650

undefined4 * FUN_10006650(void)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10009ada;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0xc);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = FUN_100066c0(puVar1);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


// ---- FUN_100066c0 @ 100066c0

undefined4 * __fastcall FUN_100066c0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10009af8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_GetRuntimeClass_1000ab84;
  local_4 = 0;
  CString::CString((CString *)(param_1 + 1));
  *param_1 = &PTR_FUN_1000b2c8;
  param_1[2] = 0;
  ExceptionList = local_c;
  return param_1;
}


// ---- FUN_10006720 @ 10006720

undefined4 * __thiscall FUN_10006720(void *this,byte param_1)

{
  FUN_10006740(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_10006740 @ 10006740

void __fastcall FUN_10006740(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10009b18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_1000b2c8;
  local_4 = 0;
  CString::~CString((CString *)(param_1 + 1));
  *param_1 = &PTR_GetRuntimeClass_1000ab84;
  ExceptionList = local_c;
  return;
}


// ---- FUN_10006790 @ 10006790

undefined4 FUN_10006790(void)

{
  return 0;
}


// ---- FUN_100067a0 @ 100067a0

undefined4 __thiscall FUN_100067a0(int *param_1,short param_2)

{
  short *psVar1;
  short sVar2;
  short *psVar3;
  
  psVar3 = (short *)(**(code **)(*param_1 + 0x20))();
  if (psVar3 != (short *)0x0) {
    sVar2 = *psVar3;
    while (sVar2 != 0) {
      if (sVar2 == param_2) {
        return 1;
      }
      psVar1 = psVar3 + 1;
      psVar3 = psVar3 + 1;
      sVar2 = *psVar1;
    }
  }
  return 0;
}


// ---- FUN_100067e0 @ 100067e0

void __thiscall FUN_100067e0(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x1c))(param_2);
  return;
}


// ---- FUN_100067f0 @ 100067f0

void __fastcall FUN_100067f0(int param_1)

{
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    FUN_10006ca0(*(void **)(param_1 + 8),param_1);
  }
  return;
}


// ---- FUN_10006800 @ 10006800

undefined4 * FUN_10006800(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10009b42;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x10);
  local_4 = 0;
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_100066c0(puVar1);
    local_4 = CONCAT31(local_4._1_3_,1);
    CString::CString((CString *)(puVar1 + 3));
    *puVar1 = &PTR_FUN_1000b2f0;
    puVar2 = puVar1;
  }
  ExceptionList = local_c;
  return puVar2;
}


// ---- FUN_10006860 @ 10006860

undefined4 __fastcall FUN_10006860(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}


// ---- FUN_10006870 @ 10006870

undefined4 * __thiscall FUN_10006870(void *this,byte param_1)

{
  FUN_10006890(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_10006890 @ 10006890

void __fastcall FUN_10006890(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10009b58;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  CString::~CString((CString *)(param_1 + 3));
  local_4 = 0xffffffff;
  FUN_10006740(param_1);
  ExceptionList = local_c;
  return;
}


// ---- FUN_100068e0 @ 100068e0

undefined ** FUN_100068e0(void)

{
  return &PTR_s_CDDEItem_1000b168;
}


// ---- FUN_100068f0 @ 100068f0

undefined ** FUN_100068f0(void)

{
  return &PTR_s_CDDEStringItem_1000b180;
}


// ---- FUN_10006900 @ 10006900

undefined * FUN_10006900(void)

{
  return &DAT_1000dfc0;
}


// ---- FUN_10006910 @ 10006910

undefined4 __thiscall FUN_10006910(int param_1,undefined4 param_2,undefined4 *param_3,int *param_4)

{
  *param_3 = *(undefined4 *)(param_1 + 0xc);
  *param_4 = *(int *)(*(int *)(param_1 + 0xc) + -8) + 1;
  return 1;
}


// ---- FUN_10006930 @ 10006930

undefined4 __thiscall FUN_10006930(int *param_1,undefined4 param_2,char *param_3)

{
  CString::operator=((CString *)(param_1 + 3),param_3);
  (**(code **)(*param_1 + 0x28))();
  return 1;
}


// ---- FUN_10006950 @ 10006950

void __thiscall FUN_10006950(int param_1,char *param_2)

{
  CString::operator=((CString *)(param_1 + 0xc),param_2);
  FUN_100067f0(param_1);
  return;
}


// ---- FUN_10006970 @ 10006970

CObList * FUN_10006970(void)

{
  CObList *pCVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10009b7a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pCVar1 = operator_new(0x1c);
  local_4 = 0;
  if (pCVar1 != (CObList *)0x0) {
    pCVar1 = FUN_100069f0(pCVar1);
    ExceptionList = local_c;
    return pCVar1;
  }
  ExceptionList = local_c;
  return (CObList *)0x0;
}


// ---- FUN_100069e0 @ 100069e0

undefined ** FUN_100069e0(void)

{
  return &PTR_s_CDDEItemList_1000b198;
}


// ---- FUN_100069f0 @ 100069f0

CObList * __fastcall FUN_100069f0(CObList *param_1)

{
  CObList::CObList(param_1,10);
  *(undefined ***)param_1 = &PTR_FUN_1000b324;
  return param_1;
}


// ---- FUN_10006a10 @ 10006a10

CObList * __thiscall FUN_10006a10(void *this,byte param_1)

{
  FUN_10006a30(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_10006a30 @ 10006a30

void __fastcall FUN_10006a30(CObList *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_1000b324;
  CObList::~CObList(param_1);
  return;
}


// ---- FUN_10006a40 @ 10006a40

undefined4 * FUN_10006a40(void)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10009b9a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x28);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = FUN_10006ab0(puVar1);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


// ---- FUN_10006aa0 @ 10006aa0

undefined ** FUN_10006aa0(void)

{
  return &PTR_s_CDDETopic_1000b1b0;
}


// ---- FUN_10006ab0 @ 10006ab0

undefined4 * __fastcall FUN_10006ab0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10009bc3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_GetRuntimeClass_1000ab84;
  local_4 = 0;
  CString::CString((CString *)(param_1 + 1));
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_100069f0((CObList *)(param_1 + 3));
  *param_1 = &PTR_FUN_1000b338;
  ExceptionList = local_c;
  return param_1;
}


// ---- FUN_10006b10 @ 10006b10

undefined4 * __thiscall FUN_10006b10(void *this,byte param_1)

{
  FUN_10006b30(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_10006b30 @ 10006b30

void __fastcall FUN_10006b30(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_10009be3;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_1000b338;
  local_4 = 1;
  FUN_10006a30((CObList *)(param_1 + 3));
  local_4 = local_4 & 0xffffff00;
  CString::~CString((CString *)(param_1 + 1));
  *param_1 = &PTR_GetRuntimeClass_1000ab84;
  ExceptionList = pvStack_c;
  return;
}


// ---- FUN_10006b90 @ 10006b90

void __thiscall FUN_10006b90(void *this,char *param_1)

{
  CString::operator=((CString *)((int)this + 4),param_1);
  return;
}


// ---- FUN_10006ba0 @ 10006ba0

undefined4 __thiscall FUN_10006ba0(void *this,CObject *param_1)

{
  __POSITION *p_Var1;
  
  p_Var1 = CObList::Find((CObList *)((int)this + 0xc),param_1,(__POSITION *)0x0);
  if (p_Var1 == (__POSITION *)0x0) {
    CObList::AddTail((CObList *)((int)this + 0xc),param_1);
    *(void **)(param_1 + 8) = this;
  }
  return 1;
}


// ---- FUN_10006bd0 @ 10006bd0

void __thiscall FUN_10006bd0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 unaff_retaddr;
  
  piVar1 = (int *)(**(code **)(*(int *)this + 0x20))(param_2);
  if (piVar1 == (int *)0x0) {
    return;
  }
  (**(code **)(*piVar1 + 0x14))(unaff_retaddr,param_2,param_3);
  return;
}


// ---- FUN_10006c00 @ 10006c00

void __thiscall FUN_10006c00(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 unaff_retaddr;
  
  piVar1 = (int *)(**(code **)(*param_1 + 0x20))(param_3);
  if (piVar1 == (int *)0x0) {
    return;
  }
  (**(code **)(*piVar1 + 0x18))(unaff_retaddr,param_3,param_4);
  return;
}


// ---- FUN_10006c30 @ 10006c30

undefined4 FUN_10006c30(void)

{
  return 0;
}


// ---- FUN_10006c40 @ 10006c40

int __thiscall FUN_10006c40(void *this,uchar *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  puVar3 = *(undefined4 **)((int)this + 0x10);
  do {
    if (puVar3 == (undefined4 *)0x0) {
      return 0;
    }
    puVar1 = (undefined4 *)*puVar3;
    iVar2 = puVar3[2];
    iVar4 = _mbsicmp(*(uchar **)(iVar2 + 4),param_1);
    puVar3 = puVar1;
  } while (iVar4 != 0);
  return iVar2;
}


// ---- FUN_10006c80 @ 10006c80

void __thiscall FUN_10006c80(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 unaff_retaddr;
  
  piVar1 = (int *)(**(code **)(*param_1 + 0x20))(param_3);
  if (piVar1 == (int *)0x0) {
    return;
  }
  (**(code **)(*piVar1 + 0x24))(unaff_retaddr);
  return;
}


// ---- FUN_10006ca0 @ 10006ca0

void __thiscall FUN_10006ca0(void *this,int param_1)

{
  FUN_10008750(*(void **)((int)this + 8),(int)this,param_1);
  return;
}


// ---- FUN_10006cc0 @ 10006cc0

CObList * FUN_10006cc0(void)

{
  CObList *pCVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10009bfa;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pCVar1 = operator_new(0x1c);
  local_4 = 0;
  if (pCVar1 != (CObList *)0x0) {
    pCVar1 = FUN_10006d30(pCVar1);
    ExceptionList = local_c;
    return pCVar1;
  }
  ExceptionList = local_c;
  return (CObList *)0x0;
}


// ---- FUN_10006d20 @ 10006d20

undefined ** FUN_10006d20(void)

{
  return &PTR_s_CDDETopicList_1000b1c8;
}


// ---- FUN_10006d30 @ 10006d30

CObList * __fastcall FUN_10006d30(CObList *param_1)

{
  CObList::CObList(param_1,10);
  *(undefined ***)param_1 = &PTR_FUN_1000b360;
  return param_1;
}


// ---- FUN_10006d50 @ 10006d50

CObList * __thiscall FUN_10006d50(void *this,byte param_1)

{
  FUN_10006d70(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_10006d70 @ 10006d70

void __fastcall FUN_10006d70(CObList *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_1000b360;
  CObList::~CObList(param_1);
  return;
}


// ---- FUN_10006d80 @ 10006d80

undefined4 * FUN_10006d80(void)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10009c1a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x14);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = FUN_10006df0(puVar1);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


// ---- FUN_10006de0 @ 10006de0

undefined ** FUN_10006de0(void)

{
  return &PTR_s_CDDECountedObject_1000b138;
}


// ---- FUN_10006df0 @ 10006df0

undefined4 * __fastcall FUN_10006df0(undefined4 *param_1)

{
  FUN_10006490(param_1);
  *param_1 = &PTR_FUN_1000b374;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}


// ---- FUN_10006e10 @ 10006e10

undefined4 * __thiscall FUN_10006e10(void *this,byte param_1)

{
  FUN_10006e90(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_10006e30 @ 10006e30

undefined4 * __thiscall FUN_10006e30(void *this,undefined4 param_1)

{
  FUN_10006490(this);
  *(undefined ***)this = &PTR_FUN_1000b374;
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  return this;
}


// ---- FUN_10006e60 @ 10006e60

undefined4 * __thiscall
FUN_10006e60(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_10006490(this);
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined ***)this = &PTR_FUN_1000b374;
  *(undefined4 *)((int)this + 0xc) = param_2;
  *(undefined4 *)((int)this + 0x10) = param_3;
  return this;
}


// ---- FUN_10006e90 @ 10006e90

void __fastcall FUN_10006e90(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10009c38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_1000b374;
  local_4 = 0;
  FUN_10006ee0((int)param_1);
  FUN_100064c0(param_1);
  ExceptionList = local_c;
  return;
}


// ---- FUN_10006ee0 @ 10006ee0

undefined4 __fastcall FUN_10006ee0(int param_1)

{
  if (*(HCONV *)(param_1 + 0xc) != (HCONV)0x0) {
    DdeDisconnect(*(HCONV *)(param_1 + 0xc));
    FUN_10007f50(*(void **)(param_1 + 8),*(int *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
    return 1;
  }
  return 0;
}


// ---- FUN_10006f10 @ 10006f10

bool __thiscall FUN_10006f10(void *this,LPCSTR param_1,LPCSTR param_2)

{
  HCONV pHVar1;
  DWORD DVar2;
  bool bVar3;
  undefined4 local_24;
  HSZ local_20;
  undefined4 local_18;
  HSZ local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10009c60;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_100065b0(&local_18,*(int *)((int)this + 8),param_1);
  DVar2 = 0;
  local_4 = 0;
  FUN_100065b0(&local_24,*(int *)((int)this + 8),param_2);
  local_4 = CONCAT31(local_4._1_3_,1);
  pHVar1 = DdeConnect(*(DWORD *)(*(int *)((int)this + 8) + 4),local_14,local_20,(PCONVCONTEXT)0x0);
  *(HCONV *)((int)this + 0xc) = pHVar1;
  if (pHVar1 == (HCONV)0x0) {
    DVar2 = GetLastError();
  }
  bVar3 = *(int *)((int)this + 0xc) != 0;
  if (bVar3) {
    FUN_10007f30(*(void **)((int)this + 8),this);
    FUN_10006620(&local_24);
    FUN_10006620(&local_18);
  }
  else {
    (**(code **)(**(int **)((int)this + 8) + 0x30))
              (*(int **)((int)this + 8),s_Failed_to_connect_to__s__s__Erro_1000e090,param_1,param_2,
               DVar2);
    FUN_10006620(&local_24);
    FUN_10006620(&local_18);
  }
  ExceptionList = local_c;
  return bVar3;
}


// ---- FUN_10006ff0 @ 10006ff0

undefined4 FUN_10006ff0(void)

{
  return 0;
}


// ---- FUN_10007000 @ 10007000

undefined4 __thiscall FUN_10007000(void *this,LPCSTR param_1,undefined4 *param_2,LPDWORD param_3)

{
  HDDEDATA hData;
  LPBYTE pBVar1;
  BYTE *pBVar2;
  uint uVar3;
  uint uVar4;
  undefined4 local_18;
  HSZ local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10009c78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_100065b0(&local_18,*(int *)((int)this + 8),param_1);
  local_4 = 0;
  hData = DdeClientTransaction
                    ((LPBYTE)0x0,0,*(HCONV *)((int)this + 0xc),local_14,1,0x20b0,15000,(LPDWORD)0x0)
  ;
  if (hData == (HDDEDATA)0x0) {
    *param_3 = 0;
    *param_2 = 0;
    FUN_10006620(&local_18);
    ExceptionList = local_c;
    return 0;
  }
  pBVar1 = DdeAccessData(hData,param_3);
  pBVar2 = operator_new(*param_3);
  *param_2 = pBVar2;
  uVar4 = *param_3;
  for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pBVar2 = *(undefined4 *)pBVar1;
    pBVar1 = pBVar1 + 4;
    pBVar2 = pBVar2 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pBVar2 = *pBVar1;
    pBVar1 = pBVar1 + 1;
    pBVar2 = pBVar2 + 1;
  }
  DdeUnaccessData(hData);
  FUN_10006620(&local_18);
  ExceptionList = local_c;
  return 1;
}


// ---- FUN_100070f0 @ 100070f0

undefined4 __thiscall FUN_100070f0(int param_1,LPCSTR param_2)

{
  HDDEDATA pHVar1;
  undefined4 uStack_c;
  HSZ pHStack_8;
  
  FUN_100065b0(&uStack_c,*(int *)(param_1 + 8),param_2);
  pHVar1 = DdeClientTransaction
                     ((LPBYTE)0x0,0,*(HCONV *)(param_1 + 0xc),pHStack_8,1,0x1030,15000,(LPDWORD)0x0)
  ;
  if (pHVar1 == (HDDEDATA)0x0) {
    FUN_10006620(&uStack_c);
    return 0;
  }
  FUN_10006620(&uStack_c);
  return 1;
}


// ---- FUN_10007150 @ 10007150

undefined4 __thiscall FUN_10007150(int param_1,LPCSTR param_2)

{
  HDDEDATA pHVar1;
  undefined4 uStack_c;
  HSZ pHStack_8;
  
  FUN_100065b0(&uStack_c,*(int *)(param_1 + 8),param_2);
  pHVar1 = DdeClientTransaction
                     ((LPBYTE)0x0,0,*(HCONV *)(param_1 + 0xc),pHStack_8,1,0x8040,15000,(LPDWORD)0x0)
  ;
  if (pHVar1 == (HDDEDATA)0x0) {
    FUN_10006620(&uStack_c);
    return 0;
  }
  FUN_10006620(&uStack_c);
  return 1;
}


// ---- FUN_100071b0 @ 100071b0

bool __thiscall FUN_100071b0(int param_1,LPBYTE param_2)

{
  BYTE BVar1;
  HDDEDATA pHVar2;
  uint uVar3;
  LPBYTE pBVar4;
  
  uVar3 = 0xffffffff;
  pBVar4 = param_2;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    BVar1 = *pBVar4;
    pBVar4 = pBVar4 + 1;
  } while (BVar1 != '\0');
  pHVar2 = DdeClientTransaction
                     (param_2,~uVar3,*(HCONV *)(param_1 + 0xc),(HSZ)0x0,1,0x4050,15000,(LPDWORD)0x0)
  ;
  return pHVar2 != (HDDEDATA)0x0;
}


// ---- FUN_100071f0 @ 100071f0

undefined4 __thiscall
FUN_100071f0(int param_1,UINT param_2,LPCSTR param_3,LPBYTE param_4,DWORD param_5)

{
  HDDEDATA pHVar1;
  undefined4 uStack_c;
  HSZ pHStack_8;
  
  FUN_100065b0(&uStack_c,*(int *)(param_1 + 8),param_3);
  pHVar1 = DdeClientTransaction
                     (param_4,param_5,*(HCONV *)(param_1 + 0xc),pHStack_8,param_2,0x4090,15000,
                      (LPDWORD)0x0);
  if (pHVar1 == (HDDEDATA)0x0) {
    FUN_10006620(&uStack_c);
    return 0;
  }
  FUN_10006620(&uStack_c);
  return 1;
}


// ---- FUN_10007260 @ 10007260

CObList * FUN_10007260(void)

{
  CObList *pCVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10009c9a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pCVar1 = operator_new(0x1c);
  local_4 = 0;
  if (pCVar1 != (CObList *)0x0) {
    pCVar1 = FUN_100072d0(pCVar1);
    ExceptionList = local_c;
    return pCVar1;
  }
  ExceptionList = local_c;
  return (CObList *)0x0;
}


// ---- FUN_100072c0 @ 100072c0

undefined ** FUN_100072c0(void)

{
  return &PTR_s_CDDEConvList_1000b1f8;
}


// ---- FUN_100072d0 @ 100072d0

CObList * __fastcall FUN_100072d0(CObList *param_1)

{
  CObList::CObList(param_1,10);
  *(undefined ***)param_1 = &PTR_FUN_1000b3a8;
  return param_1;
}


// ---- FUN_100072f0 @ 100072f0

CObList * __thiscall FUN_100072f0(void *this,byte param_1)

{
  FUN_10007310(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_10007310 @ 10007310

void __fastcall FUN_10007310(CObList *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_1000b3a8;
  CObList::~CObList(param_1);
  return;
}


// ---- FUN_10007320 @ 10007320

undefined4 * FUN_10007320(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10009cba;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0xc);
  local_4 = 0;
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_100066c0(puVar1);
    *puVar1 = &PTR_FUN_1000b3bc;
    puVar2 = puVar1;
  }
  ExceptionList = local_c;
  return puVar2;
}


// ---- FUN_10007370 @ 10007370

undefined ** FUN_10007370(void)

{
  return &PTR_s_CDDESystemItem_1000b210;
}


// ---- FUN_10007380 @ 10007380

undefined * FUN_10007380(void)

{
  return &DAT_1000dfc0;
}


// ---- FUN_10007390 @ 10007390

undefined4 * FUN_10007390(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10009cda;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0xc);
  local_4 = 0;
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_100066c0(puVar1);
    *puVar1 = &PTR_FUN_1000b3e4;
    puVar2 = puVar1;
  }
  ExceptionList = local_c;
  return puVar2;
}


// ---- FUN_100073e0 @ 100073e0

undefined4 * __thiscall FUN_100073e0(void *this,byte param_1)

{
  thunk_FUN_10006740(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_10007400 @ 10007400

undefined ** FUN_10007400(void)

{
  return &PTR_s_CDDESystemItem_TopicList_1000b228;
}


// ---- FUN_10007410 @ 10007410

undefined4 __thiscall FUN_10007410(int param_1,undefined4 param_2,int *param_3,int *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if ((DAT_1000e470 & 1) == 0) {
    DAT_1000e470 = DAT_1000e470 | 1;
    CString::CString((CString *)&DAT_1000e46c);
    FUN_10009111((_onexit_t)&LAB_100074c0);
  }
  CString::operator=((CString *)&DAT_1000e46c,&DAT_1000e43c);
  iVar4 = 0;
  puVar3 = *(undefined4 **)(*(int *)(*(int *)(param_1 + 8) + 8) + 0xc);
  while (puVar3 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar3;
    iVar2 = puVar3[2];
    if (iVar4 != 0) {
      CString::operator+=((CString *)&DAT_1000e46c,&DAT_1000e0b8);
    }
    CString::operator+=((CString *)&DAT_1000e46c,(CString *)(iVar2 + 4));
    iVar4 = iVar4 + 1;
    puVar3 = puVar1;
  }
  *param_3 = DAT_1000e46c;
  *param_4 = *(int *)(DAT_1000e46c + -8) + 1;
  return 1;
}


// ---- FUN_100074d0 @ 100074d0

undefined4 * FUN_100074d0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10009cfa;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0xc);
  local_4 = 0;
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_100066c0(puVar1);
    *puVar1 = &PTR_FUN_1000b40c;
    puVar2 = puVar1;
  }
  ExceptionList = local_c;
  return puVar2;
}


// ---- thunk_FUN_10006740 @ 10007520

void __fastcall thunk_FUN_10006740(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  puStack_8 = &LAB_10009b18;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_1000b2c8;
  uStack_4 = 0;
  CString::~CString((CString *)(param_1 + 1));
  *param_1 = &PTR_GetRuntimeClass_1000ab84;
  ExceptionList = pvStack_c;
  return;
}


// ---- FUN_10007530 @ 10007530

undefined ** FUN_10007530(void)

{
  return &PTR_s_CDDESystemItem_ItemList_1000b240;
}


// ---- FUN_10007540 @ 10007540

undefined4 __thiscall FUN_10007540(int param_1,undefined4 param_2,int *param_3,int *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if ((DAT_1000e468 & 1) == 0) {
    DAT_1000e468 = DAT_1000e468 | 1;
    CString::CString((CString *)&DAT_1000e464);
    FUN_10009111((_onexit_t)&LAB_100075e0);
  }
  CString::operator=((CString *)&DAT_1000e464,&DAT_1000e43c);
  iVar4 = 0;
  puVar3 = *(undefined4 **)(*(int *)(param_1 + 8) + 0x10);
  while (puVar3 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar3;
    iVar2 = puVar3[2];
    if (iVar4 != 0) {
      CString::operator+=((CString *)&DAT_1000e464,&DAT_1000e0b8);
    }
    CString::operator+=((CString *)&DAT_1000e464,(CString *)(iVar2 + 4));
    iVar4 = iVar4 + 1;
    puVar3 = puVar1;
  }
  *param_3 = DAT_1000e464;
  *param_4 = *(int *)(DAT_1000e464 + -8) + 1;
  return 1;
}


// ---- FUN_100075f0 @ 100075f0

undefined4 * FUN_100075f0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10009d1a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0xc);
  local_4 = 0;
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_100066c0(puVar1);
    *puVar1 = &PTR_FUN_1000b434;
    puVar2 = puVar1;
  }
  ExceptionList = local_c;
  return puVar2;
}


// ---- FUN_10007640 @ 10007640

undefined ** FUN_10007640(void)

{
  return &PTR_s_CDDESystemItem_FormatList_1000b258;
}


// ---- FUN_10007650 @ 10007650

undefined4 __thiscall FUN_10007650(int param_1,undefined4 param_2,int *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  ushort *puVar3;
  int iVar4;
  CString *pCVar5;
  ushort *puVar6;
  ushort uVar7;
  ushort *puVar8;
  int iVar9;
  CString aCStack_d8 [4];
  ushort auStack_d4 [100];
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &DAT_10009d3b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if ((DAT_1000e460 & 1) == 0) {
    DAT_1000e460 = DAT_1000e460 | 1;
    ExceptionList = &pvStack_c;
    CString::CString((CString *)&DAT_1000e45c);
    FUN_10009111((_onexit_t)&LAB_100077b0);
  }
  CString::operator=((CString *)&DAT_1000e45c,&DAT_1000e43c);
  iVar9 = 0;
  puVar2 = *(undefined4 **)(*(int *)(param_1 + 8) + 0x10);
  do {
    do {
      if (puVar2 == (undefined4 *)0x0) {
        *param_3 = DAT_1000e45c;
        *param_4 = *(int *)(DAT_1000e45c + -8) + 1;
        ExceptionList = pvStack_c;
        return 1;
      }
      puVar1 = (undefined4 *)*puVar2;
      puVar3 = (ushort *)(**(code **)(*(int *)puVar2[2] + 0x20))();
      puVar2 = puVar1;
    } while ((puVar3 == (ushort *)0x0) || (uVar7 = *puVar3, uVar7 == 0));
    puVar8 = auStack_d4 + iVar9;
    do {
      iVar4 = 0;
      if (0 < iVar9) {
        puVar6 = auStack_d4;
        do {
          if (*puVar6 == uVar7) break;
          iVar4 = iVar4 + 1;
          puVar6 = puVar6 + 1;
        } while (iVar4 < iVar9);
      }
      if (iVar4 == iVar9) {
        *puVar8 = uVar7;
        if (iVar9 != 0) {
          CString::operator+=((CString *)&DAT_1000e45c,&DAT_1000e0b8);
        }
        pCVar5 = FUN_10008790(aCStack_d8,*puVar3);
        uStack_4 = 0;
        CString::operator+=((CString *)&DAT_1000e45c,pCVar5);
        uStack_4 = 0xffffffff;
        CString::~CString(aCStack_d8);
        iVar9 = iVar9 + 1;
        puVar8 = puVar8 + 1;
      }
      uVar7 = puVar3[1];
      puVar3 = puVar3 + 1;
    } while (uVar7 != 0);
  } while( true );
}


// ---- FUN_100077c0 @ 100077c0

undefined4 * FUN_100077c0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10009d5a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x28);
  local_4 = 0;
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_10006ab0(puVar1);
    *puVar1 = &PTR_FUN_1000b45c;
    puVar2 = puVar1;
  }
  ExceptionList = local_c;
  return puVar2;
}


// ---- FUN_10007810 @ 10007810

undefined4 * __thiscall FUN_10007810(void *this,byte param_1)

{
  FUN_10007830(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_10007830 @ 10007830

void __fastcall FUN_10007830(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
  puStack_8 = &LAB_10009be3;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_1000b338;
  uStack_4 = 1;
  FUN_10006a30((CObList *)(param_1 + 3));
  uStack_4 = uStack_4 & 0xffffff00;
  CString::~CString((CString *)(param_1 + 1));
  *param_1 = &PTR_GetRuntimeClass_1000ab84;
  ExceptionList = pvStack_c;
  return;
}


// ---- FUN_10007840 @ 10007840

undefined ** FUN_10007840(void)

{
  return &PTR_s_CDDEServerSystemTopic_1000b270;
}


// ---- FUN_10007850 @ 10007850

void __thiscall FUN_10007850(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  (**(code **)(**(int **)((int)this + 8) + 0x30))
            (*(int **)((int)this + 8),s_System_topic_request___s_1000e0bc,param_2);
  FUN_10006bd0(this,param_1,param_2,param_3);
  return;
}


// ---- FUN_10007890 @ 10007890

undefined4 * FUN_10007890(void)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10009d7a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0xac);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = FUN_10007900(puVar1);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


// ---- FUN_100078f0 @ 100078f0

undefined ** FUN_100078f0(void)

{
  return &PTR_s_CDDEServer_1000b288;
}


// ---- FUN_10007900 @ 10007900

undefined4 * __fastcall FUN_10007900(undefined4 *param_1)

{
  AFX_MODULE_STATE *pAVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10009e04;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_GetRuntimeClass_1000ab84;
  local_4 = 0;
  FUN_10006d30((CObList *)(param_1 + 2));
  local_4._0_1_ = 1;
  CString::CString((CString *)(param_1 + 10));
  FUN_10006570(param_1 + 0xb);
  local_4._0_1_ = 3;
  FUN_100072d0((CObList *)(param_1 + 0xe));
  local_4._0_1_ = 4;
  FUN_10006ab0(param_1 + 0x15);
  param_1[0x15] = &PTR_FUN_1000b45c;
  local_4._0_1_ = 5;
  FUN_100066c0(param_1 + 0x1f);
  param_1[0x1f] = &PTR_FUN_1000b3e4;
  local_4._0_1_ = 6;
  FUN_100066c0(param_1 + 0x22);
  param_1[0x22] = &PTR_FUN_1000b40c;
  local_4._0_1_ = 7;
  FUN_100066c0(param_1 + 0x25);
  param_1[0x25] = &PTR_FUN_1000b40c;
  local_4._0_1_ = 8;
  FUN_100066c0(param_1 + 0x28);
  param_1[0x28] = &PTR_FUN_1000b434;
  local_4 = CONCAT31(local_4._1_3_,9);
  *param_1 = &PTR_FUN_1000b484;
  param_1[9] = 0;
  pAVar1 = AfxGetModuleState();
  CString::operator=((CString *)(param_1 + 10),*(char **)(pAVar1 + 0x10));
  param_1[1] = 0;
  ExceptionList = local_c;
  return param_1;
}


// ---- FUN_10007a10 @ 10007a10

undefined4 * __thiscall FUN_10007a10(void *this,byte param_1)

{
  FUN_10007a30(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_10007a30 @ 10007a30

void __fastcall FUN_10007a30(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_10009e84;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_1000b484;
  local_4 = 9;
  FUN_10007af0((int)param_1);
  local_4._0_1_ = 8;
  FUN_10006740(param_1 + 0x28);
  local_4._0_1_ = 7;
  FUN_10006740(param_1 + 0x25);
  local_4._0_1_ = 6;
  FUN_10006740(param_1 + 0x22);
  local_4._0_1_ = 5;
  FUN_10006740(param_1 + 0x1f);
  local_4._0_1_ = 4;
  FUN_10006b30(param_1 + 0x15);
  local_4._0_1_ = 3;
  FUN_10007310((CObList *)(param_1 + 0xe));
  FUN_10006620(param_1 + 0xb);
  local_4._0_1_ = 1;
  CString::~CString((CString *)(param_1 + 10));
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_10006d70((CObList *)(param_1 + 2));
  *param_1 = &PTR_GetRuntimeClass_1000ab84;
  ExceptionList = pvStack_c;
  return;
}


// ---- FUN_10007af0 @ 10007af0

void __fastcall FUN_10007af0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (*(int *)(param_1 + 0x24) != 0) {
    puVar2 = *(undefined4 **)(param_1 + 0x3c);
    while (puVar2 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)*puVar2;
      (**(code **)(*(int *)puVar2[2] + 0x18))();
      puVar2 = puVar1;
    }
    DdeNameService(*(DWORD *)(param_1 + 4),*(HSZ *)(param_1 + 0x30),(HSZ)0x0,2);
    DdeUninitialize(*(DWORD *)(param_1 + 4));
    *(undefined4 *)(param_1 + 0x24) = 0;
    DAT_1000e474 = 0;
  }
  return;
}


// ---- FUN_10007b40 @ 10007b40

undefined4 __thiscall FUN_10007b40(void *this,char *param_1,undefined4 param_2,DWORD *param_3)

{
  LPDWORD pidInst;
  void *this_00;
  UINT UVar1;
  undefined4 uVar2;
  char local_100 [256];
  
  pidInst = (LPDWORD)((int)this + 4);
  DAT_1000e474 = this;
  *pidInst = 0;
  UVar1 = DdeInitializeA(pidInst,FUN_10007c70,0,0);
  sprintf(local_100,s_Instance_handle_for_DdeNameServi_1000e10c,*pidInst);
  if (UVar1 != 0) {
    return 0;
  }
  if (param_3 != (DWORD *)0x0) {
    *param_3 = *pidInst;
  }
  CString::operator=((CString *)((int)this + 0x28),param_1);
  FUN_100065e0((void *)((int)this + 0x2c),(int)this,*(LPCSTR *)((int)this + 0x28));
  this_00 = (void *)((int)this + 0x54);
  FUN_10006b90(this_00,s_System_1000e104);
  (**(code **)(*(int *)this + 0x34))(this_00);
  FUN_10006b90((CObject *)((int)this + 0x7c),s_Topics_1000e0fc);
  FUN_10006ba0(this_00,(CObject *)((int)this + 0x7c));
  FUN_10006b90((CObject *)((int)this + 0x88),s_SysItems_1000e0f0);
  FUN_10006ba0(this_00,(CObject *)((int)this + 0x88));
  FUN_10006b90((CObject *)((int)this + 0x94),s_TopicItemList_1000e0e0);
  FUN_10006ba0(this_00,(CObject *)((int)this + 0x94));
  FUN_10006b90((CObject *)((int)this + 0xa0),s_Formats_1000e0d8);
  FUN_10006ba0(this_00,(CObject *)((int)this + 0xa0));
  DdeNameService(*pidInst,*(HSZ *)((int)this + 0x30),(HSZ)0x0,1);
  *(undefined4 *)((int)this + 0x24) = 1;
  uVar2 = (**(code **)(*(int *)this + 0x14))();
  return uVar2;
}


// ---- FUN_10007c70 @ 10007c70

HDDEDATA FUN_10007c70(uint param_1,undefined4 param_2,HCONV param_3,HSZ param_4,HSZ param_5,
                     HDDEDATA param_6,undefined4 param_7,undefined4 param_8)

{
  int *this;
  uint uVar1;
  HCONV pHVar2;
  HSZ pHVar3;
  CString *pCVar4;
  int iVar5;
  HDDEDATA pHVar6;
  uint uVar7;
  tagCONVINFO *ptVar8;
  HDDEDATA local_70;
  tagCONVINFO tStack_6c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uVar1 = param_1;
  this = DAT_1000e474;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_10009ea0;
  pvStack_c = ExceptionList;
  local_70 = (HDDEDATA)0x0;
  uVar7 = param_1 & 0xffff;
  ExceptionList = &pvStack_c;
  (**(code **)(*DAT_1000e474 + 0x30))(DAT_1000e474,s_Callback__4_4XH_1000e168,uVar7);
  pHVar6 = param_6;
  pHVar3 = param_4;
  pHVar2 = param_3;
  if (uVar7 < 0x4011) {
    if (uVar7 != 0x4010) {
      if (uVar7 < 0x2023) {
        if (((uVar7 != 0x2022) && (uVar7 != 0x1030)) && (uVar7 != 0x1062)) goto LAB_10007e40;
      }
      else if (uVar7 != 0x20b0) {
        if (uVar7 == 0x20e2) {
          if ((param_5 != (HSZ)0x0) &&
             (iVar5 = DdeCmpStringHandles(param_5,(HSZ)this[0xc]), iVar5 != 0)) {
            ExceptionList = pvStack_c;
            return (HDDEDATA)0x0;
          }
          pHVar3 = param_4;
          pCVar4 = FUN_100085a0(this,(CString *)&param_1,param_4);
          uStack_4 = 1;
          (**(code **)(*this + 0x30))(this,s_Wild_connect_to__s_1000e154,*(undefined4 *)pCVar4);
          uStack_4 = 0xffffffff;
          CString::~CString((CString *)&param_1);
          pHVar6 = FUN_10007fa0(this,pHVar3);
          ExceptionList = pvStack_c;
          return pHVar6;
        }
        goto LAB_10007e40;
      }
    }
  }
  else {
    if (0x8072 < uVar7) {
      if (uVar7 == 0x80c2) {
        ptVar8 = &tStack_6c;
        for (iVar5 = 0x18; iVar5 != 0; iVar5 = iVar5 + -1) {
          ptVar8->cb = 0;
          ptVar8 = (tagCONVINFO *)&ptVar8->hUser;
        }
        tStack_6c.cb = 0x60;
        DdeQueryConvInfo(param_3,0x80c2,&tStack_6c);
        (**(code **)(*this + 0x18))();
        (**(code **)(*this + 0x30))(this,s_Disconnect_1000e138);
        FUN_10007f50(this,(int)pHVar2);
        ExceptionList = pvStack_c;
        return (HDDEDATA)0x0;
      }
      goto LAB_10007e40;
    }
    if (uVar7 == 0x8072) {
      pCVar4 = FUN_100085a0(this,(CString *)&param_6,param_4);
      uStack_4 = 0;
      (**(code **)(*this + 0x30))(this,s_Connect_to__s_1000e144,*(undefined4 *)pCVar4);
      uStack_4 = 0xffffffff;
      CString::~CString((CString *)&param_6);
      FUN_10007ee0(this,param_3,pHVar3);
      ExceptionList = pvStack_c;
      return (HDDEDATA)0x0;
    }
    if ((uVar7 != 0x4050) && (uVar7 != 0x4090)) goto LAB_10007e40;
  }
  iVar5 = FUN_10008190(this,(ushort)uVar1,(ushort)param_2,param_3,param_4,param_5,param_6,&local_70)
  ;
  if (iVar5 != 0) {
    ExceptionList = pvStack_c;
    return local_70;
  }
LAB_10007e40:
  pHVar6 = (HDDEDATA)
           (**(code **)(*this + 0x1c))(uVar1,param_2,param_3,param_4,param_5,pHVar6,param_7,param_8)
  ;
  ExceptionList = pvStack_c;
  return pHVar6;
}


// ---- FUN_10007ee0 @ 10007ee0

CObject * __thiscall FUN_10007ee0(void *this,undefined4 param_1,undefined4 param_2)

{
  void *this_00;
  CObject *pCVar1;
  
  this_00 = operator_new(0x14);
  if (this_00 == (void *)0x0) {
    pCVar1 = (CObject *)0x0;
  }
  else {
    pCVar1 = (CObject *)FUN_10006e60(this_00,this,param_1,param_2);
  }
  FUN_100064d0((int)pCVar1);
  CObList::AddTail((CObList *)((int)this + 0x38),pCVar1);
  return pCVar1;
}


// ---- FUN_10007f30 @ 10007f30

CObject * __thiscall FUN_10007f30(void *this,CObject *param_1)

{
  FUN_100064d0((int)param_1);
  CObList::AddTail((CObList *)((int)this + 0x38),param_1);
  return param_1;
}


// ---- FUN_10007f50 @ 10007f50

undefined4 __thiscall FUN_10007f50(void *this,int param_1)

{
  CObject *pCVar1;
  undefined4 *puVar2;
  __POSITION *p_Var3;
  
  puVar2 = *(undefined4 **)((int)this + 0x3c);
  do {
    if (puVar2 == (undefined4 *)0x0) {
      return 0;
    }
    pCVar1 = (CObject *)puVar2[2];
    puVar2 = (undefined4 *)*puVar2;
  } while (*(int *)(pCVar1 + 0xc) != param_1);
  p_Var3 = CObList::Find((CObList *)((int)this + 0x38),pCVar1,(__POSITION *)0x0);
  CObList::RemoveAt((CObList *)((int)this + 0x38),p_Var3);
  FUN_100064e0((int *)pCVar1);
  return 1;
}


// ---- FUN_10007fa0 @ 10007fa0

HDDEDATA __thiscall FUN_10007fa0(void *this,HSZ param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  CString *pCVar4;
  int iVar5;
  HDDEDATA hData;
  LPBYTE pBVar6;
  HSZ pHVar7;
  uchar *local_14;
  HDDEDATA local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10009ec0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CString::CString((CString *)&local_14,s_<null>_1000e194);
  pHVar7 = param_1;
  local_4 = 0;
  if (param_1 == (HSZ)0x0) {
    iVar5 = *(int *)((int)this + 0x14);
    if (iVar5 != 0) {
LAB_1000805b:
      hData = DdeCreateDataHandle(*(DWORD *)((int)this + 4),(LPBYTE)0x0,iVar5 * 8 + 8,0,(HSZ)0x0,0,0
                                 );
      local_10 = hData;
      if (hData == (HDDEDATA)0x0) {
        local_4 = 0xffffffff;
        CString::~CString((CString *)&local_14);
        ExceptionList = local_c;
        return (HDDEDATA)0x0;
      }
      pBVar6 = DdeAccessData(hData,(LPDWORD)0x0);
      if (pHVar7 == (HSZ)0x0) {
        puVar3 = *(undefined4 **)((int)this + 0xc);
        while (puVar3 != (undefined4 *)0x0) {
          puVar1 = (undefined4 *)*puVar3;
          iVar5 = puVar3[2];
          pHVar7 = DdeCreateStringHandleA
                             (*(DWORD *)((int)this + 4),*(LPCSTR *)((int)this + 0x28),0x3ec);
          *(HSZ *)pBVar6 = pHVar7;
          pHVar7 = DdeCreateStringHandleA(*(DWORD *)((int)this + 4),*(LPCSTR *)(iVar5 + 4),0x3ec);
          *(HSZ *)(pBVar6 + 4) = pHVar7;
          pBVar6 = pBVar6 + 8;
          puVar3 = puVar1;
          hData = local_10;
        }
      }
      else {
        uVar2 = *(undefined4 *)((int)this + 0x30);
        *(HSZ *)(pBVar6 + 4) = pHVar7;
        *(undefined4 *)pBVar6 = uVar2;
        pBVar6 = pBVar6 + 8;
      }
      pBVar6[0] = '\0';
      pBVar6[1] = '\0';
      pBVar6[2] = '\0';
      pBVar6[3] = '\0';
      pBVar6[4] = '\0';
      pBVar6[5] = '\0';
      pBVar6[6] = '\0';
      pBVar6[7] = '\0';
      DdeUnaccessData(hData);
      local_4 = 0xffffffff;
      CString::~CString((CString *)&local_14);
      ExceptionList = local_c;
      return hData;
    }
  }
  else {
    pCVar4 = FUN_100085a0(this,(CString *)&param_1,param_1);
    local_4._0_1_ = 1;
    CString::operator=((CString *)&local_14,pCVar4);
    local_4 = (uint)local_4._1_3_ << 8;
    CString::~CString((CString *)&param_1);
    iVar5 = FUN_10008150(this,local_14);
    if (iVar5 != 0) {
      iVar5 = 1;
      goto LAB_1000805b;
    }
  }
  (**(code **)(*(int *)this + 0x30))(this,s_Wild_connect_to__s_refused_1000e178,local_14);
  local_4 = 0xffffffff;
  CString::~CString((CString *)&local_14);
  ExceptionList = local_c;
  return (HDDEDATA)0x0;
}


// ---- FUN_10008150 @ 10008150

int __thiscall FUN_10008150(void *this,uchar *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  puVar3 = *(undefined4 **)((int)this + 0xc);
  do {
    if (puVar3 == (undefined4 *)0x0) {
      return 0;
    }
    puVar1 = (undefined4 *)*puVar3;
    iVar2 = puVar3[2];
    iVar4 = _mbsicmp(*(uchar **)(iVar2 + 4),param_1);
    puVar3 = puVar1;
  } while (iVar4 != 0);
  return iVar2;
}


// ---- FUN_10008190 @ 10008190

undefined4 __thiscall
FUN_10008190(void *this,ushort param_1,ushort param_2,HCONV param_3,HSZ param_4,HSZ param_5,
            HDDEDATA param_6,undefined4 *param_7)

{
  LPBYTE pBVar1;
  int iVar2;
  undefined4 uVar3;
  HDDEDATA pHVar4;
  UINT UVar5;
  uchar *local_80;
  undefined4 local_7c;
  DWORD local_78;
  LPBYTE local_74;
  DWORD DStack_70;
  tagCONVINFO tStack_6c;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10009ee0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_100085a0(this,(CString *)&local_80,param_4);
  local_4 = 0;
  if (param_1 == 0x4050) {
    (**(code **)(*(int *)this + 0x30))(this,&DAT_1000e214);
    DStack_70 = 0;
    pBVar1 = DdeAccessData(param_6,&DStack_70);
    iVar2 = (**(code **)(*(int *)this + 0x2c))(local_80,pBVar1,DStack_70);
    DdeUnaccessData(param_6);
    if (iVar2 == 0) {
      (**(code **)(*(int *)this + 0x30))(this,s_Exec_failed_1000e208);
      *param_7 = 0;
    }
    else {
      *param_7 = 0x8000;
    }
LAB_10008389:
    local_4 = 0xffffffff;
    CString::~CString((CString *)&local_80);
    uVar3 = 0;
  }
  else {
    if (param_1 == 0x1062) {
      iVar2 = FUN_10008150(this,local_80);
      if (iVar2 == 0) goto LAB_10008389;
      *param_7 = 1;
    }
    else {
      FUN_100085a0(this,(CString *)&local_7c,param_5);
      local_4._0_1_ = 1;
      local_78 = 0;
      local_74 = (LPBYTE)0x0;
      if (param_1 < 0x20b1) {
        if (param_1 == 0x20b0) {
LAB_1000830f:
          (**(code **)(*(int *)this + 0x30))(this,s_Request__s__s_1000e1e0,local_80,local_7c);
          local_78 = 0;
          iVar2 = (**(code **)(*(int *)this + 0x20))
                            ((uint)param_2,local_80,local_7c,&local_74,&local_78);
          if (iVar2 == 0) {
            (**(code **)(*(int *)this + 0x30))
                      (this,s_Request__s__s_failed_1000e1c8,local_80,local_7c);
            *param_7 = 0;
LAB_10008379:
            local_4 = (uint)local_4._1_3_ << 8;
            CString::~CString((CString *)&local_7c);
            goto LAB_10008389;
          }
          pHVar4 = DdeCreateDataHandle(*(DWORD *)((int)this + 4),local_74,local_78,0,param_5,
                                       (uint)param_2,0);
          *param_7 = pHVar4;
        }
        else if (param_1 == 0x1030) {
          iVar2 = (**(code **)(*(int *)this + 0x38))(param_2,local_80,local_7c);
          if (iVar2 == 0) {
            (**(code **)(*(int *)this + 0x30))
                      (this,s_Can_t_advise_on__s__s_1000e1f0,local_80,local_7c);
            goto LAB_10008379;
          }
          *param_7 = 1;
        }
        else if (param_1 == 0x2022) goto LAB_1000830f;
      }
      else if (param_1 == 0x4010) {
        local_74 = DdeAccessData(param_6,&local_78);
        iVar2 = (**(code **)(*(int *)this + 0x28))
                          (param_2,param_3,local_80,local_7c,local_74,local_78);
        DdeUnaccessData(param_6);
        if (iVar2 != 0) goto LAB_10008484;
        (**(code **)(*(int *)this + 0x30))
                  (this,s_AdviseData__s__s_failed_1000e19c,local_80,local_7c);
        *param_7 = 0;
      }
      else if (param_1 == 0x4090) {
        local_74 = DdeAccessData(param_6,&local_78);
        iVar2 = (**(code **)(*(int *)this + 0x24))(param_2,local_80,local_7c,local_74,local_78);
        DdeUnaccessData(param_6);
        if (iVar2 == 0) {
          (**(code **)(*(int *)this + 0x30))(this,s_Poke__s__s_failed_1000e1b4,local_80,local_7c);
          goto LAB_10008379;
        }
        tStack_6c.cb = 0x60;
        UVar5 = DdeQueryConvInfo(param_3,0xffffffff,&tStack_6c);
        if ((UVar5 != 0) && ((tStack_6c.wStatus & 0x100) == 0)) {
          DdePostAdvise(*(DWORD *)((int)this + 4),param_4,param_5);
        }
LAB_10008484:
        *param_7 = 0x8000;
      }
      local_4 = (uint)local_4._1_3_ << 8;
      CString::~CString((CString *)&local_7c);
    }
    local_4 = 0xffffffff;
    CString::~CString((CString *)&local_80);
    uVar3 = 1;
  }
  ExceptionList = local_c;
  return uVar3;
}


// ---- FUN_10008550 @ 10008550

undefined4 __thiscall FUN_10008550(void *this,CObject *param_1)

{
  __POSITION *p_Var1;
  
  p_Var1 = CObList::Find((CObList *)((int)this + 8),param_1,(__POSITION *)0x0);
  if (p_Var1 == (__POSITION *)0x0) {
    CObList::AddTail((CObList *)((int)this + 8),param_1);
    *(void **)(param_1 + 8) = this;
    FUN_10006ba0(param_1,(CObject *)((int)this + 0x94));
    FUN_10006ba0(param_1,(CObject *)((int)this + 0xa0));
  }
  return 1;
}


// ---- FUN_100085a0 @ 100085a0

CString * __thiscall FUN_100085a0(void *this,CString *param_1,HSZ param_2)

{
  DWORD DVar1;
  char *psz;
  CString local_14 [4];
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10009f0f;
  local_c = ExceptionList;
  local_10 = 0;
  ExceptionList = &local_c;
  CString::CString(local_14,s_<null>_1000e194);
  local_4 = 1;
  DVar1 = DdeQueryStringA(*(DWORD *)((int)this + 4),param_2,(LPSTR)0x0,0,0x3ec);
  if (DVar1 == 0) {
    CString::CString(param_1,local_14);
  }
  else {
    psz = CString::GetBufferSetLength(local_14,DVar1 + 1);
    DVar1 = DdeQueryStringA(*(DWORD *)((int)this + 4),param_2,psz,DVar1 + 1,0x3ec);
    CString::ReleaseBuffer(local_14,-1);
    if (DVar1 == 0) {
      CString::operator=(local_14,s_<error>_1000e21c);
    }
    CString::CString(param_1,local_14);
  }
  local_10 = 1;
  local_4 = local_4 & 0xffffff00;
  CString::~CString(local_14);
  ExceptionList = local_c;
  return param_1;
}


// ---- FUN_10008690 @ 10008690

void __thiscall
FUN_10008690(void *param_1,undefined4 param_2,uchar *param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_10008150(param_1,param_3);
  if (piVar1 == (int *)0x0) {
    return;
  }
  (**(code **)(*piVar1 + 0x14))(param_2,param_4,param_5,param_6);
  return;
}


// ---- FUN_100086c0 @ 100086c0

void __thiscall
FUN_100086c0(void *param_1,undefined4 param_2,uchar *param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_10008150(param_1,param_3);
  if (piVar1 == (int *)0x0) {
    return;
  }
  (**(code **)(*piVar1 + 0x18))(param_2,param_4,param_5,param_6);
  return;
}


// ---- FUN_100086f0 @ 100086f0

void __thiscall FUN_100086f0(void *param_1,uchar *param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_10008150(param_1,param_2);
  if (piVar1 == (int *)0x0) {
    return;
  }
  (**(code **)(*piVar1 + 0x1c))(param_3,param_4);
  return;
}


// ---- FUN_10008720 @ 10008720

void __thiscall FUN_10008720(void *param_1,undefined4 param_2,uchar *param_3,undefined4 param_4)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_10008150(param_1,param_3);
  if (piVar1 == (int *)0x0) {
    return;
  }
  (**(code **)(*piVar1 + 0x24))(param_2,param_4);
  return;
}


// ---- FUN_10008750 @ 10008750

void __thiscall FUN_10008750(void *this,int param_1,int param_2)

{
  LPCSTR psz;
  HSZ hszItem;
  HSZ hszTopic;
  
  psz = *(LPCSTR *)(param_1 + 4);
  hszItem = DdeCreateStringHandleA(*(DWORD *)((int)this + 4),*(LPCSTR *)(param_2 + 4),0x3ec);
  hszTopic = DdeCreateStringHandleA(*(DWORD *)((int)this + 4),psz,0x3ec);
  DdePostAdvise(*(DWORD *)((int)this + 4),hszTopic,hszItem);
  return;
}


// ---- FUN_10008790 @ 10008790

CString * __cdecl FUN_10008790(CString *param_1,ushort param_2)

{
  undefined4 *puVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  CString local_114 [4];
  undefined4 local_110;
  CHAR local_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10009f45;
  local_c = ExceptionList;
  local_110 = 0;
  ExceptionList = &local_c;
  CString::CString(local_114,&DAT_1000e43c);
  uVar3 = (ushort)DAT_1000dfc8;
  local_4 = 1;
  puVar1 = &DAT_1000dfc8;
  uVar4 = DAT_1000dfc8;
  do {
    if (uVar3 == 0) {
      iVar2 = GetClipboardFormatNameA((uint)param_2,local_10c,0x100);
      if (iVar2 != 0) {
        CString::operator=(local_114,local_10c);
      }
      CString::CString(param_1,local_114);
LAB_10008839:
      local_110 = 1;
      local_4 = local_4 & 0xffffff00;
      CString::~CString(local_114);
      ExceptionList = local_c;
      return param_1;
    }
    if ((ushort)uVar4 == param_2) {
      CString::operator=(local_114,(char *)puVar1[1]);
      CString::CString(param_1,local_114);
      goto LAB_10008839;
    }
    uVar3 = *(ushort *)(puVar1 + 2);
    uVar4 = (uint)uVar3;
    puVar1 = puVar1 + 2;
  } while( true );
}


// ---- FUN_10008890 @ 10008890

int __thiscall FUN_10008890(void *this,int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)((int)this + 0x3c);
  do {
    if (puVar2 == (undefined4 *)0x0) {
      return 0;
    }
    piVar1 = puVar2 + 2;
    puVar2 = (undefined4 *)*puVar2;
  } while (*(int *)(*piVar1 + 0xc) != param_1);
  return *piVar1;
}


// ---- FUN_100088b0 @ 100088b0

void __thiscall
FUN_100088b0(void *param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_10008890(param_1,param_3);
  if (piVar1 == (int *)0x0) {
    return;
  }
  (**(code **)(*piVar1 + 0x1c))(param_2,param_4,param_5,param_6,param_7);
  return;
}


// ---- WNetConnectionDialog @ 100088f0

DWORD WNetConnectionDialog(HWND hwnd,DWORD dwType)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100088f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = WNetConnectionDialog(hwnd,dwType);
  return DVar1;
}


// ---- WNetCloseEnum @ 100088f6

DWORD WNetCloseEnum(HANDLE hEnum)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100088f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = WNetCloseEnum(hEnum);
  return DVar1;
}


// ---- WNetEnumResourceA @ 100088fc

DWORD WNetEnumResourceA(HANDLE hEnum,LPDWORD lpcCount,LPVOID lpBuffer,LPDWORD lpBufferSize)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100088fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = WNetEnumResourceA(hEnum,lpcCount,lpBuffer,lpBufferSize);
  return DVar1;
}


// ---- WNetOpenEnumA @ 10008902

DWORD WNetOpenEnumA(DWORD dwScope,DWORD dwType,DWORD dwUsage,LPNETRESOURCEA lpNetResource,
                   LPHANDLE lphEnum)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008902. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = WNetOpenEnumA(dwScope,dwType,dwUsage,lpNetResource,lphEnum);
  return DVar1;
}


// ---- GetConnectionHook @ 1000896e

IConnectionPoint * __thiscall CCmdTarget::GetConnectionHook(CCmdTarget *this,_GUID *param_1)

{
  IConnectionPoint *pIVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000896e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = GetConnectionHook(this,param_1);
  return pIVar1;
}


// ---- GetExtraConnectionPoints @ 10008974

int __thiscall CCmdTarget::GetExtraConnectionPoints(CCmdTarget *this,CPtrArray *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetExtraConnectionPoints(this,param_1);
  return iVar1;
}


// ---- GetInterfaceHook @ 1000897a

IUnknown * __thiscall CCmdTarget::GetInterfaceHook(CCmdTarget *this,void *param_1)

{
  IUnknown *pIVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000897a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = GetInterfaceHook(this,param_1);
  return pIVar1;
}


// ---- OnCreateAggregates @ 10008980

int __thiscall CCmdTarget::OnCreateAggregates(CCmdTarget *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCreateAggregates(this);
  return iVar1;
}


// ---- GetEventSinkMap @ 10008986

AFX_EVENTSINKMAP * __thiscall CCmdTarget::GetEventSinkMap(CCmdTarget *this)

{
  AFX_EVENTSINKMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008986. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetEventSinkMap(this);
  return pAVar1;
}


// ---- GetInterfaceMap @ 1000898c

AFX_INTERFACEMAP * __thiscall CCmdTarget::GetInterfaceMap(CCmdTarget *this)

{
  AFX_INTERFACEMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000898c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetInterfaceMap(this);
  return pAVar1;
}


// ---- GetConnectionMap @ 10008992

AFX_CONNECTIONMAP * __thiscall CCmdTarget::GetConnectionMap(CCmdTarget *this)

{
  AFX_CONNECTIONMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008992. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetConnectionMap(this);
  return pAVar1;
}


// ---- GetDispatchMap @ 10008998

AFX_DISPMAP * __thiscall CCmdTarget::GetDispatchMap(CCmdTarget *this)

{
  AFX_DISPMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008998. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetDispatchMap(this);
  return pAVar1;
}


// ---- GetCommandMap @ 1000899e

AFX_OLECMDMAP * __thiscall CCmdTarget::GetCommandMap(CCmdTarget *this)

{
  AFX_OLECMDMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000899e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetCommandMap(this);
  return pAVar1;
}


// ---- GetTypeLib @ 100089aa

long __thiscall CCmdTarget::GetTypeLib(CCmdTarget *this,ulong param_1,ITypeLib **param_2)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100089aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = GetTypeLib(this,param_1,param_2);
  return lVar1;
}


// ---- GetTypeLibCache @ 100089b0

CTypeLibCache * __thiscall CCmdTarget::GetTypeLibCache(CCmdTarget *this)

{
  CTypeLibCache *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100089b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetTypeLibCache(this);
  return pCVar1;
}


// ---- GetTypeInfoCount @ 100089b6

uint __thiscall CCmdTarget::GetTypeInfoCount(CCmdTarget *this)

{
  uint uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100089b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = GetTypeInfoCount(this);
  return uVar1;
}


// ---- GetDispatchIID @ 100089bc

int __thiscall CCmdTarget::GetDispatchIID(CCmdTarget *this,_GUID *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100089bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetDispatchIID(this,param_1);
  return iVar1;
}


// ---- IsInvokeAllowed @ 100089c2

int __thiscall CCmdTarget::IsInvokeAllowed(CCmdTarget *this,long param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100089c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = IsInvokeAllowed(this,param_1);
  return iVar1;
}


// ---- OnCmdMsg @ 100089ce

int __thiscall
CCmdTarget::OnCmdMsg
          (CCmdTarget *this,uint param_1,int param_2,void *param_3,AFX_CMDHANDLERINFO *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100089ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCmdMsg(this,param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- CWinApp @ 100089da

void __thiscall CWinApp::CWinApp(CWinApp *this,char *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x100089da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CWinApp(this,param_1);
  return;
}


// ---- operator_delete @ 100089e0

void __cdecl operator_delete(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x100089e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  operator_delete(param_1);
  return;
}


// ---- ~CWinApp @ 100089e6

void __thiscall CWinApp::~CWinApp(CWinApp *this)

{
                    /* WARNING: Could not recover jumptable at 0x100089e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CWinApp(this);
  return;
}


// ---- InitInstance @ 100089ec

int __thiscall COleControlModule::InitInstance(COleControlModule *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100089ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = InitInstance(this);
  return iVar1;
}


// ---- ExitInstance @ 100089f2

int __thiscall COleControlModule::ExitInstance(COleControlModule *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100089f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ExitInstance(this);
  return iVar1;
}


// ---- UpdateRegistryAll @ 100089f8

int COleObjectFactory::UpdateRegistryAll(int param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100089f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = UpdateRegistryAll(param_1);
  return iVar1;
}


// ---- AfxOleRegisterTypeLib @ 100089fe

int AfxOleRegisterTypeLib(HINSTANCE__ *param_1,_GUID *param_2,char *param_3,char *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100089fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AfxOleRegisterTypeLib(param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- AfxGetModuleState @ 10008a04

AFX_MODULE_STATE * AfxGetModuleState(void)

{
  AFX_MODULE_STATE *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008a04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = AfxGetModuleState();
  return pAVar1;
}


// ---- AFX_MAINTAIN_STATE2 @ 10008a0a

void __thiscall
AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2(AFX_MAINTAIN_STATE2 *this,AFX_MODULE_STATE *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10008a0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AFX_MAINTAIN_STATE2(this,param_1);
  return;
}


// ---- AfxOleUnregisterTypeLib @ 10008a10

int AfxOleUnregisterTypeLib(_GUID *param_1,ushort param_2,ushort param_3,ulong param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AfxOleUnregisterTypeLib(param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- SetText @ 10008a16

void __thiscall COleControl::SetText(COleControl *this,char *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10008a16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetText(this,param_1);
  return;
}


// ---- GetText @ 10008a1c

ushort * __thiscall COleControl::GetText(COleControl *this)

{
  ushort *puVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008a1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar1 = GetText(this);
  return puVar1;
}


// ---- operator_new @ 10008a22

void * __cdecl operator_new(uint param_1)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008a22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = operator_new(param_1);
  return pvVar1;
}


// ---- COleObjectFactory @ 10008a46

void __thiscall
COleObjectFactory::COleObjectFactory
          (COleObjectFactory *this,_GUID *param_1,CRuntimeClass *param_2,int param_3,char *param_4)

{
                    /* WARNING: Could not recover jumptable at 0x10008a46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  COleObjectFactory(this,param_1,param_2,param_3,param_4);
  return;
}


// ---- ~COleObjectFactory @ 10008a4c

void __thiscall COleObjectFactory::~COleObjectFactory(COleObjectFactory *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008a4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~COleObjectFactory(this);
  return;
}


// ---- AfxGetTypeLibCache @ 10008a52

CTypeLibCache * AfxGetTypeLibCache(_GUID *param_1)

{
  CTypeLibCache *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008a52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = AfxGetTypeLibCache(param_1);
  return pCVar1;
}


// ---- AfxOleUnregisterClass @ 10008a58

int AfxOleUnregisterClass(_GUID *param_1,char *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008a58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AfxOleUnregisterClass(param_1,param_2);
  return iVar1;
}


// ---- AfxOleRegisterControlClass @ 10008a5e

int AfxOleRegisterControlClass
              (HINSTANCE__ *param_1,_GUID *param_2,char *param_3,uint param_4,uint param_5,
              int param_6,ulong param_7,_GUID *param_8,ushort param_9,ushort param_10)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008a5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AfxOleRegisterControlClass
                    (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                     param_10);
  return iVar1;
}


// ---- DestroySharedMenu @ 10008a64

void __thiscall COleControl::DestroySharedMenu(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008a64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DestroySharedMenu(this);
  return;
}


// ---- BuildSharedMenu @ 10008a6a

int __thiscall COleControl::BuildSharedMenu(COleControl *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008a6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = BuildSharedMenu(this);
  return iVar1;
}


// ---- RemoveFrameLevelUI @ 10008a70

void __thiscall COleControl::RemoveFrameLevelUI(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RemoveFrameLevelUI(this);
  return;
}


// ---- AddFrameLevelUI @ 10008a76

void __thiscall COleControl::AddFrameLevelUI(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008a76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AddFrameLevelUI(this);
  return;
}


// ---- OnActivateInPlace @ 10008a7c

long __thiscall COleControl::OnActivateInPlace(COleControl *this,int param_1,tagMSG *param_2)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008a7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = OnActivateInPlace(this,param_1,param_2);
  return lVar1;
}


// ---- OnHide @ 10008a82

long __thiscall COleControl::OnHide(COleControl *this)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008a82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = OnHide(this);
  return lVar1;
}


// ---- OnFrameClose @ 10008a88

void __thiscall COleControl::OnFrameClose(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008a88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnFrameClose(this);
  return;
}


// ---- ResizeFrameWindow @ 10008a8e

void __thiscall COleControl::ResizeFrameWindow(COleControl *this,int param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10008a8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ResizeFrameWindow(this,param_1,param_2);
  return;
}


// ---- CreateFrameWindow @ 10008a94

CControlFrameWnd * __thiscall COleControl::CreateFrameWindow(COleControl *this)

{
  CControlFrameWnd *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008a94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = CreateFrameWindow(this);
  return pCVar1;
}


// ---- OnOpen @ 10008a9a

long __thiscall COleControl::OnOpen(COleControl *this,int param_1,tagMSG *param_2)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008a9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = OnOpen(this,param_1,param_2);
  return lVar1;
}


// ---- OnReflectorDestroyed @ 10008aa0

void __thiscall COleControl::OnReflectorDestroyed(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008aa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnReflectorDestroyed(this);
  return;
}


// ---- SetInitialDataFormats @ 10008aa6

void __thiscall COleControl::SetInitialDataFormats(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008aa6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetInitialDataFormats(this);
  return;
}


// ---- CreateControlWindow @ 10008aac

int __thiscall
COleControl::CreateControlWindow(COleControl *this,HWND__ *param_1,CRect *param_2,tagRECT *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008aac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CreateControlWindow(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- ClientToParent @ 10008ab2

void __thiscall COleControl::ClientToParent(COleControl *this,tagRECT *param_1,tagPOINT *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10008ab2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ClientToParent(this,param_1,param_2);
  return;
}


// ---- ParentToClient @ 10008ab8

uint __thiscall
COleControl::ParentToClient(COleControl *this,tagRECT *param_1,tagPOINT *param_2,int param_3)

{
  uint uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008ab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = ParentToClient(this,param_1,param_2,param_3);
  return uVar1;
}


// ---- GetClientOffset @ 10008abe

void __thiscall COleControl::GetClientOffset(COleControl *this,long *param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10008abe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetClientOffset(this,param_1,param_2);
  return;
}


// ---- GetWindowlessDropTarget @ 10008ac4

IDropTarget * __thiscall COleControl::GetWindowlessDropTarget(COleControl *this)

{
  IDropTarget *pIVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008ac4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = GetWindowlessDropTarget(this);
  return pIVar1;
}


// ---- OnWindowlessMessage @ 10008aca

int __thiscall
COleControl::OnWindowlessMessage
          (COleControl *this,uint param_1,uint param_2,long param_3,long *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008aca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnWindowlessMessage(this,param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- OnInactiveMouseMove @ 10008ad0

void __thiscall
COleControl::OnInactiveMouseMove
          (COleControl *this,tagRECT *param_1,long param_2,long param_3,ulong param_4)

{
                    /* WARNING: Could not recover jumptable at 0x10008ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnInactiveMouseMove(this,param_1,param_2,param_3,param_4);
  return;
}


// ---- OnInactiveSetCursor @ 10008ad6

int __thiscall
COleControl::OnInactiveSetCursor
          (COleControl *this,tagRECT *param_1,long param_2,long param_3,ulong param_4,int param_5)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008ad6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnInactiveSetCursor(this,param_1,param_2,param_3,param_4,param_5);
  return iVar1;
}


// ---- GetActivationPolicy @ 10008adc

ulong __thiscall COleControl::GetActivationPolicy(COleControl *this)

{
  ulong uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008adc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = GetActivationPolicy(this);
  return uVar1;
}


// ---- GetControlFlags @ 10008ae2

ulong __thiscall COleControl::GetControlFlags(COleControl *this)

{
  ulong uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008ae2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = GetControlFlags(this);
  return uVar1;
}


// ---- ReparentControlWindow @ 10008ae8

void __thiscall
COleControl::ReparentControlWindow(COleControl *this,HWND__ *param_1,HWND__ *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10008ae8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReparentControlWindow(this,param_1,param_2);
  return;
}


// ---- IsSubclassedControl @ 10008aee

int __thiscall COleControl::IsSubclassedControl(COleControl *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008aee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = IsSubclassedControl(this);
  return iVar1;
}


// ---- OnGetPredefinedValue @ 10008af4

int __thiscall
COleControl::OnGetPredefinedValue(COleControl *this,long param_1,ulong param_2,tagVARIANT *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008af4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnGetPredefinedValue(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- OnGetPredefinedStrings @ 10008afa

int __thiscall
COleControl::OnGetPredefinedStrings
          (COleControl *this,long param_1,CStringArray *param_2,CDWordArray *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008afa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnGetPredefinedStrings(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- OnMapPropertyToPage @ 10008b00

int __thiscall
COleControl::OnMapPropertyToPage(COleControl *this,long param_1,_GUID *param_2,int *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008b00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnMapPropertyToPage(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- OnGetDisplayString @ 10008b06

int __thiscall COleControl::OnGetDisplayString(COleControl *this,long param_1,CString *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008b06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnGetDisplayString(this,param_1,param_2);
  return iVar1;
}


// ---- OnProperties @ 10008b0c

int __thiscall
COleControl::OnProperties(COleControl *this,tagMSG *param_1,HWND__ *param_2,tagRECT *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008b0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnProperties(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- OnEdit @ 10008b12

int __thiscall
COleControl::OnEdit(COleControl *this,tagMSG *param_1,HWND__ *param_2,tagRECT *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008b12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnEdit(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- OnDoVerb @ 10008b18

int __thiscall
COleControl::OnDoVerb
          (COleControl *this,long param_1,tagMSG *param_2,HWND__ *param_3,tagRECT *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008b18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnDoVerb(this,param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- OnEnumVerbs @ 10008b1e

int __thiscall COleControl::OnEnumVerbs(COleControl *this,IEnumOLEVERB **param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008b1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnEnumVerbs(this,param_1);
  return iVar1;
}


// ---- OnSetData @ 10008b24

int __thiscall
COleControl::OnSetData(COleControl *this,tagFORMATETC *param_1,tagSTGMEDIUM *param_2,int param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008b24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnSetData(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- OnRenderData @ 10008b2a

int __thiscall
COleControl::OnRenderData(COleControl *this,tagFORMATETC *param_1,tagSTGMEDIUM *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008b2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnRenderData(this,param_1,param_2);
  return iVar1;
}


// ---- OnRenderFileData @ 10008b30

int __thiscall COleControl::OnRenderFileData(COleControl *this,tagFORMATETC *param_1,CFile *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnRenderFileData(this,param_1,param_2);
  return iVar1;
}


// ---- OnRenderGlobalData @ 10008b36

int __thiscall
COleControl::OnRenderGlobalData(COleControl *this,tagFORMATETC *param_1,void **param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008b36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnRenderGlobalData(this,param_1,param_2);
  return iVar1;
}


// ---- OnGetNaturalExtent @ 10008b3c

int __thiscall
COleControl::OnGetNaturalExtent
          (COleControl *this,ulong param_1,long param_2,tagDVTARGETDEVICE *param_3,HDC__ *param_4,
          tagExtentInfo *param_5,tagSIZE *param_6)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008b3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnGetNaturalExtent(this,param_1,param_2,param_3,param_4,param_5,param_6);
  return iVar1;
}


// ---- OnQueryHitRect @ 10008b42

int __thiscall
COleControl::OnQueryHitRect
          (COleControl *this,ulong param_1,tagRECT *param_2,tagRECT *param_3,long param_4,
          ulong *param_5)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008b42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnQueryHitRect(this,param_1,param_2,param_3,param_4,param_5);
  return iVar1;
}


// ---- OnQueryHitPoint @ 10008b48

int __thiscall COleControl::OnQueryHitPoint(void)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008b48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnQueryHitPoint();
  return iVar1;
}


// ---- OnGetViewStatus @ 10008b4e

ulong __thiscall COleControl::OnGetViewStatus(COleControl *this)

{
  ulong uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008b4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = OnGetViewStatus(this);
  return uVar1;
}


// ---- OnGetViewRect @ 10008b54

int __thiscall COleControl::OnGetViewRect(COleControl *this,ulong param_1,_RECTL *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008b54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnGetViewRect(this,param_1,param_2);
  return iVar1;
}


// ---- OnGetViewExtent @ 10008b5a

int __thiscall
COleControl::OnGetViewExtent
          (COleControl *this,ulong param_1,long param_2,tagDVTARGETDEVICE *param_3,tagSIZE *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008b5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnGetViewExtent(this,param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- OnGetColorSet @ 10008b60

int __thiscall
COleControl::OnGetColorSet
          (COleControl *this,tagDVTARGETDEVICE *param_1,HDC__ *param_2,tagLOGPALETTE **param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008b60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnGetColorSet(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- OnHideToolBars @ 10008b66

void __thiscall COleControl::OnHideToolBars(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008b66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnHideToolBars(this);
  return;
}


// ---- OnShowToolBars @ 10008b6c

void __thiscall COleControl::OnShowToolBars(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008b6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnShowToolBars(this);
  return;
}


// ---- OnGetInPlaceMenu @ 10008b72

HMENU__ * __thiscall COleControl::OnGetInPlaceMenu(COleControl *this)

{
  HMENU__ *pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008b72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = OnGetInPlaceMenu(this);
  return pHVar1;
}


// ---- OnFreezeEvents @ 10008b78

void __thiscall COleControl::OnFreezeEvents(COleControl *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10008b78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnFreezeEvents(this,param_1);
  return;
}


// ---- OnAmbientPropertyChange @ 10008b7e

void __thiscall COleControl::OnAmbientPropertyChange(COleControl *this,long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10008b7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnAmbientPropertyChange(this,param_1);
  return;
}


// ---- OnMnemonic @ 10008b84

void __thiscall COleControl::OnMnemonic(COleControl *this,tagMSG *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10008b84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnMnemonic(this,param_1);
  return;
}


// ---- OnGetControlInfo @ 10008b8a

void __thiscall COleControl::OnGetControlInfo(COleControl *this,tagCONTROLINFO *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10008b8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnGetControlInfo(this,param_1);
  return;
}


// ---- OnForeColorChanged @ 10008b90

void __thiscall COleControl::OnForeColorChanged(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnForeColorChanged(this);
  return;
}


// ---- OnFontChanged @ 10008b96

void __thiscall COleControl::OnFontChanged(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008b96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnFontChanged(this);
  return;
}


// ---- OnTextChanged @ 10008b9c

void __thiscall COleControl::OnTextChanged(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008b9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnTextChanged(this);
  return;
}


// ---- OnEnabledChanged @ 10008ba2

void __thiscall COleControl::OnEnabledChanged(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008ba2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnEnabledChanged(this);
  return;
}


// ---- OnBorderStyleChanged @ 10008ba8

void __thiscall COleControl::OnBorderStyleChanged(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnBorderStyleChanged(this);
  return;
}


// ---- OnBackColorChanged @ 10008bae

void __thiscall COleControl::OnBackColorChanged(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008bae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnBackColorChanged(this);
  return;
}


// ---- OnAppearanceChanged @ 10008bb4

void __thiscall COleControl::OnAppearanceChanged(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008bb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnAppearanceChanged(this);
  return;
}


// ---- OnKeyPressEvent @ 10008bba

void __thiscall COleControl::OnKeyPressEvent(COleControl *this,ushort param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10008bba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnKeyPressEvent(this,param_1);
  return;
}


// ---- OnKeyUpEvent @ 10008bc0

void __thiscall COleControl::OnKeyUpEvent(COleControl *this,ushort param_1,ushort param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10008bc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnKeyUpEvent(this,param_1,param_2);
  return;
}


// ---- OnKeyDownEvent @ 10008bc6

void __thiscall COleControl::OnKeyDownEvent(COleControl *this,ushort param_1,ushort param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10008bc6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnKeyDownEvent(this,param_1,param_2);
  return;
}


// ---- OnClick @ 10008bcc

void __thiscall COleControl::OnClick(COleControl *this,ushort param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10008bcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnClick(this,param_1);
  return;
}


// ---- OnEventAdvise @ 10008bd2

void __thiscall COleControl::OnEventAdvise(COleControl *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10008bd2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnEventAdvise(this,param_1);
  return;
}


// ---- OnSetObjectRects @ 10008bd8

int __thiscall COleControl::OnSetObjectRects(COleControl *this,tagRECT *param_1,tagRECT *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008bd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnSetObjectRects(this,param_1,param_2);
  return iVar1;
}


// ---- OnClose @ 10008bde

void __thiscall COleControl::OnClose(COleControl *this,ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10008bde. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnClose(this,param_1);
  return;
}


// ---- OnSetClientSite @ 10008be4

void __thiscall COleControl::OnSetClientSite(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008be4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnSetClientSite(this);
  return;
}


// ---- DisplayError @ 10008bea

void __thiscall
COleControl::DisplayError
          (COleControl *this,long param_1,char *param_2,char *param_3,char *param_4,uint param_5)

{
                    /* WARNING: Could not recover jumptable at 0x10008bea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DisplayError(this,param_1,param_2,param_3,param_4,param_5);
  return;
}


// ---- GetMessageString @ 10008bf0

void __thiscall COleControl::GetMessageString(COleControl *this,uint param_1,CString *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10008bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetMessageString(this,param_1,param_2);
  return;
}


// ---- OnDrawMetafile @ 10008bf6

void __thiscall COleControl::OnDrawMetafile(COleControl *this,CDC *param_1,CRect *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10008bf6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnDrawMetafile(this,param_1,param_2);
  return;
}


// ---- GetClientRect @ 10008bfc

void __thiscall COleControl::GetClientRect(COleControl *this,tagRECT *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10008bfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetClientRect(this,param_1);
  return;
}


// ---- SetOccDialogInfo @ 10008c02

int __thiscall CWnd::SetOccDialogInfo(CWnd *this,_AFX_OCC_DIALOG_INFO *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008c02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetOccDialogInfo(this,param_1);
  return iVar1;
}


// ---- IsFrameWnd @ 10008c08

int __thiscall CWnd::IsFrameWnd(CWnd *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008c08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = IsFrameWnd(this);
  return iVar1;
}


// ---- CheckAutoCenter @ 10008c0e

int __thiscall CWnd::CheckAutoCenter(CWnd *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008c0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CheckAutoCenter(this);
  return iVar1;
}


// ---- OnChildNotify @ 10008c14

int __thiscall CWnd::OnChildNotify(CWnd *this,uint param_1,uint param_2,long param_3,long *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008c14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnChildNotify(this,param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- DefWindowProcA @ 10008c1a

long __thiscall
COleControl::DefWindowProcA(COleControl *this,uint param_1,uint param_2,long param_3)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008c1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = DefWindowProcA(this,param_1,param_2,param_3);
  return lVar1;
}


// ---- OnWndMsg @ 10008c20

int __thiscall CWnd::OnWndMsg(CWnd *this,uint param_1,uint param_2,long param_3,long *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008c20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnWndMsg(this,param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- WindowProc @ 10008c26

long __thiscall COleControl::WindowProc(COleControl *this,uint param_1,uint param_2,long param_3)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008c26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = WindowProc(this,param_1,param_2,param_3);
  return lVar1;
}


// ---- OnAmbientProperty @ 10008c2c

int __thiscall
CWnd::OnAmbientProperty(CWnd *this,COleControlSite *param_1,long param_2,tagVARIANT *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008c2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnAmbientProperty(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- PreTranslateMessage @ 10008c32

int __thiscall CWnd::PreTranslateMessage(CWnd *this,tagMSG *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008c32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = PreTranslateMessage(this,param_1);
  return iVar1;
}


// ---- GetSuperWndProcAddr @ 10008c38

_func_long_HWND___ptr_uint_uint_long ** __thiscall CWnd::GetSuperWndProcAddr(CWnd *this)

{
  _func_long_HWND___ptr_uint_uint_long **pp_Var1;
  
                    /* WARNING: Could not recover jumptable at 0x10008c38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pp_Var1 = GetSuperWndProcAddr(this);
  return pp_Var1;
}


// ---- OnNotify @ 10008c3e

int __thiscall CWnd::OnNotify(CWnd *this,uint param_1,long param_2,long *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008c3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnNotify(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- OnCommand @ 10008c44

int __thiscall CWnd::OnCommand(CWnd *this,uint param_1,long param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008c44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCommand(this,param_1,param_2);
  return iVar1;
}


// ---- EndModalLoop @ 10008c4a

void __thiscall CWnd::EndModalLoop(CWnd *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10008c4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EndModalLoop(this,param_1);
  return;
}


// ---- ContinueModal @ 10008c50

int __thiscall CWnd::ContinueModal(CWnd *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ContinueModal(this);
  return iVar1;
}


// ---- WinHelpA @ 10008c56

void __thiscall CWnd::WinHelpA(CWnd *this,ulong param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10008c56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WinHelpA(this,param_1,param_2);
  return;
}


// ---- GetScrollBarCtrl @ 10008c5c

CScrollBar * __thiscall CWnd::GetScrollBarCtrl(CWnd *this,int param_1)

{
  CScrollBar *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008c5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetScrollBarCtrl(this,param_1);
  return pCVar1;
}


// ---- OnToolHitTest @ 10008c62

int __thiscall CWnd::OnToolHitTest(void)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008c62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnToolHitTest();
  return iVar1;
}


// ---- CalcWindowRect @ 10008c68

void __thiscall CWnd::CalcWindowRect(CWnd *this,tagRECT *param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10008c68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CalcWindowRect(this,param_1,param_2);
  return;
}


// ---- PreCreateWindow @ 10008c6e

int __thiscall CWnd::PreCreateWindow(CWnd *this,tagCREATESTRUCTA *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008c6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = PreCreateWindow(this,param_1);
  return iVar1;
}


// ---- DestroyWindow @ 10008c74

int __thiscall CWnd::DestroyWindow(CWnd *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008c74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = DestroyWindow(this);
  return iVar1;
}


// ---- Create @ 10008c7a

int __thiscall
CWnd::Create(CWnd *this,char *param_1,char *param_2,ulong param_3,tagRECT *param_4,CWnd *param_5,
            uint param_6,CCreateContext *param_7)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008c7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Create(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return iVar1;
}


// ---- PreSubclassWindow @ 10008c80

void __thiscall CWnd::PreSubclassWindow(CWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008c80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PreSubclassWindow(this);
  return;
}


// ---- GetConnectionHook @ 10008c86

IConnectionPoint * __thiscall COleControl::GetConnectionHook(COleControl *this,_GUID *param_1)

{
  IConnectionPoint *pIVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008c86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = GetConnectionHook(this,param_1);
  return pIVar1;
}


// ---- GetExtraConnectionPoints @ 10008c8c

int __thiscall COleControl::GetExtraConnectionPoints(COleControl *this,CPtrArray *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008c8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetExtraConnectionPoints(this,param_1);
  return iVar1;
}


// ---- GetInterfaceHook @ 10008c92

IUnknown * __thiscall COleControl::GetInterfaceHook(COleControl *this,void *param_1)

{
  IUnknown *pIVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008c92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = GetInterfaceHook(this,param_1);
  return pIVar1;
}


// ---- OnCreateAggregates @ 10008c98

int __thiscall COleControl::OnCreateAggregates(COleControl *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008c98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCreateAggregates(this);
  return iVar1;
}


// ---- GetInterfaceMap @ 10008c9e

AFX_INTERFACEMAP * __thiscall COleControl::GetInterfaceMap(COleControl *this)

{
  AFX_INTERFACEMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008c9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetInterfaceMap(this);
  return pAVar1;
}


// ---- GetConnectionMap @ 10008ca4

AFX_CONNECTIONMAP * __thiscall COleControl::GetConnectionMap(COleControl *this)

{
  AFX_CONNECTIONMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008ca4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetConnectionMap(this);
  return pAVar1;
}


// ---- GetDispatchIID @ 10008caa

int __thiscall COleControl::GetDispatchIID(COleControl *this,_GUID *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008caa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetDispatchIID(this,param_1);
  return iVar1;
}


// ---- OnFinalRelease @ 10008cb0

void __thiscall COleControl::OnFinalRelease(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnFinalRelease(this);
  return;
}


// ---- Serialize @ 10008cb6

void __thiscall COleControl::Serialize(COleControl *this,CArchive *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10008cb6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Serialize(this,param_1);
  return;
}


// ---- ~COleControl @ 10008cc8

void __thiscall COleControl::~COleControl(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~COleControl(this);
  return;
}


// ---- DeleteObject @ 10008cce

int __thiscall CGdiObject::DeleteObject(CGdiObject *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008cce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = DeleteObject(this);
  return iVar1;
}


// ---- SetInitialSize @ 10008cd4

void __thiscall COleControl::SetInitialSize(COleControl *this,int param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10008cd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetInitialSize(this,param_1,param_2);
  return;
}


// ---- Attach @ 10008cda

int __thiscall CGdiObject::Attach(CGdiObject *this,void *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008cda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Attach(this,param_1);
  return iVar1;
}


// ---- AfxFindResourceHandle @ 10008ce0

HINSTANCE__ * AfxFindResourceHandle(char *param_1,char *param_2)

{
  HINSTANCE__ *pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008ce0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = AfxFindResourceHandle(param_1,param_2);
  return pHVar1;
}


// ---- AfxEnableControlContainer @ 10008ce6

void __cdecl AfxEnableControlContainer(COccManager *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10008ce6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AfxEnableControlContainer(param_1);
  return;
}


// ---- InitializeIIDs @ 10008cec

void __thiscall COleControl::InitializeIIDs(COleControl *this,_GUID *param_1,_GUID *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10008cec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitializeIIDs(this,param_1,param_2);
  return;
}


// ---- COleControl @ 10008cf2

void __thiscall COleControl::COleControl(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008cf2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  COleControl(this);
  return;
}


// ---- ~CPictureHolder @ 10008cf8

void __thiscall CPictureHolder::~CPictureHolder(CPictureHolder *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008cf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CPictureHolder(this);
  return;
}


// ---- Render @ 10008cfe

void __thiscall
CPictureHolder::Render(CPictureHolder *this,CDC *param_1,CRect *param_2,CRect *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x10008cfe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Render(this,param_1,param_2,param_3);
  return;
}


// ---- CreateFromBitmap @ 10008d04

int __thiscall
CPictureHolder::CreateFromBitmap
          (CPictureHolder *this,HBITMAP__ *param_1,HPALETTE__ *param_2,int param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008d04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CreateFromBitmap(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- CPictureHolder @ 10008d0a

void __thiscall CPictureHolder::CPictureHolder(CPictureHolder *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008d0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CPictureHolder(this);
  return;
}


// ---- DoPropExchange @ 10008d10

void __thiscall COleControl::DoPropExchange(COleControl *this,CPropExchange *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10008d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DoPropExchange(this,param_1);
  return;
}


// ---- OnResetState @ 10008d16

void __thiscall COleControl::OnResetState(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008d16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnResetState(this);
  return;
}


// ---- ~CDialog @ 10008d1c

void __thiscall CDialog::~CDialog(CDialog *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008d1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CDialog(this);
  return;
}


// ---- DoModal @ 10008d22

int __thiscall CDialog::DoModal(CDialog *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008d22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = DoModal(this);
  return iVar1;
}


// ---- CDialog @ 10008d28

void __thiscall CDialog::CDialog(CDialog *this,uint param_1,CWnd *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10008d28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CDialog(this,param_1,param_2);
  return;
}


// ---- PostNcDestroy @ 10008d2e

void __thiscall CWnd::PostNcDestroy(CWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008d2e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PostNcDestroy(this);
  return;
}


// ---- ~CString @ 10008d34

void __thiscall CString::~CString(CString *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008d34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CString(this);
  return;
}


// ---- FireEvent @ 10008d3a

void __thiscall COleControl::FireEvent(COleControl *this,long param_1,uchar *param_2,...)

{
                    /* WARNING: Could not recover jumptable at 0x10008d3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FireEvent(this,param_1,param_2);
  return;
}


// ---- CString @ 10008d40

void __thiscall CString::CString(CString *this,CString *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10008d40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CString(this,param_1);
  return;
}


// ---- GetRuntimeClass @ 10008d46

CRuntimeClass * __thiscall CObject::GetRuntimeClass(CObject *this)

{
  CRuntimeClass *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008d46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetRuntimeClass(this);
  return pCVar1;
}


// ---- AfxOleRegisterPropertyPageClass @ 10008d5e

int AfxOleRegisterPropertyPageClass(HINSTANCE__ *param_1,_GUID *param_2,uint param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008d5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AfxOleRegisterPropertyPageClass(param_1,param_2,param_3);
  return iVar1;
}


// ---- OnEditProperty @ 10008d64

int __thiscall COlePropertyPage::OnEditProperty(COlePropertyPage *this,long param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008d64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnEditProperty(this,param_1);
  return iVar1;
}


// ---- OnHelp @ 10008d6a

int __thiscall COlePropertyPage::OnHelp(COlePropertyPage *this,char *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008d6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnHelp(this,param_1);
  return iVar1;
}


// ---- OnObjectsChanged @ 10008d70

void __thiscall COlePropertyPage::OnObjectsChanged(COlePropertyPage *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnObjectsChanged(this);
  return;
}


// ---- OnSetPageSite @ 10008d76

void __thiscall COlePropertyPage::OnSetPageSite(COlePropertyPage *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008d76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnSetPageSite(this);
  return;
}


// ---- PreInitDialog @ 10008d7c

void __thiscall CDialog::PreInitDialog(CDialog *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008d7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PreInitDialog(this);
  return;
}


// ---- OnCancel @ 10008d82

void __thiscall CDialog::OnCancel(CDialog *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008d82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnCancel(this);
  return;
}


// ---- OnOK @ 10008d88

void __thiscall CDialog::OnOK(CDialog *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008d88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnOK(this);
  return;
}


// ---- OnSetFont @ 10008d8e

void __thiscall CDialog::OnSetFont(CDialog *this,CFont *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10008d8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnSetFont(this,param_1);
  return;
}


// ---- OnInitDialog @ 10008d94

int __thiscall COlePropertyPage::OnInitDialog(COlePropertyPage *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008d94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnInitDialog(this);
  return iVar1;
}


// ---- SetOccDialogInfo @ 10008d9a

int __thiscall CDialog::SetOccDialogInfo(CDialog *this,_AFX_OCC_DIALOG_INFO *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008d9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetOccDialogInfo(this,param_1);
  return iVar1;
}


// ---- CheckAutoCenter @ 10008da0

int __thiscall CDialog::CheckAutoCenter(CDialog *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008da0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CheckAutoCenter(this);
  return iVar1;
}


// ---- DefWindowProcA @ 10008da6

long __thiscall CWnd::DefWindowProcA(CWnd *this,uint param_1,uint param_2,long param_3)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008da6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = DefWindowProcA(this,param_1,param_2,param_3);
  return lVar1;
}


// ---- WindowProc @ 10008dac

long __thiscall
COlePropertyPage::WindowProc(COlePropertyPage *this,uint param_1,uint param_2,long param_3)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008dac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = WindowProc(this,param_1,param_2,param_3);
  return lVar1;
}


// ---- PreTranslateMessage @ 10008db2

int __thiscall COlePropertyPage::PreTranslateMessage(COlePropertyPage *this,tagMSG *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008db2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = PreTranslateMessage(this,param_1);
  return iVar1;
}


// ---- OnCommand @ 10008db8

int __thiscall COlePropertyPage::OnCommand(COlePropertyPage *this,uint param_1,long param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008db8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCommand(this,param_1,param_2);
  return iVar1;
}


// ---- GetInterfaceMap @ 10008dbe

AFX_INTERFACEMAP * __thiscall COlePropertyPage::GetInterfaceMap(COlePropertyPage *this)

{
  AFX_INTERFACEMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008dbe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetInterfaceMap(this);
  return pAVar1;
}


// ---- OnFinalRelease @ 10008dc4

void __thiscall COlePropertyPage::OnFinalRelease(COlePropertyPage *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008dc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnFinalRelease(this);
  return;
}


// ---- OnCmdMsg @ 10008dca

int __thiscall
CDialog::OnCmdMsg(CDialog *this,uint param_1,int param_2,void *param_3,AFX_CMDHANDLERINFO *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008dca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCmdMsg(this,param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- COlePropertyPage @ 10008dd0

void __thiscall COlePropertyPage::COlePropertyPage(COlePropertyPage *this,uint param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10008dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  COlePropertyPage(this,param_1,param_2);
  return;
}


// ---- ~COlePropertyPage @ 10008dd6

void __thiscall COlePropertyPage::~COlePropertyPage(COlePropertyPage *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008dd6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~COlePropertyPage(this);
  return;
}


// ---- DDP_PostProcessing @ 10008ddc

void DDP_PostProcessing(CDataExchange *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10008ddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DDP_PostProcessing(param_1);
  return;
}


// ---- WindowProc @ 10008de2

long __thiscall CWnd::WindowProc(CWnd *this,uint param_1,uint param_2,long param_3)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008de2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = WindowProc(this,param_1,param_2,param_3);
  return lVar1;
}


// ---- OnFinalRelease @ 10008de8

void __thiscall CWnd::OnFinalRelease(CWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008de8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnFinalRelease(this);
  return;
}


// ---- GetRuntimeClass @ 10008dee

CRuntimeClass * __thiscall CWnd::GetRuntimeClass(CWnd *this)

{
  CRuntimeClass *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008dee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetRuntimeClass(this);
  return pCVar1;
}


// ---- operator= @ 10008df4

CString * __thiscall CString::operator=(CString *this,char *param_1)

{
  CString *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = operator=(this,param_1);
  return pCVar1;
}


// ---- CWnd @ 10008dfa

void __thiscall CWnd::CWnd(CWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008dfa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CWnd(this);
  return;
}


// ---- CString @ 10008e00

void __thiscall CString::CString(CString *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008e00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CString(this);
  return;
}


// ---- CString @ 10008e06

void __thiscall CString::CString(CString *this,char *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10008e06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CString(this,param_1);
  return;
}


// ---- ~CWnd @ 10008e0c

void __thiscall CWnd::~CWnd(CWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008e0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CWnd(this);
  return;
}


// ---- GetMessageMap @ 10008e12

AFX_MSGMAP * __thiscall CWnd::GetMessageMap(CWnd *this)

{
  AFX_MSGMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008e12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetMessageMap(this);
  return pAVar1;
}


// ---- AfxMessageBox @ 10008e18

int AfxMessageBox(char *param_1,uint param_2,uint param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008e18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AfxMessageBox(param_1,param_2,param_3);
  return iVar1;
}


// ---- CreateControl @ 10008e1e

int __thiscall
CWnd::CreateControl(CWnd *this,_GUID *param_1,char *param_2,ulong param_3,tagRECT *param_4,
                   CWnd *param_5,uint param_6,CFile *param_7,int param_8,ushort *param_9)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008e1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CreateControl(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9
                       );
  return iVar1;
}


// ---- CreateEx @ 10008e24

int __thiscall
CWnd::CreateEx(CWnd *this,ulong param_1,char *param_2,char *param_3,ulong param_4,int param_5,
              int param_6,int param_7,int param_8,HWND__ *param_9,HMENU__ *param_10,void *param_11)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008e24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CreateEx(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                   param_10,param_11);
  return iVar1;
}


// ---- AfxRegisterWndClass @ 10008e2a

char * AfxRegisterWndClass(uint param_1,HICON__ *param_2,HBRUSH__ *param_3,HICON__ *param_4)

{
  char *pcVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008e2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = AfxRegisterWndClass(param_1,param_2,param_3,param_4);
  return pcVar1;
}


// ---- operator= @ 10008e30

CString * __thiscall CString::operator=(CString *this,ushort *param_1)

{
  CString *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = operator=(this,param_1);
  return pCVar1;
}


// ---- CString @ 10008e36

void __thiscall CString::CString(CString *this,ushort *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10008e36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CString(this,param_1);
  return;
}


// ---- MakeUpper @ 10008e3c

void __thiscall CString::MakeUpper(CString *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008e3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MakeUpper(this);
  return;
}


// ---- operator= @ 10008e42

CString * __thiscall CString::operator=(CString *this,CString *param_1)

{
  CString *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008e42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = operator=(this,param_1);
  return pCVar1;
}


// ---- operator+ @ 10008e48

void operator+(char *param_1,CString *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10008e48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  operator+(param_1,param_2);
  return;
}


// ---- operator+ @ 10008e4e

void operator+(CString *param_1,CString *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10008e4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  operator+(param_1,param_2);
  return;
}


// ---- Mid @ 10008e54

void __thiscall CString::Mid(CString *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10008e54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Mid(this,param_1);
  return;
}


// ---- AllocSysString @ 10008e5a

ushort * __thiscall CString::AllocSysString(CString *this)

{
  ushort *puVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008e5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar1 = AllocSysString(this);
  return puVar1;
}


// ---- operator+= @ 10008e60

CString * __thiscall CString::operator+=(CString *this,CString *param_1)

{
  CString *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008e60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = operator+=(this,param_1);
  return pCVar1;
}


// ---- operator+ @ 10008e66

void operator+(CString *param_1,char *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10008e66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  operator+(param_1,param_2);
  return;
}


// ---- AfxTryCleanup @ 10008e6c

void AfxTryCleanup(void)

{
                    /* WARNING: Could not recover jumptable at 0x10008e6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AfxTryCleanup();
  return;
}


// ---- CFile @ 10008e72

void __thiscall CFile::CFile(CFile *this,char *param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10008e72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CFile(this,param_1,param_2);
  return;
}


// ---- AFX_EXCEPTION_LINK @ 10008e78

void __thiscall AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(AFX_EXCEPTION_LINK *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008e78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AFX_EXCEPTION_LINK(this);
  return;
}


// ---- InvokeHelper @ 10008e7e

void __thiscall
CWnd::InvokeHelper(CWnd *this,long param_1,ushort param_2,ushort param_3,void *param_4,
                  uchar *param_5,...)

{
                    /* WARNING: Could not recover jumptable at 0x10008e7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InvokeHelper(this,param_1,param_2,param_3,param_4,param_5);
  return;
}


// ---- Serialize @ 10008e84

void __thiscall CObList::Serialize(CObList *this,CArchive *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10008e84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Serialize(this,param_1);
  return;
}


// ---- CObList @ 10008e8a

void __thiscall CObList::CObList(CObList *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10008e8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CObList(this,param_1);
  return;
}


// ---- ~CObList @ 10008e90

void __thiscall CObList::~CObList(CObList *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CObList(this);
  return;
}


// ---- AddTail @ 10008e96

__POSITION * __thiscall CObList::AddTail(CObList *this,CObject *param_1)

{
  __POSITION *p_Var1;
  
                    /* WARNING: Could not recover jumptable at 0x10008e96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  p_Var1 = AddTail(this,param_1);
  return p_Var1;
}


// ---- Find @ 10008e9c

__POSITION * __thiscall CObList::Find(CObList *this,CObject *param_1,__POSITION *param_2)

{
  __POSITION *p_Var1;
  
                    /* WARNING: Could not recover jumptable at 0x10008e9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  p_Var1 = Find(this,param_1,param_2);
  return p_Var1;
}


// ---- operator+= @ 10008ea2

CString * __thiscall CString::operator+=(CString *this,char *param_1)

{
  CString *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008ea2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = operator+=(this,param_1);
  return pCVar1;
}


// ---- RemoveAt @ 10008ea8

void __thiscall CObList::RemoveAt(CObList *this,__POSITION *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10008ea8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RemoveAt(this,param_1);
  return;
}


// ---- ReleaseBuffer @ 10008eae

void __thiscall CString::ReleaseBuffer(CString *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10008eae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseBuffer(this,param_1);
  return;
}


// ---- GetBufferSetLength @ 10008eb4

char * __thiscall CString::GetBufferSetLength(CString *this,int param_1)

{
  char *pcVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008eb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = GetBufferSetLength(this,param_1);
  return pcVar1;
}


// ---- FUN_10008ec4 @ 10008ec4

undefined4 * FUN_10008ec4(void)

{
  AFX_MODULE_STATE::AFX_MODULE_STATE((AFX_MODULE_STATE *)&DAT_1000e480,1,FUN_10008f22,0x600);
  DAT_1000e480 = &PTR_FUN_1000b4c4;
  return &DAT_1000e480;
}


// ---- FUN_10008eec @ 10008eec

AFX_MODULE_STATE * __thiscall FUN_10008eec(void *this,byte param_1)

{
  AFX_MODULE_STATE::~AFX_MODULE_STATE(this);
  if ((param_1 & 1) != 0) {
    CNoTrackObject::operator_delete(this);
  }
  return this;
}


// ---- ~AFX_MODULE_STATE @ 10008f07

void __thiscall AFX_MODULE_STATE::~AFX_MODULE_STATE(AFX_MODULE_STATE *this)

{
                    /* WARNING: Could not recover jumptable at 0x10009318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~AFX_MODULE_STATE(this);
  return;
}


// ---- FUN_10008f0c @ 10008f0c

void FUN_10008f0c(void)

{
  FUN_10009111((_onexit_t)&LAB_10008f18);
  return;
}


// ---- FUN_10008f22 @ 10008f22

/* WARNING: Function: _EH_prolog replaced with injection: EH_prolog */

void FUN_10008f22(HWND__ *param_1,uint param_2,uint param_3,long param_4)

{
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10009f58;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2
            ((AFX_MAINTAIN_STATE2 *)&local_18,(AFX_MODULE_STATE *)&DAT_1000e480);
  local_8 = 0;
  AfxWndProc(param_1,param_2,param_3,param_4);
  *(undefined4 *)(local_14 + 4) = local_18;
  ExceptionList = local_10;
  return;
}


// ---- FUN_10008f67 @ 10008f67

undefined4 * FUN_10008f67(void)

{
  return &DAT_1000e480;
}


// ---- FUN_10008f6d @ 10008f6d

int FUN_10008f6d(HINSTANCE__ *param_1,int param_2)

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
      pAVar5 = AfxSetModuleState((AFX_MODULE_STATE *)&DAT_1000e480);
      p_Var3 = AfxGetThreadState();
      *(AFX_MODULE_STATE **)(p_Var3 + 8) = pAVar5;
      pAVar5 = AfxGetModuleState();
      if (*(int **)(pAVar5 + 4) != (int *)0x0) {
        (**(code **)(**(int **)(pAVar5 + 4) + 0x70))();
      }
      AfxLockTempMaps();
      AfxUnlockTempMaps(-1);
      AfxWinTerm();
      AfxTermExtensionModule((AFX_EXTENSION_MODULE *)&DAT_1000f510,1);
    }
    else if (param_2 == 3) {
      AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2
                ((AFX_MAINTAIN_STATE2 *)&local_c,(AFX_MODULE_STATE *)&DAT_1000e480);
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
  iVar4 = AfxWinInit(param_1,(HINSTANCE__ *)0x0,&DAT_1000e43c,0);
  if (iVar4 != 0) {
    pAVar5 = AfxGetModuleState();
    piVar2 = *(int **)(pAVar5 + 4);
    if ((piVar2 == (int *)0x0) || (iVar4 = (**(code **)(*piVar2 + 0x58))(), iVar4 != 0)) {
      *(undefined4 *)(p_Var3 + 8) = uVar1;
      AfxInitExtensionModule((AFX_EXTENSION_MODULE *)&DAT_1000f510,param_1);
      this = operator_new(0x40);
      if (this != (CDynLinkLibrary *)0x0) {
        CDynLinkLibrary::CDynLinkLibrary(this,(AFX_EXTENSION_MODULE *)&DAT_1000f510,0);
      }
      param_2 = 1;
      goto LAB_10008ff9;
    }
    (**(code **)(*piVar2 + 0x70))();
  }
  AfxWinTerm();
LAB_10008ff9:
  *(undefined4 *)(p_Var3 + 8) = uVar1;
  p_Var3 = AfxGetThreadState();
  AfxSetModuleState(*(AFX_MODULE_STATE **)(p_Var3 + 8));
  return param_2;
}


// ---- FUN_10009094 @ 10009094

undefined4 FUN_10009094(undefined4 param_1,int param_2)

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
    pAVar2 = AfxSetModuleState((AFX_MODULE_STATE *)&DAT_1000e480);
    *(AFX_MODULE_STATE **)(p_Var1 + 8) = pAVar2;
  }
  else if (param_2 == 0) {
    p_Var1 = AfxGetThreadState();
    AfxSetModuleState(*(AFX_MODULE_STATE **)(p_Var1 + 8));
  }
  return 1;
}


// ---- FUN_100090e5 @ 100090e5

void __cdecl FUN_100090e5(_onexit_t param_1)

{
  if (DAT_1000f540 == -1) {
    _onexit(param_1);
    return;
  }
  __dllonexit(param_1,&DAT_1000f540,&DAT_1000f53c);
  return;
}


// ---- FUN_10009111 @ 10009111

int __cdecl FUN_10009111(_onexit_t param_1)

{
  int iVar1;
  
  iVar1 = FUN_100090e5(param_1);
  return (iVar1 != 0) - 1;
}


// ---- FUN_10009130 @ 10009130

type_info * __thiscall FUN_10009130(void *this,byte param_1)

{
  type_info::~type_info(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_1000914c @ 1000914c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1000914c(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *_Memory;
  undefined4 *puVar2;
  
  if (param_2 == 0) {
    if (0 < DAT_1000f52c) {
      DAT_1000f52c = DAT_1000f52c + -1;
      goto LAB_10009162;
    }
LAB_1000918a:
    uVar1 = 0;
  }
  else {
LAB_10009162:
    _DAT_1000f538 = *(undefined4 *)_adjust_fdiv_exref;
    if (param_2 == 1) {
      DAT_1000f540 = malloc(0x80);
      if (DAT_1000f540 == (undefined4 *)0x0) goto LAB_1000918a;
      *DAT_1000f540 = 0;
      DAT_1000f53c = DAT_1000f540;
      initterm(&DAT_1000d000,&DAT_1000d018);
      DAT_1000f52c = DAT_1000f52c + 1;
    }
    else if ((param_2 == 0) &&
            (_Memory = DAT_1000f540, puVar2 = DAT_1000f53c, DAT_1000f540 != (undefined4 *)0x0)) {
      while (puVar2 = puVar2 + -1, _Memory <= puVar2) {
        if ((code *)*puVar2 != (code *)0x0) {
          (*(code *)*puVar2)();
          _Memory = DAT_1000f540;
        }
      }
      free(_Memory);
      DAT_1000f540 = (undefined4 *)0x0;
    }
    uVar1 = 1;
  }
  return uVar1;
}


// ---- entry @ 100091f7

int entry(HINSTANCE__ *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_2;
  iVar2 = DAT_1000f52c;
  if (param_2 != 0) {
    if ((param_2 != 1) && (param_2 != 2)) goto LAB_1000923f;
    if ((PTR_FUN_1000e224 != (undefined *)0x0) &&
       (iVar2 = (*(code *)PTR_FUN_1000e224)(param_1,param_2,param_3), iVar2 == 0)) {
      return 0;
    }
    iVar2 = FUN_1000914c(param_1,param_2);
  }
  if (iVar2 == 0) {
    return 0;
  }
LAB_1000923f:
  iVar2 = FUN_10008f6d(param_1,param_2);
  if (param_2 == 1) {
    if (iVar2 != 0) {
      return iVar2;
    }
    FUN_1000914c(param_1,0);
  }
  if ((param_2 != 0) && (param_2 != 3)) {
    return iVar2;
  }
  iVar3 = FUN_1000914c(param_1,param_2);
  param_2 = iVar2;
  if (iVar3 == 0) {
    param_2 = 0;
  }
  if (param_2 != 0) {
    if (PTR_FUN_1000e224 != (undefined *)0x0) {
      iVar2 = (*(code *)PTR_FUN_1000e224)(param_1,iVar1,param_3);
      return iVar2;
    }
    return param_2;
  }
  return 0;
}


// ---- _EH_prolog @ 10009294

/* WARNING: This is an inlined function */
/* WARNING: Function: _EH_prolog replaced with injection: EH_prolog */

void _EH_prolog(void)

{
  undefined1 auStack_c [12];
  
  ExceptionList = auStack_c;
                    /* WARNING: Could not recover jumptable at 0x10009294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  return;
}


// ---- __dllonexit @ 1000929a

void __dllonexit(void)

{
                    /* WARNING: Could not recover jumptable at 0x1000929a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __dllonexit();
  return;
}


// ---- ~type_info @ 100092a0

void __thiscall type_info::~type_info(type_info *this)

{
                    /* WARNING: Could not recover jumptable at 0x100092a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~type_info(this);
  return;
}


// ---- initterm @ 100092a6

void __cdecl initterm(void)

{
                    /* WARNING: Could not recover jumptable at 0x100092a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  initterm();
  return;
}


// ---- DdeGetLastError @ 100092ac

UINT DdeGetLastError(DWORD idInst)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100092ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = DdeGetLastError(idInst);
  return UVar1;
}


// ---- DdeCreateStringHandleA @ 100092b2

HSZ DdeCreateStringHandleA(DWORD idInst,LPCSTR psz,int iCodePage)

{
  HSZ pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100092b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = DdeCreateStringHandleA(idInst,psz,iCodePage);
  return pHVar1;
}


// ---- DdeFreeStringHandle @ 100092b8

BOOL DdeFreeStringHandle(DWORD idInst,HSZ hsz)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100092b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DdeFreeStringHandle(idInst,hsz);
  return BVar1;
}


// ---- DdeDisconnect @ 100092be

BOOL DdeDisconnect(HCONV hConv)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100092be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DdeDisconnect(hConv);
  return BVar1;
}


// ---- DdeConnect @ 100092c4

HCONV DdeConnect(DWORD idInst,HSZ hszService,HSZ hszTopic,PCONVCONTEXT pCC)

{
  HCONV pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100092c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = DdeConnect(idInst,hszService,hszTopic,pCC);
  return pHVar1;
}


// ---- DdeUnaccessData @ 100092ca

BOOL DdeUnaccessData(HDDEDATA hData)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100092ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DdeUnaccessData(hData);
  return BVar1;
}


// ---- DdeAccessData @ 100092d0

LPBYTE DdeAccessData(HDDEDATA hData,LPDWORD pcbDataSize)

{
  LPBYTE pBVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100092d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pBVar1 = DdeAccessData(hData,pcbDataSize);
  return pBVar1;
}


// ---- DdeClientTransaction @ 100092d6

HDDEDATA DdeClientTransaction
                   (LPBYTE pData,DWORD cbData,HCONV hConv,HSZ hszItem,UINT wFmt,UINT wType,
                   DWORD dwTimeout,LPDWORD pdwResult)

{
  HDDEDATA pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100092d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = DdeClientTransaction(pData,cbData,hConv,hszItem,wFmt,wType,dwTimeout,pdwResult);
  return pHVar1;
}


// ---- DdeUninitialize @ 100092dc

BOOL DdeUninitialize(DWORD idInst)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100092dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DdeUninitialize(idInst);
  return BVar1;
}


// ---- DdeNameService @ 100092e2

HDDEDATA DdeNameService(DWORD idInst,HSZ hsz1,HSZ hsz2,UINT afCmd)

{
  HDDEDATA pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100092e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = DdeNameService(idInst,hsz1,hsz2,afCmd);
  return pHVar1;
}


// ---- DdeInitializeA @ 100092e8

UINT DdeInitializeA(LPDWORD pidInst,PFNCALLBACK pfnCallback,DWORD afCmd,DWORD ulRes)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100092e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = DdeInitializeA(pidInst,pfnCallback,afCmd,ulRes);
  return UVar1;
}


// ---- DdeQueryConvInfo @ 100092ee

UINT DdeQueryConvInfo(HCONV hConv,DWORD idTransaction,PCONVINFO pConvInfo)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100092ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = DdeQueryConvInfo(hConv,idTransaction,pConvInfo);
  return UVar1;
}


// ---- DdeCmpStringHandles @ 100092f4

int DdeCmpStringHandles(HSZ hsz1,HSZ hsz2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100092f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = DdeCmpStringHandles(hsz1,hsz2);
  return iVar1;
}


// ---- DdeCreateDataHandle @ 100092fa

HDDEDATA DdeCreateDataHandle(DWORD idInst,LPBYTE pSrc,DWORD cb,DWORD cbOff,HSZ hszItem,UINT wFmt,
                            UINT afCmd)

{
  HDDEDATA pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100092fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = DdeCreateDataHandle(idInst,pSrc,cb,cbOff,hszItem,wFmt,afCmd);
  return pHVar1;
}


// ---- DdePostAdvise @ 10009300

BOOL DdePostAdvise(DWORD idInst,HSZ hszTopic,HSZ hszItem)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DdePostAdvise(idInst,hszTopic,hszItem);
  return BVar1;
}


// ---- DdeQueryStringA @ 10009306

DWORD DdeQueryStringA(DWORD idInst,HSZ hsz,LPSTR psz,DWORD cchMax,int iCodePage)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009306. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = DdeQueryStringA(idInst,hsz,psz,cchMax,iCodePage);
  return DVar1;
}


// ---- AFX_MODULE_STATE @ 1000930c

void __thiscall
AFX_MODULE_STATE::AFX_MODULE_STATE
          (AFX_MODULE_STATE *this,int param_1,_func_long_HWND___ptr_uint_uint_long *param_2,
          ulong param_3)

{
                    /* WARNING: Could not recover jumptable at 0x1000930c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AFX_MODULE_STATE(this,param_1,param_2,param_3);
  return;
}


// ---- operator_delete @ 10009312

void CNoTrackObject::operator_delete(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10009312. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  operator_delete(param_1);
  return;
}


// ---- ~AFX_MODULE_STATE @ 10009318

void __thiscall AFX_MODULE_STATE::~AFX_MODULE_STATE(AFX_MODULE_STATE *this)

{
                    /* WARNING: Could not recover jumptable at 0x10009318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~AFX_MODULE_STATE(this);
  return;
}


// ---- AfxWndProc @ 1000931e

long AfxWndProc(HWND__ *param_1,uint param_2,uint param_3,long param_4)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000931e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = AfxWndProc(param_1,param_2,param_3,param_4);
  return lVar1;
}


// ---- AfxTermThread @ 10009324

void AfxTermThread(HINSTANCE__ *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10009324. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AfxTermThread(param_1);
  return;
}


// ---- AfxTermExtensionModule @ 1000932a

void AfxTermExtensionModule(AFX_EXTENSION_MODULE *param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x1000932a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AfxTermExtensionModule(param_1,param_2);
  return;
}


// ---- AfxUnlockTempMaps @ 10009330

int AfxUnlockTempMaps(int param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AfxUnlockTempMaps(param_1);
  return iVar1;
}


// ---- AfxLockTempMaps @ 10009336

void AfxLockTempMaps(void)

{
                    /* WARNING: Could not recover jumptable at 0x10009336. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AfxLockTempMaps();
  return;
}


// ---- AfxSetModuleState @ 1000933c

AFX_MODULE_STATE * AfxSetModuleState(AFX_MODULE_STATE *param_1)

{
  AFX_MODULE_STATE *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000933c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = AfxSetModuleState(param_1);
  return pAVar1;
}


// ---- CDynLinkLibrary @ 10009342

void __thiscall
CDynLinkLibrary::CDynLinkLibrary(CDynLinkLibrary *this,AFX_EXTENSION_MODULE *param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10009342. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CDynLinkLibrary(this,param_1,param_2);
  return;
}


// ---- AfxInitExtensionModule @ 10009348

int AfxInitExtensionModule(AFX_EXTENSION_MODULE *param_1,HINSTANCE__ *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009348. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AfxInitExtensionModule(param_1,param_2);
  return iVar1;
}


// ---- AfxWinTerm @ 1000934e

void AfxWinTerm(void)

{
                    /* WARNING: Could not recover jumptable at 0x1000934e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AfxWinTerm();
  return;
}


// ---- AfxWinInit @ 10009354

int AfxWinInit(HINSTANCE__ *param_1,HINSTANCE__ *param_2,char *param_3,int param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009354. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AfxWinInit(param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- AfxGetThreadState @ 1000935a

_AFX_THREAD_STATE * AfxGetThreadState(void)

{
  _AFX_THREAD_STATE *p_Var1;
  
                    /* WARNING: Could not recover jumptable at 0x1000935a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  p_Var1 = AfxGetThreadState();
  return p_Var1;
}


// ---- AfxCoreInitModule @ 10009360

void AfxCoreInitModule(void)

{
                    /* WARNING: Could not recover jumptable at 0x10009360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AfxCoreInitModule();
  return;
}


// ---- AfxDllGetClassObject @ 10009366

long AfxDllGetClassObject(_GUID *param_1,_GUID *param_2,void **param_3)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009366. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = AfxDllGetClassObject(param_1,param_2,param_3);
  return lVar1;
}


// ---- AfxDllCanUnloadNow @ 1000936c

long AfxDllCanUnloadNow(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000936c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = AfxDllCanUnloadNow();
  return lVar1;
}


// ---- DllGetClassObject @ 10009372

HRESULT DllGetClassObject(IID *rclsid,IID *riid,LPVOID *ppv)

{
  AFX_MODULE_STATE *pAVar1;
  long lVar2;
  undefined4 local_c;
  int local_8;
  
                    /* 0x9372  2  DllGetClassObject */
  pAVar1 = (AFX_MODULE_STATE *)FUN_10008f67();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)&local_c,pAVar1);
  lVar2 = AfxDllGetClassObject(rclsid,riid,ppv);
  *(undefined4 *)(local_8 + 4) = local_c;
  return lVar2;
}


// ---- DllCanUnloadNow @ 100093a0

HRESULT DllCanUnloadNow(void)

{
  AFX_MODULE_STATE *pAVar1;
  long lVar2;
  undefined4 local_c;
  int local_8;
  
                    /* 0x93a0  1  DllCanUnloadNow */
  pAVar1 = (AFX_MODULE_STATE *)FUN_10008f67();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)&local_c,pAVar1);
  lVar2 = AfxDllCanUnloadNow();
  *(undefined4 *)(local_8 + 4) = local_c;
  return lVar2;
}


// ---- Unwind@100093d0 @ 100093d0

void Unwind_100093d0(void)

{
  int unaff_EBP;
  
  FUN_10001d00(*(void **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@100093f0 @ 100093f0

void Unwind_100093f0(void)

{
  int unaff_EBP;
  
  FUN_10001d10((undefined4 *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@10009410 @ 10009410

void Unwind_10009410(void)

{
  int unaff_EBP;
  
  COleControl::~COleControl(*(COleControl **)(unaff_EBP + -0x38));
  return;
}


// ---- Unwind@10009418 @ 10009418

void Unwind_10009418(void)

{
  int unaff_EBP;
  
  FUN_10001d10((undefined4 *)(unaff_EBP + -0x2c));
  return;
}


// ---- Unwind@10009420 @ 10009420

void Unwind_10009420(void)

{
  int unaff_EBP;
  
  FUN_10001db0((CGdiObject *)(unaff_EBP + -0x34));
  return;
}


// ---- Unwind@10009428 @ 10009428

void Unwind_10009428(void)

{
  int unaff_EBP;
  
  FUN_10001cd0((undefined4 *)(unaff_EBP + -0x34));
  return;
}


// ---- Unwind@10009440 @ 10009440

void Unwind_10009440(void)

{
  int unaff_EBP;
  
  COleControl::~COleControl(*(COleControl **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10009460 @ 10009460

void Unwind_10009460(void)

{
  int unaff_EBP;
  
  FUN_10001db0((CGdiObject *)(unaff_EBP + -0x3c));
  return;
}


// ---- Unwind@10009468 @ 10009468

void Unwind_10009468(void)

{
  int unaff_EBP;
  
  CPictureHolder::~CPictureHolder((CPictureHolder *)(unaff_EBP + -0x40));
  return;
}


// ---- Unwind@10009470 @ 10009470

void Unwind_10009470(void)

{
  int unaff_EBP;
  
  FUN_10001cd0((undefined4 *)(unaff_EBP + -0x3c));
  return;
}


// ---- Unwind@10009490 @ 10009490

void Unwind_10009490(void)

{
  int unaff_EBP;
  
  CDialog::~CDialog((CDialog *)(unaff_EBP + -0x6c));
  return;
}


// ---- Unwind@100094b0 @ 100094b0

void Unwind_100094b0(void)

{
  int unaff_EBP;
  
  FUN_10001d00(*(void **)(unaff_EBP + 4));
  return;
}


// ---- Unwind@100094ba @ 100094ba

void Unwind_100094ba(void)

{
  int unaff_EBP;
  
  FUN_10001d00(*(void **)(unaff_EBP + 4));
  return;
}


// ---- Unwind@100094d0 @ 100094d0

void Unwind_100094d0(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 0xc));
  return;
}


// ---- Unwind@100094d8 @ 100094d8

void Unwind_100094d8(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 8));
  return;
}


// ---- Unwind@100094f0 @ 100094f0

void Unwind_100094f0(void)

{
  int unaff_EBP;
  
  FUN_10001cd0(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10009510 @ 10009510

void Unwind_10009510(void)

{
  int unaff_EBP;
  
  FUN_10001cd0(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10009530 @ 10009530

void Unwind_10009530(void)

{
  int unaff_EBP;
  
  FUN_10001d00(*(void **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10009550 @ 10009550

void Unwind_10009550(void)

{
  int unaff_EBP;
  
  FUN_10001cd0(*(undefined4 **)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@10009558 @ 10009558

void Unwind_10009558(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x14) + 0x18));
  return;
}


// ---- Unwind@10009563 @ 10009563

void Unwind_10009563(void)

{
  int unaff_EBP;
  
  FUN_10001d00(*(void **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10009580 @ 10009580

void Unwind_10009580(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 0x10));
  return;
}


// ---- Unwind@10009588 @ 10009588

void Unwind_10009588(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    CString::~CString(*(CString **)(unaff_EBP + 4));
    return;
  }
  return;
}


// ---- Unwind@100095b0 @ 100095b0

void Unwind_100095b0(void)

{
  int unaff_EBP;
  
  FUN_10001cd0(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@100095b8 @ 100095b8

void Unwind_100095b8(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x10) + 0x18));
  return;
}


// ---- Unwind@100095d0 @ 100095d0

void Unwind_100095d0(void)

{
  int unaff_EBP;
  
  FUN_10001d00(*(void **)(unaff_EBP + -0x20));
  return;
}


// ---- Unwind@100095f0 @ 100095f0

void Unwind_100095f0(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x20));
  return;
}


// ---- Unwind@100095f8 @ 100095f8

void Unwind_100095f8(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x24));
  return;
}


// ---- Unwind@10009600 @ 10009600

void Unwind_10009600(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 8));
  return;
}


// ---- Unwind@10009620 @ 10009620

void Unwind_10009620(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 4));
  return;
}


// ---- Unwind@10009640 @ 10009640

void Unwind_10009640(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 4));
  return;
}


// ---- Unwind@10009648 @ 10009648

void Unwind_10009648(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x30));
  return;
}


// ---- Unwind@10009650 @ 10009650

void Unwind_10009650(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x2c));
  return;
}


// ---- Unwind@10009658 @ 10009658

void Unwind_10009658(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@10009660 @ 10009660

void Unwind_10009660(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x18));
  return;
}


// ---- Unwind@10009668 @ 10009668

void Unwind_10009668(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x34));
  return;
}


// ---- Unwind@10009670 @ 10009670

void Unwind_10009670(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10009678 @ 10009678

void Unwind_10009678(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@10009690 @ 10009690

void Unwind_10009690(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 4));
  return;
}


// ---- Unwind@100096b0 @ 100096b0

void Unwind_100096b0(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x18));
  return;
}


// ---- Unwind@100096b8 @ 100096b8

void Unwind_100096b8(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@100096d0 @ 100096d0

void Unwind_100096d0(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 0x10));
  return;
}


// ---- Unwind@100096d8 @ 100096d8

void Unwind_100096d8(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 1) != 0) {
    CString::~CString(*(CString **)(unaff_EBP + 4));
    return;
  }
  return;
}


// ---- Unwind@10009700 @ 10009700

void Unwind_10009700(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 4));
  return;
}


// ---- Unwind@10009720 @ 10009720

void Unwind_10009720(void)

{
  int unaff_EBP;
  
  FUN_10001cd0(*(undefined4 **)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@10009728 @ 10009728

void Unwind_10009728(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x14) + 0x14));
  return;
}


// ---- Unwind@10009733 @ 10009733

void Unwind_10009733(void)

{
  int unaff_EBP;
  
  thunk_FUN_10007a30((undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x18));
  return;
}


// ---- Unwind@1000973e @ 1000973e

void Unwind_1000973e(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x14) + 0xd4));
  return;
}


// ---- Unwind@1000974c @ 1000974c

void Unwind_1000974c(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x14) + 0xd8));
  return;
}


// ---- Unwind@1000975a @ 1000975a

void Unwind_1000975a(void)

{
  int unaff_EBP;
  
  FUN_10001d00(*(void **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10009770 @ 10009770

void Unwind_10009770(void)

{
  int unaff_EBP;
  
  FUN_10001cd0(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10009778 @ 10009778

void Unwind_10009778(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x10) + 0x14));
  return;
}


// ---- Unwind@10009783 @ 10009783

void Unwind_10009783(void)

{
  int unaff_EBP;
  
  thunk_FUN_10007a30((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x18));
  return;
}


// ---- Unwind@1000978e @ 1000978e

void Unwind_1000978e(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x10) + 0xd4));
  return;
}


// ---- Unwind@1000979c @ 1000979c

void Unwind_1000979c(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x10) + 0xd8));
  return;
}


// ---- Unwind@100097c0 @ 100097c0

void Unwind_100097c0(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x118));
  return;
}


// ---- Unwind@100097cb @ 100097cb

void Unwind_100097cb(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x11c));
  return;
}


// ---- Unwind@100097d6 @ 100097d6

void Unwind_100097d6(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x114));
  return;
}


// ---- Unwind@100097e1 @ 100097e1

void Unwind_100097e1(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x110));
  return;
}


// ---- Unwind@10009800 @ 10009800

void Unwind_10009800(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x24));
  return;
}


// ---- Unwind@10009808 @ 10009808

void Unwind_10009808(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 4));
  return;
}


// ---- Unwind@10009810 @ 10009810

void Unwind_10009810(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 8));
  return;
}


// ---- Unwind@10009818 @ 10009818

void Unwind_10009818(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x20));
  return;
}


// ---- Unwind@10009830 @ 10009830

void Unwind_10009830(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 4));
  return;
}


// ---- Unwind@10009850 @ 10009850

void Unwind_10009850(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x24));
  return;
}


// ---- Unwind@10009870 @ 10009870

void Unwind_10009870(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10009890 @ 10009890

void Unwind_10009890(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 0x10));
  return;
}


// ---- Unwind@10009898 @ 10009898

void Unwind_10009898(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    CString::~CString(*(CString **)(unaff_EBP + 4));
    return;
  }
  return;
}


// ---- Unwind@100098c0 @ 100098c0

void Unwind_100098c0(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x28));
  return;
}


// ---- Unwind@100098e0 @ 100098e0

void Unwind_100098e0(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x18));
  return;
}


// ---- Unwind@100098e8 @ 100098e8

void Unwind_100098e8(void)

{
  int unaff_EBP;
  
  CString::~CString(*(CString **)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@100098f0 @ 100098f0

void Unwind_100098f0(void)

{
  int unaff_EBP;
  
  CString::~CString(*(CString **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10009910 @ 10009910

void Unwind_10009910(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 8));
  return;
}


// ---- Unwind@10009918 @ 10009918

void Unwind_10009918(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 4));
  return;
}


// ---- Unwind@10009920 @ 10009920

void Unwind_10009920(void)

{
  int unaff_EBP;
  
  FUN_10001d00(*(void **)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@1000992a @ 1000992a

void Unwind_1000992a(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@10009932 @ 10009932

void Unwind_10009932(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x1c));
  return;
}


// ---- Unwind@10009950 @ 10009950

void Unwind_10009950(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 4));
  return;
}


// ---- Unwind@10009958 @ 10009958

void Unwind_10009958(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x3c));
  return;
}


// ---- Unwind@10009960 @ 10009960

void Unwind_10009960(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x30));
  return;
}


// ---- Unwind@10009968 @ 10009968

void Unwind_10009968(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x28));
  return;
}


// ---- Unwind@10009970 @ 10009970

void Unwind_10009970(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x20));
  return;
}


// ---- Unwind@10009978 @ 10009978

void Unwind_10009978(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x18));
  return;
}


// ---- Unwind@10009980 @ 10009980

void Unwind_10009980(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@100099a0 @ 100099a0

void Unwind_100099a0(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 8));
  return;
}


// ---- Unwind@100099a8 @ 100099a8

void Unwind_100099a8(void)

{
  int unaff_EBP;
  
  FUN_10001d00(*(void **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@100099b2 @ 100099b2

void Unwind_100099b2(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 4));
  return;
}


// ---- Unwind@100099ba @ 100099ba

void Unwind_100099ba(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@100099d0 @ 100099d0

void Unwind_100099d0(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x20));
  return;
}


// ---- Unwind@100099d8 @ 100099d8

void Unwind_100099d8(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x18));
  return;
}


// ---- Unwind@100099e0 @ 100099e0

void Unwind_100099e0(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@100099e8 @ 100099e8

void Unwind_100099e8(void)

{
  AfxTryCleanup();
  return;
}


// ---- Unwind@100099f0 @ 100099f0

void Unwind_100099f0(void)

{
  int unaff_EBP;
  
  FUN_10001d00(*(void **)(unaff_EBP + -0x24));
  return;
}


// ---- Unwind@100099fa @ 100099fa

void Unwind_100099fa(void)

{
  int unaff_EBP;
  
  FUN_10001d00(*(void **)(unaff_EBP + -0x24));
  return;
}


// ---- Unwind@10009a10 @ 10009a10

void Unwind_10009a10(void)

{
  int unaff_EBP;
  
  FUN_10001d00(*(void **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10009a30 @ 10009a30

void Unwind_10009a30(void)

{
  int unaff_EBP;
  
  FUN_10001d00(*(void **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10009a50 @ 10009a50

void Unwind_10009a50(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 4));
  return;
}


// ---- Unwind@10009a70 @ 10009a70

void Unwind_10009a70(void)

{
  int unaff_EBP;
  
  FUN_10001d00(*(void **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10009a90 @ 10009a90

void Unwind_10009a90(void)

{
  int unaff_EBP;
  
  FUN_10001d00(*(void **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10009ab0 @ 10009ab0

void Unwind_10009ab0(void)

{
  int unaff_EBP;
  
  FUN_10001d00(*(void **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10009ad0 @ 10009ad0

void Unwind_10009ad0(void)

{
  int unaff_EBP;
  
  FUN_10001d00(*(void **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10009af0 @ 10009af0

void Unwind_10009af0(void)

{
  int unaff_EBP;
  
  FUN_10001cd0(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10009b10 @ 10009b10

void Unwind_10009b10(void)

{
  int unaff_EBP;
  
  FUN_10001cd0(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10009b30 @ 10009b30

void Unwind_10009b30(void)

{
  int unaff_EBP;
  
  FUN_10001d00(*(void **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10009b3a @ 10009b3a

void Unwind_10009b3a(void)

{
  int unaff_EBP;
  
  FUN_10006740(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10009b50 @ 10009b50

void Unwind_10009b50(void)

{
  int unaff_EBP;
  
  FUN_10006740(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10009b70 @ 10009b70

void Unwind_10009b70(void)

{
  int unaff_EBP;
  
  FUN_10001d00(*(void **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10009b90 @ 10009b90

void Unwind_10009b90(void)

{
  int unaff_EBP;
  
  FUN_10001d00(*(void **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10009bb0 @ 10009bb0

void Unwind_10009bb0(void)

{
  int unaff_EBP;
  
  FUN_10001cd0(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10009bb8 @ 10009bb8

void Unwind_10009bb8(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x10) + 4));
  return;
}


// ---- Unwind@10009bd0 @ 10009bd0

void Unwind_10009bd0(void)

{
  int unaff_EBP;
  
  FUN_10001cd0(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10009bd8 @ 10009bd8

void Unwind_10009bd8(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x10) + 4));
  return;
}


// ---- Unwind@10009bf0 @ 10009bf0

void Unwind_10009bf0(void)

{
  int unaff_EBP;
  
  FUN_10001d00(*(void **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10009c10 @ 10009c10

void Unwind_10009c10(void)

{
  int unaff_EBP;
  
  FUN_10001d00(*(void **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10009c30 @ 10009c30

void Unwind_10009c30(void)

{
  int unaff_EBP;
  
  FUN_100064c0(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10009c50 @ 10009c50

void Unwind_10009c50(void)

{
  int unaff_EBP;
  
  FUN_10006620((undefined4 *)(unaff_EBP + -0x18));
  return;
}


// ---- Unwind@10009c58 @ 10009c58

void Unwind_10009c58(void)

{
  int unaff_EBP;
  
  FUN_10006620((undefined4 *)(unaff_EBP + -0x24));
  return;
}


// ---- Unwind@10009c70 @ 10009c70

void Unwind_10009c70(void)

{
  int unaff_EBP;
  
  FUN_10006620((undefined4 *)(unaff_EBP + -0x18));
  return;
}


// ---- Unwind@10009c90 @ 10009c90

void Unwind_10009c90(void)

{
  int unaff_EBP;
  
  FUN_10001d00(*(void **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10009cb0 @ 10009cb0

void Unwind_10009cb0(void)

{
  int unaff_EBP;
  
  FUN_10001d00(*(void **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10009cd0 @ 10009cd0

void Unwind_10009cd0(void)

{
  int unaff_EBP;
  
  FUN_10001d00(*(void **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10009cf0 @ 10009cf0

void Unwind_10009cf0(void)

{
  int unaff_EBP;
  
  FUN_10001d00(*(void **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10009d10 @ 10009d10

void Unwind_10009d10(void)

{
  int unaff_EBP;
  
  FUN_10001d00(*(void **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10009d30 @ 10009d30

void Unwind_10009d30(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0xd8));
  return;
}


// ---- Unwind@10009d50 @ 10009d50

void Unwind_10009d50(void)

{
  int unaff_EBP;
  
  FUN_10001d00(*(void **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10009d70 @ 10009d70

void Unwind_10009d70(void)

{
  int unaff_EBP;
  
  FUN_10001d00(*(void **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10009d90 @ 10009d90

void Unwind_10009d90(void)

{
  int unaff_EBP;
  
  FUN_10001cd0(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10009d98 @ 10009d98

void Unwind_10009d98(void)

{
  int unaff_EBP;
  
  FUN_10006d70((CObList *)(*(int *)(unaff_EBP + -0x10) + 8));
  return;
}


// ---- Unwind@10009da3 @ 10009da3

void Unwind_10009da3(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x10) + 0x28));
  return;
}


// ---- Unwind@10009dae @ 10009dae

void Unwind_10009dae(void)

{
  int unaff_EBP;
  
  FUN_10006620((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x2c));
  return;
}


// ---- Unwind@10009db9 @ 10009db9

void Unwind_10009db9(void)

{
  int unaff_EBP;
  
  FUN_10007310((CObList *)(*(int *)(unaff_EBP + -0x10) + 0x38));
  return;
}


// ---- Unwind@10009dc4 @ 10009dc4

void Unwind_10009dc4(void)

{
  int unaff_EBP;
  
  FUN_10007830((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x54));
  return;
}


// ---- Unwind@10009dcf @ 10009dcf

void Unwind_10009dcf(void)

{
  int unaff_EBP;
  
  thunk_FUN_10006740((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x7c));
  return;
}


// ---- Unwind@10009dda @ 10009dda

void Unwind_10009dda(void)

{
  int unaff_EBP;
  
  thunk_FUN_10006740((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x88));
  return;
}


// ---- Unwind@10009de8 @ 10009de8

void Unwind_10009de8(void)

{
  int unaff_EBP;
  
  thunk_FUN_10006740((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x94));
  return;
}


// ---- Unwind@10009df6 @ 10009df6

void Unwind_10009df6(void)

{
  int unaff_EBP;
  
  thunk_FUN_10006740((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0xa0));
  return;
}


// ---- Unwind@10009e10 @ 10009e10

void Unwind_10009e10(void)

{
  int unaff_EBP;
  
  FUN_10001cd0(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10009e18 @ 10009e18

void Unwind_10009e18(void)

{
  int unaff_EBP;
  
  FUN_10006d70((CObList *)(*(int *)(unaff_EBP + -0x10) + 8));
  return;
}


// ---- Unwind@10009e23 @ 10009e23

void Unwind_10009e23(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x10) + 0x28));
  return;
}


// ---- Unwind@10009e2e @ 10009e2e

void Unwind_10009e2e(void)

{
  int unaff_EBP;
  
  FUN_10006620((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x2c));
  return;
}


// ---- Unwind@10009e39 @ 10009e39

void Unwind_10009e39(void)

{
  int unaff_EBP;
  
  FUN_10007310((CObList *)(*(int *)(unaff_EBP + -0x10) + 0x38));
  return;
}


// ---- Unwind@10009e44 @ 10009e44

void Unwind_10009e44(void)

{
  int unaff_EBP;
  
  FUN_10007830((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x54));
  return;
}


// ---- Unwind@10009e4f @ 10009e4f

void Unwind_10009e4f(void)

{
  int unaff_EBP;
  
  thunk_FUN_10006740((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x7c));
  return;
}


// ---- Unwind@10009e5a @ 10009e5a

void Unwind_10009e5a(void)

{
  int unaff_EBP;
  
  thunk_FUN_10006740((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x88));
  return;
}


// ---- Unwind@10009e68 @ 10009e68

void Unwind_10009e68(void)

{
  int unaff_EBP;
  
  thunk_FUN_10006740((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x94));
  return;
}


// ---- Unwind@10009e76 @ 10009e76

void Unwind_10009e76(void)

{
  int unaff_EBP;
  
  thunk_FUN_10006740((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0xa0));
  return;
}


// ---- Unwind@10009e90 @ 10009e90

void Unwind_10009e90(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 4));
  return;
}


// ---- Unwind@10009e98 @ 10009e98

void Unwind_10009e98(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 0x18));
  return;
}


// ---- Unwind@10009eb0 @ 10009eb0

void Unwind_10009eb0(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@10009eb8 @ 10009eb8

void Unwind_10009eb8(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 4));
  return;
}


// ---- Unwind@10009ed0 @ 10009ed0

void Unwind_10009ed0(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x80));
  return;
}


// ---- Unwind@10009ed8 @ 10009ed8

void Unwind_10009ed8(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x7c));
  return;
}


// ---- Unwind@10009ef0 @ 10009ef0

void Unwind_10009ef0(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@10009ef8 @ 10009ef8

void Unwind_10009ef8(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    CString::~CString(*(CString **)(unaff_EBP + 4));
    return;
  }
  return;
}


// ---- Unwind@10009f20 @ 10009f20

void Unwind_10009f20(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x114));
  return;
}


// ---- Unwind@10009f2b @ 10009f2b

void Unwind_10009f2b(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x110) & 1) != 0) {
    CString::~CString(*(CString **)(unaff_EBP + 4));
    return;
  }
  return;
}


// ---- Unwind@10009f50 @ 10009f50

void Unwind_10009f50(void)

{
  int unaff_EBP;
  
  FUN_10001d10((undefined4 *)(unaff_EBP + -0x14));
  return;
}


