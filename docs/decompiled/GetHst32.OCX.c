// Decompiled with Ghidra from GetHst32.OCX
// Format: Portable Executable (PE), image base 10000000

// ---- FUN_100010e0 @ 100010e0

void FUN_100010e0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 uStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_10 = *unaff_FS_OFFSET;
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_10001138;
  *unaff_FS_OFFSET = &uStack_10;
                    /* WARNING: Subroutine does not return */
  Ordinal_403(&DAT_10005040,&PTR_s_CGetadrsPropPage_10007058,0,"Mabry.GetAddress.PropPage");
}


// ---- FUN_10001150 @ 10001150

void FUN_10001150(void)

{
  FUN_10004530((_onexit_t)&LAB_10001160);
  return;
}


// ---- FUN_100011ab @ 100011ab

void FUN_100011ab(void)

{
  Ordinal_651();
  return;
}


// ---- FUN_10001220 @ 10001220

undefined4 * __fastcall FUN_10001220(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &DAT_1000126f;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_406(0x67,0x67);
  *param_1 = &PTR_LAB_100050b8;
  *unaff_FS_OFFSET = local_10;
  return param_1;
}


// ---- FUN_100012e9 @ 100012e9

void FUN_100012e9(void)

{
  Ordinal_654();
  return;
}


// ---- FUN_100013c9 @ 100013c9

void FUN_100013c9(void)

{
  Ordinal_651();
  return;
}


// ---- FUN_10001420 @ 10001420

void __fastcall FUN_10001420(int param_1)

{
  if (2 < *(int *)(param_1 + 0x60)) {
    Ordinal_2320(0);
  }
  Ordinal_2081();
  return;
}


// ---- FUN_10001530 @ 10001530

void FUN_10001530(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 uStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_10 = *unaff_FS_OFFSET;
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_10001588;
  *unaff_FS_OFFSET = &uStack_10;
                    /* WARNING: Subroutine does not return */
  Ordinal_403(&DAT_10005228,&PTR_s_CGetnamePropPage_10007088,0,"Mabry.GetName.PropPage");
}


// ---- FUN_100015a0 @ 100015a0

void FUN_100015a0(void)

{
  FUN_10004530((_onexit_t)&LAB_100015b0);
  return;
}


// ---- FUN_100015fb @ 100015fb

void FUN_100015fb(void)

{
  Ordinal_651();
  return;
}


// ---- FUN_10001670 @ 10001670

undefined4 * __fastcall FUN_10001670(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &DAT_100016bf;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_406(0x65,0x65);
  *param_1 = &PTR_LAB_100052a0;
  *unaff_FS_OFFSET = local_10;
  return param_1;
}


// ---- FUN_10001739 @ 10001739

void FUN_10001739(void)

{
  Ordinal_654();
  return;
}


// ---- FUN_100017b9 @ 100017b9

void FUN_100017b9(void)

{
  Ordinal_651();
  return;
}


// ---- FUN_100017e0 @ 100017e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100017e0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &DAT_10001845;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_504(0);
  _DAT_10007360 = &PTR_LAB_10005448;
  *unaff_FS_OFFSET = local_10;
  return;
}


// ---- FUN_10001860 @ 10001860

void FUN_10001860(void)

{
  FUN_10004530((_onexit_t)&LAB_10001870);
  return;
}


// ---- FUN_100018ab @ 100018ab

void FUN_100018ab(void)

{
  FUN_100018c0();
  return;
}


// ---- FUN_100018c0 @ 100018c0

void FUN_100018c0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &DAT_100018f7;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_10001901();
  *unaff_FS_OFFSET = local_10;
  return;
}


// ---- FUN_10001901 @ 10001901

void FUN_10001901(void)

{
  Ordinal_721();
  return;
}


// ---- FUN_10001969 @ 10001969

void FUN_10001969(void)

{
  FUN_100018c0();
  return;
}


// ---- FUN_100019d9 @ 100019d9

void FUN_100019d9(void)

{
  Ordinal_721();
  return;
}


// ---- DllRegisterServer @ 10001a10

undefined4 DllRegisterServer(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x1a10  3  DllRegisterServer */
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_10001aa1;
  *unaff_FS_OFFSET = &local_10;
  puVar1 = FUN_10004461();
  uVar2 = Ordinal_1097(puVar1);
  local_8 = 0;
  iVar3 = Ordinal_1035(&DAT_10005388,0,0,puVar1,uVar2);
  iVar3 = Ordinal_1075(*(undefined4 *)(iVar3 + 8));
  if (iVar3 == 0) {
    local_8 = 0xffffffff;
    FUN_10001aab();
    uVar2 = 0x80040200;
  }
  else {
    iVar3 = Ordinal_5630(1);
    local_8 = 0xffffffff;
    if (iVar3 == 0) {
      FUN_10001aab();
      uVar2 = 0x80040201;
    }
    else {
      FUN_10001aab();
      uVar2 = 0;
    }
  }
  *unaff_FS_OFFSET = local_10;
  return uVar2;
}


// ---- FUN_10001aab @ 10001aab

void FUN_10001aab(void)

{
  int unaff_EBP;
  
  FUN_10001b60((undefined4 *)(unaff_EBP + -0x10));
  return;
}


// ---- DllUnregisterServer @ 10001ac0

undefined4 DllUnregisterServer(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x1ac0  4  DllUnregisterServer */
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_10001b44;
  *unaff_FS_OFFSET = &local_10;
  puVar1 = FUN_10004461();
  uVar2 = Ordinal_1097(puVar1);
  local_8 = 0;
  iVar3 = Ordinal_1085(&DAT_10005388,puVar1,uVar2);
  if (iVar3 == 0) {
    local_8 = 0xffffffff;
    FUN_10001b4e();
    uVar2 = 0x80040200;
  }
  else {
    iVar3 = Ordinal_5630(0);
    local_8 = 0xffffffff;
    if (iVar3 == 0) {
      FUN_10001b4e();
      uVar2 = 0x80040201;
    }
    else {
      FUN_10001b4e();
      uVar2 = 0;
    }
  }
  *unaff_FS_OFFSET = local_10;
  return uVar2;
}


// ---- FUN_10001b4e @ 10001b4e

void FUN_10001b4e(void)

{
  int unaff_EBP;
  
  FUN_10001b60((undefined4 *)(unaff_EBP + -0x10));
  return;
}


// ---- FUN_10001b60 @ 10001b60

void __fastcall FUN_10001b60(undefined4 *param_1)

{
  Ordinal_1097(*param_1);
  return;
}


// ---- FUN_10001d00 @ 10001d00

void FUN_10001d00(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 uStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_10 = *unaff_FS_OFFSET;
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_10001d58;
  *unaff_FS_OFFSET = &uStack_10;
                    /* WARNING: Subroutine does not return */
  Ordinal_403(&DAT_10005658,&PTR_s_CGetnameCtrl_10007128,0,"Mabry.GetName");
}


// ---- FUN_10001d70 @ 10001d70

void FUN_10001d70(void)

{
  FUN_10004530((_onexit_t)&LAB_10001d80);
  return;
}


// ---- FUN_10001dcb @ 10001dcb

void FUN_10001dcb(void)

{
  Ordinal_651();
  return;
}


// ---- FUN_10001f95 @ 10001f95

void FUN_10001f95(void)

{
  Ordinal_570();
  return;
}


// ---- FUN_10002035 @ 10002035

void FUN_10002035(void)

{
  Ordinal_706();
  return;
}


// ---- FUN_10002050 @ 10002050

undefined4 * __fastcall FUN_10002050(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  WSADATA local_1a4;
  undefined4 *local_14;
  undefined4 local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &DAT_10002120;
  *unaff_FS_OFFSET = &local_10;
  local_14 = param_1;
  Ordinal_381();
  local_8 = 0;
  Ordinal_486();
  local_8._0_1_ = 1;
  Ordinal_486();
  local_8 = CONCAT31(local_8._1_3_,2);
  *param_1 = &PTR_LAB_100056f0;
  Ordinal_3452(&DAT_10005668,&DAT_10005678);
  param_1[0x84] = 0;
  Ordinal_5317(0x20,0x20);
  WSAStartup(0x101,&local_1a4);
  param_1[0x86] = 0;
  Ordinal_2312();
  *unaff_FS_OFFSET = local_10;
  return param_1;
}


// ---- FUN_10002140 @ 10002140

undefined4 * __thiscall FUN_10002140(void *this,byte param_1)

{
  FUN_10002160(this);
  if ((param_1 & 1) != 0) {
    Ordinal_731(this);
  }
  return this;
}


// ---- FUN_10002160 @ 10002160

void __fastcall FUN_10002160(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  DWORD local_18;
  undefined4 *local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_10002203;
  *param_1 = &PTR_LAB_100056f0;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 2;
  local_14 = param_1;
  GetExitCodeThread((HANDLE)param_1[0x84],&local_18);
  if (local_18 == 0x103) {
    TerminateThread((HANDLE)local_14[0x84],0);
  }
  WSACleanup();
  local_8._0_1_ = 1;
  FUN_100021e7();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_100021f5();
  local_8 = 0xffffffff;
  FUN_1000220d();
  *unaff_FS_OFFSET = local_10;
  return;
}


// ---- FUN_100021e7 @ 100021e7

void FUN_100021e7(void)

{
  Ordinal_706();
  return;
}


// ---- FUN_100021f5 @ 100021f5

void FUN_100021f5(void)

{
  Ordinal_706();
  return;
}


// ---- FUN_1000220d @ 1000220d

void FUN_1000220d(void)

{
  Ordinal_632();
  return;
}


// ---- FUN_100022ff @ 100022ff

void FUN_100022ff(void)

{
  Ordinal_665();
  return;
}


// ---- FUN_10002321 @ 10002321

void FUN_10002321(void)

{
  int unaff_EBP;
  
  FUN_10002a90((undefined4 *)(unaff_EBP + -0x14));
  return;
}


// ---- FUN_10002510 @ 10002510

void __fastcall FUN_10002510(int param_1)

{
  if (*(int *)(param_1 + 0x218) == 1) {
    *(undefined4 *)(param_1 + 0x218) = 0;
    Ordinal_2451(param_1,1,&DAT_10007164,*(undefined4 *)(param_1 + 0x214),
                 (int)*(short *)(param_1 + 0x208));
  }
  Ordinal_2081();
  return;
}


// ---- FUN_100025f3 @ 100025f3

void FUN_100025f3(void)

{
  Ordinal_706();
  return;
}


// ---- FUN_10002605 @ 10002605

void FUN_10002605(void)

{
  Ordinal_706();
  return;
}


// ---- FUN_10002610 @ 10002610

void FUN_10002610(void)

{
  int iVar1;
  
  iVar1 = Ordinal_1400();
  if (iVar1 == 0) {
    Ordinal_5352();
    return;
  }
  Ordinal_5550(0x800a017e,0,0);
  return;
}


// ---- FUN_10002930 @ 10002930

void __fastcall FUN_10002930(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_100058a0;
  return;
}


// ---- FUN_100029ab @ 100029ab

void FUN_100029ab(void)

{
  int unaff_EBP;
  
  FUN_10002930(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}


// ---- FUN_100029c0 @ 100029c0

void __fastcall FUN_100029c0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &DAT_10002a09;
  *param_1 = &PTR_LAB_100058d0;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  Ordinal_2115(param_1);
  local_8 = 0xffffffff;
  FUN_10002a13();
  *unaff_FS_OFFSET = local_10;
  return;
}


// ---- FUN_10002a13 @ 10002a13

void FUN_10002a13(void)

{
  int unaff_EBP;
  
  FUN_10002930(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}


// ---- FUN_10002a7f @ 10002a7f

void FUN_10002a7f(void)

{
  int unaff_EBP;
  
  FUN_100029c0(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}


// ---- FUN_10002a90 @ 10002a90

void __fastcall FUN_10002a90(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &DAT_10002acd;
  *param_1 = &PTR_LAB_100058b8;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_10002ad7();
  *unaff_FS_OFFSET = local_10;
  return;
}


// ---- FUN_10002ad7 @ 10002ad7

void FUN_10002ad7(void)

{
  int unaff_EBP;
  
  FUN_100029c0(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}


// ---- FUN_10002b39 @ 10002b39

void FUN_10002b39(void)

{
  Ordinal_651();
  return;
}


// ---- FUN_10002ce0 @ 10002ce0

void FUN_10002ce0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 uStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_10 = *unaff_FS_OFFSET;
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_10002d38;
  *unaff_FS_OFFSET = &uStack_10;
                    /* WARNING: Subroutine does not return */
  Ordinal_403(&DAT_10005a60,&PTR_s_CGetadrsCtrl_100071c8,0,"Mabry.GetAddress");
}


// ---- FUN_10002d50 @ 10002d50

void FUN_10002d50(void)

{
  FUN_10004530((_onexit_t)&LAB_10002d60);
  return;
}


// ---- FUN_10002dab @ 10002dab

void FUN_10002dab(void)

{
  Ordinal_651();
  return;
}


// ---- FUN_10002f75 @ 10002f75

void FUN_10002f75(void)

{
  Ordinal_570();
  return;
}


// ---- FUN_10003015 @ 10003015

void FUN_10003015(void)

{
  Ordinal_706();
  return;
}


// ---- FUN_10003030 @ 10003030

undefined4 * __fastcall FUN_10003030(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  WSADATA local_1a4;
  undefined4 *local_14;
  undefined4 local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &DAT_10003100;
  *unaff_FS_OFFSET = &local_10;
  local_14 = param_1;
  Ordinal_381();
  local_8 = 0;
  Ordinal_486();
  local_8._0_1_ = 1;
  Ordinal_486();
  local_8 = CONCAT31(local_8._1_3_,2);
  *param_1 = &PTR_LAB_10005af8;
  Ordinal_3452(&DAT_10005a70,&DAT_10005a80);
  Ordinal_2312();
  param_1[0x84] = 0;
  Ordinal_5317(0x20,0x20);
  WSAStartup(0x101,&local_1a4);
  param_1[0x86] = 0;
  *unaff_FS_OFFSET = local_10;
  return param_1;
}


// ---- FUN_10003120 @ 10003120

undefined4 * __thiscall FUN_10003120(void *this,byte param_1)

{
  FUN_10003140(this);
  if ((param_1 & 1) != 0) {
    Ordinal_731(this);
  }
  return this;
}


// ---- FUN_10003140 @ 10003140

void __fastcall FUN_10003140(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  DWORD local_18;
  undefined4 *local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_100031e3;
  *param_1 = &PTR_LAB_10005af8;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 2;
  local_14 = param_1;
  GetExitCodeThread((HANDLE)param_1[0x84],&local_18);
  if (local_18 == 0x103) {
    TerminateThread((HANDLE)local_14[0x84],0);
  }
  WSACleanup();
  local_8._0_1_ = 1;
  FUN_100031c7();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_100031d5();
  local_8 = 0xffffffff;
  FUN_100031ed();
  *unaff_FS_OFFSET = local_10;
  return;
}


// ---- FUN_100031c7 @ 100031c7

void FUN_100031c7(void)

{
  Ordinal_706();
  return;
}


// ---- FUN_100031d5 @ 100031d5

void FUN_100031d5(void)

{
  Ordinal_706();
  return;
}


// ---- FUN_100031ed @ 100031ed

void FUN_100031ed(void)

{
  Ordinal_632();
  return;
}


// ---- FUN_100032df @ 100032df

void FUN_100032df(void)

{
  Ordinal_665();
  return;
}


// ---- FUN_10003301 @ 10003301

void FUN_10003301(void)

{
  int unaff_EBP;
  
  FUN_10002a90((undefined4 *)(unaff_EBP + -0x14));
  return;
}


// ---- FUN_10003483 @ 10003483

void FUN_10003483(void)

{
  Ordinal_706();
  return;
}


// ---- FUN_10003495 @ 10003495

void FUN_10003495(void)

{
  Ordinal_706();
  return;
}


// ---- FUN_100034a0 @ 100034a0

void FUN_100034a0(void)

{
  int iVar1;
  
  iVar1 = Ordinal_1400();
  if (iVar1 == 0) {
    Ordinal_5352();
    return;
  }
  Ordinal_5550(0x800a017e,0,0);
  return;
}


// ---- FUN_100035c0 @ 100035c0

void __fastcall FUN_100035c0(int param_1)

{
  if (*(int *)(param_1 + 0x218) == 1) {
    *(undefined4 *)(param_1 + 0x218) = 0;
    Ordinal_2451(param_1,1,&DAT_10007164,*(undefined4 *)(param_1 + 0x214),
                 (int)*(short *)(param_1 + 0x208));
  }
  Ordinal_2081();
  return;
}


// ---- FUN_10003909 @ 10003909

void FUN_10003909(void)

{
  Ordinal_651();
  return;
}


// ---- WSAStartup @ 10003912

int WSAStartup(WORD wVersionRequired,LPWSADATA lpWSAData)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003912. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = WSAStartup(wVersionRequired,lpWSAData);
  return iVar1;
}


// ---- WSACleanup @ 10003918

int WSACleanup(void)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10003918. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = WSACleanup();
  return iVar1;
}


// ---- FUN_10003960 @ 10003960

bool __cdecl FUN_10003960(LPCSTR param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  DWORD local_38;
  HKEY local_34;
  int local_30;
  BYTE local_2c [12];
  DWORD local_20;
  byte local_1c [12];
  tm *local_10;
  int local_c;
  int local_8;
  
  time((time_t *)&local_30);
  local_10 = localtime((time_t *)&local_30);
  local_30 = (local_10->tm_hour / 6) * 0x12c00 + local_10->tm_mday * 0x960 + local_10->tm_mon * 200
             + local_10->tm_year;
  wsprintfA((LPSTR)local_1c,&DAT_10007204,local_30);
  for (local_8 = 0; (local_1c[local_8] != 0 && (param_1[local_8] != '\0')); local_8 = local_8 + 1) {
    local_1c[local_8] = param_1[local_8] | local_1c[local_8];
  }
  local_c = RegOpenKeyExA((HKEY)0x80000002,s_Mabry_10007208,0,0x2001f,&local_34);
  if (local_c == 0) {
    local_38 = 1;
    local_20 = 10;
    local_2c[0] = '\0';
    local_c = RegQueryValueExA(local_34,param_1,(LPDWORD)0x0,&local_38,local_2c,&local_20);
    iVar1 = lstrcmpA((LPCSTR)local_2c,(LPCSTR)local_1c);
    if (iVar1 != 0) {
      local_c = -1;
    }
  }
  else {
    local_34 = (HKEY)0x0;
  }
  if (local_c != 0) {
    if (local_34 == (HKEY)0x0) {
      local_c = RegCreateKeyExA((HKEY)0x80000002,s_Mabry_10007214,0,&DAT_10007210,0,0xf003f,
                                (LPSECURITY_ATTRIBUTES)0x0,&local_34,&local_38);
    }
    iVar1 = lstrlenA((LPCSTR)local_1c);
    RegSetValueExA(local_34,param_1,0,1,local_1c,iVar1 + 1);
  }
  RegCloseKey(local_34);
  if (param_2 == 1) {
    bVar2 = true;
  }
  else if (param_2 == 2) {
    bVar2 = false;
  }
  else {
    bVar2 = local_c != 0;
  }
  return bVar2;
}


// ---- FUN_10003b75 @ 10003b75

undefined4 __cdecl FUN_10003b75(LPCSTR param_1,int param_2)

{
  HFILE hFile;
  int local_90;
  _OFSTRUCT local_8c;
  
  hFile = OpenFile(param_1,&local_8c,0);
  if (hFile != -1) {
    _llseek(hFile,-4,2);
    _lread(hFile,&local_90,4);
    _lclose(hFile);
    if (local_90 == param_2) {
      return 1;
    }
  }
  return 0;
}


// ---- Ordinal_729 @ 10003c00

void Ordinal_729(void)

{
                    /* WARNING: Could not recover jumptable at 0x10003c00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_729();
  return;
}


// ---- Ordinal_265 @ 10003c06

void Ordinal_265(void)

{
                    /* WARNING: Could not recover jumptable at 0x10003c06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_265();
  return;
}


// ---- Ordinal_651 @ 10003c8a

void Ordinal_651(void)

{
                    /* WARNING: Could not recover jumptable at 0x10003c8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_651();
  return;
}


// ---- Ordinal_403 @ 10003c90

void Ordinal_403(void)

{
                    /* WARNING: Could not recover jumptable at 0x10003c90. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_403();
  return;
}


// ---- Ordinal_1073 @ 10003c96

void Ordinal_1073(void)

{
                    /* WARNING: Could not recover jumptable at 0x10003c96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_1073();
  return;
}


// ---- Ordinal_1035 @ 10003c9c

void Ordinal_1035(void)

{
                    /* WARNING: Could not recover jumptable at 0x10003c9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_1035();
  return;
}


// ---- Ordinal_1084 @ 10003ca2

void Ordinal_1084(void)

{
                    /* WARNING: Could not recover jumptable at 0x10003ca2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_1084();
  return;
}


// ---- Ordinal_2199 @ 10003cde

void Ordinal_2199(void)

{
                    /* WARNING: Could not recover jumptable at 0x10003cde. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_2199();
  return;
}


// ---- Ordinal_654 @ 10003d80

void Ordinal_654(void)

{
                    /* WARNING: Could not recover jumptable at 0x10003d80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_654();
  return;
}


// ---- Ordinal_406 @ 10003d86

void Ordinal_406(void)

{
                    /* WARNING: Could not recover jumptable at 0x10003d86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_406();
  return;
}


// ---- Ordinal_731 @ 10003d8c

void Ordinal_731(void)

{
                    /* WARNING: Could not recover jumptable at 0x10003d8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_731();
  return;
}


// ---- Ordinal_1986 @ 10003d92

void Ordinal_1986(void)

{
                    /* WARNING: Could not recover jumptable at 0x10003d92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_1986();
  return;
}


// ---- Ordinal_570 @ 10003da4

void Ordinal_570(void)

{
                    /* WARNING: Could not recover jumptable at 0x10003da4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_570();
  return;
}


// ---- Ordinal_315 @ 10003daa

void Ordinal_315(void)

{
                    /* WARNING: Could not recover jumptable at 0x10003daa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_315();
  return;
}


// ---- Ordinal_2081 @ 10003db0

void Ordinal_2081(void)

{
                    /* WARNING: Could not recover jumptable at 0x10003db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_2081();
  return;
}


// ---- Ordinal_2320 @ 10003db6

void Ordinal_2320(void)

{
                    /* WARNING: Could not recover jumptable at 0x10003db6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_2320();
  return;
}


// ---- Ordinal_2389 @ 10003dbc

void Ordinal_2389(void)

{
                    /* WARNING: Could not recover jumptable at 0x10003dbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_2389();
  return;
}


// ---- Ordinal_3458 @ 10003dc2

void Ordinal_3458(void)

{
                    /* WARNING: Could not recover jumptable at 0x10003dc2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_3458();
  return;
}


// ---- Ordinal_721 @ 10003e3a

void Ordinal_721(void)

{
                    /* WARNING: Could not recover jumptable at 0x10003e3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_721();
  return;
}


// ---- Ordinal_504 @ 10003e40

void Ordinal_504(void)

{
                    /* WARNING: Could not recover jumptable at 0x10003e40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_504();
  return;
}


// ---- Ordinal_5630 @ 10003e46

void Ordinal_5630(void)

{
                    /* WARNING: Could not recover jumptable at 0x10003e46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_5630();
  return;
}


// ---- Ordinal_1075 @ 10003e4c

void Ordinal_1075(void)

{
                    /* WARNING: Could not recover jumptable at 0x10003e4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_1075();
  return;
}


// ---- Ordinal_1097 @ 10003e52

void Ordinal_1097(void)

{
                    /* WARNING: Could not recover jumptable at 0x10003e52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_1097();
  return;
}


// ---- Ordinal_1085 @ 10003e58

void Ordinal_1085(void)

{
                    /* WARNING: Could not recover jumptable at 0x10003e58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_1085();
  return;
}


// ---- Ordinal_1043 @ 10003e5e

void Ordinal_1043(void)

{
                    /* WARNING: Could not recover jumptable at 0x10003e5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_1043();
  return;
}


// ---- Ordinal_1071 @ 10003e64

void Ordinal_1071(void)

{
                    /* WARNING: Could not recover jumptable at 0x10003e64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_1071();
  return;
}


// ---- Ordinal_706 @ 10003e6a

void Ordinal_706(void)

{
                    /* WARNING: Could not recover jumptable at 0x10003e6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_706();
  return;
}


// ---- Ordinal_1387 @ 10003e70

void Ordinal_1387(void)

{
                    /* WARNING: Could not recover jumptable at 0x10003e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_1387();
  return;
}


// ---- Ordinal_483 @ 10003e76

void Ordinal_483(void)

{
                    /* WARNING: Could not recover jumptable at 0x10003e76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_483();
  return;
}


// ---- Ordinal_632 @ 10004002

void Ordinal_632(void)

{
                    /* WARNING: Could not recover jumptable at 0x10004002. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_632();
  return;
}


// ---- Ordinal_2312 @ 10004008

void Ordinal_2312(void)

{
                    /* WARNING: Could not recover jumptable at 0x10004008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_2312();
  return;
}


// ---- Ordinal_5317 @ 1000400e

void Ordinal_5317(void)

{
                    /* WARNING: Could not recover jumptable at 0x1000400e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_5317();
  return;
}


// ---- Ordinal_3452 @ 10004014

void Ordinal_3452(void)

{
                    /* WARNING: Could not recover jumptable at 0x10004014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_3452();
  return;
}


// ---- Ordinal_486 @ 1000401a

void Ordinal_486(void)

{
                    /* WARNING: Could not recover jumptable at 0x1000401a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_486();
  return;
}


// ---- Ordinal_381 @ 10004020

void Ordinal_381(void)

{
                    /* WARNING: Could not recover jumptable at 0x10004020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_381();
  return;
}


// ---- Ordinal_665 @ 10004038

void Ordinal_665(void)

{
                    /* WARNING: Could not recover jumptable at 0x10004038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_665();
  return;
}


// ---- Ordinal_4999 @ 1000403e

void Ordinal_4999(void)

{
                    /* WARNING: Could not recover jumptable at 0x1000403e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_4999();
  return;
}


// ---- Ordinal_1875 @ 10004044

void Ordinal_1875(void)

{
                    /* WARNING: Could not recover jumptable at 0x10004044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_1875();
  return;
}


// ---- Ordinal_1426 @ 1000404a

void Ordinal_1426(void)

{
                    /* WARNING: Could not recover jumptable at 0x1000404a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_1426();
  return;
}


// ---- Ordinal_1014 @ 10004050

void Ordinal_1014(void)

{
                    /* WARNING: Could not recover jumptable at 0x10004050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_1014();
  return;
}


// ---- Ordinal_426 @ 10004056

void Ordinal_426(void)

{
                    /* WARNING: Could not recover jumptable at 0x10004056. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_426();
  return;
}


// ---- Ordinal_2223 @ 1000405c

void Ordinal_2223(void)

{
                    /* WARNING: Could not recover jumptable at 0x1000405c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_2223();
  return;
}


// ---- Ordinal_2378 @ 10004062

void Ordinal_2378(void)

{
                    /* WARNING: Could not recover jumptable at 0x10004062. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_2378();
  return;
}


// ---- Ordinal_4403 @ 10004068

void Ordinal_4403(void)

{
                    /* WARNING: Could not recover jumptable at 0x10004068. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_4403();
  return;
}


// ---- Ordinal_2451 @ 10004074

void Ordinal_2451(void)

{
                    /* WARNING: Could not recover jumptable at 0x10004074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_2451();
  return;
}


// ---- Ordinal_760 @ 10004080

void Ordinal_760(void)

{
                    /* WARNING: Could not recover jumptable at 0x10004080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_760();
  return;
}


// ---- Ordinal_5550 @ 10004086

void Ordinal_5550(void)

{
                    /* WARNING: Could not recover jumptable at 0x10004086. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_5550();
  return;
}


// ---- Ordinal_5352 @ 1000408c

void Ordinal_5352(void)

{
                    /* WARNING: Could not recover jumptable at 0x1000408c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_5352();
  return;
}


// ---- Ordinal_1400 @ 10004092

void Ordinal_1400(void)

{
                    /* WARNING: Could not recover jumptable at 0x10004092. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_1400();
  return;
}


// ---- Ordinal_2115 @ 100040a4

void Ordinal_2115(void)

{
                    /* WARNING: Could not recover jumptable at 0x100040a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_2115();
  return;
}


// ---- FUN_100040aa @ 100040aa

/* WARNING: Function: _EH_prolog replaced with injection: EH_prolog */

undefined4 FUN_100040aa(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000415b;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  if (param_2 != 1) {
    if (param_2 == 0) {
      iVar1 = Ordinal_1042();
      puVar3 = FUN_10004461();
      uVar4 = Ordinal_1097(puVar3);
      *(undefined4 *)(iVar1 + 8) = uVar4;
      iVar1 = Ordinal_1035();
      if (*(int **)(iVar1 + 4) != (int *)0x0) {
        (**(code **)(**(int **)(iVar1 + 4) + 0x6c))();
      }
      Ordinal_1369();
      Ordinal_1105(&DAT_10008550,1);
    }
    uVar4 = 1;
    goto LAB_100041ae;
  }
  uVar4 = 0;
  Ordinal_988();
  iVar1 = Ordinal_1367(param_1,0,&DAT_100047e4,0);
  if (iVar1 == 0) {
    Ordinal_1369();
  }
  else {
    iVar1 = Ordinal_1035();
    if (*(int **)(iVar1 + 4) != (int *)0x0) {
      iVar1 = **(int **)(iVar1 + 4);
      iVar2 = (**(code **)(iVar1 + 0x54))();
      if (iVar2 == 0) {
        (**(code **)(iVar1 + 0x6c))();
        Ordinal_1369();
        goto LAB_10004145;
      }
    }
    Ordinal_1046(&DAT_10008550,param_1);
    iVar1 = Ordinal_729(0x40);
    local_8 = 0;
    if (iVar1 != 0) {
      Ordinal_328(&DAT_10008550,0);
    }
    local_8 = 0xffffffff;
    uVar4 = 1;
  }
LAB_10004145:
  iVar1 = Ordinal_1042();
  Ordinal_1097(*(undefined4 *)(iVar1 + 8));
  FUN_10004461();
LAB_100041ae:
  *unaff_FS_OFFSET = local_10;
  return uVar4;
}


// ---- FUN_100041c1 @ 100041c1

/* WARNING: Function: _EH_prolog replaced with injection: EH_prolog */

undefined4 FUN_100041c1(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10004216;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  puVar1 = FUN_10004461();
  Ordinal_1097(puVar1);
  local_8 = 0;
  uVar2 = Ordinal_1370(param_1,param_2,param_3,param_4);
  local_8 = 0xffffffff;
  FUN_10004220();
  *unaff_FS_OFFSET = local_10;
  return uVar2;
}


// ---- FUN_10004220 @ 10004220

void FUN_10004220(void)

{
  int unaff_EBP;
  
  FUN_10001b60((undefined4 *)(unaff_EBP + -0x10));
  return;
}


// ---- FUN_10004228 @ 10004228

undefined4 FUN_10004228(undefined4 param_1,int param_2)

{
  HLOCAL hMem;
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_2 == 1) {
    hMem = LocalAlloc(0,0x2000);
    if (hMem == (HLOCAL)0x0) {
      return 0;
    }
    LocalFree(hMem);
    puVar1 = FUN_10004461();
    iVar2 = Ordinal_1042();
    uVar3 = Ordinal_1097(puVar1);
    *(undefined4 *)(iVar2 + 8) = uVar3;
  }
  else if (param_2 == 0) {
    FUN_10004461();
    iVar2 = Ordinal_1042();
    Ordinal_1097(*(undefined4 *)(iVar2 + 8));
  }
  return 1;
}


// ---- FUN_10004292 @ 10004292

/* WARNING: Function: _EH_prolog replaced with injection: EH_prolog */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10004292(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_100042d7;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_269(1,FUN_100041c1,0x400);
  _DAT_10007500 = &PTR_FUN_10005cac;
  *unaff_FS_OFFSET = local_10;
  return;
}


// ---- FUN_100042eb @ 100042eb

/* WARNING: Function: _EH_prolog replaced with injection: EH_prolog */

void * __thiscall FUN_100042eb(void *this,byte param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10004328;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_10004332();
  if ((param_1 & 1) != 0) {
    Ordinal_733(this);
  }
  *unaff_FS_OFFSET = local_10;
  return this;
}


// ---- FUN_10004332 @ 10004332

void FUN_10004332(void)

{
  FUN_1000433a();
  return;
}


// ---- FUN_1000433a @ 1000433a

/* WARNING: Function: _EH_prolog replaced with injection: EH_prolog */

void FUN_1000433a(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_10004394;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 1;
  FUN_10004378();
  local_8 = local_8 & 0xffffff00;
  FUN_10004386();
  local_8 = 0xffffffff;
  FUN_1000439e();
  *unaff_FS_OFFSET = local_10;
  return;
}


// ---- FUN_10004378 @ 10004378

void FUN_10004378(void)

{
  FUN_100043e1();
  return;
}


// ---- FUN_10004386 @ 10004386

void FUN_10004386(void)

{
  FUN_100043a6();
  return;
}


// ---- FUN_1000439e @ 1000439e

void FUN_1000439e(void)

{
  int unaff_EBP;
  
  FUN_10004467(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}


// ---- FUN_100043a6 @ 100043a6

/* WARNING: Function: _EH_prolog replaced with injection: EH_prolog */

void FUN_100043a6(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_100043cf;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_100043d9();
  *unaff_FS_OFFSET = local_10;
  return;
}


// ---- FUN_100043d9 @ 100043d9

void FUN_100043d9(void)

{
  Ordinal_671();
  return;
}


// ---- FUN_100043e1 @ 100043e1

/* WARNING: Function: _EH_prolog replaced with injection: EH_prolog */

void FUN_100043e1(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1000440a;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_10004414();
  *unaff_FS_OFFSET = local_10;
  return;
}


// ---- FUN_10004414 @ 10004414

void FUN_10004414(void)

{
  Ordinal_711();
  return;
}


// ---- FUN_1000441c @ 1000441c

void FUN_1000441c(void)

{
  FUN_10004530((_onexit_t)&LAB_1000442a);
  return;
}


// ---- FUN_10004457 @ 10004457

void FUN_10004457(void)

{
  FUN_1000433a();
  return;
}


// ---- FUN_10004461 @ 10004461

undefined * FUN_10004461(void)

{
  return &DAT_10007500;
}


// ---- FUN_10004467 @ 10004467

void __fastcall FUN_10004467(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_10005cb4;
  return;
}


// ---- FUN_10004490 @ 10004490

void __cdecl FUN_10004490(_onexit_t param_1)

{
  DWORD DVar1;
  
  if (DAT_10007288 == 0) {
    DVar1 = GetVersion();
    if (((DVar1 & 0xff) == 3) && ((DVar1 & 0x80000000) != 0)) {
      DAT_10007288 = DAT_10007288 + 1;
    }
    else {
      DAT_10007288 = DAT_10007288 + -1;
    }
  }
  if (0 < DAT_10007288) {
    while (0 < DAT_1000728c) {
      Sleep(0);
    }
    DAT_1000728c = DAT_1000728c + 1;
  }
  if (DAT_1000856c == -1) {
    _onexit(param_1);
  }
  else {
    __dllonexit(param_1,&DAT_1000856c,&DAT_10008568);
  }
  if (0 < DAT_10007288) {
    DAT_1000728c = DAT_1000728c + -1;
  }
  return;
}


// ---- FUN_10004530 @ 10004530

int __cdecl FUN_10004530(_onexit_t param_1)

{
  int iVar1;
  
  iVar1 = FUN_10004490(param_1);
  return -(uint)(iVar1 == 0);
}


// ---- FUN_10004550 @ 10004550

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10004550(undefined4 param_1,int param_2)

{
  DWORD DVar1;
  undefined4 *puVar2;
  
  if (param_2 == 1) {
    DAT_10007290 = DAT_10007290 + 1;
  }
  else if (param_2 == 0) {
    if (DAT_10007290 < 1) {
      return 0;
    }
    DAT_10007290 = DAT_10007290 + -1;
  }
  if (DAT_10007288 == 0) {
    DVar1 = GetVersion();
    if (((char)DVar1 == '\x03') && ((DVar1 & 0x80000000) != 0)) {
      DAT_10007288 = DAT_10007288 + 1;
    }
    else {
      DAT_10007288 = DAT_10007288 + -1;
    }
  }
  _DAT_10008564 = *(undefined4 *)_adjust_fdiv_exref;
  if (param_2 != 1) {
    if ((param_2 == 0) &&
       (((DAT_10007288 < 0 || (DAT_10007290 == 0)) && (DAT_1000856c != (undefined4 *)0x0)))) {
      puVar2 = DAT_10008568 + -1;
      if (DAT_1000856c <= puVar2) {
        do {
          if ((code *)*puVar2 != (code *)0x0) {
            (*(code *)*puVar2)();
          }
          puVar2 = puVar2 + -1;
        } while (DAT_1000856c <= puVar2);
      }
      if (DAT_10007288 < 0) {
        free(DAT_1000856c);
      }
      else {
        GlobalFree(DAT_1000856c);
      }
      DAT_1000856c = (undefined4 *)0x0;
    }
    return 1;
  }
  if (-1 < DAT_10007288) {
    if (DAT_10007290 != 1) {
      return 1;
    }
    if (-1 < DAT_10007288) {
      DAT_1000856c = GlobalAlloc(0x2000,0x80);
      if (DAT_1000856c == (undefined4 *)0x0) {
        return 0;
      }
      goto LAB_1000461d;
    }
  }
  DAT_1000856c = malloc(0x80);
  if (DAT_1000856c == (undefined4 *)0x0) {
    return 0;
  }
LAB_1000461d:
  *DAT_1000856c = 0;
  DAT_10008568 = DAT_1000856c;
  initterm(&DAT_10007000,&DAT_10007034);
  return 1;
}


// ---- entry @ 100046d0

int entry(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 1;
  if ((param_2 == 0) && (DAT_10007290 == 0)) {
    return 0;
  }
  if ((param_2 == 1) || (param_2 == 2)) {
    if (PTR_FUN_1000721c != (undefined *)0x0) {
      iVar2 = (*(code *)PTR_FUN_1000721c)(param_1,param_2,param_3);
    }
    iVar1 = 0;
    if (iVar2 == 0) goto LAB_10004745;
    iVar2 = FUN_10004550(param_1,param_2);
  }
  iVar1 = 0;
  if (iVar2 != 0) {
    iVar1 = FUN_100040aa(param_1,param_2);
  }
LAB_10004745:
  if ((param_2 == 0) || (param_2 == 3)) {
    iVar2 = FUN_10004550(param_1,param_2);
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    if ((iVar1 != 0) && (PTR_FUN_1000721c != (undefined *)0x0)) {
      iVar1 = (*(code *)PTR_FUN_1000721c)(param_1,param_2,param_3);
    }
  }
  return iVar1;
}


// ---- localtime @ 1000477a

tm * __cdecl localtime(time_t *_Time)

{
  tm *ptVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000477a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ptVar1 = localtime(_Time);
  return ptVar1;
}


// ---- time @ 10004780

time_t __cdecl time(time_t *_Time)

{
  time_t tVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10004780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  tVar1 = time(_Time);
  return tVar1;
}


// ---- _EH_prolog @ 10004786

/* WARNING: This is an inlined function */
/* WARNING: Function: _EH_prolog replaced with injection: EH_prolog */

void _EH_prolog(void)

{
  undefined4 unaff_FS_OFFSET;
  undefined1 auStack_c [12];
  
  *(undefined1 **)unaff_FS_OFFSET = auStack_c;
                    /* WARNING: Could not recover jumptable at 0x10004786. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  return;
}


// ---- FUN_10004790 @ 10004790

type_info * __thiscall FUN_10004790(void *this,byte param_1)

{
  type_info::~type_info(this);
  if ((param_1 & 1) != 0) {
    Ordinal_731(this);
  }
  return this;
}


// ---- __dllonexit @ 100047ae

void __dllonexit(void)

{
                    /* WARNING: Could not recover jumptable at 0x100047ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __dllonexit();
  return;
}


// ---- initterm @ 100047b4

void __cdecl initterm(void)

{
                    /* WARNING: Could not recover jumptable at 0x100047b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  initterm();
  return;
}


// ---- ~type_info @ 100047ba

void __thiscall type_info::~type_info(type_info *this)

{
                    /* WARNING: Could not recover jumptable at 0x100047ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~type_info(this);
  return;
}


// ---- Ordinal_1105 @ 100047c0

void Ordinal_1105(void)

{
                    /* WARNING: Could not recover jumptable at 0x100047c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_1105();
  return;
}


// ---- Ordinal_1369 @ 100047c6

void Ordinal_1369(void)

{
                    /* WARNING: Could not recover jumptable at 0x100047c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_1369();
  return;
}


// ---- Ordinal_1042 @ 100047cc

void Ordinal_1042(void)

{
                    /* WARNING: Could not recover jumptable at 0x100047cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_1042();
  return;
}


// ---- Ordinal_328 @ 100047d2

void Ordinal_328(void)

{
                    /* WARNING: Could not recover jumptable at 0x100047d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_328();
  return;
}


// ---- Ordinal_1046 @ 100047d8

void Ordinal_1046(void)

{
                    /* WARNING: Could not recover jumptable at 0x100047d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_1046();
  return;
}


// ---- Ordinal_1367 @ 100047de

void Ordinal_1367(void)

{
                    /* WARNING: Could not recover jumptable at 0x100047de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_1367();
  return;
}


// ---- Ordinal_988 @ 100047ea

void Ordinal_988(void)

{
                    /* WARNING: Could not recover jumptable at 0x100047ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_988();
  return;
}


// ---- Ordinal_1370 @ 100047f0

void Ordinal_1370(void)

{
                    /* WARNING: Could not recover jumptable at 0x100047f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_1370();
  return;
}


// ---- Ordinal_269 @ 100047f6

void Ordinal_269(void)

{
                    /* WARNING: Could not recover jumptable at 0x100047f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_269();
  return;
}


// ---- Ordinal_733 @ 100047fc

void Ordinal_733(void)

{
                    /* WARNING: Could not recover jumptable at 0x100047fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_733();
  return;
}


// ---- Ordinal_671 @ 10004802

void Ordinal_671(void)

{
                    /* WARNING: Could not recover jumptable at 0x10004802. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_671();
  return;
}


// ---- Ordinal_711 @ 10004808

void Ordinal_711(void)

{
                    /* WARNING: Could not recover jumptable at 0x10004808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_711();
  return;
}


// ---- DllGetClassObject @ 1000480e

/* WARNING: Function: _EH_prolog replaced with injection: EH_prolog */

HRESULT DllGetClassObject(IID *rclsid,IID *riid,LPVOID *ppv)

{
  undefined *puVar1;
  HRESULT HVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x480e  2  DllGetClassObject */
  local_8 = 0xffffffff;
  puStack_c = &LAB_10004860;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  puVar1 = FUN_10004461();
  Ordinal_1097(puVar1);
  local_8 = 0;
  HVar2 = Ordinal_1000(rclsid,riid,ppv);
  local_8 = 0xffffffff;
  FUN_1000486a();
  *unaff_FS_OFFSET = local_10;
  return HVar2;
}


// ---- FUN_1000486a @ 1000486a

void FUN_1000486a(void)

{
  int unaff_EBP;
  
  FUN_10001b60((undefined4 *)(unaff_EBP + -0x10));
  return;
}


// ---- DllCanUnloadNow @ 10004872

/* WARNING: Function: _EH_prolog replaced with injection: EH_prolog */

HRESULT DllCanUnloadNow(void)

{
  undefined *puVar1;
  HRESULT HVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x4872  1  DllCanUnloadNow */
  local_8 = 0xffffffff;
  puStack_c = &LAB_100048b9;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  puVar1 = FUN_10004461();
  Ordinal_1097(puVar1);
  local_8 = 0;
  HVar2 = Ordinal_999();
  local_8 = 0xffffffff;
  FUN_100048c3();
  *unaff_FS_OFFSET = local_10;
  return HVar2;
}


// ---- FUN_100048c3 @ 100048c3

void FUN_100048c3(void)

{
  int unaff_EBP;
  
  FUN_10001b60((undefined4 *)(unaff_EBP + -0x10));
  return;
}


// ---- Ordinal_1000 @ 100048cc

void Ordinal_1000(void)

{
                    /* WARNING: Could not recover jumptable at 0x100048cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_1000();
  return;
}


// ---- Ordinal_999 @ 100048d2

void Ordinal_999(void)

{
                    /* WARNING: Could not recover jumptable at 0x100048d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_999();
  return;
}


