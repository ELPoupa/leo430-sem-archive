// Decompiled with Ghidra from leocombo.ocx
// Format: Portable Executable (PE), image base 10000000

// ---- FUN_10001010 @ 10001010

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001010(void)

{
  _DAT_1000e178 = RegisterWindowMessageA(s_LEO_D_SET_STATE_1000c828);
  return;
}


// ---- FUN_10003e70 @ 10003e70

CWnd * __fastcall FUN_10003e70(CWnd *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10009c43;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CWnd::CWnd(param_1);
  *(undefined ***)param_1 = &PTR_LAB_1000a7f8;
  local_4 = 0;
  CString::CString((CString *)(param_1 + 0x48));
  local_4 = CONCAT31(local_4._1_3_,1);
  *(undefined ***)param_1 = &PTR_LAB_1000a728;
  CString::operator=((CString *)(param_1 + 0x48),&DAT_1000e18c);
  ExceptionList = local_c;
  return param_1;
}


// ---- FUN_10003ee0 @ 10003ee0

void FUN_10003ee0(void)

{
  return;
}


// ---- FUN_10003ef0 @ 10003ef0

CComboBox * __thiscall FUN_10003ef0(void *this,byte param_1)

{
  FUN_10003f10(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_10003f10 @ 10003f10

void __fastcall FUN_10003f10(CComboBox *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10009c58;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  CString::~CString((CString *)(param_1 + 0x48));
  local_4 = 0xffffffff;
  CComboBox::~CComboBox(param_1);
  ExceptionList = local_c;
  return;
}


// ---- FUN_10003f60 @ 10003f60

void __thiscall FUN_10003f60(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x44) = param_1;
  return;
}


// ---- FUN_10003f70 @ 10003f70

void __thiscall FUN_10003f70(void *this,int param_1)

{
  int iVar1;
  CDC *this_00;
  undefined4 uVar2;
  DWORD color;
  HBRUSH pHVar3;
  COLORREF color_00;
  undefined4 uVar4;
  CComboBox *unaff_EBX;
  undefined **ppuStack_24;
  undefined1 auStack_20 [4];
  tagRECT local_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_10009c88;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  this_00 = CDC::FromHandle(*(HDC__ **)(param_1 + 0x18));
  CopyRect((LPRECT)(auStack_20 + 4),(RECT *)(param_1 + 0x1c));
  if ((*(byte *)(param_1 + 0x10) & 0x10) != 0) {
    DrawFocusRect(*(HDC *)(this_00 + 4),(RECT *)(auStack_20 + 4));
  }
  uVar2 = (**(code **)(*(int *)this_00 + 0x24))();
  auStack_20 = (undefined1  [4])0x0;
  ppuStack_24 = &PTR_LAB_1000a8dc;
  iStack_4 = 0;
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    color_00 = GetBkColor(*(HDC *)(this_00 + 8));
    pHVar3 = CreateSolidBrush(color_00);
    CGdiObject::Attach((CGdiObject *)&ppuStack_24,pHVar3);
    iVar1 = *(int *)this_00;
    GetSysColor(8);
    (**(code **)(iVar1 + 0x38))();
  }
  else {
    color = GetSysColor(0xd);
    pHVar3 = CreateSolidBrush(color);
    CGdiObject::Attach((CGdiObject *)&ppuStack_24,pHVar3);
    iVar1 = *(int *)this_00;
    GetSysColor(0xe);
    (**(code **)(iVar1 + 0x38))();
  }
  FillRect(*(HDC *)(this_00 + 4),(RECT *)auStack_20,
           (HBRUSH)(-(uint)(&stack0x00000000 != (undefined1 *)0x28) & (uint)ppuStack_24));
  CDC::SetBkMode(this_00,1);
  CString::CString((CString *)&stack0x00000000);
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,1);
  if (*(short *)(param_1 + 8) == -1) {
    CString::operator=((CString *)&stack0x00000000,(CString *)(unaff_EBX + 0x48));
  }
  else {
    CComboBox::GetLBText(unaff_EBX,*(int *)(param_1 + 8),(CString *)&stack0x00000000);
  }
  uVar4 = (**(code **)(*(int *)this_00 + 0x2c))();
  (**(code **)(*(int *)this_00 + 100))
            (ppuStack_24,auStack_20,iStack_4,*(undefined4 *)(iStack_4 + -8));
  (**(code **)(*(int *)this_00 + 0x30))(uVar4);
  (**(code **)(*(int *)this_00 + 0x28))(uVar2);
  ppuStack_24 = (undefined **)((uint)ppuStack_24 & 0xffffff00);
  CString::~CString((CString *)(auStack_20 + 4));
  ppuStack_24 = (undefined **)0x2;
  CGdiObject::DeleteObject((CGdiObject *)&stack0xffffffbc);
  ExceptionList = this;
  return;
}


// ---- FUN_10004120 @ 10004120

void __fastcall FUN_10004120(undefined4 *param_1)

{
  *param_1 = &PTR_GetRuntimeClass_1000a8f0;
  return;
}


// ---- FUN_10004190 @ 10004190

int __thiscall FUN_10004190(void *this,uchar *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uchar *local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10009cb0;
  local_c = ExceptionList;
  uVar2 = (uint)*(ushort *)(param_1 + 0xc);
  uVar3 = (uint)*(ushort *)(param_1 + 0x14);
  ExceptionList = &local_c;
  local_10 = this;
  CString::CString((CString *)&local_10);
  local_4 = 0;
  CString::CString((CString *)&param_1);
  local_4._0_1_ = 1;
  if (uVar2 == 0xffffffff) {
    local_4 = (uint)local_4._1_3_ << 8;
    CString::~CString((CString *)&param_1);
    local_4 = uVar2;
    CString::~CString((CString *)&local_10);
    iVar1 = -1;
  }
  else if (uVar3 == 0xffffffff) {
    local_4 = (uint)local_4._1_3_ << 8;
    CString::~CString((CString *)&param_1);
    local_4 = uVar3;
    CString::~CString((CString *)&local_10);
    iVar1 = 1;
  }
  else {
    CComboBox::GetLBText(this,uVar2,(CString *)&local_10);
    CComboBox::GetLBText(this,uVar3,(CString *)&param_1);
    iVar1 = _mbscoll(local_10,param_1);
    local_4 = (uint)local_4._1_3_ << 8;
    CString::~CString((CString *)&param_1);
    local_4 = 0xffffffff;
    CString::~CString((CString *)&local_10);
  }
  ExceptionList = local_c;
  return iVar1;
}


// ---- FUN_10004290 @ 10004290

COleControl * FUN_10004290(void)

{
  COleControl *pCVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10009cca;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pCVar1 = operator_new(0x22c);
  local_4 = 0;
  if (pCVar1 != (COleControl *)0x0) {
    pCVar1 = FUN_100045e0(pCVar1);
    ExceptionList = local_c;
    return pCVar1;
  }
  ExceptionList = local_c;
  return (COleControl *)0x0;
}


// ---- FUN_100042f0 @ 100042f0

void FUN_100042f0(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ---- FUN_10004310 @ 10004310

undefined ** FUN_10004310(void)

{
  return &PTR_s_CLEOComboCtrl_1000a518;
}


// ---- FUN_10004330 @ 10004330

undefined ** FUN_10004330(void)

{
  return &PTR_LAB_1000a530;
}


// ---- FUN_10004350 @ 10004350

undefined ** FUN_10004350(void)

{
  return &PTR_LAB_1000a640;
}


// ---- FUN_10004360 @ 10004360

undefined * FUN_10004360(void)

{
  return &DAT_1000e180;
}


// ---- FUN_100043a0 @ 100043a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100043a0(int *param_1)

{
  if (DAT_1000c7ec == -1) {
    _DAT_1000dd90 = DAT_1000abe0;
    _DAT_1000dd94 = DAT_1000abe4;
    _DAT_1000dd98 = DAT_1000abe8;
    _DAT_1000dd9c = DAT_1000abec;
    DAT_1000c7ec = 1;
    *param_1 = 1;
    return &DAT_1000dd90;
  }
  *param_1 = DAT_1000c7ec;
  return &DAT_1000dd90;
}


// ---- FUN_10004410 @ 10004410

void FUN_10004410(void)

{
  FUN_10004430(&DAT_1000dd40,(_GUID *)&DAT_1000a6f8,(CRuntimeClass *)&PTR_s_CLEOComboCtrl_1000a518,0
               ,"LEOCOMBO.LEOComboCtrl.1");
  return;
}


// ---- FUN_10004430 @ 10004430

COleObjectFactory * __thiscall
FUN_10004430(void *this,_GUID *param_1,CRuntimeClass *param_2,int param_3,char *param_4)

{
  COleObjectFactory::COleObjectFactory(this,param_1,param_2,param_3,param_4);
  *(undefined ***)this = &PTR_LAB_1000a904;
  return this;
}


// ---- FUN_10004460 @ 10004460

COleObjectFactory * __thiscall FUN_10004460(void *this,byte param_1)

{
  COleObjectFactory::~COleObjectFactory(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_10004480 @ 10004480

void FUN_10004480(void)

{
  FUN_100099ac((_onexit_t)&LAB_10004490);
  return;
}


// ---- FUN_100044b0 @ 100044b0

undefined4 FUN_100044b0(undefined4 *param_1)

{
  *param_1 = DAT_1000a6f8;
  param_1[1] = DAT_1000a6fc;
  param_1[2] = DAT_1000a700;
  param_1[3] = DAT_1000a704;
  return 0;
}


// ---- FUN_100044e0 @ 100044e0

void FUN_100044e0(LCID param_1,ITypeLib **param_2)

{
  LoadRegTypeLib((GUID *)&DAT_1000ad50,DAT_1000ad60,DAT_1000ad62,param_1,param_2);
  return;
}


// ---- FUN_10004510 @ 10004510

void __fastcall FUN_10004510(int param_1)

{
  undefined4 local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10009ce8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2
            ((AFX_MAINTAIN_STATE2 *)&local_14,*(AFX_MODULE_STATE **)(param_1 + 0x1c));
  local_4 = 0;
  AfxGetTypeLibCache((_GUID *)&DAT_1000ad50);
  *(undefined4 *)(local_10 + 4) = local_14;
  ExceptionList = local_c;
  return;
}


// ---- FUN_10004570 @ 10004570

undefined4 FUN_10004570(void)

{
  return 0x20191;
}


// ---- FUN_100045e0 @ 100045e0

COleControl * __fastcall FUN_100045e0(COleControl *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10009d16;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  COleControl::COleControl(param_1);
  local_4 = 0;
  FUN_10003e70((CWnd *)(param_1 + 0x1dc));
  local_4 = CONCAT31(local_4._1_3_,1);
  *(undefined ***)param_1 = &PTR_FUN_1000a978;
  COleControl::InitializeIIDs(param_1,(_GUID *)&DAT_1000a708,(_GUID *)&DAT_1000a718);
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  *(undefined4 *)(param_1 + 0x1c4) = 0;
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 1;
  *(undefined4 *)(param_1 + 0x1d4) = 0;
  FUN_10003f60((CWnd *)(param_1 + 0x1dc),param_1);
  ExceptionList = local_c;
  return param_1;
}


// ---- FUN_10004680 @ 10004680

COleControl * __thiscall FUN_10004680(void *this,byte param_1)

{
  FUN_100046a0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_100046a0 @ 100046a0

void __fastcall FUN_100046a0(COleControl *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_10009d3e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)param_1 = &PTR_FUN_1000a978;
  local_4 = 1;
  if (*(int **)(param_1 + 0x1d4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x1d4) + 4))(1);
  }
  local_4._0_1_ = 2;
  CString::~CString((CString *)(param_1 + 0x224));
  local_4 = (uint)local_4._1_3_ << 8;
  CComboBox::~CComboBox((CComboBox *)(param_1 + 0x1dc));
  local_4 = 0xffffffff;
  COleControl::~COleControl(param_1);
  ExceptionList = pvStack_c;
  return;
}


// ---- FUN_10004730 @ 10004730

void __thiscall FUN_10004730(COleControl *param_1,CDC *param_2,tagRECT *param_3)

{
  CDC *this;
  tagRECT *ptVar1;
  int iVar2;
  DWORD DVar3;
  BOOL BVar4;
  tagRECT tStack_10;
  
  iVar2 = COleControl::AmbientUserMode(param_1);
  ptVar1 = param_3;
  this = param_2;
  if (iVar2 == 0) {
    BVar4 = IsWindow(*(HWND *)(param_1 + 0x1fc));
    if (BVar4 != 0) {
      GetWindowRect(*(HWND *)(param_1 + 0x1fc),&tStack_10);
      COleControl::GetControlSize(param_1,(int *)&param_2,(int *)&param_3);
      if (param_3 != (tagRECT *)(tStack_10.bottom - tStack_10.top)) {
        COleControl::SetControlSize(param_1,(int)param_2,(int)(tStack_10.bottom - tStack_10.top));
        return;
      }
    }
  }
  else {
    COleControl::DoSuperclassPaint(param_1,param_2,(CRect *)param_3);
  }
  DVar3 = GetSysColor(0xf);
  CDC::FillSolidRect(this,ptVar1,DVar3);
  if (iVar2 == 0) {
    COleControl::DoSuperclassPaint(param_1,this,(CRect *)ptVar1);
  }
  return;
}


// ---- FUN_100047e0 @ 100047e0

void __thiscall FUN_100047e0(void *this,CPropExchange *param_1)

{
  (*(code *)**(undefined4 **)param_1)((int)this + 0x48,CONCAT22(DAT_1000ad60,DAT_1000ad62),1);
  COleControl::DoPropExchange(this,param_1);
  return;
}


// ---- FUN_10004830 @ 10004830

void FUN_10004830(void)

{
  CDialog local_6c [96];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10009d58;
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


// ---- FUN_10004890 @ 10004890

void __thiscall FUN_10004890(void *this,tagCREATESTRUCTA *param_1)

{
  int iVar1;
  
  iVar1 = COleControl::AmbientUserMode(this);
  if (iVar1 == 0) {
    COleControl::GetAmbientProperty(this,-0x2be,8,(void *)((int)this + 0x224));
  }
  else {
    CString::operator=((CString *)((int)this + 0x224),&DAT_1000e18c);
  }
  *(char **)(param_1 + 0x28) = s_STATIC_1000dc68;
  CWnd::PreCreateWindow(this,param_1);
  return;
}


// ---- FUN_100048e0 @ 100048e0

void __fastcall FUN_100048e0(undefined4 *param_1)

{
  *(undefined4 *)(param_1[1] + 4) = *param_1;
  return;
}


// ---- FUN_100048f0 @ 100048f0

undefined4 FUN_100048f0(void)

{
  return 1;
}


// ---- FUN_10004900 @ 10004900

undefined4 FUN_10004900(void)

{
  return 0;
}


// ---- FUN_10004910 @ 10004910

void __fastcall FUN_10004910(int param_1)

{
  BOOL BVar1;
  
  BVar1 = IsWindow(*(HWND *)(param_1 + 0x1fc));
  if (BVar1 != 0) {
    CWnd::EnableWindow((CWnd *)(param_1 + 0x1dc),*(int *)(param_1 + 0xbc));
  }
  return;
}


// ---- FUN_10004940 @ 10004940

undefined4 __thiscall FUN_10004940(void *this,int param_1,int param_2)

{
  if ((*(int *)((int)this + 0x1d0) != 0) && (param_1 == *(int *)((int)this + 0x1c4))) {
    if ((param_2 == 3) || (param_2 == 4)) {
      *(uint *)((int)this + 0xbc) = (uint)(param_2 == 3);
      (**(code **)(*(int *)this + 0x110))();
    }
    FUN_100049b0((int)this);
  }
  return 0;
}


// ---- FUN_10004990 @ 10004990

undefined4 __fastcall FUN_10004990(int param_1)

{
  if (*(int *)(param_1 + 0x1d0) != 0) {
    FUN_100049b0(param_1);
  }
  return 0;
}


// ---- FUN_100049b0 @ 100049b0

/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_100049b0(int param_1)

{
  int iVar1;
  CString *pCVar2;
  WPARAM WVar3;
  int iVar4;
  LRESULT LVar5;
  LPARAM lParam;
  int iVar6;
  char *local_f4;
  undefined **local_f0;
  void *local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  float local_dc;
  LPARAM local_d8;
  int local_d4 [50];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10009dde;
  local_c = ExceptionList;
  iVar6 = 0;
  if (*(int *)(param_1 + 0x1d0) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x1c4) < 1) {
    return;
  }
  ExceptionList = &local_c;
  CString::CString((CString *)&local_f4,&DAT_1000e18c);
  local_4 = 0;
  iVar1 = FUN_10008c10(*(void **)(param_1 + 0x1d4),*(undefined4 *)(param_1 + 0x1c4),
                       (CString *)&local_f4);
  if (iVar1 != 1) goto LAB_10004d94;
  SendMessageA(*(HWND *)(param_1 + 0x1fc),0x14b,0,0);
  CString::operator=((CString *)(param_1 + 0x224),local_f4);
  local_f0 = &PTR_GetRuntimeClass_1000ab70;
  local_ec = (void *)0x0;
  local_e0 = 0;
  local_e4 = 0;
  local_e8 = 0;
  local_4._0_1_ = 1;
  if (*(int *)(param_1 + 0x1c0) == 0) {
    if (*(int *)(param_1 + 0x1d8) == 0) {
      iVar6 = FUN_10008d00(*(void **)(param_1 + 0x1d4),*(undefined4 *)(param_1 + 0x1c4),local_d4,
                           0x32);
      if (-1 < iVar6) goto LAB_10004c03;
      local_4 = CONCAT31(local_4._1_3_,6);
    }
    else {
      iVar6 = FUN_10008a30(*(void **)(param_1 + 0x1d4),*(undefined4 *)(param_1 + 0x1c4),
                           (int)&local_f0);
      if (iVar6 < 0) {
        local_4 = CONCAT31(local_4._1_3_,5);
      }
      else {
LAB_10004c03:
        iVar1 = 0;
        if (iVar6 == 0) {
          *(undefined4 *)(param_1 + 0xbc) = 0;
        }
        else {
          if (0 < iVar6) {
            do {
              CString::Empty((CString *)&local_f4);
              if (*(int *)(param_1 + 0x1d8) == 0) {
                local_dc = (float)local_d4[iVar1];
                iVar4 = FUN_10008c80(*(void **)(param_1 + 0x1d4),*(undefined4 *)(param_1 + 0x1c4),
                                     local_dc,(CString *)&local_f4);
                if (iVar4 != 1) {
                  local_4 = CONCAT31(local_4._1_3_,8);
                  goto joined_r0x10004d17;
                }
                WVar3 = SendMessageA(*(HWND *)(param_1 + 0x1fc),0x14a,0xffffffff,(LPARAM)local_f4);
                if (WVar3 != 0xffffffff) {
                  lParam = local_d4[iVar1];
                  goto LAB_10004cb1;
                }
              }
              else {
                iVar4 = FUN_10008c10(*(void **)(param_1 + 0x1d4),
                                     *(undefined4 *)((int)local_ec + iVar1 * 4),(CString *)&local_f4
                                    );
                if (iVar4 != 1) {
                  local_4 = CONCAT31(local_4._1_3_,7);
                  goto joined_r0x10004d17;
                }
                WVar3 = SendMessageA(*(HWND *)(param_1 + 0x1fc),0x14a,0xffffffff,(LPARAM)local_f4);
                if (WVar3 != 0xffffffff) {
                  lParam = *(LPARAM *)((int)local_ec + iVar1 * 4);
LAB_10004cb1:
                  SendMessageA(*(HWND *)(param_1 + 0x1fc),0x151,WVar3,lParam);
                }
              }
              iVar1 = iVar1 + 1;
            } while (iVar1 < iVar6);
          }
          if (*(int *)(param_1 + 0x1d8) == 0) {
            LVar5 = SendMessageA(*(HWND *)(param_1 + 0x1c8),DAT_1000dfbc,
                                 *(WPARAM *)(param_1 + 0x1cc),*(LPARAM *)(param_1 + 0x1c4));
            *(LRESULT *)(param_1 + 0xbc) = LVar5;
          }
          else {
            *(undefined4 *)(param_1 + 0xbc) = 1;
          }
        }
        CWnd::EnableWindow((CWnd *)(param_1 + 0x1dc),*(int *)(param_1 + 0xbc));
        SendMessageA(*(HWND *)(param_1 + 0x1fc),0x14e,0xffffffff,0);
        local_4 = CONCAT31(local_4._1_3_,9);
      }
    }
  }
  else {
    iVar1 = FUN_100090b0(*(void **)(param_1 + 0x1d4),*(LPARAM *)(param_1 + 0x1c4));
    if ((iVar1 != 0) && (0 < iVar1)) {
      do {
        pCVar2 = FUN_100090d0(*(void **)(param_1 + 0x1d4),(CString *)&local_dc,
                              *(undefined4 *)(param_1 + 0x1c4),iVar6);
        local_4._0_1_ = 2;
        CString::operator=((CString *)&local_f4,pCVar2);
        local_4._0_1_ = 1;
        CString::~CString((CString *)&local_dc);
        WVar3 = SendMessageA(*(HWND *)(param_1 + 0x1fc),0x143,0,(LPARAM)local_f4);
        SendMessageA(*(HWND *)(param_1 + 0x1fc),0x151,WVar3,iVar6);
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar1);
    }
    CString::CString((CString *)&local_d8,&DAT_1000e18c);
    local_4._0_1_ = 3;
    CString::LoadStringA((CString *)&local_d8,0x65);
    SendMessageA(*(HWND *)(param_1 + 0x1fc),0x14a,0xffffffff,local_d8);
    CWnd::EnableWindow((CWnd *)(param_1 + 0x1dc),1);
    SendMessageA(*(HWND *)(param_1 + 0x1fc),0x14e,0xffffffff,0);
    local_4._0_1_ = 1;
    CString::~CString((CString *)&local_d8);
    local_4 = CONCAT31(local_4._1_3_,4);
  }
joined_r0x10004d17:
  if (local_ec != (void *)0x0) {
    local_f0 = &PTR_GetRuntimeClass_1000ab70;
    operator_delete(local_ec);
  }
  local_f0 = &PTR_GetRuntimeClass_1000a8f0;
LAB_10004d94:
  local_4 = 0xffffffff;
  CString::~CString((CString *)&local_f4);
  ExceptionList = local_c;
  return;
}


// ---- FUN_10004ee0 @ 10004ee0

void __fastcall FUN_10004ee0(COleControl *param_1)

{
  COleControl::OnDestroy(param_1);
  (**(code **)(*(int *)(param_1 + 0x1dc) + 0x60))();
  return;
}


// ---- FUN_10004f80 @ 10004f80

void __fastcall FUN_10004f80(COleControl *param_1)

{
  AFX_MODULE_STATE *pAVar1;
  int local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10009df8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pAVar1 = AfxGetModuleState();
  CCmdTarget::BeginWaitCursor(*(CCmdTarget **)(pAVar1 + 4));
  local_4 = 0;
  COleControl::GetControlSize(param_1,&local_14,&local_10);
  COleControl::SetControlSize(param_1,local_14,*(int *)(param_1 + 0x228));
  COleControl::Refresh(param_1);
  local_4 = 0xffffffff;
  pAVar1 = AfxGetModuleState();
  CCmdTarget::EndWaitCursor(*(CCmdTarget **)(pAVar1 + 4));
  ExceptionList = local_c;
  return;
}


// ---- FUN_10005000 @ 10005000

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_10005000(int param_1,int param_2,HWND param_3,HWND param_4)

{
  BOOL BVar1;
  LRESULT LVar2;
  void *this;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  short sVar6;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &UNK_10009e1a;
  pvStack_c = ExceptionList;
  sVar6 = (short)((uint)param_2 >> 0x10);
  if ((((sVar6 != 0xc9) && (sVar6 != 200)) && (sVar6 != 300)) && (sVar6 != 0x12d)) {
    return 0;
  }
  ExceptionList = &pvStack_c;
  BVar1 = IsWindow(param_3);
  if (BVar1 == 0) {
    ExceptionList = pvStack_c;
    return 0;
  }
  BVar1 = IsWindow(param_4);
  if (BVar1 == 0) {
    ExceptionList = pvStack_c;
    return 0;
  }
  if (*(int *)(param_1 + 0x1d0) == 0) {
    *(HWND *)(param_1 + 0x1c8) = param_3;
    *(HWND *)(param_1 + 0x1cc) = param_4;
    LVar2 = SendMessageA(param_3,_DAT_1000e074,0,0);
    if (LVar2 != 0) {
      this = operator_new(0x20);
      uStack_4 = 0;
      if (this == (void *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar3 = FUN_100089b0(this,*(undefined4 *)(param_1 + 0x1c8),*(undefined4 *)(param_1 + 0x1cc)
                             );
      }
      uStack_4 = 0xffffffff;
      *(undefined4 **)(param_1 + 0x1d4) = puVar3;
      if (param_1 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)(param_1 + 0x20);
      }
      iVar4 = func_0x10008e40(1,1,uVar5);
      if (0 < iVar4) {
        *(undefined4 *)(param_1 + 0x1d0) = 1;
      }
    }
    if (*(int *)(param_1 + 0x1d0) == 0) goto LAB_10005194;
  }
  if (*(int *)(param_1 + 0x1c4) != param_2) {
    if (param_1 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined4 *)(param_1 + 0x20);
    }
    func_0x10008e40(param_2,1,uVar5);
    if (*(int *)(param_1 + 0x1c4) != 0) {
      if (param_1 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)(param_1 + 0x20);
      }
      func_0x10008e40(*(int *)(param_1 + 0x1c4),0,uVar5);
    }
    *(int *)(param_1 + 0x1c4) = param_2;
    *(uint *)(param_1 + 0x1d8) = (uint)(sVar6 == 0xc9);
    if ((sVar6 == 300) || (sVar6 == 0x12d)) {
      uVar5 = 1;
    }
    else {
      uVar5 = 0;
    }
    *(undefined4 *)(param_1 + 0x1c0) = uVar5;
  }
  FUN_100049b0(param_1);
LAB_10005194:
  ExceptionList = pvStack_c;
  return *(undefined4 *)(param_1 + 0x1d0);
}


// ---- FUN_100051b0 @ 100051b0

void __fastcall FUN_100051b0(CWnd *param_1)

{
  int iVar1;
  undefined4 uVar2;
  LPARAM LVar3;
  
  iVar1 = *(int *)(param_1 + 0x44);
  uVar2 = FUN_100051e0(iVar1);
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  LVar3 = FUN_100051f0(iVar1);
  FUN_10008ea0(*(void **)(param_1 + 0x40),LVar3);
  CWnd::Default(param_1);
  return;
}


// ---- FUN_100051e0 @ 100051e0

undefined4 __fastcall FUN_100051e0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1d4);
}


// ---- FUN_100051f0 @ 100051f0

undefined4 __fastcall FUN_100051f0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1c4);
}


// ---- FUN_10005200 @ 10005200

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10005200(int param_1)

{
  int iVar1;
  WPARAM WVar2;
  undefined4 uVar3;
  int iVar4;
  LRESULT LVar5;
  HWND hWnd;
  LPARAM LVar6;
  WPARAM WVar7;
  UINT Msg;
  float fVar8;
  char *pcVar9;
  
  WVar2 = SendMessageA(*(HWND *)(param_1 + 0x20),0x147,0,0);
  SendMessageA(*(HWND *)(param_1 + 0x20),0x14e,0xffffffff,0);
  if (WVar2 != 0xffffffff) {
    iVar1 = *(int *)(param_1 + 0x44);
    uVar3 = FUN_100051e0(iVar1);
    *(undefined4 *)(param_1 + 0x40) = uVar3;
    iVar4 = func_0x10005300();
    if (iVar4 != 0) {
      LVar5 = SendMessageA(*(HWND *)(param_1 + 0x20),0x150,WVar2,0);
      WVar2 = func_0x10005320();
      Msg = _DAT_1000df80;
      hWnd = (HWND)func_0x10005330();
      SendMessageA(hWnd,Msg,WVar2,LVar5);
      return;
    }
    LVar5 = SendMessageA(*(HWND *)(param_1 + 0x20),0x150,WVar2,0);
    iVar4 = func_0x10005310();
    if (iVar4 != 0) {
      LVar6 = FUN_100051f0(iVar1);
      WVar7 = FUN_100090b0(*(void **)(param_1 + 0x40),LVar6);
      if (WVar2 == WVar7) {
        uVar3 = FUN_100051f0(iVar1);
        func_0x10009170(uVar3);
        return;
      }
      uVar3 = FUN_100051f0(iVar1);
      func_0x10009150(uVar3,LVar5);
      return;
    }
    fVar8 = (float)LVar5;
    pcVar9 = (char *)0x0;
    uVar3 = FUN_100051f0(iVar1);
    FUN_10008d70(*(void **)(param_1 + 0x40),uVar3,fVar8,pcVar9);
  }
  return;
}


// ---- FUN_10005340 @ 10005340

CGdiObject * __thiscall FUN_10005340(void *this,byte param_1)

{
  FUN_10005360(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_10005360 @ 10005360

void __fastcall FUN_10005360(CGdiObject *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10009e38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = &PTR_LAB_1000a8c8;
  local_4 = 0;
  CGdiObject::DeleteObject(param_1);
  *(undefined ***)param_1 = &PTR_GetRuntimeClass_1000a8f0;
  ExceptionList = local_c;
  return;
}


// ---- FUN_100053b0 @ 100053b0

void __fastcall FUN_100053b0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10009e58;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_GetRuntimeClass_1000ab70;
  local_4 = 0;
  if ((void *)param_1[1] != (void *)0x0) {
    operator_delete((void *)param_1[1]);
  }
  *param_1 = &PTR_GetRuntimeClass_1000a8f0;
  ExceptionList = local_c;
  return;
}


// ---- FUN_10005410 @ 10005410

void __thiscall FUN_10005410(int param_1,CArchive *param_2)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  ulong uStack_8;
  
  if ((~*(uint *)(param_2 + 0x14) & 1) == 0) {
    uVar1 = CArchive::ReadCount(param_2);
    if (uVar1 == 0) {
      if (*(void **)(param_1 + 4) != (void *)0x0) {
        operator_delete(*(void **)(param_1 + 4));
        *(undefined4 *)(param_1 + 4) = 0;
      }
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
    }
    else if (*(int *)(param_1 + 4) == 0) {
      puVar2 = operator_new(uVar1 * 4);
      *(undefined4 **)(param_1 + 4) = puVar2;
      for (uVar4 = uVar1 & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
      for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(undefined1 *)puVar2 = 0;
        puVar2 = (undefined4 *)((int)puVar2 + 1);
      }
      *(ulong *)(param_1 + 0xc) = uVar1;
      *(ulong *)(param_1 + 8) = uVar1;
    }
    else if (*(int *)(param_1 + 0xc) < (int)uVar1) {
      iVar5 = *(int *)(param_1 + 0x10);
      if (iVar5 == 0) {
        iVar5 = (int)(*(int *)(param_1 + 8) + (*(int *)(param_1 + 8) >> 0x1f & 7U)) >> 3;
        if (iVar5 < 4) {
          iVar5 = 4;
        }
        else if (0x400 < iVar5) {
          iVar5 = 0x400;
        }
      }
      uStack_8 = iVar5 + *(int *)(param_1 + 0xc);
      if ((int)uStack_8 <= (int)uVar1) {
        uStack_8 = uVar1;
      }
      puVar3 = operator_new(uStack_8 * 4);
      puVar2 = *(undefined4 **)(param_1 + 4);
      puVar7 = puVar3;
      for (uVar4 = *(uint *)(param_1 + 8) & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar7 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar7 = puVar7 + 1;
      }
      for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(undefined1 *)puVar7 = *(undefined1 *)puVar2;
        puVar2 = (undefined4 *)((int)puVar2 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      puVar2 = puVar3 + *(int *)(param_1 + 8);
      for (iVar5 = uVar1 - *(int *)(param_1 + 8); iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
      operator_delete(*(void **)(param_1 + 4));
      *(undefined4 **)(param_1 + 4) = puVar3;
      *(ulong *)(param_1 + 8) = uVar1;
      *(ulong *)(param_1 + 0xc) = uStack_8;
    }
    else {
      iVar5 = *(int *)(param_1 + 8);
      if (iVar5 < (int)uVar1) {
        puVar2 = (undefined4 *)(*(int *)(param_1 + 4) + iVar5 * 4);
        for (iVar6 = uVar1 - iVar5; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar2 = 0;
          puVar2 = puVar2 + 1;
        }
      }
      *(ulong *)(param_1 + 8) = uVar1;
    }
  }
  else {
    CArchive::WriteCount(param_2,*(ulong *)(param_1 + 8));
  }
  if ((~*(uint *)(param_2 + 0x14) & 1) != 0) {
    CArchive::Write(param_2,*(void **)(param_1 + 4),*(int *)(param_1 + 8) * 4);
    return;
  }
  CArchive::Read(param_2,*(void **)(param_1 + 4),*(int *)(param_1 + 8) << 2);
  return;
}


// ---- FUN_100055a0 @ 100055a0

undefined4 * __thiscall FUN_100055a0(void *this,byte param_1)

{
  FUN_100053b0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_100055c0 @ 100055c0

CGdiObject * __thiscall FUN_100055c0(void *this,byte param_1)

{
  FUN_100055e0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_100055e0 @ 100055e0

void __fastcall FUN_100055e0(CGdiObject *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10009e78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = &PTR_LAB_1000a8c8;
  local_4 = 0;
  CGdiObject::DeleteObject(param_1);
  *(undefined ***)param_1 = &PTR_GetRuntimeClass_1000a8f0;
  ExceptionList = local_c;
  return;
}


// ---- FUN_10005640 @ 10005640

void FUN_10005640(void)

{
  return;
}


// ---- FUN_10005650 @ 10005650

void __fastcall FUN_10005650(int param_1)

{
  EnableWindow(*(HWND *)(param_1 + 0x20),0);
  return;
}


// ---- FUN_10005660 @ 10005660

void __fastcall FUN_10005660(int param_1)

{
  EnableWindow(*(HWND *)(param_1 + 0x20),1);
  return;
}


// ---- FUN_10005670 @ 10005670

CComboBox * __thiscall FUN_10005670(void *this,byte param_1)

{
  CComboBox::~CComboBox(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_10005690 @ 10005690

void FUN_10005690(void)

{
  AFX_MODULE_STATE *pAVar1;
  
  pAVar1 = AfxGetModuleState();
  CCmdTarget::EndWaitCursor(*(CCmdTarget **)(pAVar1 + 4));
  return;
}


// ---- FUN_100056b0 @ 100056b0

COlePropertyPage * FUN_100056b0(void)

{
  COlePropertyPage *pCVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10009e9a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pCVar1 = operator_new(0xd8);
  local_4 = 0;
  if (pCVar1 != (COlePropertyPage *)0x0) {
    pCVar1 = FUN_10005860(pCVar1);
    ExceptionList = local_c;
    return pCVar1;
  }
  ExceptionList = local_c;
  return (COlePropertyPage *)0x0;
}


// ---- FUN_10005720 @ 10005720

undefined ** FUN_10005720(void)

{
  return &PTR_s_CLEOComboPropPage_1000ab88;
}


// ---- FUN_10005740 @ 10005740

undefined ** FUN_10005740(void)

{
  return &PTR_LAB_1000aba0;
}


// ---- FUN_10005760 @ 10005760

void FUN_10005760(void)

{
  FUN_10005780(&DAT_1000e198,(_GUID *)&DAT_1000abe0,
               (CRuntimeClass *)&PTR_s_CLEOComboPropPage_1000ab88,0,"LEOCOMBO.LEOComboPropPage.1");
  return;
}


// ---- FUN_10005780 @ 10005780

COleObjectFactory * __thiscall
FUN_10005780(void *this,_GUID *param_1,CRuntimeClass *param_2,int param_3,char *param_4)

{
  COleObjectFactory::COleObjectFactory(this,param_1,param_2,param_3,param_4);
  *(undefined ***)this = &PTR_LAB_1000abf0;
  return this;
}


// ---- ~COleObjectFactory @ 100057b0

void __thiscall COleObjectFactory::~COleObjectFactory(COleObjectFactory *this)

{
                    /* WARNING: Could not recover jumptable at 0x10009356. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~COleObjectFactory(this);
  return;
}


// ---- FUN_100057c0 @ 100057c0

void FUN_100057c0(void)

{
  FUN_100099ac((_onexit_t)&LAB_100057d0);
  return;
}


// ---- FUN_100057f0 @ 100057f0

undefined4 FUN_100057f0(undefined4 *param_1)

{
  *param_1 = DAT_1000abe0;
  param_1[1] = DAT_1000abe4;
  param_1[2] = DAT_1000abe8;
  param_1[3] = DAT_1000abec;
  return 0;
}


// ---- FUN_10005860 @ 10005860

COlePropertyPage * __fastcall FUN_10005860(COlePropertyPage *param_1)

{
  COlePropertyPage::COlePropertyPage(param_1,100,100);
  *(undefined ***)param_1 = &PTR_FUN_1000ac64;
  return param_1;
}


// ---- FUN_10005880 @ 10005880

COlePropertyPage * __thiscall FUN_10005880(void *this,byte param_1)

{
  COlePropertyPage::~COlePropertyPage(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- ~COlePropertyPage @ 100058a0

void __thiscall COlePropertyPage::~COlePropertyPage(COlePropertyPage *this)

{
                    /* WARNING: Could not recover jumptable at 0x10009698. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~COlePropertyPage(this);
  return;
}


// ---- FUN_100058b0 @ 100058b0

void FUN_100058b0(CDataExchange *param_1)

{
  DDP_PostProcessing(param_1);
  return;
}


// ---- FUN_100058d0 @ 100058d0

void FUN_100058d0(void)

{
  FUN_10005910((CWinApp *)&DAT_1000e1e8);
  return;
}


// ---- FUN_100058e0 @ 100058e0

void FUN_100058e0(void)

{
  FUN_100099ac((_onexit_t)&LAB_100058f0);
  return;
}


// ---- ~CWinApp @ 10005900

void __thiscall CWinApp::~CWinApp(CWinApp *this)

{
                    /* WARNING: Could not recover jumptable at 0x100096a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CWinApp(this);
  return;
}


// ---- FUN_10005910 @ 10005910

CWinApp * __fastcall FUN_10005910(CWinApp *param_1)

{
  CWinApp::CWinApp(param_1,(char *)0x0);
  *(undefined ***)param_1 = &PTR_LAB_1000ad64;
  return param_1;
}


// ---- FUN_10005930 @ 10005930

CWinApp * __thiscall FUN_10005930(void *this,byte param_1)

{
  CWinApp::~CWinApp(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- DllRegisterServer @ 10005970

undefined4 DllRegisterServer(void)

{
  AFX_MODULE_STATE *pAVar1;
  int iVar2;
  undefined4 local_8;
  int local_4;
  
                    /* 0x5970  3  DllRegisterServer */
  pAVar1 = (AFX_MODULE_STATE *)FUN_100097ed();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)&local_8,pAVar1);
  pAVar1 = AfxGetModuleState();
  iVar2 = AfxOleRegisterTypeLib
                    (*(HINSTANCE__ **)(pAVar1 + 8),(_GUID *)&DAT_1000ad50,(char *)0x0,(char *)0x0);
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


// ---- DllUnregisterServer @ 100059f0

undefined4 DllUnregisterServer(void)

{
  AFX_MODULE_STATE *pAVar1;
  int iVar2;
  undefined4 local_8;
  int local_4;
  
                    /* 0x59f0  4  DllUnregisterServer */
  pAVar1 = (AFX_MODULE_STATE *)FUN_100097ed();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)&local_8,pAVar1);
  iVar2 = AfxOleUnregisterTypeLib((_GUID *)&DAT_1000ad50,0,0,0);
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


// ---- FUN_100088b0 @ 100088b0

undefined4 * FUN_100088b0(void)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10009eba;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x20);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = FUN_10008930(puVar1);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


// ---- FUN_10008920 @ 10008920

undefined ** FUN_10008920(void)

{
  return &PTR_s_CServerComms_1000ae08;
}


// ---- FUN_10008930 @ 10008930

undefined4 * __fastcall FUN_10008930(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10009ed8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_1000ae20;
  local_4 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0x809;
  param_1[5] = 0;
  param_1[6] = 0;
  FUN_10008ef0((int)param_1);
  ExceptionList = local_c;
  return param_1;
}


// ---- FUN_10008990 @ 10008990

undefined4 * __thiscall FUN_10008990(void *this,byte param_1)

{
  FUN_10008a20(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_100089b0 @ 100089b0

undefined4 * __thiscall FUN_100089b0(void *this,undefined4 param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10009ef8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 4) = param_1;
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_1000ae20;
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0x809;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  FUN_10008ef0((int)this);
  ExceptionList = local_c;
  return this;
}


// ---- FUN_10008a20 @ 10008a20

void __fastcall FUN_10008a20(undefined4 *param_1)

{
  *param_1 = &PTR_GetRuntimeClass_1000a8f0;
  return;
}


// ---- FUN_10008a30 @ 10008a30

int __thiscall FUN_10008a30(void *this,undefined4 param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  uint local_f0;
  undefined4 *local_ec;
  int local_e8;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 *local_d0;
  undefined4 local_cc;
  undefined4 local_c8 [50];
  
  local_cc = param_1;
  local_d0 = &local_cc;
  local_d8 = DAT_1000e554;
  local_d4 = 0xcc;
  iVar5 = FUN_10008f40(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_d8);
  if (0 < iVar5) {
    local_ec = local_c8;
    local_e8 = iVar5;
    do {
      uVar2 = *local_ec;
      iVar3 = *(int *)(param_2 + 8);
      pvVar4 = *(void **)(param_2 + 4);
      uVar1 = iVar3 + 1;
      if (uVar1 == 0) {
        if (pvVar4 != (void *)0x0) {
          operator_delete(pvVar4);
          *(undefined4 *)(param_2 + 4) = 0;
        }
        *(undefined4 *)(param_2 + 0xc) = 0;
        *(undefined4 *)(param_2 + 8) = 0;
      }
      else if (pvVar4 == (void *)0x0) {
        puVar6 = operator_new(uVar1 * 4);
        *(undefined4 **)(param_2 + 4) = puVar6;
        for (uVar8 = uVar1 & 0x3fffffff; uVar8 != 0; uVar8 = uVar8 - 1) {
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
        }
        for (iVar9 = 0; iVar9 != 0; iVar9 = iVar9 + -1) {
          *(undefined1 *)puVar6 = 0;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
        }
        *(uint *)(param_2 + 0xc) = uVar1;
        *(uint *)(param_2 + 8) = uVar1;
      }
      else if (*(int *)(param_2 + 0xc) < (int)uVar1) {
        iVar9 = *(int *)(param_2 + 0x10);
        if (iVar9 == 0) {
          iVar9 = (int)(iVar3 + (iVar3 >> 0x1f & 7U)) >> 3;
          if (iVar9 < 4) {
            iVar9 = 4;
          }
          else if (0x400 < iVar9) {
            iVar9 = 0x400;
          }
        }
        local_f0 = iVar9 + *(int *)(param_2 + 0xc);
        if ((int)local_f0 <= (int)uVar1) {
          local_f0 = uVar1;
        }
        puVar7 = operator_new(local_f0 * 4);
        puVar6 = *(undefined4 **)(param_2 + 4);
        puVar10 = puVar7;
        for (uVar8 = *(uint *)(param_2 + 8) & 0x3fffffff; uVar8 != 0; uVar8 = uVar8 - 1) {
          *puVar10 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar10 = puVar10 + 1;
        }
        for (iVar9 = 0; iVar9 != 0; iVar9 = iVar9 + -1) {
          *(undefined1 *)puVar10 = *(undefined1 *)puVar6;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
          puVar10 = (undefined4 *)((int)puVar10 + 1);
        }
        puVar6 = puVar7 + *(int *)(param_2 + 8);
        for (iVar9 = uVar1 - *(int *)(param_2 + 8); iVar9 != 0; iVar9 = iVar9 + -1) {
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
        }
        operator_delete(*(void **)(param_2 + 4));
        *(undefined4 **)(param_2 + 4) = puVar7;
        *(uint *)(param_2 + 8) = uVar1;
        *(uint *)(param_2 + 0xc) = local_f0;
      }
      else if (iVar3 < (int)uVar1) {
        puVar6 = (undefined4 *)((int)pvVar4 + iVar3 * 4);
        for (iVar9 = uVar1 - iVar3; iVar9 != 0; iVar9 = iVar9 + -1) {
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
        }
        *(uint *)(param_2 + 8) = uVar1;
      }
      else {
        *(uint *)(param_2 + 8) = uVar1;
      }
      *(undefined4 *)(*(int *)(param_2 + 4) + iVar3 * 4) = uVar2;
      local_ec = local_ec + 1;
      local_e8 = local_e8 + -1;
    } while (local_e8 != 0);
  }
  return iVar5;
}


// ---- FUN_10008c10 @ 10008c10

undefined4 __thiscall FUN_10008c10(void *this,undefined4 param_1,CString *param_2)

{
  int iVar1;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 *local_168;
  undefined4 local_164;
  char local_160 [352];
  
  local_164 = param_1;
  local_168 = &local_164;
  local_170 = DAT_1000e550;
  local_16c = 0x164;
  iVar1 = FUN_10008f40(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_170);
  *(int *)((int)this + 0xc) = iVar1;
  if (iVar1 == 1) {
    CString::operator=(param_2,local_160);
  }
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_10008c80 @ 10008c80

undefined4 __thiscall
FUN_10008c80(void *this,undefined4 param_1,undefined4 param_2,CString *param_3)

{
  int iVar1;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 *local_16c;
  undefined4 local_168;
  undefined4 local_164;
  char local_160 [352];
  
  local_168 = param_1;
  local_164 = param_2;
  local_174 = DAT_1000e534;
  local_16c = &local_168;
  local_170 = 0x168;
  iVar1 = FUN_10008f40(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_174);
  *(int *)((int)this + 0xc) = iVar1;
  if (iVar1 == 1) {
    CString::operator=(param_3,local_160);
  }
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_10008d00 @ 10008d00

void __thiscall FUN_10008d00(void *this,undefined4 param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 *local_d0;
  undefined4 local_cc;
  undefined4 local_c8 [50];
  
  local_cc = param_1;
  local_d0 = &local_cc;
  local_d8 = DAT_1000e514;
  local_d4 = 0xcc;
  iVar1 = FUN_10008f40(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_d8);
  if (iVar1 != 0) {
    if (param_3 < iVar1) {
      iVar1 = param_3;
    }
    if (0 < iVar1) {
      puVar2 = local_c8;
      for (; iVar1 != 0; iVar1 = iVar1 + -1) {
        *param_2 = *puVar2;
        puVar2 = puVar2 + 1;
        param_2 = param_2 + 1;
      }
    }
  }
  return;
}


// ---- FUN_10008d70 @ 10008d70

LRESULT __thiscall FUN_10008d70(void *this,undefined4 param_1,undefined4 param_2,char *param_3)

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
  puStack_8 = &LAB_10009f1b;
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
    FUN_10008ec0(local_16c,param_3);
  }
  local_178 = &local_174;
  local_180 = DAT_1000e4ec;
  local_17c = 0x168;
  LVar1 = SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_180);
  *(LRESULT *)((int)this + 0xc) = LVar1;
  local_4 = 0xffffffff;
  CString::~CString((CString *)&local_184);
  ExceptionList = local_c;
  return LVar1;
}


// ---- FUN_10008ea0 @ 10008ea0

void __thiscall FUN_10008ea0(void *this,LPARAM param_1)

{
  SendMessageA(*(HWND *)((int)this + 4),DAT_1000e498,*(WPARAM *)((int)this + 8),param_1);
  return;
}


// ---- FUN_10008ec0 @ 10008ec0

void FUN_10008ec0(char *param_1,char *param_2)

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


// ---- FUN_10008ef0 @ 10008ef0

void __fastcall FUN_10008ef0(int param_1)

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


// ---- FUN_10008f40 @ 10008f40

void __thiscall
FUN_10008f40(void *this,HWND param_1,UINT param_2,WPARAM param_3,undefined4 *param_4)

{
  if (*(int *)((int)this + 0x1c) != 0) {
    FUN_10008f80(this,param_1,param_4);
    return;
  }
  SendMessageA(param_1,param_2,param_3,(LPARAM)param_4);
  return;
}


// ---- FUN_10008f80 @ 10008f80

LRESULT __thiscall FUN_10008f80(void *this,HWND param_1,undefined4 *param_2)

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
  sprintf(local_100,s_MMF_LEO_SC__lx__lx__lx_1000dc94,DVar3,uVar9,iVar2);
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
  DAT_1000e2ac = SendMessageA(param_1,0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_10c);
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
  return DAT_1000e2ac;
}


// ---- FUN_100090b0 @ 100090b0

void __thiscall FUN_100090b0(void *this,LPARAM param_1)

{
  SendMessageA(*(HWND *)((int)this + 4),DAT_1000e2bc,0,param_1);
  return;
}


// ---- FUN_100090d0 @ 100090d0

CString * __thiscall FUN_100090d0(void *this,CString *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_178;
  undefined4 local_174;
  undefined4 *local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  char local_160 [352];
  
  local_170 = &local_168;
  local_178 = DAT_1000e2b4;
  local_168 = param_2;
  local_164 = param_3;
  local_16c = 0;
  local_174 = 0x168;
  FUN_10008f40(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_178);
  CString::CString(param_1,local_160);
  return param_1;
}


// ---- SetEnabled @ 100091a0

void __thiscall COleControl::SetEnabled(COleControl *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x100091a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetEnabled(this,param_1);
  return;
}


// ---- GetEnabled @ 100091a6

int __thiscall COleControl::GetEnabled(COleControl *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100091a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetEnabled(this);
  return iVar1;
}


// ---- SetOccDialogInfo @ 100091ca

int __thiscall CWnd::SetOccDialogInfo(CWnd *this,_AFX_OCC_DIALOG_INFO *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100091ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetOccDialogInfo(this,param_1);
  return iVar1;
}


// ---- IsFrameWnd @ 100091d0

int __thiscall CWnd::IsFrameWnd(CWnd *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100091d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = IsFrameWnd(this);
  return iVar1;
}


// ---- CheckAutoCenter @ 100091d6

int __thiscall CWnd::CheckAutoCenter(CWnd *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100091d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CheckAutoCenter(this);
  return iVar1;
}


// ---- PostNcDestroy @ 100091e2

void __thiscall CWnd::PostNcDestroy(CWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x100091e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PostNcDestroy(this);
  return;
}


// ---- DefWindowProcA @ 100091e8

long __thiscall CWnd::DefWindowProcA(CWnd *this,uint param_1,uint param_2,long param_3)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100091e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = DefWindowProcA(this,param_1,param_2,param_3);
  return lVar1;
}


// ---- OnWndMsg @ 100091ee

int __thiscall CWnd::OnWndMsg(CWnd *this,uint param_1,uint param_2,long param_3,long *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100091ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnWndMsg(this,param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- OnAmbientProperty @ 100091fa

int __thiscall
CWnd::OnAmbientProperty(CWnd *this,COleControlSite *param_1,long param_2,tagVARIANT *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100091fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnAmbientProperty(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- PreTranslateMessage @ 10009200

int __thiscall CWnd::PreTranslateMessage(CWnd *this,tagMSG *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = PreTranslateMessage(this,param_1);
  return iVar1;
}


// ---- GetSuperWndProcAddr @ 10009206

_func_long_HWND___ptr_uint_uint_long ** __thiscall CWnd::GetSuperWndProcAddr(CWnd *this)

{
  _func_long_HWND___ptr_uint_uint_long **pp_Var1;
  
                    /* WARNING: Could not recover jumptable at 0x10009206. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pp_Var1 = GetSuperWndProcAddr(this);
  return pp_Var1;
}


// ---- OnNotify @ 1000920c

int __thiscall CWnd::OnNotify(CWnd *this,uint param_1,long param_2,long *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000920c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnNotify(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- OnCommand @ 10009212

int __thiscall CWnd::OnCommand(CWnd *this,uint param_1,long param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009212. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCommand(this,param_1,param_2);
  return iVar1;
}


// ---- EndModalLoop @ 10009218

void __thiscall CWnd::EndModalLoop(CWnd *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10009218. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EndModalLoop(this,param_1);
  return;
}


// ---- ContinueModal @ 1000921e

int __thiscall CWnd::ContinueModal(CWnd *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000921e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ContinueModal(this);
  return iVar1;
}


// ---- WinHelpA @ 10009224

void __thiscall CWnd::WinHelpA(CWnd *this,ulong param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10009224. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WinHelpA(this,param_1,param_2);
  return;
}


// ---- GetScrollBarCtrl @ 1000922a

CScrollBar * __thiscall CWnd::GetScrollBarCtrl(CWnd *this,int param_1)

{
  CScrollBar *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000922a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetScrollBarCtrl(this,param_1);
  return pCVar1;
}


// ---- OnToolHitTest @ 10009230

int __thiscall CWnd::OnToolHitTest(void)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnToolHitTest();
  return iVar1;
}


// ---- CalcWindowRect @ 10009236

void __thiscall CWnd::CalcWindowRect(CWnd *this,tagRECT *param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10009236. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CalcWindowRect(this,param_1,param_2);
  return;
}


// ---- PreCreateWindow @ 1000923c

int __thiscall CWnd::PreCreateWindow(CWnd *this,tagCREATESTRUCTA *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000923c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = PreCreateWindow(this,param_1);
  return iVar1;
}


// ---- DestroyWindow @ 10009242

int __thiscall CWnd::DestroyWindow(CWnd *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009242. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = DestroyWindow(this);
  return iVar1;
}


// ---- Create @ 10009248

int __thiscall
CWnd::Create(CWnd *this,char *param_1,char *param_2,ulong param_3,tagRECT *param_4,CWnd *param_5,
            uint param_6,CCreateContext *param_7)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009248. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Create(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return iVar1;
}


// ---- PreSubclassWindow @ 1000924e

void __thiscall CWnd::PreSubclassWindow(CWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x1000924e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PreSubclassWindow(this);
  return;
}


// ---- GetConnectionHook @ 10009254

IConnectionPoint * __thiscall CCmdTarget::GetConnectionHook(CCmdTarget *this,_GUID *param_1)

{
  IConnectionPoint *pIVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = GetConnectionHook(this,param_1);
  return pIVar1;
}


// ---- GetExtraConnectionPoints @ 1000925a

int __thiscall CCmdTarget::GetExtraConnectionPoints(CCmdTarget *this,CPtrArray *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000925a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetExtraConnectionPoints(this,param_1);
  return iVar1;
}


// ---- GetInterfaceHook @ 10009260

IUnknown * __thiscall CCmdTarget::GetInterfaceHook(CCmdTarget *this,void *param_1)

{
  IUnknown *pIVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = GetInterfaceHook(this,param_1);
  return pIVar1;
}


// ---- OnCreateAggregates @ 10009266

int __thiscall CCmdTarget::OnCreateAggregates(CCmdTarget *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009266. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCreateAggregates(this);
  return iVar1;
}


// ---- GetEventSinkMap @ 1000926c

AFX_EVENTSINKMAP * __thiscall CCmdTarget::GetEventSinkMap(CCmdTarget *this)

{
  AFX_EVENTSINKMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000926c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetEventSinkMap(this);
  return pAVar1;
}


// ---- GetConnectionMap @ 10009278

AFX_CONNECTIONMAP * __thiscall CCmdTarget::GetConnectionMap(CCmdTarget *this)

{
  AFX_CONNECTIONMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetConnectionMap(this);
  return pAVar1;
}


// ---- GetDispatchMap @ 1000927e

AFX_DISPMAP * __thiscall CCmdTarget::GetDispatchMap(CCmdTarget *this)

{
  AFX_DISPMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000927e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetDispatchMap(this);
  return pAVar1;
}


// ---- GetCommandMap @ 10009284

AFX_OLECMDMAP * __thiscall CCmdTarget::GetCommandMap(CCmdTarget *this)

{
  AFX_OLECMDMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetCommandMap(this);
  return pAVar1;
}


// ---- GetTypeLib @ 1000928a

long __thiscall CCmdTarget::GetTypeLib(CCmdTarget *this,ulong param_1,ITypeLib **param_2)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000928a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = GetTypeLib(this,param_1,param_2);
  return lVar1;
}


// ---- GetTypeLibCache @ 10009290

CTypeLibCache * __thiscall CCmdTarget::GetTypeLibCache(CCmdTarget *this)

{
  CTypeLibCache *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetTypeLibCache(this);
  return pCVar1;
}


// ---- GetTypeInfoCount @ 10009296

uint __thiscall CCmdTarget::GetTypeInfoCount(CCmdTarget *this)

{
  uint uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009296. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = GetTypeInfoCount(this);
  return uVar1;
}


// ---- GetDispatchIID @ 1000929c

int __thiscall CCmdTarget::GetDispatchIID(CCmdTarget *this,_GUID *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000929c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetDispatchIID(this,param_1);
  return iVar1;
}


// ---- IsInvokeAllowed @ 100092a2

int __thiscall CCmdTarget::IsInvokeAllowed(CCmdTarget *this,long param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100092a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = IsInvokeAllowed(this,param_1);
  return iVar1;
}


// ---- OnCmdMsg @ 100092ae

int __thiscall
CCmdTarget::OnCmdMsg
          (CCmdTarget *this,uint param_1,int param_2,void *param_3,AFX_CMDHANDLERINFO *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100092ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCmdMsg(this,param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- ~CString @ 100092ba

void __thiscall CString::~CString(CString *this)

{
                    /* WARNING: Could not recover jumptable at 0x100092ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CString(this);
  return;
}


// ---- ~CComboBox @ 100092c0

void __thiscall CComboBox::~CComboBox(CComboBox *this)

{
                    /* WARNING: Could not recover jumptable at 0x100092c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CComboBox(this);
  return;
}


// ---- operator= @ 100092c6

CString * __thiscall CString::operator=(CString *this,char *param_1)

{
  CString *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100092c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = operator=(this,param_1);
  return pCVar1;
}


// ---- CString @ 100092cc

void __thiscall CString::CString(CString *this)

{
                    /* WARNING: Could not recover jumptable at 0x100092cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CString(this);
  return;
}


// ---- CWnd @ 100092d2

void __thiscall CWnd::CWnd(CWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x100092d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CWnd(this);
  return;
}


// ---- operator_delete @ 100092d8

void __cdecl operator_delete(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x100092d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  operator_delete(param_1);
  return;
}


// ---- DeleteObject @ 100092ea

int __thiscall CGdiObject::DeleteObject(CGdiObject *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100092ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = DeleteObject(this);
  return iVar1;
}


// ---- GetLBText @ 100092f0

void __thiscall CComboBox::GetLBText(CComboBox *this,int param_1,CString *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x100092f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetLBText(this,param_1,param_2);
  return;
}


// ---- operator= @ 100092f6

CString * __thiscall CString::operator=(CString *this,CString *param_1)

{
  CString *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100092f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = operator=(this,param_1);
  return pCVar1;
}


// ---- SetBkMode @ 100092fc

int __thiscall CDC::SetBkMode(CDC *this,int param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100092fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetBkMode(this,param_1);
  return iVar1;
}


// ---- Attach @ 10009302

int __thiscall CGdiObject::Attach(CGdiObject *this,void *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009302. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Attach(this,param_1);
  return iVar1;
}


// ---- FromHandle @ 10009308

CDC * CDC::FromHandle(HDC__ *param_1)

{
  CDC *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009308. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = FromHandle(param_1);
  return pCVar1;
}


// ---- GetRuntimeClass @ 1000930e

CRuntimeClass * __thiscall CObject::GetRuntimeClass(CObject *this)

{
  CRuntimeClass *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000930e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetRuntimeClass(this);
  return pCVar1;
}


// ---- operator_new @ 10009314

void * __cdecl operator_new(uint param_1)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009314. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = operator_new(param_1);
  return pvVar1;
}


// ---- COleObjectFactory @ 10009350

void __thiscall
COleObjectFactory::COleObjectFactory
          (COleObjectFactory *this,_GUID *param_1,CRuntimeClass *param_2,int param_3,char *param_4)

{
                    /* WARNING: Could not recover jumptable at 0x10009350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  COleObjectFactory(this,param_1,param_2,param_3,param_4);
  return;
}


// ---- ~COleObjectFactory @ 10009356

void __thiscall COleObjectFactory::~COleObjectFactory(COleObjectFactory *this)

{
                    /* WARNING: Could not recover jumptable at 0x10009356. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~COleObjectFactory(this);
  return;
}


// ---- AfxGetTypeLibCache @ 1000935c

CTypeLibCache * AfxGetTypeLibCache(_GUID *param_1)

{
  CTypeLibCache *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000935c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = AfxGetTypeLibCache(param_1);
  return pCVar1;
}


// ---- AFX_MAINTAIN_STATE2 @ 10009362

void __thiscall
AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2(AFX_MAINTAIN_STATE2 *this,AFX_MODULE_STATE *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10009362. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AFX_MAINTAIN_STATE2(this,param_1);
  return;
}


// ---- AfxOleUnregisterClass @ 10009368

int AfxOleUnregisterClass(_GUID *param_1,char *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AfxOleUnregisterClass(param_1,param_2);
  return iVar1;
}


// ---- AfxOleRegisterControlClass @ 1000936e

int AfxOleRegisterControlClass
              (HINSTANCE__ *param_1,_GUID *param_2,char *param_3,uint param_4,uint param_5,
              int param_6,ulong param_7,_GUID *param_8,ushort param_9,ushort param_10)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000936e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AfxOleRegisterControlClass
                    (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                     param_10);
  return iVar1;
}


// ---- AfxGetModuleState @ 10009374

AFX_MODULE_STATE * AfxGetModuleState(void)

{
  AFX_MODULE_STATE *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009374. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = AfxGetModuleState();
  return pAVar1;
}


// ---- DestroySharedMenu @ 1000937a

void __thiscall COleControl::DestroySharedMenu(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x1000937a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DestroySharedMenu(this);
  return;
}


// ---- BuildSharedMenu @ 10009380

int __thiscall COleControl::BuildSharedMenu(COleControl *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = BuildSharedMenu(this);
  return iVar1;
}


// ---- RemoveFrameLevelUI @ 10009386

void __thiscall COleControl::RemoveFrameLevelUI(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x10009386. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RemoveFrameLevelUI(this);
  return;
}


// ---- AddFrameLevelUI @ 1000938c

void __thiscall COleControl::AddFrameLevelUI(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x1000938c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AddFrameLevelUI(this);
  return;
}


// ---- OnActivateInPlace @ 10009392

long __thiscall COleControl::OnActivateInPlace(COleControl *this,int param_1,tagMSG *param_2)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009392. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = OnActivateInPlace(this,param_1,param_2);
  return lVar1;
}


// ---- OnHide @ 10009398

long __thiscall COleControl::OnHide(COleControl *this)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = OnHide(this);
  return lVar1;
}


// ---- OnFrameClose @ 1000939e

void __thiscall COleControl::OnFrameClose(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x1000939e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnFrameClose(this);
  return;
}


// ---- ResizeFrameWindow @ 100093a4

void __thiscall COleControl::ResizeFrameWindow(COleControl *this,int param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x100093a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ResizeFrameWindow(this,param_1,param_2);
  return;
}


// ---- CreateFrameWindow @ 100093aa

CControlFrameWnd * __thiscall COleControl::CreateFrameWindow(COleControl *this)

{
  CControlFrameWnd *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100093aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = CreateFrameWindow(this);
  return pCVar1;
}


// ---- OnOpen @ 100093b0

long __thiscall COleControl::OnOpen(COleControl *this,int param_1,tagMSG *param_2)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100093b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = OnOpen(this,param_1,param_2);
  return lVar1;
}


// ---- OnReflectorDestroyed @ 100093b6

void __thiscall COleControl::OnReflectorDestroyed(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x100093b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnReflectorDestroyed(this);
  return;
}


// ---- SetInitialDataFormats @ 100093bc

void __thiscall COleControl::SetInitialDataFormats(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x100093bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetInitialDataFormats(this);
  return;
}


// ---- CreateControlWindow @ 100093c2

int __thiscall
COleControl::CreateControlWindow(COleControl *this,HWND__ *param_1,CRect *param_2,tagRECT *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100093c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CreateControlWindow(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- ClientToParent @ 100093c8

void __thiscall COleControl::ClientToParent(COleControl *this,tagRECT *param_1,tagPOINT *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x100093c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ClientToParent(this,param_1,param_2);
  return;
}


// ---- ParentToClient @ 100093ce

uint __thiscall
COleControl::ParentToClient(COleControl *this,tagRECT *param_1,tagPOINT *param_2,int param_3)

{
  uint uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100093ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = ParentToClient(this,param_1,param_2,param_3);
  return uVar1;
}


// ---- GetClientOffset @ 100093d4

void __thiscall COleControl::GetClientOffset(COleControl *this,long *param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x100093d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetClientOffset(this,param_1,param_2);
  return;
}


// ---- GetWindowlessDropTarget @ 100093da

IDropTarget * __thiscall COleControl::GetWindowlessDropTarget(COleControl *this)

{
  IDropTarget *pIVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100093da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = GetWindowlessDropTarget(this);
  return pIVar1;
}


// ---- OnWindowlessMessage @ 100093e0

int __thiscall
COleControl::OnWindowlessMessage
          (COleControl *this,uint param_1,uint param_2,long param_3,long *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100093e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnWindowlessMessage(this,param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- OnInactiveMouseMove @ 100093e6

void __thiscall
COleControl::OnInactiveMouseMove
          (COleControl *this,tagRECT *param_1,long param_2,long param_3,ulong param_4)

{
                    /* WARNING: Could not recover jumptable at 0x100093e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnInactiveMouseMove(this,param_1,param_2,param_3,param_4);
  return;
}


// ---- OnInactiveSetCursor @ 100093ec

int __thiscall
COleControl::OnInactiveSetCursor
          (COleControl *this,tagRECT *param_1,long param_2,long param_3,ulong param_4,int param_5)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100093ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnInactiveSetCursor(this,param_1,param_2,param_3,param_4,param_5);
  return iVar1;
}


// ---- GetActivationPolicy @ 100093f2

ulong __thiscall COleControl::GetActivationPolicy(COleControl *this)

{
  ulong uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100093f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = GetActivationPolicy(this);
  return uVar1;
}


// ---- GetControlFlags @ 100093f8

ulong __thiscall COleControl::GetControlFlags(COleControl *this)

{
  ulong uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100093f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = GetControlFlags(this);
  return uVar1;
}


// ---- ReparentControlWindow @ 100093fe

void __thiscall
COleControl::ReparentControlWindow(COleControl *this,HWND__ *param_1,HWND__ *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x100093fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReparentControlWindow(this,param_1,param_2);
  return;
}


// ---- OnGetPredefinedValue @ 10009404

int __thiscall
COleControl::OnGetPredefinedValue(COleControl *this,long param_1,ulong param_2,tagVARIANT *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009404. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnGetPredefinedValue(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- OnGetPredefinedStrings @ 1000940a

int __thiscall
COleControl::OnGetPredefinedStrings
          (COleControl *this,long param_1,CStringArray *param_2,CDWordArray *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000940a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnGetPredefinedStrings(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- OnMapPropertyToPage @ 10009410

int __thiscall
COleControl::OnMapPropertyToPage(COleControl *this,long param_1,_GUID *param_2,int *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnMapPropertyToPage(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- OnGetDisplayString @ 10009416

int __thiscall COleControl::OnGetDisplayString(COleControl *this,long param_1,CString *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009416. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnGetDisplayString(this,param_1,param_2);
  return iVar1;
}


// ---- OnProperties @ 1000941c

int __thiscall
COleControl::OnProperties(COleControl *this,tagMSG *param_1,HWND__ *param_2,tagRECT *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000941c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnProperties(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- OnEdit @ 10009422

int __thiscall
COleControl::OnEdit(COleControl *this,tagMSG *param_1,HWND__ *param_2,tagRECT *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009422. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnEdit(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- OnDoVerb @ 10009428

int __thiscall
COleControl::OnDoVerb
          (COleControl *this,long param_1,tagMSG *param_2,HWND__ *param_3,tagRECT *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009428. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnDoVerb(this,param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- OnEnumVerbs @ 1000942e

int __thiscall COleControl::OnEnumVerbs(COleControl *this,IEnumOLEVERB **param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000942e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnEnumVerbs(this,param_1);
  return iVar1;
}


// ---- OnSetData @ 10009434

int __thiscall
COleControl::OnSetData(COleControl *this,tagFORMATETC *param_1,tagSTGMEDIUM *param_2,int param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnSetData(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- OnRenderData @ 1000943a

int __thiscall
COleControl::OnRenderData(COleControl *this,tagFORMATETC *param_1,tagSTGMEDIUM *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000943a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnRenderData(this,param_1,param_2);
  return iVar1;
}


// ---- OnRenderFileData @ 10009440

int __thiscall COleControl::OnRenderFileData(COleControl *this,tagFORMATETC *param_1,CFile *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnRenderFileData(this,param_1,param_2);
  return iVar1;
}


// ---- OnRenderGlobalData @ 10009446

int __thiscall
COleControl::OnRenderGlobalData(COleControl *this,tagFORMATETC *param_1,void **param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009446. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnRenderGlobalData(this,param_1,param_2);
  return iVar1;
}


// ---- OnGetNaturalExtent @ 1000944c

int __thiscall
COleControl::OnGetNaturalExtent
          (COleControl *this,ulong param_1,long param_2,tagDVTARGETDEVICE *param_3,HDC__ *param_4,
          tagExtentInfo *param_5,tagSIZE *param_6)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000944c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnGetNaturalExtent(this,param_1,param_2,param_3,param_4,param_5,param_6);
  return iVar1;
}


// ---- OnQueryHitRect @ 10009452

int __thiscall
COleControl::OnQueryHitRect
          (COleControl *this,ulong param_1,tagRECT *param_2,tagRECT *param_3,long param_4,
          ulong *param_5)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009452. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnQueryHitRect(this,param_1,param_2,param_3,param_4,param_5);
  return iVar1;
}


// ---- OnQueryHitPoint @ 10009458

int __thiscall COleControl::OnQueryHitPoint(void)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnQueryHitPoint();
  return iVar1;
}


// ---- OnGetViewStatus @ 1000945e

ulong __thiscall COleControl::OnGetViewStatus(COleControl *this)

{
  ulong uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000945e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = OnGetViewStatus(this);
  return uVar1;
}


// ---- OnGetViewRect @ 10009464

int __thiscall COleControl::OnGetViewRect(COleControl *this,ulong param_1,_RECTL *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnGetViewRect(this,param_1,param_2);
  return iVar1;
}


// ---- OnGetViewExtent @ 1000946a

int __thiscall
COleControl::OnGetViewExtent
          (COleControl *this,ulong param_1,long param_2,tagDVTARGETDEVICE *param_3,tagSIZE *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000946a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnGetViewExtent(this,param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- OnGetColorSet @ 10009470

int __thiscall
COleControl::OnGetColorSet
          (COleControl *this,tagDVTARGETDEVICE *param_1,HDC__ *param_2,tagLOGPALETTE **param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnGetColorSet(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- OnHideToolBars @ 10009476

void __thiscall COleControl::OnHideToolBars(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x10009476. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnHideToolBars(this);
  return;
}


// ---- OnShowToolBars @ 1000947c

void __thiscall COleControl::OnShowToolBars(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x1000947c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnShowToolBars(this);
  return;
}


// ---- OnGetInPlaceMenu @ 10009482

HMENU__ * __thiscall COleControl::OnGetInPlaceMenu(COleControl *this)

{
  HMENU__ *pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009482. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = OnGetInPlaceMenu(this);
  return pHVar1;
}


// ---- OnFreezeEvents @ 10009488

void __thiscall COleControl::OnFreezeEvents(COleControl *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10009488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnFreezeEvents(this,param_1);
  return;
}


// ---- OnAmbientPropertyChange @ 1000948e

void __thiscall COleControl::OnAmbientPropertyChange(COleControl *this,long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x1000948e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnAmbientPropertyChange(this,param_1);
  return;
}


// ---- OnMnemonic @ 10009494

void __thiscall COleControl::OnMnemonic(COleControl *this,tagMSG *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10009494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnMnemonic(this,param_1);
  return;
}


// ---- OnGetControlInfo @ 1000949a

void __thiscall COleControl::OnGetControlInfo(COleControl *this,tagCONTROLINFO *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x1000949a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnGetControlInfo(this,param_1);
  return;
}


// ---- OnForeColorChanged @ 100094a0

void __thiscall COleControl::OnForeColorChanged(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x100094a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnForeColorChanged(this);
  return;
}


// ---- OnFontChanged @ 100094a6

void __thiscall COleControl::OnFontChanged(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x100094a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnFontChanged(this);
  return;
}


// ---- OnTextChanged @ 100094ac

void __thiscall COleControl::OnTextChanged(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x100094ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnTextChanged(this);
  return;
}


// ---- OnBorderStyleChanged @ 100094b2

void __thiscall COleControl::OnBorderStyleChanged(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x100094b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnBorderStyleChanged(this);
  return;
}


// ---- OnBackColorChanged @ 100094b8

void __thiscall COleControl::OnBackColorChanged(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x100094b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnBackColorChanged(this);
  return;
}


// ---- OnAppearanceChanged @ 100094be

void __thiscall COleControl::OnAppearanceChanged(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x100094be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnAppearanceChanged(this);
  return;
}


// ---- OnKeyPressEvent @ 100094c4

void __thiscall COleControl::OnKeyPressEvent(COleControl *this,ushort param_1)

{
                    /* WARNING: Could not recover jumptable at 0x100094c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnKeyPressEvent(this,param_1);
  return;
}


// ---- OnKeyUpEvent @ 100094ca

void __thiscall COleControl::OnKeyUpEvent(COleControl *this,ushort param_1,ushort param_2)

{
                    /* WARNING: Could not recover jumptable at 0x100094ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnKeyUpEvent(this,param_1,param_2);
  return;
}


// ---- OnKeyDownEvent @ 100094d0

void __thiscall COleControl::OnKeyDownEvent(COleControl *this,ushort param_1,ushort param_2)

{
                    /* WARNING: Could not recover jumptable at 0x100094d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnKeyDownEvent(this,param_1,param_2);
  return;
}


// ---- OnClick @ 100094d6

void __thiscall COleControl::OnClick(COleControl *this,ushort param_1)

{
                    /* WARNING: Could not recover jumptable at 0x100094d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnClick(this,param_1);
  return;
}


// ---- OnEventAdvise @ 100094dc

void __thiscall COleControl::OnEventAdvise(COleControl *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x100094dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnEventAdvise(this,param_1);
  return;
}


// ---- OnSetObjectRects @ 100094e2

int __thiscall COleControl::OnSetObjectRects(COleControl *this,tagRECT *param_1,tagRECT *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100094e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnSetObjectRects(this,param_1,param_2);
  return iVar1;
}


// ---- OnClose @ 100094e8

void __thiscall COleControl::OnClose(COleControl *this,ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x100094e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnClose(this,param_1);
  return;
}


// ---- OnSetExtent @ 100094ee

int __thiscall COleControl::OnSetExtent(COleControl *this,tagSIZE *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100094ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnSetExtent(this,param_1);
  return iVar1;
}


// ---- OnSetClientSite @ 100094f4

void __thiscall COleControl::OnSetClientSite(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x100094f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnSetClientSite(this);
  return;
}


// ---- DisplayError @ 100094fa

void __thiscall
COleControl::DisplayError
          (COleControl *this,long param_1,char *param_2,char *param_3,char *param_4,uint param_5)

{
                    /* WARNING: Could not recover jumptable at 0x100094fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DisplayError(this,param_1,param_2,param_3,param_4,param_5);
  return;
}


// ---- GetMessageString @ 10009500

void __thiscall COleControl::GetMessageString(COleControl *this,uint param_1,CString *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10009500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetMessageString(this,param_1,param_2);
  return;
}


// ---- OnDrawMetafile @ 10009506

void __thiscall COleControl::OnDrawMetafile(COleControl *this,CDC *param_1,CRect *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10009506. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnDrawMetafile(this,param_1,param_2);
  return;
}


// ---- GetClientRect @ 1000950c

void __thiscall COleControl::GetClientRect(COleControl *this,tagRECT *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x1000950c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetClientRect(this,param_1);
  return;
}


// ---- OnChildNotify @ 10009512

int __thiscall CWnd::OnChildNotify(CWnd *this,uint param_1,uint param_2,long param_3,long *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009512. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnChildNotify(this,param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- DefWindowProcA @ 10009518

long __thiscall
COleControl::DefWindowProcA(COleControl *this,uint param_1,uint param_2,long param_3)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = DefWindowProcA(this,param_1,param_2,param_3);
  return lVar1;
}


// ---- WindowProc @ 1000951e

long __thiscall COleControl::WindowProc(COleControl *this,uint param_1,uint param_2,long param_3)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000951e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = WindowProc(this,param_1,param_2,param_3);
  return lVar1;
}


// ---- GetConnectionHook @ 10009524

IConnectionPoint * __thiscall COleControl::GetConnectionHook(COleControl *this,_GUID *param_1)

{
  IConnectionPoint *pIVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = GetConnectionHook(this,param_1);
  return pIVar1;
}


// ---- GetExtraConnectionPoints @ 1000952a

int __thiscall COleControl::GetExtraConnectionPoints(COleControl *this,CPtrArray *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000952a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetExtraConnectionPoints(this,param_1);
  return iVar1;
}


// ---- GetInterfaceHook @ 10009530

IUnknown * __thiscall COleControl::GetInterfaceHook(COleControl *this,void *param_1)

{
  IUnknown *pIVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = GetInterfaceHook(this,param_1);
  return pIVar1;
}


// ---- OnCreateAggregates @ 10009536

int __thiscall COleControl::OnCreateAggregates(COleControl *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009536. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCreateAggregates(this);
  return iVar1;
}


// ---- GetInterfaceMap @ 1000953c

AFX_INTERFACEMAP * __thiscall COleControl::GetInterfaceMap(COleControl *this)

{
  AFX_INTERFACEMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000953c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetInterfaceMap(this);
  return pAVar1;
}


// ---- GetConnectionMap @ 10009542

AFX_CONNECTIONMAP * __thiscall COleControl::GetConnectionMap(COleControl *this)

{
  AFX_CONNECTIONMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009542. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetConnectionMap(this);
  return pAVar1;
}


// ---- GetDispatchIID @ 10009548

int __thiscall COleControl::GetDispatchIID(COleControl *this,_GUID *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetDispatchIID(this,param_1);
  return iVar1;
}


// ---- IsInvokeAllowed @ 1000954e

int __thiscall COleControl::IsInvokeAllowed(COleControl *this,long param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000954e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = IsInvokeAllowed(this,param_1);
  return iVar1;
}


// ---- OnFinalRelease @ 10009554

void __thiscall COleControl::OnFinalRelease(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x10009554. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnFinalRelease(this);
  return;
}


// ---- Serialize @ 1000955a

void __thiscall COleControl::Serialize(COleControl *this,CArchive *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x1000955a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Serialize(this,param_1);
  return;
}


// ---- ~COleControl @ 10009560

void __thiscall COleControl::~COleControl(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x10009560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~COleControl(this);
  return;
}


// ---- InitializeIIDs @ 10009566

void __thiscall COleControl::InitializeIIDs(COleControl *this,_GUID *param_1,_GUID *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10009566. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitializeIIDs(this,param_1,param_2);
  return;
}


// ---- COleControl @ 1000956c

void __thiscall COleControl::COleControl(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x1000956c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  COleControl(this);
  return;
}


// ---- SetControlSize @ 10009572

int __thiscall COleControl::SetControlSize(COleControl *this,int param_1,int param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009572. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetControlSize(this,param_1,param_2);
  return iVar1;
}


// ---- GetControlSize @ 10009578

void __thiscall COleControl::GetControlSize(COleControl *this,int *param_1,int *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10009578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetControlSize(this,param_1,param_2);
  return;
}


// ---- FillSolidRect @ 1000957e

void __thiscall CDC::FillSolidRect(CDC *this,tagRECT *param_1,ulong param_2)

{
                    /* WARNING: Could not recover jumptable at 0x1000957e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FillSolidRect(this,param_1,param_2);
  return;
}


// ---- DoSuperclassPaint @ 10009584

void __thiscall COleControl::DoSuperclassPaint(COleControl *this,CDC *param_1,CRect *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10009584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DoSuperclassPaint(this,param_1,param_2);
  return;
}


// ---- AmbientUserMode @ 1000958a

int __thiscall COleControl::AmbientUserMode(COleControl *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000958a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AmbientUserMode(this);
  return iVar1;
}


// ---- DoPropExchange @ 10009590

void __thiscall COleControl::DoPropExchange(COleControl *this,CPropExchange *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10009590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DoPropExchange(this,param_1);
  return;
}


// ---- OnResetState @ 10009596

void __thiscall COleControl::OnResetState(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x10009596. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnResetState(this);
  return;
}


// ---- ~CDialog @ 1000959c

void __thiscall CDialog::~CDialog(CDialog *this)

{
                    /* WARNING: Could not recover jumptable at 0x1000959c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CDialog(this);
  return;
}


// ---- DoModal @ 100095a2

int __thiscall CDialog::DoModal(CDialog *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100095a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = DoModal(this);
  return iVar1;
}


// ---- CDialog @ 100095a8

void __thiscall CDialog::CDialog(CDialog *this,uint param_1,CWnd *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x100095a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CDialog(this,param_1,param_2);
  return;
}


// ---- GetAmbientProperty @ 100095ae

int __thiscall
COleControl::GetAmbientProperty(COleControl *this,long param_1,ushort param_2,void *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100095ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetAmbientProperty(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- EnableWindow @ 100095b4

int __thiscall CWnd::EnableWindow(CWnd *this,int param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100095b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = EnableWindow(this,param_1);
  return iVar1;
}


// ---- Empty @ 100095ba

void __thiscall CString::Empty(CString *this)

{
                    /* WARNING: Could not recover jumptable at 0x100095ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Empty(this);
  return;
}


// ---- LoadStringA @ 100095c0

int __thiscall CString::LoadStringA(CString *this,uint param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100095c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = LoadStringA(this,param_1);
  return iVar1;
}


// ---- CString @ 100095c6

void __thiscall CString::CString(CString *this,char *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x100095c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CString(this,param_1);
  return;
}


// ---- OnDestroy @ 100095f0

void __thiscall COleControl::OnDestroy(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x100095f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnDestroy(this);
  return;
}


// ---- EndWaitCursor @ 100095f6

void __thiscall CCmdTarget::EndWaitCursor(CCmdTarget *this)

{
                    /* WARNING: Could not recover jumptable at 0x100095f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EndWaitCursor(this);
  return;
}


// ---- Refresh @ 100095fc

void __thiscall COleControl::Refresh(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x100095fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Refresh(this);
  return;
}


// ---- BeginWaitCursor @ 10009602

void __thiscall CCmdTarget::BeginWaitCursor(CCmdTarget *this)

{
                    /* WARNING: Could not recover jumptable at 0x10009602. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BeginWaitCursor(this);
  return;
}


// ---- Default @ 10009608

long __thiscall CWnd::Default(CWnd *this)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = Default(this);
  return lVar1;
}


// ---- Read @ 1000960e

uint __thiscall CArchive::Read(CArchive *this,void *param_1,uint param_2)

{
  uint uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000960e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = Read(this,param_1,param_2);
  return uVar1;
}


// ---- Write @ 10009614

void __thiscall CArchive::Write(CArchive *this,void *param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10009614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Write(this,param_1,param_2);
  return;
}


// ---- ReadCount @ 1000961a

ulong __thiscall CArchive::ReadCount(CArchive *this)

{
  ulong uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000961a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = ReadCount(this);
  return uVar1;
}


// ---- WriteCount @ 10009620

void __thiscall CArchive::WriteCount(CArchive *this,ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10009620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WriteCount(this,param_1);
  return;
}


// ---- AfxOleRegisterPropertyPageClass @ 10009626

int AfxOleRegisterPropertyPageClass(HINSTANCE__ *param_1,_GUID *param_2,uint param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009626. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AfxOleRegisterPropertyPageClass(param_1,param_2,param_3);
  return iVar1;
}


// ---- OnEditProperty @ 1000962c

int __thiscall COlePropertyPage::OnEditProperty(COlePropertyPage *this,long param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnEditProperty(this,param_1);
  return iVar1;
}


// ---- OnHelp @ 10009632

int __thiscall COlePropertyPage::OnHelp(COlePropertyPage *this,char *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009632. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnHelp(this,param_1);
  return iVar1;
}


// ---- OnObjectsChanged @ 10009638

void __thiscall COlePropertyPage::OnObjectsChanged(COlePropertyPage *this)

{
                    /* WARNING: Could not recover jumptable at 0x10009638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnObjectsChanged(this);
  return;
}


// ---- OnSetPageSite @ 1000963e

void __thiscall COlePropertyPage::OnSetPageSite(COlePropertyPage *this)

{
                    /* WARNING: Could not recover jumptable at 0x1000963e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnSetPageSite(this);
  return;
}


// ---- PreInitDialog @ 10009644

void __thiscall CDialog::PreInitDialog(CDialog *this)

{
                    /* WARNING: Could not recover jumptable at 0x10009644. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PreInitDialog(this);
  return;
}


// ---- OnCancel @ 1000964a

void __thiscall CDialog::OnCancel(CDialog *this)

{
                    /* WARNING: Could not recover jumptable at 0x1000964a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnCancel(this);
  return;
}


// ---- OnOK @ 10009650

void __thiscall CDialog::OnOK(CDialog *this)

{
                    /* WARNING: Could not recover jumptable at 0x10009650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnOK(this);
  return;
}


// ---- OnSetFont @ 10009656

void __thiscall CDialog::OnSetFont(CDialog *this,CFont *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10009656. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnSetFont(this,param_1);
  return;
}


// ---- OnInitDialog @ 1000965c

int __thiscall COlePropertyPage::OnInitDialog(COlePropertyPage *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000965c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnInitDialog(this);
  return iVar1;
}


// ---- SetOccDialogInfo @ 10009662

int __thiscall CDialog::SetOccDialogInfo(CDialog *this,_AFX_OCC_DIALOG_INFO *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009662. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetOccDialogInfo(this,param_1);
  return iVar1;
}


// ---- CheckAutoCenter @ 10009668

int __thiscall CDialog::CheckAutoCenter(CDialog *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009668. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CheckAutoCenter(this);
  return iVar1;
}


// ---- WindowProc @ 1000966e

long __thiscall
COlePropertyPage::WindowProc(COlePropertyPage *this,uint param_1,uint param_2,long param_3)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000966e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = WindowProc(this,param_1,param_2,param_3);
  return lVar1;
}


// ---- PreTranslateMessage @ 10009674

int __thiscall COlePropertyPage::PreTranslateMessage(COlePropertyPage *this,tagMSG *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009674. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = PreTranslateMessage(this,param_1);
  return iVar1;
}


// ---- OnCommand @ 1000967a

int __thiscall COlePropertyPage::OnCommand(COlePropertyPage *this,uint param_1,long param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000967a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCommand(this,param_1,param_2);
  return iVar1;
}


// ---- GetInterfaceMap @ 10009680

AFX_INTERFACEMAP * __thiscall COlePropertyPage::GetInterfaceMap(COlePropertyPage *this)

{
  AFX_INTERFACEMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetInterfaceMap(this);
  return pAVar1;
}


// ---- OnFinalRelease @ 10009686

void __thiscall COlePropertyPage::OnFinalRelease(COlePropertyPage *this)

{
                    /* WARNING: Could not recover jumptable at 0x10009686. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnFinalRelease(this);
  return;
}


// ---- OnCmdMsg @ 1000968c

int __thiscall
CDialog::OnCmdMsg(CDialog *this,uint param_1,int param_2,void *param_3,AFX_CMDHANDLERINFO *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000968c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCmdMsg(this,param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- COlePropertyPage @ 10009692

void __thiscall COlePropertyPage::COlePropertyPage(COlePropertyPage *this,uint param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10009692. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  COlePropertyPage(this,param_1,param_2);
  return;
}


// ---- ~COlePropertyPage @ 10009698

void __thiscall COlePropertyPage::~COlePropertyPage(COlePropertyPage *this)

{
                    /* WARNING: Could not recover jumptable at 0x10009698. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~COlePropertyPage(this);
  return;
}


// ---- DDP_PostProcessing @ 1000969e

void DDP_PostProcessing(CDataExchange *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x1000969e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DDP_PostProcessing(param_1);
  return;
}


// ---- ~CWinApp @ 100096a4

void __thiscall CWinApp::~CWinApp(CWinApp *this)

{
                    /* WARNING: Could not recover jumptable at 0x100096a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CWinApp(this);
  return;
}


// ---- CWinApp @ 1000971c

void __thiscall CWinApp::CWinApp(CWinApp *this,char *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x1000971c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CWinApp(this,param_1);
  return;
}


// ---- UpdateRegistryAll @ 1000972e

int COleObjectFactory::UpdateRegistryAll(int param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000972e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = UpdateRegistryAll(param_1);
  return iVar1;
}


// ---- AfxOleRegisterTypeLib @ 10009734

int AfxOleRegisterTypeLib(HINSTANCE__ *param_1,_GUID *param_2,char *param_3,char *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AfxOleRegisterTypeLib(param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- AfxOleUnregisterTypeLib @ 1000973a

int AfxOleUnregisterTypeLib(_GUID *param_1,ushort param_2,ushort param_3,ulong param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000973a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AfxOleUnregisterTypeLib(param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- FUN_1000974a @ 1000974a

undefined4 * FUN_1000974a(void)

{
  AFX_MODULE_STATE::AFX_MODULE_STATE((AFX_MODULE_STATE *)&DAT_1000e690,1,FUN_100097a8,0x600);
  DAT_1000e690 = &PTR_FUN_1000ae38;
  return &DAT_1000e690;
}


// ---- FUN_10009772 @ 10009772

AFX_MODULE_STATE * __thiscall FUN_10009772(void *this,byte param_1)

{
  AFX_MODULE_STATE::~AFX_MODULE_STATE(this);
  if ((param_1 & 1) != 0) {
    CNoTrackObject::operator_delete(this);
  }
  return this;
}


// ---- ~AFX_MODULE_STATE @ 1000978d

void __thiscall AFX_MODULE_STATE::~AFX_MODULE_STATE(AFX_MODULE_STATE *this)

{
                    /* WARNING: Could not recover jumptable at 0x10009b78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~AFX_MODULE_STATE(this);
  return;
}


// ---- FUN_10009792 @ 10009792

void FUN_10009792(void)

{
  FUN_100099ac((_onexit_t)&LAB_1000979e);
  return;
}


// ---- FUN_100097a8 @ 100097a8

/* WARNING: Function: _EH_prolog replaced with injection: EH_prolog */

void FUN_100097a8(HWND__ *param_1,uint param_2,uint param_3,long param_4)

{
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10009f30;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2
            ((AFX_MAINTAIN_STATE2 *)&local_18,(AFX_MODULE_STATE *)&DAT_1000e690);
  local_8 = 0;
  AfxWndProc(param_1,param_2,param_3,param_4);
  *(undefined4 *)(local_14 + 4) = local_18;
  ExceptionList = local_10;
  return;
}


// ---- FUN_100097ed @ 100097ed

undefined4 * FUN_100097ed(void)

{
  return &DAT_1000e690;
}


// ---- FUN_100097f3 @ 100097f3

int FUN_100097f3(HINSTANCE__ *param_1,int param_2)

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
      pAVar5 = AfxSetModuleState((AFX_MODULE_STATE *)&DAT_1000e690);
      p_Var3 = AfxGetThreadState();
      *(AFX_MODULE_STATE **)(p_Var3 + 8) = pAVar5;
      pAVar5 = AfxGetModuleState();
      if (*(int **)(pAVar5 + 4) != (int *)0x0) {
        (**(code **)(**(int **)(pAVar5 + 4) + 0x70))();
      }
      AfxLockTempMaps();
      AfxUnlockTempMaps(-1);
      AfxWinTerm();
      AfxTermExtensionModule((AFX_EXTENSION_MODULE *)&DAT_1000f720,1);
    }
    else if (param_2 == 3) {
      AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2
                ((AFX_MAINTAIN_STATE2 *)&local_c,(AFX_MODULE_STATE *)&DAT_1000e690);
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
  iVar4 = AfxWinInit(param_1,(HINSTANCE__ *)0x0,&DAT_1000e18c,0);
  if (iVar4 != 0) {
    pAVar5 = AfxGetModuleState();
    piVar2 = *(int **)(pAVar5 + 4);
    if ((piVar2 == (int *)0x0) || (iVar4 = (**(code **)(*piVar2 + 0x58))(), iVar4 != 0)) {
      *(undefined4 *)(p_Var3 + 8) = uVar1;
      AfxInitExtensionModule((AFX_EXTENSION_MODULE *)&DAT_1000f720,param_1);
      this = operator_new(0x40);
      if (this != (CDynLinkLibrary *)0x0) {
        CDynLinkLibrary::CDynLinkLibrary(this,(AFX_EXTENSION_MODULE *)&DAT_1000f720,0);
      }
      param_2 = 1;
      goto LAB_1000987f;
    }
    (**(code **)(*piVar2 + 0x70))();
  }
  AfxWinTerm();
LAB_1000987f:
  *(undefined4 *)(p_Var3 + 8) = uVar1;
  p_Var3 = AfxGetThreadState();
  AfxSetModuleState(*(AFX_MODULE_STATE **)(p_Var3 + 8));
  return param_2;
}


// ---- FUN_1000991a @ 1000991a

undefined4 FUN_1000991a(undefined4 param_1,int param_2)

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
    pAVar2 = AfxSetModuleState((AFX_MODULE_STATE *)&DAT_1000e690);
    *(AFX_MODULE_STATE **)(p_Var1 + 8) = pAVar2;
  }
  else if (param_2 == 0) {
    p_Var1 = AfxGetThreadState();
    AfxSetModuleState(*(AFX_MODULE_STATE **)(p_Var1 + 8));
  }
  return 1;
}


// ---- FUN_10009980 @ 10009980

void __cdecl FUN_10009980(_onexit_t param_1)

{
  if (DAT_1000f748 == -1) {
    _onexit(param_1);
    return;
  }
  __dllonexit(param_1,&DAT_1000f748,&DAT_1000f744);
  return;
}


// ---- FUN_100099ac @ 100099ac

int __cdecl FUN_100099ac(_onexit_t param_1)

{
  int iVar1;
  
  iVar1 = FUN_10009980(param_1);
  return (iVar1 != 0) - 1;
}


// ---- FUN_100099ef @ 100099ef

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100099ef(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *_Memory;
  undefined4 *puVar2;
  
  if (param_2 == 0) {
    if (0 < DAT_1000f73c) {
      DAT_1000f73c = DAT_1000f73c + -1;
      goto LAB_10009a05;
    }
LAB_10009a2d:
    uVar1 = 0;
  }
  else {
LAB_10009a05:
    _DAT_1000f740 = *(undefined4 *)_adjust_fdiv_exref;
    if (param_2 == 1) {
      DAT_1000f748 = malloc(0x80);
      if (DAT_1000f748 == (undefined4 *)0x0) goto LAB_10009a2d;
      *DAT_1000f748 = 0;
      DAT_1000f744 = DAT_1000f748;
      initterm(&DAT_1000c000,&DAT_1000c7d0);
      DAT_1000f73c = DAT_1000f73c + 1;
    }
    else if ((param_2 == 0) &&
            (_Memory = DAT_1000f748, puVar2 = DAT_1000f744, DAT_1000f748 != (undefined4 *)0x0)) {
      while (puVar2 = puVar2 + -1, _Memory <= puVar2) {
        if ((code *)*puVar2 != (code *)0x0) {
          (*(code *)*puVar2)();
          _Memory = DAT_1000f748;
        }
      }
      free(_Memory);
      DAT_1000f748 = (undefined4 *)0x0;
    }
    uVar1 = 1;
  }
  return uVar1;
}


// ---- entry @ 10009a9a

int entry(HINSTANCE__ *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_2;
  iVar2 = DAT_1000f73c;
  if (param_2 != 0) {
    if ((param_2 != 1) && (param_2 != 2)) goto LAB_10009ae2;
    if ((PTR_FUN_1000dcac != (undefined *)0x0) &&
       (iVar2 = (*(code *)PTR_FUN_1000dcac)(param_1,param_2,param_3), iVar2 == 0)) {
      return 0;
    }
    iVar2 = FUN_100099ef(param_1,param_2);
  }
  if (iVar2 == 0) {
    return 0;
  }
LAB_10009ae2:
  iVar2 = FUN_100097f3(param_1,param_2);
  if (param_2 == 1) {
    if (iVar2 != 0) {
      return iVar2;
    }
    FUN_100099ef(param_1,0);
  }
  if ((param_2 != 0) && (param_2 != 3)) {
    return iVar2;
  }
  iVar3 = FUN_100099ef(param_1,param_2);
  param_2 = iVar2;
  if (iVar3 == 0) {
    param_2 = 0;
  }
  if (param_2 != 0) {
    if (PTR_FUN_1000dcac != (undefined *)0x0) {
      iVar2 = (*(code *)PTR_FUN_1000dcac)(param_1,iVar1,param_3);
      return iVar2;
    }
    return param_2;
  }
  return 0;
}


// ---- FUN_10009b37 @ 10009b37

type_info * __thiscall FUN_10009b37(void *this,byte param_1)

{
  type_info::~type_info(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- _EH_prolog @ 10009b54

/* WARNING: This is an inlined function */
/* WARNING: Function: _EH_prolog replaced with injection: EH_prolog */

void _EH_prolog(void)

{
  undefined1 auStack_c [12];
  
  ExceptionList = auStack_c;
                    /* WARNING: Could not recover jumptable at 0x10009b54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  return;
}


// ---- __dllonexit @ 10009b5a

void __dllonexit(void)

{
                    /* WARNING: Could not recover jumptable at 0x10009b5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __dllonexit();
  return;
}


// ---- initterm @ 10009b60

void __cdecl initterm(void)

{
                    /* WARNING: Could not recover jumptable at 0x10009b60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  initterm();
  return;
}


// ---- ~type_info @ 10009b66

void __thiscall type_info::~type_info(type_info *this)

{
                    /* WARNING: Could not recover jumptable at 0x10009b66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~type_info(this);
  return;
}


// ---- AFX_MODULE_STATE @ 10009b6c

void __thiscall
AFX_MODULE_STATE::AFX_MODULE_STATE
          (AFX_MODULE_STATE *this,int param_1,_func_long_HWND___ptr_uint_uint_long *param_2,
          ulong param_3)

{
                    /* WARNING: Could not recover jumptable at 0x10009b6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AFX_MODULE_STATE(this,param_1,param_2,param_3);
  return;
}


// ---- operator_delete @ 10009b72

void CNoTrackObject::operator_delete(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10009b72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  operator_delete(param_1);
  return;
}


// ---- ~AFX_MODULE_STATE @ 10009b78

void __thiscall AFX_MODULE_STATE::~AFX_MODULE_STATE(AFX_MODULE_STATE *this)

{
                    /* WARNING: Could not recover jumptable at 0x10009b78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~AFX_MODULE_STATE(this);
  return;
}


// ---- AfxWndProc @ 10009b7e

long AfxWndProc(HWND__ *param_1,uint param_2,uint param_3,long param_4)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009b7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = AfxWndProc(param_1,param_2,param_3,param_4);
  return lVar1;
}


// ---- AfxTermThread @ 10009b84

void AfxTermThread(HINSTANCE__ *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10009b84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AfxTermThread(param_1);
  return;
}


// ---- AfxTermExtensionModule @ 10009b8a

void AfxTermExtensionModule(AFX_EXTENSION_MODULE *param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10009b8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AfxTermExtensionModule(param_1,param_2);
  return;
}


// ---- AfxUnlockTempMaps @ 10009b90

int AfxUnlockTempMaps(int param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AfxUnlockTempMaps(param_1);
  return iVar1;
}


// ---- AfxLockTempMaps @ 10009b96

void AfxLockTempMaps(void)

{
                    /* WARNING: Could not recover jumptable at 0x10009b96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AfxLockTempMaps();
  return;
}


// ---- AfxSetModuleState @ 10009b9c

AFX_MODULE_STATE * AfxSetModuleState(AFX_MODULE_STATE *param_1)

{
  AFX_MODULE_STATE *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009b9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = AfxSetModuleState(param_1);
  return pAVar1;
}


// ---- CDynLinkLibrary @ 10009ba2

void __thiscall
CDynLinkLibrary::CDynLinkLibrary(CDynLinkLibrary *this,AFX_EXTENSION_MODULE *param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10009ba2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CDynLinkLibrary(this,param_1,param_2);
  return;
}


// ---- AfxInitExtensionModule @ 10009ba8

int AfxInitExtensionModule(AFX_EXTENSION_MODULE *param_1,HINSTANCE__ *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AfxInitExtensionModule(param_1,param_2);
  return iVar1;
}


// ---- AfxWinTerm @ 10009bae

void AfxWinTerm(void)

{
                    /* WARNING: Could not recover jumptable at 0x10009bae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AfxWinTerm();
  return;
}


// ---- AfxWinInit @ 10009bb4

int AfxWinInit(HINSTANCE__ *param_1,HINSTANCE__ *param_2,char *param_3,int param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009bb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AfxWinInit(param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- AfxGetThreadState @ 10009bba

_AFX_THREAD_STATE * AfxGetThreadState(void)

{
  _AFX_THREAD_STATE *p_Var1;
  
                    /* WARNING: Could not recover jumptable at 0x10009bba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  p_Var1 = AfxGetThreadState();
  return p_Var1;
}


// ---- AfxCoreInitModule @ 10009bc0

void AfxCoreInitModule(void)

{
                    /* WARNING: Could not recover jumptable at 0x10009bc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AfxCoreInitModule();
  return;
}


// ---- AfxDllGetClassObject @ 10009bc6

long AfxDllGetClassObject(_GUID *param_1,_GUID *param_2,void **param_3)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009bc6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = AfxDllGetClassObject(param_1,param_2,param_3);
  return lVar1;
}


// ---- AfxDllCanUnloadNow @ 10009bcc

long AfxDllCanUnloadNow(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009bcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = AfxDllCanUnloadNow();
  return lVar1;
}


// ---- DllGetClassObject @ 10009bd2

HRESULT DllGetClassObject(IID *rclsid,IID *riid,LPVOID *ppv)

{
  AFX_MODULE_STATE *pAVar1;
  long lVar2;
  undefined4 local_c;
  int local_8;
  
                    /* 0x9bd2  2  DllGetClassObject */
  pAVar1 = (AFX_MODULE_STATE *)FUN_100097ed();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)&local_c,pAVar1);
  lVar2 = AfxDllGetClassObject(rclsid,riid,ppv);
  *(undefined4 *)(local_8 + 4) = local_c;
  return lVar2;
}


// ---- DllCanUnloadNow @ 10009c00

HRESULT DllCanUnloadNow(void)

{
  AFX_MODULE_STATE *pAVar1;
  long lVar2;
  undefined4 local_c;
  int local_8;
  
                    /* 0x9c00  1  DllCanUnloadNow */
  pAVar1 = (AFX_MODULE_STATE *)FUN_100097ed();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)&local_c,pAVar1);
  lVar2 = AfxDllCanUnloadNow();
  *(undefined4 *)(local_8 + 4) = local_c;
  return lVar2;
}


// ---- Unwind@10009c30 @ 10009c30

void Unwind_10009c30(void)

{
  int unaff_EBP;
  
  CComboBox::~CComboBox(*(CComboBox **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10009c38 @ 10009c38

void Unwind_10009c38(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x10) + 0x48));
  return;
}


// ---- Unwind@10009c50 @ 10009c50

void Unwind_10009c50(void)

{
  int unaff_EBP;
  
  CComboBox::~CComboBox(*(CComboBox **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10009c70 @ 10009c70

void Unwind_10009c70(void)

{
  int unaff_EBP;
  
  FUN_100055e0((CGdiObject *)(unaff_EBP + -0x24));
  return;
}


// ---- Unwind@10009c78 @ 10009c78

void Unwind_10009c78(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 4));
  return;
}


// ---- Unwind@10009c80 @ 10009c80

void Unwind_10009c80(void)

{
  int unaff_EBP;
  
  FUN_10004120((undefined4 *)(unaff_EBP + -0x24));
  return;
}


// ---- Unwind@10009ca0 @ 10009ca0

void Unwind_10009ca0(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10009ca8 @ 10009ca8

void Unwind_10009ca8(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 4));
  return;
}


// ---- Unwind@10009cc0 @ 10009cc0

void Unwind_10009cc0(void)

{
  int unaff_EBP;
  
  FUN_100042f0(*(void **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10009ce0 @ 10009ce0

void Unwind_10009ce0(void)

{
  int unaff_EBP;
  
  FUN_100048e0((undefined4 *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@10009d00 @ 10009d00

void Unwind_10009d00(void)

{
  int unaff_EBP;
  
  COleControl::~COleControl(*(COleControl **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10009d08 @ 10009d08

void Unwind_10009d08(void)

{
  int unaff_EBP;
  
  FUN_10003f10((CComboBox *)(*(int *)(unaff_EBP + -0x10) + 0x1dc));
  return;
}


// ---- Unwind@10009d20 @ 10009d20

void Unwind_10009d20(void)

{
  int unaff_EBP;
  
  COleControl::~COleControl(*(COleControl **)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@10009d28 @ 10009d28

void Unwind_10009d28(void)

{
  int unaff_EBP;
  
  FUN_10003f10((CComboBox *)(*(int *)(unaff_EBP + -0x14) + 0x1dc));
  return;
}


// ---- Unwind@10009d36 @ 10009d36

void Unwind_10009d36(void)

{
  int unaff_EBP;
  
  CComboBox::~CComboBox(*(CComboBox **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10009d50 @ 10009d50

void Unwind_10009d50(void)

{
  int unaff_EBP;
  
  CDialog::~CDialog((CDialog *)(unaff_EBP + -0x6c));
  return;
}


// ---- Unwind@10009d70 @ 10009d70

void Unwind_10009d70(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0xf4));
  return;
}


// ---- Unwind@10009d7b @ 10009d7b

void Unwind_10009d7b(void)

{
  int unaff_EBP;
  
  FUN_100053b0((undefined4 *)(unaff_EBP + -0xf0));
  return;
}


// ---- Unwind@10009d86 @ 10009d86

void Unwind_10009d86(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0xdc));
  return;
}


// ---- Unwind@10009d91 @ 10009d91

void Unwind_10009d91(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0xd8));
  return;
}


// ---- Unwind@10009d9c @ 10009d9c

void Unwind_10009d9c(void)

{
  int unaff_EBP;
  
  FUN_10004120((undefined4 *)(unaff_EBP + -0xf0));
  return;
}


// ---- Unwind@10009da7 @ 10009da7

void Unwind_10009da7(void)

{
  int unaff_EBP;
  
  FUN_10004120((undefined4 *)(unaff_EBP + -0xf0));
  return;
}


// ---- Unwind@10009db2 @ 10009db2

void Unwind_10009db2(void)

{
  int unaff_EBP;
  
  FUN_10004120((undefined4 *)(unaff_EBP + -0xf0));
  return;
}


// ---- Unwind@10009dbd @ 10009dbd

void Unwind_10009dbd(void)

{
  int unaff_EBP;
  
  FUN_10004120((undefined4 *)(unaff_EBP + -0xf0));
  return;
}


// ---- Unwind@10009dc8 @ 10009dc8

void Unwind_10009dc8(void)

{
  int unaff_EBP;
  
  FUN_10004120((undefined4 *)(unaff_EBP + -0xf0));
  return;
}


// ---- Unwind@10009dd3 @ 10009dd3

void Unwind_10009dd3(void)

{
  int unaff_EBP;
  
  FUN_10004120((undefined4 *)(unaff_EBP + -0xf0));
  return;
}


// ---- Unwind@10009df0 @ 10009df0

void Unwind_10009df0(void)

{
  FUN_10005690();
  return;
}


// ---- Unwind@10009e10 @ 10009e10

void Unwind_10009e10(void)

{
  int unaff_EBP;
  
  FUN_100042f0(*(void **)(unaff_EBP + 8));
  return;
}


// ---- Unwind@10009e30 @ 10009e30

void Unwind_10009e30(void)

{
  int unaff_EBP;
  
  FUN_10004120(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10009e50 @ 10009e50

void Unwind_10009e50(void)

{
  int unaff_EBP;
  
  FUN_10004120(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10009e70 @ 10009e70

void Unwind_10009e70(void)

{
  int unaff_EBP;
  
  FUN_10004120(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10009e90 @ 10009e90

void Unwind_10009e90(void)

{
  int unaff_EBP;
  
  FUN_100042f0(*(void **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10009eb0 @ 10009eb0

void Unwind_10009eb0(void)

{
  int unaff_EBP;
  
  FUN_100042f0(*(void **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10009ed0 @ 10009ed0

void Unwind_10009ed0(void)

{
  int unaff_EBP;
  
  FUN_10004120(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10009ef0 @ 10009ef0

void Unwind_10009ef0(void)

{
  int unaff_EBP;
  
  FUN_10004120(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10009f10 @ 10009f10

void Unwind_10009f10(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x184));
  return;
}


// ---- Unwind@10009f28 @ 10009f28

void Unwind_10009f28(void)

{
  int unaff_EBP;
  
  FUN_100048e0((undefined4 *)(unaff_EBP + -0x14));
  return;
}


