// Decompiled with Ghidra from navmgr.ocx
// Format: Portable Executable (PE), image base 10000000

// ---- FUN_10001000 @ 10001000

CDialog * __thiscall FUN_10001000(void *this,CWnd *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10014873;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CDialog::CDialog(this,1,param_1);
  local_4 = 0;
  CString::CString((CString *)((int)this + 100));
  local_4 = CONCAT31(local_4._1_3_,1);
  *(undefined ***)this = &PTR_LAB_100166b0;
  CString::operator=((CString *)((int)this + 100),&DAT_1001c718);
  ExceptionList = local_c;
  return this;
}


// ---- FUN_10001070 @ 10001070

CDialog * __thiscall FUN_10001070(void *this,byte param_1)

{
  FUN_10001090(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_10001090 @ 10001090

void __fastcall FUN_10001090(CDialog *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10014888;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  CString::~CString((CString *)(param_1 + 100));
  local_4 = 0xffffffff;
  CDialog::~CDialog(param_1);
  ExceptionList = local_c;
  return;
}


// ---- FUN_10001120 @ 10001120

undefined4 __fastcall FUN_10001120(CDialog *param_1)

{
  CString::LoadStringA((CString *)(param_1 + 100),3);
  CDialog::OnInitDialog(param_1);
  if (*(int *)(param_1 + 0x60) != 0) {
    CWnd::CenterWindow((CWnd *)param_1,(CWnd *)0x0);
  }
  return 1;
}


// ---- FUN_10001150 @ 10001150

void FUN_10001150(void)

{
  return;
}


// ---- FUN_10001160 @ 10001160

void FUN_10001160(void)

{
  return;
}


// ---- FUN_10001170 @ 10001170

void __fastcall FUN_10001170(int param_1)

{
  EnableWindow(*(HWND *)(param_1 + 0x20),0);
  return;
}


// ---- FUN_10001180 @ 10001180

void __fastcall FUN_10001180(int param_1)

{
  EnableWindow(*(HWND *)(param_1 + 0x20),1);
  return;
}


// ---- FUN_10001190 @ 10001190

CWnd * FUN_10001190(void)

{
  CWnd *this;
  CWnd *pCVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_100148aa;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = operator_new(0x40);
  local_4 = 0;
  pCVar1 = (CWnd *)0x0;
  if (this != (CWnd *)0x0) {
    CWnd::CWnd(this);
    *(undefined ***)this = &PTR_FUN_100167a0;
    pCVar1 = this;
  }
  ExceptionList = local_c;
  return pCVar1;
}


// ---- FUN_100011e0 @ 100011e0

void __thiscall
FUN_100011e0(CWnd *param_1,undefined4 param_2,char *param_3,ulong param_4,tagRECT *param_5,
            CWnd *param_6,uint param_7)

{
  CWnd::CreateControl(param_1,(_GUID *)&DAT_10016860,param_3,param_4,param_5,param_6,param_7,
                      (CFile *)0x0,0,(ushort *)0x0);
  return;
}


// ---- FUN_10001210 @ 10001210

CWnd * __thiscall FUN_10001210(void *this,byte param_1)

{
  CWnd::~CWnd(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- ~CWnd @ 10001230

void __thiscall CWnd::~CWnd(CWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x10013d9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CWnd(this);
  return;
}


// ---- FUN_10001250 @ 10001250

undefined ** FUN_10001250(void)

{
  return &PTR_s_CLEOButton_10016788;
}


// ---- FUN_10001260 @ 10001260

undefined4 __thiscall FUN_10001260(void *this)

{
  undefined4 in_stack_00000024;
  
  CWnd::InvokeHelper(this,(long)this,1,1,(void *)0x3,&stack0x00000010);
  return in_stack_00000024;
}


// ---- FUN_100012a0 @ 100012a0

void FUN_100012a0(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ---- FUN_10004100 @ 10004100

COleControl * FUN_10004100(void)

{
  COleControl *pCVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_100148ca;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pCVar1 = operator_new(0x610);
  local_4 = 0;
  if (pCVar1 != (COleControl *)0x0) {
    pCVar1 = FUN_10004450(pCVar1);
    ExceptionList = local_c;
    return pCVar1;
  }
  ExceptionList = local_c;
  return (COleControl *)0x0;
}


// ---- FUN_10004170 @ 10004170

undefined ** FUN_10004170(void)

{
  return &PTR_s_CNavMgrCtrl_10016870;
}


// ---- FUN_10004190 @ 10004190

undefined ** FUN_10004190(void)

{
  return &PTR_LAB_10016888;
}


// ---- FUN_100041b0 @ 100041b0

undefined ** FUN_100041b0(void)

{
  return &PTR_LAB_100169c8;
}


// ---- FUN_100041c0 @ 100041c0

undefined * FUN_100041c0(void)

{
  return &DAT_1001cb68;
}


// ---- FUN_10004200 @ 10004200

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10004200(int *param_1)

{
  if (DAT_1001abe4 == -1) {
    _DAT_1001c778 = DAT_100170b0;
    _DAT_1001c77c = DAT_100170b4;
    _DAT_1001c780 = DAT_100170b8;
    _DAT_1001c784 = DAT_100170bc;
    DAT_1001abe4 = 1;
    *param_1 = 1;
    return &DAT_1001c778;
  }
  *param_1 = DAT_1001abe4;
  return &DAT_1001c778;
}


// ---- FUN_10004270 @ 10004270

void FUN_10004270(void)

{
  FUN_10004290(&DAT_1001c728,(_GUID *)&DAT_10016d00,(CRuntimeClass *)&PTR_s_CNavMgrCtrl_10016870,0,
               "NAVMGR.NavMgrCtrl.1");
  return;
}


// ---- FUN_10004290 @ 10004290

COleObjectFactory * __thiscall
FUN_10004290(void *this,_GUID *param_1,CRuntimeClass *param_2,int param_3,char *param_4)

{
  COleObjectFactory::COleObjectFactory(this,param_1,param_2,param_3,param_4);
  *(undefined ***)this = &PTR_LAB_10016d30;
  return this;
}


// ---- ~COleObjectFactory @ 100042c0

void __thiscall COleObjectFactory::~COleObjectFactory(COleObjectFactory *this)

{
                    /* WARNING: Could not recover jumptable at 0x10013de2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~COleObjectFactory(this);
  return;
}


// ---- FUN_100042d0 @ 100042d0

void FUN_100042d0(void)

{
  FUN_100145cc((_onexit_t)&LAB_100042e0);
  return;
}


// ---- FUN_10004300 @ 10004300

undefined4 FUN_10004300(undefined4 *param_1)

{
  *param_1 = DAT_10016d00;
  param_1[1] = DAT_10016d04;
  param_1[2] = DAT_10016d08;
  param_1[3] = DAT_10016d0c;
  return 0;
}


// ---- FUN_10004330 @ 10004330

undefined4 FUN_10004330(void)

{
  return 1;
}


// ---- FUN_10004340 @ 10004340

void FUN_10004340(LCID param_1,ITypeLib **param_2)

{
  LoadRegTypeLib((GUID *)&DAT_10017220,DAT_10017230,DAT_10017232,param_1,param_2);
  return;
}


// ---- FUN_10004370 @ 10004370

void __fastcall FUN_10004370(int param_1)

{
  undefined4 local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_100148e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2
            ((AFX_MAINTAIN_STATE2 *)&local_14,*(AFX_MODULE_STATE **)(param_1 + 0x1c));
  local_4 = 0;
  AfxGetTypeLibCache((_GUID *)&DAT_10017220);
  *(undefined4 *)(local_10 + 4) = local_14;
  ExceptionList = local_c;
  return;
}


// ---- FUN_100043d0 @ 100043d0

void __fastcall FUN_100043d0(undefined4 *param_1)

{
  *(undefined4 *)(param_1[1] + 4) = *param_1;
  return;
}


// ---- FUN_100043e0 @ 100043e0

undefined4 FUN_100043e0(void)

{
  return 0x20191;
}


// ---- FUN_10004450 @ 10004450

COleControl * __fastcall FUN_10004450(COleControl *param_1)

{
  HINSTANCE__ *hInstance;
  HBITMAP pHVar1;
  HCURSOR pHVar2;
  AFX_MODULE_STATE *pAVar3;
  HPEN pHVar4;
  int iVar5;
  LPCSTR lpBitmapName;
  undefined **local_2c;
  HANDLE local_28;
  undefined1 local_24 [4];
  int local_20;
  int local_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1001495e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  COleControl::COleControl(param_1);
  *(undefined4 *)(param_1 + 0x230) = 0;
  *(undefined ***)(param_1 + 0x22c) = &PTR_GetRuntimeClass_10016fc8;
  *(undefined4 *)(param_1 + 0x238) = 0;
  *(undefined ***)(param_1 + 0x234) = &PTR_GetRuntimeClass_10016fc8;
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  CString::CString((CString *)(param_1 + 600));
  local_4._0_1_ = 3;
  CString::CString((CString *)(param_1 + 0x25c));
  local_4._0_1_ = 4;
  CString::CString((CString *)(param_1 + 0x608));
  local_4._0_1_ = 5;
  *(undefined ***)param_1 = &PTR_FUN_10016dcc;
  COleControl::InitializeIIDs(param_1,(_GUID *)&DAT_10016d10,(_GUID *)&DAT_10016d20);
  local_28 = (HANDLE)0x0;
  local_2c = &PTR_LAB_10016db8;
  lpBitmapName = (LPCSTR)0xc9;
  local_4._0_1_ = 6;
  hInstance = AfxFindResourceHandle((char *)0xc9,(char *)0x2);
  pHVar1 = LoadBitmapA(hInstance,lpBitmapName);
  CGdiObject::Attach((CGdiObject *)&local_2c,pHVar1);
  GetObjectA(local_28,0x18,local_24);
  *(int *)(param_1 + 0x1cc) = local_1c;
  *(int *)(param_1 + 0x1c8) = local_20;
  COleControl::SetInitialSize(param_1,local_20,local_1c);
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  *(undefined4 *)(param_1 + 0x1d4) = 0;
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  *(undefined4 *)(param_1 + 0x23c) = 0;
  *(undefined4 *)(param_1 + 0x248) = 0;
  pHVar2 = GetCursor();
  *(HCURSOR *)(param_1 + 0x1c0) = pHVar2;
  pAVar3 = AfxGetModuleState();
  pHVar2 = LoadCursorA(*(HINSTANCE *)(pAVar3 + 0xc),(LPCSTR)0xca);
  *(HCURSOR *)(param_1 + 0x1c4) = pHVar2;
  *(undefined4 *)(param_1 + 0x1dc) = 0;
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  *(undefined4 *)(param_1 + 0x1e4) = 0;
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  *(undefined4 *)(param_1 + 0x1ec) = 0;
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  pHVar4 = CreatePen(0,2,0xff00);
  CGdiObject::Attach((CGdiObject *)(param_1 + 0x22c),pHVar4);
  pHVar4 = CreatePen(2,1,0xff00);
  CGdiObject::Attach((CGdiObject *)(param_1 + 0x234),pHVar4);
  local_2c = &PTR_LAB_10016da4;
  *(int *)(param_1 + 0x21c) = 0;
  *(undefined4 *)(param_1 + 0x220) = 0;
  *(undefined4 *)(param_1 + 0x224) = 0x40;
  *(undefined4 *)(param_1 + 0x228) = 0x40;
  *(undefined4 *)(param_1 + 500) = 0;
  *(undefined4 *)(param_1 + 0x1f8) = 0;
  iVar5 = (*(int *)(param_1 + 0x224) + *(int *)(param_1 + 0x21c)) / 2;
  *(int *)(param_1 + 0x214) = iVar5;
  *(int *)(param_1 + 0x20c) = iVar5;
  *(int *)(param_1 + 0x204) = iVar5;
  iVar5 = (*(int *)(param_1 + 0x228) + *(int *)(param_1 + 0x220)) / 2;
  *(int *)(param_1 + 0x218) = iVar5;
  *(int *)(param_1 + 0x210) = iVar5;
  *(int *)(param_1 + 0x208) = iVar5;
  *(undefined4 *)(param_1 + 0x24c) = 0;
  *(undefined4 *)(param_1 + 0x240) = 1;
  *(undefined4 *)(param_1 + 0x244) = 0;
  *(undefined4 *)(param_1 + 0x200) = 1;
  *(undefined4 *)(param_1 + 0x1fc) = 1;
  *(undefined4 *)(param_1 + 0x60c) = 0;
  *(undefined4 *)(param_1 + 0x254) = 0;
  local_4 = CONCAT31(local_4._1_3_,7);
  CGdiObject::DeleteObject((CGdiObject *)&local_2c);
  ExceptionList = local_c;
  return param_1;
}


// ---- FUN_100046a0 @ 100046a0

undefined4 * __thiscall FUN_100046a0(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_GetRuntimeClass_10016fdc;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}


// ---- FUN_100046c0 @ 100046c0

COleControl * __thiscall FUN_100046c0(void *this,byte param_1)

{
  FUN_100046e0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_100046e0 @ 100046e0

void __fastcall FUN_100046e0(COleControl *param_1)

{
  CGdiObject *pCVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_100149ce;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)param_1 = &PTR_FUN_10016dcc;
  local_4 = 5;
  if (*(int *)(param_1 + 0x23c) != 0) {
    FUN_100090b0(param_1);
    if (*(int **)(param_1 + 0x23c) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x23c) + 4))(1);
    }
  }
  local_4._0_1_ = 4;
  CString::~CString((CString *)(param_1 + 0x608));
  local_4._0_1_ = 3;
  CString::~CString((CString *)(param_1 + 0x25c));
  local_4._0_1_ = 2;
  CString::~CString((CString *)(param_1 + 600));
  pCVar1 = (CGdiObject *)(param_1 + 0x234);
  *(undefined ***)pCVar1 = &PTR_LAB_10016da4;
  local_4._0_1_ = 6;
  CGdiObject::DeleteObject(pCVar1);
  *(undefined ***)pCVar1 = &PTR_GetRuntimeClass_10016fdc;
  pCVar1 = (CGdiObject *)(param_1 + 0x22c);
  *(undefined ***)pCVar1 = &PTR_LAB_10016da4;
  local_4 = CONCAT31(local_4._1_3_,7);
  CGdiObject::DeleteObject(pCVar1);
  *(undefined ***)pCVar1 = &PTR_GetRuntimeClass_10016fdc;
  local_4 = 0xffffffff;
  COleControl::~COleControl(param_1);
  ExceptionList = pvStack_c;
  return;
}


// ---- FUN_100047d0 @ 100047d0

void __thiscall FUN_100047d0(CWnd *param_1,tagCREATESTRUCTA *param_2)

{
  *(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) | 0x20;
  CWnd::PreCreateWindow(param_1,param_2);
  return;
}


// ---- FUN_10004800 @ 10004800

void __thiscall FUN_10004800(COleControl *param_1,CGdiObject *param_2,CRect *param_3,int *param_4)

{
  int iVar1;
  HINSTANCE__ *hInstance;
  HBITMAP pHVar2;
  HWND hWnd;
  BOOL BVar3;
  LPCSTR lpBitmapName;
  undefined **ppuStack_3c;
  HBITMAP__ *pHStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined1 auStack_24 [24];
  void *pvStack_c;
  undefined *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &DAT_100149f8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar1 = COleControl::AmbientUserMode(param_1);
  if ((iVar1 != 0) && (*(int *)(param_1 + 0x1d0) != 0)) {
    FUN_10004c20(param_1,param_2,(uint *)param_3,param_4);
    ExceptionList = pvStack_c;
    return;
  }
  iVar1 = COleControl::AmbientUserMode(param_1);
  if (iVar1 == 0) {
    pHStack_38 = (HBITMAP__ *)0x0;
    ppuStack_3c = &PTR_LAB_10016db8;
    iStack_4 = 0;
    CPictureHolder::CPictureHolder((CPictureHolder *)&param_4);
    lpBitmapName = (LPCSTR)0xc9;
    iStack_4._0_1_ = 1;
    hInstance = AfxFindResourceHandle((char *)0xc9,(char *)0x2);
    pHVar2 = LoadBitmapA(hInstance,lpBitmapName);
    CGdiObject::Attach((CGdiObject *)&ppuStack_3c,pHVar2);
    GetObjectA(pHStack_38,0x18,auStack_24);
    uStack_2c = *(undefined4 *)(param_1 + 0x1c8);
    uStack_28 = *(undefined4 *)(param_1 + 0x1cc);
    uStack_34 = 0;
    uStack_30 = 0;
    CPictureHolder::CreateFromBitmap((CPictureHolder *)&param_4,pHStack_38,(HPALETTE__ *)0x0,0);
    CPictureHolder::Render((CPictureHolder *)&param_4,(CDC *)param_2,param_3,(CRect *)&uStack_34);
    iStack_4 = (uint)iStack_4._1_3_ << 8;
    CPictureHolder::~CPictureHolder((CPictureHolder *)&param_4);
    ppuStack_3c = &PTR_LAB_10016da4;
    iStack_4 = 2;
    CGdiObject::DeleteObject((CGdiObject *)&ppuStack_3c);
    ExceptionList = pvStack_c;
    return;
  }
  if (param_1 == (COleControl *)0x0) {
    hWnd = (HWND)0x0;
  }
  else {
    hWnd = *(HWND *)(param_1 + 0x20);
  }
  BVar3 = IsWindow(hWnd);
  if (BVar3 != 0) {
    CWnd::ShowWindow((CWnd *)param_1,0);
  }
  ExceptionList = pvStack_c;
  return;
}


// ---- FUN_10004970 @ 10004970

void __thiscall FUN_10004970(void *param_1,CDC *param_2)

{
  FUN_10004990(param_1,param_2);
  return;
}


// ---- FUN_10004990 @ 10004990

void __thiscall FUN_10004990(void *this,CDC *param_1)

{
  COleControl *this_00;
  int unaff_EBP;
  int iVar1;
  int iVar2;
  CBrush *pCVar3;
  CPen *local_10;
  undefined1 auStack_c [12];
  
  local_10 = (CPen *)CDC::SetBkMode(param_1,1);
  pCVar3 = (CBrush *)0x5;
  iVar2 = 0x100049b2;
  local_10 = (CPen *)(**(code **)(*(int *)param_1 + 0x2c))();
  if (*(int *)((int)this + 0x1f8) != 3) {
    if (*(int *)((int)this + 0x1f8) != 1) goto LAB_10004a2e;
    *(undefined4 *)((int)this + 0x1f8) = 0;
    goto switchD_100049db_caseD_1;
  }
  switch(*(undefined4 *)((int)this + 500)) {
  case 1:
  case 3:
  case 6:
    goto switchD_100049db_caseD_1;
  case 2:
  case 4:
    CDC::SelectObject(param_1,(CPen *)((int)this + 0x234));
    iVar2 = *(int *)((int)this + 0x228);
    Rectangle(*(HDC *)(param_1 + 4),*(int *)((int)this + 0x21c),*(int *)((int)this + 0x220),
              *(int *)((int)this + 0x224),iVar2);
    break;
  case 5:
    COleControl::FireEvent(this_00,(long)this,(uchar *)0x5);
    goto switchD_100049db_caseD_1;
  case 7:
    CDC::SelectObject(param_1,(CPen *)((int)this + 0x234));
    iVar2 = *(int *)((int)this + 0x210);
    CDC::MoveTo(param_1,(int)auStack_c,*(int *)((int)this + 0x20c));
    CDC::LineTo(param_1,*(int *)((int)this + 0x214),*(int *)((int)this + 0x218));
    break;
  default:
    *(undefined4 *)((int)this + 0x1f8) = 0;
  }
LAB_10004a2e:
  if (*(int *)((int)this + 0x1f8) == 2) {
switchD_100049db_caseD_1:
    CDC::SelectObject(param_1,(CPen *)((int)this + 0x22c));
    FUN_10005050((int)this);
    iVar2 = (*(int *)((int)this + 0x224) - *(int *)((int)this + 0x21c)) / 2;
    iVar1 = (*(int *)((int)this + 0x228) - *(int *)((int)this + 0x220)) / 2;
    CDC::MoveTo(param_1,(int)auStack_c,*(int *)((int)this + 0x21c) + iVar2);
    CDC::LineTo(param_1,*(int *)((int)this + 0x21c) + iVar2,*(int *)((int)this + 0x220) + -3 + iVar1
               );
    CDC::MoveTo(param_1,(int)&local_10,*(int *)((int)this + 0x21c) + iVar2);
    CDC::LineTo(param_1,*(int *)((int)this + 0x21c) + iVar2,*(int *)((int)this + 0x228) + -2);
    CDC::MoveTo(param_1,(int)&stack0xffffffec,*(int *)((int)this + 0x21c) + 2);
    CDC::LineTo(param_1,*(int *)((int)this + 0x21c) + -3 + iVar2,*(int *)((int)this + 0x220) + iVar1
               );
    CDC::MoveTo(param_1,(int)&stack0xffffffe8,*(int *)((int)this + 0x21c) + 4 + iVar2);
    CDC::LineTo(param_1,*(int *)((int)this + 0x224) + -2,*(int *)((int)this + 0x220) + iVar1);
    iVar2 = unaff_EBP;
  }
  CDC::SetBkMode(param_1,iVar2);
  CDC::SelectObject(param_1,pCVar3);
  if (local_10 != (CPen *)0x0) {
    CDC::SelectObject(param_1,local_10);
  }
  return;
}


// ---- FUN_10004c20 @ 10004c20

/* WARNING: Removing unreachable block (ram,0x10004ee7) */

void __thiscall FUN_10004c20(void *this,CGdiObject *param_1,uint *param_2,int *param_3)

{
  int *piVar1;
  CGdiObject *this_00;
  HDC pHVar2;
  BOOL BVar3;
  HBITMAP pHVar4;
  CGdiObject *this_01;
  int iVar5;
  void *pvVar6;
  CDC *pCVar7;
  bool bVar8;
  undefined4 uVar9;
  int iStack_60;
  RECT local_5c;
  tagPOINT local_4c;
  int local_44;
  int local_40;
  tagPOINT local_3c;
  uint local_34;
  uint local_30;
  HDC__ *local_2c;
  HDC__ *pHStack_28;
  void *pvStack_20;
  CDC local_1c [4];
  HDC__ *pHStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  this_00 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10014a20;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  CDC::CDC((CDC *)&local_2c);
  local_4 = 0;
  CDC::CDC(local_1c);
  local_3c.x = *param_2;
  local_4 = CONCAT31(local_4._1_3_,1);
  local_3c.y = param_2[1];
  local_34 = param_2[2];
  local_30 = param_2[3];
  local_4c.x = *param_3;
  local_4c.y = param_3[1];
  local_44 = param_3[2];
  local_40 = param_3[3];
  LPtoDP(*(HDC *)(param_1 + 8),&local_3c,2);
  LPtoDP(*(HDC *)(param_1 + 8),&local_4c,2);
  if (param_1 == (CGdiObject *)0x0) {
    pHVar2 = (HDC)0x0;
  }
  else {
    pHVar2 = *(HDC *)(param_1 + 4);
  }
  pHVar2 = CreateCompatibleDC(pHVar2);
  CDC::Attach((CDC *)&local_2c,pHVar2);
  if (param_1 == (CGdiObject *)0x0) {
    pHVar2 = (HDC)0x0;
  }
  else {
    pHVar2 = *(HDC *)(param_1 + 4);
  }
  pHVar2 = CreateCompatibleDC(pHVar2);
  CDC::Attach(local_1c,pHVar2);
  local_5c.right = local_34 - local_3c.x;
  local_5c.left = 0;
  local_5c.top = 0;
  local_5c.bottom = local_30 - local_3c.y;
  BVar3 = EqualRect((RECT *)((int)this + 0x1e4),&local_5c);
  piVar1 = *(int **)((int)this + 0x1dc);
  bVar8 = BVar3 == 0;
  if (piVar1 != (int *)0x0) {
    if (!bVar8) goto LAB_10004dca;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(1);
    }
  }
  param_1 = operator_new(8);
  if (param_1 == (CGdiObject *)0x0) {
    param_1 = (CGdiObject *)0x0;
  }
  else {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined ***)param_1 = &PTR_LAB_10016db8;
  }
  *(CGdiObject **)((int)this + 0x1dc) = param_1;
  pHVar4 = CreateCompatibleBitmap
                     (*(HDC *)(this_00 + 4),local_5c.right - local_5c.left,
                      local_5c.bottom - local_5c.top);
  CGdiObject::Attach(param_1,pHVar4);
  ((RECT *)((int)this + 0x1e4))->left = local_5c.left;
  *(LONG *)((int)this + 0x1e8) = local_5c.top;
  *(LONG *)((int)this + 0x1ec) = local_5c.right;
  *(LONG *)((int)this + 0x1f0) = local_5c.bottom;
LAB_10004dca:
  if (*(int *)((int)this + 0x1f8) == 1) {
    if (*(int **)((int)this + 0x1e0) != (int *)0x0) {
      (**(code **)(**(int **)((int)this + 0x1e0) + 4))(1);
    }
    this_01 = operator_new(8);
    if (this_01 == (CGdiObject *)0x0) {
      this_01 = (CGdiObject *)0x0;
    }
    else {
      *(undefined4 *)(this_01 + 4) = 0;
      *(undefined ***)this_01 = &PTR_LAB_10016db8;
    }
    *(CGdiObject **)((int)this + 0x1e0) = this_01;
    pHVar4 = CreateCompatibleBitmap
                       (*(HDC *)(this_00 + 4),local_5c.right - local_5c.left,
                        local_5c.bottom - local_5c.top);
    CGdiObject::Attach(this_01,pHVar4);
    pvVar6 = (void *)0x0;
    if (*(int *)((int)this + 0x1e0) != 0) {
      pvVar6 = *(void **)(*(int *)((int)this + 0x1e0) + 4);
    }
    CDC::SelectGdiObject(pHStack_18,pvVar6);
    if (this_00 == (CGdiObject *)0x0) {
      pHVar2 = (HDC)0x0;
    }
    else {
      pHVar2 = *(HDC *)(this_00 + 4);
    }
    BitBlt(pHStack_18,0,0,local_5c.right - local_5c.left,local_5c.bottom - local_5c.top,pHVar2,0,0,
           0xcc0020);
    bVar8 = true;
  }
  pvVar6 = (void *)0x0;
  if (*(int *)((int)this + 0x1dc) != 0) {
    pvVar6 = *(void **)(*(int *)((int)this + 0x1dc) + 4);
  }
  CDC::SelectGdiObject(pHStack_28,pvVar6);
  iVar5 = COleControl::IsModified(this);
  if ((iVar5 != 0) || (bVar8)) {
    iVar5 = CDC::SaveDC((CDC *)&local_2c);
    pCVar7 = (CDC *)this_00;
    if ((*(int *)((int)this + 0x1f8) != 0) && (*(int *)((int)this + 0x1e0) != 0)) {
      CDC::SelectGdiObject(pHStack_18,*(void **)(*(int *)((int)this + 0x1e0) + 4));
      pCVar7 = local_1c;
    }
    pHVar2 = (HDC)0x0;
    if (pCVar7 != (CDC *)0x0) {
      pHVar2 = *(HDC *)(pCVar7 + 4);
    }
    BitBlt(pHStack_28,local_4c.x,local_4c.y,local_44 - local_4c.x,local_40 - local_4c.y,pHVar2,
           local_4c.x - local_3c.x,local_4c.y - local_3c.y,0xcc0020);
    FUN_10004990(this,(CDC *)&local_2c);
    CDC::RestoreDC((CDC *)&local_2c,iVar5);
  }
  (**(code **)(*(int *)this_00 + 0x3c))(1);
  uVar9 = 0;
  CDC::SetWindowOrg((CDC *)this_00,(int)&stack0xffffff98,0);
  (**(code **)(*(int *)this_00 + 0x40))(&stack0xffffff94,0,0,uVar9);
  BitBlt(*(HDC *)(this_00 + 4),iStack_60,local_5c.left,local_5c.top - iStack_60,
         local_5c.right - local_5c.left,
         (HDC)(-(uint)(&stack0x00000000 != (undefined1 *)0x40) & local_3c.x),
         iStack_60 - local_5c.bottom,local_5c.left - local_4c.x,0xcc0020);
  pvVar6 = (void *)0x0;
  if (puStack_8 != (undefined1 *)0x0) {
    pvVar6 = *(void **)(puStack_8 + 4);
  }
  CDC::SelectGdiObject((HDC__ *)local_3c.x,pvVar6);
  if (pvStack_c != (void *)0x0) {
    CDC::SelectGdiObject(local_2c,*(void **)((int)pvStack_c + 4));
  }
  pHStack_18 = (HDC__ *)((uint)pHStack_18 & 0xffffff00);
  CDC::~CDC((CDC *)&local_30);
  pHStack_18 = (HDC__ *)0xffffffff;
  CDC::~CDC((CDC *)&local_40);
  ExceptionList = pvStack_20;
  return;
}


// ---- FUN_10005050 @ 10005050

void __fastcall FUN_10005050(int param_1)

{
  ((LPRECT)(param_1 + 0x21c))->left = 0;
  *(undefined4 *)(param_1 + 0x220) = 0;
  *(undefined4 *)(param_1 + 0x224) = 0x40;
  *(undefined4 *)(param_1 + 0x228) = 0x40;
  OffsetRect((LPRECT)(param_1 + 0x21c),*(int *)(param_1 + 0x204) + -0x20,
             *(int *)(param_1 + 0x208) + -0x20);
  return;
}


// ---- FUN_100050a0 @ 100050a0

void __thiscall FUN_100050a0(void *this,int param_1,uint param_2)

{
  int iVar1;
  HCURSOR pHVar2;
  CString *pCVar3;
  COleControl *this_00;
  tagRECT local_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  void *local_4;
  
  iVar1 = param_1;
  local_4 = (void *)0xffffffff;
  puStack_8 = &LAB_10014a40;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(int *)((int)this + 0x5c8) = param_1;
  GetWindowRect(*(HWND *)((int)this + 0x20),&local_1c);
  if ((*(int *)((int)this + 0x244) != 0) && ((iVar1 == 3 || (iVar1 == 4)))) {
    local_1c.left = 0x201;
  }
  if (iVar1 != 5) {
    ClipCursor(&local_1c);
    COleControl::SetCapture(this);
    pHVar2 = SetCursor(*(HCURSOR *)((int)this + 0x1c4));
    *(HCURSOR *)((int)this + 0x1c0) = pHVar2;
  }
  *(int *)((int)this + 500) = iVar1;
  *(undefined4 *)((int)this + 0x1f8) = 1;
  GetCursorPos((LPPOINT)((int)this + 0x204));
  ScreenToClient(*(HWND *)((int)this + 0x20),(LPPOINT)((int)this + 0x204));
  InvalidateRect(*(HWND *)((int)this + 0x1d4),(RECT *)0x0,1);
  COleControl::InvalidateControl(this,(tagRECT *)0x0,1);
  CString::CString((CString *)&param_1);
  local_4 = (void *)0x0;
  pCVar3 = FUN_1000d890(*(void **)((int)this + 0x23c),(CString *)&param_2,param_2);
  local_4._0_1_ = 1;
  CString::operator=((CString *)&param_1,pCVar3);
  local_4 = (void *)((uint)local_4._1_3_ << 8);
  CString::~CString((CString *)&param_2);
  COleControl::FireEvent(this_00,(long)this,(uchar *)0x2);
  param_1 = -1;
  CString::~CString((CString *)&stack0x0000000c);
  ExceptionList = local_4;
  return;
}


// ---- FUN_100051e0 @ 100051e0

float10 __thiscall FUN_100051e0(int param_1,char *param_2)

{
  float local_18;
  undefined4 local_14;
  float local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10014a58;
  local_c = ExceptionList;
  local_4 = 0;
  local_18 = 0.0;
  ExceptionList = &local_c;
  if (*(void **)(param_1 + 0x23c) != (void *)0x0) {
    ExceptionList = &local_c;
    FUN_1000e0e0(*(void **)(param_1 + 0x23c),&local_14,param_2);
    FUN_1000db10(*(void **)(param_1 + 0x23c),local_14,&local_18);
  }
  local_10 = local_18;
  local_4 = 0xffffffff;
  CString::~CString((CString *)&param_2);
  ExceptionList = local_c;
  return (float10)local_10;
}


// ---- FUN_10005270 @ 10005270

void __thiscall FUN_10005270(void *this,int param_1,char *param_2,float *param_3,float *param_4)

{
  int iVar1;
  char *extraout_ECX;
  char *extraout_ECX_00;
  char *extraout_ECX_01;
  char *extraout_ECX_02;
  char *extraout_ECX_03;
  char *pcVar2;
  char *extraout_ECX_04;
  char *extraout_ECX_05;
  int iVar3;
  float10 fVar4;
  
  pcVar2 = this;
  CString::CString((CString *)&stack0xffffffd8,s_DP_OPERATING_MODE_1001c268);
  FUN_100051e0((int)this,pcVar2);
  pcVar2 = extraout_ECX;
  CString::CString((CString *)&stack0xffffffd8,s_DP_ZOOM_1001c260);
  FUN_100051e0((int)this,pcVar2);
  pcVar2 = extraout_ECX_00;
  CString::CString((CString *)&stack0xffffffd8,s_AP_ZOOM_FACTOR_1001c250);
  FUN_100051e0((int)this,pcVar2);
  pcVar2 = extraout_ECX_01;
  CString::CString((CString *)&stack0xffffffd8,s_AP_ZOOMPOS_X_1001c240);
  FUN_100051e0((int)this,pcVar2);
  pcVar2 = extraout_ECX_02;
  CString::CString((CString *)&stack0xffffffd8,s_AP_ZOOMPOS_Y_1001c230);
  FUN_100051e0((int)this,pcVar2);
  iVar1 = ftol();
  if (iVar1 == 1) {
    iVar1 = ftol();
    pcVar2 = extraout_ECX_04;
    if (iVar1 == 1) {
      if (0x1ff < param_1) {
        param_1 = ftol();
        param_2 = (char *)ftol();
        pcVar2 = extraout_ECX_05;
      }
    }
    else if (0x1ff < param_1) {
      param_1 = param_1 + -0x200;
    }
    iVar1 = 0x100;
    iVar3 = 0x180;
  }
  else if (iVar1 == 2) {
    iVar1 = 0x100;
    iVar3 = 0xc0;
    if (0x1ff < param_1) {
      param_1 = param_1 + -0x200;
    }
    pcVar2 = param_2;
    if (0x17f < (int)param_2) {
      pcVar2 = param_2 + -0x180;
      param_2 = pcVar2;
    }
  }
  else {
    iVar1 = 0x200;
    iVar3 = 0x180;
    pcVar2 = extraout_ECX_03;
  }
  CString::CString((CString *)&stack0xffffffd8,s_AP_PIXEL_SIZE_1001c220);
  fVar4 = FUN_100051e0((int)this,pcVar2);
  *param_3 = (float)((float10)(iVar1 - param_1) * fVar4);
  *param_4 = (float)((float10)(iVar3 - (int)param_2) * fVar4);
  return;
}


// ---- FUN_10005410 @ 10005410

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005410(float param_1,float param_2,float param_3,float *param_4,float *param_5)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar1 = SQRT((float10)param_2 * (float10)param_2 + (float10)param_1 * (float10)param_1);
  if (param_1 == _DAT_10017020) {
    if ((float10)param_2 <= (float10)_DAT_10017020) {
      fVar3 = (float10)_DAT_10016ff8;
    }
    else {
      fVar3 = (float10)_DAT_10017000;
    }
  }
  else {
    fVar3 = (float10)fpatan((float10)param_2 / (float10)param_1,(float10)1);
    fVar3 = fVar3 * (float10)_DAT_10017018;
    if (_DAT_10017020 <= param_1) {
      if (param_2 < _DAT_10017020) {
        fVar3 = fVar3 + (float10)_DAT_10017008;
      }
    }
    else {
      fVar3 = fVar3 + (float10)_DAT_10017010;
    }
  }
  fVar3 = (fVar3 + (float10)param_3) * (float10)_DAT_10016ff0;
  fVar2 = (float10)fcos(fVar3);
  *param_4 = (float)(fVar2 * fVar1);
  fVar3 = (float10)fsin(fVar3);
  *param_5 = (float)(fVar3 * fVar1);
  return;
}


// ---- FUN_100054c0 @ 100054c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_100054c0(void *this,char *param_1,float param_2)

{
  bool bVar1;
  CString *pCVar2;
  int iVar3;
  float *pfVar4;
  char *extraout_ECX;
  char *extraout_ECX_00;
  char *extraout_ECX_01;
  COleControl *this_00;
  char *extraout_ECX_02;
  char *extraout_ECX_03;
  char *extraout_ECX_04;
  COleControl *extraout_ECX_05;
  COleControl *extraout_ECX_06;
  COleControl *extraout_ECX_07;
  COleControl *extraout_ECX_08;
  COleControl *pCVar5;
  char *extraout_ECX_09;
  char *pcVar6;
  char *extraout_ECX_10;
  COleControl *this_01;
  COleControl *extraout_ECX_11;
  COleControl *this_02;
  COleControl *extraout_ECX_12;
  COleControl *this_03;
  uint uVar7;
  uint uVar8;
  float *pfVar9;
  float10 fVar10;
  CString local_ce0 [4];
  char *local_cdc;
  char *local_cd8;
  char *local_cd4;
  int local_cd0;
  float local_ccc;
  undefined1 *local_cc8;
  uint local_cc4;
  float local_cc0;
  int local_cbc;
  float local_cb8;
  float local_cb4;
  float local_cb0 [2];
  CString local_ca8 [4];
  CString local_ca4 [4];
  float local_ca0;
  float local_c9c;
  CString local_c98 [4];
  float local_c94;
  float local_c90 [6];
  undefined4 local_c78 [6];
  uchar local_c60 [2452];
  int local_2cc;
  float local_170;
  void *pvStack_c;
  undefined1 *puStack_8;
  void *local_4;
  
  local_4 = (void *)0xffffffff;
  puStack_8 = &LAB_10014b36;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  CString::CString(local_ce0,&DAT_1001c718);
  local_4 = (void *)0x0;
  CString::CString((CString *)&local_cd8);
  local_4 = (void *)CONCAT31(local_4._1_3_,1);
  if (*(void **)((int)this + 0x23c) == (void *)0x0) {
    CString::LoadStringA((CString *)&local_cd8,1);
    pcVar6 = extraout_ECX_00;
  }
  else {
    pCVar2 = FUN_1000d890(*(void **)((int)this + 0x23c),(CString *)&local_cd0,1);
    local_4._0_1_ = 2;
    CString::operator=((CString *)&local_cd8,pCVar2);
    local_4 = (void *)CONCAT31(local_4._1_3_,1);
    CString::~CString((CString *)&local_cd0);
    pcVar6 = extraout_ECX;
  }
  local_cc8 = &stack0xfffff30c;
  *(undefined4 *)((int)this + 0x240) = 0;
  CString::CString((CString *)&stack0xfffff30c,s_DP_PIXEL_SIZE_1001c2fc);
  FUN_100051e0((int)this,pcVar6);
  iVar3 = ftol();
  if (iVar3 == 0) {
    CString::CString((CString *)&local_cdc);
    local_4 = (void *)CONCAT31(local_4._1_3_,3);
    if (*(void **)((int)this + 0x23c) == (void *)0x0) {
      CString::LoadStringA((CString *)&local_cdc,0x6f);
    }
    else {
      pCVar2 = FUN_1000d890(*(void **)((int)this + 0x23c),(CString *)&local_cd0,0x6f);
      local_4._0_1_ = 4;
      CString::operator=((CString *)&local_cdc,pCVar2);
      local_4 = (void *)CONCAT31(local_4._1_3_,3);
      CString::~CString((CString *)&local_cd0);
    }
    CWnd::MessageBoxA(this,local_cdc,local_cd8,0x30);
    COleControl::FireEvent(this_00,(long)this,(uchar *)0x4);
    if (*(void **)((int)this + 0x23c) == (void *)0x0) {
      CString::LoadStringA((CString *)&local_cd8,0x6d);
      pCVar2 = (CString *)&local_cd4;
    }
    else {
      pCVar2 = FUN_1000d890(*(void **)((int)this + 0x23c),(CString *)&local_cc8,0x6d);
      CString::operator=((CString *)&local_cd8,pCVar2);
      CString::~CString((CString *)&local_cc8);
      pCVar2 = (CString *)&local_cd4;
    }
    goto LAB_10005f7f;
  }
  local_cc8 = &stack0xfffff30c;
  pcVar6 = extraout_ECX_01;
  CString::CString((CString *)&stack0xfffff30c,s_DP_POINT_USING_1001c2ec);
  FUN_100051e0((int)this,pcVar6);
  local_cbc = ftol();
  if (local_cbc == 3) {
    param_2 = 0.0;
  }
  else if (local_cbc == 4) {
    param_1 = (char *)0x0;
  }
  local_cc8 = &stack0xfffff30c;
  pcVar6 = extraout_ECX_02;
  CString::CString((CString *)&stack0xfffff30c,s_DP_STAGE_INIT_1001c2dc);
  FUN_100051e0((int)this,pcVar6);
  local_cd0 = ftol();
  local_cc4 = 0;
  if (*(void **)((int)this + 0x23c) != (void *)0x0) {
    local_cc4 = FUN_1000e160(*(void **)((int)this + 0x23c),s_AP_BEAMSHIFT_X_1001c2cc);
  }
  pcVar6 = (char *)0x0;
  if (*(void **)((int)this + 0x23c) != (void *)0x0) {
    FUN_1000d7d0(*(void **)((int)this + 0x23c),local_c60);
    pcVar6 = extraout_ECX_03;
  }
  if (local_2cc == 0) {
LAB_1000572a:
    local_cdc = (char *)0x0;
  }
  else {
    local_cc8 = &stack0xfffff30c;
    CString::CString((CString *)&stack0xfffff30c,s_AP_PIXEL_SIZE_1001c220);
    fVar10 = FUN_100051e0((int)this,pcVar6);
    local_cdc = (char *)0x1;
    if (fVar10 < (float10)local_170) goto LAB_1000572a;
  }
  uVar7 = 0;
  uVar8 = 0;
  if (*(void **)((int)this + 0x23c) != (void *)0x0) {
    uVar7 = FUN_1000e160(*(void **)((int)this + 0x23c),s_AP_BEAM_OFFSET_X_1001c2b8);
    uVar8 = FUN_1000e160(*(void **)((int)this + 0x23c),s_AP_BEAM_OFFSET_Y_1001c2a4);
    iVar3 = FUN_1000dc90(*(void **)((int)this + 0x23c),uVar7,&local_cb4,&local_cb8);
    if (iVar3 != 1) goto switchD_10005874_default;
  }
  local_cd4 = (char *)(local_cb4 + (float)param_1);
  local_ccc = local_cb8 + param_2;
  pcVar6 = (char *)0x0;
  if ((*(void **)((int)this + 0x23c) != (void *)0x0) &&
     ((iVar3 = FUN_1000db80(*(void **)((int)this + 0x23c),uVar7,&local_c94,&local_c9c), iVar3 != 1
      || (iVar3 = FUN_1000db80(*(void **)((int)this + 0x23c),uVar8,&local_ca0,local_cb0),
         pcVar6 = extraout_ECX_04, iVar3 != 1)))) goto switchD_10005874_default;
  local_cc8 = &stack0xfffff30c;
  CString::CString((CString *)&stack0xfffff30c,s_DP_CALMODE_1001c298);
  fVar10 = FUN_100051e0((int)this,pcVar6);
  local_cc0 = (float)fVar10;
  bVar1 = false;
  if ((local_c9c < (float)local_cd4) ||
     ((((float)local_cd4 < local_c94 || (local_cb0[0] < local_ccc)) || (local_ccc < local_ca0)))) {
    bVar1 = true;
  }
  if (*(void **)((int)this + 0x23c) != (void *)0x0) {
    pfVar4 = (float *)FUN_1000dd90(*(void **)((int)this + 0x23c),local_c78);
    pfVar9 = local_c90;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar9 = *pfVar4;
      pfVar4 = pfVar4 + 1;
      pfVar9 = pfVar9 + 1;
    }
  }
  pcVar6 = (char *)0x0;
  switch(local_cbc) {
  case 0:
    if ((local_cdc != (char *)0x0) || (bVar1)) {
      if (local_cd0 != 1) goto switchD_10005874_caseD_1;
      pcVar6 = (char *)0x0;
      if (*(void **)((int)this + 0x23c) != (void *)0x0) {
        FUN_1000de20(*(void **)((int)this + 0x23c),local_cc4,0,0);
        pcVar6 = extraout_ECX_09;
      }
      param_1 = (char *)(local_cb4 + (float)param_1);
      param_2 = local_cb8 + param_2;
      goto LAB_10005a35;
    }
    pCVar5 = (COleControl *)0x0;
    if (*(void **)((int)this + 0x23c) != (void *)0x0) {
      FUN_1000dd40(*(void **)((int)this + 0x23c),local_cd4,local_ccc);
      pCVar5 = extraout_ECX_05;
    }
    if (*(int *)((int)this + 0x604) == 1) {
      FUN_10008e00((int)this);
      FUN_1000df10(*(void **)((int)this + 0x23c),*(undefined4 *)((int)this + 0x274),0x3f800000);
      local_cd4 = *(char **)((int)this + 0x5e8);
      if (_DAT_10017020 < (float)local_cd4) {
        FUN_1000df10(*(void **)((int)this + 0x23c),*(undefined4 *)((int)this + 0x278),local_cd4);
      }
      if (*(int *)((int)this + 0x2b0) != 0) {
        *(undefined4 *)((int)this + 0x5d0) = 1;
      }
      FUN_10009130(this,10,*(undefined4 *)((int)this + 0x5e4));
      FUN_1000df10(*(void **)((int)this + 0x23c),*(undefined4 *)((int)this + 0x284),
                   *(undefined4 *)((int)this + 0x5e4));
      pCVar5 = extraout_ECX_06;
      if (*(int *)((int)this + 0x5c8) == 3) {
        fVar10 = FUN_10008bf0((int)this,*(float *)((int)this + 0x2ac));
        FUN_1000df10(*(void **)((int)this + 0x23c),*(undefined4 *)((int)this + 0x294),(float)fVar10)
        ;
        pCVar5 = extraout_ECX_07;
      }
      *(undefined4 *)((int)this + 0x604) = 2;
      COleControl::FireEvent(pCVar5,(long)this,(uchar *)0x6);
      FUN_100093d0((int)this);
      pCVar5 = extraout_ECX_08;
    }
    COleControl::FireEvent(pCVar5,(long)this,(uchar *)0x4);
    if (*(void **)((int)this + 0x23c) != (void *)0x0) {
      pCVar2 = FUN_1000d890(*(void **)((int)this + 0x23c),(CString *)&local_cb4,0x6d);
      CString::operator=((CString *)&local_cd8,pCVar2);
      CString::~CString((CString *)&local_cb4);
      *(undefined4 *)((int)this + 0x240) = 1;
      goto switchD_10005874_default;
    }
    break;
  case 1:
  case 3:
  case 4:
switchD_10005874_caseD_1:
    if (local_cd0 == 0) {
      CString::CString((CString *)&local_cdc);
      local_4 = (void *)CONCAT31(local_4._1_3_,7);
      if (*(void **)((int)this + 0x23c) == (void *)0x0) {
        CString::LoadStringA((CString *)&local_cdc,0x800a);
      }
      else {
        pCVar2 = FUN_1000d890(*(void **)((int)this + 0x23c),(CString *)&local_cd0,0x800a);
        local_4._0_1_ = 8;
        CString::operator=((CString *)&local_cdc,pCVar2);
        local_4 = (void *)CONCAT31(local_4._1_3_,7);
        CString::~CString((CString *)&local_cd0);
      }
      CWnd::MessageBoxA(this,local_cdc,local_cd8,0x30);
      COleControl::FireEvent(this_01,(long)this,(uchar *)0x4);
      if (*(void **)((int)this + 0x23c) == (void *)0x0) {
        CString::LoadStringA((CString *)&local_cd8,0x6d);
        pCVar2 = (CString *)&local_cd4;
      }
      else {
        pCVar2 = FUN_1000d890(*(void **)((int)this + 0x23c),(CString *)&local_cbc,0x6d);
        CString::operator=((CString *)&local_cd8,pCVar2);
        CString::~CString((CString *)&local_cbc);
        pCVar2 = (CString *)&local_cd4;
      }
      goto LAB_10005f7f;
    }
LAB_10005a35:
    local_cd4 = &stack0xfffff30c;
    CString::CString((CString *)&stack0xfffff30c,s_DP_SCAN_ROT_1001c28c);
    FUN_100051e0((int)this,pcVar6);
    iVar3 = ftol();
    if (iVar3 == 1) {
      local_cd4 = &stack0xfffff30c;
      pcVar6 = extraout_ECX_10;
      CString::CString((CString *)&stack0xfffff30c,s_AP_SCANROTATION_1001c27c);
      fVar10 = FUN_100051e0((int)this,pcVar6);
      FUN_10005410((float)param_1,param_2,(float)-fVar10,(float *)&local_cd4,&local_ccc);
      param_2 = local_ccc;
      param_1 = local_cd4;
    }
    local_c90[0] = local_c90[0] + (float)param_1;
    local_c90[1] = local_c90[1] - param_2;
    if (*(int *)((int)this + 0x604) == 1) {
      FUN_10008e00((int)this);
      FUN_1000df10(*(void **)((int)this + 0x23c),*(undefined4 *)((int)this + 0x274),0x3f800000);
      local_c90[2] = *(float *)((int)this + 0x5e4);
      if (*(int *)((int)this + 0x5c8) == 3) {
        fVar10 = FUN_10008bf0((int)this,*(float *)((int)this + 0x2ac));
        FUN_1000df10(*(void **)((int)this + 0x23c),*(undefined4 *)((int)this + 0x294),(float)fVar10)
        ;
      }
      *(undefined4 *)((int)this + 0x604) = 2;
      COleControl::FireEvent
                ((COleControl *)(int)*(short *)((int)this + 0x604),(long)this,(uchar *)0x6);
      FUN_100093d0((int)this);
      local_ccc = *(float *)((int)this + 0x5e8);
      if (_DAT_10017020 < local_ccc) {
        FUN_1000df10(*(void **)((int)this + 0x23c),*(undefined4 *)((int)this + 0x278),local_ccc);
      }
      if (*(int *)((int)this + 0x2b0) != 0) {
        *(undefined4 *)((int)this + 0x5d0) = 1;
      }
      FUN_10009130(this,10,*(undefined4 *)((int)this + 0x5e4));
    }
    pCVar5 = (COleControl *)0x0;
    if (*(void **)((int)this + 0x23c) != (void *)0x0) {
      FUN_1000dde0(*(void **)((int)this + 0x23c),local_c90);
      pCVar5 = extraout_ECX_11;
    }
    COleControl::FireEvent(pCVar5,(long)this,(uchar *)0x4);
    if (*(void **)((int)this + 0x23c) != (void *)0x0) {
      pCVar2 = FUN_1000d890(*(void **)((int)this + 0x23c),(CString *)&local_c9c,0x6d);
      CString::operator=((CString *)&local_cd8,pCVar2);
      CString::~CString((CString *)&local_c9c);
      *(undefined4 *)((int)this + 0x240) = 1;
      goto switchD_10005874_default;
    }
    break;
  case 2:
    if (local_cdc == (char *)0x0) {
      if ((!bVar1) && (local_cc0 != _DAT_10017024)) {
        pCVar5 = (COleControl *)0x0;
        if (*(void **)((int)this + 0x23c) != (void *)0x0) {
          FUN_1000dd40(*(void **)((int)this + 0x23c),local_cd4,local_ccc);
          pCVar5 = extraout_ECX_12;
        }
        COleControl::FireEvent(pCVar5,(long)this,(uchar *)0x4);
        if (*(void **)((int)this + 0x23c) != (void *)0x0) {
          pCVar2 = FUN_1000d890(*(void **)((int)this + 0x23c),local_ca4,0x6d);
          CString::operator=((CString *)&local_cd8,pCVar2);
          CString::~CString(local_ca4);
          *(undefined4 *)((int)this + 0x240) = 1;
          goto switchD_10005874_default;
        }
        break;
      }
      CString::CString((CString *)&local_cd4);
      local_4 = (void *)CONCAT31(local_4._1_3_,0xe);
      if (*(void **)((int)this + 0x23c) == (void *)0x0) {
        CString::LoadStringA((CString *)&local_cd4,0x8006);
      }
      else {
        pCVar2 = FUN_1000d890(*(void **)((int)this + 0x23c),local_ca8,0x8006);
        local_4._0_1_ = 0xf;
        CString::operator=((CString *)&local_cd4,pCVar2);
        local_4 = (void *)CONCAT31(local_4._1_3_,0xe);
        CString::~CString(local_ca8);
      }
      CWnd::MessageBoxA(this,local_cd4,local_cd8,0x30);
      *(undefined4 *)((int)this + 0x240) = 0;
      COleControl::FireEvent(this_03,(long)this,(uchar *)0x4);
      if (*(void **)((int)this + 0x23c) == (void *)0x0) {
        CString::LoadStringA((CString *)&local_cd8,0x6d);
      }
      else {
        pCVar2 = FUN_1000d890(*(void **)((int)this + 0x23c),(CString *)&local_cc0,0x6d);
        CString::operator=((CString *)&local_cd8,pCVar2);
        CString::~CString((CString *)&local_cc0);
      }
      pCVar2 = (CString *)&local_ccc;
    }
    else {
      CString::CString((CString *)&local_cdc);
      local_4 = (void *)CONCAT31(local_4._1_3_,0xb);
      if (*(void **)((int)this + 0x23c) == (void *)0x0) {
        CString::LoadStringA((CString *)&local_cdc,0x70);
      }
      else {
        pCVar2 = FUN_1000d890(*(void **)((int)this + 0x23c),local_c98,0x70);
        local_4._0_1_ = 0xc;
        CString::operator=((CString *)&local_cdc,pCVar2);
        local_4 = (void *)CONCAT31(local_4._1_3_,0xb);
        CString::~CString(local_c98);
      }
      CWnd::MessageBoxA(this,local_cdc,local_cd8,0x30);
      COleControl::FireEvent(this_02,(long)this,(uchar *)0x4);
      if (*(void **)((int)this + 0x23c) == (void *)0x0) {
        CString::LoadStringA((CString *)&local_cd8,0x6d);
        pCVar2 = (CString *)&local_cd4;
      }
      else {
        pCVar2 = FUN_1000d890(*(void **)((int)this + 0x23c),(CString *)&local_cb8,0x6d);
        CString::operator=((CString *)&local_cd8,pCVar2);
        CString::~CString((CString *)&local_cb8);
        pCVar2 = (CString *)&local_cd4;
      }
    }
LAB_10005f7f:
    CString::~CString(pCVar2);
  default:
    goto switchD_10005874_default;
  }
  CString::LoadStringA((CString *)&local_cd8,0x6d);
  *(undefined4 *)((int)this + 0x240) = 1;
switchD_10005874_default:
  CString::~CString((CString *)&local_cd0);
  CString::~CString((CString *)&local_cd8);
  ExceptionList = local_4;
  return;
}


// ---- FUN_10005fe0 @ 10005fe0

CGdiObject * __thiscall FUN_10005fe0(void *this,byte param_1)

{
  FUN_10006000(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_10006000 @ 10006000

void __fastcall FUN_10006000(CGdiObject *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10014b48;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = &PTR_LAB_10016da4;
  local_4 = 0;
  CGdiObject::DeleteObject(param_1);
  *(undefined ***)param_1 = &PTR_GetRuntimeClass_10016fdc;
  ExceptionList = local_c;
  return;
}


// ---- FUN_10006050 @ 10006050

CGdiObject * __thiscall FUN_10006050(void *this,byte param_1)

{
  FUN_10006070(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_10006070 @ 10006070

void __fastcall FUN_10006070(CGdiObject *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10014b68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = &PTR_LAB_10016da4;
  local_4 = 0;
  CGdiObject::DeleteObject(param_1);
  *(undefined ***)param_1 = &PTR_GetRuntimeClass_10016fdc;
  ExceptionList = local_c;
  return;
}


// ---- FUN_100060c0 @ 100060c0

CGdiObject * __thiscall FUN_100060c0(void *this,byte param_1)

{
  FUN_100060e0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_100060e0 @ 100060e0

void __fastcall FUN_100060e0(CGdiObject *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10014b88;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = &PTR_LAB_10016da4;
  local_4 = 0;
  CGdiObject::DeleteObject(param_1);
  *(undefined ***)param_1 = &PTR_GetRuntimeClass_10016fdc;
  ExceptionList = local_c;
  return;
}


// ---- FUN_10006130 @ 10006130

int __thiscall FUN_10006130(void *this,tagSIZE *param_1)

{
  int iVar1;
  
  iVar1 = COleControl::AmbientUserMode(this);
  if (iVar1 != 0) {
    iVar1 = COleControl::OnSetExtent(this,param_1);
    return iVar1;
  }
  return 0;
}


// ---- FUN_10006160 @ 10006160

void __thiscall FUN_10006160(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = COleControl::AmbientUserMode(this);
  if (iVar1 != 0) {
    COleControl::OnNcLButtonDown(this,param_1,param_2,param_3);
  }
  return;
}


// ---- FUN_10006190 @ 10006190

void __thiscall FUN_10006190(void *this,CPropExchange *param_1)

{
  (*(code *)**(undefined4 **)param_1)((int)this + 0x48,CONCAT22(DAT_10017230,DAT_10017232),1);
  COleControl::DoPropExchange(this,param_1);
  return;
}


// ---- FUN_100061e0 @ 100061e0

void __fastcall FUN_100061e0(COleControl *param_1)

{
  int iVar1;
  CDialog local_74 [96];
  uint local_14;
  CString local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10014bb0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10001000(local_74,(CWnd *)0x0);
  local_4 = 0;
  iVar1 = COleControl::AmbientUserMode(param_1);
  local_14 = (uint)(iVar1 != 0);
  COleControl::PreModalDialog(param_1,(HWND__ *)0x0);
  CDialog::DoModal(local_74);
  COleControl::PostModalDialog(param_1,(HWND__ *)0x0);
  local_4 = 1;
  CString::~CString(local_10);
  local_4 = 0xffffffff;
  CDialog::~CDialog(local_74);
  ExceptionList = local_c;
  return;
}


// ---- FUN_100062b0 @ 100062b0

void __fastcall FUN_100062b0(COleControl *param_1)

{
  COleControl::OnDestroy(param_1);
  if (*(int **)(param_1 + 0x1dc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x1dc) + 4))(1);
  }
  *(undefined4 *)(param_1 + 0x1dc) = 0;
  if (*(int **)(param_1 + 0x1e0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x1e0) + 4))(1);
  }
  *(undefined4 *)(param_1 + 0x1e4) = 0;
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  *(undefined4 *)(param_1 + 0x1ec) = 0;
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  return;
}


// ---- FUN_10006d80 @ 10006d80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_10006d80(void *this,int param_1,int param_2)

{
  char *pcVar1;
  WPARAM WVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  COleControl *this_00;
  void *unaff_EBX;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  int unaff_EDI;
  float10 fVar6;
  undefined4 unaff_retaddr;
  float fVar7;
  
  if (*(int *)((int)this + 0x1d0) == 0) {
    return 0;
  }
  if (((*(int *)((int)this + 0x244) != 0) && (param_1 == *(int *)((int)this + 0x250))) &&
     (param_2 == 0)) {
    FUN_10008840(this,unaff_EDI,unaff_EBP,unaff_EBX,unaff_ESI,unaff_retaddr);
  }
  if ((param_1 == *(int *)((int)this + 0x268)) && (param_2 == 0)) {
    fVar6 = FUN_1000d9f0(*(void **)((int)this + 0x23c),*(int *)((int)this + 0x268));
    if (fVar6 == (float10)_DAT_10017020) {
      FUN_100090b0(this);
    }
  }
  if ((param_1 == *(int *)((int)this + 0x264)) && (param_2 == 0)) {
    fVar6 = FUN_1000d9f0(*(void **)((int)this + 0x23c),*(int *)((int)this + 0x264));
    if (fVar6 == (float10)_DAT_10017020) {
      FUN_100090b0(this);
    }
  }
  if (((param_1 == *(int *)((int)this + 0x28c)) && (param_2 == 0)) &&
     (*(float *)((int)this + 0x270) != _DAT_10017020)) {
    FUN_1000d9f0(*(void **)((int)this + 0x23c),*(int *)((int)this + 0x28c));
    WVar2 = ftol();
    FUN_1000e5c0(*(void **)((int)this + 0x23c),WVar2);
  }
  if (((param_1 == *(int *)((int)this + 0x27c)) && (param_2 == 0)) &&
     (*(int *)((int)this + 0x5cc) == 0)) {
    fVar6 = FUN_1000d9f0(*(void **)((int)this + 0x23c),*(int *)((int)this + 0x27c));
    if (fVar6 == (float10)_DAT_10017020) {
      FUN_100092d0(this);
    }
  }
  if (((param_1 == *(int *)((int)this + 0x260)) && (param_2 == 0)) &&
     (*(int *)((int)this + 0x5d8) != 0)) {
    fVar6 = FUN_1000d9f0(*(void **)((int)this + 0x23c),*(int *)((int)this + 0x260));
    if (fVar6 == (float10)_DAT_10017020) {
      pcVar1 = *(char **)((int)this + 0x25c);
      uVar3 = FUN_1000e5e0(*(int *)((int)this + 0x23c));
      FUN_1000e2e0(*(void **)((int)this + 0x23c),pcVar1,uVar3);
      *(undefined4 *)((int)this + 0x5d8) = 0;
    }
  }
  if ((param_1 == *(int *)((int)this + 0x298)) && (param_2 == 3)) {
    fVar6 = FUN_1000d9f0(*(void **)((int)this + 0x23c),*(int *)((int)this + 0x298));
    if ((fVar6 == (float10)_DAT_10017044) && (*(int *)((int)this + 0x604) == 0)) {
      FUN_1000df10(*(void **)((int)this + 0x23c),*(undefined4 *)((int)this + 0x298),0);
    }
  }
  if ((param_1 == *(int *)((int)this + 0x298)) && (param_2 == 0)) {
    FUN_1000d9f0(*(void **)((int)this + 0x23c),*(int *)((int)this + 0x298));
    iVar4 = ftol();
    if (iVar4 == 1) {
      if (*(int *)((int)this + 0x604) == 0) {
        fVar6 = FUN_1000d9f0(*(void **)((int)this + 0x23c),*(undefined4 *)((int)this + 0x294));
        *(float *)((int)this + 0x5ec) = (float)fVar6;
        fVar6 = FUN_1000d9f0(*(void **)((int)this + 0x23c),*(undefined4 *)((int)this + 0x290));
        *(float *)((int)this + 0x5f0) = (float)fVar6;
        fVar6 = FUN_1000d9f0(*(void **)((int)this + 0x23c),*(undefined4 *)((int)this + 0x28c));
        *(float *)((int)this + 0x5f4) = (float)fVar6;
        fVar6 = FUN_1000d9f0(*(void **)((int)this + 0x23c),*(undefined4 *)((int)this + 0x278));
        *(float *)((int)this + 0x5f8) = (float)fVar6;
        FUN_1000d9f0(*(void **)((int)this + 0x23c),*(undefined4 *)((int)this + 0x280));
        uVar3 = ftol();
        *(undefined4 *)((int)this + 0x5fc) = uVar3;
        FUN_1000d9f0(*(void **)((int)this + 0x23c),*(undefined4 *)((int)this + 0x274));
        uVar3 = ftol();
        *(undefined4 *)((int)this + 0x600) = uVar3;
        FUN_1000df10(*(void **)((int)this + 0x23c),*(undefined4 *)((int)this + 0x280),0);
        FUN_10009410((int)this);
        FUN_10009130(this,9,*(undefined4 *)((int)this + 0x5dc));
        FUN_1000df10(*(void **)((int)this + 0x23c),*(undefined4 *)((int)this + 0x274),0x3f800000);
        if (*(int *)((int)this + 0x2a4) != 0) {
          *(undefined4 *)((int)this + 0x5d0) = 1;
        }
        FUN_1000df10(*(void **)((int)this + 0x23c),*(undefined4 *)((int)this + 0x284),
                     *(undefined4 *)((int)this + 0x5dc));
        if (_DAT_10017020 < *(float *)((int)this + 0x5e0)) {
          FUN_1000df10(*(void **)((int)this + 0x23c),*(undefined4 *)((int)this + 0x278),
                       *(float *)((int)this + 0x5e0));
        }
        if (*(int *)((int)this + 0x29c) == 0) {
          if (*(float *)((int)this + 0x2a8) == _DAT_10017020) {
            uVar5 = *(uint *)((int)this + 0x294);
            fVar7 = 0.0;
          }
          else {
            fVar6 = FUN_10008bf0((int)this,*(float *)((int)this + 0x2a8));
            uVar5 = *(uint *)((int)this + 0x294);
            fVar7 = (float)fVar6;
          }
        }
        else {
          fVar7 = 1.0;
          uVar5 = FUN_1000e160(*(void **)((int)this + 0x23c),s_DP_LOW_MAG_1001c34c);
        }
        FUN_1000df10(*(void **)((int)this + 0x23c),uVar5,fVar7);
        *(undefined4 *)((int)this + 0x604) = 1;
        COleControl::FireEvent(this_00,(long)this,(uchar *)0x6);
        FUN_100093d0((int)this);
        return 0;
      }
    }
    else if (*(int *)((int)this + 0x604) != 0) {
      *(undefined4 *)((int)this + 0x5d0) = 0;
      *(undefined4 *)((int)this + 0x5d8) = 0;
      FUN_10009130(this,0xb,*(undefined4 *)((int)this + 0x5f4));
      *(undefined4 *)((int)this + 0x604) = 3;
      COleControl::FireEvent
                ((COleControl *)(int)*(short *)((int)this + 0x604),(long)this,(uchar *)0x6);
      ftol();
      FUN_10009f50(DAT_1001cc9c,s_Survey_1001c330,s_Survey_Brightness_1001c338);
      ftol();
      FUN_10009f50(DAT_1001cc9c,s_Survey_1001c330,s_Resolution_Brightness_1001c318);
      FUN_1000df10(*(void **)((int)this + 0x23c),*(undefined4 *)((int)this + 0x274),0);
      FUN_1000df10(*(void **)((int)this + 0x23c),*(undefined4 *)((int)this + 0x294),
                   *(undefined4 *)((int)this + 0x5ec));
      FUN_1000df10(*(void **)((int)this + 0x23c),*(undefined4 *)((int)this + 0x290),
                   *(undefined4 *)((int)this + 0x5f0));
      FUN_1000df10(*(void **)((int)this + 0x23c),*(undefined4 *)((int)this + 0x284),
                   *(undefined4 *)((int)this + 0x5f4));
      FUN_1000df10(*(void **)((int)this + 0x23c),*(undefined4 *)((int)this + 0x280),
                   (float)*(int *)((int)this + 0x5fc));
      FUN_1000df10(*(void **)((int)this + 0x23c),*(undefined4 *)((int)this + 0x278),
                   *(undefined4 *)((int)this + 0x5f8));
      FUN_100093d0((int)this);
    }
  }
  return 0;
}


// ---- FUN_10007280 @ 10007280

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_10007280(int param_1,HWND param_2,HWND param_3)

{
  char cVar1;
  BOOL BVar2;
  undefined4 uVar3;
  LRESULT LVar4;
  undefined4 *this;
  uint uVar5;
  UINT UVar6;
  CString *pCVar7;
  uint uVar8;
  char *unaff_EBX;
  char *pcVar9;
  char *pcVar10;
  double dVar11;
  UINT UStack_c70;
  undefined4 uStack_c6c;
  void *pvStack_c68;
  uchar auStack_c60 [700];
  char acStack_9a4 [1396];
  char acStack_430 [708];
  undefined1 auStack_16c [352];
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &UNK_10014cc6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  BVar2 = IsWindow(param_2);
  if (BVar2 == 0) {
    ExceptionList = pvStack_c;
    return 0;
  }
  BVar2 = IsWindow(param_3);
  if (BVar2 == 0) {
LAB_100072c7:
    uVar3 = 0;
  }
  else {
    *(HWND *)(param_1 + 0x1d4) = param_2;
    *(HWND *)(param_1 + 0x1d8) = param_3;
    if (*(int *)(param_1 + 0x1d0) == 0) {
      *(undefined4 *)(param_1 + 0x1d0) = 1;
      LVar4 = SendMessageA(*(HWND *)(param_1 + 0x1d8),_DAT_1001ca5c,0,0);
      if (LVar4 == 0) goto LAB_100072c7;
      pvStack_c68 = operator_new(0x20);
      uStack_4 = 0;
      if (pvStack_c68 == (void *)0x0) {
        this = (undefined4 *)0x0;
      }
      else {
        this = FUN_1000d730(pvStack_c68,*(undefined4 *)(param_1 + 0x1d8),
                            *(undefined4 *)(param_1 + 0x1d4));
      }
      uStack_4 = 0xffffffff;
      *(undefined4 **)(param_1 + 0x23c) = this;
      if (param_1 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined4 *)(param_1 + 0x20);
      }
      FUN_1000e050(this,1,1,uVar3);
      FUN_1000d7d0(*(void **)(param_1 + 0x23c),auStack_c60);
      CString::operator=((CString *)(param_1 + 600),acStack_9a4);
      func_0x10009d90(auStack_16c);
      CString::operator=((CString *)(param_1 + 0x608),acStack_430);
      CString::CString((CString *)&stack0xfffff38c);
      puStack_8 = (undefined *)0x1;
      func_0x1000e350(&stack0xfffff38c);
      func_0x10009bb0(&stack0xfffff388);
      pvStack_c = (void *)0xffffffff;
      CString::~CString((CString *)&stack0xfffff388);
    }
    uVar5 = FUN_1000e160(*(void **)(param_1 + 0x23c),s_DP_USER_1001c4f8);
    *(uint *)(param_1 + 0x24c) = uVar5;
    uVar5 = FUN_1000e160(*(void **)(param_1 + 0x23c),s_DP_OPERATING_MODE_1001c268);
    *(uint *)(param_1 + 0x250) = uVar5;
    uVar5 = FUN_1000e160(*(void **)(param_1 + 0x23c),s_DP_SURVEY_MODE_1001c4e8);
    *(uint *)(param_1 + 0x298) = uVar5;
    uVar5 = FUN_1000e160(*(void **)(param_1 + 0x23c),s_AP_MAG_1001c4e0);
    *(uint *)(param_1 + 0x294) = uVar5;
    uVar5 = FUN_1000e160(*(void **)(param_1 + 0x23c),s_AP_WD_1001c4d8);
    *(uint *)(param_1 + 0x290) = uVar5;
    uVar5 = FUN_1000e160(*(void **)(param_1 + 0x23c),s_AP_STAGE_AT_Z_1001c4c8);
    *(uint *)(param_1 + 0x28c) = uVar5;
    uVar5 = FUN_1000e160(*(void **)(param_1 + 0x23c),s_AP_PIXEL_SIZE_1001c220);
    *(uint *)(param_1 + 0x288) = uVar5;
    uVar5 = FUN_1000e160(*(void **)(param_1 + 0x23c),s_AP_STAGE_GOTO_Z_1001c4b8);
    *(uint *)(param_1 + 0x284) = uVar5;
    uVar5 = FUN_1000e160(*(void **)(param_1 + 0x23c),s_DP_POINT_USING_1001c2ec);
    *(uint *)(param_1 + 0x280) = uVar5;
    uVar5 = FUN_1000e160(*(void **)(param_1 + 0x23c),s_DP_STAGE_IS_1001c4ac);
    *(uint *)(param_1 + 0x27c) = uVar5;
    uVar5 = FUN_1000e160(*(void **)(param_1 + 0x23c),s_AP_BRIGHTNESS_1001c49c);
    *(uint *)(param_1 + 0x278) = uVar5;
    uVar5 = FUN_1000e160(*(void **)(param_1 + 0x23c),s_DP_TRACK_Z_1001c490);
    *(uint *)(param_1 + 0x274) = uVar5;
    uVar5 = FUN_1000e160(*(void **)(param_1 + 0x23c),s_DP_STAGE_INIT_1001c2dc);
    *(uint *)(param_1 + 0x268) = uVar5;
    uVar5 = FUN_1000e160(*(void **)(param_1 + 0x23c),s_DP_OPTIBEAM_1001c484);
    *(uint *)(param_1 + 0x264) = uVar5;
    uVar5 = FUN_1000e160(*(void **)(param_1 + 0x23c),s_DP_AUTO_FUNCTION_1001c470);
    *(uint *)(param_1 + 0x260) = uVar5;
    if (param_1 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_1 + 0x20);
    }
    FUN_1000e050(*(void **)(param_1 + 0x23c),*(undefined4 *)(param_1 + 0x250),1,uVar3);
    if (param_1 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_1 + 0x20);
    }
    FUN_1000e050(*(void **)(param_1 + 0x23c),*(undefined4 *)(param_1 + 0x298),1,uVar3);
    if (param_1 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_1 + 0x20);
    }
    FUN_1000e050(*(void **)(param_1 + 0x23c),*(undefined4 *)(param_1 + 0x27c),1,uVar3);
    if (param_1 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_1 + 0x20);
    }
    FUN_1000e050(*(void **)(param_1 + 0x23c),*(undefined4 *)(param_1 + 0x28c),1,uVar3);
    if (param_1 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_1 + 0x20);
    }
    FUN_1000e050(*(void **)(param_1 + 0x23c),*(undefined4 *)(param_1 + 0x268),1,uVar3);
    if (param_1 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_1 + 0x20);
    }
    FUN_1000e050(*(void **)(param_1 + 0x23c),*(undefined4 *)(param_1 + 0x264),1,uVar3);
    if (param_1 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_1 + 0x20);
    }
    FUN_1000e050(*(void **)(param_1 + 0x23c),*(undefined4 *)(param_1 + 0x260),1,uVar3);
    *(undefined4 *)(param_1 + 0x5cc) = 0;
    UVar6 = FUN_1000a020(DAT_1001cc9c,0x1001c330,s_UseMinMag_1001c464);
    *(UINT *)(param_1 + 0x29c) = UVar6;
    UVar6 = FUN_1000a020(DAT_1001cc9c,0x1001c330,s_Survey_Auto_Focus_1001c450);
    *(UINT *)(param_1 + 0x2a4) = UVar6;
    UVar6 = FUN_1000a020(DAT_1001cc9c,0x1001c330,s_Save_Survey_1001c444);
    *(UINT *)(param_1 + 0x2a0) = UVar6;
    CString::CString((CString *)&stack0xfffff38c);
    pvStack_c = (void *)0x2;
    pCVar7 = (CString *)
             FUN_10009da0(DAT_1001cc9c,&stack0xfffff388,s_Survey_1001c330,
                          s_Survey_Pixel_Size_1001c42c);
    pvStack_c._0_1_ = 3;
    CString::operator=((CString *)&stack0xfffff38c,pCVar7);
    pvStack_c._0_1_ = 2;
    CString::~CString((CString *)&stack0xfffff388);
    dVar11 = atof(unaff_EBX);
    *(float *)(param_1 + 0x2a8) = (float)dVar11;
    pCVar7 = (CString *)
             FUN_10009da0(DAT_1001cc9c,&stack0xfffff388,s_Survey_1001c330,s_Survey_WD_1001c420);
    pvStack_c._0_1_ = 4;
    CString::operator=((CString *)&stack0xfffff38c,pCVar7);
    pvStack_c._0_1_ = 2;
    CString::~CString((CString *)&stack0xfffff388);
    dVar11 = atof(unaff_EBX);
    *(float *)(param_1 + 0x5c0) = (float)dVar11;
    pCVar7 = (CString *)
             FUN_10009da0(DAT_1001cc9c,&stack0xfffff388,s_Survey_1001c330,s_Survey_Z_1001c414);
    pvStack_c._0_1_ = 5;
    CString::operator=((CString *)&stack0xfffff38c,pCVar7);
    pvStack_c._0_1_ = 2;
    CString::~CString((CString *)&stack0xfffff388);
    dVar11 = atof(unaff_EBX);
    *(float *)(param_1 + 0x5dc) = (float)dVar11;
    UStack_c70 = FUN_1000a020(DAT_1001cc9c,0x1001c330,s_Survey_Brightness_1001c338);
    uStack_c6c = 0;
    *(float *)(param_1 + 0x5e0) = (float)UStack_c70;
    pCVar7 = (CString *)
             FUN_10009da0(DAT_1001cc9c,&stack0xfffff388,s_Survey_1001c330,
                          s_Resolution_Pixel_Size_1001c3fc);
    pvStack_c._0_1_ = 6;
    CString::operator=((CString *)&stack0xfffff38c,pCVar7);
    pvStack_c._0_1_ = 2;
    CString::~CString((CString *)&stack0xfffff388);
    dVar11 = atof(unaff_EBX);
    *(float *)(param_1 + 0x2ac) = (float)dVar11;
    pCVar7 = (CString *)
             FUN_10009da0(DAT_1001cc9c,&stack0xfffff388,s_Survey_1001c330,s_Resolution_WD_1001c3ec);
    pvStack_c._0_1_ = 7;
    CString::operator=((CString *)&stack0xfffff38c,pCVar7);
    pvStack_c._0_1_ = 2;
    CString::~CString((CString *)&stack0xfffff388);
    dVar11 = atof(unaff_EBX);
    *(float *)(param_1 + 0x5c4) = (float)dVar11;
    pCVar7 = (CString *)
             FUN_10009da0(DAT_1001cc9c,&stack0xfffff388,s_Survey_1001c330,s_Resolution_Z_1001c3dc);
    pvStack_c._0_1_ = 8;
    CString::operator=((CString *)&stack0xfffff38c,pCVar7);
    pvStack_c._0_1_ = 2;
    CString::~CString((CString *)&stack0xfffff388);
    dVar11 = atof(unaff_EBX);
    *(float *)(param_1 + 0x5e4) = (float)dVar11;
    UVar6 = FUN_1000a020(DAT_1001cc9c,0x1001c330,s_Resolution_Auto_Focus_1001c3c4);
    *(UINT *)(param_1 + 0x2b0) = UVar6;
    UStack_c70 = FUN_1000a020(DAT_1001cc9c,0x1001c330,s_Resolution_Brightness_1001c318);
    uStack_c6c = 0;
    *(float *)(param_1 + 0x5e8) = (float)UStack_c70;
    UVar6 = FUN_1000a020(DAT_1001cc9c,0x1001c330,s_Use_Survey_Macro_1001c3b0);
    *(UINT *)(param_1 + 0x2b4) = UVar6;
    UVar6 = FUN_1000a020(DAT_1001cc9c,0x1001c330,s_Use_Resolution_Macro_1001c398);
    *(UINT *)(param_1 + 0x2b8) = UVar6;
    UVar6 = FUN_1000a020(DAT_1001cc9c,0x1001c330,s_Use_Exit_Macro_1001c388);
    *(UINT *)(param_1 + 700) = UVar6;
    pCVar7 = (CString *)
             FUN_10009da0(DAT_1001cc9c,&stack0xfffff388,s_Survey_1001c330,s_Survey_Macro_1001c378);
    pvStack_c._0_1_ = 9;
    CString::operator=((CString *)&stack0xfffff38c,pCVar7);
    pvStack_c._0_1_ = 2;
    CString::~CString((CString *)&stack0xfffff388);
    uVar5 = 0xffffffff;
    pcVar9 = unaff_EBX;
    do {
      pcVar10 = pcVar9;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar10 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar9 = pcVar10 + -uVar5;
    pcVar10 = (char *)(param_1 + 0x2c0);
    for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar10 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar10 = pcVar10 + 1;
    }
    pCVar7 = (CString *)
             FUN_10009da0(DAT_1001cc9c,&stack0xfffff388,s_Survey_1001c330,
                          s_Resolution_Macro_1001c364);
    pvStack_c._0_1_ = 10;
    CString::operator=((CString *)&stack0xfffff38c,pCVar7);
    pvStack_c._0_1_ = 2;
    CString::~CString((CString *)&stack0xfffff388);
    uVar5 = 0xffffffff;
    pcVar9 = unaff_EBX;
    do {
      pcVar10 = pcVar9;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar10 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar9 = pcVar10 + -uVar5;
    pcVar10 = (char *)(param_1 + 0x3bf);
    for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar10 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar10 = pcVar10 + 1;
    }
    pCVar7 = (CString *)
             FUN_10009da0(DAT_1001cc9c,&UStack_c70,s_Survey_1001c330,s_Exit_Macro_1001c358);
    pvStack_c._0_1_ = 0xb;
    CString::operator=((CString *)&stack0xfffff38c,pCVar7);
    pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,2);
    CString::~CString((CString *)&UStack_c70);
    uVar5 = 0xffffffff;
    do {
      pcVar9 = unaff_EBX;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar9 = unaff_EBX + 1;
      cVar1 = *unaff_EBX;
      unaff_EBX = pcVar9;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar9 = pcVar9 + -uVar5;
    pcVar10 = (char *)(param_1 + 0x4be);
    for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar10 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar10 = pcVar10 + 1;
    }
    *(undefined4 *)(param_1 + 0x604) = 0;
    COleControl::FireEvent((COleControl *)0x0,param_1,(uchar *)0x6);
    *(undefined4 *)(param_1 + 0x5d0) = 0;
    uVar3 = *(undefined4 *)(param_1 + 0x1d0);
    uStack_4 = 0xffffffff;
    CString::~CString((CString *)&uStack_c6c);
  }
  ExceptionList = pvStack_c;
  return uVar3;
}


// ---- FUN_10007ad0 @ 10007ad0

undefined4 __thiscall FUN_10007ad0(void *this,undefined4 param_1)

{
  if ((*(int *)((int)this + 0x1d0) != 0) && (*(int *)((int)this + 0x248) == 0)) {
    *(undefined4 *)((int)this + 0x248) = param_1;
    if (*(void **)((int)this + 0x23c) != (void *)0x0) {
      FUN_1000df10(*(void **)((int)this + 0x23c),*(undefined4 *)((int)this + 0x24c),0x3f800000);
    }
    FUN_100050a0(this,1,0x65);
    return 1;
  }
  return 0;
}


// ---- FUN_10007b30 @ 10007b30

undefined4 __thiscall FUN_10007b30(void *this,undefined4 param_1)

{
  if ((*(int *)((int)this + 0x1d0) != 0) && (*(int *)((int)this + 0x248) == 0)) {
    *(undefined4 *)((int)this + 0x248) = param_1;
    *(undefined4 *)((int)this + 0x200) = 1;
    *(undefined4 *)((int)this + 0x1fc) = 1;
    if (*(void **)((int)this + 0x23c) != (void *)0x0) {
      FUN_1000df10(*(void **)((int)this + 0x23c),*(undefined4 *)((int)this + 0x24c),0x3f800000);
    }
    FUN_100050a0(this,2,0x66);
    return 1;
  }
  return 0;
}


// ---- FUN_10007ba0 @ 10007ba0

undefined4 __thiscall FUN_10007ba0(void *this,undefined4 param_1,int param_2,int param_3)

{
  if ((*(int *)((int)this + 0x1d0) != 0) && (*(int *)((int)this + 0x248) == 0)) {
    *(undefined4 *)((int)this + 0x248) = param_1;
    if (param_2 < 2) {
      param_2 = 1;
    }
    *(int *)((int)this + 0x1fc) = param_2;
    if (param_3 < 2) {
      param_3 = 1;
    }
    *(int *)((int)this + 0x200) = param_3;
    if (*(void **)((int)this + 0x23c) != (void *)0x0) {
      FUN_1000df10(*(void **)((int)this + 0x23c),*(undefined4 *)((int)this + 0x24c),0x3f800000);
    }
    FUN_100050a0(this,2,0x66);
    return 1;
  }
  return 0;
}


// ---- FUN_10007c20 @ 10007c20

undefined4 __thiscall FUN_10007c20(void *this,undefined4 param_1)

{
  if ((*(int *)((int)this + 0x1d0) != 0) && (*(int *)((int)this + 0x248) == 0)) {
    *(undefined4 *)((int)this + 0x248) = param_1;
    if (*(void **)((int)this + 0x23c) != (void *)0x0) {
      FUN_1000df10(*(void **)((int)this + 0x23c),*(undefined4 *)((int)this + 0x24c),0x3f800000);
    }
    FUN_100050a0(this,7,0x71);
    return 1;
  }
  return 0;
}


// ---- FUN_10007c80 @ 10007c80

undefined4 __thiscall FUN_10007c80(void *this,undefined4 param_1)

{
  if (*(int *)((int)this + 0x1d0) == 0) {
    return 0;
  }
  if (*(int *)((int)this + 0x244) == 0) {
    if (*(int *)((int)this + 0x248) != 0) {
      return 0;
    }
    *(undefined4 *)((int)this + 0x248) = param_1;
    if (*(void **)((int)this + 0x23c) != (void *)0x0) {
      FUN_1000df10(*(void **)((int)this + 0x23c),*(undefined4 *)((int)this + 0x24c),0x3f800000);
      FUN_100050a0(this,3,0x67);
      return 1;
    }
  }
  else {
    COleControl::FireEvent(this,(long)this,(uchar *)0x5);
    CWnd::SetWindowPos(this,(CWnd *)wndTop_exref,0,0,0x400,0x300,0x40);
  }
  FUN_100050a0(this,3,0x67);
  return 1;
}


// ---- FUN_10007d30 @ 10007d30

undefined4 __thiscall FUN_10007d30(void *this,undefined4 param_1)

{
  if (*(int *)((int)this + 0x1d0) == 0) {
    return 0;
  }
  if (*(int *)((int)this + 0x244) == 0) {
    if (*(int *)((int)this + 0x248) != 0) {
      return 0;
    }
    *(undefined4 *)((int)this + 0x248) = param_1;
    if (*(void **)((int)this + 0x23c) != (void *)0x0) {
      FUN_1000df10(*(void **)((int)this + 0x23c),*(undefined4 *)((int)this + 0x24c),0x3f800000);
      FUN_100050a0(this,4,0x68);
      return 1;
    }
  }
  else {
    COleControl::FireEvent(this,(long)this,(uchar *)0x5);
    CWnd::SetWindowPos(this,(CWnd *)wndTop_exref,0,0,0x400,0x300,0x40);
  }
  FUN_100050a0(this,4,0x68);
  return 1;
}


// ---- FUN_10007de0 @ 10007de0

undefined4 __thiscall FUN_10007de0(CWnd *param_1,char *param_2)

{
  undefined1 uVar1;
  CString *pCVar2;
  int iVar3;
  char *extraout_ECX;
  char *extraout_ECX_00;
  char *extraout_ECX_01;
  COleControl *this;
  char *extraout_ECX_02;
  char *extraout_ECX_03;
  char *extraout_ECX_04;
  char *pcVar4;
  char *extraout_ECX_05;
  char *extraout_ECX_06;
  COleControl *this_00;
  float10 fVar5;
  char *pcStack_20;
  CString aCStack_1c [4];
  char *pcStack_18;
  float fStack_14;
  undefined1 *puStack_10;
  void *pvStack_c;
  undefined *puStack_8;
  void *pvStack_4;
  
  pvStack_4 = (void *)0xffffffff;
  puStack_8 = &UNK_10014d30;
  pvStack_c = ExceptionList;
  if ((*(int *)(param_1 + 0x1d0) != 0) && (*(int *)(param_1 + 0x248) == 0)) {
    ExceptionList = &pvStack_c;
    CString::CString(aCStack_1c,&DAT_1001c718);
    pvStack_4 = (void *)0x0;
    CString::CString((CString *)&pcStack_20);
    pvStack_4._0_1_ = 1;
    if (*(void **)(param_1 + 0x23c) == (void *)0x0) {
      CString::LoadStringA((CString *)&pcStack_20,1);
      pcVar4 = extraout_ECX_00;
    }
    else {
      pCVar2 = FUN_1000d890(*(void **)(param_1 + 0x23c),(CString *)&pcStack_18,1);
      pvStack_4._0_1_ = 2;
      CString::operator=((CString *)&pcStack_20,pCVar2);
      pvStack_4._0_1_ = 1;
      CString::~CString((CString *)&pcStack_18);
      pcVar4 = extraout_ECX;
    }
    puStack_10 = &stack0xffffffd4;
    CString::CString((CString *)&stack0xffffffd4,s_DP_PIXEL_SIZE_1001c2fc);
    FUN_100051e0((int)param_1,pcVar4);
    iVar3 = ftol();
    if (iVar3 == 0) {
      CString::CString((CString *)&param_2);
      pvStack_4 = (void *)CONCAT31(pvStack_4._1_3_,3);
      if (*(void **)(param_1 + 0x23c) == (void *)0x0) {
        CString::LoadStringA((CString *)&param_2,0x6f);
      }
      else {
        pCVar2 = FUN_1000d890(*(void **)(param_1 + 0x23c),(CString *)&pcStack_18,0x6f);
        pvStack_4._0_1_ = 4;
        CString::operator=((CString *)&param_2,pCVar2);
        pvStack_4 = (void *)CONCAT31(pvStack_4._1_3_,3);
        CString::~CString((CString *)&pcStack_18);
      }
      CWnd::MessageBoxA(param_1,param_2,pcStack_20,0x30);
      *(undefined4 *)(param_1 + 0x240) = 0;
      COleControl::FireEvent(this,(long)param_1,(uchar *)0x4);
      if (*(void **)(param_1 + 0x23c) == (void *)0x0) {
        CString::LoadStringA((CString *)&fStack_14,0x6d);
      }
      else {
        pCVar2 = FUN_1000d890(*(void **)(param_1 + 0x23c),(CString *)&puStack_10,0x6d);
        param_2._0_1_ = (CString)0x5;
        CString::operator=((CString *)&fStack_14,pCVar2);
        param_2._0_1_ = (CString)0x3;
        CString::~CString((CString *)&puStack_10);
      }
    }
    else {
      puStack_10 = &stack0xffffffd4;
      pcVar4 = extraout_ECX_01;
      CString::CString((CString *)&stack0xffffffd4,s_DP_OPERATING_MODE_1001c268);
      fVar5 = FUN_100051e0((int)param_1,pcVar4);
      pcStack_18 = (char *)(float)fVar5;
      puStack_10 = &stack0xffffffd4;
      pcVar4 = extraout_ECX_02;
      CString::CString((CString *)&stack0xffffffd4,(char *)0x1001c534);
      FUN_100051e0((int)param_1,pcVar4);
      iVar3 = ftol();
      if ((iVar3 == 1) && (iVar3 = ftol(), iVar3 == 1)) {
        if (*(void **)(param_1 + 0x23c) == (void *)0x0) {
          CString::LoadStringA((CString *)&pcStack_20,1);
          pcVar4 = extraout_ECX_04;
        }
        else {
          pCVar2 = FUN_1000d890(*(void **)(param_1 + 0x23c),(CString *)&pcStack_18,1);
          pvStack_4._0_1_ = 9;
          CString::operator=((CString *)&pcStack_20,pCVar2);
          pvStack_4._0_1_ = 1;
          CString::~CString((CString *)&pcStack_18);
          pcVar4 = extraout_ECX_03;
        }
        puStack_10 = &stack0xffffffd4;
        CString::CString((CString *)&stack0xffffffd4,s_DP_STAGE_BACKLASH_1001c520);
        fVar5 = FUN_100051e0((int)param_1,pcVar4);
        pcStack_18 = (char *)(float)fVar5;
        puStack_10 = &stack0xffffffd4;
        pcVar4 = extraout_ECX_05;
        CString::CString((CString *)&stack0xffffffd4,s_DP_X_BACKLASH_1001c510);
        fVar5 = FUN_100051e0((int)param_1,pcVar4);
        fStack_14 = (float)fVar5;
        puStack_10 = &stack0xffffffd4;
        pcVar4 = extraout_ECX_06;
        CString::CString((CString *)&stack0xffffffd4,s_DP_Y_BACKLASH_1001c500);
        fVar5 = FUN_100051e0((int)param_1,pcVar4);
        puStack_10 = (undefined1 *)(float)fVar5;
        iVar3 = ftol();
        if (((iVar3 == 0) || (iVar3 = ftol(), iVar3 == 0)) || (iVar3 = ftol(), iVar3 == 0)) {
          CString::CString((CString *)&pcStack_18);
          pvStack_4._0_1_ = 10;
          uVar1 = pvStack_4._0_1_;
          pvStack_4._0_1_ = 10;
          if (*(void **)(param_1 + 0x23c) == (void *)0x0) {
            pvStack_4._0_1_ = uVar1;
            CString::LoadStringA((CString *)&pcStack_18,0x8009);
          }
          else {
            pCVar2 = FUN_1000d890(*(void **)(param_1 + 0x23c),(CString *)&puStack_10,0x8009);
            pvStack_4._0_1_ = 0xb;
            CString::operator=((CString *)&pcStack_18,pCVar2);
            pvStack_4._0_1_ = 10;
            CString::~CString((CString *)&puStack_10);
          }
          CWnd::MessageBoxA(param_1,pcStack_18,pcStack_20,0x30);
          pvStack_4._0_1_ = 1;
          CString::~CString((CString *)&pcStack_18);
        }
        CWnd::SetWindowPos(param_1,(CWnd *)wndTop_exref,0,0,0x200,0x300,0x40);
        *(char **)(param_1 + 0x248) = param_2;
        if (*(void **)(param_1 + 0x23c) != (void *)0x0) {
          FUN_1000df10(*(void **)(param_1 + 0x23c),*(undefined4 *)(param_1 + 0x24c),0x3f800000);
        }
        FUN_100050a0(param_1,5,0x69);
        *(undefined4 *)(param_1 + 0x244) = 1;
        pvStack_4 = (void *)((uint)pvStack_4._1_3_ << 8);
        CString::~CString((CString *)&pcStack_20);
        pvStack_4 = (void *)0xffffffff;
        CString::~CString(aCStack_1c);
        ExceptionList = pvStack_c;
        return 1;
      }
      CString::CString((CString *)&param_2);
      pvStack_4 = (void *)CONCAT31(pvStack_4._1_3_,6);
      if (*(void **)(param_1 + 0x23c) == (void *)0x0) {
        CString::LoadStringA((CString *)&param_2,0x8008);
      }
      else {
        pCVar2 = FUN_1000d890(*(void **)(param_1 + 0x23c),(CString *)&puStack_10,0x8008);
        pvStack_4._0_1_ = 7;
        CString::operator=((CString *)&param_2,pCVar2);
        pvStack_4 = (void *)CONCAT31(pvStack_4._1_3_,6);
        CString::~CString((CString *)&puStack_10);
      }
      CWnd::MessageBoxA(param_1,param_2,pcStack_20,0x30);
      *(undefined4 *)(param_1 + 0x240) = 0;
      COleControl::FireEvent(this_00,(long)param_1,(uchar *)0x4);
      if (*(void **)(param_1 + 0x23c) == (void *)0x0) {
        CString::LoadStringA((CString *)&fStack_14,0x6d);
      }
      else {
        pCVar2 = FUN_1000d890(*(void **)(param_1 + 0x23c),(CString *)&puStack_8,0x6d);
        param_2._0_1_ = (CString)0x8;
        CString::operator=((CString *)&fStack_14,pCVar2);
        param_2 = (char *)CONCAT31(param_2._1_3_,6);
        CString::~CString((CString *)&puStack_8);
      }
    }
    param_2._0_1_ = (CString)0x1;
    CString::~CString((CString *)&stack0x0000000c);
    param_2 = (char *)((uint)param_2._1_3_ << 8);
    CString::~CString((CString *)&pcStack_18);
    param_2 = (char *)0xffffffff;
    CString::~CString((CString *)&fStack_14);
  }
  ExceptionList = pvStack_4;
  return 0;
}


// ---- FUN_10008290 @ 10008290

undefined4 __thiscall FUN_10008290(void *this,undefined4 param_1)

{
  if ((*(int *)((int)this + 0x1d0) != 0) && (*(int *)((int)this + 0x248) == 0)) {
    *(undefined4 *)((int)this + 0x248) = param_1;
    if (*(void **)((int)this + 0x23c) != (void *)0x0) {
      FUN_1000df10(*(void **)((int)this + 0x23c),*(undefined4 *)((int)this + 0x24c),0x3f800000);
    }
    FUN_100050a0(this,6,0x6a);
    return 1;
  }
  return 0;
}


// ---- FUN_100082f0 @ 100082f0

void __thiscall FUN_100082f0(void *this,LPPOINT param_1)

{
  FUN_10009630(this,param_1);
  if (*(void **)((int)this + 0x23c) != (void *)0x0) {
    FUN_1000df10(*(void **)((int)this + 0x23c),*(undefined4 *)((int)this + 0x24c),0);
  }
  return;
}


// ---- FUN_10008320 @ 10008320

void __thiscall FUN_10008320(void *this,tagRECT *param_1)

{
  FUN_10009650(this,param_1);
  if (*(void **)((int)this + 0x23c) != (void *)0x0) {
    FUN_1000df10(*(void **)((int)this + 0x23c),*(undefined4 *)((int)this + 0x24c),0);
  }
  return;
}


// ---- FUN_10008350 @ 10008350

void __thiscall FUN_10008350(void *this,LPPOINT param_1)

{
  void *unaff_EDI;
  float local_8;
  char *local_4;
  
  FUN_10008c90(this,unaff_EDI);
  FUN_10009630(this,param_1);
  local_4 = (char *)0x0;
  local_8 = 0.0;
  FUN_10005270(this,param_1->x,(char *)param_1->y,(float *)&local_4,&local_8);
  FUN_100054c0(this,local_4,local_8);
  if (*(void **)((int)this + 0x23c) != (void *)0x0) {
    FUN_1000df10(*(void **)((int)this + 0x23c),*(undefined4 *)((int)this + 0x24c),0);
  }
  return;
}


// ---- FUN_100083d0 @ 100083d0

void __thiscall FUN_100083d0(void *this,int *param_1)

{
  void *this_00;
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  LPARAM LVar4;
  uint uVar5;
  char *extraout_ECX;
  char *pcVar6;
  char *extraout_ECX_00;
  void *unaff_EDI;
  float10 fVar7;
  int *local_14;
  float local_10;
  undefined1 *local_c;
  tagPOINT local_8;
  
  FUN_10008c90(this,unaff_EDI);
  piVar1 = param_1;
  local_8.x = (*param_1 + param_1[2]) / 2;
  local_8.y = (param_1[3] + param_1[1]) / 2;
  if ((local_8.x == 0) && ((char *)local_8.y == (char *)0x0)) {
    *(undefined4 *)((int)this + 0x240) = 0;
    pcVar6 = (char *)0x0;
  }
  else {
    FUN_10009630(this,&local_8);
    local_14 = (int *)0x0;
    param_1 = (int *)0x0;
    FUN_10005270(this,local_8.x,(char *)local_8.y,(float *)&local_14,(float *)&param_1);
    FUN_100054c0(this,(char *)local_14,(float)param_1);
    pcVar6 = extraout_ECX;
  }
  if (*(int *)((int)this + 0x240) == 0) goto LAB_10008579;
  param_1 = (int *)&stack0xffffffe0;
  CString::CString((CString *)&stack0xffffffe0,s_DP_OPERATING_MODE_1001c268);
  FUN_100051e0((int)this,pcVar6);
  iVar2 = ftol();
  if (iVar2 == 1) {
    param_1 = (int *)0x200;
LAB_100084b0:
    local_14 = (int *)0x300;
  }
  else {
    if (iVar2 != 2) {
      param_1 = (int *)0x400;
      goto LAB_100084b0;
    }
    param_1 = (int *)0x200;
    local_14 = (int *)0x180;
  }
  local_10 = (float)(piVar1[2] - *piVar1);
  if (((int)local_10 < 0xb) ||
     (puVar3 = (undefined1 *)(piVar1[3] - piVar1[1]), local_c = puVar3, (int)puVar3 < 0xb)) {
    MessageBeep(0x30);
  }
  else {
    local_c = &stack0xffffffe0;
    param_1 = (int *)((float)(int)param_1 / (float)(int)local_10);
    local_14 = (int *)((float)(int)local_14 / (float)(int)puVar3);
    pcVar6 = extraout_ECX_00;
    CString::CString((CString *)&stack0xffffffe0,s_AP_MAG_1001c4e0);
    fVar7 = FUN_100051e0((int)this,pcVar6);
    this_00 = *(void **)((int)this + 0x23c);
    local_10 = (float)fVar7;
    if (this_00 != (void *)0x0) {
      LVar4 = ftol();
      FUN_1000d7b0(this_00,LVar4);
      uVar5 = FUN_1000e160(*(void **)((int)this + 0x23c),s_AP_MAG_1001c4e0);
      piVar1 = local_14;
      if ((float)param_1 < (float)local_14) {
        piVar1 = param_1;
      }
      FUN_1000df10(*(void **)((int)this + 0x23c),uVar5,(float)piVar1 * local_10);
    }
  }
LAB_10008579:
  if (*(void **)((int)this + 0x23c) != (void *)0x0) {
    FUN_1000df10(*(void **)((int)this + 0x23c),*(undefined4 *)((int)this + 0x24c),0);
  }
  return;
}


// ---- FUN_100085a0 @ 100085a0

CMenu * __thiscall FUN_100085a0(void *this,byte param_1)

{
  FUN_100085c0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_100085c0 @ 100085c0

void __fastcall FUN_100085c0(CMenu *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10014d48;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = &PTR_LAB_10017028;
  local_4 = 0;
  CMenu::DestroyMenu(param_1);
  *(undefined ***)param_1 = &PTR_GetRuntimeClass_10016fdc;
  ExceptionList = local_c;
  return;
}


// ---- FUN_10008610 @ 10008610

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10008610(void *this,LPPOINT param_1)

{
  void *this_00;
  LPPOINT ptVar1;
  uint uVar2;
  float *pfVar3;
  char *extraout_ECX;
  int iVar4;
  float *pfVar5;
  float10 fVar6;
  char *pcVar7;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  undefined4 local_38;
  undefined4 local_34;
  float local_30 [6];
  undefined4 local_18 [6];
  
  ptVar1 = param_1;
  FUN_10009630(this,param_1);
  param_1 = (LPPOINT)&stack0xffffff9c;
  pcVar7 = extraout_ECX;
  CString::CString((CString *)&stack0xffffff9c,s_DP_STAGE_IS_1001c4ac);
  fVar6 = FUN_100051e0((int)this,pcVar7);
  this_00 = *(void **)((int)this + 0x23c);
  if (fVar6 == (float10)_DAT_10017020) {
    if (this_00 != (void *)0x0) {
      FUN_1000de80(this_00,&local_44,&local_40,&local_34,&local_38,&local_4c,&param_1);
    }
    local_48 = (float)(0x100 - ptVar1->x);
    local_54 = 0.0;
    local_50 = 0.0;
    FUN_10005410((float)(int)local_48 * (float)param_1,(float)(0x180 - ptVar1->y) * (float)param_1,
                 -local_4c,&local_54,&local_50);
    local_48 = local_54 + local_44;
    uVar2 = 0;
    local_3c = local_40 - local_50;
    if (*(void **)((int)this + 0x23c) != (void *)0x0) {
      uVar2 = FUN_1000e160(*(void **)((int)this + 0x23c),s_AP_BEAMSHIFT_X_1001c2cc);
    }
    if (*(void **)((int)this + 0x23c) != (void *)0x0) {
      FUN_1000de20(*(void **)((int)this + 0x23c),uVar2,0,0);
    }
    if (*(void **)((int)this + 0x23c) != (void *)0x0) {
      pfVar3 = (float *)FUN_1000dd90(*(void **)((int)this + 0x23c),local_18);
      pfVar5 = local_30;
      for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
        *pfVar5 = *pfVar3;
        pfVar3 = pfVar3 + 1;
        pfVar5 = pfVar5 + 1;
      }
    }
    local_30[1] = local_3c;
    local_30[0] = local_48;
    if (*(void **)((int)this + 0x23c) != (void *)0x0) {
      FUN_1000dde0(*(void **)((int)this + 0x23c),local_30);
    }
  }
  else if (this_00 != (void *)0x0) {
    uVar2 = FUN_1000e160(this_00,s_CMD_STAGE_ABORT_1001c53c);
    FUN_1000e1d0(*(void **)((int)this + 0x23c),uVar2);
  }
  if (*(void **)((int)this + 0x23c) != (void *)0x0) {
    FUN_1000df10(*(void **)((int)this + 0x23c),*(undefined4 *)((int)this + 0x24c),0);
  }
  return;
}


// ---- FUN_100087a0 @ 100087a0

void __thiscall FUN_100087a0(void *this,LPPOINT param_1)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  
  pcVar3 = this;
  CString::CString((CString *)&stack0xfffffff0,s_DP_DYNSTIG_1001c564);
  FUN_100051e0((int)this,pcVar3);
  iVar1 = ftol();
  if (iVar1 == 1) {
    FUN_10009630(this,param_1);
    if (*(void **)((int)this + 0x23c) != (void *)0x0) {
      uVar2 = FUN_1000e160(*(void **)((int)this + 0x23c),s_AP_MINSTIG_X_1001c554);
      FUN_1000de20(*(void **)((int)this + 0x23c),uVar2,(float)param_1->x,(float)param_1->y);
      uVar2 = FUN_1000e160(*(void **)((int)this + 0x23c),s_CMD_OK_1001c54c);
      FUN_1000e1d0(*(void **)((int)this + 0x23c),uVar2);
    }
  }
  if (*(void **)((int)this + 0x23c) != (void *)0x0) {
    FUN_1000df10(*(void **)((int)this + 0x23c),*(undefined4 *)((int)this + 0x24c),0);
  }
  return;
}


// ---- FUN_10008840 @ 10008840

void __thiscall
FUN_10008840(void *this,int param_1,undefined4 param_2,void *param_3,undefined4 param_4,
            undefined4 param_5)

{
  CString *pCVar1;
  COleControl *this_00;
  COleControl *extraout_ECX;
  COleControl *extraout_ECX_00;
  COleControl *extraout_ECX_01;
  COleControl *pCVar2;
  void *local_c;
  undefined1 *local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  local_8 = &LAB_10014d70;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 500) = 0;
  COleControl::InvalidateControl(this,(tagRECT *)((int)this + 0x21c),1);
  COleControl::FireEvent(this_00,(long)this,(uchar *)0x4);
  CString::CString((CString *)&local_c);
  param_1 = 0;
  if (*(void **)((int)this + 0x23c) == (void *)0x0) {
    CString::LoadStringA((CString *)&local_c,0x6c);
    pCVar2 = extraout_ECX_00;
  }
  else {
    pCVar1 = FUN_1000d890(*(void **)((int)this + 0x23c),(CString *)&local_8,0x6c);
    param_1 = CONCAT31(param_1._1_3_,1);
    CString::operator=((CString *)&local_c,pCVar1);
    param_1 = param_1 & 0xffffff00;
    CString::~CString((CString *)&local_8);
    pCVar2 = extraout_ECX;
  }
  COleControl::FireEvent(pCVar2,(long)this,(uchar *)0x2);
  *(undefined4 *)((int)this + 0x248) = 0;
  pCVar2 = (COleControl *)0x0;
  if (*(void **)((int)this + 0x23c) != (void *)0x0) {
    FUN_1000df10(*(void **)((int)this + 0x23c),*(undefined4 *)((int)this + 0x24c),0);
    pCVar2 = extraout_ECX_01;
  }
  *(undefined4 *)((int)this + 0x244) = 0;
  COleControl::FireEvent(pCVar2,(long)this,(uchar *)0x5);
  param_5 = 0xffffffff;
  local_8 = (undefined1 *)0x1000892f;
  CString::~CString((CString *)&param_1);
  ExceptionList = param_3;
  return;
}


// ---- FUN_10008960 @ 10008960

void __fastcall FUN_10008960(void *param_1)

{
  float fStack_10;
  char *pcStack_c;
  tagPOINT tStack_8;
  
  GetCursorPos(&tStack_8);
  pcStack_c = (char *)0x0;
  fStack_10 = 0.0;
  FUN_10005270(param_1,tStack_8.x,(char *)tStack_8.y,(float *)&pcStack_c,&fStack_10);
  FUN_100054c0(param_1,pcStack_c,fStack_10);
  return;
}


// ---- FUN_100089c0 @ 100089c0

void __thiscall FUN_100089c0(void *param_1,char *param_2,float param_3)

{
  FUN_100054c0(param_1,param_2,param_3);
  return;
}


// ---- FUN_100089e0 @ 100089e0

void __fastcall FUN_100089e0(CWnd *param_1)

{
  COleControl::FireEvent((COleControl *)param_1,(long)param_1,(uchar *)0x5);
  CWnd::SetWindowPos(param_1,(CWnd *)wndTop_exref,0,0,0x200,0x300,0x40);
  FUN_100050a0(param_1,5,0x69);
  return;
}


// ---- FUN_10008a20 @ 10008a20

void __fastcall FUN_10008a20(CWnd *param_1)

{
  void *this;
  CDialog *pCVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10014d8a;
  local_c = ExceptionList;
  if (*(CWnd **)(param_1 + 0x60c) == (CWnd *)0x0) {
    ExceptionList = &local_c;
    this = operator_new(0x270);
    local_4 = 0;
    if (this == (void *)0x0) {
      pCVar1 = (CDialog *)0x0;
    }
    else {
      pCVar1 = FUN_10011450(this,param_1);
    }
    *(CDialog **)(param_1 + 0x60c) = pCVar1;
    *(undefined4 *)(pCVar1 + 0x88) = *(undefined4 *)(param_1 + 0x23c);
    *(undefined4 *)(*(int *)(param_1 + 0x60c) + 0x7c) = *(undefined4 *)(param_1 + 0x1d4);
    *(CWnd **)(*(int *)(param_1 + 0x60c) + 0x78) = param_1 + 0x29c;
    local_4 = 0xffffffff;
    FUN_10011bc0(*(void **)(param_1 + 0x60c),0xcd,param_1);
    ExceptionList = local_c;
    return;
  }
  ExceptionList = &local_c;
  CWnd::ShowWindow(*(CWnd **)(param_1 + 0x60c),9);
  FUN_10011eb0(*(CWnd **)(param_1 + 0x60c));
  ExceptionList = local_c;
  return;
}


// ---- FUN_10008bf0 @ 10008bf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_10008bf0(int param_1,float param_2)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar2 = FUN_1000d9f0(*(void **)(param_1 + 0x23c),*(undefined4 *)(param_1 + 0x294));
  fVar3 = FUN_1000d9f0(*(void **)(param_1 + 0x23c),*(undefined4 *)(param_1 + 0x288));
  fVar2 = (fVar3 * (float10)(float)fVar2) / (float10)param_2;
  if ((float10)_DAT_10017058 < fVar2) {
    iVar1 = ftol();
    fVar2 = (float10)iVar1;
  }
  return fVar2;
}


// ---- FUN_10008c50 @ 10008c50

float10 __thiscall FUN_10008c50(int param_1,float param_2)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = FUN_1000d9f0(*(void **)(param_1 + 0x23c),*(undefined4 *)(param_1 + 0x294));
  fVar2 = FUN_1000d9f0(*(void **)(param_1 + 0x23c),*(undefined4 *)(param_1 + 0x288));
  return (fVar2 * (float10)(float)fVar1) / (float10)param_2;
}


// ---- FUN_10008c90 @ 10008c90

void __thiscall FUN_10008c90(void *this,void *param_1)

{
  CString *this_00;
  COleControl *this_01;
  CString *this_02;
  float10 fVar1;
  undefined4 uStack0000000c;
  char local_4 [4];
  
  local_4[0] = -1;
  local_4[1] = -1;
  local_4[2] = -1;
  local_4[3] = -1;
  ExceptionList = &stack0xfffffff4;
  if (*(int *)((int)this + 0x604) == 1) {
    fVar1 = FUN_1000d9f0(*(void **)((int)this + 0x23c),*(undefined4 *)((int)this + 0x278));
    *(float *)((int)this + 0x5e0) = (float)fVar1;
    if ((*(int *)((int)this + 0x604) == 1) && (*(int *)((int)this + 0x2a0) != 0)) {
      fVar1 = FUN_1000d9f0(*(void **)((int)this + 0x23c),*(undefined4 *)((int)this + 0x294));
      fVar1 = FUN_10008c50((int)this,(float)fVar1);
      *(float *)((int)this + 0x2a8) = (float)fVar1;
      CString::CString((CString *)&stack0xfffffff0);
      local_4[0] = '\0';
      local_4[1] = '\0';
      local_4[2] = '\0';
      local_4[3] = '\0';
      CString::Format(this_00,&stack0xfffffff0);
      FUN_10009e80(DAT_1001cc9c,(BYTE *)s_Survey_1001c330,s_Survey_Pixel_Size_1001c42c);
      fVar1 = FUN_1000d9f0(*(void **)((int)this + 0x23c),*(undefined4 *)((int)this + 0x290));
      *(float *)((int)this + 0x5c0) = (float)fVar1;
      COleControl::FireEvent(this_01,(long)this,(uchar *)0x7);
      CString::Format(this_02,local_4);
      FUN_10009e80(DAT_1001cc9c,(BYTE *)s_Survey_1001c330,s_Survey_WD_1001c420);
      fVar1 = FUN_1000d9f0(*(void **)((int)this + 0x23c),*(undefined4 *)((int)this + 0x28c));
      *(float *)((int)this + 0x5dc) = (float)fVar1;
      uStack0000000c = 0xffffffff;
      CString::~CString((CString *)&stack0x00000000);
    }
  }
  ExceptionList = param_1;
  return;
}


// ---- FUN_10008e00 @ 10008e00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10008e00(int param_1)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  COleControl *extraout_ECX;
  COleControl *extraout_ECX_00;
  COleControl *this;
  float10 fVar4;
  float local_10;
  float local_c;
  float local_8;
  undefined4 local_4;
  
  FUN_1000db80(*(void **)(param_1 + 0x23c),*(undefined4 *)(param_1 + 0x290),&local_10,&local_4);
  uVar3 = FUN_1000e160(*(void **)(param_1 + 0x23c),s_AP_STAGE_HIGH_Z_1001c578);
  fVar4 = FUN_1000d9f0(*(void **)(param_1 + 0x23c),uVar3);
  fVar1 = (float)(fVar4 - (float10)_DAT_1001705c);
  if (*(float *)(param_1 + 0x5c4) == _DAT_10017020) {
    *(undefined4 *)(param_1 + 0x5c4) = *(undefined4 *)(param_1 + 0x5f0);
  }
  if (*(float *)(param_1 + 0x5c4) < local_10) {
    *(float *)(param_1 + 0x5c4) = local_10;
  }
  if (*(float *)(param_1 + 0x5c0) < *(float *)(param_1 + 0x5c4)) {
    *(undefined4 *)(param_1 + 0x5c4) = *(undefined4 *)(param_1 + 0x5c0);
  }
  fVar4 = FUN_1000d9f0(*(void **)(param_1 + 0x23c),*(undefined4 *)(param_1 + 0x290));
  local_8 = (float)fVar4;
  fVar4 = FUN_1000d9f0(*(void **)(param_1 + 0x23c),*(undefined4 *)(param_1 + 0x28c));
  local_c = (float)fVar4;
  fVar2 = (local_8 - *(float *)(param_1 + 0x5c4)) + local_c;
  if (fVar1 < fVar2) {
    *(float *)(param_1 + 0x5c4) = local_8 - (fVar1 - local_c);
    fVar2 = fVar1;
  }
  *(float *)(param_1 + 0x5e4) = fVar2;
  this = extraout_ECX;
  if (*(float *)(param_1 + 0x2ac) == _DAT_10017020) {
    fVar4 = FUN_10008c50(param_1,*(float *)(param_1 + 0x5ec));
    *(float *)(param_1 + 0x2ac) = (float)fVar4;
    this = extraout_ECX_00;
  }
  COleControl::FireEvent(this,param_1,(uchar *)0x8);
  FUN_100093d0(param_1);
  return;
}


// ---- FUN_10008f60 @ 10008f60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10008f60(void *param_1)

{
  uint uVar1;
  COleControl *this;
  float10 fVar2;
  float fVar3;
  
  if (*(int *)((int)param_1 + 0x604) == 2) {
    fVar2 = FUN_1000d9f0(*(void **)((int)param_1 + 0x23c),*(undefined4 *)((int)param_1 + 0x278));
    *(float *)((int)param_1 + 0x5e8) = (float)fVar2;
    FUN_10009410((int)param_1);
    FUN_10009130(param_1,9,*(undefined4 *)((int)param_1 + 0x5dc));
    FUN_1000df10(*(void **)((int)param_1 + 0x23c),*(undefined4 *)((int)param_1 + 0x274),0x3f800000);
    if (*(int *)((int)param_1 + 0x2a4) != 0) {
      *(undefined4 *)((int)param_1 + 0x5d0) = 1;
    }
    FUN_1000df10(*(void **)((int)param_1 + 0x23c),*(undefined4 *)((int)param_1 + 0x284),
                 *(undefined4 *)((int)param_1 + 0x5dc));
    if (_DAT_10017020 < *(float *)((int)param_1 + 0x5e0)) {
      FUN_1000df10(*(void **)((int)param_1 + 0x23c),*(undefined4 *)((int)param_1 + 0x278),
                   *(float *)((int)param_1 + 0x5e0));
    }
    if (*(int *)((int)param_1 + 0x29c) == 0) {
      if (*(float *)((int)param_1 + 0x2a8) == _DAT_10017020) {
        uVar1 = *(uint *)((int)param_1 + 0x294);
        fVar3 = 0.0;
      }
      else {
        fVar2 = FUN_10008bf0((int)param_1,*(float *)((int)param_1 + 0x2a8));
        uVar1 = *(uint *)((int)param_1 + 0x294);
        fVar3 = (float)fVar2;
      }
    }
    else {
      fVar3 = 1.0;
      uVar1 = FUN_1000e160(*(void **)((int)param_1 + 0x23c),s_DP_LOW_MAG_1001c34c);
    }
    FUN_1000df10(*(void **)((int)param_1 + 0x23c),uVar1,fVar3);
    *(undefined4 *)((int)param_1 + 0x604) = 1;
    COleControl::FireEvent(this,(long)param_1,(uchar *)0x6);
    FUN_100093d0((int)param_1);
  }
  return;
}


// ---- FUN_100090b0 @ 100090b0

void __fastcall FUN_100090b0(COleControl *param_1)

{
  undefined4 uVar1;
  COleControl *extraout_ECX;
  COleControl *this;
  
  this = param_1;
  if (*(int *)(param_1 + 0x604) != 0) {
    FUN_1000d9f0(*(void **)(param_1 + 0x23c),*(undefined4 *)(param_1 + 0x280));
    uVar1 = ftol();
    *(undefined4 *)(param_1 + 0x5fc) = uVar1;
    FUN_1000df10(*(void **)(param_1 + 0x23c),*(undefined4 *)(param_1 + 0x274),0);
    this = extraout_ECX;
  }
  *(undefined4 *)(param_1 + 0x604) = 0;
  COleControl::FireEvent(this,(long)param_1,(uchar *)0x6);
  FUN_1000df10(*(void **)(param_1 + 0x23c),*(undefined4 *)(param_1 + 0x298),0);
  FUN_100093d0((int)param_1);
  return;
}


// ---- FUN_10009130 @ 10009130

void __thiscall FUN_10009130(void *this,WPARAM param_1,undefined4 param_2)

{
  CString *this_00;
  UINT_PTR UVar1;
  float10 fVar2;
  char *pcVar3;
  
  this_00 = (CString *)((int)this + 0x25c);
  *(undefined4 *)((int)this + 0x5d4) = 0;
  *(undefined4 *)((int)this + 0x5d8) = 0;
  CString::operator=(this_00,&DAT_1001c718);
  if (param_1 == 9) {
    if (*(int *)((int)this + 0x2b4) == 0) goto LAB_100091aa;
    pcVar3 = (char *)((int)this + 0x2c0);
  }
  else if (param_1 == 10) {
    if (*(int *)((int)this + 0x2b8) == 0) goto LAB_100091aa;
    pcVar3 = (char *)((int)this + 0x3bf);
  }
  else {
    if ((param_1 != 0xb) || (*(int *)((int)this + 700) == 0)) goto LAB_100091aa;
    pcVar3 = (char *)((int)this + 0x4be);
  }
  CString::operator=(this_00,pcVar3);
LAB_100091aa:
  if (*(int *)(*(int *)this_00 + -8) != 0) {
    if (*(int *)((int)this + 0x5d0) == 0) {
      *(undefined4 *)((int)this + 0x5d4) = 1;
    }
    else {
      *(undefined4 *)((int)this + 0x5d8) = 1;
    }
  }
  UVar1 = SetTimer(*(HWND *)((int)this + 0x20),0,0x2ee,(TIMERPROC)0x0);
  if (UVar1 != 0) {
    *(undefined4 *)((int)this + 0x5cc) = 1;
    fVar2 = FUN_1000d9f0(*(void **)((int)this + 0x23c),*(undefined4 *)((int)this + 0x28c));
    *(float *)((int)this + 0x270) = (float)fVar2;
    *(undefined4 *)((int)this + 0x26c) = param_2;
    FUN_1000e5a0(*(void **)((int)this + 0x23c),param_1);
    FUN_1000e5c0(*(void **)((int)this + 0x23c),0);
  }
  return;
}


// ---- FUN_10009230 @ 10009230

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10009230(void *this,UINT_PTR param_1)

{
  float10 fVar1;
  
  KillTimer(*(HWND *)((int)this + 0x20),param_1);
  if (param_1 == 0) {
    *(undefined4 *)((int)this + 0x5cc) = 0;
    fVar1 = FUN_1000d9f0(*(void **)((int)this + 0x23c),*(undefined4 *)((int)this + 0x27c));
    if (fVar1 == (float10)_DAT_10017020) {
      FUN_100092d0(this);
      CWnd::Default(this);
      return;
    }
  }
  else if (param_1 == 1) {
    ClipCursor((RECT *)0x0);
    COleControl::ReleaseCapture(this);
    SetCursor(*(HCURSOR *)((int)this + 0x1c0));
    *(undefined4 *)((int)this + 500) = 0;
    COleControl::InvalidateControl(this,(tagRECT *)((int)this + 0x21c),1);
  }
  CWnd::Default(this);
  return;
}


// ---- FUN_100092d0 @ 100092d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_100092d0(void *param_1)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (*(float *)((int)param_1 + 0x270) != _DAT_10017020) {
    *(undefined4 *)((int)param_1 + 0x270) = 0;
    FUN_1000e5a0(*(void **)((int)param_1 + 0x23c),0);
  }
  if ((*(int *)((int)param_1 + 0x5d0) != 0) && (*(int *)((int)param_1 + 0x604) != 0)) {
    uVar2 = FUN_1000e160(*(void **)((int)param_1 + 0x23c),s_CMD_AUTO_FOCUS_FINE_1001c588);
    iVar3 = FUN_1000e0b0(*(void **)((int)param_1 + 0x23c),uVar2);
    if (iVar3 == 0) {
      if (*(int *)((int)param_1 + 0x5d8) != 0) {
        FUN_10006d80(param_1,*(int *)((int)param_1 + 0x260),0);
      }
    }
    else {
      uVar2 = FUN_1000e160(*(void **)((int)param_1 + 0x23c),s_CMD_AUTO_FOCUS_FINE_1001c588);
      FUN_1000e1d0(*(void **)((int)param_1 + 0x23c),uVar2);
    }
  }
  *(undefined4 *)((int)param_1 + 0x5d0) = 0;
  if ((*(int *)((int)param_1 + 0x5d4) != 0) &&
     (pcVar1 = *(char **)((int)param_1 + 0x25c), *(int *)(pcVar1 + -8) != 0)) {
    uVar4 = FUN_1000e5e0(*(int *)((int)param_1 + 0x23c));
    FUN_1000e2e0(*(void **)((int)param_1 + 0x23c),pcVar1,uVar4);
    *(undefined4 *)((int)param_1 + 0x5d4) = 0;
  }
  if (*(int *)((int)param_1 + 0x604) == 3) {
    *(undefined4 *)((int)param_1 + 0x604) = 0;
    COleControl::FireEvent((COleControl *)0x0,(long)param_1,(uchar *)0x6);
    FUN_100093d0((int)param_1);
  }
  return;
}


// ---- FUN_100093d0 @ 100093d0

void __fastcall FUN_100093d0(int param_1)

{
  BOOL BVar1;
  
  if (*(int *)(param_1 + 0x60c) != 0) {
    BVar1 = IsWindow(*(HWND *)(*(int *)(param_1 + 0x60c) + 0x20));
    if (BVar1 != 0) {
      BVar1 = IsWindowVisible(*(HWND *)(*(int *)(param_1 + 0x60c) + 0x20));
      if (BVar1 != 0) {
        FUN_10011eb0(*(CWnd **)(param_1 + 0x60c));
      }
    }
  }
  return;
}


// ---- FUN_10009410 @ 10009410

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10009410(int param_1)

{
  uint uVar1;
  COleControl *extraout_ECX;
  COleControl *this;
  float10 fVar2;
  float10 fVar3;
  COleControl *local_8;
  undefined4 local_4;
  
  FUN_1000db80(*(void **)(param_1 + 0x23c),*(undefined4 *)(param_1 + 0x290),&local_4,&local_8);
  uVar1 = FUN_1000e160(*(void **)(param_1 + 0x23c),s_AP_STAGE_LOW_Z_1001c59c);
  fVar2 = FUN_1000d9f0(*(void **)(param_1 + 0x23c),uVar1);
  fVar2 = fVar2 + (float10)_DAT_1001705c;
  if (*(float *)(param_1 + 0x5c0) == _DAT_10017020) {
    *(COleControl **)(param_1 + 0x5c0) = local_8;
  }
  this = extraout_ECX;
  if ((float)local_8 < *(float *)(param_1 + 0x5c0)) {
    *(COleControl **)(param_1 + 0x5c0) = local_8;
    this = local_8;
  }
  fVar3 = (float10)*(float *)(param_1 + 0x5f4) -
          ((float10)*(float *)(param_1 + 0x5c0) - (float10)*(float *)(param_1 + 0x5f0));
  *(float *)(param_1 + 0x5dc) = (float)fVar3;
  if (fVar3 < fVar2) {
    *(float *)(param_1 + 0x5dc) = (float)fVar2;
    *(float *)(param_1 + 0x5c0) =
         (float)(((float10)*(float *)(param_1 + 0x5f4) - fVar2) +
                (float10)*(float *)(param_1 + 0x5f0));
  }
  COleControl::FireEvent(this,param_1,(uchar *)0x7);
  return;
}


// ---- FUN_100094f0 @ 100094f0

void __thiscall
FUN_100094f0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,char *param_7,undefined4 param_8)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  *(undefined4 *)(param_1 + 0x29c) = param_2;
  *(undefined4 *)(param_1 + 0x2a0) = param_3;
  *(undefined4 *)(param_1 + 0x2a4) = param_4;
  *(undefined4 *)(param_1 + 0x2a8) = param_5;
  *(undefined4 *)(param_1 + 0x2b4) = param_6;
  uVar2 = 0xffffffff;
  do {
    pcVar4 = param_7;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar4 = param_7 + 1;
    cVar1 = *param_7;
    param_7 = pcVar4;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar4 + -uVar2;
  pcVar5 = (char *)(param_1 + 0x2c0);
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
  *(undefined4 *)(param_1 + 0x5c0) = param_8;
  FUN_100093d0(param_1);
  return;
}


// ---- FUN_10009570 @ 10009570

void __thiscall
FUN_10009570(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,char *param_5,
            undefined4 param_6)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  *(undefined4 *)(param_1 + 0x2b0) = param_2;
  *(undefined4 *)(param_1 + 0x2ac) = param_3;
  *(undefined4 *)(param_1 + 0x2b8) = param_4;
  uVar2 = 0xffffffff;
  do {
    pcVar4 = param_5;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar4 = param_5 + 1;
    cVar1 = *param_5;
    param_5 = pcVar4;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar4 + -uVar2;
  pcVar5 = (char *)(param_1 + 0x3bf);
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
  *(undefined4 *)(param_1 + 0x5c4) = param_6;
  FUN_100093d0(param_1);
  return;
}


// ---- FUN_100095e0 @ 100095e0

void __thiscall FUN_100095e0(int param_1,undefined4 param_2,char *param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  *(undefined4 *)(param_1 + 700) = param_2;
  uVar2 = 0xffffffff;
  do {
    pcVar4 = param_3;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar4 = param_3 + 1;
    cVar1 = *param_3;
    param_3 = pcVar4;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar4 + -uVar2;
  pcVar5 = (char *)(param_1 + 0x4be);
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
  FUN_100093d0(param_1);
  return;
}


// ---- FUN_10009630 @ 10009630

void __thiscall FUN_10009630(void *this,LPPOINT param_1)

{
  if (*(int *)((int)this + 0x254) == 0) {
    ClientToScreen(*(HWND *)((int)this + 0x20),param_1);
  }
  return;
}


// ---- FUN_10009650 @ 10009650

void __thiscall FUN_10009650(void *this,tagRECT *param_1)

{
  if (*(int *)((int)this + 0x254) == 0) {
    CWnd::ClientToScreen(this,param_1);
  }
  return;
}


// ---- FUN_10009670 @ 10009670

void __thiscall FUN_10009670(COleControl *param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x254) = param_2;
  COleControl::InvalidateControl(param_1,(tagRECT *)0x0,1);
  return;
}


// ---- FUN_100096b0 @ 100096b0

COlePropertyPage * FUN_100096b0(void)

{
  COlePropertyPage *pCVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10014dea;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pCVar1 = operator_new(0xd8);
  local_4 = 0;
  if (pCVar1 != (COlePropertyPage *)0x0) {
    pCVar1 = FUN_10009870(pCVar1);
    ExceptionList = local_c;
    return pCVar1;
  }
  ExceptionList = local_c;
  return (COlePropertyPage *)0x0;
}


// ---- FUN_10009720 @ 10009720

undefined ** FUN_10009720(void)

{
  return &PTR_s_CNavMgrPropPage_10017060;
}


// ---- FUN_10009740 @ 10009740

undefined ** FUN_10009740(void)

{
  return &PTR_LAB_10017078;
}


// ---- FUN_10009760 @ 10009760

void FUN_10009760(void)

{
  FUN_10009780(&DAT_1001cb80,(_GUID *)&DAT_100170b0,(CRuntimeClass *)&PTR_s_CNavMgrPropPage_10017060
               ,0,"NAVMGR.NavMgrPropPage.1");
  return;
}


// ---- FUN_10009780 @ 10009780

COleObjectFactory * __thiscall
FUN_10009780(void *this,_GUID *param_1,CRuntimeClass *param_2,int param_3,char *param_4)

{
  COleObjectFactory::COleObjectFactory(this,param_1,param_2,param_3,param_4);
  *(undefined ***)this = &PTR_LAB_100170c0;
  return this;
}


// ---- FUN_100097b0 @ 100097b0

COleObjectFactory * __thiscall FUN_100097b0(void *this,byte param_1)

{
  COleObjectFactory::~COleObjectFactory(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_100097d0 @ 100097d0

void FUN_100097d0(void)

{
  FUN_100145cc((_onexit_t)&LAB_100097e0);
  return;
}


// ---- FUN_10009800 @ 10009800

undefined4 FUN_10009800(undefined4 *param_1)

{
  *param_1 = DAT_100170b0;
  param_1[1] = DAT_100170b4;
  param_1[2] = DAT_100170b8;
  param_1[3] = DAT_100170bc;
  return 0;
}


// ---- FUN_10009870 @ 10009870

COlePropertyPage * __fastcall FUN_10009870(COlePropertyPage *param_1)

{
  COlePropertyPage::COlePropertyPage(param_1,100,100);
  *(undefined ***)param_1 = &PTR_FUN_10017134;
  return param_1;
}


// ---- FUN_10009890 @ 10009890

COlePropertyPage * __thiscall FUN_10009890(void *this,byte param_1)

{
  COlePropertyPage::~COlePropertyPage(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- ~COlePropertyPage @ 100098b0

void __thiscall COlePropertyPage::~COlePropertyPage(COlePropertyPage *this)

{
                    /* WARNING: Could not recover jumptable at 0x10014196. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~COlePropertyPage(this);
  return;
}


// ---- FUN_100098c0 @ 100098c0

void FUN_100098c0(CDataExchange *param_1)

{
  DDP_PostProcessing(param_1);
  return;
}


// ---- FUN_100098e0 @ 100098e0

void FUN_100098e0(void)

{
  FUN_10009960((CWinApp *)&DAT_1001cbd0);
  return;
}


// ---- FUN_100098f0 @ 100098f0

void FUN_100098f0(void)

{
  FUN_100145cc((_onexit_t)&LAB_10009900);
  return;
}


// ---- FUN_10009910 @ 10009910

void __fastcall FUN_10009910(CWinApp *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10014e08;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  CString::~CString((CString *)(param_1 + 0xc4));
  local_4 = 0xffffffff;
  CWinApp::~CWinApp(param_1);
  ExceptionList = local_c;
  return;
}


// ---- FUN_10009960 @ 10009960

CWinApp * __fastcall FUN_10009960(CWinApp *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10014e28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CWinApp::CWinApp(param_1,(char *)0x0);
  *(undefined ***)param_1 = &PTR_LAB_100172d8;
  local_4 = 0;
  CString::CString((CString *)(param_1 + 0xc4));
  *(undefined ***)param_1 = &PTR_LAB_10017234;
  ExceptionList = local_c;
  return param_1;
}


// ---- ~CWinApp @ 100099c0

void __thiscall CWinApp::~CWinApp(CWinApp *this)

{
                    /* WARNING: Could not recover jumptable at 0x100141a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CWinApp(this);
  return;
}


// ---- FUN_100099d0 @ 100099d0

CWinApp * __thiscall FUN_100099d0(void *this,byte param_1)

{
  FUN_10009910(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_100099f0 @ 100099f0

CWinApp * __thiscall FUN_100099f0(void *this,byte param_1)

{
  CWinApp::~CWinApp(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_10009a10 @ 10009a10

int __fastcall FUN_10009a10(COleControlModule *param_1)

{
  int iVar1;
  void *this;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10014e4a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = COleControlModule::InitInstance(param_1);
  if (iVar1 != 0) {
    AfxEnableControlContainer((COccManager *)0x0);
    this = operator_new(0x14);
    local_4 = 0;
    if (this == (void *)0x0) {
      DAT_1001cc9c = (undefined4 *)0x0;
    }
    else {
      DAT_1001cc9c = FUN_10009c50(this,s_LEO_Navigation_Manager_1001c5bc);
    }
    *(undefined4 *)(param_1 + 200) = 0;
  }
  ExceptionList = local_c;
  return iVar1;
}


// ---- FUN_10009a90 @ 10009a90

void __fastcall FUN_10009a90(COleControlModule *param_1)

{
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_1 + 200);
  if (DAT_1001cc9c != (int *)0x0) {
    (**(code **)(*DAT_1001cc9c + 4))(1);
  }
  COleControlModule::ExitInstance(param_1);
  return;
}


// ---- DllRegisterServer @ 10009ac0

undefined4 DllRegisterServer(void)

{
  AFX_MODULE_STATE *pAVar1;
  int iVar2;
  undefined4 local_8;
  int local_4;
  
                    /* 0x9ac0  3  DllRegisterServer */
  pAVar1 = (AFX_MODULE_STATE *)FUN_10014417();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)&local_8,pAVar1);
  pAVar1 = AfxGetModuleState();
  iVar2 = AfxOleRegisterTypeLib
                    (*(HINSTANCE__ **)(pAVar1 + 8),(_GUID *)&DAT_10017220,(char *)0x0,(char *)0x0);
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


// ---- DllUnregisterServer @ 10009b40

undefined4 DllUnregisterServer(void)

{
  AFX_MODULE_STATE *pAVar1;
  int iVar2;
  undefined4 local_8;
  int local_4;
  
                    /* 0x9b40  4  DllUnregisterServer */
  pAVar1 = (AFX_MODULE_STATE *)FUN_10014417();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)&local_8,pAVar1);
  iVar2 = AfxOleUnregisterTypeLib((_GUID *)&DAT_10017220,0,0,0);
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


// ---- FUN_10009c50 @ 10009c50

undefined4 * __thiscall FUN_10009c50(void *this,char *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10014eb4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &PTR_GetRuntimeClass_10016fdc;
  local_4 = 0;
  CString::CString((CString *)((int)this + 4));
  local_4._0_1_ = 1;
  CString::CString((CString *)((int)this + 8));
  local_4._0_1_ = 2;
  CString::CString((CString *)((int)this + 0xc));
  local_4._0_1_ = 3;
  CString::CString((CString *)((int)this + 0x10));
  local_4 = CONCAT31(local_4._1_3_,4);
  *(undefined ***)this = &PTR_GetRuntimeClass_100173b0;
  CString::operator=((CString *)((int)this + 4),s_LEO_32_1001c5e4);
  CString::operator=((CString *)((int)this + 0xc),&DAT_1001c5e0);
  CString::operator=((CString *)((int)this + 0x10),param_1);
  ExceptionList = local_c;
  return this;
}


// ---- FUN_10009d00 @ 10009d00

undefined4 * __thiscall FUN_10009d00(void *this,byte param_1)

{
  FUN_10009d20(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_10009d20 @ 10009d20

void __fastcall FUN_10009d20(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_10014ee9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_GetRuntimeClass_100173b0;
  local_4 = 3;
  CString::~CString((CString *)(param_1 + 4));
  local_4._0_1_ = 2;
  CString::~CString((CString *)(param_1 + 3));
  local_4._0_1_ = 1;
  CString::~CString((CString *)(param_1 + 2));
  local_4 = (uint)local_4._1_3_ << 8;
  CString::~CString((CString *)(param_1 + 1));
  *param_1 = &PTR_GetRuntimeClass_10016fdc;
  ExceptionList = local_c;
  return;
}


// ---- FUN_10009da0 @ 10009da0

undefined4 __thiscall FUN_10009da0(void *this,undefined4 param_1,undefined4 param_2,char *param_3)

{
  undefined4 uVar1;
  CString *pCVar2;
  void *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *local_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  local_8 = &LAB_10014f2f;
  local_c = ExceptionList;
  local_10 = 0;
  ExceptionList = &local_c;
  CString::CString((CString *)&param_3,param_3);
  local_4 = 1;
  if (*(int *)(*(int *)((int)this + 8) + -8) != 0) {
    pCVar2 = (CString *)operator+((CString *)&local_14,(char *)((int)this + 8));
    local_8 = (undefined1 *)CONCAT31(local_8._1_3_,2);
    pCVar2 = (CString *)operator+((CString *)&stack0xffffffe4,pCVar2);
    local_c._0_1_ = 3;
    CString::operator=((CString *)&param_1,pCVar2);
    local_c._0_1_ = 2;
    CString::~CString((CString *)&stack0xffffffe0);
    local_c = (void *)CONCAT31(local_c._1_3_,1);
    CString::~CString((CString *)&stack0xffffffe4);
  }
  uVar1 = local_4;
  FUN_1000a290();
  local_c = (void *)((uint)local_c & 0xffffff00);
  CString::~CString((CString *)&param_1);
  ExceptionList = local_14;
  return uVar1;
}


// ---- FUN_10009e80 @ 10009e80

uint __thiscall FUN_10009e80(void *this,BYTE *param_1,char *param_2)

{
  CString *pCVar1;
  uint uVar2;
  LPCSTR unaff_retaddr;
  void *local_14;
  CString local_10 [4];
  void *local_c;
  undefined1 *local_8;
  LPCSTR local_4;
  
  local_4 = (LPCSTR)0xffffffff;
  local_8 = &LAB_10014f58;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CString::CString((CString *)&param_2,param_2);
  local_4 = (LPCSTR)0x0;
  if (*(int *)(*(int *)((int)this + 8) + -8) != 0) {
    pCVar1 = (CString *)operator+(local_10,(char *)((int)this + 8));
    local_8 = (undefined1 *)CONCAT31(local_8._1_3_,1);
    pCVar1 = (CString *)operator+((CString *)&stack0xffffffe8,pCVar1);
    local_c._0_1_ = 2;
    CString::operator=((CString *)&stack0x00000000,pCVar1);
    local_c._0_1_ = 1;
    CString::~CString((CString *)&stack0xffffffe4);
    local_c = (void *)((uint)local_c._1_3_ << 8);
    CString::~CString((CString *)&stack0xffffffe8);
  }
  uVar2 = FUN_1000a4a0(this,local_4,unaff_retaddr,param_1);
  local_c = (void *)0xffffffff;
  CString::~CString((CString *)&stack0x00000000);
  ExceptionList = local_14;
  return uVar2;
}


// ---- FUN_10009f50 @ 10009f50

uint __thiscall FUN_10009f50(void *this,undefined4 param_1,char *param_2)

{
  CString *pCVar1;
  uint uVar2;
  LPCSTR unaff_retaddr;
  void *local_14;
  CString local_10 [4];
  void *local_c;
  undefined1 *local_8;
  LPCSTR local_4;
  
  local_4 = (LPCSTR)0xffffffff;
  local_8 = &LAB_10014f88;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CString::CString((CString *)&param_2,param_2);
  local_4 = (LPCSTR)0x0;
  if (*(int *)(*(int *)((int)this + 8) + -8) != 0) {
    pCVar1 = (CString *)operator+(local_10,(char *)((int)this + 8));
    local_8 = (undefined1 *)CONCAT31(local_8._1_3_,1);
    pCVar1 = (CString *)operator+((CString *)&stack0xffffffe8,pCVar1);
    local_c._0_1_ = 2;
    CString::operator=((CString *)&stack0x00000000,pCVar1);
    local_c._0_1_ = 1;
    CString::~CString((CString *)&stack0xffffffe4);
    local_c = (void *)((uint)local_c._1_3_ << 8);
    CString::~CString((CString *)&stack0xffffffe8);
  }
  uVar2 = FUN_1000a410(this,local_4,unaff_retaddr,param_1);
  local_c = (void *)0xffffffff;
  CString::~CString((CString *)&stack0x00000000);
  ExceptionList = local_14;
  return uVar2;
}


// ---- FUN_1000a020 @ 1000a020

UINT __thiscall FUN_1000a020(void *this,UINT param_1,char *param_2)

{
  CString *pCVar1;
  UINT UVar2;
  LPCSTR unaff_retaddr;
  void *local_14;
  CString local_10 [4];
  void *local_c;
  undefined1 *local_8;
  LPCSTR local_4;
  
  local_4 = (LPCSTR)0xffffffff;
  local_8 = &LAB_10014fb8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CString::CString((CString *)&param_2,param_2);
  local_4 = (LPCSTR)0x0;
  if (*(int *)(*(int *)((int)this + 8) + -8) != 0) {
    pCVar1 = (CString *)operator+(local_10,(char *)((int)this + 8));
    local_8 = (undefined1 *)CONCAT31(local_8._1_3_,1);
    pCVar1 = (CString *)operator+((CString *)&stack0xffffffe8,pCVar1);
    local_c._0_1_ = 2;
    CString::operator=((CString *)&stack0x00000000,pCVar1);
    local_c._0_1_ = 1;
    CString::~CString((CString *)&stack0xffffffe4);
    local_c = (void *)((uint)local_c._1_3_ << 8);
    CString::~CString((CString *)&stack0xffffffe8);
  }
  UVar2 = FUN_1000a200(this,local_4,unaff_retaddr,param_1);
  local_c = (void *)0xffffffff;
  CString::~CString((CString *)&stack0x00000000);
  ExceptionList = local_14;
  return UVar2;
}


// ---- FUN_1000a0f0 @ 1000a0f0

HKEY __fastcall FUN_1000a0f0(int param_1)

{
  LSTATUS LVar1;
  HKEY local_10;
  HKEY local_c;
  HKEY local_8;
  DWORD local_4;
  
  local_8 = (HKEY)0x0;
  local_10 = (HKEY)0x0;
  local_c = (HKEY)0x0;
  LVar1 = RegOpenKeyExA((HKEY)0x80000001,"Software",0,0x2001f,&local_10);
  if (LVar1 == 0) {
    LVar1 = RegCreateKeyExA(local_10,*(LPCSTR *)(param_1 + 0xc),0,(LPSTR)0x0,0,0x2001f,
                            (LPSECURITY_ATTRIBUTES)0x0,&local_c,&local_4);
    if (LVar1 == 0) {
      RegCreateKeyExA(local_c,*(LPCSTR *)(param_1 + 0x10),0,(LPSTR)0x0,0,0x2001f,
                      (LPSECURITY_ATTRIBUTES)0x0,&local_8,&local_4);
    }
  }
  if (local_10 != (HKEY)0x0) {
    RegCloseKey(local_10);
  }
  if (local_c != (HKEY)0x0) {
    RegCloseKey(local_c);
  }
  return local_8;
}


// ---- FUN_1000a1a0 @ 1000a1a0

undefined4 __thiscall FUN_1000a1a0(void *this,LPCSTR param_1)

{
  HKEY hKey;
  HKEY local_8;
  DWORD local_4;
  
  local_8 = (HKEY)0x0;
  hKey = FUN_1000a0f0((int)this);
  if (hKey == (HKEY)0x0) {
    return 0;
  }
  RegCreateKeyExA(hKey,param_1,0,(LPSTR)0x0,0,0x2001f,(LPSECURITY_ATTRIBUTES)0x0,&local_8,&local_4);
  RegCloseKey(hKey);
  return local_8;
}


// ---- FUN_1000a200 @ 1000a200

UINT __thiscall FUN_1000a200(void *this,LPCSTR param_1,LPCSTR param_2,UINT param_3)

{
  HKEY hKey;
  LSTATUS LVar1;
  UINT UVar2;
  UINT local_8;
  DWORD local_4;
  
  if (*(int *)(*(int *)((int)this + 0xc) + -8) == 0) {
    UVar2 = GetPrivateProfileIntA(param_1,param_2,param_3,*(LPCSTR *)((int)this + 0x10));
    return UVar2;
  }
  hKey = (HKEY)FUN_1000a1a0(this,param_1);
  if (hKey != (HKEY)0x0) {
    param_1 = (LPCSTR)0x4;
    LVar1 = RegQueryValueExA(hKey,param_2,(LPDWORD)0x0,&local_4,(LPBYTE)&local_8,(LPDWORD)&param_1);
    RegCloseKey(hKey);
    if (LVar1 == 0) {
      return local_8;
    }
  }
  return param_3;
}


// ---- FUN_1000a290 @ 1000a290

CString * FUN_1000a290(void)

{
  HKEY hKey;
  LSTATUS LVar1;
  LPBYTE lpData;
  void *this;
  void *in_stack_00001000;
  CString *in_stack_00001010;
  LPCSTR in_stack_00001014;
  LPCSTR in_stack_00001018;
  code *in_stack_0000101c;
  undefined1 **lpcbData;
  void *local_c;
  undefined1 *local_8;
  DWORD local_4;
  
  local_4 = 0xffffffff;
  local_8 = &LAB_10014fdb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_100145f0();
  local_4 = 0;
  if (*(int *)((int)this + 0xc) == 0) {
    if (in_stack_0000101c == (code *)0x0) {
      in_stack_0000101c = afxChNil_exref;
    }
    GetPrivateProfileStringA
              (in_stack_00001014,in_stack_00001018,(LPCSTR)in_stack_0000101c,&stack0x00000000,0x1000
               ,*(LPCSTR *)((int)this + 0x10));
    in_stack_0000101c = (code *)register0x00000010;
  }
  else {
    hKey = (HKEY)FUN_1000a1a0(this,in_stack_00001014);
    if (hKey != (HKEY)0x0) {
      CString::CString((CString *)&local_c);
      LVar1 = RegQueryValueExA(hKey,in_stack_00001018,(LPDWORD)0x0,&local_4,(LPBYTE)0x0,
                               (LPDWORD)&local_8);
      if (LVar1 == 0) {
        lpcbData = &local_8;
        lpData = (LPBYTE)CString::GetBuffer((CString *)&local_c,(int)local_8);
        LVar1 = RegQueryValueExA(hKey,in_stack_00001018,(LPDWORD)0x0,&local_4,lpData,
                                 (LPDWORD)lpcbData);
        CString::ReleaseBuffer((CString *)&local_c,-1);
      }
      RegCloseKey(hKey);
      if (LVar1 == 0) {
        CString::CString(in_stack_00001010,(CString *)&local_c);
        CString::~CString((CString *)&local_c);
        ExceptionList = in_stack_00001000;
        return in_stack_00001010;
      }
      CString::CString(in_stack_00001010,(char *)in_stack_0000101c);
      CString::~CString((CString *)&local_c);
      ExceptionList = in_stack_00001000;
      return in_stack_00001010;
    }
  }
  CString::CString(in_stack_00001010,(char *)in_stack_0000101c);
  ExceptionList = in_stack_00001000;
  return in_stack_00001010;
}


// ---- FUN_1000a410 @ 1000a410

uint __thiscall FUN_1000a410(void *this,LPCSTR param_1,LPCSTR param_2,undefined4 param_3)

{
  HKEY hKey;
  LSTATUS LVar1;
  uint uVar2;
  CHAR local_10 [16];
  
  if (*(int *)((int)this + 0xc) == 0) {
    wsprintfA(local_10,&DAT_1001c5f0,param_3);
    uVar2 = WritePrivateProfileStringA(param_1,param_2,local_10,*(LPCSTR *)((int)this + 0x10));
    return uVar2;
  }
  hKey = (HKEY)FUN_1000a1a0(this,param_1);
  if (hKey == (HKEY)0x0) {
    return 0;
  }
  LVar1 = RegSetValueExA(hKey,param_2,0,4,(BYTE *)&param_3,4);
  RegCloseKey(hKey);
  return (uint)(LVar1 == 0);
}


// ---- FUN_1000a4a0 @ 1000a4a0

uint __thiscall FUN_1000a4a0(void *this,LPCSTR param_1,LPCSTR param_2,BYTE *param_3)

{
  HKEY hKey;
  int iVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 0xc) == 0) {
    uVar2 = WritePrivateProfileStringA
                      (param_1,param_2,(LPCSTR)param_3,*(LPCSTR *)((int)this + 0x10));
    return uVar2;
  }
  if (param_2 == (LPCSTR)0x0) {
    hKey = FUN_1000a0f0((int)this);
    if (hKey == (HKEY)0x0) {
      return 0;
    }
    iVar1 = RegDeleteKeyA(hKey,param_1);
  }
  else if (param_3 == (BYTE *)0x0) {
    hKey = (HKEY)FUN_1000a1a0(this,param_1);
    if (hKey == (HKEY)0x0) {
      return 0;
    }
    iVar1 = RegDeleteValueA(hKey,param_2);
  }
  else {
    hKey = (HKEY)FUN_1000a1a0(this,param_1);
    if (hKey == (HKEY)0x0) {
      return 0;
    }
    iVar1 = lstrlenA((LPCSTR)param_3);
    iVar1 = RegSetValueExA(hKey,param_2,0,1,param_3,iVar1 + 1);
  }
  RegCloseKey(hKey);
  return (uint)(iVar1 == 0);
}


// ---- FUN_1000a560 @ 1000a560

CDialog * __thiscall FUN_1000a560(void *this,CWnd *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10015003;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CDialog::CDialog(this,0xcf,param_1);
  local_4 = 0;
  CString::CString((CString *)((int)this + 0x60));
  local_4 = CONCAT31(local_4._1_3_,1);
  *(undefined ***)this = &PTR_LAB_100173e8;
  CString::operator=((CString *)((int)this + 0x60),&DAT_1001c718);
  ExceptionList = local_c;
  return this;
}


// ---- FUN_1000a5d0 @ 1000a5d0

CDialog * __thiscall FUN_1000a5d0(void *this,byte param_1)

{
  FUN_1000a5f0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_1000a5f0 @ 1000a5f0

void __fastcall FUN_1000a5f0(CDialog *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10015018;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  CString::~CString((CString *)(param_1 + 0x60));
  local_4 = 0xffffffff;
  CDialog::~CDialog(param_1);
  ExceptionList = local_c;
  return;
}


// ---- FUN_1000a670 @ 1000a670

void __fastcall FUN_1000a670(CWnd *param_1)

{
  CString *pCVar1;
  int unaff_ESI;
  CString local_1c [4];
  char *local_18;
  CString *local_14;
  CString local_10 [4];
  void *local_c;
  undefined1 *local_8;
  int local_4;
  
  local_4 = 0xffffffff;
  local_8 = &LAB_10015058;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CWnd::UpdateData(param_1,1);
  CString::CString(local_1c);
  local_4 = 0;
  pCVar1 = (CString *)CString::SpanExcluding((CString *)(param_1 + 0x60),(char *)local_10);
  local_8._0_1_ = 1;
  CString::operator=((CString *)&stack0xffffffe0,pCVar1);
  local_8._0_1_ = 0;
  CString::~CString((CString *)&local_14);
  if (*(int *)(unaff_ESI + -8) == *(int *)(*(int *)(param_1 + 0x60) + -8)) {
    CDialog::OnOK((CDialog *)param_1);
  }
  else {
    CString::CString((CString *)&local_14);
    local_8._0_1_ = 2;
    CString::CString((CString *)&local_18);
    local_8._0_1_ = 3;
    CString::CString(local_1c);
    local_8._0_1_ = 4;
    CString::LoadStringA((CString *)&local_14,0x8012);
    CString::LoadStringA((CString *)&local_18,0x8013);
    CString::Format(local_14,(char *)local_1c);
    MessageBeep(0x10);
    CWnd::MessageBoxA(param_1,local_18,(char *)local_14,0x10);
    local_4._0_1_ = 3;
    CString::~CString((CString *)&local_18);
    local_4._0_1_ = 2;
    CString::~CString((CString *)&local_14);
    local_4 = (uint)local_4._1_3_ << 8;
    CString::~CString(local_10);
  }
  local_4 = 0xffffffff;
  CString::~CString(local_1c);
  ExceptionList = local_c;
  return;
}


// ---- FUN_1000a7c0 @ 1000a7c0

undefined4 __fastcall FUN_1000a7c0(CDialog *param_1)

{
  CWnd *this;
  
  CDialog::OnInitDialog(param_1);
  this = CWnd::GetDlgItem((CWnd *)param_1,0xe7);
  CWnd::SetFocus(this);
  return 0;
}


// ---- FUN_1000d630 @ 1000d630

undefined4 * FUN_1000d630(void)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1001507a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x20);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = FUN_1000d6b0(puVar1);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


// ---- FUN_1000d6a0 @ 1000d6a0

undefined ** FUN_1000d6a0(void)

{
  return &PTR_s_CServerComms_100174c0;
}


// ---- FUN_1000d6b0 @ 1000d6b0

undefined4 * __fastcall FUN_1000d6b0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10015098;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_100174d8;
  local_4 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0x809;
  param_1[5] = 0;
  param_1[6] = 0;
  FUN_1000e3e0((int)param_1);
  ExceptionList = local_c;
  return param_1;
}


// ---- FUN_1000d710 @ 1000d710

undefined4 * __thiscall FUN_1000d710(void *this,byte param_1)

{
  FUN_1000d7a0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_1000d730 @ 1000d730

undefined4 * __thiscall FUN_1000d730(void *this,undefined4 param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_100150b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 4) = param_1;
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_100174d8;
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0x809;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  FUN_1000e3e0((int)this);
  ExceptionList = local_c;
  return this;
}


// ---- FUN_1000d7a0 @ 1000d7a0

void __fastcall FUN_1000d7a0(undefined4 *param_1)

{
  *param_1 = &PTR_GetRuntimeClass_10016fdc;
  return;
}


// ---- FUN_1000d7b0 @ 1000d7b0

void __thiscall FUN_1000d7b0(void *this,LPARAM param_1)

{
  SendMessageA(*(HWND *)((int)this + 4),DAT_1001cf14,*(WPARAM *)((int)this + 8),param_1);
  return;
}


// ---- FUN_1000d7d0 @ 1000d7d0

undefined4 __thiscall FUN_1000d7d0(void *this,uchar *param_1)

{
  uchar *puVar1;
  int iVar2;
  undefined4 local_c;
  undefined4 local_8;
  uchar *local_4;
  
  puVar1 = param_1;
  local_c = DAT_1001ce60;
  local_8 = 0xc54;
  local_4 = param_1;
  FUN_1000e430(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_c);
  CString::CString((CString *)&param_1,(char *)(puVar1 + 0x834));
  iVar2 = _mbscmp(param_1,(uchar *)s_French_1001c618);
  if (iVar2 == 0) {
    *(undefined4 *)((int)this + 0x10) = 0x40c;
  }
  else {
    iVar2 = _mbscmp(param_1,(uchar *)s_German_1001c610);
    if (iVar2 == 0) {
      *(undefined4 *)((int)this + 0x10) = 0x407;
    }
    else {
      *(undefined4 *)((int)this + 0x10) = 0x809;
    }
  }
  CString::~CString((CString *)&param_1);
  return 1;
}


// ---- FUN_1000d880 @ 1000d880

undefined4 __fastcall FUN_1000d880(int param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}


// ---- FUN_1000d890 @ 1000d890

CString * __thiscall FUN_1000d890(void *this,CString *param_1,uint param_2)

{
  HMODULE hModule;
  AFX_MODULE_STATE *pAVar1;
  HRSRC hResInfo;
  HGLOBAL hResData;
  ushort *puVar2;
  int iVar3;
  uint uVar4;
  ushort uVar5;
  LPCSTR lpName;
  CString local_114 [4];
  undefined4 local_110;
  char local_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_100150f5;
  local_c = ExceptionList;
  local_110 = 0;
  ExceptionList = &local_c;
  CString::CString(local_114,s_________1001c620);
  local_4 = 1;
  pAVar1 = AfxGetModuleState();
  hModule = *(HMODULE *)(pAVar1 + 0xc);
  lpName = (LPCSTR)((param_2 >> 4) + 1 & 0xffff);
  hResInfo = FindResourceExA(hModule,(LPCSTR)0x6,lpName,*(WORD *)((int)this + 0x10));
  if ((hResInfo == (HRSRC)0x0) &&
     (hResInfo = FindResourceA(hModule,lpName,(LPCSTR)0x6), hResInfo == (HRSRC)0x0)) {
    CString::CString(param_1,local_114);
  }
  else {
    uVar4 = param_2 & 0xf;
    hResData = LoadResource(hModule,hResInfo);
    puVar2 = LockResource(hResData);
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      uVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      if (uVar5 != 0) {
        puVar2 = puVar2 + uVar5;
      }
    }
    uVar5 = *puVar2;
    if (uVar5 != 0) {
      if (0xff < uVar5) {
        uVar5 = 0xff;
      }
      iVar3 = 0;
      if (uVar5 != 0) {
        do {
          puVar2 = puVar2 + 1;
          local_10c[iVar3] = (char)*puVar2;
          iVar3 = iVar3 + 1;
        } while (iVar3 < (int)(uint)uVar5);
      }
      local_10c[iVar3] = '\0';
      CString::operator=(local_114,local_10c);
    }
    CString::CString(param_1,local_114);
  }
  local_110 = 1;
  local_4 = local_4 & 0xffffff00;
  CString::~CString(local_114);
  ExceptionList = local_c;
  return param_1;
}


// ---- FUN_1000d9f0 @ 1000d9f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_1000d9f0(void *param_1,undefined4 param_2)

{
  int iVar1;
  CString local_14 [4];
  float local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10015108;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CString::CString(local_14);
  local_4 = 0;
  iVar1 = FUN_1000da90(param_1,param_2,&local_10,local_14);
  if (iVar1 == 1) {
    local_4 = 0xffffffff;
    CString::~CString(local_14);
    ExceptionList = local_c;
    return (float10)local_10;
  }
  local_4 = 0xffffffff;
  CString::~CString(local_14);
  ExceptionList = local_c;
  return (float10)_DAT_10017020;
}


// ---- FUN_1000da90 @ 1000da90

undefined4 __thiscall
FUN_1000da90(void *this,undefined4 param_1,undefined4 *param_2,CString *param_3)

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
  local_174 = DAT_1001cf38;
  local_170 = 0x168;
  iVar1 = FUN_1000e430(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_174);
  *(int *)((int)this + 0xc) = iVar1;
  if (iVar1 == 1) {
    *param_2 = local_164;
    CString::operator=(param_3,local_160);
  }
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_1000db10 @ 1000db10

undefined4 __thiscall FUN_1000db10(void *this,undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10015128;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = this;
  CString::CString((CString *)&local_10);
  local_4 = 0;
  CString::Empty((CString *)&local_10);
  uVar1 = FUN_1000da90(this,param_1,param_2,(CString *)&local_10);
  local_4 = 0xffffffff;
  CString::~CString((CString *)&local_10);
  ExceptionList = local_c;
  return uVar1;
}


// ---- FUN_1000db80 @ 1000db80

undefined4 __thiscall
FUN_1000db80(void *this,undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_c = param_1;
  local_10 = &local_c;
  local_18 = DAT_1001cf04;
  local_14 = 0xc;
  iVar1 = FUN_1000e430(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_18);
  *(int *)((int)this + 0xc) = iVar1;
  if (iVar1 == 1) {
    *param_2 = local_8;
    *param_3 = local_4;
  }
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_1000dbf0 @ 1000dbf0

undefined4 __thiscall
FUN_1000dbf0(void *this,undefined4 param_1,undefined4 *param_2,undefined4 *param_3,CString *param_4,
            CString *param_5)

{
  int iVar1;
  undefined4 local_2d4;
  undefined4 local_2d0;
  undefined4 *local_2cc;
  undefined4 local_2c8;
  undefined4 local_2c4;
  undefined4 local_2c0;
  char local_2bc [350];
  char local_15e [350];
  
  local_2c8 = param_1;
  local_2cc = &local_2c8;
  local_2d4 = DAT_1001cef4;
  local_2d0 = 0x2c8;
  iVar1 = FUN_1000e430(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_2d4);
  *(int *)((int)this + 0xc) = iVar1;
  if (iVar1 == 1) {
    *param_2 = local_2c4;
    *param_3 = local_2c0;
    CString::operator=(param_4,local_2bc);
    CString::operator=(param_5,local_15e);
  }
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_1000dc90 @ 1000dc90

undefined4 __thiscall
FUN_1000dc90(void *this,undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  CString local_14 [4];
  CString local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10015150;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CString::CString(local_10);
  local_4 = 0;
  CString::CString(local_14);
  local_4._0_1_ = 1;
  CString::Empty(local_10);
  CString::Empty(local_14);
  uVar1 = FUN_1000dbf0(this,param_1,param_2,param_3,local_10,local_14);
  local_4 = (uint)local_4._1_3_ << 8;
  CString::~CString(local_14);
  local_4 = 0xffffffff;
  CString::~CString(local_10);
  ExceptionList = local_c;
  return uVar1;
}


// ---- FUN_1000dd40 @ 1000dd40

void __thiscall FUN_1000dd40(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined1 *local_4;
  
  local_4 = (undefined1 *)&local_14;
  local_14 = param_1;
  local_10 = param_2;
  local_c = DAT_1001cf34;
  local_8 = 8;
  SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_c);
  return;
}


// ---- FUN_1000dd90 @ 1000dd90

void __thiscall FUN_1000dd90(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 *local_1c;
  undefined4 local_18 [6];
  
  local_1c = local_18;
  local_24 = DAT_1001cf2c;
  local_20 = 0x18;
  FUN_1000e430(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_24);
  puVar2 = local_18;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *puVar2;
    puVar2 = puVar2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


// ---- FUN_1000dde0 @ 1000dde0

void __thiscall FUN_1000dde0(void *this,undefined4 param_1)

{
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_c = DAT_1001cf30;
  local_4 = param_1;
  local_8 = 0x18;
  SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_c);
  return;
}


// ---- FUN_1000de20 @ 1000de20

void __thiscall FUN_1000de20(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
  local_c = DAT_1001cef0;
  local_8 = 0xc;
  LVar1 = SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_c);
  *(LRESULT *)((int)this + 0xc) = LVar1;
  return;
}


// ---- FUN_1000de80 @ 1000de80

void __thiscall
FUN_1000de80(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,
            undefined4 *param_4,undefined4 *param_5,undefined4 *param_6)

{
  undefined4 local_110;
  undefined4 local_10c;
  undefined1 *local_108;
  undefined1 local_104 [16];
  undefined4 local_f4;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_c4;
  
  local_108 = local_104;
  local_110 = DAT_1001cdec;
  local_10c = 0x104;
  FUN_1000e430(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_110);
  *param_1 = local_e4;
  *param_2 = local_e0;
  *param_3 = local_dc;
  *param_4 = local_d8;
  *param_5 = local_c4;
  *param_6 = local_f4;
  return;
}


// ---- FUN_1000df10 @ 1000df10

LRESULT __thiscall FUN_1000df10(void *this,undefined4 param_1,undefined4 param_2)

{
  LRESULT LVar1;
  char *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10015168;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = this;
  CString::CString((CString *)&local_10);
  local_4 = 0;
  CString::Empty((CString *)&local_10);
  LVar1 = FUN_1000df80(this,param_1,param_2,local_10);
  local_4 = 0xffffffff;
  CString::~CString((CString *)&local_10);
  ExceptionList = local_c;
  return LVar1;
}


// ---- FUN_1000df80 @ 1000df80

LRESULT __thiscall FUN_1000df80(void *this,undefined4 param_1,undefined4 param_2,char *param_3)

{
  LRESULT LVar1;
  int local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 *local_178;
  undefined4 local_174;
  undefined4 local_170;
  char local_16c [352];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1001518b;
  local_c = ExceptionList;
  local_170 = param_2;
  local_174 = param_1;
  ExceptionList = &local_c;
  CString::CString((CString *)&local_184,param_3);
  local_4 = 0;
  if (*(int *)(local_184 + -8) == 0) {
    local_16c[0] = '\0';
  }
  else {
    FUN_1000e3b0(local_16c,param_3);
  }
  local_178 = &local_174;
  local_180 = DAT_1001cee0;
  local_17c = 0x168;
  LVar1 = SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_180);
  *(LRESULT *)((int)this + 0xc) = LVar1;
  local_4 = 0xffffffff;
  CString::~CString((CString *)&local_184);
  ExceptionList = local_c;
  return LVar1;
}


// ---- FUN_1000e050 @ 1000e050

void __thiscall FUN_1000e050(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
  local_c = DAT_1001ced4;
  local_8 = 0xc;
  LVar1 = SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_c);
  *(LRESULT *)((int)this + 0xc) = LVar1;
  return;
}


// ---- FUN_1000e0b0 @ 1000e0b0

void __thiscall FUN_1000e0b0(void *this,LPARAM param_1)

{
  LRESULT LVar1;
  
  LVar1 = SendMessageA(*(HWND *)((int)this + 4),DAT_1001cec0,*(WPARAM *)((int)this + 8),param_1);
  *(LRESULT *)((int)this + 0xc) = LVar1;
  return;
}


// ---- FUN_1000e0e0 @ 1000e0e0

undefined4 __thiscall FUN_1000e0e0(void *this,undefined4 *param_1,char *param_2)

{
  int iVar1;
  undefined4 local_170;
  undefined4 local_16c;
  char *local_168;
  char local_164 [352];
  undefined4 local_4;
  
  FUN_1000e3b0(local_164,param_2);
  local_168 = local_164;
  local_170 = DAT_1001ce88;
  local_16c = 0x164;
  iVar1 = FUN_1000e430(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_170);
  *(int *)((int)this + 0xc) = iVar1;
  if (iVar1 == 1) {
    *param_1 = local_4;
  }
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_1000e160 @ 1000e160

uint __thiscall FUN_1000e160(void *this,char *param_1)

{
  int iVar1;
  undefined4 local_170;
  undefined4 local_16c;
  char *local_168;
  char local_164 [352];
  uint local_4;
  
  FUN_1000e3b0(local_164,param_1);
  local_168 = local_164;
  local_170 = DAT_1001ce88;
  local_16c = 0x164;
  iVar1 = FUN_1000e430(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_170);
  *(int *)((int)this + 0xc) = iVar1;
  return ~-(uint)(iVar1 != 1) & local_4;
}


// ---- FUN_1000e1d0 @ 1000e1d0

void __thiscall FUN_1000e1d0(void *this,LPARAM param_1)

{
  BOOL BVar1;
  
  BVar1 = PostMessageA(*(HWND *)((int)this + 4),DAT_1001ce84,*(WPARAM *)((int)this + 8),param_1);
  *(BOOL *)((int)this + 0xc) = BVar1;
  return;
}


// ---- FUN_1000e200 @ 1000e200

int FUN_1000e200(char param_1)

{
  int iVar1;
  void *this;
  int iVar2;
  char *pcVar3;
  void *in_stack_00011174;
  CStringArray *in_stack_00011184;
  void *local_c;
  undefined1 *local_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  local_8 = &LAB_100151ab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_100145f0();
  CString::CString((CString *)&local_c);
  local_8 = DAT_1001ce74;
  param_1 = '\0';
  local_4 = 70000;
  iVar1 = FUN_1000e430(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_8);
  if (0 < iVar1) {
    pcVar3 = &param_1;
    iVar2 = iVar1;
    do {
      CString::operator=((CString *)&local_c,pcVar3);
      CStringArray::SetAtGrow(in_stack_00011184,*(int *)(in_stack_00011184 + 8),(CString *)&local_c)
      ;
      pcVar3 = pcVar3 + 0x15e;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  CString::~CString((CString *)&local_c);
  ExceptionList = in_stack_00011174;
  return iVar1;
}


// ---- FUN_1000e2e0 @ 1000e2e0

void __thiscall FUN_1000e2e0(void *this,char *param_1,undefined4 param_2)

{
  LRESULT LVar1;
  undefined4 local_170;
  undefined4 local_16c;
  char *local_168;
  char local_164 [352];
  undefined4 local_4;
  
  FUN_1000e3b0(local_164,param_1);
  local_4 = param_2;
  local_170 = DAT_1001cfb0;
  local_168 = local_164;
  local_16c = 0x164;
  LVar1 = SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_170);
  *(LRESULT *)((int)this + 0xc) = LVar1;
  return;
}


// ---- FUN_1000e3b0 @ 1000e3b0

void FUN_1000e3b0(char *param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  
  uVar2 = 0xffffffff;
  do {
    pcVar4 = param_2;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar4 = param_2 + 1;
    cVar1 = *param_2;
    param_2 = pcVar4;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar4 + -uVar2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)param_1 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    param_1 = param_1 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *param_1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


// ---- FUN_1000e3e0 @ 1000e3e0

void __fastcall FUN_1000e3e0(int param_1)

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


// ---- FUN_1000e430 @ 1000e430

void __thiscall
FUN_1000e430(void *this,HWND param_1,UINT param_2,WPARAM param_3,undefined4 *param_4)

{
  if (*(int *)((int)this + 0x1c) != 0) {
    FUN_1000e470(this,param_1,param_4);
    return;
  }
  SendMessageA(param_1,param_2,param_3,(LPARAM)param_4);
  return;
}


// ---- FUN_1000e470 @ 1000e470

LRESULT __thiscall FUN_1000e470(void *this,HWND param_1,undefined4 *param_2)

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
  sprintf(local_100,s_MMF_LEO_SC__lx__lx__lx_1001c628,DVar3,uVar9,iVar2);
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
  DAT_1001cca0 = SendMessageA(param_1,0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_10c);
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
  return DAT_1001cca0;
}


// ---- FUN_1000e5a0 @ 1000e5a0

void __thiscall FUN_1000e5a0(void *this,WPARAM param_1)

{
  HWND hWnd;
  UINT Msg;
  LPARAM lParam;
  
  lParam = 7;
  Msg = DAT_1001d020;
  hWnd = (HWND)FUN_1000e5e0((int)this);
  SendMessageA(hWnd,Msg,param_1,lParam);
  return;
}


// ---- FUN_1000e5c0 @ 1000e5c0

void __thiscall FUN_1000e5c0(void *this,WPARAM param_1)

{
  HWND hWnd;
  UINT Msg;
  LPARAM lParam;
  
  lParam = 8;
  Msg = DAT_1001d020;
  hWnd = (HWND)FUN_1000e5e0((int)this);
  SendMessageA(hWnd,Msg,param_1,lParam);
  return;
}


// ---- FUN_1000e5e0 @ 1000e5e0

void __fastcall FUN_1000e5e0(int param_1)

{
  SendMessageA(*(HWND *)(param_1 + 4),DAT_1001cfe0,*(WPARAM *)(param_1 + 8),0);
  return;
}


// ---- FUN_10011450 @ 10011450

CDialog * __thiscall FUN_10011450(void *this,CWnd *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10015243;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CDialog::CDialog(this,0xcd,param_1);
  local_4 = 0;
  CString::CString((CString *)((int)this + 0x60));
  local_4._0_1_ = 1;
  CWnd::CWnd((CWnd *)((int)this + 0x90));
  *(undefined ***)((int)this + 0x90) = &PTR_LAB_100178d4;
  local_4._0_1_ = 2;
  CWnd::CWnd((CWnd *)((int)this + 0xd0));
  *(undefined ***)((int)this + 0xd0) = &PTR_LAB_100178d4;
  local_4._0_1_ = 3;
  CWnd::CWnd((CWnd *)((int)this + 0x110));
  *(undefined ***)((int)this + 0x110) = &PTR_LAB_100178d4;
  local_4._0_1_ = 4;
  CWnd::CWnd((CWnd *)((int)this + 0x150));
  *(undefined ***)((int)this + 0x150) = &PTR_LAB_10017810;
  local_4._0_1_ = 5;
  CWnd::CWnd((CWnd *)((int)this + 400));
  *(undefined ***)((int)this + 400) = &PTR_LAB_10017810;
  local_4._0_1_ = 6;
  CWnd::CWnd((CWnd *)((int)this + 0x1d0));
  *(undefined ***)((int)this + 0x1d0) = &PTR_LAB_10017810;
  local_4._0_1_ = 7;
  CWnd::CWnd((CWnd *)((int)this + 0x210));
  *(undefined ***)((int)this + 0x210) = &PTR_FUN_100167a0;
  local_4._0_1_ = 8;
  CString::CString((CString *)((int)this + 0x260));
  local_4 = CONCAT31(local_4._1_3_,9);
  *(undefined ***)this = &PTR_LAB_10017738;
  CString::operator=((CString *)((int)this + 0x60),&DAT_1001c718);
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x250) = 0;
  *(undefined4 *)((int)this + 0x254) = 0;
  *(undefined4 *)((int)this + 600) = 0;
  *(undefined4 *)((int)this + 0x25c) = 0;
  CString::operator=((CString *)((int)this + 0x260),&DAT_1001c718);
  *(undefined4 *)((int)this + 0x264) = 0;
  *(undefined4 *)((int)this + 0x268) = 0;
  *(undefined4 *)((int)this + 0x26c) = 0;
  ExceptionList = local_c;
  return this;
}


// ---- FUN_100115c0 @ 100115c0

CDialog * __thiscall FUN_100115c0(void *this,byte param_1)

{
  FUN_100115e0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_100115e0 @ 100115e0

void __fastcall FUN_100115e0(CDialog *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_100152c5;
  local_c = ExceptionList;
  local_4 = 8;
  ExceptionList = &local_c;
  CString::~CString((CString *)(param_1 + 0x260));
  local_4._0_1_ = 7;
  CWnd::~CWnd((CWnd *)(param_1 + 0x210));
  local_4._0_1_ = 6;
  CButton::~CButton((CButton *)(param_1 + 0x1d0));
  local_4._0_1_ = 5;
  CButton::~CButton((CButton *)(param_1 + 400));
  local_4._0_1_ = 4;
  CButton::~CButton((CButton *)(param_1 + 0x150));
  local_4._0_1_ = 3;
  CComboBox::~CComboBox((CComboBox *)(param_1 + 0x110));
  local_4._0_1_ = 2;
  CComboBox::~CComboBox((CComboBox *)(param_1 + 0xd0));
  local_4._0_1_ = 1;
  CComboBox::~CComboBox((CComboBox *)(param_1 + 0x90));
  local_4 = (uint)local_4._1_3_ << 8;
  CString::~CString((CString *)(param_1 + 0x60));
  local_4 = 0xffffffff;
  CDialog::~CDialog(param_1);
  ExceptionList = local_c;
  return;
}


// ---- FUN_100116b0 @ 100116b0

void __thiscall FUN_100116b0(void *this,CDataExchange *param_1)

{
  DDX_Control(param_1,0xe4,(CWnd *)((int)this + 0x90));
  DDX_Control(param_1,0xdf,(CWnd *)((int)this + 0xd0));
  DDX_Control(param_1,0xe0,(CWnd *)((int)this + 0x110));
  DDX_Control(param_1,0xda,(CWnd *)((int)this + 0x150));
  DDX_Control(param_1,0xdb,(CWnd *)((int)this + 400));
  DDX_Control(param_1,0xd9,(CWnd *)((int)this + 0x1d0));
  DDX_Control(param_1,0xd6,(CWnd *)((int)this + 0x210));
  DDX_Text(param_1,0xcc,(float *)((int)this + 0x250));
  DDX_Text(param_1,0xce,(float *)((int)this + 0x254));
  DDX_Text(param_1,0xd2,(float *)((int)this + 600));
  DDX_Text(param_1,0xd4,(float *)((int)this + 0x25c));
  DDX_Text(param_1,0xdc,(CString *)((int)this + 0x260));
  DDX_Check(param_1,0xe2,(int *)((int)this + 0x264));
  DDX_Check(param_1,0xe1,(int *)((int)this + 0x268));
  DDX_Check(param_1,0xe3,(int *)((int)this + 0x26c));
  return;
}


// ---- FUN_100117e0 @ 100117e0

undefined4 __fastcall FUN_100117e0(CDialog *param_1)

{
  int iVar1;
  undefined4 uVar2;
  CString *pCVar3;
  CDialog *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_100152d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = param_1;
  CDialog::OnInitDialog(param_1);
  if (*(void **)(param_1 + 0x88) != (void *)0x0) {
    iVar1 = FUN_1000e0e0(*(void **)(param_1 + 0x88),(undefined4 *)(param_1 + 0x80),
                         s_DP_SURVEY_MODE_1001c4e8);
    if (iVar1 == 0) {
      ExceptionList = local_c;
      return 0;
    }
    iVar1 = FUN_1000e0e0(*(void **)(param_1 + 0x88),(undefined4 *)(param_1 + 0x74),s_AP_MAG_1001c4e0
                        );
    if (iVar1 == 0) {
      ExceptionList = local_c;
      return 0;
    }
    iVar1 = FUN_1000e0e0(*(void **)(param_1 + 0x88),(undefined4 *)(param_1 + 0x6c),s_AP_WD_1001c4d8)
    ;
    if (iVar1 == 0) {
      ExceptionList = local_c;
      return 0;
    }
    iVar1 = FUN_1000e0e0(*(void **)(param_1 + 0x88),(undefined4 *)(param_1 + 0x70),
                         s_AP_PIXEL_SIZE_1001c220);
    if (iVar1 == 0) {
      ExceptionList = local_c;
      return 0;
    }
    iVar1 = FUN_1000e0e0(*(void **)(param_1 + 0x88),(undefined4 *)(param_1 + 0x68),
                         s_DP_STAGE_IS_1001c4ac);
    if (iVar1 == 0) {
      ExceptionList = local_c;
      return 0;
    }
    iVar1 = FUN_1000e0e0(*(void **)(param_1 + 0x88),(undefined4 *)(param_1 + 100),
                         s_DP_STAGE_INIT_1001c2dc);
    if (iVar1 == 0) {
      ExceptionList = local_c;
      return 0;
    }
    if (param_1 == (CDialog *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(param_1 + 0x20);
    }
    FUN_1000e050(*(void **)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x68),1,uVar2);
    if (param_1 == (CDialog *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(param_1 + 0x20);
    }
    FUN_1000e050(*(void **)(param_1 + 0x88),*(undefined4 *)(param_1 + 100),1,uVar2);
    FUN_10001260(param_1 + 0x210);
    pCVar3 = (CString *)FUN_10009da0(DAT_1001cc9c,&local_10,s_Survey_1001c330,s_Filename_1001c640);
    local_4 = 0;
    CString::operator=((CString *)(param_1 + 0x60),pCVar3);
    local_4 = 0xffffffff;
    CString::~CString((CString *)&local_10);
    *(undefined4 *)(param_1 + 0x84) = 1;
    FUN_10011eb0((CWnd *)param_1);
  }
  ExceptionList = local_c;
  return 1;
}


// ---- FUN_100119f0 @ 100119f0

void __fastcall FUN_100119f0(int param_1)

{
  **(undefined4 **)(param_1 + 0x78) = 1;
  FUN_10009f50(DAT_1001cc9c,s_Survey_1001c330,s_UseMinMag_1001c464);
  return;
}


// ---- FUN_10011a20 @ 10011a20

void __fastcall FUN_10011a20(int param_1)

{
  **(undefined4 **)(param_1 + 0x78) = 0;
  FUN_10009f50(DAT_1001cc9c,s_Survey_1001c330,s_UseMinMag_1001c464);
  return;
}


// ---- FUN_10011a50 @ 10011a50

void __fastcall FUN_10011a50(CWnd *param_1)

{
  CWnd::UpdateData(param_1,1);
  FUN_10012350((int)param_1);
  return;
}


// ---- FUN_10011a70 @ 10011a70

void __fastcall FUN_10011a70(CWnd *param_1)

{
  CWnd::UpdateData(param_1,1);
  FUN_100123f0((int)param_1);
  return;
}


// ---- FUN_10011a90 @ 10011a90

void __fastcall FUN_10011a90(CWnd *param_1)

{
  CWnd::UpdateData(param_1,1);
  FUN_10011cd0((int)param_1);
  return;
}


// ---- FUN_10011ab0 @ 10011ab0

void __fastcall FUN_10011ab0(CWnd *param_1)

{
  float10 fVar1;
  
  fVar1 = FUN_1000d9f0(*(void **)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x74));
  *(float *)(param_1 + 600) = (float)fVar1;
  FUN_10012350((int)param_1);
  CWnd::UpdateData(param_1,0);
  return;
}


// ---- FUN_10011ae0 @ 10011ae0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10011ae0(CWnd *param_1)

{
  float10 fVar1;
  
  fVar1 = FUN_1000d9f0(*(void **)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x6c));
  *(float *)(param_1 + 0x25c) = (float)(fVar1 * (float10)_DAT_100179a4);
  FUN_100123f0((int)param_1);
  CWnd::UpdateData(param_1,0);
  return;
}


// ---- FUN_10011b10 @ 10011b10

void __fastcall FUN_10011b10(CWnd *param_1)

{
  float10 fVar1;
  
  fVar1 = FUN_1000d9f0(*(void **)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x74));
  *(float *)(param_1 + 0x250) = (float)fVar1;
  FUN_10011cd0((int)param_1);
  CWnd::UpdateData(param_1,0);
  return;
}


// ---- FUN_10011b40 @ 10011b40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10011b40(CWnd *param_1)

{
  float10 fVar1;
  
  fVar1 = FUN_1000d9f0(*(void **)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x6c));
  *(float *)(param_1 + 0x254) = (float)(fVar1 * (float10)_DAT_100179a4);
  FUN_10011e10((int)param_1);
  CWnd::UpdateData(param_1,0);
  return;
}


// ---- FUN_10011b70 @ 10011b70

void __fastcall FUN_10011b70(CWnd *param_1)

{
  CWnd::UpdateData(param_1,1);
  FUN_10011e10((int)param_1);
  return;
}


// ---- FUN_10011b90 @ 10011b90

void __fastcall FUN_10011b90(CWnd *param_1)

{
  CWnd::PostNcDestroy(param_1);
  *(undefined4 *)(*(int *)(param_1 + 0x8c) + 0x60c) = 0;
  if (param_1 != (CWnd *)0x0) {
    (**(code **)(*(int *)param_1 + 4))(1);
  }
  return;
}


// ---- FUN_10011bc0 @ 10011bc0

void __thiscall FUN_10011bc0(void *this,uint param_1,CWnd *param_2)

{
  WORD wLanguage;
  HINSTANCE__ *hModule;
  HRSRC hResInfo;
  HGLOBAL pvVar2;
  char *lpName;
  undefined4 uVar1;
  
  *(CWnd **)((int)this + 0x8c) = param_2;
  if (*(int *)((int)this + 0x88) == 0) {
    wLanguage = 0x809;
  }
  else {
    uVar1 = FUN_1000d880(*(int *)((int)this + 0x88));
    wLanguage = (WORD)uVar1;
  }
  lpName = (char *)(param_1 & 0xffff);
  *(char **)((int)this + 0x44) = lpName;
  if (*(int *)((int)this + 0x40) == 0) {
    *(uint *)((int)this + 0x40) = param_1 & 0xffff;
  }
  hModule = AfxFindResourceHandle(lpName,(char *)0x5);
  hResInfo = FindResourceExA(hModule,(LPCSTR)0x5,lpName,wLanguage);
  if (hResInfo == (HRSRC)0x0) {
    hResInfo = FindResourceA(hModule,lpName,(LPCSTR)0x5);
  }
  pvVar2 = LoadResource(hModule,hResInfo);
  CDialog::CreateIndirect(this,pvVar2,param_2,hModule);
  return;
}


// ---- FUN_10011c50 @ 10011c50

void __fastcall FUN_10011c50(CWnd *param_1)

{
  CWnd *pCVar1;
  CWnd *pCVar2;
  
  pCVar1 = CWnd::GetDlgItem(param_1,0xca);
  pCVar2 = CWnd::GetDlgItem(param_1,0xcb);
  if (**(int **)(param_1 + 0x78) != 0) {
    SendMessageA(*(HWND *)(pCVar1 + 0x20),0xf1,1,0);
    SendMessageA(*(HWND *)(pCVar2 + 0x20),0xf1,0,0);
    return;
  }
  SendMessageA(*(HWND *)(pCVar1 + 0x20),0xf1,0,0);
  SendMessageA(*(HWND *)(pCVar2 + 0x20),0xf1,1,0);
  return;
}


// ---- FUN_10011cd0 @ 10011cd0

void __fastcall FUN_10011cd0(int param_1)

{
  CString *this;
  float10 fVar1;
  int local_10;
  void *local_c;
  undefined1 *local_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  local_8 = &LAB_100152f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = param_1;
  fVar1 = FUN_10011d70(param_1,*(float *)(param_1 + 0x250));
  *(float *)(*(int *)(param_1 + 0x78) + 0xc) = (float)fVar1;
  CString::CString((CString *)&local_10);
  local_4 = 0;
  CString::Format(this,(char *)&local_10);
  FUN_10009e80(DAT_1001cc9c,(BYTE *)s_Survey_1001c330,s_Survey_Pixel_Size_1001c42c);
  CString::~CString((CString *)&local_c);
  ExceptionList = local_8;
  return;
}


// ---- FUN_10011d70 @ 10011d70

float10 __thiscall FUN_10011d70(int param_1,float param_2)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = FUN_1000d9f0(*(void **)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x74));
  fVar2 = FUN_1000d9f0(*(void **)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x70));
  return (fVar2 * (float10)(float)fVar1) / (float10)param_2;
}


// ---- FUN_10011db0 @ 10011db0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_10011db0(int param_1,float param_2)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar2 = FUN_1000d9f0(*(void **)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x74));
  fVar3 = FUN_1000d9f0(*(void **)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x70));
  fVar2 = (fVar3 * (float10)(float)fVar2) / (float10)param_2;
  if ((float10)_DAT_10017058 < fVar2) {
    iVar1 = ftol();
    fVar2 = (float10)iVar1;
  }
  return fVar2;
}


// ---- FUN_10011e10 @ 10011e10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10011e10(int param_1)

{
  int local_10;
  void *local_c;
  undefined1 *local_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  local_8 = &LAB_10015318;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(float *)(*(int *)(param_1 + 0x78) + 0x324) = *(float *)(param_1 + 0x254) * _DAT_100179a8;
  local_10 = param_1;
  CString::CString((CString *)&local_10);
  local_4 = 0;
  CString::Format(*(CString **)(param_1 + 0x78),(char *)&local_10);
  FUN_10009e80(DAT_1001cc9c,(BYTE *)s_Survey_1001c330,s_Survey_WD_1001c420);
  CString::~CString((CString *)&local_c);
  ExceptionList = local_8;
  return;
}


// ---- FUN_10011eb0 @ 10011eb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10011eb0(CWnd *param_1)

{
  char cVar1;
  CString *pCVar2;
  int iVar3;
  LRESULT LVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  bool bVar10;
  float10 fVar11;
  HWND pHVar12;
  float local_30;
  int local_2c;
  int local_28;
  uint local_24;
  CStringArray local_20 [4];
  int local_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10015358;
  local_c = ExceptionList;
  iVar7 = 0;
  if (*(int *)(param_1 + 0x84) == 0) {
    return;
  }
  ExceptionList = &local_c;
  FUN_10011c50(param_1);
  local_30 = *(float *)(*(int *)(param_1 + 0x78) + 0xc);
  if (local_30 == _DAT_10017020) {
    FUN_10011b10(param_1);
  }
  else {
    fVar11 = FUN_10011db0((int)param_1,local_30);
    *(float *)(param_1 + 0x250) = (float)fVar11;
  }
  if (*(float *)(*(int *)(param_1 + 0x78) + 0x324) == _DAT_10017020) {
    FUN_10011b40(param_1);
  }
  else {
    *(float *)(param_1 + 0x254) = *(float *)(*(int *)(param_1 + 0x78) + 0x324) * _DAT_100179a4;
  }
  local_30 = *(float *)(*(int *)(param_1 + 0x78) + 0x10);
  if (local_30 == _DAT_10017020) {
    FUN_10011ab0(param_1);
  }
  else {
    fVar11 = FUN_10011db0((int)param_1,local_30);
    *(float *)(param_1 + 600) = (float)fVar11;
  }
  if (*(float *)(*(int *)(param_1 + 0x78) + 0x328) == _DAT_10017020) {
    FUN_10011ae0(param_1);
  }
  else {
    *(float *)(param_1 + 0x25c) = *(float *)(*(int *)(param_1 + 0x78) + 0x328) * _DAT_100179a4;
  }
  bVar10 = *(int *)(*(int *)(param_1 + 0x78) + 4) == 0;
  if (bVar10) {
    pHVar12 = *(HWND *)(param_1 + 0x1f0);
  }
  else {
    pHVar12 = *(HWND *)(param_1 + 0x1f0);
  }
  SendMessageA(pHVar12,0xf1,(uint)!bVar10,0);
  bVar10 = *(int *)(*(int *)(param_1 + 0x78) + 8) == 0;
  if (bVar10) {
    pHVar12 = *(HWND *)(param_1 + 0x170);
  }
  else {
    pHVar12 = *(HWND *)(param_1 + 0x170);
  }
  SendMessageA(pHVar12,0xf1,(uint)!bVar10,0);
  bVar10 = *(int *)(*(int *)(param_1 + 0x78) + 0x14) == 0;
  if (bVar10) {
    pHVar12 = *(HWND *)(param_1 + 0x1b0);
  }
  else {
    pHVar12 = *(HWND *)(param_1 + 0x1b0);
  }
  SendMessageA(pHVar12,0xf1,(uint)!bVar10,0);
  uVar5 = local_24;
  switch(*(undefined4 *)(*(int *)(param_1 + 0x78) + 0x368)) {
  case 0:
    uVar5 = 0x800c;
    break;
  case 1:
    uVar5 = 0x800d;
    break;
  case 2:
    uVar5 = 0x800e;
    break;
  case 3:
    uVar5 = 0x800f;
  }
  pCVar2 = FUN_1000d890(*(void **)(param_1 + 0x88),(CString *)&local_30,uVar5);
  local_4 = 0;
  CString::operator=((CString *)(param_1 + 0x260),pCVar2);
  local_4 = 0xffffffff;
  CString::~CString((CString *)&local_30);
  CStringArray::CStringArray(local_20);
  local_4 = 1;
  iVar3 = FUN_1000e200((char)local_20);
  SendMessageA(*(HWND *)(param_1 + 0xf0),0x14b,0,0);
  SendMessageA(*(HWND *)(param_1 + 0x130),0x14b,0,0);
  SendMessageA(*(HWND *)(param_1 + 0xb0),0x14b,0,0);
  if (0 < iVar3) {
    do {
      SendMessageA(*(HWND *)(param_1 + 0xf0),0x143,0,*(LPARAM *)(local_1c + iVar7 * 4));
      SendMessageA(*(HWND *)(param_1 + 0x130),0x143,0,*(LPARAM *)(local_1c + iVar7 * 4));
      SendMessageA(*(HWND *)(param_1 + 0xb0),0x143,0,*(LPARAM *)(local_1c + iVar7 * 4));
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar3);
  }
  CString::CString((CString *)&local_24,(char *)(*(int *)(param_1 + 0x78) + 0x24));
  local_4 = CONCAT31(local_4._1_3_,2);
  *(undefined4 *)(param_1 + 0x268) = *(undefined4 *)(*(int *)(param_1 + 0x78) + 0x18);
  if (*(int *)(local_24 - 8) == 0) {
LAB_1001219d:
    *(undefined4 *)(param_1 + 0x268) = 0;
  }
  else {
    LVar4 = SendMessageA(*(HWND *)(param_1 + 0xf0),0x14d,0xffffffff,local_24);
    if (LVar4 == -1) {
      uVar5 = 0xffffffff;
      pcVar8 = &DAT_1001c718;
      do {
        pcVar9 = pcVar8;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar9 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar9;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      pcVar8 = pcVar9 + -uVar5;
      pcVar9 = (char *)(*(int *)(param_1 + 0x78) + 0x24);
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar9 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar9 = pcVar9 + 1;
      }
      goto LAB_1001219d;
    }
  }
  CString::CString((CString *)&local_28,(char *)(*(int *)(param_1 + 0x78) + 0x123));
  local_4 = CONCAT31(local_4._1_3_,3);
  *(undefined4 *)(param_1 + 0x264) = *(undefined4 *)(*(int *)(param_1 + 0x78) + 0x1c);
  if (*(int *)(local_28 + -8) == 0) {
LAB_10012216:
    *(undefined4 *)(param_1 + 0x264) = 0;
  }
  else {
    LVar4 = SendMessageA(*(HWND *)(param_1 + 0x130),0x14d,0xffffffff,local_28);
    if (LVar4 == -1) {
      uVar5 = 0xffffffff;
      pcVar8 = &DAT_1001c718;
      do {
        pcVar9 = pcVar8;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar9 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar9;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      pcVar8 = pcVar9 + -uVar5;
      pcVar9 = (char *)(*(int *)(param_1 + 0x78) + 0x123);
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar9 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar9 = pcVar9 + 1;
      }
      goto LAB_10012216;
    }
  }
  CString::CString((CString *)&local_2c,(char *)(*(int *)(param_1 + 0x78) + 0x222));
  local_4 = CONCAT31(local_4._1_3_,4);
  *(undefined4 *)(param_1 + 0x26c) = *(undefined4 *)(*(int *)(param_1 + 0x78) + 0x20);
  if (*(int *)(local_2c + -8) != 0) {
    LVar4 = SendMessageA(*(HWND *)(param_1 + 0xb0),0x14d,0xffffffff,local_2c);
    if (LVar4 != -1) goto LAB_10012299;
    uVar5 = 0xffffffff;
    pcVar8 = &DAT_1001c718;
    do {
      pcVar9 = pcVar8;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar9 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar9;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar8 = pcVar9 + -uVar5;
    pcVar9 = (char *)(*(int *)(param_1 + 0x78) + 0x222);
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar9 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar9 = pcVar9 + 1;
    }
  }
  *(undefined4 *)(param_1 + 0x26c) = 0;
LAB_10012299:
  CWnd::UpdateData(param_1,0);
  local_4._0_1_ = 3;
  CString::~CString((CString *)&local_2c);
  local_4._0_1_ = 2;
  CString::~CString((CString *)&local_28);
  local_4 = CONCAT31(local_4._1_3_,1);
  CString::~CString((CString *)&local_24);
  local_4 = 0xffffffff;
  CStringArray::~CStringArray(local_20);
  ExceptionList = local_c;
  return;
}


// ---- FUN_10012300 @ 10012300

undefined4 FUN_10012300(void)

{
  return 0;
}


// ---- FUN_10012310 @ 10012310

/* WARNING: Removing unreachable block (ram,0x10012319) */

void __fastcall FUN_10012310(int param_1)

{
  *(undefined4 *)(*(int *)(param_1 + 0x78) + 4) = 1;
  FUN_10009f50(DAT_1001cc9c,s_Survey_1001c330,s_Save_Survey_1001c444);
  return;
}


// ---- FUN_10012350 @ 10012350

void __fastcall FUN_10012350(int param_1)

{
  CString *this;
  float10 fVar1;
  int local_10;
  void *local_c;
  undefined1 *local_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  local_8 = &LAB_10015378;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = param_1;
  fVar1 = FUN_10011d70(param_1,*(float *)(param_1 + 600));
  *(float *)(*(int *)(param_1 + 0x78) + 0x10) = (float)fVar1;
  CString::CString((CString *)&local_10);
  local_4 = 0;
  CString::Format(this,(char *)&local_10);
  FUN_10009e80(DAT_1001cc9c,(BYTE *)s_Survey_1001c330,s_Resolution_Pixel_Size_1001c3fc);
  CString::~CString((CString *)&local_c);
  ExceptionList = local_8;
  return;
}


// ---- FUN_100123f0 @ 100123f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_100123f0(int param_1)

{
  int local_10;
  void *local_c;
  undefined1 *local_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  local_8 = &LAB_10015398;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(float *)(*(int *)(param_1 + 0x78) + 0x328) = *(float *)(param_1 + 0x25c) * _DAT_100179a8;
  local_10 = param_1;
  CString::CString((CString *)&local_10);
  local_4 = 0;
  CString::Format(*(CString **)(param_1 + 0x78),(char *)&local_10);
  FUN_10009e80(DAT_1001cc9c,(BYTE *)s_Survey_1001c330,s_Resolution_WD_1001c3ec);
  CString::~CString((CString *)&local_c);
  ExceptionList = local_8;
  return;
}


// ---- FUN_10012490 @ 10012490

void __fastcall FUN_10012490(int param_1)

{
  LRESULT LVar1;
  
  LVar1 = SendMessageA(*(HWND *)(param_1 + 0x170),0xf0,0,0);
  if (LVar1 == 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x78) + 8) = 0;
  }
  else {
    *(undefined4 *)(*(int *)(param_1 + 0x78) + 8) = 1;
  }
  FUN_10009f50(DAT_1001cc9c,s_Survey_1001c330,s_Survey_Auto_Focus_1001c450);
  return;
}


// ---- FUN_100124e0 @ 100124e0

void __fastcall FUN_100124e0(int param_1)

{
  LRESULT LVar1;
  
  LVar1 = SendMessageA(*(HWND *)(param_1 + 0x1b0),0xf0,0,0);
  if (LVar1 == 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x78) + 0x14) = 0;
  }
  else {
    *(undefined4 *)(*(int *)(param_1 + 0x78) + 0x14) = 1;
  }
  FUN_10009f50(DAT_1001cc9c,s_Survey_1001c330,s_Resolution_Auto_Focus_1001c3c4);
  return;
}


// ---- FUN_10012530 @ 10012530

void __fastcall FUN_10012530(CWnd *param_1)

{
  CWnd CVar1;
  LRESULT LVar2;
  uint uVar3;
  uint uVar4;
  CWnd *pCVar5;
  CWnd *pCVar6;
  CWnd *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_100153b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = param_1;
  CString::CString((CString *)&local_10);
  local_4 = 0;
  LVar2 = SendMessageA(*(HWND *)(param_1 + 0xf0),0x147,0,0);
  CComboBox::GetLBText((CComboBox *)(param_1 + 0xd0),LVar2,(CString *)&local_10);
  uVar3 = 0xffffffff;
  pCVar5 = local_10;
  do {
    pCVar6 = pCVar5;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pCVar6 = pCVar5 + 1;
    CVar1 = *pCVar5;
    pCVar5 = pCVar6;
  } while (CVar1 != (CWnd)0x0);
  uVar3 = ~uVar3;
  pCVar5 = pCVar6 + -uVar3;
  pCVar6 = (CWnd *)(*(int *)(param_1 + 0x78) + 0x24);
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pCVar6 = *(undefined4 *)pCVar5;
    pCVar5 = pCVar5 + 4;
    pCVar6 = pCVar6 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pCVar6 = *pCVar5;
    pCVar5 = pCVar5 + 1;
    pCVar6 = pCVar6 + 1;
  }
  FUN_10009e80(DAT_1001cc9c,(BYTE *)s_Survey_1001c330,s_Survey_Macro_1001c378);
  if (*(int *)(local_10 + -8) == 0) {
    *(undefined4 *)(param_1 + 0x268) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x78) + 0x18) = 0;
    FUN_10009f50(DAT_1001cc9c,s_Survey_1001c330,s_Use_Survey_Macro_1001c3b0);
    CWnd::UpdateData(param_1,0);
  }
  local_4 = 0xffffffff;
  CString::~CString((CString *)&local_10);
  ExceptionList = local_c;
  return;
}


// ---- FUN_10012630 @ 10012630

void __fastcall FUN_10012630(CWnd *param_1)

{
  CWnd CVar1;
  LRESULT LVar2;
  uint uVar3;
  uint uVar4;
  CWnd *pCVar5;
  CWnd *pCVar6;
  CWnd *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_100153d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = param_1;
  CString::CString((CString *)&local_10);
  local_4 = 0;
  LVar2 = SendMessageA(*(HWND *)(param_1 + 0x130),0x147,0,0);
  CComboBox::GetLBText((CComboBox *)(param_1 + 0x110),LVar2,(CString *)&local_10);
  uVar3 = 0xffffffff;
  pCVar5 = local_10;
  do {
    pCVar6 = pCVar5;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pCVar6 = pCVar5 + 1;
    CVar1 = *pCVar5;
    pCVar5 = pCVar6;
  } while (CVar1 != (CWnd)0x0);
  uVar3 = ~uVar3;
  pCVar5 = pCVar6 + -uVar3;
  pCVar6 = (CWnd *)(*(int *)(param_1 + 0x78) + 0x123);
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pCVar6 = *(undefined4 *)pCVar5;
    pCVar5 = pCVar5 + 4;
    pCVar6 = pCVar6 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pCVar6 = *pCVar5;
    pCVar5 = pCVar5 + 1;
    pCVar6 = pCVar6 + 1;
  }
  FUN_10009e80(DAT_1001cc9c,(BYTE *)s_Survey_1001c330,s_Resolution_Macro_1001c364);
  if (*(int *)(local_10 + -8) == 0) {
    *(undefined4 *)(param_1 + 0x264) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x78) + 0x1c) = 0;
    FUN_10009f50(DAT_1001cc9c,s_Survey_1001c330,s_Use_Resolution_Macro_1001c398);
    CWnd::UpdateData(param_1,0);
  }
  local_4 = 0xffffffff;
  CString::~CString((CString *)&local_10);
  ExceptionList = local_c;
  return;
}


// ---- FUN_10012730 @ 10012730

void __fastcall FUN_10012730(CWnd *param_1)

{
  CWnd::UpdateData(param_1,1);
  *(undefined4 *)(*(int *)(param_1 + 0x78) + 0x1c) = *(undefined4 *)(param_1 + 0x264);
  FUN_10009f50(DAT_1001cc9c,s_Survey_1001c330,s_Use_Resolution_Macro_1001c398);
  return;
}


// ---- FUN_10012770 @ 10012770

void __fastcall FUN_10012770(CWnd *param_1)

{
  CWnd::UpdateData(param_1,1);
  *(undefined4 *)(*(int *)(param_1 + 0x78) + 0x18) = *(undefined4 *)(param_1 + 0x268);
  FUN_10009f50(DAT_1001cc9c,s_Survey_1001c330,s_Use_Survey_Macro_1001c3b0);
  return;
}


// ---- FUN_100127b0 @ 100127b0

void __fastcall FUN_100127b0(CWnd *param_1)

{
  CWnd::UpdateData(param_1,1);
  *(undefined4 *)(*(int *)(param_1 + 0x78) + 0x20) = *(undefined4 *)(param_1 + 0x26c);
  FUN_10009f50(DAT_1001cc9c,s_Survey_1001c330,s_Use_Exit_Macro_1001c388);
  return;
}


// ---- FUN_100127f0 @ 100127f0

void __fastcall FUN_100127f0(CWnd *param_1)

{
  CWnd CVar1;
  LRESULT LVar2;
  uint uVar3;
  uint uVar4;
  CWnd *pCVar5;
  CWnd *pCVar6;
  CWnd *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_100153f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = param_1;
  CString::CString((CString *)&local_10);
  local_4 = 0;
  LVar2 = SendMessageA(*(HWND *)(param_1 + 0xb0),0x147,0,0);
  CComboBox::GetLBText((CComboBox *)(param_1 + 0x90),LVar2,(CString *)&local_10);
  uVar3 = 0xffffffff;
  pCVar5 = local_10;
  do {
    pCVar6 = pCVar5;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pCVar6 = pCVar5 + 1;
    CVar1 = *pCVar5;
    pCVar5 = pCVar6;
  } while (CVar1 != (CWnd)0x0);
  uVar3 = ~uVar3;
  pCVar5 = pCVar6 + -uVar3;
  pCVar6 = (CWnd *)(*(int *)(param_1 + 0x78) + 0x222);
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pCVar6 = *(undefined4 *)pCVar5;
    pCVar5 = pCVar5 + 4;
    pCVar6 = pCVar6 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pCVar6 = *pCVar5;
    pCVar5 = pCVar5 + 1;
    pCVar6 = pCVar6 + 1;
  }
  FUN_10009e80(DAT_1001cc9c,(BYTE *)s_Survey_1001c330,s_Exit_Macro_1001c358);
  if (*(int *)(local_10 + -8) == 0) {
    *(undefined4 *)(param_1 + 0x26c) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x78) + 0x20) = 0;
    FUN_10009f50(DAT_1001cc9c,s_Survey_1001c330,s_Use_Exit_Macro_1001c388);
    CWnd::UpdateData(param_1,0);
  }
  local_4 = 0xffffffff;
  CString::~CString((CString *)&local_10);
  ExceptionList = local_c;
  return;
}


// ---- FUN_100128f0 @ 100128f0

void __fastcall FUN_100128f0(CWnd *param_1)

{
  undefined4 *puVar1;
  uchar uVar2;
  BOOL BVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  uchar *puVar9;
  uchar *puVar10;
  uchar *local_32c;
  char *local_328;
  char *local_324;
  LPCSTR local_320;
  char *local_31c;
  CArchive local_318 [36];
  undefined4 *local_2f4;
  undefined4 *local_2f0;
  undefined **local_2d4 [2];
  undefined4 local_2cc;
  undefined4 local_2c8;
  CString local_2c4 [4];
  CFile local_2c0 [16];
  tagOFNA local_2b0 [4];
  CHAR local_138 [300];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_100154aa;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CString::CString((CString *)&local_31c);
  local_4 = 0;
  CString::CString((CString *)&local_320);
  local_4._0_1_ = 1;
  CFile::CFile(local_2c0);
  local_4._0_1_ = 2;
  CException::CException((CException *)local_2d4);
  local_4._0_1_ = 3;
  CString::CString(local_2c4);
  local_4._0_1_ = 4;
  local_2d4[0] = &PTR_LAB_100179ac;
  local_2cc = 0;
  local_2c8 = 0xffffffff;
  CString::operator=(local_2c4,(char *)0x0);
  local_4._0_1_ = 5;
  CString::LoadStringA((CString *)&local_320,0x8014);
  local_2b0[0].hwndOwner = *(HWND *)(param_1 + 0x20);
  local_2b0[0].lpstrFileTitle = local_138;
  local_2b0[0].nMaxFile = 300;
  local_2b0[0].nMaxFileTitle = 300;
  local_2b0[0].lpstrFile = (LPSTR)&local_2b0[0].pvReserved;
  local_2b0[0].pvReserved._0_1_ = 0;
  local_2b0[0].lStructSize = 0x4c;
  local_2b0[0].hInstance = (HINSTANCE)0x0;
  local_2b0[0].lpstrFilter = s_Survey_Settings____SRV__1001c664;
  local_2b0[0].lpstrCustomFilter = (LPSTR)0x0;
  local_2b0[0].nMaxCustFilter = 0;
  local_2b0[0].nFilterIndex = 1;
  local_2b0[0].lpstrInitialDir = *(LPCSTR *)(*(int *)(param_1 + 0x8c) + 600);
  local_2b0[0].lpstrTitle = local_320;
  local_2b0[0].Flags = 0x80006;
  local_2b0[0].nFileOffset = 0;
  local_2b0[0].nFileExtension = 0;
  local_2b0[0].lpstrDefExt = (LPCSTR)0x0;
  local_2b0[0].lCustData = 0;
  local_2b0[0].lpfnHook = (LPOFNHOOKPROC)0x0;
  local_2b0[0].lpTemplateName = (LPCSTR)0x0;
  BVar3 = GetOpenFileNameA(local_2b0);
  if (BVar3 != 0) {
    CString::CString((CString *)&local_324);
    local_4._0_1_ = 6;
    CString::CString((CString *)&local_328);
    local_4._0_1_ = 7;
    CString::LoadStringA((CString *)&local_324,0x8013);
    CString::LoadStringA((CString *)&local_328,0x8015);
    CString::operator=((CString *)&local_31c,(char *)&local_2b0[0].pvReserved);
    if (*(int *)(local_31c + -8) == 0) {
      local_4._0_1_ = 6;
      CString::~CString((CString *)&local_328);
      local_4._0_1_ = 5;
      CString::~CString((CString *)&local_324);
      local_4._0_1_ = 8;
      goto LAB_10013222;
    }
    iVar4 = CFile::Open(local_2c0,local_31c,0,(CFileException *)local_2d4);
    if (iVar4 == 0) {
      CWnd::MessageBoxA(param_1,local_328,local_324,0);
      local_4._0_1_ = 6;
      CString::~CString((CString *)&local_328);
      local_4._0_1_ = 5;
      CString::~CString((CString *)&local_324);
      local_4._0_1_ = 9;
      goto LAB_10013222;
    }
    CArchive::CArchive(local_318,local_2c0,1,0x1000,(void *)0x0);
    local_4._0_1_ = 10;
    CCmdTarget::BeginWaitCursor((CCmdTarget *)param_1);
    CString::CString((CString *)&local_32c);
    local_4._0_1_ = 0xb;
    operator>>(local_318,(CString *)&local_32c);
    iVar4 = _mbscmp(local_32c,(uchar *)s_Stage_Survey_Settings_1001c64c);
    if (iVar4 != 0) {
      CWnd::MessageBoxA(param_1,local_328,local_324,0);
      CArchive::Close(local_318);
      CFile::Close(local_2c0);
      CCmdTarget::EndWaitCursor((CCmdTarget *)param_1);
      local_4._0_1_ = 10;
      CString::~CString((CString *)&local_32c);
      local_4._0_1_ = 7;
      CArchive::~CArchive(local_318);
      local_4._0_1_ = 6;
      CString::~CString((CString *)&local_328);
      local_4._0_1_ = 5;
      CString::~CString((CString *)&local_324);
      local_4._0_1_ = 0xc;
      goto LAB_10013222;
    }
    if (local_2f0 < local_2f4 + 1) {
      CArchive::FillBuffer(local_318,(int)local_2f4 + (4 - (int)local_2f0));
    }
    puVar6 = *(undefined4 **)(param_1 + 0x78);
    puVar5 = local_2f4 + 1;
    puVar1 = local_2f4 + 2;
    local_2f4 = puVar5;
    if (local_2f0 < puVar1) {
      CArchive::FillBuffer(local_318,(int)puVar5 + (4 - (int)local_2f0));
    }
    *puVar6 = *local_2f4;
    iVar4 = *(int *)(param_1 + 0x78);
    puVar6 = local_2f4 + 1;
    puVar1 = local_2f4 + 2;
    local_2f4 = puVar6;
    if (local_2f0 < puVar1) {
      CArchive::FillBuffer(local_318,(int)puVar6 + (4 - (int)local_2f0));
    }
    *(undefined4 *)(iVar4 + 8) = *local_2f4;
    iVar4 = *(int *)(param_1 + 0x78);
    puVar6 = local_2f4 + 1;
    puVar1 = local_2f4 + 2;
    local_2f4 = puVar6;
    if (local_2f0 < puVar1) {
      CArchive::FillBuffer(local_318,(int)puVar6 + (4 - (int)local_2f0));
    }
    *(undefined4 *)(iVar4 + 0xc) = *local_2f4;
    iVar4 = *(int *)(param_1 + 0x78);
    puVar6 = local_2f4 + 1;
    puVar1 = local_2f4 + 2;
    local_2f4 = puVar6;
    if (local_2f0 < puVar1) {
      CArchive::FillBuffer(local_318,(int)puVar6 + (4 - (int)local_2f0));
    }
    *(undefined4 *)(iVar4 + 0x324) = *local_2f4;
    iVar4 = *(int *)(param_1 + 0x78);
    puVar6 = local_2f4 + 1;
    puVar1 = local_2f4 + 2;
    local_2f4 = puVar6;
    if (local_2f0 < puVar1) {
      CArchive::FillBuffer(local_318,(int)puVar6 + (4 - (int)local_2f0));
    }
    *(undefined4 *)(iVar4 + 0x340) = *local_2f4;
    iVar4 = *(int *)(param_1 + 0x78);
    puVar6 = local_2f4 + 1;
    puVar1 = local_2f4 + 2;
    local_2f4 = puVar6;
    if (local_2f0 < puVar1) {
      CArchive::FillBuffer(local_318,(int)puVar6 + (4 - (int)local_2f0));
    }
    *(undefined4 *)(iVar4 + 0x344) = *local_2f4;
    iVar4 = *(int *)(param_1 + 0x78);
    puVar6 = local_2f4 + 1;
    puVar1 = local_2f4 + 2;
    local_2f4 = puVar6;
    if (local_2f0 < puVar1) {
      CArchive::FillBuffer(local_318,(int)puVar6 + (4 - (int)local_2f0));
    }
    *(undefined4 *)(iVar4 + 4) = *local_2f4;
    iVar4 = *(int *)(param_1 + 0x78);
    puVar6 = local_2f4 + 1;
    puVar1 = local_2f4 + 2;
    local_2f4 = puVar6;
    if (local_2f0 < puVar1) {
      CArchive::FillBuffer(local_318,(int)puVar6 + (4 - (int)local_2f0));
    }
    *(undefined4 *)(iVar4 + 0x18) = *local_2f4;
    local_2f4 = local_2f4 + 1;
    operator>>(local_318,(CString *)&local_32c);
    uVar7 = 0xffffffff;
    puVar9 = local_32c;
    do {
      puVar10 = puVar9;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      puVar10 = puVar9 + 1;
      uVar2 = *puVar9;
      puVar9 = puVar10;
    } while (uVar2 != '\0');
    uVar7 = ~uVar7;
    puVar9 = puVar10 + -uVar7;
    puVar10 = (uchar *)(*(int *)(param_1 + 0x78) + 0x24);
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)puVar10 = *(undefined4 *)puVar9;
      puVar9 = puVar9 + 4;
      puVar10 = puVar10 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
    iVar4 = *(int *)(param_1 + 0x78);
    if (local_2f0 < local_2f4 + 1) {
      CArchive::FillBuffer(local_318,(int)local_2f4 + (4 - (int)local_2f0));
    }
    *(undefined4 *)(iVar4 + 0x10) = *local_2f4;
    iVar4 = *(int *)(param_1 + 0x78);
    puVar6 = local_2f4 + 1;
    puVar1 = local_2f4 + 2;
    local_2f4 = puVar6;
    if (local_2f0 < puVar1) {
      CArchive::FillBuffer(local_318,(int)puVar6 + (4 - (int)local_2f0));
    }
    *(undefined4 *)(iVar4 + 0x328) = *local_2f4;
    iVar4 = *(int *)(param_1 + 0x78);
    puVar6 = local_2f4 + 1;
    puVar1 = local_2f4 + 2;
    local_2f4 = puVar6;
    if (local_2f0 < puVar1) {
      CArchive::FillBuffer(local_318,(int)puVar6 + (4 - (int)local_2f0));
    }
    *(undefined4 *)(iVar4 + 0x348) = *local_2f4;
    iVar4 = *(int *)(param_1 + 0x78);
    puVar6 = local_2f4 + 1;
    puVar1 = local_2f4 + 2;
    local_2f4 = puVar6;
    if (local_2f0 < puVar1) {
      CArchive::FillBuffer(local_318,(int)puVar6 + (4 - (int)local_2f0));
    }
    *(undefined4 *)(iVar4 + 0x34c) = *local_2f4;
    iVar4 = *(int *)(param_1 + 0x78);
    puVar6 = local_2f4 + 1;
    puVar1 = local_2f4 + 2;
    local_2f4 = puVar6;
    if (local_2f0 < puVar1) {
      CArchive::FillBuffer(local_318,(int)puVar6 + (4 - (int)local_2f0));
    }
    *(undefined4 *)(iVar4 + 0x14) = *local_2f4;
    iVar4 = *(int *)(param_1 + 0x78);
    puVar6 = local_2f4 + 1;
    puVar1 = local_2f4 + 2;
    local_2f4 = puVar6;
    if (local_2f0 < puVar1) {
      CArchive::FillBuffer(local_318,(int)puVar6 + (4 - (int)local_2f0));
    }
    *(undefined4 *)(iVar4 + 0x1c) = *local_2f4;
    local_2f4 = local_2f4 + 1;
    operator>>(local_318,(CString *)&local_32c);
    uVar7 = 0xffffffff;
    puVar9 = local_32c;
    do {
      puVar10 = puVar9;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      puVar10 = puVar9 + 1;
      uVar2 = *puVar9;
      puVar9 = puVar10;
    } while (uVar2 != '\0');
    uVar7 = ~uVar7;
    puVar9 = puVar10 + -uVar7;
    puVar10 = (uchar *)(*(int *)(param_1 + 0x78) + 0x123);
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)puVar10 = *(undefined4 *)puVar9;
      puVar9 = puVar9 + 4;
      puVar10 = puVar10 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
    iVar4 = *(int *)(param_1 + 0x78);
    if (local_2f0 < local_2f4 + 1) {
      CArchive::FillBuffer(local_318,(int)local_2f4 + (4 - (int)local_2f0));
    }
    *(undefined4 *)(iVar4 + 0x20) = *local_2f4;
    local_2f4 = local_2f4 + 1;
    operator>>(local_318,(CString *)&local_32c);
    uVar7 = 0xffffffff;
    do {
      puVar9 = local_32c;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      puVar9 = local_32c + 1;
      uVar2 = *local_32c;
      local_32c = puVar9;
    } while (uVar2 != '\0');
    uVar7 = ~uVar7;
    puVar9 = puVar9 + -uVar7;
    puVar10 = (uchar *)(*(int *)(param_1 + 0x78) + 0x222);
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)puVar10 = *(undefined4 *)puVar9;
      puVar9 = puVar9 + 4;
      puVar10 = puVar10 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
    CArchive::Close(local_318);
    CFile::Close(local_2c0);
    CCmdTarget::EndWaitCursor((CCmdTarget *)param_1);
    FUN_10011eb0(param_1);
    FUN_10009f50(DAT_1001cc9c,s_Survey_1001c330,s_UseMinMag_1001c464);
    FUN_10009f50(DAT_1001cc9c,s_Survey_1001c330,s_Survey_Auto_Focus_1001c450);
    FUN_10011cd0((int)param_1);
    FUN_10011e10((int)param_1);
    ftol();
    FUN_10009f50(DAT_1001cc9c,s_Survey_1001c330,s_Survey_Brightness_1001c338);
    FUN_10009f50(DAT_1001cc9c,s_Survey_1001c330,s_Save_Survey_1001c444);
    FUN_10009f50(DAT_1001cc9c,s_Survey_1001c330,s_Use_Survey_Macro_1001c3b0);
    FUN_10009e80(DAT_1001cc9c,(BYTE *)s_Survey_1001c330,s_Survey_Macro_1001c378);
    FUN_10012350((int)param_1);
    FUN_100123f0((int)param_1);
    ftol();
    FUN_10009f50(DAT_1001cc9c,s_Survey_1001c330,s_Resolution_Brightness_1001c318);
    FUN_10009f50(DAT_1001cc9c,s_Survey_1001c330,s_Resolution_Auto_Focus_1001c3c4);
    FUN_10009f50(DAT_1001cc9c,s_Survey_1001c330,s_Use_Resolution_Macro_1001c398);
    FUN_10009e80(DAT_1001cc9c,(BYTE *)s_Survey_1001c330,s_Resolution_Macro_1001c364);
    FUN_10009f50(DAT_1001cc9c,s_Survey_1001c330,s_Use_Exit_Macro_1001c388);
    FUN_10009e80(DAT_1001cc9c,(BYTE *)s_Survey_1001c330,s_Exit_Macro_1001c358);
    local_4._0_1_ = 10;
    CString::~CString((CString *)&local_32c);
    local_4._0_1_ = 7;
    CArchive::~CArchive(local_318);
    local_4._0_1_ = 6;
    CString::~CString((CString *)&local_328);
    local_4._0_1_ = 5;
    CString::~CString((CString *)&local_324);
  }
  local_4._0_1_ = 0xd;
LAB_10013222:
  local_2d4[0] = &PTR_LAB_100179ac;
  CString::~CString(local_2c4);
  local_2d4[0] = &PTR_GetRuntimeClass_10016fdc;
  local_4._0_1_ = 1;
  CFile::~CFile(local_2c0);
  local_4 = (uint)local_4._1_3_ << 8;
  CString::~CString((CString *)&local_320);
  local_4 = 0xffffffff;
  CString::~CString((CString *)&local_31c);
  ExceptionList = local_c;
  return;
}


// ---- FUN_10013280 @ 10013280

void __fastcall FUN_10013280(undefined4 *param_1)

{
  *param_1 = &PTR_GetRuntimeClass_10016fdc;
  return;
}


// ---- FUN_10013290 @ 10013290

undefined4 * __thiscall FUN_10013290(void *this,byte param_1)

{
  FUN_100132b0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_100132b0 @ 100132b0

void __fastcall FUN_100132b0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_100154c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_100179ac;
  local_4 = 0;
  CString::~CString((CString *)(param_1 + 4));
  *param_1 = &PTR_GetRuntimeClass_10016fdc;
  ExceptionList = local_c;
  return;
}


// ---- FUN_10013300 @ 10013300

void __fastcall FUN_10013300(CWnd *param_1)

{
  undefined4 uVar1;
  undefined1 uVar2;
  int iVar3;
  CString *pCVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  char *unaff_EBP;
  uchar *local_f4;
  undefined4 local_f0;
  char *local_ec;
  char *local_e8;
  CString aCStack_e4 [4];
  CArchive aCStack_e0 [36];
  undefined4 *puStack_bc;
  undefined4 *puStack_b8;
  CString *local_a4;
  CString local_a0 [4];
  undefined **local_9c;
  undefined **local_98;
  undefined **local_94;
  undefined4 local_90;
  CString local_8c [4];
  CFile aCStack_88 [4];
  CFile aCStack_84 [4];
  CFile aCStack_80 [16];
  CDialog local_70 [96];
  CString local_10 [4];
  void *local_c;
  int local_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  local_8._0_1_ = 0xbb;
  local_8._1_3_ = 0x100155;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1000a560(local_70,(CWnd *)0x0);
  local_4 = 0;
  CString::CString((CString *)&local_f4);
  local_4 = CONCAT31(local_4._1_3_,1);
  CString::operator=(local_10,(CString *)(param_1 + 0x60));
  COleControl::PreModalDialog(*(COleControl **)(param_1 + 0x8c),(HWND__ *)0x0);
  iVar3 = CDialog::DoModal(local_70);
  if (iVar3 == 1) {
    CString::operator=((CString *)&local_f4,local_10);
    iVar3 = CString::Find((CString *)&local_f4,'\\');
    while (iVar3 != -1) {
      CString::Find((CString *)&local_f4,'\\');
      pCVar4 = (CString *)CString::Mid((CString *)&local_f4,(int)&local_e8);
      local_8._0_1_ = 2;
      CString::operator=((CString *)&stack0xffffff08,pCVar4);
      local_8._0_1_ = 1;
      CString::~CString((CString *)&local_ec);
      iVar3 = CString::Find((CString *)&stack0xffffff08,'\\');
    }
    iVar3 = CString::Find((CString *)&local_f4,'.');
    while (iVar3 != -1) {
      CString::Find((CString *)&local_f0,'.');
      pCVar4 = (CString *)CString::Left((CString *)&local_f0,(int)aCStack_e4);
      local_4._0_1_ = 3;
      CString::operator=((CString *)&local_f4,pCVar4);
      local_4 = CONCAT31(local_4._1_3_,1);
      CString::~CString((CString *)&local_e8);
      iVar3 = CString::Find((CString *)&local_f4,'.');
    }
  }
  COleControl::PostModalDialog(*(COleControl **)(param_1 + 0x8c),(HWND__ *)0x0);
  iVar3 = _mbscmp(local_f4,&DAT_1001c718);
  if (iVar3 != 0) {
    CString::operator=((CString *)(param_1 + 0x60),(CString *)&local_f4);
    pcVar5 = (char *)operator+(aCStack_e4,(CString *)(*(int *)(param_1 + 0x8c) + 600));
    local_8._0_1_ = 4;
    pCVar4 = (CString *)operator+((CString *)&local_ec,pcVar5);
    local_c._0_1_ = 5;
    CString::operator=((CString *)&stack0xffffff04,pCVar4);
    local_c._0_1_ = 4;
    CString::~CString((CString *)&local_f0);
    local_c._0_1_ = 1;
    CString::~CString((CString *)&local_ec);
    CFile::CFile(aCStack_88);
    local_c._0_1_ = 6;
    CException::CException((CException *)&local_9c);
    local_c._0_1_ = 7;
    CString::CString(local_8c);
    local_c._0_1_ = 8;
    local_9c = &PTR_LAB_100179ac;
    local_94 = (undefined **)0x0;
    local_90 = 0xffffffff;
    CString::operator=(local_8c,(char *)0x0);
    local_c._0_1_ = 9;
    CString::CString((CString *)&local_f4);
    local_c = (void *)CONCAT31(local_c._1_3_,10);
    iVar3 = CFile::Open(aCStack_88,unaff_EBP,0x11,(CFileException *)&local_9c);
    if (iVar3 != 0) {
      CFile::Close(aCStack_88);
      CString::CString((CString *)&local_f0);
      local_c._0_1_ = 0xb;
      CString::CString((CString *)&local_ec);
      local_c._0_1_ = 0xc;
      CString::CString((CString *)&local_a4);
      local_c._0_1_ = 0xd;
      pCVar4 = FUN_1000d890(*(void **)(param_1 + 0x88),local_a0,0x8010);
      local_c._0_1_ = 0xe;
      CString::operator=((CString *)&local_f0,pCVar4);
      local_c._0_1_ = 0xd;
      CString::~CString(local_a0);
      pCVar4 = FUN_1000d890(*(void **)(param_1 + 0x88),local_a0,0x8011);
      local_c._0_1_ = 0xf;
      CString::operator=((CString *)&local_a4,pCVar4);
      local_c = (void *)CONCAT31(local_c._1_3_,0xd);
      CString::~CString(local_a0);
      CString::Format(local_a4,(char *)&local_ec);
      iVar3 = CWnd::MessageBoxA(param_1,local_e8,local_ec,0x34);
      local_8._0_1_ = 0xc;
      uVar2 = (undefined1)local_8;
      local_8._0_1_ = 0xc;
      if (iVar3 != 6) {
        CString::~CString(local_a0);
        local_8._0_1_ = 0xb;
        CString::~CString((CString *)&local_e8);
        local_8._0_1_ = 10;
        CString::~CString((CString *)&local_ec);
        local_8._0_1_ = 9;
        CString::~CString((CString *)&local_f0);
        local_98 = &PTR_LAB_100179ac;
        local_8._0_1_ = 0x10;
        CString::~CString((CString *)aCStack_88);
        local_98 = &PTR_GetRuntimeClass_10016fdc;
        local_8._0_1_ = 1;
        CFile::~CFile(aCStack_84);
        local_8 = (uint)local_8._1_3_ << 8;
        CString::~CString((CString *)&stack0xffffff08);
        local_8._0_1_ = 0x11;
        local_8._1_3_ = 0;
        goto LAB_10013b82;
      }
      local_8._0_1_ = uVar2;
      CString::~CString(local_a0);
      local_8._0_1_ = 0xb;
      CString::~CString((CString *)&local_e8);
      local_8._0_1_ = 10;
      CString::~CString((CString *)&local_ec);
    }
    CCmdTarget::BeginWaitCursor((CCmdTarget *)param_1);
    CFile::Open(aCStack_80,(char *)local_f4,0x1011,(CFileException *)&local_94);
    CArchive::CArchive(aCStack_e0,aCStack_80,0,0x1000,(void *)0x0);
    local_4 = CONCAT31(local_4._1_3_,0x12);
    CString::operator=((CString *)&local_ec,s_Stage_Survey_Settings_1001c64c);
    operator<<(aCStack_e0,(CString *)&local_ec);
    if (puStack_b8 < puStack_bc + 1) {
      CArchive::Flush(aCStack_e0);
    }
    *puStack_bc = 1;
    puVar6 = puStack_bc + 1;
    puVar7 = puStack_bc + 2;
    uVar1 = **(undefined4 **)(param_1 + 0x78);
    puStack_bc = puVar6;
    if (puStack_b8 < puVar7) {
      CArchive::Flush(aCStack_e0);
    }
    *puStack_bc = uVar1;
    puVar6 = puStack_bc + 1;
    puVar7 = puStack_bc + 2;
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x78) + 8);
    puStack_bc = puVar6;
    if (puStack_b8 < puVar7) {
      CArchive::Flush(aCStack_e0);
    }
    *puStack_bc = uVar1;
    puVar6 = puStack_bc + 1;
    puVar7 = puStack_bc + 2;
    local_f0 = *(undefined4 *)(*(int *)(param_1 + 0x78) + 0xc);
    puStack_bc = puVar6;
    if (puStack_b8 < puVar7) {
      CArchive::Flush(aCStack_e0);
    }
    *puStack_bc = local_f0;
    puVar6 = puStack_bc + 1;
    puVar7 = puStack_bc + 2;
    local_f0 = *(undefined4 *)(*(int *)(param_1 + 0x78) + 0x324);
    puStack_bc = puVar6;
    if (puStack_b8 < puVar7) {
      CArchive::Flush(aCStack_e0);
    }
    *puStack_bc = local_f0;
    puVar6 = puStack_bc + 1;
    puVar7 = puStack_bc + 2;
    local_f0 = *(undefined4 *)(*(int *)(param_1 + 0x78) + 0x340);
    puStack_bc = puVar6;
    if (puStack_b8 < puVar7) {
      CArchive::Flush(aCStack_e0);
    }
    *puStack_bc = local_f0;
    puVar6 = puStack_bc + 1;
    puVar7 = puStack_bc + 2;
    local_f0 = *(undefined4 *)(*(int *)(param_1 + 0x78) + 0x344);
    puStack_bc = puVar6;
    if (puStack_b8 < puVar7) {
      CArchive::Flush(aCStack_e0);
    }
    *puStack_bc = local_f0;
    puVar6 = puStack_bc + 1;
    puVar7 = puStack_bc + 2;
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x78) + 4);
    puStack_bc = puVar6;
    if (puStack_b8 < puVar7) {
      CArchive::Flush(aCStack_e0);
    }
    *puStack_bc = uVar1;
    puVar6 = puStack_bc + 1;
    puVar7 = puStack_bc + 2;
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x78) + 0x18);
    puStack_bc = puVar6;
    if (puStack_b8 < puVar7) {
      CArchive::Flush(aCStack_e0);
    }
    *puStack_bc = uVar1;
    puStack_bc = puStack_bc + 1;
    CString::operator=((CString *)&local_ec,(char *)(*(int *)(param_1 + 0x78) + 0x24));
    operator<<(aCStack_e0,(CString *)&local_ec);
    local_f0 = *(undefined4 *)(*(int *)(param_1 + 0x78) + 0x10);
    if (puStack_b8 < puStack_bc + 1) {
      CArchive::Flush(aCStack_e0);
    }
    *puStack_bc = local_f0;
    puVar6 = puStack_bc + 1;
    puVar7 = puStack_bc + 2;
    local_f0 = *(undefined4 *)(*(int *)(param_1 + 0x78) + 0x328);
    puStack_bc = puVar6;
    if (puStack_b8 < puVar7) {
      CArchive::Flush(aCStack_e0);
    }
    *puStack_bc = local_f0;
    puVar6 = puStack_bc + 1;
    puVar7 = puStack_bc + 2;
    local_f0 = *(undefined4 *)(*(int *)(param_1 + 0x78) + 0x348);
    puStack_bc = puVar6;
    if (puStack_b8 < puVar7) {
      CArchive::Flush(aCStack_e0);
    }
    *puStack_bc = local_f0;
    puVar6 = puStack_bc + 1;
    puVar7 = puStack_bc + 2;
    local_f0 = *(undefined4 *)(*(int *)(param_1 + 0x78) + 0x34c);
    puStack_bc = puVar6;
    if (puStack_b8 < puVar7) {
      CArchive::Flush(aCStack_e0);
    }
    *puStack_bc = local_f0;
    puVar6 = puStack_bc + 1;
    puVar7 = puStack_bc + 2;
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x78) + 0x14);
    puStack_bc = puVar6;
    if (puStack_b8 < puVar7) {
      CArchive::Flush(aCStack_e0);
    }
    *puStack_bc = uVar1;
    puVar6 = puStack_bc + 1;
    puVar7 = puStack_bc + 2;
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x78) + 0x1c);
    puStack_bc = puVar6;
    if (puStack_b8 < puVar7) {
      CArchive::Flush(aCStack_e0);
    }
    *puStack_bc = uVar1;
    puStack_bc = puStack_bc + 1;
    CString::operator=((CString *)&local_ec,(char *)(*(int *)(param_1 + 0x78) + 0x123));
    operator<<(aCStack_e0,(CString *)&local_ec);
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x78) + 0x20);
    if (puStack_b8 < puStack_bc + 1) {
      CArchive::Flush(aCStack_e0);
    }
    *puStack_bc = uVar1;
    puStack_bc = puStack_bc + 1;
    CString::operator=((CString *)&local_ec,(char *)(*(int *)(param_1 + 0x78) + 0x222));
    operator<<(aCStack_e0,(CString *)&local_ec);
    CArchive::Close(aCStack_e0);
    CFile::Close(aCStack_80);
    FUN_10009e80(DAT_1001cc9c,(BYTE *)s_Survey_1001c330,s_Filename_1001c640);
    CCmdTarget::EndWaitCursor((CCmdTarget *)param_1);
    local_4._0_1_ = 10;
    CArchive::~CArchive(aCStack_e0);
    local_4._0_1_ = 9;
    CString::~CString((CString *)&local_ec);
    local_94 = &PTR_LAB_100179ac;
    local_4._0_1_ = 0x13;
    CString::~CString((CString *)aCStack_84);
    local_94 = &PTR_GetRuntimeClass_10016fdc;
    local_4 = CONCAT31(local_4._1_3_,1);
    CFile::~CFile(aCStack_80);
  }
  local_4 = local_4 & 0xffffff00;
  CString::~CString((CString *)&local_f4);
  local_4 = 0x14;
LAB_10013b82:
  CString::~CString(local_10);
  local_4 = 0xffffffff;
  CDialog::~CDialog(local_70);
  ExceptionList = local_c;
  return;
}


// ---- FUN_10013bc0 @ 10013bc0

CButton * __thiscall FUN_10013bc0(void *this,byte param_1)

{
  CButton::~CButton(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_10013c00 @ 10013c00

CComboBox * __thiscall FUN_10013c00(void *this,byte param_1)

{
  CComboBox::~CComboBox(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- PreInitDialog @ 10013c20

void __thiscall CDialog::PreInitDialog(CDialog *this)

{
                    /* WARNING: Could not recover jumptable at 0x10013c20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PreInitDialog(this);
  return;
}


// ---- OnCancel @ 10013c26

void __thiscall CDialog::OnCancel(CDialog *this)

{
                    /* WARNING: Could not recover jumptable at 0x10013c26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnCancel(this);
  return;
}


// ---- OnOK @ 10013c2c

void __thiscall CDialog::OnOK(CDialog *this)

{
                    /* WARNING: Could not recover jumptable at 0x10013c2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnOK(this);
  return;
}


// ---- OnSetFont @ 10013c32

void __thiscall CDialog::OnSetFont(CDialog *this,CFont *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10013c32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnSetFont(this,param_1);
  return;
}


// ---- DoModal @ 10013c38

int __thiscall CDialog::DoModal(CDialog *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10013c38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = DoModal(this);
  return iVar1;
}


// ---- SetOccDialogInfo @ 10013c3e

int __thiscall CDialog::SetOccDialogInfo(CDialog *this,_AFX_OCC_DIALOG_INFO *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10013c3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetOccDialogInfo(this,param_1);
  return iVar1;
}


// ---- IsFrameWnd @ 10013c44

int __thiscall CWnd::IsFrameWnd(CWnd *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10013c44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = IsFrameWnd(this);
  return iVar1;
}


// ---- CheckAutoCenter @ 10013c4a

int __thiscall CDialog::CheckAutoCenter(CDialog *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10013c4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CheckAutoCenter(this);
  return iVar1;
}


// ---- OnChildNotify @ 10013c50

int __thiscall CWnd::OnChildNotify(CWnd *this,uint param_1,uint param_2,long param_3,long *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10013c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnChildNotify(this,param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- PostNcDestroy @ 10013c56

void __thiscall CWnd::PostNcDestroy(CWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x10013c56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PostNcDestroy(this);
  return;
}


// ---- DefWindowProcA @ 10013c5c

long __thiscall CWnd::DefWindowProcA(CWnd *this,uint param_1,uint param_2,long param_3)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10013c5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = DefWindowProcA(this,param_1,param_2,param_3);
  return lVar1;
}


// ---- OnWndMsg @ 10013c62

int __thiscall CWnd::OnWndMsg(CWnd *this,uint param_1,uint param_2,long param_3,long *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10013c62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnWndMsg(this,param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- WindowProc @ 10013c68

long __thiscall CWnd::WindowProc(CWnd *this,uint param_1,uint param_2,long param_3)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10013c68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = WindowProc(this,param_1,param_2,param_3);
  return lVar1;
}


// ---- OnAmbientProperty @ 10013c6e

int __thiscall
CWnd::OnAmbientProperty(CWnd *this,COleControlSite *param_1,long param_2,tagVARIANT *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10013c6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnAmbientProperty(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- GetSuperWndProcAddr @ 10013c7a

_func_long_HWND___ptr_uint_uint_long ** __thiscall CWnd::GetSuperWndProcAddr(CWnd *this)

{
  _func_long_HWND___ptr_uint_uint_long **pp_Var1;
  
                    /* WARNING: Could not recover jumptable at 0x10013c7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pp_Var1 = GetSuperWndProcAddr(this);
  return pp_Var1;
}


// ---- OnNotify @ 10013c80

int __thiscall CWnd::OnNotify(CWnd *this,uint param_1,long param_2,long *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10013c80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnNotify(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- OnCommand @ 10013c86

int __thiscall CWnd::OnCommand(CWnd *this,uint param_1,long param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10013c86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCommand(this,param_1,param_2);
  return iVar1;
}


// ---- EndModalLoop @ 10013c8c

void __thiscall CWnd::EndModalLoop(CWnd *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10013c8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EndModalLoop(this,param_1);
  return;
}


// ---- ContinueModal @ 10013c92

int __thiscall CWnd::ContinueModal(CWnd *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10013c92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ContinueModal(this);
  return iVar1;
}


// ---- WinHelpA @ 10013c98

void __thiscall CWnd::WinHelpA(CWnd *this,ulong param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10013c98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WinHelpA(this,param_1,param_2);
  return;
}


// ---- GetScrollBarCtrl @ 10013c9e

CScrollBar * __thiscall CWnd::GetScrollBarCtrl(CWnd *this,int param_1)

{
  CScrollBar *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10013c9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetScrollBarCtrl(this,param_1);
  return pCVar1;
}


// ---- OnToolHitTest @ 10013ca4

int __thiscall CWnd::OnToolHitTest(void)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10013ca4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnToolHitTest();
  return iVar1;
}


// ---- CalcWindowRect @ 10013caa

void __thiscall CWnd::CalcWindowRect(CWnd *this,tagRECT *param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10013caa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CalcWindowRect(this,param_1,param_2);
  return;
}


// ---- PreCreateWindow @ 10013cb0

int __thiscall CWnd::PreCreateWindow(CWnd *this,tagCREATESTRUCTA *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10013cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = PreCreateWindow(this,param_1);
  return iVar1;
}


// ---- DestroyWindow @ 10013cb6

int __thiscall CWnd::DestroyWindow(CWnd *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10013cb6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = DestroyWindow(this);
  return iVar1;
}


// ---- Create @ 10013cbc

int __thiscall
CWnd::Create(CWnd *this,char *param_1,char *param_2,ulong param_3,tagRECT *param_4,CWnd *param_5,
            uint param_6,CCreateContext *param_7)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10013cbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Create(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return iVar1;
}


// ---- PreSubclassWindow @ 10013cc2

void __thiscall CWnd::PreSubclassWindow(CWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x10013cc2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PreSubclassWindow(this);
  return;
}


// ---- GetConnectionHook @ 10013cc8

IConnectionPoint * __thiscall CCmdTarget::GetConnectionHook(CCmdTarget *this,_GUID *param_1)

{
  IConnectionPoint *pIVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10013cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = GetConnectionHook(this,param_1);
  return pIVar1;
}


// ---- GetExtraConnectionPoints @ 10013cce

int __thiscall CCmdTarget::GetExtraConnectionPoints(CCmdTarget *this,CPtrArray *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10013cce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetExtraConnectionPoints(this,param_1);
  return iVar1;
}


// ---- GetInterfaceHook @ 10013cd4

IUnknown * __thiscall CCmdTarget::GetInterfaceHook(CCmdTarget *this,void *param_1)

{
  IUnknown *pIVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10013cd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = GetInterfaceHook(this,param_1);
  return pIVar1;
}


// ---- OnCreateAggregates @ 10013cda

int __thiscall CCmdTarget::OnCreateAggregates(CCmdTarget *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10013cda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCreateAggregates(this);
  return iVar1;
}


// ---- GetEventSinkMap @ 10013ce0

AFX_EVENTSINKMAP * __thiscall CCmdTarget::GetEventSinkMap(CCmdTarget *this)

{
  AFX_EVENTSINKMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10013ce0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetEventSinkMap(this);
  return pAVar1;
}


// ---- GetInterfaceMap @ 10013ce6

AFX_INTERFACEMAP * __thiscall CCmdTarget::GetInterfaceMap(CCmdTarget *this)

{
  AFX_INTERFACEMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10013ce6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetInterfaceMap(this);
  return pAVar1;
}


// ---- GetConnectionMap @ 10013cec

AFX_CONNECTIONMAP * __thiscall CCmdTarget::GetConnectionMap(CCmdTarget *this)

{
  AFX_CONNECTIONMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10013cec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetConnectionMap(this);
  return pAVar1;
}


// ---- GetDispatchMap @ 10013cf2

AFX_DISPMAP * __thiscall CCmdTarget::GetDispatchMap(CCmdTarget *this)

{
  AFX_DISPMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10013cf2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetDispatchMap(this);
  return pAVar1;
}


// ---- GetCommandMap @ 10013cf8

AFX_OLECMDMAP * __thiscall CCmdTarget::GetCommandMap(CCmdTarget *this)

{
  AFX_OLECMDMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10013cf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetCommandMap(this);
  return pAVar1;
}


// ---- GetTypeLib @ 10013cfe

long __thiscall CCmdTarget::GetTypeLib(CCmdTarget *this,ulong param_1,ITypeLib **param_2)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10013cfe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = GetTypeLib(this,param_1,param_2);
  return lVar1;
}


// ---- GetTypeLibCache @ 10013d04

CTypeLibCache * __thiscall CCmdTarget::GetTypeLibCache(CCmdTarget *this)

{
  CTypeLibCache *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10013d04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetTypeLibCache(this);
  return pCVar1;
}


// ---- GetTypeInfoCount @ 10013d0a

uint __thiscall CCmdTarget::GetTypeInfoCount(CCmdTarget *this)

{
  uint uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10013d0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = GetTypeInfoCount(this);
  return uVar1;
}


// ---- GetDispatchIID @ 10013d10

int __thiscall CCmdTarget::GetDispatchIID(CCmdTarget *this,_GUID *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10013d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetDispatchIID(this,param_1);
  return iVar1;
}


// ---- IsInvokeAllowed @ 10013d16

int __thiscall CCmdTarget::IsInvokeAllowed(CCmdTarget *this,long param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10013d16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = IsInvokeAllowed(this,param_1);
  return iVar1;
}


// ---- OnFinalRelease @ 10013d1c

void __thiscall CWnd::OnFinalRelease(CWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x10013d1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnFinalRelease(this);
  return;
}


// ---- OnCmdMsg @ 10013d22

int __thiscall
CDialog::OnCmdMsg(CDialog *this,uint param_1,int param_2,void *param_3,AFX_CMDHANDLERINFO *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10013d22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCmdMsg(this,param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- ~CString @ 10013d2e

void __thiscall CString::~CString(CString *this)

{
                    /* WARNING: Could not recover jumptable at 0x10013d2e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CString(this);
  return;
}


// ---- ~CDialog @ 10013d34

void __thiscall CDialog::~CDialog(CDialog *this)

{
                    /* WARNING: Could not recover jumptable at 0x10013d34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CDialog(this);
  return;
}


// ---- operator= @ 10013d3a

CString * __thiscall CString::operator=(CString *this,char *param_1)

{
  CString *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10013d3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = operator=(this,param_1);
  return pCVar1;
}


// ---- CString @ 10013d40

void __thiscall CString::CString(CString *this)

{
                    /* WARNING: Could not recover jumptable at 0x10013d40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CString(this);
  return;
}


// ---- CDialog @ 10013d46

void __thiscall CDialog::CDialog(CDialog *this,uint param_1,CWnd *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10013d46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CDialog(this,param_1,param_2);
  return;
}


// ---- operator_delete @ 10013d4c

void __cdecl operator_delete(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10013d4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  operator_delete(param_1);
  return;
}


// ---- DDX_Text @ 10013d52

void DDX_Text(CDataExchange *param_1,int param_2,CString *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x10013d52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DDX_Text(param_1,param_2,param_3);
  return;
}


// ---- CenterWindow @ 10013d58

void __thiscall CWnd::CenterWindow(CWnd *this,CWnd *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10013d58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CenterWindow(this,param_1);
  return;
}


// ---- OnInitDialog @ 10013d5e

int __thiscall CDialog::OnInitDialog(CDialog *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10013d5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnInitDialog(this);
  return iVar1;
}


// ---- LoadStringA @ 10013d64

int __thiscall CString::LoadStringA(CString *this,uint param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10013d64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = LoadStringA(this,param_1);
  return iVar1;
}


// ---- SetOccDialogInfo @ 10013d6a

int __thiscall CWnd::SetOccDialogInfo(CWnd *this,_AFX_OCC_DIALOG_INFO *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10013d6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetOccDialogInfo(this,param_1);
  return iVar1;
}


// ---- CheckAutoCenter @ 10013d70

int __thiscall CWnd::CheckAutoCenter(CWnd *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10013d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CheckAutoCenter(this);
  return iVar1;
}


// ---- PreTranslateMessage @ 10013d76

int __thiscall CWnd::PreTranslateMessage(CWnd *this,tagMSG *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10013d76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = PreTranslateMessage(this,param_1);
  return iVar1;
}


// ---- GetMessageMap @ 10013d7c

AFX_MSGMAP * __thiscall CWnd::GetMessageMap(CWnd *this)

{
  AFX_MSGMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10013d7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetMessageMap(this);
  return pAVar1;
}


// ---- OnCmdMsg @ 10013d82

int __thiscall
CCmdTarget::OnCmdMsg
          (CCmdTarget *this,uint param_1,int param_2,void *param_3,AFX_CMDHANDLERINFO *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10013d82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCmdMsg(this,param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- CWnd @ 10013d88

void __thiscall CWnd::CWnd(CWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x10013d88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CWnd(this);
  return;
}


// ---- operator_new @ 10013d8e

void * __cdecl operator_new(uint param_1)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10013d8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = operator_new(param_1);
  return pvVar1;
}


// ---- CreateControl @ 10013d94

int __thiscall
CWnd::CreateControl(CWnd *this,_GUID *param_1,char *param_2,ulong param_3,tagRECT *param_4,
                   CWnd *param_5,uint param_6,CFile *param_7,int param_8,ushort *param_9)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10013d94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CreateControl(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9
                       );
  return iVar1;
}


// ---- ~CWnd @ 10013d9a

void __thiscall CWnd::~CWnd(CWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x10013d9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CWnd(this);
  return;
}


// ---- InvokeHelper @ 10013da0

void __thiscall
CWnd::InvokeHelper(CWnd *this,long param_1,ushort param_2,ushort param_3,void *param_4,
                  uchar *param_5,...)

{
                    /* WARNING: Could not recover jumptable at 0x10013da0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InvokeHelper(this,param_1,param_2,param_3,param_4,param_5);
  return;
}


// ---- COleObjectFactory @ 10013ddc

void __thiscall
COleObjectFactory::COleObjectFactory
          (COleObjectFactory *this,_GUID *param_1,CRuntimeClass *param_2,int param_3,char *param_4)

{
                    /* WARNING: Could not recover jumptable at 0x10013ddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  COleObjectFactory(this,param_1,param_2,param_3,param_4);
  return;
}


// ---- ~COleObjectFactory @ 10013de2

void __thiscall COleObjectFactory::~COleObjectFactory(COleObjectFactory *this)

{
                    /* WARNING: Could not recover jumptable at 0x10013de2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~COleObjectFactory(this);
  return;
}


// ---- AfxGetTypeLibCache @ 10013de8

CTypeLibCache * AfxGetTypeLibCache(_GUID *param_1)

{
  CTypeLibCache *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10013de8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = AfxGetTypeLibCache(param_1);
  return pCVar1;
}


// ---- AFX_MAINTAIN_STATE2 @ 10013dee

void __thiscall
AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2(AFX_MAINTAIN_STATE2 *this,AFX_MODULE_STATE *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10013dee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AFX_MAINTAIN_STATE2(this,param_1);
  return;
}


// ---- AfxOleUnregisterClass @ 10013df4

int AfxOleUnregisterClass(_GUID *param_1,char *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10013df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AfxOleUnregisterClass(param_1,param_2);
  return iVar1;
}


// ---- AfxOleRegisterControlClass @ 10013dfa

int AfxOleRegisterControlClass
              (HINSTANCE__ *param_1,_GUID *param_2,char *param_3,uint param_4,uint param_5,
              int param_6,ulong param_7,_GUID *param_8,ushort param_9,ushort param_10)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10013dfa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AfxOleRegisterControlClass
                    (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                     param_10);
  return iVar1;
}


// ---- AfxGetModuleState @ 10013e00

AFX_MODULE_STATE * AfxGetModuleState(void)

{
  AFX_MODULE_STATE *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10013e00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = AfxGetModuleState();
  return pAVar1;
}


// ---- GetRuntimeClass @ 10013e0c

CRuntimeClass * __thiscall CPen::GetRuntimeClass(CPen *this)

{
  CRuntimeClass *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10013e0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetRuntimeClass(this);
  return pCVar1;
}


// ---- DestroySharedMenu @ 10013e18

void __thiscall COleControl::DestroySharedMenu(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x10013e18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DestroySharedMenu(this);
  return;
}


// ---- BuildSharedMenu @ 10013e1e

int __thiscall COleControl::BuildSharedMenu(COleControl *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10013e1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = BuildSharedMenu(this);
  return iVar1;
}


// ---- RemoveFrameLevelUI @ 10013e24

void __thiscall COleControl::RemoveFrameLevelUI(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x10013e24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RemoveFrameLevelUI(this);
  return;
}


// ---- AddFrameLevelUI @ 10013e2a

void __thiscall COleControl::AddFrameLevelUI(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x10013e2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AddFrameLevelUI(this);
  return;
}


// ---- OnActivateInPlace @ 10013e30

long __thiscall COleControl::OnActivateInPlace(COleControl *this,int param_1,tagMSG *param_2)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10013e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = OnActivateInPlace(this,param_1,param_2);
  return lVar1;
}


// ---- OnHide @ 10013e36

long __thiscall COleControl::OnHide(COleControl *this)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10013e36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = OnHide(this);
  return lVar1;
}


// ---- OnFrameClose @ 10013e3c

void __thiscall COleControl::OnFrameClose(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x10013e3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnFrameClose(this);
  return;
}


// ---- ResizeFrameWindow @ 10013e42

void __thiscall COleControl::ResizeFrameWindow(COleControl *this,int param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10013e42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ResizeFrameWindow(this,param_1,param_2);
  return;
}


// ---- CreateFrameWindow @ 10013e48

CControlFrameWnd * __thiscall COleControl::CreateFrameWindow(COleControl *this)

{
  CControlFrameWnd *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10013e48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = CreateFrameWindow(this);
  return pCVar1;
}


// ---- OnOpen @ 10013e4e

long __thiscall COleControl::OnOpen(COleControl *this,int param_1,tagMSG *param_2)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10013e4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = OnOpen(this,param_1,param_2);
  return lVar1;
}


// ---- OnReflectorDestroyed @ 10013e54

void __thiscall COleControl::OnReflectorDestroyed(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x10013e54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnReflectorDestroyed(this);
  return;
}


// ---- SetInitialDataFormats @ 10013e5a

void __thiscall COleControl::SetInitialDataFormats(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x10013e5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetInitialDataFormats(this);
  return;
}


// ---- CreateControlWindow @ 10013e60

int __thiscall
COleControl::CreateControlWindow(COleControl *this,HWND__ *param_1,CRect *param_2,tagRECT *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10013e60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CreateControlWindow(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- ClientToParent @ 10013e66

void __thiscall COleControl::ClientToParent(COleControl *this,tagRECT *param_1,tagPOINT *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10013e66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ClientToParent(this,param_1,param_2);
  return;
}


// ---- ParentToClient @ 10013e6c

uint __thiscall
COleControl::ParentToClient(COleControl *this,tagRECT *param_1,tagPOINT *param_2,int param_3)

{
  uint uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10013e6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = ParentToClient(this,param_1,param_2,param_3);
  return uVar1;
}


// ---- GetClientOffset @ 10013e72

void __thiscall COleControl::GetClientOffset(COleControl *this,long *param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10013e72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetClientOffset(this,param_1,param_2);
  return;
}


// ---- GetWindowlessDropTarget @ 10013e78

IDropTarget * __thiscall COleControl::GetWindowlessDropTarget(COleControl *this)

{
  IDropTarget *pIVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10013e78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = GetWindowlessDropTarget(this);
  return pIVar1;
}


// ---- OnWindowlessMessage @ 10013e7e

int __thiscall
COleControl::OnWindowlessMessage
          (COleControl *this,uint param_1,uint param_2,long param_3,long *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10013e7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnWindowlessMessage(this,param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- OnInactiveMouseMove @ 10013e84

void __thiscall
COleControl::OnInactiveMouseMove
          (COleControl *this,tagRECT *param_1,long param_2,long param_3,ulong param_4)

{
                    /* WARNING: Could not recover jumptable at 0x10013e84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnInactiveMouseMove(this,param_1,param_2,param_3,param_4);
  return;
}


// ---- OnInactiveSetCursor @ 10013e8a

int __thiscall
COleControl::OnInactiveSetCursor
          (COleControl *this,tagRECT *param_1,long param_2,long param_3,ulong param_4,int param_5)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10013e8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnInactiveSetCursor(this,param_1,param_2,param_3,param_4,param_5);
  return iVar1;
}


// ---- GetActivationPolicy @ 10013e90

ulong __thiscall COleControl::GetActivationPolicy(COleControl *this)

{
  ulong uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10013e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = GetActivationPolicy(this);
  return uVar1;
}


// ---- GetControlFlags @ 10013e96

ulong __thiscall COleControl::GetControlFlags(COleControl *this)

{
  ulong uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10013e96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = GetControlFlags(this);
  return uVar1;
}


// ---- ReparentControlWindow @ 10013e9c

void __thiscall
COleControl::ReparentControlWindow(COleControl *this,HWND__ *param_1,HWND__ *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10013e9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReparentControlWindow(this,param_1,param_2);
  return;
}


// ---- IsSubclassedControl @ 10013ea2

int __thiscall COleControl::IsSubclassedControl(COleControl *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10013ea2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = IsSubclassedControl(this);
  return iVar1;
}


// ---- OnGetPredefinedValue @ 10013ea8

int __thiscall
COleControl::OnGetPredefinedValue(COleControl *this,long param_1,ulong param_2,tagVARIANT *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10013ea8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnGetPredefinedValue(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- OnGetPredefinedStrings @ 10013eae

int __thiscall
COleControl::OnGetPredefinedStrings
          (COleControl *this,long param_1,CStringArray *param_2,CDWordArray *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10013eae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnGetPredefinedStrings(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- OnMapPropertyToPage @ 10013eb4

int __thiscall
COleControl::OnMapPropertyToPage(COleControl *this,long param_1,_GUID *param_2,int *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10013eb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnMapPropertyToPage(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- OnGetDisplayString @ 10013eba

int __thiscall COleControl::OnGetDisplayString(COleControl *this,long param_1,CString *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10013eba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnGetDisplayString(this,param_1,param_2);
  return iVar1;
}


// ---- OnProperties @ 10013ec0

int __thiscall
COleControl::OnProperties(COleControl *this,tagMSG *param_1,HWND__ *param_2,tagRECT *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10013ec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnProperties(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- OnEdit @ 10013ec6

int __thiscall
COleControl::OnEdit(COleControl *this,tagMSG *param_1,HWND__ *param_2,tagRECT *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10013ec6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnEdit(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- OnDoVerb @ 10013ecc

int __thiscall
COleControl::OnDoVerb
          (COleControl *this,long param_1,tagMSG *param_2,HWND__ *param_3,tagRECT *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10013ecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnDoVerb(this,param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- OnEnumVerbs @ 10013ed2

int __thiscall COleControl::OnEnumVerbs(COleControl *this,IEnumOLEVERB **param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10013ed2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnEnumVerbs(this,param_1);
  return iVar1;
}


// ---- OnSetData @ 10013ed8

int __thiscall
COleControl::OnSetData(COleControl *this,tagFORMATETC *param_1,tagSTGMEDIUM *param_2,int param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10013ed8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnSetData(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- OnRenderData @ 10013ede

int __thiscall
COleControl::OnRenderData(COleControl *this,tagFORMATETC *param_1,tagSTGMEDIUM *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10013ede. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnRenderData(this,param_1,param_2);
  return iVar1;
}


// ---- OnRenderFileData @ 10013ee4

int __thiscall COleControl::OnRenderFileData(COleControl *this,tagFORMATETC *param_1,CFile *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10013ee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnRenderFileData(this,param_1,param_2);
  return iVar1;
}


// ---- OnRenderGlobalData @ 10013eea

int __thiscall
COleControl::OnRenderGlobalData(COleControl *this,tagFORMATETC *param_1,void **param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10013eea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnRenderGlobalData(this,param_1,param_2);
  return iVar1;
}


// ---- OnGetNaturalExtent @ 10013ef0

int __thiscall
COleControl::OnGetNaturalExtent
          (COleControl *this,ulong param_1,long param_2,tagDVTARGETDEVICE *param_3,HDC__ *param_4,
          tagExtentInfo *param_5,tagSIZE *param_6)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10013ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnGetNaturalExtent(this,param_1,param_2,param_3,param_4,param_5,param_6);
  return iVar1;
}


// ---- OnQueryHitRect @ 10013ef6

int __thiscall
COleControl::OnQueryHitRect
          (COleControl *this,ulong param_1,tagRECT *param_2,tagRECT *param_3,long param_4,
          ulong *param_5)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10013ef6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnQueryHitRect(this,param_1,param_2,param_3,param_4,param_5);
  return iVar1;
}


// ---- OnQueryHitPoint @ 10013efc

int __thiscall
COleControl::OnQueryHitPoint
          (COleControl *this,ulong param_1,tagRECT *param_2,tagPOINT param_3,long param_4,
          ulong *param_5)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10013efc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnQueryHitPoint(this,param_1,param_2,param_3,param_4,param_5);
  return iVar1;
}


// ---- OnGetViewStatus @ 10013f02

ulong __thiscall COleControl::OnGetViewStatus(COleControl *this)

{
  ulong uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10013f02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = OnGetViewStatus(this);
  return uVar1;
}


// ---- OnGetViewRect @ 10013f08

int __thiscall COleControl::OnGetViewRect(COleControl *this,ulong param_1,_RECTL *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10013f08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnGetViewRect(this,param_1,param_2);
  return iVar1;
}


// ---- OnGetViewExtent @ 10013f0e

int __thiscall
COleControl::OnGetViewExtent
          (COleControl *this,ulong param_1,long param_2,tagDVTARGETDEVICE *param_3,tagSIZE *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10013f0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnGetViewExtent(this,param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- OnGetColorSet @ 10013f14

int __thiscall
COleControl::OnGetColorSet
          (COleControl *this,tagDVTARGETDEVICE *param_1,HDC__ *param_2,tagLOGPALETTE **param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10013f14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnGetColorSet(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- OnHideToolBars @ 10013f1a

void __thiscall COleControl::OnHideToolBars(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x10013f1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnHideToolBars(this);
  return;
}


// ---- OnShowToolBars @ 10013f20

void __thiscall COleControl::OnShowToolBars(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x10013f20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnShowToolBars(this);
  return;
}


// ---- OnGetInPlaceMenu @ 10013f26

HMENU__ * __thiscall COleControl::OnGetInPlaceMenu(COleControl *this)

{
  HMENU__ *pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10013f26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = OnGetInPlaceMenu(this);
  return pHVar1;
}


// ---- OnFreezeEvents @ 10013f2c

void __thiscall COleControl::OnFreezeEvents(COleControl *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10013f2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnFreezeEvents(this,param_1);
  return;
}


// ---- OnAmbientPropertyChange @ 10013f32

void __thiscall COleControl::OnAmbientPropertyChange(COleControl *this,long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10013f32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnAmbientPropertyChange(this,param_1);
  return;
}


// ---- OnMnemonic @ 10013f38

void __thiscall COleControl::OnMnemonic(COleControl *this,tagMSG *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10013f38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnMnemonic(this,param_1);
  return;
}


// ---- OnGetControlInfo @ 10013f3e

void __thiscall COleControl::OnGetControlInfo(COleControl *this,tagCONTROLINFO *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10013f3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnGetControlInfo(this,param_1);
  return;
}


// ---- OnForeColorChanged @ 10013f44

void __thiscall COleControl::OnForeColorChanged(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x10013f44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnForeColorChanged(this);
  return;
}


// ---- OnFontChanged @ 10013f4a

void __thiscall COleControl::OnFontChanged(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x10013f4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnFontChanged(this);
  return;
}


// ---- OnTextChanged @ 10013f50

void __thiscall COleControl::OnTextChanged(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x10013f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnTextChanged(this);
  return;
}


// ---- OnEnabledChanged @ 10013f56

void __thiscall COleControl::OnEnabledChanged(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x10013f56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnEnabledChanged(this);
  return;
}


// ---- OnBorderStyleChanged @ 10013f5c

void __thiscall COleControl::OnBorderStyleChanged(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x10013f5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnBorderStyleChanged(this);
  return;
}


// ---- OnBackColorChanged @ 10013f62

void __thiscall COleControl::OnBackColorChanged(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x10013f62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnBackColorChanged(this);
  return;
}


// ---- OnAppearanceChanged @ 10013f68

void __thiscall COleControl::OnAppearanceChanged(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x10013f68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnAppearanceChanged(this);
  return;
}


// ---- OnKeyPressEvent @ 10013f6e

void __thiscall COleControl::OnKeyPressEvent(COleControl *this,ushort param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10013f6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnKeyPressEvent(this,param_1);
  return;
}


// ---- OnKeyUpEvent @ 10013f74

void __thiscall COleControl::OnKeyUpEvent(COleControl *this,ushort param_1,ushort param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10013f74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnKeyUpEvent(this,param_1,param_2);
  return;
}


// ---- OnKeyDownEvent @ 10013f7a

void __thiscall COleControl::OnKeyDownEvent(COleControl *this,ushort param_1,ushort param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10013f7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnKeyDownEvent(this,param_1,param_2);
  return;
}


// ---- OnClick @ 10013f80

void __thiscall COleControl::OnClick(COleControl *this,ushort param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10013f80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnClick(this,param_1);
  return;
}


// ---- OnEventAdvise @ 10013f86

void __thiscall COleControl::OnEventAdvise(COleControl *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10013f86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnEventAdvise(this,param_1);
  return;
}


// ---- OnSetObjectRects @ 10013f8c

int __thiscall COleControl::OnSetObjectRects(COleControl *this,tagRECT *param_1,tagRECT *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10013f8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnSetObjectRects(this,param_1,param_2);
  return iVar1;
}


// ---- OnClose @ 10013f92

void __thiscall COleControl::OnClose(COleControl *this,ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10013f92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnClose(this,param_1);
  return;
}


// ---- DisplayError @ 10013f98

void __thiscall
COleControl::DisplayError
          (COleControl *this,long param_1,char *param_2,char *param_3,char *param_4,uint param_5)

{
                    /* WARNING: Could not recover jumptable at 0x10013f98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DisplayError(this,param_1,param_2,param_3,param_4,param_5);
  return;
}


// ---- GetMessageString @ 10013f9e

void __thiscall COleControl::GetMessageString(COleControl *this,uint param_1,CString *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10013f9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetMessageString(this,param_1,param_2);
  return;
}


// ---- GetClientRect @ 10013fa4

void __thiscall COleControl::GetClientRect(COleControl *this,tagRECT *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10013fa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetClientRect(this,param_1);
  return;
}


// ---- DefWindowProcA @ 10013faa

long __thiscall
COleControl::DefWindowProcA(COleControl *this,uint param_1,uint param_2,long param_3)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10013faa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = DefWindowProcA(this,param_1,param_2,param_3);
  return lVar1;
}


// ---- WindowProc @ 10013fb0

long __thiscall COleControl::WindowProc(COleControl *this,uint param_1,uint param_2,long param_3)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10013fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = WindowProc(this,param_1,param_2,param_3);
  return lVar1;
}


// ---- GetConnectionHook @ 10013fb6

IConnectionPoint * __thiscall COleControl::GetConnectionHook(COleControl *this,_GUID *param_1)

{
  IConnectionPoint *pIVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10013fb6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = GetConnectionHook(this,param_1);
  return pIVar1;
}


// ---- GetExtraConnectionPoints @ 10013fbc

int __thiscall COleControl::GetExtraConnectionPoints(COleControl *this,CPtrArray *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10013fbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetExtraConnectionPoints(this,param_1);
  return iVar1;
}


// ---- GetInterfaceHook @ 10013fc2

IUnknown * __thiscall COleControl::GetInterfaceHook(COleControl *this,void *param_1)

{
  IUnknown *pIVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10013fc2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = GetInterfaceHook(this,param_1);
  return pIVar1;
}


// ---- OnCreateAggregates @ 10013fc8

int __thiscall COleControl::OnCreateAggregates(COleControl *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10013fc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCreateAggregates(this);
  return iVar1;
}


// ---- GetInterfaceMap @ 10013fce

AFX_INTERFACEMAP * __thiscall COleControl::GetInterfaceMap(COleControl *this)

{
  AFX_INTERFACEMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10013fce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetInterfaceMap(this);
  return pAVar1;
}


// ---- GetConnectionMap @ 10013fd4

AFX_CONNECTIONMAP * __thiscall COleControl::GetConnectionMap(COleControl *this)

{
  AFX_CONNECTIONMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10013fd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetConnectionMap(this);
  return pAVar1;
}


// ---- GetDispatchIID @ 10013fda

int __thiscall COleControl::GetDispatchIID(COleControl *this,_GUID *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10013fda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetDispatchIID(this,param_1);
  return iVar1;
}


// ---- IsInvokeAllowed @ 10013fe0

int __thiscall COleControl::IsInvokeAllowed(COleControl *this,long param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10013fe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = IsInvokeAllowed(this,param_1);
  return iVar1;
}


// ---- OnFinalRelease @ 10013fe6

void __thiscall COleControl::OnFinalRelease(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x10013fe6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnFinalRelease(this);
  return;
}


// ---- Serialize @ 10013fec

void __thiscall COleControl::Serialize(COleControl *this,CArchive *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10013fec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Serialize(this,param_1);
  return;
}


// ---- ~COleControl @ 10013ff2

void __thiscall COleControl::~COleControl(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x10013ff2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~COleControl(this);
  return;
}


// ---- DeleteObject @ 10013ff8

int __thiscall CGdiObject::DeleteObject(CGdiObject *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10013ff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = DeleteObject(this);
  return iVar1;
}


// ---- SetInitialSize @ 10013ffe

void __thiscall COleControl::SetInitialSize(COleControl *this,int param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10013ffe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetInitialSize(this,param_1,param_2);
  return;
}


// ---- Attach @ 10014004

int __thiscall CGdiObject::Attach(CGdiObject *this,void *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10014004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Attach(this,param_1);
  return iVar1;
}


// ---- AfxFindResourceHandle @ 1001400a

HINSTANCE__ * AfxFindResourceHandle(char *param_1,char *param_2)

{
  HINSTANCE__ *pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1001400a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = AfxFindResourceHandle(param_1,param_2);
  return pHVar1;
}


// ---- InitializeIIDs @ 10014010

void __thiscall COleControl::InitializeIIDs(COleControl *this,_GUID *param_1,_GUID *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10014010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitializeIIDs(this,param_1,param_2);
  return;
}


// ---- COleControl @ 10014016

void __thiscall COleControl::COleControl(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x10014016. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  COleControl(this);
  return;
}


// ---- GetRuntimeClass @ 1001401c

CRuntimeClass * __thiscall CObject::GetRuntimeClass(CObject *this)

{
  CRuntimeClass *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1001401c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetRuntimeClass(this);
  return pCVar1;
}


// ---- RecreateControlWindow @ 10014022

void __thiscall COleControl::RecreateControlWindow(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x10014022. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RecreateControlWindow(this);
  return;
}


// ---- ShowWindow @ 10014028

int __thiscall CWnd::ShowWindow(CWnd *this,int param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10014028. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ShowWindow(this,param_1);
  return iVar1;
}


// ---- ~CPictureHolder @ 1001402e

void __thiscall CPictureHolder::~CPictureHolder(CPictureHolder *this)

{
                    /* WARNING: Could not recover jumptable at 0x1001402e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CPictureHolder(this);
  return;
}


// ---- Render @ 10014034

void __thiscall
CPictureHolder::Render(CPictureHolder *this,CDC *param_1,CRect *param_2,CRect *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x10014034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Render(this,param_1,param_2,param_3);
  return;
}


// ---- CreateFromBitmap @ 1001403a

int __thiscall
CPictureHolder::CreateFromBitmap
          (CPictureHolder *this,HBITMAP__ *param_1,HPALETTE__ *param_2,int param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1001403a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CreateFromBitmap(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- CPictureHolder @ 10014040

void __thiscall CPictureHolder::CPictureHolder(CPictureHolder *this)

{
                    /* WARNING: Could not recover jumptable at 0x10014040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CPictureHolder(this);
  return;
}


// ---- AmbientUserMode @ 10014046

int __thiscall COleControl::AmbientUserMode(COleControl *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10014046. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AmbientUserMode(this);
  return iVar1;
}


// ---- SelectObject @ 1001404c

CBrush * __thiscall CDC::SelectObject(CDC *this,CBrush *param_1)

{
  CBrush *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1001404c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = SelectObject(this,param_1);
  return pCVar1;
}


// ---- LineTo @ 10014052

int __thiscall CDC::LineTo(CDC *this,int param_1,int param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10014052. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = LineTo(this,param_1,param_2);
  return iVar1;
}


// ---- MoveTo @ 10014058

void __thiscall CDC::MoveTo(CDC *this,int param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10014058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MoveTo(this,param_1,param_2);
  return;
}


// ---- SelectObject @ 1001405e

CPen * __thiscall CDC::SelectObject(CDC *this,CPen *param_1)

{
  CPen *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1001405e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = SelectObject(this,param_1);
  return pCVar1;
}


// ---- FireEvent @ 10014064

void __thiscall COleControl::FireEvent(COleControl *this,long param_1,uchar *param_2,...)

{
                    /* WARNING: Could not recover jumptable at 0x10014064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FireEvent(this,param_1,param_2);
  return;
}


// ---- SetBkMode @ 1001406a

int __thiscall CDC::SetBkMode(CDC *this,int param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1001406a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetBkMode(this,param_1);
  return iVar1;
}


// ---- ~CDC @ 10014070

void __thiscall CDC::~CDC(CDC *this)

{
                    /* WARNING: Could not recover jumptable at 0x10014070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CDC(this);
  return;
}


// ---- SetWindowOrg @ 10014076

void __thiscall CDC::SetWindowOrg(CDC *this,int param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10014076. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetWindowOrg(this,param_1,param_2);
  return;
}


// ---- RestoreDC @ 1001407c

int __thiscall CDC::RestoreDC(CDC *this,int param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1001407c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = RestoreDC(this,param_1);
  return iVar1;
}


// ---- SaveDC @ 10014082

int __thiscall CDC::SaveDC(CDC *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10014082. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SaveDC(this);
  return iVar1;
}


// ---- IsModified @ 10014088

int __thiscall COleControl::IsModified(COleControl *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10014088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = IsModified(this);
  return iVar1;
}


// ---- SelectGdiObject @ 1001408e

CGdiObject * CDC::SelectGdiObject(HDC__ *param_1,void *param_2)

{
  CGdiObject *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1001408e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = SelectGdiObject(param_1,param_2);
  return pCVar1;
}


// ---- Attach @ 10014094

int __thiscall CDC::Attach(CDC *this,HDC__ *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10014094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Attach(this,param_1);
  return iVar1;
}


// ---- CDC @ 1001409a

void __thiscall CDC::CDC(CDC *this)

{
                    /* WARNING: Could not recover jumptable at 0x1001409a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CDC(this);
  return;
}


// ---- operator= @ 100140a0

CString * __thiscall CString::operator=(CString *this,CString *param_1)

{
  CString *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100140a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = operator=(this,param_1);
  return pCVar1;
}


// ---- InvalidateControl @ 100140a6

void __thiscall COleControl::InvalidateControl(COleControl *this,tagRECT *param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x100140a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InvalidateControl(this,param_1,param_2);
  return;
}


// ---- SetCapture @ 100140ac

CWnd * __thiscall COleControl::SetCapture(COleControl *this)

{
  CWnd *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100140ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = SetCapture(this);
  return pCVar1;
}


// ---- CString @ 100140b2

void __thiscall CString::CString(CString *this,char *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x100140b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CString(this,param_1);
  return;
}


// ---- MessageBoxA @ 100140b8

int __thiscall CWnd::MessageBoxA(CWnd *this,char *param_1,char *param_2,uint param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100140b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = MessageBoxA(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- OnSetExtent @ 100140be

int __thiscall COleControl::OnSetExtent(COleControl *this,tagSIZE *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100140be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnSetExtent(this,param_1);
  return iVar1;
}


// ---- OnNcLButtonDown @ 100140c4

void __thiscall COleControl::OnNcLButtonDown(void)

{
                    /* WARNING: Could not recover jumptable at 0x100140c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnNcLButtonDown();
  return;
}


// ---- DoPropExchange @ 100140ca

void __thiscall COleControl::DoPropExchange(COleControl *this,CPropExchange *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x100140ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DoPropExchange(this,param_1);
  return;
}


// ---- OnResetState @ 100140d0

void __thiscall COleControl::OnResetState(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x100140d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnResetState(this);
  return;
}


// ---- PostModalDialog @ 100140d6

void __thiscall COleControl::PostModalDialog(COleControl *this,HWND__ *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x100140d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PostModalDialog(this,param_1);
  return;
}


// ---- PreModalDialog @ 100140dc

void __thiscall COleControl::PreModalDialog(COleControl *this,HWND__ *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x100140dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PreModalDialog(this,param_1);
  return;
}


// ---- OnDestroy @ 100140e8

void __thiscall COleControl::OnDestroy(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x100140e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnDestroy(this);
  return;
}


// ---- SetWindowPos @ 100140f4

int __thiscall
CWnd::SetWindowPos(CWnd *this,CWnd *param_1,int param_2,int param_3,int param_4,int param_5,
                  uint param_6)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100140f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetWindowPos(this,param_1,param_2,param_3,param_4,param_5,param_6);
  return iVar1;
}


// ---- ReleaseCapture @ 100140fa

int __thiscall COleControl::ReleaseCapture(COleControl *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100140fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ReleaseCapture(this);
  return iVar1;
}


// ---- DestroyMenu @ 10014118

int __thiscall CMenu::DestroyMenu(CMenu *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10014118. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = DestroyMenu(this);
  return iVar1;
}


// ---- TrackPopupMenu @ 1001411e

int __thiscall
CMenu::TrackPopupMenu
          (CMenu *this,uint param_1,int param_2,int param_3,CWnd *param_4,tagRECT *param_5)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1001411e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = TrackPopupMenu(this,param_1,param_2,param_3,param_4,param_5);
  return iVar1;
}


// ---- FromHandle @ 10014124

CMenu * CMenu::FromHandle(HMENU__ *param_1)

{
  CMenu *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10014124. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = FromHandle(param_1);
  return pCVar1;
}


// ---- Attach @ 1001412a

int __thiscall CMenu::Attach(CMenu *this,HMENU__ *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1001412a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Attach(this,param_1);
  return iVar1;
}


// ---- Format @ 1001413c

void __thiscall CString::Format(CString *this,char *param_1,...)

{
                    /* WARNING: Could not recover jumptable at 0x1001413c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Format(this,param_1);
  return;
}


// ---- Default @ 10014142

long __thiscall CWnd::Default(CWnd *this)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10014142. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = Default(this);
  return lVar1;
}


// ---- ClientToScreen @ 10014148

void __thiscall CWnd::ClientToScreen(CWnd *this,tagRECT *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10014148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ClientToScreen(this,param_1);
  return;
}


// ---- AfxOleRegisterPropertyPageClass @ 1001414e

int AfxOleRegisterPropertyPageClass(HINSTANCE__ *param_1,_GUID *param_2,uint param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1001414e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AfxOleRegisterPropertyPageClass(param_1,param_2,param_3);
  return iVar1;
}


// ---- OnEditProperty @ 10014154

int __thiscall COlePropertyPage::OnEditProperty(COlePropertyPage *this,long param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10014154. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnEditProperty(this,param_1);
  return iVar1;
}


// ---- OnHelp @ 1001415a

int __thiscall COlePropertyPage::OnHelp(COlePropertyPage *this,char *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1001415a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnHelp(this,param_1);
  return iVar1;
}


// ---- OnObjectsChanged @ 10014160

void __thiscall COlePropertyPage::OnObjectsChanged(COlePropertyPage *this)

{
                    /* WARNING: Could not recover jumptable at 0x10014160. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnObjectsChanged(this);
  return;
}


// ---- OnSetPageSite @ 10014166

void __thiscall COlePropertyPage::OnSetPageSite(COlePropertyPage *this)

{
                    /* WARNING: Could not recover jumptable at 0x10014166. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnSetPageSite(this);
  return;
}


// ---- OnInitDialog @ 1001416c

int __thiscall COlePropertyPage::OnInitDialog(COlePropertyPage *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1001416c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnInitDialog(this);
  return iVar1;
}


// ---- WindowProc @ 10014172

long __thiscall
COlePropertyPage::WindowProc(COlePropertyPage *this,uint param_1,uint param_2,long param_3)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10014172. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = WindowProc(this,param_1,param_2,param_3);
  return lVar1;
}


// ---- PreTranslateMessage @ 10014178

int __thiscall COlePropertyPage::PreTranslateMessage(COlePropertyPage *this,tagMSG *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10014178. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = PreTranslateMessage(this,param_1);
  return iVar1;
}


// ---- OnCommand @ 1001417e

int __thiscall COlePropertyPage::OnCommand(COlePropertyPage *this,uint param_1,long param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1001417e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCommand(this,param_1,param_2);
  return iVar1;
}


// ---- GetInterfaceMap @ 10014184

AFX_INTERFACEMAP * __thiscall COlePropertyPage::GetInterfaceMap(COlePropertyPage *this)

{
  AFX_INTERFACEMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10014184. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetInterfaceMap(this);
  return pAVar1;
}


// ---- OnFinalRelease @ 1001418a

void __thiscall COlePropertyPage::OnFinalRelease(COlePropertyPage *this)

{
                    /* WARNING: Could not recover jumptable at 0x1001418a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnFinalRelease(this);
  return;
}


// ---- COlePropertyPage @ 10014190

void __thiscall COlePropertyPage::COlePropertyPage(COlePropertyPage *this,uint param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10014190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  COlePropertyPage(this,param_1,param_2);
  return;
}


// ---- ~COlePropertyPage @ 10014196

void __thiscall COlePropertyPage::~COlePropertyPage(COlePropertyPage *this)

{
                    /* WARNING: Could not recover jumptable at 0x10014196. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~COlePropertyPage(this);
  return;
}


// ---- DDP_PostProcessing @ 1001419c

void DDP_PostProcessing(CDataExchange *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x1001419c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DDP_PostProcessing(param_1);
  return;
}


// ---- ~CWinApp @ 100141a2

void __thiscall CWinApp::~CWinApp(CWinApp *this)

{
                    /* WARNING: Could not recover jumptable at 0x100141a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CWinApp(this);
  return;
}


// ---- ExitInstance @ 100141f0

int __thiscall COleControlModule::ExitInstance(COleControlModule *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100141f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ExitInstance(this);
  return iVar1;
}


// ---- InitInstance @ 10014214

int __thiscall COleControlModule::InitInstance(COleControlModule *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10014214. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = InitInstance(this);
  return iVar1;
}


// ---- CWinApp @ 10014226

void __thiscall CWinApp::CWinApp(CWinApp *this,char *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10014226. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CWinApp(this,param_1);
  return;
}


// ---- AfxEnableControlContainer @ 1001422c

void __cdecl AfxEnableControlContainer(COccManager *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x1001422c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AfxEnableControlContainer(param_1);
  return;
}


// ---- UpdateRegistryAll @ 10014232

int COleObjectFactory::UpdateRegistryAll(int param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10014232. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = UpdateRegistryAll(param_1);
  return iVar1;
}


// ---- AfxOleRegisterTypeLib @ 10014238

int AfxOleRegisterTypeLib(HINSTANCE__ *param_1,_GUID *param_2,char *param_3,char *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10014238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AfxOleRegisterTypeLib(param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- AfxOleUnregisterTypeLib @ 1001423e

int AfxOleUnregisterTypeLib(_GUID *param_1,ushort param_2,ushort param_3,ulong param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1001423e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AfxOleUnregisterTypeLib(param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- operator+ @ 10014244

void operator+(CString *param_1,char *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10014244. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  operator+(param_1,param_2);
  return;
}


// ---- CString @ 1001424a

void __thiscall CString::CString(CString *this,CString *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x1001424a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CString(this,param_1);
  return;
}


// ---- operator+ @ 10014250

void operator+(CString *param_1,CString *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10014250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  operator+(param_1,param_2);
  return;
}


// ---- ReleaseBuffer @ 10014256

void __thiscall CString::ReleaseBuffer(CString *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10014256. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseBuffer(this,param_1);
  return;
}


// ---- GetBuffer @ 1001425c

char * __thiscall CString::GetBuffer(CString *this,int param_1)

{
  char *pcVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1001425c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = GetBuffer(this,param_1);
  return pcVar1;
}


// ---- SpanExcluding @ 10014262

void __thiscall CString::SpanExcluding(CString *this,char *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10014262. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SpanExcluding(this,param_1);
  return;
}


// ---- UpdateData @ 10014268

int __thiscall CWnd::UpdateData(CWnd *this,int param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10014268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = UpdateData(this,param_1);
  return iVar1;
}


// ---- SetFocus @ 1001426e

CWnd * __thiscall CWnd::SetFocus(CWnd *this)

{
  CWnd *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1001426e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = SetFocus(this);
  return pCVar1;
}


// ---- GetDlgItem @ 10014274

CWnd * __thiscall CWnd::GetDlgItem(CWnd *this,int param_1)

{
  CWnd *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10014274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetDlgItem(this,param_1);
  return pCVar1;
}


// ---- Empty @ 1001427a

void __thiscall CString::Empty(CString *this)

{
                    /* WARNING: Could not recover jumptable at 0x1001427a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Empty(this);
  return;
}


// ---- SetAtGrow @ 10014280

void __thiscall CStringArray::SetAtGrow(CStringArray *this,int param_1,CString *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10014280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetAtGrow(this,param_1,param_2);
  return;
}


// ---- ~CButton @ 100142bc

void __thiscall CButton::~CButton(CButton *this)

{
                    /* WARNING: Could not recover jumptable at 0x100142bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CButton(this);
  return;
}


// ---- ~CComboBox @ 100142c2

void __thiscall CComboBox::~CComboBox(CComboBox *this)

{
                    /* WARNING: Could not recover jumptable at 0x100142c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CComboBox(this);
  return;
}


// ---- DDX_Check @ 100142c8

void DDX_Check(CDataExchange *param_1,int param_2,int *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x100142c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DDX_Check(param_1,param_2,param_3);
  return;
}


// ---- DDX_Text @ 100142ce

void DDX_Text(CDataExchange *param_1,int param_2,float *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x100142ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DDX_Text(param_1,param_2,param_3);
  return;
}


// ---- DDX_Control @ 100142d4

void DDX_Control(CDataExchange *param_1,int param_2,CWnd *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x100142d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DDX_Control(param_1,param_2,param_3);
  return;
}


// ---- CreateIndirect @ 100142da

int __thiscall
CDialog::CreateIndirect(CDialog *this,void *param_1,CWnd *param_2,HINSTANCE__ *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100142da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CreateIndirect(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- ~CStringArray @ 100142e0

void __thiscall CStringArray::~CStringArray(CStringArray *this)

{
                    /* WARNING: Could not recover jumptable at 0x100142e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CStringArray(this);
  return;
}


// ---- CStringArray @ 100142e6

void __thiscall CStringArray::CStringArray(CStringArray *this)

{
                    /* WARNING: Could not recover jumptable at 0x100142e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CStringArray(this);
  return;
}


// ---- GetLBText @ 100142ec

void __thiscall CComboBox::GetLBText(CComboBox *this,int param_1,CString *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x100142ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetLBText(this,param_1,param_2);
  return;
}


// ---- ~CFile @ 10014304

void __thiscall CFile::~CFile(CFile *this)

{
                    /* WARNING: Could not recover jumptable at 0x10014304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CFile(this);
  return;
}


// ---- FillBuffer @ 1001430a

void __thiscall CArchive::FillBuffer(CArchive *this,uint param_1)

{
                    /* WARNING: Could not recover jumptable at 0x1001430a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FillBuffer(this,param_1);
  return;
}


// ---- ~CArchive @ 10014310

void __thiscall CArchive::~CArchive(CArchive *this)

{
                    /* WARNING: Could not recover jumptable at 0x10014310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CArchive(this);
  return;
}


// ---- EndWaitCursor @ 10014316

void __thiscall CCmdTarget::EndWaitCursor(CCmdTarget *this)

{
                    /* WARNING: Could not recover jumptable at 0x10014316. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EndWaitCursor(this);
  return;
}


// ---- Close @ 1001431c

void __thiscall CFile::Close(CFile *this)

{
                    /* WARNING: Could not recover jumptable at 0x1001431c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Close(this);
  return;
}


// ---- Close @ 10014322

void __thiscall CArchive::Close(CArchive *this)

{
                    /* WARNING: Could not recover jumptable at 0x10014322. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Close(this);
  return;
}


// ---- operator>> @ 10014328

CArchive * operator>>(CArchive *param_1,CString *param_2)

{
  CArchive *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10014328. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = operator>>(param_1,param_2);
  return pCVar1;
}


// ---- BeginWaitCursor @ 1001432e

void __thiscall CCmdTarget::BeginWaitCursor(CCmdTarget *this)

{
                    /* WARNING: Could not recover jumptable at 0x1001432e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BeginWaitCursor(this);
  return;
}


// ---- CArchive @ 10014334

void __thiscall
CArchive::CArchive(CArchive *this,CFile *param_1,uint param_2,int param_3,void *param_4)

{
                    /* WARNING: Could not recover jumptable at 0x10014334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CArchive(this,param_1,param_2,param_3,param_4);
  return;
}


// ---- Open @ 1001433a

int __thiscall CFile::Open(CFile *this,char *param_1,uint param_2,CFileException *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1001433a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Open(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- CException @ 10014340

void __thiscall CException::CException(CException *this)

{
                    /* WARNING: Could not recover jumptable at 0x10014340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CException(this);
  return;
}


// ---- CFile @ 10014346

void __thiscall CFile::CFile(CFile *this)

{
                    /* WARNING: Could not recover jumptable at 0x10014346. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CFile(this);
  return;
}


// ---- Flush @ 1001434c

void __thiscall CArchive::Flush(CArchive *this)

{
                    /* WARNING: Could not recover jumptable at 0x1001434c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Flush(this);
  return;
}


// ---- operator<< @ 10014352

CArchive * operator<<(CArchive *param_1,CString *param_2)

{
  CArchive *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10014352. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = operator<<(param_1,param_2);
  return pCVar1;
}


// ---- Left @ 10014358

void __thiscall CString::Left(CString *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10014358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Left(this,param_1);
  return;
}


// ---- Mid @ 1001435e

void __thiscall CString::Mid(CString *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x1001435e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Mid(this,param_1);
  return;
}


// ---- Find @ 10014364

int __thiscall CString::Find(CString *this,char param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10014364. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Find(this,param_1);
  return iVar1;
}


// ---- FUN_10014374 @ 10014374

undefined4 * FUN_10014374(void)

{
  AFX_MODULE_STATE::AFX_MODULE_STATE((AFX_MODULE_STATE *)&DAT_1001d460,1,FUN_100143d2,0x600);
  DAT_1001d460 = &PTR_FUN_100179cc;
  return &DAT_1001d460;
}


// ---- FUN_1001439c @ 1001439c

AFX_MODULE_STATE * __thiscall FUN_1001439c(void *this,byte param_1)

{
  AFX_MODULE_STATE::~AFX_MODULE_STATE(this);
  if ((param_1 & 1) != 0) {
    CNoTrackObject::operator_delete(this);
  }
  return this;
}


// ---- ~AFX_MODULE_STATE @ 100143b7

void __thiscall AFX_MODULE_STATE::~AFX_MODULE_STATE(AFX_MODULE_STATE *this)

{
                    /* WARNING: Could not recover jumptable at 0x100147ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~AFX_MODULE_STATE(this);
  return;
}


// ---- FUN_100143bc @ 100143bc

void FUN_100143bc(void)

{
  FUN_100145cc((_onexit_t)&LAB_100143c8);
  return;
}


// ---- FUN_100143d2 @ 100143d2

/* WARNING: Function: _EH_prolog replaced with injection: EH_prolog */

void FUN_100143d2(HWND__ *param_1,uint param_2,uint param_3,long param_4)

{
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_100155d0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2
            ((AFX_MAINTAIN_STATE2 *)&local_18,(AFX_MODULE_STATE *)&DAT_1001d460);
  local_8 = 0;
  AfxWndProc(param_1,param_2,param_3,param_4);
  *(undefined4 *)(local_14 + 4) = local_18;
  ExceptionList = local_10;
  return;
}


// ---- FUN_10014417 @ 10014417

undefined4 * FUN_10014417(void)

{
  return &DAT_1001d460;
}


// ---- FUN_1001441d @ 1001441d

int FUN_1001441d(HINSTANCE__ *param_1,int param_2)

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
      pAVar5 = AfxSetModuleState((AFX_MODULE_STATE *)&DAT_1001d460);
      p_Var3 = AfxGetThreadState();
      *(AFX_MODULE_STATE **)(p_Var3 + 8) = pAVar5;
      pAVar5 = AfxGetModuleState();
      if (*(int **)(pAVar5 + 4) != (int *)0x0) {
        (**(code **)(**(int **)(pAVar5 + 4) + 0x70))();
      }
      AfxLockTempMaps();
      AfxUnlockTempMaps(-1);
      AfxWinTerm();
      AfxTermExtensionModule((AFX_EXTENSION_MODULE *)&DAT_1001e4f0,1);
    }
    else if (param_2 == 3) {
      AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2
                ((AFX_MAINTAIN_STATE2 *)&local_c,(AFX_MODULE_STATE *)&DAT_1001d460);
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
  iVar4 = AfxWinInit(param_1,(HINSTANCE__ *)0x0,&DAT_1001c718,0);
  if (iVar4 != 0) {
    pAVar5 = AfxGetModuleState();
    piVar2 = *(int **)(pAVar5 + 4);
    if ((piVar2 == (int *)0x0) || (iVar4 = (**(code **)(*piVar2 + 0x58))(), iVar4 != 0)) {
      *(undefined4 *)(p_Var3 + 8) = uVar1;
      AfxInitExtensionModule((AFX_EXTENSION_MODULE *)&DAT_1001e4f0,param_1);
      this = operator_new(0x40);
      if (this != (CDynLinkLibrary *)0x0) {
        CDynLinkLibrary::CDynLinkLibrary(this,(AFX_EXTENSION_MODULE *)&DAT_1001e4f0,0);
      }
      param_2 = 1;
      goto LAB_100144a9;
    }
    (**(code **)(*piVar2 + 0x70))();
  }
  AfxWinTerm();
LAB_100144a9:
  *(undefined4 *)(p_Var3 + 8) = uVar1;
  p_Var3 = AfxGetThreadState();
  AfxSetModuleState(*(AFX_MODULE_STATE **)(p_Var3 + 8));
  return param_2;
}


// ---- FUN_10014544 @ 10014544

undefined4 FUN_10014544(undefined4 param_1,int param_2)

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
    pAVar2 = AfxSetModuleState((AFX_MODULE_STATE *)&DAT_1001d460);
    *(AFX_MODULE_STATE **)(p_Var1 + 8) = pAVar2;
  }
  else if (param_2 == 0) {
    p_Var1 = AfxGetThreadState();
    AfxSetModuleState(*(AFX_MODULE_STATE **)(p_Var1 + 8));
  }
  return 1;
}


// ---- FUN_100145a0 @ 100145a0

void __cdecl FUN_100145a0(_onexit_t param_1)

{
  if (DAT_1001e518 == -1) {
    _onexit(param_1);
    return;
  }
  __dllonexit(param_1,&DAT_1001e518,&DAT_1001e514);
  return;
}


// ---- FUN_100145cc @ 100145cc

int __cdecl FUN_100145cc(_onexit_t param_1)

{
  int iVar1;
  
  iVar1 = FUN_100145a0(param_1);
  return (iVar1 != 0) - 1;
}


// ---- ftol @ 100145de

void __cdecl ftol(void)

{
                    /* WARNING: Could not recover jumptable at 0x100145de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ftol();
  return;
}


// ---- FUN_100145f0 @ 100145f0

/* WARNING: Unable to track spacebase fully for stack */

void FUN_100145f0(void)

{
  uint in_EAX;
  undefined1 *puVar1;
  undefined4 unaff_retaddr;
  
  puVar1 = &stack0x00000004;
  for (; 0xfff < in_EAX; in_EAX = in_EAX - 0x1000) {
    puVar1 = puVar1 + -0x1000;
  }
  *(undefined4 *)(puVar1 + (-4 - in_EAX)) = unaff_retaddr;
  return;
}


// ---- FUN_1001461f @ 1001461f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1001461f(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *_Memory;
  undefined4 *puVar2;
  
  if (param_2 == 0) {
    if (0 < DAT_1001e50c) {
      DAT_1001e50c = DAT_1001e50c + -1;
      goto LAB_10014635;
    }
LAB_1001465d:
    uVar1 = 0;
  }
  else {
LAB_10014635:
    _DAT_1001e510 = *(undefined4 *)_adjust_fdiv_exref;
    if (param_2 == 1) {
      DAT_1001e518 = malloc(0x80);
      if (DAT_1001e518 == (undefined4 *)0x0) goto LAB_1001465d;
      *DAT_1001e518 = 0;
      DAT_1001e514 = DAT_1001e518;
      initterm(&DAT_1001a000,&DAT_1001abac);
      DAT_1001e50c = DAT_1001e50c + 1;
    }
    else if ((param_2 == 0) &&
            (_Memory = DAT_1001e518, puVar2 = DAT_1001e514, DAT_1001e518 != (undefined4 *)0x0)) {
      while (puVar2 = puVar2 + -1, _Memory <= puVar2) {
        if ((code *)*puVar2 != (code *)0x0) {
          (*(code *)*puVar2)();
          _Memory = DAT_1001e518;
        }
      }
      free(_Memory);
      DAT_1001e518 = (undefined4 *)0x0;
    }
    uVar1 = 1;
  }
  return uVar1;
}


// ---- entry @ 100146ca

int entry(HINSTANCE__ *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_2;
  iVar2 = DAT_1001e50c;
  if (param_2 != 0) {
    if ((param_2 != 1) && (param_2 != 2)) goto LAB_10014712;
    if ((PTR_FUN_1001c68c != (undefined *)0x0) &&
       (iVar2 = (*(code *)PTR_FUN_1001c68c)(param_1,param_2,param_3), iVar2 == 0)) {
      return 0;
    }
    iVar2 = FUN_1001461f(param_1,param_2);
  }
  if (iVar2 == 0) {
    return 0;
  }
LAB_10014712:
  iVar2 = FUN_1001441d(param_1,param_2);
  if (param_2 == 1) {
    if (iVar2 != 0) {
      return iVar2;
    }
    FUN_1001461f(param_1,0);
  }
  if ((param_2 != 0) && (param_2 != 3)) {
    return iVar2;
  }
  iVar3 = FUN_1001461f(param_1,param_2);
  param_2 = iVar2;
  if (iVar3 == 0) {
    param_2 = 0;
  }
  if (param_2 != 0) {
    if (PTR_FUN_1001c68c != (undefined *)0x0) {
      iVar2 = (*(code *)PTR_FUN_1001c68c)(param_1,iVar1,param_3);
      return iVar2;
    }
    return param_2;
  }
  return 0;
}


// ---- FUN_10014767 @ 10014767

type_info * __thiscall FUN_10014767(void *this,byte param_1)

{
  type_info::~type_info(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- _EH_prolog @ 10014784

/* WARNING: This is an inlined function */
/* WARNING: Function: _EH_prolog replaced with injection: EH_prolog */

void _EH_prolog(void)

{
  undefined1 auStack_c [12];
  
  ExceptionList = auStack_c;
                    /* WARNING: Could not recover jumptable at 0x10014784. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  return;
}


// ---- __dllonexit @ 1001478a

void __dllonexit(void)

{
                    /* WARNING: Could not recover jumptable at 0x1001478a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __dllonexit();
  return;
}


// ---- initterm @ 10014790

void __cdecl initterm(void)

{
                    /* WARNING: Could not recover jumptable at 0x10014790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  initterm();
  return;
}


// ---- ~type_info @ 10014796

void __thiscall type_info::~type_info(type_info *this)

{
                    /* WARNING: Could not recover jumptable at 0x10014796. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~type_info(this);
  return;
}


// ---- GetOpenFileNameA @ 1001479c

BOOL GetOpenFileNameA(LPOPENFILENAMEA param_1)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1001479c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetOpenFileNameA(param_1);
  return BVar1;
}


// ---- AFX_MODULE_STATE @ 100147a2

void __thiscall
AFX_MODULE_STATE::AFX_MODULE_STATE
          (AFX_MODULE_STATE *this,int param_1,_func_long_HWND___ptr_uint_uint_long *param_2,
          ulong param_3)

{
                    /* WARNING: Could not recover jumptable at 0x100147a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AFX_MODULE_STATE(this,param_1,param_2,param_3);
  return;
}


// ---- operator_delete @ 100147a8

void CNoTrackObject::operator_delete(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x100147a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  operator_delete(param_1);
  return;
}


// ---- ~AFX_MODULE_STATE @ 100147ae

void __thiscall AFX_MODULE_STATE::~AFX_MODULE_STATE(AFX_MODULE_STATE *this)

{
                    /* WARNING: Could not recover jumptable at 0x100147ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~AFX_MODULE_STATE(this);
  return;
}


// ---- AfxWndProc @ 100147b4

long AfxWndProc(HWND__ *param_1,uint param_2,uint param_3,long param_4)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100147b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = AfxWndProc(param_1,param_2,param_3,param_4);
  return lVar1;
}


// ---- AfxTermThread @ 100147ba

void AfxTermThread(HINSTANCE__ *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x100147ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AfxTermThread(param_1);
  return;
}


// ---- AfxTermExtensionModule @ 100147c0

void AfxTermExtensionModule(AFX_EXTENSION_MODULE *param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x100147c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AfxTermExtensionModule(param_1,param_2);
  return;
}


// ---- AfxUnlockTempMaps @ 100147c6

int AfxUnlockTempMaps(int param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100147c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AfxUnlockTempMaps(param_1);
  return iVar1;
}


// ---- AfxLockTempMaps @ 100147cc

void AfxLockTempMaps(void)

{
                    /* WARNING: Could not recover jumptable at 0x100147cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AfxLockTempMaps();
  return;
}


// ---- AfxSetModuleState @ 100147d2

AFX_MODULE_STATE * AfxSetModuleState(AFX_MODULE_STATE *param_1)

{
  AFX_MODULE_STATE *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100147d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = AfxSetModuleState(param_1);
  return pAVar1;
}


// ---- CDynLinkLibrary @ 100147d8

void __thiscall
CDynLinkLibrary::CDynLinkLibrary(CDynLinkLibrary *this,AFX_EXTENSION_MODULE *param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x100147d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CDynLinkLibrary(this,param_1,param_2);
  return;
}


// ---- AfxInitExtensionModule @ 100147de

int AfxInitExtensionModule(AFX_EXTENSION_MODULE *param_1,HINSTANCE__ *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100147de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AfxInitExtensionModule(param_1,param_2);
  return iVar1;
}


// ---- AfxWinTerm @ 100147e4

void AfxWinTerm(void)

{
                    /* WARNING: Could not recover jumptable at 0x100147e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AfxWinTerm();
  return;
}


// ---- AfxWinInit @ 100147ea

int AfxWinInit(HINSTANCE__ *param_1,HINSTANCE__ *param_2,char *param_3,int param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100147ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AfxWinInit(param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- AfxGetThreadState @ 100147f0

_AFX_THREAD_STATE * AfxGetThreadState(void)

{
  _AFX_THREAD_STATE *p_Var1;
  
                    /* WARNING: Could not recover jumptable at 0x100147f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  p_Var1 = AfxGetThreadState();
  return p_Var1;
}


// ---- AfxCoreInitModule @ 100147f6

void AfxCoreInitModule(void)

{
                    /* WARNING: Could not recover jumptable at 0x100147f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AfxCoreInitModule();
  return;
}


// ---- AfxDllGetClassObject @ 100147fc

long AfxDllGetClassObject(_GUID *param_1,_GUID *param_2,void **param_3)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100147fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = AfxDllGetClassObject(param_1,param_2,param_3);
  return lVar1;
}


// ---- AfxDllCanUnloadNow @ 10014802

long AfxDllCanUnloadNow(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10014802. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = AfxDllCanUnloadNow();
  return lVar1;
}


// ---- DllGetClassObject @ 10014808

HRESULT DllGetClassObject(IID *rclsid,IID *riid,LPVOID *ppv)

{
  AFX_MODULE_STATE *pAVar1;
  long lVar2;
  undefined4 local_c;
  int local_8;
  
                    /* 0x14808  2  DllGetClassObject */
  pAVar1 = (AFX_MODULE_STATE *)FUN_10014417();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)&local_c,pAVar1);
  lVar2 = AfxDllGetClassObject(rclsid,riid,ppv);
  *(undefined4 *)(local_8 + 4) = local_c;
  return lVar2;
}


// ---- DllCanUnloadNow @ 10014836

HRESULT DllCanUnloadNow(void)

{
  AFX_MODULE_STATE *pAVar1;
  long lVar2;
  undefined4 local_c;
  int local_8;
  
                    /* 0x14836  1  DllCanUnloadNow */
  pAVar1 = (AFX_MODULE_STATE *)FUN_10014417();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)&local_c,pAVar1);
  lVar2 = AfxDllCanUnloadNow();
  *(undefined4 *)(local_8 + 4) = local_c;
  return lVar2;
}


// ---- Unwind@10014860 @ 10014860

void Unwind_10014860(void)

{
  int unaff_EBP;
  
  CDialog::~CDialog(*(CDialog **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10014868 @ 10014868

void Unwind_10014868(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x10) + 100));
  return;
}


// ---- Unwind@10014880 @ 10014880

void Unwind_10014880(void)

{
  int unaff_EBP;
  
  CDialog::~CDialog(*(CDialog **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@100148a0 @ 100148a0

void Unwind_100148a0(void)

{
  int unaff_EBP;
  
  FUN_100012a0(*(void **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@100148c0 @ 100148c0

void Unwind_100148c0(void)

{
  int unaff_EBP;
  
  FUN_100012a0(*(void **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@100148e0 @ 100148e0

void Unwind_100148e0(void)

{
  int unaff_EBP;
  
  FUN_100043d0((undefined4 *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@10014900 @ 10014900

void Unwind_10014900(void)

{
  int unaff_EBP;
  
  COleControl::~COleControl(*(COleControl **)(unaff_EBP + -0x30));
  return;
}


// ---- Unwind@10014908 @ 10014908

void Unwind_10014908(void)

{
  int unaff_EBP;
  
  FUN_10006070((CGdiObject *)(*(int *)(unaff_EBP + -0x30) + 0x22c));
  return;
}


// ---- Unwind@10014916 @ 10014916

void Unwind_10014916(void)

{
  int unaff_EBP;
  
  FUN_10006070((CGdiObject *)(*(int *)(unaff_EBP + -0x30) + 0x234));
  return;
}


// ---- Unwind@10014924 @ 10014924

void Unwind_10014924(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x30) + 600));
  return;
}


// ---- Unwind@10014932 @ 10014932

void Unwind_10014932(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x30) + 0x25c));
  return;
}


// ---- Unwind@10014940 @ 10014940

void Unwind_10014940(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x30) + 0x608));
  return;
}


// ---- Unwind@1001494e @ 1001494e

void Unwind_1001494e(void)

{
  int unaff_EBP;
  
  FUN_100060e0((CGdiObject *)(unaff_EBP + -0x2c));
  return;
}


// ---- Unwind@10014956 @ 10014956

void Unwind_10014956(void)

{
  int unaff_EBP;
  
  FUN_10013280((undefined4 *)(unaff_EBP + -0x2c));
  return;
}


// ---- Unwind@10014970 @ 10014970

void Unwind_10014970(void)

{
  int unaff_EBP;
  
  COleControl::~COleControl(*(COleControl **)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@10014978 @ 10014978

void Unwind_10014978(void)

{
  int unaff_EBP;
  
  FUN_10006070((CGdiObject *)(*(int *)(unaff_EBP + -0x14) + 0x22c));
  return;
}


// ---- Unwind@10014986 @ 10014986

void Unwind_10014986(void)

{
  int unaff_EBP;
  
  FUN_10006070((CGdiObject *)(*(int *)(unaff_EBP + -0x14) + 0x234));
  return;
}


// ---- Unwind@10014994 @ 10014994

void Unwind_10014994(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x14) + 600));
  return;
}


// ---- Unwind@100149a2 @ 100149a2

void Unwind_100149a2(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x14) + 0x25c));
  return;
}


// ---- Unwind@100149b0 @ 100149b0

void Unwind_100149b0(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x14) + 0x608));
  return;
}


// ---- Unwind@100149be @ 100149be

void Unwind_100149be(void)

{
  int unaff_EBP;
  
  FUN_10013280(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@100149c6 @ 100149c6

void Unwind_100149c6(void)

{
  int unaff_EBP;
  
  FUN_10013280(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@100149e0 @ 100149e0

void Unwind_100149e0(void)

{
  int unaff_EBP;
  
  FUN_100060e0((CGdiObject *)(unaff_EBP + -0x3c));
  return;
}


// ---- Unwind@100149e8 @ 100149e8

void Unwind_100149e8(void)

{
  int unaff_EBP;
  
  CPictureHolder::~CPictureHolder((CPictureHolder *)(unaff_EBP + 0xc));
  return;
}


// ---- Unwind@100149f0 @ 100149f0

void Unwind_100149f0(void)

{
  int unaff_EBP;
  
  FUN_10013280((undefined4 *)(unaff_EBP + -0x3c));
  return;
}


// ---- Unwind@10014a10 @ 10014a10

void Unwind_10014a10(void)

{
  int unaff_EBP;
  
  CDC::~CDC((CDC *)(unaff_EBP + -0x2c));
  return;
}


// ---- Unwind@10014a18 @ 10014a18

void Unwind_10014a18(void)

{
  int unaff_EBP;
  
  CDC::~CDC((CDC *)(unaff_EBP + -0x1c));
  return;
}


// ---- Unwind@10014a30 @ 10014a30

void Unwind_10014a30(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 4));
  return;
}


// ---- Unwind@10014a38 @ 10014a38

void Unwind_10014a38(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 8));
  return;
}


// ---- Unwind@10014a50 @ 10014a50

void Unwind_10014a50(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 4));
  return;
}


// ---- Unwind@10014a70 @ 10014a70

void Unwind_10014a70(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0xce0));
  return;
}


// ---- Unwind@10014a7b @ 10014a7b

void Unwind_10014a7b(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0xcd8));
  return;
}


// ---- Unwind@10014a86 @ 10014a86

void Unwind_10014a86(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0xcd0));
  return;
}


// ---- Unwind@10014a91 @ 10014a91

void Unwind_10014a91(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0xcdc));
  return;
}


// ---- Unwind@10014a9c @ 10014a9c

void Unwind_10014a9c(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0xcd0));
  return;
}


// ---- Unwind@10014aa7 @ 10014aa7

void Unwind_10014aa7(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0xcd0));
  return;
}


// ---- Unwind@10014ab2 @ 10014ab2

void Unwind_10014ab2(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0xcbc));
  return;
}


// ---- Unwind@10014abd @ 10014abd

void Unwind_10014abd(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0xcdc));
  return;
}


// ---- Unwind@10014ac8 @ 10014ac8

void Unwind_10014ac8(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0xcd0));
  return;
}


// ---- Unwind@10014ad3 @ 10014ad3

void Unwind_10014ad3(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0xcc4));
  return;
}


// ---- Unwind@10014ade @ 10014ade

void Unwind_10014ade(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0xca4));
  return;
}


// ---- Unwind@10014ae9 @ 10014ae9

void Unwind_10014ae9(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0xcdc));
  return;
}


// ---- Unwind@10014af4 @ 10014af4

void Unwind_10014af4(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0xc98));
  return;
}


// ---- Unwind@10014aff @ 10014aff

void Unwind_10014aff(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0xcc0));
  return;
}


// ---- Unwind@10014b0a @ 10014b0a

void Unwind_10014b0a(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0xcac));
  return;
}


// ---- Unwind@10014b15 @ 10014b15

void Unwind_10014b15(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0xcd4));
  return;
}


// ---- Unwind@10014b20 @ 10014b20

void Unwind_10014b20(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0xca8));
  return;
}


// ---- Unwind@10014b2b @ 10014b2b

void Unwind_10014b2b(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0xcc8));
  return;
}


// ---- Unwind@10014b40 @ 10014b40

void Unwind_10014b40(void)

{
  int unaff_EBP;
  
  FUN_10013280(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10014b60 @ 10014b60

void Unwind_10014b60(void)

{
  int unaff_EBP;
  
  FUN_10013280(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10014b80 @ 10014b80

void Unwind_10014b80(void)

{
  int unaff_EBP;
  
  FUN_10013280(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10014ba0 @ 10014ba0

void Unwind_10014ba0(void)

{
  int unaff_EBP;
  
  FUN_10001090((CDialog *)(unaff_EBP + -0x74));
  return;
}


// ---- Unwind@10014ba8 @ 10014ba8

void Unwind_10014ba8(void)

{
  int unaff_EBP;
  
  CDialog::~CDialog((CDialog *)(unaff_EBP + -0x74));
  return;
}


// ---- Unwind@10014bc0 @ 10014bc0

void Unwind_10014bc0(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 4));
  return;
}


// ---- Unwind@10014bc8 @ 10014bc8

void Unwind_10014bc8(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 8));
  return;
}


// ---- Unwind@10014bd0 @ 10014bd0

void Unwind_10014bd0(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x40));
  return;
}


// ---- Unwind@10014bd8 @ 10014bd8

void Unwind_10014bd8(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x3c));
  return;
}


// ---- Unwind@10014be0 @ 10014be0

void Unwind_10014be0(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x38));
  return;
}


// ---- Unwind@10014c00 @ 10014c00

void Unwind_10014c00(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 4));
  return;
}


// ---- Unwind@10014c08 @ 10014c08

void Unwind_10014c08(void)

{
  int unaff_EBP;
  
  FUN_100085c0((CMenu *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@10014c10 @ 10014c10

void Unwind_10014c10(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x1c));
  return;
}


// ---- Unwind@10014c18 @ 10014c18

void Unwind_10014c18(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x18));
  return;
}


// ---- Unwind@10014c20 @ 10014c20

void Unwind_10014c20(void)

{
  int unaff_EBP;
  
  FUN_10013280((undefined4 *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@10014c40 @ 10014c40

void Unwind_10014c40(void)

{
  int unaff_EBP;
  
  FUN_100012a0(*(void **)(unaff_EBP + -0xc68));
  return;
}


// ---- Unwind@10014c4d @ 10014c4d

void Unwind_10014c4d(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0xc70));
  return;
}


// ---- Unwind@10014c58 @ 10014c58

void Unwind_10014c58(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0xc6c));
  return;
}


// ---- Unwind@10014c63 @ 10014c63

void Unwind_10014c63(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0xc70));
  return;
}


// ---- Unwind@10014c6e @ 10014c6e

void Unwind_10014c6e(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0xc70));
  return;
}


// ---- Unwind@10014c79 @ 10014c79

void Unwind_10014c79(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0xc70));
  return;
}


// ---- Unwind@10014c84 @ 10014c84

void Unwind_10014c84(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0xc70));
  return;
}


// ---- Unwind@10014c8f @ 10014c8f

void Unwind_10014c8f(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0xc70));
  return;
}


// ---- Unwind@10014c9a @ 10014c9a

void Unwind_10014c9a(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0xc70));
  return;
}


// ---- Unwind@10014ca5 @ 10014ca5

void Unwind_10014ca5(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0xc70));
  return;
}


// ---- Unwind@10014cb0 @ 10014cb0

void Unwind_10014cb0(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0xc70));
  return;
}


// ---- Unwind@10014cbb @ 10014cbb

void Unwind_10014cbb(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0xc68));
  return;
}


// ---- Unwind@10014cd0 @ 10014cd0

void Unwind_10014cd0(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x1c));
  return;
}


// ---- Unwind@10014cd8 @ 10014cd8

void Unwind_10014cd8(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x20));
  return;
}


// ---- Unwind@10014ce0 @ 10014ce0

void Unwind_10014ce0(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x18));
  return;
}


// ---- Unwind@10014ce8 @ 10014ce8

void Unwind_10014ce8(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 4));
  return;
}


// ---- Unwind@10014cf0 @ 10014cf0

void Unwind_10014cf0(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x18));
  return;
}


// ---- Unwind@10014cf8 @ 10014cf8

void Unwind_10014cf8(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x18));
  return;
}


// ---- Unwind@10014d00 @ 10014d00

void Unwind_10014d00(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x18));
  return;
}


// ---- Unwind@10014d08 @ 10014d08

void Unwind_10014d08(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x18));
  return;
}


// ---- Unwind@10014d10 @ 10014d10

void Unwind_10014d10(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10014d18 @ 10014d18

void Unwind_10014d18(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 4));
  return;
}


// ---- Unwind@10014d20 @ 10014d20

void Unwind_10014d20(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10014d28 @ 10014d28

void Unwind_10014d28(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10014d40 @ 10014d40

void Unwind_10014d40(void)

{
  int unaff_EBP;
  
  FUN_10013280(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10014d60 @ 10014d60

void Unwind_10014d60(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@10014d68 @ 10014d68

void Unwind_10014d68(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10014d80 @ 10014d80

void Unwind_10014d80(void)

{
  int unaff_EBP;
  
  FUN_100012a0(*(void **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10014da0 @ 10014da0

void Unwind_10014da0(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0xc64));
  return;
}


// ---- Unwind@10014dc0 @ 10014dc0

void Unwind_10014dc0(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10014de0 @ 10014de0

void Unwind_10014de0(void)

{
  int unaff_EBP;
  
  FUN_100012a0(*(void **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10014e00 @ 10014e00

void Unwind_10014e00(void)

{
  int unaff_EBP;
  
  CWinApp::~CWinApp(*(CWinApp **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10014e20 @ 10014e20

void Unwind_10014e20(void)

{
  int unaff_EBP;
  
  CWinApp::~CWinApp(*(CWinApp **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10014e40 @ 10014e40

void Unwind_10014e40(void)

{
  int unaff_EBP;
  
  FUN_100012a0(*(void **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10014e60 @ 10014e60

void Unwind_10014e60(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 4));
  return;
}


// ---- Unwind@10014e80 @ 10014e80

void Unwind_10014e80(void)

{
  int unaff_EBP;
  
  FUN_10013280(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10014e88 @ 10014e88

void Unwind_10014e88(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x10) + 4));
  return;
}


// ---- Unwind@10014e93 @ 10014e93

void Unwind_10014e93(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x10) + 8));
  return;
}


// ---- Unwind@10014e9e @ 10014e9e

void Unwind_10014e9e(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x10) + 0xc));
  return;
}


// ---- Unwind@10014ea9 @ 10014ea9

void Unwind_10014ea9(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x10) + 0x10));
  return;
}


// ---- Unwind@10014ec0 @ 10014ec0

void Unwind_10014ec0(void)

{
  int unaff_EBP;
  
  FUN_10013280(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10014ec8 @ 10014ec8

void Unwind_10014ec8(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x10) + 4));
  return;
}


// ---- Unwind@10014ed3 @ 10014ed3

void Unwind_10014ed3(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x10) + 8));
  return;
}


// ---- Unwind@10014ede @ 10014ede

void Unwind_10014ede(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x10) + 0xc));
  return;
}


// ---- Unwind@10014f00 @ 10014f00

void Unwind_10014f00(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 0xc));
  return;
}


// ---- Unwind@10014f08 @ 10014f08

void Unwind_10014f08(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@10014f10 @ 10014f10

void Unwind_10014f10(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x18));
  return;
}


// ---- Unwind@10014f18 @ 10014f18

void Unwind_10014f18(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    CString::~CString(*(CString **)(unaff_EBP + 4));
    return;
  }
  return;
}


// ---- Unwind@10014f40 @ 10014f40

void Unwind_10014f40(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 8));
  return;
}


// ---- Unwind@10014f48 @ 10014f48

void Unwind_10014f48(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10014f50 @ 10014f50

void Unwind_10014f50(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@10014f70 @ 10014f70

void Unwind_10014f70(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 8));
  return;
}


// ---- Unwind@10014f78 @ 10014f78

void Unwind_10014f78(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10014f80 @ 10014f80

void Unwind_10014f80(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@10014fa0 @ 10014fa0

void Unwind_10014fa0(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 8));
  return;
}


// ---- Unwind@10014fa8 @ 10014fa8

void Unwind_10014fa8(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10014fb0 @ 10014fb0

void Unwind_10014fb0(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@10014fd0 @ 10014fd0

void Unwind_10014fd0(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x1018));
  return;
}


// ---- Unwind@10014ff0 @ 10014ff0

void Unwind_10014ff0(void)

{
  int unaff_EBP;
  
  CDialog::~CDialog(*(CDialog **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10014ff8 @ 10014ff8

void Unwind_10014ff8(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x10) + 0x60));
  return;
}


// ---- Unwind@10015010 @ 10015010

void Unwind_10015010(void)

{
  int unaff_EBP;
  
  CDialog::~CDialog(*(CDialog **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10015030 @ 10015030

void Unwind_10015030(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x1c));
  return;
}


// ---- Unwind@10015038 @ 10015038

void Unwind_10015038(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10015040 @ 10015040

void Unwind_10015040(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10015048 @ 10015048

void Unwind_10015048(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@10015050 @ 10015050

void Unwind_10015050(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x18));
  return;
}


// ---- Unwind@10015070 @ 10015070

void Unwind_10015070(void)

{
  int unaff_EBP;
  
  FUN_100012a0(*(void **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10015090 @ 10015090

void Unwind_10015090(void)

{
  int unaff_EBP;
  
  FUN_10013280(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@100150b0 @ 100150b0

void Unwind_100150b0(void)

{
  int unaff_EBP;
  
  FUN_10013280(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@100150d0 @ 100150d0

void Unwind_100150d0(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x114));
  return;
}


// ---- Unwind@100150db @ 100150db

void Unwind_100150db(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x110) & 1) != 0) {
    CString::~CString(*(CString **)(unaff_EBP + 4));
    return;
  }
  return;
}


// ---- Unwind@10015100 @ 10015100

void Unwind_10015100(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@10015120 @ 10015120

void Unwind_10015120(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10015140 @ 10015140

void Unwind_10015140(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10015148 @ 10015148

void Unwind_10015148(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@10015160 @ 10015160

void Unwind_10015160(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10015180 @ 10015180

void Unwind_10015180(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x184));
  return;
}


// ---- Unwind@100151a0 @ 100151a0

void Unwind_100151a0(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x1118c));
  return;
}


// ---- Unwind@100151c0 @ 100151c0

void Unwind_100151c0(void)

{
  int unaff_EBP;
  
  CDialog::~CDialog(*(CDialog **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@100151c8 @ 100151c8

void Unwind_100151c8(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x10) + 0x60));
  return;
}


// ---- Unwind@100151d3 @ 100151d3

void Unwind_100151d3(void)

{
  int unaff_EBP;
  
  CComboBox::~CComboBox((CComboBox *)(*(int *)(unaff_EBP + -0x10) + 0x90));
  return;
}


// ---- Unwind@100151e1 @ 100151e1

void Unwind_100151e1(void)

{
  int unaff_EBP;
  
  CComboBox::~CComboBox((CComboBox *)(*(int *)(unaff_EBP + -0x10) + 0xd0));
  return;
}


// ---- Unwind@100151ef @ 100151ef

void Unwind_100151ef(void)

{
  int unaff_EBP;
  
  CComboBox::~CComboBox((CComboBox *)(*(int *)(unaff_EBP + -0x10) + 0x110));
  return;
}


// ---- Unwind@100151fd @ 100151fd

void Unwind_100151fd(void)

{
  int unaff_EBP;
  
  CButton::~CButton((CButton *)(*(int *)(unaff_EBP + -0x10) + 0x150));
  return;
}


// ---- Unwind@1001520b @ 1001520b

void Unwind_1001520b(void)

{
  int unaff_EBP;
  
  CButton::~CButton((CButton *)(*(int *)(unaff_EBP + -0x10) + 400));
  return;
}


// ---- Unwind@10015219 @ 10015219

void Unwind_10015219(void)

{
  int unaff_EBP;
  
  CButton::~CButton((CButton *)(*(int *)(unaff_EBP + -0x10) + 0x1d0));
  return;
}


// ---- Unwind@10015227 @ 10015227

void Unwind_10015227(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0x210));
  return;
}


// ---- Unwind@10015235 @ 10015235

void Unwind_10015235(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x10) + 0x260));
  return;
}


// ---- Unwind@10015250 @ 10015250

void Unwind_10015250(void)

{
  int unaff_EBP;
  
  CDialog::~CDialog(*(CDialog **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10015258 @ 10015258

void Unwind_10015258(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x10) + 0x60));
  return;
}


// ---- Unwind@10015263 @ 10015263

void Unwind_10015263(void)

{
  int unaff_EBP;
  
  CComboBox::~CComboBox((CComboBox *)(*(int *)(unaff_EBP + -0x10) + 0x90));
  return;
}


// ---- Unwind@10015271 @ 10015271

void Unwind_10015271(void)

{
  int unaff_EBP;
  
  CComboBox::~CComboBox((CComboBox *)(*(int *)(unaff_EBP + -0x10) + 0xd0));
  return;
}


// ---- Unwind@1001527f @ 1001527f

void Unwind_1001527f(void)

{
  int unaff_EBP;
  
  CComboBox::~CComboBox((CComboBox *)(*(int *)(unaff_EBP + -0x10) + 0x110));
  return;
}


// ---- Unwind@1001528d @ 1001528d

void Unwind_1001528d(void)

{
  int unaff_EBP;
  
  CButton::~CButton((CButton *)(*(int *)(unaff_EBP + -0x10) + 0x150));
  return;
}


// ---- Unwind@1001529b @ 1001529b

void Unwind_1001529b(void)

{
  int unaff_EBP;
  
  CButton::~CButton((CButton *)(*(int *)(unaff_EBP + -0x10) + 400));
  return;
}


// ---- Unwind@100152a9 @ 100152a9

void Unwind_100152a9(void)

{
  int unaff_EBP;
  
  CButton::~CButton((CButton *)(*(int *)(unaff_EBP + -0x10) + 0x1d0));
  return;
}


// ---- Unwind@100152b7 @ 100152b7

void Unwind_100152b7(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(*(int *)(unaff_EBP + -0x10) + 0x210));
  return;
}


// ---- Unwind@100152d0 @ 100152d0

void Unwind_100152d0(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@100152f0 @ 100152f0

void Unwind_100152f0(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10015310 @ 10015310

void Unwind_10015310(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10015330 @ 10015330

void Unwind_10015330(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x30));
  return;
}


// ---- Unwind@10015338 @ 10015338

void Unwind_10015338(void)

{
  int unaff_EBP;
  
  CStringArray::~CStringArray((CStringArray *)(unaff_EBP + -0x20));
  return;
}


// ---- Unwind@10015340 @ 10015340

void Unwind_10015340(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x24));
  return;
}


// ---- Unwind@10015348 @ 10015348

void Unwind_10015348(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x28));
  return;
}


// ---- Unwind@10015350 @ 10015350

void Unwind_10015350(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x2c));
  return;
}


// ---- Unwind@10015370 @ 10015370

void Unwind_10015370(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10015390 @ 10015390

void Unwind_10015390(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@100153b0 @ 100153b0

void Unwind_100153b0(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@100153d0 @ 100153d0

void Unwind_100153d0(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@100153f0 @ 100153f0

void Unwind_100153f0(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10015410 @ 10015410

void Unwind_10015410(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x31c));
  return;
}


// ---- Unwind@1001541b @ 1001541b

void Unwind_1001541b(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -800));
  return;
}


// ---- Unwind@10015426 @ 10015426

void Unwind_10015426(void)

{
  int unaff_EBP;
  
  CFile::~CFile((CFile *)(unaff_EBP + -0x2c0));
  return;
}


// ---- Unwind@10015431 @ 10015431

void Unwind_10015431(void)

{
  int unaff_EBP;
  
  FUN_10013280((undefined4 *)(unaff_EBP + -0x2d4));
  return;
}


// ---- Unwind@1001543c @ 1001543c

void Unwind_1001543c(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x2c4));
  return;
}


// ---- Unwind@10015447 @ 10015447

void Unwind_10015447(void)

{
  int unaff_EBP;
  
  FUN_100132b0((undefined4 *)(unaff_EBP + -0x2d4));
  return;
}


// ---- Unwind@10015452 @ 10015452

void Unwind_10015452(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x324));
  return;
}


// ---- Unwind@1001545d @ 1001545d

void Unwind_1001545d(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x328));
  return;
}


// ---- Unwind@10015468 @ 10015468

void Unwind_10015468(void)

{
  int unaff_EBP;
  
  FUN_10013280((undefined4 *)(unaff_EBP + -0x2d4));
  return;
}


// ---- Unwind@10015473 @ 10015473

void Unwind_10015473(void)

{
  int unaff_EBP;
  
  FUN_10013280((undefined4 *)(unaff_EBP + -0x2d4));
  return;
}


// ---- Unwind@1001547e @ 1001547e

void Unwind_1001547e(void)

{
  int unaff_EBP;
  
  CArchive::~CArchive((CArchive *)(unaff_EBP + -0x318));
  return;
}


// ---- Unwind@10015489 @ 10015489

void Unwind_10015489(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x32c));
  return;
}


// ---- Unwind@10015494 @ 10015494

void Unwind_10015494(void)

{
  int unaff_EBP;
  
  FUN_10013280((undefined4 *)(unaff_EBP + -0x2d4));
  return;
}


// ---- Unwind@1001549f @ 1001549f

void Unwind_1001549f(void)

{
  int unaff_EBP;
  
  FUN_10013280((undefined4 *)(unaff_EBP + -0x2d4));
  return;
}


// ---- Unwind@100154c0 @ 100154c0

void Unwind_100154c0(void)

{
  int unaff_EBP;
  
  FUN_10013280(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@100154e0 @ 100154e0

void Unwind_100154e0(void)

{
  int unaff_EBP;
  
  FUN_1000a5f0((CDialog *)(unaff_EBP + -0x70));
  return;
}


// ---- Unwind@100154e8 @ 100154e8

void Unwind_100154e8(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0xf4));
  return;
}


// ---- Unwind@100154f3 @ 100154f3

void Unwind_100154f3(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0xe8));
  return;
}


// ---- Unwind@100154fe @ 100154fe

void Unwind_100154fe(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0xe8));
  return;
}


// ---- Unwind@10015509 @ 10015509

void Unwind_10015509(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0xe4));
  return;
}


// ---- Unwind@10015514 @ 10015514

void Unwind_10015514(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0xe8));
  return;
}


// ---- Unwind@1001551f @ 1001551f

void Unwind_1001551f(void)

{
  int unaff_EBP;
  
  CFile::~CFile((CFile *)(unaff_EBP + -0x80));
  return;
}


// ---- Unwind@10015527 @ 10015527

void Unwind_10015527(void)

{
  int unaff_EBP;
  
  FUN_10013280((undefined4 *)(unaff_EBP + -0x94));
  return;
}


// ---- Unwind@10015532 @ 10015532

void Unwind_10015532(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x84));
  return;
}


// ---- Unwind@1001553d @ 1001553d

void Unwind_1001553d(void)

{
  int unaff_EBP;
  
  FUN_100132b0((undefined4 *)(unaff_EBP + -0x94));
  return;
}


// ---- Unwind@10015548 @ 10015548

void Unwind_10015548(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0xec));
  return;
}


// ---- Unwind@10015553 @ 10015553

void Unwind_10015553(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0xe8));
  return;
}


// ---- Unwind@1001555e @ 1001555e

void Unwind_1001555e(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0xe4));
  return;
}


// ---- Unwind@10015569 @ 10015569

void Unwind_10015569(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x9c));
  return;
}


// ---- Unwind@10015574 @ 10015574

void Unwind_10015574(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x98));
  return;
}


// ---- Unwind@1001557f @ 1001557f

void Unwind_1001557f(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x98));
  return;
}


// ---- Unwind@1001558a @ 1001558a

void Unwind_1001558a(void)

{
  int unaff_EBP;
  
  FUN_10013280((undefined4 *)(unaff_EBP + -0x94));
  return;
}


// ---- Unwind@10015595 @ 10015595

void Unwind_10015595(void)

{
  int unaff_EBP;
  
  CDialog::~CDialog((CDialog *)(unaff_EBP + -0x70));
  return;
}


// ---- Unwind@1001559d @ 1001559d

void Unwind_1001559d(void)

{
  int unaff_EBP;
  
  CArchive::~CArchive((CArchive *)(unaff_EBP + -0xe0));
  return;
}


// ---- Unwind@100155a8 @ 100155a8

void Unwind_100155a8(void)

{
  int unaff_EBP;
  
  FUN_10013280((undefined4 *)(unaff_EBP + -0x94));
  return;
}


// ---- Unwind@100155b3 @ 100155b3

void Unwind_100155b3(void)

{
  int unaff_EBP;
  
  CDialog::~CDialog((CDialog *)(unaff_EBP + -0x70));
  return;
}


// ---- Unwind@100155c8 @ 100155c8

void Unwind_100155c8(void)

{
  int unaff_EBP;
  
  FUN_100043d0((undefined4 *)(unaff_EBP + -0x14));
  return;
}


