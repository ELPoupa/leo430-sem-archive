// Decompiled with Ghidra from leoanalg.ocx
// Format: Portable Executable (PE), image base 10000000

// ---- FUN_10001010 @ 10001010

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001010(void)

{
  _DAT_1000f1c8 = RegisterWindowMessageA(s_LEO_D_SET_STATE_1000d84c);
  return;
}


// ---- FUN_10003e50 @ 10003e50

COleControl * FUN_10003e50(void)

{
  COleControl *pCVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10009f4a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pCVar1 = operator_new(0x268);
  local_4 = 0;
  if (pCVar1 != (COleControl *)0x0) {
    pCVar1 = FUN_100041b0(pCVar1);
    ExceptionList = local_c;
    return pCVar1;
  }
  ExceptionList = local_c;
  return (COleControl *)0x0;
}


// ---- FUN_10003eb0 @ 10003eb0

void FUN_10003eb0(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ---- FUN_10003ed0 @ 10003ed0

undefined ** FUN_10003ed0(void)

{
  return &PTR_s_CLEOAnalgCtrl_1000b4b8;
}


// ---- FUN_10003ef0 @ 10003ef0

undefined ** FUN_10003ef0(void)

{
  return &PTR_LAB_1000b4d0;
}


// ---- FUN_10003f10 @ 10003f10

undefined ** FUN_10003f10(void)

{
  return &PTR_LAB_1000b6a0;
}


// ---- FUN_10003f20 @ 10003f20

undefined * FUN_10003f20(void)

{
  return &DAT_1000f1d0;
}


// ---- FUN_10003f60 @ 10003f60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10003f60(int *param_1)

{
  if (DAT_1000d7ec == -1) {
    _DAT_1000ede0 = DAT_1000bb80;
    _DAT_1000ede4 = DAT_1000bb84;
    _DAT_1000ede8 = DAT_1000bb88;
    _DAT_1000edec = DAT_1000bb8c;
    DAT_1000d7ec = 1;
    *param_1 = 1;
    return &DAT_1000ede0;
  }
  *param_1 = DAT_1000d7ec;
  return &DAT_1000ede0;
}


// ---- FUN_10003fd0 @ 10003fd0

void FUN_10003fd0(void)

{
  FUN_10003ff0(&DAT_1000ed90,(_GUID *)&DAT_1000b7b8,(CRuntimeClass *)&PTR_s_CLEOAnalgCtrl_1000b4b8,0
               ,"LEOANALG.LEOAnalgCtrl.1");
  return;
}


// ---- FUN_10003ff0 @ 10003ff0

COleObjectFactory * __thiscall
FUN_10003ff0(void *this,_GUID *param_1,CRuntimeClass *param_2,int param_3,char *param_4)

{
  COleObjectFactory::COleObjectFactory(this,param_1,param_2,param_3,param_4);
  *(undefined ***)this = &PTR_LAB_1000b7e8;
  return this;
}


// ---- FUN_10004020 @ 10004020

void FUN_10004020(void)

{
  return;
}


// ---- ~COleObjectFactory @ 10004030

void __thiscall COleObjectFactory::~COleObjectFactory(COleObjectFactory *this)

{
                    /* WARNING: Could not recover jumptable at 0x10009568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~COleObjectFactory(this);
  return;
}


// ---- FUN_10004040 @ 10004040

void FUN_10004040(void)

{
  FUN_10009cac((_onexit_t)&LAB_10004050);
  return;
}


// ---- FUN_10004070 @ 10004070

undefined4 FUN_10004070(undefined4 *param_1)

{
  *param_1 = DAT_1000b7b8;
  param_1[1] = DAT_1000b7bc;
  param_1[2] = DAT_1000b7c0;
  param_1[3] = DAT_1000b7c4;
  return 0;
}


// ---- FUN_100040a0 @ 100040a0

undefined4 FUN_100040a0(void)

{
  return 1;
}


// ---- FUN_100040b0 @ 100040b0

void FUN_100040b0(LCID param_1,ITypeLib **param_2)

{
  LoadRegTypeLib((GUID *)&DAT_1000bcf0,DAT_1000bd00,DAT_1000bd02,param_1,param_2);
  return;
}


// ---- FUN_100040e0 @ 100040e0

void __fastcall FUN_100040e0(int param_1)

{
  undefined4 local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10009f68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2
            ((AFX_MAINTAIN_STATE2 *)&local_14,*(AFX_MODULE_STATE **)(param_1 + 0x1c));
  local_4 = 0;
  AfxGetTypeLibCache((_GUID *)&DAT_1000bcf0);
  *(undefined4 *)(local_10 + 4) = local_14;
  ExceptionList = local_c;
  return;
}


// ---- FUN_10004140 @ 10004140

undefined4 FUN_10004140(void)

{
  return 0x20191;
}


// ---- FUN_100041b0 @ 100041b0

COleControl * __fastcall FUN_100041b0(COleControl *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10009fa4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  COleControl::COleControl(param_1);
  local_4 = 0;
  CWnd::CWnd((CWnd *)(param_1 + 0x1d4));
  *(undefined ***)(param_1 + 0x1d4) = &PTR_GetRuntimeClass_1000ba54;
  local_4._0_1_ = 1;
  CString::CString((CString *)(param_1 + 0x244));
  local_4 = CONCAT31(local_4._1_3_,2);
  *(undefined ***)param_1 = &PTR_FUN_1000b85c;
  COleControl::InitializeIIDs(param_1,(_GUID *)&DAT_1000b7c8,(_GUID *)&DAT_1000b7d8);
  if (*(int *)(param_1 + 0x260) == 0) {
    iVar1 = 0x22;
  }
  else {
    iVar1 = 10;
  }
  COleControl::SetControlSize(param_1,200,iVar1);
  *(undefined4 *)(param_1 + 0x1cc) = 0;
  *(undefined4 *)(param_1 + 0x23c) = 0;
  *(undefined4 *)(param_1 + 0x240) = 0;
  *(undefined4 *)(param_1 + 0x264) = 0;
  *(undefined4 *)(param_1 + 0x214) = 0;
  *(undefined4 *)(param_1 + 0x21c) = 0;
  *(undefined4 *)(param_1 + 0x218) = 0;
  *(undefined4 *)(param_1 + 0x228) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x22c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x224) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x220) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x230) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x254) = 0;
  *(undefined4 *)(param_1 + 600) = 0;
  *(undefined4 *)(param_1 + 0x25c) = 0;
  *(undefined4 *)(param_1 + 0x1c8) = 0;
  *(undefined4 *)(param_1 + 0x248) = 1;
  ExceptionList = local_c;
  return param_1;
}


// ---- FUN_100042c0 @ 100042c0

void __fastcall FUN_100042c0(undefined4 *param_1)

{
  *(undefined4 *)(param_1[1] + 4) = *param_1;
  return;
}


// ---- FUN_100042d0 @ 100042d0

COleControl * __thiscall FUN_100042d0(void *this,byte param_1)

{
  FUN_100042f0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_100042f0 @ 100042f0

void __fastcall FUN_100042f0(COleControl *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_10009fd4;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)param_1 = &PTR_FUN_1000b85c;
  local_4 = 2;
  if (*(int **)(param_1 + 0x1c8) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x1c8) + 4))(1);
  }
  local_4._0_1_ = 1;
  CString::~CString((CString *)(param_1 + 0x244));
  local_4 = (uint)local_4._1_3_ << 8;
  CScrollBar::~CScrollBar((CScrollBar *)(param_1 + 0x1d4));
  local_4 = 0xffffffff;
  COleControl::~COleControl(param_1);
  ExceptionList = pvStack_c;
  return;
}


// ---- FUN_10004370 @ 10004370

void __thiscall FUN_10004370(COleControl *param_1,CDC *param_2,CRect *param_3)

{
  int iVar1;
  int iVar2;
  CPen *pCVar3;
  DWORD DVar4;
  ulong uVar5;
  undefined4 uVar6;
  int unaff_ESI;
  HPALETTE__ *pHVar7;
  undefined1 auStack_4c [76];
  
  COleControl::DoSuperclassPaint(param_1,param_2,param_3);
  if (*(int *)(param_1 + 0x260) == 0) {
    pCVar3 = (CPen *)(**(code **)(*(int *)param_2 + 0x2c))(7);
    auStack_4c._0_4_ = *(undefined4 *)param_3;
    auStack_4c._4_4_ = *(undefined4 *)(param_3 + 4);
    auStack_4c._8_4_ = *(undefined4 *)(param_3 + 8);
    auStack_4c._12_4_ = *(undefined4 *)(param_3 + 0xc);
    DrawEdge(*(HDC *)(param_2 + 4),(LPRECT)auStack_4c,10,0xf);
    iVar1 = *(int *)param_3;
    iVar2 = *(int *)(param_3 + 8);
    FUN_10004b30((int *)&stack0xffffffa4);
    if (*(int *)(param_1 + 0x248) == 0) {
      pHVar7 = (HPALETTE__ *)0x0;
      uVar5 = COleControl::AmbientBackColor(param_1);
      DVar4 = COleControl::TranslateColor(param_1,uVar5,pHVar7);
    }
    else {
      DVar4 = GetSysColor(5);
    }
    CDC::FillSolidRect(param_2,(tagRECT *)&stack0xffffffa4,DVar4);
    uVar6 = (**(code **)(*(int *)param_2 + 0x2c))(0x11);
    CDC::SetBkMode(param_2,1);
    GetTextMetricsA(*(HDC *)(param_2 + 8),(LPTEXTMETRICA)(auStack_4c + 0xc));
    CDC::SetTextAlign(param_2,0);
    (**(code **)(*(int *)param_2 + 0x68))
              (unaff_ESI + 2,((iVar2 - auStack_4c._12_4_) + iVar1) / 2,4,&stack0xffffffa0,
               *(int *)(param_1 + 0x244),*(undefined4 *)(*(int *)(param_1 + 0x244) + -8),0);
    (**(code **)(*(int *)param_2 + 0x30))(uVar6);
    CDC::SelectObject(param_2,pCVar3);
  }
  return;
}


// ---- FUN_100044c0 @ 100044c0

void __thiscall FUN_100044c0(void *this,CPropExchange *param_1)

{
  (*(code *)**(undefined4 **)param_1)((int)this + 0x48,CONCAT22(DAT_1000bd00,DAT_1000bd02),1);
  COleControl::DoPropExchange(this,param_1);
  PX_Float(param_1,s_SmallChange_1000d824,(float *)((int)this + 0x22c),1.0);
  PX_Float(param_1,s_LargeChange_1000d818,(float *)((int)this + 0x228),1.0);
  PX_Bool(param_1,s_OmitText_1000d830,(int *)((int)this + 0x260),0);
  return;
}


// ---- FUN_10004550 @ 10004550

void FUN_10004550(void)

{
  CDialog local_6c [96];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10009fe8;
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


// ---- FUN_100045b0 @ 100045b0

void __thiscall FUN_100045b0(void *this,tagCREATESTRUCTA *param_1)

{
  int iVar1;
  
  iVar1 = COleControl::AmbientUserMode(this);
  if (iVar1 == 0) {
    COleControl::GetAmbientProperty(this,-0x2be,8,(void *)((int)this + 0x244));
  }
  else {
    CString::operator=((CString *)((int)this + 0x244),&DAT_1000f1dc);
  }
  *(char **)(param_1 + 0x28) = s_STATIC_1000ec8c;
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 0x100;
  CWnd::PreCreateWindow(this,param_1);
  return;
}


// ---- FUN_10004610 @ 10004610

void __fastcall FUN_10004610(COleControl *param_1)

{
  BOOL BVar1;
  
  BVar1 = IsWindow(*(HWND *)(param_1 + 500));
  if (BVar1 != 0) {
    CWnd::EnableWindow((CWnd *)(param_1 + 0x1d4),*(int *)(param_1 + 0x248));
    COleControl::InvalidateControl(param_1,(tagRECT *)0x0,1);
  }
  return;
}


// ---- FUN_10004650 @ 10004650

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_10004650(void *this,uint param_1,int param_2)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  float10 fVar7;
  
  if (*(int *)((int)this + 0x1cc) == 0) {
    return 0;
  }
  uVar5 = *(uint *)((int)this + 0x23c);
  if (((uVar5 != 0) && (uVar5 == param_1)) && (param_2 == 0)) {
    if ((*(float *)((int)this + 0x234) == _DAT_1000bb20) ||
       (fVar7 = FUN_10008df0(*(void **)((int)this + 0x1c8),uVar5), (float10)_DAT_1000bb1c <= fVar7))
    {
      *(undefined4 *)((int)this + 0x238) = 0x3f800000;
    }
    else {
      fVar7 = (float10)_CIpow();
      *(float *)((int)this + 0x238) = (float)fVar7;
    }
    fVar3 = *(float *)((int)this + 0x230) * *(float *)((int)this + 0x238);
    *(float *)((int)this + 0x220) = fVar3 * *(float *)((int)this + 0x22c);
    *(float *)((int)this + 0x224) = fVar3 * *(float *)((int)this + 0x228);
    FUN_10004bb0((int)this);
  }
  uVar5 = *(uint *)((int)this + 0x240);
  if (param_1 != uVar5) {
    if (*(int *)((int)this + 0x1d0) == 0) {
      return 0;
    }
    if (param_1 != uVar5 - 1) {
      return 0;
    }
  }
  switch(param_2) {
  case 0:
  case 6:
    FUN_100048e0(this);
    return 0;
  case 1:
  case 2:
    FUN_10004a80((int)this);
    return 0;
  case 3:
  case 4:
    FUN_10004af0(this);
    return 0;
  default:
    return 0;
  case 10:
    break;
  }
  pfVar1 = (float *)((int)this + 0x234);
  pfVar2 = (float *)((int)this + 0x230);
  if (*(int *)((int)this + 0x1d0) == 0) {
    iVar4 = FUN_10009490(*(void **)((int)this + 0x1c8),uVar5,pfVar2,pfVar1);
  }
  else {
    iVar4 = FUN_10009490(*(void **)((int)this + 0x1c8),uVar5 - 1,pfVar2,pfVar1);
  }
  if (iVar4 == 0) {
    *pfVar2 = 1.0;
    *pfVar1 = 0.0;
  }
  if (*pfVar1 != _DAT_1000bb20) {
    if (*(int *)((int)this + 0x23c) == 0) {
      uVar5 = FUN_100091b0(*(void **)((int)this + 0x1c8),s_AP_PIXEL_SIZE_1000ec94);
      *(uint *)((int)this + 0x23c) = uVar5;
      if (this == (void *)0x0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined4 *)((int)this + 0x20);
      }
      FUN_10009130(*(void **)((int)this + 0x1c8),uVar5,1,uVar6);
    }
    fVar7 = FUN_10008df0(*(void **)((int)this + 0x1c8),*(undefined4 *)((int)this + 0x23c));
    if (fVar7 < (float10)_DAT_1000bb1c) {
      fVar7 = (float10)_CIpow();
      *(float *)((int)this + 0x238) = (float)fVar7;
      goto LAB_1000484e;
    }
  }
  *(undefined4 *)((int)this + 0x238) = 0x3f800000;
LAB_1000484e:
  fVar3 = *pfVar2 * *(float *)((int)this + 0x238);
  *(float *)((int)this + 0x220) = fVar3 * *(float *)((int)this + 0x22c);
  *(float *)((int)this + 0x224) = fVar3 * *(float *)((int)this + 0x228);
  FUN_10004bb0((int)this);
  return 0;
}


// ---- FUN_100048b0 @ 100048b0

undefined4 __fastcall FUN_100048b0(COleControl *param_1)

{
  if (*(int *)(param_1 + 0x1cc) != 0) {
    FUN_100048e0(param_1);
  }
  return 0;
}


// ---- FUN_100048d0 @ 100048d0

undefined4 FUN_100048d0(void)

{
  return 0;
}


// ---- FUN_100048e0 @ 100048e0

void __fastcall FUN_100048e0(COleControl *param_1)

{
  int iVar1;
  uchar *local_24;
  float local_20;
  tagRECT local_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1000a008;
  local_c = ExceptionList;
  if (((*(int *)(param_1 + 0x1cc) != 0) && (0 < *(int *)(param_1 + 0x240))) &&
     (ExceptionList = &local_c,
     iVar1 = FUN_10008f10(*(void **)(param_1 + 0x1c8),*(int *)(param_1 + 0x240),&local_20),
     iVar1 == 1)) {
    if (*(float *)(param_1 + 0x214) != local_20) {
      *(float *)(param_1 + 0x214) = local_20;
      iVar1 = ftol();
      SetScrollPos(*(HWND *)(param_1 + 500),2,iVar1,1);
    }
    if (*(int *)(param_1 + 0x260) == 0) {
      CString::CString((CString *)&local_24,&DAT_1000f1dc);
      local_4 = 0;
      iVar1 = FUN_10008d80(*(void **)(param_1 + 0x1c8),*(undefined4 *)(param_1 + 0x240),
                           (CString *)&local_24);
      if (iVar1 != 1) {
        local_4 = 0xffffffff;
        CString::~CString((CString *)&local_24);
        ExceptionList = local_c;
        return;
      }
      iVar1 = _mbscmp(*(uchar **)(param_1 + 0x244),local_24);
      if (iVar1 != 0) {
        CString::operator=((CString *)(param_1 + 0x244),(CString *)&local_24);
        (**(code **)(*(int *)param_1 + 0xc0))(&local_1c);
        FUN_10004b30(&local_1c.left);
        COleControl::InvalidateControl(param_1,&local_1c,1);
      }
      local_4 = 0xffffffff;
      CString::~CString((CString *)&local_24);
    }
  }
  ExceptionList = local_c;
  return;
}


// ---- FUN_10004a80 @ 10004a80

void __fastcall FUN_10004a80(int param_1)

{
  int iVar1;
  float local_8;
  float local_4;
  
  iVar1 = FUN_10008f80(*(void **)(param_1 + 0x1c8),*(undefined4 *)(param_1 + 0x240),&local_4,
                       &local_8);
  if (iVar1 == 1) {
    if (*(float *)(param_1 + 0x21c) != local_8) {
      *(float *)(param_1 + 0x21c) = local_8;
    }
    if (*(float *)(param_1 + 0x218) != local_4) {
      *(float *)(param_1 + 0x218) = local_4;
    }
    FUN_10004bb0(param_1);
  }
  return;
}


// ---- FUN_10004af0 @ 10004af0

void __fastcall FUN_10004af0(int *param_1)

{
  LRESULT LVar1;
  
  LVar1 = SendMessageA((HWND)param_1[0x70],DAT_1000f00c,param_1[0x71],param_1[0x90]);
  if (-1 < LVar1) {
    param_1[0x92] = LVar1;
    (**(code **)(*param_1 + 0x110))();
  }
  return;
}


// ---- FUN_10004b30 @ 10004b30

void FUN_10004b30(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[1] + 2;
  *param_1 = *param_1 + 2;
  param_1[2] = param_1[2] + -2;
  param_1[1] = iVar1;
  param_1[3] = (param_1[3] - iVar1) / 2 + iVar1;
  return;
}


// ---- FUN_10004b70 @ 10004b70

void FUN_10004b70(int *param_1)

{
  int iVar1;
  
  *param_1 = *param_1 + 2;
  iVar1 = param_1[3];
  param_1[3] = iVar1 + -2;
  param_1[1] = (iVar1 - param_1[1]) / 2 + 1 + param_1[1];
  param_1[2] = param_1[2] + -2;
  return;
}


// ---- FUN_10004bb0 @ 10004bb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10004bb0(int param_1)

{
  float fVar1;
  int nPos;
  BOOL bRedraw;
  float local_4;
  
  if (*(float *)(param_1 + 0x21c) == *(float *)(param_1 + 0x218)) {
    local_4 = 1.0;
  }
  else {
    local_4 = *(float *)(param_1 + 0x21c) - *(float *)(param_1 + 0x218);
  }
  fVar1 = (*(float *)(param_1 + 0x220) * _DAT_1000bb24) / local_4;
  *(float *)(param_1 + 0x24c) = fVar1;
  if (fVar1 == _DAT_1000bb20) {
    AfxMessageBox(s_Warning__Parameter_range_too_hig_1000eca4,0,0);
    *(undefined4 *)(param_1 + 0x24c) = 0x3f800000;
  }
  local_4 = (*(float *)(param_1 + 0x224) * _DAT_1000bb24) / local_4;
  *(float *)(param_1 + 0x250) = local_4;
  if (local_4 == _DAT_1000bb20) {
    AfxMessageBox(s_Warning__Parameter_range_too_hig_1000eca4,0,0);
    *(undefined4 *)(param_1 + 0x250) = 0x3f800000;
  }
  bRedraw = 1;
  nPos = ftol();
  SetScrollPos(*(HWND *)(param_1 + 500),2,nPos,bRedraw);
  return;
}


// ---- FUN_10004d40 @ 10004d40

void __fastcall FUN_10004d40(COleControl *param_1)

{
  COleControl::OnDestroy(param_1);
  (**(code **)(*(int *)(param_1 + 0x1d4) + 0x60))();
  return;
}


// ---- FUN_10005140 @ 10005140

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_10005140(COleControl *param_1,uint param_2,HWND param_3,HWND param_4)

{
  COleControl *pCVar1;
  COleControl *pCVar2;
  BOOL BVar3;
  LRESULT LVar4;
  void *this;
  undefined4 *this_00;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  float10 fVar8;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &UNK_1000a02a;
  pvStack_c = ExceptionList;
  if (param_2 >> 0x10 != 300) {
    return 0;
  }
  ExceptionList = &pvStack_c;
  BVar3 = IsWindow(param_3);
  if (BVar3 == 0) {
    ExceptionList = pvStack_c;
    return 0;
  }
  BVar3 = IsWindow(param_4);
  if (BVar3 == 0) {
    ExceptionList = pvStack_c;
    return 0;
  }
  if (*(int *)(param_1 + 0x1cc) == 0) {
    *(HWND *)(param_1 + 0x1c0) = param_3;
    *(HWND *)(param_1 + 0x1c4) = param_4;
    LVar4 = SendMessageA(param_3,_DAT_1000f0c4,0,0);
    if (LVar4 != 0) {
      this = operator_new(0x20);
      uStack_4 = 0;
      if (this == (void *)0x0) {
        this_00 = (undefined4 *)0x0;
      }
      else {
        this_00 = FUN_10008d00(this,*(undefined4 *)(param_1 + 0x1c0),
                               *(undefined4 *)(param_1 + 0x1c4));
      }
      uStack_4 = 0xffffffff;
      *(undefined4 **)(param_1 + 0x1c8) = this_00;
      if (param_1 == (COleControl *)0x0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(undefined4 *)(param_1 + 0x20);
      }
      iVar5 = FUN_10009130(this_00,1,1,uVar7);
      if (0 < iVar5) {
        *(undefined4 *)(param_1 + 0x1cc) = 1;
      }
    }
    if (*(int *)(param_1 + 0x1cc) == 0) goto LAB_1000543b;
  }
  uVar6 = *(uint *)(param_1 + 0x240);
  if (uVar6 != param_2) {
    if (uVar6 != 0) {
      if (param_1 == (COleControl *)0x0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(undefined4 *)(param_1 + 0x20);
      }
      FUN_10009130(*(void **)(param_1 + 0x1c8),uVar6,0,uVar7);
      if (*(int *)(param_1 + 0x23c) != 0) {
        if (param_1 == (COleControl *)0x0) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(undefined4 *)(param_1 + 0x20);
        }
        FUN_10009130(*(void **)(param_1 + 0x1c8),*(int *)(param_1 + 0x23c),0,uVar7);
        *(undefined4 *)(param_1 + 0x23c) = 0;
      }
      if (*(int *)(param_1 + 0x1d0) != 0) {
        if (param_1 == (COleControl *)0x0) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(undefined4 *)(param_1 + 0x20);
        }
        FUN_10009130(*(void **)(param_1 + 0x1c8),*(int *)(param_1 + 0x240) + -1,0,uVar7);
      }
    }
    if (param_1 == (COleControl *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined4 *)(param_1 + 0x20);
    }
    FUN_10009130(*(void **)(param_1 + 0x1c8),param_2,1,uVar7);
    uVar7 = func_0x10009190(param_2);
    *(undefined4 *)(param_1 + 0x264) = uVar7;
    LVar4 = SendMessageA(*(HWND *)(param_1 + 0x1c0),_DAT_1000f008,*(WPARAM *)(param_1 + 0x1c4),
                         param_2);
    if (LVar4 != 0) {
      if (param_1 == (COleControl *)0x0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(undefined4 *)(param_1 + 0x20);
      }
      FUN_10009130(*(void **)(param_1 + 0x1c8),param_2 - 1,1,uVar7);
    }
    *(LRESULT *)(param_1 + 0x1d0) = LVar4;
    pCVar1 = param_1 + 0x230;
    pCVar2 = param_1 + 0x234;
    *(uint *)(param_1 + 0x240) = param_2;
    if (LVar4 == 0) {
      iVar5 = FUN_10009490(*(void **)(param_1 + 0x1c8),param_2,(undefined4 *)pCVar1,
                           (undefined4 *)pCVar2);
    }
    else {
      iVar5 = FUN_10009490(*(void **)(param_1 + 0x1c8),param_2 - 1,(undefined4 *)pCVar1,
                           (undefined4 *)pCVar2);
    }
    if (iVar5 == 0) {
      *(float *)pCVar1 = 1.0;
      *(float *)pCVar2 = 0.0;
    }
    if (*(float *)pCVar2 == _DAT_1000bb20) {
LAB_100053fa:
      *(undefined4 *)(param_1 + 0x238) = 0x3f800000;
    }
    else {
      uVar6 = FUN_100091b0(*(void **)(param_1 + 0x1c8),s_AP_PIXEL_SIZE_1000ec94);
      *(uint *)(param_1 + 0x23c) = uVar6;
      if (param_1 == (COleControl *)0x0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(undefined4 *)(param_1 + 0x20);
      }
      FUN_10009130(*(void **)(param_1 + 0x1c8),uVar6,1,uVar7);
      fVar8 = FUN_10008df0(*(void **)(param_1 + 0x1c8),*(undefined4 *)(param_1 + 0x23c));
      if ((float10)_DAT_1000bb1c <= fVar8) goto LAB_100053fa;
      fVar8 = (float10)_CIpow();
      *(float *)(param_1 + 0x238) = (float)fVar8;
    }
    *(float *)(param_1 + 0x220) =
         *(float *)(param_1 + 0x238) * *(float *)pCVar1 * *(float *)(param_1 + 0x22c);
    *(float *)(param_1 + 0x224) =
         *(float *)(param_1 + 0x238) * *(float *)pCVar1 * *(float *)(param_1 + 0x228);
  }
  FUN_10004a80((int)param_1);
  FUN_100048e0(param_1);
  FUN_10004af0((int *)param_1);
LAB_1000543b:
  ExceptionList = pvStack_c;
  return *(undefined4 *)(param_1 + 0x1cc);
}


// ---- FUN_10005790 @ 10005790

void __thiscall FUN_10005790(void *this,UINT_PTR param_1)

{
  KillTimer(*(HWND *)((int)this + 0x20),param_1);
  if (param_1 == 1) {
    if (*(int *)((int)this + 0x254) != 0) {
      *(undefined4 *)((int)this + 0x254) = 0;
    }
  }
  else if (param_1 == 2) {
    if (*(int *)((int)this + 600) != 0) {
      *(undefined4 *)((int)this + 600) = 0;
      CWnd::Default(this);
      return;
    }
  }
  else if ((param_1 == 3) && (*(int *)((int)this + 0x25c) != 0)) {
    *(undefined4 *)((int)this + 0x25c) = 0;
    CWnd::Default(this);
    return;
  }
  CWnd::Default(this);
  return;
}


// ---- FUN_10005820 @ 10005820

float10 __fastcall FUN_10005820(int param_1)

{
  return (float10)*(float *)(param_1 + 0x22c);
}


// ---- FUN_10005830 @ 10005830

void __thiscall FUN_10005830(void *this,float param_1)

{
  if (*(float *)((int)this + 0x22c) != param_1) {
    *(float *)((int)this + 0x22c) = param_1;
    *(float *)((int)this + 0x220) =
         *(float *)((int)this + 0x238) * *(float *)((int)this + 0x230) * param_1;
    COleControl::SetModifiedFlag(this,1);
    if (*(int *)((int)this + 0x1cc) != 0) {
      FUN_10004bb0((int)this);
    }
  }
  return;
}


// ---- FUN_10005880 @ 10005880

float10 __fastcall FUN_10005880(int param_1)

{
  return (float10)*(float *)(param_1 + 0x228);
}


// ---- FUN_10005890 @ 10005890

void __thiscall FUN_10005890(void *this,float param_1)

{
  if (*(float *)((int)this + 0x228) != param_1) {
    *(float *)((int)this + 0x228) = param_1;
    *(float *)((int)this + 0x224) =
         *(float *)((int)this + 0x238) * *(float *)((int)this + 0x230) * param_1;
    COleControl::SetModifiedFlag(this,1);
    if (*(int *)((int)this + 0x1cc) != 0) {
      FUN_10004bb0((int)this);
    }
  }
  return;
}


// ---- FUN_100058e0 @ 100058e0

void __fastcall FUN_100058e0(COleControl *param_1)

{
  int unaff_ESI;
  int local_10;
  int iStack_c;
  int iStack_8;
  
  (**(code **)(*(int *)param_1 + 0xc0))(&local_10);
  if (*(int *)(param_1 + 0x260) == 0) {
    FUN_10004b70((int *)&stack0xffffffec);
  }
  CWnd::MoveWindow((CWnd *)(param_1 + 0x1d4),unaff_ESI,local_10,iStack_c - unaff_ESI,
                   iStack_8 - local_10,1);
  COleControl::InvalidateControl(param_1,(tagRECT *)0x0,1);
  COleControl::SetModifiedFlag(param_1,1);
  return;
}


// ---- FUN_10005960 @ 10005960

void FUN_10005960(void)

{
  return;
}


// ---- FUN_10005970 @ 10005970

void __fastcall FUN_10005970(int param_1)

{
  EnableWindow(*(HWND *)(param_1 + 0x20),0);
  return;
}


// ---- FUN_10005980 @ 10005980

void __fastcall FUN_10005980(int param_1)

{
  EnableWindow(*(HWND *)(param_1 + 0x20),1);
  return;
}


// ---- FUN_10005990 @ 10005990

CScrollBar * __thiscall FUN_10005990(void *this,byte param_1)

{
  CScrollBar::~CScrollBar(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_100059c0 @ 100059c0

COlePropertyPage * FUN_100059c0(void)

{
  COlePropertyPage *pCVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1000a04a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pCVar1 = operator_new(0xd8);
  local_4 = 0;
  if (pCVar1 != (COlePropertyPage *)0x0) {
    pCVar1 = FUN_10005b80(pCVar1);
    ExceptionList = local_c;
    return pCVar1;
  }
  ExceptionList = local_c;
  return (COlePropertyPage *)0x0;
}


// ---- FUN_10005a30 @ 10005a30

undefined ** FUN_10005a30(void)

{
  return &PTR_s_CLEOAnalgPropPage_1000bb28;
}


// ---- FUN_10005a50 @ 10005a50

undefined ** FUN_10005a50(void)

{
  return &PTR_LAB_1000bb40;
}


// ---- FUN_10005a70 @ 10005a70

void FUN_10005a70(void)

{
  FUN_10005a90(&DAT_1000f1e8,(_GUID *)&DAT_1000bb80,
               (CRuntimeClass *)&PTR_s_CLEOAnalgPropPage_1000bb28,0,"LEOANALG.LEOAnalgPropPage.1");
  return;
}


// ---- FUN_10005a90 @ 10005a90

COleObjectFactory * __thiscall
FUN_10005a90(void *this,_GUID *param_1,CRuntimeClass *param_2,int param_3,char *param_4)

{
  COleObjectFactory::COleObjectFactory(this,param_1,param_2,param_3,param_4);
  *(undefined ***)this = &PTR_LAB_1000bb90;
  return this;
}


// ---- FUN_10005ac0 @ 10005ac0

COleObjectFactory * __thiscall FUN_10005ac0(void *this,byte param_1)

{
  COleObjectFactory::~COleObjectFactory(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_10005ae0 @ 10005ae0

void FUN_10005ae0(void)

{
  FUN_10009cac((_onexit_t)&LAB_10005af0);
  return;
}


// ---- FUN_10005b10 @ 10005b10

undefined4 FUN_10005b10(undefined4 *param_1)

{
  *param_1 = DAT_1000bb80;
  param_1[1] = DAT_1000bb84;
  param_1[2] = DAT_1000bb88;
  param_1[3] = DAT_1000bb8c;
  return 0;
}


// ---- FUN_10005b80 @ 10005b80

COlePropertyPage * __fastcall FUN_10005b80(COlePropertyPage *param_1)

{
  COlePropertyPage::COlePropertyPage(param_1,100,100);
  *(undefined ***)param_1 = &PTR_FUN_1000bc04;
  return param_1;
}


// ---- FUN_10005ba0 @ 10005ba0

COlePropertyPage * __thiscall FUN_10005ba0(void *this,byte param_1)

{
  COlePropertyPage::~COlePropertyPage(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- ~COlePropertyPage @ 10005bc0

void __thiscall COlePropertyPage::~COlePropertyPage(COlePropertyPage *this)

{
                    /* WARNING: Could not recover jumptable at 0x1000998e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~COlePropertyPage(this);
  return;
}


// ---- FUN_10005bd0 @ 10005bd0

void FUN_10005bd0(CDataExchange *param_1)

{
  DDP_PostProcessing(param_1);
  return;
}


// ---- FUN_10005bf0 @ 10005bf0

void FUN_10005bf0(void)

{
  FUN_10005c30((CWinApp *)&DAT_1000f238);
  return;
}


// ---- FUN_10005c00 @ 10005c00

void FUN_10005c00(void)

{
  FUN_10009cac((_onexit_t)&LAB_10005c10);
  return;
}


// ---- ~CWinApp @ 10005c20

void __thiscall CWinApp::~CWinApp(CWinApp *this)

{
                    /* WARNING: Could not recover jumptable at 0x1000999a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CWinApp(this);
  return;
}


// ---- FUN_10005c30 @ 10005c30

CWinApp * __fastcall FUN_10005c30(CWinApp *param_1)

{
  CWinApp::CWinApp(param_1,(char *)0x0);
  *(undefined ***)param_1 = &PTR_LAB_1000bd04;
  return param_1;
}


// ---- FUN_10005c50 @ 10005c50

CWinApp * __thiscall FUN_10005c50(void *this,byte param_1)

{
  CWinApp::~CWinApp(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- DllRegisterServer @ 10005c90

undefined4 DllRegisterServer(void)

{
  AFX_MODULE_STATE *pAVar1;
  int iVar2;
  undefined4 local_8;
  int local_4;
  
                    /* 0x5c90  3  DllRegisterServer */
  pAVar1 = (AFX_MODULE_STATE *)FUN_10009aef();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)&local_8,pAVar1);
  pAVar1 = AfxGetModuleState();
  iVar2 = AfxOleRegisterTypeLib
                    (*(HINSTANCE__ **)(pAVar1 + 8),(_GUID *)&DAT_1000bcf0,(char *)0x0,(char *)0x0);
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


// ---- DllUnregisterServer @ 10005d10

undefined4 DllUnregisterServer(void)

{
  AFX_MODULE_STATE *pAVar1;
  int iVar2;
  undefined4 local_8;
  int local_4;
  
                    /* 0x5d10  4  DllUnregisterServer */
  pAVar1 = (AFX_MODULE_STATE *)FUN_10009aef();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)&local_8,pAVar1);
  iVar2 = AfxOleUnregisterTypeLib((_GUID *)&DAT_1000bcf0,0,0,0);
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


// ---- FUN_10008bd0 @ 10008bd0

undefined4 * FUN_10008bd0(void)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1000a06a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x20);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = FUN_10008c50(puVar1);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


// ---- FUN_10008c40 @ 10008c40

undefined ** FUN_10008c40(void)

{
  return &PTR_s_CServerComms_1000bda8;
}


// ---- FUN_10008c50 @ 10008c50

undefined4 * __fastcall FUN_10008c50(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1000a088;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_1000bdc0;
  local_4 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0x809;
  param_1[5] = 0;
  param_1[6] = 0;
  FUN_10009250((int)param_1);
  ExceptionList = local_c;
  return param_1;
}


// ---- FUN_10008cb0 @ 10008cb0

void __fastcall FUN_10008cb0(undefined4 *param_1)

{
  *param_1 = &PTR_GetRuntimeClass_1000bdd4;
  return;
}


// ---- FUN_10008cc0 @ 10008cc0

undefined4 * __thiscall FUN_10008cc0(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_GetRuntimeClass_1000bdd4;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}


// ---- FUN_10008ce0 @ 10008ce0

undefined4 * __thiscall FUN_10008ce0(void *this,byte param_1)

{
  FUN_10008d70(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_10008d00 @ 10008d00

undefined4 * __thiscall FUN_10008d00(void *this,undefined4 param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1000a0a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 4) = param_1;
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_1000bdc0;
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0x809;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  FUN_10009250((int)this);
  ExceptionList = local_c;
  return this;
}


// ---- FUN_10008d70 @ 10008d70

void __fastcall FUN_10008d70(undefined4 *param_1)

{
  *param_1 = &PTR_GetRuntimeClass_1000bdd4;
  return;
}


// ---- FUN_10008d80 @ 10008d80

undefined4 __thiscall FUN_10008d80(void *this,undefined4 param_1,CString *param_2)

{
  int iVar1;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 *local_168;
  undefined4 local_164;
  char local_160 [352];
  
  local_164 = param_1;
  local_168 = &local_164;
  local_170 = DAT_1000f5a0;
  local_16c = 0x164;
  iVar1 = FUN_100092a0(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_170);
  *(int *)((int)this + 0xc) = iVar1;
  if (iVar1 == 1) {
    CString::operator=(param_2,local_160);
  }
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_10008df0 @ 10008df0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_10008df0(void *param_1,undefined4 param_2)

{
  int iVar1;
  CString local_14 [4];
  float local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1000a0c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CString::CString(local_14);
  local_4 = 0;
  iVar1 = FUN_10008e90(param_1,param_2,&local_10,local_14);
  if (iVar1 == 1) {
    local_4 = 0xffffffff;
    CString::~CString(local_14);
    ExceptionList = local_c;
    return (float10)local_10;
  }
  local_4 = 0xffffffff;
  CString::~CString(local_14);
  ExceptionList = local_c;
  return (float10)_DAT_1000bb20;
}


// ---- FUN_10008e90 @ 10008e90

undefined4 __thiscall
FUN_10008e90(void *this,undefined4 param_1,undefined4 *param_2,CString *param_3)

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
  local_174 = DAT_1000f594;
  local_170 = 0x168;
  iVar1 = FUN_100092a0(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_174);
  *(int *)((int)this + 0xc) = iVar1;
  if (iVar1 == 1) {
    *param_2 = local_164;
    CString::operator=(param_3,local_160);
  }
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_10008f10 @ 10008f10

undefined4 __thiscall FUN_10008f10(void *this,undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1000a0e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = this;
  CString::CString((CString *)&local_10);
  local_4 = 0;
  CString::Empty((CString *)&local_10);
  uVar1 = FUN_10008e90(this,param_1,param_2,(CString *)&local_10);
  local_4 = 0xffffffff;
  CString::~CString((CString *)&local_10);
  ExceptionList = local_c;
  return uVar1;
}


// ---- FUN_10008f80 @ 10008f80

undefined4 __thiscall
FUN_10008f80(void *this,undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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
  local_18 = DAT_1000f560;
  local_14 = 0xc;
  iVar1 = FUN_100092a0(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_18);
  *(int *)((int)this + 0xc) = iVar1;
  if (iVar1 == 1) {
    *param_2 = local_8;
    *param_3 = local_4;
  }
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_10008ff0 @ 10008ff0

LRESULT __thiscall FUN_10008ff0(void *this,undefined4 param_1,undefined4 param_2)

{
  LRESULT LVar1;
  char *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1000a108;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = this;
  CString::CString((CString *)&local_10);
  local_4 = 0;
  CString::Empty((CString *)&local_10);
  LVar1 = FUN_10009060(this,param_1,param_2,local_10);
  local_4 = 0xffffffff;
  CString::~CString((CString *)&local_10);
  ExceptionList = local_c;
  return LVar1;
}


// ---- FUN_10009060 @ 10009060

LRESULT __thiscall FUN_10009060(void *this,undefined4 param_1,undefined4 param_2,char *param_3)

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
  puStack_8 = &LAB_1000a12b;
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
    FUN_10009220(local_16c,param_3);
  }
  local_178 = &local_174;
  local_180 = DAT_1000f53c;
  local_17c = 0x168;
  LVar1 = SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_180);
  *(LRESULT *)((int)this + 0xc) = LVar1;
  local_4 = 0xffffffff;
  CString::~CString((CString *)&local_184);
  ExceptionList = local_c;
  return LVar1;
}


// ---- FUN_10009130 @ 10009130

void __thiscall FUN_10009130(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
  local_c = DAT_1000f530;
  local_8 = 0xc;
  LVar1 = SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_c);
  *(LRESULT *)((int)this + 0xc) = LVar1;
  return;
}


// ---- FUN_100091b0 @ 100091b0

uint __thiscall FUN_100091b0(void *this,char *param_1)

{
  int iVar1;
  undefined4 local_170;
  undefined4 local_16c;
  char *local_168;
  char local_164 [352];
  uint local_4;
  
  FUN_10009220(local_164,param_1);
  local_168 = local_164;
  local_170 = DAT_1000f4e4;
  local_16c = 0x164;
  iVar1 = FUN_100092a0(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_170);
  *(int *)((int)this + 0xc) = iVar1;
  return ~-(uint)(iVar1 != 1) & local_4;
}


// ---- FUN_10009220 @ 10009220

void FUN_10009220(char *param_1,char *param_2)

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


// ---- FUN_10009250 @ 10009250

void __fastcall FUN_10009250(int param_1)

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


// ---- FUN_100092a0 @ 100092a0

void __thiscall
FUN_100092a0(void *this,HWND param_1,UINT param_2,WPARAM param_3,undefined4 *param_4)

{
  if (*(int *)((int)this + 0x1c) != 0) {
    FUN_100092e0(this,param_1,param_4);
    return;
  }
  SendMessageA(param_1,param_2,param_3,(LPARAM)param_4);
  return;
}


// ---- FUN_100092e0 @ 100092e0

LRESULT __thiscall FUN_100092e0(void *this,HWND param_1,undefined4 *param_2)

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
  sprintf(local_100,s_MMF_LEO_SC__lx__lx__lx_1000ecec,DVar3,uVar9,iVar2);
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
  DAT_1000f2fc = SendMessageA(param_1,0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_10c);
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
  return DAT_1000f2fc;
}


// ---- FUN_10009410 @ 10009410

void __thiscall
FUN_10009410(void *this,undefined4 param_1,undefined4 param_2,uint *param_3,undefined4 *param_4,
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
  
  local_20 = DAT_1000f300;
  local_18 = &local_14;
  local_14 = param_1;
  local_c = (uint)(ushort)*param_3;
  local_10 = param_2;
  local_8 = *param_4;
  local_4 = *param_5;
  local_1c = 0x14;
  FUN_100092a0(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_20);
  *param_3 = local_c;
  *param_4 = local_8;
  *param_5 = local_4;
  return;
}


// ---- FUN_10009490 @ 10009490

void __thiscall FUN_10009490(void *this,uint param_1,undefined4 *param_2,undefined4 *param_3)

{
  FUN_10009410(this,0,1,&param_1,param_2,param_3);
  return;
}


// ---- SetEnabled @ 100094c0

void __thiscall COleControl::SetEnabled(COleControl *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x100094c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetEnabled(this,param_1);
  return;
}


// ---- GetEnabled @ 100094c6

int __thiscall COleControl::GetEnabled(COleControl *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100094c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetEnabled(this);
  return iVar1;
}


// ---- operator_new @ 100094cc

void * __cdecl operator_new(uint param_1)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100094cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = operator_new(param_1);
  return pvVar1;
}


// ---- operator_delete @ 100094d2

void __cdecl operator_delete(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x100094d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  operator_delete(param_1);
  return;
}


// ---- GetConnectionHook @ 100094f6

IConnectionPoint * __thiscall CCmdTarget::GetConnectionHook(CCmdTarget *this,_GUID *param_1)

{
  IConnectionPoint *pIVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100094f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = GetConnectionHook(this,param_1);
  return pIVar1;
}


// ---- GetExtraConnectionPoints @ 100094fc

int __thiscall CCmdTarget::GetExtraConnectionPoints(CCmdTarget *this,CPtrArray *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100094fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetExtraConnectionPoints(this,param_1);
  return iVar1;
}


// ---- GetInterfaceHook @ 10009502

IUnknown * __thiscall CCmdTarget::GetInterfaceHook(CCmdTarget *this,void *param_1)

{
  IUnknown *pIVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009502. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = GetInterfaceHook(this,param_1);
  return pIVar1;
}


// ---- OnCreateAggregates @ 10009508

int __thiscall CCmdTarget::OnCreateAggregates(CCmdTarget *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCreateAggregates(this);
  return iVar1;
}


// ---- GetEventSinkMap @ 1000950e

AFX_EVENTSINKMAP * __thiscall CCmdTarget::GetEventSinkMap(CCmdTarget *this)

{
  AFX_EVENTSINKMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000950e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetEventSinkMap(this);
  return pAVar1;
}


// ---- GetConnectionMap @ 1000951a

AFX_CONNECTIONMAP * __thiscall CCmdTarget::GetConnectionMap(CCmdTarget *this)

{
  AFX_CONNECTIONMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000951a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetConnectionMap(this);
  return pAVar1;
}


// ---- GetDispatchMap @ 10009520

AFX_DISPMAP * __thiscall CCmdTarget::GetDispatchMap(CCmdTarget *this)

{
  AFX_DISPMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetDispatchMap(this);
  return pAVar1;
}


// ---- GetCommandMap @ 10009526

AFX_OLECMDMAP * __thiscall CCmdTarget::GetCommandMap(CCmdTarget *this)

{
  AFX_OLECMDMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009526. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetCommandMap(this);
  return pAVar1;
}


// ---- GetTypeLib @ 10009532

long __thiscall CCmdTarget::GetTypeLib(CCmdTarget *this,ulong param_1,ITypeLib **param_2)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009532. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = GetTypeLib(this,param_1,param_2);
  return lVar1;
}


// ---- GetTypeLibCache @ 10009538

CTypeLibCache * __thiscall CCmdTarget::GetTypeLibCache(CCmdTarget *this)

{
  CTypeLibCache *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009538. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetTypeLibCache(this);
  return pCVar1;
}


// ---- GetTypeInfoCount @ 1000953e

uint __thiscall CCmdTarget::GetTypeInfoCount(CCmdTarget *this)

{
  uint uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000953e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = GetTypeInfoCount(this);
  return uVar1;
}


// ---- GetDispatchIID @ 10009544

int __thiscall CCmdTarget::GetDispatchIID(CCmdTarget *this,_GUID *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetDispatchIID(this,param_1);
  return iVar1;
}


// ---- IsInvokeAllowed @ 1000954a

int __thiscall CCmdTarget::IsInvokeAllowed(CCmdTarget *this,long param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000954a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = IsInvokeAllowed(this,param_1);
  return iVar1;
}


// ---- OnCmdMsg @ 10009556

int __thiscall
CCmdTarget::OnCmdMsg
          (CCmdTarget *this,uint param_1,int param_2,void *param_3,AFX_CMDHANDLERINFO *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009556. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCmdMsg(this,param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- COleObjectFactory @ 10009562

void __thiscall
COleObjectFactory::COleObjectFactory
          (COleObjectFactory *this,_GUID *param_1,CRuntimeClass *param_2,int param_3,char *param_4)

{
                    /* WARNING: Could not recover jumptable at 0x10009562. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  COleObjectFactory(this,param_1,param_2,param_3,param_4);
  return;
}


// ---- ~COleObjectFactory @ 10009568

void __thiscall COleObjectFactory::~COleObjectFactory(COleObjectFactory *this)

{
                    /* WARNING: Could not recover jumptable at 0x10009568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~COleObjectFactory(this);
  return;
}


// ---- AfxGetTypeLibCache @ 1000956e

CTypeLibCache * AfxGetTypeLibCache(_GUID *param_1)

{
  CTypeLibCache *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000956e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = AfxGetTypeLibCache(param_1);
  return pCVar1;
}


// ---- AFX_MAINTAIN_STATE2 @ 10009574

void __thiscall
AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2(AFX_MAINTAIN_STATE2 *this,AFX_MODULE_STATE *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10009574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AFX_MAINTAIN_STATE2(this,param_1);
  return;
}


// ---- AfxOleUnregisterClass @ 1000957a

int AfxOleUnregisterClass(_GUID *param_1,char *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000957a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AfxOleUnregisterClass(param_1,param_2);
  return iVar1;
}


// ---- AfxOleRegisterControlClass @ 10009580

int AfxOleRegisterControlClass
              (HINSTANCE__ *param_1,_GUID *param_2,char *param_3,uint param_4,uint param_5,
              int param_6,ulong param_7,_GUID *param_8,ushort param_9,ushort param_10)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AfxOleRegisterControlClass
                    (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                     param_10);
  return iVar1;
}


// ---- AfxGetModuleState @ 10009586

AFX_MODULE_STATE * AfxGetModuleState(void)

{
  AFX_MODULE_STATE *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009586. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = AfxGetModuleState();
  return pAVar1;
}


// ---- DefWindowProcA @ 1000958c

long __thiscall CWnd::DefWindowProcA(CWnd *this,uint param_1,uint param_2,long param_3)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000958c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = DefWindowProcA(this,param_1,param_2,param_3);
  return lVar1;
}


// ---- WindowProc @ 10009592

long __thiscall CWnd::WindowProc(CWnd *this,uint param_1,uint param_2,long param_3)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009592. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = WindowProc(this,param_1,param_2,param_3);
  return lVar1;
}


// ---- PreCreateWindow @ 10009598

int __thiscall CWnd::PreCreateWindow(CWnd *this,tagCREATESTRUCTA *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = PreCreateWindow(this,param_1);
  return iVar1;
}


// ---- GetInterfaceMap @ 1000959e

AFX_INTERFACEMAP * __thiscall CCmdTarget::GetInterfaceMap(CCmdTarget *this)

{
  AFX_INTERFACEMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000959e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetInterfaceMap(this);
  return pAVar1;
}


// ---- GetMessageMap @ 100095a4

AFX_MSGMAP * __thiscall CWnd::GetMessageMap(CWnd *this)

{
  AFX_MSGMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100095a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetMessageMap(this);
  return pAVar1;
}


// ---- OnFinalRelease @ 100095aa

void __thiscall CWnd::OnFinalRelease(CWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x100095aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnFinalRelease(this);
  return;
}


// ---- GetRuntimeClass @ 100095b0

CRuntimeClass * __thiscall CScrollBar::GetRuntimeClass(CScrollBar *this)

{
  CRuntimeClass *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100095b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetRuntimeClass(this);
  return pCVar1;
}


// ---- DestroySharedMenu @ 100095b6

void __thiscall COleControl::DestroySharedMenu(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x100095b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DestroySharedMenu(this);
  return;
}


// ---- BuildSharedMenu @ 100095bc

int __thiscall COleControl::BuildSharedMenu(COleControl *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100095bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = BuildSharedMenu(this);
  return iVar1;
}


// ---- RemoveFrameLevelUI @ 100095c2

void __thiscall COleControl::RemoveFrameLevelUI(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x100095c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RemoveFrameLevelUI(this);
  return;
}


// ---- AddFrameLevelUI @ 100095c8

void __thiscall COleControl::AddFrameLevelUI(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x100095c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AddFrameLevelUI(this);
  return;
}


// ---- OnActivateInPlace @ 100095ce

long __thiscall COleControl::OnActivateInPlace(COleControl *this,int param_1,tagMSG *param_2)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100095ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = OnActivateInPlace(this,param_1,param_2);
  return lVar1;
}


// ---- OnHide @ 100095d4

long __thiscall COleControl::OnHide(COleControl *this)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100095d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = OnHide(this);
  return lVar1;
}


// ---- OnFrameClose @ 100095da

void __thiscall COleControl::OnFrameClose(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x100095da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnFrameClose(this);
  return;
}


// ---- ResizeFrameWindow @ 100095e0

void __thiscall COleControl::ResizeFrameWindow(COleControl *this,int param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x100095e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ResizeFrameWindow(this,param_1,param_2);
  return;
}


// ---- CreateFrameWindow @ 100095e6

CControlFrameWnd * __thiscall COleControl::CreateFrameWindow(COleControl *this)

{
  CControlFrameWnd *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100095e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = CreateFrameWindow(this);
  return pCVar1;
}


// ---- OnOpen @ 100095ec

long __thiscall COleControl::OnOpen(COleControl *this,int param_1,tagMSG *param_2)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100095ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = OnOpen(this,param_1,param_2);
  return lVar1;
}


// ---- OnReflectorDestroyed @ 100095f2

void __thiscall COleControl::OnReflectorDestroyed(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x100095f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnReflectorDestroyed(this);
  return;
}


// ---- SetInitialDataFormats @ 100095f8

void __thiscall COleControl::SetInitialDataFormats(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x100095f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetInitialDataFormats(this);
  return;
}


// ---- CreateControlWindow @ 100095fe

int __thiscall
COleControl::CreateControlWindow(COleControl *this,HWND__ *param_1,CRect *param_2,tagRECT *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100095fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CreateControlWindow(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- ClientToParent @ 10009604

void __thiscall COleControl::ClientToParent(COleControl *this,tagRECT *param_1,tagPOINT *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10009604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ClientToParent(this,param_1,param_2);
  return;
}


// ---- ParentToClient @ 1000960a

uint __thiscall
COleControl::ParentToClient(COleControl *this,tagRECT *param_1,tagPOINT *param_2,int param_3)

{
  uint uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000960a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = ParentToClient(this,param_1,param_2,param_3);
  return uVar1;
}


// ---- GetClientOffset @ 10009610

void __thiscall COleControl::GetClientOffset(COleControl *this,long *param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10009610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetClientOffset(this,param_1,param_2);
  return;
}


// ---- GetWindowlessDropTarget @ 10009616

IDropTarget * __thiscall COleControl::GetWindowlessDropTarget(COleControl *this)

{
  IDropTarget *pIVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009616. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = GetWindowlessDropTarget(this);
  return pIVar1;
}


// ---- OnWindowlessMessage @ 1000961c

int __thiscall
COleControl::OnWindowlessMessage
          (COleControl *this,uint param_1,uint param_2,long param_3,long *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000961c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnWindowlessMessage(this,param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- OnInactiveMouseMove @ 10009622

void __thiscall
COleControl::OnInactiveMouseMove
          (COleControl *this,tagRECT *param_1,long param_2,long param_3,ulong param_4)

{
                    /* WARNING: Could not recover jumptable at 0x10009622. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnInactiveMouseMove(this,param_1,param_2,param_3,param_4);
  return;
}


// ---- OnInactiveSetCursor @ 10009628

int __thiscall
COleControl::OnInactiveSetCursor
          (COleControl *this,tagRECT *param_1,long param_2,long param_3,ulong param_4,int param_5)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009628. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnInactiveSetCursor(this,param_1,param_2,param_3,param_4,param_5);
  return iVar1;
}


// ---- GetActivationPolicy @ 1000962e

ulong __thiscall COleControl::GetActivationPolicy(COleControl *this)

{
  ulong uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000962e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = GetActivationPolicy(this);
  return uVar1;
}


// ---- GetControlFlags @ 10009634

ulong __thiscall COleControl::GetControlFlags(COleControl *this)

{
  ulong uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = GetControlFlags(this);
  return uVar1;
}


// ---- ReparentControlWindow @ 1000963a

void __thiscall
COleControl::ReparentControlWindow(COleControl *this,HWND__ *param_1,HWND__ *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x1000963a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReparentControlWindow(this,param_1,param_2);
  return;
}


// ---- OnGetPredefinedValue @ 10009640

int __thiscall
COleControl::OnGetPredefinedValue(COleControl *this,long param_1,ulong param_2,tagVARIANT *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnGetPredefinedValue(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- OnGetPredefinedStrings @ 10009646

int __thiscall
COleControl::OnGetPredefinedStrings
          (COleControl *this,long param_1,CStringArray *param_2,CDWordArray *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009646. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnGetPredefinedStrings(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- OnMapPropertyToPage @ 1000964c

int __thiscall
COleControl::OnMapPropertyToPage(COleControl *this,long param_1,_GUID *param_2,int *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000964c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnMapPropertyToPage(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- OnGetDisplayString @ 10009652

int __thiscall COleControl::OnGetDisplayString(COleControl *this,long param_1,CString *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009652. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnGetDisplayString(this,param_1,param_2);
  return iVar1;
}


// ---- OnProperties @ 10009658

int __thiscall
COleControl::OnProperties(COleControl *this,tagMSG *param_1,HWND__ *param_2,tagRECT *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnProperties(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- OnEdit @ 1000965e

int __thiscall
COleControl::OnEdit(COleControl *this,tagMSG *param_1,HWND__ *param_2,tagRECT *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000965e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnEdit(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- OnDoVerb @ 10009664

int __thiscall
COleControl::OnDoVerb
          (COleControl *this,long param_1,tagMSG *param_2,HWND__ *param_3,tagRECT *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009664. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnDoVerb(this,param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- OnEnumVerbs @ 1000966a

int __thiscall COleControl::OnEnumVerbs(COleControl *this,IEnumOLEVERB **param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000966a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnEnumVerbs(this,param_1);
  return iVar1;
}


// ---- OnSetData @ 10009670

int __thiscall
COleControl::OnSetData(COleControl *this,tagFORMATETC *param_1,tagSTGMEDIUM *param_2,int param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnSetData(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- OnRenderData @ 10009676

int __thiscall
COleControl::OnRenderData(COleControl *this,tagFORMATETC *param_1,tagSTGMEDIUM *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009676. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnRenderData(this,param_1,param_2);
  return iVar1;
}


// ---- OnRenderFileData @ 1000967c

int __thiscall COleControl::OnRenderFileData(COleControl *this,tagFORMATETC *param_1,CFile *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000967c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnRenderFileData(this,param_1,param_2);
  return iVar1;
}


// ---- OnRenderGlobalData @ 10009682

int __thiscall
COleControl::OnRenderGlobalData(COleControl *this,tagFORMATETC *param_1,void **param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009682. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnRenderGlobalData(this,param_1,param_2);
  return iVar1;
}


// ---- OnGetNaturalExtent @ 10009688

int __thiscall
COleControl::OnGetNaturalExtent
          (COleControl *this,ulong param_1,long param_2,tagDVTARGETDEVICE *param_3,HDC__ *param_4,
          tagExtentInfo *param_5,tagSIZE *param_6)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnGetNaturalExtent(this,param_1,param_2,param_3,param_4,param_5,param_6);
  return iVar1;
}


// ---- OnQueryHitRect @ 1000968e

int __thiscall
COleControl::OnQueryHitRect
          (COleControl *this,ulong param_1,tagRECT *param_2,tagRECT *param_3,long param_4,
          ulong *param_5)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000968e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnQueryHitRect(this,param_1,param_2,param_3,param_4,param_5);
  return iVar1;
}


// ---- OnQueryHitPoint @ 10009694

int __thiscall
COleControl::OnQueryHitPoint
          (COleControl *this,ulong param_1,tagRECT *param_2,tagPOINT param_3,long param_4,
          ulong *param_5)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnQueryHitPoint(this,param_1,param_2,param_3,param_4,param_5);
  return iVar1;
}


// ---- OnGetViewStatus @ 1000969a

ulong __thiscall COleControl::OnGetViewStatus(COleControl *this)

{
  ulong uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000969a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = OnGetViewStatus(this);
  return uVar1;
}


// ---- OnGetViewRect @ 100096a0

int __thiscall COleControl::OnGetViewRect(COleControl *this,ulong param_1,_RECTL *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100096a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnGetViewRect(this,param_1,param_2);
  return iVar1;
}


// ---- OnGetViewExtent @ 100096a6

int __thiscall
COleControl::OnGetViewExtent
          (COleControl *this,ulong param_1,long param_2,tagDVTARGETDEVICE *param_3,tagSIZE *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100096a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnGetViewExtent(this,param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- OnGetColorSet @ 100096ac

int __thiscall
COleControl::OnGetColorSet
          (COleControl *this,tagDVTARGETDEVICE *param_1,HDC__ *param_2,tagLOGPALETTE **param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100096ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnGetColorSet(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- OnHideToolBars @ 100096b2

void __thiscall COleControl::OnHideToolBars(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x100096b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnHideToolBars(this);
  return;
}


// ---- OnShowToolBars @ 100096b8

void __thiscall COleControl::OnShowToolBars(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x100096b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnShowToolBars(this);
  return;
}


// ---- OnGetInPlaceMenu @ 100096be

HMENU__ * __thiscall COleControl::OnGetInPlaceMenu(COleControl *this)

{
  HMENU__ *pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100096be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = OnGetInPlaceMenu(this);
  return pHVar1;
}


// ---- OnFreezeEvents @ 100096c4

void __thiscall COleControl::OnFreezeEvents(COleControl *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x100096c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnFreezeEvents(this,param_1);
  return;
}


// ---- OnAmbientPropertyChange @ 100096ca

void __thiscall COleControl::OnAmbientPropertyChange(COleControl *this,long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x100096ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnAmbientPropertyChange(this,param_1);
  return;
}


// ---- OnMnemonic @ 100096d0

void __thiscall COleControl::OnMnemonic(COleControl *this,tagMSG *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x100096d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnMnemonic(this,param_1);
  return;
}


// ---- OnGetControlInfo @ 100096d6

void __thiscall COleControl::OnGetControlInfo(COleControl *this,tagCONTROLINFO *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x100096d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnGetControlInfo(this,param_1);
  return;
}


// ---- OnForeColorChanged @ 100096dc

void __thiscall COleControl::OnForeColorChanged(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x100096dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnForeColorChanged(this);
  return;
}


// ---- OnFontChanged @ 100096e2

void __thiscall COleControl::OnFontChanged(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x100096e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnFontChanged(this);
  return;
}


// ---- OnTextChanged @ 100096e8

void __thiscall COleControl::OnTextChanged(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x100096e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnTextChanged(this);
  return;
}


// ---- OnBorderStyleChanged @ 100096ee

void __thiscall COleControl::OnBorderStyleChanged(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x100096ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnBorderStyleChanged(this);
  return;
}


// ---- OnBackColorChanged @ 100096f4

void __thiscall COleControl::OnBackColorChanged(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x100096f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnBackColorChanged(this);
  return;
}


// ---- OnAppearanceChanged @ 100096fa

void __thiscall COleControl::OnAppearanceChanged(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x100096fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnAppearanceChanged(this);
  return;
}


// ---- OnKeyPressEvent @ 10009700

void __thiscall COleControl::OnKeyPressEvent(COleControl *this,ushort param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10009700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnKeyPressEvent(this,param_1);
  return;
}


// ---- OnKeyUpEvent @ 10009706

void __thiscall COleControl::OnKeyUpEvent(COleControl *this,ushort param_1,ushort param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10009706. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnKeyUpEvent(this,param_1,param_2);
  return;
}


// ---- OnKeyDownEvent @ 1000970c

void __thiscall COleControl::OnKeyDownEvent(COleControl *this,ushort param_1,ushort param_2)

{
                    /* WARNING: Could not recover jumptable at 0x1000970c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnKeyDownEvent(this,param_1,param_2);
  return;
}


// ---- OnClick @ 10009712

void __thiscall COleControl::OnClick(COleControl *this,ushort param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10009712. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnClick(this,param_1);
  return;
}


// ---- OnEventAdvise @ 10009718

void __thiscall COleControl::OnEventAdvise(COleControl *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10009718. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnEventAdvise(this,param_1);
  return;
}


// ---- OnSetObjectRects @ 1000971e

int __thiscall COleControl::OnSetObjectRects(COleControl *this,tagRECT *param_1,tagRECT *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000971e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnSetObjectRects(this,param_1,param_2);
  return iVar1;
}


// ---- OnClose @ 10009724

void __thiscall COleControl::OnClose(COleControl *this,ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10009724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnClose(this,param_1);
  return;
}


// ---- OnSetExtent @ 1000972a

int __thiscall COleControl::OnSetExtent(COleControl *this,tagSIZE *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000972a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnSetExtent(this,param_1);
  return iVar1;
}


// ---- OnSetClientSite @ 10009730

void __thiscall COleControl::OnSetClientSite(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x10009730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnSetClientSite(this);
  return;
}


// ---- DisplayError @ 10009736

void __thiscall
COleControl::DisplayError
          (COleControl *this,long param_1,char *param_2,char *param_3,char *param_4,uint param_5)

{
                    /* WARNING: Could not recover jumptable at 0x10009736. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DisplayError(this,param_1,param_2,param_3,param_4,param_5);
  return;
}


// ---- GetMessageString @ 1000973c

void __thiscall COleControl::GetMessageString(COleControl *this,uint param_1,CString *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x1000973c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetMessageString(this,param_1,param_2);
  return;
}


// ---- OnDrawMetafile @ 10009742

void __thiscall COleControl::OnDrawMetafile(COleControl *this,CDC *param_1,CRect *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10009742. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnDrawMetafile(this,param_1,param_2);
  return;
}


// ---- GetClientRect @ 10009748

void __thiscall COleControl::GetClientRect(COleControl *this,tagRECT *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10009748. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetClientRect(this,param_1);
  return;
}


// ---- SetOccDialogInfo @ 1000974e

int __thiscall CWnd::SetOccDialogInfo(CWnd *this,_AFX_OCC_DIALOG_INFO *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000974e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetOccDialogInfo(this,param_1);
  return iVar1;
}


// ---- IsFrameWnd @ 10009754

int __thiscall CWnd::IsFrameWnd(CWnd *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = IsFrameWnd(this);
  return iVar1;
}


// ---- CheckAutoCenter @ 1000975a

int __thiscall CWnd::CheckAutoCenter(CWnd *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000975a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CheckAutoCenter(this);
  return iVar1;
}


// ---- OnChildNotify @ 10009760

int __thiscall CWnd::OnChildNotify(CWnd *this,uint param_1,uint param_2,long param_3,long *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnChildNotify(this,param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- PostNcDestroy @ 10009766

void __thiscall CWnd::PostNcDestroy(CWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x10009766. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PostNcDestroy(this);
  return;
}


// ---- DefWindowProcA @ 1000976c

long __thiscall
COleControl::DefWindowProcA(COleControl *this,uint param_1,uint param_2,long param_3)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000976c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = DefWindowProcA(this,param_1,param_2,param_3);
  return lVar1;
}


// ---- OnWndMsg @ 10009772

int __thiscall CWnd::OnWndMsg(CWnd *this,uint param_1,uint param_2,long param_3,long *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009772. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnWndMsg(this,param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- WindowProc @ 10009778

long __thiscall COleControl::WindowProc(COleControl *this,uint param_1,uint param_2,long param_3)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = WindowProc(this,param_1,param_2,param_3);
  return lVar1;
}


// ---- OnAmbientProperty @ 1000977e

int __thiscall
CWnd::OnAmbientProperty(CWnd *this,COleControlSite *param_1,long param_2,tagVARIANT *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000977e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnAmbientProperty(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- PreTranslateMessage @ 10009784

int __thiscall CWnd::PreTranslateMessage(CWnd *this,tagMSG *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009784. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = PreTranslateMessage(this,param_1);
  return iVar1;
}


// ---- GetSuperWndProcAddr @ 1000978a

_func_long_HWND___ptr_uint_uint_long ** __thiscall CWnd::GetSuperWndProcAddr(CWnd *this)

{
  _func_long_HWND___ptr_uint_uint_long **pp_Var1;
  
                    /* WARNING: Could not recover jumptable at 0x1000978a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pp_Var1 = GetSuperWndProcAddr(this);
  return pp_Var1;
}


// ---- OnNotify @ 10009790

int __thiscall CWnd::OnNotify(CWnd *this,uint param_1,long param_2,long *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnNotify(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- OnCommand @ 10009796

int __thiscall CWnd::OnCommand(CWnd *this,uint param_1,long param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009796. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCommand(this,param_1,param_2);
  return iVar1;
}


// ---- EndModalLoop @ 1000979c

void __thiscall CWnd::EndModalLoop(CWnd *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x1000979c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EndModalLoop(this,param_1);
  return;
}


// ---- ContinueModal @ 100097a2

int __thiscall CWnd::ContinueModal(CWnd *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100097a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ContinueModal(this);
  return iVar1;
}


// ---- WinHelpA @ 100097a8

void __thiscall CWnd::WinHelpA(CWnd *this,ulong param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x100097a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WinHelpA(this,param_1,param_2);
  return;
}


// ---- GetScrollBarCtrl @ 100097ae

CScrollBar * __thiscall CWnd::GetScrollBarCtrl(CWnd *this,int param_1)

{
  CScrollBar *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100097ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetScrollBarCtrl(this,param_1);
  return pCVar1;
}


// ---- OnToolHitTest @ 100097b4

int __thiscall CWnd::OnToolHitTest(void)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100097b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnToolHitTest();
  return iVar1;
}


// ---- CalcWindowRect @ 100097ba

void __thiscall CWnd::CalcWindowRect(CWnd *this,tagRECT *param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x100097ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CalcWindowRect(this,param_1,param_2);
  return;
}


// ---- DestroyWindow @ 100097c0

int __thiscall CWnd::DestroyWindow(CWnd *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100097c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = DestroyWindow(this);
  return iVar1;
}


// ---- Create @ 100097c6

int __thiscall
CWnd::Create(CWnd *this,char *param_1,char *param_2,ulong param_3,tagRECT *param_4,CWnd *param_5,
            uint param_6,CCreateContext *param_7)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100097c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Create(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return iVar1;
}


// ---- PreSubclassWindow @ 100097cc

void __thiscall CWnd::PreSubclassWindow(CWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x100097cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PreSubclassWindow(this);
  return;
}


// ---- GetConnectionHook @ 100097d2

IConnectionPoint * __thiscall COleControl::GetConnectionHook(COleControl *this,_GUID *param_1)

{
  IConnectionPoint *pIVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100097d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = GetConnectionHook(this,param_1);
  return pIVar1;
}


// ---- GetExtraConnectionPoints @ 100097d8

int __thiscall COleControl::GetExtraConnectionPoints(COleControl *this,CPtrArray *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100097d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetExtraConnectionPoints(this,param_1);
  return iVar1;
}


// ---- GetInterfaceHook @ 100097de

IUnknown * __thiscall COleControl::GetInterfaceHook(COleControl *this,void *param_1)

{
  IUnknown *pIVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100097de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = GetInterfaceHook(this,param_1);
  return pIVar1;
}


// ---- OnCreateAggregates @ 100097e4

int __thiscall COleControl::OnCreateAggregates(COleControl *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100097e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCreateAggregates(this);
  return iVar1;
}


// ---- GetInterfaceMap @ 100097ea

AFX_INTERFACEMAP * __thiscall COleControl::GetInterfaceMap(COleControl *this)

{
  AFX_INTERFACEMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100097ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetInterfaceMap(this);
  return pAVar1;
}


// ---- GetConnectionMap @ 100097f0

AFX_CONNECTIONMAP * __thiscall COleControl::GetConnectionMap(COleControl *this)

{
  AFX_CONNECTIONMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100097f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetConnectionMap(this);
  return pAVar1;
}


// ---- GetDispatchIID @ 100097f6

int __thiscall COleControl::GetDispatchIID(COleControl *this,_GUID *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100097f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetDispatchIID(this,param_1);
  return iVar1;
}


// ---- IsInvokeAllowed @ 100097fc

int __thiscall COleControl::IsInvokeAllowed(COleControl *this,long param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100097fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = IsInvokeAllowed(this,param_1);
  return iVar1;
}


// ---- OnFinalRelease @ 10009802

void __thiscall COleControl::OnFinalRelease(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x10009802. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnFinalRelease(this);
  return;
}


// ---- Serialize @ 10009808

void __thiscall COleControl::Serialize(COleControl *this,CArchive *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10009808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Serialize(this,param_1);
  return;
}


// ---- ~CString @ 1000980e

void __thiscall CString::~CString(CString *this)

{
                    /* WARNING: Could not recover jumptable at 0x1000980e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CString(this);
  return;
}


// ---- ~CScrollBar @ 10009814

void __thiscall CScrollBar::~CScrollBar(CScrollBar *this)

{
                    /* WARNING: Could not recover jumptable at 0x10009814. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CScrollBar(this);
  return;
}


// ---- ~COleControl @ 1000981a

void __thiscall COleControl::~COleControl(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x1000981a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~COleControl(this);
  return;
}


// ---- SetControlSize @ 10009820

int __thiscall COleControl::SetControlSize(COleControl *this,int param_1,int param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009820. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetControlSize(this,param_1,param_2);
  return iVar1;
}


// ---- InitializeIIDs @ 10009826

void __thiscall COleControl::InitializeIIDs(COleControl *this,_GUID *param_1,_GUID *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10009826. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitializeIIDs(this,param_1,param_2);
  return;
}


// ---- CString @ 1000982c

void __thiscall CString::CString(CString *this)

{
                    /* WARNING: Could not recover jumptable at 0x1000982c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CString(this);
  return;
}


// ---- CWnd @ 10009832

void __thiscall CWnd::CWnd(CWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x10009832. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CWnd(this);
  return;
}


// ---- COleControl @ 10009838

void __thiscall COleControl::COleControl(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x10009838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  COleControl(this);
  return;
}


// ---- SelectObject @ 1000983e

CPen * __thiscall CDC::SelectObject(CDC *this,CPen *param_1)

{
  CPen *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000983e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = SelectObject(this,param_1);
  return pCVar1;
}


// ---- SetTextAlign @ 10009844

uint __thiscall CDC::SetTextAlign(CDC *this,uint param_1)

{
  uint uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = SetTextAlign(this,param_1);
  return uVar1;
}


// ---- SetBkMode @ 1000984a

int __thiscall CDC::SetBkMode(CDC *this,int param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000984a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetBkMode(this,param_1);
  return iVar1;
}


// ---- FillSolidRect @ 10009850

void __thiscall CDC::FillSolidRect(CDC *this,tagRECT *param_1,ulong param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10009850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FillSolidRect(this,param_1,param_2);
  return;
}


// ---- TranslateColor @ 10009856

ulong __thiscall COleControl::TranslateColor(COleControl *this,ulong param_1,HPALETTE__ *param_2)

{
  ulong uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009856. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = TranslateColor(this,param_1,param_2);
  return uVar1;
}


// ---- AmbientBackColor @ 1000985c

ulong __thiscall COleControl::AmbientBackColor(COleControl *this)

{
  ulong uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000985c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = AmbientBackColor(this);
  return uVar1;
}


// ---- DoSuperclassPaint @ 10009862

void __thiscall COleControl::DoSuperclassPaint(COleControl *this,CDC *param_1,CRect *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10009862. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DoSuperclassPaint(this,param_1,param_2);
  return;
}


// ---- PX_Bool @ 10009868

int __cdecl PX_Bool(CPropExchange *param_1,char *param_2,int *param_3,int param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = PX_Bool(param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- PX_Float @ 1000986e

int __cdecl PX_Float(CPropExchange *param_1,char *param_2,float *param_3,float param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000986e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = PX_Float(param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- DoPropExchange @ 10009874

void __thiscall COleControl::DoPropExchange(COleControl *this,CPropExchange *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10009874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DoPropExchange(this,param_1);
  return;
}


// ---- OnResetState @ 1000987a

void __thiscall COleControl::OnResetState(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x1000987a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnResetState(this);
  return;
}


// ---- ~CDialog @ 10009880

void __thiscall CDialog::~CDialog(CDialog *this)

{
                    /* WARNING: Could not recover jumptable at 0x10009880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CDialog(this);
  return;
}


// ---- DoModal @ 10009886

int __thiscall CDialog::DoModal(CDialog *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009886. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = DoModal(this);
  return iVar1;
}


// ---- CDialog @ 1000988c

void __thiscall CDialog::CDialog(CDialog *this,uint param_1,CWnd *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x1000988c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CDialog(this,param_1,param_2);
  return;
}


// ---- operator= @ 10009892

CString * __thiscall CString::operator=(CString *this,char *param_1)

{
  CString *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009892. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = operator=(this,param_1);
  return pCVar1;
}


// ---- GetAmbientProperty @ 10009898

int __thiscall
COleControl::GetAmbientProperty(COleControl *this,long param_1,ushort param_2,void *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetAmbientProperty(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- AmbientUserMode @ 1000989e

int __thiscall COleControl::AmbientUserMode(COleControl *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000989e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AmbientUserMode(this);
  return iVar1;
}


// ---- InvalidateControl @ 100098a4

void __thiscall COleControl::InvalidateControl(COleControl *this,tagRECT *param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x100098a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InvalidateControl(this,param_1,param_2);
  return;
}


// ---- EnableWindow @ 100098aa

int __thiscall CWnd::EnableWindow(CWnd *this,int param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100098aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = EnableWindow(this,param_1);
  return iVar1;
}


// ---- operator= @ 100098b0

CString * __thiscall CString::operator=(CString *this,CString *param_1)

{
  CString *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100098b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = operator=(this,param_1);
  return pCVar1;
}


// ---- CString @ 100098b6

void __thiscall CString::CString(CString *this,char *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x100098b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CString(this,param_1);
  return;
}


// ---- AfxMessageBox @ 100098bc

int AfxMessageBox(char *param_1,uint param_2,uint param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100098bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AfxMessageBox(param_1,param_2,param_3);
  return iVar1;
}


// ---- OnDestroy @ 100098ce

void __thiscall COleControl::OnDestroy(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x100098ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnDestroy(this);
  return;
}


// ---- MoveWindow @ 100098d4

void __thiscall
CWnd::MoveWindow(CWnd *this,int param_1,int param_2,int param_3,int param_4,int param_5)

{
                    /* WARNING: Could not recover jumptable at 0x100098d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MoveWindow(this,param_1,param_2,param_3,param_4,param_5);
  return;
}


// ---- OnHScroll @ 100098e0

void __thiscall CWnd::OnHScroll(CWnd *this,uint param_1,uint param_2,CScrollBar *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x100098e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnHScroll(this,param_1,param_2,param_3);
  return;
}


// ---- Default @ 10009910

long __thiscall CWnd::Default(CWnd *this)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = Default(this);
  return lVar1;
}


// ---- SetModifiedFlag @ 10009916

void __thiscall COleControl::SetModifiedFlag(COleControl *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10009916. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetModifiedFlag(this,param_1);
  return;
}


// ---- AfxOleRegisterPropertyPageClass @ 1000991c

int AfxOleRegisterPropertyPageClass(HINSTANCE__ *param_1,_GUID *param_2,uint param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000991c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AfxOleRegisterPropertyPageClass(param_1,param_2,param_3);
  return iVar1;
}


// ---- OnEditProperty @ 10009922

int __thiscall COlePropertyPage::OnEditProperty(COlePropertyPage *this,long param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009922. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnEditProperty(this,param_1);
  return iVar1;
}


// ---- OnHelp @ 10009928

int __thiscall COlePropertyPage::OnHelp(COlePropertyPage *this,char *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnHelp(this,param_1);
  return iVar1;
}


// ---- OnObjectsChanged @ 1000992e

void __thiscall COlePropertyPage::OnObjectsChanged(COlePropertyPage *this)

{
                    /* WARNING: Could not recover jumptable at 0x1000992e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnObjectsChanged(this);
  return;
}


// ---- OnSetPageSite @ 10009934

void __thiscall COlePropertyPage::OnSetPageSite(COlePropertyPage *this)

{
                    /* WARNING: Could not recover jumptable at 0x10009934. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnSetPageSite(this);
  return;
}


// ---- PreInitDialog @ 1000993a

void __thiscall CDialog::PreInitDialog(CDialog *this)

{
                    /* WARNING: Could not recover jumptable at 0x1000993a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PreInitDialog(this);
  return;
}


// ---- OnCancel @ 10009940

void __thiscall CDialog::OnCancel(CDialog *this)

{
                    /* WARNING: Could not recover jumptable at 0x10009940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnCancel(this);
  return;
}


// ---- OnOK @ 10009946

void __thiscall CDialog::OnOK(CDialog *this)

{
                    /* WARNING: Could not recover jumptable at 0x10009946. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnOK(this);
  return;
}


// ---- OnSetFont @ 1000994c

void __thiscall CDialog::OnSetFont(CDialog *this,CFont *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x1000994c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnSetFont(this,param_1);
  return;
}


// ---- OnInitDialog @ 10009952

int __thiscall COlePropertyPage::OnInitDialog(COlePropertyPage *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009952. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnInitDialog(this);
  return iVar1;
}


// ---- SetOccDialogInfo @ 10009958

int __thiscall CDialog::SetOccDialogInfo(CDialog *this,_AFX_OCC_DIALOG_INFO *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetOccDialogInfo(this,param_1);
  return iVar1;
}


// ---- CheckAutoCenter @ 1000995e

int __thiscall CDialog::CheckAutoCenter(CDialog *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000995e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CheckAutoCenter(this);
  return iVar1;
}


// ---- WindowProc @ 10009964

long __thiscall
COlePropertyPage::WindowProc(COlePropertyPage *this,uint param_1,uint param_2,long param_3)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = WindowProc(this,param_1,param_2,param_3);
  return lVar1;
}


// ---- PreTranslateMessage @ 1000996a

int __thiscall COlePropertyPage::PreTranslateMessage(COlePropertyPage *this,tagMSG *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000996a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = PreTranslateMessage(this,param_1);
  return iVar1;
}


// ---- OnCommand @ 10009970

int __thiscall COlePropertyPage::OnCommand(COlePropertyPage *this,uint param_1,long param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCommand(this,param_1,param_2);
  return iVar1;
}


// ---- GetInterfaceMap @ 10009976

AFX_INTERFACEMAP * __thiscall COlePropertyPage::GetInterfaceMap(COlePropertyPage *this)

{
  AFX_INTERFACEMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009976. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetInterfaceMap(this);
  return pAVar1;
}


// ---- OnFinalRelease @ 1000997c

void __thiscall COlePropertyPage::OnFinalRelease(COlePropertyPage *this)

{
                    /* WARNING: Could not recover jumptable at 0x1000997c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnFinalRelease(this);
  return;
}


// ---- OnCmdMsg @ 10009982

int __thiscall
CDialog::OnCmdMsg(CDialog *this,uint param_1,int param_2,void *param_3,AFX_CMDHANDLERINFO *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009982. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCmdMsg(this,param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- COlePropertyPage @ 10009988

void __thiscall COlePropertyPage::COlePropertyPage(COlePropertyPage *this,uint param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10009988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  COlePropertyPage(this,param_1,param_2);
  return;
}


// ---- ~COlePropertyPage @ 1000998e

void __thiscall COlePropertyPage::~COlePropertyPage(COlePropertyPage *this)

{
                    /* WARNING: Could not recover jumptable at 0x1000998e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~COlePropertyPage(this);
  return;
}


// ---- DDP_PostProcessing @ 10009994

void DDP_PostProcessing(CDataExchange *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10009994. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DDP_PostProcessing(param_1);
  return;
}


// ---- ~CWinApp @ 1000999a

void __thiscall CWinApp::~CWinApp(CWinApp *this)

{
                    /* WARNING: Could not recover jumptable at 0x1000999a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CWinApp(this);
  return;
}


// ---- CWinApp @ 10009a12

void __thiscall CWinApp::CWinApp(CWinApp *this,char *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10009a12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CWinApp(this,param_1);
  return;
}


// ---- UpdateRegistryAll @ 10009a24

int COleObjectFactory::UpdateRegistryAll(int param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009a24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = UpdateRegistryAll(param_1);
  return iVar1;
}


// ---- AfxOleRegisterTypeLib @ 10009a2a

int AfxOleRegisterTypeLib(HINSTANCE__ *param_1,_GUID *param_2,char *param_3,char *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009a2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AfxOleRegisterTypeLib(param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- AfxOleUnregisterTypeLib @ 10009a30

int AfxOleUnregisterTypeLib(_GUID *param_1,ushort param_2,ushort param_3,ulong param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AfxOleUnregisterTypeLib(param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- GetRuntimeClass @ 10009a36

CRuntimeClass * __thiscall CObject::GetRuntimeClass(CObject *this)

{
  CRuntimeClass *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009a36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetRuntimeClass(this);
  return pCVar1;
}


// ---- Empty @ 10009a3c

void __thiscall CString::Empty(CString *this)

{
                    /* WARNING: Could not recover jumptable at 0x10009a3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Empty(this);
  return;
}


// ---- FUN_10009a4c @ 10009a4c

undefined4 * FUN_10009a4c(void)

{
  AFX_MODULE_STATE::AFX_MODULE_STATE((AFX_MODULE_STATE *)&DAT_1000f6e0,1,FUN_10009aaa,0x600);
  DAT_1000f6e0 = &PTR_FUN_1000bdec;
  return &DAT_1000f6e0;
}


// ---- FUN_10009a74 @ 10009a74

AFX_MODULE_STATE * __thiscall FUN_10009a74(void *this,byte param_1)

{
  AFX_MODULE_STATE::~AFX_MODULE_STATE(this);
  if ((param_1 & 1) != 0) {
    CNoTrackObject::operator_delete(this);
  }
  return this;
}


// ---- ~AFX_MODULE_STATE @ 10009a8f

void __thiscall AFX_MODULE_STATE::~AFX_MODULE_STATE(AFX_MODULE_STATE *this)

{
                    /* WARNING: Could not recover jumptable at 0x10009e88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~AFX_MODULE_STATE(this);
  return;
}


// ---- FUN_10009a94 @ 10009a94

void FUN_10009a94(void)

{
  FUN_10009cac((_onexit_t)&LAB_10009aa0);
  return;
}


// ---- FUN_10009aaa @ 10009aaa

/* WARNING: Function: _EH_prolog replaced with injection: EH_prolog */

void FUN_10009aaa(HWND__ *param_1,uint param_2,uint param_3,long param_4)

{
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1000a140;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2
            ((AFX_MAINTAIN_STATE2 *)&local_18,(AFX_MODULE_STATE *)&DAT_1000f6e0);
  local_8 = 0;
  AfxWndProc(param_1,param_2,param_3,param_4);
  *(undefined4 *)(local_14 + 4) = local_18;
  ExceptionList = local_10;
  return;
}


// ---- FUN_10009aef @ 10009aef

undefined4 * FUN_10009aef(void)

{
  return &DAT_1000f6e0;
}


// ---- FUN_10009af5 @ 10009af5

int FUN_10009af5(HINSTANCE__ *param_1,int param_2)

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
      pAVar5 = AfxSetModuleState((AFX_MODULE_STATE *)&DAT_1000f6e0);
      p_Var3 = AfxGetThreadState();
      *(AFX_MODULE_STATE **)(p_Var3 + 8) = pAVar5;
      pAVar5 = AfxGetModuleState();
      if (*(int **)(pAVar5 + 4) != (int *)0x0) {
        (**(code **)(**(int **)(pAVar5 + 4) + 0x70))();
      }
      AfxLockTempMaps();
      AfxUnlockTempMaps(-1);
      AfxWinTerm();
      AfxTermExtensionModule((AFX_EXTENSION_MODULE *)&DAT_10010770,1);
    }
    else if (param_2 == 3) {
      AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2
                ((AFX_MAINTAIN_STATE2 *)&local_c,(AFX_MODULE_STATE *)&DAT_1000f6e0);
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
  iVar4 = AfxWinInit(param_1,(HINSTANCE__ *)0x0,&DAT_1000f1dc,0);
  if (iVar4 != 0) {
    pAVar5 = AfxGetModuleState();
    piVar2 = *(int **)(pAVar5 + 4);
    if ((piVar2 == (int *)0x0) || (iVar4 = (**(code **)(*piVar2 + 0x58))(), iVar4 != 0)) {
      *(undefined4 *)(p_Var3 + 8) = uVar1;
      AfxInitExtensionModule((AFX_EXTENSION_MODULE *)&DAT_10010770,param_1);
      this = operator_new(0x40);
      if (this != (CDynLinkLibrary *)0x0) {
        CDynLinkLibrary::CDynLinkLibrary(this,(AFX_EXTENSION_MODULE *)&DAT_10010770,0);
      }
      param_2 = 1;
      goto LAB_10009b81;
    }
    (**(code **)(*piVar2 + 0x70))();
  }
  AfxWinTerm();
LAB_10009b81:
  *(undefined4 *)(p_Var3 + 8) = uVar1;
  p_Var3 = AfxGetThreadState();
  AfxSetModuleState(*(AFX_MODULE_STATE **)(p_Var3 + 8));
  return param_2;
}


// ---- FUN_10009c1c @ 10009c1c

undefined4 FUN_10009c1c(undefined4 param_1,int param_2)

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
    pAVar2 = AfxSetModuleState((AFX_MODULE_STATE *)&DAT_1000f6e0);
    *(AFX_MODULE_STATE **)(p_Var1 + 8) = pAVar2;
  }
  else if (param_2 == 0) {
    p_Var1 = AfxGetThreadState();
    AfxSetModuleState(*(AFX_MODULE_STATE **)(p_Var1 + 8));
  }
  return 1;
}


// ---- FUN_10009c80 @ 10009c80

void __cdecl FUN_10009c80(_onexit_t param_1)

{
  if (DAT_10010798 == -1) {
    _onexit(param_1);
    return;
  }
  __dllonexit(param_1,&DAT_10010798,&DAT_10010794);
  return;
}


// ---- FUN_10009cac @ 10009cac

int __cdecl FUN_10009cac(_onexit_t param_1)

{
  int iVar1;
  
  iVar1 = FUN_10009c80(param_1);
  return (iVar1 != 0) - 1;
}


// ---- _CIpow @ 10009cbe

void _CIpow(void)

{
                    /* WARNING: Could not recover jumptable at 0x10009cbe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _CIpow();
  return;
}


// ---- ftol @ 10009cc4

void __cdecl ftol(void)

{
                    /* WARNING: Could not recover jumptable at 0x10009cc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ftol();
  return;
}


// ---- FUN_10009cff @ 10009cff

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10009cff(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *_Memory;
  undefined4 *puVar2;
  
  if (param_2 == 0) {
    if (0 < DAT_1001078c) {
      DAT_1001078c = DAT_1001078c + -1;
      goto LAB_10009d15;
    }
LAB_10009d3d:
    uVar1 = 0;
  }
  else {
LAB_10009d15:
    _DAT_10010790 = *(undefined4 *)_adjust_fdiv_exref;
    if (param_2 == 1) {
      DAT_10010798 = malloc(0x80);
      if (DAT_10010798 == (undefined4 *)0x0) goto LAB_10009d3d;
      *DAT_10010798 = 0;
      DAT_10010794 = DAT_10010798;
      initterm(&DAT_1000d000,&DAT_1000d7d0);
      DAT_1001078c = DAT_1001078c + 1;
    }
    else if ((param_2 == 0) &&
            (_Memory = DAT_10010798, puVar2 = DAT_10010794, DAT_10010798 != (undefined4 *)0x0)) {
      while (puVar2 = puVar2 + -1, _Memory <= puVar2) {
        if ((code *)*puVar2 != (code *)0x0) {
          (*(code *)*puVar2)();
          _Memory = DAT_10010798;
        }
      }
      free(_Memory);
      DAT_10010798 = (undefined4 *)0x0;
    }
    uVar1 = 1;
  }
  return uVar1;
}


// ---- entry @ 10009daa

int entry(HINSTANCE__ *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_2;
  iVar2 = DAT_1001078c;
  if (param_2 != 0) {
    if ((param_2 != 1) && (param_2 != 2)) goto LAB_10009df2;
    if ((PTR_FUN_1000ed04 != (undefined *)0x0) &&
       (iVar2 = (*(code *)PTR_FUN_1000ed04)(param_1,param_2,param_3), iVar2 == 0)) {
      return 0;
    }
    iVar2 = FUN_10009cff(param_1,param_2);
  }
  if (iVar2 == 0) {
    return 0;
  }
LAB_10009df2:
  iVar2 = FUN_10009af5(param_1,param_2);
  if (param_2 == 1) {
    if (iVar2 != 0) {
      return iVar2;
    }
    FUN_10009cff(param_1,0);
  }
  if ((param_2 != 0) && (param_2 != 3)) {
    return iVar2;
  }
  iVar3 = FUN_10009cff(param_1,param_2);
  param_2 = iVar2;
  if (iVar3 == 0) {
    param_2 = 0;
  }
  if (param_2 != 0) {
    if (PTR_FUN_1000ed04 != (undefined *)0x0) {
      iVar2 = (*(code *)PTR_FUN_1000ed04)(param_1,iVar1,param_3);
      return iVar2;
    }
    return param_2;
  }
  return 0;
}


// ---- FUN_10009e47 @ 10009e47

type_info * __thiscall FUN_10009e47(void *this,byte param_1)

{
  type_info::~type_info(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- _EH_prolog @ 10009e64

/* WARNING: This is an inlined function */
/* WARNING: Function: _EH_prolog replaced with injection: EH_prolog */

void _EH_prolog(void)

{
  undefined1 auStack_c [12];
  
  ExceptionList = auStack_c;
                    /* WARNING: Could not recover jumptable at 0x10009e64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  return;
}


// ---- __dllonexit @ 10009e6a

void __dllonexit(void)

{
                    /* WARNING: Could not recover jumptable at 0x10009e6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __dllonexit();
  return;
}


// ---- initterm @ 10009e70

void __cdecl initterm(void)

{
                    /* WARNING: Could not recover jumptable at 0x10009e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  initterm();
  return;
}


// ---- ~type_info @ 10009e76

void __thiscall type_info::~type_info(type_info *this)

{
                    /* WARNING: Could not recover jumptable at 0x10009e76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~type_info(this);
  return;
}


// ---- AFX_MODULE_STATE @ 10009e7c

void __thiscall
AFX_MODULE_STATE::AFX_MODULE_STATE
          (AFX_MODULE_STATE *this,int param_1,_func_long_HWND___ptr_uint_uint_long *param_2,
          ulong param_3)

{
                    /* WARNING: Could not recover jumptable at 0x10009e7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AFX_MODULE_STATE(this,param_1,param_2,param_3);
  return;
}


// ---- operator_delete @ 10009e82

void CNoTrackObject::operator_delete(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10009e82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  operator_delete(param_1);
  return;
}


// ---- ~AFX_MODULE_STATE @ 10009e88

void __thiscall AFX_MODULE_STATE::~AFX_MODULE_STATE(AFX_MODULE_STATE *this)

{
                    /* WARNING: Could not recover jumptable at 0x10009e88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~AFX_MODULE_STATE(this);
  return;
}


// ---- AfxWndProc @ 10009e8e

long AfxWndProc(HWND__ *param_1,uint param_2,uint param_3,long param_4)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009e8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = AfxWndProc(param_1,param_2,param_3,param_4);
  return lVar1;
}


// ---- AfxTermThread @ 10009e94

void AfxTermThread(HINSTANCE__ *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10009e94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AfxTermThread(param_1);
  return;
}


// ---- AfxTermExtensionModule @ 10009e9a

void AfxTermExtensionModule(AFX_EXTENSION_MODULE *param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10009e9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AfxTermExtensionModule(param_1,param_2);
  return;
}


// ---- AfxUnlockTempMaps @ 10009ea0

int AfxUnlockTempMaps(int param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009ea0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AfxUnlockTempMaps(param_1);
  return iVar1;
}


// ---- AfxLockTempMaps @ 10009ea6

void AfxLockTempMaps(void)

{
                    /* WARNING: Could not recover jumptable at 0x10009ea6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AfxLockTempMaps();
  return;
}


// ---- AfxSetModuleState @ 10009eac

AFX_MODULE_STATE * AfxSetModuleState(AFX_MODULE_STATE *param_1)

{
  AFX_MODULE_STATE *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009eac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = AfxSetModuleState(param_1);
  return pAVar1;
}


// ---- CDynLinkLibrary @ 10009eb2

void __thiscall
CDynLinkLibrary::CDynLinkLibrary(CDynLinkLibrary *this,AFX_EXTENSION_MODULE *param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10009eb2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CDynLinkLibrary(this,param_1,param_2);
  return;
}


// ---- AfxInitExtensionModule @ 10009eb8

int AfxInitExtensionModule(AFX_EXTENSION_MODULE *param_1,HINSTANCE__ *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009eb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AfxInitExtensionModule(param_1,param_2);
  return iVar1;
}


// ---- AfxWinTerm @ 10009ebe

void AfxWinTerm(void)

{
                    /* WARNING: Could not recover jumptable at 0x10009ebe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AfxWinTerm();
  return;
}


// ---- AfxWinInit @ 10009ec4

int AfxWinInit(HINSTANCE__ *param_1,HINSTANCE__ *param_2,char *param_3,int param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009ec4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AfxWinInit(param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- AfxGetThreadState @ 10009eca

_AFX_THREAD_STATE * AfxGetThreadState(void)

{
  _AFX_THREAD_STATE *p_Var1;
  
                    /* WARNING: Could not recover jumptable at 0x10009eca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  p_Var1 = AfxGetThreadState();
  return p_Var1;
}


// ---- AfxCoreInitModule @ 10009ed0

void AfxCoreInitModule(void)

{
                    /* WARNING: Could not recover jumptable at 0x10009ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AfxCoreInitModule();
  return;
}


// ---- AfxDllGetClassObject @ 10009ed6

long AfxDllGetClassObject(_GUID *param_1,_GUID *param_2,void **param_3)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009ed6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = AfxDllGetClassObject(param_1,param_2,param_3);
  return lVar1;
}


// ---- AfxDllCanUnloadNow @ 10009edc

long AfxDllCanUnloadNow(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009edc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = AfxDllCanUnloadNow();
  return lVar1;
}


// ---- DllGetClassObject @ 10009ee2

HRESULT DllGetClassObject(IID *rclsid,IID *riid,LPVOID *ppv)

{
  AFX_MODULE_STATE *pAVar1;
  long lVar2;
  undefined4 local_c;
  int local_8;
  
                    /* 0x9ee2  2  DllGetClassObject */
  pAVar1 = (AFX_MODULE_STATE *)FUN_10009aef();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)&local_c,pAVar1);
  lVar2 = AfxDllGetClassObject(rclsid,riid,ppv);
  *(undefined4 *)(local_8 + 4) = local_c;
  return lVar2;
}


// ---- DllCanUnloadNow @ 10009f10

HRESULT DllCanUnloadNow(void)

{
  AFX_MODULE_STATE *pAVar1;
  long lVar2;
  undefined4 local_c;
  int local_8;
  
                    /* 0x9f10  1  DllCanUnloadNow */
  pAVar1 = (AFX_MODULE_STATE *)FUN_10009aef();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)&local_c,pAVar1);
  lVar2 = AfxDllCanUnloadNow();
  *(undefined4 *)(local_8 + 4) = local_c;
  return lVar2;
}


// ---- Unwind@10009f40 @ 10009f40

void Unwind_10009f40(void)

{
  int unaff_EBP;
  
  FUN_10003eb0(*(void **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10009f60 @ 10009f60

void Unwind_10009f60(void)

{
  int unaff_EBP;
  
  FUN_100042c0((undefined4 *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@10009f80 @ 10009f80

void Unwind_10009f80(void)

{
  int unaff_EBP;
  
  COleControl::~COleControl(*(COleControl **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10009f88 @ 10009f88

void Unwind_10009f88(void)

{
  int unaff_EBP;
  
  CScrollBar::~CScrollBar((CScrollBar *)(*(int *)(unaff_EBP + -0x10) + 0x1d4));
  return;
}


// ---- Unwind@10009f96 @ 10009f96

void Unwind_10009f96(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x10) + 0x244));
  return;
}


// ---- Unwind@10009fb0 @ 10009fb0

void Unwind_10009fb0(void)

{
  int unaff_EBP;
  
  COleControl::~COleControl(*(COleControl **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10009fb8 @ 10009fb8

void Unwind_10009fb8(void)

{
  int unaff_EBP;
  
  CScrollBar::~CScrollBar((CScrollBar *)(*(int *)(unaff_EBP + -0x10) + 0x1d4));
  return;
}


// ---- Unwind@10009fc6 @ 10009fc6

void Unwind_10009fc6(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x10) + 0x244));
  return;
}


// ---- Unwind@10009fe0 @ 10009fe0

void Unwind_10009fe0(void)

{
  int unaff_EBP;
  
  CDialog::~CDialog((CDialog *)(unaff_EBP + -0x6c));
  return;
}


// ---- Unwind@1000a000 @ 1000a000

void Unwind_1000a000(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x24));
  return;
}


// ---- Unwind@1000a020 @ 1000a020

void Unwind_1000a020(void)

{
  int unaff_EBP;
  
  FUN_10003eb0(*(void **)(unaff_EBP + 8));
  return;
}


// ---- Unwind@1000a040 @ 1000a040

void Unwind_1000a040(void)

{
  int unaff_EBP;
  
  FUN_10003eb0(*(void **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@1000a060 @ 1000a060

void Unwind_1000a060(void)

{
  int unaff_EBP;
  
  FUN_10003eb0(*(void **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@1000a080 @ 1000a080

void Unwind_1000a080(void)

{
  int unaff_EBP;
  
  FUN_10008cb0(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@1000a0a0 @ 1000a0a0

void Unwind_1000a0a0(void)

{
  int unaff_EBP;
  
  FUN_10008cb0(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@1000a0c0 @ 1000a0c0

void Unwind_1000a0c0(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@1000a0e0 @ 1000a0e0

void Unwind_1000a0e0(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@1000a100 @ 1000a100

void Unwind_1000a100(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@1000a120 @ 1000a120

void Unwind_1000a120(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x184));
  return;
}


// ---- Unwind@1000a138 @ 1000a138

void Unwind_1000a138(void)

{
  int unaff_EBP;
  
  FUN_100042c0((undefined4 *)(unaff_EBP + -0x14));
  return;
}


