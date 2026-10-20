// Decompiled with Ghidra from leonavgt.ocx
// Format: Portable Executable (PE), image base 10000000

// ---- FUN_10001010 @ 10001010

void FUN_10001010(void)

{
  FUN_10001050((CWinApp *)&DAT_1000fd88);
  return;
}


// ---- FUN_10001020 @ 10001020

void FUN_10001020(void)

{
  FUN_1000afb3((_onexit_t)&LAB_10001030);
  return;
}


// ---- ~CWinApp @ 10001040

void __thiscall CWinApp::~CWinApp(CWinApp *this)

{
                    /* WARNING: Could not recover jumptable at 0x1000a780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CWinApp(this);
  return;
}


// ---- FUN_10001050 @ 10001050

CWinApp * __fastcall FUN_10001050(CWinApp *param_1)

{
  CWinApp::CWinApp(param_1,(char *)0x0);
  *(undefined ***)param_1 = &PTR_LAB_1000c524;
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
  pAVar1 = (AFX_MODULE_STATE *)FUN_1000ae09();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)&local_8,pAVar1);
  pAVar1 = AfxGetModuleState();
  iVar2 = AfxOleRegisterTypeLib
                    (*(HINSTANCE__ **)(pAVar1 + 8),(_GUID *)&DAT_1000c510,(char *)0x0,(char *)0x0);
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
  pAVar1 = (AFX_MODULE_STATE *)FUN_1000ae09();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)&local_8,pAVar1);
  iVar2 = AfxOleUnregisterTypeLib((_GUID *)&DAT_1000c510,0,0,0);
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


// ---- FUN_10004010 @ 10004010

COleControl * FUN_10004010(void)

{
  COleControl *pCVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1000b25a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pCVar1 = operator_new(0x348);
  local_4 = 0;
  if (pCVar1 != (COleControl *)0x0) {
    pCVar1 = FUN_10004380(pCVar1);
    ExceptionList = local_c;
    return pCVar1;
  }
  ExceptionList = local_c;
  return (COleControl *)0x0;
}


// ---- FUN_10004070 @ 10004070

void FUN_10004070(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ---- FUN_10004090 @ 10004090

undefined ** FUN_10004090(void)

{
  return &PTR_s_CLEONavgtCtrl_1000c5c8;
}


// ---- FUN_100040b0 @ 100040b0

undefined ** FUN_100040b0(void)

{
  return &PTR_LAB_1000c5e0;
}


// ---- FUN_100040d0 @ 100040d0

undefined ** FUN_100040d0(void)

{
  return &PTR_LAB_1000c780;
}


// ---- FUN_100040e0 @ 100040e0

undefined * FUN_100040e0(void)

{
  return &DAT_10010298;
}


// ---- FUN_10004120 @ 10004120

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10004120(int *param_1)

{
  if (DAT_1000e7ec == -1) {
    _DAT_1000fea8 = DAT_1000cd88;
    _DAT_1000feac = DAT_1000cd8c;
    _DAT_1000feb0 = DAT_1000cd90;
    _DAT_1000feb4 = DAT_1000cd94;
    DAT_1000e7ec = 1;
    *param_1 = 1;
    return &DAT_1000fea8;
  }
  *param_1 = DAT_1000e7ec;
  return &DAT_1000fea8;
}


// ---- FUN_10004190 @ 10004190

void FUN_10004190(void)

{
  FUN_100041b0(&DAT_1000fe58,(_GUID *)&DAT_1000c8b8,(CRuntimeClass *)&PTR_s_CLEONavgtCtrl_1000c5c8,0
               ,"LEONAVGT.LEONavgtCtrl.1");
  return;
}


// ---- FUN_100041b0 @ 100041b0

COleObjectFactory * __thiscall
FUN_100041b0(void *this,_GUID *param_1,CRuntimeClass *param_2,int param_3,char *param_4)

{
  COleObjectFactory::COleObjectFactory(this,param_1,param_2,param_3,param_4);
  *(undefined ***)this = &PTR_LAB_1000c8e8;
  return this;
}


// ---- FUN_100041e0 @ 100041e0

COleObjectFactory * __thiscall FUN_100041e0(void *this,byte param_1)

{
  COleObjectFactory::~COleObjectFactory(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- ~COleObjectFactory @ 10004200

void __thiscall COleObjectFactory::~COleObjectFactory(COleObjectFactory *this)

{
                    /* WARNING: Could not recover jumptable at 0x1000a8d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~COleObjectFactory(this);
  return;
}


// ---- FUN_10004210 @ 10004210

void FUN_10004210(void)

{
  FUN_1000afb3((_onexit_t)&LAB_10004220);
  return;
}


// ---- FUN_10004240 @ 10004240

undefined4 FUN_10004240(undefined4 *param_1)

{
  *param_1 = DAT_1000c8b8;
  param_1[1] = DAT_1000c8bc;
  param_1[2] = DAT_1000c8c0;
  param_1[3] = DAT_1000c8c4;
  return 0;
}


// ---- FUN_10004270 @ 10004270

void FUN_10004270(LCID param_1,ITypeLib **param_2)

{
  LoadRegTypeLib((GUID *)&DAT_1000c510,DAT_1000c520,DAT_1000c522,param_1,param_2);
  return;
}


// ---- FUN_100042a0 @ 100042a0

void __fastcall FUN_100042a0(int param_1)

{
  undefined4 local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1000b278;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2
            ((AFX_MAINTAIN_STATE2 *)&local_14,*(AFX_MODULE_STATE **)(param_1 + 0x1c));
  local_4 = 0;
  AfxGetTypeLibCache((_GUID *)&DAT_1000c510);
  *(undefined4 *)(local_10 + 4) = local_14;
  ExceptionList = local_c;
  return;
}


// ---- FUN_10004300 @ 10004300

undefined4 FUN_10004300(void)

{
  return 1;
}


// ---- FUN_10004310 @ 10004310

undefined4 FUN_10004310(void)

{
  return 0x20191;
}


// ---- FUN_10004380 @ 10004380

COleControl * __fastcall FUN_10004380(COleControl *param_1)

{
  HBRUSH pHVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1000b2ec;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  COleControl::COleControl(param_1);
  *(undefined4 *)(param_1 + 0x1dc) = 0;
  *(undefined ***)(param_1 + 0x1d8) = &PTR_LAB_1000ccd8;
  *(undefined4 *)(param_1 + 0x1e4) = 0;
  *(undefined ***)(param_1 + 0x1e0) = &PTR_LAB_1000ccd8;
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  CWnd::CWnd((CWnd *)(param_1 + 0x1e8));
  *(undefined ***)(param_1 + 0x1e8) = &PTR_GetRuntimeClass_1000cc18;
  local_4._0_1_ = 3;
  CWnd::CWnd((CWnd *)(param_1 + 0x228));
  *(undefined ***)(param_1 + 0x228) = &PTR_GetRuntimeClass_1000cc18;
  local_4._0_1_ = 4;
  CWnd::CWnd((CWnd *)(param_1 + 0x268));
  *(undefined ***)(param_1 + 0x268) = &PTR_GetRuntimeClass_1000cb54;
  local_4._0_1_ = 5;
  CString::CString((CString *)(param_1 + 0x330));
  local_4 = CONCAT31(local_4._1_3_,6);
  *(undefined ***)param_1 = &PTR_FUN_1000c95c;
  COleControl::InitializeIIDs(param_1,(_GUID *)&DAT_1000c8c8,(_GUID *)&DAT_1000c8d8);
  *(undefined4 *)(param_1 + 0x30c) = 0;
  *(undefined4 *)(param_1 + 0x310) = 0;
  *(undefined4 *)(param_1 + 0x344) = 0;
  *(undefined4 *)(param_1 + 0x2c0) = 0;
  *(undefined4 *)(param_1 + 0x2c4) = 0;
  *(undefined4 *)(param_1 + 0x2c8) = 0;
  *(undefined4 *)(param_1 + 0x2d4) = 0;
  *(undefined4 *)(param_1 + 0x2d8) = 0;
  *(undefined4 *)(param_1 + 0x2dc) = 0;
  *(undefined4 *)(param_1 + 0x1c8) = 0;
  *(undefined4 *)(param_1 + 0x328) = 0;
  *(undefined4 *)(param_1 + 0x32c) = 1;
  *(undefined4 *)(param_1 + 0x1cc) = 0;
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  *(undefined4 *)(param_1 + 0x304) = 0;
  *(undefined4 *)(param_1 + 0x308) = 0;
  *(undefined4 *)(param_1 + 0x2e8) = 0x3f800000;
  pHVar1 = CreateSolidBrush(0xff);
  CGdiObject::Attach((CGdiObject *)(param_1 + 0x1d8),pHVar1);
  pHVar1 = CreateSolidBrush(0xffff);
  CGdiObject::Attach((CGdiObject *)(param_1 + 0x1e0),pHVar1);
  *(undefined4 *)(param_1 + 0x1d4) = 0;
  ExceptionList = local_c;
  return param_1;
}


// ---- FUN_10004500 @ 10004500

void __fastcall FUN_10004500(undefined4 *param_1)

{
  *(undefined4 *)(param_1[1] + 4) = *param_1;
  return;
}


// ---- FUN_10004510 @ 10004510

COleControl * __thiscall FUN_10004510(void *this,byte param_1)

{
  FUN_10004530(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_10004530 @ 10004530

void __fastcall FUN_10004530(COleControl *param_1)

{
  CGdiObject *pCVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1000b36c;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)param_1 = &PTR_FUN_1000c95c;
  local_4 = 6;
  if (*(int **)(param_1 + 0x1d4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x1d4) + 4))(1);
  }
  local_4._0_1_ = 5;
  CString::~CString((CString *)(param_1 + 0x330));
  local_4._0_1_ = 4;
  CButton::~CButton((CButton *)(param_1 + 0x268));
  local_4._0_1_ = 3;
  CScrollBar::~CScrollBar((CScrollBar *)(param_1 + 0x228));
  local_4._0_1_ = 2;
  CScrollBar::~CScrollBar((CScrollBar *)(param_1 + 0x1e8));
  pCVar1 = (CGdiObject *)(param_1 + 0x1e0);
  *(undefined ***)pCVar1 = &PTR_LAB_1000cd00;
  local_4._0_1_ = 7;
  CGdiObject::DeleteObject(pCVar1);
  *(undefined ***)pCVar1 = &PTR_LAB_1000ccec;
  pCVar1 = (CGdiObject *)(param_1 + 0x1d8);
  *(undefined ***)pCVar1 = &PTR_LAB_1000cd00;
  local_4 = CONCAT31(local_4._1_3_,8);
  CGdiObject::DeleteObject(pCVar1);
  *(undefined ***)pCVar1 = &PTR_LAB_1000ccec;
  local_4 = 0xffffffff;
  COleControl::~COleControl(param_1);
  ExceptionList = pvStack_c;
  return;
}


// ---- FUN_10004640 @ 10004640

void __fastcall FUN_10004640(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_1000ccec;
  return;
}


// ---- FUN_10004650 @ 10004650

void __thiscall FUN_10004650(COleControl *param_1,CDC *param_2,CRect *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  BOOL BVar3;
  CBrush *pCVar4;
  DWORD DVar5;
  ulong uVar6;
  undefined4 uVar7;
  CBrush *pCVar8;
  CPen *pCVar9;
  HPALETTE__ *pHVar10;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  undefined1 auStack_70 [8];
  int iStack_68;
  int iStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  tagTEXTMETRICA tStack_50;
  
  COleControl::DoSuperclassPaint(param_1,param_2,param_3);
  iVar1 = COleControl::AmbientUserMode(param_1);
  if (iVar1 == 0) {
    tStack_50.tmDescent = *(LONG *)param_3;
    tStack_50.tmInternalLeading = *(LONG *)(param_3 + 4);
    tStack_50.tmExternalLeading = *(LONG *)(param_3 + 8);
    tStack_50.tmAveCharWidth = *(LONG *)(param_3 + 0xc);
    FUN_10005710(&tStack_50.tmDescent);
    *(LONG *)(param_1 + 0x2ac) = tStack_50.tmInternalLeading;
    *(LONG *)(param_1 + 0x2a8) = tStack_50.tmDescent;
    puVar2 = (undefined4 *)FUN_10005750(&iStack_78,tStack_50.tmDescent,tStack_50.tmInternalLeading);
    *(undefined4 *)(param_1 + 0x2b0) = *puVar2;
    *(undefined4 *)(param_1 + 0x2b4) = puVar2[1];
    *(undefined4 *)(param_1 + 0x2b8) = puVar2[2];
    *(undefined4 *)(param_1 + 700) = puVar2[3];
    BVar3 = IsWindow(*(HWND *)(param_1 + 0x208));
    if (BVar3 != 0) {
      BVar3 = IsWindow(*(HWND *)(param_1 + 0x248));
      if (BVar3 != 0) {
        BVar3 = IsWindow(*(HWND *)(param_1 + 0x288));
        if (BVar3 != 0) {
          COleControl::GetControlSize(param_1,&iStack_7c,&iStack_78);
          if (iStack_78 != iStack_7c + 0x14) {
            COleControl::SetControlSize(param_1,iStack_7c,iStack_7c + 0x14);
            return;
          }
        }
      }
    }
  }
  iStack_68 = *(int *)param_3;
  iStack_64 = *(int *)(param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 8);
  uStack_54 = *(undefined4 *)(param_3 + 4);
  uStack_5c = *(undefined4 *)(param_3 + 0xc);
  uStack_58 = *(undefined4 *)param_3;
  tStack_50.tmHeight = *(LONG *)(param_3 + 8);
  tStack_50.tmAscent = *(LONG *)(param_3 + 0xc);
  pCVar4 = (CBrush *)(**(code **)(*(int *)param_2 + 0x2c))(0);
  (**(code **)(*(int *)param_2 + 0x2c))(7);
  DrawEdge(*(HDC *)(param_2 + 4),(LPRECT)auStack_70,10,0xf);
  FUN_100056e0((int *)auStack_70);
  DVar5 = GetSysColor(5);
  CDC::FillSolidRect(param_2,(tagRECT *)auStack_70,DVar5);
  CDC::MoveTo(param_2,(int)&stack0xffffff80,auStack_70._0_4_);
  CDC::LineTo(param_2,auStack_70._4_4_,iStack_68);
  CDC::LineTo(param_2,auStack_70._4_4_,auStack_70._0_4_ + -1);
  CDC::MoveTo(param_2,(int)&stack0xffffff7c,iStack_74);
  CDC::LineTo(param_2,auStack_70._0_4_,(auStack_70._4_4_ - iStack_74) / 2 + iStack_74);
  CDC::MoveTo(param_2,(int)&stack0xffffff78,(auStack_70._0_4_ - iStack_78) / 2 + iStack_78);
  CDC::LineTo(param_2,(iStack_74 - iStack_7c) / 2 + iStack_7c,auStack_70._0_4_);
  FUN_10005620((int *)(auStack_70 + 4));
  pHVar10 = (HPALETTE__ *)0x0;
  uVar6 = COleControl::AmbientBackColor(param_1);
  uVar6 = COleControl::TranslateColor(param_1,uVar6,pHVar10);
  CDC::FillSolidRect(param_2,(tagRECT *)(auStack_70 + 4),uVar6);
  DrawEdge(*(HDC *)(param_2 + 4),(LPRECT)(auStack_70 + 4),5,8);
  uVar7 = (**(code **)(*(int *)param_2 + 0x2c))(0x11);
  GetTextMetricsA(*(HDC *)(param_2 + 8),&tStack_50);
  CDC::SetBkMode(param_2,1);
  CDC::SetTextAlign(param_2,0);
  pCVar9 = (CPen *)auStack_70;
  (**(code **)(*(int *)param_2 + 0x68))
            (auStack_70._0_4_ + 5,((iStack_64 - tStack_50.tmHeight) + -2 + auStack_70._4_4_) / 2,4,
             pCVar9,*(int *)(param_1 + 0x330),*(undefined4 *)(*(int *)(param_1 + 0x330) + -8),0);
  (**(code **)(*(int *)param_2 + 0x30))(uVar7);
  pCVar8 = (CBrush *)(param_1 + 0x1d8);
  if (*(int *)(param_1 + 0x32c) == 0) {
    pCVar8 = (CBrush *)(param_1 + 0x1e0);
  }
  CDC::SelectObject(param_2,pCVar8);
  Ellipse(*(HDC *)(param_2 + 4),*(int *)(param_1 + 0x2b0),*(int *)(param_1 + 0x2b4),
          *(int *)(param_1 + 0x2b8),*(int *)(param_1 + 700));
  CDC::SelectObject(param_2,pCVar9);
  CDC::SelectObject(param_2,pCVar4);
  return;
}


// ---- FUN_100049a0 @ 100049a0

void __thiscall FUN_100049a0(void *this,CPropExchange *param_1)

{
  (*(code *)**(undefined4 **)param_1)((int)this + 0x48,CONCAT22(DAT_1000c520,DAT_1000c522),1);
  COleControl::DoPropExchange(this,param_1);
  PX_Float(param_1,s_xSmallChange_1000e838,(float *)((int)this + 0x2cc),1.0);
  PX_Float(param_1,s_xLargeChange_1000e848,(float *)((int)this + 0x2d0),1.0);
  PX_Float(param_1,s_ySmallChange_1000e828,(float *)((int)this + 0x2e0),1.0);
  PX_Float(param_1,s_yLargeChange_1000e818,(float *)((int)this + 0x2e4),1.0);
  return;
}


// ---- FUN_10004a50 @ 10004a50

void FUN_10004a50(void)

{
  CDialog local_6c [96];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1000b388;
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


// ---- FUN_10004ab0 @ 10004ab0

void __thiscall FUN_10004ab0(void *this,tagCREATESTRUCTA *param_1)

{
  int iVar1;
  
  iVar1 = COleControl::AmbientUserMode(this);
  if (iVar1 == 0) {
    COleControl::GetAmbientProperty(this,-0x2be,8,(void *)((int)this + 0x330));
  }
  else {
    CString::operator=((CString *)((int)this + 0x330),&DAT_100102a4);
  }
  *(char **)(param_1 + 0x28) = s_STATIC_1000fca8;
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 0x100;
  CWnd::PreCreateWindow(this,param_1);
  return;
}


// ---- FUN_10004b10 @ 10004b10

undefined4 FUN_10004b10(void)

{
  return 0;
}


// ---- FUN_10004b20 @ 10004b20

void __fastcall FUN_10004b20(COleControl *param_1)

{
  BOOL BVar1;
  
  BVar1 = IsWindow(*(HWND *)(param_1 + 0x208));
  if (BVar1 != 0) {
    BVar1 = IsWindow(*(HWND *)(param_1 + 0x248));
    if (BVar1 != 0) {
      BVar1 = IsWindow(*(HWND *)(param_1 + 0x288));
      if (BVar1 != 0) {
        CWnd::EnableWindow((CWnd *)(param_1 + 0x1e8),*(int *)(param_1 + 0x32c));
        CWnd::EnableWindow((CWnd *)(param_1 + 0x228),*(int *)(param_1 + 0x32c));
        CWnd::EnableWindow((CWnd *)(param_1 + 0x268),*(int *)(param_1 + 0x32c));
        COleControl::InvalidateControl(param_1,(tagRECT *)0x0,1);
      }
    }
  }
  return;
}


// ---- FUN_10004ba0 @ 10004ba0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_10004ba0(void *this,int param_1,uint param_2)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  float10 fVar4;
  
  if (*(int *)((int)this + 0x1c8) == 0) {
    return 0;
  }
  iVar1 = *(int *)((int)this + 0x304);
  if (((iVar1 == 0) || (iVar1 != param_1)) || (param_2 != 0)) {
    if (10 < param_2) {
      return 0;
    }
    goto LAB_10004ca4;
  }
  if (*(float *)((int)this + 0x2fc) == _DAT_1000cd20) {
LAB_10004c34:
    *(undefined4 *)((int)this + 0x300) = 0x3f800000;
  }
  else {
    fVar4 = FUN_10009f00(*(void **)((int)this + 0x1d4),iVar1);
    if ((float10)_DAT_1000cd1c <= fVar4) goto LAB_10004c34;
    fVar4 = (float10)_CIpow();
    *(float *)((int)this + 0x300) = (float)fVar4;
  }
  fVar2 = *(float *)((int)this + 0x2e8) * *(float *)((int)this + 0x300);
  *(float *)((int)this + 0x2ec) = fVar2 * *(float *)((int)this + 0x2cc);
  *(float *)((int)this + 0x2f0) = fVar2 * *(float *)((int)this + 0x2d0);
  *(float *)((int)this + 0x2f4) = fVar2 * *(float *)((int)this + 0x2e0);
  *(float *)((int)this + 0x2f8) = fVar2 * *(float *)((int)this + 0x2e4);
  FUN_10004fa0(this,*(float *)((int)this + 0x328));
  FUN_10004fa0(this,(float)(*(int *)((int)this + 0x328) + 1));
LAB_10004ca4:
                    /* WARNING: Could not recover jumptable at 0x10004ca4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*(code *)(&PTR_LAB_10004e2c)[param_2])();
  return uVar3;
}


// ---- FUN_10004e60 @ 10004e60

undefined4 __fastcall FUN_10004e60(COleControl *param_1)

{
  if (*(int *)(param_1 + 0x1c8) != 0) {
    FUN_10005110(param_1);
  }
  return 0;
}


// ---- FUN_10004e80 @ 10004e80

void __fastcall FUN_10004e80(COleControl *param_1)

{
  int iVar1;
  float local_8;
  float local_4;
  
  if (*(int *)(param_1 + 0x1d0) == 1) {
    iVar1 = FUN_1000a1a0(*(void **)(param_1 + 0x1d4),*(undefined4 *)(param_1 + 0x328),&local_8,
                         &local_4);
    if (iVar1 != 1) {
      return;
    }
    if (*(float *)(param_1 + 0x2c0) != local_8) {
      *(float *)(param_1 + 0x2c0) = local_8;
    }
    local_8 = local_4;
    if (*(float *)(param_1 + 0x2d4) == local_4) goto LAB_10004f37;
  }
  else {
    iVar1 = FUN_1000a020(*(void **)(param_1 + 0x1d4),*(undefined4 *)(param_1 + 0x328),&local_8);
    if (iVar1 != 1) {
      return;
    }
    *(float *)(param_1 + 0x2c0) = local_8;
    iVar1 = FUN_1000a020(*(void **)(param_1 + 0x1d4),*(int *)(param_1 + 0x328) + 1,&local_8);
    if (iVar1 != 1) {
      return;
    }
  }
  *(float *)(param_1 + 0x2d4) = local_8;
LAB_10004f37:
  if (*(int *)(param_1 + 0x344) != 0) {
    FUN_100059e0((int)param_1);
    *(undefined4 *)(param_1 + 0x344) = 0;
  }
  if (*(int *)(param_1 + 0x1cc) != 0) {
    if (*(int *)(param_1 + 0x30c) == 0) {
      FUN_10005780(param_1);
    }
    else {
      FUN_100059e0((int)param_1);
    }
    if (*(int *)(param_1 + 0x310) != 0) {
      *(undefined4 *)(param_1 + 0x310) = 0;
      FUN_10005780(param_1);
      return;
    }
    FUN_100059e0((int)param_1);
  }
  return;
}


// ---- FUN_10004fa0 @ 10004fa0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10004fa0(void *this,float param_1)

{
  float fVar1;
  int iVar2;
  void *local_4;
  
  fVar1 = param_1;
  local_4 = this;
  iVar2 = FUN_1000a090(*(void **)((int)this + 0x1d4),param_1,&local_4,&param_1);
  if (iVar2 == 1) {
    if (fVar1 == *(float *)((int)this + 0x328)) {
      if (*(float *)((int)this + 0x2c8) != param_1) {
        *(float *)((int)this + 0x2c8) = param_1;
      }
      if (*(float *)((int)this + 0x2c4) != (float)local_4) {
        *(void **)((int)this + 0x2c4) = local_4;
      }
      fVar1 = *(float *)((int)this + 0x2c8) - *(float *)((int)this + 0x2c4);
      *(float *)((int)this + 0x334) = (*(float *)((int)this + 0x2ec) * _DAT_1000cd24) / fVar1;
      *(float *)((int)this + 0x338) = (*(float *)((int)this + 0x2f0) * _DAT_1000cd24) / fVar1;
    }
    else if (fVar1 == (float)((int)*(float *)((int)this + 0x328) + 1)) {
      if (*(float *)((int)this + 0x2dc) != param_1) {
        *(float *)((int)this + 0x2dc) = param_1;
      }
      if (*(float *)((int)this + 0x2d8) != (float)local_4) {
        *(void **)((int)this + 0x2d8) = local_4;
      }
      fVar1 = *(float *)((int)this + 0x2dc) - *(float *)((int)this + 0x2d8);
      *(float *)((int)this + 0x33c) = (*(float *)((int)this + 0x2f4) * _DAT_1000cd24) / fVar1;
      *(float *)((int)this + 0x340) = (*(float *)((int)this + 0x2f8) * _DAT_1000cd24) / fVar1;
    }
    if (*(int *)((int)this + 0x1cc) != 0) {
      FUN_10005780(this);
      FUN_100059e0((int)this);
    }
  }
  return;
}


// ---- FUN_100050d0 @ 100050d0

void __fastcall FUN_100050d0(int *param_1)

{
  LRESULT LVar1;
  
  LVar1 = SendMessageA((HWND)param_1[0x70],DAT_100100d4,param_1[0x71],param_1[0xca]);
  if (-1 < LVar1) {
    param_1[0xcb] = LVar1;
    (**(code **)(*param_1 + 0x110))();
  }
  return;
}


// ---- FUN_10005110 @ 10005110

void __fastcall FUN_10005110(COleControl *param_1)

{
  int iVar1;
  CString *pCVar2;
  uchar *local_24;
  undefined1 local_20 [4];
  tagRECT tStack_1c;
  void *local_c;
  undefined1 *local_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  local_8 = &LAB_1000b3b0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CString::CString((CString *)&local_24,&DAT_100102a4);
  local_4 = 0;
  iVar1 = FUN_10009e90(*(void **)(param_1 + 0x1d4),*(undefined4 *)(param_1 + 0x328),
                       (CString *)&local_24);
  if (iVar1 < 1) {
    local_4 = 0xffffffff;
    CString::~CString((CString *)&local_24);
    ExceptionList = local_c;
    return;
  }
  iVar1 = _mbscmp(*(uchar **)(param_1 + 0x330),local_24);
  if (iVar1 != 0) {
    iVar1 = *(int *)(local_24 + -8) + -1;
    pCVar2 = (CString *)CString::Left((CString *)&local_24,(int)local_20);
    local_8._0_1_ = 1;
    CString::operator=((CString *)(param_1 + 0x330),pCVar2);
    local_8 = (undefined1 *)((uint)local_8._1_3_ << 8);
    CString::~CString((CString *)&local_24);
    COleControl::SetModifiedFlag(param_1,1);
    (**(code **)(*(int *)param_1 + 0xc0))(local_20,iVar1);
    FUN_10005620(&tStack_1c.left);
    COleControl::InvalidateControl(param_1,&tStack_1c,1);
  }
  local_4 = 0xffffffff;
  CString::~CString((CString *)&local_24);
  ExceptionList = local_c;
  return;
}


// ---- FUN_10005440 @ 10005440

void __fastcall FUN_10005440(COleControl *param_1)

{
  COleControl::OnDestroy(param_1);
  (**(code **)(*(int *)(param_1 + 0x1e8) + 0x60))();
  (**(code **)(*(int *)(param_1 + 0x228) + 0x60))();
  (**(code **)(*(int *)(param_1 + 0x268) + 0x60))();
  return;
}


// ---- FUN_100055b0 @ 100055b0

CGdiObject * __thiscall FUN_100055b0(void *this,byte param_1)

{
  FUN_100055d0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_100055d0 @ 100055d0

void __fastcall FUN_100055d0(CGdiObject *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1000b3c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = &PTR_LAB_1000cd00;
  local_4 = 0;
  CGdiObject::DeleteObject(param_1);
  *(undefined ***)param_1 = &PTR_LAB_1000ccec;
  ExceptionList = local_c;
  return;
}


// ---- FUN_10005620 @ 10005620

void FUN_10005620(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[1];
  *param_1 = *param_1 + 2;
  param_1[1] = iVar1 + 2;
  param_1[2] = param_1[2] + -2;
  param_1[3] = iVar1 + 0x16;
  return;
}


// ---- FUN_100056e0 @ 100056e0

void FUN_100056e0(int *param_1)

{
  *param_1 = *param_1 + 2;
  param_1[1] = param_1[1] + 0x16;
  param_1[2] = param_1[2] + -0x15;
  param_1[3] = param_1[3] + -0x15;
  return;
}


// ---- FUN_10005710 @ 10005710

void FUN_10005710(int *param_1)

{
  FUN_100056e0(param_1);
  *param_1 = *param_1 + 3;
  param_1[1] = param_1[1] + 3;
  param_1[2] = param_1[2] + -4;
  param_1[3] = param_1[3] + -4;
  return;
}


// ---- FUN_10005750 @ 10005750

void FUN_10005750(int *param_1,int param_2,int param_3)

{
  *param_1 = param_2 + -3;
  param_1[1] = param_3 + -3;
  param_1[2] = param_2 + 4;
  param_1[3] = param_3 + 4;
  return;
}


// ---- FUN_10005780 @ 10005780

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10005780(COleControl *param_1)

{
  RECT *lprcSrc1;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  RECT RStack_64;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  tagRECT tStack_44;
  RECT RStack_34;
  tagRECT tStack_24;
  tagRECT tStack_14;
  
  (**(code **)(*(int *)param_1 + 0xc0))(&RStack_64.top);
  iStack_50 = RStack_64.top;
  iStack_54 = RStack_64.left;
  iStack_4c = RStack_64.right;
  iStack_48 = RStack_64.bottom;
  FUN_100056e0(&RStack_64.left);
  FUN_10005710(&iStack_54);
  iVar3 = iStack_54;
  iVar1 = *(int *)(param_1 + 0x2a8);
  iVar2 = *(int *)(param_1 + 0x2ac);
  if ((*(float *)(param_1 + 0x2c8) - *(float *)(param_1 + 0x2c4)) * _DAT_1000cd28 +
      *(float *)(param_1 + 0x2c4) == *(float *)(param_1 + 0x2c0)) {
    iVar4 = (RStack_64.right - RStack_64.left) / 2 + RStack_64.left;
  }
  else {
    iVar4 = ftol();
    iVar4 = iVar4 + iVar3;
  }
  iVar3 = iStack_50;
  *(int *)(param_1 + 0x2a8) = iVar4;
  if ((*(float *)(param_1 + 0x2dc) - *(float *)(param_1 + 0x2d8)) * _DAT_1000cd28 +
      *(float *)(param_1 + 0x2d8) == *(float *)(param_1 + 0x2d4)) {
    iVar4 = (RStack_64.bottom - RStack_64.top) / 2 + RStack_64.top;
  }
  else {
    iVar4 = ftol();
    iVar4 = iVar4 + iVar3;
  }
  *(int *)(param_1 + 0x2ac) = iVar4;
  lprcSrc1 = (RECT *)(param_1 + 0x2b0);
  tStack_44.left = lprcSrc1->left;
  tStack_44.top = *(LONG *)(param_1 + 0x2b4);
  tStack_44.right = *(LONG *)(param_1 + 0x2b8);
  tStack_44.bottom = *(LONG *)(param_1 + 700);
  OffsetRect(&tStack_44,*(int *)(param_1 + 0x2a8) - iVar1,*(int *)(param_1 + 0x2ac) - iVar2);
  RStack_34.top = tStack_44.top;
  RStack_34.right = tStack_44.right;
  RStack_34.left = tStack_44.left;
  RStack_34.bottom = tStack_44.bottom;
  UnionRect(&tStack_24,lprcSrc1,&RStack_34);
  IntersectRect(&tStack_14,&tStack_24,&RStack_64);
  lprcSrc1->left = RStack_34.left;
  *(LONG *)(param_1 + 0x2b4) = RStack_34.top;
  *(LONG *)(param_1 + 0x2b8) = RStack_34.right;
  *(LONG *)(param_1 + 700) = RStack_34.bottom;
  COleControl::InvalidateControl(param_1,&tStack_14,1);
  return;
}


// ---- FUN_10005970 @ 10005970

CGdiObject * __thiscall FUN_10005970(void *this,byte param_1)

{
  FUN_10005990(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_10005990 @ 10005990

void __fastcall FUN_10005990(CGdiObject *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1000b3e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = &PTR_LAB_1000cd00;
  local_4 = 0;
  CGdiObject::DeleteObject(param_1);
  *(undefined ***)param_1 = &PTR_LAB_1000ccec;
  ExceptionList = local_c;
  return;
}


// ---- FUN_100059e0 @ 100059e0

void __fastcall FUN_100059e0(int param_1)

{
  int nPos;
  int nPos_00;
  BOOL bRedraw;
  
  nPos = ftol();
  bRedraw = 1;
  nPos_00 = ftol();
  SetScrollPos(*(HWND *)(param_1 + 0x208),2,nPos_00,bRedraw);
  SetScrollPos(*(HWND *)(param_1 + 0x248),2,nPos,1);
  return;
}


// ---- FUN_10006120 @ 10006120

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10006120(int param_1)

{
  *(float *)(param_1 + 0x31c) =
       (*(float *)(param_1 + 0x2c8) - *(float *)(param_1 + 0x2c4)) * _DAT_1000cd28 +
       *(float *)(param_1 + 0x2c4);
  *(float *)(param_1 + 800) =
       (*(float *)(param_1 + 0x2dc) - *(float *)(param_1 + 0x2d8)) * _DAT_1000cd28 +
       *(float *)(param_1 + 0x2d8);
  FUN_10006640(param_1);
  *(undefined4 *)(param_1 + 0x344) = 1;
  return;
}


// ---- FUN_10006640 @ 10006640

void __fastcall FUN_10006640(int param_1)

{
  if (*(int *)(param_1 + 0x1c8) != 0) {
    if (*(int *)(param_1 + 0x1d0) == 1) {
      FUN_1000a250(*(void **)(param_1 + 0x1d4),*(undefined4 *)(param_1 + 0x328),
                   *(undefined4 *)(param_1 + 0x31c),*(undefined4 *)(param_1 + 800));
      return;
    }
    if (*(float *)(param_1 + 0x2c0) != *(float *)(param_1 + 0x31c)) {
      FUN_1000a2b0(*(void **)(param_1 + 0x1d4),*(undefined4 *)(param_1 + 0x328),
                   *(float *)(param_1 + 0x31c));
    }
    if (*(float *)(param_1 + 0x2d4) != *(float *)(param_1 + 800)) {
      FUN_1000a2b0(*(void **)(param_1 + 0x1d4),*(int *)(param_1 + 0x328) + 1,
                   *(float *)(param_1 + 800));
    }
  }
  return;
}


// ---- FUN_100066f0 @ 100066f0

float10 __fastcall FUN_100066f0(int param_1)

{
  return (float10)*(float *)(param_1 + 0x2d0);
}


// ---- FUN_10006700 @ 10006700

void __thiscall FUN_10006700(void *this,float param_1)

{
  if (*(float *)((int)this + 0x2d0) != param_1) {
    *(float *)((int)this + 0x2d0) = param_1;
    *(float *)((int)this + 0x2f0) =
         *(float *)((int)this + 0x300) * *(float *)((int)this + 0x2e8) * param_1;
    if (*(int *)((int)this + 0x1c8) != 0) {
      FUN_10004fa0(this,*(float *)((int)this + 0x328));
    }
    COleControl::SetModifiedFlag(this,1);
  }
  return;
}


// ---- FUN_10006760 @ 10006760

float10 __fastcall FUN_10006760(int param_1)

{
  return (float10)*(float *)(param_1 + 0x2cc);
}


// ---- FUN_10006770 @ 10006770

void __thiscall FUN_10006770(void *this,float param_1)

{
  if (*(float *)((int)this + 0x2cc) != param_1) {
    *(float *)((int)this + 0x2cc) = param_1;
    *(float *)((int)this + 0x2ec) =
         *(float *)((int)this + 0x300) * *(float *)((int)this + 0x2e8) * param_1;
    if (*(int *)((int)this + 0x1c8) != 0) {
      FUN_10004fa0(this,*(float *)((int)this + 0x328));
    }
    COleControl::SetModifiedFlag(this,1);
  }
  return;
}


// ---- FUN_100067d0 @ 100067d0

float10 __fastcall FUN_100067d0(int param_1)

{
  return (float10)*(float *)(param_1 + 0x2e0);
}


// ---- FUN_100067e0 @ 100067e0

void __thiscall FUN_100067e0(void *this,float param_1)

{
  if (*(float *)((int)this + 0x2e0) != param_1) {
    *(float *)((int)this + 0x2e0) = param_1;
    *(float *)((int)this + 0x2f4) =
         *(float *)((int)this + 0x300) * *(float *)((int)this + 0x2e8) * param_1;
    if (*(int *)((int)this + 0x1c8) != 0) {
      FUN_10004fa0(this,(float)(*(int *)((int)this + 0x328) + 1));
    }
    COleControl::SetModifiedFlag(this,1);
  }
  return;
}


// ---- FUN_10006840 @ 10006840

float10 __fastcall FUN_10006840(int param_1)

{
  return (float10)*(float *)(param_1 + 0x2e4);
}


// ---- FUN_10006850 @ 10006850

void __thiscall FUN_10006850(void *this,float param_1)

{
  if (*(float *)((int)this + 0x2e4) != param_1) {
    *(float *)((int)this + 0x2e4) = param_1;
    *(float *)((int)this + 0x2f8) =
         *(float *)((int)this + 0x300) * *(float *)((int)this + 0x2e8) * param_1;
    if (*(int *)((int)this + 0x1c8) != 0) {
      FUN_10004fa0(this,(float)(*(int *)((int)this + 0x328) + 1));
    }
    COleControl::SetModifiedFlag(this,1);
  }
  return;
}


// ---- FUN_100068f0 @ 100068f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_100068f0(COleControl *param_1,uint param_2,HWND param_3,HWND param_4)

{
  COleControl *pCVar1;
  COleControl *pCVar2;
  float fVar3;
  BOOL BVar4;
  LRESULT LVar5;
  void *this;
  undefined4 *this_00;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  float10 fVar9;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &UNK_1000b40a;
  pvStack_c = ExceptionList;
  if ((((param_2 >> 0x10 != 300) || (param_2 + 1 >> 0x10 != 300)) ||
      (ExceptionList = &pvStack_c, BVar4 = IsWindow(param_3), BVar4 == 0)) ||
     (BVar4 = IsWindow(param_4), BVar4 == 0)) {
    ExceptionList = pvStack_c;
    return 0;
  }
  if (*(int *)(param_1 + 0x1c8) == 0) {
    *(HWND *)(param_1 + 0x1c0) = param_3;
    *(HWND *)(param_1 + 0x1c4) = param_4;
    LVar5 = SendMessageA(param_3,_DAT_1001018c,0,0);
    if (LVar5 != 0) {
      this = operator_new(0x20);
      uStack_4 = 0;
      if (this == (void *)0x0) {
        this_00 = (undefined4 *)0x0;
      }
      else {
        this_00 = FUN_10009e10(this,*(undefined4 *)(param_1 + 0x1c0),
                               *(undefined4 *)(param_1 + 0x1c4));
      }
      uStack_4 = 0xffffffff;
      *(undefined4 **)(param_1 + 0x1d4) = this_00;
      if (param_1 == (COleControl *)0x0) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(undefined4 *)(param_1 + 0x20);
      }
      iVar6 = FUN_1000a3f0(this_00,1,1,uVar8);
      if (0 < iVar6) {
        *(undefined4 *)(param_1 + 0x1c8) = 1;
      }
    }
    if (*(int *)(param_1 + 0x1c8) == 0) goto LAB_10006c14;
  }
  if (*(uint *)(param_1 + 0x328) != param_2) {
    if (param_1 == (COleControl *)0x0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined4 *)(param_1 + 0x20);
    }
    FUN_1000a3f0(*(void **)(param_1 + 0x1d4),param_2,1,uVar8);
    if (param_1 == (COleControl *)0x0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined4 *)(param_1 + 0x20);
    }
    FUN_1000a3f0(*(void **)(param_1 + 0x1d4),param_2 + 1,1,uVar8);
    if (*(int *)(param_1 + 0x328) != 0) {
      if (*(int *)(param_1 + 0x304) != 0) {
        if (param_1 == (COleControl *)0x0) {
          uVar8 = 0;
        }
        else {
          uVar8 = *(undefined4 *)(param_1 + 0x20);
        }
        FUN_1000a3f0(*(void **)(param_1 + 0x1d4),*(int *)(param_1 + 0x304),0,uVar8);
        *(undefined4 *)(param_1 + 0x304) = 0;
      }
      if (param_1 == (COleControl *)0x0) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(undefined4 *)(param_1 + 0x20);
      }
      FUN_1000a3f0(*(void **)(param_1 + 0x1d4),*(undefined4 *)(param_1 + 0x328),0,uVar8);
      if (param_1 == (COleControl *)0x0) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(undefined4 *)(param_1 + 0x20);
      }
      FUN_1000a3f0(*(void **)(param_1 + 0x1d4),*(int *)(param_1 + 0x328) + 1,0,uVar8);
    }
    *(undefined4 *)(param_1 + 0x1cc) = 0;
    pCVar1 = param_1 + 0x2fc;
    pCVar2 = param_1 + 0x2e8;
    *(uint *)(param_1 + 0x328) = param_2;
    iVar6 = FUN_1000a750(*(void **)(param_1 + 0x1d4),param_2,(undefined4 *)pCVar2,
                         (undefined4 *)pCVar1);
    if (iVar6 == 0) {
      *(float *)pCVar2 = 1.0;
      *(float *)pCVar1 = 0.0;
    }
    if (*(float *)pCVar1 == _DAT_1000cd20) {
LAB_10006b63:
      *(undefined4 *)(param_1 + 0x300) = 0x3f800000;
    }
    else {
      uVar7 = FUN_1000a470(*(void **)(param_1 + 0x1d4),s_AP_PIXEL_SIZE_1000fcb0);
      *(uint *)(param_1 + 0x304) = uVar7;
      if (param_1 == (COleControl *)0x0) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(undefined4 *)(param_1 + 0x20);
      }
      FUN_1000a3f0(*(void **)(param_1 + 0x1d4),uVar7,1,uVar8);
      fVar9 = FUN_10009f00(*(void **)(param_1 + 0x1d4),*(undefined4 *)(param_1 + 0x304));
      if ((float10)_DAT_1000cd1c <= fVar9) goto LAB_10006b63;
      fVar9 = (float10)_CIpow();
      *(float *)(param_1 + 0x300) = (float)fVar9;
    }
    fVar3 = *(float *)(param_1 + 0x300) * *(float *)pCVar2;
    *(float *)(param_1 + 0x2ec) = fVar3 * *(float *)(param_1 + 0x2cc);
    *(float *)(param_1 + 0x2f0) = fVar3 * *(float *)(param_1 + 0x2d0);
    *(float *)(param_1 + 0x2f4) = fVar3 * *(float *)(param_1 + 0x2e0);
    *(float *)(param_1 + 0x2f8) = fVar3 * *(float *)(param_1 + 0x2e4);
  }
  if (0 < *(int *)(param_1 + 0x328)) {
    uVar8 = func_0x1000a450(*(int *)(param_1 + 0x328));
    *(undefined4 *)(param_1 + 0x308) = uVar8;
    func_0x100068b0();
    FUN_10004fa0(param_1,*(float *)(param_1 + 0x328));
    FUN_10004fa0(param_1,(float)(*(int *)(param_1 + 0x328) + 1));
    FUN_10004e80(param_1);
    FUN_10005780(param_1);
    FUN_100059e0((int)param_1);
    FUN_10005110(param_1);
    FUN_100050d0((int *)param_1);
    *(undefined4 *)(param_1 + 0x1cc) = 1;
  }
LAB_10006c14:
  ExceptionList = pvStack_c;
  return *(undefined4 *)(param_1 + 0x1c8);
}


// ---- FUN_10006c50 @ 10006c50

void __fastcall FUN_10006c50(int param_1)

{
  EnableWindow(*(HWND *)(param_1 + 0x20),0);
  return;
}


// ---- FUN_10006c60 @ 10006c60

void __fastcall FUN_10006c60(int param_1)

{
  EnableWindow(*(HWND *)(param_1 + 0x20),1);
  return;
}


// ---- FUN_10006c70 @ 10006c70

CButton * __thiscall FUN_10006c70(void *this,byte param_1)

{
  CButton::~CButton(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_10006c90 @ 10006c90

CScrollBar * __thiscall FUN_10006c90(void *this,byte param_1)

{
  CScrollBar::~CScrollBar(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_10006cc0 @ 10006cc0

COlePropertyPage * FUN_10006cc0(void)

{
  COlePropertyPage *pCVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1000b42a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pCVar1 = operator_new(0xd8);
  local_4 = 0;
  if (pCVar1 != (COlePropertyPage *)0x0) {
    pCVar1 = FUN_10006e60(pCVar1);
    ExceptionList = local_c;
    return pCVar1;
  }
  ExceptionList = local_c;
  return (COlePropertyPage *)0x0;
}


// ---- FUN_10006d30 @ 10006d30

undefined ** FUN_10006d30(void)

{
  return &PTR_s_CLEONavgtPropPage_1000cd30;
}


// ---- FUN_10006d50 @ 10006d50

undefined ** FUN_10006d50(void)

{
  return &PTR_LAB_1000cd48;
}


// ---- FUN_10006d70 @ 10006d70

void FUN_10006d70(void)

{
  FUN_10006d90(&DAT_100102b0,(_GUID *)&DAT_1000cd88,
               (CRuntimeClass *)&PTR_s_CLEONavgtPropPage_1000cd30,0,"LEONAVGT.LEONavgtPropPage.1");
  return;
}


// ---- FUN_10006d90 @ 10006d90

COleObjectFactory * __thiscall
FUN_10006d90(void *this,_GUID *param_1,CRuntimeClass *param_2,int param_3,char *param_4)

{
  COleObjectFactory::COleObjectFactory(this,param_1,param_2,param_3,param_4);
  *(undefined ***)this = &PTR_LAB_1000cd98;
  return this;
}


// ---- FUN_10006dc0 @ 10006dc0

void FUN_10006dc0(void)

{
  FUN_1000afb3((_onexit_t)&LAB_10006dd0);
  return;
}


// ---- FUN_10006df0 @ 10006df0

undefined4 FUN_10006df0(undefined4 *param_1)

{
  *param_1 = DAT_1000cd88;
  param_1[1] = DAT_1000cd8c;
  param_1[2] = DAT_1000cd90;
  param_1[3] = DAT_1000cd94;
  return 0;
}


// ---- FUN_10006e60 @ 10006e60

COlePropertyPage * __fastcall FUN_10006e60(COlePropertyPage *param_1)

{
  COlePropertyPage::COlePropertyPage(param_1,100,100);
  *(undefined ***)param_1 = &PTR_FUN_1000ce0c;
  return param_1;
}


// ---- FUN_10006e80 @ 10006e80

COlePropertyPage * __thiscall FUN_10006e80(void *this,byte param_1)

{
  COlePropertyPage::~COlePropertyPage(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- ~COlePropertyPage @ 10006ea0

void __thiscall COlePropertyPage::~COlePropertyPage(COlePropertyPage *this)

{
                    /* WARNING: Could not recover jumptable at 0x1000ad4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~COlePropertyPage(this);
  return;
}


// ---- FUN_10006eb0 @ 10006eb0

void FUN_10006eb0(CDataExchange *param_1)

{
  DDP_PostProcessing(param_1);
  return;
}


// ---- FUN_10009d10 @ 10009d10

undefined4 * FUN_10009d10(void)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1000b44a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x20);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = FUN_10009d90(puVar1);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


// ---- FUN_10009d80 @ 10009d80

undefined ** FUN_10009d80(void)

{
  return &PTR_s_CServerComms_1000cef8;
}


// ---- FUN_10009d90 @ 10009d90

undefined4 * __fastcall FUN_10009d90(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1000b468;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_1000cf10;
  local_4 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0x809;
  param_1[5] = 0;
  param_1[6] = 0;
  FUN_1000a510((int)param_1);
  ExceptionList = local_c;
  return param_1;
}


// ---- FUN_10009df0 @ 10009df0

undefined4 * __thiscall FUN_10009df0(void *this,byte param_1)

{
  FUN_10009e80(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_10009e10 @ 10009e10

undefined4 * __thiscall FUN_10009e10(void *this,undefined4 param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1000b488;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 4) = param_1;
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_1000cf10;
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0x809;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  FUN_1000a510((int)this);
  ExceptionList = local_c;
  return this;
}


// ---- FUN_10009e80 @ 10009e80

void __fastcall FUN_10009e80(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_1000ccec;
  return;
}


// ---- FUN_10009e90 @ 10009e90

undefined4 __thiscall FUN_10009e90(void *this,undefined4 param_1,CString *param_2)

{
  int iVar1;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 *local_168;
  undefined4 local_164;
  char local_160 [352];
  
  local_164 = param_1;
  local_168 = &local_164;
  local_170 = DAT_1001059c;
  local_16c = 0x164;
  iVar1 = FUN_1000a560(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_170);
  *(int *)((int)this + 0xc) = iVar1;
  if (iVar1 == 1) {
    CString::operator=(param_2,local_160);
  }
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_10009f00 @ 10009f00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_10009f00(void *param_1,undefined4 param_2)

{
  int iVar1;
  CString local_14 [4];
  float local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1000b4a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CString::CString(local_14);
  local_4 = 0;
  iVar1 = FUN_10009fa0(param_1,param_2,&local_10,local_14);
  if (iVar1 == 1) {
    local_4 = 0xffffffff;
    CString::~CString(local_14);
    ExceptionList = local_c;
    return (float10)local_10;
  }
  local_4 = 0xffffffff;
  CString::~CString(local_14);
  ExceptionList = local_c;
  return (float10)_DAT_1000cd20;
}


// ---- FUN_10009fa0 @ 10009fa0

undefined4 __thiscall
FUN_10009fa0(void *this,undefined4 param_1,undefined4 *param_2,CString *param_3)

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
  local_174 = DAT_10010594;
  local_170 = 0x168;
  iVar1 = FUN_1000a560(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_174);
  *(int *)((int)this + 0xc) = iVar1;
  if (iVar1 == 1) {
    *param_2 = local_164;
    CString::operator=(param_3,local_160);
  }
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_1000a020 @ 1000a020

undefined4 __thiscall FUN_1000a020(void *this,undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1000b4c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = this;
  CString::CString((CString *)&local_10);
  local_4 = 0;
  CString::Empty((CString *)&local_10);
  uVar1 = FUN_10009fa0(this,param_1,param_2,(CString *)&local_10);
  local_4 = 0xffffffff;
  CString::~CString((CString *)&local_10);
  ExceptionList = local_c;
  return uVar1;
}


// ---- FUN_1000a090 @ 1000a090

undefined4 __thiscall
FUN_1000a090(void *this,undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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
  local_18 = DAT_10010560;
  local_14 = 0xc;
  iVar1 = FUN_1000a560(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_18);
  *(int *)((int)this + 0xc) = iVar1;
  if (iVar1 == 1) {
    *param_2 = local_8;
    *param_3 = local_4;
  }
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_1000a100 @ 1000a100

undefined4 __thiscall
FUN_1000a100(void *this,undefined4 param_1,undefined4 *param_2,undefined4 *param_3,CString *param_4,
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
  local_2d4 = DAT_10010550;
  local_2d0 = 0x2c8;
  iVar1 = FUN_1000a560(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_2d4);
  *(int *)((int)this + 0xc) = iVar1;
  if (iVar1 == 1) {
    *param_2 = local_2c4;
    *param_3 = local_2c0;
    CString::operator=(param_4,local_2bc);
    CString::operator=(param_5,local_15e);
  }
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_1000a1a0 @ 1000a1a0

undefined4 __thiscall
FUN_1000a1a0(void *this,undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  CString local_14 [4];
  CString local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1000b4f0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CString::CString(local_10);
  local_4 = 0;
  CString::CString(local_14);
  local_4._0_1_ = 1;
  CString::Empty(local_10);
  CString::Empty(local_14);
  uVar1 = FUN_1000a100(this,param_1,param_2,param_3,local_10,local_14);
  local_4 = (uint)local_4._1_3_ << 8;
  CString::~CString(local_14);
  local_4 = 0xffffffff;
  CString::~CString(local_10);
  ExceptionList = local_c;
  return uVar1;
}


// ---- FUN_1000a250 @ 1000a250

void __thiscall FUN_1000a250(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
  local_c = DAT_1001054c;
  local_8 = 0xc;
  LVar1 = SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_c);
  *(LRESULT *)((int)this + 0xc) = LVar1;
  return;
}


// ---- FUN_1000a2b0 @ 1000a2b0

LRESULT __thiscall FUN_1000a2b0(void *this,undefined4 param_1,undefined4 param_2)

{
  LRESULT LVar1;
  char *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1000b508;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = this;
  CString::CString((CString *)&local_10);
  local_4 = 0;
  CString::Empty((CString *)&local_10);
  LVar1 = FUN_1000a320(this,param_1,param_2,local_10);
  local_4 = 0xffffffff;
  CString::~CString((CString *)&local_10);
  ExceptionList = local_c;
  return LVar1;
}


// ---- FUN_1000a320 @ 1000a320

LRESULT __thiscall FUN_1000a320(void *this,undefined4 param_1,undefined4 param_2,char *param_3)

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
  puStack_8 = &LAB_1000b52b;
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
    FUN_1000a4e0(local_16c,param_3);
  }
  local_178 = &local_174;
  local_180 = DAT_1001053c;
  local_17c = 0x168;
  LVar1 = SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_180);
  *(LRESULT *)((int)this + 0xc) = LVar1;
  local_4 = 0xffffffff;
  CString::~CString((CString *)&local_184);
  ExceptionList = local_c;
  return LVar1;
}


// ---- FUN_1000a3f0 @ 1000a3f0

void __thiscall FUN_1000a3f0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
  local_c = DAT_10010530;
  local_8 = 0xc;
  LVar1 = SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_c);
  *(LRESULT *)((int)this + 0xc) = LVar1;
  return;
}


// ---- FUN_1000a470 @ 1000a470

uint __thiscall FUN_1000a470(void *this,char *param_1)

{
  int iVar1;
  undefined4 local_170;
  undefined4 local_16c;
  char *local_168;
  char local_164 [352];
  uint local_4;
  
  FUN_1000a4e0(local_164,param_1);
  local_168 = local_164;
  local_170 = DAT_100104e4;
  local_16c = 0x164;
  iVar1 = FUN_1000a560(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_170);
  *(int *)((int)this + 0xc) = iVar1;
  return ~-(uint)(iVar1 != 1) & local_4;
}


// ---- FUN_1000a4e0 @ 1000a4e0

void FUN_1000a4e0(char *param_1,char *param_2)

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


// ---- FUN_1000a510 @ 1000a510

void __fastcall FUN_1000a510(int param_1)

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


// ---- FUN_1000a560 @ 1000a560

void __thiscall
FUN_1000a560(void *this,HWND param_1,UINT param_2,WPARAM param_3,undefined4 *param_4)

{
  if (*(int *)((int)this + 0x1c) != 0) {
    FUN_1000a5a0(this,param_1,param_4);
    return;
  }
  SendMessageA(param_1,param_2,param_3,(LPARAM)param_4);
  return;
}


// ---- FUN_1000a5a0 @ 1000a5a0

LRESULT __thiscall FUN_1000a5a0(void *this,HWND param_1,undefined4 *param_2)

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
  sprintf(local_100,s_MMF_LEO_SC__lx__lx__lx_1000fce8,DVar3,uVar9,iVar2);
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
  DAT_100102fc = SendMessageA(param_1,0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_10c);
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
  return DAT_100102fc;
}


// ---- FUN_1000a6d0 @ 1000a6d0

void __thiscall
FUN_1000a6d0(void *this,undefined4 param_1,undefined4 param_2,uint *param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  undefined4 local_14;
  undefined4 local_10;
  uint local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_20 = DAT_10010300;
  local_18 = &local_14;
  local_14 = param_1;
  local_c = (uint)(ushort)*param_3;
  local_10 = param_2;
  local_8 = *param_4;
  local_4 = *param_5;
  local_1c = 0x14;
  FUN_1000a560(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_20);
  *param_3 = local_c;
  *param_4 = local_8;
  *param_5 = local_4;
  return;
}


// ---- FUN_1000a750 @ 1000a750

void __thiscall FUN_1000a750(void *this,uint param_1,undefined4 *param_2,undefined4 *param_3)

{
  FUN_1000a6d0(this,0,1,&param_1,param_2,param_3);
  return;
}


// ---- ~CWinApp @ 1000a780

void __thiscall CWinApp::~CWinApp(CWinApp *this)

{
                    /* WARNING: Could not recover jumptable at 0x1000a780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CWinApp(this);
  return;
}


// ---- GetConnectionHook @ 1000a7ec

IConnectionPoint * __thiscall CCmdTarget::GetConnectionHook(CCmdTarget *this,_GUID *param_1)

{
  IConnectionPoint *pIVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000a7ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = GetConnectionHook(this,param_1);
  return pIVar1;
}


// ---- GetExtraConnectionPoints @ 1000a7f2

int __thiscall CCmdTarget::GetExtraConnectionPoints(CCmdTarget *this,CPtrArray *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000a7f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetExtraConnectionPoints(this,param_1);
  return iVar1;
}


// ---- GetInterfaceHook @ 1000a7f8

IUnknown * __thiscall CCmdTarget::GetInterfaceHook(CCmdTarget *this,void *param_1)

{
  IUnknown *pIVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000a7f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = GetInterfaceHook(this,param_1);
  return pIVar1;
}


// ---- OnCreateAggregates @ 1000a7fe

int __thiscall CCmdTarget::OnCreateAggregates(CCmdTarget *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000a7fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCreateAggregates(this);
  return iVar1;
}


// ---- GetEventSinkMap @ 1000a804

AFX_EVENTSINKMAP * __thiscall CCmdTarget::GetEventSinkMap(CCmdTarget *this)

{
  AFX_EVENTSINKMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000a804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetEventSinkMap(this);
  return pAVar1;
}


// ---- GetInterfaceMap @ 1000a80a

AFX_INTERFACEMAP * __thiscall CCmdTarget::GetInterfaceMap(CCmdTarget *this)

{
  AFX_INTERFACEMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000a80a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetInterfaceMap(this);
  return pAVar1;
}


// ---- GetConnectionMap @ 1000a810

AFX_CONNECTIONMAP * __thiscall CCmdTarget::GetConnectionMap(CCmdTarget *this)

{
  AFX_CONNECTIONMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000a810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetConnectionMap(this);
  return pAVar1;
}


// ---- GetDispatchMap @ 1000a816

AFX_DISPMAP * __thiscall CCmdTarget::GetDispatchMap(CCmdTarget *this)

{
  AFX_DISPMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000a816. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetDispatchMap(this);
  return pAVar1;
}


// ---- GetCommandMap @ 1000a81c

AFX_OLECMDMAP * __thiscall CCmdTarget::GetCommandMap(CCmdTarget *this)

{
  AFX_OLECMDMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000a81c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetCommandMap(this);
  return pAVar1;
}


// ---- GetTypeLib @ 1000a828

long __thiscall CCmdTarget::GetTypeLib(CCmdTarget *this,ulong param_1,ITypeLib **param_2)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000a828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = GetTypeLib(this,param_1,param_2);
  return lVar1;
}


// ---- GetTypeLibCache @ 1000a82e

CTypeLibCache * __thiscall CCmdTarget::GetTypeLibCache(CCmdTarget *this)

{
  CTypeLibCache *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000a82e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetTypeLibCache(this);
  return pCVar1;
}


// ---- GetTypeInfoCount @ 1000a834

uint __thiscall CCmdTarget::GetTypeInfoCount(CCmdTarget *this)

{
  uint uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000a834. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = GetTypeInfoCount(this);
  return uVar1;
}


// ---- GetDispatchIID @ 1000a83a

int __thiscall CCmdTarget::GetDispatchIID(CCmdTarget *this,_GUID *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000a83a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetDispatchIID(this,param_1);
  return iVar1;
}


// ---- IsInvokeAllowed @ 1000a840

int __thiscall CCmdTarget::IsInvokeAllowed(CCmdTarget *this,long param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000a840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = IsInvokeAllowed(this,param_1);
  return iVar1;
}


// ---- OnCmdMsg @ 1000a84c

int __thiscall
CCmdTarget::OnCmdMsg
          (CCmdTarget *this,uint param_1,int param_2,void *param_3,AFX_CMDHANDLERINFO *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000a84c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCmdMsg(this,param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- CWinApp @ 1000a858

void __thiscall CWinApp::CWinApp(CWinApp *this,char *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x1000a858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CWinApp(this,param_1);
  return;
}


// ---- operator_delete @ 1000a85e

void __cdecl operator_delete(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x1000a85e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  operator_delete(param_1);
  return;
}


// ---- UpdateRegistryAll @ 1000a870

int COleObjectFactory::UpdateRegistryAll(int param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000a870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = UpdateRegistryAll(param_1);
  return iVar1;
}


// ---- AfxOleRegisterTypeLib @ 1000a876

int AfxOleRegisterTypeLib(HINSTANCE__ *param_1,_GUID *param_2,char *param_3,char *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000a876. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AfxOleRegisterTypeLib(param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- AfxGetModuleState @ 1000a87c

AFX_MODULE_STATE * AfxGetModuleState(void)

{
  AFX_MODULE_STATE *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000a87c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = AfxGetModuleState();
  return pAVar1;
}


// ---- AFX_MAINTAIN_STATE2 @ 1000a882

void __thiscall
AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2(AFX_MAINTAIN_STATE2 *this,AFX_MODULE_STATE *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x1000a882. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AFX_MAINTAIN_STATE2(this,param_1);
  return;
}


// ---- AfxOleUnregisterTypeLib @ 1000a888

int AfxOleUnregisterTypeLib(_GUID *param_1,ushort param_2,ushort param_3,ulong param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000a888. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AfxOleUnregisterTypeLib(param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- SetEnabled @ 1000a88e

void __thiscall COleControl::SetEnabled(COleControl *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x1000a88e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetEnabled(this,param_1);
  return;
}


// ---- GetEnabled @ 1000a894

int __thiscall COleControl::GetEnabled(COleControl *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000a894. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetEnabled(this);
  return iVar1;
}


// ---- operator_new @ 1000a89a

void * __cdecl operator_new(uint param_1)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000a89a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = operator_new(param_1);
  return pvVar1;
}


// ---- COleObjectFactory @ 1000a8d0

void __thiscall
COleObjectFactory::COleObjectFactory
          (COleObjectFactory *this,_GUID *param_1,CRuntimeClass *param_2,int param_3,char *param_4)

{
                    /* WARNING: Could not recover jumptable at 0x1000a8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  COleObjectFactory(this,param_1,param_2,param_3,param_4);
  return;
}


// ---- ~COleObjectFactory @ 1000a8d6

void __thiscall COleObjectFactory::~COleObjectFactory(COleObjectFactory *this)

{
                    /* WARNING: Could not recover jumptable at 0x1000a8d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~COleObjectFactory(this);
  return;
}


// ---- AfxGetTypeLibCache @ 1000a8dc

CTypeLibCache * AfxGetTypeLibCache(_GUID *param_1)

{
  CTypeLibCache *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000a8dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = AfxGetTypeLibCache(param_1);
  return pCVar1;
}


// ---- AfxOleUnregisterClass @ 1000a8e2

int AfxOleUnregisterClass(_GUID *param_1,char *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000a8e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AfxOleUnregisterClass(param_1,param_2);
  return iVar1;
}


// ---- AfxOleRegisterControlClass @ 1000a8e8

int AfxOleRegisterControlClass
              (HINSTANCE__ *param_1,_GUID *param_2,char *param_3,uint param_4,uint param_5,
              int param_6,ulong param_7,_GUID *param_8,ushort param_9,ushort param_10)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000a8e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AfxOleRegisterControlClass
                    (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                     param_10);
  return iVar1;
}


// ---- GetRuntimeClass @ 1000a8ee

CRuntimeClass * __thiscall CScrollBar::GetRuntimeClass(CScrollBar *this)

{
  CRuntimeClass *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000a8ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetRuntimeClass(this);
  return pCVar1;
}


// ---- DrawItem @ 1000a8f4

void __thiscall CButton::DrawItem(CButton *this,tagDRAWITEMSTRUCT *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x1000a8f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DrawItem(this,param_1);
  return;
}


// ---- OnChildNotify @ 1000a8fa

int __thiscall
CButton::OnChildNotify(CButton *this,uint param_1,uint param_2,long param_3,long *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000a8fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnChildNotify(this,param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- DefWindowProcA @ 1000a900

long __thiscall CWnd::DefWindowProcA(CWnd *this,uint param_1,uint param_2,long param_3)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000a900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = DefWindowProcA(this,param_1,param_2,param_3);
  return lVar1;
}


// ---- WindowProc @ 1000a906

long __thiscall CWnd::WindowProc(CWnd *this,uint param_1,uint param_2,long param_3)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000a906. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = WindowProc(this,param_1,param_2,param_3);
  return lVar1;
}


// ---- PreCreateWindow @ 1000a90c

int __thiscall CWnd::PreCreateWindow(CWnd *this,tagCREATESTRUCTA *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000a90c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = PreCreateWindow(this,param_1);
  return iVar1;
}


// ---- GetMessageMap @ 1000a912

AFX_MSGMAP * __thiscall CWnd::GetMessageMap(CWnd *this)

{
  AFX_MSGMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000a912. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetMessageMap(this);
  return pAVar1;
}


// ---- OnFinalRelease @ 1000a918

void __thiscall CWnd::OnFinalRelease(CWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x1000a918. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnFinalRelease(this);
  return;
}


// ---- GetRuntimeClass @ 1000a91e

CRuntimeClass * __thiscall CButton::GetRuntimeClass(CButton *this)

{
  CRuntimeClass *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000a91e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetRuntimeClass(this);
  return pCVar1;
}


// ---- DestroySharedMenu @ 1000a92a

void __thiscall COleControl::DestroySharedMenu(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x1000a92a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DestroySharedMenu(this);
  return;
}


// ---- BuildSharedMenu @ 1000a930

int __thiscall COleControl::BuildSharedMenu(COleControl *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000a930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = BuildSharedMenu(this);
  return iVar1;
}


// ---- RemoveFrameLevelUI @ 1000a936

void __thiscall COleControl::RemoveFrameLevelUI(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x1000a936. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RemoveFrameLevelUI(this);
  return;
}


// ---- AddFrameLevelUI @ 1000a93c

void __thiscall COleControl::AddFrameLevelUI(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x1000a93c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AddFrameLevelUI(this);
  return;
}


// ---- OnActivateInPlace @ 1000a942

long __thiscall COleControl::OnActivateInPlace(COleControl *this,int param_1,tagMSG *param_2)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000a942. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = OnActivateInPlace(this,param_1,param_2);
  return lVar1;
}


// ---- OnHide @ 1000a948

long __thiscall COleControl::OnHide(COleControl *this)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000a948. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = OnHide(this);
  return lVar1;
}


// ---- OnFrameClose @ 1000a94e

void __thiscall COleControl::OnFrameClose(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x1000a94e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnFrameClose(this);
  return;
}


// ---- ResizeFrameWindow @ 1000a954

void __thiscall COleControl::ResizeFrameWindow(COleControl *this,int param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x1000a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ResizeFrameWindow(this,param_1,param_2);
  return;
}


// ---- CreateFrameWindow @ 1000a95a

CControlFrameWnd * __thiscall COleControl::CreateFrameWindow(COleControl *this)

{
  CControlFrameWnd *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000a95a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = CreateFrameWindow(this);
  return pCVar1;
}


// ---- OnOpen @ 1000a960

long __thiscall COleControl::OnOpen(COleControl *this,int param_1,tagMSG *param_2)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000a960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = OnOpen(this,param_1,param_2);
  return lVar1;
}


// ---- OnReflectorDestroyed @ 1000a966

void __thiscall COleControl::OnReflectorDestroyed(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x1000a966. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnReflectorDestroyed(this);
  return;
}


// ---- SetInitialDataFormats @ 1000a96c

void __thiscall COleControl::SetInitialDataFormats(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x1000a96c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetInitialDataFormats(this);
  return;
}


// ---- CreateControlWindow @ 1000a972

int __thiscall
COleControl::CreateControlWindow(COleControl *this,HWND__ *param_1,CRect *param_2,tagRECT *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000a972. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CreateControlWindow(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- ClientToParent @ 1000a978

void __thiscall COleControl::ClientToParent(COleControl *this,tagRECT *param_1,tagPOINT *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x1000a978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ClientToParent(this,param_1,param_2);
  return;
}


// ---- ParentToClient @ 1000a97e

uint __thiscall
COleControl::ParentToClient(COleControl *this,tagRECT *param_1,tagPOINT *param_2,int param_3)

{
  uint uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000a97e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = ParentToClient(this,param_1,param_2,param_3);
  return uVar1;
}


// ---- GetClientOffset @ 1000a984

void __thiscall COleControl::GetClientOffset(COleControl *this,long *param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x1000a984. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetClientOffset(this,param_1,param_2);
  return;
}


// ---- GetWindowlessDropTarget @ 1000a98a

IDropTarget * __thiscall COleControl::GetWindowlessDropTarget(COleControl *this)

{
  IDropTarget *pIVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000a98a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = GetWindowlessDropTarget(this);
  return pIVar1;
}


// ---- OnWindowlessMessage @ 1000a990

int __thiscall
COleControl::OnWindowlessMessage
          (COleControl *this,uint param_1,uint param_2,long param_3,long *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000a990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnWindowlessMessage(this,param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- OnInactiveMouseMove @ 1000a996

void __thiscall
COleControl::OnInactiveMouseMove
          (COleControl *this,tagRECT *param_1,long param_2,long param_3,ulong param_4)

{
                    /* WARNING: Could not recover jumptable at 0x1000a996. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnInactiveMouseMove(this,param_1,param_2,param_3,param_4);
  return;
}


// ---- OnInactiveSetCursor @ 1000a99c

int __thiscall
COleControl::OnInactiveSetCursor
          (COleControl *this,tagRECT *param_1,long param_2,long param_3,ulong param_4,int param_5)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000a99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnInactiveSetCursor(this,param_1,param_2,param_3,param_4,param_5);
  return iVar1;
}


// ---- GetActivationPolicy @ 1000a9a2

ulong __thiscall COleControl::GetActivationPolicy(COleControl *this)

{
  ulong uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000a9a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = GetActivationPolicy(this);
  return uVar1;
}


// ---- GetControlFlags @ 1000a9a8

ulong __thiscall COleControl::GetControlFlags(COleControl *this)

{
  ulong uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000a9a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = GetControlFlags(this);
  return uVar1;
}


// ---- ReparentControlWindow @ 1000a9ae

void __thiscall
COleControl::ReparentControlWindow(COleControl *this,HWND__ *param_1,HWND__ *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x1000a9ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReparentControlWindow(this,param_1,param_2);
  return;
}


// ---- OnGetPredefinedValue @ 1000a9b4

int __thiscall
COleControl::OnGetPredefinedValue(COleControl *this,long param_1,ulong param_2,tagVARIANT *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000a9b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnGetPredefinedValue(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- OnGetPredefinedStrings @ 1000a9ba

int __thiscall
COleControl::OnGetPredefinedStrings
          (COleControl *this,long param_1,CStringArray *param_2,CDWordArray *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000a9ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnGetPredefinedStrings(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- OnMapPropertyToPage @ 1000a9c0

int __thiscall
COleControl::OnMapPropertyToPage(COleControl *this,long param_1,_GUID *param_2,int *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000a9c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnMapPropertyToPage(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- OnGetDisplayString @ 1000a9c6

int __thiscall COleControl::OnGetDisplayString(COleControl *this,long param_1,CString *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000a9c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnGetDisplayString(this,param_1,param_2);
  return iVar1;
}


// ---- OnProperties @ 1000a9cc

int __thiscall
COleControl::OnProperties(COleControl *this,tagMSG *param_1,HWND__ *param_2,tagRECT *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000a9cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnProperties(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- OnEdit @ 1000a9d2

int __thiscall
COleControl::OnEdit(COleControl *this,tagMSG *param_1,HWND__ *param_2,tagRECT *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000a9d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnEdit(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- OnDoVerb @ 1000a9d8

int __thiscall
COleControl::OnDoVerb
          (COleControl *this,long param_1,tagMSG *param_2,HWND__ *param_3,tagRECT *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000a9d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnDoVerb(this,param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- OnEnumVerbs @ 1000a9de

int __thiscall COleControl::OnEnumVerbs(COleControl *this,IEnumOLEVERB **param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000a9de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnEnumVerbs(this,param_1);
  return iVar1;
}


// ---- OnSetData @ 1000a9e4

int __thiscall
COleControl::OnSetData(COleControl *this,tagFORMATETC *param_1,tagSTGMEDIUM *param_2,int param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000a9e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnSetData(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- OnRenderData @ 1000a9ea

int __thiscall
COleControl::OnRenderData(COleControl *this,tagFORMATETC *param_1,tagSTGMEDIUM *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000a9ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnRenderData(this,param_1,param_2);
  return iVar1;
}


// ---- OnRenderFileData @ 1000a9f0

int __thiscall COleControl::OnRenderFileData(COleControl *this,tagFORMATETC *param_1,CFile *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000a9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnRenderFileData(this,param_1,param_2);
  return iVar1;
}


// ---- OnRenderGlobalData @ 1000a9f6

int __thiscall
COleControl::OnRenderGlobalData(COleControl *this,tagFORMATETC *param_1,void **param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000a9f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnRenderGlobalData(this,param_1,param_2);
  return iVar1;
}


// ---- OnGetNaturalExtent @ 1000a9fc

int __thiscall
COleControl::OnGetNaturalExtent
          (COleControl *this,ulong param_1,long param_2,tagDVTARGETDEVICE *param_3,HDC__ *param_4,
          tagExtentInfo *param_5,tagSIZE *param_6)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000a9fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnGetNaturalExtent(this,param_1,param_2,param_3,param_4,param_5,param_6);
  return iVar1;
}


// ---- OnQueryHitRect @ 1000aa02

int __thiscall
COleControl::OnQueryHitRect
          (COleControl *this,ulong param_1,tagRECT *param_2,tagRECT *param_3,long param_4,
          ulong *param_5)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000aa02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnQueryHitRect(this,param_1,param_2,param_3,param_4,param_5);
  return iVar1;
}


// ---- OnQueryHitPoint @ 1000aa08

int __thiscall
COleControl::OnQueryHitPoint
          (COleControl *this,ulong param_1,tagRECT *param_2,tagPOINT param_3,long param_4,
          ulong *param_5)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000aa08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnQueryHitPoint(this,param_1,param_2,param_3,param_4,param_5);
  return iVar1;
}


// ---- OnGetViewStatus @ 1000aa0e

ulong __thiscall COleControl::OnGetViewStatus(COleControl *this)

{
  ulong uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000aa0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = OnGetViewStatus(this);
  return uVar1;
}


// ---- OnGetViewRect @ 1000aa14

int __thiscall COleControl::OnGetViewRect(COleControl *this,ulong param_1,_RECTL *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000aa14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnGetViewRect(this,param_1,param_2);
  return iVar1;
}


// ---- OnGetViewExtent @ 1000aa1a

int __thiscall
COleControl::OnGetViewExtent
          (COleControl *this,ulong param_1,long param_2,tagDVTARGETDEVICE *param_3,tagSIZE *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000aa1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnGetViewExtent(this,param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- OnGetColorSet @ 1000aa20

int __thiscall
COleControl::OnGetColorSet
          (COleControl *this,tagDVTARGETDEVICE *param_1,HDC__ *param_2,tagLOGPALETTE **param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000aa20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnGetColorSet(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- OnHideToolBars @ 1000aa26

void __thiscall COleControl::OnHideToolBars(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x1000aa26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnHideToolBars(this);
  return;
}


// ---- OnShowToolBars @ 1000aa2c

void __thiscall COleControl::OnShowToolBars(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x1000aa2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnShowToolBars(this);
  return;
}


// ---- OnGetInPlaceMenu @ 1000aa32

HMENU__ * __thiscall COleControl::OnGetInPlaceMenu(COleControl *this)

{
  HMENU__ *pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000aa32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = OnGetInPlaceMenu(this);
  return pHVar1;
}


// ---- OnFreezeEvents @ 1000aa38

void __thiscall COleControl::OnFreezeEvents(COleControl *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x1000aa38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnFreezeEvents(this,param_1);
  return;
}


// ---- OnAmbientPropertyChange @ 1000aa3e

void __thiscall COleControl::OnAmbientPropertyChange(COleControl *this,long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x1000aa3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnAmbientPropertyChange(this,param_1);
  return;
}


// ---- OnMnemonic @ 1000aa44

void __thiscall COleControl::OnMnemonic(COleControl *this,tagMSG *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x1000aa44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnMnemonic(this,param_1);
  return;
}


// ---- OnGetControlInfo @ 1000aa4a

void __thiscall COleControl::OnGetControlInfo(COleControl *this,tagCONTROLINFO *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x1000aa4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnGetControlInfo(this,param_1);
  return;
}


// ---- OnForeColorChanged @ 1000aa50

void __thiscall COleControl::OnForeColorChanged(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x1000aa50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnForeColorChanged(this);
  return;
}


// ---- OnFontChanged @ 1000aa56

void __thiscall COleControl::OnFontChanged(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x1000aa56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnFontChanged(this);
  return;
}


// ---- OnTextChanged @ 1000aa5c

void __thiscall COleControl::OnTextChanged(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x1000aa5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnTextChanged(this);
  return;
}


// ---- OnBorderStyleChanged @ 1000aa62

void __thiscall COleControl::OnBorderStyleChanged(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x1000aa62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnBorderStyleChanged(this);
  return;
}


// ---- OnBackColorChanged @ 1000aa68

void __thiscall COleControl::OnBackColorChanged(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x1000aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnBackColorChanged(this);
  return;
}


// ---- OnAppearanceChanged @ 1000aa6e

void __thiscall COleControl::OnAppearanceChanged(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x1000aa6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnAppearanceChanged(this);
  return;
}


// ---- OnKeyPressEvent @ 1000aa74

void __thiscall COleControl::OnKeyPressEvent(COleControl *this,ushort param_1)

{
                    /* WARNING: Could not recover jumptable at 0x1000aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnKeyPressEvent(this,param_1);
  return;
}


// ---- OnKeyUpEvent @ 1000aa7a

void __thiscall COleControl::OnKeyUpEvent(COleControl *this,ushort param_1,ushort param_2)

{
                    /* WARNING: Could not recover jumptable at 0x1000aa7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnKeyUpEvent(this,param_1,param_2);
  return;
}


// ---- OnKeyDownEvent @ 1000aa80

void __thiscall COleControl::OnKeyDownEvent(COleControl *this,ushort param_1,ushort param_2)

{
                    /* WARNING: Could not recover jumptable at 0x1000aa80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnKeyDownEvent(this,param_1,param_2);
  return;
}


// ---- OnClick @ 1000aa86

void __thiscall COleControl::OnClick(COleControl *this,ushort param_1)

{
                    /* WARNING: Could not recover jumptable at 0x1000aa86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnClick(this,param_1);
  return;
}


// ---- OnEventAdvise @ 1000aa8c

void __thiscall COleControl::OnEventAdvise(COleControl *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x1000aa8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnEventAdvise(this,param_1);
  return;
}


// ---- OnSetObjectRects @ 1000aa92

int __thiscall COleControl::OnSetObjectRects(COleControl *this,tagRECT *param_1,tagRECT *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000aa92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnSetObjectRects(this,param_1,param_2);
  return iVar1;
}


// ---- OnClose @ 1000aa98

void __thiscall COleControl::OnClose(COleControl *this,ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x1000aa98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnClose(this,param_1);
  return;
}


// ---- OnSetExtent @ 1000aa9e

int __thiscall COleControl::OnSetExtent(COleControl *this,tagSIZE *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000aa9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnSetExtent(this,param_1);
  return iVar1;
}


// ---- OnSetClientSite @ 1000aaa4

void __thiscall COleControl::OnSetClientSite(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x1000aaa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnSetClientSite(this);
  return;
}


// ---- DisplayError @ 1000aaaa

void __thiscall
COleControl::DisplayError
          (COleControl *this,long param_1,char *param_2,char *param_3,char *param_4,uint param_5)

{
                    /* WARNING: Could not recover jumptable at 0x1000aaaa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DisplayError(this,param_1,param_2,param_3,param_4,param_5);
  return;
}


// ---- GetMessageString @ 1000aab0

void __thiscall COleControl::GetMessageString(COleControl *this,uint param_1,CString *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x1000aab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetMessageString(this,param_1,param_2);
  return;
}


// ---- OnDrawMetafile @ 1000aab6

void __thiscall COleControl::OnDrawMetafile(COleControl *this,CDC *param_1,CRect *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x1000aab6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnDrawMetafile(this,param_1,param_2);
  return;
}


// ---- GetClientRect @ 1000aabc

void __thiscall COleControl::GetClientRect(COleControl *this,tagRECT *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x1000aabc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetClientRect(this,param_1);
  return;
}


// ---- SetOccDialogInfo @ 1000aac2

int __thiscall CWnd::SetOccDialogInfo(CWnd *this,_AFX_OCC_DIALOG_INFO *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000aac2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetOccDialogInfo(this,param_1);
  return iVar1;
}


// ---- IsFrameWnd @ 1000aac8

int __thiscall CWnd::IsFrameWnd(CWnd *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000aac8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = IsFrameWnd(this);
  return iVar1;
}


// ---- CheckAutoCenter @ 1000aace

int __thiscall CWnd::CheckAutoCenter(CWnd *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000aace. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CheckAutoCenter(this);
  return iVar1;
}


// ---- OnChildNotify @ 1000aad4

int __thiscall CWnd::OnChildNotify(CWnd *this,uint param_1,uint param_2,long param_3,long *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000aad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnChildNotify(this,param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- PostNcDestroy @ 1000aada

void __thiscall CWnd::PostNcDestroy(CWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x1000aada. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PostNcDestroy(this);
  return;
}


// ---- DefWindowProcA @ 1000aae0

long __thiscall
COleControl::DefWindowProcA(COleControl *this,uint param_1,uint param_2,long param_3)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = DefWindowProcA(this,param_1,param_2,param_3);
  return lVar1;
}


// ---- OnWndMsg @ 1000aae6

int __thiscall CWnd::OnWndMsg(CWnd *this,uint param_1,uint param_2,long param_3,long *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000aae6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnWndMsg(this,param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- WindowProc @ 1000aaec

long __thiscall COleControl::WindowProc(COleControl *this,uint param_1,uint param_2,long param_3)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000aaec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = WindowProc(this,param_1,param_2,param_3);
  return lVar1;
}


// ---- OnAmbientProperty @ 1000aaf2

int __thiscall
CWnd::OnAmbientProperty(CWnd *this,COleControlSite *param_1,long param_2,tagVARIANT *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000aaf2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnAmbientProperty(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- PreTranslateMessage @ 1000aaf8

int __thiscall CWnd::PreTranslateMessage(CWnd *this,tagMSG *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000aaf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = PreTranslateMessage(this,param_1);
  return iVar1;
}


// ---- GetSuperWndProcAddr @ 1000aafe

_func_long_HWND___ptr_uint_uint_long ** __thiscall CWnd::GetSuperWndProcAddr(CWnd *this)

{
  _func_long_HWND___ptr_uint_uint_long **pp_Var1;
  
                    /* WARNING: Could not recover jumptable at 0x1000aafe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pp_Var1 = GetSuperWndProcAddr(this);
  return pp_Var1;
}


// ---- OnNotify @ 1000ab04

int __thiscall CWnd::OnNotify(CWnd *this,uint param_1,long param_2,long *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000ab04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnNotify(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- OnCommand @ 1000ab0a

int __thiscall CWnd::OnCommand(CWnd *this,uint param_1,long param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000ab0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCommand(this,param_1,param_2);
  return iVar1;
}


// ---- EndModalLoop @ 1000ab10

void __thiscall CWnd::EndModalLoop(CWnd *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x1000ab10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EndModalLoop(this,param_1);
  return;
}


// ---- ContinueModal @ 1000ab16

int __thiscall CWnd::ContinueModal(CWnd *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000ab16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ContinueModal(this);
  return iVar1;
}


// ---- WinHelpA @ 1000ab1c

void __thiscall CWnd::WinHelpA(CWnd *this,ulong param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x1000ab1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WinHelpA(this,param_1,param_2);
  return;
}


// ---- GetScrollBarCtrl @ 1000ab22

CScrollBar * __thiscall CWnd::GetScrollBarCtrl(CWnd *this,int param_1)

{
  CScrollBar *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000ab22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetScrollBarCtrl(this,param_1);
  return pCVar1;
}


// ---- OnToolHitTest @ 1000ab28

int __thiscall CWnd::OnToolHitTest(void)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000ab28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnToolHitTest();
  return iVar1;
}


// ---- CalcWindowRect @ 1000ab2e

void __thiscall CWnd::CalcWindowRect(CWnd *this,tagRECT *param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x1000ab2e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CalcWindowRect(this,param_1,param_2);
  return;
}


// ---- DestroyWindow @ 1000ab34

int __thiscall CWnd::DestroyWindow(CWnd *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000ab34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = DestroyWindow(this);
  return iVar1;
}


// ---- Create @ 1000ab3a

int __thiscall
CWnd::Create(CWnd *this,char *param_1,char *param_2,ulong param_3,tagRECT *param_4,CWnd *param_5,
            uint param_6,CCreateContext *param_7)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000ab3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Create(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return iVar1;
}


// ---- PreSubclassWindow @ 1000ab40

void __thiscall CWnd::PreSubclassWindow(CWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x1000ab40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PreSubclassWindow(this);
  return;
}


// ---- GetConnectionHook @ 1000ab46

IConnectionPoint * __thiscall COleControl::GetConnectionHook(COleControl *this,_GUID *param_1)

{
  IConnectionPoint *pIVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000ab46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = GetConnectionHook(this,param_1);
  return pIVar1;
}


// ---- GetExtraConnectionPoints @ 1000ab4c

int __thiscall COleControl::GetExtraConnectionPoints(COleControl *this,CPtrArray *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000ab4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetExtraConnectionPoints(this,param_1);
  return iVar1;
}


// ---- GetInterfaceHook @ 1000ab52

IUnknown * __thiscall COleControl::GetInterfaceHook(COleControl *this,void *param_1)

{
  IUnknown *pIVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000ab52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = GetInterfaceHook(this,param_1);
  return pIVar1;
}


// ---- OnCreateAggregates @ 1000ab58

int __thiscall COleControl::OnCreateAggregates(COleControl *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000ab58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCreateAggregates(this);
  return iVar1;
}


// ---- GetInterfaceMap @ 1000ab5e

AFX_INTERFACEMAP * __thiscall COleControl::GetInterfaceMap(COleControl *this)

{
  AFX_INTERFACEMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000ab5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetInterfaceMap(this);
  return pAVar1;
}


// ---- GetConnectionMap @ 1000ab64

AFX_CONNECTIONMAP * __thiscall COleControl::GetConnectionMap(COleControl *this)

{
  AFX_CONNECTIONMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000ab64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetConnectionMap(this);
  return pAVar1;
}


// ---- GetDispatchIID @ 1000ab6a

int __thiscall COleControl::GetDispatchIID(COleControl *this,_GUID *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000ab6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetDispatchIID(this,param_1);
  return iVar1;
}


// ---- IsInvokeAllowed @ 1000ab70

int __thiscall COleControl::IsInvokeAllowed(COleControl *this,long param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000ab70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = IsInvokeAllowed(this,param_1);
  return iVar1;
}


// ---- OnFinalRelease @ 1000ab76

void __thiscall COleControl::OnFinalRelease(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x1000ab76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnFinalRelease(this);
  return;
}


// ---- Serialize @ 1000ab7c

void __thiscall COleControl::Serialize(COleControl *this,CArchive *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x1000ab7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Serialize(this,param_1);
  return;
}


// ---- ~CString @ 1000ab82

void __thiscall CString::~CString(CString *this)

{
                    /* WARNING: Could not recover jumptable at 0x1000ab82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CString(this);
  return;
}


// ---- ~CButton @ 1000ab88

void __thiscall CButton::~CButton(CButton *this)

{
                    /* WARNING: Could not recover jumptable at 0x1000ab88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CButton(this);
  return;
}


// ---- ~CScrollBar @ 1000ab8e

void __thiscall CScrollBar::~CScrollBar(CScrollBar *this)

{
                    /* WARNING: Could not recover jumptable at 0x1000ab8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CScrollBar(this);
  return;
}


// ---- ~COleControl @ 1000ab94

void __thiscall COleControl::~COleControl(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x1000ab94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~COleControl(this);
  return;
}


// ---- Attach @ 1000ab9a

int __thiscall CGdiObject::Attach(CGdiObject *this,void *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000ab9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Attach(this,param_1);
  return iVar1;
}


// ---- InitializeIIDs @ 1000aba0

void __thiscall COleControl::InitializeIIDs(COleControl *this,_GUID *param_1,_GUID *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x1000aba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitializeIIDs(this,param_1,param_2);
  return;
}


// ---- CString @ 1000aba6

void __thiscall CString::CString(CString *this)

{
                    /* WARNING: Could not recover jumptable at 0x1000aba6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CString(this);
  return;
}


// ---- CWnd @ 1000abac

void __thiscall CWnd::CWnd(CWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x1000abac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CWnd(this);
  return;
}


// ---- COleControl @ 1000abb2

void __thiscall COleControl::COleControl(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x1000abb2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  COleControl(this);
  return;
}


// ---- DeleteObject @ 1000abc4

int __thiscall CGdiObject::DeleteObject(CGdiObject *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000abc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = DeleteObject(this);
  return iVar1;
}


// ---- SelectObject @ 1000abca

CPen * __thiscall CDC::SelectObject(CDC *this,CPen *param_1)

{
  CPen *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000abca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = SelectObject(this,param_1);
  return pCVar1;
}


// ---- SelectObject @ 1000abd0

CBrush * __thiscall CDC::SelectObject(CDC *this,CBrush *param_1)

{
  CBrush *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000abd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = SelectObject(this,param_1);
  return pCVar1;
}


// ---- SetTextAlign @ 1000abd6

uint __thiscall CDC::SetTextAlign(CDC *this,uint param_1)

{
  uint uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000abd6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = SetTextAlign(this,param_1);
  return uVar1;
}


// ---- SetBkMode @ 1000abdc

int __thiscall CDC::SetBkMode(CDC *this,int param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000abdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetBkMode(this,param_1);
  return iVar1;
}


// ---- TranslateColor @ 1000abe2

ulong __thiscall COleControl::TranslateColor(COleControl *this,ulong param_1,HPALETTE__ *param_2)

{
  ulong uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000abe2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = TranslateColor(this,param_1,param_2);
  return uVar1;
}


// ---- AmbientBackColor @ 1000abe8

ulong __thiscall COleControl::AmbientBackColor(COleControl *this)

{
  ulong uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000abe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = AmbientBackColor(this);
  return uVar1;
}


// ---- LineTo @ 1000abee

int __thiscall CDC::LineTo(CDC *this,int param_1,int param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000abee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = LineTo(this,param_1,param_2);
  return iVar1;
}


// ---- MoveTo @ 1000abf4

void __thiscall CDC::MoveTo(CDC *this,int param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x1000abf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MoveTo(this,param_1,param_2);
  return;
}


// ---- FillSolidRect @ 1000abfa

void __thiscall CDC::FillSolidRect(CDC *this,tagRECT *param_1,ulong param_2)

{
                    /* WARNING: Could not recover jumptable at 0x1000abfa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FillSolidRect(this,param_1,param_2);
  return;
}


// ---- SetControlSize @ 1000ac00

int __thiscall COleControl::SetControlSize(COleControl *this,int param_1,int param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000ac00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetControlSize(this,param_1,param_2);
  return iVar1;
}


// ---- GetControlSize @ 1000ac06

void __thiscall COleControl::GetControlSize(COleControl *this,int *param_1,int *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x1000ac06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetControlSize(this,param_1,param_2);
  return;
}


// ---- AmbientUserMode @ 1000ac0c

int __thiscall COleControl::AmbientUserMode(COleControl *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000ac0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AmbientUserMode(this);
  return iVar1;
}


// ---- DoSuperclassPaint @ 1000ac12

void __thiscall COleControl::DoSuperclassPaint(COleControl *this,CDC *param_1,CRect *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x1000ac12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DoSuperclassPaint(this,param_1,param_2);
  return;
}


// ---- PX_Float @ 1000ac18

int __cdecl PX_Float(CPropExchange *param_1,char *param_2,float *param_3,float param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000ac18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = PX_Float(param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- DoPropExchange @ 1000ac1e

void __thiscall COleControl::DoPropExchange(COleControl *this,CPropExchange *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x1000ac1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DoPropExchange(this,param_1);
  return;
}


// ---- OnResetState @ 1000ac24

void __thiscall COleControl::OnResetState(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x1000ac24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnResetState(this);
  return;
}


// ---- ~CDialog @ 1000ac2a

void __thiscall CDialog::~CDialog(CDialog *this)

{
                    /* WARNING: Could not recover jumptable at 0x1000ac2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CDialog(this);
  return;
}


// ---- DoModal @ 1000ac30

int __thiscall CDialog::DoModal(CDialog *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000ac30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = DoModal(this);
  return iVar1;
}


// ---- CDialog @ 1000ac36

void __thiscall CDialog::CDialog(CDialog *this,uint param_1,CWnd *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x1000ac36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CDialog(this,param_1,param_2);
  return;
}


// ---- operator= @ 1000ac3c

CString * __thiscall CString::operator=(CString *this,char *param_1)

{
  CString *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000ac3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = operator=(this,param_1);
  return pCVar1;
}


// ---- GetAmbientProperty @ 1000ac42

int __thiscall
COleControl::GetAmbientProperty(COleControl *this,long param_1,ushort param_2,void *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000ac42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetAmbientProperty(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- InvalidateControl @ 1000ac48

void __thiscall COleControl::InvalidateControl(COleControl *this,tagRECT *param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x1000ac48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InvalidateControl(this,param_1,param_2);
  return;
}


// ---- EnableWindow @ 1000ac4e

int __thiscall CWnd::EnableWindow(CWnd *this,int param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000ac4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = EnableWindow(this,param_1);
  return iVar1;
}


// ---- SetModifiedFlag @ 1000ac54

void __thiscall COleControl::SetModifiedFlag(COleControl *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x1000ac54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetModifiedFlag(this,param_1);
  return;
}


// ---- operator= @ 1000ac5a

CString * __thiscall CString::operator=(CString *this,CString *param_1)

{
  CString *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000ac5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = operator=(this,param_1);
  return pCVar1;
}


// ---- Left @ 1000ac60

void __thiscall CString::Left(CString *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x1000ac60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Left(this,param_1);
  return;
}


// ---- CString @ 1000ac66

void __thiscall CString::CString(CString *this,char *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x1000ac66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CString(this,param_1);
  return;
}


// ---- OnDestroy @ 1000ac84

void __thiscall COleControl::OnDestroy(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x1000ac84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnDestroy(this);
  return;
}


// ---- OnHScroll @ 1000ac96

void __thiscall CWnd::OnHScroll(CWnd *this,uint param_1,uint param_2,CScrollBar *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x1000ac96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnHScroll(this,param_1,param_2,param_3);
  return;
}


// ---- OnVScroll @ 1000ac9c

void __thiscall CWnd::OnVScroll(CWnd *this,uint param_1,uint param_2,CScrollBar *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x1000ac9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnVScroll(this,param_1,param_2,param_3);
  return;
}


// ---- AfxOleRegisterPropertyPageClass @ 1000acd8

int AfxOleRegisterPropertyPageClass(HINSTANCE__ *param_1,_GUID *param_2,uint param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000acd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AfxOleRegisterPropertyPageClass(param_1,param_2,param_3);
  return iVar1;
}


// ---- OnEditProperty @ 1000acde

int __thiscall COlePropertyPage::OnEditProperty(COlePropertyPage *this,long param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000acde. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnEditProperty(this,param_1);
  return iVar1;
}


// ---- OnHelp @ 1000ace4

int __thiscall COlePropertyPage::OnHelp(COlePropertyPage *this,char *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000ace4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnHelp(this,param_1);
  return iVar1;
}


// ---- OnObjectsChanged @ 1000acea

void __thiscall COlePropertyPage::OnObjectsChanged(COlePropertyPage *this)

{
                    /* WARNING: Could not recover jumptable at 0x1000acea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnObjectsChanged(this);
  return;
}


// ---- OnSetPageSite @ 1000acf0

void __thiscall COlePropertyPage::OnSetPageSite(COlePropertyPage *this)

{
                    /* WARNING: Could not recover jumptable at 0x1000acf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnSetPageSite(this);
  return;
}


// ---- PreInitDialog @ 1000acf6

void __thiscall CDialog::PreInitDialog(CDialog *this)

{
                    /* WARNING: Could not recover jumptable at 0x1000acf6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PreInitDialog(this);
  return;
}


// ---- OnCancel @ 1000acfc

void __thiscall CDialog::OnCancel(CDialog *this)

{
                    /* WARNING: Could not recover jumptable at 0x1000acfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnCancel(this);
  return;
}


// ---- OnOK @ 1000ad02

void __thiscall CDialog::OnOK(CDialog *this)

{
                    /* WARNING: Could not recover jumptable at 0x1000ad02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnOK(this);
  return;
}


// ---- OnSetFont @ 1000ad08

void __thiscall CDialog::OnSetFont(CDialog *this,CFont *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x1000ad08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnSetFont(this,param_1);
  return;
}


// ---- OnInitDialog @ 1000ad0e

int __thiscall COlePropertyPage::OnInitDialog(COlePropertyPage *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000ad0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnInitDialog(this);
  return iVar1;
}


// ---- SetOccDialogInfo @ 1000ad14

int __thiscall CDialog::SetOccDialogInfo(CDialog *this,_AFX_OCC_DIALOG_INFO *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000ad14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetOccDialogInfo(this,param_1);
  return iVar1;
}


// ---- CheckAutoCenter @ 1000ad1a

int __thiscall CDialog::CheckAutoCenter(CDialog *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000ad1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CheckAutoCenter(this);
  return iVar1;
}


// ---- WindowProc @ 1000ad20

long __thiscall
COlePropertyPage::WindowProc(COlePropertyPage *this,uint param_1,uint param_2,long param_3)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000ad20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = WindowProc(this,param_1,param_2,param_3);
  return lVar1;
}


// ---- PreTranslateMessage @ 1000ad26

int __thiscall COlePropertyPage::PreTranslateMessage(COlePropertyPage *this,tagMSG *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000ad26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = PreTranslateMessage(this,param_1);
  return iVar1;
}


// ---- OnCommand @ 1000ad2c

int __thiscall COlePropertyPage::OnCommand(COlePropertyPage *this,uint param_1,long param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000ad2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCommand(this,param_1,param_2);
  return iVar1;
}


// ---- GetInterfaceMap @ 1000ad32

AFX_INTERFACEMAP * __thiscall COlePropertyPage::GetInterfaceMap(COlePropertyPage *this)

{
  AFX_INTERFACEMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000ad32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetInterfaceMap(this);
  return pAVar1;
}


// ---- OnFinalRelease @ 1000ad38

void __thiscall COlePropertyPage::OnFinalRelease(COlePropertyPage *this)

{
                    /* WARNING: Could not recover jumptable at 0x1000ad38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnFinalRelease(this);
  return;
}


// ---- OnCmdMsg @ 1000ad3e

int __thiscall
CDialog::OnCmdMsg(CDialog *this,uint param_1,int param_2,void *param_3,AFX_CMDHANDLERINFO *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000ad3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCmdMsg(this,param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- COlePropertyPage @ 1000ad44

void __thiscall COlePropertyPage::COlePropertyPage(COlePropertyPage *this,uint param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x1000ad44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  COlePropertyPage(this,param_1,param_2);
  return;
}


// ---- ~COlePropertyPage @ 1000ad4a

void __thiscall COlePropertyPage::~COlePropertyPage(COlePropertyPage *this)

{
                    /* WARNING: Could not recover jumptable at 0x1000ad4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~COlePropertyPage(this);
  return;
}


// ---- DDP_PostProcessing @ 1000ad50

void DDP_PostProcessing(CDataExchange *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x1000ad50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DDP_PostProcessing(param_1);
  return;
}


// ---- Empty @ 1000ad56

void __thiscall CString::Empty(CString *this)

{
                    /* WARNING: Could not recover jumptable at 0x1000ad56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Empty(this);
  return;
}


// ---- FUN_1000ad66 @ 1000ad66

undefined4 * FUN_1000ad66(void)

{
  AFX_MODULE_STATE::AFX_MODULE_STATE((AFX_MODULE_STATE *)&DAT_100106e0,1,FUN_1000adc4,0x600);
  DAT_100106e0 = &PTR_FUN_1000cf28;
  return &DAT_100106e0;
}


// ---- FUN_1000ad8e @ 1000ad8e

AFX_MODULE_STATE * __thiscall FUN_1000ad8e(void *this,byte param_1)

{
  AFX_MODULE_STATE::~AFX_MODULE_STATE(this);
  if ((param_1 & 1) != 0) {
    CNoTrackObject::operator_delete(this);
  }
  return this;
}


// ---- ~AFX_MODULE_STATE @ 1000ada9

void __thiscall AFX_MODULE_STATE::~AFX_MODULE_STATE(AFX_MODULE_STATE *this)

{
                    /* WARNING: Could not recover jumptable at 0x1000b198. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~AFX_MODULE_STATE(this);
  return;
}


// ---- FUN_1000adae @ 1000adae

void FUN_1000adae(void)

{
  FUN_1000afb3((_onexit_t)&LAB_1000adba);
  return;
}


// ---- FUN_1000adc4 @ 1000adc4

/* WARNING: Function: _EH_prolog replaced with injection: EH_prolog */

void FUN_1000adc4(HWND__ *param_1,uint param_2,uint param_3,long param_4)

{
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1000b540;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2
            ((AFX_MAINTAIN_STATE2 *)&local_18,(AFX_MODULE_STATE *)&DAT_100106e0);
  local_8 = 0;
  AfxWndProc(param_1,param_2,param_3,param_4);
  *(undefined4 *)(local_14 + 4) = local_18;
  ExceptionList = local_10;
  return;
}


// ---- FUN_1000ae09 @ 1000ae09

undefined4 * FUN_1000ae09(void)

{
  return &DAT_100106e0;
}


// ---- FUN_1000ae0f @ 1000ae0f

int FUN_1000ae0f(HINSTANCE__ *param_1,int param_2)

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
      pAVar5 = AfxSetModuleState((AFX_MODULE_STATE *)&DAT_100106e0);
      p_Var3 = AfxGetThreadState();
      *(AFX_MODULE_STATE **)(p_Var3 + 8) = pAVar5;
      pAVar5 = AfxGetModuleState();
      if (*(int **)(pAVar5 + 4) != (int *)0x0) {
        (**(code **)(**(int **)(pAVar5 + 4) + 0x70))();
      }
      AfxLockTempMaps();
      AfxUnlockTempMaps(-1);
      AfxWinTerm();
      AfxTermExtensionModule((AFX_EXTENSION_MODULE *)&DAT_10011770,1);
    }
    else if (param_2 == 3) {
      AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2
                ((AFX_MAINTAIN_STATE2 *)&local_c,(AFX_MODULE_STATE *)&DAT_100106e0);
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
  iVar4 = AfxWinInit(param_1,(HINSTANCE__ *)0x0,&DAT_100102a4,0);
  if (iVar4 != 0) {
    pAVar5 = AfxGetModuleState();
    piVar2 = *(int **)(pAVar5 + 4);
    if ((piVar2 == (int *)0x0) || (iVar4 = (**(code **)(*piVar2 + 0x58))(), iVar4 != 0)) {
      *(undefined4 *)(p_Var3 + 8) = uVar1;
      AfxInitExtensionModule((AFX_EXTENSION_MODULE *)&DAT_10011770,param_1);
      this = operator_new(0x40);
      if (this != (CDynLinkLibrary *)0x0) {
        CDynLinkLibrary::CDynLinkLibrary(this,(AFX_EXTENSION_MODULE *)&DAT_10011770,0);
      }
      param_2 = 1;
      goto LAB_1000ae9b;
    }
    (**(code **)(*piVar2 + 0x70))();
  }
  AfxWinTerm();
LAB_1000ae9b:
  *(undefined4 *)(p_Var3 + 8) = uVar1;
  p_Var3 = AfxGetThreadState();
  AfxSetModuleState(*(AFX_MODULE_STATE **)(p_Var3 + 8));
  return param_2;
}


// ---- FUN_1000af36 @ 1000af36

undefined4 FUN_1000af36(undefined4 param_1,int param_2)

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
    pAVar2 = AfxSetModuleState((AFX_MODULE_STATE *)&DAT_100106e0);
    *(AFX_MODULE_STATE **)(p_Var1 + 8) = pAVar2;
  }
  else if (param_2 == 0) {
    p_Var1 = AfxGetThreadState();
    AfxSetModuleState(*(AFX_MODULE_STATE **)(p_Var1 + 8));
  }
  return 1;
}


// ---- FUN_1000af87 @ 1000af87

void __cdecl FUN_1000af87(_onexit_t param_1)

{
  if (DAT_10011798 == -1) {
    _onexit(param_1);
    return;
  }
  __dllonexit(param_1,&DAT_10011798,&DAT_10011794);
  return;
}


// ---- FUN_1000afb3 @ 1000afb3

int __cdecl FUN_1000afb3(_onexit_t param_1)

{
  int iVar1;
  
  iVar1 = FUN_1000af87(param_1);
  return (iVar1 != 0) - 1;
}


// ---- _CIpow @ 1000afd0

void _CIpow(void)

{
                    /* WARNING: Could not recover jumptable at 0x1000afd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _CIpow();
  return;
}


// ---- ftol @ 1000afd6

void __cdecl ftol(void)

{
                    /* WARNING: Could not recover jumptable at 0x1000afd6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ftol();
  return;
}


// ---- FUN_1000b00f @ 1000b00f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1000b00f(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *_Memory;
  undefined4 *puVar2;
  
  if (param_2 == 0) {
    if (0 < DAT_1001178c) {
      DAT_1001178c = DAT_1001178c + -1;
      goto LAB_1000b025;
    }
LAB_1000b04d:
    uVar1 = 0;
  }
  else {
LAB_1000b025:
    _DAT_10011790 = *(undefined4 *)_adjust_fdiv_exref;
    if (param_2 == 1) {
      DAT_10011798 = malloc(0x80);
      if (DAT_10011798 == (undefined4 *)0x0) goto LAB_1000b04d;
      *DAT_10011798 = 0;
      DAT_10011794 = DAT_10011798;
      initterm(&DAT_1000e000,&DAT_1000e7d0);
      DAT_1001178c = DAT_1001178c + 1;
    }
    else if ((param_2 == 0) &&
            (_Memory = DAT_10011798, puVar2 = DAT_10011794, DAT_10011798 != (undefined4 *)0x0)) {
      while (puVar2 = puVar2 + -1, _Memory <= puVar2) {
        if ((code *)*puVar2 != (code *)0x0) {
          (*(code *)*puVar2)();
          _Memory = DAT_10011798;
        }
      }
      free(_Memory);
      DAT_10011798 = (undefined4 *)0x0;
    }
    uVar1 = 1;
  }
  return uVar1;
}


// ---- entry @ 1000b0ba

int entry(HINSTANCE__ *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_2;
  iVar2 = DAT_1001178c;
  if (param_2 != 0) {
    if ((param_2 != 1) && (param_2 != 2)) goto LAB_1000b102;
    if ((PTR_FUN_1000fd00 != (undefined *)0x0) &&
       (iVar2 = (*(code *)PTR_FUN_1000fd00)(param_1,param_2,param_3), iVar2 == 0)) {
      return 0;
    }
    iVar2 = FUN_1000b00f(param_1,param_2);
  }
  if (iVar2 == 0) {
    return 0;
  }
LAB_1000b102:
  iVar2 = FUN_1000ae0f(param_1,param_2);
  if (param_2 == 1) {
    if (iVar2 != 0) {
      return iVar2;
    }
    FUN_1000b00f(param_1,0);
  }
  if ((param_2 != 0) && (param_2 != 3)) {
    return iVar2;
  }
  iVar3 = FUN_1000b00f(param_1,param_2);
  param_2 = iVar2;
  if (iVar3 == 0) {
    param_2 = 0;
  }
  if (param_2 != 0) {
    if (PTR_FUN_1000fd00 != (undefined *)0x0) {
      iVar2 = (*(code *)PTR_FUN_1000fd00)(param_1,iVar1,param_3);
      return iVar2;
    }
    return param_2;
  }
  return 0;
}


// ---- FUN_1000b157 @ 1000b157

type_info * __thiscall FUN_1000b157(void *this,byte param_1)

{
  type_info::~type_info(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- _EH_prolog @ 1000b174

/* WARNING: This is an inlined function */
/* WARNING: Function: _EH_prolog replaced with injection: EH_prolog */

void _EH_prolog(void)

{
  undefined1 auStack_c [12];
  
  ExceptionList = auStack_c;
                    /* WARNING: Could not recover jumptable at 0x1000b174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  return;
}


// ---- __dllonexit @ 1000b17a

void __dllonexit(void)

{
                    /* WARNING: Could not recover jumptable at 0x1000b17a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __dllonexit();
  return;
}


// ---- initterm @ 1000b180

void __cdecl initterm(void)

{
                    /* WARNING: Could not recover jumptable at 0x1000b180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  initterm();
  return;
}


// ---- ~type_info @ 1000b186

void __thiscall type_info::~type_info(type_info *this)

{
                    /* WARNING: Could not recover jumptable at 0x1000b186. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~type_info(this);
  return;
}


// ---- AFX_MODULE_STATE @ 1000b18c

void __thiscall
AFX_MODULE_STATE::AFX_MODULE_STATE
          (AFX_MODULE_STATE *this,int param_1,_func_long_HWND___ptr_uint_uint_long *param_2,
          ulong param_3)

{
                    /* WARNING: Could not recover jumptable at 0x1000b18c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AFX_MODULE_STATE(this,param_1,param_2,param_3);
  return;
}


// ---- operator_delete @ 1000b192

void CNoTrackObject::operator_delete(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x1000b192. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  operator_delete(param_1);
  return;
}


// ---- ~AFX_MODULE_STATE @ 1000b198

void __thiscall AFX_MODULE_STATE::~AFX_MODULE_STATE(AFX_MODULE_STATE *this)

{
                    /* WARNING: Could not recover jumptable at 0x1000b198. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~AFX_MODULE_STATE(this);
  return;
}


// ---- AfxWndProc @ 1000b19e

long AfxWndProc(HWND__ *param_1,uint param_2,uint param_3,long param_4)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000b19e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = AfxWndProc(param_1,param_2,param_3,param_4);
  return lVar1;
}


// ---- AfxTermThread @ 1000b1a4

void AfxTermThread(HINSTANCE__ *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x1000b1a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AfxTermThread(param_1);
  return;
}


// ---- AfxTermExtensionModule @ 1000b1aa

void AfxTermExtensionModule(AFX_EXTENSION_MODULE *param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x1000b1aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AfxTermExtensionModule(param_1,param_2);
  return;
}


// ---- AfxUnlockTempMaps @ 1000b1b0

int AfxUnlockTempMaps(int param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000b1b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AfxUnlockTempMaps(param_1);
  return iVar1;
}


// ---- AfxLockTempMaps @ 1000b1b6

void AfxLockTempMaps(void)

{
                    /* WARNING: Could not recover jumptable at 0x1000b1b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AfxLockTempMaps();
  return;
}


// ---- AfxSetModuleState @ 1000b1bc

AFX_MODULE_STATE * AfxSetModuleState(AFX_MODULE_STATE *param_1)

{
  AFX_MODULE_STATE *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000b1bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = AfxSetModuleState(param_1);
  return pAVar1;
}


// ---- CDynLinkLibrary @ 1000b1c2

void __thiscall
CDynLinkLibrary::CDynLinkLibrary(CDynLinkLibrary *this,AFX_EXTENSION_MODULE *param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x1000b1c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CDynLinkLibrary(this,param_1,param_2);
  return;
}


// ---- AfxInitExtensionModule @ 1000b1c8

int AfxInitExtensionModule(AFX_EXTENSION_MODULE *param_1,HINSTANCE__ *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000b1c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AfxInitExtensionModule(param_1,param_2);
  return iVar1;
}


// ---- AfxWinTerm @ 1000b1ce

void AfxWinTerm(void)

{
                    /* WARNING: Could not recover jumptable at 0x1000b1ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AfxWinTerm();
  return;
}


// ---- AfxWinInit @ 1000b1d4

int AfxWinInit(HINSTANCE__ *param_1,HINSTANCE__ *param_2,char *param_3,int param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000b1d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AfxWinInit(param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- AfxGetThreadState @ 1000b1da

_AFX_THREAD_STATE * AfxGetThreadState(void)

{
  _AFX_THREAD_STATE *p_Var1;
  
                    /* WARNING: Could not recover jumptable at 0x1000b1da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  p_Var1 = AfxGetThreadState();
  return p_Var1;
}


// ---- AfxCoreInitModule @ 1000b1e0

void AfxCoreInitModule(void)

{
                    /* WARNING: Could not recover jumptable at 0x1000b1e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AfxCoreInitModule();
  return;
}


// ---- AfxDllGetClassObject @ 1000b1e6

long AfxDllGetClassObject(_GUID *param_1,_GUID *param_2,void **param_3)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000b1e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = AfxDllGetClassObject(param_1,param_2,param_3);
  return lVar1;
}


// ---- AfxDllCanUnloadNow @ 1000b1ec

long AfxDllCanUnloadNow(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000b1ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = AfxDllCanUnloadNow();
  return lVar1;
}


// ---- DllGetClassObject @ 1000b1f2

HRESULT DllGetClassObject(IID *rclsid,IID *riid,LPVOID *ppv)

{
  AFX_MODULE_STATE *pAVar1;
  long lVar2;
  undefined4 local_c;
  int local_8;
  
                    /* 0xb1f2  2  DllGetClassObject */
  pAVar1 = (AFX_MODULE_STATE *)FUN_1000ae09();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)&local_c,pAVar1);
  lVar2 = AfxDllGetClassObject(rclsid,riid,ppv);
  *(undefined4 *)(local_8 + 4) = local_c;
  return lVar2;
}


// ---- DllCanUnloadNow @ 1000b220

HRESULT DllCanUnloadNow(void)

{
  AFX_MODULE_STATE *pAVar1;
  long lVar2;
  undefined4 local_c;
  int local_8;
  
                    /* 0xb220  1  DllCanUnloadNow */
  pAVar1 = (AFX_MODULE_STATE *)FUN_1000ae09();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)&local_c,pAVar1);
  lVar2 = AfxDllCanUnloadNow();
  *(undefined4 *)(local_8 + 4) = local_c;
  return lVar2;
}


// ---- Unwind@1000b250 @ 1000b250

void Unwind_1000b250(void)

{
  int unaff_EBP;
  
  FUN_10004070(*(void **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@1000b270 @ 1000b270

void Unwind_1000b270(void)

{
  int unaff_EBP;
  
  FUN_10004500((undefined4 *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@1000b290 @ 1000b290

void Unwind_1000b290(void)

{
  int unaff_EBP;
  
  COleControl::~COleControl(*(COleControl **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@1000b298 @ 1000b298

void Unwind_1000b298(void)

{
  int unaff_EBP;
  
  FUN_10005990((CGdiObject *)(*(int *)(unaff_EBP + -0x10) + 0x1d8));
  return;
}


// ---- Unwind@1000b2a6 @ 1000b2a6

void Unwind_1000b2a6(void)

{
  int unaff_EBP;
  
  FUN_10005990((CGdiObject *)(*(int *)(unaff_EBP + -0x10) + 0x1e0));
  return;
}


// ---- Unwind@1000b2b4 @ 1000b2b4

void Unwind_1000b2b4(void)

{
  int unaff_EBP;
  
  CScrollBar::~CScrollBar((CScrollBar *)(*(int *)(unaff_EBP + -0x10) + 0x1e8));
  return;
}


// ---- Unwind@1000b2c2 @ 1000b2c2

void Unwind_1000b2c2(void)

{
  int unaff_EBP;
  
  CScrollBar::~CScrollBar((CScrollBar *)(*(int *)(unaff_EBP + -0x10) + 0x228));
  return;
}


// ---- Unwind@1000b2d0 @ 1000b2d0

void Unwind_1000b2d0(void)

{
  int unaff_EBP;
  
  CButton::~CButton((CButton *)(*(int *)(unaff_EBP + -0x10) + 0x268));
  return;
}


// ---- Unwind@1000b2de @ 1000b2de

void Unwind_1000b2de(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x10) + 0x330));
  return;
}


// ---- Unwind@1000b300 @ 1000b300

void Unwind_1000b300(void)

{
  int unaff_EBP;
  
  COleControl::~COleControl(*(COleControl **)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@1000b308 @ 1000b308

void Unwind_1000b308(void)

{
  int unaff_EBP;
  
  FUN_10005990((CGdiObject *)(*(int *)(unaff_EBP + -0x14) + 0x1d8));
  return;
}


// ---- Unwind@1000b316 @ 1000b316

void Unwind_1000b316(void)

{
  int unaff_EBP;
  
  FUN_10005990((CGdiObject *)(*(int *)(unaff_EBP + -0x14) + 0x1e0));
  return;
}


// ---- Unwind@1000b324 @ 1000b324

void Unwind_1000b324(void)

{
  int unaff_EBP;
  
  CScrollBar::~CScrollBar((CScrollBar *)(*(int *)(unaff_EBP + -0x14) + 0x1e8));
  return;
}


// ---- Unwind@1000b332 @ 1000b332

void Unwind_1000b332(void)

{
  int unaff_EBP;
  
  CScrollBar::~CScrollBar((CScrollBar *)(*(int *)(unaff_EBP + -0x14) + 0x228));
  return;
}


// ---- Unwind@1000b340 @ 1000b340

void Unwind_1000b340(void)

{
  int unaff_EBP;
  
  CButton::~CButton((CButton *)(*(int *)(unaff_EBP + -0x14) + 0x268));
  return;
}


// ---- Unwind@1000b34e @ 1000b34e

void Unwind_1000b34e(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x14) + 0x330));
  return;
}


// ---- Unwind@1000b35c @ 1000b35c

void Unwind_1000b35c(void)

{
  int unaff_EBP;
  
  FUN_10004640(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@1000b364 @ 1000b364

void Unwind_1000b364(void)

{
  int unaff_EBP;
  
  FUN_10004640(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@1000b380 @ 1000b380

void Unwind_1000b380(void)

{
  int unaff_EBP;
  
  CDialog::~CDialog((CDialog *)(unaff_EBP + -0x6c));
  return;
}


// ---- Unwind@1000b3a0 @ 1000b3a0

void Unwind_1000b3a0(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x24));
  return;
}


// ---- Unwind@1000b3a8 @ 1000b3a8

void Unwind_1000b3a8(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x20));
  return;
}


// ---- Unwind@1000b3c0 @ 1000b3c0

void Unwind_1000b3c0(void)

{
  int unaff_EBP;
  
  FUN_10004640(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@1000b3e0 @ 1000b3e0

void Unwind_1000b3e0(void)

{
  int unaff_EBP;
  
  FUN_10004640(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@1000b400 @ 1000b400

void Unwind_1000b400(void)

{
  int unaff_EBP;
  
  FUN_10004070(*(void **)(unaff_EBP + 8));
  return;
}


// ---- Unwind@1000b420 @ 1000b420

void Unwind_1000b420(void)

{
  int unaff_EBP;
  
  FUN_10004070(*(void **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@1000b440 @ 1000b440

void Unwind_1000b440(void)

{
  int unaff_EBP;
  
  FUN_10004070(*(void **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@1000b460 @ 1000b460

void Unwind_1000b460(void)

{
  int unaff_EBP;
  
  FUN_10004640(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@1000b480 @ 1000b480

void Unwind_1000b480(void)

{
  int unaff_EBP;
  
  FUN_10004640(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@1000b4a0 @ 1000b4a0

void Unwind_1000b4a0(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@1000b4c0 @ 1000b4c0

void Unwind_1000b4c0(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@1000b4e0 @ 1000b4e0

void Unwind_1000b4e0(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@1000b4e8 @ 1000b4e8

void Unwind_1000b4e8(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@1000b500 @ 1000b500

void Unwind_1000b500(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@1000b520 @ 1000b520

void Unwind_1000b520(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x184));
  return;
}


// ---- Unwind@1000b538 @ 1000b538

void Unwind_1000b538(void)

{
  int unaff_EBP;
  
  FUN_10004500((undefined4 *)(unaff_EBP + -0x14));
  return;
}


