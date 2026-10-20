// Decompiled with Ghidra from leobtn.ocx
// Format: Portable Executable (PE), image base 10000000

// ---- FUN_10001010 @ 10001010

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001010(void)

{
  _DAT_1000e1a8 = RegisterWindowMessageA(s_LEO_D_SET_STATE_1000c848);
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
  puStack_8 = &LAB_100092ea;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pCVar1 = operator_new(0x1ec);
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
  return &PTR_s_CLEOButtonCtrl_1000a470;
}


// ---- FUN_10003ef0 @ 10003ef0

undefined ** FUN_10003ef0(void)

{
  return &PTR_LAB_1000a488;
}


// ---- FUN_10003f10 @ 10003f10

undefined ** FUN_10003f10(void)

{
  return &PTR_LAB_1000a580;
}


// ---- FUN_10003f20 @ 10003f20

undefined * FUN_10003f20(void)

{
  return &DAT_1000e1b0;
}


// ---- FUN_10003f60 @ 10003f60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10003f60(int *param_1)

{
  if (DAT_1000c7ec == -1) {
    _DAT_1000ddc0 = DAT_1000aa48;
    _DAT_1000ddc4 = DAT_1000aa4c;
    _DAT_1000ddc8 = DAT_1000aa50;
    _DAT_1000ddcc = DAT_1000aa54;
    DAT_1000c7ec = 1;
    *param_1 = 1;
    return &DAT_1000ddc0;
  }
  *param_1 = DAT_1000c7ec;
  return &DAT_1000ddc0;
}


// ---- FUN_10003fd0 @ 10003fd0

void FUN_10003fd0(void)

{
  FUN_10003ff0(&DAT_1000dd70,(_GUID *)&DAT_1000a660,(CRuntimeClass *)&PTR_s_CLEOButtonCtrl_1000a470,
               0,"LEOBUTTON.LEOButtonCtrl.1");
  return;
}


// ---- FUN_10003ff0 @ 10003ff0

COleObjectFactory * __thiscall
FUN_10003ff0(void *this,_GUID *param_1,CRuntimeClass *param_2,int param_3,char *param_4)

{
  COleObjectFactory::COleObjectFactory(this,param_1,param_2,param_3,param_4);
  *(undefined ***)this = &PTR_LAB_1000a690;
  return this;
}


// ---- FUN_10004020 @ 10004020

void FUN_10004020(void)

{
  return;
}


// ---- FUN_10004030 @ 10004030

void FUN_10004030(void)

{
  return;
}


// ---- ~COleObjectFactory @ 10004040

void __thiscall COleObjectFactory::~COleObjectFactory(COleObjectFactory *this)

{
                    /* WARNING: Could not recover jumptable at 0x1000897c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~COleObjectFactory(this);
  return;
}


// ---- FUN_10004050 @ 10004050

void FUN_10004050(void)

{
  FUN_1000904c((_onexit_t)&LAB_10004060);
  return;
}


// ---- FUN_10004080 @ 10004080

undefined4 FUN_10004080(undefined4 *param_1)

{
  *param_1 = DAT_1000a660;
  param_1[1] = DAT_1000a664;
  param_1[2] = DAT_1000a668;
  param_1[3] = DAT_1000a66c;
  return 0;
}


// ---- FUN_100040b0 @ 100040b0

void FUN_100040b0(LCID param_1,ITypeLib **param_2)

{
  LoadRegTypeLib((GUID *)&DAT_1000a940,DAT_1000a950,DAT_1000a952,param_1,param_2);
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
  puStack_8 = &LAB_10009308;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2
            ((AFX_MAINTAIN_STATE2 *)&local_14,*(AFX_MODULE_STATE **)(param_1 + 0x1c));
  local_4 = 0;
  AfxGetTypeLibCache((_GUID *)&DAT_1000a940);
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
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10009352;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  COleControl::COleControl(param_1);
  local_4 = 0;
  CString::CString((CString *)(param_1 + 0x1d4));
  local_4._0_1_ = 1;
  CString::CString((CString *)(param_1 + 0x1d8));
  local_4._0_1_ = 2;
  CString::CString((CString *)(param_1 + 0x1e8));
  local_4 = CONCAT31(local_4._1_3_,3);
  *(undefined ***)param_1 = &PTR_FUN_1000a704;
  COleControl::InitializeIIDs(param_1,(_GUID *)&DAT_1000a670,(_GUID *)&DAT_1000a680);
  *(undefined4 *)(param_1 + 0x1cc) = 0;
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  *(undefined4 *)(param_1 + 0x1dc) = 0;
  *(undefined4 *)(param_1 + 0x1e0) = 1;
  CString::operator=((CString *)(param_1 + 0x1d4),s_LEO_Button_Control_1000dc88);
  CString::operator=((CString *)(param_1 + 0x1d8),&DAT_1000e1bc);
  *(undefined4 *)(param_1 + 0xbc) = 1;
  *(undefined4 *)(param_1 + 0x1e4) = 0;
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  ExceptionList = local_c;
  return param_1;
}


// ---- FUN_10004290 @ 10004290

COleControl * __thiscall FUN_10004290(void *this,byte param_1)

{
  FUN_100042b0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_100042b0 @ 100042b0

void __fastcall FUN_100042b0(COleControl *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_10009392;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)param_1 = &PTR_FUN_1000a704;
  local_4 = 3;
  if (*(int **)(param_1 + 0x1d0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x1d0) + 4))(1);
  }
  local_4._0_1_ = 2;
  CString::~CString((CString *)(param_1 + 0x1e8));
  local_4._0_1_ = 1;
  CString::~CString((CString *)(param_1 + 0x1d8));
  local_4 = (uint)local_4._1_3_ << 8;
  CString::~CString((CString *)(param_1 + 0x1d4));
  local_4 = 0xffffffff;
  COleControl::~COleControl(param_1);
  ExceptionList = pvStack_c;
  return;
}


// ---- FUN_10004360 @ 10004360

void __thiscall FUN_10004360(void *this,CDC *param_1,RECT *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  DWORD DVar5;
  COLORREF color;
  HBRUSH pHVar6;
  int iVar7;
  LPCSTR unaff_EBP;
  CString *pCVar8;
  LONG LVar9;
  LONG LVar10;
  CString local_2c [4];
  CPen *local_28;
  undefined **local_24;
  undefined8 local_20;
  undefined1 local_18 [4];
  undefined1 local_14 [8];
  void *pvStack_c;
  undefined1 *puStack_8;
  CString *local_4;
  
  local_4 = (CString *)0xffffffff;
  puStack_8 = &LAB_100093c8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  CString::CString(local_2c);
  local_4 = (CString *)0x0;
  iVar4 = COleControl::AmbientUserMode(this);
  if (iVar4 != 0) {
    COleControl::DoSuperclassPaint(this,param_1,(CRect *)param_2);
    goto LAB_100045d4;
  }
  DVar5 = GetSysColor(0x14);
  CPen::CPen((CPen *)((int)&local_20 + 4),0,1,DVar5);
  local_4._0_1_ = 1;
  local_28 = CDC::SelectObject(param_1,(CPen *)((int)&local_20 + 4));
  local_20._0_4_ = 0;
  local_24 = &PTR_GetRuntimeClass_1000a924;
  local_4 = (CString *)CONCAT31(local_4._1_3_,2);
  color = GetBkColor(*(HDC *)(param_1 + 8));
  pHVar6 = CreateSolidBrush(color);
  CGdiObject::Attach((CGdiObject *)&local_24,pHVar6);
  FillRect(*(HDC *)(param_1 + 4),param_2,
           (HBRUSH)(-(uint)(&stack0x00000000 != (undefined1 *)0x24) & (uint)local_20));
  Rectangle(*(HDC *)(param_1 + 4),param_2->left,param_2->top,param_2->right,param_2->bottom);
  LVar10 = param_2->top;
  CDC::MoveTo(param_1,(int)local_14,param_2->left);
  CDC::LineTo(param_1,param_2->right,param_2->bottom);
  LVar9 = param_2->bottom;
  CDC::MoveTo(param_1,(int)local_18,param_2->left);
  CDC::LineTo(param_1,param_2->right,param_2->top);
  puStack_8 = (undefined1 *)(**(code **)(*(int *)param_1 + 0x2c))(0x11,LVar9);
  COleControl::GetAmbientProperty(this,-0x2be,8,(CString *)((int)this + 0x1d4));
  if (*(int *)((int)this + 0x1dc) == 0) {
LAB_100044c3:
    iVar4 = _mbscmp(*(uchar **)((int)this + 0x1d8),&DAT_1000e1bc);
    pCVar8 = (CString *)((int)this + 0x1d4);
    if (iVar4 != 0) {
      pCVar8 = (CString *)((int)this + 0x1d8);
    }
  }
  else {
    local_4 = (CString *)((int)this + 0x1e8);
    iVar4 = _mbscmp(*(uchar **)local_4,&DAT_1000e1bc);
    pCVar8 = local_4;
    if (iVar4 == 0) goto LAB_100044c3;
  }
  CString::operator=((CString *)&stack0xffffffc8,pCVar8);
  GetTextExtentPoint32A(*(HDC *)(param_1 + 8),unaff_EBP,*(int *)(unaff_EBP + -8),(LPSIZE)&local_20);
  iVar4 = param_2->left;
  iVar7 = (param_2->right - iVar4) - (uint)local_20;
  iVar1 = param_2->bottom;
  iVar2 = param_2->top;
  iVar3 = *(int *)param_1;
  DVar5 = GetSysColor(0xf);
  (**(code **)(iVar3 + 0x34))(DVar5);
  iVar3 = *(int *)param_1;
  DVar5 = GetSysColor(0x12);
  (**(code **)(iVar3 + 0x38))(DVar5);
  (**(code **)(*(int *)param_1 + 100))
            (iVar7 / 2 + iVar4,((iVar1 - iVar2) - (int)local_20._4_4_) / 2 + iVar2,LVar10,
             *(undefined4 *)(LVar10 + -8));
  (**(code **)(*(int *)param_1 + 0x30))((uint)local_20);
  if (&stack0x00000000 != (undefined1 *)0x28) {
    SelectObject(*(HDC *)(param_1 + 4),&local_28);
  }
  local_24 = &PTR_GetRuntimeClass_1000a910;
  local_4._0_1_ = 3;
  CGdiObject::DeleteObject((CGdiObject *)&local_24);
  local_20._4_4_ = &PTR_GetRuntimeClass_1000a910;
  local_24 = &PTR_GetRuntimeClass_1000a8fc;
  local_4 = (CString *)CONCAT31(local_4._1_3_,4);
  CGdiObject::DeleteObject((CGdiObject *)((int)&local_20 + 4));
  local_20._4_4_ = &PTR_GetRuntimeClass_1000a8fc;
LAB_100045d4:
  local_4 = (CString *)0xffffffff;
  CString::~CString(local_2c);
  ExceptionList = pvStack_c;
  return;
}


// ---- FUN_10004600 @ 10004600

undefined4 * __thiscall FUN_10004600(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_GetRuntimeClass_1000a8fc;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}


// ---- FUN_10004620 @ 10004620

void __fastcall FUN_10004620(undefined4 *param_1)

{
  *param_1 = &PTR_GetRuntimeClass_1000a8fc;
  return;
}


// ---- FUN_10004630 @ 10004630

void __thiscall FUN_10004630(void *this,CPropExchange *param_1)

{
  (*(code *)**(undefined4 **)param_1)((int)this + 0x48,CONCAT22(DAT_1000a950,DAT_1000a952),1);
  COleControl::DoPropExchange(this,param_1);
  return;
}


// ---- FUN_10004680 @ 10004680

void FUN_10004680(void)

{
  CDialog local_6c [96];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_100093e8;
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


// ---- FUN_100046e0 @ 100046e0

void __thiscall FUN_100046e0(CWnd *param_1,tagCREATESTRUCTA *param_2)

{
  *(char **)(param_2 + 0x28) = s_BUTTON_1000dc9c;
  if (*(int *)(param_1 + 0x1e0) == 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) | 2;
  }
  CWnd::PreCreateWindow(param_1,param_2);
  return;
}


// ---- FUN_10004710 @ 10004710

undefined4 FUN_10004710(void)

{
  return 1;
}


// ---- FUN_10004720 @ 10004720

undefined4 FUN_10004720(void)

{
  return 0;
}


// ---- FUN_10004730 @ 10004730

void __fastcall FUN_10004730(CWnd *param_1)

{
  CWnd::EnableWindow(param_1,*(int *)(param_1 + 0xbc));
  return;
}


// ---- FUN_10004740 @ 10004740

undefined4 __thiscall FUN_10004740(CWnd *param_1,int param_2,int param_3)

{
  if ((*(int *)(param_1 + 0x1cc) != 0) && (param_2 == *(int *)(param_1 + 0x1c0))) {
    if ((param_3 != 3) && (param_3 != 4)) {
      FUN_100047c0(param_1);
      return 0;
    }
    *(uint *)(param_1 + 0xbc) = (uint)(param_3 == 3);
    CWnd::EnableWindow(param_1,(uint)(param_3 == 3));
  }
  return 0;
}


// ---- FUN_10004790 @ 10004790

undefined4 __fastcall FUN_10004790(CWnd *param_1)

{
  if (*(int *)(param_1 + 0x1cc) != 0) {
    FUN_100047c0(param_1);
  }
  return 0;
}


// ---- FUN_100047b0 @ 100047b0

void __fastcall FUN_100047b0(undefined4 *param_1)

{
  *(undefined4 *)(param_1[1] + 4) = *param_1;
  return;
}


// ---- FUN_100047c0 @ 100047c0

void __fastcall FUN_100047c0(CWnd *param_1)

{
  int iVar1;
  LRESULT LVar2;
  char *pcVar3;
  LPARAM lParam;
  CWnd *local_4;
  
  if (*(int *)(param_1 + 0x1cc) != 0) {
    local_4 = param_1;
    if (*(int *)(param_1 + 0x1dc) != 0) {
      iVar1 = _mbscmp(*(uchar **)(param_1 + 0x1e8),&DAT_1000e1bc);
      if (iVar1 != 0) {
        CWnd::SetWindowTextA(param_1,*(char **)(param_1 + 0x1e8));
        return;
      }
      iVar1 = _mbscmp(*(uchar **)(param_1 + 0x1d8),&DAT_1000e1bc);
      if (iVar1 == 0) {
        CWnd::SetWindowTextA(param_1,*(char **)(param_1 + 0x1d4));
        return;
      }
      CWnd::SetWindowTextA(param_1,*(char **)(param_1 + 0x1d8));
      return;
    }
    if (0 < *(int *)(param_1 + 0x1c0)) {
      iVar1 = FUN_10008320(*(void **)(param_1 + 0x1d0),*(int *)(param_1 + 0x1c0),
                           (CString *)(param_1 + 0x1d4));
      if (iVar1 == 1) {
        iVar1 = _mbscmp(*(uchar **)(param_1 + 0x1d8),&DAT_1000e1bc);
        if (iVar1 == 0) {
          pcVar3 = *(char **)(param_1 + 0x1d4);
        }
        else {
          pcVar3 = *(char **)(param_1 + 0x1d8);
        }
        CWnd::SetWindowTextA(param_1,pcVar3);
        if (*(int *)(param_1 + 0x1e0) == 0) {
          iVar1 = FUN_10008410(*(void **)(param_1 + 0x1d0),*(undefined4 *)(param_1 + 0x1c0),&local_4
                              );
          if (iVar1 != 1) {
            return;
          }
          lParam = 0;
          iVar1 = ftol();
          SendMessageA(*(HWND *)(param_1 + 0x20),0xf1,(uint)(iVar1 != 0),lParam);
        }
        LVar2 = SendMessageA(*(HWND *)(param_1 + 0x1c4),DAT_1000dfec,*(WPARAM *)(param_1 + 0x1c8),
                             *(LPARAM *)(param_1 + 0x1c0));
        if (-1 < LVar2) {
          *(LRESULT *)(param_1 + 0xbc) = LVar2;
          CWnd::EnableWindow(param_1,LVar2);
        }
      }
    }
  }
  return;
}


// ---- FUN_10004920 @ 10004920

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_10004920(CWnd *param_1,uint param_2,LPCSTR param_3,HWND param_4,HWND param_5)

{
  int iVar1;
  BOOL BVar2;
  LRESULT LVar3;
  void *this;
  undefined4 *puVar4;
  HWND pHVar5;
  uint uVar6;
  undefined4 uVar7;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &UNK_1000940a;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if ((param_3 == (LPCSTR)0x0) ||
     (ExceptionList = &pvStack_c, iVar1 = lstrlenA(param_3), iVar1 == 0)) {
    *(undefined4 *)(param_1 + 0x1dc) = 0;
    uVar6 = param_2 >> 0x10;
    if (uVar6 < 100) {
      ExceptionList = pvStack_c;
      return 0;
    }
    if (uVar6 < 0x66) {
      *(undefined4 *)(param_1 + 0x1e0) = 1;
    }
    else {
      if (uVar6 != 200) {
        ExceptionList = pvStack_c;
        return 0;
      }
      *(undefined4 *)(param_1 + 0x1e0) = 0;
    }
  }
  else {
    CString::operator=((CString *)(param_1 + 0x1d4),param_3);
    CString::operator=((CString *)(param_1 + 0x1e8),&DAT_1000e1bc);
    *(undefined4 *)(param_1 + 0x1dc) = 1;
    *(undefined4 *)(param_1 + 0x1e4) = 0;
    *(undefined4 *)(param_1 + 0x1c0) = 0;
  }
  BVar2 = IsWindow(param_4);
  if ((BVar2 == 0) || (BVar2 = IsWindow(param_5), BVar2 == 0)) {
    ExceptionList = pvStack_c;
    return 0;
  }
  if (*(int *)(param_1 + 0x1cc) == 0) {
    *(HWND *)(param_1 + 0x1c4) = param_4;
    *(HWND *)(param_1 + 0x1c8) = param_5;
    LVar3 = SendMessageA(param_4,_DAT_1000e0a4,0,0);
    if (LVar3 != 0) {
      this = operator_new(0x20);
      uStack_4 = 0;
      if (this == (void *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4 = FUN_100082a0(this,*(undefined4 *)(param_1 + 0x1c4),*(undefined4 *)(param_1 + 0x1c8)
                             );
      }
      uStack_4 = 0xffffffff;
      *(undefined4 **)(param_1 + 0x1d0) = puVar4;
      if (param_1 == (CWnd *)0x0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(undefined4 *)(param_1 + 0x20);
      }
      iVar1 = func_0x100085c0(1,1,uVar7);
      if (0 < iVar1) {
        *(undefined4 *)(param_1 + 0x1cc) = 1;
      }
    }
    if (*(int *)(param_1 + 0x1cc) == 0) goto LAB_10004b30;
  }
  if ((*(uint *)(param_1 + 0x1c0) != param_2) && (*(int *)(param_1 + 0x1dc) == 0)) {
    if (param_1 == (CWnd *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined4 *)(param_1 + 0x20);
    }
    func_0x100085c0(param_2,1,uVar7);
    if (*(int *)(param_1 + 0x1c0) != 0) {
      if (param_1 == (CWnd *)0x0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(undefined4 *)(param_1 + 0x20);
      }
      func_0x100085c0(*(int *)(param_1 + 0x1c0),0,uVar7);
    }
    *(uint *)(param_1 + 0x1c0) = param_2;
  }
  if (param_1 == (CWnd *)0x0) {
    pHVar5 = (HWND)0x0;
  }
  else {
    pHVar5 = *(HWND *)(param_1 + 0x20);
  }
  BVar2 = IsWindow(pHVar5);
  if (BVar2 != 0) {
    if (param_1 == (CWnd *)0x0) {
      pHVar5 = (HWND)0x0;
    }
    else {
      pHVar5 = *(HWND *)(param_1 + 0x20);
    }
    uVar6 = GetWindowLongA(pHVar5,-0x10);
    if ((*(int *)(param_1 + 0x1e0) == 0) && (*(int *)(param_1 + 0x1dc) == 0)) {
      uVar6 = uVar6 | 2;
    }
    else {
      uVar6 = uVar6 & 0xfffffffd;
    }
    if (param_1 == (CWnd *)0x0) {
      pHVar5 = (HWND)0x0;
    }
    else {
      pHVar5 = *(HWND *)(param_1 + 0x20);
    }
    SetWindowLongA(pHVar5,-0x10,uVar6);
    FUN_100047c0(param_1);
  }
LAB_10004b30:
  ExceptionList = pvStack_c;
  return *(undefined4 *)(param_1 + 0x1cc);
}


// ---- FUN_10004cb0 @ 10004cb0

void __thiscall FUN_10004cb0(CWnd *param_1,char *param_2)

{
  CString::operator=((CString *)(param_1 + 0x1d8),param_2);
  CWnd::SetWindowTextA(param_1,*(char **)(param_1 + 0x1d8));
  return;
}


// ---- FUN_10004ce0 @ 10004ce0

undefined4 __thiscall FUN_10004ce0(void *this,undefined4 param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  CString local_18 [4];
  CString local_14 [4];
  CString local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10009438;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CString::CString(local_14);
  local_4 = 0;
  CString::CString(local_10);
  local_4._0_1_ = 1;
  CString::CString(local_18);
  local_4 = CONCAT31(local_4._1_3_,2);
  pcVar1 = *(char **)(param_2 + 8);
  CString::operator=(local_14,pcVar1);
  CString::MakeUpper(local_14);
  CString::operator=(local_10,pcVar1 + 0x41a);
  CString::operator=(local_18,pcVar1 + 0x15e);
  CString::operator=((CString *)((int)this + 0x1e8),local_18);
  iVar2 = *(int *)(pcVar1 + 0x578);
  if (iVar2 != 2) {
    if (iVar2 != 3) {
      if (iVar2 == 4) {
        MessageBeep(0x40);
      }
      goto LAB_10004db8;
    }
    MessageBeep(0x30);
  }
  CString::operator=((CString *)((int)this + 0x1e8),&DAT_1000e1bc);
  CWnd::EnableWindow(this,1);
  *(undefined4 *)((int)this + 0x1e4) = 0;
LAB_10004db8:
  FUN_100047c0(this);
  COleControl::Refresh(this);
  local_4._0_1_ = 1;
  CString::~CString(local_18);
  local_4 = (uint)local_4._1_3_ << 8;
  CString::~CString(local_10);
  local_4 = 0xffffffff;
  CString::~CString(local_14);
  ExceptionList = local_c;
  return 1;
}


// ---- FUN_10004e10 @ 10004e10

undefined4 __fastcall FUN_10004e10(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1e4);
}


// ---- FUN_10004e30 @ 10004e30

CGdiObject * __thiscall FUN_10004e30(void *this,byte param_1)

{
  FUN_10004e50(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_10004e50 @ 10004e50

void __fastcall FUN_10004e50(CGdiObject *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10009458;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = &PTR_GetRuntimeClass_1000a910;
  local_4 = 0;
  CGdiObject::DeleteObject(param_1);
  *(undefined ***)param_1 = &PTR_GetRuntimeClass_1000a8fc;
  ExceptionList = local_c;
  return;
}


// ---- FUN_10004ea0 @ 10004ea0

void __fastcall FUN_10004ea0(CGdiObject *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10009478;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = &PTR_GetRuntimeClass_1000a910;
  local_4 = 0;
  CGdiObject::DeleteObject(param_1);
  *(undefined ***)param_1 = &PTR_GetRuntimeClass_1000a8fc;
  ExceptionList = local_c;
  return;
}


// ---- FUN_10004ef0 @ 10004ef0

CGdiObject * __thiscall FUN_10004ef0(void *this,byte param_1)

{
  FUN_10004f10(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_10004f10 @ 10004f10

void __fastcall FUN_10004f10(CGdiObject *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10009498;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = &PTR_GetRuntimeClass_1000a910;
  local_4 = 0;
  CGdiObject::DeleteObject(param_1);
  *(undefined ***)param_1 = &PTR_GetRuntimeClass_1000a8fc;
  ExceptionList = local_c;
  return;
}


// ---- FUN_10004f60 @ 10004f60

void __fastcall FUN_10004f60(int param_1)

{
  EnableWindow(*(HWND *)(param_1 + 0x20),0);
  return;
}


// ---- FUN_10004f70 @ 10004f70

void __fastcall FUN_10004f70(int param_1)

{
  EnableWindow(*(HWND *)(param_1 + 0x20),1);
  return;
}


// ---- FUN_10004fa0 @ 10004fa0

void FUN_10004fa0(void)

{
  FUN_10004fe0((CWinApp *)&DAT_1000e1c0);
  return;
}


// ---- FUN_10004fb0 @ 10004fb0

void FUN_10004fb0(void)

{
  FUN_1000904c((_onexit_t)&LAB_10004fc0);
  return;
}


// ---- ~CWinApp @ 10004fd0

void __thiscall CWinApp::~CWinApp(CWinApp *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008cb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CWinApp(this);
  return;
}


// ---- FUN_10004fe0 @ 10004fe0

CWinApp * __fastcall FUN_10004fe0(CWinApp *param_1)

{
  CWinApp::CWinApp(param_1,(char *)0x0);
  *(undefined ***)param_1 = &PTR_LAB_1000a954;
  return param_1;
}


// ---- FUN_10005000 @ 10005000

CWinApp * __thiscall FUN_10005000(void *this,byte param_1)

{
  CWinApp::~CWinApp(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- DllRegisterServer @ 10005040

undefined4 DllRegisterServer(void)

{
  AFX_MODULE_STATE *pAVar1;
  int iVar2;
  undefined4 local_8;
  int local_4;
  
                    /* 0x5040  3  DllRegisterServer */
  pAVar1 = (AFX_MODULE_STATE *)FUN_10008e97();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)&local_8,pAVar1);
  pAVar1 = AfxGetModuleState();
  iVar2 = AfxOleRegisterTypeLib
                    (*(HINSTANCE__ **)(pAVar1 + 8),(_GUID *)&DAT_1000a940,(char *)0x0,(char *)0x0);
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


// ---- DllUnregisterServer @ 100050c0

undefined4 DllUnregisterServer(void)

{
  AFX_MODULE_STATE *pAVar1;
  int iVar2;
  undefined4 local_8;
  int local_4;
  
                    /* 0x50c0  4  DllUnregisterServer */
  pAVar1 = (AFX_MODULE_STATE *)FUN_10008e97();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)&local_8,pAVar1);
  iVar2 = AfxOleUnregisterTypeLib((_GUID *)&DAT_1000a940,0,0,0);
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


// ---- FUN_10005130 @ 10005130

COlePropertyPage * FUN_10005130(void)

{
  COlePropertyPage *pCVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_100094ba;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pCVar1 = operator_new(0xd8);
  local_4 = 0;
  if (pCVar1 != (COlePropertyPage *)0x0) {
    pCVar1 = FUN_100052f0(pCVar1);
    ExceptionList = local_c;
    return pCVar1;
  }
  ExceptionList = local_c;
  return (COlePropertyPage *)0x0;
}


// ---- FUN_100051a0 @ 100051a0

undefined ** FUN_100051a0(void)

{
  return &PTR_s_CLEOBtnPropPage_1000a9f8;
}


// ---- FUN_100051c0 @ 100051c0

undefined ** FUN_100051c0(void)

{
  return &PTR_LAB_1000aa10;
}


// ---- FUN_100051e0 @ 100051e0

void FUN_100051e0(void)

{
  FUN_10005200(&DAT_1000e290,(_GUID *)&DAT_1000aa48,(CRuntimeClass *)&PTR_s_CLEOBtnPropPage_1000a9f8
               ,0,"LEOBTN.LEOBtnPropPage.1");
  return;
}


// ---- FUN_10005200 @ 10005200

COleObjectFactory * __thiscall
FUN_10005200(void *this,_GUID *param_1,CRuntimeClass *param_2,int param_3,char *param_4)

{
  COleObjectFactory::COleObjectFactory(this,param_1,param_2,param_3,param_4);
  *(undefined ***)this = &PTR_LAB_1000aa58;
  return this;
}


// ---- FUN_10005230 @ 10005230

COleObjectFactory * __thiscall FUN_10005230(void *this,byte param_1)

{
  COleObjectFactory::~COleObjectFactory(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_10005250 @ 10005250

void FUN_10005250(void)

{
  FUN_1000904c((_onexit_t)&LAB_10005260);
  return;
}


// ---- FUN_10005280 @ 10005280

undefined4 FUN_10005280(undefined4 *param_1)

{
  *param_1 = DAT_1000aa48;
  param_1[1] = DAT_1000aa4c;
  param_1[2] = DAT_1000aa50;
  param_1[3] = DAT_1000aa54;
  return 0;
}


// ---- FUN_100052f0 @ 100052f0

COlePropertyPage * __fastcall FUN_100052f0(COlePropertyPage *param_1)

{
  COlePropertyPage::COlePropertyPage(param_1,100,100);
  *(undefined ***)param_1 = &PTR_FUN_1000aacc;
  return param_1;
}


// ---- FUN_10005310 @ 10005310

COlePropertyPage * __thiscall FUN_10005310(void *this,byte param_1)

{
  COlePropertyPage::~COlePropertyPage(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- ~COlePropertyPage @ 10005330

void __thiscall COlePropertyPage::~COlePropertyPage(COlePropertyPage *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008dd2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~COlePropertyPage(this);
  return;
}


// ---- FUN_10005340 @ 10005340

void FUN_10005340(CDataExchange *param_1)

{
  DDP_PostProcessing(param_1);
  return;
}


// ---- FUN_100081a0 @ 100081a0

undefined4 * FUN_100081a0(void)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_100094da;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x20);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = FUN_10008220(puVar1);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


// ---- FUN_10008210 @ 10008210

undefined ** FUN_10008210(void)

{
  return &PTR_s_CServerComms_1000abb8;
}


// ---- FUN_10008220 @ 10008220

undefined4 * __fastcall FUN_10008220(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_100094f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_1000abd0;
  local_4 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0x809;
  param_1[5] = 0;
  param_1[6] = 0;
  FUN_10008720((int)param_1);
  ExceptionList = local_c;
  return param_1;
}


// ---- FUN_10008280 @ 10008280

undefined4 * __thiscall FUN_10008280(void *this,byte param_1)

{
  FUN_10008310(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_100082a0 @ 100082a0

undefined4 * __thiscall FUN_100082a0(void *this,undefined4 param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10009518;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 4) = param_1;
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_1000abd0;
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0x809;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  FUN_10008720((int)this);
  ExceptionList = local_c;
  return this;
}


// ---- FUN_10008310 @ 10008310

void __fastcall FUN_10008310(undefined4 *param_1)

{
  *param_1 = &PTR_GetRuntimeClass_1000a8fc;
  return;
}


// ---- FUN_10008320 @ 10008320

undefined4 __thiscall FUN_10008320(void *this,undefined4 param_1,CString *param_2)

{
  int iVar1;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 *local_168;
  undefined4 local_164;
  char local_160 [352];
  
  local_164 = param_1;
  local_168 = &local_164;
  local_170 = DAT_1000e57c;
  local_16c = 0x164;
  iVar1 = FUN_10008770(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_170);
  *(int *)((int)this + 0xc) = iVar1;
  if (iVar1 == 1) {
    CString::operator=(param_2,local_160);
  }
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_10008390 @ 10008390

undefined4 __thiscall
FUN_10008390(void *this,undefined4 param_1,undefined4 *param_2,CString *param_3)

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
  iVar1 = FUN_10008770(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_174);
  *(int *)((int)this + 0xc) = iVar1;
  if (iVar1 == 1) {
    *param_2 = local_164;
    CString::operator=(param_3,local_160);
  }
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_10008410 @ 10008410

undefined4 __thiscall FUN_10008410(void *this,undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10009538;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = this;
  CString::CString((CString *)&local_10);
  local_4 = 0;
  CString::Empty((CString *)&local_10);
  uVar1 = FUN_10008390(this,param_1,param_2,(CString *)&local_10);
  local_4 = 0xffffffff;
  CString::~CString((CString *)&local_10);
  ExceptionList = local_c;
  return uVar1;
}


// ---- FUN_10008480 @ 10008480

LRESULT __thiscall FUN_10008480(void *this,undefined4 param_1,undefined4 param_2)

{
  LRESULT LVar1;
  char *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10009558;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = this;
  CString::CString((CString *)&local_10);
  local_4 = 0;
  CString::Empty((CString *)&local_10);
  LVar1 = FUN_100084f0(this,param_1,param_2,local_10);
  local_4 = 0xffffffff;
  CString::~CString((CString *)&local_10);
  ExceptionList = local_c;
  return LVar1;
}


// ---- FUN_100084f0 @ 100084f0

LRESULT __thiscall FUN_100084f0(void *this,undefined4 param_1,undefined4 param_2,char *param_3)

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
  puStack_8 = &LAB_1000957b;
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
    FUN_100086f0(local_16c,param_3);
  }
  local_178 = &local_174;
  local_180 = DAT_1000e51c;
  local_17c = 0x168;
  LVar1 = SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_180);
  *(LRESULT *)((int)this + 0xc) = LVar1;
  local_4 = 0xffffffff;
  CString::~CString((CString *)&local_184);
  ExceptionList = local_c;
  return LVar1;
}


// ---- FUN_10008620 @ 10008620

LRESULT __thiscall FUN_10008620(void *this,undefined4 param_1,char *param_2,undefined4 param_3)

{
  LRESULT LVar1;
  CString local_180 [4];
  undefined4 local_17c;
  undefined4 local_178;
  char *local_174;
  char local_170 [352];
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_100095a3;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  CString::CString(local_180);
  local_4._0_1_ = 1;
  FUN_100086f0(local_170,param_2);
  local_10 = param_3;
  local_17c = param_1;
  local_174 = local_170;
  local_178 = 0x164;
  LVar1 = SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_17c);
  local_4 = (uint)local_4._1_3_ << 8;
  CString::~CString(local_180);
  local_4 = 0xffffffff;
  CString::~CString((CString *)&param_2);
  ExceptionList = local_c;
  return LVar1;
}


// ---- FUN_100086f0 @ 100086f0

void FUN_100086f0(char *param_1,char *param_2)

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


// ---- FUN_10008720 @ 10008720

void __fastcall FUN_10008720(int param_1)

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


// ---- FUN_10008770 @ 10008770

void __thiscall
FUN_10008770(void *this,HWND param_1,UINT param_2,WPARAM param_3,undefined4 *param_4)

{
  if (*(int *)((int)this + 0x1c) != 0) {
    FUN_100087b0(this,param_1,param_4);
    return;
  }
  SendMessageA(param_1,param_2,param_3,(LPARAM)param_4);
  return;
}


// ---- FUN_100087b0 @ 100087b0

LRESULT __thiscall FUN_100087b0(void *this,HWND param_1,undefined4 *param_2)

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
  sprintf(local_100,s_MMF_LEO_SC__lx__lx__lx_1000dcc4,DVar3,uVar9,iVar2);
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


// ---- operator_new @ 100088e0

void * __cdecl operator_new(uint param_1)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100088e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = operator_new(param_1);
  return pvVar1;
}


// ---- operator_delete @ 100088e6

void __cdecl operator_delete(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x100088e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  operator_delete(param_1);
  return;
}


// ---- GetConnectionHook @ 1000890a

IConnectionPoint * __thiscall CCmdTarget::GetConnectionHook(CCmdTarget *this,_GUID *param_1)

{
  IConnectionPoint *pIVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000890a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = GetConnectionHook(this,param_1);
  return pIVar1;
}


// ---- GetExtraConnectionPoints @ 10008910

int __thiscall CCmdTarget::GetExtraConnectionPoints(CCmdTarget *this,CPtrArray *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetExtraConnectionPoints(this,param_1);
  return iVar1;
}


// ---- GetInterfaceHook @ 10008916

IUnknown * __thiscall CCmdTarget::GetInterfaceHook(CCmdTarget *this,void *param_1)

{
  IUnknown *pIVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008916. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = GetInterfaceHook(this,param_1);
  return pIVar1;
}


// ---- OnCreateAggregates @ 1000891c

int __thiscall CCmdTarget::OnCreateAggregates(CCmdTarget *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000891c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCreateAggregates(this);
  return iVar1;
}


// ---- GetEventSinkMap @ 10008922

AFX_EVENTSINKMAP * __thiscall CCmdTarget::GetEventSinkMap(CCmdTarget *this)

{
  AFX_EVENTSINKMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008922. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetEventSinkMap(this);
  return pAVar1;
}


// ---- GetConnectionMap @ 1000892e

AFX_CONNECTIONMAP * __thiscall CCmdTarget::GetConnectionMap(CCmdTarget *this)

{
  AFX_CONNECTIONMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000892e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetConnectionMap(this);
  return pAVar1;
}


// ---- GetDispatchMap @ 10008934

AFX_DISPMAP * __thiscall CCmdTarget::GetDispatchMap(CCmdTarget *this)

{
  AFX_DISPMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008934. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetDispatchMap(this);
  return pAVar1;
}


// ---- GetCommandMap @ 1000893a

AFX_OLECMDMAP * __thiscall CCmdTarget::GetCommandMap(CCmdTarget *this)

{
  AFX_OLECMDMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000893a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetCommandMap(this);
  return pAVar1;
}


// ---- GetTypeLib @ 10008946

long __thiscall CCmdTarget::GetTypeLib(CCmdTarget *this,ulong param_1,ITypeLib **param_2)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008946. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = GetTypeLib(this,param_1,param_2);
  return lVar1;
}


// ---- GetTypeLibCache @ 1000894c

CTypeLibCache * __thiscall CCmdTarget::GetTypeLibCache(CCmdTarget *this)

{
  CTypeLibCache *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000894c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetTypeLibCache(this);
  return pCVar1;
}


// ---- GetTypeInfoCount @ 10008952

uint __thiscall CCmdTarget::GetTypeInfoCount(CCmdTarget *this)

{
  uint uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008952. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = GetTypeInfoCount(this);
  return uVar1;
}


// ---- GetDispatchIID @ 10008958

int __thiscall CCmdTarget::GetDispatchIID(CCmdTarget *this,_GUID *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetDispatchIID(this,param_1);
  return iVar1;
}


// ---- IsInvokeAllowed @ 1000895e

int __thiscall CCmdTarget::IsInvokeAllowed(CCmdTarget *this,long param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000895e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = IsInvokeAllowed(this,param_1);
  return iVar1;
}


// ---- OnCmdMsg @ 1000896a

int __thiscall
CCmdTarget::OnCmdMsg
          (CCmdTarget *this,uint param_1,int param_2,void *param_3,AFX_CMDHANDLERINFO *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000896a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCmdMsg(this,param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- COleObjectFactory @ 10008976

void __thiscall
COleObjectFactory::COleObjectFactory
          (COleObjectFactory *this,_GUID *param_1,CRuntimeClass *param_2,int param_3,char *param_4)

{
                    /* WARNING: Could not recover jumptable at 0x10008976. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  COleObjectFactory(this,param_1,param_2,param_3,param_4);
  return;
}


// ---- ~COleObjectFactory @ 1000897c

void __thiscall COleObjectFactory::~COleObjectFactory(COleObjectFactory *this)

{
                    /* WARNING: Could not recover jumptable at 0x1000897c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~COleObjectFactory(this);
  return;
}


// ---- AfxGetTypeLibCache @ 10008982

CTypeLibCache * AfxGetTypeLibCache(_GUID *param_1)

{
  CTypeLibCache *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008982. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = AfxGetTypeLibCache(param_1);
  return pCVar1;
}


// ---- AFX_MAINTAIN_STATE2 @ 10008988

void __thiscall
AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2(AFX_MAINTAIN_STATE2 *this,AFX_MODULE_STATE *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10008988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AFX_MAINTAIN_STATE2(this,param_1);
  return;
}


// ---- AfxOleUnregisterClass @ 1000898e

int AfxOleUnregisterClass(_GUID *param_1,char *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000898e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AfxOleUnregisterClass(param_1,param_2);
  return iVar1;
}


// ---- AfxOleRegisterControlClass @ 10008994

int AfxOleRegisterControlClass
              (HINSTANCE__ *param_1,_GUID *param_2,char *param_3,uint param_4,uint param_5,
              int param_6,ulong param_7,_GUID *param_8,ushort param_9,ushort param_10)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008994. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AfxOleRegisterControlClass
                    (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                     param_10);
  return iVar1;
}


// ---- AfxGetModuleState @ 1000899a

AFX_MODULE_STATE * AfxGetModuleState(void)

{
  AFX_MODULE_STATE *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000899a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = AfxGetModuleState();
  return pAVar1;
}


// ---- DestroySharedMenu @ 100089a0

void __thiscall COleControl::DestroySharedMenu(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x100089a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DestroySharedMenu(this);
  return;
}


// ---- BuildSharedMenu @ 100089a6

int __thiscall COleControl::BuildSharedMenu(COleControl *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100089a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = BuildSharedMenu(this);
  return iVar1;
}


// ---- RemoveFrameLevelUI @ 100089ac

void __thiscall COleControl::RemoveFrameLevelUI(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x100089ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RemoveFrameLevelUI(this);
  return;
}


// ---- AddFrameLevelUI @ 100089b2

void __thiscall COleControl::AddFrameLevelUI(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x100089b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AddFrameLevelUI(this);
  return;
}


// ---- OnActivateInPlace @ 100089b8

long __thiscall COleControl::OnActivateInPlace(COleControl *this,int param_1,tagMSG *param_2)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100089b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = OnActivateInPlace(this,param_1,param_2);
  return lVar1;
}


// ---- OnHide @ 100089be

long __thiscall COleControl::OnHide(COleControl *this)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100089be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = OnHide(this);
  return lVar1;
}


// ---- OnFrameClose @ 100089c4

void __thiscall COleControl::OnFrameClose(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x100089c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnFrameClose(this);
  return;
}


// ---- ResizeFrameWindow @ 100089ca

void __thiscall COleControl::ResizeFrameWindow(COleControl *this,int param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x100089ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ResizeFrameWindow(this,param_1,param_2);
  return;
}


// ---- CreateFrameWindow @ 100089d0

CControlFrameWnd * __thiscall COleControl::CreateFrameWindow(COleControl *this)

{
  CControlFrameWnd *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100089d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = CreateFrameWindow(this);
  return pCVar1;
}


// ---- OnOpen @ 100089d6

long __thiscall COleControl::OnOpen(COleControl *this,int param_1,tagMSG *param_2)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100089d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = OnOpen(this,param_1,param_2);
  return lVar1;
}


// ---- OnReflectorDestroyed @ 100089dc

void __thiscall COleControl::OnReflectorDestroyed(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x100089dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnReflectorDestroyed(this);
  return;
}


// ---- SetInitialDataFormats @ 100089e2

void __thiscall COleControl::SetInitialDataFormats(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x100089e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetInitialDataFormats(this);
  return;
}


// ---- CreateControlWindow @ 100089e8

int __thiscall
COleControl::CreateControlWindow(COleControl *this,HWND__ *param_1,CRect *param_2,tagRECT *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100089e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CreateControlWindow(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- ClientToParent @ 100089ee

void __thiscall COleControl::ClientToParent(COleControl *this,tagRECT *param_1,tagPOINT *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x100089ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ClientToParent(this,param_1,param_2);
  return;
}


// ---- ParentToClient @ 100089f4

uint __thiscall
COleControl::ParentToClient(COleControl *this,tagRECT *param_1,tagPOINT *param_2,int param_3)

{
  uint uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100089f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = ParentToClient(this,param_1,param_2,param_3);
  return uVar1;
}


// ---- GetClientOffset @ 100089fa

void __thiscall COleControl::GetClientOffset(COleControl *this,long *param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x100089fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetClientOffset(this,param_1,param_2);
  return;
}


// ---- GetWindowlessDropTarget @ 10008a00

IDropTarget * __thiscall COleControl::GetWindowlessDropTarget(COleControl *this)

{
  IDropTarget *pIVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008a00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = GetWindowlessDropTarget(this);
  return pIVar1;
}


// ---- OnWindowlessMessage @ 10008a06

int __thiscall
COleControl::OnWindowlessMessage
          (COleControl *this,uint param_1,uint param_2,long param_3,long *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008a06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnWindowlessMessage(this,param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- OnInactiveMouseMove @ 10008a0c

void __thiscall
COleControl::OnInactiveMouseMove
          (COleControl *this,tagRECT *param_1,long param_2,long param_3,ulong param_4)

{
                    /* WARNING: Could not recover jumptable at 0x10008a0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnInactiveMouseMove(this,param_1,param_2,param_3,param_4);
  return;
}


// ---- OnInactiveSetCursor @ 10008a12

int __thiscall
COleControl::OnInactiveSetCursor
          (COleControl *this,tagRECT *param_1,long param_2,long param_3,ulong param_4,int param_5)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008a12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnInactiveSetCursor(this,param_1,param_2,param_3,param_4,param_5);
  return iVar1;
}


// ---- GetActivationPolicy @ 10008a18

ulong __thiscall COleControl::GetActivationPolicy(COleControl *this)

{
  ulong uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008a18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = GetActivationPolicy(this);
  return uVar1;
}


// ---- GetControlFlags @ 10008a1e

ulong __thiscall COleControl::GetControlFlags(COleControl *this)

{
  ulong uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008a1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = GetControlFlags(this);
  return uVar1;
}


// ---- ReparentControlWindow @ 10008a24

void __thiscall
COleControl::ReparentControlWindow(COleControl *this,HWND__ *param_1,HWND__ *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10008a24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReparentControlWindow(this,param_1,param_2);
  return;
}


// ---- OnGetPredefinedValue @ 10008a2a

int __thiscall
COleControl::OnGetPredefinedValue(COleControl *this,long param_1,ulong param_2,tagVARIANT *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008a2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnGetPredefinedValue(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- OnGetPredefinedStrings @ 10008a30

int __thiscall
COleControl::OnGetPredefinedStrings
          (COleControl *this,long param_1,CStringArray *param_2,CDWordArray *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnGetPredefinedStrings(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- OnMapPropertyToPage @ 10008a36

int __thiscall
COleControl::OnMapPropertyToPage(COleControl *this,long param_1,_GUID *param_2,int *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008a36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnMapPropertyToPage(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- OnGetDisplayString @ 10008a3c

int __thiscall COleControl::OnGetDisplayString(COleControl *this,long param_1,CString *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008a3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnGetDisplayString(this,param_1,param_2);
  return iVar1;
}


// ---- OnProperties @ 10008a42

int __thiscall
COleControl::OnProperties(COleControl *this,tagMSG *param_1,HWND__ *param_2,tagRECT *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008a42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnProperties(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- OnEdit @ 10008a48

int __thiscall
COleControl::OnEdit(COleControl *this,tagMSG *param_1,HWND__ *param_2,tagRECT *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008a48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnEdit(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- OnDoVerb @ 10008a4e

int __thiscall
COleControl::OnDoVerb
          (COleControl *this,long param_1,tagMSG *param_2,HWND__ *param_3,tagRECT *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008a4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnDoVerb(this,param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- OnEnumVerbs @ 10008a54

int __thiscall COleControl::OnEnumVerbs(COleControl *this,IEnumOLEVERB **param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008a54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnEnumVerbs(this,param_1);
  return iVar1;
}


// ---- OnSetData @ 10008a5a

int __thiscall
COleControl::OnSetData(COleControl *this,tagFORMATETC *param_1,tagSTGMEDIUM *param_2,int param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008a5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnSetData(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- OnRenderData @ 10008a60

int __thiscall
COleControl::OnRenderData(COleControl *this,tagFORMATETC *param_1,tagSTGMEDIUM *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008a60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnRenderData(this,param_1,param_2);
  return iVar1;
}


// ---- OnRenderFileData @ 10008a66

int __thiscall COleControl::OnRenderFileData(COleControl *this,tagFORMATETC *param_1,CFile *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008a66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnRenderFileData(this,param_1,param_2);
  return iVar1;
}


// ---- OnRenderGlobalData @ 10008a6c

int __thiscall
COleControl::OnRenderGlobalData(COleControl *this,tagFORMATETC *param_1,void **param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008a6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnRenderGlobalData(this,param_1,param_2);
  return iVar1;
}


// ---- OnGetNaturalExtent @ 10008a72

int __thiscall
COleControl::OnGetNaturalExtent
          (COleControl *this,ulong param_1,long param_2,tagDVTARGETDEVICE *param_3,HDC__ *param_4,
          tagExtentInfo *param_5,tagSIZE *param_6)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008a72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnGetNaturalExtent(this,param_1,param_2,param_3,param_4,param_5,param_6);
  return iVar1;
}


// ---- OnQueryHitRect @ 10008a78

int __thiscall
COleControl::OnQueryHitRect
          (COleControl *this,ulong param_1,tagRECT *param_2,tagRECT *param_3,long param_4,
          ulong *param_5)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008a78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnQueryHitRect(this,param_1,param_2,param_3,param_4,param_5);
  return iVar1;
}


// ---- OnQueryHitPoint @ 10008a7e

int __thiscall COleControl::OnQueryHitPoint(void)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008a7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnQueryHitPoint();
  return iVar1;
}


// ---- OnGetViewStatus @ 10008a84

ulong __thiscall COleControl::OnGetViewStatus(COleControl *this)

{
  ulong uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008a84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = OnGetViewStatus(this);
  return uVar1;
}


// ---- OnGetViewRect @ 10008a8a

int __thiscall COleControl::OnGetViewRect(COleControl *this,ulong param_1,_RECTL *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008a8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnGetViewRect(this,param_1,param_2);
  return iVar1;
}


// ---- OnGetViewExtent @ 10008a90

int __thiscall
COleControl::OnGetViewExtent
          (COleControl *this,ulong param_1,long param_2,tagDVTARGETDEVICE *param_3,tagSIZE *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnGetViewExtent(this,param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- OnGetColorSet @ 10008a96

int __thiscall
COleControl::OnGetColorSet
          (COleControl *this,tagDVTARGETDEVICE *param_1,HDC__ *param_2,tagLOGPALETTE **param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008a96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnGetColorSet(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- OnHideToolBars @ 10008a9c

void __thiscall COleControl::OnHideToolBars(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008a9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnHideToolBars(this);
  return;
}


// ---- OnShowToolBars @ 10008aa2

void __thiscall COleControl::OnShowToolBars(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008aa2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnShowToolBars(this);
  return;
}


// ---- OnGetInPlaceMenu @ 10008aa8

HMENU__ * __thiscall COleControl::OnGetInPlaceMenu(COleControl *this)

{
  HMENU__ *pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008aa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = OnGetInPlaceMenu(this);
  return pHVar1;
}


// ---- OnFreezeEvents @ 10008aae

void __thiscall COleControl::OnFreezeEvents(COleControl *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10008aae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnFreezeEvents(this,param_1);
  return;
}


// ---- OnAmbientPropertyChange @ 10008ab4

void __thiscall COleControl::OnAmbientPropertyChange(COleControl *this,long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10008ab4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnAmbientPropertyChange(this,param_1);
  return;
}


// ---- OnMnemonic @ 10008aba

void __thiscall COleControl::OnMnemonic(COleControl *this,tagMSG *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10008aba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnMnemonic(this,param_1);
  return;
}


// ---- OnGetControlInfo @ 10008ac0

void __thiscall COleControl::OnGetControlInfo(COleControl *this,tagCONTROLINFO *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10008ac0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnGetControlInfo(this,param_1);
  return;
}


// ---- OnForeColorChanged @ 10008ac6

void __thiscall COleControl::OnForeColorChanged(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008ac6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnForeColorChanged(this);
  return;
}


// ---- OnFontChanged @ 10008acc

void __thiscall COleControl::OnFontChanged(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008acc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnFontChanged(this);
  return;
}


// ---- OnTextChanged @ 10008ad2

void __thiscall COleControl::OnTextChanged(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008ad2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnTextChanged(this);
  return;
}


// ---- OnBorderStyleChanged @ 10008ad8

void __thiscall COleControl::OnBorderStyleChanged(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008ad8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnBorderStyleChanged(this);
  return;
}


// ---- OnBackColorChanged @ 10008ade

void __thiscall COleControl::OnBackColorChanged(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008ade. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnBackColorChanged(this);
  return;
}


// ---- OnAppearanceChanged @ 10008ae4

void __thiscall COleControl::OnAppearanceChanged(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008ae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnAppearanceChanged(this);
  return;
}


// ---- OnKeyPressEvent @ 10008aea

void __thiscall COleControl::OnKeyPressEvent(COleControl *this,ushort param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10008aea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnKeyPressEvent(this,param_1);
  return;
}


// ---- OnKeyUpEvent @ 10008af0

void __thiscall COleControl::OnKeyUpEvent(COleControl *this,ushort param_1,ushort param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10008af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnKeyUpEvent(this,param_1,param_2);
  return;
}


// ---- OnKeyDownEvent @ 10008af6

void __thiscall COleControl::OnKeyDownEvent(COleControl *this,ushort param_1,ushort param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10008af6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnKeyDownEvent(this,param_1,param_2);
  return;
}


// ---- OnClick @ 10008afc

void __thiscall COleControl::OnClick(COleControl *this,ushort param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10008afc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnClick(this,param_1);
  return;
}


// ---- OnEventAdvise @ 10008b02

void __thiscall COleControl::OnEventAdvise(COleControl *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10008b02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnEventAdvise(this,param_1);
  return;
}


// ---- OnSetObjectRects @ 10008b08

int __thiscall COleControl::OnSetObjectRects(COleControl *this,tagRECT *param_1,tagRECT *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008b08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnSetObjectRects(this,param_1,param_2);
  return iVar1;
}


// ---- OnClose @ 10008b0e

void __thiscall COleControl::OnClose(COleControl *this,ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10008b0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnClose(this,param_1);
  return;
}


// ---- OnSetExtent @ 10008b14

int __thiscall COleControl::OnSetExtent(COleControl *this,tagSIZE *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008b14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnSetExtent(this,param_1);
  return iVar1;
}


// ---- OnSetClientSite @ 10008b1a

void __thiscall COleControl::OnSetClientSite(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008b1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnSetClientSite(this);
  return;
}


// ---- DisplayError @ 10008b20

void __thiscall
COleControl::DisplayError
          (COleControl *this,long param_1,char *param_2,char *param_3,char *param_4,uint param_5)

{
                    /* WARNING: Could not recover jumptable at 0x10008b20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DisplayError(this,param_1,param_2,param_3,param_4,param_5);
  return;
}


// ---- GetMessageString @ 10008b26

void __thiscall COleControl::GetMessageString(COleControl *this,uint param_1,CString *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10008b26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetMessageString(this,param_1,param_2);
  return;
}


// ---- OnDrawMetafile @ 10008b2c

void __thiscall COleControl::OnDrawMetafile(COleControl *this,CDC *param_1,CRect *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10008b2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnDrawMetafile(this,param_1,param_2);
  return;
}


// ---- GetClientRect @ 10008b32

void __thiscall COleControl::GetClientRect(COleControl *this,tagRECT *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10008b32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetClientRect(this,param_1);
  return;
}


// ---- SetOccDialogInfo @ 10008b38

int __thiscall CWnd::SetOccDialogInfo(CWnd *this,_AFX_OCC_DIALOG_INFO *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008b38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetOccDialogInfo(this,param_1);
  return iVar1;
}


// ---- IsFrameWnd @ 10008b3e

int __thiscall CWnd::IsFrameWnd(CWnd *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008b3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = IsFrameWnd(this);
  return iVar1;
}


// ---- CheckAutoCenter @ 10008b44

int __thiscall CWnd::CheckAutoCenter(CWnd *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008b44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CheckAutoCenter(this);
  return iVar1;
}


// ---- OnChildNotify @ 10008b4a

int __thiscall CWnd::OnChildNotify(CWnd *this,uint param_1,uint param_2,long param_3,long *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008b4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnChildNotify(this,param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- PostNcDestroy @ 10008b50

void __thiscall CWnd::PostNcDestroy(CWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PostNcDestroy(this);
  return;
}


// ---- DefWindowProcA @ 10008b56

long __thiscall
COleControl::DefWindowProcA(COleControl *this,uint param_1,uint param_2,long param_3)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008b56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = DefWindowProcA(this,param_1,param_2,param_3);
  return lVar1;
}


// ---- OnWndMsg @ 10008b5c

int __thiscall CWnd::OnWndMsg(CWnd *this,uint param_1,uint param_2,long param_3,long *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnWndMsg(this,param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- WindowProc @ 10008b62

long __thiscall COleControl::WindowProc(COleControl *this,uint param_1,uint param_2,long param_3)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008b62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = WindowProc(this,param_1,param_2,param_3);
  return lVar1;
}


// ---- OnAmbientProperty @ 10008b68

int __thiscall
CWnd::OnAmbientProperty(CWnd *this,COleControlSite *param_1,long param_2,tagVARIANT *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008b68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnAmbientProperty(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- PreTranslateMessage @ 10008b6e

int __thiscall CWnd::PreTranslateMessage(CWnd *this,tagMSG *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008b6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = PreTranslateMessage(this,param_1);
  return iVar1;
}


// ---- GetSuperWndProcAddr @ 10008b74

_func_long_HWND___ptr_uint_uint_long ** __thiscall CWnd::GetSuperWndProcAddr(CWnd *this)

{
  _func_long_HWND___ptr_uint_uint_long **pp_Var1;
  
                    /* WARNING: Could not recover jumptable at 0x10008b74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pp_Var1 = GetSuperWndProcAddr(this);
  return pp_Var1;
}


// ---- OnNotify @ 10008b7a

int __thiscall CWnd::OnNotify(CWnd *this,uint param_1,long param_2,long *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008b7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnNotify(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- OnCommand @ 10008b80

int __thiscall CWnd::OnCommand(CWnd *this,uint param_1,long param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008b80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCommand(this,param_1,param_2);
  return iVar1;
}


// ---- EndModalLoop @ 10008b86

void __thiscall CWnd::EndModalLoop(CWnd *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10008b86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EndModalLoop(this,param_1);
  return;
}


// ---- ContinueModal @ 10008b8c

int __thiscall CWnd::ContinueModal(CWnd *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008b8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ContinueModal(this);
  return iVar1;
}


// ---- WinHelpA @ 10008b92

void __thiscall CWnd::WinHelpA(CWnd *this,ulong param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10008b92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WinHelpA(this,param_1,param_2);
  return;
}


// ---- GetScrollBarCtrl @ 10008b98

CScrollBar * __thiscall CWnd::GetScrollBarCtrl(CWnd *this,int param_1)

{
  CScrollBar *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008b98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetScrollBarCtrl(this,param_1);
  return pCVar1;
}


// ---- OnToolHitTest @ 10008b9e

int __thiscall CWnd::OnToolHitTest(void)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008b9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnToolHitTest();
  return iVar1;
}


// ---- CalcWindowRect @ 10008ba4

void __thiscall CWnd::CalcWindowRect(CWnd *this,tagRECT *param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10008ba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CalcWindowRect(this,param_1,param_2);
  return;
}


// ---- DestroyWindow @ 10008baa

int __thiscall CWnd::DestroyWindow(CWnd *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008baa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = DestroyWindow(this);
  return iVar1;
}


// ---- Create @ 10008bb0

int __thiscall
CWnd::Create(CWnd *this,char *param_1,char *param_2,ulong param_3,tagRECT *param_4,CWnd *param_5,
            uint param_6,CCreateContext *param_7)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Create(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return iVar1;
}


// ---- PreSubclassWindow @ 10008bb6

void __thiscall CWnd::PreSubclassWindow(CWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008bb6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PreSubclassWindow(this);
  return;
}


// ---- GetConnectionHook @ 10008bbc

IConnectionPoint * __thiscall COleControl::GetConnectionHook(COleControl *this,_GUID *param_1)

{
  IConnectionPoint *pIVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008bbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = GetConnectionHook(this,param_1);
  return pIVar1;
}


// ---- GetExtraConnectionPoints @ 10008bc2

int __thiscall COleControl::GetExtraConnectionPoints(COleControl *this,CPtrArray *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008bc2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetExtraConnectionPoints(this,param_1);
  return iVar1;
}


// ---- GetInterfaceHook @ 10008bc8

IUnknown * __thiscall COleControl::GetInterfaceHook(COleControl *this,void *param_1)

{
  IUnknown *pIVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008bc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = GetInterfaceHook(this,param_1);
  return pIVar1;
}


// ---- OnCreateAggregates @ 10008bce

int __thiscall COleControl::OnCreateAggregates(COleControl *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008bce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCreateAggregates(this);
  return iVar1;
}


// ---- GetInterfaceMap @ 10008bd4

AFX_INTERFACEMAP * __thiscall COleControl::GetInterfaceMap(COleControl *this)

{
  AFX_INTERFACEMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008bd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetInterfaceMap(this);
  return pAVar1;
}


// ---- GetConnectionMap @ 10008bda

AFX_CONNECTIONMAP * __thiscall COleControl::GetConnectionMap(COleControl *this)

{
  AFX_CONNECTIONMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008bda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetConnectionMap(this);
  return pAVar1;
}


// ---- GetDispatchIID @ 10008be0

int __thiscall COleControl::GetDispatchIID(COleControl *this,_GUID *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008be0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetDispatchIID(this,param_1);
  return iVar1;
}


// ---- IsInvokeAllowed @ 10008be6

int __thiscall COleControl::IsInvokeAllowed(COleControl *this,long param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008be6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = IsInvokeAllowed(this,param_1);
  return iVar1;
}


// ---- OnFinalRelease @ 10008bec

void __thiscall COleControl::OnFinalRelease(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008bec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnFinalRelease(this);
  return;
}


// ---- Serialize @ 10008bf2

void __thiscall COleControl::Serialize(COleControl *this,CArchive *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10008bf2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Serialize(this,param_1);
  return;
}


// ---- ~CString @ 10008bf8

void __thiscall CString::~CString(CString *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008bf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CString(this);
  return;
}


// ---- ~COleControl @ 10008bfe

void __thiscall COleControl::~COleControl(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008bfe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~COleControl(this);
  return;
}


// ---- operator= @ 10008c04

CString * __thiscall CString::operator=(CString *this,char *param_1)

{
  CString *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008c04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = operator=(this,param_1);
  return pCVar1;
}


// ---- InitializeIIDs @ 10008c0a

void __thiscall COleControl::InitializeIIDs(COleControl *this,_GUID *param_1,_GUID *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10008c0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitializeIIDs(this,param_1,param_2);
  return;
}


// ---- CString @ 10008c10

void __thiscall CString::CString(CString *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CString(this);
  return;
}


// ---- COleControl @ 10008c16

void __thiscall COleControl::COleControl(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008c16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  COleControl(this);
  return;
}


// ---- GetRuntimeClass @ 10008c1c

CRuntimeClass * __thiscall CBrush::GetRuntimeClass(CBrush *this)

{
  CRuntimeClass *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008c1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetRuntimeClass(this);
  return pCVar1;
}


// ---- GetRuntimeClass @ 10008c22

CRuntimeClass * __thiscall CGdiObject::GetRuntimeClass(CGdiObject *this)

{
  CRuntimeClass *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008c22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetRuntimeClass(this);
  return pCVar1;
}


// ---- GetRuntimeClass @ 10008c28

CRuntimeClass * __thiscall CObject::GetRuntimeClass(CObject *this)

{
  CRuntimeClass *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetRuntimeClass(this);
  return pCVar1;
}


// ---- DoSuperclassPaint @ 10008c2e

void __thiscall COleControl::DoSuperclassPaint(COleControl *this,CDC *param_1,CRect *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10008c2e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DoSuperclassPaint(this,param_1,param_2);
  return;
}


// ---- DeleteObject @ 10008c34

int __thiscall CGdiObject::DeleteObject(CGdiObject *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008c34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = DeleteObject(this);
  return iVar1;
}


// ---- operator= @ 10008c3a

CString * __thiscall CString::operator=(CString *this,CString *param_1)

{
  CString *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008c3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = operator=(this,param_1);
  return pCVar1;
}


// ---- GetAmbientProperty @ 10008c40

int __thiscall
COleControl::GetAmbientProperty(COleControl *this,long param_1,ushort param_2,void *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008c40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetAmbientProperty(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- LineTo @ 10008c46

int __thiscall CDC::LineTo(CDC *this,int param_1,int param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008c46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = LineTo(this,param_1,param_2);
  return iVar1;
}


// ---- MoveTo @ 10008c4c

void __thiscall CDC::MoveTo(CDC *this,int param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10008c4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MoveTo(this,param_1,param_2);
  return;
}


// ---- Attach @ 10008c52

int __thiscall CGdiObject::Attach(CGdiObject *this,void *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008c52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Attach(this,param_1);
  return iVar1;
}


// ---- SelectObject @ 10008c58

CPen * __thiscall CDC::SelectObject(CDC *this,CPen *param_1)

{
  CPen *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008c58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = SelectObject(this,param_1);
  return pCVar1;
}


// ---- CPen @ 10008c5e

void __thiscall CPen::CPen(CPen *this,int param_1,int param_2,ulong param_3)

{
                    /* WARNING: Could not recover jumptable at 0x10008c5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CPen(this,param_1,param_2,param_3);
  return;
}


// ---- AmbientUserMode @ 10008c64

int __thiscall COleControl::AmbientUserMode(COleControl *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008c64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AmbientUserMode(this);
  return iVar1;
}


// ---- DoPropExchange @ 10008c6a

void __thiscall COleControl::DoPropExchange(COleControl *this,CPropExchange *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10008c6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DoPropExchange(this,param_1);
  return;
}


// ---- OnResetState @ 10008c70

void __thiscall COleControl::OnResetState(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnResetState(this);
  return;
}


// ---- ~CDialog @ 10008c76

void __thiscall CDialog::~CDialog(CDialog *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008c76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CDialog(this);
  return;
}


// ---- DoModal @ 10008c7c

int __thiscall CDialog::DoModal(CDialog *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008c7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = DoModal(this);
  return iVar1;
}


// ---- CDialog @ 10008c82

void __thiscall CDialog::CDialog(CDialog *this,uint param_1,CWnd *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10008c82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CDialog(this,param_1,param_2);
  return;
}


// ---- PreCreateWindow @ 10008c88

int __thiscall CWnd::PreCreateWindow(CWnd *this,tagCREATESTRUCTA *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008c88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = PreCreateWindow(this,param_1);
  return iVar1;
}


// ---- EnableWindow @ 10008c8e

int __thiscall CWnd::EnableWindow(CWnd *this,int param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008c8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = EnableWindow(this,param_1);
  return iVar1;
}


// ---- SetWindowTextA @ 10008c94

void __thiscall CWnd::SetWindowTextA(CWnd *this,char *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10008c94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetWindowTextA(this,param_1);
  return;
}


// ---- Refresh @ 10008cac

void __thiscall COleControl::Refresh(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008cac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Refresh(this);
  return;
}


// ---- MakeUpper @ 10008cb2

void __thiscall CString::MakeUpper(CString *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008cb2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MakeUpper(this);
  return;
}


// ---- ~CWinApp @ 10008cb8

void __thiscall CWinApp::~CWinApp(CWinApp *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008cb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CWinApp(this);
  return;
}


// ---- CWinApp @ 10008d36

void __thiscall CWinApp::CWinApp(CWinApp *this,char *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10008d36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CWinApp(this,param_1);
  return;
}


// ---- UpdateRegistryAll @ 10008d48

int COleObjectFactory::UpdateRegistryAll(int param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008d48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = UpdateRegistryAll(param_1);
  return iVar1;
}


// ---- AfxOleRegisterTypeLib @ 10008d4e

int AfxOleRegisterTypeLib(HINSTANCE__ *param_1,_GUID *param_2,char *param_3,char *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008d4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AfxOleRegisterTypeLib(param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- AfxOleUnregisterTypeLib @ 10008d54

int AfxOleUnregisterTypeLib(_GUID *param_1,ushort param_2,ushort param_3,ulong param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008d54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AfxOleUnregisterTypeLib(param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- AfxOleRegisterPropertyPageClass @ 10008d5a

int AfxOleRegisterPropertyPageClass(HINSTANCE__ *param_1,_GUID *param_2,uint param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008d5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AfxOleRegisterPropertyPageClass(param_1,param_2,param_3);
  return iVar1;
}


// ---- OnEditProperty @ 10008d60

int __thiscall COlePropertyPage::OnEditProperty(COlePropertyPage *this,long param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008d60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnEditProperty(this,param_1);
  return iVar1;
}


// ---- OnHelp @ 10008d66

int __thiscall COlePropertyPage::OnHelp(COlePropertyPage *this,char *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008d66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnHelp(this,param_1);
  return iVar1;
}


// ---- OnObjectsChanged @ 10008d6c

void __thiscall COlePropertyPage::OnObjectsChanged(COlePropertyPage *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008d6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnObjectsChanged(this);
  return;
}


// ---- OnSetPageSite @ 10008d72

void __thiscall COlePropertyPage::OnSetPageSite(COlePropertyPage *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008d72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnSetPageSite(this);
  return;
}


// ---- PreInitDialog @ 10008d78

void __thiscall CDialog::PreInitDialog(CDialog *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008d78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PreInitDialog(this);
  return;
}


// ---- OnCancel @ 10008d7e

void __thiscall CDialog::OnCancel(CDialog *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008d7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnCancel(this);
  return;
}


// ---- OnOK @ 10008d84

void __thiscall CDialog::OnOK(CDialog *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008d84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnOK(this);
  return;
}


// ---- OnSetFont @ 10008d8a

void __thiscall CDialog::OnSetFont(CDialog *this,CFont *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10008d8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnSetFont(this,param_1);
  return;
}


// ---- OnInitDialog @ 10008d90

int __thiscall COlePropertyPage::OnInitDialog(COlePropertyPage *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnInitDialog(this);
  return iVar1;
}


// ---- SetOccDialogInfo @ 10008d96

int __thiscall CDialog::SetOccDialogInfo(CDialog *this,_AFX_OCC_DIALOG_INFO *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008d96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetOccDialogInfo(this,param_1);
  return iVar1;
}


// ---- CheckAutoCenter @ 10008d9c

int __thiscall CDialog::CheckAutoCenter(CDialog *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008d9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CheckAutoCenter(this);
  return iVar1;
}


// ---- DefWindowProcA @ 10008da2

long __thiscall CWnd::DefWindowProcA(CWnd *this,uint param_1,uint param_2,long param_3)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008da2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = DefWindowProcA(this,param_1,param_2,param_3);
  return lVar1;
}


// ---- WindowProc @ 10008da8

long __thiscall
COlePropertyPage::WindowProc(COlePropertyPage *this,uint param_1,uint param_2,long param_3)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008da8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = WindowProc(this,param_1,param_2,param_3);
  return lVar1;
}


// ---- PreTranslateMessage @ 10008dae

int __thiscall COlePropertyPage::PreTranslateMessage(COlePropertyPage *this,tagMSG *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008dae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = PreTranslateMessage(this,param_1);
  return iVar1;
}


// ---- OnCommand @ 10008db4

int __thiscall COlePropertyPage::OnCommand(COlePropertyPage *this,uint param_1,long param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008db4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCommand(this,param_1,param_2);
  return iVar1;
}


// ---- GetInterfaceMap @ 10008dba

AFX_INTERFACEMAP * __thiscall COlePropertyPage::GetInterfaceMap(COlePropertyPage *this)

{
  AFX_INTERFACEMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008dba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetInterfaceMap(this);
  return pAVar1;
}


// ---- OnFinalRelease @ 10008dc0

void __thiscall COlePropertyPage::OnFinalRelease(COlePropertyPage *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnFinalRelease(this);
  return;
}


// ---- OnCmdMsg @ 10008dc6

int __thiscall
CDialog::OnCmdMsg(CDialog *this,uint param_1,int param_2,void *param_3,AFX_CMDHANDLERINFO *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008dc6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCmdMsg(this,param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- COlePropertyPage @ 10008dcc

void __thiscall COlePropertyPage::COlePropertyPage(COlePropertyPage *this,uint param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10008dcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  COlePropertyPage(this,param_1,param_2);
  return;
}


// ---- ~COlePropertyPage @ 10008dd2

void __thiscall COlePropertyPage::~COlePropertyPage(COlePropertyPage *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008dd2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~COlePropertyPage(this);
  return;
}


// ---- DDP_PostProcessing @ 10008dd8

void DDP_PostProcessing(CDataExchange *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10008dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DDP_PostProcessing(param_1);
  return;
}


// ---- CString @ 10008dde

void __thiscall CString::CString(CString *this,char *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10008dde. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CString(this,param_1);
  return;
}


// ---- Empty @ 10008de4

void __thiscall CString::Empty(CString *this)

{
                    /* WARNING: Could not recover jumptable at 0x10008de4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Empty(this);
  return;
}


// ---- FUN_10008df4 @ 10008df4

undefined4 * FUN_10008df4(void)

{
  AFX_MODULE_STATE::AFX_MODULE_STATE((AFX_MODULE_STATE *)&DAT_1000e6c0,1,FUN_10008e52,0x600);
  DAT_1000e6c0 = &PTR_FUN_1000abe8;
  return &DAT_1000e6c0;
}


// ---- FUN_10008e1c @ 10008e1c

AFX_MODULE_STATE * __thiscall FUN_10008e1c(void *this,byte param_1)

{
  AFX_MODULE_STATE::~AFX_MODULE_STATE(this);
  if ((param_1 & 1) != 0) {
    CNoTrackObject::operator_delete(this);
  }
  return this;
}


// ---- ~AFX_MODULE_STATE @ 10008e37

void __thiscall AFX_MODULE_STATE::~AFX_MODULE_STATE(AFX_MODULE_STATE *this)

{
                    /* WARNING: Could not recover jumptable at 0x10009228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~AFX_MODULE_STATE(this);
  return;
}


// ---- FUN_10008e3c @ 10008e3c

void FUN_10008e3c(void)

{
  FUN_1000904c((_onexit_t)&LAB_10008e48);
  return;
}


// ---- FUN_10008e52 @ 10008e52

/* WARNING: Function: _EH_prolog replaced with injection: EH_prolog */

void FUN_10008e52(HWND__ *param_1,uint param_2,uint param_3,long param_4)

{
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_100095b8;
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


// ---- FUN_10008e97 @ 10008e97

undefined4 * FUN_10008e97(void)

{
  return &DAT_1000e6c0;
}


// ---- FUN_10008e9d @ 10008e9d

int FUN_10008e9d(HINSTANCE__ *param_1,int param_2)

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
  iVar4 = AfxWinInit(param_1,(HINSTANCE__ *)0x0,&DAT_1000e1bc,0);
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
      goto LAB_10008f29;
    }
    (**(code **)(*piVar2 + 0x70))();
  }
  AfxWinTerm();
LAB_10008f29:
  *(undefined4 *)(p_Var3 + 8) = uVar1;
  p_Var3 = AfxGetThreadState();
  AfxSetModuleState(*(AFX_MODULE_STATE **)(p_Var3 + 8));
  return param_2;
}


// ---- FUN_10008fc4 @ 10008fc4

undefined4 FUN_10008fc4(undefined4 param_1,int param_2)

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


// ---- FUN_10009020 @ 10009020

void __cdecl FUN_10009020(_onexit_t param_1)

{
  if (DAT_1000f778 == -1) {
    _onexit(param_1);
    return;
  }
  __dllonexit(param_1,&DAT_1000f778,&DAT_1000f774);
  return;
}


// ---- FUN_1000904c @ 1000904c

int __cdecl FUN_1000904c(_onexit_t param_1)

{
  int iVar1;
  
  iVar1 = FUN_10009020(param_1);
  return (iVar1 != 0) - 1;
}


// ---- ftol @ 1000905e

void __cdecl ftol(void)

{
                    /* WARNING: Could not recover jumptable at 0x1000905e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ftol();
  return;
}


// ---- FUN_1000909f @ 1000909f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1000909f(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *_Memory;
  undefined4 *puVar2;
  
  if (param_2 == 0) {
    if (0 < DAT_1000f76c) {
      DAT_1000f76c = DAT_1000f76c + -1;
      goto LAB_100090b5;
    }
LAB_100090dd:
    uVar1 = 0;
  }
  else {
LAB_100090b5:
    _DAT_1000f770 = *(undefined4 *)_adjust_fdiv_exref;
    if (param_2 == 1) {
      DAT_1000f778 = malloc(0x80);
      if (DAT_1000f778 == (undefined4 *)0x0) goto LAB_100090dd;
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


// ---- entry @ 1000914a

int entry(HINSTANCE__ *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_2;
  iVar2 = DAT_1000f76c;
  if (param_2 != 0) {
    if ((param_2 != 1) && (param_2 != 2)) goto LAB_10009192;
    if ((PTR_FUN_1000dcdc != (undefined *)0x0) &&
       (iVar2 = (*(code *)PTR_FUN_1000dcdc)(param_1,param_2,param_3), iVar2 == 0)) {
      return 0;
    }
    iVar2 = FUN_1000909f(param_1,param_2);
  }
  if (iVar2 == 0) {
    return 0;
  }
LAB_10009192:
  iVar2 = FUN_10008e9d(param_1,param_2);
  if (param_2 == 1) {
    if (iVar2 != 0) {
      return iVar2;
    }
    FUN_1000909f(param_1,0);
  }
  if ((param_2 != 0) && (param_2 != 3)) {
    return iVar2;
  }
  iVar3 = FUN_1000909f(param_1,param_2);
  param_2 = iVar2;
  if (iVar3 == 0) {
    param_2 = 0;
  }
  if (param_2 != 0) {
    if (PTR_FUN_1000dcdc != (undefined *)0x0) {
      iVar2 = (*(code *)PTR_FUN_1000dcdc)(param_1,iVar1,param_3);
      return iVar2;
    }
    return param_2;
  }
  return 0;
}


// ---- FUN_100091e7 @ 100091e7

type_info * __thiscall FUN_100091e7(void *this,byte param_1)

{
  type_info::~type_info(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- _EH_prolog @ 10009204

/* WARNING: This is an inlined function */
/* WARNING: Function: _EH_prolog replaced with injection: EH_prolog */

void _EH_prolog(void)

{
  undefined1 auStack_c [12];
  
  ExceptionList = auStack_c;
                    /* WARNING: Could not recover jumptable at 0x10009204. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  return;
}


// ---- __dllonexit @ 1000920a

void __dllonexit(void)

{
                    /* WARNING: Could not recover jumptable at 0x1000920a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __dllonexit();
  return;
}


// ---- initterm @ 10009210

void __cdecl initterm(void)

{
                    /* WARNING: Could not recover jumptable at 0x10009210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  initterm();
  return;
}


// ---- ~type_info @ 10009216

void __thiscall type_info::~type_info(type_info *this)

{
                    /* WARNING: Could not recover jumptable at 0x10009216. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~type_info(this);
  return;
}


// ---- AFX_MODULE_STATE @ 1000921c

void __thiscall
AFX_MODULE_STATE::AFX_MODULE_STATE
          (AFX_MODULE_STATE *this,int param_1,_func_long_HWND___ptr_uint_uint_long *param_2,
          ulong param_3)

{
                    /* WARNING: Could not recover jumptable at 0x1000921c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AFX_MODULE_STATE(this,param_1,param_2,param_3);
  return;
}


// ---- operator_delete @ 10009222

void CNoTrackObject::operator_delete(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10009222. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  operator_delete(param_1);
  return;
}


// ---- ~AFX_MODULE_STATE @ 10009228

void __thiscall AFX_MODULE_STATE::~AFX_MODULE_STATE(AFX_MODULE_STATE *this)

{
                    /* WARNING: Could not recover jumptable at 0x10009228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~AFX_MODULE_STATE(this);
  return;
}


// ---- AfxWndProc @ 1000922e

long AfxWndProc(HWND__ *param_1,uint param_2,uint param_3,long param_4)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000922e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = AfxWndProc(param_1,param_2,param_3,param_4);
  return lVar1;
}


// ---- AfxTermThread @ 10009234

void AfxTermThread(HINSTANCE__ *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10009234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AfxTermThread(param_1);
  return;
}


// ---- AfxTermExtensionModule @ 1000923a

void AfxTermExtensionModule(AFX_EXTENSION_MODULE *param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x1000923a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AfxTermExtensionModule(param_1,param_2);
  return;
}


// ---- AfxUnlockTempMaps @ 10009240

int AfxUnlockTempMaps(int param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AfxUnlockTempMaps(param_1);
  return iVar1;
}


// ---- AfxLockTempMaps @ 10009246

void AfxLockTempMaps(void)

{
                    /* WARNING: Could not recover jumptable at 0x10009246. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AfxLockTempMaps();
  return;
}


// ---- AfxSetModuleState @ 1000924c

AFX_MODULE_STATE * AfxSetModuleState(AFX_MODULE_STATE *param_1)

{
  AFX_MODULE_STATE *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000924c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = AfxSetModuleState(param_1);
  return pAVar1;
}


// ---- CDynLinkLibrary @ 10009252

void __thiscall
CDynLinkLibrary::CDynLinkLibrary(CDynLinkLibrary *this,AFX_EXTENSION_MODULE *param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10009252. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CDynLinkLibrary(this,param_1,param_2);
  return;
}


// ---- AfxInitExtensionModule @ 10009258

int AfxInitExtensionModule(AFX_EXTENSION_MODULE *param_1,HINSTANCE__ *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009258. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AfxInitExtensionModule(param_1,param_2);
  return iVar1;
}


// ---- AfxWinTerm @ 1000925e

void AfxWinTerm(void)

{
                    /* WARNING: Could not recover jumptable at 0x1000925e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AfxWinTerm();
  return;
}


// ---- AfxWinInit @ 10009264

int AfxWinInit(HINSTANCE__ *param_1,HINSTANCE__ *param_2,char *param_3,int param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009264. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AfxWinInit(param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- AfxGetThreadState @ 1000926a

_AFX_THREAD_STATE * AfxGetThreadState(void)

{
  _AFX_THREAD_STATE *p_Var1;
  
                    /* WARNING: Could not recover jumptable at 0x1000926a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  p_Var1 = AfxGetThreadState();
  return p_Var1;
}


// ---- AfxCoreInitModule @ 10009270

void AfxCoreInitModule(void)

{
                    /* WARNING: Could not recover jumptable at 0x10009270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AfxCoreInitModule();
  return;
}


// ---- AfxDllGetClassObject @ 10009276

long AfxDllGetClassObject(_GUID *param_1,_GUID *param_2,void **param_3)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009276. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = AfxDllGetClassObject(param_1,param_2,param_3);
  return lVar1;
}


// ---- AfxDllCanUnloadNow @ 1000927c

long AfxDllCanUnloadNow(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000927c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = AfxDllCanUnloadNow();
  return lVar1;
}


// ---- DllGetClassObject @ 10009282

HRESULT DllGetClassObject(IID *rclsid,IID *riid,LPVOID *ppv)

{
  AFX_MODULE_STATE *pAVar1;
  long lVar2;
  undefined4 local_c;
  int local_8;
  
                    /* 0x9282  2  DllGetClassObject */
  pAVar1 = (AFX_MODULE_STATE *)FUN_10008e97();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)&local_c,pAVar1);
  lVar2 = AfxDllGetClassObject(rclsid,riid,ppv);
  *(undefined4 *)(local_8 + 4) = local_c;
  return lVar2;
}


// ---- DllCanUnloadNow @ 100092b0

HRESULT DllCanUnloadNow(void)

{
  AFX_MODULE_STATE *pAVar1;
  long lVar2;
  undefined4 local_c;
  int local_8;
  
                    /* 0x92b0  1  DllCanUnloadNow */
  pAVar1 = (AFX_MODULE_STATE *)FUN_10008e97();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)&local_c,pAVar1);
  lVar2 = AfxDllCanUnloadNow();
  *(undefined4 *)(local_8 + 4) = local_c;
  return lVar2;
}


// ---- Unwind@100092e0 @ 100092e0

void Unwind_100092e0(void)

{
  int unaff_EBP;
  
  FUN_10003eb0(*(void **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10009300 @ 10009300

void Unwind_10009300(void)

{
  int unaff_EBP;
  
  FUN_100047b0((undefined4 *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@10009320 @ 10009320

void Unwind_10009320(void)

{
  int unaff_EBP;
  
  COleControl::~COleControl(*(COleControl **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10009328 @ 10009328

void Unwind_10009328(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x10) + 0x1d4));
  return;
}


// ---- Unwind@10009336 @ 10009336

void Unwind_10009336(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x10) + 0x1d8));
  return;
}


// ---- Unwind@10009344 @ 10009344

void Unwind_10009344(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x10) + 0x1e8));
  return;
}


// ---- Unwind@10009360 @ 10009360

void Unwind_10009360(void)

{
  int unaff_EBP;
  
  COleControl::~COleControl(*(COleControl **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10009368 @ 10009368

void Unwind_10009368(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x10) + 0x1d4));
  return;
}


// ---- Unwind@10009376 @ 10009376

void Unwind_10009376(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x10) + 0x1d8));
  return;
}


// ---- Unwind@10009384 @ 10009384

void Unwind_10009384(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x10) + 0x1e8));
  return;
}


// ---- Unwind@100093a0 @ 100093a0

void Unwind_100093a0(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x2c));
  return;
}


// ---- Unwind@100093a8 @ 100093a8

void Unwind_100093a8(void)

{
  int unaff_EBP;
  
  FUN_10004ea0((CGdiObject *)(unaff_EBP + -0x1c));
  return;
}


// ---- Unwind@100093b0 @ 100093b0

void Unwind_100093b0(void)

{
  int unaff_EBP;
  
  FUN_10004f10((CGdiObject *)(unaff_EBP + -0x24));
  return;
}


// ---- Unwind@100093b8 @ 100093b8

void Unwind_100093b8(void)

{
  int unaff_EBP;
  
  FUN_10004620((undefined4 *)(unaff_EBP + -0x24));
  return;
}


// ---- Unwind@100093c0 @ 100093c0

void Unwind_100093c0(void)

{
  int unaff_EBP;
  
  FUN_10004620((undefined4 *)(unaff_EBP + -0x1c));
  return;
}


// ---- Unwind@100093e0 @ 100093e0

void Unwind_100093e0(void)

{
  int unaff_EBP;
  
  CDialog::~CDialog((CDialog *)(unaff_EBP + -0x6c));
  return;
}


// ---- Unwind@10009400 @ 10009400

void Unwind_10009400(void)

{
  int unaff_EBP;
  
  FUN_10003eb0(*(void **)(unaff_EBP + 8));
  return;
}


// ---- Unwind@10009420 @ 10009420

void Unwind_10009420(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@10009428 @ 10009428

void Unwind_10009428(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10009430 @ 10009430

void Unwind_10009430(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x18));
  return;
}


// ---- Unwind@10009450 @ 10009450

void Unwind_10009450(void)

{
  int unaff_EBP;
  
  FUN_10004620(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10009470 @ 10009470

void Unwind_10009470(void)

{
  int unaff_EBP;
  
  FUN_10004620(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10009490 @ 10009490

void Unwind_10009490(void)

{
  int unaff_EBP;
  
  FUN_10004620(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@100094b0 @ 100094b0

void Unwind_100094b0(void)

{
  int unaff_EBP;
  
  FUN_10003eb0(*(void **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@100094d0 @ 100094d0

void Unwind_100094d0(void)

{
  int unaff_EBP;
  
  FUN_10003eb0(*(void **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@100094f0 @ 100094f0

void Unwind_100094f0(void)

{
  int unaff_EBP;
  
  FUN_10004620(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10009510 @ 10009510

void Unwind_10009510(void)

{
  int unaff_EBP;
  
  FUN_10004620(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10009530 @ 10009530

void Unwind_10009530(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10009550 @ 10009550

void Unwind_10009550(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10009570 @ 10009570

void Unwind_10009570(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x184));
  return;
}


// ---- Unwind@10009590 @ 10009590

void Unwind_10009590(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 8));
  return;
}


// ---- Unwind@10009598 @ 10009598

void Unwind_10009598(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x180));
  return;
}


// ---- Unwind@100095b0 @ 100095b0

void Unwind_100095b0(void)

{
  int unaff_EBP;
  
  FUN_100047b0((undefined4 *)(unaff_EBP + -0x14));
  return;
}


