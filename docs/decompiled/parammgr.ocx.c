// Decompiled with Ghidra from parammgr.ocx
// Format: Portable Executable (PE), image base 10000000

// ---- FUN_10001000 @ 10001000

CDialog * __thiscall FUN_10001000(void *this,CWnd *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_100170b5;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  CDialog::CDialog(this,1,param_1);
  local_8 = 0;
  CString::CString((CString *)((int)this + 100));
  local_8 = CONCAT31(local_8._1_3_,1);
  *(undefined ***)this = &PTR_LAB_10018618;
  CString::operator=((CString *)((int)this + 100),&DAT_100218c0);
  *(undefined4 *)((int)this + 0x60) = 1;
  ExceptionList = local_10;
  return this;
}


// ---- FUN_1000107d @ 1000107d

void __thiscall FUN_1000107d(void *this,CDataExchange *param_1)

{
  FUN_100011d0();
  DDX_Text(param_1,0xc9,(CString *)((int)this + 100));
  return;
}


// ---- FUN_100010ab @ 100010ab

undefined * FUN_100010ab(void)

{
  return messageMap_exref;
}


// ---- FUN_100010b5 @ 100010b5

undefined ** FUN_100010b5(void)

{
  return &PTR_FUN_100185f8;
}


// ---- FUN_100010c5 @ 100010c5

undefined4 __fastcall FUN_100010c5(CDialog *param_1)

{
  CString::LoadStringA((CString *)(param_1 + 100),3);
  CDialog::OnInitDialog(param_1);
  if (*(int *)(param_1 + 0x60) != 0) {
    CWnd::CenterWindow((CWnd *)param_1,(CWnd *)0x0);
  }
  return 1;
}


// ---- FUN_10001100 @ 10001100

CDialog * __thiscall FUN_10001100(void *this,uint param_1)

{
  FUN_10001130(this);
  if ((param_1 & 1) != 0) {
    FUN_10001190(this);
  }
  return this;
}


// ---- FUN_10001130 @ 10001130

void __fastcall FUN_10001130(CDialog *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_100170c9;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  CString::~CString((CString *)(param_1 + 100));
  local_8 = 0xffffffff;
  CDialog::~CDialog(param_1);
  ExceptionList = local_10;
  return;
}


// ---- FUN_10001180 @ 10001180

void FUN_10001180(void)

{
  return;
}


// ---- FUN_10001190 @ 10001190

void FUN_10001190(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ---- FUN_100011b0 @ 100011b0

void FUN_100011b0(void)

{
  return;
}


// ---- FUN_100011c0 @ 100011c0

void FUN_100011c0(void)

{
  return;
}


// ---- FUN_100011d0 @ 100011d0

void FUN_100011d0(void)

{
  return;
}


// ---- FUN_100011e0 @ 100011e0

void __fastcall FUN_100011e0(int param_1)

{
  EnableWindow(*(HWND *)(param_1 + 0x20),0);
  return;
}


// ---- FUN_10001200 @ 10001200

void __fastcall FUN_10001200(int param_1)

{
  EnableWindow(*(HWND *)(param_1 + 0x20),1);
  return;
}


// ---- FUN_10001220 @ 10001220

CDialog * __thiscall FUN_10001220(void *this,CWnd *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_100170f5;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  CDialog::CDialog(this,0xd2,param_1);
  local_8 = 0;
  FUN_10001510((CWnd *)((int)this + 0x68));
  local_8 = CONCAT31(local_8._1_3_,1);
  *(undefined ***)this = &PTR_LAB_10018710;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(CWnd **)((int)this + 0xa8) = param_1;
  *(undefined4 *)((int)this + 0xac) = 0xd2;
  FUN_100013ac(this);
  ExceptionList = local_10;
  return this;
}


// ---- FUN_100012bb @ 100012bb

void __thiscall FUN_100012bb(void *this,CDataExchange *param_1)

{
  FUN_100011d0();
  DDX_Control(param_1,0x421,(CWnd *)((int)this + 0x68));
  return;
}


// ---- FUN_100012e9 @ 100012e9

undefined * FUN_100012e9(void)

{
  return messageMap_exref;
}


// ---- FUN_100012f3 @ 100012f3

undefined ** FUN_100012f3(void)

{
  return &PTR_FUN_100186f0;
}


// ---- FUN_10001303 @ 10001303

void __fastcall FUN_10001303(CWnd *param_1)

{
  FUN_10001560(param_1 + 0x68,0,100);
  FUN_100015a0(param_1 + 0x68,1);
  FUN_100015d0(param_1 + 0x68,0);
  *(undefined4 *)(param_1 + 100) = 0;
  CWnd::SetWindowPos(param_1,(CWnd *)wndTop_exref,0,0,0,0,0x43);
  return;
}


// ---- FUN_1000135a @ 1000135a

undefined4 __thiscall FUN_1000135a(void *this,int param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)this + 0x60);
  if (param_1 < 0x65) {
    if (param_1 < 0) {
      param_1 = 0;
    }
  }
  else {
    param_1 = 100;
  }
  *(int *)((int)this + 0x60) = param_1;
  FUN_100015d0((void *)((int)this + 0x68),*(WPARAM *)((int)this + 0x60));
  return uVar1;
}


// ---- FUN_100013ac @ 100013ac

undefined4 __fastcall FUN_100013ac(void *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_100014e0(param_1,*(uint *)((int)param_1 + 0xac),*(CWnd **)((int)param_1 + 0xa8));
  return uVar1;
}


// ---- PostNcDestroy @ 100013db

/* Library Function - Multiple Matches With Same Base Name
    protected: virtual void __thiscall CFrameWnd::PostNcDestroy(void)
    protected: virtual void __thiscall CView::PostNcDestroy(void)
   
   Library: Visual Studio 2003 Debug */

void __fastcall PostNcDestroy(int *param_1)

{
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))(1);
  }
  return;
}


// ---- FUN_10001413 @ 10001413

void __fastcall FUN_10001413(CWnd *param_1)

{
  *(undefined4 *)(param_1 + 100) = 1;
  CWnd::ShowWindow(param_1,0);
  return;
}


// ---- FUN_10001432 @ 10001432

undefined4 __fastcall FUN_10001432(CDialog *param_1)

{
  CDialog::OnInitDialog(param_1);
  CWnd::CenterWindow((CWnd *)param_1,(CWnd *)0x0);
  FUN_10001303((CWnd *)param_1);
  return 1;
}


// ---- FUN_10001460 @ 10001460

CDialog * __thiscall FUN_10001460(void *this,uint param_1)

{
  FUN_10001490(this);
  if ((param_1 & 1) != 0) {
    FUN_10001190(this);
  }
  return this;
}


// ---- FUN_10001490 @ 10001490

void __fastcall FUN_10001490(CDialog *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10017109;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  CProgressCtrl::~CProgressCtrl((CProgressCtrl *)(param_1 + 0x68));
  local_8 = 0xffffffff;
  CDialog::~CDialog(param_1);
  ExceptionList = local_10;
  return;
}


// ---- FUN_100014e0 @ 100014e0

void __thiscall FUN_100014e0(void *this,uint param_1,CWnd *param_2)

{
  CDialog::Create(this,(char *)(param_1 & 0xffff),param_2);
  return;
}


// ---- FUN_10001510 @ 10001510

CWnd * __fastcall FUN_10001510(CWnd *param_1)

{
  CWnd::CWnd(param_1);
  *(undefined ***)param_1 = &PTR_LAB_100187e8;
  return param_1;
}


// ---- FUN_10001530 @ 10001530

CProgressCtrl * __thiscall FUN_10001530(void *this,uint param_1)

{
  CProgressCtrl::~CProgressCtrl(this);
  if ((param_1 & 1) != 0) {
    FUN_10001190(this);
  }
  return this;
}


// ---- FUN_10001560 @ 10001560

void __thiscall FUN_10001560(void *this,uint param_1,int param_2)

{
  SendMessageA(*(HWND *)((int)this + 0x20),0x401,0,param_1 & 0xffff | param_2 << 0x10);
  return;
}


// ---- FUN_100015a0 @ 100015a0

void __thiscall FUN_100015a0(void *this,WPARAM param_1)

{
  SendMessageA(*(HWND *)((int)this + 0x20),0x404,param_1,0);
  return;
}


// ---- FUN_100015d0 @ 100015d0

void __thiscall FUN_100015d0(void *this,WPARAM param_1)

{
  SendMessageA(*(HWND *)((int)this + 0x20),0x402,param_1,0);
  return;
}


// ---- FUN_10001600 @ 10001600

char * __cdecl FUN_10001600(undefined2 param_1)

{
  char *pcVar1;
  
  switch(param_1) {
  case 1:
    pcVar1 = &DAT_1001d7e0;
    break;
  case 2:
    pcVar1 = &DAT_1001d7e8;
    break;
  case 3:
    pcVar1 = s_Integer_1001d7f0;
    break;
  case 4:
    pcVar1 = &DAT_1001d7f8;
    break;
  case 5:
    pcVar1 = s_Currency_1001d800;
    break;
  case 6:
    pcVar1 = s_Single_1001d80c;
    break;
  case 7:
    pcVar1 = s_Double_1001d814;
    break;
  case 8:
    pcVar1 = &DAT_1001d81c;
    break;
  default:
    pcVar1 = s_Unknown_1001d848;
    break;
  case 10:
    pcVar1 = &DAT_1001d824;
    break;
  case 0xb:
    pcVar1 = s_Long_Binary_1001d82c;
    break;
  case 0xc:
    pcVar1 = &DAT_1001d838;
    break;
  case 0xf:
    pcVar1 = &DAT_1001d840;
  }
  return pcVar1;
}


// ---- FUN_100016bd @ 100016bd

char * __cdecl FUN_100016bd(undefined2 param_1)

{
  char *pcVar1;
  
  switch(param_1) {
  case 0:
    pcVar1 = s_Select_1001d850;
    break;
  default:
    pcVar1 = s_Unknown_1001d8bc;
    break;
  case 0x10:
    pcVar1 = s_Crosstab_1001d860;
    break;
  case 0x20:
    pcVar1 = s_Delete_1001d86c;
    break;
  case 0x30:
    pcVar1 = s_Update_1001d874;
    break;
  case 0x40:
    pcVar1 = s_Append_1001d87c;
    break;
  case 0x50:
    pcVar1 = s_MakeTable_1001d884;
    break;
  case 0x60:
    pcVar1 = &DAT_1001d890;
    break;
  case 0x70:
    pcVar1 = s_SQLPassThrough_1001d894;
    break;
  case 0x80:
    pcVar1 = s_Set_Operation_1001d8a4;
    break;
  case 0x90:
    pcVar1 = s_SPTBulk_1001d8b4;
    break;
  case 0xf0:
    pcVar1 = s_Action_1001d858;
  }
  return pcVar1;
}


// ---- FUN_1000185a @ 1000185a

char * __cdecl FUN_1000185a(int param_1)

{
  char *local_8;
  
  if (param_1 == 0) {
    local_8 = s_FALSE_1001d8cc;
  }
  else {
    local_8 = &DAT_1001d8c4;
  }
  return local_8;
}


// ---- FUN_1000187b @ 1000187b

CString * __cdecl FUN_1000187b(CString *param_1,CString *param_2)

{
  ushort uVar1;
  COleCurrency *this;
  COleDateTime *this_00;
  CString *pCVar2;
  char *pcVar3;
  ulong uVar4;
  CString local_38 [4];
  undefined1 local_34 [12];
  CString local_28 [4];
  undefined1 local_24 [12];
  CString local_18 [4];
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10017152;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  CString::CString(local_18);
  local_8 = 1;
  CString::operator=(local_18,&DAT_1001d8d4);
  switch(*(undefined2 *)param_2) {
  case 0:
  case 1:
    CString::operator=(local_18,&DAT_1001d8dc);
    break;
  case 2:
    CString::Format(param_2,(char *)local_18);
    break;
  case 3:
    CString::Format(param_2,(char *)local_18);
    break;
  case 4:
    CString::Format(param_2,(char *)local_18);
    break;
  case 5:
    CString::Format(local_18,(char *)local_18);
    break;
  case 6:
    uVar4 = 0;
    pCVar2 = local_28;
    this = FUN_100026d0(local_24,(tagVARIANT *)param_2);
    pCVar2 = (CString *)COleCurrency::Format(this,(ulong)pCVar2,uVar4);
    local_8._0_1_ = 2;
    CString::operator=(local_18,pCVar2);
    local_8 = CONCAT31(local_8._1_3_,1);
    CString::~CString(local_28);
    break;
  case 7:
    pCVar2 = local_38;
    this_00 = FUN_100026f0(local_34,(tagVARIANT *)param_2);
    pCVar2 = (CString *)COleDateTime::Format(this_00,(char *)pCVar2);
    local_8._0_1_ = 3;
    CString::operator=(local_18,pCVar2);
    local_8 = CONCAT31(local_8._1_3_,1);
    CString::~CString(local_38);
    break;
  case 8:
    CString::operator=(local_18,*(char **)(param_2 + 8));
    break;
  case 9:
    CString::operator=(local_18,s_VT_DISPATCH_1001d900);
    break;
  case 10:
    CString::operator=(local_18,s_VT_ERROR_1001d90c);
    break;
  case 0xb:
    pcVar3 = FUN_1000185a((int)*(short *)(param_2 + 8));
    CString::CString(param_1,pcVar3);
    local_8 = local_8 & 0xffffff00;
    CString::~CString(local_18);
    ExceptionList = local_10;
    return param_1;
  case 0xc:
    CString::operator=(local_18,s_VT_VARIANT_1001d918);
    break;
  case 0xd:
    CString::operator=(local_18,s_VT_UNKNOWN_1001d924);
    break;
  case 0x10:
    CString::operator=(local_18,s_VT_I1_1001d930);
    break;
  case 0x11:
    CString::Format((CString *)(uint)(byte)param_2[8],(char *)local_18);
    break;
  case 0x12:
    CString::operator=(local_18,s_VT_UI2_1001d940);
    break;
  case 0x13:
    CString::operator=(local_18,s_VT_UI4_1001d948);
    break;
  case 0x14:
    CString::operator=(local_18,s_VT_I8_1001d950);
    break;
  case 0x15:
    CString::operator=(local_18,s_VT_UI8_1001d958);
    break;
  case 0x16:
    CString::operator=(local_18,s_VT_INT_1001d960);
    break;
  case 0x17:
    CString::operator=(local_18,s_VT_UINT_1001d968);
    break;
  case 0x18:
    CString::operator=(local_18,s_VT_VOID_1001d970);
    break;
  case 0x19:
    CString::operator=(local_18,s_VT_HRESULT_1001d978);
    break;
  case 0x1a:
    CString::operator=(local_18,s_VT_PTR_1001d984);
    break;
  case 0x1b:
    CString::operator=(local_18,s_VT_SAFEARRAY_1001d98c);
    break;
  case 0x1c:
    CString::operator=(local_18,s_VT_CARRAY_1001d99c);
    break;
  case 0x1d:
    CString::operator=(local_18,s_VT_USERDEFINED_1001d9a8);
    break;
  case 0x1e:
    CString::operator=(local_18,s_VT_LPSTR_1001d9b8);
    break;
  case 0x1f:
    CString::operator=(local_18,s_VT_LPWSTR_1001d9c4);
    break;
  case 0x40:
    CString::operator=(local_18,s_VT_FILETIME_1001d9d0);
    break;
  case 0x41:
    CString::operator=(local_18,s_VT_BLOB_1001d9dc);
    break;
  case 0x42:
    CString::operator=(local_18,s_VT_STREAM_1001d9e4);
    break;
  case 0x43:
    CString::operator=(local_18,s_VT_STORAGE_1001d9f0);
    break;
  case 0x44:
    CString::operator=(local_18,s_VT_STREAMED_OBJECT_1001d9fc);
    break;
  case 0x45:
    CString::operator=(local_18,s_VT_STORED_OBJECT_1001da10);
    break;
  case 0x46:
    CString::operator=(local_18,s_VT_BLOB_OBJECT_1001da24);
    break;
  case 0x47:
    CString::operator=(local_18,s_VT_CF_1001da34);
    break;
  case 0x48:
    CString::operator=(local_18,s_VT_CLSID_1001da3c);
  }
  uVar1 = *(ushort *)param_2;
  local_14 = CONCAT22(local_14._2_2_,uVar1);
  if ((uVar1 & 0x2000) != 0) {
    local_14 = CONCAT22(local_14._2_2_,uVar1) & 0xffffdfff;
    CString::operator=(local_18,s_Array_of_1001da48);
  }
  if ((local_14 & 0x4000) != 0) {
    local_14 = local_14 & 0xffffbfff;
    CString::operator+=(local_18,s_Pointer_to_1001da54);
  }
  if ((local_14 & 0xffff) != (uint)*(ushort *)param_2) {
    switch(local_14 & 0xffff) {
    case 0:
      CString::operator+=(local_18,s_VT_EMPTY_1001da60);
      break;
    case 1:
      CString::operator+=(local_18,s_VT_NULL_1001da6c);
      break;
    case 2:
      CString::operator+=(local_18,s_VT_I2_1001da74);
      break;
    case 3:
      CString::operator+=(local_18,s_VT_I4_1001da7c);
      break;
    case 4:
      CString::operator+=(local_18,s_VT_R4_1001da84);
      break;
    case 5:
      CString::operator+=(local_18,s_VT_R8_1001da8c);
      break;
    case 6:
      CString::operator+=(local_18,s_VT_CY_1001da94);
      break;
    case 7:
      CString::operator+=(local_18,s_VT_DATE_1001da9c);
      break;
    case 8:
      CString::operator+=(local_18,s_VT_BSTR_1001daa4);
      break;
    case 9:
      CString::operator+=(local_18,s_VT_DISPATCH_1001daac);
      break;
    case 10:
      CString::operator+=(local_18,s_VT_ERROR_1001dab8);
      break;
    case 0xb:
      CString::operator+=(local_18,s_VT_BOOL_1001dac4);
      break;
    case 0xc:
      CString::operator+=(local_18,s_VT_VARIANT_1001dacc);
      break;
    case 0xd:
      CString::operator+=(local_18,s_VT_UNKNOWN_1001dad8);
      break;
    case 0x10:
      CString::operator+=(local_18,s_VT_I1_1001dae4);
      break;
    case 0x11:
      CString::operator+=(local_18,s_VT_UI1_1001daec);
      break;
    case 0x12:
      CString::operator+=(local_18,s_VT_UI2_1001daf4);
      break;
    case 0x13:
      CString::operator+=(local_18,s_VT_UI4_1001dafc);
      break;
    case 0x14:
      CString::operator+=(local_18,s_VT_I8_1001db04);
      break;
    case 0x15:
      CString::operator+=(local_18,s_VT_UI8_1001db0c);
      break;
    case 0x16:
      CString::operator+=(local_18,s_VT_INT_1001db14);
      break;
    case 0x17:
      CString::operator+=(local_18,s_VT_UINT_1001db1c);
      break;
    case 0x18:
      CString::operator+=(local_18,s_VT_VOID_1001db24);
      break;
    case 0x19:
      CString::operator+=(local_18,s_VT_HRESULT_1001db2c);
      break;
    case 0x1a:
      CString::operator+=(local_18,s_VT_PTR_1001db38);
      break;
    case 0x1b:
      CString::operator+=(local_18,s_VT_SAFEARRAY_1001db40);
      break;
    case 0x1c:
      CString::operator+=(local_18,s_VT_CARRAY_1001db50);
      break;
    case 0x1d:
      CString::operator+=(local_18,s_VT_USERDEFINED_1001db5c);
      break;
    case 0x1e:
      CString::operator+=(local_18,s_VT_LPSTR_1001db6c);
      break;
    case 0x1f:
      CString::operator+=(local_18,s_VT_LPWSTR_1001db78);
      break;
    case 0x40:
      CString::operator+=(local_18,s_VT_FILETIME_1001db84);
      break;
    case 0x41:
      CString::operator+=(local_18,s_VT_BLOB_1001db90);
      break;
    case 0x42:
      CString::operator+=(local_18,s_VT_STREAM_1001db98);
      break;
    case 0x43:
      CString::operator+=(local_18,s_VT_STORAGE_1001dba4);
      break;
    case 0x44:
      CString::operator+=(local_18,s_VT_STREAMED_OBJECT_1001dbb0);
      break;
    case 0x45:
      CString::operator+=(local_18,s_VT_STORED_OBJECT_1001dbc4);
      break;
    case 0x46:
      CString::operator+=(local_18,s_VT_BLOB_OBJECT_1001dbd8);
      break;
    case 0x47:
      CString::operator+=(local_18,s_VT_CF_1001dbe8);
      break;
    case 0x48:
      CString::operator+=(local_18,s_VT_CLSID_1001dbf0);
    }
  }
  CString::CString(param_1,local_18);
  local_8 = local_8 & 0xffffff00;
  CString::~CString(local_18);
  ExceptionList = local_10;
  return param_1;
}


// ---- FUN_1000218c @ 1000218c

int __cdecl FUN_1000218c(undefined2 *param_1)

{
  int iVar1;
  
  switch(*param_1) {
  case 0:
  case 1:
    iVar1 = 0;
    break;
  case 2:
    iVar1 = (int)(short)param_1[4];
    break;
  case 3:
    iVar1 = *(int *)(param_1 + 4);
    break;
  default:
    iVar1 = 0;
  }
  return iVar1;
}


// ---- FUN_100021f9 @ 100021f9

void __cdecl FUN_100021f9(undefined2 *param_1,undefined2 param_2)

{
  *param_1 = 2;
  param_1[4] = param_2;
  return;
}


// ---- FUN_10002211 @ 10002211

void __cdecl FUN_10002211(undefined2 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = 5;
  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 6) = param_3;
  return;
}


// ---- FUN_1000222d @ 1000222d

void __cdecl FUN_1000222d(undefined2 *param_1,undefined4 param_2)

{
  *param_1 = 4;
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}


// ---- FUN_10002243 @ 10002243

void __cdecl FUN_10002243(COleVariant *param_1)

{
  char *pcVar1;
  ushort uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10017165;
  local_10 = ExceptionList;
  local_8 = 0;
  uVar2 = 0xe;
  ExceptionList = &local_10;
  pcVar1 = (char *)FUN_100026c0((undefined4 *)&stack0x00000008);
  COleVariant::SetString(param_1,pcVar1,uVar2);
  local_8 = 0xffffffff;
  CString::~CString((CString *)&stack0x00000008);
  ExceptionList = local_10;
  return;
}


// ---- FUN_10002292 @ 10002292

void __cdecl FUN_10002292(undefined2 *param_1)

{
  CString *pCVar1;
  char *pcVar2;
  float10 fVar3;
  CString local_64 [4];
  CString local_60 [4];
  CString local_5c [4];
  CString local_58 [4];
  CString local_54 [4];
  CString local_50 [4];
  CString local_4c [4];
  CString local_48 [4];
  CString local_44 [4];
  CString local_40 [4];
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  CString local_24 [4];
  COleDateTime local_20 [12];
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_100171db;
  local_10 = ExceptionList;
  local_8 = 0;
  local_28 = 0;
  local_14 = 0;
  local_30 = 0;
  local_34 = 0;
  local_38 = 0;
  local_2c = 0;
  ExceptionList = &local_10;
  CString::CString(local_24);
  local_8._0_1_ = 1;
  local_3c = CString::Find((CString *)&stack0x00000008,&DAT_1001dbfc);
  if (-1 < local_3c) {
    pCVar1 = (CString *)CString::Left((CString *)&stack0x00000008,(int)local_40);
    local_8._0_1_ = 2;
    CString::operator=(local_24,pCVar1);
    local_8._0_1_ = 1;
    CString::~CString(local_40);
    pcVar2 = (char *)FUN_100026c0((undefined4 *)local_24);
    local_28 = atoi(pcVar2);
    pCVar1 = (CString *)CString::Mid((CString *)&stack0x00000008,(int)local_44);
    local_8._0_1_ = 3;
    CString::operator=((CString *)&stack0x00000008,pCVar1);
    local_8._0_1_ = 1;
    CString::~CString(local_44);
    local_3c = CString::Find((CString *)&stack0x00000008,&DAT_1001dc00);
    if (-1 < local_3c) {
      pCVar1 = (CString *)CString::Left((CString *)&stack0x00000008,(int)local_48);
      local_8._0_1_ = 4;
      CString::operator=(local_24,pCVar1);
      local_8._0_1_ = 1;
      CString::~CString(local_48);
      pcVar2 = (char *)FUN_100026c0((undefined4 *)local_24);
      local_14 = atoi(pcVar2);
      pCVar1 = (CString *)CString::Mid((CString *)&stack0x00000008,(int)local_4c);
      local_8._0_1_ = 5;
      CString::operator=((CString *)&stack0x00000008,pCVar1);
      local_8._0_1_ = 1;
      CString::~CString(local_4c);
      local_3c = CString::Find((CString *)&stack0x00000008,&DAT_1001dc04);
      if (-1 < local_3c) {
        pCVar1 = (CString *)CString::Left((CString *)&stack0x00000008,(int)local_50);
        local_8._0_1_ = 6;
        CString::operator=(local_24,pCVar1);
        local_8._0_1_ = 1;
        CString::~CString(local_50);
        pcVar2 = (char *)FUN_100026c0((undefined4 *)local_24);
        local_30 = atoi(pcVar2);
        pCVar1 = (CString *)CString::Mid((CString *)&stack0x00000008,(int)local_54);
        local_8._0_1_ = 7;
        CString::operator=((CString *)&stack0x00000008,pCVar1);
        local_8._0_1_ = 1;
        CString::~CString(local_54);
        local_3c = CString::Find((CString *)&stack0x00000008,&DAT_1001dc08);
        if (-1 < local_3c) {
          pCVar1 = (CString *)CString::Left((CString *)&stack0x00000008,(int)local_58);
          local_8._0_1_ = 8;
          CString::operator=(local_24,pCVar1);
          local_8._0_1_ = 1;
          CString::~CString(local_58);
          pcVar2 = (char *)FUN_100026c0((undefined4 *)local_24);
          local_34 = atoi(pcVar2);
          pCVar1 = (CString *)CString::Mid((CString *)&stack0x00000008,(int)local_5c);
          local_8._0_1_ = 9;
          CString::operator=((CString *)&stack0x00000008,pCVar1);
          local_8._0_1_ = 1;
          CString::~CString(local_5c);
          local_3c = CString::Find((CString *)&stack0x00000008,&DAT_1001dc0c);
          if (-1 < local_3c) {
            pCVar1 = (CString *)CString::Left((CString *)&stack0x00000008,(int)local_60);
            local_8._0_1_ = 10;
            CString::operator=(local_24,pCVar1);
            local_8._0_1_ = 1;
            CString::~CString(local_60);
            pcVar2 = (char *)FUN_100026c0((undefined4 *)local_24);
            local_38 = atoi(pcVar2);
            pCVar1 = (CString *)CString::Mid((CString *)&stack0x00000008,(int)local_64);
            local_8._0_1_ = 0xb;
            CString::operator=((CString *)&stack0x00000008,pCVar1);
            local_8._0_1_ = 1;
            CString::~CString(local_64);
            pcVar2 = (char *)FUN_100026c0((undefined4 *)&stack0x00000008);
            local_2c = atoi(pcVar2);
          }
        }
      }
    }
  }
  ATL::COleDateTime::COleDateTime(local_20,local_30,local_14,local_28,local_34,local_38,local_2c);
  *param_1 = 7;
  fVar3 = FUN_10002740((double *)local_20);
  *(double *)(param_1 + 4) = (double)fVar3;
  local_8 = (uint)local_8._1_3_ << 8;
  CString::~CString(local_24);
  local_8 = 0xffffffff;
  CString::~CString((CString *)&stack0x00000008);
  ExceptionList = local_10;
  return;
}


// ---- FUN_100026c0 @ 100026c0

undefined4 __fastcall FUN_100026c0(undefined4 *param_1)

{
  return *param_1;
}


// ---- FUN_100026d0 @ 100026d0

COleCurrency * __thiscall FUN_100026d0(void *this,tagVARIANT *param_1)

{
  COleCurrency::operator=(this,param_1);
  return this;
}


// ---- FUN_100026f0 @ 100026f0

COleDateTime * __thiscall FUN_100026f0(void *this,tagVARIANT *param_1)

{
  COleDateTime::operator=(this,param_1);
  return this;
}


// ---- COleDateTime @ 10002710

/* Library Function - Single Match
    public: __thiscall ATL::COleDateTime::COleDateTime(int,int,int,int,int,int)
   
   Library: Visual Studio */

COleDateTime * __thiscall
ATL::COleDateTime::COleDateTime
          (COleDateTime *this,int param_1,int param_2,int param_3,int param_4,int param_5,
          int param_6)

{
  ::COleDateTime::SetDateTime(this,param_1,param_2,param_3,param_4,param_5,param_6);
  return this;
}


// ---- FUN_10002740 @ 10002740

float10 __fastcall FUN_10002740(double *param_1)

{
  return (float10)*param_1;
}


// ---- FUN_10002750 @ 10002750

float10 __cdecl FUN_10002750(float *param_1,int param_2,double param_3)

{
  float fVar1;
  int local_8;
  
  fVar1 = *param_1;
  for (local_8 = 1; local_8 < param_2; local_8 = local_8 + 1) {
    fVar1 = param_1[local_8] * (float)param_3 + fVar1;
    param_3 = param_3 * param_3;
  }
  return (float10)fVar1;
}


// ---- FUN_1000279c @ 1000279c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_1000279c(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7)

{
  void *pvVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_8;
  
  pvVar1 = (void *)FUN_100028c5(1,param_5);
  for (local_18 = 1; local_18 <= param_5; local_18 = local_18 + 1) {
    local_8 = 0.0;
    if (*(float *)(param_2 + local_18 * 4) != _DAT_100188a8) {
      for (local_14 = 1; local_14 <= param_4; local_14 = local_14 + 1) {
        local_8 = *(float *)(*(int *)(param_1 + local_14 * 4) + local_18 * 4) *
                  *(float *)(param_6 + local_14 * 4) + local_8;
      }
      local_8 = local_8 / *(float *)(param_2 + local_18 * 4);
    }
    *(float *)((int)pvVar1 + local_18 * 4) = local_8;
  }
  for (local_18 = 1; local_18 <= param_5; local_18 = local_18 + 1) {
    local_8 = 0.0;
    for (local_10 = 1; local_10 <= param_5; local_10 = local_10 + 1) {
      local_8 = *(float *)(*(int *)(param_3 + local_18 * 4) + local_10 * 4) *
                *(float *)((int)pvVar1 + local_10 * 4) + local_8;
    }
    *(float *)(param_7 + local_18 * 4) = local_8;
  }
  FUN_100028dd(pvVar1);
  return;
}


// ---- FUN_100028c5 @ 100028c5

void __cdecl FUN_100028c5(undefined4 param_1,int param_2)

{
  FUN_10004250(param_2 * 4 + 4);
  return;
}


// ---- FUN_100028dd @ 100028dd

void __cdecl FUN_100028dd(void *param_1)

{
  FUN_10004270(param_1);
  return;
}


// ---- FUN_100028ee @ 100028ee

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_100028ee(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8,int param_9,float *param_10,undefined *param_11)

{
  float fVar1;
  void *pvVar2;
  void *pvVar3;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_c;
  
  pvVar2 = (void *)FUN_100028c5(1,param_4);
  pvVar3 = (void *)FUN_100028c5(1,param_6);
  for (local_1c = 1; local_1c <= param_4; local_1c = local_1c + 1) {
    (*(code *)param_11)(*(undefined4 *)(param_1 + local_1c * 4),pvVar3,param_6);
    fVar1 = (float)_DAT_100188b8 / *(float *)(param_3 + local_1c * 4);
    for (local_20 = 1; local_20 <= param_6; local_20 = local_20 + 1) {
      *(float *)(*(int *)(param_7 + local_1c * 4) + local_20 * 4) =
           fVar1 * *(float *)((int)pvVar3 + local_20 * 4);
    }
    *(float *)((int)pvVar2 + local_1c * 4) = fVar1 * *(float *)(param_2 + local_1c * 4);
  }
  FUN_10002b3f(param_7,param_4,param_6,param_9,param_8);
  local_24 = 0.0;
  for (local_20 = 1; local_20 <= param_6; local_20 = local_20 + 1) {
    if (local_24 < *(float *)(param_9 + local_20 * 4)) {
      local_24 = *(float *)(param_9 + local_20 * 4);
    }
  }
  fVar1 = (float)_DAT_100188b0;
  for (local_20 = 1; local_20 <= param_6; local_20 = local_20 + 1) {
    if (*(float *)(param_9 + local_20 * 4) < local_24 * fVar1) {
      *(undefined4 *)(param_9 + local_20 * 4) = 0;
    }
  }
  FUN_1000279c(param_7,param_9,param_8,param_4,param_6,(int)pvVar2,param_5);
  *param_10 = 0.0;
  for (local_1c = 1; local_1c <= param_4; local_1c = local_1c + 1) {
    (*(code *)param_11)(*(undefined4 *)(param_1 + local_1c * 4),pvVar3,param_6);
    local_c = 0.0;
    for (local_20 = 1; local_20 <= param_6; local_20 = local_20 + 1) {
      local_c = *(float *)(param_5 + local_20 * 4) * *(float *)((int)pvVar3 + local_20 * 4) +
                local_c;
    }
    fVar1 = (*(float *)(param_2 + local_1c * 4) - local_c) / *(float *)(param_3 + local_1c * 4);
    *param_10 = fVar1 * fVar1 + *param_10;
  }
  FUN_100028dd(pvVar3);
  FUN_100028dd(pvVar2);
  return;
}


// ---- FUN_10002b3f @ 10002b3f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10002b3f(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  void *pvVar8;
  int iVar9;
  double dVar10;
  double dVar11;
  double local_118;
  double local_108;
  double local_f4;
  double local_e4;
  double local_d0;
  double local_c8;
  double local_b8;
  double local_a4;
  double local_94;
  float local_74;
  double local_68;
  double local_5c;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_38;
  int local_2c;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_10;
  float local_c;
  float local_8;
  
  local_20 = 0.0;
  local_1c = 0.0;
  local_8 = 0.0;
  if (param_2 < param_3) {
    FUN_10003eda(s_SVDCMP__You_must_augment_A_with_e_1001dc10);
  }
  pvVar8 = (void *)FUN_100028c5(1,param_3);
  for (local_38 = 1; local_38 <= param_3; local_38 = local_38 + 1) {
    local_4c = local_38 + 1;
    *(float *)((int)pvVar8 + local_38 * 4) = local_8 * local_1c;
    local_8 = 0.0;
    local_c = 0.0;
    local_1c = 0.0;
    if (local_38 <= param_2) {
      for (local_48 = local_38; local_48 <= param_2; local_48 = local_48 + 1) {
        dVar10 = fabs((double)*(float *)(*(int *)(param_1 + local_48 * 4) + local_38 * 4));
        local_8 = (float)dVar10 + local_8;
      }
      if (local_8 != _DAT_100188a8) {
        for (local_48 = local_38; local_48 <= param_2; local_48 = local_48 + 1) {
          *(float *)(*(int *)(param_1 + local_48 * 4) + local_38 * 4) =
               *(float *)(*(int *)(param_1 + local_48 * 4) + local_38 * 4) / local_8;
          local_c = *(float *)(*(int *)(param_1 + local_48 * 4) + local_38 * 4) *
                    *(float *)(*(int *)(param_1 + local_48 * 4) + local_38 * 4) + local_c;
        }
        fVar2 = *(float *)(*(int *)(param_1 + local_38 * 4) + local_38 * 4);
        if (fVar2 < (float)_DAT_100188c8) {
          dVar10 = sqrt((double)local_c);
          local_5c = fabs(dVar10);
          local_5c = -local_5c;
        }
        else {
          dVar10 = sqrt((double)local_c);
          local_5c = fabs(dVar10);
        }
        local_1c = -(float)local_5c;
        fVar1 = fVar2 * local_1c - local_c;
        *(float *)(*(int *)(param_1 + local_38 * 4) + local_38 * 4) = fVar2 - local_1c;
        local_40 = local_4c;
        if (local_38 != param_3) {
          for (; local_40 <= param_3; local_40 = local_40 + 1) {
            local_c = 0.0;
            for (local_48 = local_38; local_48 <= param_2; local_48 = local_48 + 1) {
              local_c = *(float *)(*(int *)(param_1 + local_48 * 4) + local_38 * 4) *
                        *(float *)(*(int *)(param_1 + local_48 * 4) + local_40 * 4) + local_c;
            }
            for (local_48 = local_38; local_48 <= param_2; local_48 = local_48 + 1) {
              *(float *)(*(int *)(param_1 + local_48 * 4) + local_40 * 4) =
                   (local_c / fVar1) * *(float *)(*(int *)(param_1 + local_48 * 4) + local_38 * 4) +
                   *(float *)(*(int *)(param_1 + local_48 * 4) + local_40 * 4);
            }
          }
        }
        for (local_48 = local_38; local_48 <= param_2; local_48 = local_48 + 1) {
          *(float *)(*(int *)(param_1 + local_48 * 4) + local_38 * 4) =
               local_8 * *(float *)(*(int *)(param_1 + local_48 * 4) + local_38 * 4);
        }
      }
    }
    *(float *)(param_4 + local_38 * 4) = local_8 * local_1c;
    local_8 = 0.0;
    local_c = 0.0;
    local_1c = 0.0;
    if ((local_38 <= param_2) && (local_48 = local_4c, local_38 != param_3)) {
      for (; local_48 <= param_3; local_48 = local_48 + 1) {
        dVar10 = fabs((double)*(float *)(*(int *)(param_1 + local_38 * 4) + local_48 * 4));
        local_8 = (float)dVar10 + local_8;
      }
      local_48 = local_4c;
      if (local_8 != _DAT_100188a8) {
        for (; local_48 <= param_3; local_48 = local_48 + 1) {
          *(float *)(*(int *)(param_1 + local_38 * 4) + local_48 * 4) =
               *(float *)(*(int *)(param_1 + local_38 * 4) + local_48 * 4) / local_8;
          local_c = *(float *)(*(int *)(param_1 + local_38 * 4) + local_48 * 4) *
                    *(float *)(*(int *)(param_1 + local_38 * 4) + local_48 * 4) + local_c;
        }
        fVar2 = *(float *)(*(int *)(param_1 + local_38 * 4) + local_4c * 4);
        if (fVar2 < (float)_DAT_100188c8) {
          dVar10 = sqrt((double)local_c);
          local_68 = fabs(dVar10);
          local_68 = -local_68;
        }
        else {
          dVar10 = sqrt((double)local_c);
          local_68 = fabs(dVar10);
        }
        local_1c = -(float)local_68;
        *(float *)(*(int *)(param_1 + local_38 * 4) + local_4c * 4) = fVar2 - local_1c;
        for (local_48 = local_4c; local_48 <= param_3; local_48 = local_48 + 1) {
          *(float *)((int)pvVar8 + local_48 * 4) =
               *(float *)(*(int *)(param_1 + local_38 * 4) + local_48 * 4) /
               (fVar2 * local_1c - local_c);
        }
        local_48 = local_4c;
        local_40 = local_4c;
        if (local_38 != param_2) {
          for (; local_48 = local_4c, local_40 <= param_2; local_40 = local_40 + 1) {
            local_c = 0.0;
            for (; iVar9 = local_4c, local_48 <= param_3; local_48 = local_48 + 1) {
              local_c = *(float *)(*(int *)(param_1 + local_40 * 4) + local_48 * 4) *
                        *(float *)(*(int *)(param_1 + local_38 * 4) + local_48 * 4) + local_c;
            }
            while (local_48 = iVar9, local_48 <= param_3) {
              *(float *)(*(int *)(param_1 + local_40 * 4) + local_48 * 4) =
                   local_c * *(float *)((int)pvVar8 + local_48 * 4) +
                   *(float *)(*(int *)(param_1 + local_40 * 4) + local_48 * 4);
              iVar9 = local_48 + 1;
            }
          }
        }
        for (; local_48 <= param_3; local_48 = local_48 + 1) {
          *(float *)(*(int *)(param_1 + local_38 * 4) + local_48 * 4) =
               local_8 * *(float *)(*(int *)(param_1 + local_38 * 4) + local_48 * 4);
        }
      }
    }
    DAT_100218c8 = local_20;
    dVar10 = fabs((double)*(float *)(param_4 + local_38 * 4));
    dVar11 = fabs((double)*(float *)((int)pvVar8 + local_38 * 4));
    DAT_100218c4 = (float)((float10)dVar11 + (float10)dVar10);
    if (DAT_100218c8 <= DAT_100218c4) {
      local_74 = DAT_100218c4;
    }
    else {
      local_74 = DAT_100218c8;
    }
    local_20 = local_74;
  }
  for (local_38 = param_3; 0 < local_38; local_38 = local_38 + -1) {
    if (local_38 < param_3) {
      if (local_1c != _DAT_100188a8) {
        for (local_40 = local_4c; local_40 <= param_3; local_40 = local_40 + 1) {
          *(float *)(*(int *)(param_5 + local_40 * 4) + local_38 * 4) =
               (*(float *)(*(int *)(param_1 + local_38 * 4) + local_40 * 4) /
               *(float *)(*(int *)(param_1 + local_38 * 4) + local_4c * 4)) / local_1c;
        }
        for (local_40 = local_4c; local_40 <= param_3; local_40 = local_40 + 1) {
          local_c = 0.0;
          for (local_48 = local_4c; local_48 <= param_3; local_48 = local_48 + 1) {
            local_c = *(float *)(*(int *)(param_1 + local_38 * 4) + local_48 * 4) *
                      *(float *)(*(int *)(param_5 + local_48 * 4) + local_40 * 4) + local_c;
          }
          for (local_48 = local_4c; local_48 <= param_3; local_48 = local_48 + 1) {
            *(float *)(*(int *)(param_5 + local_48 * 4) + local_40 * 4) =
                 local_c * *(float *)(*(int *)(param_5 + local_48 * 4) + local_38 * 4) +
                 *(float *)(*(int *)(param_5 + local_48 * 4) + local_40 * 4);
          }
        }
      }
      for (local_40 = local_4c; local_40 <= param_3; local_40 = local_40 + 1) {
        *(undefined4 *)(*(int *)(param_5 + local_40 * 4) + local_38 * 4) = 0;
        *(undefined4 *)(*(int *)(param_5 + local_38 * 4) + local_40 * 4) = 0;
      }
    }
    *(undefined4 *)(*(int *)(param_5 + local_38 * 4) + local_38 * 4) = 0x3f800000;
    local_1c = *(float *)((int)pvVar8 + local_38 * 4);
    local_4c = local_38;
  }
  for (local_38 = param_3; 0 < local_38; local_38 = local_38 + -1) {
    iVar9 = local_38 + 1;
    fVar2 = *(float *)(param_4 + local_38 * 4);
    local_40 = iVar9;
    if (local_38 < param_3) {
      for (; local_40 <= param_3; local_40 = local_40 + 1) {
        *(undefined4 *)(*(int *)(param_1 + local_38 * 4) + local_40 * 4) = 0;
      }
    }
    if (fVar2 == _DAT_100188a8) {
      for (local_40 = local_38; local_40 <= param_2; local_40 = local_40 + 1) {
        *(undefined4 *)(*(int *)(param_1 + local_40 * 4) + local_38 * 4) = 0;
      }
    }
    else {
      fVar2 = _DAT_100188c0 / fVar2;
      local_40 = iVar9;
      if (local_38 != param_3) {
        for (; local_40 <= param_3; local_40 = local_40 + 1) {
          local_c = 0.0;
          for (local_48 = iVar9; local_48 <= param_2; local_48 = local_48 + 1) {
            local_c = *(float *)(*(int *)(param_1 + local_48 * 4) + local_38 * 4) *
                      *(float *)(*(int *)(param_1 + local_48 * 4) + local_40 * 4) + local_c;
          }
          fVar1 = *(float *)(*(int *)(param_1 + local_38 * 4) + local_38 * 4);
          for (local_48 = local_38; local_48 <= param_2; local_48 = local_48 + 1) {
            *(float *)(*(int *)(param_1 + local_48 * 4) + local_40 * 4) =
                 (local_c / fVar1) * fVar2 *
                 *(float *)(*(int *)(param_1 + local_48 * 4) + local_38 * 4) +
                 *(float *)(*(int *)(param_1 + local_48 * 4) + local_40 * 4);
          }
        }
      }
      for (local_40 = local_38; local_40 <= param_2; local_40 = local_40 + 1) {
        *(float *)(*(int *)(param_1 + local_40 * 4) + local_38 * 4) =
             fVar2 * *(float *)(*(int *)(param_1 + local_40 * 4) + local_38 * 4);
      }
    }
    *(float *)(*(int *)(param_1 + local_38 * 4) + local_38 * 4) =
         *(float *)(*(int *)(param_1 + local_38 * 4) + local_38 * 4) + _DAT_100188c0;
  }
  local_48 = param_3;
  do {
    if (local_48 < 1) {
      FUN_100028dd(pvVar8);
      return;
    }
    for (local_50 = 1; local_50 < 0x1f; local_50 = local_50 + 1) {
      bVar7 = true;
      for (local_4c = local_48; 0 < local_4c; local_4c = local_4c + -1) {
        local_44 = local_4c + -1;
        dVar10 = fabs((double)*(float *)((int)pvVar8 + local_4c * 4));
        if ((float)dVar10 + local_20 == local_20) {
          bVar7 = false;
          break;
        }
        dVar10 = fabs((double)*(float *)(param_4 + local_44 * 4));
        if ((float)dVar10 + local_20 == local_20) break;
      }
      if (bVar7) {
        local_10 = 0.0;
        local_c = 1.0;
        for (local_38 = local_4c; local_38 <= local_48; local_38 = local_38 + 1) {
          local_c = local_c * *(float *)((int)pvVar8 + local_38 * 4);
          *(float *)((int)pvVar8 + local_38 * 4) = local_10 * *(float *)((int)pvVar8 + local_38 * 4)
          ;
          dVar10 = fabs((double)local_c);
          if ((float)dVar10 + local_20 == local_20) break;
          local_10 = *(float *)(param_4 + local_38 * 4);
          dVar10 = fabs((double)local_c);
          _DAT_100218d4 = (float)dVar10;
          dVar11 = fabs((double)local_10);
          _DAT_100218d0 = (float)dVar11;
          if ((float)dVar10 <= _DAT_100218d0) {
            if (_DAT_100218d0 == _DAT_100188a8) {
              local_a4 = 0.0;
            }
            else {
              _DAT_100218cc = _DAT_100218d4 / _DAT_100218d0;
              dVar10 = (double)_DAT_100218d0;
              local_a4 = sqrt((double)(_DAT_100218cc * _DAT_100218cc + (float)_DAT_100188b8));
              local_a4 = local_a4 * dVar10;
            }
            local_94 = local_a4;
          }
          else {
            _DAT_100218cc = _DAT_100218d0 / _DAT_100218d4;
            dVar10 = (double)_DAT_100218d4;
            local_94 = sqrt((double)(_DAT_100218cc * _DAT_100218cc + (float)_DAT_100188b8));
            local_94 = local_94 * dVar10;
          }
          *(float *)(param_4 + local_38 * 4) = (float)local_94;
          fVar2 = _DAT_100188c0 / (float)local_94;
          local_10 = local_10 * fVar2;
          local_c = -local_c * fVar2;
          for (local_40 = 1; local_40 <= param_2; local_40 = local_40 + 1) {
            fVar2 = *(float *)(*(int *)(param_1 + local_40 * 4) + local_44 * 4);
            fVar1 = *(float *)(*(int *)(param_1 + local_40 * 4) + local_38 * 4);
            *(float *)(*(int *)(param_1 + local_40 * 4) + local_44 * 4) =
                 fVar1 * local_c + fVar2 * local_10;
            *(float *)(*(int *)(param_1 + local_40 * 4) + local_38 * 4) =
                 fVar1 * local_10 - fVar2 * local_c;
          }
        }
      }
      fVar2 = *(float *)(param_4 + local_48 * 4);
      if (local_4c == local_48) {
        if (fVar2 < (float)_DAT_100188c8) {
          *(float *)(param_4 + local_48 * 4) = -fVar2;
          for (local_40 = 1; local_40 <= param_3; local_40 = local_40 + 1) {
            *(float *)(*(int *)(param_5 + local_40 * 4) + local_48 * 4) =
                 -*(float *)(*(int *)(param_5 + local_40 * 4) + local_48 * 4);
          }
        }
        break;
      }
      if (local_50 == 0x1e) {
        FUN_10003eda(s_No_convergence_in_30_SVDCMP_iter_1001dc40);
      }
      local_24 = *(float *)(param_4 + local_4c * 4);
      local_44 = local_48 + -1;
      fVar1 = *(float *)(param_4 + local_44 * 4);
      fVar3 = *(float *)((int)pvVar8 + local_44 * 4);
      fVar4 = *(float *)((int)pvVar8 + local_48 * 4);
      fVar3 = ((fVar3 + fVar4) * (fVar3 - fVar4) + (fVar1 + fVar2) * (fVar1 - fVar2)) /
              ((fVar4 + fVar4) * fVar1);
      dVar10 = fabs((double)fVar3);
      _DAT_100218d4 = (float)dVar10;
      dVar11 = fabs(1.0);
      _DAT_100218d0 = (float)dVar11;
      if ((float)dVar10 <= _DAT_100218d0) {
        if (_DAT_100218d0 == _DAT_100188a8) {
          local_c8 = 0.0;
        }
        else {
          _DAT_100218cc = _DAT_100218d4 / _DAT_100218d0;
          dVar10 = (double)_DAT_100218d0;
          local_c8 = sqrt((double)(_DAT_100218cc * _DAT_100218cc + (float)_DAT_100188b8));
          local_c8 = local_c8 * dVar10;
        }
        local_b8 = local_c8;
      }
      else {
        _DAT_100218cc = _DAT_100218d0 / _DAT_100218d4;
        dVar10 = (double)_DAT_100218d4;
        local_b8 = sqrt((double)(_DAT_100218cc * _DAT_100218cc + (float)_DAT_100188b8));
        local_b8 = local_b8 * dVar10;
      }
      if (fVar3 < (float)_DAT_100188c8) {
        local_d0 = fabs((double)(float)local_b8);
        local_d0 = -local_d0;
      }
      else {
        local_d0 = fabs((double)(float)local_b8);
      }
      local_18 = ((fVar1 / (fVar3 + (float)local_d0) - fVar4) * fVar4 +
                 (local_24 + fVar2) * (local_24 - fVar2)) / local_24;
      local_c = 1.0;
      local_10 = 1.0;
      for (local_40 = local_4c; local_40 <= local_44; local_40 = local_40 + 1) {
        iVar9 = local_40 + 1;
        fVar2 = *(float *)((int)pvVar8 + iVar9 * 4);
        fVar1 = *(float *)(param_4 + iVar9 * 4);
        local_c = local_c * fVar2;
        fVar2 = local_10 * fVar2;
        dVar10 = fabs((double)local_18);
        _DAT_100218d4 = (float)dVar10;
        dVar11 = fabs((double)local_c);
        _DAT_100218d0 = (float)dVar11;
        if ((float)dVar10 <= _DAT_100218d0) {
          if (_DAT_100218d0 == _DAT_100188a8) {
            local_f4 = 0.0;
          }
          else {
            _DAT_100218cc = _DAT_100218d4 / _DAT_100218d0;
            dVar10 = (double)_DAT_100218d0;
            local_f4 = sqrt((double)(_DAT_100218cc * _DAT_100218cc + (float)_DAT_100188b8));
            local_f4 = local_f4 * dVar10;
          }
          local_e4 = local_f4;
        }
        else {
          _DAT_100218cc = _DAT_100218d0 / _DAT_100218d4;
          dVar10 = (double)_DAT_100218d4;
          local_e4 = sqrt((double)(_DAT_100218cc * _DAT_100218cc + (float)_DAT_100188b8));
          local_e4 = local_e4 * dVar10;
        }
        fVar3 = (float)local_e4;
        *(float *)((int)pvVar8 + local_40 * 4) = fVar3;
        local_10 = local_18 / fVar3;
        local_c = local_c / fVar3;
        fVar3 = fVar2 * local_c + local_24 * local_10;
        fVar2 = fVar2 * local_10 - local_24 * local_c;
        fVar4 = fVar1 * local_c;
        fVar1 = fVar1 * local_10;
        for (local_2c = 1; local_2c <= param_3; local_2c = local_2c + 1) {
          fVar5 = *(float *)(*(int *)(param_5 + local_2c * 4) + local_40 * 4);
          fVar6 = *(float *)(*(int *)(param_5 + local_2c * 4) + iVar9 * 4);
          *(float *)(*(int *)(param_5 + local_2c * 4) + local_40 * 4) =
               fVar6 * local_c + fVar5 * local_10;
          *(float *)(*(int *)(param_5 + local_2c * 4) + iVar9 * 4) =
               fVar6 * local_10 - fVar5 * local_c;
        }
        dVar10 = fabs((double)fVar3);
        _DAT_100218d4 = (float)dVar10;
        dVar11 = fabs((double)fVar4);
        _DAT_100218d0 = (float)dVar11;
        if ((float)dVar10 <= _DAT_100218d0) {
          if (_DAT_100218d0 == _DAT_100188a8) {
            local_118 = 0.0;
          }
          else {
            _DAT_100218cc = _DAT_100218d4 / _DAT_100218d0;
            dVar10 = (double)_DAT_100218d0;
            local_118 = sqrt((double)(_DAT_100218cc * _DAT_100218cc + (float)_DAT_100188b8));
            local_118 = local_118 * dVar10;
          }
          local_108 = local_118;
        }
        else {
          _DAT_100218cc = _DAT_100218d0 / _DAT_100218d4;
          dVar10 = (double)_DAT_100218d4;
          local_108 = sqrt((double)(_DAT_100218cc * _DAT_100218cc + (float)_DAT_100188b8));
          local_108 = local_108 * dVar10;
        }
        fVar5 = (float)local_108;
        *(float *)(param_4 + local_40 * 4) = fVar5;
        if (fVar5 != _DAT_100188a8) {
          local_10 = fVar3 * (_DAT_100188c0 / fVar5);
          local_c = fVar4 * (_DAT_100188c0 / fVar5);
        }
        local_18 = local_c * fVar1 + local_10 * fVar2;
        local_24 = local_10 * fVar1 - local_c * fVar2;
        for (local_2c = 1; local_2c <= param_2; local_2c = local_2c + 1) {
          fVar2 = *(float *)(*(int *)(param_1 + local_2c * 4) + local_40 * 4);
          fVar1 = *(float *)(*(int *)(param_1 + local_2c * 4) + iVar9 * 4);
          *(float *)(*(int *)(param_1 + local_2c * 4) + local_40 * 4) =
               fVar1 * local_c + fVar2 * local_10;
          *(float *)(*(int *)(param_1 + local_2c * 4) + iVar9 * 4) =
               fVar1 * local_10 - fVar2 * local_c;
        }
      }
      *(undefined4 *)((int)pvVar8 + local_4c * 4) = 0;
      *(float *)((int)pvVar8 + local_48 * 4) = local_18;
      *(float *)(param_4 + local_48 * 4) = local_24;
    }
    local_48 = local_48 + -1;
  } while( true );
}


// ---- FUN_10003eda @ 10003eda

void __cdecl FUN_10003eda(LPCSTR param_1)

{
  HWND hWnd;
  char *lpCaption;
  UINT uType;
  
  uType = 0x30;
  lpCaption = s_Numerical_Error_1001dc68;
  hWnd = GetFocus();
  MessageBoxA(hWnd,param_1,lpCaption,uType);
  return;
}


// ---- FUN_10003ef7 @ 10003ef7

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_10003ef7(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,float *param_7)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  void *pvVar7;
  int local_20;
  
  pvVar1 = (void *)FUN_100028c5(1,param_1);
  pvVar2 = (void *)FUN_100028c5(1,param_1);
  pvVar3 = (void *)FUN_100028c5(1,param_1);
  pvVar4 = (void *)FUN_100028c5(1,param_2);
  pvVar5 = (void *)FUN_10004169(1,param_1,1,param_2);
  pvVar6 = (void *)FUN_10004169(1,param_2,1,param_2);
  pvVar7 = (void *)FUN_100028c5(1,param_2);
  if ((((pvVar1 != (void *)0x0) && (pvVar2 != (void *)0x0)) && (pvVar3 != (void *)0x0)) &&
     (((pvVar4 != (void *)0x0 && (pvVar5 != (void *)0x0)) &&
      ((pvVar6 != (void *)0x0 && (pvVar7 != (void *)0x0)))))) {
    for (local_20 = 0; local_20 < param_1; local_20 = local_20 + 1) {
      *(float *)((int)pvVar1 + local_20 * 4 + 4) = (float)*(double *)(param_3 + local_20 * 8);
      *(float *)((int)pvVar2 + local_20 * 4 + 4) = (float)*(double *)(param_5 + local_20 * 8);
      if (_DAT_100188c8 < *(double *)(param_4 + local_20 * 8)) {
        *(float *)((int)pvVar3 + local_20 * 4 + 4) = (float)*(double *)(param_4 + local_20 * 8);
      }
      else {
        *(undefined4 *)((int)pvVar3 + local_20 * 4 + 4) = 0x3f800000;
      }
    }
    FUN_100028ee((int)pvVar1,(int)pvVar2,(int)pvVar3,param_1,(int)pvVar4,param_2,(int)pvVar5,
                 (int)pvVar6,(int)pvVar7,param_7,FUN_10004125);
    for (local_20 = 0; local_20 < param_2; local_20 = local_20 + 1) {
      *(undefined4 *)(param_6 + local_20 * 4) = *(undefined4 *)((int)pvVar4 + local_20 * 4 + 4);
    }
  }
  FUN_100028dd(pvVar1);
  FUN_100028dd(pvVar2);
  FUN_100028dd(pvVar3);
  FUN_100028dd(pvVar4);
  FUN_10004200(pvVar5,1,param_1);
  FUN_10004200(pvVar6,1,param_2);
  FUN_100028dd(pvVar7);
  return;
}


// ---- FUN_10004125 @ 10004125

void __cdecl FUN_10004125(float param_1,int param_2,int param_3)

{
  undefined4 local_8;
  
  *(undefined4 *)(param_2 + 4) = 0x3f800000;
  for (local_8 = 2; local_8 <= param_3; local_8 = local_8 + 1) {
    *(float *)(param_2 + local_8 * 4) = param_1 * *(float *)(param_2 + -4 + local_8 * 4);
  }
  return;
}


// ---- FUN_10004169 @ 10004169

int __cdecl FUN_10004169(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int local_8;
  
  iVar1 = FUN_10004250(param_2 * 4 + 4);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    for (local_8 = param_1; local_8 <= param_2; local_8 = local_8 + 1) {
      uVar2 = FUN_10004250(param_4 * 4 + 4);
      *(undefined4 *)(iVar1 + local_8 * 4) = uVar2;
      if (*(int *)(iVar1 + local_8 * 4) == 0) {
        while (local_8 = local_8 + -1, -1 < local_8) {
          FUN_10004270(*(void **)(iVar1 + local_8 * 4));
        }
        return 0;
      }
    }
  }
  return iVar1;
}


// ---- FUN_10004200 @ 10004200

void __cdecl FUN_10004200(void *param_1,int param_2,int param_3)

{
  undefined4 local_8;
  
  if (param_1 != (void *)0x0) {
    for (local_8 = param_2; local_8 <= param_3; local_8 = local_8 + 1) {
      FUN_10004270(*(void **)((int)param_1 + local_8 * 4));
    }
    FUN_10004270(param_1);
  }
  return;
}


// ---- FUN_10004250 @ 10004250

void __cdecl FUN_10004250(size_t param_1)

{
  calloc(1,param_1);
  return;
}


// ---- FUN_10004270 @ 10004270

void __cdecl FUN_10004270(void *param_1)

{
  if (param_1 != (void *)0x0) {
    free(param_1);
  }
  return;
}


// ---- FUN_10004290 @ 10004290

undefined4 * __fastcall FUN_10004290(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_100171fc;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_10004850(param_1 + 5,10);
  local_8 = 0;
  FUN_10004850(param_1 + 0xc,10);
  *param_1 = &PTR_FUN_100188d0;
  param_1[2] = 2;
  param_1[1] = 4;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  ExceptionList = local_10;
  return param_1;
}


// ---- FUN_1000433b @ 1000433b

void __fastcall FUN_1000433b(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_1001721e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = &PTR_FUN_100188d0;
  local_8 = 1;
  if (param_1[0x17] == 0) {
    operator_delete((void *)param_1[0x17]);
  }
  if (param_1[0x18] == 0) {
    operator_delete((void *)param_1[0x18]);
  }
  if (param_1[0x19] == 0) {
    operator_delete((void *)param_1[0x19]);
  }
  if (param_1[0x1a] == 0) {
    operator_delete((void *)param_1[0x1a]);
  }
  local_8 = local_8 & 0xffffff00;
  FUN_10004a70(param_1 + 0xc);
  local_8 = 0xffffffff;
  FUN_10004a70(param_1 + 5);
  ExceptionList = local_10;
  return;
}


// ---- FUN_10004410 @ 10004410

void __thiscall
FUN_10004410(void *this,int param_1,int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  void *pvVar1;
  
  if (*(int *)((int)this + 0x5c) == 0) {
    operator_delete(*(void **)((int)this + 0x5c));
  }
  if (*(int *)((int)this + 0x60) == 0) {
    operator_delete(*(void **)((int)this + 0x60));
  }
  if (*(int *)((int)this + 100) == 0) {
    operator_delete(*(void **)((int)this + 100));
  }
  if (*(int *)((int)this + 0x68) == 0) {
    operator_delete(*(void **)((int)this + 0x68));
  }
  pvVar1 = operator_new(param_1 * 8 + 8);
  *(void **)((int)this + 0x5c) = pvVar1;
  pvVar1 = operator_new(param_1 * 8 + 8);
  *(void **)((int)this + 0x60) = pvVar1;
  pvVar1 = operator_new(param_1 * 8 + 8);
  *(void **)((int)this + 100) = pvVar1;
  pvVar1 = operator_new(param_2 * 4 + 4);
  *(void **)((int)this + 0x68) = pvVar1;
  *(int *)((int)this + 4) = param_1;
  *(int *)((int)this + 8) = param_2;
  *(undefined4 *)((int)this + 0xc) = param_3;
  *(undefined4 *)((int)this + 0x10) = param_4;
  FUN_100049a0((int)this + 0x14);
  FUN_100049a0((int)this + 0x30);
  *(undefined4 *)((int)this + 0x4c) = param_5;
  *(undefined4 *)((int)this + 0x50) = param_6;
  *(undefined4 *)((int)this + 0x54) = param_7;
  *(undefined4 *)((int)this + 0x58) = param_8;
  return;
}


// ---- FUN_10004568 @ 10004568

void __fastcall FUN_10004568(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int local_c;
  int local_8;
  
  iVar2 = FUN_100048b0(param_1 + 0x14);
  FUN_10004940((void *)(param_1 + 0x14),(undefined4 *)&stack0x00000004);
  if (*(int *)(param_1 + 4) < iVar2) {
    FUN_100048d0((void *)(param_1 + 0x14));
  }
  iVar2 = FUN_100048b0(param_1 + 0x30);
  FUN_10004940((void *)(param_1 + 0x30),(undefined4 *)&stack0x0000000c);
  if (*(int *)(param_1 + 4) < iVar2) {
    FUN_100048d0((void *)(param_1 + 0x30));
  }
  local_8 = FUN_10004a20(param_1 + 0x14);
  local_c = FUN_10004a20(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x70) = 0;
  while ((local_8 != 0 && (local_c != 0))) {
    puVar3 = (undefined4 *)FUN_10004a40(&local_8);
    iVar2 = *(int *)(param_1 + 0x70);
    iVar1 = *(int *)(param_1 + 0x5c);
    *(undefined4 *)(iVar1 + iVar2 * 8) = *puVar3;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = puVar3[1];
    puVar3 = (undefined4 *)FUN_10004a40(&local_c);
    iVar2 = *(int *)(param_1 + 0x70);
    iVar1 = *(int *)(param_1 + 0x60);
    *(undefined4 *)(iVar1 + iVar2 * 8) = *puVar3;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = puVar3[1];
    iVar2 = *(int *)(param_1 + 0x70);
    iVar1 = *(int *)(param_1 + 100);
    *(undefined4 *)(iVar1 + iVar2 * 8) = 0;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = 0;
    *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
  }
  if (*(int *)(param_1 + 0x70) == 1) {
    iVar2 = *(int *)(param_1 + 0x5c);
    *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(param_1 + 0x50);
    iVar2 = *(int *)(param_1 + 0x60);
    *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(param_1 + 0x58);
    iVar2 = *(int *)(param_1 + 100);
    *(undefined4 *)(iVar2 + 8) = 0;
    *(undefined4 *)(iVar2 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x70) = 2;
  }
  FUN_10003ef7(*(int *)(param_1 + 0x70),*(int *)(param_1 + 8),*(int *)(param_1 + 0x5c),
               *(int *)(param_1 + 100),*(int *)(param_1 + 0x60),*(int *)(param_1 + 0x68),
               (float *)(param_1 + 0x6c));
  FUN_10002750(*(float **)(param_1 + 0x68),*(int *)(param_1 + 8),*(double *)(param_1 + 0xc));
  return;
}


// ---- FUN_1000474f @ 1000474f

undefined4 __thiscall
FUN_1000474f(void *this,int param_1,int param_2,int param_3,int param_4,undefined4 *param_5)

{
  int iVar1;
  undefined4 local_8;
  
  for (local_8 = 0; local_8 < *(int *)((int)this + 0x70); local_8 = local_8 + 1) {
    iVar1 = *(int *)((int)this + 0x5c);
    *(undefined4 *)(param_1 + local_8 * 8) = *(undefined4 *)(iVar1 + local_8 * 8);
    *(undefined4 *)(param_1 + 4 + local_8 * 8) = *(undefined4 *)(iVar1 + 4 + local_8 * 8);
    iVar1 = *(int *)((int)this + 0x60);
    *(undefined4 *)(param_2 + local_8 * 8) = *(undefined4 *)(iVar1 + local_8 * 8);
    *(undefined4 *)(param_2 + 4 + local_8 * 8) = *(undefined4 *)(iVar1 + 4 + local_8 * 8);
    iVar1 = *(int *)((int)this + 100);
    *(undefined4 *)(param_3 + local_8 * 8) = *(undefined4 *)(iVar1 + local_8 * 8);
    *(undefined4 *)(param_3 + 4 + local_8 * 8) = *(undefined4 *)(iVar1 + 4 + local_8 * 8);
  }
  *param_5 = *(undefined4 *)((int)this + 0x6c);
  for (local_8 = 0; local_8 < *(int *)((int)this + 8); local_8 = local_8 + 1) {
    *(undefined4 *)(param_4 + local_8 * 4) =
         *(undefined4 *)(*(int *)((int)this + 0x68) + local_8 * 4);
  }
  return *(undefined4 *)((int)this + 0x70);
}


// ---- FUN_10004820 @ 10004820

undefined4 * __thiscall FUN_10004820(void *this,uint param_1)

{
  FUN_1000433b(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


// ---- FUN_10004850 @ 10004850

undefined4 * __thiscall FUN_10004850(void *this,undefined4 param_1)

{
  FUN_10004df0(this);
  *(undefined ***)this = &PTR_LAB_100188d4;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = param_1;
  return this;
}


// ---- FUN_100048b0 @ 100048b0

undefined4 __fastcall FUN_100048b0(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}


// ---- FUN_100048d0 @ 100048d0

float10 __fastcall FUN_100048d0(void *param_1)

{
  undefined4 *puVar1;
  double dVar2;
  
  puVar1 = *(undefined4 **)((int)param_1 + 8);
  dVar2 = *(double *)(puVar1 + 2);
  *(undefined4 *)((int)param_1 + 8) = puVar1[1];
  if (*(int *)((int)param_1 + 8) == 0) {
    *(undefined4 *)((int)param_1 + 4) = 0;
  }
  else {
    **(undefined4 **)((int)param_1 + 8) = 0;
  }
  FUN_10004ce0(param_1,puVar1);
  return (float10)dVar2;
}


// ---- FUN_10004940 @ 10004940

undefined4 * __thiscall FUN_10004940(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = FUN_10004c00(this,0,*(undefined4 *)((int)this + 4));
  puVar1[2] = *param_1;
  puVar1[3] = param_1[1];
  if (*(int *)((int)this + 4) == 0) {
    *(undefined4 **)((int)this + 8) = puVar1;
  }
  else {
    *(undefined4 **)(*(int *)((int)this + 4) + 4) = puVar1;
  }
  *(undefined4 **)((int)this + 4) = puVar1;
  return puVar1;
}


// ---- FUN_100049a0 @ 100049a0

void __fastcall FUN_100049a0(int param_1)

{
  undefined4 *local_8;
  
  for (local_8 = *(undefined4 **)(param_1 + 4); local_8 != (undefined4 *)0x0;
      local_8 = (undefined4 *)*local_8) {
    FUN_10004d30(local_8 + 2,1);
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  CPlex::FreeDataChain(*(CPlex **)(param_1 + 0x14));
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}


// ---- FUN_10004a20 @ 10004a20

undefined4 __fastcall FUN_10004a20(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}


// ---- FUN_10004a40 @ 10004a40

int FUN_10004a40(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  *param_1 = *piVar1;
  return (int)(piVar1 + 2);
}


// ---- FUN_10004a70 @ 10004a70

void __fastcall FUN_10004a70(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10017239;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = &PTR_LAB_100188d4;
  local_8 = 0;
  FUN_100049a0((int)param_1);
  local_8 = 0xffffffff;
  FUN_10004e40(param_1);
  ExceptionList = local_10;
  return;
}


// ---- FUN_10004ad0 @ 10004ad0

void __thiscall FUN_10004ad0(void *this,CArchive *param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined4 local_14 [2];
  ulong local_c;
  undefined4 *local_8;
  
  FUN_10001180();
  bVar1 = FUN_10004e60((int)param_1);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    local_c = CArchive::ReadCount(param_1);
    while (local_c != 0) {
      local_c = local_c - 1;
      FUN_10004d60(param_1,local_14,1);
      FUN_10004ba0(this,local_14);
    }
  }
  else {
    CArchive::WriteCount(param_1,*(ulong *)((int)this + 0xc));
    for (local_8 = *(undefined4 **)((int)this + 4); local_8 != (undefined4 *)0x0;
        local_8 = (undefined4 *)*local_8) {
      FUN_10004d60(param_1,local_8 + 2,1);
    }
  }
  return;
}


// ---- FUN_10004b70 @ 10004b70

undefined4 * __thiscall FUN_10004b70(void *this,uint param_1)

{
  FUN_10004a70(this);
  if ((param_1 & 1) != 0) {
    FUN_10001190(this);
  }
  return this;
}


// ---- FUN_10004ba0 @ 10004ba0

undefined4 * __thiscall FUN_10004ba0(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = FUN_10004c00(this,*(undefined4 *)((int)this + 8),0);
  puVar1[2] = *param_1;
  puVar1[3] = param_1[1];
  if (*(int *)((int)this + 8) == 0) {
    *(undefined4 **)((int)this + 4) = puVar1;
  }
  else {
    **(undefined4 **)((int)this + 8) = puVar1;
  }
  *(undefined4 **)((int)this + 8) = puVar1;
  return puVar1;
}


// ---- FUN_10004c00 @ 10004c00

undefined4 * __thiscall FUN_10004c00(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  CPlex *pCVar2;
  int iVar3;
  int local_10;
  undefined4 *local_c;
  
  if (*(int *)((int)this + 0x10) == 0) {
    pCVar2 = CPlex::Create((CPlex **)((int)this + 0x14),*(uint *)((int)this + 0x18),0x10);
    iVar3 = FUN_10017030((int)pCVar2);
    local_c = (undefined4 *)(iVar3 + (*(int *)((int)this + 0x18) + -1) * 0x10);
    local_10 = *(int *)((int)this + 0x18);
    while (local_10 = local_10 + -1, -1 < local_10) {
      *local_c = *(undefined4 *)((int)this + 0x10);
      *(undefined4 **)((int)this + 0x10) = local_c;
      local_c = local_c + -4;
    }
  }
  puVar1 = *(undefined4 **)((int)this + 0x10);
  *(undefined4 *)((int)this + 0x10) = **(undefined4 **)((int)this + 0x10);
  puVar1[1] = param_1;
  *puVar1 = param_2;
  *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
  FUN_10004da0(puVar1 + 2,1);
  return puVar1;
}


// ---- FUN_10004ce0 @ 10004ce0

void __thiscall FUN_10004ce0(void *this,undefined4 *param_1)

{
  FUN_10004d30(param_1 + 2,1);
  *param_1 = *(undefined4 *)((int)this + 0x10);
  *(undefined4 **)((int)this + 0x10) = param_1;
  *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + -1;
  if (*(int *)((int)this + 0xc) == 0) {
    FUN_100049a0((int)this);
  }
  return;
}


// ---- FUN_10004d30 @ 10004d30

void FUN_10004d30(undefined4 param_1,int param_2)

{
  bool bVar1;
  
  do {
    bVar1 = param_2 != 0;
    param_2 = param_2 + -1;
  } while (bVar1);
  return;
}


// ---- FUN_10004d60 @ 10004d60

void FUN_10004d60(CArchive *param_1,void *param_2,int param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  
  bVar1 = FUN_10004e60((int)param_1);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    CArchive::Read(param_1,param_2,param_3 << 3);
  }
  else {
    CArchive::Write(param_1,param_2,param_3 << 3);
  }
  return;
}


// ---- FUN_10004da0 @ 10004da0

void FUN_10004da0(void *param_1,int param_2)

{
  memset(param_1,0,param_2 << 3);
  while (param_2 != 0) {
    FUN_10004e80(8,param_1);
    param_1 = (void *)((int)param_1 + 8);
    param_2 = param_2 + -1;
  }
  return;
}


// ---- FUN_10004df0 @ 10004df0

undefined4 * __fastcall FUN_10004df0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_100188e8;
  return param_1;
}


// ---- FUN_10004e10 @ 10004e10

undefined4 * __thiscall FUN_10004e10(void *this,uint param_1)

{
  FUN_10004e40(this);
  if ((param_1 & 1) != 0) {
    FUN_10001190(this);
  }
  return this;
}


// ---- FUN_10004e40 @ 10004e40

void __fastcall FUN_10004e40(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_100188e8;
  return;
}


// ---- FUN_10004e60 @ 10004e60

bool __fastcall FUN_10004e60(int param_1)

{
  return (bool)('\x01' - ((*(uint *)(param_1 + 0x14) & 1) != 0));
}


// ---- FUN_10004e80 @ 10004e80

undefined4 __cdecl FUN_10004e80(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ---- FUN_10004e90 @ 10004e90

void FUN_10004e90(void)

{
  FUN_10004e9f();
  FUN_10004eae();
  return;
}


// ---- FUN_10004e9f @ 10004e9f

void FUN_10004e9f(void)

{
  FUN_10005050((CWinApp *)&DAT_100218d8);
  return;
}


// ---- FUN_10004eae @ 10004eae

void FUN_10004eae(void)

{
  FUN_10016dde(FUN_10004ec0);
  return;
}


// ---- FUN_10004ec0 @ 10004ec0

void FUN_10004ec0(void)

{
  FUN_10005030((CWinApp *)&DAT_100218d8);
  return;
}


// ---- FUN_10004ecf @ 10004ecf

int __fastcall FUN_10004ecf(COleControlModule *param_1)

{
  int iVar1;
  
  iVar1 = COleControlModule::InitInstance(param_1);
  return iVar1;
}


// ---- FUN_10004eea @ 10004eea

void __fastcall FUN_10004eea(COleControlModule *param_1)

{
  COleControlModule::ExitInstance(param_1);
  return;
}


// ---- DllRegisterServer @ 10004efd

undefined4 DllRegisterServer(void)

{
  AFX_MODULE_STATE *pAVar1;
  HINSTANCE__ *pHVar2;
  int iVar3;
  undefined4 uVar4;
  _GUID *p_Var5;
  char *pcVar6;
  char *pcVar7;
  AFX_MAINTAIN_STATE2 local_c [8];
  
                    /* 0x4efd  3  DllRegisterServer */
  pAVar1 = (AFX_MODULE_STATE *)FUN_10016c15();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2(local_c,pAVar1);
  pcVar7 = (char *)0x0;
  pcVar6 = (char *)0x0;
  p_Var5 = (_GUID *)&DAT_10018900;
  pHVar2 = (HINSTANCE__ *)FUN_10005120();
  iVar3 = AfxOleRegisterTypeLib(pHVar2,p_Var5,pcVar6,pcVar7);
  if (iVar3 == 0) {
    FUN_10005130((undefined4 *)local_c);
    uVar4 = 0x80040200;
  }
  else {
    iVar3 = COleObjectFactory::UpdateRegistryAll(1);
    if (iVar3 == 0) {
      FUN_10005130((undefined4 *)local_c);
      uVar4 = 0x80040201;
    }
    else {
      FUN_10005130((undefined4 *)local_c);
      uVar4 = 0;
    }
  }
  return uVar4;
}


// ---- DllUnregisterServer @ 10004f72

undefined4 DllUnregisterServer(void)

{
  AFX_MODULE_STATE *pAVar1;
  int iVar2;
  undefined4 uVar3;
  AFX_MAINTAIN_STATE2 local_c [8];
  
                    /* 0x4f72  4  DllUnregisterServer */
  pAVar1 = (AFX_MODULE_STATE *)FUN_10016c15();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2(local_c,pAVar1);
  iVar2 = AfxOleUnregisterTypeLib((_GUID *)&DAT_10018900,0,0,0);
  if (iVar2 == 0) {
    FUN_10005130((undefined4 *)local_c);
    uVar3 = 0x80040200;
  }
  else {
    iVar2 = COleObjectFactory::UpdateRegistryAll(0);
    if (iVar2 == 0) {
      FUN_10005130((undefined4 *)local_c);
      uVar3 = 0x80040201;
    }
    else {
      FUN_10005130((undefined4 *)local_c);
      uVar3 = 0;
    }
  }
  return uVar3;
}


// ---- FUN_10004fe3 @ 10004fe3

int __thiscall FUN_10004fe3(void *this,int param_1)

{
  int iVar1;
  int local_8;
  
  iVar1 = CWinApp::OnIdle(this,param_1);
  local_8 = 1;
  if (((param_1 != 0) && (param_1 != 100)) && (param_1 == 1000)) {
    local_8 = iVar1;
  }
  return local_8;
}


// ---- FUN_10005030 @ 10005030

void __fastcall FUN_10005030(CWinApp *param_1)

{
  FUN_10005070(param_1);
  return;
}


// ---- FUN_10005050 @ 10005050

CWinApp * __fastcall FUN_10005050(CWinApp *param_1)

{
  FUN_100050c0(param_1);
  *(undefined ***)param_1 = &PTR_LAB_10018914;
  return param_1;
}


// ---- FUN_10005070 @ 10005070

void __fastcall FUN_10005070(CWinApp *param_1)

{
  CWinApp::~CWinApp(param_1);
  return;
}


// ---- FUN_10005090 @ 10005090

CWinApp * __thiscall FUN_10005090(void *this,uint param_1)

{
  FUN_10005030(this);
  if ((param_1 & 1) != 0) {
    FUN_10001190(this);
  }
  return this;
}


// ---- FUN_100050c0 @ 100050c0

CWinApp * __fastcall FUN_100050c0(CWinApp *param_1)

{
  CWinApp::CWinApp(param_1,(char *)0x0);
  *(undefined ***)param_1 = &PTR_LAB_100189b8;
  return param_1;
}


// ---- FUN_100050f0 @ 100050f0

CWinApp * __thiscall FUN_100050f0(void *this,uint param_1)

{
  FUN_10005070(this);
  if ((param_1 & 1) != 0) {
    FUN_10001190(this);
  }
  return this;
}


// ---- FUN_10005120 @ 10005120

undefined4 FUN_10005120(void)

{
  AFX_MODULE_STATE *pAVar1;
  
  pAVar1 = AfxGetModuleState();
  return *(undefined4 *)(pAVar1 + 8);
}


// ---- FUN_10005130 @ 10005130

void __fastcall FUN_10005130(undefined4 *param_1)

{
  *(undefined4 *)(param_1[1] + 4) = *param_1;
  return;
}


// ---- FUN_10005150 @ 10005150

void FUN_10005150(void)

{
  FUN_1000515a();
  return;
}


// ---- FUN_1000515a @ 1000515a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000515a(void)

{
  _DAT_100221e0 = RegisterWindowMessageA(s_LEO_D_SET_STATE_1001dcc8);
  return;
}


// ---- FUN_1000516f @ 1000516f

void FUN_1000516f(void)

{
  FUN_10005179();
  return;
}


// ---- FUN_10005179 @ 10005179

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005179(void)

{
  _DAT_100221dc = RegisterWindowMessageA(s_LEO_D_SET_STRING_1001dcd8);
  return;
}


// ---- FUN_1000518e @ 1000518e

void FUN_1000518e(void)

{
  FUN_10005198();
  return;
}


// ---- FUN_10005198 @ 10005198

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005198(void)

{
  _DAT_100221d8 = RegisterWindowMessageA(s_LEO_D_SET_VALUE_1001dcec);
  return;
}


// ---- FUN_100051ad @ 100051ad

void FUN_100051ad(void)

{
  FUN_100051b7();
  return;
}


// ---- FUN_100051b7 @ 100051b7

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100051b7(void)

{
  _DAT_100221d4 = RegisterWindowMessageA(s_LEO_D_SET_XY_1001dcfc);
  return;
}


// ---- FUN_100051cc @ 100051cc

void FUN_100051cc(void)

{
  FUN_100051d6();
  return;
}


// ---- FUN_100051d6 @ 100051d6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100051d6(void)

{
  _DAT_100221d0 = RegisterWindowMessageA(s_LEO_D_GET_XY_1001dd0c);
  return;
}


// ---- FUN_100051eb @ 100051eb

void FUN_100051eb(void)

{
  FUN_100051f5();
  return;
}


// ---- FUN_100051f5 @ 100051f5

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100051f5(void)

{
  _DAT_100221cc = RegisterWindowMessageA(s_LEO_D_MOUSE_ADJUST_LEFT_1001dd1c);
  return;
}


// ---- FUN_1000520a @ 1000520a

void FUN_1000520a(void)

{
  FUN_10005214();
  return;
}


// ---- FUN_10005214 @ 10005214

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005214(void)

{
  _DAT_100221c8 = RegisterWindowMessageA(s_LEO_D_MOUSE_ADJUST_MIDDLE_1001dd34);
  return;
}


// ---- FUN_10005229 @ 10005229

void FUN_10005229(void)

{
  FUN_10005233();
  return;
}


// ---- FUN_10005233 @ 10005233

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005233(void)

{
  _DAT_100221c4 = RegisterWindowMessageA(s_LEO_D_STEP_1001dd50);
  return;
}


// ---- FUN_10005248 @ 10005248

void FUN_10005248(void)

{
  FUN_10005252();
  return;
}


// ---- FUN_10005252 @ 10005252

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005252(void)

{
  _DAT_100221c0 = RegisterWindowMessageA(s_LEO_D_EXECUTE_1001dd5c);
  return;
}


// ---- FUN_10005267 @ 10005267

void FUN_10005267(void)

{
  FUN_10005271();
  return;
}


// ---- FUN_10005271 @ 10005271

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005271(void)

{
  _DAT_100221bc = RegisterWindowMessageA(s_LEO_D_GET_COMMAND_1001dd6c);
  return;
}


// ---- FUN_10005286 @ 10005286

void FUN_10005286(void)

{
  FUN_10005290();
  return;
}


// ---- FUN_10005290 @ 10005290

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005290(void)

{
  _DAT_100221b8 = RegisterWindowMessageA(s_LEO_D_GET_STATE_1001dd80);
  return;
}


// ---- FUN_100052a5 @ 100052a5

void FUN_100052a5(void)

{
  FUN_100052af();
  return;
}


// ---- FUN_100052af @ 100052af

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100052af(void)

{
  _DAT_100221b4 = RegisterWindowMessageA(s_LEO_D_GET_STATE_STRING_1001dd90);
  return;
}


// ---- FUN_100052c4 @ 100052c4

void FUN_100052c4(void)

{
  FUN_100052ce();
  return;
}


// ---- FUN_100052ce @ 100052ce

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100052ce(void)

{
  _DAT_100221b0 = RegisterWindowMessageA(s_LEO_D_GET_VALUE_1001dda8);
  return;
}


// ---- FUN_100052e3 @ 100052e3

void FUN_100052e3(void)

{
  FUN_100052ed();
  return;
}


// ---- FUN_100052ed @ 100052ed

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100052ed(void)

{
  _DAT_100221ac = RegisterWindowMessageA(s_LEO_GET_VALUE_EXTRA_1001ddb8);
  return;
}


// ---- FUN_10005302 @ 10005302

void FUN_10005302(void)

{
  FUN_1000530c();
  return;
}


// ---- FUN_1000530c @ 1000530c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000530c(void)

{
  _DAT_100221a8 = RegisterWindowMessageA(s_LEO_D_SET_FORMAT_MODIFIER_1001ddcc);
  return;
}


// ---- FUN_10005321 @ 10005321

void FUN_10005321(void)

{
  FUN_1000532b();
  return;
}


// ---- FUN_1000532b @ 1000532b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000532b(void)

{
  _DAT_100221a4 = RegisterWindowMessageA(s_LEO_MACRO_MANAGER_REGISTER_1001dde8);
  return;
}


// ---- FUN_10005340 @ 10005340

void FUN_10005340(void)

{
  FUN_1000534a();
  return;
}


// ---- FUN_1000534a @ 1000534a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000534a(void)

{
  _DAT_100221a0 = RegisterWindowMessageA(s_LEO_LUT_MANAGER_REGISTER_1001de04);
  return;
}


// ---- FUN_1000535f @ 1000535f

void FUN_1000535f(void)

{
  FUN_10005369();
  return;
}


// ---- FUN_10005369 @ 10005369

void FUN_10005369(void)

{
  DAT_1002219c = RegisterWindowMessageA(s_PM_SERVER_READY_1001de20);
  return;
}


// ---- FUN_1000537e @ 1000537e

void FUN_1000537e(void)

{
  FUN_10005388();
  return;
}


// ---- FUN_10005388 @ 10005388

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005388(void)

{
  _DAT_10022198 = RegisterWindowMessageA(s_PM_SERVER_LOADING_1001de30);
  return;
}


// ---- FUN_1000539d @ 1000539d

void FUN_1000539d(void)

{
  FUN_100053a7();
  return;
}


// ---- FUN_100053a7 @ 100053a7

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100053a7(void)

{
  _DAT_10022194 = RegisterWindowMessageA(s_PM_REFRESH_WINDOW_1001de44);
  return;
}


// ---- FUN_100053bc @ 100053bc

void FUN_100053bc(void)

{
  FUN_100053c6();
  return;
}


// ---- FUN_100053c6 @ 100053c6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100053c6(void)

{
  _DAT_10022190 = RegisterWindowMessageA(s_PM_REGISTER_RETURN_1001de58);
  return;
}


// ---- FUN_100053db @ 100053db

void FUN_100053db(void)

{
  FUN_100053e5();
  return;
}


// ---- FUN_100053e5 @ 100053e5

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100053e5(void)

{
  _DAT_1002218c = RegisterWindowMessageA(s_PM_SEM_CLOSE_1001de6c);
  return;
}


// ---- FUN_100053fa @ 100053fa

void FUN_100053fa(void)

{
  FUN_10005404();
  return;
}


// ---- FUN_10005404 @ 10005404

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005404(void)

{
  _DAT_10022188 = RegisterWindowMessageA(s_LEO_MOUSE_FINISHED_ADJUST_1001de7c);
  return;
}


// ---- FUN_10005419 @ 10005419

void FUN_10005419(void)

{
  FUN_10005423();
  return;
}


// ---- FUN_10005423 @ 10005423

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005423(void)

{
  _DAT_10022184 = RegisterWindowMessageA(s_PM_PARAMETER_NOTIFY_1001de98);
  return;
}


// ---- FUN_10005438 @ 10005438

void FUN_10005438(void)

{
  FUN_10005442();
  return;
}


// ---- FUN_10005442 @ 10005442

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005442(void)

{
  _DAT_10022180 = RegisterWindowMessageA(s_PM_COARSE_FINE_CHANGED_1001deac);
  return;
}


// ---- FUN_10005457 @ 10005457

void FUN_10005457(void)

{
  FUN_10005461();
  return;
}


// ---- FUN_10005461 @ 10005461

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005461(void)

{
  _DAT_1002217c = RegisterWindowMessageA(s_PM_LICENCE_CHANGED_1001dec4);
  return;
}


// ---- FUN_10005476 @ 10005476

void FUN_10005476(void)

{
  FUN_10005480();
  return;
}


// ---- FUN_10005480 @ 10005480

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005480(void)

{
  _DAT_10022178 = RegisterWindowMessageA(s_PM_ZONE_OPMODE_CHANGED_1001ded8);
  return;
}


// ---- FUN_10005495 @ 10005495

void FUN_10005495(void)

{
  FUN_1000549f();
  return;
}


// ---- FUN_1000549f @ 1000549f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000549f(void)

{
  _DAT_10022174 = RegisterWindowMessageA(s_PM_ZONE0_MAG_PIX_CHANGED_1001def0);
  return;
}


// ---- FUN_100054b4 @ 100054b4

void FUN_100054b4(void)

{
  FUN_100054be();
  return;
}


// ---- FUN_100054be @ 100054be

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100054be(void)

{
  _DAT_10022170 = RegisterWindowMessageA(s_PM_ZONE1_MAG_PIX_CHANGED_1001df0c);
  return;
}


// ---- FUN_100054d3 @ 100054d3

void FUN_100054d3(void)

{
  FUN_100054dd();
  return;
}


// ---- FUN_100054dd @ 100054dd

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100054dd(void)

{
  _DAT_1002216c = RegisterWindowMessageA(s_PM_ZONE2_MAG_PIX_CHANGED_1001df28);
  return;
}


// ---- FUN_100054f2 @ 100054f2

void FUN_100054f2(void)

{
  FUN_100054fc();
  return;
}


// ---- FUN_100054fc @ 100054fc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100054fc(void)

{
  _DAT_10022168 = RegisterWindowMessageA(s_PM_ZONE3_MAG_PIX_CHANGED_1001df44);
  return;
}


// ---- FUN_10005511 @ 10005511

void FUN_10005511(void)

{
  FUN_1000551b();
  return;
}


// ---- FUN_1000551b @ 1000551b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000551b(void)

{
  _DAT_10022164 = RegisterWindowMessageA(s_PM_KNOB_ASSIGNMENT_1001df60);
  return;
}


// ---- FUN_10005530 @ 10005530

void FUN_10005530(void)

{
  FUN_1000553a();
  return;
}


// ---- FUN_1000553a @ 1000553a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000553a(void)

{
  _DAT_10022160 = RegisterWindowMessageA(s_PM_SET_KNOB_ASSIGNMENT_1001df74);
  return;
}


// ---- FUN_1000554f @ 1000554f

void FUN_1000554f(void)

{
  FUN_10005559();
  return;
}


// ---- FUN_10005559 @ 10005559

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005559(void)

{
  _DAT_1002215c = RegisterWindowMessageA(s_PM_IMG_ANNOTATION_TO_FILE_1001df8c);
  return;
}


// ---- FUN_1000556e @ 1000556e

void FUN_1000556e(void)

{
  FUN_10005578();
  return;
}


// ---- FUN_10005578 @ 10005578

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005578(void)

{
  _DAT_10022158 = RegisterWindowMessageA(s_PM_IMG_TIFF_RESET_1001dfa8);
  return;
}


// ---- FUN_1000558d @ 1000558d

void FUN_1000558d(void)

{
  FUN_10005597();
  return;
}


// ---- FUN_10005597 @ 10005597

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005597(void)

{
  _DAT_10022154 = RegisterWindowMessageA(s_PM_IMEX_DONE_1001dfbc);
  return;
}


// ---- FUN_100055ac @ 100055ac

void FUN_100055ac(void)

{
  FUN_100055b6();
  return;
}


// ---- FUN_100055b6 @ 100055b6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100055b6(void)

{
  _DAT_10022150 = RegisterWindowMessageA(s_PM_IMG_TIFF_PARAM_1001dfcc);
  return;
}


// ---- FUN_100055cb @ 100055cb

void FUN_100055cb(void)

{
  FUN_100055d5();
  return;
}


// ---- FUN_100055d5 @ 100055d5

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100055d5(void)

{
  _DAT_1002214c = RegisterWindowMessageA(s_PM_IMG_CREATE_TEXT_1001dfe0);
  return;
}


// ---- FUN_100055ea @ 100055ea

void FUN_100055ea(void)

{
  FUN_100055f4();
  return;
}


// ---- FUN_100055f4 @ 100055f4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100055f4(void)

{
  _DAT_10022148 = RegisterWindowMessageA(s_PM_IMG_DELETE_TEXT_1001dff4);
  return;
}


// ---- FUN_10005609 @ 10005609

void FUN_10005609(void)

{
  FUN_10005613();
  return;
}


// ---- FUN_10005613 @ 10005613

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005613(void)

{
  _DAT_10022144 = RegisterWindowMessageA(s_LEO_GET_SEM_HWND_1001e008);
  return;
}


// ---- FUN_10005628 @ 10005628

void FUN_10005628(void)

{
  FUN_10005632();
  return;
}


// ---- FUN_10005632 @ 10005632

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005632(void)

{
  _DAT_10022140 = RegisterWindowMessageA(s_PM_IMGMGR_INHIBIT_SPOT_1001e01c);
  return;
}


// ---- FUN_10005647 @ 10005647

void FUN_10005647(void)

{
  FUN_10005651();
  return;
}


// ---- FUN_10005651 @ 10005651

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005651(void)

{
  _DAT_1002213c = RegisterWindowMessageA(s_PM_SPECIAL_FUNCTION_1001e034);
  return;
}


// ---- FUN_10005666 @ 10005666

void FUN_10005666(void)

{
  FUN_10005670();
  return;
}


// ---- FUN_10005670 @ 10005670

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005670(void)

{
  _DAT_10022138 = RegisterWindowMessageA(s_PM_GET_TAB_COUNT_1001e048);
  return;
}


// ---- FUN_10005685 @ 10005685

void FUN_10005685(void)

{
  FUN_1000568f();
  return;
}


// ---- FUN_1000568f @ 1000568f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000568f(void)

{
  _DAT_10022134 = RegisterWindowMessageA(s_PM_GET_DLG_COUNT_1001e05c);
  return;
}


// ---- FUN_100056a4 @ 100056a4

void FUN_100056a4(void)

{
  FUN_100056ae();
  return;
}


// ---- FUN_100056ae @ 100056ae

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100056ae(void)

{
  _DAT_10022130 = RegisterWindowMessageA(s_PM_GET_TAB_NAME_1001e070);
  return;
}


// ---- FUN_100056c3 @ 100056c3

void FUN_100056c3(void)

{
  FUN_100056cd();
  return;
}


// ---- FUN_100056cd @ 100056cd

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100056cd(void)

{
  _DAT_1002212c = RegisterWindowMessageA(s_PM_GET_DLG_NAME_1001e080);
  return;
}


// ---- FUN_100056e2 @ 100056e2

void FUN_100056e2(void)

{
  FUN_100056ec();
  return;
}


// ---- FUN_100056ec @ 100056ec

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100056ec(void)

{
  _DAT_10022128 = RegisterWindowMessageA(s_PM_SHOW_TABS_DIALOGS_1001e090);
  return;
}


// ---- FUN_10005701 @ 10005701

void FUN_10005701(void)

{
  FUN_1000570b();
  return;
}


// ---- FUN_1000570b @ 1000570b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000570b(void)

{
  _DAT_10022124 = RegisterWindowMessageA(s_PM_GET_MACRO_LIB_ISSUE_1001e0a8);
  return;
}


// ---- FUN_10005720 @ 10005720

void FUN_10005720(void)

{
  FUN_1000572a();
  return;
}


// ---- FUN_1000572a @ 1000572a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000572a(void)

{
  _DAT_10022120 = RegisterWindowMessageA(s_PM_MACRO_CONDITIONS_SAVED_1001e0c0);
  return;
}


// ---- FUN_1000573f @ 1000573f

void FUN_1000573f(void)

{
  FUN_10005749();
  return;
}


// ---- FUN_10005749 @ 10005749

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005749(void)

{
  _DAT_1002211c = RegisterWindowMessageA(s_PM_STEP_MACRO_1001e0dc);
  return;
}


// ---- FUN_1000575e @ 1000575e

void FUN_1000575e(void)

{
  FUN_10005768();
  return;
}


// ---- FUN_10005768 @ 10005768

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005768(void)

{
  _DAT_10022118 = RegisterWindowMessageA(s_PM_CONTINUE_MACRO_1001e0ec);
  return;
}


// ---- FUN_1000577d @ 1000577d

void FUN_1000577d(void)

{
  FUN_10005787();
  return;
}


// ---- FUN_10005787 @ 10005787

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005787(void)

{
  _DAT_10022114 = RegisterWindowMessageA(s_PM_EXECUTE_LIBRARY_MACRO_1001e100);
  return;
}


// ---- FUN_1000579c @ 1000579c

void FUN_1000579c(void)

{
  FUN_100057a6();
  return;
}


// ---- FUN_100057a6 @ 100057a6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100057a6(void)

{
  _DAT_10022110 = RegisterWindowMessageA(s_PM_EXECUTE_FILE_MACRO_1001e11c);
  return;
}


// ---- FUN_100057bb @ 100057bb

void FUN_100057bb(void)

{
  FUN_100057c5();
  return;
}


// ---- FUN_100057c5 @ 100057c5

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100057c5(void)

{
  _DAT_1002210c = RegisterWindowMessageA(s_PM_HALT_MACRO_1001e134);
  return;
}


// ---- FUN_100057da @ 100057da

void FUN_100057da(void)

{
  FUN_100057e4();
  return;
}


// ---- FUN_100057e4 @ 100057e4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100057e4(void)

{
  _DAT_10022108 = RegisterWindowMessageA(s_PM_PAUSE_MACRO_1001e144);
  return;
}


// ---- FUN_100057f9 @ 100057f9

void FUN_100057f9(void)

{
  FUN_10005803();
  return;
}


// ---- FUN_10005803 @ 10005803

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005803(void)

{
  _DAT_10022104 = RegisterWindowMessageA(s_PM_MACRO_STATUS_1001e154);
  return;
}


// ---- FUN_10005818 @ 10005818

void FUN_10005818(void)

{
  FUN_10005822();
  return;
}


// ---- FUN_10005822 @ 10005822

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005822(void)

{
  _DAT_10022100 = RegisterWindowMessageA(s_PM_MACRO_EDITOR_1001e164);
  return;
}


// ---- FUN_10005837 @ 10005837

void FUN_10005837(void)

{
  FUN_10005841();
  return;
}


// ---- FUN_10005841 @ 10005841

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005841(void)

{
  _DAT_100220fc = RegisterWindowMessageA(s_PM_SAVE_SYSTEM_CONDITIONS_1001e174);
  return;
}


// ---- FUN_10005856 @ 10005856

void FUN_10005856(void)

{
  FUN_10005860();
  return;
}


// ---- FUN_10005860 @ 10005860

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005860(void)

{
  _DAT_100220f8 = RegisterWindowMessageA(s_PM_SAVE_STATE_1001e190);
  return;
}


// ---- FUN_10005875 @ 10005875

void FUN_10005875(void)

{
  FUN_1000587f();
  return;
}


// ---- FUN_1000587f @ 1000587f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000587f(void)

{
  _DAT_100220f4 = RegisterWindowMessageA(s_PM_LOAD_STATE_1001e1a0);
  return;
}


// ---- FUN_10005894 @ 10005894

void FUN_10005894(void)

{
  FUN_1000589e();
  return;
}


// ---- FUN_1000589e @ 1000589e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000589e(void)

{
  _DAT_100220f0 = RegisterWindowMessageA(s_PM_STANDARD_CONDITIONS_1001e1b0);
  return;
}


// ---- FUN_100058b3 @ 100058b3

void FUN_100058b3(void)

{
  FUN_100058bd();
  return;
}


// ---- FUN_100058bd @ 100058bd

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100058bd(void)

{
  _DAT_100220ec = RegisterWindowMessageA(s_PM_RESTORE_SYSTEM_CONDITIONS_1001e1c8);
  return;
}


// ---- FUN_100058d2 @ 100058d2

void FUN_100058d2(void)

{
  FUN_100058dc();
  return;
}


// ---- FUN_100058dc @ 100058dc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100058dc(void)

{
  _DAT_100220e8 = RegisterWindowMessageA(s_PM_EXECUTING_LINE_1001e1e8);
  return;
}


// ---- FUN_100058f1 @ 100058f1

void FUN_100058f1(void)

{
  FUN_100058fb();
  return;
}


// ---- FUN_100058fb @ 100058fb

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100058fb(void)

{
  _DAT_100220e4 = RegisterWindowMessageA(s_PM_REVIEW_STATE_1001e1fc);
  return;
}


// ---- FUN_10005910 @ 10005910

void FUN_10005910(void)

{
  FUN_1000591a();
  return;
}


// ---- FUN_1000591a @ 1000591a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000591a(void)

{
  _DAT_100220e0 = RegisterWindowMessageA(s_PM_SP_MOUSE_ADJUSTMENT_1001e20c);
  return;
}


// ---- FUN_1000592f @ 1000592f

void FUN_1000592f(void)

{
  FUN_10005939();
  return;
}


// ---- FUN_10005939 @ 10005939

void FUN_10005939(void)

{
  DAT_100220dc = RegisterWindowMessageA(s_PM_QUERY_SERVER_1001e224);
  return;
}


// ---- FUN_1000594e @ 1000594e

void FUN_1000594e(void)

{
  FUN_10005958();
  return;
}


// ---- FUN_10005958 @ 10005958

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005958(void)

{
  _DAT_100220d8 = RegisterWindowMessageA(s_PM_QUERY_CLIENT_COUNT_1001e234);
  return;
}


// ---- FUN_1000596d @ 1000596d

void FUN_1000596d(void)

{
  FUN_10005977();
  return;
}


// ---- FUN_10005977 @ 10005977

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005977(void)

{
  _DAT_100220d4 = RegisterWindowMessageA(s_PM_REGISTER_1001e24c);
  return;
}


// ---- FUN_1000598c @ 1000598c

void FUN_1000598c(void)

{
  FUN_10005996();
  return;
}


// ---- FUN_10005996 @ 10005996

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005996(void)

{
  _DAT_100220d0 = RegisterWindowMessageA(s_PM_REGISTER_CONTROLLER_1001e258);
  return;
}


// ---- FUN_100059ab @ 100059ab

void FUN_100059ab(void)

{
  FUN_100059b5();
  return;
}


// ---- FUN_100059b5 @ 100059b5

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100059b5(void)

{
  _DAT_100220cc = RegisterWindowMessageA(s_PM_REGISTER_USERNAME_1001e270);
  return;
}


// ---- FUN_100059ca @ 100059ca

void FUN_100059ca(void)

{
  FUN_100059d4();
  return;
}


// ---- FUN_100059d4 @ 100059d4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100059d4(void)

{
  _DAT_100220c8 = RegisterWindowMessageA(s_PM_SEM_REGISTER_1001e288);
  return;
}


// ---- FUN_100059e9 @ 100059e9

void FUN_100059e9(void)

{
  FUN_100059f3();
  return;
}


// ---- FUN_100059f3 @ 100059f3

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100059f3(void)

{
  _DAT_100220c4 = RegisterWindowMessageA(s_PM_REVOKE_REGISTRATION_1001e298);
  return;
}


// ---- FUN_10005a08 @ 10005a08

void FUN_10005a08(void)

{
  FUN_10005a12();
  return;
}


// ---- FUN_10005a12 @ 10005a12

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005a12(void)

{
  _DAT_100220c0 = RegisterWindowMessageA(s_PM_MOUSE_ADJUSTABLE_1001e2b0);
  return;
}


// ---- FUN_10005a27 @ 10005a27

void FUN_10005a27(void)

{
  FUN_10005a31();
  return;
}


// ---- FUN_10005a31 @ 10005a31

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005a31(void)

{
  _DAT_100220bc = RegisterWindowMessageA(s_PM_LOG_OFF_1001e2c4);
  return;
}


// ---- FUN_10005a46 @ 10005a46

void FUN_10005a46(void)

{
  FUN_10005a50();
  return;
}


// ---- FUN_10005a50 @ 10005a50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005a50(void)

{
  _DAT_100220b8 = RegisterWindowMessageA(s_PM_LOG_ON_1001e2d0);
  return;
}


// ---- FUN_10005a65 @ 10005a65

void FUN_10005a65(void)

{
  FUN_10005a6f();
  return;
}


// ---- FUN_10005a6f @ 10005a6f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005a6f(void)

{
  _DAT_100220b4 = RegisterWindowMessageA(s_PM_GET_SERIAL_NUMBER_1001e2dc);
  return;
}


// ---- FUN_10005a84 @ 10005a84

void FUN_10005a84(void)

{
  FUN_10005a8e();
  return;
}


// ---- FUN_10005a8e @ 10005a8e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005a8e(void)

{
  _DAT_100220b0 = RegisterWindowMessageA(s_PM_GET_DIRECTORIES_1001e2f4);
  return;
}


// ---- FUN_10005aa3 @ 10005aa3

void FUN_10005aa3(void)

{
  FUN_10005aad();
  return;
}


// ---- FUN_10005aad @ 10005aad

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005aad(void)

{
  _DAT_100220ac = RegisterWindowMessageA(s_PM_GET_COMMAND_GROUP_1001e308);
  return;
}


// ---- FUN_10005ac2 @ 10005ac2

void FUN_10005ac2(void)

{
  FUN_10005acc();
  return;
}


// ---- FUN_10005acc @ 10005acc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005acc(void)

{
  _DAT_100220a8 = RegisterWindowMessageA(s_PM_GET_STRING_1001e320);
  return;
}


// ---- FUN_10005ae1 @ 10005ae1

void FUN_10005ae1(void)

{
  FUN_10005aeb();
  return;
}


// ---- FUN_10005aeb @ 10005aeb

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005aeb(void)

{
  _DAT_100220a4 = RegisterWindowMessageA(s_PM_GET_NAME_1001e330);
  return;
}


// ---- FUN_10005b00 @ 10005b00

void FUN_10005b00(void)

{
  FUN_10005b0a();
  return;
}


// ---- FUN_10005b0a @ 10005b0a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005b0a(void)

{
  _DAT_100220a0 = RegisterWindowMessageA(s_PM_GET_MNEMONIC_1001e33c);
  return;
}


// ---- FUN_10005b1f @ 10005b1f

void FUN_10005b1f(void)

{
  FUN_10005b29();
  return;
}


// ---- FUN_10005b29 @ 10005b29

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005b29(void)

{
  _DAT_1002209c = RegisterWindowMessageA(s_PM_GET_VALUE_1001e34c);
  return;
}


// ---- FUN_10005b3e @ 10005b3e

void FUN_10005b3e(void)

{
  FUN_10005b48();
  return;
}


// ---- FUN_10005b48 @ 10005b48

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005b48(void)

{
  _DAT_10022098 = RegisterWindowMessageA(s_PM_SET_BEAMSHIFT_DISTANCE_1001e35c);
  return;
}


// ---- FUN_10005b5d @ 10005b5d

void FUN_10005b5d(void)

{
  FUN_10005b67();
  return;
}


// ---- FUN_10005b67 @ 10005b67

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005b67(void)

{
  _DAT_10022094 = RegisterWindowMessageA(s_PM_STAGE_GOTO_1001e378);
  return;
}


// ---- FUN_10005b7c @ 10005b7c

void FUN_10005b7c(void)

{
  FUN_10005b86();
  return;
}


// ---- FUN_10005b86 @ 10005b86

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005b86(void)

{
  _DAT_10022090 = RegisterWindowMessageA(s_PM_GET_STAGE_POSITION_1001e388);
  return;
}


// ---- FUN_10005b9b @ 10005b9b

void FUN_10005b9b(void)

{
  FUN_10005ba5();
  return;
}


// ---- FUN_10005ba5 @ 10005ba5

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005ba5(void)

{
  _DAT_1002208c = RegisterWindowMessageA(s_PM_GET_VALUE_AS_STRING_1001e3a0);
  return;
}


// ---- FUN_10005bba @ 10005bba

void FUN_10005bba(void)

{
  FUN_10005bc4();
  return;
}


// ---- FUN_10005bc4 @ 10005bc4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005bc4(void)

{
  _DAT_10022088 = RegisterWindowMessageA(s_PM_GET_STATEVALUE_AS_ENGLISH_STR_1001e3b8);
  return;
}


// ---- FUN_10005bd9 @ 10005bd9

void FUN_10005bd9(void)

{
  FUN_10005be3();
  return;
}


// ---- FUN_10005be3 @ 10005be3

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005be3(void)

{
  _DAT_10022084 = RegisterWindowMessageA(s_PM_GET_ERROR_1001e3dc);
  return;
}


// ---- FUN_10005bf8 @ 10005bf8

void FUN_10005bf8(void)

{
  FUN_10005c02();
  return;
}


// ---- FUN_10005c02 @ 10005c02

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005c02(void)

{
  _DAT_10022080 = RegisterWindowMessageA(s_PM_NEXT_MAG_TABLE_1001e3ec);
  return;
}


// ---- FUN_10005c17 @ 10005c17

void FUN_10005c17(void)

{
  FUN_10005c21();
  return;
}


// ---- FUN_10005c21 @ 10005c21

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005c21(void)

{
  _DAT_1002207c = RegisterWindowMessageA(s_PM_END_MAG_TABLE_1001e400);
  return;
}


// ---- FUN_10005c36 @ 10005c36

void FUN_10005c36(void)

{
  FUN_10005c40();
  return;
}


// ---- FUN_10005c40 @ 10005c40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005c40(void)

{
  _DAT_10022078 = RegisterWindowMessageA(s_PM_CENTRE_FEATURE_ORIGINAL_MAG_1001e414);
  return;
}


// ---- FUN_10005c55 @ 10005c55

void FUN_10005c55(void)

{
  FUN_10005c5f();
  return;
}


// ---- FUN_10005c5f @ 10005c5f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005c5f(void)

{
  _DAT_10022074 = RegisterWindowMessageA(s_PM_GET_MACHINE_TYPE_1001e434);
  return;
}


// ---- FUN_10005c74 @ 10005c74

void FUN_10005c74(void)

{
  FUN_10005c7e();
  return;
}


// ---- FUN_10005c7e @ 10005c7e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005c7e(void)

{
  _DAT_10022070 = RegisterWindowMessageA(s_PM_GET_HANDLES_1001e448);
  return;
}


// ---- FUN_10005c93 @ 10005c93

void FUN_10005c93(void)

{
  FUN_10005c9d();
  return;
}


// ---- FUN_10005c9d @ 10005c9d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005c9d(void)

{
  _DAT_1002206c = RegisterWindowMessageA(s_PM_GET_STATES_1001e458);
  return;
}


// ---- FUN_10005cb2 @ 10005cb2

void FUN_10005cb2(void)

{
  FUN_10005cbc();
  return;
}


// ---- FUN_10005cbc @ 10005cbc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005cbc(void)

{
  _DAT_10022068 = RegisterWindowMessageA(s_PM_GET_LOW_LIMIT_1001e468);
  return;
}


// ---- FUN_10005cd1 @ 10005cd1

void FUN_10005cd1(void)

{
  FUN_10005cdb();
  return;
}


// ---- FUN_10005cdb @ 10005cdb

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005cdb(void)

{
  _DAT_10022064 = RegisterWindowMessageA(s_PM_GET_LICENCE_1001e47c);
  return;
}


// ---- FUN_10005cf0 @ 10005cf0

void FUN_10005cf0(void)

{
  FUN_10005cfa();
  return;
}


// ---- FUN_10005cfa @ 10005cfa

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005cfa(void)

{
  _DAT_10022060 = RegisterWindowMessageA(s_PM_GET_PARAM_GROUP_1001e48c);
  return;
}


// ---- FUN_10005d0f @ 10005d0f

void FUN_10005d0f(void)

{
  FUN_10005d19();
  return;
}


// ---- FUN_10005d19 @ 10005d19

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005d19(void)

{
  _DAT_1002205c = RegisterWindowMessageA(s_PM_GET_PARAM_COUNT_1001e4a0);
  return;
}


// ---- FUN_10005d2e @ 10005d2e

void FUN_10005d2e(void)

{
  FUN_10005d38();
  return;
}


// ---- FUN_10005d38 @ 10005d38

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005d38(void)

{
  _DAT_10022058 = RegisterWindowMessageA(s_PM_GET_XY_VALUES_1001e4b4);
  return;
}


// ---- FUN_10005d4d @ 10005d4d

void FUN_10005d4d(void)

{
  FUN_10005d57();
  return;
}


// ---- FUN_10005d57 @ 10005d57

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005d57(void)

{
  _DAT_10022054 = RegisterWindowMessageA(s_PM_SET_XY_VALUES_1001e4c8);
  return;
}


// ---- FUN_10005d6c @ 10005d6c

void FUN_10005d6c(void)

{
  FUN_10005d76();
  return;
}


// ---- FUN_10005d76 @ 10005d76

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005d76(void)

{
  _DAT_10022050 = RegisterWindowMessageA(s_PM_GET_UNITS_STRING_1001e4dc);
  return;
}


// ---- FUN_10005d8b @ 10005d8b

void FUN_10005d8b(void)

{
  FUN_10005d95();
  return;
}


// ---- FUN_10005d95 @ 10005d95

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005d95(void)

{
  _DAT_1002204c = RegisterWindowMessageA(s_PM_GET_UNSCALED_VALUE_1001e4f0);
  return;
}


// ---- FUN_10005daa @ 10005daa

void FUN_10005daa(void)

{
  FUN_10005db4();
  return;
}


// ---- FUN_10005db4 @ 10005db4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005db4(void)

{
  _DAT_10022048 = RegisterWindowMessageA(s_PM_GET_SCALED_VALUE_1001e508);
  return;
}


// ---- FUN_10005dc9 @ 10005dc9

void FUN_10005dc9(void)

{
  FUN_10005dd3();
  return;
}


// ---- FUN_10005dd3 @ 10005dd3

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005dd3(void)

{
  _DAT_10022044 = RegisterWindowMessageA(s_PM_SET_VALUE_1001e51c);
  return;
}


// ---- FUN_10005de8 @ 10005de8

void FUN_10005de8(void)

{
  FUN_10005df2();
  return;
}


// ---- FUN_10005df2 @ 10005df2

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005df2(void)

{
  _DAT_10022040 = RegisterWindowMessageA(s_PM_SET_COARSE_1001e52c);
  return;
}


// ---- FUN_10005e07 @ 10005e07

void FUN_10005e07(void)

{
  FUN_10005e11();
  return;
}


// ---- FUN_10005e11 @ 10005e11

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005e11(void)

{
  _DAT_1002203c = RegisterWindowMessageA(s_PM_GET_COARSE_1001e53c);
  return;
}


// ---- FUN_10005e26 @ 10005e26

void FUN_10005e26(void)

{
  FUN_10005e30();
  return;
}


// ---- FUN_10005e30 @ 10005e30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005e30(void)

{
  _DAT_10022038 = RegisterWindowMessageA(s_PM_SET_NOTIFY_1001e54c);
  return;
}


// ---- FUN_10005e45 @ 10005e45

void FUN_10005e45(void)

{
  FUN_10005e4f();
  return;
}


// ---- FUN_10005e4f @ 10005e4f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005e4f(void)

{
  _DAT_10022034 = RegisterWindowMessageA(s_PM_SET_USER_MODE_1001e55c);
  return;
}


// ---- FUN_10005e64 @ 10005e64

void FUN_10005e64(void)

{
  FUN_10005e6e();
  return;
}


// ---- FUN_10005e6e @ 10005e6e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005e6e(void)

{
  _DAT_10022030 = RegisterWindowMessageA(s_PM_LEFT_MOUSE_ADJUST_SETUP_1001e570);
  return;
}


// ---- FUN_10005e83 @ 10005e83

void FUN_10005e83(void)

{
  FUN_10005e8d();
  return;
}


// ---- FUN_10005e8d @ 10005e8d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005e8d(void)

{
  _DAT_1002202c = RegisterWindowMessageA(s_PM_RIGHT_MOUSE_ADJUST_SETUP_1001e58c);
  return;
}


// ---- FUN_10005ea2 @ 10005ea2

void FUN_10005ea2(void)

{
  FUN_10005eac();
  return;
}


// ---- FUN_10005eac @ 10005eac

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005eac(void)

{
  _DAT_10022028 = RegisterWindowMessageA(s_PM_MOUSE_ADJUST_START_1001e5a8);
  return;
}


// ---- FUN_10005ec1 @ 10005ec1

void FUN_10005ec1(void)

{
  FUN_10005ecb();
  return;
}


// ---- FUN_10005ecb @ 10005ecb

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005ecb(void)

{
  _DAT_10022024 = RegisterWindowMessageA(s_PM_IS_ENABLED_1001e5c0);
  return;
}


// ---- FUN_10005ee0 @ 10005ee0

void FUN_10005ee0(void)

{
  FUN_10005eea();
  return;
}


// ---- FUN_10005eea @ 10005eea

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005eea(void)

{
  _DAT_10022020 = RegisterWindowMessageA(s_PM_IS_Y_OF_XY_1001e5d0);
  return;
}


// ---- FUN_10005eff @ 10005eff

void FUN_10005eff(void)

{
  FUN_10005f09();
  return;
}


// ---- FUN_10005f09 @ 10005f09

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005f09(void)

{
  _DAT_1002201c = RegisterWindowMessageA(s_PM_IS_VECTOR_1001e5e0);
  return;
}


// ---- FUN_10005f1e @ 10005f1e

void FUN_10005f1e(void)

{
  FUN_10005f28();
  return;
}


// ---- FUN_10005f28 @ 10005f28

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005f28(void)

{
  _DAT_10022018 = RegisterWindowMessageA(s_PM_IS_VISIBLE_1001e5f0);
  return;
}


// ---- FUN_10005f3d @ 10005f3d

void FUN_10005f3d(void)

{
  FUN_10005f47();
  return;
}


// ---- FUN_10005f47 @ 10005f47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005f47(void)

{
  _DAT_10022014 = RegisterWindowMessageA(s_PM_IS_READ_ONLY_1001e600);
  return;
}


// ---- FUN_10005f5c @ 10005f5c

void FUN_10005f5c(void)

{
  FUN_10005f66();
  return;
}


// ---- FUN_10005f66 @ 10005f66

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005f66(void)

{
  _DAT_10022010 = RegisterWindowMessageA(s_PM_IS_ENTRY_ONLY_1001e610);
  return;
}


// ---- FUN_10005f7b @ 10005f7b

void FUN_10005f7b(void)

{
  FUN_10005f85();
  return;
}


// ---- FUN_10005f85 @ 10005f85

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005f85(void)

{
  _DAT_1002200c = RegisterWindowMessageA(s_PM_IS_READ_WRITE_1001e624);
  return;
}


// ---- FUN_10005f9a @ 10005f9a

void FUN_10005f9a(void)

{
  FUN_10005fa4();
  return;
}


// ---- FUN_10005fa4 @ 10005fa4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005fa4(void)

{
  _DAT_10022008 = RegisterWindowMessageA(s_PM_PARAMETER_CLICK_1001e638);
  return;
}


// ---- FUN_10005fb9 @ 10005fb9

void FUN_10005fb9(void)

{
  FUN_10005fc3();
  return;
}


// ---- FUN_10005fc3 @ 10005fc3

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005fc3(void)

{
  _DAT_10022004 = RegisterWindowMessageA(s_PM_BUTTON_PRIVILEDGE_1001e64c);
  return;
}


// ---- FUN_10005fd8 @ 10005fd8

void FUN_10005fd8(void)

{
  FUN_10005fe2();
  return;
}


// ---- FUN_10005fe2 @ 10005fe2

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005fe2(void)

{
  _DAT_10022000 = RegisterWindowMessageA(s_PM_COMMON_TOOLBAR_FLAG_1001e664);
  return;
}


// ---- FUN_10005ff7 @ 10005ff7

void FUN_10005ff7(void)

{
  FUN_10006001();
  return;
}


// ---- FUN_10006001 @ 10006001

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006001(void)

{
  _DAT_10021ffc = RegisterWindowMessageA(s_PM_SERVER_HELP_1001e67c);
  return;
}


// ---- FUN_10006016 @ 10006016

void FUN_10006016(void)

{
  FUN_10006020();
  return;
}


// ---- FUN_10006020 @ 10006020

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006020(void)

{
  _DAT_10021ff8 = RegisterWindowMessageA(s_PM_PARAMETER_DOUBLE_CLICK_1001e68c);
  return;
}


// ---- FUN_10006035 @ 10006035

void FUN_10006035(void)

{
  FUN_1000603f();
  return;
}


// ---- FUN_1000603f @ 1000603f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000603f(void)

{
  _DAT_10021ff4 = RegisterWindowMessageA(s_PM_MENU_MORE_CLICK_1001e6a8);
  return;
}


// ---- FUN_10006054 @ 10006054

void FUN_10006054(void)

{
  FUN_1000605e();
  return;
}


// ---- FUN_1000605e @ 1000605e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000605e(void)

{
  _DAT_10021ff0 = RegisterWindowMessageA(s_PM_PARAMETER_RIGHT_CLICK_1001e6bc);
  return;
}


// ---- FUN_10006073 @ 10006073

void FUN_10006073(void)

{
  FUN_1000607d();
  return;
}


// ---- FUN_1000607d @ 1000607d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000607d(void)

{
  _DAT_10021fec = RegisterWindowMessageA(s_PM_TRANSLATE_MNEMONIC_1001e6d8);
  return;
}


// ---- FUN_10006092 @ 10006092

void FUN_10006092(void)

{
  FUN_1000609c();
  return;
}


// ---- FUN_1000609c @ 1000609c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000609c(void)

{
  _DAT_10021fe8 = RegisterWindowMessageA(s_PM_EXECUTE_COMMAND_1001e6f0);
  return;
}


// ---- FUN_100060b1 @ 100060b1

void FUN_100060b1(void)

{
  FUN_100060bb();
  return;
}


// ---- FUN_100060bb @ 100060bb

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100060bb(void)

{
  _DAT_10021fe4 = RegisterWindowMessageA(s_PM_STEP_VALUE_1001e704);
  return;
}


// ---- FUN_100060d0 @ 100060d0

void FUN_100060d0(void)

{
  FUN_100060da();
  return;
}


// ---- FUN_100060da @ 100060da

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100060da(void)

{
  _DAT_10021fe0 = RegisterWindowMessageA(s_PM_HELP_MODE_1001e714);
  return;
}


// ---- FUN_100060ef @ 100060ef

void FUN_100060ef(void)

{
  FUN_100060f9();
  return;
}


// ---- FUN_100060f9 @ 100060f9

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100060f9(void)

{
  _DAT_10021fdc = RegisterWindowMessageA(s_PM_SERVER_MESSAGE_1001e724);
  return;
}


// ---- FUN_1000610e @ 1000610e

void FUN_1000610e(void)

{
  FUN_10006118();
  return;
}


// ---- FUN_10006118 @ 10006118

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006118(void)

{
  _DAT_10021fd8 = RegisterWindowMessageA(s_PM_AVAILABLE_MACROS_1001e738);
  return;
}


// ---- FUN_1000612d @ 1000612d

void FUN_1000612d(void)

{
  FUN_10006137();
  return;
}


// ---- FUN_10006137 @ 10006137

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006137(void)

{
  _DAT_10021fd4 = RegisterWindowMessageA(s_PM_SET_USER_PREFERENCES_1001e74c);
  return;
}


// ---- FUN_1000614c @ 1000614c

void FUN_1000614c(void)

{
  FUN_10006156();
  return;
}


// ---- FUN_10006156 @ 10006156

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006156(void)

{
  _DAT_10021fd0 = RegisterWindowMessageA(s_PM_USER_PREFERENCES_CHANGED_1001e764);
  return;
}


// ---- FUN_1000616b @ 1000616b

void FUN_1000616b(void)

{
  FUN_10006175();
  return;
}


// ---- FUN_10006175 @ 10006175

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006175(void)

{
  _DAT_10021fcc = RegisterWindowMessageA(s_PM_NEXT_VP_UNITS_1001e780);
  return;
}


// ---- FUN_1000618a @ 1000618a

void FUN_1000618a(void)

{
  FUN_10006194();
  return;
}


// ---- FUN_10006194 @ 10006194

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006194(void)

{
  _DAT_10021fc8 = RegisterWindowMessageA(s_PM_NEXT_PRESSURE_UNITS_1001e794);
  return;
}


// ---- FUN_100061a9 @ 100061a9

void FUN_100061a9(void)

{
  FUN_100061b3();
  return;
}


// ---- FUN_100061b3 @ 100061b3

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100061b3(void)

{
  _DAT_10021fc4 = RegisterWindowMessageA(s_PM_GET_USER_PREFERENCES_1001e7ac);
  return;
}


// ---- FUN_100061c8 @ 100061c8

void FUN_100061c8(void)

{
  FUN_100061d2();
  return;
}


// ---- FUN_100061d2 @ 100061d2

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100061d2(void)

{
  _DAT_10021fc0 = RegisterWindowMessageA(s_PM_SET_APERTURE_TABLE_1001e7c4);
  return;
}


// ---- FUN_100061e7 @ 100061e7

void FUN_100061e7(void)

{
  FUN_100061f1();
  return;
}


// ---- FUN_100061f1 @ 100061f1

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100061f1(void)

{
  _DAT_10021fbc = RegisterWindowMessageA(s_PM_GET_APERTURE_TABLE_1001e7dc);
  return;
}


// ---- FUN_10006206 @ 10006206

void FUN_10006206(void)

{
  FUN_10006210();
  return;
}


// ---- FUN_10006210 @ 10006210

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006210(void)

{
  _DAT_10021fb8 = RegisterWindowMessageA(s_PM_APERTURE_TABLE_CHANGED_1001e7f4);
  return;
}


// ---- FUN_10006225 @ 10006225

void FUN_10006225(void)

{
  FUN_1000622f();
  return;
}


// ---- FUN_1000622f @ 1000622f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000622f(void)

{
  _DAT_10021fb4 = RegisterWindowMessageA(s_PM_LUT_EDITOR_1001e810);
  return;
}


// ---- FUN_10006244 @ 10006244

void FUN_10006244(void)

{
  FUN_1000624e();
  return;
}


// ---- FUN_1000624e @ 1000624e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000624e(void)

{
  _DAT_10021fb0 = RegisterWindowMessageA(s_PM_SET_LUT_POINT_1001e820);
  return;
}


// ---- FUN_10006263 @ 10006263

void FUN_10006263(void)

{
  FUN_1000626d();
  return;
}


// ---- FUN_1000626d @ 1000626d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000626d(void)

{
  _DAT_10021fac = RegisterWindowMessageA(s_PM_SET_LUT_RGB_1001e834);
  return;
}


// ---- FUN_10006282 @ 10006282

void FUN_10006282(void)

{
  FUN_1000628c();
  return;
}


// ---- FUN_1000628c @ 1000628c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000628c(void)

{
  _DAT_10021fa8 = RegisterWindowMessageA(s_PM_SET_LUT_COLOR_1001e844);
  return;
}


// ---- FUN_100062a1 @ 100062a1

void FUN_100062a1(void)

{
  FUN_100062ab();
  return;
}


// ---- FUN_100062ab @ 100062ab

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100062ab(void)

{
  _DAT_10021fa4 = RegisterWindowMessageA(s_PM_SET_LUT_BC_1001e858);
  return;
}


// ---- FUN_100062c0 @ 100062c0

void FUN_100062c0(void)

{
  FUN_100062ca();
  return;
}


// ---- FUN_100062ca @ 100062ca

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100062ca(void)

{
  _DAT_10021fa0 = RegisterWindowMessageA(s_PM_SET_LUT_INVERSE_1001e868);
  return;
}


// ---- FUN_100062df @ 100062df

void FUN_100062df(void)

{
  FUN_100062e9();
  return;
}


// ---- FUN_100062e9 @ 100062e9

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100062e9(void)

{
  _DAT_10021f9c = RegisterWindowMessageA(s_PM_SET_LUT_LINEAR_1001e87c);
  return;
}


// ---- FUN_100062fe @ 100062fe

void FUN_100062fe(void)

{
  FUN_10006308();
  return;
}


// ---- FUN_10006308 @ 10006308

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006308(void)

{
  _DAT_10021f98 = RegisterWindowMessageA(s_PM_SET_LUT_GAMMA_1001e890);
  return;
}


// ---- FUN_1000631d @ 1000631d

void FUN_1000631d(void)

{
  FUN_10006327();
  return;
}


// ---- FUN_10006327 @ 10006327

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006327(void)

{
  _DAT_10021f94 = RegisterWindowMessageA(s_PM_DRAW_GREY_WEDGE_1001e8a4);
  return;
}


// ---- FUN_1000633c @ 1000633c

void FUN_1000633c(void)

{
  FUN_10006346();
  return;
}


// ---- FUN_10006346 @ 10006346

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006346(void)

{
  _DAT_10021f90 = RegisterWindowMessageA(s_PM_GET_IMAGE_PIXEL_1001e8b8);
  return;
}


// ---- FUN_1000635b @ 1000635b

void FUN_1000635b(void)

{
  FUN_10006365();
  return;
}


// ---- FUN_10006365 @ 10006365

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006365(void)

{
  _DAT_10021f8c = RegisterWindowMessageA(s_PM_RGB_READ_1001e8cc);
  return;
}


// ---- FUN_1000637a @ 1000637a

void FUN_1000637a(void)

{
  FUN_10006384();
  return;
}


// ---- FUN_10006384 @ 10006384

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006384(void)

{
  _DAT_10021f88 = RegisterWindowMessageA(s_PM_LUT_LOAD_1001e8d8);
  return;
}


// ---- FUN_10006399 @ 10006399

void FUN_10006399(void)

{
  FUN_100063a3();
  return;
}


// ---- FUN_100063a3 @ 100063a3

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100063a3(void)

{
  _DAT_10021f84 = RegisterWindowMessageA(s_PM_LUT_READ_1001e8e4);
  return;
}


// ---- FUN_100063b8 @ 100063b8

void FUN_100063b8(void)

{
  FUN_100063c2();
  return;
}


// ---- FUN_100063c2 @ 100063c2

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100063c2(void)

{
  _DAT_10021f80 = RegisterWindowMessageA(s_PM_READ_COLOR_1001e8f0);
  return;
}


// ---- FUN_100063d7 @ 100063d7

void FUN_100063d7(void)

{
  FUN_100063e1();
  return;
}


// ---- FUN_100063e1 @ 100063e1

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100063e1(void)

{
  _DAT_10021f7c = RegisterWindowMessageA(s_PM_LUT_FILL_1001e900);
  return;
}


// ---- FUN_100063f6 @ 100063f6

void FUN_100063f6(void)

{
  FUN_10006400();
  return;
}


// ---- FUN_10006400 @ 10006400

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006400(void)

{
  _DAT_10021f78 = RegisterWindowMessageA(s_PM_LUT_QLIN_1001e90c);
  return;
}


// ---- FUN_10006415 @ 10006415

void FUN_10006415(void)

{
  FUN_1000641f();
  return;
}


// ---- FUN_1000641f @ 1000641f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000641f(void)

{
  _DAT_10021f74 = RegisterWindowMessageA(s_PM_LUT_QINV_1001e918);
  return;
}


// ---- FUN_10006434 @ 10006434

void FUN_10006434(void)

{
  FUN_1000643e();
  return;
}


// ---- FUN_1000643e @ 1000643e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000643e(void)

{
  _DAT_10021f70 = RegisterWindowMessageA(s_PM_LUT_SAVE_1001e924);
  return;
}


// ---- FUN_10006453 @ 10006453

void FUN_10006453(void)

{
  FUN_1000645d();
  return;
}


// ---- FUN_1000645d @ 1000645d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000645d(void)

{
  _DAT_10021f6c = RegisterWindowMessageA(s_PM_LUT_RESTORE_1001e930);
  return;
}


// ---- FUN_10006472 @ 10006472

void FUN_10006472(void)

{
  FUN_1000647c();
  return;
}


// ---- FUN_1000647c @ 1000647c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000647c(void)

{
  _DAT_10021f68 = RegisterWindowMessageA(s_PM_READ_COLOR_LUT_1001e940);
  return;
}


// ---- FUN_10006491 @ 10006491

void FUN_10006491(void)

{
  FUN_1000649b();
  return;
}


// ---- FUN_1000649b @ 1000649b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000649b(void)

{
  _DAT_10021f64 = RegisterWindowMessageA(s_PM_GET_PIXEL_COLOUR_1001e954);
  return;
}


// ---- FUN_100064b0 @ 100064b0

void FUN_100064b0(void)

{
  FUN_100064ba();
  return;
}


// ---- FUN_100064ba @ 100064ba

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100064ba(void)

{
  _DAT_10021f60 = RegisterWindowMessageA(s_PM_LOAD_LUT_FILE_1001e968);
  return;
}


// ---- FUN_100064cf @ 100064cf

void FUN_100064cf(void)

{
  FUN_100064d9();
  return;
}


// ---- FUN_100064d9 @ 100064d9

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100064d9(void)

{
  _DAT_10021f5c = RegisterWindowMessageA(s_PM_DO_FEATURESCAN_1001e97c);
  return;
}


// ---- FUN_100064ee @ 100064ee

void FUN_100064ee(void)

{
  FUN_100064f8();
  return;
}


// ---- FUN_100064f8 @ 100064f8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100064f8(void)

{
  _DAT_10021f58 = RegisterWindowMessageA(s_PM_STOP_FEATURESCAN_1001e990);
  return;
}


// ---- FUN_1000650d @ 1000650d

void FUN_1000650d(void)

{
  FUN_10006517();
  return;
}


// ---- FUN_10006517 @ 10006517

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006517(void)

{
  _DAT_10021f54 = RegisterWindowMessageA(s_PM_D_ZONE_DATA_CHANGE_1001e9a4);
  return;
}


// ---- FUN_1000652c @ 1000652c

void FUN_1000652c(void)

{
  FUN_10006536();
  return;
}


// ---- FUN_10006536 @ 10006536

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006536(void)

{
  _DAT_10021f50 = RegisterWindowMessageA(s_PM_D_GET_ZONES_DATA_1001e9bc);
  return;
}


// ---- FUN_1000654b @ 1000654b

void FUN_1000654b(void)

{
  FUN_10006555();
  return;
}


// ---- FUN_10006555 @ 10006555

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006555(void)

{
  _DAT_10021f4c = RegisterWindowMessageA(s_PM_D_SET_ZONES_DATA_1001e9d0);
  return;
}


// ---- FUN_1000656a @ 1000656a

void FUN_1000656a(void)

{
  FUN_10006574();
  return;
}


// ---- FUN_10006574 @ 10006574

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006574(void)

{
  _DAT_10021f48 = RegisterWindowMessageA(s_PM_D_GET_LICENCES_1001e9e4);
  return;
}


// ---- FUN_10006589 @ 10006589

void FUN_10006589(void)

{
  FUN_10006593();
  return;
}


// ---- FUN_10006593 @ 10006593

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006593(void)

{
  _DAT_10021f44 = RegisterWindowMessageA(s_PM_D_SET_LICENCES_1001e9f8);
  return;
}


// ---- FUN_100065a8 @ 100065a8

void FUN_100065a8(void)

{
  FUN_100065b2();
  return;
}


// ---- FUN_100065b2 @ 100065b2

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100065b2(void)

{
  _DAT_10021f40 = RegisterWindowMessageA(s_PM_D_GET_ADMIN_CONFIG_1001ea0c);
  return;
}


// ---- FUN_100065c7 @ 100065c7

void FUN_100065c7(void)

{
  FUN_100065d1();
  return;
}


// ---- FUN_100065d1 @ 100065d1

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100065d1(void)

{
  _DAT_10021f3c = RegisterWindowMessageA(s_PM_D_SET_ADMIN_CONFIG_1001ea24);
  return;
}


// ---- FUN_100065e6 @ 100065e6

void FUN_100065e6(void)

{
  FUN_100065f0();
  return;
}


// ---- FUN_100065f0 @ 100065f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100065f0(void)

{
  _DAT_10021f38 = RegisterWindowMessageA(s_PM_ADMIN_FUNCTION_1001ea3c);
  return;
}


// ---- FUN_10006605 @ 10006605

void FUN_10006605(void)

{
  FUN_1000660f();
  return;
}


// ---- FUN_1000660f @ 1000660f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000660f(void)

{
  _DAT_10021f34 = RegisterWindowMessageA(s_PM_GET_MACRO_LINKS_1001ea50);
  return;
}


// ---- FUN_10006624 @ 10006624

void FUN_10006624(void)

{
  FUN_1000662e();
  return;
}


// ---- FUN_1000662e @ 1000662e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000662e(void)

{
  _DAT_10021f30 = RegisterWindowMessageA(s_PM_GET_UIF_LINKS_1001ea64);
  return;
}


// ---- FUN_10006643 @ 10006643

void FUN_10006643(void)

{
  FUN_1000664d();
  return;
}


// ---- FUN_1000664d @ 1000664d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000664d(void)

{
  _DAT_10021f2c = RegisterWindowMessageA(s_PM_POINT_AS_ZONE_1001ea78);
  return;
}


// ---- FUN_10006662 @ 10006662

void FUN_10006662(void)

{
  FUN_1000666c();
  return;
}


// ---- FUN_1000666c @ 1000666c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000666c(void)

{
  _DAT_10021f28 = RegisterWindowMessageA(s_PM_GET_HELP_PATH_1001ea8c);
  return;
}


// ---- FUN_10006681 @ 10006681

void FUN_10006681(void)

{
  FUN_1000668b();
  return;
}


// ---- FUN_1000668b @ 1000668b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000668b(void)

{
  _DAT_10021f24 = RegisterWindowMessageA(s_PM_SAVE_TIFF_1001eaa0);
  return;
}


// ---- FUN_100066a0 @ 100066a0

void FUN_100066a0(void)

{
  FUN_100066aa();
  return;
}


// ---- FUN_100066aa @ 100066aa

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100066aa(void)

{
  _DAT_10021f20 = RegisterWindowMessageA(s_PM_LOAD_TIFF_1001eab0);
  return;
}


// ---- FUN_100066bf @ 100066bf

void FUN_100066bf(void)

{
  FUN_100066c9();
  return;
}


// ---- FUN_100066c9 @ 100066c9

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100066c9(void)

{
  _DAT_10021f1c = RegisterWindowMessageA(s_PM_TIFF_TO_BMP_1001eac0);
  return;
}


// ---- FUN_100066de @ 100066de

void FUN_100066de(void)

{
  FUN_100066e8();
  return;
}


// ---- FUN_100066e8 @ 100066e8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100066e8(void)

{
  _DAT_10021f18 = RegisterWindowMessageA(s_PM_IMAGE_TO_FILE_1001ead0);
  return;
}


// ---- FUN_100066fd @ 100066fd

void FUN_100066fd(void)

{
  FUN_10006707();
  return;
}


// ---- FUN_10006707 @ 10006707

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006707(void)

{
  _DAT_10021f14 = RegisterWindowMessageA(s_PM_RAW_IMAGE_TO_FILE_1001eae4);
  return;
}


// ---- FUN_1000671c @ 1000671c

void FUN_1000671c(void)

{
  FUN_10006726();
  return;
}


// ---- FUN_10006726 @ 10006726

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006726(void)

{
  _DAT_10021f10 = RegisterWindowMessageA(s_PM_IMAGE_FROM_FILE_1001eafc);
  return;
}


// ---- FUN_1000673b @ 1000673b

void FUN_1000673b(void)

{
  FUN_10006745();
  return;
}


// ---- FUN_10006745 @ 10006745

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006745(void)

{
  _DAT_10021f0c = RegisterWindowMessageA(s_PM_GET_TIFF_HEADER_1001eb10);
  return;
}


// ---- FUN_1000675a @ 1000675a

void FUN_1000675a(void)

{
  FUN_10006764();
  return;
}


// ---- FUN_10006764 @ 10006764

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006764(void)

{
  _DAT_10021f08 = RegisterWindowMessageA(s_PM_GET_HISTOGRAM_DATA_1001eb24);
  return;
}


// ---- FUN_10006779 @ 10006779

void FUN_10006779(void)

{
  FUN_10006783();
  return;
}


// ---- FUN_10006783 @ 10006783

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006783(void)

{
  _DAT_10021f04 = RegisterWindowMessageA(s_PM_GET_LINE_DATA_1001eb3c);
  return;
}


// ---- FUN_10006798 @ 10006798

void FUN_10006798(void)

{
  FUN_100067a2();
  return;
}


// ---- FUN_100067a2 @ 100067a2

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100067a2(void)

{
  _DAT_10021f00 = RegisterWindowMessageA(s_LEO_D_SET_DEF_PRINT_SCALE_1001eb50);
  return;
}


// ---- FUN_100067b7 @ 100067b7

void FUN_100067b7(void)

{
  FUN_100067c1();
  return;
}


// ---- FUN_100067c1 @ 100067c1

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100067c1(void)

{
  _DAT_10021efc = RegisterWindowMessageA(s_PM_PRINT_IMAGE_1001eb6c);
  return;
}


// ---- FUN_100067d6 @ 100067d6

void FUN_100067d6(void)

{
  FUN_100067e0();
  return;
}


// ---- FUN_100067e0 @ 100067e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100067e0(void)

{
  _DAT_10021ef8 = RegisterWindowMessageA(s_PM_CLIP_COPY_1001eb7c);
  return;
}


// ---- FUN_100067f5 @ 100067f5

void FUN_100067f5(void)

{
  FUN_100067ff();
  return;
}


// ---- FUN_100067ff @ 100067ff

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100067ff(void)

{
  _DAT_10021ef4 = RegisterWindowMessageA(s_PM_CLIP_INFO_1001eb8c);
  return;
}


// ---- FUN_10006814 @ 10006814

void FUN_10006814(void)

{
  FUN_1000681e();
  return;
}


// ---- FUN_1000681e @ 1000681e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000681e(void)

{
  _DAT_10021ef0 = RegisterWindowMessageA(s_PM_CLIP_PASTE_1001eb9c);
  return;
}


// ---- FUN_10006833 @ 10006833

void FUN_10006833(void)

{
  FUN_1000683d();
  return;
}


// ---- FUN_1000683d @ 1000683d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000683d(void)

{
  _DAT_10021eec = RegisterWindowMessageA(s_PM_HRRU_PHOTO_1001ebac);
  return;
}


// ---- FUN_10006852 @ 10006852

void FUN_10006852(void)

{
  FUN_1000685c();
  return;
}


// ---- FUN_1000685c @ 1000685c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000685c(void)

{
  _DAT_10021ee8 = RegisterWindowMessageA(s_PM_WOBBLE_REGISTER_1001ebbc);
  return;
}


// ---- FUN_10006871 @ 10006871

void FUN_10006871(void)

{
  FUN_1000687b();
  return;
}


// ---- FUN_1000687b @ 1000687b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000687b(void)

{
  _DAT_10021ee4 = RegisterWindowMessageA(s_PM_SHOW_FOCUS_DLG_1001ebd0);
  return;
}


// ---- FUN_10006890 @ 10006890

void FUN_10006890(void)

{
  FUN_1000689a();
  return;
}


// ---- FUN_1000689a @ 1000689a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000689a(void)

{
  _DAT_10021ee0 = RegisterWindowMessageA(s_PM_SHOW_APER_DLG_1001ebe4);
  return;
}


// ---- FUN_100068af @ 100068af

void FUN_100068af(void)

{
  FUN_100068b9();
  return;
}


// ---- FUN_100068b9 @ 100068b9

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100068b9(void)

{
  _DAT_10021edc = RegisterWindowMessageA(s_PM_SHOW_GUN_DLG_1001ebf8);
  return;
}


// ---- FUN_100068ce @ 100068ce

void FUN_100068ce(void)

{
  FUN_100068d8();
  return;
}


// ---- FUN_100068d8 @ 100068d8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100068d8(void)

{
  _DAT_10021ed8 = RegisterWindowMessageA(s_PM_QUERY_CLOSE_SERVER_1001ec08);
  return;
}


// ---- FUN_100068ed @ 100068ed

void FUN_100068ed(void)

{
  FUN_100068f7();
  return;
}


// ---- FUN_100068f7 @ 100068f7

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100068f7(void)

{
  _DAT_10021ed4 = RegisterWindowMessageA(s_PM_WOBBLE_POPUP_INHIBIT_1001ec20);
  return;
}


// ---- FUN_1000690c @ 1000690c

void FUN_1000690c(void)

{
  FUN_10006916();
  return;
}


// ---- FUN_10006916 @ 10006916

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006916(void)

{
  _DAT_10021ed0 = RegisterWindowMessageA(s_PM_GET_REGISTRATION_DATA_1001ec38);
  return;
}


// ---- FUN_1000692b @ 1000692b

void FUN_1000692b(void)

{
  FUN_10006935();
  return;
}


// ---- FUN_10006935 @ 10006935

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006935(void)

{
  _DAT_10021ecc = RegisterWindowMessageA(s_PM_SET_REGISTRATION_DATA_1001ec54);
  return;
}


// ---- FUN_1000694a @ 1000694a

void FUN_1000694a(void)

{
  FUN_10006954();
  return;
}


// ---- FUN_10006954 @ 10006954

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006954(void)

{
  _DAT_10021ec8 = RegisterWindowMessageA(s_PM_DELTA_SAMPLE_GOTO_1001ec70);
  return;
}


// ---- FUN_10006969 @ 10006969

void FUN_10006969(void)

{
  FUN_10006973();
  return;
}


// ---- FUN_10006973 @ 10006973

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006973(void)

{
  _DAT_10021ec4 = RegisterWindowMessageA(s_PM_STAGE_LABEL_1001ec88);
  return;
}


// ---- FUN_10006988 @ 10006988

void FUN_10006988(void)

{
  FUN_10006992();
  return;
}


// ---- FUN_10006992 @ 10006992

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006992(void)

{
  _DAT_10021ec0 = RegisterWindowMessageA(s_PM_STAGE_POINT_GOTO_1001ec98);
  return;
}


// ---- FUN_100069a7 @ 100069a7

void FUN_100069a7(void)

{
  FUN_100069b1();
  return;
}


// ---- FUN_100069b1 @ 100069b1

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100069b1(void)

{
  _DAT_10021ebc = RegisterWindowMessageA(s_PM_STAGE_POINT_GET_COUNT_1001ecac);
  return;
}


// ---- FUN_100069c6 @ 100069c6

void FUN_100069c6(void)

{
  FUN_100069d0();
  return;
}


// ---- FUN_100069d0 @ 100069d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100069d0(void)

{
  _DAT_10021eb8 = RegisterWindowMessageA(s_PM_STAGE_POINT_GET_INDEX_1001ecc8);
  return;
}


// ---- FUN_100069e5 @ 100069e5

void FUN_100069e5(void)

{
  FUN_100069ef();
  return;
}


// ---- FUN_100069ef @ 100069ef

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100069ef(void)

{
  _DAT_10021eb4 = RegisterWindowMessageA(s_PM_STAGE_POINT_GET_DATA_1001ece4);
  return;
}


// ---- FUN_10006a04 @ 10006a04

void FUN_10006a04(void)

{
  FUN_10006a0e();
  return;
}


// ---- FUN_10006a0e @ 10006a0e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006a0e(void)

{
  _DAT_10021eb0 = RegisterWindowMessageA(s_PM_STAGE_POINT_SET_DATA_1001ecfc);
  return;
}


// ---- FUN_10006a23 @ 10006a23

void FUN_10006a23(void)

{
  FUN_10006a2d();
  return;
}


// ---- FUN_10006a2d @ 10006a2d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006a2d(void)

{
  _DAT_10021eac = RegisterWindowMessageA(s_PM_STAGE_POINTS_LIST_CHANGED_1001ed14);
  return;
}


// ---- FUN_10006a42 @ 10006a42

void FUN_10006a42(void)

{
  FUN_10006a4c();
  return;
}


// ---- FUN_10006a4c @ 10006a4c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006a4c(void)

{
  _DAT_10021ea8 = RegisterWindowMessageA(s_PM_STAGE_POINT_GET_FLAGS_1001ed34);
  return;
}


// ---- FUN_10006a61 @ 10006a61

void FUN_10006a61(void)

{
  FUN_10006a6b();
  return;
}


// ---- FUN_10006a6b @ 10006a6b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006a6b(void)

{
  _DAT_10021ea4 = RegisterWindowMessageA(s_PM_STAGE_POINT_SET_FLAGS_1001ed50);
  return;
}


// ---- FUN_10006a80 @ 10006a80

void FUN_10006a80(void)

{
  FUN_10006a8a();
  return;
}


// ---- FUN_10006a8a @ 10006a8a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006a8a(void)

{
  _DAT_10021ea0 = RegisterWindowMessageA(s_PM_STAGE_MODE_IS_REGISTERED_1001ed6c);
  return;
}


// ---- FUN_10006a9f @ 10006a9f

void FUN_10006a9f(void)

{
  FUN_10006aa9();
  return;
}


// ---- FUN_10006aa9 @ 10006aa9

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006aa9(void)

{
  _DAT_10021e9c = RegisterWindowMessageA(s_PM_STAGE_POINT_GET_MODE_1001ed88);
  return;
}


// ---- FUN_10006abe @ 10006abe

void FUN_10006abe(void)

{
  FUN_10006ac8();
  return;
}


// ---- FUN_10006ac8 @ 10006ac8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006ac8(void)

{
  _DAT_10021e98 = RegisterWindowMessageA(s_PM_STAGE_SET_MAP_MODE_1001eda0);
  return;
}


// ---- FUN_10006add @ 10006add

void FUN_10006add(void)

{
  FUN_10006ae7();
  return;
}


// ---- FUN_10006ae7 @ 10006ae7

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006ae7(void)

{
  _DAT_10021e94 = RegisterWindowMessageA(s_PM_STAGE_TYPE_DATA_CHANGED_1001edb8);
  return;
}


// ---- FUN_10006afc @ 10006afc

void FUN_10006afc(void)

{
  FUN_10006b06();
  return;
}


// ---- FUN_10006b06 @ 10006b06

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006b06(void)

{
  _DAT_10021e90 = RegisterWindowMessageA(s_PM_GET_STAGE_DEFAULT_ROT_CENTRE_1001edd4);
  return;
}


// ---- FUN_10006b1b @ 10006b1b

void FUN_10006b1b(void)

{
  FUN_10006b25();
  return;
}


// ---- FUN_10006b25 @ 10006b25

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006b25(void)

{
  _DAT_10021e8c = RegisterWindowMessageA(s_PM_SRV16_MISC_FUNC_1001edf4);
  return;
}


// ---- FUN_10006b3a @ 10006b3a

void FUN_10006b3a(void)

{
  FUN_10006b44();
  return;
}


// ---- FUN_10006b44 @ 10006b44

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006b44(void)

{
  _DAT_10021e88 = RegisterWindowMessageA(s_PM_GET_KNOB_ASSIGNMENT_1001ee08);
  return;
}


// ---- FUN_10006b59 @ 10006b59

void FUN_10006b59(void)

{
  FUN_10006b63();
  return;
}


// ---- FUN_10006b63 @ 10006b63

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006b63(void)

{
  _DAT_10021e84 = RegisterWindowMessageA(s_PM_NAVMGR_REQUEST_1001ee20);
  return;
}


// ---- FUN_10006b78 @ 10006b78

void FUN_10006b78(void)

{
  FUN_10006b82();
  return;
}


// ---- FUN_10006b82 @ 10006b82

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006b82(void)

{
  _DAT_10021e80 = RegisterWindowMessageA(s_PM_SHOWHIDEDIALOGS_REQUEST_1001ee34);
  return;
}


// ---- FUN_10006b97 @ 10006b97

void FUN_10006b97(void)

{
  FUN_10006ba1();
  return;
}


// ---- FUN_10006ba1 @ 10006ba1

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006ba1(void)

{
  _DAT_10021e7c = RegisterWindowMessageA(s_PM_NAVMGR_DONE_1001ee50);
  return;
}


// ---- FUN_10006bb6 @ 10006bb6

void FUN_10006bb6(void)

{
  FUN_10006bc0();
  return;
}


// ---- FUN_10006bc0 @ 10006bc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006bc0(void)

{
  _DAT_10021e78 = RegisterWindowMessageA(s_LEO_HPAPP_MESSAGE_1001ee60);
  return;
}


// ---- FUN_10006bd5 @ 10006bd5

void FUN_10006bd5(void)

{
  FUN_10006bdf();
  return;
}


// ---- FUN_10006bdf @ 10006bdf

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006bdf(void)

{
  _DAT_10021e74 = RegisterWindowMessageA(s_PM_GET_HPAPP_PANEL_DATA_1001ee74);
  return;
}


// ---- FUN_10006bf4 @ 10006bf4

void FUN_10006bf4(void)

{
  FUN_10006bfe();
  return;
}


// ---- FUN_10006bfe @ 10006bfe

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006bfe(void)

{
  _DAT_10021e70 = RegisterWindowMessageA(s_PM_HPAPP_FUNC_1001ee8c);
  return;
}


// ---- FUN_10006c13 @ 10006c13

void FUN_10006c13(void)

{
  FUN_10006c1d();
  return;
}


// ---- FUN_10006c1d @ 10006c1d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006c1d(void)

{
  _DAT_10021e6c = RegisterWindowMessageA(s_PM_GET_CAL_COL_DATA_1001ee9c);
  return;
}


// ---- FUN_10006c32 @ 10006c32

void FUN_10006c32(void)

{
  FUN_10006c3c();
  return;
}


// ---- FUN_10006c3c @ 10006c3c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006c3c(void)

{
  _DAT_10021e68 = RegisterWindowMessageA(s_PM_CHANGE_IMAGE_DIRECTORY_1001eeb0);
  return;
}


// ---- FUN_10006c51 @ 10006c51

void FUN_10006c51(void)

{
  FUN_10006c5b();
  return;
}


// ---- FUN_10006c5b @ 10006c5b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006c5b(void)

{
  _DAT_10021e64 = RegisterWindowMessageA(s_PM_CHANGE_USER_DIRECTORY_1001eecc);
  return;
}


// ---- FUN_10006c70 @ 10006c70

void FUN_10006c70(void)

{
  FUN_10006c7a();
  return;
}


// ---- FUN_10006c7a @ 10006c7a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006c7a(void)

{
  _DAT_10021e60 = RegisterWindowMessageA(s_PM_TRACKERBALL_INIT_1001eee8);
  return;
}


// ---- FUN_10006c8f @ 10006c8f

void FUN_10006c8f(void)

{
  FUN_10006c99();
  return;
}


// ---- FUN_10006c99 @ 10006c99

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006c99(void)

{
  _DAT_10021e5c = RegisterWindowMessageA(s_PM_TRACKERBALL_SHOW_SETTINGS_1001eefc);
  return;
}


// ---- FUN_10006cae @ 10006cae

void FUN_10006cae(void)

{
  FUN_10006cb8();
  return;
}


// ---- FUN_10006cb8 @ 10006cb8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006cb8(void)

{
  _DAT_10021e58 = RegisterWindowMessageA(s_PM_TRACKERBALL_ARE_DIALOGS_HIDDE_1001ef1c);
  return;
}


// ---- FUN_10006ccd @ 10006ccd

void FUN_10006ccd(void)

{
  FUN_10006cd7();
  return;
}


// ---- FUN_10006cd7 @ 10006cd7

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006cd7(void)

{
  _DAT_10021e54 = RegisterWindowMessageA(s_PM_TRACKERBALL_ASSIGN_BUTTON_1001ef40);
  return;
}


// ---- FUN_10006cec @ 10006cec

void FUN_10006cec(void)

{
  FUN_10006cf6();
  return;
}


// ---- FUN_10006cf6 @ 10006cf6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006cf6(void)

{
  _DAT_10021e50 = RegisterWindowMessageA(s_PM_TRACKERBALL_GET_ASSIGNMENTS_1001ef60);
  return;
}


// ---- FUN_10006d0b @ 10006d0b

void FUN_10006d0b(void)

{
  FUN_10006d15();
  return;
}


// ---- FUN_10006d15 @ 10006d15

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006d15(void)

{
  _DAT_10021e4c = RegisterWindowMessageA(s_PM_TRACKERBALL_SELECT_BUTTON_1001ef80);
  return;
}


// ---- FUN_10006d2a @ 10006d2a

void FUN_10006d2a(void)

{
  FUN_10006d34();
  return;
}


// ---- FUN_10006d34 @ 10006d34

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006d34(void)

{
  _DAT_10021e48 = RegisterWindowMessageA(s_PM_TRACKERBALL_SELECT_BUTTON_1001efa0);
  return;
}


// ---- FUN_10006d49 @ 10006d49

void FUN_10006d49(void)

{
  FUN_10006d53();
  return;
}


// ---- FUN_10006d53 @ 10006d53

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006d53(void)

{
  _DAT_10021e44 = RegisterWindowMessageA(s_PM_TRACKERBALL_AXIS_SELECTED_1001efc0);
  return;
}


// ---- FUN_10006d68 @ 10006d68

void FUN_10006d68(void)

{
  FUN_10006d72();
  return;
}


// ---- FUN_10006d72 @ 10006d72

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006d72(void)

{
  _DAT_10021e40 = RegisterWindowMessageA(s_PM_2ND_IMAGE_DISPLAY_1001efe0);
  return;
}


// ---- FUN_10006d87 @ 10006d87

void FUN_10006d87(void)

{
  FUN_10006d91();
  return;
}


// ---- FUN_10006d91 @ 10006d91

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006d91(void)

{
  _DAT_10021e3c = RegisterWindowMessageA(s_PM_GET_2ND_IMAGE_DISPLAY_1001eff8);
  return;
}


// ---- FUN_10006da6 @ 10006da6

void FUN_10006da6(void)

{
  FUN_10006db0();
  return;
}


// ---- FUN_10006db0 @ 10006db0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006db0(void)

{
  _DAT_10021e38 = RegisterWindowMessageA(s_PM_NOTIFY_2ND_IMAGE_DISPLAY_1001f014);
  return;
}


// ---- FUN_10006dc5 @ 10006dc5

void FUN_10006dc5(void)

{
  FUN_10006dcf();
  return;
}


// ---- FUN_10006dcf @ 10006dcf

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006dcf(void)

{
  _DAT_10021e34 = RegisterWindowMessageA(s_PM_2ND_IMAGE_SELECT_1001f030);
  return;
}


// ---- FUN_10006de4 @ 10006de4

void FUN_10006de4(void)

{
  FUN_10006dee();
  return;
}


// ---- FUN_10006dee @ 10006dee

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006dee(void)

{
  _DAT_10021e30 = RegisterWindowMessageA(s_PM_SELECT_USER_AREA_1001f044);
  return;
}


// ---- FUN_10006e03 @ 10006e03

void FUN_10006e03(void)

{
  FUN_10006e0d();
  return;
}


// ---- FUN_10006e0d @ 10006e0d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006e0d(void)

{
  _DAT_10021e2c = RegisterWindowMessageA(s_PM_READ_USER_AREA_1001f058);
  return;
}


// ---- FUN_10006e22 @ 10006e22

void FUN_10006e22(void)

{
  FUN_10006e2c();
  return;
}


// ---- FUN_10006e2c @ 10006e2c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006e2c(void)

{
  _DAT_10021e28 = RegisterWindowMessageA(s_PM_CREATE_USER_AREA_1001f06c);
  return;
}


// ---- FUN_10006e41 @ 10006e41

void FUN_10006e41(void)

{
  FUN_10006e4b();
  return;
}


// ---- FUN_10006e4b @ 10006e4b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006e4b(void)

{
  _DAT_10021e24 = RegisterWindowMessageA(s_PM_DELETE_USER_AREA_1001f080);
  return;
}


// ---- FUN_10006e60 @ 10006e60

void FUN_10006e60(void)

{
  FUN_10006e6a();
  return;
}


// ---- FUN_10006e6a @ 10006e6a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006e6a(void)

{
  _DAT_10021e20 = RegisterWindowMessageA(s_PM_LEO_SERVER_EVENT_1001f094);
  return;
}


// ---- FUN_10006e7f @ 10006e7f

void FUN_10006e7f(void)

{
  FUN_10006e89();
  return;
}


// ---- FUN_10006e89 @ 10006e89

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006e89(void)

{
  _DAT_10021e1c = RegisterWindowMessageA(s_PM_GET_MEASURE_UNITS_1001f0a8);
  return;
}


// ---- FUN_10006e9e @ 10006e9e

void FUN_10006e9e(void)

{
  FUN_10006ea8();
  return;
}


// ---- FUN_10006ea8 @ 10006ea8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006ea8(void)

{
  _DAT_10021e18 = RegisterWindowMessageA(s_PM_SET_MEASURE_UNITS_1001f0c0);
  return;
}


// ---- FUN_10006ebd @ 10006ebd

void FUN_10006ebd(void)

{
  FUN_10006ec7();
  return;
}


// ---- FUN_10006ec7 @ 10006ec7

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006ec7(void)

{
  _DAT_10021e14 = RegisterWindowMessageA(s_PM_GET_PRESET_COUNT_1001f0d8);
  return;
}


// ---- FUN_10006edc @ 10006edc

void FUN_10006edc(void)

{
  FUN_10006ee6();
  return;
}


// ---- FUN_10006ee6 @ 10006ee6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006ee6(void)

{
  _DAT_10021e10 = RegisterWindowMessageA(s_PM_SET_PRESET_INDEX_1001f0ec);
  return;
}


// ---- FUN_10006efb @ 10006efb

void FUN_10006efb(void)

{
  FUN_10006f05();
  return;
}


// ---- FUN_10006f05 @ 10006f05

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006f05(void)

{
  _DAT_10021e0c = RegisterWindowMessageA(s_PM_GET_PRESET_LABEL_1001f100);
  return;
}


// ---- FUN_10006f1a @ 10006f1a

void FUN_10006f1a(void)

{
  FUN_10006f24();
  return;
}


// ---- FUN_10006f24 @ 10006f24

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006f24(void)

{
  _DAT_10021e08 = RegisterWindowMessageA(s_PM_GENERAL_FUNCTION_1001f114);
  return;
}


// ---- CreateObject @ 10006f39

/* Library Function - Multiple Matches With Same Base Name
    public: static class CNoTrackObject * __stdcall CProcessLocal<class
   _AFX_BASE_MODULE_STATE>::CreateObject(void)
    public: static class CNoTrackObject * __stdcall CThreadLocal<class
   AFX_MODULE_THREAD_STATE>::CreateObject(void)
    public: static class CNoTrackObject * __stdcall CThreadLocal<class
   _AFX_THREAD_STATE>::CreateObject(void)
    public: static class CObject * __stdcall CMDIChildWnd::CreateObject(void)
     6 names - too many to list
   
   Library: Visual Studio 2003 Debug */

COleControl * CreateObject(void)

{
  COleControl *pCVar1;
  COleControl *local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1001725a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pCVar1 = (COleControl *)FUN_1000cbb0(0x2d8);
  local_8 = 0;
  if (pCVar1 == (COleControl *)0x0) {
    local_1c = (COleControl *)0x0;
  }
  else {
    local_1c = FUN_10007271(pCVar1);
  }
  ExceptionList = local_10;
  return local_1c;
}


// ---- FUN_10006fa0 @ 10006fa0

undefined * FUN_10006fa0(void)

{
  return classCOleControl_exref;
}


// ---- FUN_10006faa @ 10006faa

undefined ** FUN_10006faa(void)

{
  return &PTR_s_CParameterManagerCtrl_10018a60;
}


// ---- FUN_10006fba @ 10006fba

undefined * FUN_10006fba(void)

{
  return messageMap_exref;
}


// ---- FUN_10006fc4 @ 10006fc4

undefined ** FUN_10006fc4(void)

{
  return &PTR_FUN_10018a78;
}


// ---- FUN_10006fd4 @ 10006fd4

undefined * FUN_10006fd4(void)

{
  return dispatchMap_exref;
}


// ---- FUN_10006fde @ 10006fde

undefined ** FUN_10006fde(void)

{
  return &PTR_FUN_10018c00;
}


// ---- FUN_10006fee @ 10006fee

undefined * FUN_10006fee(void)

{
  return &DAT_100221e8;
}


// ---- FUN_10006ffe @ 10006ffe

void FUN_10006ffe(void)

{
  FUN_10007008();
  return;
}


// ---- FUN_10007008 @ 10007008

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10007008(void)

{
  _DAT_100221e8 = eventMap_exref;
  _DAT_100221ec = &DAT_10019a90;
  _DAT_100221f0 = &DAT_1001dcc0;
  return;
}


// ---- FUN_1000702b @ 1000702b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1000702b(int *param_1)

{
  if (DAT_1001dcc4 == -1) {
    DAT_1001dcc4 = 1;
    _DAT_10021df8 = DAT_10019e98;
    _DAT_10021dfc = DAT_10019e9c;
    _DAT_10021e00 = DAT_10019ea0;
    _DAT_10021e04 = DAT_10019ea4;
  }
  *param_1 = DAT_1001dcc4;
  return &DAT_10021df8;
}


// ---- FUN_100070af @ 100070af

void FUN_100070af(void)

{
  FUN_100070be();
  FUN_100070de();
  return;
}


// ---- FUN_100070be @ 100070be

void FUN_100070be(void)

{
  FUN_1000cbd0(&DAT_10021da8,(_GUID *)&DAT_10019b68,
               (CRuntimeClass *)&PTR_s_CParameterManagerCtrl_10018a60,0,"PARAMMGR.ParamMgrCtrl.1");
  return;
}


// ---- FUN_100070de @ 100070de

void FUN_100070de(void)

{
  FUN_10016dde(FUN_100070f0);
  return;
}


// ---- FUN_100070f0 @ 100070f0

void FUN_100070f0(void)

{
  if ((DAT_10021da0 & 1) == 0) {
    DAT_10021da0 = DAT_10021da0 | 1;
    FUN_1000cc40((COleObjectFactory *)&DAT_10021da8);
  }
  return;
}


// ---- FUN_1000711c @ 1000711c

undefined4 FUN_1000711c(undefined4 *param_1)

{
  *param_1 = DAT_10019b68;
  param_1[1] = DAT_10019b6c;
  param_1[2] = DAT_10019b70;
  param_1[3] = DAT_10019b74;
  return 0;
}


// ---- FUN_10007151 @ 10007151

undefined4 FUN_10007151(void)

{
  return 1;
}


// ---- FUN_10007161 @ 10007161

void FUN_10007161(LCID param_1,ITypeLib **param_2)

{
  LoadRegTypeLib((GUID *)&DAT_10018900,DAT_10018910,DAT_10018912,param_1,param_2);
  return;
}


// ---- FUN_10007190 @ 10007190

CTypeLibCache * __fastcall FUN_10007190(int param_1)

{
  CTypeLibCache *pCVar1;
  AFX_MAINTAIN_STATE2 local_18 [8];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1001726d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2(local_18,*(AFX_MODULE_STATE **)(param_1 + 0x1c));
  local_8 = 0;
  pCVar1 = AfxGetTypeLibCache((_GUID *)&DAT_10018900);
  local_8 = 0xffffffff;
  FUN_10005130((undefined4 *)local_18);
  ExceptionList = local_10;
  return pCVar1;
}


// ---- FUN_100071f1 @ 100071f1

undefined4 FUN_100071f1(void)

{
  return 1;
}


// ---- FUN_10007201 @ 10007201

undefined4 FUN_10007201(void)

{
  return 0x20591;
}


// ---- FUN_10007211 @ 10007211

void __thiscall FUN_10007211(void *this,int param_1)

{
  HINSTANCE__ *pHVar1;
  _GUID *p_Var2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  _GUID *p_Var8;
  ushort uVar9;
  ushort uVar10;
  
  if (param_1 == 0) {
    AfxOleUnregisterClass((_GUID *)((int)this + 0x28),*(char **)((int)this + 0x40));
  }
  else {
    p_Var8 = (_GUID *)&DAT_10018900;
    uVar7 = 0x20591;
    iVar6 = 0;
    uVar5 = 1;
    uVar4 = 1;
    pcVar3 = *(char **)((int)this + 0x40);
    p_Var2 = (_GUID *)((int)this + 0x28);
    uVar9 = DAT_10018910;
    uVar10 = DAT_10018912;
    pHVar1 = (HINSTANCE__ *)FUN_10005120();
    AfxOleRegisterControlClass(pHVar1,p_Var2,pcVar3,uVar4,uVar5,iVar6,uVar7,p_Var8,uVar9,uVar10);
  }
  return;
}


// ---- FUN_10007271 @ 10007271

COleControl * __fastcall FUN_10007271(COleControl *param_1)

{
  undefined1 local_30 [4];
  undefined4 local_2c;
  undefined4 local_28;
  CGdiObject local_18 [8];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_100172c5;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  COleControl::COleControl(param_1);
  local_8 = 0;
  CString::CString((CString *)(param_1 + 0x1d4));
  local_8._0_1_ = 1;
  CString::CString((CString *)(param_1 + 0x1dc));
  local_8._0_1_ = 2;
  CString::CString((CString *)(param_1 + 0x1e0));
  local_8._0_1_ = 3;
  FUN_10004290((undefined4 *)(param_1 + 0x208));
  local_8._0_1_ = 4;
  *(undefined ***)param_1 = &PTR_FUN_10019c0c;
  COleControl::InitializeIIDs(param_1,(_GUID *)&DAT_10019b78,(_GUID *)&DAT_10019b88);
  FUN_1000cf30(local_18);
  local_8._0_1_ = 5;
  FUN_1000d060(local_18,0xc9);
  FUN_1000cec0(local_18,0x18,local_30);
  *(undefined4 *)(param_1 + 0x1cc) = local_2c;
  *(undefined4 *)(param_1 + 0x1d0) = local_28;
  COleControl::SetInitialSize(param_1,*(int *)(param_1 + 0x1cc),*(int *)(param_1 + 0x1d0));
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  *(undefined4 *)(param_1 + 0x1c8) = 0;
  *(undefined4 *)(param_1 + 0x1c4) = 0;
  CString::operator=((CString *)(param_1 + 0x1d4),&DAT_100221f4);
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  *(undefined4 *)(param_1 + 0x1e4) = 0;
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  *(undefined4 *)(param_1 + 0x1ec) = 0;
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  *(undefined4 *)(param_1 + 500) = 0;
  *(undefined4 *)(param_1 + 0x1f8) = 0;
  *(undefined4 *)(param_1 + 0x1fc) = 1;
  *(undefined4 *)(param_1 + 0x200) = 4;
  *(undefined4 *)(param_1 + 0x27c) = 0;
  *(undefined4 *)(param_1 + 0x280) = 0;
  *(undefined4 *)(param_1 + 0x284) = 0;
  *(undefined4 *)(param_1 + 0x288) = 0;
  *(undefined4 *)(param_1 + 0x28c) = 1;
  *(undefined4 *)(param_1 + 0x290) = 0;
  CString::operator=((CString *)(param_1 + 0x1dc),&DAT_100221f8);
  CString::operator=((CString *)(param_1 + 0x1e0),&DAT_100221fc);
  *(undefined4 *)(param_1 + 0x294) = 0;
  *(undefined4 *)(param_1 + 0x298) = 0;
  *(undefined4 *)(param_1 + 0x29c) = 0;
  *(undefined4 *)(param_1 + 0x2a0) = 0;
  *(undefined4 *)(param_1 + 0x2a4) = 0;
  *(undefined4 *)(param_1 + 0x2a8) = 0;
  *(undefined4 *)(param_1 + 0x2ac) = 0;
  *(undefined4 *)(param_1 + 0x2b0) = 0;
  *(undefined4 *)(param_1 + 0x2b4) = 0;
  *(undefined4 *)(param_1 + 0x2b8) = 0;
  *(undefined4 *)(param_1 + 700) = 0;
  *(undefined4 *)(param_1 + 0x2c4) = 0;
  *(undefined4 *)(param_1 + 0x204) = 0;
  *(undefined4 *)(param_1 + 0x2d0) = 0;
  *(undefined4 *)(param_1 + 0x2c8) = 0;
  *(undefined4 *)(param_1 + 0x2cc) = 0;
  local_8 = CONCAT31(local_8._1_3_,4);
  FUN_1000d040(local_18);
  ExceptionList = local_10;
  return param_1;
}


// ---- FUN_10007573 @ 10007573

void __fastcall FUN_10007573(COleControl *param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10017314;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined ***)param_1 = &PTR_FUN_10019c0c;
  local_8 = 4;
  if (*(int *)(param_1 + 0x27c) != 0) {
    (**(code **)(**(int **)(param_1 + 0x27c) + 0x60))();
  }
  *(undefined4 *)(param_1 + 0x27c) = 0;
  FUN_1000c121((int)param_1);
  iVar1 = FUN_1000cc90((int)param_1);
  if ((iVar1 != 0) && (*(int *)(param_1 + 0x2d0) == 0)) {
    FUN_10010c23(*(int *)(param_1 + 0x1c0));
  }
  if (*(int **)(param_1 + 0x1c0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x1c0) + 4))(1);
  }
  local_8._0_1_ = 3;
  FUN_1000433b((undefined4 *)(param_1 + 0x208));
  local_8._0_1_ = 2;
  CString::~CString((CString *)(param_1 + 0x1e0));
  local_8._0_1_ = 1;
  CString::~CString((CString *)(param_1 + 0x1dc));
  local_8 = (uint)local_8._1_3_ << 8;
  CString::~CString((CString *)(param_1 + 0x1d4));
  local_8 = 0xffffffff;
  COleControl::~COleControl(param_1);
  ExceptionList = local_10;
  return;
}


// ---- FUN_10007695 @ 10007695

void __thiscall FUN_10007695(void *this,CDC *param_1,CRect *param_2)

{
  undefined1 local_44 [24];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  CGdiObject local_1c [4];
  HBITMAP__ *local_18;
  CPictureHolder local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10017330;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_1000cf30(local_1c);
  local_8 = 0;
  CPictureHolder::CPictureHolder(local_14);
  local_8._0_1_ = 1;
  FUN_1000ce90(&local_2c);
  FUN_1000d060(local_1c,0xc9);
  FUN_1000cec0(local_1c,0x18,local_44);
  local_2c = 0;
  local_28 = 0;
  local_24 = *(undefined4 *)((int)this + 0x1cc);
  local_20 = *(undefined4 *)((int)this + 0x1d0);
  CPictureHolder::CreateFromBitmap(local_14,local_18,(HPALETTE__ *)0x0,0);
  CPictureHolder::Render(local_14,param_1,param_2,(CRect *)&local_2c);
  local_8 = (uint)local_8._1_3_ << 8;
  CPictureHolder::~CPictureHolder(local_14);
  local_8 = 0xffffffff;
  FUN_1000d040(local_1c);
  ExceptionList = local_10;
  return;
}


// ---- FUN_10007765 @ 10007765

undefined4 FUN_10007765(void)

{
  return 0;
}


// ---- FUN_10007774 @ 10007774

void FUN_10007774(void)

{
  return;
}


// ---- FUN_10007781 @ 10007781

void __thiscall FUN_10007781(void *this,CPropExchange *param_1)

{
  COleControl::ExchangeVersion(this,param_1,CONCAT22(DAT_10018910,DAT_10018912),1);
  COleControl::DoPropExchange(this,param_1);
  return;
}


// ---- FUN_100077bf @ 100077bf

void __fastcall FUN_100077bf(COleControl *param_1)

{
  COleControl::OnResetState(param_1);
  return;
}


// ---- FUN_100077d2 @ 100077d2

void __fastcall FUN_100077d2(COleControl *param_1)

{
  int iVar1;
  CDialog local_78 [96];
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10017343;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_10001000(local_78,(CWnd *)0x0);
  local_8 = 0;
  iVar1 = COleControl::AmbientUserMode(param_1);
  local_18 = (uint)(iVar1 != 0);
  COleControl::PreModalDialog(param_1,(HWND__ *)0x0);
  CDialog::DoModal(local_78);
  COleControl::PostModalDialog(param_1,(HWND__ *)0x0);
  local_8 = 0xffffffff;
  FUN_10001130(local_78);
  ExceptionList = local_10;
  return;
}


// ---- FUN_1000784b @ 1000784b

void __fastcall FUN_1000784b(COleControl *param_1)

{
  COleControl::RecreateControlWindow(param_1);
  return;
}


// ---- OnCreate @ 1000785e

/* Library Function - Multiple Matches With Same Base Name
    protected: int __thiscall CMFCAutoHideBar::OnCreate(struct tagCREATESTRUCTA *)
    protected: int __thiscall CMFCAutoHideBar::OnCreate(struct tagCREATESTRUCTW *)
   
   Library: Visual Studio 2010 Debug */

undefined4 __thiscall OnCreate(void *this,tagCREATESTRUCTA *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = COleControl::OnCreate(this,param_1);
  if (iVar1 == -1) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


// ---- FUN_10007883 @ 10007883

undefined4 __thiscall FUN_10007883(void *this,char *param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  WPARAM WVar4;
  undefined4 uVar5;
  char *pcVar6;
  char *pcVar7;
  int *local_2c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10017357;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar2 = FUN_1000cc90((int)this);
  if (iVar2 == 0) {
    puVar3 = (undefined4 *)FUN_1000cbb0(0x20);
    local_8 = 0;
    if (puVar3 == (undefined4 *)0x0) {
      local_2c = (int *)0x0;
    }
    else {
      local_2c = FUN_10010967(puVar3);
    }
    local_8 = 0xffffffff;
    bVar1 = FUN_1000ccb0((void *)((int)this + 0x1dc),&DAT_10022200);
    if (bVar1) {
      WVar4 = FUN_1000cd10((int)this);
      uVar5 = FUN_10010c57(local_2c,WVar4,param_1);
      *(undefined4 *)((int)this + 0x1d8) = uVar5;
    }
    else {
      pcVar6 = (char *)FUN_100026c0((undefined4 *)((int)this + 0x1e0));
      pcVar7 = (char *)FUN_100026c0((undefined4 *)((int)this + 0x1dc));
      WVar4 = FUN_1000cd10((int)this);
      uVar5 = FUN_10010ce7(local_2c,WVar4,param_1,pcVar7,pcVar6);
      *(undefined4 *)((int)this + 0x1d8) = uVar5;
    }
    if (local_2c != (int *)0x0) {
      (**(code **)(*local_2c + 4))(1);
    }
    uVar5 = *(undefined4 *)((int)this + 0x1d8);
  }
  else {
    uVar5 = 0;
  }
  ExceptionList = local_10;
  return uVar5;
}


// ---- FUN_100079b0 @ 100079b0

void __thiscall FUN_100079b0(void *this,WPARAM param_1,UINT *param_2)

{
  FUN_1000d190(this,*param_2,param_1,(LPARAM)param_2);
  return;
}


// ---- FUN_100079db @ 100079db

undefined4 FUN_100079db(void)

{
  return 1;
}


// ---- FUN_100079ed @ 100079ed

/* WARNING: Removing unreachable block (ram,0x10007a1d) */

undefined4 __thiscall FUN_100079ed(void *this,int param_1)

{
  undefined4 uVar1;
  void *this_00;
  undefined4 *local_24;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1001736b;
  local_10 = ExceptionList;
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    ExceptionList = &local_10;
    this_00 = (void *)FUN_1000cbb0(0x20);
    local_8 = 0;
    if (this_00 == (void *)0x0) {
      local_24 = (undefined4 *)0x0;
    }
    else {
      uVar1 = FUN_1000cd10((int)this);
      local_24 = FUN_100109f7(this_00,param_1,uVar1);
    }
    *(undefined4 **)((int)this + 0x1c0) = local_24;
    if (*(int *)((int)this + 0x1c0) == 0) {
      uVar1 = 0;
    }
    else {
      *(int *)((int)this + 0x1c4) = param_1;
      *(undefined4 *)((int)this + 0x1c8) = 1;
      uVar1 = 1;
    }
  }
  ExceptionList = local_10;
  return uVar1;
}


// ---- FUN_10007ad3 @ 10007ad3

/* WARNING: Removing unreachable block (ram,0x10007aee) */

undefined4 __fastcall FUN_10007ad3(COleControl *param_1)

{
  FUN_1000cd40(param_1);
  return 1;
}


// ---- FUN_10007b11 @ 10007b11

undefined4 __thiscall FUN_10007b11(void *this,COleControl *param_1)

{
  FUN_1000cd60(this,param_1);
  return 1;
}


// ---- FUN_10007b33 @ 10007b33

/* WARNING: Removing unreachable block (ram,0x10007b4e) */

undefined4 __fastcall FUN_10007b33(COleControl *param_1)

{
  FUN_1000cd90(param_1);
  return 1;
}


// ---- FUN_10007b71 @ 10007b71

/* WARNING: Removing unreachable block (ram,0x10007b8c) */

undefined4 __fastcall FUN_10007b71(COleControl *param_1)

{
  FUN_1000cdb0(param_1);
  return 1;
}


// ---- FUN_10007baf @ 10007baf

/* WARNING: Removing unreachable block (ram,0x10007bca) */

undefined4 __fastcall FUN_10007baf(COleControl *param_1)

{
  FUN_1000cdd0(param_1);
  return 1;
}


// ---- FUN_10007bed @ 10007bed

/* WARNING: Removing unreachable block (ram,0x10007c1d) */

undefined4 __thiscall FUN_10007bed(void *this,undefined4 param_1,int param_2)

{
  COleControl *pCVar1;
  CString local_2c [4];
  CString local_28 [4];
  CString local_24 [4];
  char *local_20;
  undefined4 local_1c;
  int local_18;
  CString local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10017399;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  CString::CString(local_14,&DAT_10022204);
  local_8 = 0;
  CString::CString(local_28,&DAT_10022208);
  local_8._0_1_ = 1;
  CString::CString(local_2c,&DAT_1002220c);
  local_8._0_1_ = 2;
  CString::CString(local_24,&DAT_10022210);
  local_8._0_1_ = 3;
  local_1c = 0;
  local_18 = param_2;
  local_20 = *(char **)(param_2 + 8);
  CString::operator=(local_14,local_20);
  CString::operator=(local_28,local_20 + 0x15e);
  CString::operator=(local_2c,local_20 + 700);
  CString::operator=(local_24,local_20 + 0x41a);
  local_1c = *(undefined4 *)(local_20 + 0x578);
  FUN_100026c0((undefined4 *)local_24);
  FUN_100026c0((undefined4 *)local_2c);
  FUN_100026c0((undefined4 *)local_28);
  pCVar1 = (COleControl *)FUN_100026c0((undefined4 *)local_14);
  FUN_1000cdf0(this,pCVar1);
  local_8._0_1_ = 2;
  CString::~CString(local_24);
  local_8._0_1_ = 1;
  CString::~CString(local_2c);
  local_8 = (uint)local_8._1_3_ << 8;
  CString::~CString(local_28);
  local_8 = 0xffffffff;
  CString::~CString(local_14);
  ExceptionList = local_10;
  return 1;
}


// ---- FUN_10007d54 @ 10007d54

/* WARNING: Removing unreachable block (ram,0x10007d6f) */

undefined4 __fastcall FUN_10007d54(COleControl *param_1)

{
  FUN_1000ce30(param_1);
  return *(undefined4 *)(param_1 + 0x2d4);
}


// ---- FUN_10007d96 @ 10007d96

void FUN_10007d96(int *param_1)

{
  int iVar1;
  CString *pCVar2;
  CString local_60 [4];
  CString local_5c [4];
  wchar_t *local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  VARIANTARG local_40;
  int *local_30;
  int *local_2c;
  int *local_28;
  int *local_24;
  int *local_20;
  int local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_100173b5;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_1c = (**(code **)(*param_1 + 0x14))(param_1,&local_14);
  if (-1 < local_1c) {
    local_1c = (**(code **)(*local_14 + 0x10))(local_14,5,&local_20);
    if (local_1c < 0) {
      (**(code **)(*local_14 + 8))(local_14);
    }
    else {
      while (iVar1 = (**(code **)(*local_20 + 0xc))(local_20,1,&local_18,0), iVar1 == 0) {
        local_30 = (int *)0x0;
        local_2c = (int *)0x0;
        local_24 = (int *)0x0;
        local_1c = (**(code **)*local_18)(local_18,&DAT_1001a0c8,&local_30);
        if (local_1c < 0) {
          local_1c = (**(code **)*local_18)(local_18,&DAT_1001a0a8,&local_28);
        }
        else {
          local_1c = (**(code **)(*local_30 + 0x10))(local_30,&local_24);
          if ((-1 < local_1c) &&
             (local_1c = (**(code **)*local_24)(local_24,&DAT_1001a0b8,&local_2c), -1 < local_1c)) {
            local_1c = (**(code **)(*local_2c + 0x14))(local_2c,&local_28);
          }
        }
        if (-1 < local_1c) {
          VariantInit(&local_40);
          local_54 = 0;
          local_50 = 0;
          local_4c = 0;
          local_48 = 0;
          local_58 = u_Name_1001fc58;
          local_1c = (**(code **)(*local_28 + 0x14))
                               (local_28,&DAT_1001a098,&local_58,1,0x800,&local_44);
          if ((-1 < local_1c) &&
             (local_1c = (**(code **)(*local_28 + 0x18))
                                   (local_28,local_44,&DAT_1001a098,0x800,3,&local_54,&local_40,0,0)
             , -1 < local_1c)) {
            CString::CString(local_5c,(ushort *)local_40.n1._8_4_);
            local_8 = 0;
            pCVar2 = (CString *)operator+(local_60,(char *)local_5c);
            local_8._0_1_ = 1;
            CString::operator=(local_5c,pCVar2);
            local_8 = (uint)local_8._1_3_ << 8;
            CString::~CString(local_60);
            local_8 = 0xffffffff;
            CString::~CString(local_5c);
          }
          (**(code **)(*local_28 + 8))(local_28);
        }
        if (local_30 != (int *)0x0) {
          (**(code **)(*local_30 + 8))(local_30);
        }
        if (local_2c != (int *)0x0) {
          (**(code **)(*local_2c + 8))(local_2c);
        }
        if (local_24 != (int *)0x0) {
          (**(code **)(*local_24 + 8))(local_24);
        }
        (**(code **)(*local_18 + 8))(local_18);
      }
      (**(code **)(*local_20 + 8))(local_20);
      (**(code **)(*local_14 + 8))(local_14);
    }
  }
  ExceptionList = local_10;
  return;
}


// ---- FUN_10008017 @ 10008017

/* WARNING: Removing unreachable block (ram,0x10008047) */
/* WARNING: Removing unreachable block (ram,0x10008142) */

undefined4 __thiscall FUN_10008017(void *this,char *param_1)

{
  bool bVar1;
  HWND pHVar2;
  undefined3 extraout_var;
  DWORD DVar3;
  int iVar4;
  undefined3 extraout_var_00;
  char *pcVar5;
  IOleClientSite *pIVar6;
  undefined4 uVar7;
  CString local_20 [4];
  CString local_1c [4];
  uint local_18;
  CString *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_100173da;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)((int)this + 0x2d4) = 0;
  if (*(int *)((int)this + 0x1c8) == 0) {
    pHVar2 = FUN_10008207();
    if ((pHVar2 == (HWND)0x0) && (bVar1 = FUN_10008310(), CONCAT31(extraout_var,bVar1) == 0)) {
      ExceptionList = local_10;
      return 0xfffffff2;
    }
    DVar3 = GetTickCount();
    local_18 = DVar3 + 120000;
    do {
      DVar3 = GetTickCount();
      if (local_18 <= DVar3) break;
      SleepEx(0xfa,0);
      iVar4 = FUN_100082ae();
    } while (iVar4 == 0);
    CString::CString(local_20);
    local_8 = 0;
    CString::CString(local_1c);
    local_8._0_1_ = 1;
    CString::CString((CString *)&local_14,param_1);
    local_8 = CONCAT31(local_8._1_3_,2);
    bVar1 = FUN_1000ce50((int *)&local_14);
    if (CONCAT31(extraout_var_00,bVar1) != 0) {
      CString::LoadStringA((CString *)&local_14,0xf);
    }
    CString::LoadStringA(local_20,3);
    CString::Format(local_14,(char *)local_1c);
    pcVar5 = (char *)FUN_100026c0((undefined4 *)local_1c);
    iVar4 = FUN_10007883(this,pcVar5);
    if (iVar4 == 1) {
      DVar3 = GetTickCount();
      local_18 = DVar3 + 120000;
      while ((DVar3 = GetTickCount(), DVar3 < local_18 && (*(int *)((int)this + 0x1c8) == 0))) {
        FUN_1000864a((int)this);
      }
    }
    local_8._0_1_ = 1;
    CString::~CString((CString *)&local_14);
    local_8 = (uint)local_8._1_3_ << 8;
    CString::~CString(local_1c);
    local_8 = 0xffffffff;
    CString::~CString(local_20);
  }
  if (*(int *)((int)this + 0x1c8) == 0) {
    uVar7 = 0xfffffff7;
  }
  else {
    FUN_100086f0(this,1,1);
    pIVar6 = COleControl::GetClientSite(this);
    FUN_10007d96((int *)pIVar6);
    uVar7 = 1;
  }
  ExceptionList = local_10;
  return uVar7;
}


// ---- FUN_10008207 @ 10008207

/* WARNING: Removing unreachable block (ram,0x10008222) */

HWND FUN_10008207(void)

{
  LRESULT LVar1;
  HWND local_8;
  
  local_8 = FindWindowA((LPCSTR)0x0,s_LEO_SRV_32_1001fcd8);
  if (local_8 == (HWND)0x0) {
    local_8 = FindWindowA((LPCSTR)0x0,s_LEO_SRV_32__E__1001fce4);
  }
  if (local_8 == (HWND)0x0) {
    local_8 = FindWindowA((LPCSTR)0x0,s_LEO_SRV_32__W__1001fcf4);
  }
  if (local_8 == (HWND)0x0) {
    local_8 = FindWindowA((LPCSTR)0x0,s_LEO_SRV_32__EW__1001fd04);
  }
  if ((local_8 == (HWND)0x0) || (LVar1 = SendMessageA(local_8,DAT_100220dc,0,0), LVar1 == 0)) {
    local_8 = (HWND)0x0;
  }
  return local_8;
}


// ---- FUN_100082ae @ 100082ae

/* WARNING: Removing unreachable block (ram,0x100082c9) */

undefined4 FUN_100082ae(void)

{
  HWND hWnd;
  LRESULT LVar1;
  undefined4 uVar2;
  
  hWnd = FUN_10008207();
  if ((hWnd == (HWND)0x0) || (LVar1 = SendMessageA(hWnd,DAT_1002219c,0,0), LVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


// ---- FUN_10008310 @ 10008310

/* WARNING: Removing unreachable block (ram,0x10008349) */

bool FUN_10008310(void)

{
  CString *pCVar1;
  LPCSTR lpCurrentDirectory;
  char *lpCommandLine;
  LPCSTR lpApplicationName;
  LPSECURITY_ATTRIBUTES lpProcessAttributes;
  LPSECURITY_ATTRIBUTES lpThreadAttributes;
  BOOL BVar2;
  DWORD dwCreationFlags;
  LPVOID lpEnvironment;
  _STARTUPINFOA *lpStartupInfo;
  _PROCESS_INFORMATION *lpProcessInformation;
  CString local_a0 [4];
  CString local_9c [4];
  CString local_98 [4];
  _STARTUPINFOA local_94;
  CString local_50 [4];
  CString local_4c [4];
  CString local_48 [4];
  CString local_44 [4];
  CString local_40 [4];
  CString local_3c [4];
  CString local_38 [4];
  undefined4 local_34 [5];
  _PROCESS_INFORMATION local_20;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10017450;
  local_10 = ExceptionList;
  local_94.cb = 0x44;
  local_94.lpReserved = (LPSTR)0x0;
  local_94.lpDesktop = (LPSTR)0x0;
  local_94.lpTitle = (LPSTR)0x0;
  local_94.cbReserved2 = 0;
  local_94.lpReserved2 = (LPBYTE)0x0;
  local_94.dwFlags = 1;
  local_94.wShowWindow = 5;
  ExceptionList = &local_10;
  CString::CString(local_50);
  local_8 = 0;
  CString::CString(local_44);
  local_8._0_1_ = 1;
  CString::CString(local_38);
  local_8._0_1_ = 2;
  CString::CString(local_40);
  local_8._0_1_ = 3;
  CString::CString(local_48);
  local_8._0_1_ = 4;
  CString::CString(local_4c);
  local_8._0_1_ = 5;
  CString::LoadStringA(local_48,0x69);
  CString::LoadStringA(local_50,0x66);
  CString::LoadStringA(local_44,0x67);
  CString::LoadStringA(local_38,0x68);
  CString::operator+=(local_50,local_48);
  FUN_1000d500(local_34,s_PM_OCX_1001fd40);
  local_8._0_1_ = 6;
  pCVar1 = FUN_1000d766(local_98,s_Main_Directory_1001fd64,s_C__PROGRAM_FILES_LEO_LEO32_1001fd48);
  local_8._0_1_ = 7;
  CString::operator=(local_40,pCVar1);
  local_8._0_1_ = 6;
  CString::~CString(local_98);
  pCVar1 = (CString *)operator+(local_9c,(char *)local_40);
  local_8._0_1_ = 8;
  CString::operator=(local_40,pCVar1);
  local_8._0_1_ = 6;
  CString::~CString(local_9c);
  pCVar1 = (CString *)operator+(local_a0,local_40);
  local_8._0_1_ = 9;
  CString::operator=(local_4c,pCVar1);
  local_8._0_1_ = 6;
  CString::~CString(local_a0);
  CString::CString(local_3c);
  local_8._0_1_ = 10;
  lpProcessInformation = &local_20;
  lpStartupInfo = &local_94;
  lpCurrentDirectory = (LPCSTR)FUN_100026c0((undefined4 *)local_40);
  lpEnvironment = (LPVOID)0x0;
  dwCreationFlags = 0;
  BVar2 = 0;
  lpThreadAttributes = (LPSECURITY_ATTRIBUTES)0x0;
  lpProcessAttributes = (LPSECURITY_ATTRIBUTES)0x0;
  lpCommandLine = CString::GetBuffer(local_3c,0);
  lpApplicationName = (LPCSTR)FUN_100026c0((undefined4 *)local_4c);
  BVar2 = CreateProcessA(lpApplicationName,lpCommandLine,lpProcessAttributes,lpThreadAttributes,
                         BVar2,dwCreationFlags,lpEnvironment,lpCurrentDirectory,lpStartupInfo,
                         lpProcessInformation);
  if (BVar2 != 0) {
    local_8._0_1_ = 6;
    CString::~CString(local_3c);
    local_8._0_1_ = 5;
    FUN_1000d5b9(local_34);
    local_8._0_1_ = 4;
    CString::~CString(local_4c);
    local_8._0_1_ = 3;
    CString::~CString(local_48);
    local_8._0_1_ = 2;
    CString::~CString(local_40);
    local_8._0_1_ = 1;
    CString::~CString(local_38);
    local_8 = (uint)local_8._1_3_ << 8;
    CString::~CString(local_44);
    local_8 = 0xffffffff;
    CString::~CString(local_50);
  }
  else {
    local_8._0_1_ = 6;
    CString::~CString(local_3c);
    local_8._0_1_ = 5;
    FUN_1000d5b9(local_34);
    local_8._0_1_ = 4;
    CString::~CString(local_4c);
    local_8._0_1_ = 3;
    CString::~CString(local_48);
    local_8._0_1_ = 2;
    CString::~CString(local_40);
    local_8._0_1_ = 1;
    CString::~CString(local_38);
    local_8 = (uint)local_8._1_3_ << 8;
    CString::~CString(local_44);
    local_8 = 0xffffffff;
    CString::~CString(local_50);
  }
  ExceptionList = local_10;
  return BVar2 != 0;
}


// ---- FUN_1000864a @ 1000864a

void __fastcall FUN_1000864a(int param_1)

{
  HWND hWnd;
  BOOL BVar1;
  UINT wMsgFilterMin;
  UINT wMsgFilterMax;
  UINT wRemoveMsg;
  tagMSG local_20;
  
  while( true ) {
    wRemoveMsg = 1;
    wMsgFilterMax = 0;
    wMsgFilterMin = 0;
    hWnd = (HWND)FUN_1000d160(param_1);
    BVar1 = PeekMessageA(&local_20,hWnd,wMsgFilterMin,wMsgFilterMax,wRemoveMsg);
    if (BVar1 == 0) break;
    TranslateMessage(&local_20);
    DispatchMessageA(&local_20);
  }
  return;
}


// ---- FUN_1000868a @ 1000868a

/* WARNING: Removing unreachable block (ram,0x100086b8) */

int __thiscall FUN_1000868a(void *this,undefined4 param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  
  if (*(int *)((int)this + 0x1c8) == 0) {
    iVar1 = -9;
  }
  else {
    iVar1 = FUN_10012284(*(void **)((int)this + 0x1c0),param_1,param_2,param_3);
  }
  return iVar1;
}


// ---- FUN_100086f0 @ 100086f0

/* WARNING: Removing unreachable block (ram,0x1000871e) */

undefined4 __thiscall FUN_100086f0(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)((int)this + 0x1c8) == 0) {
    uVar1 = 0xfffffff7;
  }
  else {
    uVar1 = FUN_1000cd10((int)this);
    uVar1 = FUN_10012998(*(void **)((int)this + 0x1c0),param_1,param_2,uVar1);
  }
  return uVar1;
}


// ---- FUN_10008765 @ 10008765

undefined4 __thiscall FUN_10008765(void *this,LPARAM param_1)

{
  undefined4 uVar1;
  
  if (*(int *)((int)this + 0x1c8) == 0) {
    uVar1 = 0xfffffff7;
  }
  else {
    uVar1 = FUN_10012c23(*(void **)((int)this + 0x1c0),param_1);
  }
  return uVar1;
}


// ---- FUN_10008797 @ 10008797

undefined4 __thiscall FUN_10008797(void *this,LPARAM param_1)

{
  undefined4 uVar1;
  
  if (*(int *)((int)this + 0x1c8) == 0) {
    uVar1 = 0xfffffff7;
  }
  else {
    uVar1 = FUN_10012c5a(*(void **)((int)this + 0x1c0),param_1);
  }
  return uVar1;
}


// ---- FUN_100087c9 @ 100087c9

undefined4 __thiscall FUN_100087c9(void *this,LPARAM param_1)

{
  undefined4 uVar1;
  
  if (*(int *)((int)this + 0x1c8) == 0) {
    uVar1 = 0xfffffff7;
  }
  else {
    uVar1 = FUN_10012c91(*(void **)((int)this + 0x1c0),param_1);
  }
  return uVar1;
}


// ---- FUN_100087fb @ 100087fb

undefined4 __thiscall FUN_100087fb(void *this,LPARAM param_1)

{
  undefined4 uVar1;
  
  if (*(int *)((int)this + 0x1c8) == 0) {
    uVar1 = 0xfffffff7;
  }
  else {
    uVar1 = FUN_10012cc8(*(void **)((int)this + 0x1c0),param_1);
  }
  return uVar1;
}


// ---- FUN_1000882d @ 1000882d

undefined4 __thiscall FUN_1000882d(void *this,LPARAM param_1)

{
  undefined4 uVar1;
  
  if (*(int *)((int)this + 0x1c8) == 0) {
    uVar1 = 0xfffffff7;
  }
  else {
    uVar1 = FUN_10012d83(*(void **)((int)this + 0x1c0),param_1);
  }
  return uVar1;
}


// ---- FUN_1000885f @ 1000885f

/* WARNING: Removing unreachable block (ram,0x1000888f) */

undefined4 __thiscall FUN_1000885f(void *this,undefined4 param_1,ushort **param_2)

{
  undefined4 uVar1;
  CString local_18 [4];
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10017463;
  local_10 = ExceptionList;
  if (*(int *)((int)this + 0x1c8) == 0) {
    uVar1 = 0xfffffff7;
  }
  else {
    ExceptionList = &local_10;
    CString::CString(local_18,&DAT_10022214);
    local_8 = 0;
    local_14 = FUN_100114fe(*(void **)((int)this + 0x1c0),param_1,local_18);
    CString::SetSysString(local_18,param_2);
    uVar1 = local_14;
    local_8 = 0xffffffff;
    CString::~CString(local_18);
  }
  ExceptionList = local_10;
  return uVar1;
}


// ---- FUN_1000891b @ 1000891b

/* WARNING: Removing unreachable block (ram,0x1000894b) */

undefined4 __thiscall FUN_1000891b(void *this,undefined4 param_1,ushort **param_2)

{
  undefined4 uVar1;
  CString local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10017476;
  local_10 = ExceptionList;
  if (*(int *)((int)this + 0x1c8) == 0) {
    uVar1 = 0xfffffff7;
  }
  else {
    ExceptionList = &local_10;
    CString::CString(local_14,&DAT_10022218);
    local_8 = 0;
    uVar1 = FUN_10011756(*(void **)((int)this + 0x1c0),param_1,local_14);
    CString::SetSysString(local_14,param_2);
    local_8 = 0xffffffff;
    CString::~CString(local_14);
  }
  ExceptionList = local_10;
  return uVar1;
}


// ---- FUN_100089d7 @ 100089d7

/* WARNING: Removing unreachable block (ram,0x10008a07) */

undefined4 __thiscall FUN_100089d7(void *this,undefined4 param_1,ushort **param_2)

{
  undefined4 uVar1;
  CString local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10017489;
  local_10 = ExceptionList;
  if (*(int *)((int)this + 0x1c8) == 0) {
    uVar1 = 0xfffffff7;
  }
  else {
    ExceptionList = &local_10;
    CString::CString(local_14,&DAT_1002221c);
    local_8 = 0;
    uVar1 = FUN_100118c9(*(void **)((int)this + 0x1c0),param_1,local_14);
    CString::SetSysString(local_14,param_2);
    local_8 = 0xffffffff;
    CString::~CString(local_14);
  }
  ExceptionList = local_10;
  return uVar1;
}


// ---- FUN_10008a93 @ 10008a93

/* WARNING: Removing unreachable block (ram,0x10008aae) */

undefined4 __thiscall FUN_10008a93(void *this,undefined4 *param_1,char *param_2)

{
  undefined4 uVar1;
  
  if (*(int *)((int)this + 0x1c8) == 0) {
    uVar1 = 0xfffffff7;
  }
  else {
    uVar1 = FUN_10012ecf(*(void **)((int)this + 0x1c0),param_1,param_2);
  }
  return uVar1;
}


// ---- FUN_10008af5 @ 10008af5

/* WARNING: Removing unreachable block (ram,0x10008b25) */

int __thiscall FUN_10008af5(void *this,undefined4 param_1,undefined4 *param_2,ushort **param_3)

{
  int iVar1;
  CString local_1c [4];
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1001749c;
  local_10 = ExceptionList;
  if (*(int *)((int)this + 0x1c8) == 0) {
    iVar1 = -9;
  }
  else {
    ExceptionList = &local_10;
    CString::CString(local_1c,&DAT_10022220);
    local_8 = 0;
    local_14 = FUN_10011ac4(*(void **)((int)this + 0x1c0),param_1,&local_18,local_1c);
    if (local_14 == 1) {
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = local_18;
      }
      if (param_3 != (ushort **)0x0) {
        CString::SetSysString(local_1c,param_3);
      }
    }
    iVar1 = local_14;
    local_8 = 0xffffffff;
    CString::~CString(local_1c);
  }
  ExceptionList = local_10;
  return iVar1;
}


// ---- FUN_10008bd3 @ 10008bd3

/* WARNING: Removing unreachable block (ram,0x10008c03) */

undefined4 __thiscall
FUN_10008bd3(void *this,undefined4 param_1,undefined4 param_2,ushort **param_3)

{
  undefined4 uVar1;
  CString local_18 [4];
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_100174af;
  local_10 = ExceptionList;
  if (*(int *)((int)this + 0x1c8) == 0) {
    uVar1 = 0xfffffff7;
  }
  else {
    ExceptionList = &local_10;
    CString::CString(local_18,&DAT_10022224);
    local_8 = 0;
    local_14 = FUN_10011bd2(*(void **)((int)this + 0x1c0),param_1,param_2,local_18);
    CString::SetSysString(local_18,param_3);
    uVar1 = local_14;
    local_8 = 0xffffffff;
    CString::~CString(local_18);
  }
  ExceptionList = local_10;
  return uVar1;
}


// ---- FUN_10008c9c @ 10008c9c

/* WARNING: Removing unreachable block (ram,0x10008ccc) */

undefined4 __thiscall FUN_10008c9c(void *this,undefined4 param_1,undefined4 param_2,char *param_3)

{
  undefined4 uVar1;
  char *pcVar2;
  CString local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_100174c2;
  local_10 = ExceptionList;
  if (*(int *)((int)this + 0x1c8) == 0) {
    uVar1 = 0xfffffff7;
  }
  else {
    ExceptionList = &local_10;
    CString::CString(local_14,param_3);
    local_8 = 0;
    pcVar2 = (char *)FUN_100026c0((undefined4 *)local_14);
    uVar1 = FUN_1001284f(*(void **)((int)this + 0x1c0),param_1,param_2,pcVar2);
    local_8 = 0xffffffff;
    CString::~CString(local_14);
  }
  ExceptionList = local_10;
  return uVar1;
}


// ---- FUN_10008d57 @ 10008d57

/* WARNING: Removing unreachable block (ram,0x10008d85) */
/* WARNING: Removing unreachable block (ram,0x10008d94) */
/* WARNING: Removing unreachable block (ram,0x10008d8b) */
/* WARNING: Removing unreachable block (ram,0x10008d9b) */

undefined4 __thiscall FUN_10008d57(void *this,undefined4 param_1,undefined4 param_2,short param_3)

{
  undefined4 uVar1;
  
  if (*(int *)((int)this + 0x1c8) == 0) {
    uVar1 = 0xfffffff7;
  }
  else {
    uVar1 = FUN_10013032(*(void **)((int)this + 0x1c0),param_1,(int)param_3);
  }
  return uVar1;
}


// ---- FUN_10008dd5 @ 10008dd5

undefined4 __thiscall
FUN_10008dd5(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (*(int *)((int)this + 0x1c8) == 0) {
    uVar1 = 0xfffffff7;
  }
  else {
    uVar1 = FUN_100130c0(*(void **)((int)this + 0x1c0),param_1,param_2,param_3,param_4);
  }
  return uVar1;
}


// ---- FUN_10008e13 @ 10008e13

undefined4 __thiscall FUN_10008e13(void *this,undefined4 param_1,ushort **param_2)

{
  undefined4 uVar1;
  CString local_18 [4];
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_100174d5;
  local_10 = ExceptionList;
  if (*(int *)((int)this + 0x1c8) == 0) {
    uVar1 = 0xfffffff7;
  }
  else {
    ExceptionList = &local_10;
    CString::CString(local_18,&DAT_10022228);
    local_8 = 0;
    local_14 = FUN_10011e56(*(void **)((int)this + 0x1c0),param_1,local_18);
    CString::SetSysString(local_18,param_2);
    uVar1 = local_14;
    local_8 = 0xffffffff;
    CString::~CString(local_18);
  }
  ExceptionList = local_10;
  return uVar1;
}


// ---- FUN_10008ea5 @ 10008ea5

undefined4 __thiscall FUN_10008ea5(void *this,LPARAM param_1)

{
  undefined4 uVar1;
  
  if (*(int *)((int)this + 0x1c8) == 0) {
    uVar1 = 0xfffffff7;
  }
  else {
    uVar1 = FUN_10013089(*(void **)((int)this + 0x1c0),param_1);
  }
  return uVar1;
}


// ---- FUN_10008ed7 @ 10008ed7

undefined4 __fastcall FUN_10008ed7(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x1c8) == 0) {
    uVar1 = 0xfffffff7;
  }
  else {
    uVar1 = FUN_10010bef(*(int *)(param_1 + 0x1c0));
  }
  return uVar1;
}


// ---- FUN_10008f03 @ 10008f03

undefined4 __thiscall FUN_10008f03(void *this,undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (*(int *)((int)this + 0x1c8) == 0) {
    uVar1 = 0xfffffff7;
  }
  else {
    uVar1 = FUN_1000cea0((int)this);
    *param_1 = uVar1;
    uVar1 = FUN_1000cd10((int)this);
    *param_2 = uVar1;
    uVar1 = 1;
  }
  return uVar1;
}


// ---- FUN_10008f42 @ 10008f42

undefined4 __thiscall FUN_10008f42(void *this,ushort **param_1)

{
  undefined4 uVar1;
  CString local_18 [4];
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_100174e8;
  local_10 = ExceptionList;
  if (*(int *)((int)this + 0x1c8) == 0) {
    uVar1 = 0xfffffff7;
  }
  else {
    ExceptionList = &local_10;
    CString::CString(local_18,&DAT_1002222c);
    local_8 = 0;
    local_14 = FUN_10010e32(*(void **)((int)this + 0x1c0),local_18);
    CString::SetSysString(local_18,param_1);
    uVar1 = local_14;
    local_8 = 0xffffffff;
    CString::~CString(local_18);
  }
  ExceptionList = local_10;
  return uVar1;
}


// ---- FUN_10008fd0 @ 10008fd0

undefined4 __thiscall FUN_10008fd0(void *this,LPARAM param_1)

{
  undefined4 uVar1;
  
  if (*(int *)((int)this + 0x1c8) == 0) {
    uVar1 = 0xfffffff7;
  }
  else {
    uVar1 = FUN_1001224d(*(void **)((int)this + 0x1c0),param_1);
  }
  return uVar1;
}


// ---- FUN_10009002 @ 10009002

undefined4 __thiscall FUN_10009002(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)((int)this + 0x1c8) == 0) {
    uVar1 = 0xfffffff7;
  }
  else {
    uVar1 = FUN_10012aeb(*(void **)((int)this + 0x1c0),param_1,param_2);
  }
  return uVar1;
}


// ---- FUN_10009038 @ 10009038

undefined4 __thiscall
FUN_10009038(void *this,undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  if (*(int *)((int)this + 0x1c8) == 0) {
    uVar1 = 0xfffffff7;
  }
  else {
    uVar1 = FUN_10012e35(*(void **)((int)this + 0x1c0),param_1,param_2,param_3);
  }
  return uVar1;
}


// ---- FUN_10009072 @ 10009072

undefined4 __thiscall FUN_10009072(void *this,LPARAM param_1)

{
  undefined4 uVar1;
  
  if (*(int *)((int)this + 0x1c8) == 0) {
    uVar1 = 0xfffffff7;
  }
  else {
    uVar1 = FUN_10012e98(*(void **)((int)this + 0x1c0),param_1);
  }
  return uVar1;
}


// ---- FUN_100090a4 @ 100090a4

undefined4 __thiscall
FUN_100090a4(void *this,undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  if (*(int *)((int)this + 0x1c8) == 0) {
    uVar1 = 0xfffffff7;
  }
  else {
    uVar1 = FUN_100121ba(*(void **)((int)this + 0x1c0),param_1,param_2,param_3);
  }
  return uVar1;
}


// ---- FUN_100090de @ 100090de

undefined4 __thiscall
FUN_100090de(void *this,undefined4 param_1,undefined4 *param_2,undefined4 *param_3,ushort **param_4,
            ushort **param_5)

{
  undefined4 uVar1;
  CString local_18 [4];
  CString local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10017504;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  CString::CString(local_14,&DAT_10022230);
  local_8 = 0;
  CString::CString(local_18,&DAT_10022234);
  local_8._0_1_ = 1;
  if (*(int *)((int)this + 0x1c8) == 0) {
    local_8 = (uint)local_8._1_3_ << 8;
    CString::~CString(local_18);
    local_8 = 0xffffffff;
    CString::~CString(local_14);
    uVar1 = 0xfffffff7;
  }
  else {
    uVar1 = FUN_10012458(*(void **)((int)this + 0x1c0),param_1,param_2,param_3,local_14,local_18);
    CString::SetSysString(local_14,param_4);
    CString::SetSysString(local_18,param_5);
    local_8 = (uint)local_8._1_3_ << 8;
    CString::~CString(local_18);
    local_8 = 0xffffffff;
    CString::~CString(local_14);
  }
  ExceptionList = local_10;
  return uVar1;
}


// ---- FUN_100091c5 @ 100091c5

undefined4 __thiscall
FUN_100091c5(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (*(int *)((int)this + 0x1c8) == 0) {
    uVar1 = 0xfffffff7;
  }
  else {
    uVar1 = FUN_100126da(*(void **)((int)this + 0x1c0),param_1,param_2,param_3);
  }
  return uVar1;
}


// ---- FUN_100091ff @ 100091ff

undefined4 __thiscall FUN_100091ff(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)((int)this + 0x1c8) == 0) {
    uVar1 = 0xfffffff7;
  }
  else {
    uVar1 = FUN_10012a2b(*(void **)((int)this + 0x1c0),param_1,param_2);
  }
  return uVar1;
}


// ---- FUN_10009235 @ 10009235

undefined4 __thiscall FUN_10009235(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)((int)this + 0x1c8) == 0) {
    uVar1 = 0xfffffff7;
  }
  else {
    uVar1 = FUN_10012a8b(*(void **)((int)this + 0x1c0),param_1,param_2);
  }
  return uVar1;
}


// ---- FUN_1000926b @ 1000926b

undefined4 __thiscall FUN_1000926b(void *this,LPARAM param_1)

{
  undefined4 uVar1;
  
  if (*(int *)((int)this + 0x1c8) == 0) {
    uVar1 = 0xfffffff7;
  }
  else {
    uVar1 = FUN_10012ffb(*(void **)((int)this + 0x1c0),param_1);
  }
  return uVar1;
}


// ---- FUN_1000929d @ 1000929d

undefined4 __thiscall FUN_1000929d(void *this,LPARAM param_1)

{
  undefined4 uVar1;
  
  if (*(int *)((int)this + 0x1c8) == 0) {
    uVar1 = 0xfffffff7;
  }
  else {
    uVar1 = FUN_10012421(*(void **)((int)this + 0x1c0),param_1);
  }
  return uVar1;
}


// ---- FUN_100092cf @ 100092cf

undefined4 __thiscall FUN_100092cf(void *this,short *param_1)

{
  undefined4 uVar1;
  void *local_8;
  
  if (*(int *)((int)this + 0x1c8) == 0) {
    uVar1 = 0xfffffff7;
  }
  else if (*param_1 == 0x2011) {
    SafeArrayAccessData(*(SAFEARRAY **)(param_1 + 4),&local_8);
    uVar1 = FUN_1001316d(*(void **)((int)this + 0x1c0),local_8);
    SafeArrayUnaccessData(*(SAFEARRAY **)(param_1 + 4));
  }
  else {
    uVar1 = 0xfffffffc;
  }
  return uVar1;
}


// ---- FUN_1000933e @ 1000933e

undefined4 __thiscall FUN_1000933e(void *this,short *param_1)

{
  undefined4 uVar1;
  void *local_8;
  
  if (*(int *)((int)this + 0x1c8) == 0) {
    uVar1 = 0xfffffff7;
  }
  else if (*param_1 == 0x2011) {
    SafeArrayAccessData(*(SAFEARRAY **)(param_1 + 4),&local_8);
    uVar1 = FUN_100131b9(*(void **)((int)this + 0x1c0),local_8);
    SafeArrayUnaccessData(*(SAFEARRAY **)(param_1 + 4));
  }
  else {
    uVar1 = 0xfffffffc;
  }
  return uVar1;
}


// ---- FUN_100093ad @ 100093ad

undefined4 __thiscall FUN_100093ad(void *this,short *param_1)

{
  undefined4 uVar1;
  void *local_8;
  
  if (*(int *)((int)this + 0x1c8) == 0) {
    uVar1 = 0xfffffff7;
  }
  else if (*param_1 == 0x2011) {
    SafeArrayAccessData(*(SAFEARRAY **)(param_1 + 4),&local_8);
    uVar1 = FUN_10013299(*(void **)((int)this + 0x1c0),local_8);
    SafeArrayUnaccessData(*(SAFEARRAY **)(param_1 + 4));
  }
  else {
    uVar1 = 0xfffffffc;
  }
  return uVar1;
}


// ---- FUN_1000941c @ 1000941c

undefined4 __thiscall FUN_1000941c(void *this,char *param_1)

{
  undefined4 uVar1;
  
  if (*(int *)((int)this + 0x1c8) == 0) {
    uVar1 = 0xfffffff7;
  }
  else {
    uVar1 = FUN_1000cd10((int)this);
    uVar1 = FUN_100134b8(*(void **)((int)this + 0x1c0),param_1,uVar1);
  }
  return uVar1;
}


// ---- FUN_10009457 @ 10009457

undefined4 __thiscall FUN_10009457(void *this,char *param_1)

{
  undefined4 uVar1;
  
  if (*(int *)((int)this + 0x1c8) == 0) {
    uVar1 = 0xfffffff7;
  }
  else {
    uVar1 = FUN_1000cd10((int)this);
    uVar1 = FUN_10013533(*(void **)((int)this + 0x1c0),param_1,uVar1);
  }
  return uVar1;
}


// ---- FUN_10009492 @ 10009492

undefined4 __thiscall FUN_10009492(void *this,char *param_1)

{
  undefined4 uVar1;
  
  if (*(int *)((int)this + 0x1c8) == 0) {
    uVar1 = 0xfffffff7;
  }
  else {
    uVar1 = FUN_100135ae(*(void **)((int)this + 0x1c0),param_1);
  }
  return uVar1;
}


// ---- FUN_100094c4 @ 100094c4

undefined4 __fastcall FUN_100094c4(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x1c8) == 0) {
    uVar1 = 0xfffffff7;
  }
  else {
    uVar1 = FUN_10013624(*(int *)(param_1 + 0x1c0));
  }
  return uVar1;
}


// ---- FUN_100094f0 @ 100094f0

undefined4 __fastcall FUN_100094f0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x1c8) == 0) {
    uVar1 = 0xfffffff7;
  }
  else {
    uVar1 = FUN_1001364c(*(int *)(param_1 + 0x1c0));
  }
  return uVar1;
}


// ---- FUN_1000951c @ 1000951c

undefined4 __fastcall FUN_1000951c(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x1c8) == 0) {
    uVar1 = 0xfffffff7;
  }
  else {
    uVar1 = FUN_10013674(*(int *)(param_1 + 0x1c0));
  }
  return uVar1;
}


// ---- FUN_10009548 @ 10009548

undefined4 __fastcall FUN_10009548(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x1c8) == 0) {
    uVar1 = 0xfffffff7;
  }
  else {
    uVar1 = FUN_10010b53(*(int *)(param_1 + 0x1c0));
  }
  return uVar1;
}


// ---- FUN_10009574 @ 10009574

undefined4 __thiscall FUN_10009574(void *this,LPARAM param_1)

{
  undefined4 uVar1;
  
  if (*(int *)((int)this + 0x1c8) == 0) {
    uVar1 = 0xfffffff7;
  }
  else {
    uVar1 = FUN_10012939(*(void **)((int)this + 0x1c0),param_1);
  }
  return uVar1;
}


// ---- FUN_100095a6 @ 100095a6

int __thiscall FUN_100095a6(void *this,undefined4 param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  
  if (*(int *)((int)this + 0x1c8) == 0) {
    iVar1 = -9;
  }
  else {
    iVar1 = FUN_10011419(*(void **)((int)this + 0x1c0),param_1,param_2,param_3);
  }
  return iVar1;
}


// ---- FUN_100095e0 @ 100095e0

int __thiscall FUN_100095e0(void *this,undefined4 param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  
  if (*(int *)((int)this + 0x1c8) == 0) {
    iVar1 = -9;
  }
  else {
    iVar1 = FUN_10011fd0(*(void **)((int)this + 0x1c0),param_1,param_2,param_3);
  }
  return iVar1;
}


// ---- FUN_1000961a @ 1000961a

undefined4 __thiscall FUN_1000961a(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  
  if (*(int *)((int)this + 0x1c8) == 0) {
    uVar1 = 0xfffffff7;
  }
  else {
    uVar1 = FUN_1001324f(*(void **)((int)this + 0x1c0),param_1);
  }
  return uVar1;
}


// ---- FUN_1000964c @ 1000964c

undefined4 __thiscall FUN_1000964c(void *this,undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (*(int *)((int)this + 0x1c8) == 0) {
    uVar1 = 0xfffffff7;
  }
  else {
    uVar1 = FUN_100136c4(*(void **)((int)this + 0x1c0),param_1,param_2);
  }
  return uVar1;
}


// ---- FUN_10009682 @ 10009682

undefined4 __thiscall FUN_10009682(void *this,undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (*(int *)((int)this + 0x1c8) == 0) {
    uVar1 = 0xfffffff7;
  }
  else {
    uVar1 = FUN_1001371f(*(void **)((int)this + 0x1c0),param_1,param_2);
  }
  return uVar1;
}


// ---- FUN_100096b8 @ 100096b8

undefined4 __thiscall FUN_100096b8(void *this,short *param_1)

{
  undefined4 uVar1;
  void *local_8;
  
  if (*(int *)((int)this + 0x1c8) == 0) {
    uVar1 = 0xfffffff7;
  }
  else if (*param_1 == 0x2011) {
    SafeArrayAccessData(*(SAFEARRAY **)(param_1 + 4),&local_8);
    uVar1 = FUN_10010fea(*(void **)((int)this + 0x1c0),(int)local_8);
    SafeArrayUnaccessData(*(SAFEARRAY **)(param_1 + 4));
  }
  else {
    uVar1 = 0xfffffffc;
  }
  return uVar1;
}


// ---- FUN_10009727 @ 10009727

undefined4 __fastcall FUN_10009727(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x1c8) == 0) {
    uVar1 = 0xfffffff7;
  }
  else {
    uVar1 = FUN_100112e9(*(int *)(param_1 + 0x1c0));
  }
  return uVar1;
}


// ---- FUN_10009753 @ 10009753

undefined4 __thiscall FUN_10009753(void *this,ushort **param_1,ushort **param_2,ushort **param_3)

{
  undefined4 uVar1;
  CString local_1c [4];
  CString local_18 [4];
  CString local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10017529;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  CString::CString(local_14);
  local_8 = 0;
  CString::CString(local_1c);
  local_8._0_1_ = 1;
  CString::CString(local_18);
  local_8._0_1_ = 2;
  if (*(int *)((int)this + 0x1c8) == 0) {
    local_8._0_1_ = 1;
    CString::~CString(local_18);
    local_8 = (uint)local_8._1_3_ << 8;
    CString::~CString(local_1c);
    local_8 = 0xffffffff;
    CString::~CString(local_14);
    uVar1 = 0xfffffff7;
  }
  else {
    FUN_10010f66(*(void **)((int)this + 0x1c0),local_14,local_1c,local_18);
    CString::SetSysString(local_14,param_1);
    CString::SetSysString(local_1c,param_2);
    CString::SetSysString(local_18,param_3);
    local_8._0_1_ = 1;
    CString::~CString(local_18);
    local_8 = (uint)local_8._1_3_ << 8;
    CString::~CString(local_1c);
    local_8 = 0xffffffff;
    CString::~CString(local_14);
    uVar1 = 1;
  }
  ExceptionList = local_10;
  return uVar1;
}


// ---- FUN_10009856 @ 10009856

undefined4 __thiscall FUN_10009856(void *this,LPARAM param_1)

{
  undefined4 uVar1;
  
  if (*(int *)((int)this + 0x1c8) == 0) {
    uVar1 = 0xfffffff7;
  }
  else {
    FUN_10012e0a(*(void **)((int)this + 0x1c0),param_1);
    uVar1 = 1;
  }
  return uVar1;
}


// ---- FUN_1000988d @ 1000988d

undefined4 __thiscall FUN_1000988d(void *this,LPARAM param_1,LPARAM param_2)

{
  undefined4 uVar1;
  
  if (*(int *)((int)this + 0x1c8) == 0) {
    uVar1 = 0xfffffff7;
  }
  else {
    uVar1 = FUN_10012bb2(*(void **)((int)this + 0x1c0),param_1,param_2);
  }
  return uVar1;
}


// ---- FUN_100098c3 @ 100098c3

undefined4 __thiscall FUN_100098c3(void *this,undefined2 *param_1)

{
  undefined4 uVar1;
  undefined2 local_8c [68];
  
  if (*(int *)((int)this + 0x1c8) == 0) {
    uVar1 = 0xfffffff7;
  }
  else {
    uVar1 = FUN_100137c7(*(void **)((int)this + 0x1c0),local_8c);
    if (param_1 != (undefined2 *)0x0) {
      *param_1 = local_8c[0];
    }
  }
  return uVar1;
}


// ---- FUN_1000991f @ 1000991f

undefined4 __thiscall FUN_1000991f(void *this,short param_1,undefined4 *param_2)

{
  undefined1 local_8c [4];
  undefined4 auStack_88 [32];
  undefined4 local_8;
  
  if (*(int *)((int)this + 0x1c8) == 0) {
    local_8 = 0xfffffff7;
  }
  else {
    local_8 = FUN_100137c7(*(void **)((int)this + 0x1c0),local_8c);
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = auStack_88[param_1 * 4];
    }
  }
  return local_8;
}


// ---- FUN_10009981 @ 10009981

undefined4 __thiscall FUN_10009981(void *this,int param_1,short param_2,short param_3)

{
  undefined4 uVar1;
  
  if (*(int *)((int)this + 0x1c8) == 0) {
    uVar1 = 0xfffffff7;
  }
  else if (param_1 == 0x3fccc) {
    uVar1 = FUN_10013778(*(void **)((int)this + 0x1c0),param_2,param_3);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


// ---- FUN_100099c6 @ 100099c6

LRESULT __thiscall
FUN_100099c6(void *this,short param_1,short param_2,short param_3,short param_4,short param_5,
            char *param_6)

{
  LRESULT LVar1;
  CString local_24 [4];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1001753c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  CString::CString(local_24,param_6);
  local_8 = 0;
  FUN_1000cef0(&local_20,(int)param_1,(int)param_2,(int)param_3,(int)param_4);
  if (*(int *)((int)this + 0x1c8) == 0) {
    local_8 = 0xffffffff;
    CString::~CString(local_24);
    LVar1 = -9;
  }
  else {
    CString::CString((CString *)&stack0xffffffb0,local_24);
    LVar1 = FUN_10013af2(*(void **)((int)this + 0x1c0),local_20,local_1c,local_18,local_14,
                         (int)param_5);
    local_8 = 0xffffffff;
    CString::~CString(local_24);
  }
  ExceptionList = local_10;
  return LVar1;
}


// ---- FUN_10009abe @ 10009abe

undefined4 __thiscall FUN_10009abe(void *this,short param_1,short param_2,char *param_3)

{
  undefined4 uVar1;
  CString local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1001754f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  CString::CString(local_14,param_3);
  local_8 = 0;
  if (*(int *)((int)this + 0x1c8) == 0) {
    local_8 = 0xffffffff;
    CString::~CString(local_14);
    uVar1 = 0xfffffff7;
  }
  else {
    CString::CString((CString *)&stack0xffffffd0,local_14);
    uVar1 = FUN_100150ee(*(void **)((int)this + 0x1c0),(int)param_1,(int)param_2);
    local_8 = 0xffffffff;
    CString::~CString(local_14);
  }
  ExceptionList = local_10;
  return uVar1;
}


// ---- FUN_10009b6b @ 10009b6b

undefined4 __thiscall FUN_10009b6b(void *this,LPARAM param_1)

{
  undefined4 uVar1;
  
  if (*(int *)((int)this + 0x1c8) == 0) {
    uVar1 = 0xfffffff7;
  }
  else {
    uVar1 = FUN_100151e5(*(void **)((int)this + 0x1c0),param_1);
  }
  return uVar1;
}


// ---- FUN_10009b9d @ 10009b9d

undefined4 __thiscall
FUN_10009b9d(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (*(int *)((int)this + 0x1c8) == 0) {
    uVar1 = 0xfffffff7;
  }
  else {
    local_1c = param_1;
    local_18 = param_2;
    local_14 = param_3;
    local_10 = param_4;
    local_c = param_5;
    local_8 = param_6;
    uVar1 = FUN_1001269c(*(void **)((int)this + 0x1c0),&local_1c);
  }
  return uVar1;
}


// ---- FUN_10009bfb @ 10009bfb

undefined4 __thiscall
FUN_10009bfb(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,
            undefined4 *param_4,undefined4 *param_5,undefined4 *param_6)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_34 [6];
  undefined4 local_1c [4];
  undefined4 local_c;
  undefined4 local_8;
  
  if (*(int *)((int)this + 0x1c8) == 0) {
    uVar1 = 0xfffffff7;
  }
  else {
    puVar2 = FUN_10012645(*(void **)((int)this + 0x1c0),local_34);
    puVar4 = local_1c;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
    }
    *param_1 = local_1c[0];
    *param_2 = local_1c[1];
    *param_3 = local_1c[2];
    *param_4 = local_1c[3];
    *param_5 = local_c;
    *param_6 = local_8;
    uVar1 = 1;
  }
  return uVar1;
}


// ---- FUN_10009c74 @ 10009c74

undefined4 __thiscall FUN_10009c74(void *this,undefined4 param_1,undefined4 param_2,float *param_3)

{
  undefined4 uVar1;
  float10 fVar2;
  
  if (*(int *)((int)this + 0x1c8) == 0) {
    uVar1 = 0xfffffff7;
  }
  else {
    fVar2 = FUN_10012118(*(int *)((int)this + 0x1c0),param_1,param_2);
    *param_3 = (float)fVar2;
    uVar1 = 1;
  }
  return uVar1;
}


// ---- FUN_10009cb4 @ 10009cb4

undefined4 __thiscall FUN_10009cb4(void *this,undefined4 param_1,undefined4 param_2,float *param_3)

{
  undefined4 uVar1;
  float10 fVar2;
  
  if (*(int *)((int)this + 0x1c8) == 0) {
    uVar1 = 0xfffffff7;
  }
  else {
    fVar2 = FUN_10012169(*(int *)((int)this + 0x1c0),param_1,param_2);
    *param_3 = (float)fVar2;
    uVar1 = 1;
  }
  return uVar1;
}


// ---- FUN_10009cf4 @ 10009cf4

LRESULT __thiscall
FUN_10009cf4(void *this,int param_1,ushort param_2,undefined4 param_3,undefined4 param_4)

{
  LRESULT LVar1;
  
  if (*(int *)((int)this + 0x1c8) == 0) {
    LVar1 = -9;
  }
  else {
    LVar1 = FUN_10015577(param_1,param_2,param_3,param_4);
  }
  return LVar1;
}


// ---- FUN_10009d33 @ 10009d33

undefined4 __fastcall FUN_10009d33(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x1c8) == 0) {
    uVar1 = 0xfffffff7;
  }
  else {
    FUN_1001566f(*(int *)(param_1 + 0x1c0));
    uVar1 = 1;
  }
  return uVar1;
}


// ---- FUN_10009d64 @ 10009d64

undefined4 __fastcall FUN_10009d64(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x1c8) == 0) {
    uVar1 = CONCAT22((short)((uint)param_1 >> 0x10),0xfff7);
  }
  else {
    uVar1 = FUN_10010f3b(*(void **)(param_1 + 0x1c0),3);
  }
  return uVar1;
}


// ---- FUN_10009d91 @ 10009d91

undefined4 __thiscall FUN_10009d91(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  
  if (*(int *)((int)this + 0x1c8) == 0) {
    uVar1 = 0xfffffff7;
  }
  else {
    uVar1 = FUN_10013ebf(*(void **)((int)this + 0x1c0),param_1);
  }
  return uVar1;
}


// ---- FUN_10009dc3 @ 10009dc3

undefined4 __thiscall FUN_10009dc3(void *this,short *param_1)

{
  undefined4 uVar1;
  void *local_8;
  
  if (*(int *)((int)this + 0x1c8) == 0) {
    uVar1 = 0xfffffff7;
  }
  else if (*param_1 == 0x2011) {
    SafeArrayAccessData(*(SAFEARRAY **)(param_1 + 4),&local_8);
    uVar1 = FUN_10013f04(*(void **)((int)this + 0x1c0),local_8);
    SafeArrayUnaccessData(*(SAFEARRAY **)(param_1 + 4));
  }
  else {
    uVar1 = 0xfffffffc;
  }
  return uVar1;
}


// ---- FUN_10009e32 @ 10009e32

undefined4 __thiscall
FUN_10009e32(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            int param_5)

{
  undefined4 uVar1;
  HWND__ *pHVar2;
  CWnd *pCVar3;
  void *this_00;
  int iVar4;
  CDialog *local_42c;
  undefined1 local_414 [1024];
  CString local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1001756f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_10012ecf(*(void **)((int)this + 0x1c0),(undefined4 *)((int)this + 0x284),
               s_AP_BRIGHTNESS_1002006c);
  FUN_10012ecf(*(void **)((int)this + 0x1c0),(undefined4 *)((int)this + 0x2a4),
               s_DP_OPERATING_MODE_1002007c);
  FUN_10012ecf(*(void **)((int)this + 0x1c0),(undefined4 *)((int)this + 0x2a8),
               s_CMD_MODE_NORMAL_10020090);
  FUN_10012ecf(*(void **)((int)this + 0x1c0),(undefined4 *)((int)this + 0x2ac),
               s_DP_FREEZE_ON_100200a0);
  FUN_10012ecf(*(void **)((int)this + 0x1c0),(undefined4 *)((int)this + 0x2b0),
               s_CMD_FREEZE_ZONE_100200b0);
  FUN_10012ecf(*(void **)((int)this + 0x1c0),(undefined4 *)((int)this + 0x2b4),
               s_CMD_UNFREEZE_ZONE_100200c0);
  FUN_10012ecf(*(void **)((int)this + 0x1c0),(undefined4 *)((int)this + 0x2b8),
               s_CMD_FREEZE_ALL_100200d4);
  FUN_10012ecf(*(void **)((int)this + 0x1c0),(undefined4 *)((int)this + 700),
               s_CMD_UNFREEZE_ALL_100200e4);
  FUN_10012ecf(*(void **)((int)this + 0x1c0),(undefined4 *)((int)this + 0x2c4),
               s_DP_ALL_ZONES_100200f8);
  FUN_10012ecf(*(void **)((int)this + 0x1c0),(undefined4 *)((int)this + 0x294),s_DP_Z0_10020108);
  FUN_10012ecf(*(void **)((int)this + 0x1c0),(undefined4 *)((int)this + 0x298),s_DP_Z1_10020110);
  FUN_10012ecf(*(void **)((int)this + 0x1c0),(undefined4 *)((int)this + 0x29c),s_DP_Z2_10020118);
  FUN_10012ecf(*(void **)((int)this + 0x1c0),(undefined4 *)((int)this + 0x2a0),s_DP_Z3_10020120);
  if (*(int *)((int)this + 0x27c) == 0) {
    pHVar2 = (HWND__ *)FUN_1000cd10((int)this);
    pCVar3 = CWnd::FromHandle(pHVar2);
    this_00 = (void *)FUN_1000cbb0(0xb0);
    local_8 = 0;
    if (this_00 == (void *)0x0) {
      local_42c = (CDialog *)0x0;
    }
    else {
      local_42c = FUN_10001220(this_00,pCVar3);
    }
    local_8 = 0xffffffff;
    *(CDialog **)((int)this + 0x27c) = local_42c;
  }
  CWnd::ShowWindow(*(CWnd **)((int)this + 0x27c),(uint)(param_5 != 0));
  FUN_10001303(*(CWnd **)((int)this + 0x27c));
  *(undefined4 *)((int)this + 500) = param_1;
  *(undefined4 *)((int)this + 0x1ec) = param_2;
  *(undefined4 *)((int)this + 0x1f8) = param_3;
  *(undefined4 *)((int)this + 0x1f0) = param_4;
  *(undefined4 *)((int)this + 0x1fc) = 1;
  *(undefined4 *)((int)this + 0x200) = 5;
  *(undefined4 *)((int)this + 0x290) = 0;
  FUN_10013ebf(*(void **)((int)this + 0x1c0),local_414);
  iVar4 = FUN_1000a332((int)local_414,*(int *)((int)this + 0x1ec));
  *(int *)((int)this + 0x1e4) = iVar4;
  CString::CString(local_14,&DAT_10022238);
  local_8 = 1;
  if ((*(int *)((int)this + 0x1e4) < 0x14) || (0xdc < *(int *)((int)this + 0x1e4))) {
    *(undefined4 *)((int)this + 0x288) =
         *(undefined4 *)(&DAT_1001dc78 + *(int *)((int)this + 0x290) * 0xc);
    FUN_100127dc(*(void **)((int)this + 0x1c0),*(undefined4 *)((int)this + 0x284),
                 *(undefined4 *)((int)this + 0x288));
    FUN_10012ffb(*(void **)((int)this + 0x1c0),*(LPARAM *)((int)this + 0x2a8));
    *(undefined4 *)((int)this + 0x204) = 1;
  }
  else {
    FUN_10011b64(*(void **)((int)this + 0x1c0),*(undefined4 *)((int)this + 0x284),
                 (undefined4 *)((int)this + 0x288));
    *(int *)((int)this + 0x290) = DAT_1001dcb4 + 1;
  }
  FUN_1000d1c0(this,1,500,(TIMERPROC)0x0);
  *(undefined4 *)((int)this + 0x28c) = 0xb4;
  uVar1 = *(undefined4 *)((int)this + 0x200);
  local_8 = 0xffffffff;
  CString::~CString(local_14);
  ExceptionList = local_10;
  return uVar1;
}


// ---- FUN_1000a2d1 @ 1000a2d1

undefined4 __fastcall FUN_1000a2d1(int param_1)

{
  *(undefined4 *)(param_1 + 0x200) = 2;
  return *(undefined4 *)(param_1 + 0x200);
}


// ---- FUN_1000a2f2 @ 1000a2f2

undefined4 __thiscall FUN_1000a2f2(void *this,undefined4 *param_1,int param_2)

{
  undefined4 local_c;
  
  if (param_2 == 0) {
    local_c = *(undefined4 *)((int)this + 0x1e8);
  }
  else {
    local_c = *(undefined4 *)((int)this + 0x1e4);
  }
  *param_1 = local_c;
  return *(undefined4 *)((int)this + 0x200);
}


// ---- FUN_1000a332 @ 1000a332

int FUN_1000a332(int param_1,int param_2)

{
  int iVar1;
  int local_24;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_10 = 0;
  local_18 = 1;
  local_24 = param_2 % 0xfc;
  if (local_24 < 1) {
    local_24 = 1;
  }
  for (local_14 = 0; local_14 < 0xfc; local_14 = local_14 + 1) {
    local_c = *(int *)(param_1 + local_14 * 4);
    for (local_1c = 1; local_1c < local_24; local_1c = local_1c + 1) {
      if (local_14 + local_1c < 0xfd) {
        iVar1 = *(int *)(param_1 + (local_14 + local_1c) * 4);
      }
      else {
        iVar1 = *(int *)(param_1 + 0x3f0);
      }
      local_c = local_c + iVar1;
    }
    if (local_10 < local_c / local_24) {
      local_18 = local_14;
      local_10 = local_c / local_24;
    }
  }
  return local_18;
}


// ---- FUN_1000a418 @ 1000a418

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1000a418(void *this,int param_1)

{
  int iVar1;
  float10 fVar2;
  int local_420;
  int local_41c;
  undefined1 local_414 [1024];
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_10 = 0x100;
  local_14 = 0;
  local_8 = 0x100;
  local_c = 0;
  if (param_1 == 1) {
    if ((*(int *)((int)this + 0x27c) != 0) && (*(int *)(*(int *)((int)this + 0x27c) + 100) != 0)) {
      *(undefined4 *)((int)this + 0x200) = 2;
    }
    if (*(int *)((int)this + 0x204) == 1) {
      FUN_100127dc(*(void **)((int)this + 0x1c0),*(undefined4 *)((int)this + 0x2ac),0);
      FUN_10012ffb(*(void **)((int)this + 0x1c0),*(LPARAM *)((int)this + 0x2b8));
      *(undefined4 *)((int)this + 0x204) = 2;
    }
    else if (*(int *)((int)this + 0x204) == 2) {
      FUN_10011a37(*(void **)((int)this + 0x1c0),*(undefined4 *)((int)this + 0x294));
      iVar1 = ftol();
      if (iVar1 == 1) {
        *(undefined4 *)((int)this + 0x204) = 3;
      }
    }
    else if (*(int *)((int)this + 0x204) == 0) {
      FUN_10011a37(*(void **)((int)this + 0x1c0),*(undefined4 *)((int)this + 0x294));
      iVar1 = ftol();
      if (iVar1 == 0) {
        *(undefined4 *)((int)this + 0x204) = 1;
      }
    }
    if ((*(int *)((int)this + 0x200) != 2) && (*(int *)((int)this + 0x204) != 3)) {
      iVar1 = *(int *)((int)this + 0x280);
      *(int *)((int)this + 0x280) = *(int *)((int)this + 0x280) + 1;
      if (iVar1 <= *(int *)((int)this + 0x28c)) {
        FUN_1000d210(this);
        return;
      }
      *(undefined4 *)((int)this + 0x200) = 0;
    }
    if ((*(int *)((int)this + 0x1c0) != 0) && (*(int *)((int)this + 0x1fc) != 0)) {
LAB_1000a621:
      switch(*(undefined4 *)((int)this + 0x200)) {
      case 0:
      case 1:
      case 2:
        FUN_1000d1f0(this,1);
        FUN_10012ffb(*(void **)((int)this + 0x1c0),*(LPARAM *)((int)this + 0x2a8));
        *(undefined4 *)((int)this + 0x204) = 0;
        if (*(int *)((int)this + 0x27c) != 0) {
          CWnd::ShowWindow(*(CWnd **)((int)this + 0x27c),0);
        }
        *(undefined4 *)((int)this + 0x290) = 0;
        *(undefined4 *)((int)this + 0x280) = 0;
        FUN_1000d0a0(this,*(undefined4 *)((int)this + 0x200),*(COleControl **)((int)this + 0x1e4));
        *(undefined4 *)((int)this + 0x200) = 4;
        break;
      case 3:
        FUN_10013ebf(*(void **)((int)this + 0x1c0),&DAT_100219a0);
        iVar1 = FUN_1000a332(0x100219a0,4);
        *(int *)((int)this + 0x1e4) = iVar1;
        FUN_1000d0a0(this,*(undefined4 *)((int)this + 0x200),*(COleControl **)((int)this + 0x1e4));
        if (*(int *)((int)this + 0x27c) != 0) {
          abs(*(int *)((int)this + 500) - *(int *)((int)this + 0x1e4));
          iVar1 = ftol();
          FUN_1000135a(*(void **)((int)this + 0x27c),100 - iVar1);
        }
        if ((*(int *)((int)this + 0x1e4) < *(int *)((int)this + 500) - *(int *)((int)this + 0x1ec))
           || (*(int *)((int)this + 500) + *(int *)((int)this + 0x1ec) < *(int *)((int)this + 0x1e4)
              )) {
          fVar2 = (float10)FUN_10004568((int)this + 0x208);
          *(float *)((int)this + 0x288) = (float)fVar2;
          if (*(float *)((int)this + 0x288) <= _DAT_10019e34) {
            if (*(float *)((int)this + 0x288) < _DAT_10019e30) {
              *(undefined4 *)((int)this + 0x288) = 0x40a00000;
            }
          }
          else {
            *(undefined4 *)((int)this + 0x288) = 0x42c80000;
          }
          FUN_100127dc(*(void **)((int)this + 0x1c0),*(undefined4 *)((int)this + 0x284),
                       *(undefined4 *)((int)this + 0x288));
          FUN_10012ffb(*(void **)((int)this + 0x1c0),*(LPARAM *)((int)this + 0x2a8));
          *(undefined4 *)((int)this + 0x204) = 0;
          iVar1 = *(int *)((int)this + 0x280);
          *(int *)((int)this + 0x280) = *(int *)((int)this + 0x280) + 1;
          if (iVar1 <= *(int *)((int)this + 0x28c)) break;
          *(undefined4 *)((int)this + 0x200) = 0;
        }
        else {
          *(undefined4 *)((int)this + 0x200) = 1;
        }
        goto LAB_1000a621;
      default:
        break;
      case 5:
        FUN_10013ebf(*(void **)((int)this + 0x1c0),local_414);
        iVar1 = FUN_1000a332((int)local_414,*(int *)((int)this + 0x1ec));
        *(int *)((int)this + 0x1e4) = iVar1;
        FUN_1000d0a0(this,*(undefined4 *)((int)this + 0x200),*(COleControl **)((int)this + 0x1e4));
        if (*(int *)((int)this + 0x27c) != 0) {
          abs(*(int *)((int)this + 500) - *(int *)((int)this + 0x1e4));
          iVar1 = ftol();
          FUN_1000135a(*(void **)((int)this + 0x27c),100 - iVar1);
        }
        if (*(int *)((int)this + 0x290) < DAT_1001dcb4) {
          *(undefined4 *)(&DAT_1001dc7c + *(int *)((int)this + 0x290) * 0xc) =
               *(undefined4 *)((int)this + 0x1e4);
          iVar1 = abs(*(int *)((int)this + 0x1e4) - *(int *)((int)this + 500));
          *(int *)(&DAT_1001dc80 + *(int *)((int)this + 0x290) * 0xc) = iVar1;
          *(int *)((int)this + 0x290) = *(int *)((int)this + 0x290) + 1;
          *(undefined4 *)((int)this + 0x288) =
               *(undefined4 *)(&DAT_1001dc78 + *(int *)((int)this + 0x290) * 0xc);
          FUN_100127dc(*(void **)((int)this + 0x1c0),*(undefined4 *)((int)this + 0x284),
                       *(undefined4 *)((int)this + 0x288));
          FUN_10012ffb(*(void **)((int)this + 0x1c0),*(LPARAM *)((int)this + 0x2a8));
          *(undefined4 *)((int)this + 0x204) = 0;
        }
        else {
          if (*(int *)((int)this + 0x290) == DAT_1001dcb4) {
            local_10 = 0x100;
            local_14 = 0;
            for (local_41c = 0; local_41c < DAT_1001dcb4; local_41c = local_41c + 1) {
              if (*(int *)(&DAT_1001dc80 + local_41c * 0xc) < local_10) {
                local_14 = local_41c;
                local_10 = *(int *)(&DAT_1001dc80 + local_41c * 0xc);
              }
            }
            *(undefined4 *)((int)this + 0x1e4) = *(undefined4 *)(&DAT_1001dc7c + local_14 * 0xc);
            *(undefined4 *)((int)this + 0x288) = *(undefined4 *)(&DAT_1001dc78 + local_14 * 0xc);
          }
          FUN_10004410((void *)((int)this + 0x208),4,2,SUB84((double)*(int *)((int)this + 500),0),
                       (int)((ulonglong)(double)*(int *)((int)this + 500) >> 0x20),
                       SUB84((double)*(int *)((int)this + 0x1e4),0),
                       (int)((ulonglong)(double)*(int *)((int)this + 0x1e4) >> 0x20),
                       SUB84((double)*(float *)((int)this + 0x288),0),
                       (int)((ulonglong)(double)*(float *)((int)this + 0x288) >> 0x20));
          *(undefined4 *)((int)this + 0x200) = 3;
          FUN_1000d0a0(this,*(undefined4 *)((int)this + 0x200),*(COleControl **)((int)this + 0x1e4))
          ;
          if (*(int *)((int)this + 0x290) == DAT_1001dcb4) {
            local_8 = 0x100;
            local_c = 0;
            for (local_420 = 0; local_420 < DAT_1001dcb4; local_420 = local_420 + 1) {
              if ((*(int *)(&DAT_1001dc80 + local_420 * 0xc) < local_8) && (local_420 != local_14))
              {
                local_c = local_420;
                local_8 = *(int *)(&DAT_1001dc80 + local_420 * 0xc);
              }
            }
            *(undefined4 *)((int)this + 0x1e4) = *(undefined4 *)(&DAT_1001dc7c + local_c * 0xc);
            *(undefined4 *)((int)this + 0x288) = *(undefined4 *)(&DAT_1001dc78 + local_c * 0xc);
          }
          fVar2 = (float10)FUN_10004568((int)this + 0x208);
          *(float *)((int)this + 0x288) = (float)fVar2;
          if (*(float *)((int)this + 0x288) <= _DAT_10019e34) {
            if (*(float *)((int)this + 0x288) < _DAT_10019e30) {
              *(undefined4 *)((int)this + 0x288) = 0x40a00000;
            }
          }
          else {
            *(undefined4 *)((int)this + 0x288) = 0x42c80000;
          }
          FUN_100127dc(*(void **)((int)this + 0x1c0),*(undefined4 *)((int)this + 0x284),
                       *(undefined4 *)((int)this + 0x288));
          FUN_10012ffb(*(void **)((int)this + 0x1c0),*(LPARAM *)((int)this + 0x2a8));
          *(undefined4 *)((int)this + 0x204) = 0;
        }
      }
    }
    FUN_1000d210(this);
  }
  else {
    FUN_1000d210(this);
  }
  return;
}


// ---- FUN_1000ae81 @ 1000ae81

void __thiscall FUN_1000ae81(void *this,char *param_1,char *param_2,char *param_3)

{
  CString::operator=((CString *)((int)this + 0x1dc),param_2);
  CString::operator=((CString *)((int)this + 0x1e0),param_3);
  FUN_10008017(this,param_1);
  return;
}


// ---- FUN_1000aebe @ 1000aebe

undefined4 __thiscall FUN_1000aebe(void *this,undefined4 param_1,ushort param_2)

{
  undefined4 uVar1;
  
  if (*(int *)((int)this + 0x1c8) == 0) {
    uVar1 = 0xfffffff7;
  }
  else if (param_2 < 0x58) {
    uVar1 = 0xffffffee;
  }
  else {
    uVar1 = FUN_10015697(*(void **)((int)this + 0x1c0),param_1);
  }
  return uVar1;
}


// ---- FUN_1000af00 @ 1000af00

void __thiscall FUN_1000af00(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x2d4) = param_1;
  return;
}


// ---- FUN_1000af19 @ 1000af19

undefined4 FUN_1000af19(void)

{
  void *this;
  undefined4 uVar1;
  int *local_30;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10017583;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this = (void *)FUN_1000cbb0(0x14);
  local_8 = 0;
  if (this == (void *)0x0) {
    local_30 = (int *)0x0;
  }
  else {
    local_30 = FUN_1000d500(this,&DAT_1002223c);
  }
  local_8 = 0xffffffff;
  uVar1 = FUN_1000d886(s_Machine_10020128,0xffffffff);
  if (local_30 != (int *)0x0) {
    (**(code **)(*local_30 + 4))(1);
  }
  ExceptionList = local_10;
  return uVar1;
}


// ---- FUN_1000afc8 @ 1000afc8

ushort * FUN_1000afc8(void)

{
  CString *pCVar1;
  ushort *puVar2;
  int *local_38;
  CString local_24 [4];
  void *local_20;
  int *local_1c;
  CString local_18 [4];
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_100175a9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  CString::CString(local_18);
  local_8 = 0;
  local_20 = (void *)FUN_1000cbb0(0x14);
  local_8._0_1_ = 1;
  if (local_20 == (void *)0x0) {
    local_38 = (int *)0x0;
  }
  else {
    local_38 = FUN_1000d500(local_20,&DAT_10022240);
  }
  local_1c = local_38;
  local_8._0_1_ = 0;
  local_14 = local_38;
  pCVar1 = FUN_1000d766(local_24,s_DB_Path_10020154,s_C__Program_Files_Leo_Leo32_Syste_10020130);
  local_8._0_1_ = 2;
  CString::operator=(local_18,pCVar1);
  local_8 = (uint)local_8._1_3_ << 8;
  CString::~CString(local_24);
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 4))(1);
  }
  puVar2 = CString::AllocSysString(local_18);
  local_8 = 0xffffffff;
  CString::~CString(local_18);
  ExceptionList = local_10;
  return puVar2;
}


// ---- FUN_1000b0c3 @ 1000b0c3

ushort * FUN_1000b0c3(void)

{
  CString *pCVar1;
  ushort *puVar2;
  int *local_38;
  CString local_24 [4];
  void *local_20;
  int *local_1c;
  CString local_18 [4];
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_100175cf;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  CString::CString(local_18);
  local_8 = 0;
  local_20 = (void *)FUN_1000cbb0(0x14);
  local_8._0_1_ = 1;
  if (local_20 == (void *)0x0) {
    local_38 = (int *)0x0;
  }
  else {
    local_38 = FUN_1000d500(local_20,&DAT_10022244);
  }
  local_1c = local_38;
  local_8._0_1_ = 0;
  local_14 = local_38;
  pCVar1 = FUN_1000d766(local_24,s_Main_Directory_10020178,s_C__Program_Files_Leo_Leo32__1002015c);
  local_8._0_1_ = 2;
  CString::operator=(local_18,pCVar1);
  local_8 = (uint)local_8._1_3_ << 8;
  CString::~CString(local_24);
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 4))(1);
  }
  puVar2 = CString::AllocSysString(local_18);
  local_8 = 0xffffffff;
  CString::~CString(local_18);
  ExceptionList = local_10;
  return puVar2;
}


// ---- FUN_1000b1be @ 1000b1be

ushort * FUN_1000b1be(void)

{
  CString *pCVar1;
  ushort *puVar2;
  int *local_38;
  CString local_24 [4];
  void *local_20;
  int *local_1c;
  CString local_18 [4];
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_100175f5;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  CString::CString(local_18);
  local_8 = 0;
  local_20 = (void *)FUN_1000cbb0(0x14);
  local_8._0_1_ = 1;
  if (local_20 == (void *)0x0) {
    local_38 = (int *)0x0;
  }
  else {
    local_38 = FUN_1000d500(local_20,&DAT_10022248);
  }
  local_1c = local_38;
  local_8._0_1_ = 0;
  local_14 = local_38;
  pCVar1 = FUN_1000d766(local_24,s_DB_Version_10020188,&DAT_1002224c);
  local_8._0_1_ = 2;
  CString::operator=(local_18,pCVar1);
  local_8 = (uint)local_8._1_3_ << 8;
  CString::~CString(local_24);
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 4))(1);
  }
  puVar2 = CString::AllocSysString(local_18);
  local_8 = 0xffffffff;
  CString::~CString(local_18);
  ExceptionList = local_10;
  return puVar2;
}


// ---- FUN_1000b2b9 @ 1000b2b9

LRESULT __fastcall FUN_1000b2b9(int param_1)

{
  LRESULT LVar1;
  
  if (*(int *)(param_1 + 0x1c8) == 0) {
    LVar1 = -9;
  }
  else {
    LVar1 = FUN_10015d96(*(int *)(param_1 + 0x1c0));
  }
  return LVar1;
}


// ---- FUN_1000b2e5 @ 1000b2e5

undefined4 __thiscall
FUN_1000b2e5(void *this,undefined2 *param_1,undefined4 *param_2,undefined4 *param_3,
            undefined4 *param_4,undefined4 *param_5)

{
  undefined4 uVar1;
  undefined2 local_1c [4];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (*(int *)((int)this + 0x1c8) == 0) {
    uVar1 = 0xfffffff7;
  }
  else {
    uVar1 = FUN_10015e02(*(void **)((int)this + 0x1c0),local_1c);
    *param_1 = local_1c[0];
    *param_2 = local_14;
    *param_4 = local_c;
    *param_5 = local_8;
    *param_3 = local_10;
  }
  return uVar1;
}


// ---- FUN_1000b349 @ 1000b349

undefined4 __thiscall
FUN_1000b349(void *this,short param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  
  if (*(int *)((int)this + 0x1c8) == 0) {
    uVar1 = 0xfffffff7;
  }
  else {
    uVar1 = FUN_10015e54(*(void **)((int)this + 0x1c0),(int)param_1,param_2,param_3,param_4,param_5)
    ;
  }
  return uVar1;
}


// ---- FUN_1000b38c @ 1000b38c

LRESULT __fastcall FUN_1000b38c(int param_1)

{
  LRESULT LVar1;
  
  if (*(int *)(param_1 + 0x1c8) == 0) {
    LVar1 = -9;
  }
  else {
    LVar1 = FUN_10015dcc(*(int *)(param_1 + 0x1c0));
  }
  return LVar1;
}


// ---- FUN_1000b3b8 @ 1000b3b8

undefined4 __thiscall FUN_1000b3b8(void *this,WPARAM param_1)

{
  undefined4 uVar1;
  
  if (*(int *)((int)this + 0x1c8) == 0) {
    uVar1 = 0xfffffff7;
  }
  else {
    FUN_10015d6d(*(void **)((int)this + 0x1c0),param_1);
    uVar1 = 1;
  }
  return uVar1;
}


// ---- FUN_1000b3ef @ 1000b3ef

undefined4 __thiscall FUN_1000b3ef(void *this,short param_1)

{
  FUN_1000d0d0(this,param_1);
  return 1;
}


// ---- FUN_1000b412 @ 1000b412

undefined4 __thiscall FUN_1000b412(void *this,short param_1)

{
  FUN_1000d100(this,param_1);
  return 1;
}


// ---- FUN_1000b436 @ 1000b436

undefined4 FUN_1000b436(LPCSTR param_1)

{
  void *this;
  undefined4 uVar1;
  int *local_30;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10017609;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this = (void *)FUN_1000cbb0(0x14);
  local_8 = 0;
  if (this == (void *)0x0) {
    local_30 = (int *)0x0;
  }
  else {
    local_30 = FUN_1000d500(this,&DAT_10022250);
  }
  local_8 = 0xffffffff;
  uVar1 = FUN_1000d886(param_1,0);
  if (local_30 != (int *)0x0) {
    (**(code **)(*local_30 + 4))(1);
  }
  ExceptionList = local_10;
  return uVar1;
}


// ---- FUN_1000b4e6 @ 1000b4e6

/* WARNING: Removing unreachable block (ram,0x1000b516) */

undefined4 __thiscall FUN_1000b4e6(void *this,undefined4 param_1)

{
  HWND pHVar1;
  void *this_00;
  IOleClientSite *pIVar2;
  undefined4 uVar3;
  undefined4 *local_24;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1001761d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)((int)this + 0x2d4) = 0;
  *(undefined4 *)((int)this + 0x2d0) = 1;
  if (*(int *)((int)this + 0x1c8) == 0) {
    pHVar1 = FUN_10008207();
    *(HWND *)((int)this + 0x1c4) = pHVar1;
    if (*(int *)((int)this + 0x1c4) == 0) {
      ExceptionList = local_10;
      return 0xfffffff7;
    }
    this_00 = (void *)FUN_1000cbb0(0x20);
    local_8 = 0;
    if (this_00 == (void *)0x0) {
      local_24 = (undefined4 *)0x0;
    }
    else {
      local_24 = FUN_100109f7(this_00,*(undefined4 *)((int)this + 0x1c4),param_1);
    }
    *(undefined4 **)((int)this + 0x1c0) = local_24;
    if (*(int *)((int)this + 0x1c0) == 0) {
      ExceptionList = local_10;
      return 0;
    }
    *(undefined4 *)((int)this + 0x1c8) = 1;
  }
  local_8 = 0xffffffff;
  if (*(int *)((int)this + 0x1c8) == 0) {
    uVar3 = 0xfffffff7;
  }
  else {
    FUN_100086f0(this,1,1);
    pIVar2 = COleControl::GetClientSite(this);
    FUN_10007d96((int *)pIVar2);
    uVar3 = 1;
  }
  ExceptionList = local_10;
  return uVar3;
}


// ---- FUN_1000b62d @ 1000b62d

ushort * FUN_1000b62d(void)

{
  CString *pCVar1;
  ushort *puVar2;
  int *local_38;
  CString local_24 [4];
  void *local_20;
  int *local_1c;
  CString local_18 [4];
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10017643;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  CString::CString(local_18);
  local_8 = 0;
  local_20 = (void *)FUN_1000cbb0(0x14);
  local_8._0_1_ = 1;
  if (local_20 == (void *)0x0) {
    local_38 = (int *)0x0;
  }
  else {
    local_38 = FUN_1000d500(local_20,&DAT_10022254);
  }
  local_1c = local_38;
  local_8._0_1_ = 0;
  local_14 = local_38;
  pCVar1 = FUN_1000d766(local_24,s_LeoPath_100201c4,s_C__Leo__100201bc);
  local_8._0_1_ = 2;
  CString::operator=(local_18,pCVar1);
  local_8 = (uint)local_8._1_3_ << 8;
  CString::~CString(local_24);
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 4))(1);
  }
  puVar2 = CString::AllocSysString(local_18);
  local_8 = 0xffffffff;
  CString::~CString(local_18);
  ExceptionList = local_10;
  return puVar2;
}


// ---- FUN_1000b728 @ 1000b728

undefined4 __thiscall FUN_1000b728(void *this,char *param_1,char *param_2)

{
  uint uVar1;
  char *pcVar2;
  undefined4 uVar3;
  tagVARIANT local_d4;
  CDaoRecordset local_c4 [152];
  CString local_2c [4];
  CString local_28 [4];
  CString local_24 [12];
  undefined4 local_18;
  undefined1 *local_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_100176e0;
  pvStack_10 = ExceptionList;
  local_14 = &stack0xfffffe6c;
  ExceptionList = &pvStack_10;
  CString::CString(local_24,param_1);
  local_8 = 0;
  CString::CString(local_28,param_2);
  local_8._0_1_ = 1;
  local_18 = 0xffffffff;
  uVar1 = FUN_1000bd7b((int)this);
  uVar3 = local_18;
  if (uVar1 != 0) {
    CDaoRecordset::CDaoRecordset(local_c4,*(CDaoDatabase **)((int)this + 0x2cc));
    local_8._0_1_ = 2;
    FUN_1000d250(&local_d4);
    local_8._0_1_ = 3;
    CString::CString(local_2c,s_SELECT_ALL___FROM_users_100201cc);
    local_8 = CONCAT31(local_8._1_3_,5);
    pcVar2 = (char *)FUN_100026c0((undefined4 *)local_2c);
    CDaoRecordset::Open(local_c4,2,pcVar2,0);
    uVar3 = FUN_1000b883();
    return uVar3;
  }
  local_8 = (uint)local_8._1_3_ << 8;
  CString::~CString(local_28);
  local_8 = 0xffffffff;
  CString::~CString(local_24);
  ExceptionList = pvStack_10;
  return uVar3;
}


// ---- Catch@1000b7f9 @ 1000b7f9

undefined * Catch_1000b7f9(void)

{
  int unaff_EBP;
  
  (**(code **)(**(int **)(unaff_EBP + -0xd4) + 0x18))(0,0);
  CException::Delete(*(CException **)(unaff_EBP + -0xd4));
  FUN_1000c121(*(int *)(unaff_EBP + -0x13c));
  *(undefined4 *)(unaff_EBP + -0xe4) = *(undefined4 *)(unaff_EBP + -0x14);
  return &DAT_1000b833;
}


// ---- FUN_1000b883 @ 1000b883

undefined4 FUN_1000b883(void)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  CString *pCVar4;
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 4;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  uVar2 = operator+((char *)(unaff_EBP + -0xe8),(CString *)s_UserName_____100201e8);
  *(undefined4 *)(unaff_EBP + -0x144) = uVar2;
  *(undefined4 *)(unaff_EBP + -0x148) = *(undefined4 *)(unaff_EBP + -0x144);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  uVar2 = operator+((CString *)(unaff_EBP + -0xd8),*(char **)(unaff_EBP + -0x148));
  *(undefined4 *)(unaff_EBP + -0x14c) = uVar2;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  CString::~CString((CString *)(unaff_EBP + -0xe8));
  uVar2 = FUN_100026c0((undefined4 *)(unaff_EBP + -0xd8));
  *(undefined4 *)(unaff_EBP + -0x150) = uVar2;
  iVar3 = CDaoRecordset::FindFirst
                    ((CDaoRecordset *)(unaff_EBP + -0xc0),*(char **)(unaff_EBP + -0x150));
  *(int *)(unaff_EBP + -0x154) = iVar3;
  if (*(int *)(unaff_EBP + -0x154) == 0) {
    CDaoRecordset::Close((CDaoRecordset *)(unaff_EBP + -0xc0));
    FUN_1000c121(*(int *)(unaff_EBP + -0x13c));
    *(undefined4 *)(unaff_EBP + -0xec) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 7;
    CString::~CString((CString *)(unaff_EBP + -0xd8));
    *(undefined1 *)(unaff_EBP + -4) = 3;
    CString::~CString((CString *)(unaff_EBP + -0x28));
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_1000d270((VARIANTARG *)(unaff_EBP + -0xd0));
    *(undefined1 *)(unaff_EBP + -4) = 1;
    CDaoRecordset::~CDaoRecordset((CDaoRecordset *)(unaff_EBP + -0xc0));
    *(undefined1 *)(unaff_EBP + -4) = 0;
    CString::~CString((CString *)(unaff_EBP + -0x24));
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    CString::~CString((CString *)(unaff_EBP + -0x20));
    uVar2 = *(undefined4 *)(unaff_EBP + -0xec);
  }
  else {
    uVar2 = CDaoRecordset::GetFieldValue
                      ((CDaoRecordset *)(unaff_EBP + -0xc0),(char *)(unaff_EBP + -0xfc));
    *(undefined4 *)(unaff_EBP + -0x158) = uVar2;
    *(undefined4 *)(unaff_EBP + -0x15c) = *(undefined4 *)(unaff_EBP + -0x158);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    COleVariant::operator=((COleVariant *)(unaff_EBP + -0xd0),*(COleVariant **)(unaff_EBP + -0x15c))
    ;
    *(undefined1 *)(unaff_EBP + -4) = 10;
    FUN_1000d270((VARIANTARG *)(unaff_EBP + -0xfc));
    uVar2 = CString::CString((CString *)(unaff_EBP + -0xdc));
    *(undefined4 *)(unaff_EBP + -0x160) = uVar2;
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    if ((*(uint *)(unaff_EBP + -0xd0) & 0xffff) == 1) {
      CString::operator=((CString *)(unaff_EBP + -0xdc),&DAT_10022258);
    }
    else {
      pCVar4 = FUN_1000187b((CString *)(unaff_EBP + -0x100),(CString *)(unaff_EBP + -0xd0));
      *(CString **)(unaff_EBP + -0x164) = pCVar4;
      *(undefined4 *)(unaff_EBP + -0x168) = *(undefined4 *)(unaff_EBP + -0x164);
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      CString::operator=((CString *)(unaff_EBP + -0xdc),*(CString **)(unaff_EBP + -0x168));
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      CString::~CString((CString *)(unaff_EBP + -0x100));
    }
    CString::MakeUpper((CString *)(unaff_EBP + -0xdc));
    CString::TrimLeft((CString *)(unaff_EBP + -0xdc));
    CString::TrimRight((CString *)(unaff_EBP + -0xdc));
    CString::MakeUpper((CString *)(unaff_EBP + -0x24));
    CString::TrimLeft((CString *)(unaff_EBP + -0x24));
    CString::TrimRight((CString *)(unaff_EBP + -0x24));
    bVar1 = FUN_1000d130((void *)(unaff_EBP + -0xdc),(undefined4 *)(unaff_EBP + -0x24));
    *(bool *)(unaff_EBP + -0x16c) = bVar1;
    if ((*(uint *)(unaff_EBP + -0x16c) & 0xff) == 0) {
      uVar2 = CDaoRecordset::GetFieldValue
                        ((CDaoRecordset *)(unaff_EBP + -0xc0),(char *)(unaff_EBP + -0x114));
      *(undefined4 *)(unaff_EBP + -0x170) = uVar2;
      *(undefined4 *)(unaff_EBP + -0x174) = *(undefined4 *)(unaff_EBP + -0x170);
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      COleVariant::operator=
                ((COleVariant *)(unaff_EBP + -0xd0),*(COleVariant **)(unaff_EBP + -0x174));
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      FUN_1000d270((VARIANTARG *)(unaff_EBP + -0x114));
      *(uint *)(unaff_EBP + -0x1c) = (uint)(*(short *)(unaff_EBP + -200) != 0);
      if (*(int *)(unaff_EBP + -0x1c) == 0) {
        uVar2 = CDaoRecordset::GetFieldValue
                          ((CDaoRecordset *)(unaff_EBP + -0xc0),(char *)(unaff_EBP + -0x124));
        *(undefined4 *)(unaff_EBP + -0x178) = uVar2;
        *(undefined4 *)(unaff_EBP + -0x17c) = *(undefined4 *)(unaff_EBP + -0x178);
        *(undefined1 *)(unaff_EBP + -4) = 0xf;
        COleVariant::operator=
                  ((COleVariant *)(unaff_EBP + -0xd0),*(COleVariant **)(unaff_EBP + -0x17c));
        *(undefined1 *)(unaff_EBP + -4) = 0xc;
        FUN_1000d270((VARIANTARG *)(unaff_EBP + -0x124));
        *(uint *)(unaff_EBP + -0x1c) = (uint)(*(short *)(unaff_EBP + -200) != 0);
      }
      uVar2 = CDaoRecordset::GetFieldValue
                        ((CDaoRecordset *)(unaff_EBP + -0xc0),(char *)(unaff_EBP + -0x134));
      *(undefined4 *)(unaff_EBP + -0x180) = uVar2;
      *(undefined4 *)(unaff_EBP + -0x184) = *(undefined4 *)(unaff_EBP + -0x180);
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      COleVariant::operator=
                ((COleVariant *)(unaff_EBP + -0xd0),*(COleVariant **)(unaff_EBP + -0x184));
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      FUN_1000d270((VARIANTARG *)(unaff_EBP + -0x134));
      *(uint *)(unaff_EBP + -0x18) = (uint)(*(short *)(unaff_EBP + -200) != 0);
      CDaoRecordset::Close((CDaoRecordset *)(unaff_EBP + -0xc0));
      FUN_1000c121(*(int *)(unaff_EBP + -0x13c));
      if (*(int *)(unaff_EBP + -0x1c) == 0) {
        if (*(int *)(unaff_EBP + -0x18) == 0) {
          *(undefined4 *)(unaff_EBP + -0x14) = 1;
        }
        else {
          *(undefined4 *)(unaff_EBP + -0x14) = 2;
        }
      }
      else {
        *(undefined4 *)(unaff_EBP + -0x14) = 3;
      }
      *(undefined1 *)(unaff_EBP + -4) = 10;
      CString::~CString((CString *)(unaff_EBP + -0xdc));
      *(undefined1 *)(unaff_EBP + -4) = 7;
      CString::~CString((CString *)(unaff_EBP + -0xd8));
      uVar2 = FUN_1000bd11();
      return uVar2;
    }
    CDaoRecordset::Close((CDaoRecordset *)(unaff_EBP + -0xc0));
    FUN_1000c121(*(int *)(unaff_EBP + -0x13c));
    *(undefined4 *)(unaff_EBP + -0x104) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 10;
    CString::~CString((CString *)(unaff_EBP + -0xdc));
    *(undefined1 *)(unaff_EBP + -4) = 7;
    CString::~CString((CString *)(unaff_EBP + -0xd8));
    *(undefined1 *)(unaff_EBP + -4) = 3;
    CString::~CString((CString *)(unaff_EBP + -0x28));
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_1000d270((VARIANTARG *)(unaff_EBP + -0xd0));
    *(undefined1 *)(unaff_EBP + -4) = 1;
    CDaoRecordset::~CDaoRecordset((CDaoRecordset *)(unaff_EBP + -0xc0));
    *(undefined1 *)(unaff_EBP + -4) = 0;
    CString::~CString((CString *)(unaff_EBP + -0x24));
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    CString::~CString((CString *)(unaff_EBP + -0x20));
    uVar2 = *(undefined4 *)(unaff_EBP + -0x104);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar2;
}


// ---- Catch@1000bcd5 @ 1000bcd5

undefined * Catch_1000bcd5(void)

{
  int unaff_EBP;
  
  (**(code **)(**(int **)(unaff_EBP + -0xe0) + 0x18))(0,0);
  CException::Delete(*(CException **)(unaff_EBP + -0xe0));
  CDaoRecordset::Close((CDaoRecordset *)(unaff_EBP + -0xc0));
  FUN_1000c121(*(int *)(unaff_EBP + -0x13c));
  return FUN_1000bd11;
}


// ---- FUN_1000bd11 @ 1000bd11

undefined4 FUN_1000bd11(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 3;
  CString::~CString((CString *)(unaff_EBP + -0x28));
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_1000d270((VARIANTARG *)(unaff_EBP + -0xd0));
  *(undefined1 *)(unaff_EBP + -4) = 1;
  CDaoRecordset::~CDaoRecordset((CDaoRecordset *)(unaff_EBP + -0xc0));
  *(undefined4 *)(unaff_EBP + -0x138) = *(undefined4 *)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  CString::~CString((CString *)(unaff_EBP + -0x24));
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  CString::~CString((CString *)(unaff_EBP + -0x20));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + -0x138);
}


// ---- FUN_1000bd7b @ 1000bd7b

uint __fastcall FUN_1000bd7b(int param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined4 *puVar2;
  char *pcVar3;
  _DAODBEngine *p_Var4;
  long lVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  ushort uVar11;
  undefined4 uVar12;
  undefined4 uStack_9c;
  undefined4 local_90;
  int *local_78;
  CString aCStack_6c [4];
  CDaoDatabase *pCStack_68;
  undefined4 uStack_64;
  CDaoWorkspace *local_5c;
  undefined4 local_58;
  CString local_54 [4];
  uint local_50;
  int *local_4c;
  int *local_48;
  void *local_44;
  int *local_40;
  _DAODBEngine *local_34;
  COleVariant local_30 [8];
  char *local_28;
  int local_20;
  int *local_1c;
  CString local_18 [4];
  undefined1 *local_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1001772c;
  pvStack_10 = ExceptionList;
  local_14 = &stack0xffffff4c;
  local_20 = 0;
  ExceptionList = &pvStack_10;
  local_44 = (void *)FUN_1000cbb0(0x14);
  local_8 = 0;
  if (local_44 == (void *)0x0) {
    local_78 = (int *)0x0;
  }
  else {
    local_78 = FUN_1000d500(local_44,&DAT_1002225c);
  }
  local_40 = local_78;
  local_8 = 0xffffffff;
  local_1c = local_78;
  FUN_1000d766(local_18,s_DB_Path_10020230,&DAT_10022260);
  local_8 = 1;
  local_4c = local_1c;
  local_48 = local_1c;
  if (local_1c != (int *)0x0) {
    (**(code **)(*local_1c + 4))(1);
  }
  bVar1 = FUN_1000ce50((int *)local_18);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    if (*(int *)(param_1 + 0x2c8) == 0) {
      puVar2 = (undefined4 *)operator+(local_54,(char *)local_18);
      local_8._0_1_ = 2;
      uVar11 = 0xe;
      pcVar3 = (char *)FUN_100026c0(puVar2);
      COleVariant::COleVariant(local_30,pcVar3,uVar11);
      local_8._0_1_ = 4;
      CString::~CString(local_54);
      AfxDaoInit();
      p_Var4 = AfxDaoGetEngine();
      uVar12 = 0;
      uVar10 = 0;
      iVar9 = 0;
      iVar8 = 0;
      iVar7 = 0;
      local_34 = p_Var4;
      lVar5 = (**(code **)(*(int *)p_Var4 + 0x80))();
      AfxDaoCheck(lVar5,(char *)p_Var4,local_28,iVar7,iVar8,iVar9);
      local_8._0_1_ = 5;
      local_5c = (CDaoWorkspace *)FUN_1000cbb0(0x38);
      local_8._0_1_ = 6;
      if (local_5c == (CDaoWorkspace *)0x0) {
        local_90 = 0;
      }
      else {
        local_90 = CDaoWorkspace::CDaoWorkspace(local_5c);
      }
      local_58 = local_90;
      local_8 = CONCAT31(local_8._1_3_,5);
      *(undefined4 *)(param_1 + 0x2c8) = local_90;
      (**(code **)(**(int **)(param_1 + 0x2c8) + 0x14))
                (s_LeoSpace_10020260,s_Phil_Williams_10020250,s_shepreth_10020244,uVar10,uVar12);
      uVar6 = FUN_1000bf94();
      return uVar6;
    }
    if (*(int *)(param_1 + 0x2cc) == 0) {
      local_8._0_1_ = 8;
      pCStack_68 = (CDaoDatabase *)FUN_1000cbb0(0x78);
      local_8._0_1_ = 9;
      if (pCStack_68 == (CDaoDatabase *)0x0) {
        uStack_9c = 0;
      }
      else {
        uStack_9c = CDaoDatabase::CDaoDatabase(pCStack_68,(CDaoWorkspace *)0x0);
      }
      uStack_64 = uStack_9c;
      local_8._0_1_ = 8;
      *(undefined4 *)(param_1 + 0x2cc) = uStack_9c;
      pcVar3 = s_LEO_USER_1002026c;
      puVar2 = (undefined4 *)operator+(aCStack_6c,(char *)local_18);
      local_8._0_1_ = 10;
      uVar10 = FUN_100026c0(puVar2);
      (**(code **)(**(int **)(param_1 + 0x2cc) + 0x18))(uVar10,0,0,&DAT_10022264,pcVar3);
      local_8 = CONCAT31(local_8._1_3_,8);
      CString::~CString(aCStack_6c);
      uVar6 = FUN_1000c0eb();
      return uVar6;
    }
    uVar6 = (uint)(local_20 == 0);
    local_8 = 0xffffffff;
    CString::~CString(local_18);
  }
  else {
    local_50 = 0;
    local_8 = 0xffffffff;
    CString::~CString(local_18);
    uVar6 = local_50;
  }
  ExceptionList = pvStack_10;
  return uVar6;
}


// ---- Catch@1000bf68 @ 1000bf68

undefined * Catch_1000bf68(void)

{
  int unaff_EBP;
  
  (**(code **)(**(int **)(unaff_EBP + -0x34) + 0x18))(0,0);
  CException::Delete(*(CException **)(unaff_EBP + -0x34));
  FUN_1000c121(*(int *)(unaff_EBP + -0x70));
  *(undefined4 *)(unaff_EBP + -0x1c) = 1;
  return FUN_1000bf94;
}


// ---- FUN_1000bf94 @ 1000bf94

undefined4 FUN_1000bf94(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  char *pcVar2;
  
  *(undefined4 *)(unaff_EBP + -4) = 4;
  if (*(int *)(unaff_EBP + -0x1c) == 0) {
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_1000d270((VARIANTARG *)(unaff_EBP + -0x2c));
    if (*(int *)(*(int *)(unaff_EBP + -0x70) + 0x2cc) == 0) {
      *(undefined1 *)(unaff_EBP + -4) = 8;
      uVar1 = FUN_1000cbb0(0x78);
      *(undefined4 *)(unaff_EBP + -0x90) = uVar1;
      *(undefined4 *)(unaff_EBP + -100) = *(undefined4 *)(unaff_EBP + -0x90);
      *(undefined1 *)(unaff_EBP + -4) = 9;
      if (*(int *)(unaff_EBP + -100) == 0) {
        *(undefined4 *)(unaff_EBP + -0x98) = 0;
      }
      else {
        uVar1 = CDaoDatabase::CDaoDatabase
                          (*(CDaoDatabase **)(unaff_EBP + -100),(CDaoWorkspace *)0x0);
        *(undefined4 *)(unaff_EBP + -0x94) = uVar1;
        *(undefined4 *)(unaff_EBP + -0x98) = *(undefined4 *)(unaff_EBP + -0x94);
      }
      *(undefined4 *)(unaff_EBP + -0x60) = *(undefined4 *)(unaff_EBP + -0x98);
      *(undefined1 *)(unaff_EBP + -4) = 8;
      *(undefined4 *)(*(int *)(unaff_EBP + -0x70) + 0x2cc) = *(undefined4 *)(unaff_EBP + -0x60);
      pcVar2 = s_LEO_USER_1002026c;
      uVar1 = operator+((CString *)(unaff_EBP + -0x68),(char *)(unaff_EBP + -0x14));
      *(undefined4 *)(unaff_EBP + -0x9c) = uVar1;
      *(undefined4 *)(unaff_EBP + -0xa0) = *(undefined4 *)(unaff_EBP + -0x9c);
      *(undefined1 *)(unaff_EBP + -4) = 10;
      uVar1 = FUN_100026c0(*(undefined4 **)(unaff_EBP + -0xa0));
      *(undefined4 *)(unaff_EBP + -0xa4) = uVar1;
      (**(code **)(**(int **)(*(int *)(unaff_EBP + -0x70) + 0x2cc) + 0x18))
                (*(undefined4 *)(unaff_EBP + -0xa4),0,0,&DAT_10022264,pcVar2);
      *(undefined1 *)(unaff_EBP + -4) = 8;
      CString::~CString((CString *)(unaff_EBP + -0x68));
      uVar1 = FUN_1000c0eb();
      return uVar1;
    }
    *(uint *)(unaff_EBP + -0x6c) = (uint)(*(int *)(unaff_EBP + -0x1c) == 0);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    CString::~CString((CString *)(unaff_EBP + -0x14));
    uVar1 = *(undefined4 *)(unaff_EBP + -0x6c);
  }
  else {
    *(uint *)(unaff_EBP + -0x5c) = (uint)(*(int *)(unaff_EBP + -0x1c) == 0);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_1000d270((VARIANTARG *)(unaff_EBP + -0x2c));
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    CString::~CString((CString *)(unaff_EBP + -0x14));
    uVar1 = *(undefined4 *)(unaff_EBP + -0x5c);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar1;
}


// ---- Catch@1000c0bf @ 1000c0bf

undefined * Catch_1000c0bf(void)

{
  int unaff_EBP;
  
  (**(code **)(**(int **)(unaff_EBP + -0x38) + 0x18))(0,0);
  CException::Delete(*(CException **)(unaff_EBP + -0x38));
  FUN_1000c121(*(int *)(unaff_EBP + -0x70));
  *(undefined4 *)(unaff_EBP + -0x1c) = 1;
  return FUN_1000c0eb;
}


// ---- FUN_1000c0eb @ 1000c0eb

undefined4 FUN_1000c0eb(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 1;
  *(uint *)(unaff_EBP + -0x6c) = (uint)(*(int *)(unaff_EBP + -0x1c) == 0);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  CString::~CString((CString *)(unaff_EBP + -0x14));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + -0x6c);
}


// ---- FUN_1000c121 @ 1000c121

void __fastcall FUN_1000c121(int param_1)

{
  if (*(int *)(param_1 + 0x2cc) != 0) {
    (**(code **)(**(int **)(param_1 + 0x2cc) + 0x1c))();
    if (*(int **)(param_1 + 0x2cc) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x2cc) + 4))(1);
    }
    *(undefined4 *)(param_1 + 0x2cc) = 0;
  }
  if (*(int *)(param_1 + 0x2c8) != 0) {
    (**(code **)(**(int **)(param_1 + 0x2c8) + 0x20))();
    if (*(int **)(param_1 + 0x2c8) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x2c8) + 4))(1);
    }
    *(undefined4 *)(param_1 + 0x2c8) = 0;
  }
  AfxDaoTerm();
  return;
}


// ---- FUN_1000c1f5 @ 1000c1f5

undefined4 __thiscall
FUN_1000c1f5(void *this,undefined4 param_1,short param_2,uint *param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  undefined4 uVar1;
  
  if (*(int *)((int)this + 0x1c0) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_10016074(*(void **)((int)this + 0x1c0),param_1,(int)param_2,param_3,param_4,param_5)
    ;
  }
  return uVar1;
}


// ---- FUN_1000c235 @ 1000c235

ushort * __thiscall FUN_1000c235(void *this,undefined4 param_1,short param_2)

{
  CString *pCVar1;
  ushort *puVar2;
  CString local_18 [4];
  CString local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10017748;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  CString::CString(local_14);
  local_8 = 0;
  if (*(int *)((int)this + 0x1c0) != 0) {
    pCVar1 = FUN_10011d63(*(void **)((int)this + 0x1c0),local_18,param_1,(int)param_2);
    local_8._0_1_ = 1;
    CString::operator=(local_14,pCVar1);
    local_8 = (uint)local_8._1_3_ << 8;
    CString::~CString(local_18);
  }
  puVar2 = CString::AllocSysString(local_14);
  local_8 = 0xffffffff;
  CString::~CString(local_14);
  ExceptionList = local_10;
  return puVar2;
}


// ---- FUN_1000c2db @ 1000c2db

void __fastcall FUN_1000c2db(int param_1)

{
  if (*(int *)(param_1 + 0x1c0) != 0) {
    FUN_100140df(*(int *)(param_1 + 0x1c0));
  }
  return;
}


// ---- FUN_1000c300 @ 1000c300

LRESULT __thiscall FUN_1000c300(void *this,char *param_1)

{
  LRESULT LVar1;
  void *apvStack_18 [2];
  undefined4 local_10;
  void *local_c;
  undefined1 *local_8;
  
  if (*(int *)((int)this + 0x1c0) == 0) {
    LVar1 = 0;
  }
  else {
    local_8 = (undefined1 *)apvStack_18;
    apvStack_18[0] = this;
    local_c = this;
    local_10 = CString::CString((CString *)apvStack_18,param_1);
    LVar1 = FUN_10014267(*(int *)((int)local_c + 0x1c0));
  }
  return LVar1;
}


// ---- FUN_1000c345 @ 1000c345

LRESULT __thiscall FUN_1000c345(void *this,char *param_1)

{
  LRESULT LVar1;
  void *apvStack_18 [2];
  undefined4 local_10;
  void *local_c;
  undefined1 *local_8;
  
  if (*(int *)((int)this + 0x1c0) == 0) {
    LVar1 = 0;
  }
  else {
    local_8 = (undefined1 *)apvStack_18;
    apvStack_18[0] = this;
    local_c = this;
    local_10 = CString::CString((CString *)apvStack_18,param_1);
    LVar1 = FUN_10014317(*(int *)((int)local_c + 0x1c0));
  }
  return LVar1;
}


// ---- FUN_1000c38a @ 1000c38a

LRESULT __thiscall FUN_1000c38a(void *this,char *param_1)

{
  LRESULT LVar1;
  void *apvStack_18 [2];
  undefined4 local_10;
  void *local_c;
  undefined1 *local_8;
  
  if (*(int *)((int)this + 0x1c0) == 0) {
    LVar1 = 0;
  }
  else {
    local_8 = (undefined1 *)apvStack_18;
    apvStack_18[0] = this;
    local_c = this;
    local_10 = CString::CString((CString *)apvStack_18,param_1);
    LVar1 = FUN_100143c7(*(int *)((int)local_c + 0x1c0));
  }
  return LVar1;
}


// ---- FUN_1000c3cf @ 1000c3cf

LRESULT __thiscall FUN_1000c3cf(void *this,char *param_1)

{
  LRESULT LVar1;
  void *apvStack_18 [2];
  undefined4 local_10;
  void *local_c;
  undefined1 *local_8;
  
  if (*(int *)((int)this + 0x1c0) == 0) {
    LVar1 = 0;
  }
  else {
    local_8 = (undefined1 *)apvStack_18;
    apvStack_18[0] = this;
    local_c = this;
    local_10 = CString::CString((CString *)apvStack_18,param_1);
    LVar1 = FUN_10014477(*(int *)((int)local_c + 0x1c0));
  }
  return LVar1;
}


// ---- FUN_1000c414 @ 1000c414

undefined4 __fastcall FUN_1000c414(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x1c0) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_10014609(*(int *)(param_1 + 0x1c0));
  }
  return uVar1;
}


// ---- FUN_1000c43d @ 1000c43d

undefined4 __fastcall FUN_1000c43d(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x1c0) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_10014631(*(int *)(param_1 + 0x1c0));
  }
  return uVar1;
}


// ---- FUN_1000c466 @ 1000c466

undefined4 __fastcall FUN_1000c466(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x1c0) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_10014659(*(int *)(param_1 + 0x1c0));
  }
  return uVar1;
}


// ---- FUN_1000c48f @ 1000c48f

undefined4 __fastcall FUN_1000c48f(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x1c0) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_10014681(*(int *)(param_1 + 0x1c0));
  }
  return uVar1;
}


// ---- FUN_1000c4b8 @ 1000c4b8

void __thiscall FUN_1000c4b8(void *this,uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  
  if (*(int *)((int)this + 0x1c0) != 0) {
    uVar1 = FUN_100146a9(*(int *)((int)this + 0x1c0));
    *param_1 = (uint)((uVar1 & 0x200) != 0);
    *param_2 = (uint)((uVar1 & 0x100) != 0);
    *param_3 = (uint)((uVar1 & 0x400) != 0);
  }
  return;
}


// ---- FUN_1000c51f @ 1000c51f

void FUN_1000c51f(void)

{
  return;
}


// ---- FUN_1000c56e @ 1000c56e

undefined2 __thiscall FUN_1000c56e(void *this,short param_1)

{
  undefined2 uVar1;
  LPARAM LVar2;
  
  if (*(int *)((int)this + 0x1c0) == 0) {
    uVar1 = 0;
  }
  else {
    LVar2 = FUN_10014752(*(int *)((int)this + 0x1c0));
    FUN_10014727(*(void **)((int)this + 0x1c0),(int)param_1);
    uVar1 = FUN_1001477a(*(int *)((int)this + 0x1c0));
    FUN_10014727(*(void **)((int)this + 0x1c0),LVar2);
  }
  return uVar1;
}


// ---- FUN_1000c5d9 @ 1000c5d9

undefined4 __fastcall FUN_1000c5d9(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x1c0) == 0) {
    uVar1 = CONCAT22((short)((uint)param_1 >> 0x10),1);
  }
  else {
    uVar1 = FUN_10014752(*(int *)(param_1 + 0x1c0));
  }
  return uVar1;
}


// ---- FUN_1000c604 @ 1000c604

undefined2 __thiscall FUN_1000c604(void *this,short param_1)

{
  undefined2 uVar1;
  LPARAM LVar2;
  
  if (*(int *)((int)this + 0x1c0) == 0) {
    uVar1 = 0xffff;
  }
  else {
    LVar2 = FUN_10014752(*(int *)((int)this + 0x1c0));
    FUN_10014727(*(void **)((int)this + 0x1c0),(int)param_1);
    uVar1 = FUN_100147a2(*(int *)((int)this + 0x1c0));
    FUN_10014727(*(void **)((int)this + 0x1c0),LVar2);
  }
  return uVar1;
}


// ---- FUN_1000c670 @ 1000c670

int __thiscall
FUN_1000c670(void *this,short param_1,short param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8,
            undefined4 *param_9,undefined4 *param_10,ushort **param_11)

{
  CString local_1a0 [4];
  int local_19c;
  int local_198;
  char local_194 [352];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  LPARAM local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1001775e;
  local_10 = ExceptionList;
  if (*(int *)((int)this + 0x1c0) == 0) {
    local_19c = 0;
  }
  else {
    ExceptionList = &local_10;
    local_14 = FUN_10014752(*(int *)((int)this + 0x1c0));
    FUN_10014727(*(void **)((int)this + 0x1c0),(int)param_1);
    local_198 = (int)param_2;
    local_19c = FUN_100147ca(*(void **)((int)this + 0x1c0),&local_198);
    if (local_19c != 0) {
      *param_3 = local_34;
      *param_4 = local_30;
      *param_5 = local_2c;
      *param_6 = local_28;
      *param_7 = local_24;
      *param_8 = local_20;
      *param_9 = local_1c;
      *param_10 = local_18;
      CString::CString(local_1a0,local_194);
      local_8 = 0;
      if (param_11 != (ushort **)0x0) {
        CString::SetSysString(local_1a0,param_11);
      }
      local_8 = 0xffffffff;
      CString::~CString(local_1a0);
    }
    FUN_10014727(*(void **)((int)this + 0x1c0),local_14);
  }
  ExceptionList = local_10;
  return local_19c;
}


// ---- FUN_1000c7b5 @ 1000c7b5

undefined4 __thiscall
FUN_1000c7b5(void *this,short param_1,short param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10,char *param_11)

{
  undefined4 uVar1;
  int local_18c;
  char local_188 [352];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  LPARAM local_8;
  
  if (*(int *)((int)this + 0x1c0) == 0) {
    uVar1 = 0;
  }
  else {
    local_8 = FUN_10014752(*(int *)((int)this + 0x1c0));
    FUN_10014727(*(void **)((int)this + 0x1c0),(int)param_1);
    local_18c = (int)param_2;
    local_28 = param_3;
    local_24 = param_4;
    local_20 = param_5;
    local_1c = param_6;
    local_18 = param_7;
    local_14 = param_8;
    local_10 = param_9;
    local_c = param_10;
    strcpy(local_188,param_11);
    uVar1 = FUN_1001480a(*(void **)((int)this + 0x1c0),&local_18c);
    FUN_10014727(*(void **)((int)this + 0x1c0),local_8);
  }
  return uVar1;
}


// ---- FUN_1000c891 @ 1000c891

uint __thiscall FUN_1000c891(void *this,short param_1,char *param_2)

{
  LPARAM LVar1;
  undefined4 uVar2;
  undefined2 extraout_var;
  uint uVar3;
  undefined2 local_c;
  
  if (*(int *)((int)this + 0x1c0) == 0) {
    uVar3 = CONCAT22((short)((uint)this >> 0x10),0xffff);
  }
  else {
    LVar1 = FUN_10014752(*(int *)((int)this + 0x1c0));
    FUN_10014727(*(void **)((int)this + 0x1c0),(int)param_1);
    CString::CString((CString *)&stack0xffffffe0,param_2);
    uVar2 = FUN_10014527(*(void **)((int)this + 0x1c0));
    FUN_10014727(*(void **)((int)this + 0x1c0),LVar1);
    local_c = (undefined2)uVar2;
    uVar3 = CONCAT22(extraout_var,local_c);
  }
  return uVar3;
}


// ---- FUN_1000c915 @ 1000c915

LRESULT __thiscall FUN_1000c915(void *this,short param_1,char *param_2)

{
  LPARAM LVar1;
  LRESULT LVar2;
  
  if (*(int *)((int)this + 0x1c0) == 0) {
    LVar2 = 0;
  }
  else {
    LVar1 = FUN_10014752(*(int *)((int)this + 0x1c0));
    FUN_10014727(*(void **)((int)this + 0x1c0),(int)param_1);
    CString::CString((CString *)&stack0xffffffe0,param_2);
    LVar2 = FUN_10014107(*(int *)((int)this + 0x1c0));
    FUN_10014727(*(void **)((int)this + 0x1c0),LVar1);
  }
  return LVar2;
}


// ---- FUN_1000c996 @ 1000c996

LRESULT __thiscall FUN_1000c996(void *this,short param_1,char *param_2)

{
  LPARAM LVar1;
  LRESULT LVar2;
  
  if (*(int *)((int)this + 0x1c0) == 0) {
    LVar2 = 0;
  }
  else {
    LVar1 = FUN_10014752(*(int *)((int)this + 0x1c0));
    FUN_10014727(*(void **)((int)this + 0x1c0),(int)param_1);
    CString::CString((CString *)&stack0xffffffe0,param_2);
    LVar2 = FUN_100141b7(*(int *)((int)this + 0x1c0));
    FUN_10014727(*(void **)((int)this + 0x1c0),LVar1);
  }
  return LVar2;
}


// ---- FUN_1000ca17 @ 1000ca17

LRESULT __thiscall FUN_1000ca17(void *this,short param_1,char *param_2)

{
  LPARAM LVar1;
  LRESULT LVar2;
  
  if (*(int *)((int)this + 0x1c0) == 0) {
    LVar2 = 0;
  }
  else {
    LVar1 = FUN_10014752(*(int *)((int)this + 0x1c0));
    FUN_10014727(*(void **)((int)this + 0x1c0),(int)param_1);
    CString::CString((CString *)&stack0xffffffe0,param_2);
    LVar2 = FUN_10014a85(*(int *)((int)this + 0x1c0));
    FUN_10014727(*(void **)((int)this + 0x1c0),LVar1);
  }
  return LVar2;
}


// ---- FUN_1000ca98 @ 1000ca98

LRESULT __thiscall FUN_1000ca98(void *this,short param_1,char *param_2)

{
  LPARAM LVar1;
  LRESULT LVar2;
  
  if (*(int *)((int)this + 0x1c0) == 0) {
    LVar2 = 0;
  }
  else {
    LVar1 = FUN_10014752(*(int *)((int)this + 0x1c0));
    FUN_10014727(*(void **)((int)this + 0x1c0),(int)param_1);
    CString::CString((CString *)&stack0xffffffe0,param_2);
    LVar2 = FUN_100149d5(*(int *)((int)this + 0x1c0));
    FUN_10014727(*(void **)((int)this + 0x1c0),LVar1);
  }
  return LVar2;
}


// ---- FUN_1000cb19 @ 1000cb19

undefined4 __fastcall FUN_1000cb19(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x1c0) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_1001534c();
  }
  return uVar1;
}


// ---- FUN_1000cb4d @ 1000cb4d

void __thiscall FUN_1000cb4d(void *this,LPARAM param_1)

{
  if (*(int *)((int)this + 0x1c0) != 0) {
    FUN_10015525(*(void **)((int)this + 0x1c0),param_1);
  }
  return;
}


// ---- FUN_1000cb78 @ 1000cb78

void __thiscall FUN_1000cb78(void *this,LPARAM param_1)

{
  if (*(int *)((int)this + 0x1c0) != 0) {
    FUN_100154fc(*(void **)((int)this + 0x1c0),param_1);
  }
  return;
}


// ---- FUN_1000cbb0 @ 1000cbb0

void FUN_1000cbb0(uint param_1)

{
  operator_new(param_1);
  return;
}


// ---- FUN_1000cbd0 @ 1000cbd0

COleObjectFactory * __thiscall
FUN_1000cbd0(void *this,_GUID *param_1,CRuntimeClass *param_2,int param_3,char *param_4)

{
  COleObjectFactory::COleObjectFactory(this,param_1,param_2,param_3,param_4);
  *(undefined ***)this = &PTR_LAB_10019b98;
  return this;
}


// ---- FUN_1000cc10 @ 1000cc10

COleObjectFactory * __thiscall FUN_1000cc10(void *this,uint param_1)

{
  FUN_1000cc40(this);
  if ((param_1 & 1) != 0) {
    FUN_10001190(this);
  }
  return this;
}


// ---- FUN_1000cc40 @ 1000cc40

void __fastcall FUN_1000cc40(COleObjectFactory *param_1)

{
  COleObjectFactory::~COleObjectFactory(param_1);
  return;
}


// ---- FUN_1000cc60 @ 1000cc60

COleControl * __thiscall FUN_1000cc60(void *this,uint param_1)

{
  FUN_10007573(this);
  if ((param_1 & 1) != 0) {
    FUN_10001190(this);
  }
  return this;
}


// ---- FUN_1000cc90 @ 1000cc90

undefined4 __fastcall FUN_1000cc90(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1c8);
}


// ---- FUN_1000ccb0 @ 1000ccb0

bool FUN_1000ccb0(void *param_1,uchar *param_2)

{
  int iVar1;
  
  iVar1 = FUN_1000ccd0(param_1,param_2);
  return (bool)('\x01' - (iVar1 != 0));
}


// ---- FUN_1000ccd0 @ 1000ccd0

void __thiscall FUN_1000ccd0(void *this,uchar *param_1)

{
  FUN_1000ccf0(*(uchar **)this,param_1);
  return;
}


// ---- FUN_1000ccf0 @ 1000ccf0

void __cdecl FUN_1000ccf0(uchar *param_1,uchar *param_2)

{
  _mbscmp(param_1,param_2);
  return;
}


// ---- FUN_1000cd10 @ 1000cd10

void __fastcall FUN_1000cd10(int param_1)

{
  FUN_1000d160(param_1);
  return;
}


// ---- FUN_1000cd30 @ 1000cd30

void FUN_1000cd30(void)

{
  return;
}


// ---- FUN_1000cd40 @ 1000cd40

void __fastcall FUN_1000cd40(COleControl *param_1)

{
  COleControl::FireEvent(param_1,(long)param_1,(uchar *)0x2);
  return;
}


// ---- FUN_1000cd60 @ 1000cd60

void __thiscall FUN_1000cd60(void *this,COleControl *param_1)

{
  COleControl::FireEvent(param_1,(long)this,(uchar *)0x1);
  return;
}


// ---- FUN_1000cd90 @ 1000cd90

void __fastcall FUN_1000cd90(COleControl *param_1)

{
  COleControl::FireEvent(param_1,(long)param_1,(uchar *)0x3);
  return;
}


// ---- FUN_1000cdb0 @ 1000cdb0

void __fastcall FUN_1000cdb0(COleControl *param_1)

{
  COleControl::FireEvent(param_1,(long)param_1,(uchar *)0x8);
  return;
}


// ---- FUN_1000cdd0 @ 1000cdd0

void __fastcall FUN_1000cdd0(COleControl *param_1)

{
  COleControl::FireEvent(param_1,(long)param_1,(uchar *)0x4);
  return;
}


// ---- FUN_1000cdf0 @ 1000cdf0

void __thiscall FUN_1000cdf0(void *this,COleControl *param_1)

{
  COleControl::FireEvent(param_1,(long)this,(uchar *)0x9);
  return;
}


// ---- FUN_1000ce30 @ 1000ce30

void __fastcall FUN_1000ce30(COleControl *param_1)

{
  COleControl::FireEvent(param_1,(long)param_1,(uchar *)0x6);
  return;
}


// ---- FUN_1000ce50 @ 1000ce50

bool __fastcall FUN_1000ce50(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_1000ce70(param_1);
  return *(int *)(iVar1 + 4) == 0;
}


// ---- FUN_1000ce70 @ 1000ce70

int __fastcall FUN_1000ce70(int *param_1)

{
  return *param_1 + -0xc;
}


// ---- FUN_1000ce90 @ 1000ce90

undefined4 __fastcall FUN_1000ce90(undefined4 param_1)

{
  return param_1;
}


// ---- FUN_1000cea0 @ 1000cea0

undefined4 __fastcall FUN_1000cea0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1c4);
}


// ---- FUN_1000cec0 @ 1000cec0

void __thiscall FUN_1000cec0(void *this,int param_1,LPVOID param_2)

{
  GetObjectA(*(HANDLE *)((int)this + 4),param_1,param_2);
  return;
}


// ---- FUN_1000cef0 @ 1000cef0

undefined4 * __thiscall
FUN_1000cef0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 0xc) = param_4;
  return this;
}


// ---- FUN_1000cf30 @ 1000cf30

CGdiObject * __fastcall FUN_1000cf30(CGdiObject *param_1)

{
  CGdiObject::CGdiObject(param_1);
  *(undefined ***)param_1 = &PTR_GetRuntimeClass_10019e08;
  return param_1;
}


// ---- CGdiObject @ 1000cf50

/* Library Function - Single Match
    public: __thiscall CGdiObject::CGdiObject(void)
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2005 Debug, Visual Studio 2008 Debug, Visual
   Studio 2010 Debug */

CGdiObject * __thiscall CGdiObject::CGdiObject(CGdiObject *this)

{
  FUN_10004df0((undefined4 *)this);
  *(undefined ***)this = &PTR_GetRuntimeClass_10019e1c;
  *(undefined4 *)(this + 4) = 0;
  return this;
}


// ---- FUN_1000cf80 @ 1000cf80

CGdiObject * __thiscall FUN_1000cf80(void *this,uint param_1)

{
  FUN_1000cfb0(this);
  if ((param_1 & 1) != 0) {
    FUN_10001190(this);
  }
  return this;
}


// ---- FUN_1000cfb0 @ 1000cfb0

void __fastcall FUN_1000cfb0(CGdiObject *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10017779;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined ***)param_1 = &PTR_GetRuntimeClass_10019e1c;
  local_8 = 0;
  CGdiObject::DeleteObject(param_1);
  local_8 = 0xffffffff;
  FUN_10004e40((undefined4 *)param_1);
  ExceptionList = local_10;
  return;
}


// ---- FUN_1000d010 @ 1000d010

CGdiObject * __thiscall FUN_1000d010(void *this,uint param_1)

{
  FUN_1000d040(this);
  if ((param_1 & 1) != 0) {
    FUN_10001190(this);
  }
  return this;
}


// ---- FUN_1000d040 @ 1000d040

void __fastcall FUN_1000d040(CGdiObject *param_1)

{
  *(undefined ***)param_1 = &PTR_GetRuntimeClass_10019e08;
  FUN_1000cfb0(param_1);
  return;
}


// ---- FUN_1000d060 @ 1000d060

void __thiscall FUN_1000d060(void *this,uint param_1)

{
  LPCSTR lpBitmapName;
  HINSTANCE__ *hInstance;
  HBITMAP pHVar1;
  
  lpBitmapName = (LPCSTR)(param_1 & 0xffff);
  hInstance = AfxFindResourceHandle((char *)(param_1 & 0xffff),(char *)0x2);
  pHVar1 = LoadBitmapA(hInstance,lpBitmapName);
  CGdiObject::Attach(this,pHVar1);
  return;
}


// ---- FUN_1000d0a0 @ 1000d0a0

void __thiscall FUN_1000d0a0(void *this,undefined4 param_1,COleControl *param_2)

{
  COleControl::FireEvent(param_2,(long)this,(uchar *)0x7);
  return;
}


// ---- FUN_1000d0d0 @ 1000d0d0

void __thiscall FUN_1000d0d0(void *this,short param_1)

{
  COleControl::FireEvent((COleControl *)(int)param_1,(long)this,(uchar *)0xa);
  return;
}


// ---- FUN_1000d100 @ 1000d100

void __thiscall FUN_1000d100(void *this,short param_1)

{
  COleControl::FireEvent((COleControl *)(int)param_1,(long)this,(uchar *)0xb);
  return;
}


// ---- FUN_1000d130 @ 1000d130

bool FUN_1000d130(void *param_1,undefined4 *param_2)

{
  uchar *puVar1;
  int iVar2;
  
  puVar1 = (uchar *)FUN_100026c0(param_2);
  iVar2 = FUN_1000ccd0(param_1,puVar1);
  return iVar2 != 0;
}


// ---- FUN_1000d160 @ 1000d160

undefined4 __fastcall FUN_1000d160(int param_1)

{
  undefined4 local_c;
  
  if (param_1 == 0) {
    local_c = 0;
  }
  else {
    local_c = *(undefined4 *)(param_1 + 0x20);
  }
  return local_c;
}


// ---- FUN_1000d190 @ 1000d190

void __thiscall FUN_1000d190(void *this,UINT param_1,WPARAM param_2,LPARAM param_3)

{
  SendMessageA(*(HWND *)((int)this + 0x20),param_1,param_2,param_3);
  return;
}


// ---- FUN_1000d1c0 @ 1000d1c0

void __thiscall FUN_1000d1c0(void *this,UINT_PTR param_1,UINT param_2,TIMERPROC param_3)

{
  SetTimer(*(HWND *)((int)this + 0x20),param_1,param_2,param_3);
  return;
}


// ---- FUN_1000d1f0 @ 1000d1f0

void __thiscall FUN_1000d1f0(void *this,UINT_PTR param_1)

{
  KillTimer(*(HWND *)((int)this + 0x20),param_1);
  return;
}


// ---- FUN_1000d210 @ 1000d210

void __fastcall FUN_1000d210(CWnd *param_1)

{
  CWnd::Default(param_1);
  return;
}


// ---- FUN_1000d230 @ 1000d230

bool __fastcall FUN_1000d230(int param_1)

{
  return *(int *)(param_1 + 0x24) != 0;
}


// ---- FUN_1000d250 @ 1000d250

tagVARIANT * __fastcall FUN_1000d250(tagVARIANT *param_1)

{
  AfxVariantInit(param_1);
  return param_1;
}


// ---- FUN_1000d270 @ 1000d270

void __fastcall FUN_1000d270(VARIANTARG *param_1)

{
  VariantClear(param_1);
  return;
}


// ---- ExchangeVersion @ 1000d290

/* Library Function - Single Match
    public: int __thiscall COleControl::ExchangeVersion(class CPropExchange *,unsigned long,int)
   
   Library: Visual Studio 2003 Debug */

int __thiscall
COleControl::ExchangeVersion(COleControl *this,CPropExchange *param_1,ulong param_2,int param_3)

{
  int iVar1;
  
  iVar1 = (*(code *)**(undefined4 **)param_1)(this + 0x48,param_2,param_3);
  return iVar1;
}


// ---- CreateObject @ 1000d2c0

/* Library Function - Multiple Matches With Same Base Name
    public: static class CNoTrackObject * __stdcall CProcessLocal<class
   _AFX_BASE_MODULE_STATE>::CreateObject(void)
    public: static class CNoTrackObject * __stdcall CThreadLocal<class
   AFX_MODULE_THREAD_STATE>::CreateObject(void)
    public: static class CNoTrackObject * __stdcall CThreadLocal<class
   _AFX_THREAD_STATE>::CreateObject(void)
    public: static class CObject * __stdcall CMDIChildWnd::CreateObject(void)
     6 names - too many to list
   
   Library: Visual Studio 2003 Debug */

COlePropertyPage * CreateObject(void)

{
  COlePropertyPage *pCVar1;
  COlePropertyPage *local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1001779a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pCVar1 = (COlePropertyPage *)FUN_1000cbb0(0xd8);
  local_8 = 0;
  if (pCVar1 == (COlePropertyPage *)0x0) {
    local_1c = (COlePropertyPage *)0x0;
  }
  else {
    local_1c = FUN_1000d434(pCVar1);
  }
  ExceptionList = local_10;
  return local_1c;
}


// ---- FUN_1000d327 @ 1000d327

undefined * FUN_1000d327(void)

{
  return classCOlePropertyPage_exref;
}


// ---- FUN_1000d331 @ 1000d331

undefined ** FUN_1000d331(void)

{
  return &PTR_s_CParameterManagerPropPage_10019e40;
}


// ---- FUN_1000d341 @ 1000d341

undefined * FUN_1000d341(void)

{
  return messageMap_exref;
}


// ---- FUN_1000d34b @ 1000d34b

undefined ** FUN_1000d34b(void)

{
  return &PTR_FUN_10019e58;
}


// ---- FUN_1000d35b @ 1000d35b

void FUN_1000d35b(void)

{
  FUN_1000d36a();
  FUN_1000d38a();
  return;
}


// ---- FUN_1000d36a @ 1000d36a

void FUN_1000d36a(void)

{
  FUN_1000d470(&DAT_10022270,(_GUID *)&DAT_10019e98,
               (CRuntimeClass *)&PTR_s_CParameterManagerPropPage_10019e40,0,
               "PARAMMGR.ParamMgrPropPage.1");
  return;
}


// ---- FUN_1000d38a @ 1000d38a

void FUN_1000d38a(void)

{
  FUN_10016dde(FUN_1000d39c);
  return;
}


// ---- FUN_1000d39c @ 1000d39c

void FUN_1000d39c(void)

{
  if ((DAT_10022268 & 1) == 0) {
    DAT_10022268 = DAT_10022268 | 1;
    FUN_1000cc40((COleObjectFactory *)&DAT_10022270);
  }
  return;
}


// ---- FUN_1000d3c8 @ 1000d3c8

undefined4 FUN_1000d3c8(undefined4 *param_1)

{
  *param_1 = DAT_10019e98;
  param_1[1] = DAT_10019e9c;
  param_1[2] = DAT_10019ea0;
  param_1[3] = DAT_10019ea4;
  return 0;
}


// ---- FUN_1000d3fd @ 1000d3fd

void __thiscall FUN_1000d3fd(void *this,int param_1)

{
  _GUID *p_Var1;
  HINSTANCE__ *pHVar2;
  uint uVar3;
  
  if (param_1 == 0) {
    AfxOleUnregisterClass((_GUID *)((int)this + 0x28),(char *)0x0);
  }
  else {
    uVar3 = 2;
    p_Var1 = (_GUID *)((int)this + 0x28);
    pHVar2 = (HINSTANCE__ *)FUN_10005120();
    AfxOleRegisterPropertyPageClass(pHVar2,p_Var1,uVar3);
  }
  return;
}


// ---- FUN_1000d434 @ 1000d434

COlePropertyPage * __fastcall FUN_1000d434(COlePropertyPage *param_1)

{
  COlePropertyPage::COlePropertyPage(param_1,100,100);
  *(undefined ***)param_1 = &PTR_FUN_10019f1c;
  return param_1;
}


// ---- FUN_1000d457 @ 1000d457

void FUN_1000d457(CDataExchange *param_1)

{
  DDP_PostProcessing(param_1);
  return;
}


// ---- FUN_1000d470 @ 1000d470

COleObjectFactory * __thiscall
FUN_1000d470(void *this,_GUID *param_1,CRuntimeClass *param_2,int param_3,char *param_4)

{
  COleObjectFactory::COleObjectFactory(this,param_1,param_2,param_3,param_4);
  *(undefined ***)this = &PTR_LAB_10019ea8;
  return this;
}


// ---- FUN_1000d4b0 @ 1000d4b0

COlePropertyPage * __thiscall FUN_1000d4b0(void *this,uint param_1)

{
  FUN_1000d4e0(this);
  if ((param_1 & 1) != 0) {
    FUN_10001190(this);
  }
  return this;
}


// ---- FUN_1000d4e0 @ 1000d4e0

void __fastcall FUN_1000d4e0(COlePropertyPage *param_1)

{
  COlePropertyPage::~COlePropertyPage(param_1);
  return;
}


// ---- FUN_1000d500 @ 1000d500

undefined4 * __thiscall FUN_1000d500(void *this,char *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_100177e9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_10004df0(this);
  local_8 = 0;
  CString::CString((CString *)((int)this + 4));
  local_8._0_1_ = 1;
  CString::CString((CString *)((int)this + 8));
  local_8._0_1_ = 2;
  CString::CString((CString *)((int)this + 0xc));
  local_8._0_1_ = 3;
  CString::CString((CString *)((int)this + 0x10));
  local_8 = CONCAT31(local_8._1_3_,4);
  *(undefined ***)this = &PTR_LAB_1001a03c;
  CString::operator=((CString *)((int)this + 4),s_LEO_32_100202c8);
  CString::operator=((CString *)((int)this + 0xc),&DAT_100202d0);
  CString::operator=((CString *)((int)this + 0x10),param_1);
  ExceptionList = local_10;
  return this;
}


// ---- FUN_1000d5b9 @ 1000d5b9

void __fastcall FUN_1000d5b9(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10017820;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = &PTR_LAB_1001a03c;
  local_8 = 3;
  CString::~CString((CString *)(param_1 + 4));
  local_8._0_1_ = 2;
  CString::~CString((CString *)(param_1 + 3));
  local_8._0_1_ = 1;
  CString::~CString((CString *)(param_1 + 2));
  local_8 = (uint)local_8._1_3_ << 8;
  CString::~CString((CString *)(param_1 + 1));
  local_8 = 0xffffffff;
  FUN_10004e40(param_1);
  ExceptionList = local_10;
  return;
}


// ---- FUN_1000d63a @ 1000d63a

void __thiscall FUN_1000d63a(void *this,char *param_1)

{
  CString::operator=((CString *)((int)this + 8),param_1);
  return;
}


// ---- FUN_1000d656 @ 1000d656

CString * __thiscall FUN_1000d656(void *this,CString *param_1)

{
  CString::CString(param_1,(CString *)((int)this + 8));
  return param_1;
}


// ---- FUN_1000d687 @ 1000d687

CString * __thiscall FUN_1000d687(void *this,CString *param_1,char *param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  CString *pCVar2;
  CString local_1c [4];
  CString local_18 [4];
  CString local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1001785c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  CString::CString(local_14,param_2);
  local_8 = 1;
  bVar1 = FUN_1000ce50((int *)((int)this + 8));
  if (CONCAT31(extraout_var,bVar1) == 0) {
    pCVar2 = (CString *)operator+(local_18,(char *)((int)this + 8));
    local_8._0_1_ = 2;
    pCVar2 = (CString *)operator+(local_1c,pCVar2);
    local_8._0_1_ = 3;
    CString::operator=(local_14,pCVar2);
    local_8._0_1_ = 2;
    CString::~CString(local_1c);
    local_8 = CONCAT31(local_8._1_3_,1);
    CString::~CString(local_18);
  }
  CString::CString(param_1,local_14);
  local_8 = local_8 & 0xffffff00;
  CString::~CString(local_14);
  ExceptionList = local_10;
  return param_1;
}


// ---- FUN_1000d766 @ 1000d766

CString * FUN_1000d766(CString *param_1,LPCSTR param_2,char *param_3)

{
  LPBYTE lpData;
  DWORD *lpcbData;
  int local_24;
  CString local_20 [4];
  DWORD local_1c;
  DWORD local_18;
  HKEY local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10017886;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = FUN_1000df01();
  if (local_14 == (HKEY)0x0) {
    CString::CString(param_1,param_3);
  }
  else {
    CString::CString(local_20);
    local_8 = 1;
    local_24 = RegQueryValueExA(local_14,param_2,(LPDWORD)0x0,&local_18,(LPBYTE)0x0,&local_1c);
    if (local_24 == 0) {
      lpcbData = &local_1c;
      lpData = (LPBYTE)CString::GetBuffer(local_20,local_1c);
      local_24 = RegQueryValueExA(local_14,param_2,(LPDWORD)0x0,&local_18,lpData,lpcbData);
      CString::ReleaseBuffer(local_20,-1);
    }
    RegCloseKey(local_14);
    if (local_24 == 0) {
      CString::CString(param_1,local_20);
      local_8 = local_8 & 0xffffff00;
      CString::~CString(local_20);
    }
    else {
      CString::CString(param_1,param_3);
      local_8 = local_8 & 0xffffff00;
      CString::~CString(local_20);
    }
  }
  ExceptionList = local_10;
  return param_1;
}


// ---- FUN_1000d886 @ 1000d886

undefined4 FUN_1000d886(LPCSTR param_1,undefined4 param_2)

{
  LSTATUS LVar1;
  DWORD local_14;
  DWORD local_10;
  HKEY local_c;
  undefined4 local_8;
  
  local_c = FUN_1000df01();
  if (local_c != (HKEY)0x0) {
    local_14 = 4;
    LVar1 = RegQueryValueExA(local_c,param_1,(LPDWORD)0x0,&local_10,(LPBYTE)&local_8,&local_14);
    RegCloseKey(local_c);
    if (LVar1 == 0) {
      param_2 = local_8;
    }
  }
  return param_2;
}


// ---- FUN_1000d8e9 @ 1000d8e9

bool FUN_1000d8e9(LPCSTR param_1)

{
  HKEY hKey;
  LSTATUS LVar1;
  bool bVar2;
  
  hKey = FUN_1000df01();
  if (hKey == (HKEY)0x0) {
    bVar2 = false;
  }
  else {
    LVar1 = RegSetValueExA(hKey,param_1,0,4,&stack0x00000008,4);
    RegCloseKey(hKey);
    bVar2 = LVar1 == 0;
  }
  return bVar2;
}


// ---- FUN_1000d942 @ 1000d942

bool FUN_1000d942(LPCSTR param_1,BYTE *param_2)

{
  HKEY hKey;
  int iVar1;
  LSTATUS LVar2;
  bool bVar3;
  
  hKey = FUN_1000df01();
  if (hKey == (HKEY)0x0) {
    bVar3 = false;
  }
  else {
    iVar1 = lstrlenA((LPCSTR)param_2);
    LVar2 = RegSetValueExA(hKey,param_1,0,1,param_2,iVar1 + 1);
    RegCloseKey(hKey);
    bVar3 = LVar2 == 0;
  }
  return bVar3;
}


// ---- FUN_1000d9a0 @ 1000d9a0

CString * __thiscall
FUN_1000d9a0(void *this,CString *param_1,LPCSTR param_2,char *param_3,undefined *param_4)

{
  bool bVar1;
  undefined3 extraout_var;
  CString *pCVar2;
  LPCSTR pCVar3;
  CString local_1c [4];
  CString local_18 [4];
  CString local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_100178c2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  CString::CString(local_14,param_3);
  local_8 = 1;
  bVar1 = FUN_1000ce50((int *)((int)this + 8));
  if (CONCAT31(extraout_var,bVar1) == 0) {
    pCVar2 = (CString *)operator+(local_18,(char *)((int)this + 8));
    local_8._0_1_ = 2;
    pCVar2 = (CString *)operator+(local_1c,pCVar2);
    local_8._0_1_ = 3;
    CString::operator=(local_14,pCVar2);
    local_8._0_1_ = 2;
    CString::~CString(local_1c);
    local_8 = CONCAT31(local_8._1_3_,1);
    CString::~CString(local_18);
  }
  pCVar3 = (LPCSTR)FUN_100026c0((undefined4 *)local_14);
  FUN_1000e139(param_1,param_2,pCVar3,param_4);
  local_8 = local_8 & 0xffffff00;
  CString::~CString(local_14);
  ExceptionList = local_10;
  return param_1;
}


// ---- FUN_1000da8f @ 1000da8f

uint __thiscall FUN_1000da8f(void *this,LPCSTR param_1,char *param_2,BYTE *param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  CString *pCVar2;
  LPCSTR pCVar3;
  uint uVar4;
  CString local_1c [4];
  CString local_18 [4];
  CString local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_100178e7;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  CString::CString(local_14,param_2);
  local_8 = 0;
  bVar1 = FUN_1000ce50((int *)((int)this + 8));
  if (CONCAT31(extraout_var,bVar1) == 0) {
    pCVar2 = (CString *)operator+(local_18,(char *)((int)this + 8));
    local_8._0_1_ = 1;
    pCVar2 = (CString *)operator+(local_1c,pCVar2);
    local_8._0_1_ = 2;
    CString::operator=(local_14,pCVar2);
    local_8._0_1_ = 1;
    CString::~CString(local_1c);
    local_8 = (uint)local_8._1_3_ << 8;
    CString::~CString(local_18);
  }
  pCVar3 = (LPCSTR)FUN_100026c0((undefined4 *)local_14);
  uVar4 = FUN_1000e39f(this,param_1,pCVar3,param_3);
  local_8 = 0xffffffff;
  CString::~CString(local_14);
  ExceptionList = local_10;
  return uVar4;
}


// ---- FUN_1000db71 @ 1000db71

uint __thiscall FUN_1000db71(void *this,LPCSTR param_1,char *param_2,undefined4 param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  CString *pCVar2;
  LPCSTR pCVar3;
  uint uVar4;
  CString local_1c [4];
  CString local_18 [4];
  CString local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1001790c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  CString::CString(local_14,param_2);
  local_8 = 0;
  bVar1 = FUN_1000ce50((int *)((int)this + 8));
  if (CONCAT31(extraout_var,bVar1) == 0) {
    pCVar2 = (CString *)operator+(local_18,(char *)((int)this + 8));
    local_8._0_1_ = 1;
    pCVar2 = (CString *)operator+(local_1c,pCVar2);
    local_8._0_1_ = 2;
    CString::operator=(local_14,pCVar2);
    local_8._0_1_ = 1;
    CString::~CString(local_1c);
    local_8 = (uint)local_8._1_3_ << 8;
    CString::~CString(local_18);
  }
  pCVar3 = (LPCSTR)FUN_100026c0((undefined4 *)local_14);
  uVar4 = FUN_1000e304(this,param_1,pCVar3,param_3);
  local_8 = 0xffffffff;
  CString::~CString(local_14);
  ExceptionList = local_10;
  return uVar4;
}


// ---- FUN_1000dc53 @ 1000dc53

UINT __thiscall FUN_1000dc53(void *this,LPCSTR param_1,char *param_2,UINT param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  CString *pCVar2;
  LPCSTR pCVar3;
  UINT UVar4;
  CString local_1c [4];
  CString local_18 [4];
  CString local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10017931;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  CString::CString(local_14,param_2);
  local_8 = 0;
  bVar1 = FUN_1000ce50((int *)((int)this + 8));
  if (CONCAT31(extraout_var,bVar1) == 0) {
    pCVar2 = (CString *)operator+(local_18,(char *)((int)this + 8));
    local_8._0_1_ = 1;
    pCVar2 = (CString *)operator+(local_1c,pCVar2);
    local_8._0_1_ = 2;
    CString::operator=(local_14,pCVar2);
    local_8._0_1_ = 1;
    CString::~CString(local_1c);
    local_8 = (uint)local_8._1_3_ << 8;
    CString::~CString(local_18);
  }
  pCVar3 = (LPCSTR)FUN_100026c0((undefined4 *)local_14);
  UVar4 = FUN_1000e0a3(this,param_1,pCVar3,param_3);
  local_8 = 0xffffffff;
  CString::~CString(local_14);
  ExceptionList = local_10;
  return UVar4;
}


// ---- FUN_1000dd35 @ 1000dd35

undefined4 __thiscall
FUN_1000dd35(void *this,LPCSTR param_1,char *param_2,int *param_3,uint *param_4)

{
  bool bVar1;
  undefined3 extraout_var;
  CString *pCVar2;
  LPCSTR pCVar3;
  undefined4 uVar4;
  CString local_1c [4];
  CString local_18 [4];
  CString local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10017956;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  CString::CString(local_14,param_2);
  local_8 = 0;
  bVar1 = FUN_1000ce50((int *)((int)this + 8));
  if (CONCAT31(extraout_var,bVar1) == 0) {
    pCVar2 = (CString *)operator+(local_18,(char *)((int)this + 8));
    local_8._0_1_ = 1;
    pCVar2 = (CString *)operator+(local_1c,pCVar2);
    local_8._0_1_ = 2;
    CString::operator=(local_14,pCVar2);
    local_8._0_1_ = 1;
    CString::~CString(local_1c);
    local_8 = (uint)local_8._1_3_ << 8;
    CString::~CString(local_18);
  }
  pCVar3 = (LPCSTR)FUN_100026c0((undefined4 *)local_14);
  uVar4 = FUN_1000e4b1(this,param_1,pCVar3,param_3,param_4);
  local_8 = 0xffffffff;
  CString::~CString(local_14);
  ExceptionList = local_10;
  return uVar4;
}


// ---- FUN_1000de1b @ 1000de1b

uint __thiscall FUN_1000de1b(void *this,LPCSTR param_1,char *param_2,BYTE *param_3,uint param_4)

{
  bool bVar1;
  undefined3 extraout_var;
  CString *pCVar2;
  LPCSTR pCVar3;
  uint uVar4;
  CString local_1c [4];
  CString local_18 [4];
  CString local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1001797b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  CString::CString(local_14,param_2);
  local_8 = 0;
  bVar1 = FUN_1000ce50((int *)((int)this + 8));
  if (CONCAT31(extraout_var,bVar1) == 0) {
    pCVar2 = (CString *)operator+(local_18,(char *)((int)this + 8));
    local_8._0_1_ = 1;
    pCVar2 = (CString *)operator+(local_1c,pCVar2);
    local_8._0_1_ = 2;
    CString::operator=(local_14,pCVar2);
    local_8._0_1_ = 1;
    CString::~CString(local_1c);
    local_8 = (uint)local_8._1_3_ << 8;
    CString::~CString(local_18);
  }
  pCVar3 = (LPCSTR)FUN_100026c0((undefined4 *)local_14);
  uVar4 = FUN_1000e6b4(this,param_1,pCVar3,param_3,param_4);
  local_8 = 0xffffffff;
  CString::~CString(local_14);
  ExceptionList = local_10;
  return uVar4;
}


// ---- FUN_1000df01 @ 1000df01

HKEY FUN_1000df01(void)

{
  HKEY pHVar1;
  LPCSTR lpSubKey;
  DWORD ulOptions;
  REGSAM samDesired;
  HKEY *phkResult;
  CString local_1c [4];
  HKEY local_18;
  LSTATUS local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1001798e;
  local_10 = ExceptionList;
  local_18 = (HKEY)0x0;
  ExceptionList = &local_10;
  operator+((char *)local_1c,(CString *)"Software\\Leo Electron Microscopy Ltd\\");
  local_8 = 0;
  phkResult = &local_18;
  samDesired = 0x2001f;
  ulOptions = 0;
  lpSubKey = (LPCSTR)FUN_100026c0((undefined4 *)local_1c);
  local_14 = RegOpenKeyExA((HKEY)0x80000002,lpSubKey,ulOptions,samDesired,phkResult);
  pHVar1 = local_18;
  local_8 = 0xffffffff;
  CString::~CString(local_1c);
  ExceptionList = local_10;
  return pHVar1;
}


// ---- FUN_1000df8a @ 1000df8a

HKEY __fastcall FUN_1000df8a(int param_1)

{
  LSTATUS LVar1;
  LPCSTR pCVar2;
  DWORD DVar3;
  LPSTR pCVar4;
  DWORD DVar5;
  REGSAM RVar6;
  LPSECURITY_ATTRIBUTES p_Var7;
  HKEY *ppHVar8;
  DWORD *pDVar9;
  DWORD local_14;
  HKEY local_10;
  HKEY local_c;
  HKEY local_8;
  
  local_c = (HKEY)0x0;
  local_8 = (HKEY)0x0;
  local_10 = (HKEY)0x0;
  LVar1 = RegOpenKeyExA((HKEY)0x80000001,"Software",0,0x2001f,&local_8);
  if (LVar1 == 0) {
    pDVar9 = &local_14;
    ppHVar8 = &local_10;
    p_Var7 = (LPSECURITY_ATTRIBUTES)0x0;
    RVar6 = 0x2001f;
    DVar5 = 0;
    pCVar4 = (LPSTR)0x0;
    DVar3 = 0;
    pCVar2 = (LPCSTR)FUN_100026c0((undefined4 *)(param_1 + 0xc));
    LVar1 = RegCreateKeyExA(local_8,pCVar2,DVar3,pCVar4,DVar5,RVar6,p_Var7,ppHVar8,pDVar9);
    if (LVar1 == 0) {
      pDVar9 = &local_14;
      ppHVar8 = &local_c;
      p_Var7 = (LPSECURITY_ATTRIBUTES)0x0;
      RVar6 = 0x2001f;
      DVar5 = 0;
      pCVar4 = (LPSTR)0x0;
      DVar3 = 0;
      pCVar2 = (LPCSTR)FUN_100026c0((undefined4 *)(param_1 + 0x10));
      RegCreateKeyExA(local_10,pCVar2,DVar3,pCVar4,DVar5,RVar6,p_Var7,ppHVar8,pDVar9);
    }
  }
  if (local_8 != (HKEY)0x0) {
    RegCloseKey(local_8);
  }
  if (local_10 != (HKEY)0x0) {
    RegCloseKey(local_10);
  }
  return local_c;
}


// ---- FUN_1000e048 @ 1000e048

HKEY __thiscall FUN_1000e048(void *this,LPCSTR param_1)

{
  DWORD local_10;
  HKEY local_c;
  HKEY local_8;
  
  local_8 = (HKEY)0x0;
  local_c = FUN_1000df8a((int)this);
  if (local_c == (HKEY)0x0) {
    local_8 = (HKEY)0x0;
  }
  else {
    RegCreateKeyExA(local_c,param_1,0,(LPSTR)0x0,0,0x2001f,(LPSECURITY_ATTRIBUTES)0x0,&local_8,
                    &local_10);
    RegCloseKey(local_c);
  }
  return local_8;
}


// ---- FUN_1000e0a3 @ 1000e0a3

UINT __thiscall FUN_1000e0a3(void *this,LPCSTR param_1,LPCSTR param_2,UINT param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  LSTATUS LVar2;
  LPCSTR lpFileName;
  DWORD local_14;
  DWORD local_10;
  HKEY local_c;
  UINT local_8;
  
  bVar1 = FUN_1000ce50((int *)((int)this + 0xc));
  if (CONCAT31(extraout_var,bVar1) == 0) {
    local_c = FUN_1000e048(this,param_1);
    if (local_c != (HKEY)0x0) {
      local_14 = 4;
      LVar2 = RegQueryValueExA(local_c,param_2,(LPDWORD)0x0,&local_10,(LPBYTE)&local_8,&local_14);
      RegCloseKey(local_c);
      if (LVar2 == 0) {
        param_3 = local_8;
      }
    }
  }
  else {
    lpFileName = (LPCSTR)FUN_100026c0((undefined4 *)((int)this + 0x10));
    param_3 = GetPrivateProfileIntA(param_1,param_2,param_3,lpFileName);
  }
  return param_3;
}


// ---- FUN_1000e139 @ 1000e139

CString * FUN_1000e139(CString *param_1,LPCSTR param_2,LPCSTR param_3,undefined *param_4)

{
  int iVar1;
  HKEY pHVar2;
  LSTATUS LVar3;
  LPBYTE lpData;
  LPCSTR lpFileName;
  void *this;
  CHAR local_1024 [4088];
  undefined4 uStackY_2c;
  HKEY__ lpType;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_100179a1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_10016e20();
  iVar1 = FUN_100026c0((undefined4 *)((int)this + 0xc));
  if (iVar1 == 0) {
    if (param_4 == (undefined *)0x0) {
      param_4 = afxChNil_exref;
    }
    lpFileName = (LPCSTR)FUN_100026c0((undefined4 *)((int)this + 0x10));
    uStackY_2c = 0x1000e2cd;
    GetPrivateProfileStringA(param_2,param_3,param_4,local_1024,0x1000,lpFileName);
    CString::CString(param_1,local_1024);
  }
  else {
    pHVar2 = FUN_1000e048(this,param_2);
    if (pHVar2 == (HKEY)0x0) {
      CString::CString(param_1,param_4);
    }
    else {
      CString::CString((CString *)&stack0xffffffe0);
      local_8 = 0;
      pHVar2 = (HKEY)&stack0xffffffe4;
      lpType.unused = (int)&stack0xffffffe8;
      uStackY_2c = 0x1000e1e5;
      LVar3 = RegQueryValueExA(pHVar2,param_3,(LPDWORD)0x0,(LPDWORD)lpType.unused,(LPBYTE)0x0,
                               (LPDWORD)pHVar2);
      if (LVar3 == 0) {
        pHVar2 = (HKEY)&stack0xffffffe4;
        lpData = (LPBYTE)CString::GetBuffer((CString *)&stack0xffffffe0,lpType.unused);
        uStackY_2c = 0x1000e213;
        LVar3 = RegQueryValueExA(pHVar2,param_3,(LPDWORD)0x0,(LPDWORD)&stack0xffffffe8,lpData,
                                 (LPDWORD)pHVar2);
        pHVar2 = (HKEY)0xffffffff;
        CString::ReleaseBuffer((CString *)&stack0xffffffe0,-1);
      }
      RegCloseKey(pHVar2);
      if (LVar3 == 0) {
        CString::CString(param_1,(CString *)&stack0xffffffe0);
        local_8 = 0xffffffff;
        CString::~CString((CString *)&stack0xffffffe0);
      }
      else {
        CString::CString(param_1,param_4);
        local_8 = 0xffffffff;
        CString::~CString((CString *)&stack0xffffffe0);
      }
    }
  }
  ExceptionList = local_10;
  return param_1;
}


// ---- FUN_1000e304 @ 1000e304

uint __thiscall FUN_1000e304(void *this,LPCSTR param_1,LPCSTR param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  LPCSTR lpFileName;
  CHAR local_1c [16];
  int local_c;
  HKEY local_8;
  
  iVar1 = FUN_100026c0((undefined4 *)((int)this + 0xc));
  if (iVar1 == 0) {
    wsprintfA(local_1c,&DAT_100202f0,param_3);
    lpFileName = (LPCSTR)FUN_100026c0((undefined4 *)((int)this + 0x10));
    uVar2 = WritePrivateProfileStringA(param_1,param_2,local_1c,lpFileName);
  }
  else {
    local_8 = FUN_1000e048(this,param_1);
    if (local_8 == (HKEY)0x0) {
      uVar2 = 0;
    }
    else {
      local_c = RegSetValueExA(local_8,param_2,0,4,(BYTE *)&param_3,4);
      RegCloseKey(local_8);
      uVar2 = (uint)(local_c == 0);
    }
  }
  return uVar2;
}


// ---- FUN_1000e39f @ 1000e39f

uint __thiscall FUN_1000e39f(void *this,LPCSTR param_1,LPCSTR param_2,BYTE *param_3)

{
  int iVar1;
  HKEY pHVar2;
  LPCSTR lpFileName;
  uint uVar3;
  int local_8;
  
  iVar1 = FUN_100026c0((undefined4 *)((int)this + 0xc));
  if (iVar1 == 0) {
    lpFileName = (LPCSTR)FUN_100026c0((undefined4 *)((int)this + 0x10));
    uVar3 = WritePrivateProfileStringA(param_1,param_2,(LPCSTR)param_3,lpFileName);
  }
  else {
    if (param_2 == (LPCSTR)0x0) {
      pHVar2 = FUN_1000df8a((int)this);
      if (pHVar2 == (HKEY)0x0) {
        return 0;
      }
      local_8 = RegDeleteKeyA(pHVar2,param_1);
      RegCloseKey(pHVar2);
    }
    else if (param_3 == (BYTE *)0x0) {
      pHVar2 = FUN_1000e048(this,param_1);
      if (pHVar2 == (HKEY)0x0) {
        return 0;
      }
      local_8 = RegDeleteValueA(pHVar2,param_2);
      RegCloseKey(pHVar2);
    }
    else {
      pHVar2 = FUN_1000e048(this,param_1);
      if (pHVar2 == (HKEY)0x0) {
        return 0;
      }
      iVar1 = lstrlenA((LPCSTR)param_3);
      local_8 = RegSetValueExA(pHVar2,param_2,0,1,param_3,iVar1 + 1);
      RegCloseKey(pHVar2);
    }
    uVar3 = (uint)(local_8 == 0);
  }
  return uVar3;
}


// ---- FUN_1000e4b1 @ 1000e4b1

undefined4 __thiscall
FUN_1000e4b1(void *this,LPCSTR param_1,LPCSTR param_2,int *param_3,uint *param_4)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvVar6;
  undefined3 extraout_var;
  int local_2c;
  CString local_28 [4];
  LSTATUS local_24;
  undefined4 local_20;
  uint local_1c;
  DWORD local_18;
  HKEY local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_100179b4;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_3 = 0;
  *param_4 = 0;
  iVar4 = FUN_100026c0((undefined4 *)((int)this + 0xc));
  if (iVar4 == 0) {
    FUN_1000d9a0(this,local_28,param_1,param_2,(undefined *)0x0);
    local_8 = 0;
    bVar1 = FUN_1000ce50((int *)local_28);
    if (CONCAT31(extraout_var,bVar1) == 0) {
      iVar4 = FUN_1000eac0((int *)local_28);
      *param_4 = iVar4 / 2;
      pvVar6 = operator_new(*param_4);
      *param_3 = (int)pvVar6;
      for (local_2c = 0; local_2c < iVar4; local_2c = local_2c + 2) {
        cVar2 = FUN_1000eae0(local_28,local_2c + 1);
        cVar3 = FUN_1000eae0(local_28,local_2c);
        *(char *)(*param_3 + local_2c / 2) = (cVar2 + -0x41) * '\x10' + -0x41 + cVar3;
      }
      local_8 = 0xffffffff;
      CString::~CString(local_28);
      uVar5 = 1;
    }
    else {
      local_8 = 0xffffffff;
      CString::~CString(local_28);
      uVar5 = 0;
    }
  }
  else {
    local_20 = 0;
    local_14 = FUN_1000e048(this,param_1);
    if (local_14 == (HKEY)0x0) {
      uVar5 = 0;
    }
    else {
      local_24 = RegQueryValueExA(local_14,param_2,(LPDWORD)0x0,&local_18,(LPBYTE)0x0,&local_1c);
      *param_4 = local_1c;
      if (local_24 == 0) {
        pvVar6 = operator_new(*param_4);
        *param_3 = (int)pvVar6;
        local_24 = RegQueryValueExA(local_14,param_2,(LPDWORD)0x0,&local_18,(LPBYTE)*param_3,
                                    &local_1c);
      }
      RegCloseKey(local_14);
      if (local_24 == 0) {
        uVar5 = 1;
      }
      else {
        operator_delete((void *)*param_3);
        *param_3 = 0;
        uVar5 = 0;
      }
    }
  }
  ExceptionList = local_10;
  return uVar5;
}


// ---- FUN_1000e6b4 @ 1000e6b4

uint __thiscall FUN_1000e6b4(void *this,LPCSTR param_1,LPCSTR param_2,BYTE *param_3,uint param_4)

{
  int iVar1;
  HKEY hKey;
  uint uVar2;
  LSTATUS LVar3;
  BYTE *pBVar4;
  uint local_10;
  
  iVar1 = FUN_100026c0((undefined4 *)((int)this + 0xc));
  if (iVar1 == 0) {
    pBVar4 = operator_new(param_4 * 2 + 1);
    for (local_10 = 0; local_10 < param_4; local_10 = local_10 + 1) {
      pBVar4[local_10 * 2] = (param_3[local_10] & 0xf) + 0x41;
      pBVar4[local_10 * 2 + 1] = (char)((int)(uint)param_3[local_10] >> 4) + 'A';
    }
    pBVar4[local_10 * 2] = '\0';
    uVar2 = FUN_1000da8f(this,param_1,param_2,pBVar4);
    operator_delete(pBVar4);
  }
  else {
    hKey = FUN_1000e048(this,param_1);
    if (hKey == (HKEY)0x0) {
      uVar2 = 0;
    }
    else {
      LVar3 = RegSetValueExA(hKey,param_2,0,3,param_3,param_4);
      RegCloseKey(hKey);
      uVar2 = (uint)(LVar3 == 0);
    }
  }
  return uVar2;
}


// ---- FUN_1000e7c4 @ 1000e7c4

undefined4 __thiscall FUN_1000e7c4(void *this,undefined4 param_1,LPCSTR param_2,BYTE *param_3)

{
  undefined4 uVar1;
  bool bVar2;
  CString *pCVar3;
  undefined3 extraout_var;
  CString local_18 [4];
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_100179d0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  pCVar3 = (CString *)operator+((char *)local_18,(CString *)s_LEO_32__100202f4);
  local_8._0_1_ = 1;
  CString::operator=((CString *)((int)this + 4),pCVar3);
  local_8 = (uint)local_8._1_3_ << 8;
  CString::~CString(local_18);
  bVar2 = FUN_1000d942(param_2,param_3);
  local_14 = CONCAT31(extraout_var,bVar2);
  CString::operator=((CString *)((int)this + 4),s_LEO_32_100202fc);
  uVar1 = local_14;
  local_8 = 0xffffffff;
  CString::~CString((CString *)&param_1);
  ExceptionList = local_10;
  return uVar1;
}


// ---- FUN_1000e86e @ 1000e86e

undefined4 __thiscall FUN_1000e86e(void *this,undefined4 param_1,LPCSTR param_2,undefined4 param_3)

{
  undefined4 uVar1;
  bool bVar2;
  CString *pCVar3;
  undefined3 extraout_var;
  CString local_18 [4];
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_100179ec;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  pCVar3 = (CString *)operator+((char *)local_18,(CString *)s_LEO_32__10020304);
  local_8._0_1_ = 1;
  CString::operator=((CString *)((int)this + 4),pCVar3);
  local_8 = (uint)local_8._1_3_ << 8;
  CString::~CString(local_18);
  bVar2 = FUN_1000d8e9(param_2);
  local_14 = CONCAT31(extraout_var,bVar2);
  CString::operator=((CString *)((int)this + 4),s_LEO_32_1002030c);
  uVar1 = local_14;
  local_8 = 0xffffffff;
  CString::~CString((CString *)&param_1);
  ExceptionList = local_10;
  return uVar1;
}


// ---- FUN_1000e918 @ 1000e918

undefined4 __thiscall FUN_1000e918(void *this,undefined4 param_1,LPCSTR param_2,undefined4 param_3)

{
  undefined4 uVar1;
  CString *pCVar2;
  CString local_18 [4];
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10017a08;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  pCVar2 = (CString *)operator+((char *)local_18,(CString *)s_LEO_32__10020314);
  local_8._0_1_ = 1;
  CString::operator=((CString *)((int)this + 4),pCVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  CString::~CString(local_18);
  local_14 = FUN_1000d886(param_2,param_3);
  CString::operator=((CString *)((int)this + 4),s_LEO_32_1002031c);
  uVar1 = local_14;
  local_8 = 0xffffffff;
  CString::~CString((CString *)&param_1);
  ExceptionList = local_10;
  return uVar1;
}


// ---- FUN_1000e9c2 @ 1000e9c2

CString * __thiscall
FUN_1000e9c2(void *this,CString *param_1,undefined4 param_2,LPCSTR param_3,char *param_4)

{
  CString *pCVar1;
  CString local_18 [4];
  CString local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10017a44;
  local_10 = ExceptionList;
  local_8 = 1;
  ExceptionList = &local_10;
  pCVar1 = (CString *)operator+((char *)local_18,(CString *)s_LEO_32__10020324);
  local_8._0_1_ = 2;
  CString::operator=((CString *)((int)this + 4),pCVar1);
  local_8._0_1_ = 1;
  CString::~CString(local_18);
  FUN_1000d766(local_14,param_3,param_4);
  local_8._0_1_ = 3;
  CString::operator=((CString *)((int)this + 4),s_LEO_32_1002032c);
  CString::CString(param_1,local_14);
  local_8._0_1_ = 1;
  CString::~CString(local_14);
  local_8 = (uint)local_8._1_3_ << 8;
  CString::~CString((CString *)&param_2);
  ExceptionList = local_10;
  return param_1;
}


// ---- FUN_1000ea90 @ 1000ea90

undefined4 * __thiscall FUN_1000ea90(void *this,uint param_1)

{
  FUN_1000d5b9(this);
  if ((param_1 & 1) != 0) {
    FUN_10001190(this);
  }
  return this;
}


// ---- FUN_1000eac0 @ 1000eac0

undefined4 __fastcall FUN_1000eac0(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_1000ce70(param_1);
  return *(undefined4 *)(iVar1 + 4);
}


// ---- FUN_1000eae0 @ 1000eae0

undefined1 __thiscall FUN_1000eae0(void *this,int param_1)

{
  return *(undefined1 *)(*(int *)this + param_1);
}


// ---- FUN_1000eb00 @ 1000eb00

void FUN_1000eb00(void)

{
  FUN_1000eb0a();
  return;
}


// ---- FUN_1000eb0a @ 1000eb0a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000eb0a(void)

{
  _DAT_10022698 = RegisterWindowMessageA(s_LEO_D_SET_STATE_10020334);
  return;
}


// ---- FUN_1000eb1f @ 1000eb1f

void FUN_1000eb1f(void)

{
  FUN_1000eb29();
  return;
}


// ---- FUN_1000eb29 @ 1000eb29

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000eb29(void)

{
  _DAT_10022694 = RegisterWindowMessageA(s_LEO_D_SET_STRING_10020344);
  return;
}


// ---- FUN_1000eb3e @ 1000eb3e

void FUN_1000eb3e(void)

{
  FUN_1000eb48();
  return;
}


// ---- FUN_1000eb48 @ 1000eb48

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000eb48(void)

{
  _DAT_10022690 = RegisterWindowMessageA(s_LEO_D_SET_VALUE_10020358);
  return;
}


// ---- FUN_1000eb5d @ 1000eb5d

void FUN_1000eb5d(void)

{
  FUN_1000eb67();
  return;
}


// ---- FUN_1000eb67 @ 1000eb67

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000eb67(void)

{
  _DAT_1002268c = RegisterWindowMessageA(s_LEO_D_SET_XY_10020368);
  return;
}


// ---- FUN_1000eb7c @ 1000eb7c

void FUN_1000eb7c(void)

{
  FUN_1000eb86();
  return;
}


// ---- FUN_1000eb86 @ 1000eb86

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000eb86(void)

{
  _DAT_10022688 = RegisterWindowMessageA(s_LEO_D_GET_XY_10020378);
  return;
}


// ---- FUN_1000eb9b @ 1000eb9b

void FUN_1000eb9b(void)

{
  FUN_1000eba5();
  return;
}


// ---- FUN_1000eba5 @ 1000eba5

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000eba5(void)

{
  _DAT_10022684 = RegisterWindowMessageA(s_LEO_D_MOUSE_ADJUST_LEFT_10020388);
  return;
}


// ---- FUN_1000ebba @ 1000ebba

void FUN_1000ebba(void)

{
  FUN_1000ebc4();
  return;
}


// ---- FUN_1000ebc4 @ 1000ebc4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ebc4(void)

{
  _DAT_10022680 = RegisterWindowMessageA(s_LEO_D_MOUSE_ADJUST_MIDDLE_100203a0);
  return;
}


// ---- FUN_1000ebd9 @ 1000ebd9

void FUN_1000ebd9(void)

{
  FUN_1000ebe3();
  return;
}


// ---- FUN_1000ebe3 @ 1000ebe3

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ebe3(void)

{
  _DAT_1002267c = RegisterWindowMessageA(s_LEO_D_STEP_100203bc);
  return;
}


// ---- FUN_1000ebf8 @ 1000ebf8

void FUN_1000ebf8(void)

{
  FUN_1000ec02();
  return;
}


// ---- FUN_1000ec02 @ 1000ec02

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ec02(void)

{
  _DAT_10022678 = RegisterWindowMessageA(s_LEO_D_EXECUTE_100203c8);
  return;
}


// ---- FUN_1000ec17 @ 1000ec17

void FUN_1000ec17(void)

{
  FUN_1000ec21();
  return;
}


// ---- FUN_1000ec21 @ 1000ec21

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ec21(void)

{
  _DAT_10022674 = RegisterWindowMessageA(s_LEO_D_GET_COMMAND_100203d8);
  return;
}


// ---- FUN_1000ec36 @ 1000ec36

void FUN_1000ec36(void)

{
  FUN_1000ec40();
  return;
}


// ---- FUN_1000ec40 @ 1000ec40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ec40(void)

{
  _DAT_10022670 = RegisterWindowMessageA(s_LEO_D_GET_STATE_100203ec);
  return;
}


// ---- FUN_1000ec55 @ 1000ec55

void FUN_1000ec55(void)

{
  FUN_1000ec5f();
  return;
}


// ---- FUN_1000ec5f @ 1000ec5f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ec5f(void)

{
  _DAT_1002266c = RegisterWindowMessageA(s_LEO_D_GET_STATE_STRING_100203fc);
  return;
}


// ---- FUN_1000ec74 @ 1000ec74

void FUN_1000ec74(void)

{
  FUN_1000ec7e();
  return;
}


// ---- FUN_1000ec7e @ 1000ec7e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ec7e(void)

{
  _DAT_10022668 = RegisterWindowMessageA(s_LEO_D_GET_VALUE_10020414);
  return;
}


// ---- FUN_1000ec93 @ 1000ec93

void FUN_1000ec93(void)

{
  FUN_1000ec9d();
  return;
}


// ---- FUN_1000ec9d @ 1000ec9d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ec9d(void)

{
  _DAT_10022664 = RegisterWindowMessageA(s_LEO_GET_VALUE_EXTRA_10020424);
  return;
}


// ---- FUN_1000ecb2 @ 1000ecb2

void FUN_1000ecb2(void)

{
  FUN_1000ecbc();
  return;
}


// ---- FUN_1000ecbc @ 1000ecbc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ecbc(void)

{
  _DAT_10022660 = RegisterWindowMessageA(s_LEO_D_SET_FORMAT_MODIFIER_10020438);
  return;
}


// ---- FUN_1000ecd1 @ 1000ecd1

void FUN_1000ecd1(void)

{
  FUN_1000ecdb();
  return;
}


// ---- FUN_1000ecdb @ 1000ecdb

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ecdb(void)

{
  _DAT_1002265c = RegisterWindowMessageA(s_LEO_MACRO_MANAGER_REGISTER_10020454);
  return;
}


// ---- FUN_1000ecf0 @ 1000ecf0

void FUN_1000ecf0(void)

{
  FUN_1000ecfa();
  return;
}


// ---- FUN_1000ecfa @ 1000ecfa

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ecfa(void)

{
  _DAT_10022658 = RegisterWindowMessageA(s_LEO_LUT_MANAGER_REGISTER_10020470);
  return;
}


// ---- FUN_1000ed0f @ 1000ed0f

void FUN_1000ed0f(void)

{
  FUN_1000ed19();
  return;
}


// ---- FUN_1000ed19 @ 1000ed19

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ed19(void)

{
  _DAT_10022654 = RegisterWindowMessageA(s_PM_SERVER_READY_1002048c);
  return;
}


// ---- FUN_1000ed2e @ 1000ed2e

void FUN_1000ed2e(void)

{
  FUN_1000ed38();
  return;
}


// ---- FUN_1000ed38 @ 1000ed38

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ed38(void)

{
  _DAT_10022650 = RegisterWindowMessageA(s_PM_SERVER_LOADING_1002049c);
  return;
}


// ---- FUN_1000ed4d @ 1000ed4d

void FUN_1000ed4d(void)

{
  FUN_1000ed57();
  return;
}


// ---- FUN_1000ed57 @ 1000ed57

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ed57(void)

{
  _DAT_1002264c = RegisterWindowMessageA(s_PM_REFRESH_WINDOW_100204b0);
  return;
}


// ---- FUN_1000ed6c @ 1000ed6c

void FUN_1000ed6c(void)

{
  FUN_1000ed76();
  return;
}


// ---- FUN_1000ed76 @ 1000ed76

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ed76(void)

{
  _DAT_10022648 = RegisterWindowMessageA(s_PM_REGISTER_RETURN_100204c4);
  return;
}


// ---- FUN_1000ed8b @ 1000ed8b

void FUN_1000ed8b(void)

{
  FUN_1000ed95();
  return;
}


// ---- FUN_1000ed95 @ 1000ed95

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ed95(void)

{
  _DAT_10022644 = RegisterWindowMessageA(s_PM_SEM_CLOSE_100204d8);
  return;
}


// ---- FUN_1000edaa @ 1000edaa

void FUN_1000edaa(void)

{
  FUN_1000edb4();
  return;
}


// ---- FUN_1000edb4 @ 1000edb4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000edb4(void)

{
  _DAT_10022640 = RegisterWindowMessageA(s_LEO_MOUSE_FINISHED_ADJUST_100204e8);
  return;
}


// ---- FUN_1000edc9 @ 1000edc9

void FUN_1000edc9(void)

{
  FUN_1000edd3();
  return;
}


// ---- FUN_1000edd3 @ 1000edd3

void FUN_1000edd3(void)

{
  DAT_1002263c = RegisterWindowMessageA(s_PM_PARAMETER_NOTIFY_10020504);
  return;
}


// ---- FUN_1000ede8 @ 1000ede8

void FUN_1000ede8(void)

{
  FUN_1000edf2();
  return;
}


// ---- FUN_1000edf2 @ 1000edf2

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000edf2(void)

{
  _DAT_10022638 = RegisterWindowMessageA(s_PM_COARSE_FINE_CHANGED_10020518);
  return;
}


// ---- FUN_1000ee07 @ 1000ee07

void FUN_1000ee07(void)

{
  FUN_1000ee11();
  return;
}


// ---- FUN_1000ee11 @ 1000ee11

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ee11(void)

{
  _DAT_10022634 = RegisterWindowMessageA(s_PM_LICENCE_CHANGED_10020530);
  return;
}


// ---- FUN_1000ee26 @ 1000ee26

void FUN_1000ee26(void)

{
  FUN_1000ee30();
  return;
}


// ---- FUN_1000ee30 @ 1000ee30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ee30(void)

{
  _DAT_10022630 = RegisterWindowMessageA(s_PM_ZONE_OPMODE_CHANGED_10020544);
  return;
}


// ---- FUN_1000ee45 @ 1000ee45

void FUN_1000ee45(void)

{
  FUN_1000ee4f();
  return;
}


// ---- FUN_1000ee4f @ 1000ee4f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ee4f(void)

{
  _DAT_1002262c = RegisterWindowMessageA(s_PM_ZONE0_MAG_PIX_CHANGED_1002055c);
  return;
}


// ---- FUN_1000ee64 @ 1000ee64

void FUN_1000ee64(void)

{
  FUN_1000ee6e();
  return;
}


// ---- FUN_1000ee6e @ 1000ee6e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ee6e(void)

{
  _DAT_10022628 = RegisterWindowMessageA(s_PM_ZONE1_MAG_PIX_CHANGED_10020578);
  return;
}


// ---- FUN_1000ee83 @ 1000ee83

void FUN_1000ee83(void)

{
  FUN_1000ee8d();
  return;
}


// ---- FUN_1000ee8d @ 1000ee8d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ee8d(void)

{
  _DAT_10022624 = RegisterWindowMessageA(s_PM_ZONE2_MAG_PIX_CHANGED_10020594);
  return;
}


// ---- FUN_1000eea2 @ 1000eea2

void FUN_1000eea2(void)

{
  FUN_1000eeac();
  return;
}


// ---- FUN_1000eeac @ 1000eeac

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000eeac(void)

{
  _DAT_10022620 = RegisterWindowMessageA(s_PM_ZONE3_MAG_PIX_CHANGED_100205b0);
  return;
}


// ---- FUN_1000eec1 @ 1000eec1

void FUN_1000eec1(void)

{
  FUN_1000eecb();
  return;
}


// ---- FUN_1000eecb @ 1000eecb

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000eecb(void)

{
  _DAT_1002261c = RegisterWindowMessageA(s_PM_KNOB_ASSIGNMENT_100205cc);
  return;
}


// ---- FUN_1000eee0 @ 1000eee0

void FUN_1000eee0(void)

{
  FUN_1000eeea();
  return;
}


// ---- FUN_1000eeea @ 1000eeea

void FUN_1000eeea(void)

{
  DAT_10022618 = RegisterWindowMessageA(s_PM_SET_KNOB_ASSIGNMENT_100205e0);
  return;
}


// ---- FUN_1000eeff @ 1000eeff

void FUN_1000eeff(void)

{
  FUN_1000ef09();
  return;
}


// ---- FUN_1000ef09 @ 1000ef09

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ef09(void)

{
  _DAT_10022614 = RegisterWindowMessageA(s_PM_IMG_ANNOTATION_TO_FILE_100205f8);
  return;
}


// ---- FUN_1000ef1e @ 1000ef1e

void FUN_1000ef1e(void)

{
  FUN_1000ef28();
  return;
}


// ---- FUN_1000ef28 @ 1000ef28

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ef28(void)

{
  _DAT_10022610 = RegisterWindowMessageA(s_PM_IMG_TIFF_RESET_10020614);
  return;
}


// ---- FUN_1000ef3d @ 1000ef3d

void FUN_1000ef3d(void)

{
  FUN_1000ef47();
  return;
}


// ---- FUN_1000ef47 @ 1000ef47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ef47(void)

{
  _DAT_1002260c = RegisterWindowMessageA(s_PM_IMEX_DONE_10020628);
  return;
}


// ---- FUN_1000ef5c @ 1000ef5c

void FUN_1000ef5c(void)

{
  FUN_1000ef66();
  return;
}


// ---- FUN_1000ef66 @ 1000ef66

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ef66(void)

{
  _DAT_10022608 = RegisterWindowMessageA(s_PM_IMG_TIFF_PARAM_10020638);
  return;
}


// ---- FUN_1000ef7b @ 1000ef7b

void FUN_1000ef7b(void)

{
  FUN_1000ef85();
  return;
}


// ---- FUN_1000ef85 @ 1000ef85

void FUN_1000ef85(void)

{
  DAT_10022604 = RegisterWindowMessageA(s_PM_IMG_CREATE_TEXT_1002064c);
  return;
}


// ---- FUN_1000ef9a @ 1000ef9a

void FUN_1000ef9a(void)

{
  FUN_1000efa4();
  return;
}


// ---- FUN_1000efa4 @ 1000efa4

void FUN_1000efa4(void)

{
  DAT_10022600 = RegisterWindowMessageA(s_PM_IMG_DELETE_TEXT_10020660);
  return;
}


// ---- FUN_1000efb9 @ 1000efb9

void FUN_1000efb9(void)

{
  FUN_1000efc3();
  return;
}


// ---- FUN_1000efc3 @ 1000efc3

void FUN_1000efc3(void)

{
  DAT_100225fc = RegisterWindowMessageA(s_LEO_GET_SEM_HWND_10020674);
  return;
}


// ---- FUN_1000efd8 @ 1000efd8

void FUN_1000efd8(void)

{
  FUN_1000efe2();
  return;
}


// ---- FUN_1000efe2 @ 1000efe2

void FUN_1000efe2(void)

{
  DAT_100225f8 = RegisterWindowMessageA(s_PM_IMGMGR_INHIBIT_SPOT_10020688);
  return;
}


// ---- FUN_1000eff7 @ 1000eff7

void FUN_1000eff7(void)

{
  FUN_1000f001();
  return;
}


// ---- FUN_1000f001 @ 1000f001

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000f001(void)

{
  _DAT_100225f4 = RegisterWindowMessageA(s_PM_SPECIAL_FUNCTION_100206a0);
  return;
}


// ---- FUN_1000f016 @ 1000f016

void FUN_1000f016(void)

{
  FUN_1000f020();
  return;
}


// ---- FUN_1000f020 @ 1000f020

void FUN_1000f020(void)

{
  DAT_100225f0 = RegisterWindowMessageA(s_PM_GET_TAB_COUNT_100206b4);
  return;
}


// ---- FUN_1000f035 @ 1000f035

void FUN_1000f035(void)

{
  FUN_1000f03f();
  return;
}


// ---- FUN_1000f03f @ 1000f03f

void FUN_1000f03f(void)

{
  DAT_100225ec = RegisterWindowMessageA(s_PM_GET_DLG_COUNT_100206c8);
  return;
}


// ---- FUN_1000f054 @ 1000f054

void FUN_1000f054(void)

{
  FUN_1000f05e();
  return;
}


// ---- FUN_1000f05e @ 1000f05e

void FUN_1000f05e(void)

{
  DAT_100225e8 = RegisterWindowMessageA(s_PM_GET_TAB_NAME_100206dc);
  return;
}


// ---- FUN_1000f073 @ 1000f073

void FUN_1000f073(void)

{
  FUN_1000f07d();
  return;
}


// ---- FUN_1000f07d @ 1000f07d

void FUN_1000f07d(void)

{
  DAT_100225e4 = RegisterWindowMessageA(s_PM_GET_DLG_NAME_100206ec);
  return;
}


// ---- FUN_1000f092 @ 1000f092

void FUN_1000f092(void)

{
  FUN_1000f09c();
  return;
}


// ---- FUN_1000f09c @ 1000f09c

void FUN_1000f09c(void)

{
  DAT_100225e0 = RegisterWindowMessageA(s_PM_SHOW_TABS_DIALOGS_100206fc);
  return;
}


// ---- FUN_1000f0b1 @ 1000f0b1

void FUN_1000f0b1(void)

{
  FUN_1000f0bb();
  return;
}


// ---- FUN_1000f0bb @ 1000f0bb

void FUN_1000f0bb(void)

{
  DAT_100225dc = RegisterWindowMessageA(s_PM_GET_MACRO_LIB_ISSUE_10020714);
  return;
}


// ---- FUN_1000f0d0 @ 1000f0d0

void FUN_1000f0d0(void)

{
  FUN_1000f0da();
  return;
}


// ---- FUN_1000f0da @ 1000f0da

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000f0da(void)

{
  _DAT_100225d8 = RegisterWindowMessageA(s_PM_MACRO_CONDITIONS_SAVED_1002072c);
  return;
}


// ---- FUN_1000f0ef @ 1000f0ef

void FUN_1000f0ef(void)

{
  FUN_1000f0f9();
  return;
}


// ---- FUN_1000f0f9 @ 1000f0f9

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000f0f9(void)

{
  _DAT_100225d4 = RegisterWindowMessageA(s_PM_STEP_MACRO_10020748);
  return;
}


// ---- FUN_1000f10e @ 1000f10e

void FUN_1000f10e(void)

{
  FUN_1000f118();
  return;
}


// ---- FUN_1000f118 @ 1000f118

void FUN_1000f118(void)

{
  DAT_100225d0 = RegisterWindowMessageA(s_PM_CONTINUE_MACRO_10020758);
  return;
}


// ---- FUN_1000f12d @ 1000f12d

void FUN_1000f12d(void)

{
  FUN_1000f137();
  return;
}


// ---- FUN_1000f137 @ 1000f137

void FUN_1000f137(void)

{
  DAT_100225cc = RegisterWindowMessageA(s_PM_EXECUTE_LIBRARY_MACRO_1002076c);
  return;
}


// ---- FUN_1000f14c @ 1000f14c

void FUN_1000f14c(void)

{
  FUN_1000f156();
  return;
}


// ---- FUN_1000f156 @ 1000f156

void FUN_1000f156(void)

{
  DAT_100225c8 = RegisterWindowMessageA(s_PM_EXECUTE_FILE_MACRO_10020788);
  return;
}


// ---- FUN_1000f16b @ 1000f16b

void FUN_1000f16b(void)

{
  FUN_1000f175();
  return;
}


// ---- FUN_1000f175 @ 1000f175

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000f175(void)

{
  _DAT_100225c4 = RegisterWindowMessageA(s_PM_HALT_MACRO_100207a0);
  return;
}


// ---- FUN_1000f18a @ 1000f18a

void FUN_1000f18a(void)

{
  FUN_1000f194();
  return;
}


// ---- FUN_1000f194 @ 1000f194

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000f194(void)

{
  _DAT_100225c0 = RegisterWindowMessageA(s_PM_PAUSE_MACRO_100207b0);
  return;
}


// ---- FUN_1000f1a9 @ 1000f1a9

void FUN_1000f1a9(void)

{
  FUN_1000f1b3();
  return;
}


// ---- FUN_1000f1b3 @ 1000f1b3

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000f1b3(void)

{
  _DAT_100225bc = RegisterWindowMessageA(s_PM_MACRO_STATUS_100207c0);
  return;
}


// ---- FUN_1000f1c8 @ 1000f1c8

void FUN_1000f1c8(void)

{
  FUN_1000f1d2();
  return;
}


// ---- FUN_1000f1d2 @ 1000f1d2

void FUN_1000f1d2(void)

{
  DAT_100225b8 = RegisterWindowMessageA(s_PM_MACRO_EDITOR_100207d0);
  return;
}


// ---- FUN_1000f1e7 @ 1000f1e7

void FUN_1000f1e7(void)

{
  FUN_1000f1f1();
  return;
}


// ---- FUN_1000f1f1 @ 1000f1f1

void FUN_1000f1f1(void)

{
  DAT_100225b4 = RegisterWindowMessageA(s_PM_SAVE_SYSTEM_CONDITIONS_100207e0);
  return;
}


// ---- FUN_1000f206 @ 1000f206

void FUN_1000f206(void)

{
  FUN_1000f210();
  return;
}


// ---- FUN_1000f210 @ 1000f210

void FUN_1000f210(void)

{
  DAT_100225b0 = RegisterWindowMessageA(s_PM_SAVE_STATE_100207fc);
  return;
}


// ---- FUN_1000f225 @ 1000f225

void FUN_1000f225(void)

{
  FUN_1000f22f();
  return;
}


// ---- FUN_1000f22f @ 1000f22f

void FUN_1000f22f(void)

{
  DAT_100225ac = RegisterWindowMessageA(s_PM_LOAD_STATE_1002080c);
  return;
}


// ---- FUN_1000f244 @ 1000f244

void FUN_1000f244(void)

{
  FUN_1000f24e();
  return;
}


// ---- FUN_1000f24e @ 1000f24e

void FUN_1000f24e(void)

{
  DAT_100225a8 = RegisterWindowMessageA(s_PM_STANDARD_CONDITIONS_1002081c);
  return;
}


// ---- FUN_1000f263 @ 1000f263

void FUN_1000f263(void)

{
  FUN_1000f26d();
  return;
}


// ---- FUN_1000f26d @ 1000f26d

void FUN_1000f26d(void)

{
  DAT_100225a4 = RegisterWindowMessageA(s_PM_RESTORE_SYSTEM_CONDITIONS_10020834);
  return;
}


// ---- FUN_1000f282 @ 1000f282

void FUN_1000f282(void)

{
  FUN_1000f28c();
  return;
}


// ---- FUN_1000f28c @ 1000f28c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000f28c(void)

{
  _DAT_100225a0 = RegisterWindowMessageA(s_PM_EXECUTING_LINE_10020854);
  return;
}


// ---- FUN_1000f2a1 @ 1000f2a1

void FUN_1000f2a1(void)

{
  FUN_1000f2ab();
  return;
}


// ---- FUN_1000f2ab @ 1000f2ab

void FUN_1000f2ab(void)

{
  DAT_1002259c = RegisterWindowMessageA(s_PM_REVIEW_STATE_10020868);
  return;
}


// ---- FUN_1000f2c0 @ 1000f2c0

void FUN_1000f2c0(void)

{
  FUN_1000f2ca();
  return;
}


// ---- FUN_1000f2ca @ 1000f2ca

void FUN_1000f2ca(void)

{
  DAT_10022598 = RegisterWindowMessageA(s_PM_SP_MOUSE_ADJUSTMENT_10020878);
  return;
}


// ---- FUN_1000f2df @ 1000f2df

void FUN_1000f2df(void)

{
  FUN_1000f2e9();
  return;
}


// ---- FUN_1000f2e9 @ 1000f2e9

void FUN_1000f2e9(void)

{
  DAT_10022594 = RegisterWindowMessageA(s_PM_QUERY_SERVER_10020890);
  return;
}


// ---- FUN_1000f2fe @ 1000f2fe

void FUN_1000f2fe(void)

{
  FUN_1000f308();
  return;
}


// ---- FUN_1000f308 @ 1000f308

void FUN_1000f308(void)

{
  DAT_10022590 = RegisterWindowMessageA(s_PM_QUERY_CLIENT_COUNT_100208a0);
  return;
}


// ---- FUN_1000f31d @ 1000f31d

void FUN_1000f31d(void)

{
  FUN_1000f327();
  return;
}


// ---- FUN_1000f327 @ 1000f327

void FUN_1000f327(void)

{
  DAT_1002258c = RegisterWindowMessageA(s_PM_REGISTER_100208b8);
  return;
}


// ---- FUN_1000f33c @ 1000f33c

void FUN_1000f33c(void)

{
  FUN_1000f346();
  return;
}


// ---- FUN_1000f346 @ 1000f346

void FUN_1000f346(void)

{
  DAT_10022588 = RegisterWindowMessageA(s_PM_REGISTER_CONTROLLER_100208c4);
  return;
}


// ---- FUN_1000f35b @ 1000f35b

void FUN_1000f35b(void)

{
  FUN_1000f365();
  return;
}


// ---- FUN_1000f365 @ 1000f365

void FUN_1000f365(void)

{
  DAT_10022584 = RegisterWindowMessageA(s_PM_REGISTER_USERNAME_100208dc);
  return;
}


// ---- FUN_1000f37a @ 1000f37a

void FUN_1000f37a(void)

{
  FUN_1000f384();
  return;
}


// ---- FUN_1000f384 @ 1000f384

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000f384(void)

{
  _DAT_10022580 = RegisterWindowMessageA(s_PM_SEM_REGISTER_100208f4);
  return;
}


// ---- FUN_1000f399 @ 1000f399

void FUN_1000f399(void)

{
  FUN_1000f3a3();
  return;
}


// ---- FUN_1000f3a3 @ 1000f3a3

void FUN_1000f3a3(void)

{
  DAT_1002257c = RegisterWindowMessageA(s_PM_REVOKE_REGISTRATION_10020904);
  return;
}


// ---- FUN_1000f3b8 @ 1000f3b8

void FUN_1000f3b8(void)

{
  FUN_1000f3c2();
  return;
}


// ---- FUN_1000f3c2 @ 1000f3c2

void FUN_1000f3c2(void)

{
  DAT_10022578 = RegisterWindowMessageA(s_PM_MOUSE_ADJUSTABLE_1002091c);
  return;
}


// ---- FUN_1000f3d7 @ 1000f3d7

void FUN_1000f3d7(void)

{
  FUN_1000f3e1();
  return;
}


// ---- FUN_1000f3e1 @ 1000f3e1

void FUN_1000f3e1(void)

{
  DAT_10022574 = RegisterWindowMessageA(s_PM_LOG_OFF_10020930);
  return;
}


// ---- FUN_1000f3f6 @ 1000f3f6

void FUN_1000f3f6(void)

{
  FUN_1000f400();
  return;
}


// ---- FUN_1000f400 @ 1000f400

void FUN_1000f400(void)

{
  DAT_10022570 = RegisterWindowMessageA(s_PM_LOG_ON_1002093c);
  return;
}


// ---- FUN_1000f415 @ 1000f415

void FUN_1000f415(void)

{
  FUN_1000f41f();
  return;
}


// ---- FUN_1000f41f @ 1000f41f

void FUN_1000f41f(void)

{
  DAT_1002256c = RegisterWindowMessageA(s_PM_GET_SERIAL_NUMBER_10020948);
  return;
}


// ---- FUN_1000f434 @ 1000f434

void FUN_1000f434(void)

{
  FUN_1000f43e();
  return;
}


// ---- FUN_1000f43e @ 1000f43e

void FUN_1000f43e(void)

{
  DAT_10022568 = RegisterWindowMessageA(s_PM_GET_DIRECTORIES_10020960);
  return;
}


// ---- FUN_1000f453 @ 1000f453

void FUN_1000f453(void)

{
  FUN_1000f45d();
  return;
}


// ---- FUN_1000f45d @ 1000f45d

void FUN_1000f45d(void)

{
  DAT_10022564 = RegisterWindowMessageA(s_PM_GET_COMMAND_GROUP_10020974);
  return;
}


// ---- FUN_1000f472 @ 1000f472

void FUN_1000f472(void)

{
  FUN_1000f47c();
  return;
}


// ---- FUN_1000f47c @ 1000f47c

void FUN_1000f47c(void)

{
  DAT_10022560 = RegisterWindowMessageA(s_PM_GET_STRING_1002098c);
  return;
}


// ---- FUN_1000f491 @ 1000f491

void FUN_1000f491(void)

{
  FUN_1000f49b();
  return;
}


// ---- FUN_1000f49b @ 1000f49b

void FUN_1000f49b(void)

{
  DAT_1002255c = RegisterWindowMessageA(s_PM_GET_NAME_1002099c);
  return;
}


// ---- FUN_1000f4b0 @ 1000f4b0

void FUN_1000f4b0(void)

{
  FUN_1000f4ba();
  return;
}


// ---- FUN_1000f4ba @ 1000f4ba

void FUN_1000f4ba(void)

{
  DAT_10022558 = RegisterWindowMessageA(s_PM_GET_MNEMONIC_100209a8);
  return;
}


// ---- FUN_1000f4cf @ 1000f4cf

void FUN_1000f4cf(void)

{
  FUN_1000f4d9();
  return;
}


// ---- FUN_1000f4d9 @ 1000f4d9

void FUN_1000f4d9(void)

{
  DAT_10022554 = RegisterWindowMessageA(s_PM_GET_VALUE_100209b8);
  return;
}


// ---- FUN_1000f4ee @ 1000f4ee

void FUN_1000f4ee(void)

{
  FUN_1000f4f8();
  return;
}


// ---- FUN_1000f4f8 @ 1000f4f8

void FUN_1000f4f8(void)

{
  DAT_10022550 = RegisterWindowMessageA(s_PM_SET_BEAMSHIFT_DISTANCE_100209c8);
  return;
}


// ---- FUN_1000f50d @ 1000f50d

void FUN_1000f50d(void)

{
  FUN_1000f517();
  return;
}


// ---- FUN_1000f517 @ 1000f517

void FUN_1000f517(void)

{
  DAT_1002254c = RegisterWindowMessageA(s_PM_STAGE_GOTO_100209e4);
  return;
}


// ---- FUN_1000f52c @ 1000f52c

void FUN_1000f52c(void)

{
  FUN_1000f536();
  return;
}


// ---- FUN_1000f536 @ 1000f536

void FUN_1000f536(void)

{
  DAT_10022548 = RegisterWindowMessageA(s_PM_GET_STAGE_POSITION_100209f4);
  return;
}


// ---- FUN_1000f54b @ 1000f54b

void FUN_1000f54b(void)

{
  FUN_1000f555();
  return;
}


// ---- FUN_1000f555 @ 1000f555

void FUN_1000f555(void)

{
  DAT_10022544 = RegisterWindowMessageA(s_PM_GET_VALUE_AS_STRING_10020a0c);
  return;
}


// ---- FUN_1000f56a @ 1000f56a

void FUN_1000f56a(void)

{
  FUN_1000f574();
  return;
}


// ---- FUN_1000f574 @ 1000f574

void FUN_1000f574(void)

{
  DAT_10022540 = RegisterWindowMessageA(s_PM_GET_STATEVALUE_AS_ENGLISH_STR_10020a24);
  return;
}


// ---- FUN_1000f589 @ 1000f589

void FUN_1000f589(void)

{
  FUN_1000f593();
  return;
}


// ---- FUN_1000f593 @ 1000f593

void FUN_1000f593(void)

{
  DAT_1002253c = RegisterWindowMessageA(s_PM_GET_ERROR_10020a48);
  return;
}


// ---- FUN_1000f5a8 @ 1000f5a8

void FUN_1000f5a8(void)

{
  FUN_1000f5b2();
  return;
}


// ---- FUN_1000f5b2 @ 1000f5b2

void FUN_1000f5b2(void)

{
  DAT_10022538 = RegisterWindowMessageA(s_PM_NEXT_MAG_TABLE_10020a58);
  return;
}


// ---- FUN_1000f5c7 @ 1000f5c7

void FUN_1000f5c7(void)

{
  FUN_1000f5d1();
  return;
}


// ---- FUN_1000f5d1 @ 1000f5d1

void FUN_1000f5d1(void)

{
  DAT_10022534 = RegisterWindowMessageA(s_PM_END_MAG_TABLE_10020a6c);
  return;
}


// ---- FUN_1000f5e6 @ 1000f5e6

void FUN_1000f5e6(void)

{
  FUN_1000f5f0();
  return;
}


// ---- FUN_1000f5f0 @ 1000f5f0

void FUN_1000f5f0(void)

{
  DAT_10022530 = RegisterWindowMessageA(s_PM_CENTRE_FEATURE_ORIGINAL_MAG_10020a80);
  return;
}


// ---- FUN_1000f605 @ 1000f605

void FUN_1000f605(void)

{
  FUN_1000f60f();
  return;
}


// ---- FUN_1000f60f @ 1000f60f

void FUN_1000f60f(void)

{
  DAT_1002252c = RegisterWindowMessageA(s_PM_GET_MACHINE_TYPE_10020aa0);
  return;
}


// ---- FUN_1000f624 @ 1000f624

void FUN_1000f624(void)

{
  FUN_1000f62e();
  return;
}


// ---- FUN_1000f62e @ 1000f62e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000f62e(void)

{
  _DAT_10022528 = RegisterWindowMessageA(s_PM_GET_HANDLES_10020ab4);
  return;
}


// ---- FUN_1000f643 @ 1000f643

void FUN_1000f643(void)

{
  FUN_1000f64d();
  return;
}


// ---- FUN_1000f64d @ 1000f64d

void FUN_1000f64d(void)

{
  DAT_10022524 = RegisterWindowMessageA(s_PM_GET_STATES_10020ac4);
  return;
}


// ---- FUN_1000f662 @ 1000f662

void FUN_1000f662(void)

{
  FUN_1000f66c();
  return;
}


// ---- FUN_1000f66c @ 1000f66c

void FUN_1000f66c(void)

{
  DAT_10022520 = RegisterWindowMessageA(s_PM_GET_LOW_LIMIT_10020ad4);
  return;
}


// ---- FUN_1000f681 @ 1000f681

void FUN_1000f681(void)

{
  FUN_1000f68b();
  return;
}


// ---- FUN_1000f68b @ 1000f68b

void FUN_1000f68b(void)

{
  DAT_1002251c = RegisterWindowMessageA(s_PM_GET_LICENCE_10020ae8);
  return;
}


// ---- FUN_1000f6a0 @ 1000f6a0

void FUN_1000f6a0(void)

{
  FUN_1000f6aa();
  return;
}


// ---- FUN_1000f6aa @ 1000f6aa

void FUN_1000f6aa(void)

{
  DAT_10022518 = RegisterWindowMessageA(s_PM_GET_PARAM_GROUP_10020af8);
  return;
}


// ---- FUN_1000f6bf @ 1000f6bf

void FUN_1000f6bf(void)

{
  FUN_1000f6c9();
  return;
}


// ---- FUN_1000f6c9 @ 1000f6c9

void FUN_1000f6c9(void)

{
  DAT_10022514 = RegisterWindowMessageA(s_PM_GET_PARAM_COUNT_10020b0c);
  return;
}


// ---- FUN_1000f6de @ 1000f6de

void FUN_1000f6de(void)

{
  FUN_1000f6e8();
  return;
}


// ---- FUN_1000f6e8 @ 1000f6e8

void FUN_1000f6e8(void)

{
  DAT_10022510 = RegisterWindowMessageA(s_PM_GET_XY_VALUES_10020b20);
  return;
}


// ---- FUN_1000f6fd @ 1000f6fd

void FUN_1000f6fd(void)

{
  FUN_1000f707();
  return;
}


// ---- FUN_1000f707 @ 1000f707

void FUN_1000f707(void)

{
  DAT_1002250c = RegisterWindowMessageA(s_PM_SET_XY_VALUES_10020b34);
  return;
}


// ---- FUN_1000f71c @ 1000f71c

void FUN_1000f71c(void)

{
  FUN_1000f726();
  return;
}


// ---- FUN_1000f726 @ 1000f726

void FUN_1000f726(void)

{
  DAT_10022508 = RegisterWindowMessageA(s_PM_GET_UNITS_STRING_10020b48);
  return;
}


// ---- FUN_1000f73b @ 1000f73b

void FUN_1000f73b(void)

{
  FUN_1000f745();
  return;
}


// ---- FUN_1000f745 @ 1000f745

void FUN_1000f745(void)

{
  DAT_10022504 = RegisterWindowMessageA(s_PM_GET_UNSCALED_VALUE_10020b5c);
  return;
}


// ---- FUN_1000f75a @ 1000f75a

void FUN_1000f75a(void)

{
  FUN_1000f764();
  return;
}


// ---- FUN_1000f764 @ 1000f764

void FUN_1000f764(void)

{
  DAT_10022500 = RegisterWindowMessageA(s_PM_GET_SCALED_VALUE_10020b74);
  return;
}


// ---- FUN_1000f779 @ 1000f779

void FUN_1000f779(void)

{
  FUN_1000f783();
  return;
}


// ---- FUN_1000f783 @ 1000f783

void FUN_1000f783(void)

{
  DAT_100224fc = RegisterWindowMessageA(s_PM_SET_VALUE_10020b88);
  return;
}


// ---- FUN_1000f798 @ 1000f798

void FUN_1000f798(void)

{
  FUN_1000f7a2();
  return;
}


// ---- FUN_1000f7a2 @ 1000f7a2

void FUN_1000f7a2(void)

{
  DAT_100224f8 = RegisterWindowMessageA(s_PM_SET_COARSE_10020b98);
  return;
}


// ---- FUN_1000f7b7 @ 1000f7b7

void FUN_1000f7b7(void)

{
  FUN_1000f7c1();
  return;
}


// ---- FUN_1000f7c1 @ 1000f7c1

void FUN_1000f7c1(void)

{
  DAT_100224f4 = RegisterWindowMessageA(s_PM_GET_COARSE_10020ba8);
  return;
}


// ---- FUN_1000f7d6 @ 1000f7d6

void FUN_1000f7d6(void)

{
  FUN_1000f7e0();
  return;
}


// ---- FUN_1000f7e0 @ 1000f7e0

void FUN_1000f7e0(void)

{
  DAT_100224f0 = RegisterWindowMessageA(s_PM_SET_NOTIFY_10020bb8);
  return;
}


// ---- FUN_1000f7f5 @ 1000f7f5

void FUN_1000f7f5(void)

{
  FUN_1000f7ff();
  return;
}


// ---- FUN_1000f7ff @ 1000f7ff

void FUN_1000f7ff(void)

{
  DAT_100224ec = RegisterWindowMessageA(s_PM_SET_USER_MODE_10020bc8);
  return;
}


// ---- FUN_1000f814 @ 1000f814

void FUN_1000f814(void)

{
  FUN_1000f81e();
  return;
}


// ---- FUN_1000f81e @ 1000f81e

void FUN_1000f81e(void)

{
  DAT_100224e8 = RegisterWindowMessageA(s_PM_LEFT_MOUSE_ADJUST_SETUP_10020bdc);
  return;
}


// ---- FUN_1000f833 @ 1000f833

void FUN_1000f833(void)

{
  FUN_1000f83d();
  return;
}


// ---- FUN_1000f83d @ 1000f83d

void FUN_1000f83d(void)

{
  DAT_100224e4 = RegisterWindowMessageA(s_PM_RIGHT_MOUSE_ADJUST_SETUP_10020bf8);
  return;
}


// ---- FUN_1000f852 @ 1000f852

void FUN_1000f852(void)

{
  FUN_1000f85c();
  return;
}


// ---- FUN_1000f85c @ 1000f85c

void FUN_1000f85c(void)

{
  DAT_100224e0 = RegisterWindowMessageA(s_PM_MOUSE_ADJUST_START_10020c14);
  return;
}


// ---- FUN_1000f871 @ 1000f871

void FUN_1000f871(void)

{
  FUN_1000f87b();
  return;
}


// ---- FUN_1000f87b @ 1000f87b

void FUN_1000f87b(void)

{
  DAT_100224dc = RegisterWindowMessageA(s_PM_IS_ENABLED_10020c2c);
  return;
}


// ---- FUN_1000f890 @ 1000f890

void FUN_1000f890(void)

{
  FUN_1000f89a();
  return;
}


// ---- FUN_1000f89a @ 1000f89a

void FUN_1000f89a(void)

{
  DAT_100224d8 = RegisterWindowMessageA(s_PM_IS_Y_OF_XY_10020c3c);
  return;
}


// ---- FUN_1000f8af @ 1000f8af

void FUN_1000f8af(void)

{
  FUN_1000f8b9();
  return;
}


// ---- FUN_1000f8b9 @ 1000f8b9

void FUN_1000f8b9(void)

{
  DAT_100224d4 = RegisterWindowMessageA(s_PM_IS_VECTOR_10020c4c);
  return;
}


// ---- FUN_1000f8ce @ 1000f8ce

void FUN_1000f8ce(void)

{
  FUN_1000f8d8();
  return;
}


// ---- FUN_1000f8d8 @ 1000f8d8

void FUN_1000f8d8(void)

{
  DAT_100224d0 = RegisterWindowMessageA(s_PM_IS_VISIBLE_10020c5c);
  return;
}


// ---- FUN_1000f8ed @ 1000f8ed

void FUN_1000f8ed(void)

{
  FUN_1000f8f7();
  return;
}


// ---- FUN_1000f8f7 @ 1000f8f7

void FUN_1000f8f7(void)

{
  DAT_100224cc = RegisterWindowMessageA(s_PM_IS_READ_ONLY_10020c6c);
  return;
}


// ---- FUN_1000f90c @ 1000f90c

void FUN_1000f90c(void)

{
  FUN_1000f916();
  return;
}


// ---- FUN_1000f916 @ 1000f916

void FUN_1000f916(void)

{
  DAT_100224c8 = RegisterWindowMessageA(s_PM_IS_ENTRY_ONLY_10020c7c);
  return;
}


// ---- FUN_1000f92b @ 1000f92b

void FUN_1000f92b(void)

{
  FUN_1000f935();
  return;
}


// ---- FUN_1000f935 @ 1000f935

void FUN_1000f935(void)

{
  DAT_100224c4 = RegisterWindowMessageA(s_PM_IS_READ_WRITE_10020c90);
  return;
}


// ---- FUN_1000f94a @ 1000f94a

void FUN_1000f94a(void)

{
  FUN_1000f954();
  return;
}


// ---- FUN_1000f954 @ 1000f954

void FUN_1000f954(void)

{
  DAT_100224c0 = RegisterWindowMessageA(s_PM_PARAMETER_CLICK_10020ca4);
  return;
}


// ---- FUN_1000f969 @ 1000f969

void FUN_1000f969(void)

{
  FUN_1000f973();
  return;
}


// ---- FUN_1000f973 @ 1000f973

void FUN_1000f973(void)

{
  DAT_100224bc = RegisterWindowMessageA(s_PM_BUTTON_PRIVILEDGE_10020cb8);
  return;
}


// ---- FUN_1000f988 @ 1000f988

void FUN_1000f988(void)

{
  FUN_1000f992();
  return;
}


// ---- FUN_1000f992 @ 1000f992

void FUN_1000f992(void)

{
  DAT_100224b8 = RegisterWindowMessageA(s_PM_COMMON_TOOLBAR_FLAG_10020cd0);
  return;
}


// ---- FUN_1000f9a7 @ 1000f9a7

void FUN_1000f9a7(void)

{
  FUN_1000f9b1();
  return;
}


// ---- FUN_1000f9b1 @ 1000f9b1

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000f9b1(void)

{
  _DAT_100224b4 = RegisterWindowMessageA(s_PM_SERVER_HELP_10020ce8);
  return;
}


// ---- FUN_1000f9c6 @ 1000f9c6

void FUN_1000f9c6(void)

{
  FUN_1000f9d0();
  return;
}


// ---- FUN_1000f9d0 @ 1000f9d0

void FUN_1000f9d0(void)

{
  DAT_100224b0 = RegisterWindowMessageA(s_PM_PARAMETER_DOUBLE_CLICK_10020cf8);
  return;
}


// ---- FUN_1000f9e5 @ 1000f9e5

void FUN_1000f9e5(void)

{
  FUN_1000f9ef();
  return;
}


// ---- FUN_1000f9ef @ 1000f9ef

void FUN_1000f9ef(void)

{
  DAT_100224ac = RegisterWindowMessageA(s_PM_MENU_MORE_CLICK_10020d14);
  return;
}


// ---- FUN_1000fa04 @ 1000fa04

void FUN_1000fa04(void)

{
  FUN_1000fa0e();
  return;
}


// ---- FUN_1000fa0e @ 1000fa0e

void FUN_1000fa0e(void)

{
  DAT_100224a8 = RegisterWindowMessageA(s_PM_PARAMETER_RIGHT_CLICK_10020d28);
  return;
}


// ---- FUN_1000fa23 @ 1000fa23

void FUN_1000fa23(void)

{
  FUN_1000fa2d();
  return;
}


// ---- FUN_1000fa2d @ 1000fa2d

void FUN_1000fa2d(void)

{
  DAT_100224a4 = RegisterWindowMessageA(s_PM_TRANSLATE_MNEMONIC_10020d44);
  return;
}


// ---- FUN_1000fa42 @ 1000fa42

void FUN_1000fa42(void)

{
  FUN_1000fa4c();
  return;
}


// ---- FUN_1000fa4c @ 1000fa4c

void FUN_1000fa4c(void)

{
  DAT_100224a0 = RegisterWindowMessageA(s_PM_EXECUTE_COMMAND_10020d5c);
  return;
}


// ---- FUN_1000fa61 @ 1000fa61

void FUN_1000fa61(void)

{
  FUN_1000fa6b();
  return;
}


// ---- FUN_1000fa6b @ 1000fa6b

void FUN_1000fa6b(void)

{
  DAT_1002249c = RegisterWindowMessageA(s_PM_STEP_VALUE_10020d70);
  return;
}


// ---- FUN_1000fa80 @ 1000fa80

void FUN_1000fa80(void)

{
  FUN_1000fa8a();
  return;
}


// ---- FUN_1000fa8a @ 1000fa8a

void FUN_1000fa8a(void)

{
  DAT_10022498 = RegisterWindowMessageA(s_PM_HELP_MODE_10020d80);
  return;
}


// ---- FUN_1000fa9f @ 1000fa9f

void FUN_1000fa9f(void)

{
  FUN_1000faa9();
  return;
}


// ---- FUN_1000faa9 @ 1000faa9

void FUN_1000faa9(void)

{
  DAT_10022494 = RegisterWindowMessageA(s_PM_SERVER_MESSAGE_10020d90);
  return;
}


// ---- FUN_1000fabe @ 1000fabe

void FUN_1000fabe(void)

{
  FUN_1000fac8();
  return;
}


// ---- FUN_1000fac8 @ 1000fac8

void FUN_1000fac8(void)

{
  DAT_10022490 = RegisterWindowMessageA(s_PM_AVAILABLE_MACROS_10020da4);
  return;
}


// ---- FUN_1000fadd @ 1000fadd

void FUN_1000fadd(void)

{
  FUN_1000fae7();
  return;
}


// ---- FUN_1000fae7 @ 1000fae7

void FUN_1000fae7(void)

{
  DAT_1002248c = RegisterWindowMessageA(s_PM_SET_USER_PREFERENCES_10020db8);
  return;
}


// ---- FUN_1000fafc @ 1000fafc

void FUN_1000fafc(void)

{
  FUN_1000fb06();
  return;
}


// ---- FUN_1000fb06 @ 1000fb06

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000fb06(void)

{
  _DAT_10022488 = RegisterWindowMessageA(s_PM_USER_PREFERENCES_CHANGED_10020dd0);
  return;
}


// ---- FUN_1000fb1b @ 1000fb1b

void FUN_1000fb1b(void)

{
  FUN_1000fb25();
  return;
}


// ---- FUN_1000fb25 @ 1000fb25

void FUN_1000fb25(void)

{
  DAT_10022484 = RegisterWindowMessageA(s_PM_NEXT_VP_UNITS_10020dec);
  return;
}


// ---- FUN_1000fb3a @ 1000fb3a

void FUN_1000fb3a(void)

{
  FUN_1000fb44();
  return;
}


// ---- FUN_1000fb44 @ 1000fb44

void FUN_1000fb44(void)

{
  DAT_10022480 = RegisterWindowMessageA(s_PM_NEXT_PRESSURE_UNITS_10020e00);
  return;
}


// ---- FUN_1000fb59 @ 1000fb59

void FUN_1000fb59(void)

{
  FUN_1000fb63();
  return;
}


// ---- FUN_1000fb63 @ 1000fb63

void FUN_1000fb63(void)

{
  DAT_1002247c = RegisterWindowMessageA(s_PM_GET_USER_PREFERENCES_10020e18);
  return;
}


// ---- FUN_1000fb78 @ 1000fb78

void FUN_1000fb78(void)

{
  FUN_1000fb82();
  return;
}


// ---- FUN_1000fb82 @ 1000fb82

void FUN_1000fb82(void)

{
  DAT_10022478 = RegisterWindowMessageA(s_PM_SET_APERTURE_TABLE_10020e30);
  return;
}


// ---- FUN_1000fb97 @ 1000fb97

void FUN_1000fb97(void)

{
  FUN_1000fba1();
  return;
}


// ---- FUN_1000fba1 @ 1000fba1

void FUN_1000fba1(void)

{
  DAT_10022474 = RegisterWindowMessageA(s_PM_GET_APERTURE_TABLE_10020e48);
  return;
}


// ---- FUN_1000fbb6 @ 1000fbb6

void FUN_1000fbb6(void)

{
  FUN_1000fbc0();
  return;
}


// ---- FUN_1000fbc0 @ 1000fbc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000fbc0(void)

{
  _DAT_10022470 = RegisterWindowMessageA(s_PM_APERTURE_TABLE_CHANGED_10020e60);
  return;
}


// ---- FUN_1000fbd5 @ 1000fbd5

void FUN_1000fbd5(void)

{
  FUN_1000fbdf();
  return;
}


// ---- FUN_1000fbdf @ 1000fbdf

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000fbdf(void)

{
  _DAT_1002246c = RegisterWindowMessageA(s_PM_LUT_EDITOR_10020e7c);
  return;
}


// ---- FUN_1000fbf4 @ 1000fbf4

void FUN_1000fbf4(void)

{
  FUN_1000fbfe();
  return;
}


// ---- FUN_1000fbfe @ 1000fbfe

void FUN_1000fbfe(void)

{
  DAT_10022468 = RegisterWindowMessageA(s_PM_SET_LUT_POINT_10020e8c);
  return;
}


// ---- FUN_1000fc13 @ 1000fc13

void FUN_1000fc13(void)

{
  FUN_1000fc1d();
  return;
}


// ---- FUN_1000fc1d @ 1000fc1d

void FUN_1000fc1d(void)

{
  DAT_10022464 = RegisterWindowMessageA(s_PM_SET_LUT_RGB_10020ea0);
  return;
}


// ---- FUN_1000fc32 @ 1000fc32

void FUN_1000fc32(void)

{
  FUN_1000fc3c();
  return;
}


// ---- FUN_1000fc3c @ 1000fc3c

void FUN_1000fc3c(void)

{
  DAT_10022460 = RegisterWindowMessageA(s_PM_SET_LUT_COLOR_10020eb0);
  return;
}


// ---- FUN_1000fc51 @ 1000fc51

void FUN_1000fc51(void)

{
  FUN_1000fc5b();
  return;
}


// ---- FUN_1000fc5b @ 1000fc5b

void FUN_1000fc5b(void)

{
  DAT_1002245c = RegisterWindowMessageA(s_PM_SET_LUT_BC_10020ec4);
  return;
}


// ---- FUN_1000fc70 @ 1000fc70

void FUN_1000fc70(void)

{
  FUN_1000fc7a();
  return;
}


// ---- FUN_1000fc7a @ 1000fc7a

void FUN_1000fc7a(void)

{
  DAT_10022458 = RegisterWindowMessageA(s_PM_SET_LUT_INVERSE_10020ed4);
  return;
}


// ---- FUN_1000fc8f @ 1000fc8f

void FUN_1000fc8f(void)

{
  FUN_1000fc99();
  return;
}


// ---- FUN_1000fc99 @ 1000fc99

void FUN_1000fc99(void)

{
  DAT_10022454 = RegisterWindowMessageA(s_PM_SET_LUT_LINEAR_10020ee8);
  return;
}


// ---- FUN_1000fcae @ 1000fcae

void FUN_1000fcae(void)

{
  FUN_1000fcb8();
  return;
}


// ---- FUN_1000fcb8 @ 1000fcb8

void FUN_1000fcb8(void)

{
  DAT_10022450 = RegisterWindowMessageA(s_PM_SET_LUT_GAMMA_10020efc);
  return;
}


// ---- FUN_1000fccd @ 1000fccd

void FUN_1000fccd(void)

{
  FUN_1000fcd7();
  return;
}


// ---- FUN_1000fcd7 @ 1000fcd7

void FUN_1000fcd7(void)

{
  DAT_1002244c = RegisterWindowMessageA(s_PM_DRAW_GREY_WEDGE_10020f10);
  return;
}


// ---- FUN_1000fcec @ 1000fcec

void FUN_1000fcec(void)

{
  FUN_1000fcf6();
  return;
}


// ---- FUN_1000fcf6 @ 1000fcf6

void FUN_1000fcf6(void)

{
  DAT_10022448 = RegisterWindowMessageA(s_PM_GET_IMAGE_PIXEL_10020f24);
  return;
}


// ---- FUN_1000fd0b @ 1000fd0b

void FUN_1000fd0b(void)

{
  FUN_1000fd15();
  return;
}


// ---- FUN_1000fd15 @ 1000fd15

void FUN_1000fd15(void)

{
  DAT_10022444 = RegisterWindowMessageA(s_PM_RGB_READ_10020f38);
  return;
}


// ---- FUN_1000fd2a @ 1000fd2a

void FUN_1000fd2a(void)

{
  FUN_1000fd34();
  return;
}


// ---- FUN_1000fd34 @ 1000fd34

void FUN_1000fd34(void)

{
  DAT_10022440 = RegisterWindowMessageA(s_PM_LUT_LOAD_10020f44);
  return;
}


// ---- FUN_1000fd49 @ 1000fd49

void FUN_1000fd49(void)

{
  FUN_1000fd53();
  return;
}


// ---- FUN_1000fd53 @ 1000fd53

void FUN_1000fd53(void)

{
  DAT_1002243c = RegisterWindowMessageA(s_PM_LUT_READ_10020f50);
  return;
}


// ---- FUN_1000fd68 @ 1000fd68

void FUN_1000fd68(void)

{
  FUN_1000fd72();
  return;
}


// ---- FUN_1000fd72 @ 1000fd72

void FUN_1000fd72(void)

{
  DAT_10022438 = RegisterWindowMessageA(s_PM_READ_COLOR_10020f5c);
  return;
}


// ---- FUN_1000fd87 @ 1000fd87

void FUN_1000fd87(void)

{
  FUN_1000fd91();
  return;
}


// ---- FUN_1000fd91 @ 1000fd91

void FUN_1000fd91(void)

{
  DAT_10022434 = RegisterWindowMessageA(s_PM_LUT_FILL_10020f6c);
  return;
}


// ---- FUN_1000fda6 @ 1000fda6

void FUN_1000fda6(void)

{
  FUN_1000fdb0();
  return;
}


// ---- FUN_1000fdb0 @ 1000fdb0

void FUN_1000fdb0(void)

{
  DAT_10022430 = RegisterWindowMessageA(s_PM_LUT_QLIN_10020f78);
  return;
}


// ---- FUN_1000fdc5 @ 1000fdc5

void FUN_1000fdc5(void)

{
  FUN_1000fdcf();
  return;
}


// ---- FUN_1000fdcf @ 1000fdcf

void FUN_1000fdcf(void)

{
  DAT_1002242c = RegisterWindowMessageA(s_PM_LUT_QINV_10020f84);
  return;
}


// ---- FUN_1000fde4 @ 1000fde4

void FUN_1000fde4(void)

{
  FUN_1000fdee();
  return;
}


// ---- FUN_1000fdee @ 1000fdee

void FUN_1000fdee(void)

{
  DAT_10022428 = RegisterWindowMessageA(s_PM_LUT_SAVE_10020f90);
  return;
}


// ---- FUN_1000fe03 @ 1000fe03

void FUN_1000fe03(void)

{
  FUN_1000fe0d();
  return;
}


// ---- FUN_1000fe0d @ 1000fe0d

void FUN_1000fe0d(void)

{
  DAT_10022424 = RegisterWindowMessageA(s_PM_LUT_RESTORE_10020f9c);
  return;
}


// ---- FUN_1000fe22 @ 1000fe22

void FUN_1000fe22(void)

{
  FUN_1000fe2c();
  return;
}


// ---- FUN_1000fe2c @ 1000fe2c

void FUN_1000fe2c(void)

{
  DAT_10022420 = RegisterWindowMessageA(s_PM_READ_COLOR_LUT_10020fac);
  return;
}


// ---- FUN_1000fe41 @ 1000fe41

void FUN_1000fe41(void)

{
  FUN_1000fe4b();
  return;
}


// ---- FUN_1000fe4b @ 1000fe4b

void FUN_1000fe4b(void)

{
  DAT_1002241c = RegisterWindowMessageA(s_PM_GET_PIXEL_COLOUR_10020fc0);
  return;
}


// ---- FUN_1000fe60 @ 1000fe60

void FUN_1000fe60(void)

{
  FUN_1000fe6a();
  return;
}


// ---- FUN_1000fe6a @ 1000fe6a

void FUN_1000fe6a(void)

{
  DAT_10022418 = RegisterWindowMessageA(s_PM_LOAD_LUT_FILE_10020fd4);
  return;
}


// ---- FUN_1000fe7f @ 1000fe7f

void FUN_1000fe7f(void)

{
  FUN_1000fe89();
  return;
}


// ---- FUN_1000fe89 @ 1000fe89

void FUN_1000fe89(void)

{
  DAT_10022414 = RegisterWindowMessageA(s_PM_DO_FEATURESCAN_10020fe8);
  return;
}


// ---- FUN_1000fe9e @ 1000fe9e

void FUN_1000fe9e(void)

{
  FUN_1000fea8();
  return;
}


// ---- FUN_1000fea8 @ 1000fea8

void FUN_1000fea8(void)

{
  DAT_10022410 = RegisterWindowMessageA(s_PM_STOP_FEATURESCAN_10020ffc);
  return;
}


// ---- FUN_1000febd @ 1000febd

void FUN_1000febd(void)

{
  FUN_1000fec7();
  return;
}


// ---- FUN_1000fec7 @ 1000fec7

void FUN_1000fec7(void)

{
  DAT_1002240c = RegisterWindowMessageA(s_PM_D_ZONE_DATA_CHANGE_10021010);
  return;
}


// ---- FUN_1000fedc @ 1000fedc

void FUN_1000fedc(void)

{
  FUN_1000fee6();
  return;
}


// ---- FUN_1000fee6 @ 1000fee6

void FUN_1000fee6(void)

{
  DAT_10022408 = RegisterWindowMessageA(s_PM_D_GET_ZONES_DATA_10021028);
  return;
}


// ---- FUN_1000fefb @ 1000fefb

void FUN_1000fefb(void)

{
  FUN_1000ff05();
  return;
}


// ---- FUN_1000ff05 @ 1000ff05

void FUN_1000ff05(void)

{
  DAT_10022404 = RegisterWindowMessageA(s_PM_D_SET_ZONES_DATA_1002103c);
  return;
}


// ---- FUN_1000ff1a @ 1000ff1a

void FUN_1000ff1a(void)

{
  FUN_1000ff24();
  return;
}


// ---- FUN_1000ff24 @ 1000ff24

void FUN_1000ff24(void)

{
  DAT_10022400 = RegisterWindowMessageA(s_PM_D_GET_LICENCES_10021050);
  return;
}


// ---- FUN_1000ff39 @ 1000ff39

void FUN_1000ff39(void)

{
  FUN_1000ff43();
  return;
}


// ---- FUN_1000ff43 @ 1000ff43

void FUN_1000ff43(void)

{
  DAT_100223fc = RegisterWindowMessageA(s_PM_D_SET_LICENCES_10021064);
  return;
}


// ---- FUN_1000ff58 @ 1000ff58

void FUN_1000ff58(void)

{
  FUN_1000ff62();
  return;
}


// ---- FUN_1000ff62 @ 1000ff62

void FUN_1000ff62(void)

{
  DAT_100223f8 = RegisterWindowMessageA(s_PM_D_GET_ADMIN_CONFIG_10021078);
  return;
}


// ---- FUN_1000ff77 @ 1000ff77

void FUN_1000ff77(void)

{
  FUN_1000ff81();
  return;
}


// ---- FUN_1000ff81 @ 1000ff81

void FUN_1000ff81(void)

{
  DAT_100223f4 = RegisterWindowMessageA(s_PM_D_SET_ADMIN_CONFIG_10021090);
  return;
}


// ---- FUN_1000ff96 @ 1000ff96

void FUN_1000ff96(void)

{
  FUN_1000ffa0();
  return;
}


// ---- FUN_1000ffa0 @ 1000ffa0

void FUN_1000ffa0(void)

{
  DAT_100223f0 = RegisterWindowMessageA(s_PM_ADMIN_FUNCTION_100210a8);
  return;
}


// ---- FUN_1000ffb5 @ 1000ffb5

void FUN_1000ffb5(void)

{
  FUN_1000ffbf();
  return;
}


// ---- FUN_1000ffbf @ 1000ffbf

void FUN_1000ffbf(void)

{
  DAT_100223ec = RegisterWindowMessageA(s_PM_GET_MACRO_LINKS_100210bc);
  return;
}


// ---- FUN_1000ffd4 @ 1000ffd4

void FUN_1000ffd4(void)

{
  FUN_1000ffde();
  return;
}


// ---- FUN_1000ffde @ 1000ffde

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ffde(void)

{
  _DAT_100223e8 = RegisterWindowMessageA(s_PM_GET_UIF_LINKS_100210d0);
  return;
}


// ---- FUN_1000fff3 @ 1000fff3

void FUN_1000fff3(void)

{
  FUN_1000fffd();
  return;
}


// ---- FUN_1000fffd @ 1000fffd

void FUN_1000fffd(void)

{
  DAT_100223e4 = RegisterWindowMessageA(s_PM_POINT_AS_ZONE_100210e4);
  return;
}


// ---- FUN_10010012 @ 10010012

void FUN_10010012(void)

{
  FUN_1001001c();
  return;
}


// ---- FUN_1001001c @ 1001001c

void FUN_1001001c(void)

{
  DAT_100223e0 = RegisterWindowMessageA(s_PM_GET_HELP_PATH_100210f8);
  return;
}


// ---- FUN_10010031 @ 10010031

void FUN_10010031(void)

{
  FUN_1001003b();
  return;
}


// ---- FUN_1001003b @ 1001003b

void FUN_1001003b(void)

{
  DAT_100223dc = RegisterWindowMessageA(s_PM_SAVE_TIFF_1002110c);
  return;
}


// ---- FUN_10010050 @ 10010050

void FUN_10010050(void)

{
  FUN_1001005a();
  return;
}


// ---- FUN_1001005a @ 1001005a

void FUN_1001005a(void)

{
  DAT_100223d8 = RegisterWindowMessageA(s_PM_LOAD_TIFF_1002111c);
  return;
}


// ---- FUN_1001006f @ 1001006f

void FUN_1001006f(void)

{
  FUN_10010079();
  return;
}


// ---- FUN_10010079 @ 10010079

void FUN_10010079(void)

{
  DAT_100223d4 = RegisterWindowMessageA(s_PM_TIFF_TO_BMP_1002112c);
  return;
}


// ---- FUN_1001008e @ 1001008e

void FUN_1001008e(void)

{
  FUN_10010098();
  return;
}


// ---- FUN_10010098 @ 10010098

void FUN_10010098(void)

{
  DAT_100223d0 = RegisterWindowMessageA(s_PM_IMAGE_TO_FILE_1002113c);
  return;
}


// ---- FUN_100100ad @ 100100ad

void FUN_100100ad(void)

{
  FUN_100100b7();
  return;
}


// ---- FUN_100100b7 @ 100100b7

void FUN_100100b7(void)

{
  DAT_100223cc = RegisterWindowMessageA(s_PM_RAW_IMAGE_TO_FILE_10021150);
  return;
}


// ---- FUN_100100cc @ 100100cc

void FUN_100100cc(void)

{
  FUN_100100d6();
  return;
}


// ---- FUN_100100d6 @ 100100d6

void FUN_100100d6(void)

{
  DAT_100223c8 = RegisterWindowMessageA(s_PM_IMAGE_FROM_FILE_10021168);
  return;
}


// ---- FUN_100100eb @ 100100eb

void FUN_100100eb(void)

{
  FUN_100100f5();
  return;
}


// ---- FUN_100100f5 @ 100100f5

void FUN_100100f5(void)

{
  DAT_100223c4 = RegisterWindowMessageA(s_PM_GET_TIFF_HEADER_1002117c);
  return;
}


// ---- FUN_1001010a @ 1001010a

void FUN_1001010a(void)

{
  FUN_10010114();
  return;
}


// ---- FUN_10010114 @ 10010114

void FUN_10010114(void)

{
  DAT_100223c0 = RegisterWindowMessageA(s_PM_GET_HISTOGRAM_DATA_10021190);
  return;
}


// ---- FUN_10010129 @ 10010129

void FUN_10010129(void)

{
  FUN_10010133();
  return;
}


// ---- FUN_10010133 @ 10010133

void FUN_10010133(void)

{
  DAT_100223bc = RegisterWindowMessageA(s_PM_GET_LINE_DATA_100211a8);
  return;
}


// ---- FUN_10010148 @ 10010148

void FUN_10010148(void)

{
  FUN_10010152();
  return;
}


// ---- FUN_10010152 @ 10010152

void FUN_10010152(void)

{
  DAT_100223b8 = RegisterWindowMessageA(s_LEO_D_SET_DEF_PRINT_SCALE_100211bc);
  return;
}


// ---- FUN_10010167 @ 10010167

void FUN_10010167(void)

{
  FUN_10010171();
  return;
}


// ---- FUN_10010171 @ 10010171

void FUN_10010171(void)

{
  DAT_100223b4 = RegisterWindowMessageA(s_PM_PRINT_IMAGE_100211d8);
  return;
}


// ---- FUN_10010186 @ 10010186

void FUN_10010186(void)

{
  FUN_10010190();
  return;
}


// ---- FUN_10010190 @ 10010190

void FUN_10010190(void)

{
  DAT_100223b0 = RegisterWindowMessageA(s_PM_CLIP_COPY_100211e8);
  return;
}


// ---- FUN_100101a5 @ 100101a5

void FUN_100101a5(void)

{
  FUN_100101af();
  return;
}


// ---- FUN_100101af @ 100101af

void FUN_100101af(void)

{
  DAT_100223ac = RegisterWindowMessageA(s_PM_CLIP_INFO_100211f8);
  return;
}


// ---- FUN_100101c4 @ 100101c4

void FUN_100101c4(void)

{
  FUN_100101ce();
  return;
}


// ---- FUN_100101ce @ 100101ce

void FUN_100101ce(void)

{
  DAT_100223a8 = RegisterWindowMessageA(s_PM_CLIP_PASTE_10021208);
  return;
}


// ---- FUN_100101e3 @ 100101e3

void FUN_100101e3(void)

{
  FUN_100101ed();
  return;
}


// ---- FUN_100101ed @ 100101ed

void FUN_100101ed(void)

{
  DAT_100223a4 = RegisterWindowMessageA(s_PM_HRRU_PHOTO_10021218);
  return;
}


// ---- FUN_10010202 @ 10010202

void FUN_10010202(void)

{
  FUN_1001020c();
  return;
}


// ---- FUN_1001020c @ 1001020c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001020c(void)

{
  _DAT_100223a0 = RegisterWindowMessageA(s_PM_WOBBLE_REGISTER_10021228);
  return;
}


// ---- FUN_10010221 @ 10010221

void FUN_10010221(void)

{
  FUN_1001022b();
  return;
}


// ---- FUN_1001022b @ 1001022b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001022b(void)

{
  _DAT_1002239c = RegisterWindowMessageA(s_PM_SHOW_FOCUS_DLG_1002123c);
  return;
}


// ---- FUN_10010240 @ 10010240

void FUN_10010240(void)

{
  FUN_1001024a();
  return;
}


// ---- FUN_1001024a @ 1001024a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001024a(void)

{
  _DAT_10022398 = RegisterWindowMessageA(s_PM_SHOW_APER_DLG_10021250);
  return;
}


// ---- FUN_1001025f @ 1001025f

void FUN_1001025f(void)

{
  FUN_10010269();
  return;
}


// ---- FUN_10010269 @ 10010269

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10010269(void)

{
  _DAT_10022394 = RegisterWindowMessageA(s_PM_SHOW_GUN_DLG_10021264);
  return;
}


// ---- FUN_1001027e @ 1001027e

void FUN_1001027e(void)

{
  FUN_10010288();
  return;
}


// ---- FUN_10010288 @ 10010288

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10010288(void)

{
  _DAT_10022390 = RegisterWindowMessageA(s_PM_QUERY_CLOSE_SERVER_10021274);
  return;
}


// ---- FUN_1001029d @ 1001029d

void FUN_1001029d(void)

{
  FUN_100102a7();
  return;
}


// ---- FUN_100102a7 @ 100102a7

void FUN_100102a7(void)

{
  DAT_1002238c = RegisterWindowMessageA(s_PM_WOBBLE_POPUP_INHIBIT_1002128c);
  return;
}


// ---- FUN_100102bc @ 100102bc

void FUN_100102bc(void)

{
  FUN_100102c6();
  return;
}


// ---- FUN_100102c6 @ 100102c6

void FUN_100102c6(void)

{
  DAT_10022388 = RegisterWindowMessageA(s_PM_GET_REGISTRATION_DATA_100212a4);
  return;
}


// ---- FUN_100102db @ 100102db

void FUN_100102db(void)

{
  FUN_100102e5();
  return;
}


// ---- FUN_100102e5 @ 100102e5

void FUN_100102e5(void)

{
  DAT_10022384 = RegisterWindowMessageA(s_PM_SET_REGISTRATION_DATA_100212c0);
  return;
}


// ---- FUN_100102fa @ 100102fa

void FUN_100102fa(void)

{
  FUN_10010304();
  return;
}


// ---- FUN_10010304 @ 10010304

void FUN_10010304(void)

{
  DAT_10022380 = RegisterWindowMessageA(s_PM_DELTA_SAMPLE_GOTO_100212dc);
  return;
}


// ---- FUN_10010319 @ 10010319

void FUN_10010319(void)

{
  FUN_10010323();
  return;
}


// ---- FUN_10010323 @ 10010323

void FUN_10010323(void)

{
  DAT_1002237c = RegisterWindowMessageA(s_PM_STAGE_LABEL_100212f4);
  return;
}


// ---- FUN_10010338 @ 10010338

void FUN_10010338(void)

{
  FUN_10010342();
  return;
}


// ---- FUN_10010342 @ 10010342

void FUN_10010342(void)

{
  DAT_10022378 = RegisterWindowMessageA(s_PM_STAGE_POINT_GOTO_10021304);
  return;
}


// ---- FUN_10010357 @ 10010357

void FUN_10010357(void)

{
  FUN_10010361();
  return;
}


// ---- FUN_10010361 @ 10010361

void FUN_10010361(void)

{
  DAT_10022374 = RegisterWindowMessageA(s_PM_STAGE_POINT_GET_COUNT_10021318);
  return;
}


// ---- FUN_10010376 @ 10010376

void FUN_10010376(void)

{
  FUN_10010380();
  return;
}


// ---- FUN_10010380 @ 10010380

void FUN_10010380(void)

{
  DAT_10022370 = RegisterWindowMessageA(s_PM_STAGE_POINT_GET_INDEX_10021334);
  return;
}


// ---- FUN_10010395 @ 10010395

void FUN_10010395(void)

{
  FUN_1001039f();
  return;
}


// ---- FUN_1001039f @ 1001039f

void FUN_1001039f(void)

{
  DAT_1002236c = RegisterWindowMessageA(s_PM_STAGE_POINT_GET_DATA_10021350);
  return;
}


// ---- FUN_100103b4 @ 100103b4

void FUN_100103b4(void)

{
  FUN_100103be();
  return;
}


// ---- FUN_100103be @ 100103be

void FUN_100103be(void)

{
  DAT_10022368 = RegisterWindowMessageA(s_PM_STAGE_POINT_SET_DATA_10021368);
  return;
}


// ---- FUN_100103d3 @ 100103d3

void FUN_100103d3(void)

{
  FUN_100103dd();
  return;
}


// ---- FUN_100103dd @ 100103dd

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100103dd(void)

{
  _DAT_10022364 = RegisterWindowMessageA(s_PM_STAGE_POINTS_LIST_CHANGED_10021380);
  return;
}


// ---- FUN_100103f2 @ 100103f2

void FUN_100103f2(void)

{
  FUN_100103fc();
  return;
}


// ---- FUN_100103fc @ 100103fc

void FUN_100103fc(void)

{
  DAT_10022360 = RegisterWindowMessageA(s_PM_STAGE_POINT_GET_FLAGS_100213a0);
  return;
}


// ---- FUN_10010411 @ 10010411

void FUN_10010411(void)

{
  FUN_1001041b();
  return;
}


// ---- FUN_1001041b @ 1001041b

void FUN_1001041b(void)

{
  DAT_1002235c = RegisterWindowMessageA(s_PM_STAGE_POINT_SET_FLAGS_100213bc);
  return;
}


// ---- FUN_10010430 @ 10010430

void FUN_10010430(void)

{
  FUN_1001043a();
  return;
}


// ---- FUN_1001043a @ 1001043a

void FUN_1001043a(void)

{
  DAT_10022358 = RegisterWindowMessageA(s_PM_STAGE_MODE_IS_REGISTERED_100213d8);
  return;
}


// ---- FUN_1001044f @ 1001044f

void FUN_1001044f(void)

{
  FUN_10010459();
  return;
}


// ---- FUN_10010459 @ 10010459

void FUN_10010459(void)

{
  DAT_10022354 = RegisterWindowMessageA(s_PM_STAGE_POINT_GET_MODE_100213f4);
  return;
}


// ---- FUN_1001046e @ 1001046e

void FUN_1001046e(void)

{
  FUN_10010478();
  return;
}


// ---- FUN_10010478 @ 10010478

void FUN_10010478(void)

{
  DAT_10022350 = RegisterWindowMessageA(s_PM_STAGE_SET_MAP_MODE_1002140c);
  return;
}


// ---- FUN_1001048d @ 1001048d

void FUN_1001048d(void)

{
  FUN_10010497();
  return;
}


// ---- FUN_10010497 @ 10010497

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10010497(void)

{
  _DAT_1002234c = RegisterWindowMessageA(s_PM_STAGE_TYPE_DATA_CHANGED_10021424);
  return;
}


// ---- FUN_100104ac @ 100104ac

void FUN_100104ac(void)

{
  FUN_100104b6();
  return;
}


// ---- FUN_100104b6 @ 100104b6

void FUN_100104b6(void)

{
  DAT_10022348 = RegisterWindowMessageA(s_PM_GET_STAGE_DEFAULT_ROT_CENTRE_10021440);
  return;
}


// ---- FUN_100104cb @ 100104cb

void FUN_100104cb(void)

{
  FUN_100104d5();
  return;
}


// ---- FUN_100104d5 @ 100104d5

void FUN_100104d5(void)

{
  DAT_10022344 = RegisterWindowMessageA(s_PM_SRV16_MISC_FUNC_10021460);
  return;
}


// ---- FUN_100104ea @ 100104ea

void FUN_100104ea(void)

{
  FUN_100104f4();
  return;
}


// ---- FUN_100104f4 @ 100104f4

void FUN_100104f4(void)

{
  DAT_10022340 = RegisterWindowMessageA(s_PM_GET_KNOB_ASSIGNMENT_10021474);
  return;
}


// ---- FUN_10010509 @ 10010509

void FUN_10010509(void)

{
  FUN_10010513();
  return;
}


// ---- FUN_10010513 @ 10010513

void FUN_10010513(void)

{
  DAT_1002233c = RegisterWindowMessageA(s_PM_NAVMGR_REQUEST_1002148c);
  return;
}


// ---- FUN_10010528 @ 10010528

void FUN_10010528(void)

{
  FUN_10010532();
  return;
}


// ---- FUN_10010532 @ 10010532

void FUN_10010532(void)

{
  DAT_10022338 = RegisterWindowMessageA(s_PM_SHOWHIDEDIALOGS_REQUEST_100214a0);
  return;
}


// ---- FUN_10010547 @ 10010547

void FUN_10010547(void)

{
  FUN_10010551();
  return;
}


// ---- FUN_10010551 @ 10010551

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10010551(void)

{
  _DAT_10022334 = RegisterWindowMessageA(s_PM_NAVMGR_DONE_100214bc);
  return;
}


// ---- FUN_10010566 @ 10010566

void FUN_10010566(void)

{
  FUN_10010570();
  return;
}


// ---- FUN_10010570 @ 10010570

void FUN_10010570(void)

{
  DAT_10022330 = RegisterWindowMessageA(s_LEO_HPAPP_MESSAGE_100214cc);
  return;
}


// ---- FUN_10010585 @ 10010585

void FUN_10010585(void)

{
  FUN_1001058f();
  return;
}


// ---- FUN_1001058f @ 1001058f

void FUN_1001058f(void)

{
  DAT_1002232c = RegisterWindowMessageA(s_PM_GET_HPAPP_PANEL_DATA_100214e0);
  return;
}


// ---- FUN_100105a4 @ 100105a4

void FUN_100105a4(void)

{
  FUN_100105ae();
  return;
}


// ---- FUN_100105ae @ 100105ae

void FUN_100105ae(void)

{
  DAT_10022328 = RegisterWindowMessageA(s_PM_HPAPP_FUNC_100214f8);
  return;
}


// ---- FUN_100105c3 @ 100105c3

void FUN_100105c3(void)

{
  FUN_100105cd();
  return;
}


// ---- FUN_100105cd @ 100105cd

void FUN_100105cd(void)

{
  DAT_10022324 = RegisterWindowMessageA(s_PM_GET_CAL_COL_DATA_10021508);
  return;
}


// ---- FUN_100105e2 @ 100105e2

void FUN_100105e2(void)

{
  FUN_100105ec();
  return;
}


// ---- FUN_100105ec @ 100105ec

void FUN_100105ec(void)

{
  DAT_10022320 = RegisterWindowMessageA(s_PM_CHANGE_IMAGE_DIRECTORY_1002151c);
  return;
}


// ---- FUN_10010601 @ 10010601

void FUN_10010601(void)

{
  FUN_1001060b();
  return;
}


// ---- FUN_1001060b @ 1001060b

void FUN_1001060b(void)

{
  DAT_1002231c = RegisterWindowMessageA(s_PM_CHANGE_USER_DIRECTORY_10021538);
  return;
}


// ---- FUN_10010620 @ 10010620

void FUN_10010620(void)

{
  FUN_1001062a();
  return;
}


// ---- FUN_1001062a @ 1001062a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001062a(void)

{
  _DAT_10022318 = RegisterWindowMessageA(s_PM_TRACKERBALL_INIT_10021554);
  return;
}


// ---- FUN_1001063f @ 1001063f

void FUN_1001063f(void)

{
  FUN_10010649();
  return;
}


// ---- FUN_10010649 @ 10010649

void FUN_10010649(void)

{
  DAT_10022314 = RegisterWindowMessageA(s_PM_TRACKERBALL_SHOW_SETTINGS_10021568);
  return;
}


// ---- FUN_1001065e @ 1001065e

void FUN_1001065e(void)

{
  FUN_10010668();
  return;
}


// ---- FUN_10010668 @ 10010668

void FUN_10010668(void)

{
  DAT_10022310 = RegisterWindowMessageA(s_PM_TRACKERBALL_ARE_DIALOGS_HIDDE_10021588);
  return;
}


// ---- FUN_1001067d @ 1001067d

void FUN_1001067d(void)

{
  FUN_10010687();
  return;
}


// ---- FUN_10010687 @ 10010687

void FUN_10010687(void)

{
  DAT_1002230c = RegisterWindowMessageA(s_PM_TRACKERBALL_ASSIGN_BUTTON_100215ac);
  return;
}


// ---- FUN_1001069c @ 1001069c

void FUN_1001069c(void)

{
  FUN_100106a6();
  return;
}


// ---- FUN_100106a6 @ 100106a6

void FUN_100106a6(void)

{
  DAT_10022308 = RegisterWindowMessageA(s_PM_TRACKERBALL_GET_ASSIGNMENTS_100215cc);
  return;
}


// ---- FUN_100106bb @ 100106bb

void FUN_100106bb(void)

{
  FUN_100106c5();
  return;
}


// ---- FUN_100106c5 @ 100106c5

void FUN_100106c5(void)

{
  DAT_10022304 = RegisterWindowMessageA(s_PM_TRACKERBALL_SELECT_BUTTON_100215ec);
  return;
}


// ---- FUN_100106da @ 100106da

void FUN_100106da(void)

{
  FUN_100106e4();
  return;
}


// ---- FUN_100106e4 @ 100106e4

void FUN_100106e4(void)

{
  DAT_10022300 = RegisterWindowMessageA(s_PM_TRACKERBALL_SELECT_BUTTON_1002160c);
  return;
}


// ---- FUN_100106f9 @ 100106f9

void FUN_100106f9(void)

{
  FUN_10010703();
  return;
}


// ---- FUN_10010703 @ 10010703

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10010703(void)

{
  _DAT_100222fc = RegisterWindowMessageA(s_PM_TRACKERBALL_AXIS_SELECTED_1002162c);
  return;
}


// ---- FUN_10010718 @ 10010718

void FUN_10010718(void)

{
  FUN_10010722();
  return;
}


// ---- FUN_10010722 @ 10010722

void FUN_10010722(void)

{
  DAT_100222f8 = RegisterWindowMessageA(s_PM_2ND_IMAGE_DISPLAY_1002164c);
  return;
}


// ---- FUN_10010737 @ 10010737

void FUN_10010737(void)

{
  FUN_10010741();
  return;
}


// ---- FUN_10010741 @ 10010741

void FUN_10010741(void)

{
  DAT_100222f4 = RegisterWindowMessageA(s_PM_GET_2ND_IMAGE_DISPLAY_10021664);
  return;
}


// ---- FUN_10010756 @ 10010756

void FUN_10010756(void)

{
  FUN_10010760();
  return;
}


// ---- FUN_10010760 @ 10010760

void FUN_10010760(void)

{
  DAT_100222f0 = RegisterWindowMessageA(s_PM_NOTIFY_2ND_IMAGE_DISPLAY_10021680);
  return;
}


// ---- FUN_10010775 @ 10010775

void FUN_10010775(void)

{
  FUN_1001077f();
  return;
}


// ---- FUN_1001077f @ 1001077f

void FUN_1001077f(void)

{
  DAT_100222ec = RegisterWindowMessageA(s_PM_2ND_IMAGE_SELECT_1002169c);
  return;
}


// ---- FUN_10010794 @ 10010794

void FUN_10010794(void)

{
  FUN_1001079e();
  return;
}


// ---- FUN_1001079e @ 1001079e

void FUN_1001079e(void)

{
  DAT_100222e8 = RegisterWindowMessageA(s_PM_SELECT_USER_AREA_100216b0);
  return;
}


// ---- FUN_100107b3 @ 100107b3

void FUN_100107b3(void)

{
  FUN_100107bd();
  return;
}


// ---- FUN_100107bd @ 100107bd

void FUN_100107bd(void)

{
  DAT_100222e4 = RegisterWindowMessageA(s_PM_READ_USER_AREA_100216c4);
  return;
}


// ---- FUN_100107d2 @ 100107d2

void FUN_100107d2(void)

{
  FUN_100107dc();
  return;
}


// ---- FUN_100107dc @ 100107dc

void FUN_100107dc(void)

{
  DAT_100222e0 = RegisterWindowMessageA(s_PM_CREATE_USER_AREA_100216d8);
  return;
}


// ---- FUN_100107f1 @ 100107f1

void FUN_100107f1(void)

{
  FUN_100107fb();
  return;
}


// ---- FUN_100107fb @ 100107fb

void FUN_100107fb(void)

{
  DAT_100222dc = RegisterWindowMessageA(s_PM_DELETE_USER_AREA_100216ec);
  return;
}


// ---- FUN_10010810 @ 10010810

void FUN_10010810(void)

{
  FUN_1001081a();
  return;
}


// ---- FUN_1001081a @ 1001081a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001081a(void)

{
  _DAT_100222d8 = RegisterWindowMessageA(s_PM_LEO_SERVER_EVENT_10021700);
  return;
}


// ---- FUN_1001082f @ 1001082f

void FUN_1001082f(void)

{
  FUN_10010839();
  return;
}


// ---- FUN_10010839 @ 10010839

void FUN_10010839(void)

{
  DAT_100222d4 = RegisterWindowMessageA(s_PM_GET_MEASURE_UNITS_10021714);
  return;
}


// ---- FUN_1001084e @ 1001084e

void FUN_1001084e(void)

{
  FUN_10010858();
  return;
}


// ---- FUN_10010858 @ 10010858

void FUN_10010858(void)

{
  DAT_100222d0 = RegisterWindowMessageA(s_PM_SET_MEASURE_UNITS_1002172c);
  return;
}


// ---- FUN_1001086d @ 1001086d

void FUN_1001086d(void)

{
  FUN_10010877();
  return;
}


// ---- FUN_10010877 @ 10010877

void FUN_10010877(void)

{
  DAT_100222cc = RegisterWindowMessageA(s_PM_GET_PRESET_COUNT_10021744);
  return;
}


// ---- FUN_1001088c @ 1001088c

void FUN_1001088c(void)

{
  FUN_10010896();
  return;
}


// ---- FUN_10010896 @ 10010896

void FUN_10010896(void)

{
  DAT_100222c8 = RegisterWindowMessageA(s_PM_SET_PRESET_INDEX_10021758);
  return;
}


// ---- FUN_100108ab @ 100108ab

void FUN_100108ab(void)

{
  FUN_100108b5();
  return;
}


// ---- FUN_100108b5 @ 100108b5

void FUN_100108b5(void)

{
  DAT_100222c4 = RegisterWindowMessageA(s_PM_GET_PRESET_LABEL_1002176c);
  return;
}


// ---- FUN_100108ca @ 100108ca

void FUN_100108ca(void)

{
  FUN_100108d4();
  return;
}


// ---- FUN_100108d4 @ 100108d4

void FUN_100108d4(void)

{
  DAT_100222c0 = RegisterWindowMessageA(s_PM_GENERAL_FUNCTION_10021780);
  return;
}


// ---- CreateObject @ 100108e9

/* Library Function - Multiple Matches With Same Base Name
    public: static class CNoTrackObject * __stdcall CProcessLocal<struct
   _AFX_PROPPAGEFONTINFO>::CreateObject(void)
    public: static class CNoTrackObject * __stdcall CProcessLocal<class
   _AFX_CHECKLIST_STATE>::CreateObject(void)
    public: static class CNoTrackObject * __stdcall CProcessLocal<class
   _AFX_COLOR_STATE>::CreateObject(void)
    public: static class CNoTrackObject * __stdcall CProcessLocal<class
   _AFX_DEBUG_STATE>::CreateObject(void)
     10 names - too many to list
   
   Library: Visual Studio 2003 Debug */

undefined4 * CreateObject(void)

{
  undefined4 *puVar1;
  undefined4 *local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10017a5a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = (undefined4 *)FUN_1000cbb0(0x20);
  local_8 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    local_1c = (undefined4 *)0x0;
  }
  else {
    local_1c = FUN_10010967(puVar1);
  }
  ExceptionList = local_10;
  return local_1c;
}


// ---- FUN_1001094d @ 1001094d

undefined * FUN_1001094d(void)

{
  return classCObject_exref;
}


// ---- FUN_10010957 @ 10010957

undefined ** FUN_10010957(void)

{
  return &PTR_s_CServerComms_1001a050;
}


// ---- FUN_10010967 @ 10010967

undefined4 * __fastcall FUN_10010967(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10017a6d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_10004df0(param_1);
  local_8 = 0;
  *param_1 = &PTR_FUN_1001a068;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0x809;
  param_1[5] = 0;
  param_1[6] = 0;
  FUN_100157a6((int)param_1);
  ExceptionList = local_10;
  return param_1;
}


// ---- FUN_100109f7 @ 100109f7

undefined4 * __thiscall FUN_100109f7(void *this,undefined4 param_1,undefined4 param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10017a80;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_10004df0(this);
  local_8 = 0;
  *(undefined ***)this = &PTR_FUN_1001a068;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0x809;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  FUN_100157a6((int)this);
  ExceptionList = local_10;
  return this;
}


// ---- FUN_10010a87 @ 10010a87

void __fastcall FUN_10010a87(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_1001a068;
  FUN_10004e40(param_1);
  return;
}


// ---- FUN_10010aa3 @ 10010aa3

void __thiscall FUN_10010aa3(void *this,undefined4 param_1,undefined4 param_2)

{
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  return;
}


// ---- FUN_10010ac2 @ 10010ac2

undefined4 __fastcall FUN_10010ac2(int param_1)

{
  HWND pHVar1;
  int iVar2;
  
  pHVar1 = FindWindowA((LPCSTR)0x0,s_LEO_SRV_32_100217a4);
  *(HWND *)(param_1 + 4) = pHVar1;
  if (*(int *)(param_1 + 4) == 0) {
    pHVar1 = FindWindowA((LPCSTR)0x0,s_LEO_SRV_32__E__100217b0);
    *(HWND *)(param_1 + 4) = pHVar1;
  }
  if (*(int *)(param_1 + 4) == 0) {
    pHVar1 = FindWindowA((LPCSTR)0x0,s_LEO_SRV_32__W__100217c0);
    *(HWND *)(param_1 + 4) = pHVar1;
  }
  if (*(int *)(param_1 + 4) == 0) {
    pHVar1 = FindWindowA((LPCSTR)0x0,s_LEO_SRV_32__EW__100217d0);
    *(HWND *)(param_1 + 4) = pHVar1;
  }
  if ((*(int *)(param_1 + 4) != 0) && (iVar2 = FUN_10010b53(param_1), iVar2 != 0)) {
    return *(undefined4 *)(param_1 + 4);
  }
  return 0;
}


// ---- FUN_10010b53 @ 10010b53

undefined4 __fastcall FUN_10010b53(int param_1)

{
  LRESULT LVar1;
  
  LVar1 = SendMessageA(*(HWND *)(param_1 + 4),DAT_10022594,*(WPARAM *)(param_1 + 8),0);
  *(LRESULT *)(param_1 + 0xc) = LVar1;
  return *(undefined4 *)(param_1 + 0xc);
}


// ---- FUN_10010b87 @ 10010b87

undefined4 __fastcall FUN_10010b87(int param_1)

{
  LRESULT LVar1;
  
  LVar1 = SendMessageA(*(HWND *)(param_1 + 4),DAT_10022570,*(WPARAM *)(param_1 + 8),0);
  *(LRESULT *)(param_1 + 0xc) = LVar1;
  return *(undefined4 *)(param_1 + 0xc);
}


// ---- FUN_10010bbb @ 10010bbb

undefined4 __fastcall FUN_10010bbb(int param_1)

{
  BOOL BVar1;
  
  BVar1 = PostMessageA(*(HWND *)(param_1 + 4),DAT_10022574,*(WPARAM *)(param_1 + 8),0);
  *(BOOL *)(param_1 + 0xc) = BVar1;
  return *(undefined4 *)(param_1 + 0xc);
}


// ---- FUN_10010bef @ 10010bef

undefined4 __fastcall FUN_10010bef(int param_1)

{
  LRESULT LVar1;
  
  LVar1 = SendMessageA(*(HWND *)(param_1 + 4),DAT_1002252c,*(WPARAM *)(param_1 + 8),0);
  *(LRESULT *)(param_1 + 0xc) = LVar1;
  return *(undefined4 *)(param_1 + 0xc);
}


// ---- FUN_10010c23 @ 10010c23

undefined4 __fastcall FUN_10010c23(int param_1)

{
  LRESULT LVar1;
  
  LVar1 = SendMessageA(*(HWND *)(param_1 + 4),DAT_1002257c,*(WPARAM *)(param_1 + 8),0);
  *(LRESULT *)(param_1 + 0xc) = LVar1;
  return *(undefined4 *)(param_1 + 0xc);
}


// ---- FUN_10010c57 @ 10010c57

undefined4 __thiscall FUN_10010c57(void *this,WPARAM param_1,char *param_2)

{
  undefined4 uVar1;
  LRESULT LVar2;
  char local_170 [352];
  undefined4 local_10;
  undefined4 local_c;
  char *local_8;
  
  FUN_10013fe0(local_170,param_2);
  local_10 = DAT_1002258c;
  local_c = 0x15e;
  local_8 = local_170;
  if (*(int *)((int)this + 4) == 0) {
    uVar1 = FUN_10010ac2((int)this);
    *(undefined4 *)((int)this + 4) = uVar1;
  }
  LVar2 = SendMessageA(*(HWND *)((int)this + 4),0x4a,param_1,(LPARAM)&local_10);
  *(LRESULT *)((int)this + 0xc) = LVar2;
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_10010ce7 @ 10010ce7

undefined4 __thiscall
FUN_10010ce7(void *this,WPARAM param_1,char *param_2,char *param_3,char *param_4)

{
  undefined4 uVar1;
  LRESULT LVar2;
  char local_42c [350];
  char local_2ce [350];
  char local_170 [352];
  undefined4 local_10;
  undefined4 local_c;
  char *local_8;
  
  FUN_10013fe0(local_42c,param_2);
  FUN_10013fe0(local_2ce,param_3);
  FUN_10013fe0(local_170,param_4);
  local_10 = DAT_10022584;
  local_c = 0x41a;
  local_8 = local_42c;
  if (*(int *)((int)this + 4) == 0) {
    uVar1 = FUN_10010ac2((int)this);
    *(undefined4 *)((int)this + 4) = uVar1;
  }
  LVar2 = SendMessageA(*(HWND *)((int)this + 4),0x4a,param_1,(LPARAM)&local_10);
  *(LRESULT *)((int)this + 0xc) = LVar2;
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_10010da2 @ 10010da2

undefined4 __thiscall FUN_10010da2(void *this,WPARAM param_1,char *param_2)

{
  undefined4 uVar1;
  LRESULT LVar2;
  char local_170 [352];
  undefined4 local_10;
  undefined4 local_c;
  char *local_8;
  
  FUN_10013fe0(local_170,param_2);
  local_10 = DAT_10022588;
  local_c = 0x15e;
  local_8 = local_170;
  if (*(int *)((int)this + 4) == 0) {
    uVar1 = FUN_10010ac2((int)this);
    *(undefined4 *)((int)this + 4) = uVar1;
  }
  LVar2 = SendMessageA(*(HWND *)((int)this + 4),0x4a,param_1,(LPARAM)&local_10);
  *(LRESULT *)((int)this + 0xc) = LVar2;
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_10010e32 @ 10010e32

undefined4 __thiscall FUN_10010e32(void *this,CString *param_1)

{
  char local_170 [352];
  undefined4 local_10;
  undefined4 local_c;
  char *local_8;
  
  local_10 = DAT_1002256c;
  local_c = 0x15e;
  local_8 = local_170;
  FUN_10015809(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_10);
  CString::operator=(param_1,local_170);
  return 1;
}


// ---- FUN_10010e98 @ 10010e98

void __fastcall FUN_10010e98(int param_1)

{
  SendMessageA(*(HWND *)(param_1 + 4),DAT_1002259c,*(WPARAM *)(param_1 + 8),0);
  return;
}


// ---- FUN_10010ec0 @ 10010ec0

void __fastcall FUN_10010ec0(int param_1)

{
  SendMessageA(*(HWND *)(param_1 + 4),DAT_10022538,*(WPARAM *)(param_1 + 8),0);
  return;
}


// ---- FUN_10010ee8 @ 10010ee8

void __fastcall FUN_10010ee8(int param_1)

{
  SendMessageA(*(HWND *)(param_1 + 4),DAT_10022534,*(WPARAM *)(param_1 + 8),0);
  return;
}


// ---- FUN_10010f10 @ 10010f10

void __thiscall FUN_10010f10(void *this,LPARAM param_1)

{
  SendMessageA(*(HWND *)((int)this + 4),DAT_10022530,*(WPARAM *)((int)this + 8),param_1);
  return;
}


// ---- FUN_10010f3b @ 10010f3b

void __thiscall FUN_10010f3b(void *this,LPARAM param_1)

{
  SendMessageA(*(HWND *)((int)this + 4),DAT_10022344,*(WPARAM *)((int)this + 8),param_1);
  return;
}


// ---- FUN_10010f66 @ 10010f66

undefined4 __thiscall FUN_10010f66(void *this,CString *param_1,CString *param_2,CString *param_3)

{
  char local_42c [350];
  char local_2ce [350];
  char local_170 [352];
  undefined4 local_10;
  undefined4 local_c;
  char *local_8;
  
  local_10 = DAT_10022568;
  local_c = 0x41a;
  local_8 = local_42c;
  FUN_10015809(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_10);
  CString::operator=(param_1,local_42c);
  CString::operator=(param_2,local_2ce);
  CString::operator=(param_3,local_170);
  return 1;
}


// ---- FUN_10010fea @ 10010fea

undefined4 __thiscall FUN_10010fea(void *this,int param_1)

{
  bool bVar1;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  CString local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10017a93;
  local_10 = ExceptionList;
  local_20 = DAT_1002247c;
  local_1c = 0xc54;
  local_18 = param_1;
  ExceptionList = &local_10;
  FUN_10015809(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_20);
  CString::CString(local_14,(char *)(param_1 + 0x834));
  local_8 = 0;
  bVar1 = FUN_1000ccb0(local_14,(uchar *)s_French_100217e0);
  if (bVar1) {
    *(undefined4 *)((int)this + 0x10) = 0x40c;
  }
  else {
    bVar1 = FUN_1000ccb0(local_14,(uchar *)s_German_100217e8);
    if (bVar1) {
      *(undefined4 *)((int)this + 0x10) = 0x407;
    }
    else {
      *(undefined4 *)((int)this + 0x10) = 0x809;
    }
  }
  local_8 = 0xffffffff;
  CString::~CString(local_14);
  ExceptionList = local_10;
  return 1;
}


// ---- FUN_100110cb @ 100110cb

undefined4 __fastcall FUN_100110cb(int param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}


// ---- FUN_100110dc @ 100110dc

CString * __thiscall FUN_100110dc(void *this,CString *param_1,uint param_2)

{
  ushort uVar1;
  char local_138 [256];
  HGLOBAL local_38;
  uint local_34;
  int local_30;
  ushort *local_2c;
  uint local_28;
  uint local_24;
  LPCSTR local_20;
  HRSRC local_1c;
  HMODULE local_18;
  CString local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10017ac0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  CString::CString(local_14,s_________100217f0);
  local_8 = 1;
  local_18 = (HMODULE)FUN_10016160();
  local_20 = (LPCSTR)((param_2 >> 4) + 1 & 0xffff);
  local_1c = FindResourceExA(local_18,(LPCSTR)0x6,local_20,*(WORD *)((int)this + 0x10));
  if (local_1c == (HRSRC)0x0) {
    local_1c = FindResourceA(local_18,local_20,(LPCSTR)0x6);
  }
  if (local_1c == (HRSRC)0x0) {
    CString::CString(param_1,local_14);
    local_8 = local_8 & 0xffffff00;
    CString::~CString(local_14);
  }
  else {
    local_34 = param_2 % 0x10;
    local_38 = LoadResource(local_18,local_1c);
    local_2c = LockResource(local_38);
    for (local_24 = 0; local_24 != local_34; local_24 = local_24 + 1) {
      uVar1 = *local_2c;
      local_28 = CONCAT22(local_28._2_2_,uVar1);
      local_2c = local_2c + 1;
      if (uVar1 != 0) {
        local_2c = local_2c + uVar1;
      }
    }
    uVar1 = *local_2c;
    local_28 = CONCAT22(local_28._2_2_,uVar1);
    local_2c = local_2c + 1;
    if (uVar1 != 0) {
      if (0xff < uVar1) {
        local_28 = CONCAT22(local_28._2_2_,0xff);
      }
      for (local_30 = 0; local_30 < (int)(local_28 & 0xffff); local_30 = local_30 + 1) {
        local_138[local_30] = (char)*local_2c;
        local_2c = local_2c + 1;
      }
      local_138[local_30] = '\0';
      CString::operator=(local_14,local_138);
      FreeResource(local_38);
    }
    CString::CString(param_1,local_14);
    local_8 = local_8 & 0xffffff00;
    CString::~CString(local_14);
  }
  ExceptionList = local_10;
  return param_1;
}


// ---- FUN_100112e9 @ 100112e9

void __fastcall FUN_100112e9(int param_1)

{
  SendMessageA(*(HWND *)(param_1 + 4),DAT_1002248c,*(WPARAM *)(param_1 + 8),0);
  return;
}


// ---- FUN_10011311 @ 10011311

void __fastcall FUN_10011311(int param_1)

{
  PostMessageA(*(HWND *)(param_1 + 4),DAT_10022320,*(WPARAM *)(param_1 + 8),0);
  return;
}


// ---- FUN_10011339 @ 10011339

void __fastcall FUN_10011339(int param_1)

{
  PostMessageA(*(HWND *)(param_1 + 4),DAT_1002231c,*(WPARAM *)(param_1 + 8),0);
  return;
}


// ---- FUN_10011361 @ 10011361

int __thiscall FUN_10011361(void *this,undefined4 param_1,void *param_2)

{
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 *local_e0;
  undefined4 local_dc;
  int local_d8;
  undefined4 local_d4;
  undefined4 auStack_d0 [50];
  int local_8;
  
  local_d4 = param_1;
  local_e8 = DAT_10022564;
  local_e4 = 0xcc;
  local_e0 = &local_d4;
  local_8 = FUN_10015809(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_e8);
  for (local_d8 = 0; local_d8 < local_8; local_d8 = local_d8 + 1) {
    local_dc = auStack_d0[local_d8];
    Add(param_2,local_dc);
  }
  return local_8;
}


// ---- FUN_10011419 @ 10011419

int __thiscall FUN_10011419(void *this,undefined4 param_1,undefined4 *param_2,int param_3)

{
  int local_ec;
  int local_e4;
  int local_e0;
  undefined4 local_dc;
  undefined4 auStack_d8 [50];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 *local_8;
  
  local_dc = param_1;
  local_10 = DAT_10022564;
  local_c = 0xcc;
  local_8 = &local_dc;
  local_ec = FUN_10015809(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_10);
  local_e0 = local_ec;
  if (local_ec != 0) {
    if (param_3 < local_ec) {
      local_ec = param_3;
    }
    local_e0 = local_ec;
    for (local_e4 = 0; local_e4 < local_ec; local_e4 = local_e4 + 1) {
      *param_2 = auStack_d8[local_e4];
      param_2 = param_2 + 1;
    }
  }
  return local_e0;
}


// ---- FUN_100114fe @ 100114fe

undefined4 __thiscall FUN_100114fe(void *this,undefined4 param_1,CString *param_2)

{
  undefined4 uVar1;
  undefined4 local_174;
  char local_170 [352];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 *local_8;
  
  local_174 = param_1;
  local_10 = DAT_10022560;
  local_c = 0x164;
  local_8 = &local_174;
  uVar1 = FUN_10015809(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_10);
  *(undefined4 *)((int)this + 0xc) = uVar1;
  if (*(int *)((int)this + 0xc) == 1) {
    CString::operator=(param_2,local_170);
  }
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_10011587 @ 10011587

CString * __thiscall FUN_10011587(void *this,CString *param_1,undefined4 param_2)

{
  CString local_184 [4];
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 *local_178;
  undefined4 local_174;
  char local_170 [352];
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10017af0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  CString::CString(local_184,&DAT_1002269c);
  local_8 = 1;
  local_174 = param_2;
  local_180 = DAT_10022560;
  local_17c = 0x164;
  local_178 = &local_174;
  FUN_10015809(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_180);
  CString::operator=(local_184,local_170);
  CString::CString(param_1,local_184);
  local_8 = local_8 & 0xffffff00;
  CString::~CString(local_184);
  ExceptionList = local_10;
  return param_1;
}


// ---- FUN_10011671 @ 10011671

CString * __thiscall FUN_10011671(void *this,CString *param_1,undefined4 param_2)

{
  undefined4 local_184;
  undefined4 local_180;
  undefined4 *local_17c;
  CString local_178 [4];
  undefined4 local_174;
  char local_170 [352];
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10017b20;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  CString::CString(local_178);
  local_8 = 1;
  local_174 = param_2;
  local_184 = DAT_10022508;
  local_180 = 0x164;
  local_17c = &local_174;
  FUN_10015809(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_184);
  CString::operator=(local_178,local_170);
  CString::CString(param_1,local_178);
  local_8 = local_8 & 0xffffff00;
  CString::~CString(local_178);
  ExceptionList = local_10;
  return param_1;
}


// ---- FUN_10011756 @ 10011756

undefined4 __thiscall FUN_10011756(void *this,undefined4 param_1,CString *param_2)

{
  undefined4 uVar1;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 *local_16c;
  undefined4 local_168;
  char local_164 [352];
  
  local_168 = param_1;
  local_174 = DAT_1002255c;
  local_170 = 0x164;
  local_16c = &local_168;
  uVar1 = FUN_10015809(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_174);
  *(undefined4 *)((int)this + 0xc) = uVar1;
  if (*(int *)((int)this + 0xc) == 1) {
    CString::operator=(param_2,local_164);
  }
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_100117eb @ 100117eb

CString * __thiscall FUN_100117eb(void *this,CString *param_1,undefined4 param_2)

{
  undefined4 local_184;
  undefined4 local_180;
  undefined4 *local_17c;
  undefined4 local_178;
  char local_174 [352];
  CString local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10017b4d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  CString::CString(local_14,&DAT_100226a0);
  local_8 = 1;
  local_178 = param_2;
  local_184 = DAT_1002255c;
  local_180 = 0x164;
  local_17c = &local_178;
  FUN_10015809(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_184);
  CString::operator=(local_14,local_174);
  CString::CString(param_1,local_14);
  local_8 = local_8 & 0xffffff00;
  CString::~CString(local_14);
  ExceptionList = local_10;
  return param_1;
}


// ---- FUN_100118c9 @ 100118c9

undefined4 __thiscall FUN_100118c9(void *this,undefined4 param_1,CString *param_2)

{
  undefined4 uVar1;
  undefined4 local_174;
  char local_170 [352];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 *local_8;
  
  local_174 = param_1;
  local_10 = DAT_10022558;
  local_c = 0x164;
  local_8 = &local_174;
  uVar1 = FUN_10015809(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_10);
  *(undefined4 *)((int)this + 0xc) = uVar1;
  if (*(int *)((int)this + 0xc) == 1) {
    CString::operator=(param_2,local_170);
  }
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_10011952 @ 10011952

CString * __thiscall FUN_10011952(void *this,CString *param_1,undefined4 param_2)

{
  undefined4 local_184;
  undefined4 local_180;
  undefined4 *local_17c;
  CString local_178 [4];
  undefined4 local_174;
  char local_170 [352];
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10017b7d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  CString::CString(local_178);
  local_8 = 1;
  local_174 = param_2;
  local_184 = DAT_10022558;
  local_180 = 0x164;
  local_17c = &local_174;
  FUN_10015809(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_184);
  CString::operator=(local_178,local_170);
  CString::CString(param_1,local_178);
  local_8 = local_8 & 0xffffff00;
  CString::~CString(local_178);
  ExceptionList = local_10;
  return param_1;
}


// ---- FUN_10011a37 @ 10011a37

float10 __thiscall FUN_10011a37(void *param_1,undefined4 param_2)

{
  int iVar1;
  CString local_18 [4];
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10017b90;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  CString::CString(local_18);
  local_8 = 0;
  iVar1 = FUN_10011ac4(param_1,param_2,&local_14,local_18);
  if (iVar1 == 1) {
    local_8 = 0xffffffff;
    CString::~CString(local_18);
  }
  else {
    local_8 = 0xffffffff;
    CString::~CString(local_18);
    local_14 = 0.0;
  }
  ExceptionList = local_10;
  return (float10)local_14;
}


// ---- FUN_10011ac4 @ 10011ac4

undefined4 __thiscall
FUN_10011ac4(void *this,undefined4 param_1,undefined4 *param_2,CString *param_3)

{
  undefined4 uVar1;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 *local_170;
  undefined4 local_16c;
  undefined4 local_168;
  char local_164 [352];
  
  local_16c = param_1;
  local_178 = DAT_10022554;
  local_174 = 0x168;
  local_170 = &local_16c;
  uVar1 = FUN_10015809(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_178);
  *(undefined4 *)((int)this + 0xc) = uVar1;
  if (*(int *)((int)this + 0xc) == 1) {
    *param_2 = local_168;
    CString::operator=(param_3,local_164);
  }
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_10011b64 @ 10011b64

undefined4 __thiscall FUN_10011b64(void *this,undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  CString local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10017ba3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  CString::CString(local_14);
  local_8 = 0;
  CString::Empty(local_14);
  uVar1 = FUN_10011ac4(this,param_1,param_2,local_14);
  local_8 = 0xffffffff;
  CString::~CString(local_14);
  ExceptionList = local_10;
  return uVar1;
}


// ---- FUN_10011bd2 @ 10011bd2

undefined4 __thiscall
FUN_10011bd2(void *this,undefined4 param_1,undefined4 param_2,CString *param_3)

{
  undefined4 uVar1;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 *local_170;
  undefined4 local_16c;
  undefined4 local_168;
  char local_164 [352];
  
  local_16c = param_1;
  local_168 = param_2;
  local_178 = DAT_10022544;
  local_174 = 0x168;
  local_170 = &local_16c;
  uVar1 = FUN_10015809(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_178);
  *(undefined4 *)((int)this + 0xc) = uVar1;
  if (*(int *)((int)this + 0xc) == 1) {
    CString::operator=(param_3,local_164);
  }
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_10011c70 @ 10011c70

CString * __thiscall FUN_10011c70(void *this,CString *param_1,undefined4 param_2,undefined4 param_3)

{
  CString local_188 [4];
  undefined4 local_184;
  undefined4 local_180;
  undefined4 *local_17c;
  undefined4 local_178;
  undefined4 local_174;
  char local_170 [352];
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10017bd3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  CString::CString(local_188,&DAT_100226a4);
  local_8 = 1;
  local_178 = param_2;
  local_174 = param_3;
  local_184 = DAT_10022544;
  local_180 = 0x168;
  local_17c = &local_178;
  FUN_10015809(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_184);
  CString::operator=(local_188,local_170);
  CString::CString(param_1,local_188);
  local_8 = local_8 & 0xffffff00;
  CString::~CString(local_188);
  ExceptionList = local_10;
  return param_1;
}


// ---- FUN_10011d63 @ 10011d63

CString * __thiscall FUN_10011d63(void *this,CString *param_1,undefined4 param_2,int param_3)

{
  CString local_188 [4];
  undefined4 local_184;
  undefined4 local_180;
  undefined4 *local_17c;
  undefined4 local_178;
  float local_174;
  char local_170 [352];
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10017c03;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  CString::CString(local_188,&DAT_100226a8);
  local_8 = 1;
  local_178 = param_2;
  local_174 = (float)param_3;
  local_184 = DAT_10022540;
  local_180 = 0x168;
  local_17c = &local_178;
  FUN_10015809(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_184);
  CString::operator=(local_188,local_170);
  CString::CString(param_1,local_188);
  local_8 = local_8 & 0xffffff00;
  CString::~CString(local_188);
  ExceptionList = local_10;
  return param_1;
}


// ---- FUN_10011e56 @ 10011e56

undefined4 __thiscall FUN_10011e56(void *this,undefined4 param_1,CString *param_2)

{
  undefined4 uVar1;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 *local_16c;
  undefined4 local_168;
  char local_164 [352];
  
  local_168 = param_1;
  local_174 = DAT_1002253c;
  local_170 = 0x164;
  local_16c = &local_168;
  uVar1 = FUN_10015809(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_174);
  *(undefined4 *)((int)this + 0xc) = uVar1;
  if (*(int *)((int)this + 0xc) == 1) {
    CString::operator=(param_2,local_164);
  }
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_10011eeb @ 10011eeb

CString * __thiscall FUN_10011eeb(void *this,CString *param_1,undefined4 param_2)

{
  undefined4 local_184;
  undefined4 local_180;
  undefined4 *local_17c;
  CString local_178 [4];
  undefined4 local_174;
  char local_170 [352];
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10017c33;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  CString::CString(local_178);
  local_8 = 1;
  local_174 = param_2;
  local_184 = DAT_1002253c;
  local_180 = 0x164;
  local_17c = &local_174;
  FUN_10015809(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_184);
  CString::operator=(local_178,local_170);
  CString::CString(param_1,local_178);
  local_8 = local_8 & 0xffffff00;
  CString::~CString(local_178);
  ExceptionList = local_10;
  return param_1;
}


// ---- FUN_10011fd0 @ 10011fd0

int __thiscall FUN_10011fd0(void *this,undefined4 param_1,undefined4 *param_2,int param_3)

{
  int local_ec;
  int local_e4;
  int local_e0;
  undefined4 local_dc;
  undefined4 auStack_d8 [50];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 *local_8;
  
  local_dc = param_1;
  local_10 = DAT_10022524;
  local_c = 0xcc;
  local_8 = &local_dc;
  local_ec = FUN_10015809(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_10);
  local_e0 = local_ec;
  if (local_ec != 0) {
    if (param_3 < local_ec) {
      local_ec = param_3;
    }
    local_e0 = local_ec;
    for (local_e4 = 0; local_e4 < local_ec; local_e4 = local_e4 + 1) {
      *param_2 = auStack_d8[local_e4];
      param_2 = param_2 + 1;
    }
  }
  return local_e0;
}


// ---- FUN_100120b5 @ 100120b5

void __thiscall FUN_100120b5(void *this,undefined4 param_1)

{
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 *local_d4;
  undefined4 local_d0 [51];
  
  local_d0[0] = param_1;
  local_dc = DAT_10022524;
  local_d8 = 0xcc;
  local_d4 = local_d0;
  SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_dc);
  return;
}


// ---- FUN_10012118 @ 10012118

float10 __thiscall FUN_10012118(int param_1,undefined4 param_2,undefined4 param_3)

{
  float fVar1;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 *local_14;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = param_2;
  local_8 = param_3;
  local_1c = DAT_10022504;
  local_18 = 8;
  local_14 = &local_c;
  fVar1 = (float)SendMessageA(*(HWND *)(param_1 + 4),0x4a,*(WPARAM *)(param_1 + 8),(LPARAM)&local_1c
                             );
  return (float10)fVar1;
}


// ---- FUN_10012169 @ 10012169

float10 __thiscall FUN_10012169(int param_1,undefined4 param_2,undefined4 param_3)

{
  float fVar1;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 *local_14;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = param_2;
  local_8 = param_3;
  local_1c = DAT_10022500;
  local_18 = 8;
  local_14 = &local_c;
  fVar1 = (float)SendMessageA(*(HWND *)(param_1 + 4),0x4a,*(WPARAM *)(param_1 + 8),(LPARAM)&local_1c
                             );
  return (float10)fVar1;
}


// ---- FUN_100121ba @ 100121ba

undefined4 __thiscall
FUN_100121ba(void *this,undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 *local_8;
  
  local_1c = param_1;
  local_10 = DAT_10022520;
  local_c = 0xc;
  local_8 = &local_1c;
  uVar1 = FUN_10015809(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_10);
  *(undefined4 *)((int)this + 0xc) = uVar1;
  if (*(int *)((int)this + 0xc) == 1) {
    *param_2 = local_18;
    *param_3 = local_14;
  }
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_10012226 @ 10012226

bool __thiscall FUN_10012226(void *this,LPARAM param_1)

{
  int iVar1;
  
  iVar1 = FUN_1001224d(this,param_1);
  return iVar1 == 1;
}


// ---- FUN_1001224d @ 1001224d

undefined4 __thiscall FUN_1001224d(void *this,LPARAM param_1)

{
  LRESULT LVar1;
  
  LVar1 = SendMessageA(*(HWND *)((int)this + 4),DAT_1002251c,*(WPARAM *)((int)this + 8),param_1);
  *(LRESULT *)((int)this + 0xc) = LVar1;
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_10012284 @ 10012284

int __thiscall FUN_10012284(void *this,undefined4 param_1,undefined4 *param_2,int param_3)

{
  int local_e34;
  int local_e2c;
  int local_e28;
  undefined4 local_e24;
  undefined4 auStack_e20 [900];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 *local_8;
  
  local_e24 = param_1;
  local_10 = DAT_10022518;
  local_c = 0xe14;
  local_8 = &local_e24;
  local_e34 = FUN_10015809(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_10);
  local_e28 = local_e34;
  if (local_e34 != 0) {
    if (param_3 < local_e34) {
      local_e34 = param_3;
    }
    local_e28 = local_e34;
    for (local_e2c = 0; local_e2c < local_e34; local_e2c = local_e2c + 1) {
      *param_2 = auStack_e20[local_e2c];
      param_2 = param_2 + 1;
    }
  }
  return local_e28;
}


// ---- FUN_10012369 @ 10012369

int __thiscall FUN_10012369(void *this,undefined4 param_1,void *param_2)

{
  undefined4 local_e30;
  undefined4 local_e2c;
  undefined4 *local_e28;
  undefined4 local_e24;
  int local_e20;
  undefined4 local_e1c;
  undefined4 auStack_e18 [900];
  int local_8;
  
  local_e1c = param_1;
  local_e30 = DAT_10022518;
  local_e2c = 0xe14;
  local_e28 = &local_e1c;
  local_8 = FUN_10015809(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_e30);
  for (local_e20 = 0; local_e20 < local_8; local_e20 = local_e20 + 1) {
    local_e24 = auStack_e18[local_e20];
    Add(param_2,local_e24);
  }
  return local_8;
}


// ---- FUN_10012421 @ 10012421

undefined4 __thiscall FUN_10012421(void *this,LPARAM param_1)

{
  LRESULT LVar1;
  
  LVar1 = SendMessageA(*(HWND *)((int)this + 4),DAT_10022514,*(WPARAM *)((int)this + 8),param_1);
  *(LRESULT *)((int)this + 0xc) = LVar1;
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_10012458 @ 10012458

undefined4 __thiscall
FUN_10012458(void *this,undefined4 param_1,undefined4 *param_2,undefined4 *param_3,CString *param_4,
            CString *param_5)

{
  undefined4 uVar1;
  undefined4 local_2d8;
  undefined4 local_2d4;
  undefined4 local_2d0;
  char local_2cc [350];
  char local_16e [350];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 *local_8;
  
  local_2d8 = param_1;
  local_10 = DAT_10022510;
  local_c = 0x2c8;
  local_8 = &local_2d8;
  uVar1 = FUN_10015809(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_10);
  *(undefined4 *)((int)this + 0xc) = uVar1;
  if (*(int *)((int)this + 0xc) == 1) {
    *param_2 = local_2d4;
    *param_3 = local_2d0;
    CString::operator=(param_4,local_2cc);
    CString::operator=(param_5,local_16e);
  }
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_10012506 @ 10012506

undefined4 __thiscall
FUN_10012506(void *this,undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  CString local_18 [4];
  CString local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10017c4f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  CString::CString(local_14);
  local_8 = 0;
  CString::CString(local_18);
  local_8._0_1_ = 1;
  CString::Empty(local_14);
  CString::Empty(local_18);
  uVar1 = FUN_10012458(this,param_1,param_2,param_3,local_14,local_18);
  local_8 = (uint)local_8._1_3_ << 8;
  CString::~CString(local_18);
  local_8 = 0xffffffff;
  CString::~CString(local_14);
  ExceptionList = local_10;
  return uVar1;
}


// ---- FUN_1001259c @ 1001259c

void __thiscall FUN_1001259c(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = param_1;
  local_8 = param_2;
  local_18 = DAT_10022550;
  local_14 = 8;
  local_10 = &local_c;
  SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_18);
  return;
}


// ---- FUN_100125e7 @ 100125e7

undefined4 __thiscall
FUN_100125e7(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_2c = DAT_10022548;
  local_28 = 0x18;
  local_24 = &local_20;
  uVar1 = FUN_10015809(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_2c);
  *param_1 = local_20;
  *param_2 = local_1c;
  *param_3 = local_18;
  return uVar1;
}


// ---- FUN_10012645 @ 10012645

undefined4 * __thiscall FUN_10012645(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 *local_24;
  undefined4 local_20 [6];
  undefined4 local_8;
  
  local_2c = DAT_10022548;
  local_28 = 0x18;
  local_24 = local_20;
  local_8 = FUN_10015809(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_2c);
  puVar2 = local_20;
  puVar3 = param_1;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return param_1;
}


// ---- FUN_1001269c @ 1001269c

void __thiscall FUN_1001269c(void *this,undefined4 param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_1002254c;
  local_c = 0x18;
  local_8 = param_1;
  SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_10);
  return;
}


// ---- FUN_100126da @ 100126da

undefined4 __thiscall
FUN_100126da(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  LRESULT LVar1;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 *local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = param_1;
  local_c = param_2;
  local_8 = param_3;
  local_1c = DAT_1002250c;
  local_18 = 0xc;
  local_14 = &local_10;
  LVar1 = SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_1c);
  *(LRESULT *)((int)this + 0xc) = LVar1;
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_10012736 @ 10012736

undefined4 __thiscall
FUN_10012736(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,
            undefined4 *param_4,undefined4 *param_5,undefined4 *param_6)

{
  undefined4 uVar1;
  undefined4 local_118;
  undefined4 local_114;
  undefined1 *local_110;
  undefined1 local_10c [16];
  undefined4 local_fc;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_cc;
  
  local_118 = DAT_10022408;
  local_114 = 0x104;
  local_110 = local_10c;
  uVar1 = FUN_10015809(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_118);
  *param_1 = local_ec;
  *param_2 = local_e8;
  *param_3 = local_e4;
  *param_4 = local_e0;
  *param_5 = local_cc;
  *param_6 = local_fc;
  return uVar1;
}


// ---- FUN_100127dc @ 100127dc

undefined4 __thiscall FUN_100127dc(void *this,undefined4 param_1,undefined4 param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  CString local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10017c62;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  CString::CString(local_14);
  local_8 = 0;
  CString::Empty(local_14);
  pcVar1 = (char *)FUN_100026c0((undefined4 *)local_14);
  uVar2 = FUN_1001284f(this,param_1,param_2,pcVar1);
  local_8 = 0xffffffff;
  CString::~CString(local_14);
  ExceptionList = local_10;
  return uVar2;
}


// ---- FUN_1001284f @ 1001284f

undefined4 __thiscall FUN_1001284f(void *this,undefined4 param_1,undefined4 param_2,char *param_3)

{
  undefined4 uVar1;
  bool bVar2;
  undefined3 extraout_var;
  LRESULT LVar3;
  undefined4 local_188;
  undefined4 local_184;
  char local_180 [352];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  CString local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10017c75;
  local_10 = ExceptionList;
  local_188 = param_1;
  local_184 = param_2;
  ExceptionList = &local_10;
  CString::CString(local_14,param_3);
  local_8 = 0;
  bVar2 = FUN_1000ce50((int *)local_14);
  if (CONCAT31(extraout_var,bVar2) == 0) {
    FUN_10013fe0(local_180,param_3);
  }
  else {
    local_180[0] = '\0';
  }
  local_20 = DAT_100224fc;
  local_1c = 0x168;
  local_18 = &local_188;
  LVar3 = SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_20);
  *(LRESULT *)((int)this + 0xc) = LVar3;
  uVar1 = *(undefined4 *)((int)this + 0xc);
  local_8 = 0xffffffff;
  CString::~CString(local_14);
  ExceptionList = local_10;
  return uVar1;
}


// ---- FUN_10012939 @ 10012939

undefined4 __thiscall FUN_10012939(void *this,LPARAM param_1)

{
  LRESULT LVar1;
  
  LVar1 = SendMessageA(*(HWND *)((int)this + 4),DAT_100224f8,*(WPARAM *)((int)this + 8),param_1);
  *(LRESULT *)((int)this + 0xc) = LVar1;
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_10012970 @ 10012970

void __fastcall FUN_10012970(int param_1)

{
  SendMessageA(*(HWND *)(param_1 + 4),DAT_100224f4,*(WPARAM *)(param_1 + 8),0);
  return;
}


// ---- FUN_10012998 @ 10012998

undefined4 __thiscall
FUN_10012998(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  LRESULT LVar1;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 *local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = param_1;
  local_c = param_2;
  local_8 = param_3;
  local_1c = DAT_100224f0;
  local_18 = 0xc;
  local_14 = &local_10;
  LVar1 = SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_1c);
  *(LRESULT *)((int)this + 0xc) = LVar1;
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_100129f4 @ 100129f4

undefined4 __thiscall FUN_100129f4(void *this,LPARAM param_1)

{
  LRESULT LVar1;
  
  LVar1 = SendMessageA(*(HWND *)((int)this + 4),DAT_100224ec,*(WPARAM *)((int)this + 8),param_1);
  *(LRESULT *)((int)this + 0xc) = LVar1;
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_10012a2b @ 10012a2b

undefined4 __thiscall FUN_10012a2b(void *this,undefined4 param_1,undefined4 param_2)

{
  LRESULT LVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = param_1;
  local_8 = param_2;
  *(undefined4 *)((int)this + 0x14) = 1;
  local_18 = DAT_100224e8;
  local_14 = 8;
  local_10 = &local_c;
  LVar1 = SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_18);
  *(LRESULT *)((int)this + 0xc) = LVar1;
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_10012a8b @ 10012a8b

undefined4 __thiscall FUN_10012a8b(void *this,undefined4 param_1,undefined4 param_2)

{
  LRESULT LVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = param_1;
  local_8 = param_2;
  *(undefined4 *)((int)this + 0x18) = 1;
  local_18 = DAT_100224e4;
  local_14 = 8;
  local_10 = &local_c;
  LVar1 = SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_18);
  *(LRESULT *)((int)this + 0xc) = LVar1;
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_10012aeb @ 10012aeb

undefined4 __thiscall FUN_10012aeb(void *this,undefined4 param_1,undefined4 param_2)

{
  LRESULT LVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 *local_8;
  
  local_18 = param_1;
  local_14 = param_2;
  local_10 = DAT_100224e0;
  local_c = 8;
  local_8 = &local_18;
  LVar1 = SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_10);
  *(LRESULT *)((int)this + 0xc) = LVar1;
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_10012b42 @ 10012b42

void __thiscall FUN_10012b42(void *this,int param_1)

{
  undefined4 local_18;
  undefined4 local_14;
  int *local_10;
  int local_c;
  undefined4 local_8;
  
  if (((param_1 != 1) || (*(int *)((int)this + 0x14) == 1)) &&
     ((param_1 != 2 || (*(int *)((int)this + 0x18) == 1)))) {
    local_c = param_1;
    local_8 = *(undefined4 *)((int)this + 8);
    local_18 = DAT_100224e0;
    local_14 = 8;
    local_10 = &local_c;
    SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_18);
  }
  return;
}


// ---- FUN_10012bb2 @ 10012bb2

undefined4 __thiscall FUN_10012bb2(void *this,LPARAM param_1,LPARAM param_2)

{
  PostMessageA(*(HWND *)((int)this + 4),DAT_10022598,0,param_1);
  PostMessageA(*(HWND *)((int)this + 4),DAT_10022598,1,param_2);
  return 1;
}


// ---- FUN_10012bf8 @ 10012bf8

void __thiscall FUN_10012bf8(void *this,LPARAM param_1)

{
  SendMessageA(*(HWND *)((int)this + 4),DAT_10022578,*(WPARAM *)((int)this + 8),param_1);
  return;
}


// ---- FUN_10012c23 @ 10012c23

undefined4 __thiscall FUN_10012c23(void *this,LPARAM param_1)

{
  LRESULT LVar1;
  
  LVar1 = SendMessageA(*(HWND *)((int)this + 4),DAT_100224dc,*(WPARAM *)((int)this + 8),param_1);
  *(LRESULT *)((int)this + 0xc) = LVar1;
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_10012c5a @ 10012c5a

undefined4 __thiscall FUN_10012c5a(void *this,LPARAM param_1)

{
  LRESULT LVar1;
  
  LVar1 = SendMessageA(*(HWND *)((int)this + 4),DAT_100224d0,*(WPARAM *)((int)this + 8),param_1);
  *(LRESULT *)((int)this + 0xc) = LVar1;
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_10012c91 @ 10012c91

undefined4 __thiscall FUN_10012c91(void *this,LPARAM param_1)

{
  LRESULT LVar1;
  
  LVar1 = SendMessageA(*(HWND *)((int)this + 4),DAT_100224cc,*(WPARAM *)((int)this + 8),param_1);
  *(LRESULT *)((int)this + 0xc) = LVar1;
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_10012cc8 @ 10012cc8

undefined4 __thiscall FUN_10012cc8(void *this,LPARAM param_1)

{
  LRESULT LVar1;
  
  LVar1 = SendMessageA(*(HWND *)((int)this + 4),DAT_100224c4,*(WPARAM *)((int)this + 8),param_1);
  *(LRESULT *)((int)this + 0xc) = LVar1;
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_10012cff @ 10012cff

void __thiscall FUN_10012cff(void *this,LPARAM param_1)

{
  SendMessageA(*(HWND *)((int)this + 4),DAT_100224d8,*(WPARAM *)((int)this + 8),param_1);
  return;
}


// ---- FUN_10012d2a @ 10012d2a

void __thiscall FUN_10012d2a(void *this,LPARAM param_1)

{
  SendMessageA(*(HWND *)((int)this + 4),DAT_100224d4,*(WPARAM *)((int)this + 8),param_1);
  return;
}


// ---- FUN_10012d55 @ 10012d55

void __thiscall FUN_10012d55(void *this,int param_1)

{
  SendMessageA(*(HWND *)((int)this + 4),DAT_100224d8,*(WPARAM *)((int)this + 8),param_1 + 1);
  return;
}


// ---- FUN_10012d83 @ 10012d83

undefined4 __thiscall FUN_10012d83(void *this,LPARAM param_1)

{
  LRESULT LVar1;
  
  LVar1 = SendMessageA(*(HWND *)((int)this + 4),DAT_100224c8,*(WPARAM *)((int)this + 8),param_1);
  *(LRESULT *)((int)this + 0xc) = LVar1;
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_10012dba @ 10012dba

void __fastcall FUN_10012dba(int param_1)

{
  SendMessageA(*(HWND *)(param_1 + 4),DAT_100224bc,*(WPARAM *)(param_1 + 8),0);
  return;
}


// ---- FUN_10012de2 @ 10012de2

void __fastcall FUN_10012de2(int param_1)

{
  SendMessageA(*(HWND *)(param_1 + 4),DAT_100224b8,*(WPARAM *)(param_1 + 8),0);
  return;
}


// ---- FUN_10012e0a @ 10012e0a

void __thiscall FUN_10012e0a(void *this,LPARAM param_1)

{
  SendMessageA(*(HWND *)((int)this + 4),DAT_100224a8,*(WPARAM *)((int)this + 8),param_1);
  return;
}


// ---- FUN_10012e35 @ 10012e35

undefined4 __thiscall
FUN_10012e35(void *this,undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 *local_8;
  
  local_1c = param_1;
  local_10 = DAT_100224c0;
  local_c = 0xc;
  local_8 = &local_1c;
  uVar1 = FUN_10015809(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_10);
  *(undefined4 *)((int)this + 0xc) = uVar1;
  *param_2 = local_18;
  *param_3 = local_14;
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_10012e98 @ 10012e98

undefined4 __thiscall FUN_10012e98(void *this,LPARAM param_1)

{
  BOOL BVar1;
  
  BVar1 = PostMessageA(*(HWND *)((int)this + 4),DAT_100224b0,*(WPARAM *)((int)this + 8),param_1);
  *(BOOL *)((int)this + 0xc) = BVar1;
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_10012ecf @ 10012ecf

undefined4 __thiscall FUN_10012ecf(void *this,undefined4 *param_1,char *param_2)

{
  undefined4 uVar1;
  undefined4 local_174;
  undefined4 local_170;
  char *local_16c;
  char local_168 [352];
  undefined4 local_8;
  
  FUN_10013fe0(local_168,param_2);
  local_174 = DAT_100224a4;
  local_170 = 0x164;
  local_16c = local_168;
  uVar1 = FUN_10015809(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_174);
  *(undefined4 *)((int)this + 0xc) = uVar1;
  if (*(int *)((int)this + 0xc) == 1) {
    *param_1 = local_8;
  }
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_10012f6a @ 10012f6a

undefined4 __thiscall FUN_10012f6a(void *this,char *param_1)

{
  undefined4 uVar1;
  undefined4 local_174;
  undefined4 local_170;
  char *local_16c;
  char local_168 [352];
  undefined4 local_8;
  
  FUN_10013fe0(local_168,param_1);
  local_174 = DAT_100224a4;
  local_170 = 0x164;
  local_16c = local_168;
  uVar1 = FUN_10015809(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_174);
  *(undefined4 *)((int)this + 0xc) = uVar1;
  if (*(int *)((int)this + 0xc) != 1) {
    local_8 = 0;
  }
  return local_8;
}


// ---- FUN_10012ffb @ 10012ffb

undefined4 __thiscall FUN_10012ffb(void *this,LPARAM param_1)

{
  BOOL BVar1;
  
  BVar1 = PostMessageA(*(HWND *)((int)this + 4),DAT_100224a0,*(WPARAM *)((int)this + 8),param_1);
  *(BOOL *)((int)this + 0xc) = BVar1;
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_10013032 @ 10013032

undefined4 __thiscall FUN_10013032(void *this,undefined4 param_1,undefined4 param_2)

{
  LRESULT LVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 *local_8;
  
  local_18 = param_1;
  local_14 = param_2;
  local_10 = DAT_1002249c;
  local_c = 8;
  local_8 = &local_18;
  LVar1 = SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_10);
  *(LRESULT *)((int)this + 0xc) = LVar1;
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_10013089 @ 10013089

undefined4 __thiscall FUN_10013089(void *this,LPARAM param_1)

{
  LRESULT LVar1;
  
  LVar1 = SendMessageA(*(HWND *)((int)this + 4),DAT_10022498,*(WPARAM *)((int)this + 8),param_1);
  *(LRESULT *)((int)this + 0xc) = LVar1;
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_100130c0 @ 100130c0

undefined4 __thiscall
FUN_100130c0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  LRESULT LVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 *local_8;
  
  local_20 = param_1;
  local_1c = param_2;
  local_18 = param_3;
  local_14 = param_4;
  local_10 = DAT_10022494;
  local_c = 0x10;
  local_8 = &local_20;
  LVar1 = SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_10);
  *(LRESULT *)((int)this + 0xc) = LVar1;
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_10013123 @ 10013123

undefined4 __thiscall FUN_10013123(void *this,undefined4 param_1)

{
  LRESULT LVar1;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_1002240c;
  local_c = 0x104;
  local_8 = param_1;
  LVar1 = SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_10);
  *(LRESULT *)((int)this + 0xc) = LVar1;
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_1001316d @ 1001316d

undefined4 __thiscall FUN_1001316d(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_10022408;
  local_c = 0x104;
  local_8 = param_1;
  uVar1 = FUN_10015809(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_10);
  *(undefined4 *)((int)this + 0xc) = uVar1;
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_100131b9 @ 100131b9

undefined4 __thiscall FUN_100131b9(void *this,undefined4 param_1)

{
  LRESULT LVar1;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_10022404;
  local_c = 0x104;
  local_8 = param_1;
  LVar1 = SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_10);
  *(LRESULT *)((int)this + 0xc) = LVar1;
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_10013203 @ 10013203

undefined4 __thiscall FUN_10013203(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_10022400;
  local_c = 0x100;
  local_8 = param_1;
  uVar1 = FUN_10015809(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_10);
  *(undefined4 *)((int)this + 0xc) = uVar1;
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_1001324f @ 1001324f

undefined4 __thiscall FUN_1001324f(void *this,undefined4 param_1)

{
  LRESULT LVar1;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_100223fc;
  local_c = 0x100;
  local_8 = param_1;
  LVar1 = SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_10);
  *(LRESULT *)((int)this + 0xc) = LVar1;
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_10013299 @ 10013299

undefined4 __thiscall FUN_10013299(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_10022490;
  local_c = 70000;
  local_8 = param_1;
  uVar1 = FUN_10015809(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_10);
  *(undefined4 *)((int)this + 0xc) = uVar1;
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_100132e5 @ 100132e5

CString * FUN_100132e5(void *param_1)

{
  CString *pCVar1;
  void *this;
  CString aCStackY_11198 [4];
  int iStackY_11194;
  char acStackY_11190 [70000];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10017c8b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_10016e20();
  CString::CString(aCStackY_11198);
  local_8 = 0;
  pCVar1 = (CString *)
           FUN_10015809(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),
                        (undefined4 *)&stack0xffffffe0);
  for (iStackY_11194 = 0; iStackY_11194 < (int)pCVar1; iStackY_11194 = iStackY_11194 + 1) {
    FUN_100161a0(aCStackY_11198,acStackY_11190 + iStackY_11194 * 0x15e);
    pCVar1 = aCStackY_11198;
    Add(param_1,pCVar1);
  }
  local_8 = 0xffffffff;
  CString::~CString(aCStackY_11198);
  ExceptionList = local_10;
  return pCVar1;
}


// ---- FUN_100133ed @ 100133ed

LRESULT __thiscall FUN_100133ed(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char *pcVar1;
  LRESULT LVar2;
  CString local_184 [4];
  char local_180 [352];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_10017caa;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  CString::CString(local_184);
  local_8._0_1_ = 1;
  pcVar1 = (char *)FUN_100026c0(&param_2);
  FUN_10013fe0(local_180,pcVar1);
  local_20 = param_3;
  local_1c = param_1;
  local_18 = 0x164;
  local_14 = local_180;
  LVar2 = SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_1c);
  local_8 = (uint)local_8._1_3_ << 8;
  CString::~CString(local_184);
  local_8 = 0xffffffff;
  CString::~CString((CString *)&param_2);
  ExceptionList = local_10;
  return LVar2;
}


// ---- FUN_100134b8 @ 100134b8

undefined4 __thiscall FUN_100134b8(void *this,char *param_1,undefined4 param_2)

{
  LRESULT LVar1;
  char local_174 [352];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  char *local_8;
  
  FUN_10013fe0(local_174,param_1);
  local_14 = param_2;
  local_10 = DAT_100225cc;
  local_c = 0x164;
  local_8 = local_174;
  LVar1 = SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_10);
  *(LRESULT *)((int)this + 0xc) = LVar1;
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_10013533 @ 10013533

undefined4 __thiscall FUN_10013533(void *this,char *param_1,undefined4 param_2)

{
  LRESULT LVar1;
  char local_174 [352];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  char *local_8;
  
  FUN_10013fe0(local_174,param_1);
  local_14 = param_2;
  local_10 = DAT_100225c8;
  local_c = 0x164;
  local_8 = local_174;
  LVar1 = SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_10);
  *(LRESULT *)((int)this + 0xc) = LVar1;
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_100135ae @ 100135ae

undefined4 __thiscall FUN_100135ae(void *this,char *param_1)

{
  LRESULT LVar1;
  char local_174 [356];
  undefined4 local_10;
  undefined4 local_c;
  char *local_8;
  
  FUN_10013fe0(local_174,param_1);
  local_10 = DAT_100225d0;
  local_c = 0x164;
  local_8 = local_174;
  LVar1 = SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_10);
  *(LRESULT *)((int)this + 0xc) = LVar1;
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_10013624 @ 10013624

void __fastcall FUN_10013624(int param_1)

{
  PostMessageA(*(HWND *)(param_1 + 4),DAT_100225b8,*(WPARAM *)(param_1 + 8),0);
  return;
}


// ---- FUN_1001364c @ 1001364c

void __fastcall FUN_1001364c(int param_1)

{
  SendMessageA(*(HWND *)(param_1 + 4),DAT_100225b4,*(WPARAM *)(param_1 + 8),0);
  return;
}


// ---- FUN_10013674 @ 10013674

void __fastcall FUN_10013674(int param_1)

{
  SendMessageA(*(HWND *)(param_1 + 4),DAT_100225a4,*(WPARAM *)(param_1 + 8),0);
  return;
}


// ---- FUN_1001369c @ 1001369c

void __fastcall FUN_1001369c(int param_1)

{
  SendMessageA(*(HWND *)(param_1 + 4),DAT_100225a8,*(WPARAM *)(param_1 + 8),0);
  return;
}


// ---- FUN_100136c4 @ 100136c4

undefined4 __thiscall FUN_100136c4(void *this,undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_100223f8;
  local_c = 0x618;
  local_8 = param_1;
  if (param_2 < 0x618) {
    uVar1 = 0xffffffee;
  }
  else {
    uVar1 = FUN_10015809(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_10);
    *(undefined4 *)((int)this + 0xc) = uVar1;
    uVar1 = *(undefined4 *)((int)this + 0xc);
  }
  return uVar1;
}


// ---- FUN_1001371f @ 1001371f

undefined4 __thiscall FUN_1001371f(void *this,undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  LRESULT LVar2;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_100223f4;
  local_c = 0x618;
  local_8 = param_1;
  if (param_2 < 0x618) {
    uVar1 = 0xffffffee;
  }
  else {
    LVar2 = SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_10)
    ;
    *(LRESULT *)((int)this + 0xc) = LVar2;
    uVar1 = *(undefined4 *)((int)this + 0xc);
  }
  return uVar1;
}


// ---- FUN_10013778 @ 10013778

undefined4 __thiscall FUN_10013778(void *this,short param_1,short param_2)

{
  LRESULT LVar1;
  
  LVar1 = SendMessageA(*(HWND *)((int)this + 4),DAT_100223f0,*(WPARAM *)((int)this + 8),
                       param_1 * 0x10000 + (int)param_2);
  *(LRESULT *)((int)this + 0xc) = LVar1;
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_100137c7 @ 100137c7

undefined4 __thiscall FUN_100137c7(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_10022474;
  local_c = 0x84;
  local_8 = param_1;
  uVar1 = FUN_10015809(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_10);
  *(undefined4 *)((int)this + 0xc) = uVar1;
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_10013813 @ 10013813

void __thiscall FUN_10013813(void *this,undefined4 param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_10022478;
  local_c = 0x84;
  local_8 = param_1;
  FUN_10015809(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_10);
  return;
}


// ---- FUN_10013853 @ 10013853

undefined4 __thiscall
FUN_10013853(void *this,undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 *local_8;
  
  local_1c = param_1;
  local_18 = param_2;
  local_10 = DAT_100223e4;
  local_c = 0xc;
  local_8 = &local_1c;
  FUN_10015809(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_10);
  *param_3 = local_14;
  return 1;
}


// ---- FUN_100138ad @ 100138ad

undefined4 __thiscall FUN_100138ad(void *this,CString *param_1)

{
  char local_170 [352];
  undefined4 local_10;
  undefined4 local_c;
  char *local_8;
  
  local_10 = DAT_100223e0;
  local_c = 0x15e;
  local_8 = local_170;
  FUN_10015809(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_10);
  CString::operator=(param_1,local_170);
  return 1;
}


// ---- FUN_10013913 @ 10013913

undefined4 __thiscall FUN_10013913(void *this,CString *param_1)

{
  undefined1 local_c58 [2100];
  char local_424 [1056];
  
  FUN_10010fea(this,(int)local_c58);
  CString::operator=(param_1,local_424);
  return 1;
}


// ---- FUN_1001394e @ 1001394e

undefined4 __thiscall FUN_1001394e(void *this,undefined4 param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_100223b4;
  local_c = 0x2e4;
  local_8 = param_1;
  SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_10);
  return 1;
}


// ---- FUN_10013991 @ 10013991

void __thiscall FUN_10013991(void *this,undefined4 param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_100223dc;
  local_c = 0x5bc;
  local_8 = param_1;
  SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_10);
  return;
}


// ---- FUN_100139cf @ 100139cf

void __thiscall FUN_100139cf(void *this,undefined4 param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_100223d8;
  local_c = 0x5bc;
  local_8 = param_1;
  FUN_10015809(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_10);
  return;
}


// ---- FUN_10013a0f @ 10013a0f

LRESULT __thiscall FUN_10013a0f(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char *pcVar1;
  LRESULT LVar2;
  undefined1 local_5d8 [16];
  undefined4 local_5c8;
  undefined4 local_5b0;
  char local_59c [700];
  char local_2e0 [708];
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_10017cc6;
  local_10 = ExceptionList;
  local_8 = 1;
  local_5c8 = param_3;
  local_5b0 = 0;
  ExceptionList = &local_10;
  pcVar1 = (char *)FUN_100026c0(&param_1);
  FUN_10013fe0(local_59c,pcVar1);
  pcVar1 = (char *)FUN_100026c0(&param_2);
  FUN_10013fe0(local_2e0,pcVar1);
  local_1c = DAT_100223d4;
  local_18 = 0x5bc;
  local_14 = local_5d8;
  LVar2 = SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_1c);
  local_8 = local_8 & 0xffffff00;
  CString::~CString((CString *)&param_1);
  local_8 = 0xffffffff;
  CString::~CString((CString *)&param_2);
  ExceptionList = local_10;
  return LVar2;
}


// ---- FUN_10013af2 @ 10013af2

LRESULT __thiscall
FUN_10013af2(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  char *pcVar1;
  LRESULT LVar2;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  char local_17c [352];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10017cd9;
  local_10 = ExceptionList;
  local_8 = 0;
  local_190 = param_1;
  local_18c = param_2;
  local_188 = param_3;
  local_184 = param_4;
  local_194 = param_5;
  ExceptionList = &local_10;
  pcVar1 = (char *)FUN_100026c0((undefined4 *)&stack0x00000018);
  FUN_10013fe0(local_17c,pcVar1);
  local_1c = DAT_100223d0;
  local_18 = 0x178;
  local_14 = &local_194;
  LVar2 = SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_1c);
  local_8 = 0xffffffff;
  CString::~CString((CString *)&stack0x00000018);
  ExceptionList = local_10;
  return LVar2;
}


// ---- FUN_10013bc8 @ 10013bc8

LRESULT __thiscall
FUN_10013bc8(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char *pcVar1;
  LRESULT LVar2;
  undefined1 local_194 [4];
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  char local_17c [352];
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10017cec;
  local_10 = ExceptionList;
  local_8 = 0;
  local_190 = param_1;
  local_18c = param_2;
  local_188 = param_3;
  local_184 = param_4;
  ExceptionList = &local_10;
  pcVar1 = (char *)FUN_100026c0((undefined4 *)&stack0x00000014);
  FUN_10013fe0(local_17c,pcVar1);
  local_1c = DAT_100223cc;
  local_18 = 0x178;
  local_14 = local_194;
  LVar2 = SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_1c);
  local_8 = 0xffffffff;
  CString::~CString((CString *)&stack0x00000014);
  ExceptionList = local_10;
  return LVar2;
}


// ---- FUN_10013c96 @ 10013c96

LRESULT __thiscall
FUN_10013c96(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  char *pcVar1;
  LRESULT LVar2;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  char local_17c [352];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10017cff;
  local_10 = ExceptionList;
  local_8 = 0;
  local_190 = param_1;
  local_18c = param_2;
  local_188 = param_3;
  local_184 = param_4;
  local_194 = param_5;
  ExceptionList = &local_10;
  pcVar1 = (char *)FUN_100026c0(&param_6);
  FUN_10013fe0(local_17c,pcVar1);
  local_180 = param_7;
  local_1c = DAT_100223c8;
  local_18 = 0x178;
  local_14 = &local_194;
  LVar2 = SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_1c);
  local_8 = 0xffffffff;
  CString::~CString((CString *)&param_6);
  ExceptionList = local_10;
  return LVar2;
}


// ---- FUN_10013d76 @ 10013d76

void __thiscall FUN_10013d76(void *this,undefined4 param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_100223c4;
  local_c = 0x440;
  local_8 = param_1;
  FUN_10015809(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_10);
  return;
}


// ---- FUN_10013db6 @ 10013db6

undefined4 __thiscall FUN_10013db6(void *this,undefined4 param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_100223b0;
  local_c = 0x2c;
  local_8 = param_1;
  SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_10);
  return 1;
}


// ---- FUN_10013df9 @ 10013df9

undefined4 __thiscall FUN_10013df9(void *this,undefined4 param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_100223a8;
  local_c = 0x2c;
  local_8 = param_1;
  SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_10);
  return 1;
}


// ---- FUN_10013e3c @ 10013e3c

void __thiscall FUN_10013e3c(void *this,undefined4 param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_100223ac;
  local_c = 0xc;
  local_8 = param_1;
  FUN_10015809(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_10);
  return;
}


// ---- FUN_10013e7c @ 10013e7c

undefined4 __thiscall FUN_10013e7c(void *this,undefined4 param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_100223a4;
  local_c = 0x10;
  local_8 = param_1;
  SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_10);
  return 1;
}


// ---- FUN_10013ebf @ 10013ebf

undefined4 __thiscall FUN_10013ebf(void *this,undefined4 param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_100223c0;
  local_c = 0x400;
  local_8 = param_1;
  FUN_10015809(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_10);
  return 1;
}


// ---- FUN_10013f04 @ 10013f04

undefined4 __thiscall FUN_10013f04(void *this,undefined4 param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_100223bc;
  local_c = 0x410;
  local_8 = param_1;
  FUN_10015809(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_10);
  return 1;
}


// ---- FUN_10013f49 @ 10013f49

undefined4 __thiscall FUN_10013f49(void *this,undefined4 param_1)

{
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 *local_8;
  
  local_14 = param_1;
  local_10 = DAT_100223b8;
  local_c = 4;
  local_8 = &local_14;
  PostMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_10);
  return 1;
}


// ---- FUN_10013f93 @ 10013f93

void __thiscall FUN_10013f93(void *this,short param_1,short param_2)

{
  undefined1 local_1c [4];
  int local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined1 *local_8;
  
  local_18 = (int)param_1;
  local_14 = (int)param_2;
  local_10 = DAT_10022448;
  local_c = 0xc;
  local_8 = local_1c;
  SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_10);
  return;
}


// ---- FUN_10013fe0 @ 10013fe0

void FUN_10013fe0(char *param_1,char *param_2)

{
  strcpy(param_1,param_2);
  return;
}


// ---- FUN_10013ffd @ 10013ffd

void __fastcall FUN_10013ffd(int param_1)

{
  ATOM AVar1;
  LPCSTR lpString;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10017d12;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  lpString = (LPCSTR)FUN_100026c0((undefined4 *)&stack0x00000004);
  AVar1 = GlobalAddAtomA(lpString);
  SendMessageA(*(HWND *)(param_1 + 4),0x4c8,0,(uint)AVar1);
  local_8 = 0xffffffff;
  CString::~CString((CString *)&stack0x00000004);
  ExceptionList = local_10;
  return;
}


// ---- FUN_10014068 @ 10014068

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_10014068(void *param_1)

{
  undefined4 uVar1;
  float10 fVar2;
  
  uVar1 = FUN_10012f6a(param_1,s_DP_IMAGE_STORE_100217f8);
  FUN_10011a37(param_1,uVar1);
  uVar1 = ftol();
  switch(uVar1) {
  case 0:
    fVar2 = (float10)_DAT_100188c0;
    break;
  case 1:
    fVar2 = (float10)_DAT_10019e38;
    break;
  case 2:
    fVar2 = (float10)_DAT_1001a080;
    break;
  case 3:
    fVar2 = (float10)_DAT_1001a07c;
    break;
  default:
    fVar2 = (float10)_DAT_100188c0;
  }
  return fVar2;
}


// ---- FUN_100140df @ 100140df

void __fastcall FUN_100140df(int param_1)

{
  SendMessageA(*(HWND *)(param_1 + 4),DAT_10022378,*(WPARAM *)(param_1 + 8),4);
  return;
}


// ---- FUN_10014107 @ 10014107

LRESULT __fastcall FUN_10014107(int param_1)

{
  char *pcVar1;
  LRESULT LVar2;
  char local_184 [352];
  undefined4 local_24;
  undefined4 local_1c;
  undefined4 local_18;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10017d25;
  local_10 = ExceptionList;
  local_8 = 0;
  local_1c = DAT_1002237c;
  local_18 = 0x168;
  local_14 = local_184;
  ExceptionList = &local_10;
  pcVar1 = (char *)FUN_100026c0((undefined4 *)&stack0x00000004);
  FUN_10013fe0(local_184,pcVar1);
  local_24 = 4;
  LVar2 = SendMessageA(*(HWND *)(param_1 + 4),0x4a,*(WPARAM *)(param_1 + 8),(LPARAM)&local_1c);
  local_8 = 0xffffffff;
  CString::~CString((CString *)&stack0x00000004);
  ExceptionList = local_10;
  return LVar2;
}


// ---- FUN_100141b7 @ 100141b7

LRESULT __fastcall FUN_100141b7(int param_1)

{
  char *pcVar1;
  LRESULT LVar2;
  char local_184 [352];
  undefined4 local_24;
  undefined4 local_1c;
  undefined4 local_18;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10017d38;
  local_10 = ExceptionList;
  local_8 = 0;
  local_1c = DAT_1002237c;
  local_18 = 0x168;
  local_14 = local_184;
  ExceptionList = &local_10;
  pcVar1 = (char *)FUN_100026c0((undefined4 *)&stack0x00000004);
  FUN_10013fe0(local_184,pcVar1);
  local_24 = 5;
  LVar2 = SendMessageA(*(HWND *)(param_1 + 4),0x4a,*(WPARAM *)(param_1 + 8),(LPARAM)&local_1c);
  local_8 = 0xffffffff;
  CString::~CString((CString *)&stack0x00000004);
  ExceptionList = local_10;
  return LVar2;
}


// ---- FUN_10014267 @ 10014267

LRESULT __fastcall FUN_10014267(int param_1)

{
  char *pcVar1;
  LRESULT LVar2;
  char local_184 [352];
  undefined4 local_24;
  undefined4 local_1c;
  undefined4 local_18;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10017d4b;
  local_10 = ExceptionList;
  local_8 = 0;
  local_1c = DAT_1002237c;
  local_18 = 0x168;
  local_14 = local_184;
  ExceptionList = &local_10;
  pcVar1 = (char *)FUN_100026c0((undefined4 *)&stack0x00000004);
  FUN_10013fe0(local_184,pcVar1);
  local_24 = 0;
  LVar2 = SendMessageA(*(HWND *)(param_1 + 4),0x4a,*(WPARAM *)(param_1 + 8),(LPARAM)&local_1c);
  local_8 = 0xffffffff;
  CString::~CString((CString *)&stack0x00000004);
  ExceptionList = local_10;
  return LVar2;
}


// ---- FUN_10014317 @ 10014317

LRESULT __fastcall FUN_10014317(int param_1)

{
  char *pcVar1;
  LRESULT LVar2;
  char local_184 [352];
  undefined4 local_24;
  undefined4 local_1c;
  undefined4 local_18;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10017d5e;
  local_10 = ExceptionList;
  local_8 = 0;
  local_1c = DAT_1002237c;
  local_18 = 0x168;
  local_14 = local_184;
  ExceptionList = &local_10;
  pcVar1 = (char *)FUN_100026c0((undefined4 *)&stack0x00000004);
  FUN_10013fe0(local_184,pcVar1);
  local_24 = 1;
  LVar2 = SendMessageA(*(HWND *)(param_1 + 4),0x4a,*(WPARAM *)(param_1 + 8),(LPARAM)&local_1c);
  local_8 = 0xffffffff;
  CString::~CString((CString *)&stack0x00000004);
  ExceptionList = local_10;
  return LVar2;
}


// ---- FUN_100143c7 @ 100143c7

LRESULT __fastcall FUN_100143c7(int param_1)

{
  char *pcVar1;
  LRESULT LVar2;
  char local_184 [352];
  undefined4 local_24;
  undefined4 local_1c;
  undefined4 local_18;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10017d71;
  local_10 = ExceptionList;
  local_8 = 0;
  local_1c = DAT_1002237c;
  local_18 = 0x168;
  local_14 = local_184;
  ExceptionList = &local_10;
  pcVar1 = (char *)FUN_100026c0((undefined4 *)&stack0x00000004);
  FUN_10013fe0(local_184,pcVar1);
  local_24 = 2;
  LVar2 = SendMessageA(*(HWND *)(param_1 + 4),0x4a,*(WPARAM *)(param_1 + 8),(LPARAM)&local_1c);
  local_8 = 0xffffffff;
  CString::~CString((CString *)&stack0x00000004);
  ExceptionList = local_10;
  return LVar2;
}


// ---- FUN_10014477 @ 10014477

LRESULT __fastcall FUN_10014477(int param_1)

{
  char *pcVar1;
  LRESULT LVar2;
  char local_184 [352];
  undefined4 local_24;
  undefined4 local_1c;
  undefined4 local_18;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10017d84;
  local_10 = ExceptionList;
  local_8 = 0;
  local_1c = DAT_1002237c;
  local_18 = 0x168;
  local_14 = local_184;
  ExceptionList = &local_10;
  pcVar1 = (char *)FUN_100026c0((undefined4 *)&stack0x00000004);
  FUN_10013fe0(local_184,pcVar1);
  local_24 = 3;
  LVar2 = SendMessageA(*(HWND *)(param_1 + 4),0x4a,*(WPARAM *)(param_1 + 8),(LPARAM)&local_1c);
  local_8 = 0xffffffff;
  CString::~CString((CString *)&stack0x00000004);
  ExceptionList = local_10;
  return LVar2;
}


// ---- FUN_10014527 @ 10014527

undefined4 __fastcall FUN_10014527(void *param_1)

{
  char *pcVar1;
  char local_188 [352];
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10017d97;
  local_10 = ExceptionList;
  local_8 = 0;
  local_1c = DAT_1002237c;
  local_18 = 0x168;
  local_14 = local_188;
  ExceptionList = &local_10;
  pcVar1 = (char *)FUN_100026c0((undefined4 *)&stack0x00000004);
  FUN_10013fe0(local_188,pcVar1);
  local_28 = 10;
  local_20 = FUN_10015809(param_1,*(HWND *)((int)param_1 + 4),0x4a,*(WPARAM *)((int)param_1 + 8),
                          &local_1c);
  if (local_20 == 0) {
    local_8 = 0xffffffff;
    CString::~CString((CString *)&stack0x00000004);
    local_24 = 0xffffffff;
  }
  else {
    local_8 = 0xffffffff;
    CString::~CString((CString *)&stack0x00000004);
  }
  ExceptionList = local_10;
  return local_24;
}


// ---- FUN_10014609 @ 10014609

void __fastcall FUN_10014609(int param_1)

{
  SendMessageA(*(HWND *)(param_1 + 4),DAT_10022378,*(WPARAM *)(param_1 + 8),0);
  return;
}


// ---- FUN_10014631 @ 10014631

void __fastcall FUN_10014631(int param_1)

{
  SendMessageA(*(HWND *)(param_1 + 4),DAT_10022378,*(WPARAM *)(param_1 + 8),1);
  return;
}


// ---- FUN_10014659 @ 10014659

void __fastcall FUN_10014659(int param_1)

{
  SendMessageA(*(HWND *)(param_1 + 4),DAT_10022378,*(WPARAM *)(param_1 + 8),2);
  return;
}


// ---- FUN_10014681 @ 10014681

void __fastcall FUN_10014681(int param_1)

{
  SendMessageA(*(HWND *)(param_1 + 4),DAT_10022378,*(WPARAM *)(param_1 + 8),3);
  return;
}


// ---- FUN_100146a9 @ 100146a9

void __fastcall FUN_100146a9(int param_1)

{
  SendMessageA(*(HWND *)(param_1 + 4),DAT_10022360,*(WPARAM *)(param_1 + 8),0);
  return;
}


// ---- FUN_100146d1 @ 100146d1

void __thiscall FUN_100146d1(void *this,LPARAM param_1)

{
  SendMessageA(*(HWND *)((int)this + 4),DAT_1002235c,*(WPARAM *)((int)this + 8),param_1);
  return;
}


// ---- FUN_100146fc @ 100146fc

void __thiscall FUN_100146fc(void *this,LPARAM param_1)

{
  SendMessageA(*(HWND *)((int)this + 4),DAT_10022358,*(WPARAM *)((int)this + 8),param_1);
  return;
}


// ---- FUN_10014727 @ 10014727

void __thiscall FUN_10014727(void *this,LPARAM param_1)

{
  SendMessageA(*(HWND *)((int)this + 4),DAT_10022350,*(WPARAM *)((int)this + 8),param_1);
  return;
}


// ---- FUN_10014752 @ 10014752

void __fastcall FUN_10014752(int param_1)

{
  SendMessageA(*(HWND *)(param_1 + 4),DAT_10022354,*(WPARAM *)(param_1 + 8),0);
  return;
}


// ---- FUN_1001477a @ 1001477a

void __fastcall FUN_1001477a(int param_1)

{
  SendMessageA(*(HWND *)(param_1 + 4),DAT_10022374,*(WPARAM *)(param_1 + 8),0);
  return;
}


// ---- FUN_100147a2 @ 100147a2

void __fastcall FUN_100147a2(int param_1)

{
  SendMessageA(*(HWND *)(param_1 + 4),DAT_10022370,*(WPARAM *)(param_1 + 8),0);
  return;
}


// ---- FUN_100147ca @ 100147ca

void __thiscall FUN_100147ca(void *this,undefined4 param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_1002236c;
  local_c = 0x184;
  local_8 = param_1;
  FUN_10015809(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_10);
  return;
}


// ---- FUN_1001480a @ 1001480a

void __thiscall FUN_1001480a(void *this,undefined4 param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_10022368;
  local_c = 0x184;
  local_8 = param_1;
  FUN_10015809(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_10);
  return;
}


// ---- FUN_1001484a @ 1001484a

void __thiscall FUN_1001484a(void *this,LPARAM param_1)

{
  SendMessageA(*(HWND *)((int)this + 4),DAT_1002238c,*(WPARAM *)((int)this + 8),param_1);
  return;
}


// ---- FUN_10014875 @ 10014875

LRESULT __fastcall FUN_10014875(int param_1)

{
  char *pcVar1;
  LRESULT LVar2;
  char local_184 [352];
  undefined4 local_24;
  undefined4 local_1c;
  undefined4 local_18;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10017daa;
  local_10 = ExceptionList;
  local_8 = 0;
  local_1c = DAT_1002237c;
  local_18 = 0x168;
  local_14 = local_184;
  ExceptionList = &local_10;
  pcVar1 = (char *)FUN_100026c0((undefined4 *)&stack0x00000004);
  FUN_10013fe0(local_184,pcVar1);
  local_24 = 7;
  LVar2 = SendMessageA(*(HWND *)(param_1 + 4),0x4a,*(WPARAM *)(param_1 + 8),(LPARAM)&local_1c);
  local_8 = 0xffffffff;
  CString::~CString((CString *)&stack0x00000004);
  ExceptionList = local_10;
  return LVar2;
}


// ---- FUN_10014925 @ 10014925

LRESULT __fastcall FUN_10014925(int param_1)

{
  char *pcVar1;
  LRESULT LVar2;
  char local_184 [352];
  undefined4 local_24;
  undefined4 local_1c;
  undefined4 local_18;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10017dbd;
  local_10 = ExceptionList;
  local_8 = 0;
  local_1c = DAT_1002237c;
  local_18 = 0x168;
  local_14 = local_184;
  ExceptionList = &local_10;
  pcVar1 = (char *)FUN_100026c0((undefined4 *)&stack0x00000004);
  FUN_10013fe0(local_184,pcVar1);
  local_24 = 6;
  LVar2 = SendMessageA(*(HWND *)(param_1 + 4),0x4a,*(WPARAM *)(param_1 + 8),(LPARAM)&local_1c);
  local_8 = 0xffffffff;
  CString::~CString((CString *)&stack0x00000004);
  ExceptionList = local_10;
  return LVar2;
}


// ---- FUN_100149d5 @ 100149d5

LRESULT __fastcall FUN_100149d5(int param_1)

{
  char *pcVar1;
  LRESULT LVar2;
  char local_184 [352];
  undefined4 local_24;
  undefined4 local_1c;
  undefined4 local_18;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10017dd0;
  local_10 = ExceptionList;
  local_8 = 0;
  local_1c = DAT_1002237c;
  local_18 = 0x168;
  local_14 = local_184;
  ExceptionList = &local_10;
  pcVar1 = (char *)FUN_100026c0((undefined4 *)&stack0x00000004);
  FUN_10013fe0(local_184,pcVar1);
  local_24 = 9;
  LVar2 = SendMessageA(*(HWND *)(param_1 + 4),0x4a,*(WPARAM *)(param_1 + 8),(LPARAM)&local_1c);
  local_8 = 0xffffffff;
  CString::~CString((CString *)&stack0x00000004);
  ExceptionList = local_10;
  return LVar2;
}


// ---- FUN_10014a85 @ 10014a85

LRESULT __fastcall FUN_10014a85(int param_1)

{
  char *pcVar1;
  LRESULT LVar2;
  char local_184 [352];
  undefined4 local_24;
  undefined4 local_1c;
  undefined4 local_18;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10017de3;
  local_10 = ExceptionList;
  local_8 = 0;
  local_1c = DAT_1002237c;
  local_18 = 0x168;
  local_14 = local_184;
  ExceptionList = &local_10;
  pcVar1 = (char *)FUN_100026c0((undefined4 *)&stack0x00000004);
  FUN_10013fe0(local_184,pcVar1);
  local_24 = 8;
  LVar2 = SendMessageA(*(HWND *)(param_1 + 4),0x4a,*(WPARAM *)(param_1 + 8),(LPARAM)&local_1c);
  local_8 = 0xffffffff;
  CString::~CString((CString *)&stack0x00000004);
  ExceptionList = local_10;
  return LVar2;
}


// ---- FUN_10014b35 @ 10014b35

void __thiscall FUN_10014b35(void *this,undefined4 param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_10022388;
  local_c = 0x450;
  local_8 = param_1;
  FUN_10015809(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_10);
  return;
}


// ---- FUN_10014b75 @ 10014b75

void __thiscall FUN_10014b75(void *this,undefined4 param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_10022384;
  local_c = 0x450;
  local_8 = param_1;
  SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_10);
  return;
}


// ---- FUN_10014bb3 @ 10014bb3

void __fastcall FUN_10014bb3(int param_1)

{
  LPARAM lParam;
  WPARAM wParam;
  
  lParam = ftol();
  wParam = ftol();
  SendMessageA(*(HWND *)(param_1 + 4),DAT_10022380,wParam,lParam);
  return;
}


// ---- FUN_10014bf1 @ 10014bf1

void __thiscall FUN_10014bf1(void *this,undefined4 param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_10022440;
  local_c = 0x30c;
  local_8 = param_1;
  SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_10);
  return;
}


// ---- FUN_10014c2f @ 10014c2f

void __thiscall FUN_10014c2f(void *this,undefined4 param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_1002243c;
  local_c = 0x10c;
  local_8 = param_1;
  FUN_10015809(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_10);
  return;
}


// ---- FUN_10014c6f @ 10014c6f

void __thiscall FUN_10014c6f(void *this,undefined4 param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_10022420;
  local_c = 0x110;
  local_8 = param_1;
  FUN_10015809(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_10);
  return;
}


// ---- FUN_10014caf @ 10014caf

void __thiscall FUN_10014caf(void *this,undefined4 param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_10022428;
  local_c = 8;
  local_8 = param_1;
  SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_10);
  return;
}


// ---- FUN_10014ced @ 10014ced

void __thiscall FUN_10014ced(void *this,undefined4 param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_10022424;
  local_c = 8;
  local_8 = param_1;
  SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_10);
  return;
}


// ---- FUN_10014d2b @ 10014d2b

void __thiscall FUN_10014d2b(void *this,undefined4 param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_10022460;
  local_c = 0x10;
  local_8 = param_1;
  SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_10);
  return;
}


// ---- FUN_10014d69 @ 10014d69

void __thiscall FUN_10014d69(void *this,undefined4 param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_10022438;
  local_c = 0x10;
  local_8 = param_1;
  FUN_10015809(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_10);
  return;
}


// ---- FUN_10014da9 @ 10014da9

void __thiscall FUN_10014da9(void *this,undefined4 param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_10022464;
  local_c = 0x14;
  local_8 = param_1;
  SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_10);
  return;
}


// ---- FUN_10014de7 @ 10014de7

void __thiscall FUN_10014de7(void *this,undefined4 param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_10022444;
  local_c = 0xc;
  local_8 = param_1;
  FUN_10015809(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_10);
  return;
}


// ---- FUN_10014e27 @ 10014e27

void __thiscall FUN_10014e27(void *this,undefined4 param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_10022468;
  local_c = 0x80c;
  local_8 = param_1;
  SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_10);
  return;
}


// ---- FUN_10014e65 @ 10014e65

void __thiscall FUN_10014e65(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 *local_8;
  
  local_1c = 0;
  local_18 = param_1;
  local_14 = param_2;
  local_10 = DAT_1002245c;
  local_c = 0xc;
  local_8 = &local_1c;
  SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_10);
  return;
}


// ---- FUN_10014eb7 @ 10014eb7

void __thiscall FUN_10014eb7(void *this,undefined4 param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_10022458;
  local_c = 0xc;
  local_8 = param_1;
  SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_10);
  return;
}


// ---- FUN_10014ef5 @ 10014ef5

void __thiscall FUN_10014ef5(void *this,undefined4 param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_10022454;
  local_c = 0xc;
  local_8 = param_1;
  SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_10);
  return;
}


// ---- FUN_10014f33 @ 10014f33

void __thiscall FUN_10014f33(void *this,undefined4 param_1)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = 0;
  local_8 = param_1;
  local_18 = DAT_10022450;
  local_14 = 8;
  local_10 = &local_c;
  SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_18);
  return;
}


// ---- FUN_10014f7f @ 10014f7f

void __fastcall FUN_10014f7f(int param_1)

{
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 *local_8;
  
  local_14 = 0;
  local_10 = DAT_1002244c;
  local_c = 4;
  local_8 = &local_14;
  SendMessageA(*(HWND *)(param_1 + 4),0x4a,*(WPARAM *)(param_1 + 8),(LPARAM)&local_10);
  return;
}


// ---- FUN_10014fc2 @ 10014fc2

void __thiscall FUN_10014fc2(void *this,undefined4 param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_10022434;
  local_c = 0x18;
  local_8 = param_1;
  SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_10);
  return;
}


// ---- FUN_10015000 @ 10015000

void __thiscall FUN_10015000(void *this,undefined4 param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_10022430;
  local_c = 4;
  local_8 = param_1;
  SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_10);
  return;
}


// ---- FUN_1001503e @ 1001503e

void __thiscall FUN_1001503e(void *this,undefined4 param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_1002242c;
  local_c = 4;
  local_8 = param_1;
  SendMessageA(*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_10);
  return;
}


// ---- FUN_1001507c @ 1001507c

void __fastcall FUN_1001507c(int param_1)

{
  PostMessageA(*(HWND *)(param_1 + 4),DAT_100225b0,*(WPARAM *)(param_1 + 8),0);
  return;
}


// ---- FUN_100150a4 @ 100150a4

void __fastcall FUN_100150a4(int param_1)

{
  SendMessageA(*(HWND *)(param_1 + 4),DAT_100225ac,*(WPARAM *)(param_1 + 8),0);
  return;
}


// ---- FUN_100150cc @ 100150cc

void __fastcall FUN_100150cc(int param_1)

{
  SendMessageA(*(HWND *)(param_1 + 4),DAT_100225dc,0,0);
  return;
}


// ---- FUN_100150ee @ 100150ee

undefined4 __thiscall FUN_100150ee(void *this,undefined4 param_1,undefined4 param_2)

{
  char *pcVar1;
  int iVar2;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 *local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  char local_170 [352];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10017df6;
  local_10 = ExceptionList;
  local_8 = 0;
  local_178 = param_1;
  local_174 = param_2;
  ExceptionList = &local_10;
  pcVar1 = (char *)FUN_100026c0((undefined4 *)&stack0x0000000c);
  FUN_10013fe0(local_170,pcVar1);
  local_188 = DAT_10022604;
  local_184 = 0x16c;
  local_180 = &local_17c;
  iVar2 = FUN_10015809(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_188);
  if (iVar2 == 0) {
    local_8 = 0xffffffff;
    CString::~CString((CString *)&stack0x0000000c);
    local_17c = 0;
  }
  else {
    local_8 = 0xffffffff;
    CString::~CString((CString *)&stack0x0000000c);
  }
  ExceptionList = local_10;
  return local_17c;
}


// ---- FUN_100151e5 @ 100151e5

void __thiscall FUN_100151e5(void *this,LPARAM param_1)

{
  SendMessageA(*(HWND *)((int)this + 4),DAT_10022600,*(WPARAM *)((int)this + 8),param_1);
  return;
}


// ---- FUN_10015210 @ 10015210

void __fastcall FUN_10015210(int param_1)

{
  SendMessageA(*(HWND *)(param_1 + 4),DAT_10022340,0,0);
  return;
}


// ---- FUN_10015232 @ 10015232

void __fastcall FUN_10015232(int param_1)

{
  SendMessageA(*(HWND *)(param_1 + 4),DAT_10022340,1,0);
  return;
}


// ---- FUN_10015254 @ 10015254

void __thiscall FUN_10015254(void *this,LPARAM param_1,WPARAM param_2)

{
  SendMessageA(*(HWND *)((int)this + 4),DAT_10022618,param_2,param_1);
  return;
}


// ---- FUN_1001527d @ 1001527d

undefined4 __thiscall
FUN_1001527d(void *this,undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_20 = DAT_1002241c;
  local_1c = 0xc;
  local_18 = &local_10;
  local_10 = param_1;
  local_c = param_2;
  uVar1 = FUN_10015809(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_20);
  *param_3 = local_8;
  return uVar1;
}


// ---- FUN_100152d7 @ 100152d7

void __thiscall FUN_100152d7(void *this,WPARAM param_1)

{
  PostMessageA(*(HWND *)((int)this + 4),DAT_1002233c,param_1,0);
  return;
}


// ---- FUN_100152fe @ 100152fe

void __thiscall FUN_100152fe(void *this,WPARAM param_1)

{
  PostMessageA(*(HWND *)((int)this + 4),DAT_1002233c,param_1,1);
  return;
}


// ---- FUN_10015325 @ 10015325

void __thiscall FUN_10015325(void *this,WPARAM param_1)

{
  SendMessageA(*(HWND *)((int)this + 4),DAT_10022338,param_1,0);
  return;
}


// ---- FUN_1001534c @ 1001534c

undefined4 FUN_1001534c(void)

{
  return 1;
}


// ---- FUN_1001535e @ 1001535e

uint __fastcall FUN_1001535e(void *param_1)

{
  uint local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  int *local_8;
  
  local_1c = 0;
  local_10 = DAT_100223ec;
  local_c = 8;
  local_8 = &local_18;
  FUN_10015809(param_1,*(HWND *)((int)param_1 + 4),0x4a,*(WPARAM *)((int)param_1 + 8),&local_10);
  if (local_14 == 1) {
    local_1c = 0x10;
  }
  if (local_18 == 1) {
    local_1c = local_1c | 0x20;
  }
  return local_1c;
}


// ---- FUN_100153c4 @ 100153c4

void __fastcall FUN_100153c4(int param_1)

{
  HWND hWnd;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  
  lParam = 0;
  wParam = 0;
  Msg = DAT_100225f0;
  hWnd = (HWND)FUN_10015c99(param_1);
  SendMessageA(hWnd,Msg,wParam,lParam);
  return;
}


// ---- FUN_100153e8 @ 100153e8

undefined4 __thiscall FUN_100153e8(void *this,undefined4 param_1,CString *param_2)

{
  HWND pHVar1;
  undefined4 uVar2;
  UINT UVar3;
  WPARAM WVar4;
  undefined4 *puVar5;
  undefined4 local_174;
  char local_170 [352];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 *local_8;
  
  local_10 = DAT_100225e8;
  local_c = 0x164;
  local_8 = &local_174;
  local_174 = param_1;
  puVar5 = &local_10;
  WVar4 = *(WPARAM *)((int)this + 8);
  UVar3 = 0x4a;
  pHVar1 = (HWND)FUN_10015c99((int)this);
  uVar2 = FUN_10015809(this,pHVar1,UVar3,WVar4,puVar5);
  CString::operator=(param_2,local_170);
  return uVar2;
}


// ---- FUN_10015460 @ 10015460

void __fastcall FUN_10015460(int param_1)

{
  HWND hWnd;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  
  lParam = 0;
  wParam = 0;
  Msg = DAT_100225ec;
  hWnd = (HWND)FUN_10015c99(param_1);
  SendMessageA(hWnd,Msg,wParam,lParam);
  return;
}


// ---- FUN_10015484 @ 10015484

undefined4 __thiscall FUN_10015484(void *this,undefined4 param_1,CString *param_2)

{
  HWND pHVar1;
  undefined4 uVar2;
  UINT UVar3;
  WPARAM WVar4;
  undefined4 *puVar5;
  undefined4 local_174;
  char local_170 [352];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 *local_8;
  
  local_10 = DAT_100225e4;
  local_c = 0x164;
  local_8 = &local_174;
  local_174 = param_1;
  puVar5 = &local_10;
  WVar4 = *(WPARAM *)((int)this + 8);
  UVar3 = 0x4a;
  pHVar1 = (HWND)FUN_10015c99((int)this);
  uVar2 = FUN_10015809(this,pHVar1,UVar3,WVar4,puVar5);
  CString::operator=(param_2,local_170);
  return uVar2;
}


// ---- FUN_100154fc @ 100154fc

void __thiscall FUN_100154fc(void *this,LPARAM param_1)

{
  HWND hWnd;
  UINT Msg;
  WPARAM wParam;
  
  wParam = 0;
  Msg = DAT_100225e0;
  hWnd = (HWND)FUN_10015c99((int)this);
  PostMessageA(hWnd,Msg,wParam,param_1);
  return;
}


// ---- FUN_10015525 @ 10015525

void __thiscall FUN_10015525(void *this,LPARAM param_1)

{
  HWND hWnd;
  UINT Msg;
  WPARAM wParam;
  
  wParam = 1;
  Msg = DAT_100225e0;
  hWnd = (HWND)FUN_10015c99((int)this);
  PostMessageA(hWnd,Msg,wParam,param_1);
  return;
}


// ---- FUN_1001554e @ 1001554e

void __thiscall FUN_1001554e(void *this,LPARAM param_1)

{
  HWND hWnd;
  UINT Msg;
  WPARAM wParam;
  
  wParam = 2;
  Msg = DAT_100225e0;
  hWnd = (HWND)FUN_10015c99((int)this);
  PostMessageA(hWnd,Msg,wParam,param_1);
  return;
}


// ---- FUN_10015577 @ 10015577

LRESULT FUN_10015577(int param_1,ushort param_2,undefined4 param_3,undefined4 param_4)

{
  LRESULT LVar1;
  int extraout_ECX;
  undefined4 *puVar2;
  int local_ea80;
  undefined4 local_ea7c;
  undefined4 local_ea78;
  undefined4 *local_ea74;
  undefined4 local_ea70;
  undefined4 local_ea6c;
  ushort local_ea68;
  undefined4 uStackY_ea66;
  undefined2 auStackY_ea62 [29989];
  undefined4 uStackY_18;
  
  FUN_10016e20();
  if ((param_2 == 0) || (10000 < param_2)) {
    LVar1 = -0xf;
  }
  else {
    local_ea70 = param_4;
    local_ea6c = param_3;
    local_ea68 = param_2;
    for (local_ea80 = 0; local_ea80 < (int)(uint)param_2; local_ea80 = local_ea80 + 1) {
      puVar2 = (undefined4 *)(param_1 + local_ea80 * 6);
      *(undefined4 *)((int)&uStackY_ea66 + local_ea80 * 6) = *puVar2;
      auStackY_ea62[local_ea80 * 3] = *(undefined2 *)(puVar2 + 1);
    }
    local_ea7c = DAT_10022414;
    local_ea78 = 0xea6c;
    local_ea74 = &local_ea70;
    uStackY_18 = 0x10015669;
    LVar1 = SendMessageA(*(HWND *)(extraout_ECX + 4),0x4a,*(WPARAM *)(extraout_ECX + 8),
                         (LPARAM)&local_ea7c);
  }
  return LVar1;
}


// ---- FUN_1001566f @ 1001566f

void __fastcall FUN_1001566f(int param_1)

{
  SendMessageA(*(HWND *)(param_1 + 4),DAT_10022410,*(WPARAM *)(param_1 + 8),0);
  return;
}


// ---- FUN_10015697 @ 10015697

void __thiscall FUN_10015697(void *this,undefined4 param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_10022324;
  local_c = 0x58;
  local_8 = param_1;
  FUN_10015809(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_10);
  return;
}


// ---- FUN_100156d7 @ 100156d7

void __thiscall FUN_100156d7(void *this,undefined4 param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_1002232c;
  local_c = 0x34;
  local_8 = param_1;
  FUN_10015809(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_10);
  return;
}


// ---- FUN_10015717 @ 10015717

LRESULT __thiscall FUN_10015717(void *this,WPARAM param_1,LPARAM param_2)

{
  HWND hWnd;
  LRESULT LVar1;
  
  if ((param_1 == 10) || (param_1 == 0xb)) {
    hWnd = FindWindowA((LPCSTR)0x0,s_Untitled___hpapp32_10021808);
    if (hWnd == (HWND)0x0) {
      LVar1 = 0;
    }
    else if (param_1 == 10) {
      LVar1 = SendMessageA(hWnd,DAT_10022330,0x1a,2);
    }
    else {
      LVar1 = SendMessageA(hWnd,DAT_10022330,0x1a,3);
    }
  }
  else {
    SendMessageA(*(HWND *)((int)this + 4),DAT_10022328,param_1,param_2);
    LVar1 = 1;
  }
  return LVar1;
}


// ---- FUN_100157a6 @ 100157a6

void __fastcall FUN_100157a6(int param_1)

{
  _OSVERSIONINFOA local_98;
  
  *(undefined4 *)(param_1 + 0x1c) = 0;
  memset(&local_98,0,0x94);
  local_98.dwOSVersionInfoSize = 0x94;
  GetVersionExA(&local_98);
  if (local_98.dwPlatformId == 2) {
    *(undefined4 *)(param_1 + 0x1c) = 1;
  }
  return;
}


// ---- FUN_10015809 @ 10015809

void __thiscall
FUN_10015809(void *this,HWND param_1,UINT param_2,WPARAM param_3,undefined4 *param_4)

{
  if (*(int *)((int)this + 0x1c) == 0) {
    SendMessageA(param_1,param_2,param_3,(LPARAM)param_4);
  }
  else {
    FUN_10015847(this,param_1,param_4);
  }
  return;
}


// ---- FUN_10015847 @ 10015847

LRESULT __thiscall FUN_10015847(void *this,HWND param_1,undefined4 *param_2)

{
  int iVar1;
  DWORD DVar2;
  undefined4 *lpBaseAddress;
  size_t sVar3;
  LRESULT LVar4;
  undefined4 uVar5;
  char local_114 [256];
  undefined4 local_14;
  int local_10;
  char *local_c;
  HANDLE local_8;
  
  iVar1 = rand();
  uVar5 = *(undefined4 *)((int)this + 8);
  DVar2 = GetTickCount();
  sprintf(local_114,s_MMF_LEO_SC__lx__lx__lx_1002181c,DVar2,uVar5,iVar1);
  local_8 = CreateFileMappingA((HANDLE)0xffffffff,(LPSECURITY_ATTRIBUTES)0x0,4,0,param_2[1] + 8,
                               local_114);
  if (local_8 == (HANDLE)0x0) {
    LVar4 = 0;
  }
  else {
    lpBaseAddress = MapViewOfFile(local_8,6,0,0,0);
    if (lpBaseAddress == (undefined4 *)0x0) {
      LVar4 = 0;
    }
    else {
      *lpBaseAddress = param_2[1];
      memcpy(lpBaseAddress + 1,(void *)param_2[2],param_2[1]);
      local_14 = *param_2;
      sVar3 = strlen(local_114);
      local_10 = sVar3 + 1;
      local_c = local_114;
      DAT_100222bc = SendMessageA(param_1,0x4a,*(WPARAM *)((int)this + 8),(LPARAM)&local_14);
      memcpy((void *)param_2[2],lpBaseAddress + 1,param_2[1]);
      UnmapViewOfFile(lpBaseAddress);
      CloseHandle(local_8);
      LVar4 = DAT_100222bc;
    }
  }
  return LVar4;
}


// ---- FUN_1001599b @ 1001599b

void __thiscall FUN_1001599b(void *this,LPARAM param_1)

{
  SendMessageA(*(HWND *)((int)this + 4),DAT_10022314,*(WPARAM *)((int)this + 8),param_1);
  return;
}


// ---- FUN_100159c6 @ 100159c6

void __fastcall FUN_100159c6(int param_1)

{
  SendMessageA(*(HWND *)(param_1 + 4),DAT_10022310,0,0);
  return;
}


// ---- FUN_100159e8 @ 100159e8

void __thiscall FUN_100159e8(void *this,undefined4 param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_1002230c;
  local_c = 0xc;
  local_8 = param_1;
  FUN_10015809(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_10);
  return;
}


// ---- FUN_10015a28 @ 10015a28

void __thiscall FUN_10015a28(void *this,undefined4 param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_10022308;
  local_c = 0xc;
  local_8 = param_1;
  FUN_10015809(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_10);
  return;
}


// ---- FUN_10015a68 @ 10015a68

void __fastcall FUN_10015a68(int param_1)

{
  SendMessageA(*(HWND *)(param_1 + 4),DAT_10022300,0,0);
  return;
}


// ---- FUN_10015a8a @ 10015a8a

void __thiscall FUN_10015a8a(void *this,WPARAM param_1)

{
  SendMessageA(*(HWND *)((int)this + 4),DAT_10022304,param_1,0);
  return;
}


// ---- FUN_10015ab1 @ 10015ab1

void __fastcall FUN_10015ab1(int param_1)

{
  SendMessageA(*(HWND *)(param_1 + 4),DAT_10022484,0,0);
  return;
}


// ---- FUN_10015ad3 @ 10015ad3

void __fastcall FUN_10015ad3(int param_1)

{
  SendMessageA(*(HWND *)(param_1 + 4),DAT_10022480,0,0);
  return;
}


// ---- FUN_10015af5 @ 10015af5

void __thiscall FUN_10015af5(void *this,uint param_1)

{
  SendMessageA(*(HWND *)((int)this + 4),DAT_100222f8,*(WPARAM *)((int)this + 8),param_1 & 0xff);
  return;
}


// ---- FUN_10015b25 @ 10015b25

void __fastcall FUN_10015b25(int param_1)

{
  SendMessageA(*(HWND *)(param_1 + 4),DAT_100222f4,0,0);
  return;
}


// ---- FUN_10015b47 @ 10015b47

void __thiscall FUN_10015b47(void *this,WPARAM param_1,LPARAM param_2)

{
  SendMessageA(*(HWND *)((int)this + 4),DAT_100222f0,param_1,param_2);
  return;
}


// ---- FUN_10015b70 @ 10015b70

undefined4 __thiscall FUN_10015b70(void *this,undefined1 param_1)

{
  char *_Source;
  undefined4 uVar1;
  undefined1 local_17c;
  char local_17b [351];
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10017e09;
  local_10 = ExceptionList;
  local_8 = 0;
  local_17c = param_1;
  ExceptionList = &local_10;
  _Source = (char *)FUN_100026c0((undefined4 *)&stack0x00000008);
  strcpy(local_17b,_Source);
  local_1c = DAT_100222ec;
  local_18 = 0x15f;
  local_14 = &local_17c;
  uVar1 = FUN_10015809(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_1c);
  local_8 = 0xffffffff;
  CString::~CString((CString *)&stack0x00000008);
  ExceptionList = local_10;
  return uVar1;
}


// ---- FUN_10015c25 @ 10015c25

void __thiscall FUN_10015c25(void *this,WPARAM param_1)

{
  HWND hWnd;
  UINT Msg;
  LPARAM lParam;
  
  lParam = 7;
  Msg = DAT_1002263c;
  hWnd = (HWND)FUN_10015c99((int)this);
  SendMessageA(hWnd,Msg,param_1,lParam);
  return;
}


// ---- FUN_10015c4e @ 10015c4e

void __thiscall FUN_10015c4e(void *this,WPARAM param_1)

{
  HWND hWnd;
  UINT Msg;
  LPARAM lParam;
  
  lParam = 8;
  Msg = DAT_1002263c;
  hWnd = (HWND)FUN_10015c99((int)this);
  SendMessageA(hWnd,Msg,param_1,lParam);
  return;
}


// ---- FUN_10015c77 @ 10015c77

void __fastcall FUN_10015c77(int param_1)

{
  SendMessageA(*(HWND *)(param_1 + 4),DAT_10022590,0,0);
  return;
}


// ---- FUN_10015c99 @ 10015c99

void __fastcall FUN_10015c99(int param_1)

{
  SendMessageA(*(HWND *)(param_1 + 4),DAT_100225fc,*(WPARAM *)(param_1 + 8),0);
  return;
}


// ---- FUN_10015cc1 @ 10015cc1

undefined4 __fastcall FUN_10015cc1(void *param_1)

{
  char *_Source;
  undefined4 uVar1;
  char local_17c [352];
  undefined4 local_1c;
  undefined4 local_18;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10017e1c;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  _Source = (char *)FUN_100026c0((undefined4 *)&stack0x00000004);
  strcpy(local_17c,_Source);
  local_1c = DAT_10022418;
  local_18 = 0x15e;
  local_14 = local_17c;
  uVar1 = FUN_10015809(param_1,*(HWND *)((int)param_1 + 4),0x4a,*(WPARAM *)((int)param_1 + 8),
                       &local_1c);
  local_8 = 0xffffffff;
  CString::~CString((CString *)&stack0x00000004);
  ExceptionList = local_10;
  return uVar1;
}


// ---- FUN_10015d6d @ 10015d6d

void __thiscall FUN_10015d6d(void *this,WPARAM param_1)

{
  HWND hWnd;
  UINT Msg;
  LPARAM lParam;
  
  lParam = 0;
  Msg = DAT_100225f8;
  hWnd = (HWND)FUN_10015c99((int)this);
  SendMessageA(hWnd,Msg,param_1,lParam);
  return;
}


// ---- FUN_10015d96 @ 10015d96

LRESULT __fastcall FUN_10015d96(int param_1)

{
  HWND hWnd;
  LRESULT LVar1;
  
  hWnd = (HWND)FUN_10015c99(param_1);
  if (hWnd == (HWND)0x0) {
    LVar1 = 0;
  }
  else {
    LVar1 = SendMessageA(hWnd,DAT_100222e8,0,0);
  }
  return LVar1;
}


// ---- FUN_10015dcc @ 10015dcc

LRESULT __fastcall FUN_10015dcc(int param_1)

{
  HWND hWnd;
  LRESULT LVar1;
  
  hWnd = (HWND)FUN_10015c99(param_1);
  if (hWnd == (HWND)0x0) {
    LVar1 = 0;
  }
  else {
    LVar1 = SendMessageA(hWnd,DAT_100222dc,0,0);
  }
  return LVar1;
}


// ---- FUN_10015e02 @ 10015e02

undefined4 __thiscall FUN_10015e02(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  HWND local_8;
  
  local_8 = (HWND)FUN_10015c99((int)this);
  if (local_8 == (HWND)0x0) {
    uVar1 = 0;
  }
  else {
    local_14 = DAT_100222e4;
    local_10 = 0x18;
    local_c = param_1;
    uVar1 = FUN_10015809(this,local_8,0x4a,*(WPARAM *)((int)this + 8),&local_14);
  }
  return uVar1;
}


// ---- FUN_10015e54 @ 10015e54

undefined4 __thiscall
FUN_10015e54(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  undefined1 local_2c [4];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 *local_c;
  HWND local_8;
  
  local_8 = (HWND)FUN_10015c99((int)this);
  if (local_8 == (HWND)0x0) {
    uVar1 = 0;
  }
  else {
    local_28 = param_1;
    local_24 = param_2;
    local_20 = param_3;
    local_18 = param_5;
    local_1c = param_4;
    local_14 = DAT_100222e0;
    local_10 = 0x18;
    local_c = local_2c;
    uVar1 = FUN_10015809(this,local_8,0x4a,*(WPARAM *)((int)this + 8),&local_14);
  }
  return uVar1;
}


// ---- FUN_10015ec5 @ 10015ec5

void __fastcall FUN_10015ec5(int param_1)

{
  SendMessageA(*(HWND *)(param_1 + 4),DAT_100222d4,0,0);
  return;
}


// ---- FUN_10015ee7 @ 10015ee7

void __thiscall FUN_10015ee7(void *this,LPARAM param_1)

{
  SendMessageA(*(HWND *)((int)this + 4),DAT_100222d0,0,param_1);
  return;
}


// ---- FUN_10015f0e @ 10015f0e

void __thiscall FUN_10015f0e(void *this,undefined4 *param_1,undefined4 *param_2)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 *local_8;
  
  local_10 = DAT_10022348;
  local_c = 0x18;
  local_8 = &local_28;
  FUN_10015809(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_10);
  *param_1 = local_28;
  *param_2 = local_24;
  return;
}


// ---- FUN_10015f5e @ 10015f5e

void __thiscall FUN_10015f5e(void *this,LPARAM param_1)

{
  SendMessageA(*(HWND *)((int)this + 4),DAT_100222cc,0,param_1);
  return;
}


// ---- FUN_10015f85 @ 10015f85

CString * __thiscall FUN_10015f85(void *this,CString *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_178;
  undefined4 local_174;
  char local_170 [352];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 *local_8;
  
  local_10 = DAT_100222c4;
  local_c = 0x168;
  local_8 = &local_178;
  local_178 = param_2;
  local_174 = param_3;
  FUN_10015809(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_10);
  CString::CString(param_1,local_170);
  return param_1;
}


// ---- FUN_10016014 @ 10016014

void __thiscall FUN_10016014(void *this,LPARAM param_1,WPARAM param_2)

{
  SendMessageA(*(HWND *)((int)this + 4),DAT_100222c8,param_2,param_1);
  return;
}


// ---- FUN_1001603d @ 1001603d

undefined4 __thiscall FUN_1001603d(void *this,LPARAM param_1)

{
  BOOL BVar1;
  
  BVar1 = PostMessageA(*(HWND *)((int)this + 4),DAT_100224ac,*(WPARAM *)((int)this + 8),param_1);
  *(BOOL *)((int)this + 0xc) = BVar1;
  return *(undefined4 *)((int)this + 0xc);
}


// ---- FUN_10016074 @ 10016074

undefined4 __thiscall
FUN_10016074(void *this,undefined4 param_1,undefined4 param_2,uint *param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 local_24;
  undefined4 local_20;
  uint local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 *local_8;
  
  local_10 = DAT_100222c0;
  local_c = 0x14;
  local_8 = &local_24;
  local_24 = param_1;
  local_20 = param_2;
  local_1c = (uint)(ushort)*param_3;
  local_18 = *param_4;
  local_14 = *param_5;
  uVar1 = FUN_10015809(this,*(HWND *)((int)this + 4),0x4a,*(WPARAM *)((int)this + 8),&local_10);
  *param_3 = local_1c;
  *param_4 = local_18;
  *param_5 = local_14;
  return uVar1;
}


// ---- FUN_100160f9 @ 100160f9

void __thiscall FUN_100160f9(void *this,uint param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint local_8;
  
  local_8 = param_1;
  FUN_10016074(this,0,1,&local_8,param_2,param_3);
  return;
}


// ---- FUN_10016130 @ 10016130

undefined4 * __thiscall FUN_10016130(void *this,uint param_1)

{
  FUN_10010a87(this);
  if ((param_1 & 1) != 0) {
    FUN_10001190(this);
  }
  return this;
}


// ---- FUN_10016160 @ 10016160

undefined4 FUN_10016160(void)

{
  AFX_MODULE_STATE *pAVar1;
  
  pAVar1 = AfxGetModuleState();
  return *(undefined4 *)(pAVar1 + 0xc);
}


// ---- Add @ 10016170

/* Library Function - Multiple Matches With Same Base Name
    public: int __thiscall CArray<int,int>::Add(int)
    public: int __thiscall CArray<unsigned int,unsigned int>::Add(unsigned int)
    public: int __thiscall CArray<long,long>::Add(long)
    public: int __thiscall CArray<unsigned long,unsigned long>::Add(unsigned long)
     29 names - too many to list
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2005 Debug, Visual Studio 2008 Debug, Visual
   Studio 2010 Debug */

int __thiscall Add(void *this,CString *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 8);
  CStringArray::SetAtGrow(this,iVar1,param_1);
  return iVar1;
}


// ---- FUN_100161a0 @ 100161a0

CString * __thiscall FUN_100161a0(void *this,char *param_1)

{
  CString::operator=(this,param_1);
  return this;
}


// ---- Add @ 100161c0

/* Library Function - Multiple Matches With Same Base Name
    public: int __thiscall CArray<int,int>::Add(int)
    public: int __thiscall CArray<unsigned int,unsigned int>::Add(unsigned int)
    public: int __thiscall CArray<long,long>::Add(long)
    public: int __thiscall CArray<unsigned long,unsigned long>::Add(unsigned long)
     29 names - too many to list
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2005 Debug, Visual Studio 2008 Debug, Visual
   Studio 2010 Debug */

int __thiscall Add(void *this,undefined4 param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 8);
  FUN_100161f0(this,iVar1,param_1);
  return iVar1;
}


// ---- FUN_100161f0 @ 100161f0

void __thiscall FUN_100161f0(void *this,int param_1,undefined4 param_2)

{
  if (*(int *)((int)this + 8) <= param_1) {
    FUN_10016230(this,param_1 + 1,-1);
  }
  *(undefined4 *)(*(int *)((int)this + 4) + param_1 * 4) = param_2;
  return;
}


// ---- FUN_10016230 @ 10016230

void __thiscall FUN_10016230(void *this,int param_1,int param_2)

{
  void *pvVar1;
  int local_2c;
  int local_28;
  int local_10;
  int local_c;
  
  if (param_2 != -1) {
    *(int *)((int)this + 0x10) = param_2;
  }
  if (param_1 == 0) {
    if (*(int *)((int)this + 4) != 0) {
      FUN_10016460(*(undefined4 *)((int)this + 4),*(int *)((int)this + 8));
      operator_delete(*(void **)((int)this + 4));
      *(undefined4 *)((int)this + 4) = 0;
    }
    *(undefined4 *)((int)this + 0xc) = 0;
    *(undefined4 *)((int)this + 8) = 0;
  }
  else if (*(int *)((int)this + 4) == 0) {
    pvVar1 = operator_new(param_1 << 2);
    *(void **)((int)this + 4) = pvVar1;
    FUN_10016490(*(void **)((int)this + 4),param_1);
    *(int *)((int)this + 0xc) = param_1;
    *(int *)((int)this + 8) = param_1;
  }
  else if (*(int *)((int)this + 0xc) < param_1) {
    local_c = *(int *)((int)this + 0x10);
    if (local_c == 0) {
      local_2c = (int)(*(int *)((int)this + 8) + (*(int *)((int)this + 8) >> 0x1f & 7U)) >> 3;
      if (local_2c < 4) {
        local_28 = 4;
      }
      else {
        if (0x400 < local_2c) {
          local_2c = 0x400;
        }
        local_28 = local_2c;
      }
      local_c = local_28;
    }
    if (param_1 < *(int *)((int)this + 0xc) + local_c) {
      local_10 = *(int *)((int)this + 0xc) + local_c;
    }
    else {
      local_10 = param_1;
    }
    pvVar1 = operator_new(local_10 << 2);
    memcpy(pvVar1,*(void **)((int)this + 4),*(int *)((int)this + 8) << 2);
    FUN_10016490((void *)((int)pvVar1 + *(int *)((int)this + 8) * 4),
                 param_1 - *(int *)((int)this + 8));
    operator_delete(*(void **)((int)this + 4));
    *(void **)((int)this + 4) = pvVar1;
    *(int *)((int)this + 8) = param_1;
    *(int *)((int)this + 0xc) = local_10;
  }
  else {
    if (*(int *)((int)this + 8) < param_1) {
      FUN_10016490((void *)(*(int *)((int)this + 4) + *(int *)((int)this + 8) * 4),
                   param_1 - *(int *)((int)this + 8));
    }
    else if (param_1 < *(int *)((int)this + 8)) {
      FUN_10016460(*(int *)((int)this + 4) + param_1 * 4,*(int *)((int)this + 8) - param_1);
    }
    *(int *)((int)this + 8) = param_1;
  }
  return;
}


// ---- FUN_10016460 @ 10016460

void FUN_10016460(undefined4 param_1,int param_2)

{
  bool bVar1;
  
  do {
    bVar1 = param_2 != 0;
    param_2 = param_2 + -1;
  } while (bVar1);
  return;
}


// ---- FUN_10016490 @ 10016490

void FUN_10016490(void *param_1,int param_2)

{
  memset(param_1,0,param_2 << 2);
  while (param_2 != 0) {
    FUN_10004e80(4,param_1);
    param_1 = (void *)((int)param_1 + 4);
    param_2 = param_2 + -1;
  }
  return;
}


// ---- PreInitDialog @ 100164de

void __thiscall CDialog::PreInitDialog(CDialog *this)

{
                    /* WARNING: Could not recover jumptable at 0x100164de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PreInitDialog(this);
  return;
}


// ---- OnCancel @ 100164e4

void __thiscall CDialog::OnCancel(CDialog *this)

{
                    /* WARNING: Could not recover jumptable at 0x100164e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnCancel(this);
  return;
}


// ---- OnOK @ 100164ea

void __thiscall CDialog::OnOK(CDialog *this)

{
                    /* WARNING: Could not recover jumptable at 0x100164ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnOK(this);
  return;
}


// ---- OnSetFont @ 100164f0

void __thiscall CDialog::OnSetFont(CDialog *this,CFont *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x100164f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnSetFont(this,param_1);
  return;
}


// ---- DoModal @ 100164f6

int __thiscall CDialog::DoModal(CDialog *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100164f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = DoModal(this);
  return iVar1;
}


// ---- SetOccDialogInfo @ 100164fc

int __thiscall CDialog::SetOccDialogInfo(CDialog *this,_AFX_OCC_DIALOG_INFO *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100164fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetOccDialogInfo(this,param_1);
  return iVar1;
}


// ---- IsFrameWnd @ 10016502

int __thiscall CWnd::IsFrameWnd(CWnd *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10016502. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = IsFrameWnd(this);
  return iVar1;
}


// ---- CheckAutoCenter @ 10016508

int __thiscall CDialog::CheckAutoCenter(CDialog *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10016508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CheckAutoCenter(this);
  return iVar1;
}


// ---- OnChildNotify @ 1001650e

int __thiscall CWnd::OnChildNotify(CWnd *this,uint param_1,uint param_2,long param_3,long *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1001650e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnChildNotify(this,param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- PostNcDestroy @ 10016514

void __thiscall CWnd::PostNcDestroy(CWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x10016514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PostNcDestroy(this);
  return;
}


// ---- DefWindowProcA @ 1001651a

long __thiscall CWnd::DefWindowProcA(CWnd *this,uint param_1,uint param_2,long param_3)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1001651a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = DefWindowProcA(this,param_1,param_2,param_3);
  return lVar1;
}


// ---- OnWndMsg @ 10016520

int __thiscall CWnd::OnWndMsg(CWnd *this,uint param_1,uint param_2,long param_3,long *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10016520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnWndMsg(this,param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- OnAmbientProperty @ 1001652c

int __thiscall
CWnd::OnAmbientProperty(CWnd *this,COleControlSite *param_1,long param_2,tagVARIANT *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1001652c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnAmbientProperty(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- GetSuperWndProcAddr @ 10016538

_func_long_HWND___ptr_uint_uint_long ** __thiscall CWnd::GetSuperWndProcAddr(CWnd *this)

{
  _func_long_HWND___ptr_uint_uint_long **pp_Var1;
  
                    /* WARNING: Could not recover jumptable at 0x10016538. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pp_Var1 = GetSuperWndProcAddr(this);
  return pp_Var1;
}


// ---- OnNotify @ 1001653e

int __thiscall CWnd::OnNotify(CWnd *this,uint param_1,long param_2,long *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1001653e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnNotify(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- OnCommand @ 10016544

int __thiscall CWnd::OnCommand(CWnd *this,uint param_1,long param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10016544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCommand(this,param_1,param_2);
  return iVar1;
}


// ---- EndModalLoop @ 1001654a

void __thiscall CWnd::EndModalLoop(CWnd *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x1001654a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EndModalLoop(this,param_1);
  return;
}


// ---- ContinueModal @ 10016550

int __thiscall CWnd::ContinueModal(CWnd *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10016550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ContinueModal(this);
  return iVar1;
}


// ---- WinHelpA @ 10016556

void __thiscall CWnd::WinHelpA(CWnd *this,ulong param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10016556. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WinHelpA(this,param_1,param_2);
  return;
}


// ---- GetScrollBarCtrl @ 1001655c

CScrollBar * __thiscall CWnd::GetScrollBarCtrl(CWnd *this,int param_1)

{
  CScrollBar *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1001655c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetScrollBarCtrl(this,param_1);
  return pCVar1;
}


// ---- OnToolHitTest @ 10016562

int __thiscall CWnd::OnToolHitTest(void)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10016562. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnToolHitTest();
  return iVar1;
}


// ---- CalcWindowRect @ 10016568

void __thiscall CWnd::CalcWindowRect(CWnd *this,tagRECT *param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10016568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CalcWindowRect(this,param_1,param_2);
  return;
}


// ---- PreCreateWindow @ 1001656e

int __thiscall CWnd::PreCreateWindow(CWnd *this,tagCREATESTRUCTA *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1001656e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = PreCreateWindow(this,param_1);
  return iVar1;
}


// ---- DestroyWindow @ 10016574

int __thiscall CWnd::DestroyWindow(CWnd *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10016574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = DestroyWindow(this);
  return iVar1;
}


// ---- Create @ 1001657a

int __thiscall
CWnd::Create(CWnd *this,char *param_1,char *param_2,ulong param_3,tagRECT *param_4,CWnd *param_5,
            uint param_6,CCreateContext *param_7)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1001657a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Create(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return iVar1;
}


// ---- PreSubclassWindow @ 10016580

void __thiscall CWnd::PreSubclassWindow(CWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x10016580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PreSubclassWindow(this);
  return;
}


// ---- GetConnectionHook @ 10016586

IConnectionPoint * __thiscall CCmdTarget::GetConnectionHook(CCmdTarget *this,_GUID *param_1)

{
  IConnectionPoint *pIVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10016586. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = GetConnectionHook(this,param_1);
  return pIVar1;
}


// ---- GetExtraConnectionPoints @ 1001658c

int __thiscall CCmdTarget::GetExtraConnectionPoints(CCmdTarget *this,CPtrArray *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1001658c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetExtraConnectionPoints(this,param_1);
  return iVar1;
}


// ---- GetInterfaceHook @ 10016592

IUnknown * __thiscall CCmdTarget::GetInterfaceHook(CCmdTarget *this,void *param_1)

{
  IUnknown *pIVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10016592. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = GetInterfaceHook(this,param_1);
  return pIVar1;
}


// ---- OnCreateAggregates @ 10016598

int __thiscall CCmdTarget::OnCreateAggregates(CCmdTarget *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10016598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCreateAggregates(this);
  return iVar1;
}


// ---- GetEventSinkMap @ 1001659e

AFX_EVENTSINKMAP * __thiscall CCmdTarget::GetEventSinkMap(CCmdTarget *this)

{
  AFX_EVENTSINKMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1001659e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetEventSinkMap(this);
  return pAVar1;
}


// ---- GetConnectionMap @ 100165aa

AFX_CONNECTIONMAP * __thiscall CCmdTarget::GetConnectionMap(CCmdTarget *this)

{
  AFX_CONNECTIONMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100165aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetConnectionMap(this);
  return pAVar1;
}


// ---- GetDispatchMap @ 100165b0

AFX_DISPMAP * __thiscall CCmdTarget::GetDispatchMap(CCmdTarget *this)

{
  AFX_DISPMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100165b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetDispatchMap(this);
  return pAVar1;
}


// ---- GetCommandMap @ 100165b6

AFX_OLECMDMAP * __thiscall CCmdTarget::GetCommandMap(CCmdTarget *this)

{
  AFX_OLECMDMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100165b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetCommandMap(this);
  return pAVar1;
}


// ---- GetTypeLib @ 100165bc

long __thiscall CCmdTarget::GetTypeLib(CCmdTarget *this,ulong param_1,ITypeLib **param_2)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100165bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = GetTypeLib(this,param_1,param_2);
  return lVar1;
}


// ---- GetTypeLibCache @ 100165c2

CTypeLibCache * __thiscall CCmdTarget::GetTypeLibCache(CCmdTarget *this)

{
  CTypeLibCache *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100165c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetTypeLibCache(this);
  return pCVar1;
}


// ---- GetTypeInfoCount @ 100165c8

uint __thiscall CCmdTarget::GetTypeInfoCount(CCmdTarget *this)

{
  uint uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100165c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = GetTypeInfoCount(this);
  return uVar1;
}


// ---- GetDispatchIID @ 100165ce

int __thiscall CCmdTarget::GetDispatchIID(CCmdTarget *this,_GUID *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100165ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetDispatchIID(this,param_1);
  return iVar1;
}


// ---- IsInvokeAllowed @ 100165d4

int __thiscall CCmdTarget::IsInvokeAllowed(CCmdTarget *this,long param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100165d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = IsInvokeAllowed(this,param_1);
  return iVar1;
}


// ---- OnCmdMsg @ 100165e0

int __thiscall
CDialog::OnCmdMsg(CDialog *this,uint param_1,int param_2,void *param_3,AFX_CMDHANDLERINFO *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100165e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCmdMsg(this,param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- ~CString @ 100165ec

void __thiscall CString::~CString(CString *this)

{
                    /* WARNING: Could not recover jumptable at 0x100165ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CString(this);
  return;
}


// ---- ~CDialog @ 100165f2

void __thiscall CDialog::~CDialog(CDialog *this)

{
                    /* WARNING: Could not recover jumptable at 0x100165f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CDialog(this);
  return;
}


// ---- operator= @ 100165f8

CString * __thiscall CString::operator=(CString *this,char *param_1)

{
  CString *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100165f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = operator=(this,param_1);
  return pCVar1;
}


// ---- CString @ 100165fe

void __thiscall CString::CString(CString *this)

{
                    /* WARNING: Could not recover jumptable at 0x100165fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CString(this);
  return;
}


// ---- CDialog @ 10016604

void __thiscall CDialog::CDialog(CDialog *this,uint param_1,CWnd *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10016604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CDialog(this,param_1,param_2);
  return;
}


// ---- DDX_Text @ 1001660a

void DDX_Text(CDataExchange *param_1,int param_2,CString *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x1001660a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DDX_Text(param_1,param_2,param_3);
  return;
}


// ---- CenterWindow @ 10016610

void __thiscall CWnd::CenterWindow(CWnd *this,CWnd *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10016610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CenterWindow(this,param_1);
  return;
}


// ---- OnInitDialog @ 10016616

int __thiscall CDialog::OnInitDialog(CDialog *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10016616. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnInitDialog(this);
  return iVar1;
}


// ---- LoadStringA @ 1001661c

int __thiscall CString::LoadStringA(CString *this,uint param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1001661c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = LoadStringA(this,param_1);
  return iVar1;
}


// ---- operator_delete @ 10016622

void __cdecl operator_delete(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10016622. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  operator_delete(param_1);
  return;
}


// ---- ~CProgressCtrl @ 10016628

void __thiscall CProgressCtrl::~CProgressCtrl(CProgressCtrl *this)

{
                    /* WARNING: Could not recover jumptable at 0x10016628. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CProgressCtrl(this);
  return;
}


// ---- DDX_Control @ 1001662e

void DDX_Control(CDataExchange *param_1,int param_2,CWnd *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x1001662e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DDX_Control(param_1,param_2,param_3);
  return;
}


// ---- SetWindowPos @ 10016634

int __thiscall
CWnd::SetWindowPos(CWnd *this,CWnd *param_1,int param_2,int param_3,int param_4,int param_5,
                  uint param_6)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10016634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetWindowPos(this,param_1,param_2,param_3,param_4,param_5,param_6);
  return iVar1;
}


// ---- ShowWindow @ 1001663a

int __thiscall CWnd::ShowWindow(CWnd *this,int param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1001663a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ShowWindow(this,param_1);
  return iVar1;
}


// ---- Create @ 10016640

int __thiscall CDialog::Create(CDialog *this,char *param_1,CWnd *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10016640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Create(this,param_1,param_2);
  return iVar1;
}


// ---- SetOccDialogInfo @ 10016646

int __thiscall CWnd::SetOccDialogInfo(CWnd *this,_AFX_OCC_DIALOG_INFO *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10016646. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetOccDialogInfo(this,param_1);
  return iVar1;
}


// ---- CheckAutoCenter @ 1001664c

int __thiscall CWnd::CheckAutoCenter(CWnd *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1001664c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CheckAutoCenter(this);
  return iVar1;
}


// ---- PreTranslateMessage @ 10016652

int __thiscall CWnd::PreTranslateMessage(CWnd *this,tagMSG *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10016652. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = PreTranslateMessage(this,param_1);
  return iVar1;
}


// ---- OnCmdMsg @ 1001665e

int __thiscall
CCmdTarget::OnCmdMsg
          (CCmdTarget *this,uint param_1,int param_2,void *param_3,AFX_CMDHANDLERINFO *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1001665e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCmdMsg(this,param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- CWnd @ 1001666a

void __thiscall CWnd::CWnd(CWnd *this)

{
                    /* WARNING: Could not recover jumptable at 0x1001666a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CWnd(this);
  return;
}


// ---- CString @ 10016670

void __thiscall CString::CString(CString *this,CString *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10016670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CString(this,param_1);
  return;
}


// ---- operator+= @ 10016676

CString * __thiscall CString::operator+=(CString *this,char *param_1)

{
  CString *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10016676. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = operator+=(this,param_1);
  return pCVar1;
}


// ---- CString @ 1001667c

void __thiscall CString::CString(CString *this,char *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x1001667c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CString(this,param_1);
  return;
}


// ---- Format @ 10016682

void __thiscall COleDateTime::Format(COleDateTime *this,char *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10016682. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Format(this,param_1);
  return;
}


// ---- operator= @ 10016688

CString * __thiscall CString::operator=(CString *this,CString *param_1)

{
  CString *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10016688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = operator=(this,param_1);
  return pCVar1;
}


// ---- Format @ 1001668e

void __thiscall COleCurrency::Format(COleCurrency *this,ulong param_1,ulong param_2)

{
                    /* WARNING: Could not recover jumptable at 0x1001668e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Format(this,param_1,param_2);
  return;
}


// ---- Format @ 10016694

void __thiscall CString::Format(CString *this,char *param_1,...)

{
                    /* WARNING: Could not recover jumptable at 0x10016694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Format(this,param_1);
  return;
}


// ---- SetString @ 1001669a

void __thiscall COleVariant::SetString(COleVariant *this,char *param_1,ushort param_2)

{
                    /* WARNING: Could not recover jumptable at 0x1001669a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetString(this,param_1,param_2);
  return;
}


// ---- Mid @ 100166a0

void __thiscall CString::Mid(CString *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x100166a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Mid(this,param_1);
  return;
}


// ---- Left @ 100166a6

void __thiscall CString::Left(CString *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x100166a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Left(this,param_1);
  return;
}


// ---- Find @ 100166ac

int __thiscall CString::Find(CString *this,char *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100166ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Find(this,param_1);
  return iVar1;
}


// ---- operator= @ 100166b2

COleCurrency * __thiscall COleCurrency::operator=(COleCurrency *this,tagVARIANT *param_1)

{
  COleCurrency *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100166b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = operator=(this,param_1);
  return pCVar1;
}


// ---- operator= @ 100166b8

COleDateTime * __thiscall COleDateTime::operator=(COleDateTime *this,tagVARIANT *param_1)

{
  COleDateTime *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100166b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = operator=(this,param_1);
  return pCVar1;
}


// ---- SetDateTime @ 100166be

int __thiscall
COleDateTime::SetDateTime
          (COleDateTime *this,int param_1,int param_2,int param_3,int param_4,int param_5,
          int param_6)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100166be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetDateTime(this,param_1,param_2,param_3,param_4,param_5,param_6);
  return iVar1;
}


// ---- operator_new @ 100166c4

void * __cdecl operator_new(uint param_1)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100166c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = operator_new(param_1);
  return pvVar1;
}


// ---- FreeDataChain @ 100166d0

void __thiscall CPlex::FreeDataChain(CPlex *this)

{
                    /* WARNING: Could not recover jumptable at 0x100166d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FreeDataChain(this);
  return;
}


// ---- ReadCount @ 100166d6

ulong __thiscall CArchive::ReadCount(CArchive *this)

{
  ulong uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100166d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = ReadCount(this);
  return uVar1;
}


// ---- WriteCount @ 100166dc

void __thiscall CArchive::WriteCount(CArchive *this,ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x100166dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WriteCount(this,param_1);
  return;
}


// ---- Create @ 100166e2

CPlex * CPlex::Create(CPlex **param_1,uint param_2,uint param_3)

{
  CPlex *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100166e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = Create(param_1,param_2,param_3);
  return pCVar1;
}


// ---- Read @ 100166e8

uint __thiscall CArchive::Read(CArchive *this,void *param_1,uint param_2)

{
  uint uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100166e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = Read(this,param_1,param_2);
  return uVar1;
}


// ---- Write @ 100166ee

void __thiscall CArchive::Write(CArchive *this,void *param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x100166ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Write(this,param_1,param_2);
  return;
}


// ---- ~CWinApp @ 10016766

void __thiscall CWinApp::~CWinApp(CWinApp *this)

{
                    /* WARNING: Could not recover jumptable at 0x10016766. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CWinApp(this);
  return;
}


// ---- ExitInstance @ 1001676c

int __thiscall COleControlModule::ExitInstance(COleControlModule *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1001676c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ExitInstance(this);
  return iVar1;
}


// ---- OnIdle @ 10016772

int __thiscall CWinApp::OnIdle(CWinApp *this,long param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10016772. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnIdle(this,param_1);
  return iVar1;
}


// ---- InitInstance @ 10016778

int __thiscall COleControlModule::InitInstance(COleControlModule *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10016778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = InitInstance(this);
  return iVar1;
}


// ---- CWinApp @ 1001677e

void __thiscall CWinApp::CWinApp(CWinApp *this,char *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x1001677e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CWinApp(this,param_1);
  return;
}


// ---- UpdateRegistryAll @ 10016784

int COleObjectFactory::UpdateRegistryAll(int param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10016784. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = UpdateRegistryAll(param_1);
  return iVar1;
}


// ---- AfxOleRegisterTypeLib @ 1001678a

int AfxOleRegisterTypeLib(HINSTANCE__ *param_1,_GUID *param_2,char *param_3,char *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1001678a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AfxOleRegisterTypeLib(param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- AFX_MAINTAIN_STATE2 @ 10016790

void __thiscall
AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2(AFX_MAINTAIN_STATE2 *this,AFX_MODULE_STATE *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10016790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AFX_MAINTAIN_STATE2(this,param_1);
  return;
}


// ---- AfxOleUnregisterTypeLib @ 10016796

int AfxOleUnregisterTypeLib(_GUID *param_1,ushort param_2,ushort param_3,ulong param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10016796. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AfxOleUnregisterTypeLib(param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- AfxGetModuleState @ 1001679c

AFX_MODULE_STATE * AfxGetModuleState(void)

{
  AFX_MODULE_STATE *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1001679c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = AfxGetModuleState();
  return pAVar1;
}


// ---- COleObjectFactory @ 100167d2

void __thiscall
COleObjectFactory::COleObjectFactory
          (COleObjectFactory *this,_GUID *param_1,CRuntimeClass *param_2,int param_3,char *param_4)

{
                    /* WARNING: Could not recover jumptable at 0x100167d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  COleObjectFactory(this,param_1,param_2,param_3,param_4);
  return;
}


// ---- ~COleObjectFactory @ 100167d8

void __thiscall COleObjectFactory::~COleObjectFactory(COleObjectFactory *this)

{
                    /* WARNING: Could not recover jumptable at 0x100167d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~COleObjectFactory(this);
  return;
}


// ---- AfxGetTypeLibCache @ 100167de

CTypeLibCache * AfxGetTypeLibCache(_GUID *param_1)

{
  CTypeLibCache *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100167de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = AfxGetTypeLibCache(param_1);
  return pCVar1;
}


// ---- AfxOleUnregisterClass @ 100167e4

int AfxOleUnregisterClass(_GUID *param_1,char *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100167e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AfxOleUnregisterClass(param_1,param_2);
  return iVar1;
}


// ---- AfxOleRegisterControlClass @ 100167ea

int AfxOleRegisterControlClass
              (HINSTANCE__ *param_1,_GUID *param_2,char *param_3,uint param_4,uint param_5,
              int param_6,ulong param_7,_GUID *param_8,ushort param_9,ushort param_10)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100167ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AfxOleRegisterControlClass
                    (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                     param_10);
  return iVar1;
}


// ---- DestroySharedMenu @ 100167f0

void __thiscall COleControl::DestroySharedMenu(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x100167f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DestroySharedMenu(this);
  return;
}


// ---- BuildSharedMenu @ 100167f6

int __thiscall COleControl::BuildSharedMenu(COleControl *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100167f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = BuildSharedMenu(this);
  return iVar1;
}


// ---- RemoveFrameLevelUI @ 100167fc

void __thiscall COleControl::RemoveFrameLevelUI(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x100167fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RemoveFrameLevelUI(this);
  return;
}


// ---- AddFrameLevelUI @ 10016802

void __thiscall COleControl::AddFrameLevelUI(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x10016802. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AddFrameLevelUI(this);
  return;
}


// ---- OnActivateInPlace @ 10016808

long __thiscall COleControl::OnActivateInPlace(COleControl *this,int param_1,tagMSG *param_2)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10016808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = OnActivateInPlace(this,param_1,param_2);
  return lVar1;
}


// ---- OnHide @ 1001680e

long __thiscall COleControl::OnHide(COleControl *this)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1001680e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = OnHide(this);
  return lVar1;
}


// ---- OnFrameClose @ 10016814

void __thiscall COleControl::OnFrameClose(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x10016814. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnFrameClose(this);
  return;
}


// ---- ResizeFrameWindow @ 1001681a

void __thiscall COleControl::ResizeFrameWindow(COleControl *this,int param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x1001681a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ResizeFrameWindow(this,param_1,param_2);
  return;
}


// ---- CreateFrameWindow @ 10016820

CControlFrameWnd * __thiscall COleControl::CreateFrameWindow(COleControl *this)

{
  CControlFrameWnd *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10016820. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = CreateFrameWindow(this);
  return pCVar1;
}


// ---- OnOpen @ 10016826

long __thiscall COleControl::OnOpen(COleControl *this,int param_1,tagMSG *param_2)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10016826. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = OnOpen(this,param_1,param_2);
  return lVar1;
}


// ---- OnReflectorDestroyed @ 1001682c

void __thiscall COleControl::OnReflectorDestroyed(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x1001682c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnReflectorDestroyed(this);
  return;
}


// ---- SetInitialDataFormats @ 10016832

void __thiscall COleControl::SetInitialDataFormats(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x10016832. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetInitialDataFormats(this);
  return;
}


// ---- CreateControlWindow @ 10016838

int __thiscall
COleControl::CreateControlWindow(COleControl *this,HWND__ *param_1,CRect *param_2,tagRECT *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10016838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CreateControlWindow(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- ClientToParent @ 1001683e

void __thiscall COleControl::ClientToParent(COleControl *this,tagRECT *param_1,tagPOINT *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x1001683e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ClientToParent(this,param_1,param_2);
  return;
}


// ---- ParentToClient @ 10016844

uint __thiscall
COleControl::ParentToClient(COleControl *this,tagRECT *param_1,tagPOINT *param_2,int param_3)

{
  uint uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10016844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = ParentToClient(this,param_1,param_2,param_3);
  return uVar1;
}


// ---- GetClientOffset @ 1001684a

void __thiscall COleControl::GetClientOffset(COleControl *this,long *param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x1001684a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetClientOffset(this,param_1,param_2);
  return;
}


// ---- GetWindowlessDropTarget @ 10016850

IDropTarget * __thiscall COleControl::GetWindowlessDropTarget(COleControl *this)

{
  IDropTarget *pIVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10016850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = GetWindowlessDropTarget(this);
  return pIVar1;
}


// ---- OnWindowlessMessage @ 10016856

int __thiscall
COleControl::OnWindowlessMessage
          (COleControl *this,uint param_1,uint param_2,long param_3,long *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10016856. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnWindowlessMessage(this,param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- OnInactiveMouseMove @ 1001685c

void __thiscall
COleControl::OnInactiveMouseMove
          (COleControl *this,tagRECT *param_1,long param_2,long param_3,ulong param_4)

{
                    /* WARNING: Could not recover jumptable at 0x1001685c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnInactiveMouseMove(this,param_1,param_2,param_3,param_4);
  return;
}


// ---- OnInactiveSetCursor @ 10016862

int __thiscall
COleControl::OnInactiveSetCursor
          (COleControl *this,tagRECT *param_1,long param_2,long param_3,ulong param_4,int param_5)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10016862. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnInactiveSetCursor(this,param_1,param_2,param_3,param_4,param_5);
  return iVar1;
}


// ---- GetActivationPolicy @ 10016868

ulong __thiscall COleControl::GetActivationPolicy(COleControl *this)

{
  ulong uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10016868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = GetActivationPolicy(this);
  return uVar1;
}


// ---- GetControlFlags @ 1001686e

ulong __thiscall COleControl::GetControlFlags(COleControl *this)

{
  ulong uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1001686e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = GetControlFlags(this);
  return uVar1;
}


// ---- ReparentControlWindow @ 10016874

void __thiscall
COleControl::ReparentControlWindow(COleControl *this,HWND__ *param_1,HWND__ *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10016874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReparentControlWindow(this,param_1,param_2);
  return;
}


// ---- IsSubclassedControl @ 1001687a

int __thiscall COleControl::IsSubclassedControl(COleControl *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1001687a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = IsSubclassedControl(this);
  return iVar1;
}


// ---- OnGetPredefinedValue @ 10016880

int __thiscall
COleControl::OnGetPredefinedValue(COleControl *this,long param_1,ulong param_2,tagVARIANT *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10016880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnGetPredefinedValue(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- OnGetPredefinedStrings @ 10016886

int __thiscall
COleControl::OnGetPredefinedStrings
          (COleControl *this,long param_1,CStringArray *param_2,CDWordArray *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10016886. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnGetPredefinedStrings(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- OnMapPropertyToPage @ 1001688c

int __thiscall
COleControl::OnMapPropertyToPage(COleControl *this,long param_1,_GUID *param_2,int *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1001688c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnMapPropertyToPage(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- OnGetDisplayString @ 10016892

int __thiscall COleControl::OnGetDisplayString(COleControl *this,long param_1,CString *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10016892. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnGetDisplayString(this,param_1,param_2);
  return iVar1;
}


// ---- OnProperties @ 10016898

int __thiscall
COleControl::OnProperties(COleControl *this,tagMSG *param_1,HWND__ *param_2,tagRECT *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10016898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnProperties(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- OnEdit @ 1001689e

int __thiscall
COleControl::OnEdit(COleControl *this,tagMSG *param_1,HWND__ *param_2,tagRECT *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1001689e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnEdit(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- OnDoVerb @ 100168a4

int __thiscall
COleControl::OnDoVerb
          (COleControl *this,long param_1,tagMSG *param_2,HWND__ *param_3,tagRECT *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100168a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnDoVerb(this,param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- OnEnumVerbs @ 100168aa

int __thiscall COleControl::OnEnumVerbs(COleControl *this,IEnumOLEVERB **param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100168aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnEnumVerbs(this,param_1);
  return iVar1;
}


// ---- OnSetData @ 100168b0

int __thiscall
COleControl::OnSetData(COleControl *this,tagFORMATETC *param_1,tagSTGMEDIUM *param_2,int param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100168b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnSetData(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- OnRenderData @ 100168b6

int __thiscall
COleControl::OnRenderData(COleControl *this,tagFORMATETC *param_1,tagSTGMEDIUM *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100168b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnRenderData(this,param_1,param_2);
  return iVar1;
}


// ---- OnRenderFileData @ 100168bc

int __thiscall COleControl::OnRenderFileData(COleControl *this,tagFORMATETC *param_1,CFile *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100168bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnRenderFileData(this,param_1,param_2);
  return iVar1;
}


// ---- OnRenderGlobalData @ 100168c2

int __thiscall
COleControl::OnRenderGlobalData(COleControl *this,tagFORMATETC *param_1,void **param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100168c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnRenderGlobalData(this,param_1,param_2);
  return iVar1;
}


// ---- OnGetNaturalExtent @ 100168c8

int __thiscall
COleControl::OnGetNaturalExtent
          (COleControl *this,ulong param_1,long param_2,tagDVTARGETDEVICE *param_3,HDC__ *param_4,
          tagExtentInfo *param_5,tagSIZE *param_6)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100168c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnGetNaturalExtent(this,param_1,param_2,param_3,param_4,param_5,param_6);
  return iVar1;
}


// ---- OnQueryHitRect @ 100168ce

int __thiscall
COleControl::OnQueryHitRect
          (COleControl *this,ulong param_1,tagRECT *param_2,tagRECT *param_3,long param_4,
          ulong *param_5)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100168ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnQueryHitRect(this,param_1,param_2,param_3,param_4,param_5);
  return iVar1;
}


// ---- OnQueryHitPoint @ 100168d4

int __thiscall
COleControl::OnQueryHitPoint
          (COleControl *this,ulong param_1,tagRECT *param_2,tagPOINT param_3,long param_4,
          ulong *param_5)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100168d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnQueryHitPoint(this,param_1,param_2,param_3,param_4,param_5);
  return iVar1;
}


// ---- OnGetViewStatus @ 100168da

ulong __thiscall COleControl::OnGetViewStatus(COleControl *this)

{
  ulong uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100168da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = OnGetViewStatus(this);
  return uVar1;
}


// ---- OnGetViewRect @ 100168e0

int __thiscall COleControl::OnGetViewRect(COleControl *this,ulong param_1,_RECTL *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100168e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnGetViewRect(this,param_1,param_2);
  return iVar1;
}


// ---- OnGetViewExtent @ 100168e6

int __thiscall
COleControl::OnGetViewExtent
          (COleControl *this,ulong param_1,long param_2,tagDVTARGETDEVICE *param_3,tagSIZE *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100168e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnGetViewExtent(this,param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- OnGetColorSet @ 100168ec

int __thiscall
COleControl::OnGetColorSet
          (COleControl *this,tagDVTARGETDEVICE *param_1,HDC__ *param_2,tagLOGPALETTE **param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100168ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnGetColorSet(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- OnHideToolBars @ 100168f2

void __thiscall COleControl::OnHideToolBars(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x100168f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnHideToolBars(this);
  return;
}


// ---- OnShowToolBars @ 100168f8

void __thiscall COleControl::OnShowToolBars(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x100168f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnShowToolBars(this);
  return;
}


// ---- OnGetInPlaceMenu @ 100168fe

HMENU__ * __thiscall COleControl::OnGetInPlaceMenu(COleControl *this)

{
  HMENU__ *pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100168fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = OnGetInPlaceMenu(this);
  return pHVar1;
}


// ---- OnFreezeEvents @ 10016904

void __thiscall COleControl::OnFreezeEvents(COleControl *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10016904. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnFreezeEvents(this,param_1);
  return;
}


// ---- OnAmbientPropertyChange @ 1001690a

void __thiscall COleControl::OnAmbientPropertyChange(COleControl *this,long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x1001690a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnAmbientPropertyChange(this,param_1);
  return;
}


// ---- OnMnemonic @ 10016910

void __thiscall COleControl::OnMnemonic(COleControl *this,tagMSG *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10016910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnMnemonic(this,param_1);
  return;
}


// ---- OnGetControlInfo @ 10016916

void __thiscall COleControl::OnGetControlInfo(COleControl *this,tagCONTROLINFO *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10016916. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnGetControlInfo(this,param_1);
  return;
}


// ---- OnForeColorChanged @ 1001691c

void __thiscall COleControl::OnForeColorChanged(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x1001691c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnForeColorChanged(this);
  return;
}


// ---- OnFontChanged @ 10016922

void __thiscall COleControl::OnFontChanged(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x10016922. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnFontChanged(this);
  return;
}


// ---- OnTextChanged @ 10016928

void __thiscall COleControl::OnTextChanged(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x10016928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnTextChanged(this);
  return;
}


// ---- OnEnabledChanged @ 1001692e

void __thiscall COleControl::OnEnabledChanged(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x1001692e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnEnabledChanged(this);
  return;
}


// ---- OnBorderStyleChanged @ 10016934

void __thiscall COleControl::OnBorderStyleChanged(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x10016934. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnBorderStyleChanged(this);
  return;
}


// ---- OnBackColorChanged @ 1001693a

void __thiscall COleControl::OnBackColorChanged(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x1001693a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnBackColorChanged(this);
  return;
}


// ---- OnAppearanceChanged @ 10016940

void __thiscall COleControl::OnAppearanceChanged(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x10016940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnAppearanceChanged(this);
  return;
}


// ---- OnKeyPressEvent @ 10016946

void __thiscall COleControl::OnKeyPressEvent(COleControl *this,ushort param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10016946. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnKeyPressEvent(this,param_1);
  return;
}


// ---- OnKeyUpEvent @ 1001694c

void __thiscall COleControl::OnKeyUpEvent(COleControl *this,ushort param_1,ushort param_2)

{
                    /* WARNING: Could not recover jumptable at 0x1001694c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnKeyUpEvent(this,param_1,param_2);
  return;
}


// ---- OnKeyDownEvent @ 10016952

void __thiscall COleControl::OnKeyDownEvent(COleControl *this,ushort param_1,ushort param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10016952. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnKeyDownEvent(this,param_1,param_2);
  return;
}


// ---- OnClick @ 10016958

void __thiscall COleControl::OnClick(COleControl *this,ushort param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10016958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnClick(this,param_1);
  return;
}


// ---- OnEventAdvise @ 1001695e

void __thiscall COleControl::OnEventAdvise(COleControl *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x1001695e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnEventAdvise(this,param_1);
  return;
}


// ---- OnSetObjectRects @ 10016964

int __thiscall COleControl::OnSetObjectRects(COleControl *this,tagRECT *param_1,tagRECT *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10016964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnSetObjectRects(this,param_1,param_2);
  return iVar1;
}


// ---- OnClose @ 1001696a

void __thiscall COleControl::OnClose(COleControl *this,ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x1001696a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnClose(this,param_1);
  return;
}


// ---- DisplayError @ 10016970

void __thiscall
COleControl::DisplayError
          (COleControl *this,long param_1,char *param_2,char *param_3,char *param_4,uint param_5)

{
                    /* WARNING: Could not recover jumptable at 0x10016970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DisplayError(this,param_1,param_2,param_3,param_4,param_5);
  return;
}


// ---- GetMessageString @ 10016976

void __thiscall COleControl::GetMessageString(COleControl *this,uint param_1,CString *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10016976. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetMessageString(this,param_1,param_2);
  return;
}


// ---- OnDrawMetafile @ 1001697c

void __thiscall COleControl::OnDrawMetafile(COleControl *this,CDC *param_1,CRect *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x1001697c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnDrawMetafile(this,param_1,param_2);
  return;
}


// ---- GetClientRect @ 10016982

void __thiscall COleControl::GetClientRect(COleControl *this,tagRECT *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10016982. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetClientRect(this,param_1);
  return;
}


// ---- DefWindowProcA @ 10016988

long __thiscall
COleControl::DefWindowProcA(COleControl *this,uint param_1,uint param_2,long param_3)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10016988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = DefWindowProcA(this,param_1,param_2,param_3);
  return lVar1;
}


// ---- WindowProc @ 1001698e

long __thiscall COleControl::WindowProc(COleControl *this,uint param_1,uint param_2,long param_3)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1001698e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = WindowProc(this,param_1,param_2,param_3);
  return lVar1;
}


// ---- GetConnectionHook @ 10016994

IConnectionPoint * __thiscall COleControl::GetConnectionHook(COleControl *this,_GUID *param_1)

{
  IConnectionPoint *pIVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10016994. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = GetConnectionHook(this,param_1);
  return pIVar1;
}


// ---- GetExtraConnectionPoints @ 1001699a

int __thiscall COleControl::GetExtraConnectionPoints(COleControl *this,CPtrArray *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1001699a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetExtraConnectionPoints(this,param_1);
  return iVar1;
}


// ---- GetInterfaceHook @ 100169a0

IUnknown * __thiscall COleControl::GetInterfaceHook(COleControl *this,void *param_1)

{
  IUnknown *pIVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100169a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = GetInterfaceHook(this,param_1);
  return pIVar1;
}


// ---- OnCreateAggregates @ 100169a6

int __thiscall COleControl::OnCreateAggregates(COleControl *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100169a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCreateAggregates(this);
  return iVar1;
}


// ---- GetInterfaceMap @ 100169ac

AFX_INTERFACEMAP * __thiscall COleControl::GetInterfaceMap(COleControl *this)

{
  AFX_INTERFACEMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100169ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetInterfaceMap(this);
  return pAVar1;
}


// ---- GetConnectionMap @ 100169b2

AFX_CONNECTIONMAP * __thiscall COleControl::GetConnectionMap(COleControl *this)

{
  AFX_CONNECTIONMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100169b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetConnectionMap(this);
  return pAVar1;
}


// ---- GetDispatchIID @ 100169b8

int __thiscall COleControl::GetDispatchIID(COleControl *this,_GUID *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100169b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetDispatchIID(this,param_1);
  return iVar1;
}


// ---- IsInvokeAllowed @ 100169be

int __thiscall COleControl::IsInvokeAllowed(COleControl *this,long param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100169be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = IsInvokeAllowed(this,param_1);
  return iVar1;
}


// ---- OnFinalRelease @ 100169c4

void __thiscall COleControl::OnFinalRelease(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x100169c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnFinalRelease(this);
  return;
}


// ---- Serialize @ 100169ca

void __thiscall COleControl::Serialize(COleControl *this,CArchive *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x100169ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Serialize(this,param_1);
  return;
}


// ---- ~COleControl @ 100169d0

void __thiscall COleControl::~COleControl(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x100169d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~COleControl(this);
  return;
}


// ---- SetInitialSize @ 100169d6

void __thiscall COleControl::SetInitialSize(COleControl *this,int param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x100169d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetInitialSize(this,param_1,param_2);
  return;
}


// ---- InitializeIIDs @ 100169dc

void __thiscall COleControl::InitializeIIDs(COleControl *this,_GUID *param_1,_GUID *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x100169dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitializeIIDs(this,param_1,param_2);
  return;
}


// ---- COleControl @ 100169e2

void __thiscall COleControl::COleControl(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x100169e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  COleControl(this);
  return;
}


// ---- ~CPictureHolder @ 100169e8

void __thiscall CPictureHolder::~CPictureHolder(CPictureHolder *this)

{
                    /* WARNING: Could not recover jumptable at 0x100169e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CPictureHolder(this);
  return;
}


// ---- Render @ 100169ee

void __thiscall
CPictureHolder::Render(CPictureHolder *this,CDC *param_1,CRect *param_2,CRect *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x100169ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Render(this,param_1,param_2,param_3);
  return;
}


// ---- CreateFromBitmap @ 100169f4

int __thiscall
CPictureHolder::CreateFromBitmap
          (CPictureHolder *this,HBITMAP__ *param_1,HPALETTE__ *param_2,int param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100169f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CreateFromBitmap(this,param_1,param_2,param_3);
  return iVar1;
}


// ---- CPictureHolder @ 100169fa

void __thiscall CPictureHolder::CPictureHolder(CPictureHolder *this)

{
                    /* WARNING: Could not recover jumptable at 0x100169fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CPictureHolder(this);
  return;
}


// ---- DoPropExchange @ 10016a00

void __thiscall COleControl::DoPropExchange(COleControl *this,CPropExchange *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10016a00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DoPropExchange(this,param_1);
  return;
}


// ---- OnResetState @ 10016a06

void __thiscall COleControl::OnResetState(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x10016a06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnResetState(this);
  return;
}


// ---- PostModalDialog @ 10016a0c

void __thiscall COleControl::PostModalDialog(COleControl *this,HWND__ *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10016a0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PostModalDialog(this,param_1);
  return;
}


// ---- PreModalDialog @ 10016a12

void __thiscall COleControl::PreModalDialog(COleControl *this,HWND__ *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10016a12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PreModalDialog(this,param_1);
  return;
}


// ---- AmbientUserMode @ 10016a18

int __thiscall COleControl::AmbientUserMode(COleControl *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10016a18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AmbientUserMode(this);
  return iVar1;
}


// ---- RecreateControlWindow @ 10016a1e

void __thiscall COleControl::RecreateControlWindow(COleControl *this)

{
                    /* WARNING: Could not recover jumptable at 0x10016a1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RecreateControlWindow(this);
  return;
}


// ---- OnCreate @ 10016a24

int __thiscall COleControl::OnCreate(COleControl *this,tagCREATESTRUCTA *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10016a24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCreate(this,param_1);
  return iVar1;
}


// ---- FireEvent @ 10016a2a

void __thiscall COleControl::FireEvent(COleControl *this,long param_1,uchar *param_2,...)

{
                    /* WARNING: Could not recover jumptable at 0x10016a2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FireEvent(this,param_1,param_2);
  return;
}


// ---- operator+ @ 10016a30

void operator+(CString *param_1,char *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10016a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  operator+(param_1,param_2);
  return;
}


// ---- CString @ 10016a36

void __thiscall CString::CString(CString *this,ushort *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10016a36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CString(this,param_1);
  return;
}


// ---- GetClientSite @ 10016a3c

IOleClientSite * __thiscall COleControl::GetClientSite(COleControl *this)

{
  IOleClientSite *pIVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10016a3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = GetClientSite(this);
  return pIVar1;
}


// ---- GetBuffer @ 10016a42

char * __thiscall CString::GetBuffer(CString *this,int param_1)

{
  char *pcVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10016a42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = GetBuffer(this,param_1);
  return pcVar1;
}


// ---- operator+ @ 10016a48

void operator+(CString *param_1,CString *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10016a48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  operator+(param_1,param_2);
  return;
}


// ---- operator+= @ 10016a4e

CString * __thiscall CString::operator+=(CString *this,CString *param_1)

{
  CString *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10016a4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = operator+=(this,param_1);
  return pCVar1;
}


// ---- SetSysString @ 10016a54

ushort * __thiscall CString::SetSysString(CString *this,ushort **param_1)

{
  ushort *puVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10016a54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar1 = SetSysString(this,param_1);
  return puVar1;
}


// ---- GetRuntimeClass @ 10016a5a

CRuntimeClass * __thiscall CBitmap::GetRuntimeClass(CBitmap *this)

{
  CRuntimeClass *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10016a5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetRuntimeClass(this);
  return pCVar1;
}


// ---- GetRuntimeClass @ 10016a60

CRuntimeClass * __thiscall CGdiObject::GetRuntimeClass(CGdiObject *this)

{
  CRuntimeClass *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10016a60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetRuntimeClass(this);
  return pCVar1;
}


// ---- DeleteObject @ 10016a66

int __thiscall CGdiObject::DeleteObject(CGdiObject *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10016a66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = DeleteObject(this);
  return iVar1;
}


// ---- FromHandle @ 10016a6c

CWnd * CWnd::FromHandle(HWND__ *param_1)

{
  CWnd *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10016a6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = FromHandle(param_1);
  return pCVar1;
}


// ---- Attach @ 10016a72

int __thiscall CGdiObject::Attach(CGdiObject *this,void *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10016a72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Attach(this,param_1);
  return iVar1;
}


// ---- AfxFindResourceHandle @ 10016a78

HINSTANCE__ * AfxFindResourceHandle(char *param_1,char *param_2)

{
  HINSTANCE__ *pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10016a78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = AfxFindResourceHandle(param_1,param_2);
  return pHVar1;
}


// ---- AllocSysString @ 10016a7e

ushort * __thiscall CString::AllocSysString(CString *this)

{
  ushort *puVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10016a7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar1 = AllocSysString(this);
  return puVar1;
}


// ---- TrimRight @ 10016a84

void __thiscall CString::TrimRight(CString *this)

{
                    /* WARNING: Could not recover jumptable at 0x10016a84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TrimRight(this);
  return;
}


// ---- TrimLeft @ 10016a8a

void __thiscall CString::TrimLeft(CString *this)

{
                    /* WARNING: Could not recover jumptable at 0x10016a8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TrimLeft(this);
  return;
}


// ---- MakeUpper @ 10016a90

void __thiscall CString::MakeUpper(CString *this)

{
                    /* WARNING: Could not recover jumptable at 0x10016a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MakeUpper(this);
  return;
}


// ---- operator= @ 10016a96

COleVariant * __thiscall COleVariant::operator=(COleVariant *this,COleVariant *param_1)

{
  COleVariant *pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10016a96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = operator=(this,param_1);
  return pCVar1;
}


// ---- GetFieldValue @ 10016a9c

void __thiscall CDaoRecordset::GetFieldValue(CDaoRecordset *this,char *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10016a9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetFieldValue(this,param_1);
  return;
}


// ---- Close @ 10016aa2

void __thiscall CDaoRecordset::Close(CDaoRecordset *this)

{
                    /* WARNING: Could not recover jumptable at 0x10016aa2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Close(this);
  return;
}


// ---- FindFirst @ 10016aa8

int __thiscall CDaoRecordset::FindFirst(CDaoRecordset *this,char *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10016aa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = FindFirst(this,param_1);
  return iVar1;
}


// ---- operator+ @ 10016aae

void operator+(char *param_1,CString *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10016aae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  operator+(param_1,param_2);
  return;
}


// ---- ~CDaoRecordset @ 10016ab4

void __thiscall CDaoRecordset::~CDaoRecordset(CDaoRecordset *this)

{
                    /* WARNING: Could not recover jumptable at 0x10016ab4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~CDaoRecordset(this);
  return;
}


// ---- Delete @ 10016aba

void __thiscall CException::Delete(CException *this)

{
                    /* WARNING: Could not recover jumptable at 0x10016aba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Delete(this);
  return;
}


// ---- Open @ 10016ac0

void __thiscall CDaoRecordset::Open(CDaoRecordset *this,int param_1,char *param_2,int param_3)

{
                    /* WARNING: Could not recover jumptable at 0x10016ac0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Open(this,param_1,param_2,param_3);
  return;
}


// ---- CDaoRecordset @ 10016ac6

void __thiscall CDaoRecordset::CDaoRecordset(CDaoRecordset *this,CDaoDatabase *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10016ac6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CDaoRecordset(this,param_1);
  return;
}


// ---- CDaoDatabase @ 10016acc

void __thiscall CDaoDatabase::CDaoDatabase(CDaoDatabase *this,CDaoWorkspace *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10016acc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CDaoDatabase(this,param_1);
  return;
}


// ---- CDaoWorkspace @ 10016ad2

void __thiscall CDaoWorkspace::CDaoWorkspace(CDaoWorkspace *this)

{
                    /* WARNING: Could not recover jumptable at 0x10016ad2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CDaoWorkspace(this);
  return;
}


// ---- AfxDaoCheck @ 10016ad8

void AfxDaoCheck(long param_1,char *param_2,char *param_3,int param_4,int param_5,int param_6)

{
                    /* WARNING: Could not recover jumptable at 0x10016ad8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AfxDaoCheck(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}


// ---- AfxDaoGetEngine @ 10016ade

_DAODBEngine * AfxDaoGetEngine(void)

{
  _DAODBEngine *p_Var1;
  
                    /* WARNING: Could not recover jumptable at 0x10016ade. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  p_Var1 = AfxDaoGetEngine();
  return p_Var1;
}


// ---- AfxDaoInit @ 10016ae4

void AfxDaoInit(void)

{
                    /* WARNING: Could not recover jumptable at 0x10016ae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AfxDaoInit();
  return;
}


// ---- COleVariant @ 10016aea

void __thiscall COleVariant::COleVariant(COleVariant *this,char *param_1,ushort param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10016aea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  COleVariant(this,param_1,param_2);
  return;
}


// ---- AfxDaoTerm @ 10016af0

void AfxDaoTerm(void)

{
                    /* WARNING: Could not recover jumptable at 0x10016af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AfxDaoTerm();
  return;
}


// ---- Default @ 10016af6

long __thiscall CWnd::Default(CWnd *this)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10016af6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = Default(this);
  return lVar1;
}


// ---- AfxVariantInit @ 10016afc

void AfxVariantInit(tagVARIANT *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10016afc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AfxVariantInit(param_1);
  return;
}


// ---- AfxOleRegisterPropertyPageClass @ 10016b02

int AfxOleRegisterPropertyPageClass(HINSTANCE__ *param_1,_GUID *param_2,uint param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10016b02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AfxOleRegisterPropertyPageClass(param_1,param_2,param_3);
  return iVar1;
}


// ---- OnEditProperty @ 10016b08

int __thiscall COlePropertyPage::OnEditProperty(COlePropertyPage *this,long param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10016b08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnEditProperty(this,param_1);
  return iVar1;
}


// ---- OnHelp @ 10016b0e

int __thiscall COlePropertyPage::OnHelp(COlePropertyPage *this,char *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10016b0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnHelp(this,param_1);
  return iVar1;
}


// ---- OnObjectsChanged @ 10016b14

void __thiscall COlePropertyPage::OnObjectsChanged(COlePropertyPage *this)

{
                    /* WARNING: Could not recover jumptable at 0x10016b14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnObjectsChanged(this);
  return;
}


// ---- OnSetPageSite @ 10016b1a

void __thiscall COlePropertyPage::OnSetPageSite(COlePropertyPage *this)

{
                    /* WARNING: Could not recover jumptable at 0x10016b1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnSetPageSite(this);
  return;
}


// ---- OnInitDialog @ 10016b20

int __thiscall COlePropertyPage::OnInitDialog(COlePropertyPage *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10016b20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnInitDialog(this);
  return iVar1;
}


// ---- WindowProc @ 10016b26

long __thiscall
COlePropertyPage::WindowProc(COlePropertyPage *this,uint param_1,uint param_2,long param_3)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10016b26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = WindowProc(this,param_1,param_2,param_3);
  return lVar1;
}


// ---- PreTranslateMessage @ 10016b2c

int __thiscall COlePropertyPage::PreTranslateMessage(COlePropertyPage *this,tagMSG *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10016b2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = PreTranslateMessage(this,param_1);
  return iVar1;
}


// ---- OnCommand @ 10016b32

int __thiscall COlePropertyPage::OnCommand(COlePropertyPage *this,uint param_1,long param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10016b32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OnCommand(this,param_1,param_2);
  return iVar1;
}


// ---- GetInterfaceMap @ 10016b38

AFX_INTERFACEMAP * __thiscall COlePropertyPage::GetInterfaceMap(COlePropertyPage *this)

{
  AFX_INTERFACEMAP *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10016b38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = GetInterfaceMap(this);
  return pAVar1;
}


// ---- OnFinalRelease @ 10016b3e

void __thiscall COlePropertyPage::OnFinalRelease(COlePropertyPage *this)

{
                    /* WARNING: Could not recover jumptable at 0x10016b3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OnFinalRelease(this);
  return;
}


// ---- COlePropertyPage @ 10016b44

void __thiscall COlePropertyPage::COlePropertyPage(COlePropertyPage *this,uint param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10016b44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  COlePropertyPage(this,param_1,param_2);
  return;
}


// ---- ~COlePropertyPage @ 10016b4a

void __thiscall COlePropertyPage::~COlePropertyPage(COlePropertyPage *this)

{
                    /* WARNING: Could not recover jumptable at 0x10016b4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~COlePropertyPage(this);
  return;
}


// ---- DDP_PostProcessing @ 10016b50

void DDP_PostProcessing(CDataExchange *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10016b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DDP_PostProcessing(param_1);
  return;
}


// ---- ReleaseBuffer @ 10016b56

void __thiscall CString::ReleaseBuffer(CString *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10016b56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseBuffer(this,param_1);
  return;
}


// ---- Empty @ 10016b5c

void __thiscall CString::Empty(CString *this)

{
                    /* WARNING: Could not recover jumptable at 0x10016b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Empty(this);
  return;
}


// ---- SetAtGrow @ 10016b62

void __thiscall CStringArray::SetAtGrow(CStringArray *this,int param_1,CString *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10016b62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetAtGrow(this,param_1,param_2);
  return;
}


// ---- FUN_10016b72 @ 10016b72

undefined4 * FUN_10016b72(void)

{
  AFX_MODULE_STATE::AFX_MODULE_STATE((AFX_MODULE_STATE *)&DAT_100226b0,1,FUN_10016bd0,0x600);
  DAT_100226b0 = &PTR_FUN_1001a088;
  return &DAT_100226b0;
}


// ---- FUN_10016b9a @ 10016b9a

AFX_MODULE_STATE * __thiscall FUN_10016b9a(void *this,byte param_1)

{
  AFX_MODULE_STATE::~AFX_MODULE_STATE(this);
  if ((param_1 & 1) != 0) {
    CNoTrackObject::operator_delete(this);
  }
  return this;
}


// ---- ~AFX_MODULE_STATE @ 10016bb5

void __thiscall AFX_MODULE_STATE::~AFX_MODULE_STATE(AFX_MODULE_STATE *this)

{
                    /* WARNING: Could not recover jumptable at 0x10016fc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~AFX_MODULE_STATE(this);
  return;
}


// ---- FUN_10016bba @ 10016bba

void FUN_10016bba(void)

{
  FUN_10016dde((_onexit_t)&LAB_10016bc6);
  return;
}


// ---- FUN_10016bd0 @ 10016bd0

/* WARNING: Function: _EH_prolog replaced with injection: EH_prolog */

void FUN_10016bd0(HWND__ *param_1,uint param_2,uint param_3,long param_4)

{
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10017e30;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2
            ((AFX_MAINTAIN_STATE2 *)&local_18,(AFX_MODULE_STATE *)&DAT_100226b0);
  local_8 = 0;
  AfxWndProc(param_1,param_2,param_3,param_4);
  *(undefined4 *)(local_14 + 4) = local_18;
  ExceptionList = local_10;
  return;
}


// ---- FUN_10016c15 @ 10016c15

undefined4 * FUN_10016c15(void)

{
  return &DAT_100226b0;
}


// ---- FUN_10016c1b @ 10016c1b

int FUN_10016c1b(HINSTANCE__ *param_1,int param_2)

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
      pAVar5 = AfxSetModuleState((AFX_MODULE_STATE *)&DAT_100226b0);
      p_Var3 = AfxGetThreadState();
      *(AFX_MODULE_STATE **)(p_Var3 + 8) = pAVar5;
      pAVar5 = AfxGetModuleState();
      if (*(int **)(pAVar5 + 4) != (int *)0x0) {
        (**(code **)(**(int **)(pAVar5 + 4) + 0x70))();
      }
      AfxLockTempMaps();
      AfxUnlockTempMaps(-1);
      AfxWinTerm();
      AfxTermExtensionModule((AFX_EXTENSION_MODULE *)&DAT_10023740,1);
    }
    else if (param_2 == 3) {
      AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2
                ((AFX_MAINTAIN_STATE2 *)&local_c,(AFX_MODULE_STATE *)&DAT_100226b0);
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
  iVar4 = AfxWinInit(param_1,(HINSTANCE__ *)0x0,"",0);
  if (iVar4 != 0) {
    pAVar5 = AfxGetModuleState();
    piVar2 = *(int **)(pAVar5 + 4);
    if ((piVar2 == (int *)0x0) || (iVar4 = (**(code **)(*piVar2 + 0x58))(), iVar4 != 0)) {
      *(undefined4 *)(p_Var3 + 8) = uVar1;
      AfxInitExtensionModule((AFX_EXTENSION_MODULE *)&DAT_10023740,param_1);
      this = operator_new(0x40);
      if (this != (CDynLinkLibrary *)0x0) {
        CDynLinkLibrary::CDynLinkLibrary(this,(AFX_EXTENSION_MODULE *)&DAT_10023740,0);
      }
      param_2 = 1;
      goto LAB_10016ca7;
    }
    (**(code **)(*piVar2 + 0x70))();
  }
  AfxWinTerm();
LAB_10016ca7:
  *(undefined4 *)(p_Var3 + 8) = uVar1;
  p_Var3 = AfxGetThreadState();
  AfxSetModuleState(*(AFX_MODULE_STATE **)(p_Var3 + 8));
  return param_2;
}


// ---- FUN_10016d42 @ 10016d42

undefined4 FUN_10016d42(undefined4 param_1,int param_2)

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
    pAVar2 = AfxSetModuleState((AFX_MODULE_STATE *)&DAT_100226b0);
    *(AFX_MODULE_STATE **)(p_Var1 + 8) = pAVar2;
  }
  else if (param_2 == 0) {
    p_Var1 = AfxGetThreadState();
    AfxSetModuleState(*(AFX_MODULE_STATE **)(p_Var1 + 8));
  }
  return 1;
}


// ---- sqrt @ 10016da0

double __cdecl sqrt(double _X)

{
  double dVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10016da0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar1 = sqrt(_X);
  return dVar1;
}


// ---- fabs @ 10016da6

double __cdecl fabs(double _X)

{
  double dVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10016da6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar1 = fabs(_X);
  return dVar1;
}


// ---- memset @ 10016dac

void * __cdecl memset(void *_Dst,int _Val,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10016dac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memset(_Dst,_Val,_Size);
  return pvVar1;
}


// ---- FUN_10016db2 @ 10016db2

void __cdecl FUN_10016db2(_onexit_t param_1)

{
  if (DAT_10023768 == -1) {
    _onexit(param_1);
    return;
  }
  __dllonexit(param_1,&DAT_10023768,&DAT_10023764);
  return;
}


// ---- FUN_10016dde @ 10016dde

int __cdecl FUN_10016dde(_onexit_t param_1)

{
  int iVar1;
  
  iVar1 = FUN_10016db2(param_1);
  return (iVar1 != 0) - 1;
}


// ---- ftol @ 10016df0

void __cdecl ftol(void)

{
                    /* WARNING: Could not recover jumptable at 0x10016df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ftol();
  return;
}


// ---- abs @ 10016df6

int __cdecl abs(int _X)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10016df6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = abs(_X);
  return iVar1;
}


// ---- strcpy @ 10016e18

char * __cdecl strcpy(char *_Dest,char *_Source)

{
  char *pcVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10016e18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = strcpy(_Dest,_Source);
  return pcVar1;
}


// ---- FUN_10016e20 @ 10016e20

/* WARNING: Unable to track spacebase fully for stack */

void FUN_10016e20(void)

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


// ---- strlen @ 10016e50

size_t __cdecl strlen(char *_Str)

{
  size_t sVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10016e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  sVar1 = strlen(_Str);
  return sVar1;
}


// ---- memcpy @ 10016e56

void * __cdecl memcpy(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10016e56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memcpy(_Dst,_Src,_Size);
  return pvVar1;
}


// ---- FUN_10016e5c @ 10016e5c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10016e5c(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *_Memory;
  undefined4 *puVar2;
  
  if (param_2 == 0) {
    if (0 < DAT_1002375c) {
      DAT_1002375c = DAT_1002375c + -1;
      goto LAB_10016e72;
    }
LAB_10016e9a:
    uVar1 = 0;
  }
  else {
LAB_10016e72:
    _DAT_10023760 = *(undefined4 *)_adjust_fdiv_exref;
    if (param_2 == 1) {
      DAT_10023768 = malloc(0x80);
      if (DAT_10023768 == (undefined4 *)0x0) goto LAB_10016e9a;
      *DAT_10023768 = 0;
      DAT_10023764 = DAT_10023768;
      initterm(&DAT_1001d000,&DAT_1001d7d0);
      DAT_1002375c = DAT_1002375c + 1;
    }
    else if ((param_2 == 0) &&
            (_Memory = DAT_10023768, puVar2 = DAT_10023764, DAT_10023768 != (undefined4 *)0x0)) {
      while (puVar2 = puVar2 + -1, _Memory <= puVar2) {
        if ((code *)*puVar2 != (code *)0x0) {
          (*(code *)*puVar2)();
          _Memory = DAT_10023768;
        }
      }
      free(_Memory);
      DAT_10023768 = (undefined4 *)0x0;
    }
    uVar1 = 1;
  }
  return uVar1;
}


// ---- entry @ 10016f07

int entry(HINSTANCE__ *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_2;
  iVar2 = DAT_1002375c;
  if (param_2 != 0) {
    if ((param_2 != 1) && (param_2 != 2)) goto LAB_10016f4f;
    if ((PTR_FUN_10021834 != (undefined *)0x0) &&
       (iVar2 = (*(code *)PTR_FUN_10021834)(param_1,param_2,param_3), iVar2 == 0)) {
      return 0;
    }
    iVar2 = FUN_10016e5c(param_1,param_2);
  }
  if (iVar2 == 0) {
    return 0;
  }
LAB_10016f4f:
  iVar2 = FUN_10016c1b(param_1,param_2);
  if (param_2 == 1) {
    if (iVar2 != 0) {
      return iVar2;
    }
    FUN_10016e5c(param_1,0);
  }
  if ((param_2 != 0) && (param_2 != 3)) {
    return iVar2;
  }
  iVar3 = FUN_10016e5c(param_1,param_2);
  param_2 = iVar2;
  if (iVar3 == 0) {
    param_2 = 0;
  }
  if (param_2 != 0) {
    if (PTR_FUN_10021834 != (undefined *)0x0) {
      iVar2 = (*(code *)PTR_FUN_10021834)(param_1,iVar1,param_3);
      return iVar2;
    }
    return param_2;
  }
  return 0;
}


// ---- _EH_prolog @ 10016fa4

/* WARNING: This is an inlined function */
/* WARNING: Function: _EH_prolog replaced with injection: EH_prolog */

void _EH_prolog(void)

{
  undefined1 auStack_c [12];
  
  ExceptionList = auStack_c;
                    /* WARNING: Could not recover jumptable at 0x10016fa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  return;
}


// ---- __dllonexit @ 10016faa

void __dllonexit(void)

{
                    /* WARNING: Could not recover jumptable at 0x10016faa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __dllonexit();
  return;
}


// ---- ~type_info @ 10016fb0

void __thiscall type_info::~type_info(type_info *this)

{
                    /* WARNING: Could not recover jumptable at 0x10016fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~type_info(this);
  return;
}


// ---- initterm @ 10016fb6

void __cdecl initterm(void)

{
                    /* WARNING: Could not recover jumptable at 0x10016fb6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  initterm();
  return;
}


// ---- AFX_MODULE_STATE @ 10016fbc

void __thiscall
AFX_MODULE_STATE::AFX_MODULE_STATE
          (AFX_MODULE_STATE *this,int param_1,_func_long_HWND___ptr_uint_uint_long *param_2,
          ulong param_3)

{
                    /* WARNING: Could not recover jumptable at 0x10016fbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AFX_MODULE_STATE(this,param_1,param_2,param_3);
  return;
}


// ---- operator_delete @ 10016fc2

void CNoTrackObject::operator_delete(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10016fc2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  operator_delete(param_1);
  return;
}


// ---- ~AFX_MODULE_STATE @ 10016fc8

void __thiscall AFX_MODULE_STATE::~AFX_MODULE_STATE(AFX_MODULE_STATE *this)

{
                    /* WARNING: Could not recover jumptable at 0x10016fc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~AFX_MODULE_STATE(this);
  return;
}


// ---- AfxWndProc @ 10016fce

long AfxWndProc(HWND__ *param_1,uint param_2,uint param_3,long param_4)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10016fce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = AfxWndProc(param_1,param_2,param_3,param_4);
  return lVar1;
}


// ---- AfxTermThread @ 10016fd4

void AfxTermThread(HINSTANCE__ *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10016fd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AfxTermThread(param_1);
  return;
}


// ---- AfxTermExtensionModule @ 10016fda

void AfxTermExtensionModule(AFX_EXTENSION_MODULE *param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10016fda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AfxTermExtensionModule(param_1,param_2);
  return;
}


// ---- AfxUnlockTempMaps @ 10016fe0

int AfxUnlockTempMaps(int param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10016fe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AfxUnlockTempMaps(param_1);
  return iVar1;
}


// ---- AfxLockTempMaps @ 10016fe6

void AfxLockTempMaps(void)

{
                    /* WARNING: Could not recover jumptable at 0x10016fe6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AfxLockTempMaps();
  return;
}


// ---- AfxSetModuleState @ 10016fec

AFX_MODULE_STATE * AfxSetModuleState(AFX_MODULE_STATE *param_1)

{
  AFX_MODULE_STATE *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10016fec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = AfxSetModuleState(param_1);
  return pAVar1;
}


// ---- CDynLinkLibrary @ 10016ff2

void __thiscall
CDynLinkLibrary::CDynLinkLibrary(CDynLinkLibrary *this,AFX_EXTENSION_MODULE *param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x10016ff2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CDynLinkLibrary(this,param_1,param_2);
  return;
}


// ---- AfxInitExtensionModule @ 10016ff8

int AfxInitExtensionModule(AFX_EXTENSION_MODULE *param_1,HINSTANCE__ *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10016ff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AfxInitExtensionModule(param_1,param_2);
  return iVar1;
}


// ---- AfxWinTerm @ 10016ffe

void AfxWinTerm(void)

{
                    /* WARNING: Could not recover jumptable at 0x10016ffe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AfxWinTerm();
  return;
}


// ---- AfxWinInit @ 10017004

int AfxWinInit(HINSTANCE__ *param_1,HINSTANCE__ *param_2,char *param_3,int param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10017004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = AfxWinInit(param_1,param_2,param_3,param_4);
  return iVar1;
}


// ---- AfxGetThreadState @ 1001700a

_AFX_THREAD_STATE * AfxGetThreadState(void)

{
  _AFX_THREAD_STATE *p_Var1;
  
                    /* WARNING: Could not recover jumptable at 0x1001700a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  p_Var1 = AfxGetThreadState();
  return p_Var1;
}


// ---- AfxCoreInitModule @ 10017010

void AfxCoreInitModule(void)

{
                    /* WARNING: Could not recover jumptable at 0x10017010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AfxCoreInitModule();
  return;
}


// ---- AfxDllGetClassObject @ 10017016

long AfxDllGetClassObject(_GUID *param_1,_GUID *param_2,void **param_3)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10017016. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = AfxDllGetClassObject(param_1,param_2,param_3);
  return lVar1;
}


// ---- AfxDllCanUnloadNow @ 1001701c

long AfxDllCanUnloadNow(void)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1001701c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = AfxDllCanUnloadNow();
  return lVar1;
}


// ---- FUN_10017030 @ 10017030

int __fastcall FUN_10017030(int param_1)

{
  return param_1 + 4;
}


// ---- DllGetClassObject @ 10017041

HRESULT DllGetClassObject(IID *rclsid,IID *riid,LPVOID *ppv)

{
  AFX_MODULE_STATE *pAVar1;
  long lVar2;
  undefined4 local_c;
  int local_8;
  
                    /* 0x17041  2  DllGetClassObject */
  pAVar1 = (AFX_MODULE_STATE *)FUN_10016c15();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)&local_c,pAVar1);
  lVar2 = AfxDllGetClassObject(rclsid,riid,ppv);
  *(undefined4 *)(local_8 + 4) = local_c;
  return lVar2;
}


// ---- DllCanUnloadNow @ 1001706f

HRESULT DllCanUnloadNow(void)

{
  AFX_MODULE_STATE *pAVar1;
  long lVar2;
  undefined4 local_c;
  int local_8;
  
                    /* 0x1706f  1  DllCanUnloadNow */
  pAVar1 = (AFX_MODULE_STATE *)FUN_10016c15();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2((AFX_MAINTAIN_STATE2 *)&local_c,pAVar1);
  lVar2 = AfxDllCanUnloadNow();
  *(undefined4 *)(local_8 + 4) = local_c;
  return lVar2;
}


// ---- Unwind@100170a0 @ 100170a0

void Unwind_100170a0(void)

{
  int unaff_EBP;
  
  CDialog::~CDialog(*(CDialog **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@100170a9 @ 100170a9

void Unwind_100170a9(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x10) + 100));
  return;
}


// ---- Unwind@100170c0 @ 100170c0

void Unwind_100170c0(void)

{
  int unaff_EBP;
  
  CDialog::~CDialog(*(CDialog **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@100170e0 @ 100170e0

void Unwind_100170e0(void)

{
  int unaff_EBP;
  
  CDialog::~CDialog(*(CDialog **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@100170e9 @ 100170e9

void Unwind_100170e9(void)

{
  int unaff_EBP;
  
  CProgressCtrl::~CProgressCtrl((CProgressCtrl *)(*(int *)(unaff_EBP + -0x10) + 0x68));
  return;
}


// ---- Unwind@10017100 @ 10017100

void Unwind_10017100(void)

{
  int unaff_EBP;
  
  CDialog::~CDialog(*(CDialog **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10017120 @ 10017120

void Unwind_10017120(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@10017129 @ 10017129

void Unwind_10017129(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x24));
  return;
}


// ---- Unwind@10017132 @ 10017132

void Unwind_10017132(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x34));
  return;
}


// ---- Unwind@1001713b @ 1001713b

void Unwind_1001713b(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x38) & 1) != 0) {
    CString::~CString(*(CString **)(unaff_EBP + 8));
  }
  return;
}


// ---- Unwind@1001715c @ 1001715c

void Unwind_1001715c(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 0xc));
  return;
}


// ---- Unwind@1001716f @ 1001716f

void Unwind_1001716f(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 0xc));
  return;
}


// ---- Unwind@10017178 @ 10017178

void Unwind_10017178(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x20));
  return;
}


// ---- Unwind@10017181 @ 10017181

void Unwind_10017181(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x3c));
  return;
}


// ---- Unwind@1001718a @ 1001718a

void Unwind_1001718a(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x40));
  return;
}


// ---- Unwind@10017193 @ 10017193

void Unwind_10017193(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x44));
  return;
}


// ---- Unwind@1001719c @ 1001719c

void Unwind_1001719c(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x48));
  return;
}


// ---- Unwind@100171a5 @ 100171a5

void Unwind_100171a5(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x4c));
  return;
}


// ---- Unwind@100171ae @ 100171ae

void Unwind_100171ae(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x50));
  return;
}


// ---- Unwind@100171b7 @ 100171b7

void Unwind_100171b7(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x54));
  return;
}


// ---- Unwind@100171c0 @ 100171c0

void Unwind_100171c0(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x58));
  return;
}


// ---- Unwind@100171c9 @ 100171c9

void Unwind_100171c9(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x5c));
  return;
}


// ---- Unwind@100171d2 @ 100171d2

void Unwind_100171d2(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x60));
  return;
}


// ---- Unwind@100171f0 @ 100171f0

void Unwind_100171f0(void)

{
  int unaff_EBP;
  
  FUN_10004a70((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x14));
  return;
}


// ---- Unwind@10017206 @ 10017206

void Unwind_10017206(void)

{
  int unaff_EBP;
  
  FUN_10004a70((undefined4 *)(*(int *)(unaff_EBP + -0x20) + 0x14));
  return;
}


// ---- Unwind@10017212 @ 10017212

void Unwind_10017212(void)

{
  int unaff_EBP;
  
  FUN_10004a70((undefined4 *)(*(int *)(unaff_EBP + -0x20) + 0x30));
  return;
}


// ---- Unwind@10017230 @ 10017230

void Unwind_10017230(void)

{
  int unaff_EBP;
  
  FUN_10004e40(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10017250 @ 10017250

void Unwind_10017250(void)

{
  int unaff_EBP;
  
  FUN_10001190(*(void **)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@10017264 @ 10017264

void Unwind_10017264(void)

{
  int unaff_EBP;
  
  FUN_10005130((undefined4 *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@10017277 @ 10017277

void Unwind_10017277(void)

{
  int unaff_EBP;
  
  COleControl::~COleControl(*(COleControl **)(unaff_EBP + -0x30));
  return;
}


// ---- Unwind@10017280 @ 10017280

void Unwind_10017280(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x30) + 0x1d4));
  return;
}


// ---- Unwind@1001728f @ 1001728f

void Unwind_1001728f(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x30) + 0x1dc));
  return;
}


// ---- Unwind@1001729e @ 1001729e

void Unwind_1001729e(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x30) + 0x1e0));
  return;
}


// ---- Unwind@100172ad @ 100172ad

void Unwind_100172ad(void)

{
  int unaff_EBP;
  
  FUN_1000433b((undefined4 *)(*(int *)(unaff_EBP + -0x30) + 0x208));
  return;
}


// ---- Unwind@100172bc @ 100172bc

void Unwind_100172bc(void)

{
  int unaff_EBP;
  
  FUN_1000d040((CGdiObject *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@100172cf @ 100172cf

void Unwind_100172cf(void)

{
  int unaff_EBP;
  
  COleControl::~COleControl(*(COleControl **)(unaff_EBP + -0x18));
  return;
}


// ---- Unwind@100172d8 @ 100172d8

void Unwind_100172d8(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x18) + 0x1d4));
  return;
}


// ---- Unwind@100172e7 @ 100172e7

void Unwind_100172e7(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x18) + 0x1dc));
  return;
}


// ---- Unwind@100172f6 @ 100172f6

void Unwind_100172f6(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x18) + 0x1e0));
  return;
}


// ---- Unwind@10017305 @ 10017305

void Unwind_10017305(void)

{
  int unaff_EBP;
  
  FUN_1000433b((undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0x208));
  return;
}


// ---- Unwind@1001731e @ 1001731e

void Unwind_1001731e(void)

{
  int unaff_EBP;
  
  FUN_1000d040((CGdiObject *)(unaff_EBP + -0x18));
  return;
}


// ---- Unwind@10017327 @ 10017327

void Unwind_10017327(void)

{
  int unaff_EBP;
  
  CPictureHolder::~CPictureHolder((CPictureHolder *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@1001733a @ 1001733a

void Unwind_1001733a(void)

{
  int unaff_EBP;
  
  FUN_10001130((CDialog *)(unaff_EBP + -0x74));
  return;
}


// ---- Unwind@1001734d @ 1001734d

void Unwind_1001734d(void)

{
  int unaff_EBP;
  
  FUN_10001190(*(void **)(unaff_EBP + -0x18));
  return;
}


// ---- Unwind@10017361 @ 10017361

void Unwind_10017361(void)

{
  int unaff_EBP;
  
  FUN_10001190(*(void **)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@10017375 @ 10017375

void Unwind_10017375(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@1001737e @ 1001737e

void Unwind_1001737e(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x24));
  return;
}


// ---- Unwind@10017387 @ 10017387

void Unwind_10017387(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x28));
  return;
}


// ---- Unwind@10017390 @ 10017390

void Unwind_10017390(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x20));
  return;
}


// ---- Unwind@100173a3 @ 100173a3

void Unwind_100173a3(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x58));
  return;
}


// ---- Unwind@100173ac @ 100173ac

void Unwind_100173ac(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x5c));
  return;
}


// ---- Unwind@100173bf @ 100173bf

void Unwind_100173bf(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x1c));
  return;
}


// ---- Unwind@100173c8 @ 100173c8

void Unwind_100173c8(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x18));
  return;
}


// ---- Unwind@100173d1 @ 100173d1

void Unwind_100173d1(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@100173e4 @ 100173e4

void Unwind_100173e4(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x4c));
  return;
}


// ---- Unwind@100173ed @ 100173ed

void Unwind_100173ed(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x40));
  return;
}


// ---- Unwind@100173f6 @ 100173f6

void Unwind_100173f6(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x34));
  return;
}


// ---- Unwind@100173ff @ 100173ff

void Unwind_100173ff(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x3c));
  return;
}


// ---- Unwind@10017408 @ 10017408

void Unwind_10017408(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x44));
  return;
}


// ---- Unwind@10017411 @ 10017411

void Unwind_10017411(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x48));
  return;
}


// ---- Unwind@1001741a @ 1001741a

void Unwind_1001741a(void)

{
  int unaff_EBP;
  
  FUN_1000d5b9((undefined4 *)(unaff_EBP + -0x30));
  return;
}


// ---- Unwind@10017423 @ 10017423

void Unwind_10017423(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x94));
  return;
}


// ---- Unwind@1001742f @ 1001742f

void Unwind_1001742f(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x98));
  return;
}


// ---- Unwind@1001743b @ 1001743b

void Unwind_1001743b(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x9c));
  return;
}


// ---- Unwind@10017447 @ 10017447

void Unwind_10017447(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x38));
  return;
}


// ---- Unwind@1001745a @ 1001745a

void Unwind_1001745a(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@1001746d @ 1001746d

void Unwind_1001746d(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10017480 @ 10017480

void Unwind_10017480(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10017493 @ 10017493

void Unwind_10017493(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x18));
  return;
}


// ---- Unwind@100174a6 @ 100174a6

void Unwind_100174a6(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@100174b9 @ 100174b9

void Unwind_100174b9(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@100174cc @ 100174cc

void Unwind_100174cc(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@100174df @ 100174df

void Unwind_100174df(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@100174f2 @ 100174f2

void Unwind_100174f2(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@100174fb @ 100174fb

void Unwind_100174fb(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@1001750e @ 1001750e

void Unwind_1001750e(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10017517 @ 10017517

void Unwind_10017517(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x18));
  return;
}


// ---- Unwind@10017520 @ 10017520

void Unwind_10017520(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@10017533 @ 10017533

void Unwind_10017533(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x20));
  return;
}


// ---- Unwind@10017546 @ 10017546

void Unwind_10017546(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10017559 @ 10017559

void Unwind_10017559(void)

{
  int unaff_EBP;
  
  FUN_10001190(*(void **)(unaff_EBP + -0x41c));
  return;
}


// ---- Unwind@10017566 @ 10017566

void Unwind_10017566(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10017579 @ 10017579

void Unwind_10017579(void)

{
  int unaff_EBP;
  
  FUN_10001190(*(void **)(unaff_EBP + -0x1c));
  return;
}


// ---- Unwind@1001758d @ 1001758d

void Unwind_1001758d(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@10017596 @ 10017596

void Unwind_10017596(void)

{
  int unaff_EBP;
  
  FUN_10001190(*(void **)(unaff_EBP + -0x1c));
  return;
}


// ---- Unwind@100175a0 @ 100175a0

void Unwind_100175a0(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x20));
  return;
}


// ---- Unwind@100175b3 @ 100175b3

void Unwind_100175b3(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@100175bc @ 100175bc

void Unwind_100175bc(void)

{
  int unaff_EBP;
  
  FUN_10001190(*(void **)(unaff_EBP + -0x1c));
  return;
}


// ---- Unwind@100175c6 @ 100175c6

void Unwind_100175c6(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x20));
  return;
}


// ---- Unwind@100175d9 @ 100175d9

void Unwind_100175d9(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@100175e2 @ 100175e2

void Unwind_100175e2(void)

{
  int unaff_EBP;
  
  FUN_10001190(*(void **)(unaff_EBP + -0x1c));
  return;
}


// ---- Unwind@100175ec @ 100175ec

void Unwind_100175ec(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x20));
  return;
}


// ---- Unwind@100175ff @ 100175ff

void Unwind_100175ff(void)

{
  int unaff_EBP;
  
  FUN_10001190(*(void **)(unaff_EBP + -0x1c));
  return;
}


// ---- Unwind@10017613 @ 10017613

void Unwind_10017613(void)

{
  int unaff_EBP;
  
  FUN_10001190(*(void **)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@10017627 @ 10017627

void Unwind_10017627(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@10017630 @ 10017630

void Unwind_10017630(void)

{
  int unaff_EBP;
  
  FUN_10001190(*(void **)(unaff_EBP + -0x1c));
  return;
}


// ---- Unwind@1001763a @ 1001763a

void Unwind_1001763a(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x20));
  return;
}


// ---- Unwind@1001764d @ 1001764d

void Unwind_1001764d(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x20));
  return;
}


// ---- Unwind@10017656 @ 10017656

void Unwind_10017656(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x24));
  return;
}


// ---- Unwind@1001765f @ 1001765f

void Unwind_1001765f(void)

{
  int unaff_EBP;
  
  CDaoRecordset::~CDaoRecordset((CDaoRecordset *)(unaff_EBP + -0xc0));
  return;
}


// ---- Unwind@1001766b @ 1001766b

void Unwind_1001766b(void)

{
  int unaff_EBP;
  
  FUN_1000d270((VARIANTARG *)(unaff_EBP + -0xd0));
  return;
}


// ---- Unwind@10017677 @ 10017677

void Unwind_10017677(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x28));
  return;
}


// ---- Unwind@10017680 @ 10017680

void Unwind_10017680(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0xe8));
  return;
}


// ---- Unwind@1001768c @ 1001768c

void Unwind_1001768c(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0xd8));
  return;
}


// ---- Unwind@10017698 @ 10017698

void Unwind_10017698(void)

{
  int unaff_EBP;
  
  FUN_1000d270((VARIANTARG *)(unaff_EBP + -0xfc));
  return;
}


// ---- Unwind@100176a4 @ 100176a4

void Unwind_100176a4(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0xdc));
  return;
}


// ---- Unwind@100176b0 @ 100176b0

void Unwind_100176b0(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x100));
  return;
}


// ---- Unwind@100176bc @ 100176bc

void Unwind_100176bc(void)

{
  int unaff_EBP;
  
  FUN_1000d270((VARIANTARG *)(unaff_EBP + -0x114));
  return;
}


// ---- Unwind@100176c8 @ 100176c8

void Unwind_100176c8(void)

{
  int unaff_EBP;
  
  FUN_1000d270((VARIANTARG *)(unaff_EBP + -0x124));
  return;
}


// ---- Unwind@100176d4 @ 100176d4

void Unwind_100176d4(void)

{
  int unaff_EBP;
  
  FUN_1000d270((VARIANTARG *)(unaff_EBP + -0x134));
  return;
}


// ---- Unwind@100176ea @ 100176ea

void Unwind_100176ea(void)

{
  int unaff_EBP;
  
  FUN_10001190(*(void **)(unaff_EBP + -0x40));
  return;
}


// ---- Unwind@100176f4 @ 100176f4

void Unwind_100176f4(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@100176fd @ 100176fd

void Unwind_100176fd(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x50));
  return;
}


// ---- Unwind@10017706 @ 10017706

void Unwind_10017706(void)

{
  int unaff_EBP;
  
  FUN_1000d270((VARIANTARG *)(unaff_EBP + -0x2c));
  return;
}


// ---- Unwind@1001770f @ 1001770f

void Unwind_1001770f(void)

{
  int unaff_EBP;
  
  FUN_10001190(*(void **)(unaff_EBP + -0x58));
  return;
}


// ---- Unwind@10017719 @ 10017719

void Unwind_10017719(void)

{
  int unaff_EBP;
  
  FUN_10001190(*(void **)(unaff_EBP + -100));
  return;
}


// ---- Unwind@10017723 @ 10017723

void Unwind_10017723(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x68));
  return;
}


// ---- Unwind@10017736 @ 10017736

void Unwind_10017736(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@1001773f @ 1001773f

void Unwind_1001773f(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@10017752 @ 10017752

void Unwind_10017752(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x19c));
  return;
}


// ---- Unwind@10017770 @ 10017770

void Unwind_10017770(void)

{
  int unaff_EBP;
  
  FUN_10004e40(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10017790 @ 10017790

void Unwind_10017790(void)

{
  int unaff_EBP;
  
  FUN_10001190(*(void **)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@100177b0 @ 100177b0

void Unwind_100177b0(void)

{
  int unaff_EBP;
  
  FUN_10004e40(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@100177b9 @ 100177b9

void Unwind_100177b9(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x10) + 4));
  return;
}


// ---- Unwind@100177c5 @ 100177c5

void Unwind_100177c5(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x10) + 8));
  return;
}


// ---- Unwind@100177d1 @ 100177d1

void Unwind_100177d1(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x10) + 0xc));
  return;
}


// ---- Unwind@100177dd @ 100177dd

void Unwind_100177dd(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x10) + 0x10));
  return;
}


// ---- Unwind@100177f3 @ 100177f3

void Unwind_100177f3(void)

{
  int unaff_EBP;
  
  FUN_10004e40(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@100177fc @ 100177fc

void Unwind_100177fc(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x10) + 4));
  return;
}


// ---- Unwind@10017808 @ 10017808

void Unwind_10017808(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x10) + 8));
  return;
}


// ---- Unwind@10017814 @ 10017814

void Unwind_10017814(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(*(int *)(unaff_EBP + -0x10) + 0xc));
  return;
}


// ---- Unwind@1001782a @ 1001782a

void Unwind_1001782a(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10017833 @ 10017833

void Unwind_10017833(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@1001783c @ 1001783c

void Unwind_1001783c(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x18));
  return;
}


// ---- Unwind@10017845 @ 10017845

void Unwind_10017845(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x1c) & 1) != 0) {
    CString::~CString(*(CString **)(unaff_EBP + 8));
  }
  return;
}


// ---- Unwind@10017866 @ 10017866

void Unwind_10017866(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x24) & 1) != 0) {
    CString::~CString(*(CString **)(unaff_EBP + 8));
  }
  return;
}


// ---- Unwind@1001787d @ 1001787d

void Unwind_1001787d(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x1c));
  return;
}


// ---- Unwind@10017890 @ 10017890

void Unwind_10017890(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10017899 @ 10017899

void Unwind_10017899(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@100178a2 @ 100178a2

void Unwind_100178a2(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x18));
  return;
}


// ---- Unwind@100178ab @ 100178ab

void Unwind_100178ab(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x1c) & 1) != 0) {
    CString::~CString(*(CString **)(unaff_EBP + 8));
  }
  return;
}


// ---- Unwind@100178cc @ 100178cc

void Unwind_100178cc(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@100178d5 @ 100178d5

void Unwind_100178d5(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@100178de @ 100178de

void Unwind_100178de(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x18));
  return;
}


// ---- Unwind@100178f1 @ 100178f1

void Unwind_100178f1(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@100178fa @ 100178fa

void Unwind_100178fa(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@10017903 @ 10017903

void Unwind_10017903(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x18));
  return;
}


// ---- Unwind@10017916 @ 10017916

void Unwind_10017916(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@1001791f @ 1001791f

void Unwind_1001791f(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@10017928 @ 10017928

void Unwind_10017928(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x18));
  return;
}


// ---- Unwind@1001793b @ 1001793b

void Unwind_1001793b(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10017944 @ 10017944

void Unwind_10017944(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@1001794d @ 1001794d

void Unwind_1001794d(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x18));
  return;
}


// ---- Unwind@10017960 @ 10017960

void Unwind_10017960(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10017969 @ 10017969

void Unwind_10017969(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@10017972 @ 10017972

void Unwind_10017972(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x18));
  return;
}


// ---- Unwind@10017985 @ 10017985

void Unwind_10017985(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x18));
  return;
}


// ---- Unwind@10017998 @ 10017998

void Unwind_10017998(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x1c));
  return;
}


// ---- Unwind@100179ab @ 100179ab

void Unwind_100179ab(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x24));
  return;
}


// ---- Unwind@100179be @ 100179be

void Unwind_100179be(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 8));
  return;
}


// ---- Unwind@100179c7 @ 100179c7

void Unwind_100179c7(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@100179da @ 100179da

void Unwind_100179da(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 8));
  return;
}


// ---- Unwind@100179e3 @ 100179e3

void Unwind_100179e3(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@100179f6 @ 100179f6

void Unwind_100179f6(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 8));
  return;
}


// ---- Unwind@100179ff @ 100179ff

void Unwind_100179ff(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@10017a12 @ 10017a12

void Unwind_10017a12(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 0xc));
  return;
}


// ---- Unwind@10017a1b @ 10017a1b

void Unwind_10017a1b(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@10017a24 @ 10017a24

void Unwind_10017a24(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10017a2d @ 10017a2d

void Unwind_10017a2d(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x18) & 1) != 0) {
    CString::~CString(*(CString **)(unaff_EBP + 8));
  }
  return;
}


// ---- Unwind@10017a50 @ 10017a50

void Unwind_10017a50(void)

{
  int unaff_EBP;
  
  FUN_10001190(*(void **)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@10017a64 @ 10017a64

void Unwind_10017a64(void)

{
  int unaff_EBP;
  
  FUN_10004e40(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10017a77 @ 10017a77

void Unwind_10017a77(void)

{
  int unaff_EBP;
  
  FUN_10004e40(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10017a8a @ 10017a8a

void Unwind_10017a8a(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10017a9d @ 10017a9d

void Unwind_10017a9d(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10017aa6 @ 10017aa6

void Unwind_10017aa6(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x138) & 1) != 0) {
    CString::~CString(*(CString **)(unaff_EBP + 8));
  }
  return;
}


// ---- Unwind@10017aca @ 10017aca

void Unwind_10017aca(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x180));
  return;
}


// ---- Unwind@10017ad6 @ 10017ad6

void Unwind_10017ad6(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x184) & 1) != 0) {
    CString::~CString(*(CString **)(unaff_EBP + 8));
  }
  return;
}


// ---- Unwind@10017afa @ 10017afa

void Unwind_10017afa(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x174));
  return;
}


// ---- Unwind@10017b06 @ 10017b06

void Unwind_10017b06(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x184) & 1) != 0) {
    CString::~CString(*(CString **)(unaff_EBP + 8));
  }
  return;
}


// ---- Unwind@10017b2a @ 10017b2a

void Unwind_10017b2a(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10017b33 @ 10017b33

void Unwind_10017b33(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x184) & 1) != 0) {
    CString::~CString(*(CString **)(unaff_EBP + 8));
  }
  return;
}


// ---- Unwind@10017b57 @ 10017b57

void Unwind_10017b57(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x174));
  return;
}


// ---- Unwind@10017b63 @ 10017b63

void Unwind_10017b63(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x184) & 1) != 0) {
    CString::~CString(*(CString **)(unaff_EBP + 8));
  }
  return;
}


// ---- Unwind@10017b87 @ 10017b87

void Unwind_10017b87(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@10017b9a @ 10017b9a

void Unwind_10017b9a(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10017bad @ 10017bad

void Unwind_10017bad(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x184));
  return;
}


// ---- Unwind@10017bb9 @ 10017bb9

void Unwind_10017bb9(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x188) & 1) != 0) {
    CString::~CString(*(CString **)(unaff_EBP + 8));
  }
  return;
}


// ---- Unwind@10017bdd @ 10017bdd

void Unwind_10017bdd(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x184));
  return;
}


// ---- Unwind@10017be9 @ 10017be9

void Unwind_10017be9(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x188) & 1) != 0) {
    CString::~CString(*(CString **)(unaff_EBP + 8));
  }
  return;
}


// ---- Unwind@10017c0d @ 10017c0d

void Unwind_10017c0d(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x174));
  return;
}


// ---- Unwind@10017c19 @ 10017c19

void Unwind_10017c19(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x184) & 1) != 0) {
    CString::~CString(*(CString **)(unaff_EBP + 8));
  }
  return;
}


// ---- Unwind@10017c3d @ 10017c3d

void Unwind_10017c3d(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10017c46 @ 10017c46

void Unwind_10017c46(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x14));
  return;
}


// ---- Unwind@10017c59 @ 10017c59

void Unwind_10017c59(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10017c6c @ 10017c6c

void Unwind_10017c6c(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x10));
  return;
}


// ---- Unwind@10017c7f @ 10017c7f

void Unwind_10017c7f(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x11194));
  return;
}


// ---- Unwind@10017c95 @ 10017c95

void Unwind_10017c95(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 0xc));
  return;
}


// ---- Unwind@10017c9e @ 10017c9e

void Unwind_10017c9e(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + -0x180));
  return;
}


// ---- Unwind@10017cb4 @ 10017cb4

void Unwind_10017cb4(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 0xc));
  return;
}


// ---- Unwind@10017cbd @ 10017cbd

void Unwind_10017cbd(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 8));
  return;
}


// ---- Unwind@10017cd0 @ 10017cd0

void Unwind_10017cd0(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 0x1c));
  return;
}


// ---- Unwind@10017ce3 @ 10017ce3

void Unwind_10017ce3(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 0x18));
  return;
}


// ---- Unwind@10017cf6 @ 10017cf6

void Unwind_10017cf6(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 0x1c));
  return;
}


// ---- Unwind@10017d09 @ 10017d09

void Unwind_10017d09(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 8));
  return;
}


// ---- Unwind@10017d1c @ 10017d1c

void Unwind_10017d1c(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 8));
  return;
}


// ---- Unwind@10017d2f @ 10017d2f

void Unwind_10017d2f(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 8));
  return;
}


// ---- Unwind@10017d42 @ 10017d42

void Unwind_10017d42(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 8));
  return;
}


// ---- Unwind@10017d55 @ 10017d55

void Unwind_10017d55(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 8));
  return;
}


// ---- Unwind@10017d68 @ 10017d68

void Unwind_10017d68(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 8));
  return;
}


// ---- Unwind@10017d7b @ 10017d7b

void Unwind_10017d7b(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 8));
  return;
}


// ---- Unwind@10017d8e @ 10017d8e

void Unwind_10017d8e(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 8));
  return;
}


// ---- Unwind@10017da1 @ 10017da1

void Unwind_10017da1(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 8));
  return;
}


// ---- Unwind@10017db4 @ 10017db4

void Unwind_10017db4(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 8));
  return;
}


// ---- Unwind@10017dc7 @ 10017dc7

void Unwind_10017dc7(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 8));
  return;
}


// ---- Unwind@10017dda @ 10017dda

void Unwind_10017dda(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 8));
  return;
}


// ---- Unwind@10017ded @ 10017ded

void Unwind_10017ded(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 0x10));
  return;
}


// ---- Unwind@10017e00 @ 10017e00

void Unwind_10017e00(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 0xc));
  return;
}


// ---- Unwind@10017e13 @ 10017e13

void Unwind_10017e13(void)

{
  int unaff_EBP;
  
  CString::~CString((CString *)(unaff_EBP + 8));
  return;
}


// ---- Unwind@10017e28 @ 10017e28

void Unwind_10017e28(void)

{
  int unaff_EBP;
  
  FUN_10005130((undefined4 *)(unaff_EBP + -0x14));
  return;
}


