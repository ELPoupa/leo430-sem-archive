// Decompiled with Ghidra from Pchute2x.ocx
// Format: Portable Executable (PE), image base 11000000

// ---- __vbaChkstk @ 11001ae0

void __vbaChkstk(void)

{
                    /* WARNING: Could not recover jumptable at 0x11001ae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __vbaChkstk();
  return;
}


// ---- DllFunctionCall @ 11001c5a

void DllFunctionCall(void)

{
                    /* WARNING: Could not recover jumptable at 0x11001c5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DllFunctionCall();
  return;
}


// ---- VBDllUnRegisterServer @ 11001d02

void VBDllUnRegisterServer(void)

{
                    /* WARNING: Could not recover jumptable at 0x11001d02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  VBDllUnRegisterServer();
  return;
}


// ---- VBDllGetClassObject @ 11001d08

void VBDllGetClassObject(void)

{
                    /* WARNING: Could not recover jumptable at 0x11001d08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  VBDllGetClassObject();
  return;
}


// ---- VBDllRegisterServer @ 11001d0e

void VBDllRegisterServer(void)

{
                    /* WARNING: Could not recover jumptable at 0x11001d0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  VBDllRegisterServer();
  return;
}


// ---- VBDllCanUnloadNow @ 11001d14

void VBDllCanUnloadNow(void)

{
                    /* WARNING: Could not recover jumptable at 0x11001d14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  VBDllCanUnloadNow();
  return;
}


// ---- UserDllMain @ 11001d1a

void UserDllMain(void)

{
                    /* WARNING: Could not recover jumptable at 0x11001d1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UserDllMain();
  return;
}


// ---- entry @ 11001d20

void entry(void)

{
  UserDllMain(&DAT_1103b46c);
  return;
}


// ---- FUN_11004b74 @ 11004b74

void FUN_11004b74(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if (DAT_11039418 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x11004b7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_11039418)();
    return;
  }
  UNRECOVERED_JUMPTABLE = (code *)DllFunctionCall(&PTR_s_user32_11004b5c);
                    /* WARNING: Could not recover jumptable at 0x11004b8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


// ---- DllUnregisterServer @ 1102b388

void DllUnregisterServer(void)

{
                    /* 0x2b388  4  DllUnregisterServer */
  VBDllUnRegisterServer(&DAT_1103b46c,&DAT_1103b468);
  return;
}


// ---- DllGetClassObject @ 1102b39e

HRESULT DllGetClassObject(IID *rclsid,IID *riid,LPVOID *ppv)

{
  HRESULT HVar1;
  
                    /* 0x2b39e  2  DllGetClassObject */
  HVar1 = VBDllGetClassObject(&DAT_1103b46c,&DAT_1103b468);
  return HVar1;
}


// ---- DllRegisterServer @ 1102b3b4

void DllRegisterServer(void)

{
                    /* 0x2b3b4  3  DllRegisterServer */
  VBDllRegisterServer(&DAT_1103b46c,&DAT_1103b468);
  return;
}


// ---- DllCanUnloadNow @ 1102b3ca

HRESULT DllCanUnloadNow(void)

{
  HRESULT HVar1;
  
                    /* 0x2b3ca  1  DllCanUnloadNow */
  HVar1 = VBDllCanUnloadNow();
  return HVar1;
}


// ---- FUN_1102b960 @ 1102b960

void __cdecl FUN_1102b960(int *param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  int *piVar14;
  int **ppiVar15;
  int *piVar16;
  int *piVar17;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined *local_dc;
  undefined4 local_d8;
  undefined4 local_d4 [2];
  wchar_t *local_cc;
  undefined4 local_c4;
  undefined4 local_b4 [4];
  undefined4 local_a4 [2];
  undefined4 local_9c;
  undefined4 local_94 [2];
  undefined4 local_8c;
  int *local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  int local_74 [4];
  undefined *local_64;
  undefined4 local_60 [4];
  undefined4 local_50 [4];
  undefined4 local_40 [4];
  undefined4 local_30 [4];
  void *pvStack_20;
  undefined1 *puStack_1c;
  undefined1 *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  puStack_1c = &LAB_11001ae6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xfffffed4;
  local_14 = &LAB_110011b0;
  local_10 = 0;
  local_c = 0;
  ExceptionList = &pvStack_20;
  (**(code **)(*param_1 + 4))(param_1);
  local_30[0] = 0;
  local_40[0] = 0;
  local_50[0] = 0;
  local_60[0] = 0;
  local_64 = (undefined *)0x0;
  local_74[0] = 0;
  local_78 = 0;
  local_7c = 0;
  local_80 = 0;
  local_84 = (int *)0x0;
  local_94[0] = 0;
  local_a4[0] = 0;
  local_b4[0] = 0;
  local_c4 = 0;
  local_d4[0] = 0;
  local_e4 = 0;
  iVar2 = __vbaAptOffset(&DAT_11004234);
  __vbaOnError(1);
  piVar17 = param_1;
  uVar3 = (**(code **)(*param_1 + 0x3a8))(param_1);
  piVar4 = (int *)__vbaObjSet(&local_84,uVar3);
  piVar16 = piVar4;
  iVar5 = (**(code **)(*piVar4 + 0x1e8))(piVar4);
  if (iVar5 < 0) {
    __vbaHresultCheckObj(iVar5,piVar4,&DAT_11004650,0x1e8);
  }
  __vbaFreeObj();
  local_cc = L"";
  local_d4[0] = 8;
  __vbaVarCopy();
  piVar4 = (int *)(&DAT_1103940c + iVar2);
  if (*piVar4 == 0) {
    __vbaNew2(&DAT_11004680,piVar4);
  }
  piVar4 = (int *)*piVar4;
  ppiVar15 = &local_84;
  piVar14 = piVar4;
  iVar2 = (**(code **)(*piVar4 + 0x14))(piVar4,ppiVar15);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar4,&DAT_11004670,0x14);
  }
  piVar4 = local_84;
  puVar13 = &local_7c;
  piVar6 = local_84;
  iVar2 = (**(code **)(*local_84 + 0x50))(local_84,puVar13);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar4,&DAT_11004690,0x50);
  }
  local_8c = local_7c;
  local_7c = 0;
  local_94[0] = 8;
  __vbaVarMove();
  __vbaFreeObj();
  uVar9 = 1;
  uVar3 = __vbaStrVarVal(&local_7c,local_50);
  rtcRightCharBstr(uVar3,uVar9);
  uVar3 = __vbaStrMove();
  iVar2 = __vbaStrCmp(&DAT_110046a4,uVar3);
  __vbaFreeStrList(2,&local_7c,&local_80);
  if (iVar2 != 0) {
    local_cc = L"\\";
    local_d4[0] = 8;
    __vbaVarCat(local_94,local_d4,local_50);
    __vbaVarMove();
  }
  __vbaStrCopy(piVar6,puVar13);
  local_cc = L"\\";
  local_d4[0] = 8;
  local_dc = local_64;
  local_e4 = 8;
  piVar4 = param_1 + 0x10;
  uVar3 = __vbaVarCat(local_94,local_d4,local_50);
  uVar3 = __vbaVarCat(local_a4,&local_e4,uVar3);
  __vbaStrVarMove(uVar3);
  __vbaStrMove();
  __vbaStrCopy(piVar14,ppiVar15);
  __vbaFreeStr();
  __vbaFreeVarList(2,local_94,local_a4);
  puVar13 = &local_7c;
  piVar14 = param_1;
  iVar2 = (**(code **)(*param_1 + 0x7a8))(param_1,piVar4,puVar13);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,param_1,&DAT_11004518,0x7a8);
  }
  __vbaFreeStr();
  if ((short)param_1[0xf] != -1) {
    local_cc = L"Parachute";
    local_d4[0] = 8;
    __vbaVarCopy();
    local_cc = (wchar_t *)0x40;
    local_d4[0] = 3;
    __vbaVarMove();
    __vbaStrCat(&DAT_11004768,L"The Tips file cannot be found. To restore this file you");
    uVar3 = __vbaStrMove();
    local_8c = __vbaStrCat(L"will need to reinstall Parachute.",uVar3);
    local_94[0] = 8;
    __vbaVarMove();
    __vbaFreeStr();
    local_9c = 0x80020004;
    local_a4[0] = 10;
    local_8c = 0x80020004;
    local_94[0] = 10;
    puVar12 = local_a4;
    puVar11 = local_94;
    uVar3 = __vbaI4Var(local_60,local_40,puVar11,puVar12);
    rtcMsgBox(local_30,uVar3,puVar11,puVar12,piVar14);
    __vbaFreeVarList(2,local_94,local_a4);
LAB_1102c0a7:
    __vbaExitProc();
    __vbaFreeVar(&LAB_1102c12d);
    __vbaFreeVar(piVar4);
    __vbaFreeVar(puVar13);
    __vbaFreeVar(piVar16);
    __vbaFreeStr();
    __vbaFreeVar(piVar17);
    __vbaAryDestruct(0,&local_78);
    return;
  }
  uVar3 = __vbaStrVarVal(&local_7c,local_50);
  rtcChangeDir(uVar3);
  __vbaFreeStr();
  local_cc = (wchar_t *)local_64;
  local_d4[0] = 8;
  uVar3 = __vbaVarCat(local_94,local_d4,local_50);
  __vbaStrVarMove(uVar3);
  uVar3 = __vbaStrMove();
  __vbaFileOpen(1,0xffffffff,1,uVar3);
  __vbaFreeStr();
  do {
    __vbaFreeVar(piVar14);
    do {
      sVar1 = rtcEndOfFile(1);
      if (sVar1 != 0) {
        __vbaFileClose(1);
        goto LAB_1102c0a7;
      }
      __vbaInputFile(&DAT_110046c4,1,local_74);
      rtcLeftCharVar(local_94,local_74,1);
      local_cc = L"0";
      local_d4[0] = 0x8008;
      sVar1 = __vbaVarTstEq(local_d4,local_94);
      __vbaFreeVar(piVar4);
      if (sVar1 != 0) {
        local_cc = (wchar_t *)0x1;
        local_d4[0] = 2;
        uVar3 = __vbaLenVar(local_94,local_74);
        uVar3 = __vbaVarSub(local_a4,local_d4,uVar3);
        uVar3 = __vbaI4Var(uVar3);
        rtcLeftCharVar(local_b4,local_74,uVar3);
        __vbaVarMove();
      }
      local_cc = L"";
      local_d4[0] = 0x8008;
      sVar1 = __vbaVarTstEq(local_d4,local_74);
      if (sVar1 != 0) {
        local_cc = L" ";
        local_d4[0] = 8;
        __vbaVarCopy();
      }
      local_cc = L"";
      local_d4[0] = 0x8008;
      piVar4 = local_74;
      sVar1 = __vbaVarTstNe(local_d4,piVar4);
    } while (sVar1 == 0);
    piVar14 = param_1;
    uVar3 = (**(code **)(*param_1 + 0x3a8))();
    piVar6 = (int *)__vbaObjSet(&local_84,uVar3);
    local_dc = (undefined *)0x80020004;
    local_e4 = 10;
    local_cc = L"\t";
    local_d4[0] = 8;
    iVar2 = *piVar6;
    uVar8 = 10;
    uVar10 = 0x80020004;
    uVar3 = local_e0;
    uVar9 = local_d8;
    uVar7 = __vbaVarCat(local_94,local_d4,local_74);
    uVar7 = __vbaStrVarVal(&local_7c,uVar7);
    iVar2 = (**(code **)(iVar2 + 0x1ec))(piVar6,uVar7,uVar8,uVar3,uVar10,uVar9);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar6,&DAT_11004650,0x1ec);
    }
    __vbaFreeStr();
    __vbaFreeObj();
  } while( true );
}


// ---- FUN_1102c150 @ 1102c150

void __cdecl FUN_1102c150(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_7c [2];
  undefined4 local_74;
  undefined4 local_6c;
  undefined4 local_5c;
  undefined4 local_4c;
  undefined4 local_3c;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  void *pvStack_20;
  undefined1 *puStack_1c;
  undefined1 *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  puStack_1c = &LAB_11001ae6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffff3c;
  local_14 = &LAB_110011d8;
  local_10 = 0;
  local_c = 0;
  ExceptionList = &pvStack_20;
  (**(code **)(*param_1 + 4))(param_1);
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_3c = 0;
  local_4c = 0;
  local_5c = 0;
  local_6c = 0;
  local_7c[0] = 0;
  *param_3 = 0;
  __vbaOnError(1);
  local_74 = param_2;
  local_7c[0] = 0x4008;
  rtcDir(local_7c,2);
  uVar2 = __vbaStrMove();
  iVar3 = __vbaStrCmp(&DAT_110044dc,uVar2);
  __vbaStrBool(-(uint)(iVar3 != 0));
  __vbaStrMove();
  __vbaFreeStr();
  uVar1 = __vbaBoolStr(local_24);
  *(undefined2 *)(param_1 + 0xf) = uVar1;
  __vbaExitProc();
  return;
}


// ---- FUN_1102c340 @ 1102c340

void __cdecl FUN_1102c340(uint param_1)

{
  int iVar1;
  int *piVar2;
  void *pvStack_20;
  undefined1 *puStack_1c;
  undefined1 *local_18;
  undefined1 *local_14;
  uint local_10;
  undefined4 local_c;
  
  puStack_1c = &LAB_11001ae6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffff40;
  local_14 = &LAB_11001200;
  local_10 = param_1 & 1;
  piVar2 = (int *)(param_1 & 0xfffffffe);
  local_c = 0;
  ExceptionList = &pvStack_20;
  (**(code **)(*piVar2 + 4))(piVar2);
  __vbaOnError(1);
  iVar1 = (**(code **)(*piVar2 + 0x7a4))(piVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar2,&DAT_11004518,0x7a4);
  }
  __vbaExitProc();
  return;
}


// ---- FUN_1102c4e0 @ 1102c4e0

void __cdecl FUN_1102c4e0(uint param_1)

{
  int *piVar1;
  void *pvStack_20;
  undefined1 *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  uint local_10;
  undefined4 local_c;
  
  puStack_1c = &LAB_11001ae6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffff40;
  local_14 = &DAT_11001228;
  local_10 = param_1 & 1;
  piVar1 = (int *)(param_1 & 0xfffffffe);
  local_c = 0;
  ExceptionList = &pvStack_20;
  (**(code **)(*piVar1 + 4))(piVar1);
  __vbaOnError(1);
  (**(code **)(*piVar1 + 0x7b8))(piVar1);
  __vbaExitProc();
  return;
}


// ---- FUN_1102c660 @ 1102c660

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __cdecl FUN_1102c660(undefined **param_1)

{
  short sVar1;
  undefined2 uVar2;
  int iVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  int *piVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined2 extraout_var;
  undefined **ppuVar9;
  short sVar10;
  bool bVar11;
  undefined4 auStack_1dc [16];
  undefined4 uStack_19c;
  undefined4 *puStack_198;
  undefined **ppuStack_194;
  int iStack_190;
  undefined **ppuStack_18c;
  undefined **ppuStack_188;
  undefined **ppuStack_184;
  undefined **ppuStack_180;
  undefined ***pppuStack_17c;
  undefined **ppuStack_178;
  undefined ***pppuStack_174;
  undefined ***pppuStack_170;
  undefined ***pppuStack_16c;
  undefined ***pppuStack_168;
  int *piStack_158;
  undefined4 *puStack_150;
  undefined4 local_120;
  undefined *local_11c;
  undefined4 local_118;
  undefined *local_114;
  undefined4 local_108 [2];
  undefined *local_100;
  undefined4 local_f8 [2];
  undefined *local_f0;
  undefined4 local_e8 [2];
  undefined *local_e0;
  undefined *local_d8 [2];
  undefined *local_d0;
  undefined4 local_c8;
  undefined **local_c4;
  undefined **local_c0;
  undefined **local_bc;
  undefined4 local_b8 [4];
  undefined4 local_a8 [4];
  undefined4 local_98 [4];
  undefined *local_88 [4];
  undefined *local_78 [4];
  undefined *local_68 [4];
  undefined *local_58 [4];
  undefined4 local_48 [4];
  undefined **local_38;
  undefined *local_34;
  short *local_30;
  undefined *local_2c;
  undefined **local_28;
  void *pvStack_20;
  undefined1 *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  puStack_1c = &LAB_11001ae6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xfffffe9c;
  local_14 = &DAT_11001250;
  local_10 = 0;
  local_c = 0;
  pppuStack_168 = (undefined ***)param_1;
  pppuStack_16c = (undefined ***)0x1102c69d;
  ExceptionList = &pvStack_20;
  (**(code **)(*param_1 + 4))();
  local_2c = (undefined *)0x0;
  local_30 = (short *)0x0;
  local_34 = (undefined *)0x0;
  local_38 = (undefined **)0x0;
  local_48[0] = 0;
  local_58[0] = (undefined *)0x0;
  local_68[0] = (undefined *)0x0;
  local_78[0] = (undefined *)0x0;
  local_88[0] = (undefined *)0x0;
  local_98[0] = 0;
  local_a8[0] = 0;
  local_b8[0] = 0;
  local_c8 = 0;
  local_d8[0] = (undefined *)0x0;
  local_e8[0] = 0;
  local_f8[0] = 0;
  local_108[0] = 0;
  local_118 = 0;
  local_11c = (undefined *)0x0;
  local_120 = 0;
  pppuStack_16c = (undefined ***)&DAT_11004234;
  pppuStack_170 = (undefined ***)0x1102c708;
  iVar3 = __vbaAptOffset();
  pppuStack_16c = (undefined ***)0x1;
  pppuStack_170 = (undefined ***)0x1102c716;
  __vbaOnError();
  pppuStack_16c = (undefined ***)param_1;
  pppuStack_170 = (undefined ***)0x1102c71f;
  pppuStack_170 = (undefined ***)(**(code **)(*param_1 + 0x3b0))();
  pppuStack_174 = &local_38;
  ppuStack_178 = (undefined **)0x1102c72a;
  ppuVar4 = (undefined **)__vbaObjSet();
  pppuStack_174 = (undefined ***)0x1102c735;
  pppuStack_170 = (undefined ***)ppuVar4;
  ppuVar5 = (undefined **)(**(code **)(*ppuVar4 + 0x1e8))();
  if ((int)ppuVar5 < 0) {
    pppuStack_174 = (undefined ***)0x1e8;
    ppuStack_178 = (undefined **)&DAT_11004650;
    ppuStack_184 = (undefined **)0x1102c74d;
    ppuStack_180 = ppuVar5;
    pppuStack_17c = (undefined ***)ppuVar4;
    __vbaHresultCheckObj();
  }
  pppuStack_174 = (undefined ***)0x1102c756;
  __vbaFreeObj();
  pppuStack_174 = (undefined ***)param_1;
  ppuStack_178 = (undefined **)0x1102c75f;
  ppuStack_178 = (undefined **)(**(code **)(*param_1 + 0x3a8))();
  pppuStack_17c = &local_38;
  ppuStack_180 = (undefined **)0x1102c76a;
  piVar6 = (int *)__vbaObjSet();
  pppuStack_17c = (undefined ***)0x1102c775;
  ppuStack_178 = (undefined **)piVar6;
  puVar7 = (undefined *)(**(code **)(*piVar6 + 0x1e8))();
  if ((int)puVar7 < 0) {
    pppuStack_17c = (undefined ***)0x1e8;
    ppuStack_180 = (undefined **)&DAT_11004650;
    ppuStack_18c = (undefined **)0x1102c78d;
    ppuStack_188 = (undefined **)puVar7;
    ppuStack_184 = (undefined **)piVar6;
    __vbaHresultCheckObj();
  }
  pppuStack_17c = (undefined ***)0x1102c796;
  __vbaFreeObj();
  pppuStack_17c = (undefined ***)0x1102c7a4;
  __vbaStrCopy();
  piVar6 = (int *)(&DAT_1103940c + iVar3);
  if (*piVar6 == 0) {
    ppuStack_178 = (undefined **)&DAT_11004680;
    pppuStack_17c = (undefined ***)0x1102c7c0;
    pppuStack_174 = (undefined ***)piVar6;
    __vbaNew2();
  }
  piVar6 = (int *)*piVar6;
  pppuStack_174 = &local_38;
  pppuStack_17c = (undefined ***)0x1102c7cc;
  ppuStack_178 = (undefined **)piVar6;
  puVar7 = (undefined *)(**(code **)(*piVar6 + 0x14))();
  if ((int)puVar7 < 0) {
    pppuStack_17c = (undefined ***)0x14;
    ppuStack_180 = (undefined **)&DAT_11004670;
    ppuStack_18c = (undefined **)0x1102c7e1;
    ppuStack_188 = (undefined **)puVar7;
    ppuStack_184 = (undefined **)piVar6;
    __vbaHresultCheckObj();
  }
  ppuVar4 = local_38;
  pppuStack_17c = (undefined ***)&local_34;
  ppuStack_180 = local_38;
  ppuStack_184 = (undefined **)0x1102c7f0;
  iVar3 = (**(code **)(*local_38 + 0x50))();
  if (iVar3 < 0) {
    ppuStack_184 = (undefined **)0x50;
    ppuStack_188 = (undefined **)&DAT_11004690;
    ppuStack_18c = ppuVar4;
    ppuStack_194 = (undefined **)0x1102c805;
    iStack_190 = iVar3;
    __vbaHresultCheckObj();
  }
  ppuVar4 = param_1 + 0x21;
  ppuStack_184 = (undefined **)0x1102c816;
  __vbaStrCopy();
  pppuStack_17c = (undefined ***)0x1102c821;
  __vbaFreeStr();
  pppuStack_17c = (undefined ***)0x1102c82a;
  __vbaFreeObj();
  pppuStack_17c = (undefined ***)*ppuVar4;
  ppuStack_180 = (undefined **)0x11004c64;
  ppuStack_184 = (undefined **)0x1102c838;
  __vbaStrCat();
  pppuStack_17c = (undefined ***)0x1102c843;
  __vbaStrMove();
  pppuStack_17c = (undefined ***)0x1102c84d;
  __vbaStrCopy();
  pppuStack_174 = (undefined ***)0x1102c852;
  __vbaFreeStr();
  pppuStack_174 = (undefined ***)0x1;
  ppuStack_178 = (undefined **)*ppuVar4;
  pppuStack_17c = (undefined ***)0x1102c85d;
  rtcRightCharBstr();
  pppuStack_174 = (undefined ***)0x1102c868;
  pppuStack_174 = (undefined ***)__vbaStrMove();
  ppuStack_178 = (undefined **)&DAT_110046a4;
  pppuStack_17c = (undefined ***)0x1102c874;
  iVar3 = __vbaStrCmp();
  pppuStack_174 = (undefined ***)0x1102c887;
  __vbaFreeStr();
  if (iVar3 != 0) {
    pppuStack_174 = (undefined ***)*ppuVar4;
    ppuStack_178 = (undefined **)&DAT_110046a4;
    pppuStack_17c = (undefined ***)0x1102c89a;
    __vbaStrCat();
    pppuStack_174 = (undefined ***)0x1102c8a5;
    __vbaStrMove();
    pppuStack_174 = (undefined ***)0x1102c8af;
    __vbaStrCopy();
    pppuStack_16c = (undefined ***)0x1102c8b8;
    __vbaFreeStr();
  }
  pppuStack_16c = (undefined ***)0x1102c8cb;
  __vbaStrCopy();
  pppuStack_168 = (undefined ***)param_1[0x24];
  pppuStack_16c = (undefined ***)0x1102c8d7;
  __vbaStrCat();
  __vbaStrMove();
  __vbaStrCopy();
  __vbaFreeStr();
  pppuStack_168 = (undefined ***)0x1102c90d;
  iVar3 = (**(code **)(*param_1 + 0x7a8))();
  if (iVar3 < 0) {
    pppuStack_168 = (undefined ***)0x7a8;
    pppuStack_16c = (undefined ***)&DAT_11004ae4;
    pppuStack_170 = (undefined ***)param_1;
    ppuStack_178 = (undefined **)0x1102c923;
    pppuStack_174 = (undefined ***)iVar3;
    __vbaHresultCheckObj();
  }
  pppuStack_168 = (undefined ***)0x1102c92c;
  __vbaFreeStr();
  if (*(short *)(param_1 + 0x20) != -1) {
    pppuStack_168 = (undefined ***)param_1;
    pppuStack_16c = (undefined ***)0x1102d009;
    pppuStack_16c = (undefined ***)(**(code **)(*param_1 + 0x3b0))();
    pppuStack_170 = &local_38;
    pppuStack_174 = (undefined ***)0x1102d014;
    ppuVar4 = (undefined **)__vbaObjSet();
    local_c0 = (undefined **)0x0;
    local_c8 = 3;
    ppuStack_178 = (undefined **)0x3;
    pppuStack_174 = (undefined ***)local_c4;
    pppuStack_170 = (undefined ***)0x0;
    pppuStack_16c = (undefined ***)local_bc;
    pppuStack_17c = (undefined ***)0x11004c9c;
    ppuStack_184 = (undefined **)0x1102d053;
    ppuStack_180 = ppuVar4;
    ppuVar5 = (undefined **)(**(code **)(*ppuVar4 + 0x1ec))();
    if ((int)ppuVar5 < 0) {
      pppuStack_168 = (undefined ***)&DAT_11004650;
      pppuStack_174 = (undefined ***)0x1102d06b;
      pppuStack_170 = (undefined ***)ppuVar5;
      pppuStack_16c = (undefined ***)ppuVar4;
      __vbaHresultCheckObj();
    }
    __vbaFreeObj();
LAB_1102d074:
    pppuStack_168 = (undefined ***)0x1102d07d;
    ppuVar4 = (undefined **)(**(code **)(*param_1 + 0x7ac))();
    if ((int)ppuVar4 < 0) {
      pppuStack_168 = (undefined ***)0x7ac;
      pppuStack_16c = (undefined ***)&DAT_11004ae4;
      pppuStack_170 = (undefined ***)param_1;
      ppuStack_178 = (undefined **)0x1102d097;
      pppuStack_174 = (undefined ***)ppuVar4;
      __vbaHresultCheckObj();
    }
    pppuStack_168 = (undefined ***)0x1102d15a;
    __vbaExitProc();
    pppuStack_168 = (undefined ***)&LAB_1102d1c1;
    pppuStack_16c = (undefined ***)0x1102d1b4;
    __vbaFreeStr();
    pppuStack_16c = (undefined ***)&local_30;
    pppuStack_170 = (undefined ***)0x0;
    pppuStack_174 = (undefined ***)0x1102d1c0;
    __vbaAryDestruct();
    return;
  }
  pppuStack_168 = (undefined ***)*ppuVar4;
  pppuStack_16c = (undefined ***)0x1102c943;
  rtcChangeDir();
  pppuStack_168 = (undefined ***)*ppuVar4;
  pppuStack_16c = (undefined ***)param_1[0x24];
  pppuStack_170 = (undefined ***)0x1102c94f;
  __vbaStrCat();
  pppuStack_168 = (undefined ***)0x1102c95a;
  pppuStack_168 = (undefined ***)__vbaStrMove();
  pppuStack_16c = (undefined ***)0x1;
  pppuStack_170 = (undefined ***)0xffffffff;
  pppuStack_174 = (undefined ***)0x1;
  ppuStack_178 = (undefined **)0x1102c967;
  __vbaFileOpen();
  pppuStack_168 = (undefined ***)0x1102c970;
  __vbaFreeStr();
  ppuVar5 = (undefined **)__vbaVarCat_exref;
  ppuVar4 = (undefined **)__vbaFreeVarList_exref;
  while( true ) {
    pppuStack_168 = (undefined ***)0x1;
    pppuStack_16c = (undefined ***)0x1102c984;
    sVar1 = rtcEndOfFile();
    if (sVar1 != 0) break;
    pppuStack_168 = (undefined ***)&local_2c;
    pppuStack_16c = (undefined ***)0x1;
    pppuStack_170 = (undefined ***)&DAT_11004c94;
    pppuStack_174 = (undefined ***)0x1102c99e;
    __vbaInputFile();
    local_c0 = &local_2c;
    local_c8 = 0x4008;
    pppuStack_168 = (undefined ***)0x1;
    pppuStack_16c = (undefined ***)&local_c8;
    pppuStack_170 = (undefined ***)local_48;
    pppuStack_174 = (undefined ***)0x1102c9c7;
    rtcLeftCharVar();
    local_d0 = &DAT_110044e4;
    local_d8[0] = (undefined *)0x8008;
    pppuStack_168 = (undefined ***)local_48;
    pppuStack_16c = (undefined ***)local_d8;
    pppuStack_170 = (undefined ***)0x1102c9ec;
    sVar1 = __vbaVarTstEq();
    pppuStack_168 = (undefined ***)0x1102c9fc;
    __vbaFreeVar();
    if (sVar1 != 0) {
      local_c0 = &local_2c;
      local_c8 = 0x4008;
      pppuStack_168 = (undefined ***)0x1102ca23;
      iVar3 = __vbaLenBstr();
      if (SBORROW4(iVar3,1)) goto LAB_1102d1e0;
      pppuStack_168 = (undefined ***)&local_c8;
      pppuStack_16c = (undefined ***)local_48;
      pppuStack_170 = (undefined ***)0x1102ca3e;
      rtcLeftCharVar();
      pppuStack_168 = (undefined ***)0x1102ca48;
      __vbaStrVarMove();
      __vbaStrMove();
      __vbaFreeVar();
    }
    pppuStack_168 = (undefined ***)local_2c;
    pppuStack_16c = (undefined ***)&DAT_110044dc;
    pppuStack_170 = (undefined ***)0x1102ca6b;
    iVar3 = __vbaStrCmp();
    if (iVar3 != 0) {
      local_c0 = (undefined **)&DAT_110046cc;
      local_c8 = 8;
      pppuStack_168 = (undefined ***)0x1102ca96;
      __vbaVarDup();
      pppuStack_168 = (undefined ***)0x0;
      pppuStack_16c = (undefined ***)0x5;
      pppuStack_170 = (undefined ***)local_48;
      pppuStack_174 = (undefined ***)local_2c;
      ppuStack_178 = local_58;
      pppuStack_17c = (undefined ***)0x1102caac;
      rtcSplit();
      pppuStack_168 = (undefined ***)local_58;
      pppuStack_16c = (undefined ***)0x2008;
      pppuStack_170 = (undefined ***)0x1102cabb;
      local_120 = __vbaAryVar();
      pppuStack_168 = (undefined ***)&local_120;
      pppuStack_16c = (undefined ***)&local_30;
      pppuStack_170 = (undefined ***)0x1102cad2;
      __vbaAryCopy();
      pppuStack_168 = (undefined ***)local_58;
      pppuStack_16c = (undefined ***)local_48;
      pppuStack_170 = (undefined ***)0x2;
      pppuStack_174 = (undefined ***)0x1102cade;
      (*(code *)ppuVar4)();
      if ((local_30 == (short *)0x0) || (*local_30 != 1)) {
        pppuStack_168 = (undefined ***)0x1102cb10;
        iVar3 = __vbaGenerateBoundsError();
      }
      else {
        iVar3 = *(int *)(local_30 + 10);
        if (*(uint *)(local_30 + 8) <= (uint)-iVar3) {
          pppuStack_168 = (undefined ***)0x1102cafe;
          __vbaGenerateBoundsError();
        }
        iVar3 = iVar3 * -4;
      }
      local_c0 = *(undefined ***)(*(int *)(local_30 + 6) + iVar3);
      local_c8 = 8;
      pppuStack_168 = (undefined ***)0x1102cb3a;
      __vbaVarCopy();
      if ((local_30 == (short *)0x0) || (*local_30 != 1)) {
        pppuStack_168 = (undefined ***)0x1102cb74;
        iVar3 = __vbaGenerateBoundsError();
      }
      else {
        iVar3 = *(int *)(local_30 + 10);
        if (*(uint *)(local_30 + 8) <= 1U - iVar3) {
          pppuStack_168 = (undefined ***)0x1102cb60;
          __vbaGenerateBoundsError();
        }
        iVar3 = (1U - iVar3) * 4;
      }
      local_c0 = *(undefined ***)(*(int *)(local_30 + 6) + iVar3);
      local_c8 = 8;
      pppuStack_168 = (undefined ***)0x1102cb98;
      __vbaVarCopy();
      if ((local_30 == (short *)0x0) || (*local_30 != 1)) {
        pppuStack_168 = (undefined ***)0x1102cbd2;
        iVar3 = __vbaGenerateBoundsError();
      }
      else {
        iVar3 = *(int *)(local_30 + 10);
        if (*(uint *)(local_30 + 8) <= 2U - iVar3) {
          pppuStack_168 = (undefined ***)0x1102cbbe;
          __vbaGenerateBoundsError();
        }
        iVar3 = (2U - iVar3) * 4;
      }
      local_c0 = *(undefined ***)(*(int *)(local_30 + 6) + iVar3);
      local_c8 = 8;
      pppuStack_168 = (undefined ***)0x1102cbf6;
      __vbaVarCopy();
      if ((local_30 == (short *)0x0) || (*local_30 != 1)) {
        pppuStack_168 = (undefined ***)0x1102cc30;
        iVar3 = __vbaGenerateBoundsError();
      }
      else {
        iVar3 = *(int *)(local_30 + 10);
        if (*(uint *)(local_30 + 8) <= 3U - iVar3) {
          pppuStack_168 = (undefined ***)0x1102cc1c;
          __vbaGenerateBoundsError();
        }
        iVar3 = (3U - iVar3) * 4;
      }
      local_c0 = *(undefined ***)(*(int *)(local_30 + 6) + iVar3);
      local_c8 = 8;
      pppuStack_168 = (undefined ***)0x1102cc54;
      __vbaVarCopy();
      if ((local_30 == (short *)0x0) || (*local_30 != 1)) {
        pppuStack_168 = (undefined ***)0x1102cc86;
        __vbaGenerateBoundsError();
      }
      else if (*(uint *)(local_30 + 8) <= 4U - *(int *)(local_30 + 10)) {
        pppuStack_168 = (undefined ***)0x1102cc74;
        __vbaGenerateBoundsError();
      }
      pppuStack_168 = (undefined ***)0x1102cc9a;
      __vbaStrCopy();
      (**(code **)(*param_1 + 0x3a8))();
      pppuStack_168 = &local_38;
      pppuStack_16c = (undefined ***)0x1102ccae;
      piVar6 = (int *)__vbaObjSet();
      local_c0 = (undefined **)&DAT_110046d4;
      local_c8 = 8;
      local_d0 = &DAT_110046d4;
      local_d8[0] = (undefined *)0x8;
      local_e0 = &DAT_110046d4;
      local_e8[0] = 8;
      local_f0 = &DAT_110046d4;
      local_f8[0] = 8;
      local_100 = param_1[0x1f];
      local_108[0] = 8;
      iVar3 = *piVar6;
      pppuStack_170 = (undefined ***)0xa;
      pppuStack_16c = (undefined ***)local_114;
      pppuStack_168 = (undefined ***)0x80020004;
      pppuStack_174 = (undefined ***)(param_1 + 0xf);
      ppuStack_178 = (undefined **)&local_c8;
      pppuStack_17c = (undefined ***)local_48;
      ppuStack_180 = (undefined **)0x1102cd4f;
      pppuStack_174 = (undefined ***)__vbaVarCat();
      ppuStack_178 = param_1 + 0x13;
      pppuStack_17c = (undefined ***)local_58;
      ppuStack_180 = (undefined **)0x1102cd5a;
      pppuStack_174 = (undefined ***)__vbaVarCat();
      ppuStack_178 = local_d8;
      pppuStack_17c = (undefined ***)local_68;
      ppuStack_180 = (undefined **)0x1102cd68;
      pppuStack_174 = (undefined ***)__vbaVarCat();
      ppuStack_178 = param_1 + 0x17;
      pppuStack_17c = (undefined ***)local_78;
      ppuStack_180 = (undefined **)0x1102cd73;
      pppuStack_174 = (undefined ***)__vbaVarCat();
      ppuStack_178 = (undefined **)local_e8;
      pppuStack_17c = (undefined ***)local_88;
      ppuStack_180 = (undefined **)0x1102cd84;
      pppuStack_174 = (undefined ***)__vbaVarCat();
      ppuStack_178 = param_1 + 0x1b;
      pppuStack_17c = (undefined ***)local_98;
      ppuStack_180 = (undefined **)0x1102cd92;
      pppuStack_174 = (undefined ***)__vbaVarCat();
      ppuStack_178 = (undefined **)local_f8;
      pppuStack_17c = (undefined ***)local_a8;
      ppuStack_180 = (undefined **)0x1102cda3;
      pppuStack_174 = (undefined ***)__vbaVarCat();
      ppuStack_178 = (undefined **)local_108;
      pppuStack_17c = (undefined ***)local_b8;
      ppuStack_180 = (undefined **)0x1102cdb4;
      pppuStack_174 = (undefined ***)__vbaVarCat();
      ppuStack_178 = &local_34;
      pppuStack_17c = (undefined ***)0x1102cdbf;
      pppuStack_174 = (undefined ***)__vbaStrVarVal();
      pppuStack_17c = (undefined ***)0x1102cdcf;
      ppuStack_178 = (undefined **)piVar6;
      iVar3 = (**(code **)(iVar3 + 0x1ec))();
      if (iVar3 < 0) {
        pppuStack_168 = (undefined ***)0x1ec;
        pppuStack_16c = (undefined ***)&DAT_11004650;
        ppuStack_178 = (undefined **)0x1102cde7;
        pppuStack_174 = (undefined ***)iVar3;
        pppuStack_170 = (undefined ***)piVar6;
        __vbaHresultCheckObj();
      }
      pppuStack_168 = (undefined ***)0x1102cdf0;
      __vbaFreeStr();
      pppuStack_168 = (undefined ***)0x1102cdf9;
      __vbaFreeObj();
      ppuVar4 = (undefined **)__vbaFreeVarList_exref;
      pppuStack_168 = (undefined ***)local_b8;
      pppuStack_16c = (undefined ***)local_a8;
      pppuStack_170 = (undefined ***)local_98;
      pppuStack_174 = (undefined ***)local_88;
      ppuStack_178 = local_78;
      pppuStack_17c = (undefined ***)local_68;
      ppuStack_180 = local_58;
      ppuStack_184 = (undefined **)local_48;
      ppuStack_188 = (undefined **)0x8;
      ppuStack_18c = (undefined **)0x1102ce2f;
      __vbaFreeVarList();
    }
  }
  pppuStack_168 = (undefined ***)0x1;
  pppuStack_16c = (undefined ***)0x1102ce3f;
  __vbaFileClose();
  pppuStack_168 = (undefined ***)param_1;
  pppuStack_16c = (undefined ***)0x1102ce48;
  pppuStack_16c = (undefined ***)(**(code **)(*param_1 + 0x3a8))();
  ppuVar4 = (undefined **)__vbaObjSet_exref;
  pppuStack_170 = &local_38;
  pppuStack_174 = (undefined ***)0x1102ce55;
  ppuVar5 = (undefined **)__vbaObjSet();
  pppuStack_16c = (undefined ***)&local_11c;
  pppuStack_174 = (undefined ***)0x1102ce67;
  pppuStack_170 = (undefined ***)ppuVar5;
  ppuVar8 = (undefined **)(**(code **)(*ppuVar5 + 0xd8))();
  if ((int)ppuVar8 < 0) {
    pppuStack_168 = (undefined ***)&DAT_11004650;
    pppuStack_174 = (undefined ***)0x1102ce7f;
    pppuStack_170 = (undefined ***)ppuVar8;
    pppuStack_16c = (undefined ***)ppuVar5;
    ppuVar8 = (undefined **)__vbaHresultCheckObj();
  }
  if (!SBORROW2((short)local_11c,1)) {
    local_28 = (undefined **)CONCAT22((short)((uint)ppuVar8 >> 0x10),(short)local_11c + -1);
    __vbaFreeObj();
    pppuStack_168 = (undefined ***)0x1102cea5;
    pppuStack_168 = (undefined ***)(**(code **)(*param_1 + 0x3a8))();
    pppuStack_16c = &local_38;
    pppuStack_170 = (undefined ***)0x1102ceac;
    ppuVar4 = (undefined **)__vbaObjSet();
    pppuStack_168 = (undefined ***)&local_11c;
    pppuStack_170 = (undefined ***)0x1102cebe;
    pppuStack_16c = (undefined ***)ppuVar4;
    ppuVar8 = (undefined **)(**(code **)(*ppuVar4 + 0xd8))();
    if ((int)ppuVar8 < 0) {
      pppuStack_168 = (undefined ***)&DAT_11004650;
      pppuStack_174 = (undefined ***)0x1102ced6;
      pppuStack_170 = (undefined ***)ppuVar8;
      pppuStack_16c = (undefined ***)ppuVar4;
      __vbaHresultCheckObj();
    }
    sVar1 = (short)local_11c + -1;
    ppuVar5 = (undefined **)CONCAT22((short)((uint)ppuVar5 >> 0x10),sVar1);
    if (!SBORROW2((short)local_11c,1)) {
      __vbaFreeObj();
      ppuVar8 = (undefined **)0x0;
      do {
        ppuVar4 = ppuVar8;
        sVar10 = (short)ppuVar4;
        if (sVar1 < sVar10) goto LAB_1102d074;
        pppuStack_168 = (undefined ***)0x1102cf0a;
        pppuStack_168 = (undefined ***)(**(code **)(*param_1 + 0x3a8))();
        pppuStack_16c = &local_38;
        pppuStack_170 = (undefined ***)0x1102cf15;
        ppuVar5 = (undefined **)__vbaObjSet();
        pppuStack_168 = (undefined ***)&local_34;
        pppuStack_16c = (undefined ***)local_28;
        pppuStack_174 = (undefined ***)0x1102cf28;
        pppuStack_170 = (undefined ***)ppuVar5;
        ppuVar8 = (undefined **)(**(code **)(*ppuVar5 + 0xe8))();
        if ((int)ppuVar8 < 0) {
          pppuStack_174 = (undefined ***)0xe8;
          ppuStack_178 = (undefined **)&DAT_11004650;
          ppuStack_184 = (undefined **)0x1102cf40;
          ppuStack_180 = ppuVar8;
          pppuStack_17c = (undefined ***)ppuVar5;
          __vbaHresultCheckObj();
        }
        local_34 = (undefined *)0x0;
        pppuStack_174 = (undefined ***)0x1102cf53;
        __vbaStrMove();
        pppuStack_174 = (undefined ***)0x1102cf5c;
        __vbaFreeObj();
        pppuStack_174 = (undefined ***)param_1;
        ppuStack_178 = (undefined **)0x1102cf65;
        ppuStack_178 = (undefined **)(**(code **)(*param_1 + 0x3b0))();
        pppuStack_17c = &local_38;
        ppuStack_180 = (undefined **)0x1102cf70;
        ppuVar5 = (undefined **)__vbaObjSet();
        local_c0 = (undefined **)CONCAT22(local_c0._2_2_,sVar10);
        local_c8 = 2;
        ppuStack_184 = (undefined **)0x2;
        ppuStack_180 = local_c4;
        pppuStack_17c = (undefined ***)local_c0;
        ppuStack_178 = local_bc;
        ppuStack_188 = (undefined **)local_2c;
        iStack_190 = 0x1102cfb3;
        ppuStack_18c = ppuVar5;
        ppuVar8 = (undefined **)(**(code **)(*ppuVar5 + 0x1ec))();
        if ((int)ppuVar8 < 0) {
          pppuStack_168 = (undefined ***)&DAT_11004650;
          pppuStack_174 = (undefined ***)0x1102cfcb;
          pppuStack_170 = (undefined ***)ppuVar8;
          pppuStack_16c = (undefined ***)ppuVar5;
          __vbaHresultCheckObj();
        }
        __vbaFreeObj();
        bVar11 = SBORROW2((short)local_28,1);
        ppuVar9 = (undefined **)CONCAT22(extraout_var,(short)local_28 + -1);
      } while ((!bVar11) &&
              (ppuVar8 = (undefined **)(uint)(ushort)(sVar10 + 1), local_28 = ppuVar9,
              !SCARRY2(sVar10,1)));
    }
  }
LAB_1102d1e0:
  __vbaErrorOverflow();
  pppuStack_17c = (undefined ***)&LAB_11001ae6;
  ppuStack_180 = ExceptionList;
  ppuStack_184 = (undefined **)0x1102d213;
  ExceptionList = &ppuStack_180;
  __vbaChkstk();
  ppuStack_188 = param_1;
  ppuStack_178 = (undefined **)&ppuStack_18c;
  pppuStack_174 = (undefined ***)&LAB_11001278;
  pppuStack_170 = (undefined ***)0x0;
  pppuStack_16c = (undefined ***)0x0;
  ppuStack_194 = (undefined **)0x1102d23a;
  ppuStack_18c = ppuVar5;
  ppuStack_184 = ppuVar4;
  (**(code **)(*piStack_158 + 4))();
  *puStack_150 = 0;
  ppuStack_194 = (undefined **)0x1;
  puStack_198 = (undefined4 *)0x1102d259;
  __vbaOnError();
  ppuStack_194 = (undefined **)0xffffffff;
  puStack_198 = (undefined4 *)0x1102d268;
  __vbaOnError();
  auStack_1dc[0] = 0x4008;
  ppuStack_194 = (undefined **)0x2;
  puStack_198 = auStack_1dc;
  uStack_19c = 0x1102d288;
  rtcDir();
  ppuStack_194 = (undefined **)0x1102d293;
  ppuStack_194 = (undefined **)__vbaStrMove();
  puStack_198 = (undefined4 *)&DAT_110044dc;
  uStack_19c = 0x1102d29f;
  iVar3 = __vbaStrCmp();
  ppuStack_194 = (undefined **)-(uint)(iVar3 != 0);
  puStack_198 = (undefined4 *)0x1102d2ae;
  __vbaStrBool();
  ppuStack_194 = (undefined **)0x1102d2b9;
  __vbaStrMove();
  ppuStack_194 = (undefined **)0x1102d2c2;
  __vbaFreeStr();
  ppuStack_194 = ppuStack_184;
  puStack_198 = (undefined4 *)0x1102d2d3;
  uVar2 = __vbaBoolStr();
  *(undefined2 *)(piStack_158 + 0x20) = uVar2;
  ppuStack_194 = (undefined **)0x1102d3ec;
  __vbaExitProc();
  return;
}


// ---- FUN_1102d1f0 @ 1102d1f0

void __cdecl FUN_1102d1f0(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 local_80 [2];
  undefined4 local_78;
  undefined4 uStack_40;
  undefined4 *puStack_3c;
  int iStack_38;
  int *piStack_34;
  void *pvStack_24;
  undefined1 *puStack_20;
  undefined1 *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_8;
  
  puStack_20 = &LAB_11001ae6;
  pvStack_24 = ExceptionList;
  ExceptionList = &pvStack_24;
  __vbaChkstk();
  local_1c = &stack0xffffffd0;
  local_18 = &LAB_11001278;
  local_14 = 0;
  local_10 = 0;
  piStack_34 = param_1;
  iStack_38 = 0x1102d23a;
  (**(code **)(*param_1 + 4))();
  *param_3 = 0;
  local_8 = 2;
  iStack_38 = 1;
  puStack_3c = (undefined4 *)0x1102d259;
  __vbaOnError();
  local_8 = 3;
  iStack_38 = 0xffffffff;
  puStack_3c = (undefined4 *)0x1102d268;
  __vbaOnError();
  local_8 = 4;
  local_78 = param_2;
  local_80[0] = 0x4008;
  iStack_38 = 2;
  puStack_3c = local_80;
  uStack_40 = 0x1102d288;
  rtcDir();
  iStack_38 = 0x1102d293;
  iStack_38 = __vbaStrMove();
  puStack_3c = (undefined4 *)&DAT_110044dc;
  uStack_40 = 0x1102d29f;
  iVar2 = __vbaStrCmp();
  iStack_38 = -(uint)(iVar2 != 0);
  puStack_3c = (undefined4 *)0x1102d2ae;
  __vbaStrBool();
  iStack_38 = 0x1102d2b9;
  __vbaStrMove();
  iStack_38 = 0x1102d2c2;
  __vbaFreeStr();
  local_8 = 5;
  puStack_3c = (undefined4 *)0x1102d2d3;
  uVar1 = __vbaBoolStr();
  *(undefined2 *)(param_1 + 0x20) = uVar1;
  iStack_38 = 0x1102d3ec;
  __vbaExitProc();
  return;
}


// ---- FUN_1102d460 @ 1102d460

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __cdecl FUN_1102d460(undefined **param_1)

{
  code *pcVar1;
  short sVar2;
  undefined2 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  int iVar8;
  undefined **ppuVar9;
  undefined2 extraout_var;
  undefined4 uVar10;
  code *pcVar11;
  bool bVar12;
  undefined4 auStack_1d8 [16];
  undefined4 uStack_198;
  undefined4 *puStack_194;
  code *pcStack_190;
  int iStack_18c;
  undefined **ppuStack_188;
  undefined **ppuStack_184;
  code *pcStack_180;
  undefined **ppuStack_17c;
  undefined ***pppuStack_178;
  undefined **ppuStack_174;
  undefined ***pppuStack_170;
  undefined ***pppuStack_16c;
  int *piStack_154;
  undefined4 local_108 [2];
  undefined *local_100;
  undefined4 local_f8 [2];
  undefined *local_f0;
  undefined4 local_e8 [2];
  undefined *local_e0;
  undefined4 local_d8 [2];
  undefined *local_d0;
  undefined4 local_c8;
  undefined **local_c4;
  undefined **local_c0;
  undefined4 *local_bc;
  undefined4 local_b8 [4];
  undefined4 local_a8 [4];
  undefined4 local_98 [4];
  undefined *local_88 [4];
  undefined4 local_78 [4];
  undefined *local_68 [4];
  undefined *local_58 [4];
  undefined4 local_48 [4];
  undefined **local_38;
  undefined4 local_34;
  short *local_30;
  undefined *local_2c;
  undefined4 local_28;
  void *pvStack_20;
  undefined1 *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  puStack_1c = &LAB_11001ae6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xfffffe98;
  local_14 = &DAT_110012d0;
  local_10 = 0;
  local_c = 0;
  pppuStack_16c = (undefined ***)param_1;
  pppuStack_170 = (undefined ***)0x1102d49d;
  ExceptionList = &pvStack_20;
  (**(code **)(*param_1 + 4))();
  local_2c = (undefined *)0x0;
  local_30 = (short *)0x0;
  local_34 = 0;
  local_38 = (undefined **)0x0;
  local_48[0] = 0;
  local_58[0] = (undefined *)0x0;
  local_68[0] = (undefined *)0x0;
  local_78[0] = 0;
  local_88[0] = (undefined *)0x0;
  local_98[0] = 0;
  local_a8[0] = 0;
  local_b8[0] = 0;
  local_c8 = 0;
  local_d8[0] = 0;
  local_e8[0] = 0;
  local_f8[0] = 0;
  local_108[0] = 0;
  pppuStack_170 = (undefined ***)&DAT_11004234;
  ppuStack_174 = (undefined **)0x1102d508;
  puVar4 = (undefined4 *)__vbaAptOffset();
  pppuStack_170 = (undefined ***)0x1;
  ppuStack_174 = (undefined **)0x1102d516;
  __vbaOnError();
  ppuVar9 = param_1 + 0x21;
  pppuStack_170 = (undefined ***)0x1102d529;
  __vbaStrCopy();
  pppuStack_16c = (undefined ***)0x1102d532;
  pppuStack_16c = (undefined ***)(**(code **)(*param_1 + 0x3ac))();
  pppuStack_170 = &local_38;
  ppuStack_174 = (undefined **)0x1102d53d;
  piVar5 = (int *)__vbaObjSet();
  pppuStack_170 = (undefined ***)0x1102d54c;
  pppuStack_16c = (undefined ***)piVar5;
  ppuVar6 = (undefined **)(**(code **)(*piVar5 + 0x1e8))();
  if ((int)ppuVar6 < 0) {
    pppuStack_170 = (undefined ***)0x1e8;
    ppuStack_174 = (undefined **)&DAT_11004650;
    pcStack_180 = (code *)0x1102d56a;
    ppuStack_17c = ppuVar6;
    pppuStack_178 = (undefined ***)piVar5;
    __vbaHresultCheckObj();
  }
  pppuStack_170 = (undefined ***)0x1102d573;
  __vbaFreeObj();
  pppuStack_170 = (undefined ***)param_1;
  ppuStack_174 = (undefined **)0x1102d57c;
  ppuStack_174 = (undefined **)(**(code **)(*param_1 + 0x3a8))();
  pppuStack_178 = &local_38;
  ppuStack_17c = (undefined **)0x1102d587;
  piVar5 = (int *)__vbaObjSet();
  pppuStack_178 = (undefined ***)0x1102d596;
  ppuStack_174 = (undefined **)piVar5;
  puVar7 = (undefined *)(**(code **)(*piVar5 + 0x1e8))();
  if ((int)puVar7 < 0) {
    pppuStack_178 = (undefined ***)0x1e8;
    ppuStack_17c = (undefined **)&DAT_11004650;
    ppuStack_188 = (undefined **)0x1102d5b4;
    ppuStack_184 = (undefined **)puVar7;
    pcStack_180 = (code *)piVar5;
    __vbaHresultCheckObj();
  }
  pppuStack_178 = (undefined ***)0x1102d5bd;
  __vbaFreeObj();
  pppuStack_178 = (undefined ***)0x1102d5cb;
  __vbaStrCopy();
  piVar5 = puVar4 + 0x440e503;
  if (*piVar5 == 0) {
    ppuStack_174 = (undefined **)&DAT_11004680;
    pppuStack_178 = (undefined ***)0x1102d5ed;
    pppuStack_170 = (undefined ***)piVar5;
    __vbaNew2();
  }
  piVar5 = (int *)*piVar5;
  pppuStack_170 = &local_38;
  pppuStack_178 = (undefined ***)0x1102d605;
  ppuStack_174 = (undefined **)piVar5;
  puVar7 = (undefined *)(**(code **)(*piVar5 + 0x14))();
  if ((int)puVar7 < 0) {
    pppuStack_178 = (undefined ***)0x14;
    ppuStack_17c = (undefined **)&DAT_11004670;
    ppuStack_188 = (undefined **)0x1102d620;
    ppuStack_184 = (undefined **)puVar7;
    pcStack_180 = (code *)piVar5;
    __vbaHresultCheckObj();
  }
  ppuVar6 = local_38;
  pppuStack_178 = (undefined ***)&local_34;
  ppuStack_17c = local_38;
  pcStack_180 = (code *)0x1102d633;
  iVar8 = (**(code **)(*local_38 + 0x50))();
  if (iVar8 < 0) {
    pcStack_180 = (code *)0x50;
    ppuStack_184 = (undefined **)&DAT_11004690;
    ppuStack_188 = ppuVar6;
    pcStack_190 = (code *)0x1102d64e;
    iStack_18c = iVar8;
    __vbaHresultCheckObj();
  }
  pcStack_180 = (code *)0x1102d659;
  __vbaStrCopy();
  pppuStack_178 = (undefined ***)0x1102d662;
  __vbaFreeStr();
  pppuStack_178 = (undefined ***)0x1102d66b;
  __vbaFreeObj();
  pppuStack_178 = (undefined ***)0x1;
  ppuStack_17c = (undefined **)*ppuVar9;
  pcStack_180 = (code *)0x1102d676;
  rtcRightCharBstr();
  pppuStack_178 = (undefined ***)0x1102d681;
  pppuStack_178 = (undefined ***)__vbaStrMove();
  ppuStack_17c = (undefined **)&DAT_110046a4;
  pcStack_180 = (code *)0x1102d68d;
  iVar8 = __vbaStrCmp();
  pppuStack_178 = (undefined ***)0x1102d6a0;
  __vbaFreeStr();
  pcVar11 = __vbaStrMove_exref;
  if (iVar8 != 0) {
    pppuStack_178 = (undefined ***)*ppuVar9;
    ppuStack_17c = (undefined **)&DAT_110046a4;
    pcStack_180 = (code *)0x1102d6b3;
    __vbaStrCat();
    pcVar11 = __vbaStrMove_exref;
    pppuStack_178 = (undefined ***)0x1102d6c0;
    __vbaStrMove();
    pppuStack_178 = (undefined ***)0x1102d6ca;
    __vbaStrCopy();
    pppuStack_170 = (undefined ***)0x1102d6d3;
    __vbaFreeStr();
  }
  pppuStack_170 = (undefined ***)*ppuVar9;
  ppuStack_174 = (undefined **)0x11004d68;
  pppuStack_178 = (undefined ***)0x1102d6e9;
  __vbaStrCat();
  pppuStack_170 = (undefined ***)0x1102d6f0;
  (*pcVar11)();
  pppuStack_170 = (undefined ***)0x1102d6fa;
  __vbaStrCopy();
  __vbaFreeStr();
  pppuStack_16c = (undefined ***)*ppuVar9;
  pppuStack_170 = (undefined ***)0x1102d70e;
  rtcRightCharBstr();
  (*pcVar11)();
  pppuStack_16c = (undefined ***)&DAT_110046a4;
  pppuStack_170 = (undefined ***)0x1102d721;
  iVar8 = __vbaStrCmp();
  __vbaFreeStr();
  if (iVar8 != 0) {
    pppuStack_16c = (undefined ***)&DAT_110046a4;
    pppuStack_170 = (undefined ***)0x1102d747;
    __vbaStrCat();
    __vbaStrMove();
    __vbaStrCopy();
    __vbaFreeStr();
  }
  __vbaStrCopy();
  __vbaStrCat();
  __vbaStrMove();
  __vbaStrCopy();
  __vbaFreeStr();
  iVar8 = (**(code **)(*param_1 + 0x7b0))();
  if (iVar8 < 0) {
    pppuStack_16c = (undefined ***)param_1;
    ppuStack_174 = (undefined **)0x1102d7d0;
    pppuStack_170 = (undefined ***)iVar8;
    __vbaHresultCheckObj();
  }
  __vbaFreeStr();
  if (*(short *)((int)param_1 + 0x82) == -1) {
    rtcChangeDir();
    pppuStack_16c = (undefined ***)0x1102d7fc;
    __vbaStrCat();
    __vbaStrMove();
    pppuStack_16c = (undefined ***)0xffffffff;
    pppuStack_170 = (undefined ***)0x1;
    ppuStack_174 = (undefined **)0x1102d814;
    __vbaFileOpen();
    __vbaFreeStr();
    ppuVar9 = (undefined **)__vbaVarCat_exref;
    pcVar11 = __vbaFreeVarList_exref;
    while (sVar2 = rtcEndOfFile(), sVar2 == 0) {
      pppuStack_16c = (undefined ***)&DAT_11004c94;
      pppuStack_170 = (undefined ***)0x1102d84b;
      __vbaInputFile();
      local_c0 = &local_2c;
      local_c8 = 0x4008;
      pppuStack_16c = (undefined ***)local_48;
      pppuStack_170 = (undefined ***)0x1102d874;
      rtcLeftCharVar();
      local_d0 = &DAT_110044e4;
      local_d8[0] = 0x8008;
      pppuStack_16c = (undefined ***)0x1102d899;
      sVar2 = __vbaVarTstEq();
      __vbaFreeVar();
      if (sVar2 != 0) {
        local_c0 = &local_2c;
        local_c8 = 0x4008;
        iVar8 = __vbaLenBstr();
        if (SBORROW4(iVar8,1)) goto LAB_1102e06d;
        pppuStack_16c = (undefined ***)0x1102d8eb;
        rtcLeftCharVar();
        __vbaStrVarMove();
        __vbaStrMove();
        __vbaFreeVar();
      }
      pppuStack_16c = (undefined ***)0x1102d918;
      iVar8 = __vbaStrCmp();
      if (iVar8 != 0) {
        local_c0 = (undefined **)&DAT_110046cc;
        local_c8 = 8;
        __vbaVarDup();
        pppuStack_16c = (undefined ***)local_48;
        pppuStack_170 = (undefined ***)local_2c;
        ppuStack_174 = local_58;
        pppuStack_178 = (undefined ***)0x1102d959;
        rtcSplit();
        pppuStack_16c = (undefined ***)0x1102d968;
        __vbaAryVar();
        pppuStack_16c = (undefined ***)0x1102d97f;
        __vbaAryCopy();
        pppuStack_16c = (undefined ***)0x2;
        pppuStack_170 = (undefined ***)0x1102d98b;
        (*pcVar11)();
        if ((local_30 == (short *)0x0) || (*local_30 != 1)) {
          iVar8 = __vbaGenerateBoundsError();
        }
        else {
          iVar8 = *(int *)(local_30 + 10);
          if (*(uint *)(local_30 + 8) <= (uint)-iVar8) {
            __vbaGenerateBoundsError();
          }
          iVar8 = iVar8 * -4;
        }
        local_c0 = *(undefined ***)(*(int *)(local_30 + 6) + iVar8);
        local_c8 = 8;
        __vbaVarCopy();
        if ((local_30 == (short *)0x0) || (*local_30 != 1)) {
          iVar8 = __vbaGenerateBoundsError();
        }
        else {
          iVar8 = *(int *)(local_30 + 10);
          if (*(uint *)(local_30 + 8) <= 1U - iVar8) {
            __vbaGenerateBoundsError();
          }
          iVar8 = (1U - iVar8) * 4;
        }
        local_c0 = *(undefined ***)(*(int *)(local_30 + 6) + iVar8);
        local_c8 = 8;
        __vbaVarCopy();
        if ((local_30 == (short *)0x0) || (*local_30 != 1)) {
          iVar8 = __vbaGenerateBoundsError();
        }
        else {
          iVar8 = *(int *)(local_30 + 10);
          if (*(uint *)(local_30 + 8) <= 2U - iVar8) {
            __vbaGenerateBoundsError();
          }
          iVar8 = (2U - iVar8) * 4;
        }
        local_c0 = *(undefined ***)(*(int *)(local_30 + 6) + iVar8);
        local_c8 = 8;
        __vbaVarCopy();
        if ((local_30 == (short *)0x0) || (*local_30 != 1)) {
          iVar8 = __vbaGenerateBoundsError();
        }
        else {
          iVar8 = *(int *)(local_30 + 10);
          if (*(uint *)(local_30 + 8) <= 3U - iVar8) {
            __vbaGenerateBoundsError();
          }
          iVar8 = (3U - iVar8) * 4;
        }
        local_c0 = *(undefined ***)(*(int *)(local_30 + 6) + iVar8);
        local_c8 = 8;
        __vbaVarCopy();
        if ((local_30 == (short *)0x0) || (*local_30 != 1)) {
          __vbaGenerateBoundsError();
        }
        else if (*(uint *)(local_30 + 8) <= 4U - *(int *)(local_30 + 10)) {
          __vbaGenerateBoundsError();
        }
        __vbaStrCopy();
        (**(code **)(*param_1 + 0x3a8))();
        piVar5 = (int *)__vbaObjSet();
        local_c0 = (undefined **)&DAT_110046d4;
        local_c8 = 8;
        local_d0 = &DAT_110046d4;
        local_d8[0] = 8;
        local_e0 = &DAT_110046d4;
        local_e8[0] = 8;
        local_f0 = &DAT_110046d4;
        local_f8[0] = 8;
        local_100 = param_1[0x1f];
        local_108[0] = 8;
        iVar8 = *piVar5;
        pppuStack_16c = (undefined ***)0xa;
        pppuStack_170 = (undefined ***)(param_1 + 0xf);
        ppuStack_174 = (undefined **)&local_c8;
        pppuStack_178 = (undefined ***)local_48;
        ppuStack_17c = (undefined **)0x1102dbfc;
        pppuStack_170 = (undefined ***)__vbaVarCat();
        ppuStack_174 = param_1 + 0x13;
        pppuStack_178 = (undefined ***)local_58;
        ppuStack_17c = (undefined **)0x1102dc07;
        pppuStack_170 = (undefined ***)__vbaVarCat();
        ppuStack_174 = (undefined **)local_d8;
        pppuStack_178 = (undefined ***)local_68;
        ppuStack_17c = (undefined **)0x1102dc15;
        pppuStack_170 = (undefined ***)__vbaVarCat();
        ppuStack_174 = param_1 + 0x17;
        pppuStack_178 = (undefined ***)local_78;
        ppuStack_17c = (undefined **)0x1102dc20;
        pppuStack_170 = (undefined ***)__vbaVarCat();
        ppuStack_174 = (undefined **)local_e8;
        pppuStack_178 = (undefined ***)local_88;
        ppuStack_17c = (undefined **)0x1102dc31;
        pppuStack_170 = (undefined ***)__vbaVarCat();
        ppuStack_174 = param_1 + 0x1b;
        pppuStack_178 = (undefined ***)local_98;
        ppuStack_17c = (undefined **)0x1102dc3f;
        pppuStack_170 = (undefined ***)__vbaVarCat();
        ppuStack_174 = (undefined **)local_f8;
        pppuStack_178 = (undefined ***)local_a8;
        ppuStack_17c = (undefined **)0x1102dc50;
        pppuStack_170 = (undefined ***)__vbaVarCat();
        ppuStack_174 = (undefined **)local_108;
        pppuStack_178 = (undefined ***)local_b8;
        ppuStack_17c = (undefined **)0x1102dc61;
        pppuStack_170 = (undefined ***)__vbaVarCat();
        ppuStack_174 = (undefined **)&local_34;
        pppuStack_178 = (undefined ***)0x1102dc6c;
        pppuStack_170 = (undefined ***)__vbaStrVarVal();
        pppuStack_178 = (undefined ***)0x1102dc7c;
        ppuStack_174 = (undefined **)piVar5;
        iVar8 = (**(code **)(iVar8 + 0x1ec))();
        if (iVar8 < 0) {
          ppuStack_174 = (undefined **)0x1102dc94;
          pppuStack_170 = (undefined ***)iVar8;
          pppuStack_16c = (undefined ***)piVar5;
          __vbaHresultCheckObj();
        }
        __vbaFreeStr();
        __vbaFreeObj();
        pcVar11 = __vbaFreeVarList_exref;
        pppuStack_16c = (undefined ***)local_98;
        pppuStack_170 = (undefined ***)local_88;
        ppuStack_174 = (undefined **)local_78;
        pppuStack_178 = (undefined ***)local_68;
        ppuStack_17c = local_58;
        pcStack_180 = (code *)local_48;
        ppuStack_184 = (undefined **)0x8;
        ppuStack_188 = (undefined **)0x1102dcdc;
        __vbaFreeVarList();
      }
    }
    __vbaFileClose();
    (**(code **)(*param_1 + 0x3a8))();
    pppuStack_16c = &local_38;
    pppuStack_170 = (undefined ***)0x1102dd02;
    pppuStack_16c = (undefined ***)__vbaObjSet();
    pppuStack_170 = (undefined ***)0x1102dd14;
    piVar5 = (int *)(**(code **)((int)*pppuStack_16c + 0xd8))();
    if ((int)piVar5 < 0) {
      pppuStack_170 = (undefined ***)0x1102dd2c;
      pppuStack_16c = (undefined ***)piVar5;
      piVar5 = (int *)__vbaHresultCheckObj();
    }
    local_28 = CONCAT22((short)((uint)piVar5 >> 0x10),0xffff);
    __vbaFreeObj();
    (**(code **)(*param_1 + 0x3a8))();
    pppuStack_16c = (undefined ***)0x1102dd59;
    piVar5 = (int *)__vbaObjSet();
    pppuStack_16c = (undefined ***)0x1102dd6b;
    ppuVar9 = (undefined **)(**(code **)(*piVar5 + 0xd8))();
    if ((int)ppuVar9 < 0) {
      pppuStack_170 = (undefined ***)0x1102dd83;
      pppuStack_16c = (undefined ***)ppuVar9;
      __vbaHresultCheckObj();
    }
    __vbaFreeObj();
    pcVar1 = (code *)0x0;
    while (pcVar11 = pcVar1, sVar2 = (short)pcVar11, sVar2 < 0) {
      (**(code **)(*param_1 + 0x3a8))();
      pppuStack_16c = (undefined ***)0x1102ddc2;
      ppuVar9 = (undefined **)__vbaObjSet();
      pppuStack_170 = (undefined ***)0x1102ddd5;
      pppuStack_16c = (undefined ***)ppuVar9;
      ppuVar6 = (undefined **)(**(code **)(*ppuVar9 + 0xe8))();
      if ((int)ppuVar6 < 0) {
        pppuStack_170 = (undefined ***)0xe8;
        ppuStack_174 = (undefined **)&DAT_11004650;
        pcStack_180 = (code *)0x1102dded;
        ppuStack_17c = ppuVar6;
        pppuStack_178 = (undefined ***)ppuVar9;
        __vbaHresultCheckObj();
      }
      local_34 = 0;
      pppuStack_170 = (undefined ***)0x1102de00;
      __vbaStrMove();
      pppuStack_170 = (undefined ***)0x1102de09;
      __vbaFreeObj();
      pppuStack_170 = (undefined ***)param_1;
      ppuStack_174 = (undefined **)0x1102de12;
      ppuStack_174 = (undefined **)(**(code **)(*param_1 + 0x3ac))();
      pppuStack_178 = &local_38;
      ppuStack_17c = (undefined **)0x1102de1d;
      ppuVar9 = (undefined **)__vbaObjSet();
      local_c0 = (undefined **)CONCAT22(local_c0._2_2_,sVar2);
      local_c8 = 2;
      pcStack_180 = (code *)0x2;
      ppuStack_17c = local_c4;
      pppuStack_178 = (undefined ***)local_c0;
      ppuStack_174 = (undefined **)local_bc;
      ppuStack_184 = (undefined **)local_2c;
      iStack_18c = 0x1102de60;
      ppuStack_188 = ppuVar9;
      ppuVar6 = (undefined **)(**(code **)(*ppuVar9 + 0x1ec))();
      if ((int)ppuVar6 < 0) {
        pppuStack_170 = (undefined ***)0x1102de78;
        pppuStack_16c = (undefined ***)ppuVar6;
        __vbaHresultCheckObj();
      }
      __vbaFreeObj();
      bVar12 = SBORROW2((short)local_28,1);
      uVar10 = CONCAT22(extraout_var,(short)local_28 + -1);
      if ((bVar12) ||
         (pcVar1 = (code *)(uint)(ushort)(sVar2 + 1), local_28 = uVar10, SCARRY2(sVar2,1))) {
LAB_1102e06d:
        __vbaErrorOverflow();
        pppuStack_178 = (undefined ***)&LAB_11001ae6;
        ppuStack_17c = ExceptionList;
        pcStack_180 = (code *)0x1102e0a3;
        ExceptionList = &ppuStack_17c;
        __vbaChkstk();
        ppuStack_174 = (undefined **)&ppuStack_188;
        ppuStack_188 = param_1;
        pppuStack_170 = (undefined ***)&DAT_110012f8;
        pppuStack_16c = (undefined ***)0x0;
        pcStack_190 = (code *)0x1102e0ca;
        ppuStack_184 = ppuVar9;
        pcStack_180 = pcVar11;
        (**(code **)(*piStack_154 + 4))();
        *puVar4 = 0;
        pcStack_190 = (code *)0x1;
        puStack_194 = (undefined4 *)0x1102e0e9;
        __vbaOnError();
        pcStack_190 = (code *)0xffffffff;
        puStack_194 = (undefined4 *)0x1102e0f8;
        __vbaOnError();
        auStack_1d8[0] = 0x4008;
        pcStack_190 = (code *)0x2;
        puStack_194 = auStack_1d8;
        uStack_198 = 0x1102e118;
        rtcDir();
        pcStack_190 = (code *)0x1102e123;
        pcStack_190 = (code *)__vbaStrMove();
        puStack_194 = (undefined4 *)&DAT_110044dc;
        uStack_198 = 0x1102e12f;
        iVar8 = __vbaStrCmp();
        pcStack_190 = (code *)-(uint)(iVar8 != 0);
        puStack_194 = (undefined4 *)0x1102e13e;
        __vbaStrBool();
        pcStack_190 = (code *)0x1102e149;
        __vbaStrMove();
        pcStack_190 = (code *)0x1102e152;
        __vbaFreeStr();
        pcStack_190 = pcStack_180;
        puStack_194 = (undefined4 *)0x1102e163;
        uVar3 = __vbaBoolStr();
        *(undefined2 *)((int)piStack_154 + 0x82) = uVar3;
        pcStack_190 = (code *)0x1102e27c;
        __vbaExitProc();
        return;
      }
    }
  }
  else {
    (**(code **)(*param_1 + 0x3ac))();
    pppuStack_16c = &local_38;
    pppuStack_170 = (undefined ***)0x1102dec1;
    ppuStack_17c = (undefined **)__vbaObjSet();
    local_c0 = (undefined **)0x80020004;
    local_c8 = 10;
    ppuStack_174 = (undefined **)0xa;
    pppuStack_170 = (undefined ***)local_c4;
    pppuStack_16c = (undefined ***)0x80020004;
    pppuStack_178 = (undefined ***)0x11004db4;
    pcStack_180 = (code *)0x1102df03;
    ppuVar9 = (undefined **)(**(code **)(*ppuStack_17c + 0x1ec))();
    if ((int)ppuVar9 < 0) {
      pppuStack_170 = (undefined ***)0x1102df1b;
      pppuStack_16c = (undefined ***)ppuVar9;
      __vbaHresultCheckObj();
    }
    __vbaFreeObj();
  }
  __vbaExitProc();
  __vbaFreeStr();
  pppuStack_16c = (undefined ***)0x1102e04d;
  __vbaAryDestruct();
  return;
}


// ---- FUN_1102e080 @ 1102e080

void __cdecl FUN_1102e080(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 local_80 [2];
  undefined4 local_78;
  undefined4 uStack_40;
  undefined4 *puStack_3c;
  int iStack_38;
  int *piStack_34;
  void *pvStack_24;
  undefined1 *puStack_20;
  undefined1 *local_1c;
  undefined *local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_8;
  
  puStack_20 = &LAB_11001ae6;
  pvStack_24 = ExceptionList;
  ExceptionList = &pvStack_24;
  __vbaChkstk();
  local_1c = &stack0xffffffd0;
  local_18 = &DAT_110012f8;
  local_14 = 0;
  local_10 = 0;
  piStack_34 = param_1;
  iStack_38 = 0x1102e0ca;
  (**(code **)(*param_1 + 4))();
  *param_3 = 0;
  local_8 = 2;
  iStack_38 = 1;
  puStack_3c = (undefined4 *)0x1102e0e9;
  __vbaOnError();
  local_8 = 3;
  iStack_38 = 0xffffffff;
  puStack_3c = (undefined4 *)0x1102e0f8;
  __vbaOnError();
  local_8 = 4;
  local_78 = param_2;
  local_80[0] = 0x4008;
  iStack_38 = 2;
  puStack_3c = local_80;
  uStack_40 = 0x1102e118;
  rtcDir();
  iStack_38 = 0x1102e123;
  iStack_38 = __vbaStrMove();
  puStack_3c = (undefined4 *)&DAT_110044dc;
  uStack_40 = 0x1102e12f;
  iVar2 = __vbaStrCmp();
  iStack_38 = -(uint)(iVar2 != 0);
  puStack_3c = (undefined4 *)0x1102e13e;
  __vbaStrBool();
  iStack_38 = 0x1102e149;
  __vbaStrMove();
  iStack_38 = 0x1102e152;
  __vbaFreeStr();
  local_8 = 5;
  puStack_3c = (undefined4 *)0x1102e163;
  uVar1 = __vbaBoolStr();
  *(undefined2 *)((int)param_1 + 0x82) = uVar1;
  iStack_38 = 0x1102e27c;
  __vbaExitProc();
  return;
}


// ---- FUN_1102e2f0 @ 1102e2f0

void __cdecl FUN_1102e2f0(int *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 local_a4 [9];
  undefined4 local_80;
  undefined4 local_70;
  undefined4 local_60;
  undefined4 local_50;
  undefined4 local_40;
  undefined4 local_30;
  undefined4 local_2c;
  short *local_28;
  short *local_24;
  void *pvStack_20;
  undefined1 *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  puStack_1c = &LAB_11001ae6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffff30;
  local_14 = &DAT_11001350;
  local_10 = 0;
  local_c = 0;
  local_24 = (short *)0x0;
  local_28 = (short *)0x0;
  local_2c = 0;
  local_30 = 0;
  local_40 = 0;
  local_50 = 0;
  local_60 = 0;
  local_70 = 0;
  local_80 = 0;
  local_a4[0] = 0;
  ExceptionList = &pvStack_20;
  __vbaOnError(1);
  __vbaRedim(0x80,4,&local_24,3,1,4,0);
  pcVar4 = __vbaGenerateBoundsError_exref;
  if ((local_24 == (short *)0x0) || (*local_24 != 1)) {
    iVar3 = __vbaGenerateBoundsError();
    pcVar4 = __vbaGenerateBoundsError_exref;
  }
  else {
    iVar3 = *(int *)(local_24 + 10);
    if (*(uint *)(local_24 + 8) <= (uint)-iVar3) {
      __vbaGenerateBoundsError();
    }
    iVar3 = iVar3 * -4;
  }
  *(undefined4 *)(*(int *)(local_24 + 6) + iVar3) = 0xe;
  if ((local_24 == (short *)0x0) || (*local_24 != 1)) {
    iVar3 = (*pcVar4)();
  }
  else {
    iVar3 = *(int *)(local_24 + 10);
    if (*(uint *)(local_24 + 8) <= 1U - iVar3) {
      (*pcVar4)();
    }
    iVar3 = (1U - iVar3) * 4;
  }
  *(undefined4 *)(*(int *)(local_24 + 6) + iVar3) = 0x31;
  if ((local_24 == (short *)0x0) || (*local_24 != 1)) {
    iVar3 = (*pcVar4)();
  }
  else {
    iVar3 = *(int *)(local_24 + 10);
    if (*(uint *)(local_24 + 8) <= 2U - iVar3) {
      (*pcVar4)();
    }
    iVar3 = (2U - iVar3) * 4;
  }
  *(undefined4 *)(*(int *)(local_24 + 6) + iVar3) = 0x59;
  if ((local_24 == (short *)0x0) || (*local_24 != 1)) {
    iVar3 = (*pcVar4)();
  }
  else {
    iVar3 = *(int *)(local_24 + 10);
    if (*(uint *)(local_24 + 8) <= 3U - iVar3) {
      (*pcVar4)();
    }
    iVar3 = (3U - iVar3) * 4;
  }
  *(undefined4 *)(*(int *)(local_24 + 6) + iVar3) = 0x87;
  if ((local_24 == (short *)0x0) || (*local_24 != 1)) {
    iVar3 = (*pcVar4)();
  }
  else {
    iVar3 = *(int *)(local_24 + 10);
    if (*(uint *)(local_24 + 8) <= 4U - iVar3) {
      (*pcVar4)();
    }
    iVar3 = (4U - iVar3) * 4;
  }
  *(undefined4 *)(*(int *)(local_24 + 6) + iVar3) = 0xaf;
  uVar1 = (**(code **)(*param_1 + 0x3b0))(param_1);
  piVar2 = (int *)__vbaObjSet(&local_30,uVar1);
  iVar3 = (**(code **)(*piVar2 + 0x168))(piVar2,local_a4);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_11004650,0x168);
  }
  __vbaAryLock(&local_28,local_24);
  if ((local_28 == (short *)0x0) || (*local_28 != 1)) {
    iVar3 = (*pcVar4)();
  }
  else {
    iVar3 = *(int *)(local_28 + 10);
    if (*(uint *)(local_28 + 8) <= (uint)-iVar3) {
      (*pcVar4)();
    }
    iVar3 = iVar3 * -4;
  }
  iVar3 = *(int *)(local_28 + 6) + iVar3;
  uVar6 = 5;
  uVar5 = 0x192;
  uVar1 = local_a4[0];
  FUN_11004b74();
  __vbaSetSystemError(uVar1,uVar5,uVar6,iVar3);
  __vbaAryUnlock(&local_28);
  __vbaFreeObj();
  uVar1 = (**(code **)(*param_1 + 0x3ac))(param_1);
  piVar2 = (int *)__vbaObjSet(&local_30,uVar1);
  iVar3 = (**(code **)(*piVar2 + 0x168))(piVar2,local_a4);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_11004650,0x168);
  }
  __vbaAryLock(&local_28,local_24);
  if ((local_28 == (short *)0x0) || (*local_28 != 1)) {
    iVar3 = __vbaGenerateBoundsError();
  }
  else {
    iVar3 = *(int *)(local_28 + 10);
    if (*(uint *)(local_28 + 8) <= (uint)-iVar3) {
      __vbaGenerateBoundsError();
    }
    iVar3 = iVar3 * -4;
  }
  iVar3 = *(int *)(local_28 + 6) + iVar3;
  uVar6 = 5;
  uVar5 = 0x192;
  uVar1 = local_a4[0];
  FUN_11004b74();
  __vbaSetSystemError(uVar1,uVar5,uVar6,iVar3);
  __vbaAryUnlock(&local_28);
  __vbaFreeObj();
  uVar1 = (**(code **)(*param_1 + 0x3a8))(param_1);
  piVar2 = (int *)__vbaObjSet(&local_30,uVar1);
  iVar3 = (**(code **)(*piVar2 + 0x168))(piVar2,local_a4);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_11004650,0x168);
  }
  __vbaAryLock(&local_28,local_24);
  if ((local_28 == (short *)0x0) || (*local_28 != 1)) {
    iVar3 = __vbaGenerateBoundsError();
  }
  else {
    iVar3 = *(int *)(local_28 + 10);
    if (*(uint *)(local_28 + 8) <= (uint)-iVar3) {
      __vbaGenerateBoundsError();
    }
    iVar3 = iVar3 * -4;
  }
  iVar3 = *(int *)(local_28 + 6) + iVar3;
  uVar6 = 5;
  uVar5 = 0x192;
  uVar1 = local_a4[0];
  FUN_11004b74();
  __vbaSetSystemError(uVar1,uVar5,uVar6,iVar3);
  __vbaAryUnlock(&local_28);
  __vbaFreeObj();
  __vbaExitProc();
  __vbaAryDestruct(0,&local_24);
  return;
}


// ---- FUN_1102e7c0 @ 1102e7c0

void FUN_1102e7c0(void)

{
  short sVar1;
  int iVar2;
  short sVar3;
  void *pvStack_20;
  undefined1 *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  puStack_1c = &LAB_11001ae6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffff24;
  local_14 = &DAT_11001378;
  local_10 = 0;
  local_c = 0;
  sVar3 = 0;
  ExceptionList = &pvStack_20;
  iVar2 = __vbaAptOffset(&DAT_11004234);
  __vbaOnError(1);
  __vbaStrCopy();
  __vbaStrCopy();
  rtcDir();
  __vbaVarMove();
  sVar1 = __vbaVarTstNe();
  if (sVar1 != 0) {
    sVar3 = -1;
  }
  if (sVar3 == 0) {
    rtcMakeDir();
  }
  if (*(int *)(&DAT_11039420 + iVar2) == 0) {
    __vbaNew2();
  }
  iVar2 = (**(code **)(**(int **)(&DAT_11039420 + iVar2) + 0x158))();
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2);
    __vbaExitProc();
  }
  else {
    __vbaExitProc();
  }
  __vbaFreeVar();
  __vbaFreeStr();
  return;
}


// ---- FUN_1102ea30 @ 1102ea30

void __cdecl FUN_1102ea30(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  undefined4 local_9c [9];
  undefined4 local_78;
  undefined4 local_68;
  undefined4 local_58;
  undefined4 local_48;
  undefined4 local_38;
  undefined4 local_28;
  undefined4 local_24;
  void *pvStack_20;
  undefined1 *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  uint local_10;
  undefined4 local_c;
  
  puStack_1c = &LAB_11001ae6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffff34;
  local_14 = &DAT_110013a0;
  local_10 = param_1 & 1;
  piVar5 = (int *)(param_1 & 0xfffffffe);
  local_c = 0;
  ExceptionList = &pvStack_20;
  (**(code **)(*piVar5 + 4))(piVar5);
  local_24 = 0;
  local_28 = 0;
  local_38 = 0;
  local_48 = 0;
  local_58 = 0;
  local_68 = 0;
  local_78 = 0;
  local_9c[0] = 0;
  iVar1 = __vbaAptOffset(&DAT_11004234);
  __vbaOnError(1);
  __vbaRaiseEvent(piVar5,4,0);
  uVar2 = (**(code **)(*piVar5 + 0x3b4))(piVar5);
  piVar3 = (int *)__vbaObjSet(&local_28,uVar2);
  iVar4 = (**(code **)(*piVar3 + 0xe0))(piVar3,local_9c);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar3,&DAT_11005228,0xe0);
  }
  *(undefined2 *)(piVar5 + 0x1b) = (undefined2)local_9c[0];
  __vbaFreeObj();
  if ((short)piVar5[0x1b] == 1) {
    piVar3 = (int *)(&DAT_11039420 + iVar1);
    if (*piVar3 == 0) {
      __vbaNew2(&DAT_110051e4,piVar3);
    }
    piVar3 = (int *)*piVar3;
    iVar4 = (**(code **)(*piVar3 + 0x38))(piVar3,0xffffffff);
  }
  else {
    piVar3 = (int *)(&DAT_11039420 + iVar1);
    if (*piVar3 == 0) {
      __vbaNew2(&DAT_110051e4,piVar3);
    }
    piVar3 = (int *)*piVar3;
    iVar4 = (**(code **)(*piVar3 + 0x38))(piVar3,0);
  }
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar3,&DAT_110051d4,0x38);
  }
  piVar3 = (int *)(&DAT_11039420 + iVar1);
  if (*piVar3 == 0) {
    __vbaNew2(&DAT_110051e4,piVar3);
  }
  piVar3 = (int *)*piVar3;
  iVar1 = (**(code **)(*piVar3 + 0x34))(piVar3,local_9c);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar3,&DAT_110051d4,0x34);
  }
  iVar1 = (**(code **)(*(int *)piVar5[0x1a] + 0x38))((int *)piVar5[0x1a],local_9c[0]);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar5[0x1a],&DAT_110051d4,0x38);
  }
  __vbaExitProc();
  return;
}


// ---- FUN_1102ecf0 @ 1102ecf0

void __cdecl FUN_1102ecf0(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  undefined4 local_9c [9];
  undefined4 local_78;
  undefined4 local_68;
  undefined4 local_58;
  undefined4 local_48;
  undefined4 local_38;
  undefined4 local_28;
  undefined4 local_24;
  void *pvStack_20;
  undefined1 *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  uint local_10;
  undefined4 local_c;
  
  puStack_1c = &LAB_11001ae6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffff34;
  local_14 = &DAT_110013c8;
  local_10 = param_1 & 1;
  piVar5 = (int *)(param_1 & 0xfffffffe);
  local_c = 0;
  ExceptionList = &pvStack_20;
  (**(code **)(*piVar5 + 4))(piVar5);
  local_24 = 0;
  local_28 = 0;
  local_38 = 0;
  local_48 = 0;
  local_58 = 0;
  local_68 = 0;
  local_78 = 0;
  local_9c[0] = 0;
  iVar1 = __vbaAptOffset(&DAT_11004234);
  __vbaOnError(1);
  __vbaRaiseEvent(piVar5,3,0);
  uVar2 = (**(code **)(*piVar5 + 0x3bc))(piVar5);
  piVar3 = (int *)__vbaObjSet(&local_28,uVar2);
  iVar4 = (**(code **)(*piVar3 + 0xe0))(piVar3,local_9c);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar3,&DAT_11005228,0xe0);
  }
  *(undefined2 *)((int)piVar5 + 0x6e) = (undefined2)local_9c[0];
  __vbaFreeObj();
  if (*(short *)((int)piVar5 + 0x6e) == 1) {
    piVar3 = (int *)(&DAT_11039420 + iVar1);
    if (*piVar3 == 0) {
      __vbaNew2(&DAT_110051e4,piVar3);
    }
    piVar3 = (int *)*piVar3;
    iVar4 = (**(code **)(*piVar3 + 0x30))(piVar3,0xffffffff);
  }
  else {
    piVar3 = (int *)(&DAT_11039420 + iVar1);
    if (*piVar3 == 0) {
      __vbaNew2(&DAT_110051e4,piVar3);
    }
    piVar3 = (int *)*piVar3;
    iVar4 = (**(code **)(*piVar3 + 0x30))(piVar3,0);
  }
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar3,&DAT_110051d4,0x30);
  }
  piVar3 = (int *)(&DAT_11039420 + iVar1);
  if (*piVar3 == 0) {
    __vbaNew2(&DAT_110051e4,piVar3);
  }
  piVar3 = (int *)*piVar3;
  iVar1 = (**(code **)(*piVar3 + 0x2c))(piVar3,local_9c);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar3,&DAT_110051d4,0x2c);
  }
  iVar1 = (**(code **)(*(int *)piVar5[0x1a] + 0x30))((int *)piVar5[0x1a],local_9c[0]);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar5[0x1a],&DAT_110051d4,0x30);
  }
  __vbaExitProc();
  return;
}


// ---- FUN_1102efb0 @ 1102efb0

void __cdecl FUN_1102efb0(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  undefined4 local_9c [9];
  undefined4 local_78;
  undefined4 local_68;
  undefined4 local_58;
  undefined4 local_48;
  undefined4 local_38;
  undefined4 local_28;
  undefined4 local_24;
  void *pvStack_20;
  undefined1 *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  uint local_10;
  undefined4 local_c;
  
  puStack_1c = &LAB_11001ae6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffff34;
  local_14 = &DAT_110013f0;
  local_10 = param_1 & 1;
  piVar5 = (int *)(param_1 & 0xfffffffe);
  local_c = 0;
  ExceptionList = &pvStack_20;
  (**(code **)(*piVar5 + 4))(piVar5);
  local_24 = 0;
  local_28 = 0;
  local_38 = 0;
  local_48 = 0;
  local_58 = 0;
  local_68 = 0;
  local_78 = 0;
  local_9c[0] = 0;
  iVar1 = __vbaAptOffset(&DAT_11004234);
  __vbaOnError(1);
  __vbaRaiseEvent(piVar5,2,0);
  uVar2 = (**(code **)(*piVar5 + 0x3ac))(piVar5);
  piVar3 = (int *)__vbaObjSet(&local_28,uVar2);
  iVar4 = (**(code **)(*piVar3 + 0xe0))(piVar3,local_9c);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar3,&DAT_11005228,0xe0);
  }
  *(undefined2 *)(piVar5 + 0x1c) = (undefined2)local_9c[0];
  __vbaFreeObj();
  if ((short)piVar5[0x1c] == 1) {
    piVar3 = (int *)(&DAT_11039420 + iVar1);
    if (*piVar3 == 0) {
      __vbaNew2(&DAT_110051e4,piVar3);
    }
    piVar3 = (int *)*piVar3;
    iVar4 = (**(code **)(*piVar3 + 0x40))(piVar3,0xffffffff);
  }
  else {
    piVar3 = (int *)(&DAT_11039420 + iVar1);
    if (*piVar3 == 0) {
      __vbaNew2(&DAT_110051e4,piVar3);
    }
    piVar3 = (int *)*piVar3;
    iVar4 = (**(code **)(*piVar3 + 0x40))(piVar3,0);
  }
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar3,&DAT_110051d4,0x40);
  }
  piVar3 = (int *)(&DAT_11039420 + iVar1);
  if (*piVar3 == 0) {
    __vbaNew2(&DAT_110051e4,piVar3);
  }
  piVar3 = (int *)*piVar3;
  iVar1 = (**(code **)(*piVar3 + 0x3c))(piVar3,local_9c);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar3,&DAT_110051d4,0x3c);
  }
  iVar1 = (**(code **)(*(int *)piVar5[0x1a] + 0x40))((int *)piVar5[0x1a],local_9c[0]);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar5[0x1a],&DAT_110051d4,0x40);
  }
  __vbaExitProc();
  return;
}


// ---- FUN_1102f270 @ 1102f270

void __cdecl FUN_1102f270(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  undefined4 local_28;
  undefined4 local_24;
  void *pvStack_20;
  undefined1 *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  uint local_10;
  undefined4 local_c;
  
  puStack_1c = &LAB_11001ae6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffff40;
  local_14 = &DAT_11001418;
  local_10 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  local_c = 0;
  ExceptionList = &pvStack_20;
  (**(code **)(*piVar4 + 4))(piVar4);
  local_24 = 0;
  local_28 = 0;
  __vbaOnError(1);
  __vbaRaiseEvent(piVar4,0xc,0);
  iVar1 = (**(code **)(*piVar4 + 0x818))(piVar4);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar4,&DAT_11004fa8,0x818);
  }
  uVar2 = (**(code **)(*piVar4 + 0x3bc))(piVar4);
  piVar3 = (int *)__vbaObjSet(&local_28,uVar2);
  iVar1 = (**(code **)(*piVar3 + 0xe4))(piVar3,0);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar3,&DAT_11005228,0xe4);
  }
  __vbaFreeObj();
  uVar2 = (**(code **)(*piVar4 + 0x3b4))(piVar4);
  piVar3 = (int *)__vbaObjSet(&local_28,uVar2);
  iVar1 = (**(code **)(*piVar3 + 0xe4))(piVar3,0);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar3,&DAT_11005228,0xe4);
  }
  __vbaFreeObj();
  uVar2 = (**(code **)(*piVar4 + 0x3ac))(piVar4);
  piVar3 = (int *)__vbaObjSet(&local_28,uVar2);
  iVar1 = (**(code **)(*piVar3 + 0xe4))(piVar3,0);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar3,&DAT_11005228,0xe4);
  }
  __vbaFreeObj();
  uVar2 = (**(code **)(*piVar4 + 0x3c0))(piVar4);
  piVar3 = (int *)__vbaObjSet(&local_28,uVar2);
  iVar1 = (**(code **)(*piVar3 + 0xa4))(piVar3,&DAT_110044dc);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar3,&DAT_11005304,0xa4);
  }
  __vbaFreeObj();
  uVar2 = (**(code **)(*piVar4 + 0x3b8))(piVar4);
  piVar3 = (int *)__vbaObjSet(&local_28,uVar2);
  iVar1 = (**(code **)(*piVar3 + 0xa4))(piVar3,&DAT_110044dc);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar3,&DAT_11005304,0xa4);
  }
  __vbaFreeObj();
  uVar2 = (**(code **)(*piVar4 + 0x3b0))(piVar4);
  piVar3 = (int *)__vbaObjSet(&local_28,uVar2);
  iVar1 = (**(code **)(*piVar3 + 0xa4))(piVar3,&DAT_110044dc);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar3,&DAT_11005304,0xa4);
  }
  __vbaFreeObj();
  uVar2 = (**(code **)(*piVar4 + 0x3cc))(piVar4);
  piVar3 = (int *)__vbaObjSet(&local_28,uVar2);
  iVar1 = (**(code **)(*piVar3 + 0x8c))(piVar3,0xffffffff);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar3,&DAT_11005314,0x8c);
  }
  __vbaFreeObj();
  uVar2 = (**(code **)(*piVar4 + 0x3cc))(piVar4);
  piVar4 = (int *)__vbaObjSet(&local_28,uVar2);
  iVar1 = (**(code **)(*piVar4 + 0x1a4))(piVar4);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar4,&DAT_11005314,0x1a4);
  }
  __vbaFreeObj();
  __vbaExitProc();
  return;
}


// ---- FUN_1102f630 @ 1102f630

void __cdecl FUN_1102f630(uint param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  bool bVar6;
  undefined1 *puVar7;
  int *piVar8;
  int *local_f8 [5];
  undefined4 local_e4;
  undefined4 local_e0 [2];
  undefined4 local_d8;
  undefined4 local_d0 [2];
  undefined *local_c8;
  undefined4 local_c0 [2];
  wchar_t *local_b8;
  undefined4 local_b0 [4];
  undefined4 local_a0 [4];
  undefined4 local_90 [2];
  undefined4 local_88;
  undefined4 local_80 [2];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64 [4];
  undefined4 local_54;
  undefined4 local_50 [4];
  undefined4 local_40 [4];
  undefined4 local_30 [4];
  void *pvStack_20;
  undefined1 *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  uint local_10;
  undefined4 local_c;
  
  puStack_1c = &LAB_11001ae6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xfffffed8;
  local_14 = &DAT_11001440;
  local_10 = param_1 & 1;
  piVar5 = (int *)(param_1 & 0xfffffffe);
  local_c = 0;
  ExceptionList = &pvStack_20;
  (**(code **)(*piVar5 + 4))(piVar5);
  local_30[0] = 0;
  local_40[0] = 0;
  local_50[0] = 0;
  local_54 = 0;
  local_64[0] = 0;
  local_68 = 0;
  local_6c = 0;
  local_70 = 0;
  local_80[0] = 0;
  local_90[0] = 0;
  local_a0[0] = 0;
  local_b0[0] = 0;
  local_c0[0] = 0;
  local_d0[0] = 0;
  local_e0[0] = 0;
  local_e4 = 0;
  local_f8[0] = (int *)0x0;
  iVar1 = __vbaAptOffset(&DAT_11004234);
  __vbaOnError(1);
  iVar2 = (**(code **)(*piVar5 + 0xa4))(piVar5,0xb);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar5,&DAT_11004f78,0xa4);
  }
  piVar4 = piVar5;
  (**(code **)(*piVar5 + 0x81c))(piVar5);
  __vbaRaiseEvent(piVar5,0xb,0);
  rtcGetDateVar(local_80);
  __vbaVarMove();
  local_b8 = L"mmddyy";
  local_c0[0] = 8;
  __vbaVarDup();
  rtcVarFromFormatVar(local_90,local_64,local_80,1,1);
  __vbaVarMove();
  __vbaFreeVar(piVar4);
  iVar2 = *piVar5;
  uVar3 = __vbaStrVarVal(&local_68,local_30);
  iVar2 = (**(code **)(iVar2 + 0x80c))(piVar5,uVar3);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar5,&DAT_11004fa8,0x80c);
  }
  __vbaFreeStr();
  iVar2 = (**(code **)(*piVar5 + 0x808))(piVar5,&local_68);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar5,&DAT_11004fa8,0x808);
  }
  local_78 = local_68;
  local_88 = 2;
  local_90[0] = 2;
  local_68 = 0;
  local_80[0] = 8;
  rtcMidCharVar(local_a0,local_80,1,local_90);
  __vbaVarMove();
  __vbaFreeVarList(2,local_80,local_90);
  iVar2 = (**(code **)(*piVar5 + 0x808))(piVar5,&local_68);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar5,&DAT_11004fa8,0x808);
  }
  local_78 = local_68;
  local_88 = 2;
  local_90[0] = 2;
  local_68 = 0;
  local_80[0] = 8;
  rtcMidCharVar(local_a0,local_80,3,local_90);
  __vbaVarMove();
  __vbaFreeVarList(2,local_80,local_90);
  iVar2 = (**(code **)(*piVar5 + 0x808))(piVar5,&local_68);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar5,&DAT_11004fa8,0x808);
  }
  local_78 = local_68;
  local_88 = 2;
  local_90[0] = 2;
  local_68 = 0;
  local_80[0] = 8;
  rtcMidCharVar(local_a0,local_80,5,local_90);
  __vbaStrVarMove(local_a0);
  __vbaStrMove();
  __vbaFreeVarList(3,local_80,local_90,local_a0);
  local_b8 = L"_";
  local_c0[0] = 8;
  local_c8 = &DAT_11005380;
  local_d0[0] = 8;
  local_d8 = local_54;
  local_e0[0] = 8;
  iVar2 = *piVar5;
  uVar3 = __vbaVarCat(local_80,local_c0,local_50);
  uVar3 = __vbaVarCat(local_90,local_40,uVar3);
  uVar3 = __vbaVarCat(local_a0,local_d0,uVar3);
  uVar3 = __vbaVarCat(local_b0,local_e0,uVar3);
  uVar3 = __vbaStrVarVal(&local_68,uVar3);
  iVar2 = (**(code **)(iVar2 + 0x80c))(piVar5,uVar3);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar5,&DAT_11004fa8,0x80c);
  }
  __vbaFreeStr();
  __vbaFreeVarList(4,local_80,local_90,local_a0,local_b0);
  uVar3 = (**(code **)(*piVar5 + 0x3c4))(piVar5);
  piVar4 = (int *)__vbaObjSet(&local_70,uVar3);
  iVar2 = (**(code **)(*piVar5 + 0x808))(piVar5,&local_68);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar5,&DAT_11004fa8,0x808);
  }
  iVar2 = *piVar4;
  __vbaStrCat(local_68,L"C:\\Backups\\");
  uVar3 = __vbaStrMove();
  iVar2 = (**(code **)(iVar2 + 0xa4))(piVar4,uVar3);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar4,&DAT_11005304,0xa4);
  }
  __vbaFreeStrList(2,&local_68,&local_6c);
  __vbaFreeObj();
  uVar3 = (**(code **)(*piVar5 + 0x3bc))(piVar5);
  piVar4 = (int *)__vbaObjSet(&local_70,uVar3);
  iVar2 = (**(code **)(*piVar4 + 0xe0))(piVar4,&local_e4);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar4,&DAT_11005228,0xe0);
  }
  iVar2 = (**(code **)(*piVar5 + 0x7a4))(piVar5,&local_68);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar5,&DAT_11004fa8,0x7a4);
  }
  iVar2 = __vbaStrCmp(&DAT_110044dc,local_68);
  bVar6 = (short)local_e4 == 1;
  __vbaFreeStr();
  __vbaFreeObj();
  if (bVar6 && iVar2 != 0) {
    piVar4 = (int *)(&DAT_11039420 + iVar1);
    if (*piVar4 == 0) {
      __vbaNew2(&DAT_110051e4,piVar4);
    }
    piVar4 = (int *)*piVar4;
    iVar2 = (**(code **)(*piVar4 + 0x30))(piVar4,0xffffffff);
  }
  else {
    piVar4 = (int *)(&DAT_11039420 + iVar1);
    if (*piVar4 == 0) {
      __vbaNew2(&DAT_110051e4,piVar4);
    }
    piVar4 = (int *)*piVar4;
    iVar2 = (**(code **)(*piVar4 + 0x30))(piVar4,0);
  }
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar4,&DAT_110051d4,0x30);
  }
  uVar3 = (**(code **)(*piVar5 + 0x3ac))(piVar5);
  piVar4 = (int *)__vbaObjSet(&local_70,uVar3);
  iVar2 = (**(code **)(*piVar4 + 0xe0))(piVar4,&local_e4);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar4,&DAT_11005228,0xe0);
  }
  iVar2 = (**(code **)(*piVar5 + 0x7b4))(piVar5,&local_68);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar5,&DAT_11004fa8,0x7b4);
  }
  iVar2 = __vbaStrCmp(&DAT_110044dc,local_68);
  bVar6 = (short)local_e4 == 1;
  __vbaFreeStr();
  __vbaFreeObj();
  if (bVar6 && iVar2 != 0) {
    piVar4 = (int *)(&DAT_11039420 + iVar1);
    if (*piVar4 == 0) {
      __vbaNew2(&DAT_110051e4,piVar4);
    }
    piVar4 = (int *)*piVar4;
    iVar1 = (**(code **)(*piVar4 + 0x40))(piVar4,0xffffffff);
  }
  else {
    piVar4 = (int *)(&DAT_11039420 + iVar1);
    if (*piVar4 == 0) {
      __vbaNew2(&DAT_110051e4,piVar4);
    }
    piVar4 = (int *)*piVar4;
    iVar1 = (**(code **)(*piVar4 + 0x40))(piVar4,0);
  }
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar4,&DAT_110051d4,0x40);
  }
  __vbaObjSetAddref(local_f8,piVar5[0x1a]);
  iVar1 = (**(code **)(*local_f8[0] + 0x140))(local_f8[0]);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_f8[0],&DAT_110051d4,0x140);
  }
  __vbaObjSetAddref(local_f8,0);
  uVar3 = (**(code **)(*piVar5 + 0x3cc))(piVar5);
  piVar4 = (int *)__vbaObjSet(&local_70,uVar3);
  iVar1 = (**(code **)(*piVar4 + 0x8c))(piVar4,0);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar4,&DAT_11005314,0x8c);
  }
  __vbaFreeObj();
  uVar3 = (**(code **)(*piVar5 + 0x3c4))(piVar5);
  piVar4 = (int *)__vbaObjSet(&local_70,uVar3);
  iVar1 = (**(code **)(*piVar4 + 0xa4))(piVar4,&DAT_110044dc);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar4,&DAT_11005304,0xa4);
  }
  __vbaFreeObj();
  piVar4 = piVar5;
  iVar1 = (**(code **)(*piVar5 + 0x7d8))(piVar5);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar5,&DAT_11004fa8,0x7d8);
  }
  uVar3 = 1;
  piVar8 = piVar5;
  iVar1 = (**(code **)(*piVar5 + 0xa4))(piVar5,1);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar5,&DAT_11004f78,0xa4);
  }
  __vbaExitProc();
  puVar7 = &LAB_1102ff10;
  __vbaFreeObj(&LAB_1102ff10);
  __vbaFreeVar(puVar7);
  __vbaFreeVar(piVar8);
  __vbaFreeVar(uVar3);
  __vbaFreeStr();
  __vbaFreeVar(piVar4);
  return;
}


// ---- FUN_1102ff30 @ 1102ff30

undefined4 FUN_1102ff30(uint param_1)

{
  int *piVar1;
  void *local_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_11001ae6;
  local_18 = ExceptionList;
  local_10 = &stack0xffffffd4;
  local_c = &DAT_11001468;
  local_8 = param_1 & 1;
  piVar1 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &local_18;
  (**(code **)(*piVar1 + 4))(piVar1);
  __vbaRaiseEvent(piVar1,6,0);
  local_8 = 0;
  (**(code **)(*piVar1 + 8))(piVar1);
  ExceptionList = local_18;
  return local_8;
}


// ---- FUN_1102ffb0 @ 1102ffb0

undefined4 FUN_1102ffb0(uint param_1)

{
  int *piVar1;
  void *local_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_11001ae6;
  local_18 = ExceptionList;
  local_10 = &stack0xffffffd4;
  local_c = &DAT_11001470;
  local_8 = param_1 & 1;
  piVar1 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &local_18;
  (**(code **)(*piVar1 + 4))(piVar1);
  __vbaRaiseEvent(piVar1,7,0);
  local_8 = 0;
  (**(code **)(*piVar1 + 8))(piVar1);
  ExceptionList = local_18;
  return local_8;
}


// ---- FUN_11030030 @ 11030030

void __cdecl FUN_11030030(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_28;
  undefined4 local_24;
  void *pvStack_20;
  undefined1 *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  uint local_10;
  undefined4 local_c;
  
  puStack_1c = &LAB_11001ae6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffff40;
  local_14 = &DAT_11001478;
  local_10 = param_1 & 1;
  piVar3 = (int *)(param_1 & 0xfffffffe);
  local_c = 0;
  ExceptionList = &pvStack_20;
  (**(code **)(*piVar3 + 4))(piVar3);
  local_24 = 0;
  local_28 = 0;
  __vbaOnError(1);
  uVar1 = __vbaNew(&DAT_110053e4);
  uVar1 = __vbaObjSet(&local_28,uVar1);
  __vbaObjSetAddref(piVar3 + 0x1a,uVar1);
  __vbaFreeObj();
  iVar2 = (**(code **)(*piVar3 + 0x7d8))(piVar3);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar3,&DAT_11004fa8,0x7d8);
  }
  __vbaExitProc();
  return;
}


// ---- FUN_110301f0 @ 110301f0

void __cdecl FUN_110301f0(uint param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  void *pvStack_20;
  undefined1 *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  uint local_10;
  undefined4 local_c;
  
  puStack_1c = &LAB_11001ae6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffff40;
  local_14 = &DAT_110014a0;
  local_10 = param_1 & 1;
  piVar1 = (int *)(param_1 & 0xfffffffe);
  local_c = 0;
  ExceptionList = &pvStack_20;
  piVar3 = piVar1;
  (**(code **)(*piVar1 + 4))(piVar1);
  __vbaOnError(1);
  __vbaRaiseEvent(piVar1,8,0);
  piVar2 = piVar1;
  (**(code **)(*piVar1 + 0x81c))(piVar1);
  *(undefined2 *)((int)piVar1 + 0x66) = 0;
  *(short *)(piVar1 + 0x19) = (short)piVar1[0x15];
  __vbaStrCopy(piVar2,piVar3);
  __vbaStrCopy();
  __vbaStrCopy();
  __vbaStrCopy();
  __vbaStrCopy();
  __vbaStrCopy();
  __vbaStrCopy();
  __vbaStrCopy();
  __vbaExitProc();
  return;
}


// ---- FUN_110303e0 @ 110303e0

void __cdecl FUN_110303e0(uint param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  wchar_t *pwVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 local_34 [4];
  undefined4 local_24;
  undefined4 local_20 [2];
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_11001ae6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff34;
  local_c = &DAT_110014c8;
  local_8 = param_1 & 1;
  piVar5 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar5 + 4))(piVar5);
  local_20[0] = 0;
  local_24 = 0;
  local_34[0] = 0;
  __vbaRaiseEvent(piVar5,9,1,0x4009,local_70,param_2,local_68);
  uVar2 = (**(code **)(*piVar5 + 0x3c0))(piVar5);
  piVar3 = (int *)__vbaObjSet(&local_24,uVar2);
  piVar8 = (int *)*param_2;
  iVar4 = (**(code **)(*piVar8 + 0x1c))
                    (piVar8,L"TextZip",8,local_70,&DAT_110044dc,local_68,local_34);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar8,&DAT_11005140,0x1c);
  }
  iVar4 = *piVar3;
  uVar2 = __vbaStrVarVal(local_20,local_34);
  piVar8 = piVar3;
  iVar4 = (**(code **)(iVar4 + 0xa4))(piVar3,uVar2);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar3,&DAT_11005304,0xa4);
  }
  __vbaFreeStr();
  __vbaFreeObj();
  __vbaFreeVar(piVar8);
  uVar2 = (**(code **)(*piVar5 + 0x3b8))(piVar5);
  piVar3 = (int *)__vbaObjSet(&local_24,uVar2);
  piVar8 = (int *)*param_2;
  iVar4 = (**(code **)(*piVar8 + 0x1c))
                    (piVar8,L"TextNetwork",8,local_70,&DAT_110044dc,local_68,local_34);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar8,&DAT_11005140,0x1c);
  }
  iVar4 = *piVar3;
  uVar2 = __vbaStrVarVal(local_20,local_34);
  piVar8 = piVar3;
  iVar4 = (**(code **)(iVar4 + 0xa4))(piVar3,uVar2);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar3,&DAT_11005304,0xa4);
  }
  __vbaFreeStr();
  __vbaFreeObj();
  __vbaFreeVar(piVar8);
  uVar2 = (**(code **)(*piVar5 + 0x3b0))(piVar5);
  piVar3 = (int *)__vbaObjSet(&local_24,uVar2);
  piVar8 = (int *)*param_2;
  iVar4 = (**(code **)(*piVar8 + 0x1c))
                    (piVar8,L"TextUser",8,local_70,&DAT_110044dc,local_68,local_34);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar8,&DAT_11005140,0x1c);
  }
  iVar4 = *piVar3;
  uVar2 = __vbaStrVarVal(local_20,local_34);
  piVar8 = piVar3;
  iVar4 = (**(code **)(iVar4 + 0xa4))(piVar3,uVar2);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar3,&DAT_11005304,0xa4);
  }
  __vbaFreeStr();
  __vbaFreeObj();
  __vbaFreeVar(piVar8);
  piVar8 = (int *)*param_2;
  piVar3 = piVar8;
  iVar4 = (**(code **)(*piVar8 + 0x1c))(piVar8,L"bNotes",0xb,local_70,0,local_68,local_34);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar8,&DAT_11005140,0x1c);
  }
  uVar1 = __vbaBoolVar(local_34);
  *(undefined2 *)((int)piVar5 + 0x66) = uVar1;
  __vbaFreeVar(piVar3);
  uVar2 = (**(code **)(*piVar5 + 0x3b4))(piVar5);
  piVar3 = (int *)__vbaObjSet(&local_24,uVar2);
  piVar8 = (int *)*param_2;
  iVar4 = (**(code **)(*piVar8 + 0x1c))(piVar8,L"Value",2,local_70,0,local_68,local_34);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar8,&DAT_11005140,0x1c);
  }
  iVar4 = *piVar3;
  uVar2 = __vbaI2Var(local_34);
  piVar8 = piVar3;
  iVar4 = (**(code **)(iVar4 + 0xe4))(piVar3,uVar2);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar3,&DAT_11005228,0xe4);
  }
  __vbaFreeObj();
  __vbaFreeVar(piVar8);
  piVar8 = (int *)*param_2;
  iVar4 = (**(code **)(*piVar8 + 0x1c))
                    (piVar8,L"Value1",2,local_70,(short)piVar5[0x15],local_68,local_34);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar8,&DAT_11005140,0x1c);
  }
  puVar7 = local_34;
  uVar1 = __vbaI2Var(puVar7);
  *(undefined2 *)(piVar5 + 0x19) = uVar1;
  __vbaFreeVar(puVar7);
  piVar8 = (int *)*param_2;
  uVar2 = 8;
  pwVar6 = L"txtNotes";
  piVar3 = piVar8;
  iVar4 = (**(code **)(*piVar8 + 0x1c))
                    (piVar8,L"txtNotes",8,local_70,&DAT_110044dc,local_68,local_34);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar8,&DAT_11005140,0x1c);
  }
  __vbaStrVarMove(local_34);
  __vbaStrMove();
  __vbaStrCopy(piVar3,pwVar6);
  __vbaFreeStr();
  __vbaFreeVar(uVar2);
  piVar8 = (int *)*param_2;
  uVar2 = 8;
  pwVar6 = L"mLeoSysPath";
  piVar3 = piVar8;
  iVar4 = (**(code **)(*piVar8 + 0x1c))
                    (piVar8,L"mLeoSysPath",8,local_70,&DAT_110044e4,local_68,local_34);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar8,&DAT_11005140,0x1c);
  }
  __vbaStrVarMove(local_34);
  __vbaStrMove();
  __vbaStrCopy(piVar3,pwVar6);
  __vbaFreeStr();
  __vbaFreeVar(uVar2);
  piVar8 = (int *)*param_2;
  uVar2 = 8;
  pwVar6 = L"mLeoConfigPath";
  piVar3 = piVar8;
  iVar4 = (**(code **)(*piVar8 + 0x1c))
                    (piVar8,L"mLeoConfigPath",8,local_70,&DAT_110044e4,local_68,local_34);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar8,&DAT_11005140,0x1c);
  }
  __vbaStrVarMove(local_34);
  __vbaStrMove();
  __vbaStrCopy(piVar3,pwVar6);
  __vbaFreeStr();
  __vbaFreeVar(uVar2);
  piVar8 = (int *)*param_2;
  uVar2 = 8;
  pwVar6 = L"mUserPath";
  piVar3 = piVar8;
  iVar4 = (**(code **)(*piVar8 + 0x1c))
                    (piVar8,L"mUserPath",8,local_70,&DAT_110044e4,local_68,local_34);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar8,&DAT_11005140,0x1c);
  }
  __vbaStrVarMove(local_34);
  __vbaStrMove();
  __vbaStrCopy(piVar3,pwVar6);
  __vbaFreeStr();
  __vbaFreeVar(uVar2);
  piVar8 = (int *)*param_2;
  uVar2 = 8;
  pwVar6 = L"mZipPath";
  piVar3 = piVar8;
  iVar4 = (**(code **)(*piVar8 + 0x1c))
                    (piVar8,L"mZipPath",8,local_70,&DAT_110044e4,local_68,local_34);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar8,&DAT_11005140,0x1c);
  }
  __vbaStrVarMove(local_34);
  __vbaStrMove();
  __vbaStrCopy(piVar3,pwVar6);
  __vbaFreeStr();
  __vbaFreeVar(uVar2);
  piVar8 = (int *)*param_2;
  uVar2 = 8;
  pwVar6 = L"mNetPath";
  piVar3 = piVar8;
  iVar4 = (**(code **)(*piVar8 + 0x1c))
                    (piVar8,L"mNetPath",8,local_70,&DAT_110044e4,local_68,local_34);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar8,&DAT_11005140,0x1c);
  }
  __vbaStrVarMove(local_34);
  __vbaStrMove();
  __vbaStrCopy(piVar3,pwVar6);
  __vbaFreeStr();
  __vbaFreeVar(uVar2);
  piVar8 = (int *)*param_2;
  uVar2 = 8;
  pwVar6 = L"mNewDir";
  piVar3 = piVar8;
  iVar4 = (**(code **)(*piVar8 + 0x1c))
                    (piVar8,L"mNewDir",8,local_70,&DAT_110044e4,local_68,local_34);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar8,&DAT_11005140,0x1c);
  }
  __vbaStrVarMove(local_34);
  __vbaStrMove();
  __vbaStrCopy(piVar3,pwVar6);
  __vbaFreeStr();
  __vbaFreeVar(uVar2);
  piVar8 = (int *)*param_2;
  pwVar6 = L"Logon";
  uVar2 = 8;
  piVar3 = piVar8;
  iVar4 = (**(code **)(*piVar8 + 0x1c))(piVar8,L"Logon",8,local_70,&DAT_110044dc,local_68,local_34);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar8,&DAT_11005140,0x1c);
  }
  __vbaStrVarMove(local_34);
  __vbaStrMove();
  __vbaStrCopy(piVar3,pwVar6);
  __vbaFreeStr();
  __vbaFreeVar(uVar2);
  return;
}


// ---- FUN_11030d20 @ 11030d20

void __cdecl FUN_11030d20(uint param_1)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_11001ae6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffd0;
  local_c = &DAT_110014d8;
  local_8 = param_1 & 1;
  piVar2 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar2 + 4))(piVar2);
  local_1c = 0;
  uVar1 = __vbaCastObj(0,&DAT_110051d4);
  uVar1 = __vbaObjSet(&local_1c,uVar1);
  __vbaObjSetAddref(piVar2 + 0x1a,uVar1);
  __vbaFreeObj();
  return;
}


// ---- FUN_11030dd0 @ 11030dd0

void __cdecl FUN_11030dd0(uint param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 local_a0 [5];
  undefined4 local_8c;
  undefined4 local_88;
  undefined *local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 *local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_5c;
  undefined4 local_4c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28 [2];
  void *pvStack_20;
  undefined1 *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  uint local_10;
  undefined4 local_c;
  
  puStack_1c = &LAB_11001ae6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffff1c;
  local_14 = &DAT_110014e8;
  local_10 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  local_c = 0;
  ExceptionList = &pvStack_20;
  (**(code **)(*piVar4 + 4))(piVar4);
  local_28[0] = 0;
  local_2c = 0;
  local_3c = 0;
  local_4c = 0;
  local_5c = 0;
  local_6c = 0;
  local_7c = 0;
  local_8c = 0;
  local_a0[0] = 0;
  __vbaOnError(1);
  local_74 = param_2;
  local_7c = 0x4009;
  __vbaRaiseEvent(piVar4,10,1,0x4009,local_78,param_2,local_70);
  uVar1 = (**(code **)(*piVar4 + 0x3c0))(piVar4);
  piVar2 = (int *)__vbaObjSet(&local_2c,uVar1);
  iVar3 = (**(code **)(*piVar2 + 0xa0))(piVar2,local_28);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_11005304,0xa0);
  }
  local_34 = local_28[0];
  piVar2 = (int *)*param_2;
  local_74 = (undefined4 *)&DAT_110044dc;
  local_7c = 8;
  local_28[0] = 0;
  local_3c = 8;
  piVar5 = piVar2;
  iVar3 = (**(code **)(*piVar2 + 0x20))
                    (piVar2,L"TextZip",8,local_38,local_34,local_30,8,local_78,&DAT_110044dc,
                     local_70);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_11005140,0x20);
  }
  __vbaFreeObj();
  __vbaFreeVar(piVar5);
  uVar1 = (**(code **)(*piVar4 + 0x3b8))(piVar4);
  piVar2 = (int *)__vbaObjSet(&local_2c,uVar1);
  iVar3 = (**(code **)(*piVar2 + 0xa0))(piVar2,local_28);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_11005304,0xa0);
  }
  local_34 = local_28[0];
  piVar2 = (int *)*param_2;
  local_74 = (undefined4 *)&DAT_110044dc;
  local_7c = 8;
  local_28[0] = 0;
  local_3c = 8;
  piVar5 = piVar2;
  iVar3 = (**(code **)(*piVar2 + 0x20))
                    (piVar2,L"TextNetwork",8,local_38,local_34,local_30,8,local_78,&DAT_110044dc,
                     local_70);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_11005140,0x20);
  }
  __vbaFreeObj();
  __vbaFreeVar(piVar5);
  uVar1 = (**(code **)(*piVar4 + 0x3b0))(piVar4);
  piVar2 = (int *)__vbaObjSet(&local_2c,uVar1);
  iVar3 = (**(code **)(*piVar2 + 0xa0))(piVar2,local_28);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_11005304,0xa0);
  }
  local_34 = local_28[0];
  piVar2 = (int *)*param_2;
  local_74 = (undefined4 *)&DAT_110044dc;
  local_7c = 8;
  local_28[0] = 0;
  local_3c = 8;
  piVar5 = piVar2;
  iVar3 = (**(code **)(*piVar2 + 0x20))
                    (piVar2,L"TextUser",8,local_38,local_34,local_30,8,local_78,&DAT_110044dc,
                     local_70);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_11005140,0x20);
  }
  __vbaFreeObj();
  __vbaFreeVar(piVar5);
  piVar2 = (int *)*param_2;
  local_74 = (undefined4 *)CONCAT22(local_74._2_2_,*(undefined2 *)((int)piVar4 + 0x66));
  local_7c = 0xb;
  piVar5 = piVar2;
  iVar3 = (**(code **)(*piVar2 + 0x20))
                    (piVar2,L"bNotes",0xb,local_78,local_74,local_70,0xb,local_88,0,local_80);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_11005140,0x20);
  }
  __vbaFreeVar(piVar5);
  uVar1 = (**(code **)(*piVar4 + 0x3b4))(piVar4);
  piVar2 = (int *)__vbaObjSet(&local_2c,uVar1);
  iVar3 = (**(code **)(*piVar2 + 0xe0))(piVar2,local_a0);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_11005228,0xe0);
  }
  piVar2 = (int *)*param_2;
  local_74 = (undefined4 *)CONCAT22(local_74._2_2_,(undefined2)local_a0[0]);
  local_7c = 2;
  iVar3 = (**(code **)(*piVar2 + 0x20))
                    (piVar2,L"Value",2,local_78,local_74,local_70,2,local_88,0,local_80);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_11005140,0x20);
  }
  __vbaFreeObj();
  piVar2 = (int *)*param_2;
  local_74 = (undefined4 *)piVar4[0x18];
  local_7c = 8;
  iVar3 = (**(code **)(*piVar2 + 0x20))
                    (piVar2,L"txtNotes",8,local_78,local_74,local_70,8,local_88,&DAT_110044dc,
                     local_80);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_11005140,0x20);
  }
  piVar2 = (int *)*param_2;
  local_74 = (undefined4 *)piVar4[0x16];
  local_7c = 8;
  iVar3 = (**(code **)(*piVar2 + 0x20))
                    (piVar2,L"mLeoSysPath",8,local_78,local_74,local_70,8,local_88,&DAT_110044e4,
                     local_80);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_11005140,0x20);
  }
  piVar2 = (int *)*param_2;
  local_74 = (undefined4 *)piVar4[0x17];
  local_7c = 8;
  iVar3 = (**(code **)(*piVar2 + 0x20))
                    (piVar2,L"mLeoConfigPath",8,local_78,local_74,local_70,8,local_88,&DAT_110044e4,
                     local_80);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_11005140,0x20);
  }
  piVar2 = (int *)*param_2;
  local_74 = (undefined4 *)piVar4[0x12];
  local_7c = 8;
  iVar3 = (**(code **)(*piVar2 + 0x20))
                    (piVar2,L"mUserPath",8,local_78,local_74,local_70,8,local_88,&DAT_110044e4,
                     local_80);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_11005140,0x20);
  }
  piVar2 = (int *)*param_2;
  local_74 = (undefined4 *)piVar4[0x13];
  local_7c = 8;
  iVar3 = (**(code **)(*piVar2 + 0x20))
                    (piVar2,L"mZipPath",8,local_78,local_74,local_70,8,local_88,&DAT_110044e4,
                     local_80);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_11005140,0x20);
  }
  piVar2 = (int *)*param_2;
  local_74 = (undefined4 *)piVar4[0x14];
  local_7c = 8;
  iVar3 = (**(code **)(*piVar2 + 0x20))
                    (piVar2,L"mNetPath",8,local_78,local_74,local_70,8,local_88,&DAT_110044e4,
                     local_80);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_11005140,0x20);
  }
  piVar2 = (int *)*param_2;
  local_84 = &DAT_110044e4;
  local_74 = (undefined4 *)piVar4[0x11];
  local_7c = 8;
  iVar3 = (**(code **)(*piVar2 + 0x20))
                    (piVar2,L"mNewDir",8,local_78,local_74,local_70,8,local_88,&DAT_110044e4,
                     local_80);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_11005140,0x20);
  }
  piVar2 = (int *)*param_2;
  local_74 = (undefined4 *)piVar4[0xf];
  local_7c = 8;
  iVar3 = (**(code **)(*piVar2 + 0x20))
                    (piVar2,L"Logon",8,local_78,local_74,local_70,8,local_88,&DAT_110044dc,local_80)
  ;
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_11005140,0x20);
  }
  __vbaExitProc();
  return;
}


// ---- FUN_110316e0 @ 110316e0

void __cdecl FUN_110316e0(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_11001ae6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffbc;
  local_c = &DAT_11001510;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  local_20 = 0;
  *param_2 = 0;
  local_24 = 0;
  uVar1 = (**(code **)(*param_1 + 0x3c0))(param_1);
  piVar2 = (int *)__vbaObjSet(&local_24,uVar1);
  iVar3 = (**(code **)(*piVar2 + 0xa0))(piVar2,&local_20);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_11005304,0xa0);
  }
  local_20 = 0;
  __vbaStrMove();
  __vbaFreeObj();
  return;
}


// ---- FUN_110317d0 @ 110317d0

void __cdecl FUN_110317d0(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  void *pvStack_20;
  undefined1 *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  puStack_1c = &LAB_11001ae6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffff34;
  local_14 = &DAT_11001520;
  local_10 = 0;
  local_c = 0;
  ExceptionList = &pvStack_20;
  piVar4 = param_1;
  (**(code **)(*param_1 + 4))(param_1);
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  iVar2 = __vbaAptOffset(&DAT_11004234);
  __vbaStrCopy(piVar4);
  __vbaOnError();
  uVar3 = (**(code **)(*param_1 + 0x3c0))();
  piVar4 = (int *)__vbaObjSet(&local_2c,uVar3);
  iVar5 = (**(code **)(*piVar4 + 0xa4))(piVar4,local_24);
  if (iVar5 < 0) {
    __vbaHresultCheckObj(iVar5,piVar4,&DAT_11005304,0xa4);
  }
  __vbaFreeObj();
  iVar5 = (**(code **)(*param_1 + 0x390))(param_1,8,local_78,L"TextZip",local_70);
  if (iVar5 < 0) {
    __vbaHresultCheckObj(iVar5,param_1,&DAT_11004f78,0x390);
  }
  piVar4 = (int *)(&DAT_11039420 + iVar2);
  if (*piVar4 == 0) {
    __vbaNew2(&DAT_110051e4,piVar4);
  }
  piVar1 = (int *)*piVar4;
  iVar2 = (**(code **)(*piVar1 + 0x110))(piVar1,local_24);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_110051d4,0x110);
  }
  if (*piVar4 == 0) {
    __vbaNew2(&DAT_110051e4,piVar4);
  }
  piVar4 = (int *)*piVar4;
  iVar2 = (**(code **)(*piVar4 + 0x10c))(piVar4,&local_28);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar4,&DAT_110051d4,0x10c);
  }
  iVar2 = (**(code **)(*(int *)param_1[0x1a] + 0x110))((int *)param_1[0x1a],local_28);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,param_1[0x1a],&DAT_110051d4,0x110);
  }
  __vbaFreeStr();
  __vbaExitProc();
  __vbaFreeStr(&LAB_11031a7f);
  return;
}


// ---- FUN_11031aa0 @ 11031aa0

void __cdecl FUN_11031aa0(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_11001ae6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffbc;
  local_c = &DAT_11001548;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  local_20 = 0;
  *param_2 = 0;
  local_24 = 0;
  uVar1 = (**(code **)(*param_1 + 0x3b8))(param_1);
  piVar2 = (int *)__vbaObjSet(&local_24,uVar1);
  iVar3 = (**(code **)(*piVar2 + 0xa0))(piVar2,&local_20);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_11005304,0xa0);
  }
  local_20 = 0;
  __vbaStrMove();
  __vbaFreeObj();
  return;
}


// ---- FUN_11031b90 @ 11031b90

void __cdecl FUN_11031b90(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  void *pvStack_20;
  undefined1 *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  puStack_1c = &LAB_11001ae6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffff34;
  local_14 = &DAT_11001558;
  local_10 = 0;
  local_c = 0;
  ExceptionList = &pvStack_20;
  piVar4 = param_1;
  (**(code **)(*param_1 + 4))(param_1);
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  iVar2 = __vbaAptOffset(&DAT_11004234);
  __vbaStrCopy(piVar4);
  __vbaOnError();
  uVar3 = (**(code **)(*param_1 + 0x3b8))();
  piVar4 = (int *)__vbaObjSet(&local_2c,uVar3);
  iVar5 = (**(code **)(*piVar4 + 0xa4))(piVar4,local_24);
  if (iVar5 < 0) {
    __vbaHresultCheckObj(iVar5,piVar4,&DAT_11005304,0xa4);
  }
  __vbaFreeObj();
  iVar5 = (**(code **)(*param_1 + 0x390))(param_1,8,local_78,L"TextNetwork",local_70);
  if (iVar5 < 0) {
    __vbaHresultCheckObj(iVar5,param_1,&DAT_11004f78,0x390);
  }
  piVar4 = (int *)(&DAT_11039420 + iVar2);
  if (*piVar4 == 0) {
    __vbaNew2(&DAT_110051e4,piVar4);
  }
  piVar1 = (int *)*piVar4;
  iVar2 = (**(code **)(*piVar1 + 0x118))(piVar1,local_24);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_110051d4,0x118);
  }
  if (*piVar4 == 0) {
    __vbaNew2(&DAT_110051e4,piVar4);
  }
  piVar4 = (int *)*piVar4;
  iVar2 = (**(code **)(*piVar4 + 0x114))(piVar4,&local_28);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar4,&DAT_110051d4,0x114);
  }
  iVar2 = (**(code **)(*(int *)param_1[0x1a] + 0x118))((int *)param_1[0x1a],local_28);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,param_1[0x1a],&DAT_110051d4,0x118);
  }
  __vbaFreeStr();
  __vbaExitProc();
  __vbaFreeStr(&LAB_11031e3f);
  return;
}


// ---- FUN_11031e60 @ 11031e60

void __cdecl FUN_11031e60(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_11001ae6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffbc;
  local_c = &DAT_11001580;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  local_20 = 0;
  *param_2 = 0;
  local_24 = 0;
  uVar1 = (**(code **)(*param_1 + 0x3b0))(param_1);
  piVar2 = (int *)__vbaObjSet(&local_24,uVar1);
  iVar3 = (**(code **)(*piVar2 + 0xa0))(piVar2,&local_20);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_11005304,0xa0);
  }
  local_20 = 0;
  __vbaStrMove();
  __vbaFreeObj();
  return;
}


// ---- FUN_11031f50 @ 11031f50

void __cdecl FUN_11031f50(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  void *pvStack_20;
  undefined1 *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  puStack_1c = &LAB_11001ae6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffff34;
  local_14 = &DAT_11001590;
  local_10 = 0;
  local_c = 0;
  ExceptionList = &pvStack_20;
  piVar4 = param_1;
  (**(code **)(*param_1 + 4))(param_1);
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  iVar2 = __vbaAptOffset(&DAT_11004234);
  __vbaStrCopy(piVar4);
  __vbaOnError();
  uVar3 = (**(code **)(*param_1 + 0x3b0))();
  piVar4 = (int *)__vbaObjSet(&local_2c,uVar3);
  iVar5 = (**(code **)(*piVar4 + 0xa4))(piVar4,local_24);
  if (iVar5 < 0) {
    __vbaHresultCheckObj(iVar5,piVar4,&DAT_11005304,0xa4);
  }
  __vbaFreeObj();
  iVar5 = (**(code **)(*param_1 + 0x390))(param_1,8,local_78,L"TextUser",local_70);
  if (iVar5 < 0) {
    __vbaHresultCheckObj(iVar5,param_1,&DAT_11004f78,0x390);
  }
  piVar4 = (int *)(&DAT_11039420 + iVar2);
  if (*piVar4 == 0) {
    __vbaNew2(&DAT_110051e4,piVar4);
  }
  piVar1 = (int *)*piVar4;
  iVar2 = (**(code **)(*piVar1 + 0x120))(piVar1,local_24);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_110051d4,0x120);
  }
  if (*piVar4 == 0) {
    __vbaNew2(&DAT_110051e4,piVar4);
  }
  piVar4 = (int *)*piVar4;
  iVar2 = (**(code **)(*piVar4 + 0x11c))(piVar4,&local_28);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar4,&DAT_110051d4,0x11c);
  }
  iVar2 = (**(code **)(*(int *)param_1[0x1a] + 0x120))((int *)param_1[0x1a],local_28);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,param_1[0x1a],&DAT_110051d4,0x120);
  }
  __vbaFreeStr();
  __vbaExitProc();
  __vbaFreeStr(&LAB_110321ff);
  return;
}


// ---- FUN_11032220 @ 11032220

undefined4
FUN_11032220(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int *piVar1;
  undefined4 local_54;
  undefined4 local_4c;
  undefined4 local_44;
  undefined4 local_3c;
  undefined4 local_34;
  undefined4 local_2c;
  undefined4 local_24;
  undefined4 local_1c;
  void *local_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_11001ae6;
  local_18 = ExceptionList;
  local_10 = &stack0xffffff94;
  local_c = &DAT_110015b8;
  local_8 = param_1 & 1;
  piVar1 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &local_18;
  (**(code **)(*piVar1 + 4))(piVar1);
  __vbaRaiseEvent(piVar1,1,4,0x4004,local_54,param_5,local_4c,0x4004,local_44,param_4,local_3c,
                  0x4002,local_34,param_3,local_2c,0x4002,local_24,param_2,local_1c);
  local_8 = 0;
  (**(code **)(*piVar1 + 8))(piVar1);
  ExceptionList = local_18;
  return local_8;
}


// ---- FUN_11032310 @ 11032310

undefined4 FUN_11032310(int *param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  void *local_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_11001ae6;
  local_18 = ExceptionList;
  local_10 = &stack0xffffffd0;
  local_c = &DAT_110015c0;
  local_8 = 0;
  ExceptionList = &local_18;
  (**(code **)(*param_1 + 4))(param_1);
  uVar1 = *(undefined2 *)((int)param_1 + 0x66);
  (**(code **)(*param_1 + 8))(param_1);
  *param_2 = uVar1;
  ExceptionList = local_18;
  return local_8;
}


// ---- FUN_11032380 @ 11032380

void __cdecl FUN_11032380(int *param_1,undefined2 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 uVar3;
  undefined4 local_78;
  undefined4 local_70;
  int *local_24;
  void *pvStack_20;
  undefined1 *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  puStack_1c = &LAB_11001ae6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffff3c;
  local_14 = &DAT_110015c8;
  local_10 = 0;
  local_c = 0;
  ExceptionList = &pvStack_20;
  (**(code **)(*param_1 + 4))(param_1);
  local_24 = (int *)0x0;
  __vbaOnError(1);
  *(undefined2 *)((int)param_1 + 0x66) = param_2;
  iVar1 = (**(code **)(*param_1 + 0x390))(param_1,8,local_78,L"bNotes",local_70);
  uVar3 = extraout_var;
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,param_1,&DAT_11004f78,0x390);
    uVar3 = extraout_var_00;
  }
  iVar1 = (**(code **)(*(int *)param_1[0x1a] + 0x28))
                    ((int *)param_1[0x1a],CONCAT22(uVar3,*(undefined2 *)((int)param_1 + 0x66)));
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,param_1[0x1a],&DAT_110051d4,0x28);
  }
  uVar2 = __vbaNew(&DAT_11005774);
  __vbaObjSet(&local_24,uVar2);
  if ((*(short *)((int)param_1 + 0x66) == -1) &&
     (iVar1 = (**(code **)(*local_24 + 0x68))(local_24,0xffffffff), iVar1 < 0)) {
    __vbaHresultCheckObj(iVar1,local_24,&DAT_11005764,0x68);
  }
  uVar2 = __vbaCastObj(0,&DAT_11005764);
  __vbaObjSet(&local_24,uVar2);
  __vbaExitProc();
  __vbaFreeObj(&LAB_110325a2);
  return;
}


// ---- FUN_110325d0 @ 110325d0

void __cdecl FUN_110325d0(int *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_11001ae6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffbc;
  local_c = &DAT_110015f0;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  uVar1 = (**(code **)(*param_1 + 0x3bc))(param_1);
  piVar2 = (int *)__vbaObjSet(&local_20,uVar1);
  iVar3 = (**(code **)(*piVar2 + 0xe0))(piVar2,&local_24);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_11005228,0xe0);
  }
  bVar4 = (short)local_24 == 0;
  __vbaFreeObj();
  if (bVar4) {
    uVar1 = (**(code **)(*param_1 + 0x3bc))(param_1);
    piVar2 = (int *)__vbaObjSet(&local_20,uVar1);
    iVar3 = (**(code **)(*piVar2 + 0xe4))(piVar2,1);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar2,&DAT_11005228,0xe4);
    }
    __vbaFreeObj();
  }
  return;
}


// ---- FUN_110326f0 @ 110326f0

void __cdecl FUN_110326f0(int *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_11001ae6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffbc;
  local_c = &DAT_11001600;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  uVar1 = (**(code **)(*param_1 + 0x3b4))(param_1);
  piVar2 = (int *)__vbaObjSet(&local_20,uVar1);
  iVar3 = (**(code **)(*piVar2 + 0xe0))(piVar2,&local_24);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_11005228,0xe0);
  }
  bVar4 = (short)local_24 == 0;
  __vbaFreeObj();
  if (bVar4) {
    uVar1 = (**(code **)(*param_1 + 0x3b4))(param_1);
    piVar2 = (int *)__vbaObjSet(&local_20,uVar1);
    iVar3 = (**(code **)(*piVar2 + 0xe4))(piVar2,1);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar2,&DAT_11005228,0xe4);
    }
    __vbaFreeObj();
  }
  return;
}


// ---- FUN_11032810 @ 11032810

void __cdecl FUN_11032810(int *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_11001ae6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffbc;
  local_c = &DAT_11001610;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  uVar1 = (**(code **)(*param_1 + 0x3ac))(param_1);
  piVar2 = (int *)__vbaObjSet(&local_20,uVar1);
  iVar3 = (**(code **)(*piVar2 + 0xe0))(piVar2,&local_24);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_11005228,0xe0);
  }
  bVar4 = (short)local_24 == 0;
  __vbaFreeObj();
  if (bVar4) {
    uVar1 = (**(code **)(*param_1 + 0x3ac))(param_1);
    piVar2 = (int *)__vbaObjSet(&local_20,uVar1);
    iVar3 = (**(code **)(*piVar2 + 0xe4))(piVar2,1);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar2,&DAT_11005228,0xe4);
    }
    __vbaFreeObj();
  }
  return;
}


// ---- FUN_11032930 @ 11032930

void __cdecl FUN_11032930(int *param_1,undefined4 *param_2)

{
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_11001ae6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffd0;
  local_c = &DAT_11001620;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  *param_2 = 0;
  __vbaStrCopy(param_1);
  return;
}


// ---- FUN_110329c0 @ 110329c0

void __cdecl FUN_110329c0(int *param_1)

{
  int iVar1;
  int *piVar2;
  void *pvStack_20;
  undefined1 *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  puStack_1c = &LAB_11001ae6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffff3c;
  local_14 = &DAT_11001630;
  local_10 = 0;
  local_c = 0;
  ExceptionList = &pvStack_20;
  piVar2 = param_1;
  (**(code **)(*param_1 + 4))(param_1);
  __vbaStrCopy(piVar2);
  __vbaOnError();
  __vbaStrCopy();
  iVar1 = (**(code **)(*param_1 + 0x390))(param_1,8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,param_1,&DAT_11004f78,0x390);
  }
  iVar1 = (**(code **)(*(int *)param_1[0x1a] + 0x108))((int *)param_1[0x1a],param_1[0x18]);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,param_1[0x1a],&DAT_110051d4,0x108);
  }
  __vbaExitProc();
  __vbaFreeStr(&LAB_11032ba3);
  return;
}


// ---- FUN_11032bd0 @ 11032bd0

void __cdecl FUN_11032bd0(int *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_11001ae6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc8;
  local_c = &DAT_11001658;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  uVar1 = (**(code **)(*param_1 + 0x3bc))(param_1);
  piVar2 = (int *)__vbaObjSet(&local_1c,uVar1);
  iVar3 = (**(code **)(*piVar2 + 0xe4))(piVar2,0);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_11005228,0xe4);
  }
  __vbaFreeObj();
  uVar1 = (**(code **)(*param_1 + 0x3b4))(param_1);
  piVar2 = (int *)__vbaObjSet(&local_1c,uVar1);
  iVar3 = (**(code **)(*piVar2 + 0xe4))(piVar2,0);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_11005228,0xe4);
  }
  __vbaFreeObj();
  uVar1 = (**(code **)(*param_1 + 0x3ac))(param_1);
  piVar2 = (int *)__vbaObjSet(&local_1c,uVar1);
  iVar3 = (**(code **)(*piVar2 + 0xe4))(piVar2,0);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_11005228,0xe4);
  }
  __vbaFreeObj();
  uVar1 = (**(code **)(*param_1 + 0x3c0))(param_1);
  piVar2 = (int *)__vbaObjSet(&local_1c,uVar1);
  iVar3 = (**(code **)(*piVar2 + 0xa4))(piVar2,&DAT_110044dc);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_11005304,0xa4);
  }
  __vbaFreeObj();
  uVar1 = (**(code **)(*param_1 + 0x3b8))(param_1);
  piVar2 = (int *)__vbaObjSet(&local_1c,uVar1);
  iVar3 = (**(code **)(*piVar2 + 0xa4))(piVar2,&DAT_110044dc);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_11005304,0xa4);
  }
  __vbaFreeObj();
  uVar1 = (**(code **)(*param_1 + 0x3b0))(param_1);
  piVar2 = (int *)__vbaObjSet(&local_1c,uVar1);
  iVar3 = (**(code **)(*piVar2 + 0xa4))(piVar2,&DAT_110044dc);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_11005304,0xa4);
  }
  __vbaFreeObj();
  return;
}


// ---- FUN_11032dc0 @ 11032dc0

undefined4 FUN_11032dc0(int *param_1)

{
  int iVar1;
  void *local_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_11001ae6;
  local_18 = ExceptionList;
  local_10 = &stack0xffffffd0;
  local_c = &DAT_11001668;
  local_8 = 0;
  ExceptionList = &local_18;
  (**(code **)(*param_1 + 4))(param_1);
  iVar1 = (**(code **)(*(int *)param_1[4] + 0x338))((int *)param_1[4]);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,param_1[4],&DAT_11004f78,0x338);
  }
  (**(code **)(*param_1 + 8))(param_1);
  ExceptionList = local_18;
  return local_8;
}


// ---- FUN_11032e40 @ 11032e40

void __cdecl FUN_11032e40(int *param_1,undefined4 *param_2)

{
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_11001ae6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffd0;
  local_c = &DAT_11001670;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  *param_2 = 0;
  __vbaStrCopy(param_1);
  return;
}


// ---- FUN_11032ed0 @ 11032ed0

void __cdecl FUN_11032ed0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 local_3c [4];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  void *pvStack_20;
  undefined1 *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  puStack_1c = &LAB_11001ae6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffff3c;
  local_14 = &DAT_11001680;
  local_10 = 0;
  local_c = 0;
  ExceptionList = &pvStack_20;
  piVar3 = param_1;
  (**(code **)(*param_1 + 4))(param_1);
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_3c[0] = 0;
  __vbaStrCopy(piVar3);
  __vbaOnError();
  __vbaStrCopy();
  iVar1 = (**(code **)(*param_1 + 0x390))(param_1,8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,param_1,&DAT_11004f78,0x390);
  }
  iVar1 = __vbaStrCmp(&DAT_110044dc,param_1[0x16]);
  if (iVar1 != 0) {
    __vbaVarDup();
    puVar2 = local_3c;
    iVar1 = (**(code **)(*(int *)param_1[0x1a] + 0x94))((int *)param_1[0x1a],puVar2);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,param_1[0x1a],&DAT_110051d4,0x94);
    }
    __vbaFreeVar(puVar2);
  }
  __vbaExitProc();
  __vbaFreeStr(&LAB_110330e7);
  return;
}


// ---- FUN_11033110 @ 11033110

void __cdecl FUN_11033110(int *param_1,undefined4 *param_2)

{
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_11001ae6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffd0;
  local_c = &DAT_110016a8;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  *param_2 = 0;
  __vbaStrCopy(param_1);
  return;
}


// ---- FUN_110331a0 @ 110331a0

void __cdecl FUN_110331a0(int *param_1)

{
  int iVar1;
  int *piVar2;
  void *pvStack_20;
  undefined1 *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  puStack_1c = &LAB_11001ae6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffff3c;
  local_14 = &DAT_110016b8;
  local_10 = 0;
  local_c = 0;
  ExceptionList = &pvStack_20;
  piVar2 = param_1;
  (**(code **)(*param_1 + 4))(param_1);
  __vbaStrCopy(piVar2);
  __vbaOnError();
  __vbaStrCopy();
  iVar1 = (**(code **)(*param_1 + 0x390))(param_1,8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,param_1,&DAT_11004f78,0x390);
  }
  iVar1 = __vbaStrCmp(&DAT_110044dc,param_1[0x17]);
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*(int *)param_1[0x1a] + 0xa0))((int *)param_1[0x1a],param_1[0x17]);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,param_1[0x1a],&DAT_110051d4,0xa0);
    }
  }
  __vbaExitProc();
  __vbaFreeStr(&LAB_11033399);
  return;
}


// ---- FUN_110333c0 @ 110333c0

void __cdecl FUN_110333c0(int *param_1,undefined4 *param_2)

{
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_11001ae6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffd0;
  local_c = &DAT_110016e0;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  *param_2 = 0;
  __vbaStrCopy(param_1);
  return;
}


// ---- FUN_11033450 @ 11033450

void __cdecl FUN_11033450(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 local_3c [4];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  void *pvStack_20;
  undefined1 *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  puStack_1c = &LAB_11001ae6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffff3c;
  local_14 = &DAT_110016f0;
  local_10 = 0;
  local_c = 0;
  ExceptionList = &pvStack_20;
  piVar2 = param_1;
  (**(code **)(*param_1 + 4))(param_1);
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_3c[0] = 0;
  __vbaStrCopy(piVar2);
  __vbaOnError();
  __vbaStrCopy();
  iVar1 = (**(code **)(*param_1 + 0x390))(param_1,8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,param_1,&DAT_11004f78,0x390);
  }
  __vbaVarDup();
  piVar2 = (int *)param_1[0x1a];
  iVar1 = (**(code **)(*piVar2 + 0x70))(piVar2,local_3c);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,param_1[0x1a],&DAT_110051d4,0x70);
  }
  __vbaFreeVar(piVar2);
  __vbaExitProc();
  __vbaFreeStr(&LAB_1103364b);
  return;
}


// ---- FUN_11033670 @ 11033670

void __cdecl FUN_11033670(int *param_1,undefined4 *param_2)

{
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_11001ae6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffd0;
  local_c = &DAT_11001718;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  *param_2 = 0;
  __vbaStrCopy(param_1);
  return;
}


// ---- FUN_11033700 @ 11033700

void __cdecl FUN_11033700(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 local_3c [4];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  void *pvStack_20;
  undefined1 *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  puStack_1c = &LAB_11001ae6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffff38;
  local_14 = &DAT_11001728;
  local_10 = 0;
  local_c = 0;
  ExceptionList = &pvStack_20;
  piVar3 = param_1;
  (**(code **)(*param_1 + 4))(param_1);
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_3c[0] = 0;
  iVar1 = __vbaAptOffset(&DAT_11004234);
  __vbaStrCopy(piVar3);
  __vbaOnError();
  __vbaStrCopy();
  iVar2 = (**(code **)(*param_1 + 0x390))(param_1,8);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,param_1,&DAT_11004f78,0x390);
  }
  piVar3 = (int *)(&DAT_11039420 + iVar1);
  if (*piVar3 == 0) {
    __vbaNew2(&DAT_110051e4,piVar3);
  }
  piVar3 = (int *)*piVar3;
  __vbaVarDup();
  piVar4 = piVar3;
  iVar1 = (**(code **)(*piVar3 + 0x48))(piVar3,local_3c);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar3,&DAT_110051d4,0x48);
  }
  __vbaFreeVar(piVar4);
  __vbaVarDup();
  piVar3 = (int *)param_1[0x1a];
  iVar1 = (**(code **)(*piVar3 + 0x48))(piVar3,local_3c);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,param_1[0x1a],&DAT_110051d4,0x48);
  }
  __vbaFreeVar(piVar3);
  __vbaExitProc();
  __vbaFreeStr(&LAB_11033969);
  return;
}


// ---- FUN_11033990 @ 11033990

void __cdecl FUN_11033990(int *param_1,undefined4 *param_2)

{
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_11001ae6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffd0;
  local_c = &DAT_11001750;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  *param_2 = 0;
  __vbaStrCopy(param_1);
  return;
}


// ---- FUN_11033a20 @ 11033a20

void __cdecl FUN_11033a20(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 local_3c [4];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  void *pvStack_20;
  undefined1 *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  puStack_1c = &LAB_11001ae6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffff38;
  local_14 = &DAT_11001760;
  local_10 = 0;
  local_c = 0;
  ExceptionList = &pvStack_20;
  piVar3 = param_1;
  (**(code **)(*param_1 + 4))(param_1);
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_3c[0] = 0;
  iVar1 = __vbaAptOffset(&DAT_11004234);
  __vbaStrCopy(piVar3);
  __vbaOnError();
  __vbaStrCopy();
  iVar2 = (**(code **)(*param_1 + 0x390))(param_1,8);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,param_1,&DAT_11004f78,0x390);
  }
  piVar3 = (int *)(&DAT_11039420 + iVar1);
  if (*piVar3 == 0) {
    __vbaNew2(&DAT_110051e4,piVar3);
  }
  piVar3 = (int *)*piVar3;
  __vbaVarDup();
  piVar4 = piVar3;
  iVar1 = (**(code **)(*piVar3 + 0x5c))(piVar3,local_3c);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar3,&DAT_110051d4,0x5c);
  }
  __vbaFreeVar(piVar4);
  __vbaVarDup();
  piVar3 = (int *)param_1[0x1a];
  iVar1 = (**(code **)(*piVar3 + 0x5c))(piVar3,local_3c);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,param_1[0x1a],&DAT_110051d4,0x5c);
  }
  __vbaFreeVar(piVar3);
  __vbaExitProc();
  __vbaFreeStr(&LAB_11033c89);
  return;
}


// ---- FUN_11033cb0 @ 11033cb0

void __cdecl FUN_11033cb0(int *param_1,undefined4 *param_2)

{
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_11001ae6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffd0;
  local_c = &DAT_11001788;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  *param_2 = 0;
  __vbaStrCopy(param_1);
  return;
}


// ---- FUN_11033d40 @ 11033d40

void __cdecl FUN_11033d40(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  void *pvStack_20;
  undefined1 *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  puStack_1c = &LAB_11001ae6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffff34;
  local_14 = &DAT_11001798;
  local_10 = 0;
  local_c = 0;
  ExceptionList = &pvStack_20;
  piVar3 = param_1;
  (**(code **)(*param_1 + 4))(param_1);
  iVar1 = __vbaAptOffset(&DAT_11004234);
  __vbaStrCopy(piVar3);
  __vbaOnError();
  __vbaStrCopy();
  iVar2 = (**(code **)(*param_1 + 0x390))(param_1,8);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,param_1,&DAT_11004f78,0x390);
  }
  piVar3 = (int *)(&DAT_11039420 + iVar1);
  if (*piVar3 == 0) {
    __vbaNew2(&DAT_110051e4,piVar3);
  }
  piVar3 = (int *)*piVar3;
  iVar1 = (**(code **)(*piVar3 + 0xc0))(piVar3,param_1[0x11]);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar3,&DAT_110051d4,0xc0);
  }
  iVar1 = (**(code **)(*(int *)param_1[0x1a] + 0xc0))((int *)param_1[0x1a],param_1[0x11]);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,param_1[0x1a],&DAT_110051d4,0xc0);
  }
  __vbaExitProc();
  __vbaFreeStr(&LAB_11033f86);
  return;
}


// ---- FUN_11033fb0 @ 11033fb0

void __cdecl FUN_11033fb0(int *param_1,undefined4 *param_2)

{
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_11001ae6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffd0;
  local_c = &DAT_110017c0;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  *param_2 = 0;
  __vbaStrCopy(param_1);
  return;
}


// ---- FUN_11034040 @ 11034040

void __cdecl FUN_11034040(int *param_1)

{
  int iVar1;
  int *piVar2;
  void *pvStack_20;
  undefined1 *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  puStack_1c = &LAB_11001ae6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffff3c;
  local_14 = &DAT_110017d0;
  local_10 = 0;
  local_c = 0;
  ExceptionList = &pvStack_20;
  piVar2 = param_1;
  (**(code **)(*param_1 + 4))(param_1);
  __vbaStrCopy(piVar2);
  __vbaOnError();
  __vbaStrCopy();
  iVar1 = (**(code **)(*param_1 + 0x390))(param_1,8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,param_1,&DAT_11004f78,0x390);
  }
  iVar1 = __vbaStrCmp(&DAT_110044dc,param_1[0xf]);
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*(int *)param_1[0x1a] + 0x128))((int *)param_1[0x1a],param_1[0xf]);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,param_1[0x1a],&DAT_110051d4,0x128);
    }
  }
  __vbaExitProc();
  __vbaFreeStr(&LAB_11034239);
  return;
}


// ---- FUN_11034260 @ 11034260

void __cdecl FUN_11034260(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  undefined4 local_e0 [2];
  undefined4 local_d8;
  undefined4 local_d0 [2];
  undefined *local_c8;
  undefined4 local_c0 [2];
  wchar_t *local_b8;
  undefined4 local_b0 [4];
  undefined4 local_a0 [4];
  undefined4 local_90 [2];
  undefined4 local_88;
  undefined4 local_80 [2];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64 [4];
  undefined4 local_54;
  undefined4 local_50 [4];
  undefined4 local_40 [4];
  undefined4 local_30 [4];
  void *pvStack_20;
  undefined1 *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  puStack_1c = &LAB_11001ae6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xfffffee8;
  local_14 = &DAT_110017f8;
  local_10 = 0;
  local_c = 0;
  ExceptionList = &pvStack_20;
  piVar5 = param_1;
  (**(code **)(*param_1 + 4))(param_1);
  local_30[0] = 0;
  local_40[0] = 0;
  local_50[0] = 0;
  local_54 = 0;
  local_64[0] = 0;
  local_68 = 0;
  local_6c = 0;
  local_70 = 0;
  local_80[0] = 0;
  local_90[0] = 0;
  local_a0[0] = 0;
  local_b0[0] = 0;
  local_c0[0] = 0;
  local_d0[0] = 0;
  local_e0[0] = 0;
  __vbaOnError(1);
  rtcGetDateVar(local_80);
  __vbaVarMove();
  local_b8 = L"mmddyy";
  local_c0[0] = 8;
  __vbaVarDup();
  rtcVarFromFormatVar(local_90,local_64,local_80,1,1);
  __vbaVarMove();
  __vbaFreeVar(piVar5);
  iVar2 = *param_1;
  uVar1 = __vbaStrVarVal(&local_68,local_30);
  iVar2 = (**(code **)(iVar2 + 0x80c))(param_1,uVar1);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,param_1,&DAT_11004fa8,0x80c);
  }
  __vbaFreeStr();
  iVar2 = (**(code **)(*param_1 + 0x808))(param_1,&local_68);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,param_1,&DAT_11004fa8,0x808);
  }
  local_78 = local_68;
  local_88 = 2;
  local_90[0] = 2;
  local_68 = 0;
  local_80[0] = 8;
  rtcMidCharVar(local_a0,local_80,1,local_90);
  __vbaVarMove();
  __vbaFreeVarList(2,local_80,local_90);
  iVar2 = (**(code **)(*param_1 + 0x808))(param_1,&local_68);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,param_1,&DAT_11004fa8,0x808);
  }
  local_78 = local_68;
  local_88 = 2;
  local_90[0] = 2;
  local_68 = 0;
  local_80[0] = 8;
  rtcMidCharVar(local_a0,local_80,3,local_90);
  __vbaVarMove();
  __vbaFreeVarList(2,local_80,local_90);
  iVar2 = (**(code **)(*param_1 + 0x808))(param_1,&local_68);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,param_1,&DAT_11004fa8,0x808);
  }
  local_78 = local_68;
  local_88 = 2;
  local_90[0] = 2;
  local_68 = 0;
  local_80[0] = 8;
  rtcMidCharVar(local_a0,local_80,5,local_90);
  __vbaStrVarMove(local_a0);
  __vbaStrMove();
  __vbaFreeVarList(3,local_80,local_90,local_a0);
  local_b8 = L"_";
  local_c0[0] = 8;
  local_c8 = &DAT_11005380;
  local_d0[0] = 8;
  local_d8 = local_54;
  local_e0[0] = 8;
  iVar2 = *param_1;
  uVar1 = __vbaVarCat(local_80,local_c0,local_50);
  uVar1 = __vbaVarCat(local_90,local_40,uVar1);
  uVar1 = __vbaVarCat(local_a0,local_d0,uVar1);
  uVar1 = __vbaVarCat(local_b0,local_e0,uVar1);
  uVar1 = __vbaStrVarVal(&local_68,uVar1);
  iVar2 = (**(code **)(iVar2 + 0x80c))(param_1,uVar1);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,param_1,&DAT_11004fa8,0x80c);
  }
  __vbaFreeStr();
  __vbaFreeVarList(4,local_80,local_90,local_a0,local_b0);
  uVar1 = (**(code **)(*param_1 + 0x3c4))(param_1);
  piVar3 = (int *)__vbaObjSet(&local_70,uVar1);
  piVar5 = param_1;
  iVar2 = (**(code **)(*param_1 + 0x808))(param_1,&local_68);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,param_1,&DAT_11004fa8,0x808);
  }
  iVar2 = *piVar3;
  __vbaStrCat(local_68,L"C:\\Backups\\");
  uVar1 = __vbaStrMove();
  piVar4 = piVar3;
  iVar2 = (**(code **)(iVar2 + 0xa4))(piVar3,uVar1);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar3,&DAT_11005304,0xa4);
  }
  __vbaFreeStrList(2,&local_68,&local_6c);
  __vbaFreeObj();
  __vbaExitProc();
  __vbaFreeVar(&LAB_110347c5);
  __vbaFreeVar(piVar4);
  __vbaFreeVar(uVar1);
  __vbaFreeStr();
  __vbaFreeVar(piVar5);
  return;
}


// ---- FUN_110347f0 @ 110347f0

undefined4 FUN_110347f0(int *param_1)

{
  int iVar1;
  void *local_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_11001ae6;
  local_18 = ExceptionList;
  local_10 = &stack0xffffffd0;
  local_c = &DAT_11001820;
  local_8 = 0;
  ExceptionList = &local_18;
  (**(code **)(*param_1 + 4))(param_1);
  iVar1 = (**(code **)(*(int *)param_1[4] + 0x338))((int *)param_1[4]);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,param_1[4],&DAT_11005a04,0x338);
  }
  (**(code **)(*param_1 + 8))(param_1);
  ExceptionList = local_18;
  return local_8;
}


// ---- FUN_11034870 @ 11034870

void __cdecl FUN_11034870(uint param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_11001ae6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc8;
  local_c = &DAT_11001828;
  local_8 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar4 + 4))(piVar4);
  local_1c = 0;
  uVar1 = (**(code **)(*piVar4 + 0x3c0))(piVar4);
  piVar2 = (int *)__vbaObjSet(&local_1c,uVar1);
  iVar3 = (**(code **)(*piVar2 + 0x8c))(piVar2,0xffffffff);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_11005314,0x8c);
  }
  __vbaFreeObj();
  (**(code **)(*piVar4 + 0x814))(piVar4);
  iVar3 = (**(code **)(*piVar4 + 0x7c0))(piVar4);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar4,&DAT_11005a34,0x7c0);
  }
  return;
}


// ---- FUN_11034960 @ 11034960

void __cdecl FUN_11034960(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined2 extraout_var;
  int *piVar4;
  code *pcVar5;
  int *local_ac [12];
  undefined4 local_7c;
  int local_74;
  undefined4 local_6c;
  undefined4 local_5c;
  undefined4 local_4c;
  undefined4 local_3c [4];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  void *pvStack_20;
  undefined1 *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  uint local_10;
  undefined4 local_c;
  
  puStack_1c = &LAB_11001ae6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffff34;
  local_14 = &DAT_11001838;
  local_10 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  local_c = 0;
  ExceptionList = &pvStack_20;
  (**(code **)(*piVar4 + 4))(piVar4);
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_3c[0] = 0;
  local_4c = 0;
  local_5c = 0;
  local_6c = 0;
  local_7c = 0;
  local_ac[0] = (int *)0x0;
  __vbaOnError(1);
  iVar1 = (**(code **)(*piVar4 + 0xa4))(piVar4,0xb);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar4,&DAT_11005a04,0xa4);
  }
  uVar2 = __vbaNew(&DAT_11005b54);
  pcVar5 = __vbaObjSet_exref;
  __vbaObjSet(&local_24,uVar2);
  __vbaObjSetAddref(local_ac,local_24);
  local_74 = piVar4[0x12];
  local_7c = 8;
  __vbaVarDup();
  piVar3 = local_ac[0];
  iVar1 = (**(code **)(*local_ac[0] + 0x48))(local_ac[0],local_3c);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_ac[0],&DAT_11005b44,0x48);
  }
  __vbaFreeVar(piVar3);
  iVar1 = (**(code **)(*local_ac[0] + 0x54))(local_ac[0],piVar4[0x13]);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_ac[0],&DAT_11005b44,0x54);
  }
  iVar1 = (**(code **)(*local_ac[0] + 0x30))(local_ac[0],piVar4[0xf]);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_ac[0],&DAT_11005b44,0x30);
  }
  iVar1 = (**(code **)(*piVar4 + 0x7a8))(piVar4,&local_28);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar4,&DAT_11005a34,0x7a8);
  }
  iVar1 = (**(code **)(*local_ac[0] + 0x28))(local_ac[0],local_28);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_ac[0],&DAT_11005b44,0x28);
  }
  __vbaFreeStr();
  iVar1 = (**(code **)(*local_ac[0] + 0x38))
                    (local_ac[0],CONCAT22(extraout_var,*(undefined2 *)((int)piVar4 + 0x46)));
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_ac[0],&DAT_11005b44,0x38);
  }
  if (*(short *)((int)piVar4 + 0x46) == -1) {
    uVar2 = (**(code **)(*piVar4 + 0x3b4))(piVar4);
    piVar3 = (int *)__vbaObjSet(&local_2c,uVar2);
    iVar1 = (**(code **)(*piVar3 + 0xa0))(piVar3,&local_28);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piVar3,&DAT_11005304,0xa0);
    }
    iVar1 = (**(code **)(*local_ac[0] + 0x20))(local_ac[0],local_28);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,local_ac[0],&DAT_11005b44,0x20);
    }
    __vbaFreeStr();
    __vbaFreeObj();
    pcVar5 = __vbaObjSet_exref;
  }
  iVar1 = (**(code **)(*local_ac[0] + 0x58))(local_ac[0]);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_ac[0],&DAT_11005b44,0x58);
  }
  __vbaObjSetAddref(local_ac,0);
  uVar2 = __vbaCastObj(0,&DAT_11005b44);
  (*pcVar5)(&local_24,uVar2);
  uVar2 = (**(code **)(*piVar4 + 0x3b8))(piVar4);
  piVar3 = (int *)(*pcVar5)(&local_2c,uVar2);
  iVar1 = (**(code **)(*piVar3 + 0xa4))(piVar3,&DAT_110044dc);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar3,&DAT_11005304,0xa4);
  }
  __vbaFreeObj();
  uVar2 = (**(code **)(*piVar4 + 0x3b4))(piVar4);
  piVar3 = (int *)__vbaObjSet(&local_2c,uVar2);
  iVar1 = (**(code **)(*piVar3 + 0xa4))(piVar3,&DAT_110044dc);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar3,&DAT_11005304,0xa4);
  }
  __vbaFreeObj();
  uVar2 = (**(code **)(*piVar4 + 0x3a8))(piVar4);
  piVar3 = (int *)__vbaObjSet(&local_2c,uVar2);
  iVar1 = (**(code **)(*piVar3 + 0xa4))(piVar3,&DAT_110044dc);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar3,&DAT_11005304,0xa4);
  }
  __vbaFreeObj();
  uVar2 = (**(code **)(*piVar4 + 0x3c0))(piVar4);
  piVar3 = (int *)__vbaObjSet(&local_2c,uVar2);
  iVar1 = (**(code **)(*piVar3 + 0x8c))(piVar3,0);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar3,&DAT_11005314,0x8c);
  }
  __vbaFreeObj();
  iVar1 = (**(code **)(*piVar4 + 0xa4))(piVar4,1);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar4,&DAT_11005a04,0xa4);
  }
  __vbaExitProc();
  __vbaFreeObj(&LAB_11034e14);
  __vbaFreeObj();
  return;
}


// ---- FUN_11034e40 @ 11034e40

undefined4 FUN_11034e40(uint param_1)

{
  int iVar1;
  int *piVar2;
  void *local_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_11001ae6;
  local_18 = ExceptionList;
  local_10 = &stack0xffffffd0;
  local_c = &DAT_11001860;
  local_8 = param_1 & 1;
  piVar2 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &local_18;
  (**(code **)(*piVar2 + 4))(piVar2);
  iVar1 = (**(code **)(*piVar2 + 0x7c0))(piVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar2,&DAT_11005a34,0x7c0);
  }
  local_8 = 0;
  (**(code **)(*piVar2 + 8))(piVar2);
  ExceptionList = local_18;
  return local_8;
}


// ---- FUN_11034ed0 @ 11034ed0

undefined4 FUN_11034ed0(uint param_1)

{
  int *piVar1;
  void *local_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_11001ae6;
  local_18 = ExceptionList;
  local_10 = &stack0xffffffd4;
  local_c = &DAT_11001868;
  local_8 = param_1 & 1;
  piVar1 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &local_18;
  (**(code **)(*piVar1 + 4))(piVar1);
  __vbaRaiseEvent(piVar1,1,0);
  local_8 = 0;
  (**(code **)(*piVar1 + 8))(piVar1);
  ExceptionList = local_18;
  return local_8;
}


// ---- FUN_11034f50 @ 11034f50

undefined4 FUN_11034f50(uint param_1)

{
  int *piVar1;
  void *local_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_11001ae6;
  local_18 = ExceptionList;
  local_10 = &stack0xffffffd4;
  local_c = &DAT_11001870;
  local_8 = param_1 & 1;
  piVar1 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &local_18;
  (**(code **)(*piVar1 + 4))(piVar1);
  __vbaRaiseEvent(piVar1,2,0);
  local_8 = 0;
  (**(code **)(*piVar1 + 8))(piVar1);
  ExceptionList = local_18;
  return local_8;
}


// ---- FUN_11034fd0 @ 11034fd0

void __cdecl FUN_11034fd0(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_11001ae6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffbc;
  local_c = &DAT_11001878;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  local_20 = 0;
  *param_2 = 0;
  local_24 = 0;
  uVar1 = (**(code **)(*param_1 + 0x3b8))(param_1);
  piVar2 = (int *)__vbaObjSet(&local_24,uVar1);
  iVar3 = (**(code **)(*piVar2 + 0xa0))(piVar2,&local_20);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_11005304,0xa0);
  }
  local_20 = 0;
  __vbaStrMove();
  __vbaFreeObj();
  return;
}


// ---- FUN_110350c0 @ 110350c0

void __cdecl FUN_110350c0(int *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  void *pvStack_20;
  undefined1 *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  puStack_1c = &LAB_11001ae6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffff30;
  local_14 = &DAT_11001888;
  local_10 = 0;
  local_c = 0;
  ExceptionList = &pvStack_20;
  piVar2 = param_1;
  (**(code **)(*param_1 + 4))(param_1);
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  __vbaStrCopy(piVar2);
  __vbaOnError();
  uVar1 = (**(code **)(*param_1 + 0x3b8))();
  piVar2 = (int *)__vbaObjSet(&local_34,uVar1);
  iVar3 = (**(code **)(*piVar2 + 0xa4))(piVar2,local_24);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_11005304,0xa4);
  }
  __vbaFreeObj();
  iVar3 = (**(code **)(*param_1 + 0x390))(param_1,8,local_80,L"TextRestore",local_78);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,param_1,&DAT_11005a04,0x390);
  }
  uVar1 = (**(code **)(*param_1 + 0x3b8))(param_1);
  piVar2 = (int *)__vbaObjSet(&local_34,uVar1);
  iVar3 = (**(code **)(*piVar2 + 0xa4))(piVar2,local_24);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_11005304,0xa4);
  }
  __vbaFreeObj();
  uVar1 = (**(code **)(*param_1 + 0x3b8))(param_1);
  piVar2 = (int *)__vbaObjSet(&local_34,uVar1);
  iVar3 = (**(code **)(*piVar2 + 0xa0))(piVar2,&local_28);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_11005304,0xa0);
  }
  __vbaStrCat(L"\\comments.txt",local_28);
  __vbaStrMove();
  iVar3 = (**(code **)(*param_1 + 0x7c4))(param_1,&local_2c,&local_30);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,param_1,&DAT_11005a34,0x7c4);
  }
  __vbaFreeStrList(3,&local_28,&local_2c,&local_30);
  __vbaFreeObj();
  __vbaExitProc();
  __vbaFreeStr(&LAB_1103539b);
  return;
}


// ---- FUN_110353c0 @ 110353c0

void __cdecl FUN_110353c0(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_11001ae6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffbc;
  local_c = &DAT_110018b0;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  local_20 = 0;
  *param_2 = 0;
  local_24 = 0;
  uVar1 = (**(code **)(*param_1 + 0x3b4))(param_1);
  piVar2 = (int *)__vbaObjSet(&local_24,uVar1);
  iVar3 = (**(code **)(*piVar2 + 0xa0))(piVar2,&local_20);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_11005304,0xa0);
  }
  local_20 = 0;
  __vbaStrMove();
  __vbaFreeObj();
  return;
}


// ---- FUN_110354b0 @ 110354b0

void __cdecl FUN_110354b0(int *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  void *pvStack_20;
  undefined1 *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  puStack_1c = &LAB_11001ae6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffff3c;
  local_14 = &DAT_110018c0;
  local_10 = 0;
  local_c = 0;
  ExceptionList = &pvStack_20;
  piVar2 = param_1;
  (**(code **)(*param_1 + 4))(param_1);
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  __vbaStrCopy(piVar2);
  __vbaOnError();
  uVar1 = (**(code **)(*param_1 + 0x3b4))();
  piVar2 = (int *)__vbaObjSet(&local_2c,uVar1);
  iVar3 = (**(code **)(*piVar2 + 0xa4))(piVar2,local_24);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_11005304,0xa4);
  }
  __vbaFreeObj();
  iVar3 = (**(code **)(*param_1 + 0x390))(param_1,8,local_78,L"TextUser",local_70);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,param_1,&DAT_11005a04,0x390);
  }
  uVar1 = (**(code **)(*param_1 + 0x3b4))(param_1);
  piVar2 = (int *)__vbaObjSet(&local_2c,uVar1);
  iVar3 = (**(code **)(*piVar2 + 0xa4))(piVar2,local_24);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_11005304,0xa4);
  }
  __vbaFreeObj();
  __vbaExitProc();
  __vbaFreeStr(&LAB_110356e3);
  return;
}


// ---- FUN_11035710 @ 11035710

undefined4 FUN_11035710(int *param_1,undefined2 *param_2)

{
  int iVar1;
  void *local_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_11001ae6;
  local_18 = ExceptionList;
  local_10 = &stack0xffffffd0;
  local_c = &DAT_110018e8;
  local_8 = 0;
  ExceptionList = &local_18;
  (**(code **)(*param_1 + 4))(param_1);
  iVar1 = param_1[0x14];
  (**(code **)(*param_1 + 8))(param_1);
  *param_2 = (short)iVar1;
  ExceptionList = local_18;
  return local_8;
}


// ---- FUN_11035780 @ 11035780

undefined4 FUN_11035780(int *param_1,undefined2 param_2)

{
  int iVar1;
  undefined4 local_24;
  undefined4 local_1c;
  void *local_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_11001ae6;
  local_18 = ExceptionList;
  local_10 = &stack0xffffffc0;
  local_c = &DAT_110018f0;
  local_8 = 0;
  ExceptionList = &local_18;
  (**(code **)(*param_1 + 4))(param_1);
  *(undefined2 *)(param_1 + 0x14) = param_2;
  iVar1 = (**(code **)(*param_1 + 0x390))(param_1,8,local_24,L"blnNotes",local_1c);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,param_1,&DAT_11005a04,0x390);
  }
  (**(code **)(*param_1 + 8))(param_1);
  ExceptionList = local_18;
  return local_8;
}


// ---- FUN_11035830 @ 11035830

void FUN_11035830(void)

{
  undefined4 local_74;
  undefined4 local_6c;
  void *pvStack_20;
  undefined1 *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  puStack_1c = &LAB_11001ae6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffff40;
  local_14 = &DAT_110018f8;
  local_10 = 0;
  local_c = 0;
  ExceptionList = &pvStack_20;
  __vbaOnError(1);
  rtcGetSetting(L"Parachute",L"Restore",L"UserDir",8,local_74,&DAT_110044dc,local_6c);
  __vbaStrMove();
  __vbaStrCopy();
  __vbaFreeStr();
  rtcGetSetting(L"Parachute",L"Restore",L"UserSubDir",8,local_74);
  __vbaStrMove();
  __vbaStrCopy();
  __vbaFreeStr();
  rtcGetSetting(L"Parachute",L"Backup",L"UserDir");
  __vbaStrMove();
  __vbaStrCopy();
  __vbaFreeStr();
  rtcGetSetting(L"Parachute");
  __vbaStrMove();
  __vbaStrCopy();
  __vbaFreeStr();
  rtcGetSetting();
  __vbaStrMove();
  __vbaStrCopy();
  __vbaFreeStr();
  rtcGetSetting();
  __vbaStrMove();
  __vbaStrCopy();
  __vbaFreeStr();
  __vbaExitProc();
  return;
}


// ---- FUN_11035b90 @ 11035b90

void __cdecl FUN_11035b90(uint param_1)

{
  int *piVar1;
  void *pvStack_20;
  undefined1 *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  uint local_10;
  undefined4 local_c;
  
  puStack_1c = &LAB_11001ae6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffff40;
  local_14 = &DAT_11001920;
  local_10 = param_1 & 1;
  piVar1 = (int *)(param_1 & 0xfffffffe);
  local_c = 0;
  ExceptionList = &pvStack_20;
  (**(code **)(*piVar1 + 4))(piVar1);
  __vbaOnError(1);
  (**(code **)(*piVar1 + 0x814))(piVar1);
  __vbaExitProc();
  return;
}


// ---- FUN_11035d10 @ 11035d10

void __cdecl FUN_11035d10(uint param_1)

{
  int *piVar1;
  int *piVar2;
  void *pvStack_20;
  undefined1 *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  uint local_10;
  undefined4 local_c;
  
  puStack_1c = &LAB_11001ae6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffff40;
  local_14 = &DAT_11001948;
  local_10 = param_1 & 1;
  piVar1 = (int *)(param_1 & 0xfffffffe);
  local_c = 0;
  ExceptionList = &pvStack_20;
  piVar2 = piVar1;
  (**(code **)(*piVar1 + 4))(piVar1);
  __vbaOnError(1);
  *(undefined2 *)(piVar1 + 0x14) = 0;
  __vbaStrCopy(piVar2);
  __vbaStrCopy();
  *(undefined2 *)(piVar1 + 0x10) = 0;
  *(undefined2 *)((int)piVar1 + 0x42) = 0;
  *(undefined2 *)(piVar1 + 0x11) = 0;
  *(undefined2 *)((int)piVar1 + 0x46) = 0;
  __vbaStrCopy();
  __vbaExitProc();
  return;
}


// ---- FUN_11035ec0 @ 11035ec0

void __cdecl FUN_11035ec0(uint param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  wchar_t *pwVar6;
  int *piVar7;
  undefined4 local_74;
  undefined4 local_6c;
  undefined4 local_38 [4];
  undefined4 local_28;
  undefined4 local_24;
  void *pvStack_20;
  undefined1 *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  uint local_10;
  undefined4 local_c;
  
  puStack_1c = &LAB_11001ae6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffff34;
  local_14 = &DAT_11001970;
  local_10 = param_1 & 1;
  piVar5 = (int *)(param_1 & 0xfffffffe);
  local_c = 0;
  ExceptionList = &pvStack_20;
  (**(code **)(*piVar5 + 4))(piVar5);
  local_24 = 0;
  local_28 = 0;
  local_38[0] = 0;
  __vbaOnError(1);
  uVar2 = (**(code **)(*piVar5 + 0x3b8))(piVar5);
  piVar3 = (int *)__vbaObjSet(&local_28,uVar2);
  piVar7 = (int *)*param_2;
  iVar4 = (**(code **)(*piVar7 + 0x1c))
                    (piVar7,L"TextRestore",8,local_74,&DAT_110044dc,local_6c,local_38);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar7,&DAT_11005140,0x1c);
  }
  iVar4 = *piVar3;
  uVar2 = __vbaStrVarVal(&local_24,local_38);
  piVar7 = piVar3;
  iVar4 = (**(code **)(iVar4 + 0xa4))(piVar3,uVar2);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar3,&DAT_11005304,0xa4);
  }
  __vbaFreeStr();
  __vbaFreeObj();
  __vbaFreeVar(piVar7);
  uVar2 = (**(code **)(*piVar5 + 0x3b4))(piVar5);
  piVar3 = (int *)__vbaObjSet(&local_28,uVar2);
  piVar7 = (int *)*param_2;
  iVar4 = (**(code **)(*piVar7 + 0x1c))
                    (piVar7,L"TextUser",8,local_74,&DAT_110044dc,local_6c,local_38);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar7,&DAT_11005140,0x1c);
  }
  iVar4 = *piVar3;
  uVar2 = __vbaStrVarVal(&local_24,local_38);
  piVar7 = piVar3;
  iVar4 = (**(code **)(iVar4 + 0xa4))(piVar3,uVar2);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar3,&DAT_11005304,0xa4);
  }
  __vbaFreeStr();
  __vbaFreeObj();
  __vbaFreeVar(piVar7);
  piVar7 = (int *)*param_2;
  piVar3 = piVar7;
  iVar4 = (**(code **)(*piVar7 + 0x1c))(piVar7,L"blnNotes",2,local_74,0,local_6c,local_38);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar7,&DAT_11005140,0x1c);
  }
  uVar1 = __vbaBoolVar(local_38);
  *(undefined2 *)(piVar5 + 0x14) = uVar1;
  __vbaFreeVar(piVar3);
  piVar7 = (int *)*param_2;
  uVar2 = 8;
  pwVar6 = L"LeoSysPath";
  piVar3 = piVar7;
  iVar4 = (**(code **)(*piVar7 + 0x1c))
                    (piVar7,L"LeoSysPath",8,local_74,&DAT_110044dc,local_6c,local_38);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar7,&DAT_11005140,0x1c);
  }
  __vbaStrVarMove(local_38);
  __vbaStrMove();
  __vbaStrCopy(piVar3,pwVar6);
  __vbaFreeStr();
  __vbaFreeVar(uVar2);
  piVar7 = (int *)*param_2;
  uVar2 = 8;
  pwVar6 = L"LeoConfigPath";
  piVar3 = piVar7;
  iVar4 = (**(code **)(*piVar7 + 0x1c))
                    (piVar7,L"LeoConfigPath",8,local_74,&DAT_110044dc,local_6c,local_38);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar7,&DAT_11005140,0x1c);
  }
  __vbaStrVarMove(local_38);
  __vbaStrMove();
  __vbaStrCopy(piVar3,pwVar6);
  __vbaFreeStr();
  __vbaFreeVar(uVar2);
  piVar7 = (int *)*param_2;
  piVar3 = piVar7;
  iVar4 = (**(code **)(*piVar7 + 0x1c))(piVar7,L"blnZip",2,local_74,0,local_6c,local_38);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar7,&DAT_11005140,0x1c);
  }
  uVar1 = __vbaBoolVar(local_38);
  *(undefined2 *)(piVar5 + 0x10) = uVar1;
  __vbaFreeVar(piVar3);
  piVar7 = (int *)*param_2;
  piVar3 = piVar7;
  iVar4 = (**(code **)(*piVar7 + 0x1c))(piVar7,L"blnLocal",2,local_74,0,local_6c,local_38);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar7,&DAT_11005140,0x1c);
  }
  uVar1 = __vbaBoolVar(local_38);
  *(undefined2 *)((int)piVar5 + 0x42) = uVar1;
  __vbaFreeVar(piVar3);
  piVar7 = (int *)*param_2;
  piVar3 = piVar7;
  iVar4 = (**(code **)(*piVar7 + 0x1c))(piVar7,L"blnNetwork",2,local_74,0,local_6c,local_38);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar7,&DAT_11005140,0x1c);
  }
  uVar1 = __vbaBoolVar(local_38);
  *(undefined2 *)(piVar5 + 0x11) = uVar1;
  __vbaFreeVar(piVar3);
  piVar7 = (int *)*param_2;
  piVar3 = piVar7;
  iVar4 = (**(code **)(*piVar7 + 0x1c))(piVar7,L"blnUser",2,local_74,0,local_6c,local_38);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar7,&DAT_11005140,0x1c);
  }
  uVar1 = __vbaBoolVar(local_38);
  *(undefined2 *)((int)piVar5 + 0x46) = uVar1;
  __vbaFreeVar(piVar3);
  piVar7 = (int *)*param_2;
  uVar2 = 8;
  pwVar6 = L"LogonName";
  piVar3 = piVar7;
  iVar4 = (**(code **)(*piVar7 + 0x1c))
                    (piVar7,L"LogonName",8,local_74,&DAT_110044e4,local_6c,local_38);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar7,&DAT_11005140,0x1c);
  }
  __vbaStrVarMove(local_38);
  __vbaStrMove();
  __vbaStrCopy(piVar3,pwVar6);
  __vbaFreeStr();
  __vbaFreeVar(uVar2);
  __vbaExitProc();
  return;
}


// ---- FUN_11036590 @ 11036590

void __cdecl FUN_11036590(uint param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined4 local_84;
  undefined4 local_7c;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_34;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  void *pvStack_20;
  undefined1 *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  uint local_10;
  undefined4 local_c;
  
  puStack_1c = &LAB_11001ae6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffff2c;
  local_14 = &DAT_11001998;
  local_10 = param_1 & 1;
  piVar5 = (int *)(param_1 & 0xfffffffe);
  local_c = 0;
  ExceptionList = &pvStack_20;
  (**(code **)(*piVar5 + 4))(piVar5);
  local_24 = 0;
  local_28 = 0;
  __vbaOnError(1);
  uVar1 = (**(code **)(*piVar5 + 0x3b8))(piVar5);
  piVar2 = (int *)__vbaObjSet(&local_28,uVar1);
  iVar3 = (**(code **)(*piVar2 + 0xa0))(piVar2,&local_24);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_11005304,0xa0);
  }
  uVar1 = local_24;
  piVar2 = (int *)*param_2;
  local_24 = 0;
  piVar6 = piVar2;
  iVar3 = (**(code **)(*piVar2 + 0x20))
                    (piVar2,L"TextRestore",8,local_34,uVar1,local_2c,8,local_74,&DAT_110044dc,
                     local_6c);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_11005140,0x20);
  }
  __vbaFreeObj();
  __vbaFreeVar(piVar6);
  uVar1 = (**(code **)(*piVar5 + 0x3b4))(piVar5);
  piVar2 = (int *)__vbaObjSet(&local_28,uVar1);
  iVar3 = (**(code **)(*piVar2 + 0xa0))(piVar2,&local_24);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_11005304,0xa0);
  }
  uVar1 = local_24;
  piVar2 = (int *)*param_2;
  local_24 = 0;
  piVar6 = piVar2;
  iVar3 = (**(code **)(*piVar2 + 0x20))
                    (piVar2,L"TextUser",8,local_34,uVar1,local_2c,8,local_74,&DAT_110044dc,local_6c)
  ;
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_11005140,0x20);
  }
  __vbaFreeObj();
  __vbaFreeVar(piVar6);
  piVar2 = (int *)*param_2;
  local_70 = CONCAT22(0x1100,(short)piVar5[0x14]);
  piVar6 = piVar2;
  iVar3 = (**(code **)(*piVar2 + 0x20))
                    (piVar2,L"blnNotes",0xb,local_74,local_70,local_6c,2,local_84,0,local_7c);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_11005140,0x20);
  }
  __vbaFreeVar(piVar6);
  piVar2 = (int *)*param_2;
  iVar3 = (**(code **)(*piVar2 + 0x20))
                    (piVar2,L"LeoSysPath",8,local_74,piVar5[0x12],local_6c,8,local_84,&DAT_110044dc,
                     local_7c);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_11005140,0x20);
  }
  piVar2 = (int *)*param_2;
  iVar3 = piVar5[0x13];
  iVar4 = (**(code **)(*piVar2 + 0x20))
                    (piVar2,L"LeoConfigPath",8,local_74,iVar3,local_6c,8,local_84,&DAT_110044dc,
                     local_7c);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar2,&DAT_11005140,0x20);
  }
  piVar2 = (int *)*param_2;
  local_70._2_2_ = (undefined2)((uint)iVar3 >> 0x10);
  local_70 = CONCAT22(local_70._2_2_,(short)piVar5[0x10]);
  piVar6 = piVar2;
  iVar3 = (**(code **)(*piVar2 + 0x20))
                    (piVar2,L"blnZip",0xb,local_74,local_70,local_6c,2,local_84,0,local_7c);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_11005140,0x20);
  }
  __vbaFreeVar(piVar6);
  piVar2 = (int *)*param_2;
  local_70 = CONCAT22(local_70._2_2_,*(undefined2 *)((int)piVar5 + 0x42));
  piVar6 = piVar2;
  iVar3 = (**(code **)(*piVar2 + 0x20))
                    (piVar2,L"blnLocal",0xb,local_74,local_70,local_6c,2,local_84,0,local_7c);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_11005140,0x20);
  }
  __vbaFreeVar(piVar6);
  piVar2 = (int *)*param_2;
  local_70 = CONCAT22(local_70._2_2_,(short)piVar5[0x11]);
  piVar6 = piVar2;
  iVar3 = (**(code **)(*piVar2 + 0x20))
                    (piVar2,L"blnNetwork",0xb,local_74,local_70,local_6c,2,local_84,0,local_7c);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_11005140,0x20);
  }
  __vbaFreeVar(piVar6);
  piVar2 = (int *)*param_2;
  local_70 = CONCAT22(local_70._2_2_,*(undefined2 *)((int)piVar5 + 0x46));
  piVar6 = piVar2;
  iVar3 = (**(code **)(*piVar2 + 0x20))
                    (piVar2,L"blnUser",0xb,local_74,local_70,local_6c,2,local_84,0,local_7c);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_11005140,0x20);
  }
  __vbaFreeVar(piVar6);
  piVar2 = (int *)*param_2;
  iVar3 = (**(code **)(*piVar2 + 0x20))
                    (piVar2,L"LogonName",8,local_74,piVar5[0xf],local_6c,8,local_84,&DAT_110044e4,
                     local_7c);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_11005140,0x20);
  }
  __vbaExitProc();
  return;
}


// ---- FUN_11036c90 @ 11036c90

void __cdecl FUN_11036c90(int *param_1)

{
  short sVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int **ppiVar7;
  undefined4 local_a4 [9];
  undefined4 local_80;
  undefined4 local_70;
  undefined4 local_60;
  undefined4 local_50;
  undefined4 local_40 [2];
  int *local_38;
  int *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int *local_24;
  void *pvStack_20;
  undefined1 *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  puStack_1c = &LAB_11001ae6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffff18;
  local_14 = &DAT_110019c0;
  local_10 = 0;
  local_c = 0;
  ExceptionList = &pvStack_20;
  piVar5 = param_1;
  (**(code **)(*param_1 + 4))(param_1);
  local_24 = (int *)0x0;
  local_28 = 0;
  local_2c = 0;
  local_30 = (int *)0x0;
  local_40[0] = 0;
  local_50 = 0;
  local_60 = 0;
  local_70 = 0;
  local_80 = 0;
  local_a4[0] = 0;
  __vbaOnError(1);
  uVar2 = __vbaNew(&DAT_11005b54);
  __vbaObjSet(&local_24,uVar2);
  __vbaStrCopy(piVar5);
  uVar2 = (**(code **)(*param_1 + 0x3b0))();
  piVar3 = (int *)__vbaObjSet(&local_2c,uVar2);
  ppiVar7 = &local_30;
  uVar2 = 0;
  piVar5 = piVar3;
  iVar4 = (**(code **)(*piVar3 + 0x40))(piVar3,0,ppiVar7);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar3,&DAT_11005ef4,0x40);
  }
  local_38 = local_30;
  local_30 = (int *)0x0;
  local_40[0] = 9;
  sVar1 = __vbaBoolVarNull(local_40);
  __vbaFreeObj();
  __vbaFreeVar(piVar5);
  if (sVar1 != 0) {
    __vbaStrCopy(uVar2,ppiVar7);
  }
  uVar2 = (**(code **)(*param_1 + 0x3b0))(param_1);
  piVar3 = (int *)__vbaObjSet(&local_2c,uVar2);
  ppiVar7 = &local_30;
  uVar2 = 1;
  piVar5 = piVar3;
  iVar4 = (**(code **)(*piVar3 + 0x40))(piVar3,1,ppiVar7);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar3,&DAT_11005ef4,0x40);
  }
  local_38 = local_30;
  local_30 = (int *)0x0;
  local_40[0] = 9;
  sVar1 = __vbaBoolVarNull(local_40);
  __vbaFreeObj();
  __vbaFreeVar(piVar5);
  if (sVar1 != 0) {
    __vbaStrCopy(uVar2,ppiVar7);
  }
  uVar2 = (**(code **)(*param_1 + 0x3b0))(param_1);
  piVar3 = (int *)__vbaObjSet(&local_2c,uVar2);
  ppiVar7 = &local_30;
  uVar2 = 2;
  piVar5 = piVar3;
  iVar4 = (**(code **)(*piVar3 + 0x40))(piVar3,2,ppiVar7);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar3,&DAT_11005ef4,0x40);
  }
  local_38 = local_30;
  local_30 = (int *)0x0;
  local_40[0] = 9;
  sVar1 = __vbaBoolVarNull(local_40);
  __vbaFreeObj();
  __vbaFreeVar(piVar5);
  if (sVar1 != 0) {
    __vbaStrCopy(uVar2,ppiVar7);
  }
  uVar2 = (**(code **)(*param_1 + 0x3b0))(param_1);
  piVar3 = (int *)__vbaObjSet(&local_2c,uVar2);
  ppiVar7 = &local_30;
  uVar2 = 3;
  piVar5 = piVar3;
  iVar4 = (**(code **)(*piVar3 + 0x40))(piVar3,3,ppiVar7);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar3,&DAT_11005ef4,0x40);
  }
  local_38 = local_30;
  local_30 = (int *)0x0;
  local_40[0] = 9;
  sVar1 = __vbaBoolVarNull(local_40);
  __vbaFreeObj();
  __vbaFreeVar(piVar5);
  if (sVar1 == 0) {
    iVar4 = (**(code **)(*param_1 + 0x7b4))(param_1,&DAT_110044dc);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,param_1,&DAT_11005a34,0x7b4);
    }
    iVar4 = (**(code **)(*param_1 + 0x7ac))(param_1,&DAT_110044dc);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,param_1,&DAT_11005a34,0x7ac);
    }
    iVar4 = (**(code **)(*local_24 + 0x38))(local_24,0);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,local_24,&DAT_11005b44,0x38);
    }
  }
  else {
    *(undefined2 *)((int)param_1 + 0x46) = 0xffff;
    __vbaStrCat(param_1[0x1c],param_1[0x15]);
    __vbaStrMove();
    __vbaStrCopy(uVar2,ppiVar7);
    __vbaFreeStr();
    iVar4 = (**(code **)(*param_1 + 0x7b4))(param_1,param_1[0x16]);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,param_1,&DAT_11005a34,0x7b4);
    }
    iVar4 = (**(code **)(*param_1 + 0x7ac))(param_1,param_1[0x17]);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,param_1,&DAT_11005a34,0x7ac);
    }
    iVar4 = (**(code **)(*param_1 + 0x7a8))(param_1,&local_28);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,param_1,&DAT_11005a34,0x7a8);
    }
    iVar4 = (**(code **)(*local_24 + 0x28))(local_24,local_28);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,local_24,&DAT_11005b44,0x28);
    }
    __vbaFreeStr();
    iVar4 = (**(code **)(*param_1 + 0x7b0))(param_1,&local_28);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,param_1,&DAT_11005a34,0x7b0);
    }
    iVar4 = (**(code **)(*local_24 + 0x40))(local_24,local_28);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,local_24,&DAT_11005b44,0x40);
    }
    __vbaFreeStr();
  }
  uVar2 = (**(code **)(*param_1 + 0x3b0))(param_1);
  piVar5 = (int *)__vbaObjSet(&local_2c,uVar2);
  iVar4 = (**(code **)(*piVar5 + 0x40))(piVar5,3,&local_30);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar5,&DAT_11005ef4,0x40);
  }
  piVar5 = local_30;
  iVar4 = (**(code **)(*local_30 + 0xe0))(local_30,local_a4);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar5,&DAT_11005f04,0xe0);
  }
  sVar1 = (short)local_a4[0];
  __vbaFreeObjList(2,&local_2c,&local_30);
  if (sVar1 != -1) {
    *(undefined2 *)((int)param_1 + 0x46) = 0;
    iVar4 = param_1[0x15];
    piVar5 = param_1;
    iVar6 = (**(code **)(*param_1 + 0x7ac))(param_1,iVar4);
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,param_1,&DAT_11005a34,0x7ac);
    }
    __vbaStrCat(param_1[0x19],param_1[0x15]);
    __vbaStrMove();
    __vbaStrCopy(piVar5,iVar4);
    __vbaFreeStr();
    iVar4 = (**(code **)(*param_1 + 0x7c4))(param_1,param_1 + 0x19,&local_28);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,param_1,&DAT_11005a34,0x7c4);
    }
    __vbaFreeStr();
  }
  uVar2 = __vbaCastObj(0,&DAT_11005b44);
  __vbaObjSet(&local_24,uVar2);
  __vbaExitProc();
  __vbaFreeObj(&LAB_1103726c);
  return;
}


// ---- FUN_11037290 @ 11037290

void __cdecl FUN_11037290(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_80 [2];
  undefined4 *local_78;
  undefined4 local_70;
  undefined4 local_60;
  undefined4 local_50;
  undefined4 local_40;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  void *pvStack_20;
  undefined1 *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  puStack_1c = &LAB_11001ae6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffff38;
  local_14 = &DAT_110019e8;
  local_10 = 0;
  local_c = 0;
  ExceptionList = &pvStack_20;
  (**(code **)(*param_1 + 4))(param_1);
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_30 = 0;
  local_40 = 0;
  local_50 = 0;
  local_60 = 0;
  local_70 = 0;
  local_80[0] = 0;
  *param_3 = 0;
  __vbaOnError(1);
  local_78 = param_2;
  local_80[0] = 0x4008;
  rtcDir(local_80,2);
  uVar2 = __vbaStrMove();
  iVar3 = __vbaStrCmp(&DAT_110044dc,uVar2);
  __vbaStrBool(-(uint)(iVar3 != 0));
  __vbaStrMove();
  __vbaFreeStr();
  sVar1 = __vbaBoolStr(local_28);
  *(short *)(param_1 + 0x14) = sVar1;
  if (sVar1 == -1) {
    __vbaFileOpen(1,0xffffffff,1,*param_2);
    __vbaLineInputStr(&local_24,1);
    uVar2 = (**(code **)(*param_1 + 0x3a8))(param_1);
    piVar4 = (int *)__vbaObjSet(&local_30,uVar2);
    iVar3 = (**(code **)(*piVar4 + 0xa4))(piVar4,local_24);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar4,&DAT_11005304,0xa4);
    }
    __vbaFreeObj();
    __vbaFileClose(1);
  }
  else {
    uVar2 = (**(code **)(*param_1 + 0x3a8))(param_1);
    piVar4 = (int *)__vbaObjSet(&local_30,uVar2);
    iVar3 = (**(code **)(*piVar4 + 0xa4))(piVar4,L"No comments were saved with this backup.");
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar4,&DAT_11005304,0xa4);
    }
    __vbaFreeObj();
  }
  __vbaExitProc();
  __vbaFreeStr(&LAB_11037513);
  return;
}


// ---- FUN_11037540 @ 11037540

void __cdecl FUN_11037540(int *param_1,undefined4 *param_2)

{
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_11001ae6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffd0;
  local_c = &DAT_11001a10;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  *param_2 = 0;
  __vbaStrCopy(param_1);
  return;
}


// ---- FUN_110375d0 @ 110375d0

void __cdecl FUN_110375d0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 local_40 [4];
  undefined4 local_30;
  undefined4 local_2c;
  int *local_28;
  undefined4 local_24;
  void *pvStack_20;
  undefined1 *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  puStack_1c = &LAB_11001ae6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffff38;
  local_14 = &DAT_11001a20;
  local_10 = 0;
  local_c = 0;
  ExceptionList = &pvStack_20;
  piVar3 = param_1;
  (**(code **)(*param_1 + 4))(param_1);
  local_24 = 0;
  local_28 = (int *)0x0;
  local_2c = 0;
  local_30 = 0;
  local_40[0] = 0;
  __vbaStrCopy(piVar3);
  __vbaOnError();
  __vbaStrCopy();
  iVar1 = (**(code **)(*param_1 + 0x390))(param_1,8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,param_1,&DAT_11005a04,0x390);
  }
  uVar2 = __vbaNew(&DAT_11005b54);
  __vbaObjSet(&local_28,uVar2);
  __vbaVarDup();
  piVar3 = local_28;
  iVar1 = (**(code **)(*local_28 + 0x48))(local_28,local_40);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_28,&DAT_11005b44,0x48);
  }
  __vbaFreeVar(piVar3);
  uVar2 = __vbaCastObj(0,&DAT_11005b44);
  __vbaObjSet(&local_28,uVar2);
  __vbaExitProc();
  __vbaFreeStr(&LAB_11037803);
  __vbaFreeObj();
  return;
}


// ---- FUN_11037830 @ 11037830

void __cdecl FUN_11037830(int *param_1,undefined4 *param_2)

{
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_11001ae6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffd0;
  local_c = &DAT_11001a48;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  *param_2 = 0;
  __vbaStrCopy(param_1);
  return;
}


// ---- FUN_110378c0 @ 110378c0

void __cdecl FUN_110378c0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *local_24;
  void *pvStack_20;
  undefined1 *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  puStack_1c = &LAB_11001ae6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffff38;
  local_14 = &DAT_11001a58;
  local_10 = 0;
  local_c = 0;
  ExceptionList = &pvStack_20;
  piVar3 = param_1;
  (**(code **)(*param_1 + 4))(param_1);
  local_24 = (int *)0x0;
  __vbaStrCopy(piVar3);
  __vbaOnError();
  __vbaStrCopy();
  iVar1 = (**(code **)(*param_1 + 0x390))(param_1,8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,param_1,&DAT_11005a04,0x390);
  }
  uVar2 = __vbaNew(&DAT_11005b54);
  __vbaObjSet(&local_24,uVar2);
  iVar1 = (**(code **)(*local_24 + 0x54))(local_24,param_1[0x13]);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_24,&DAT_11005b44,0x54);
  }
  uVar2 = __vbaCastObj(0,&DAT_11005b44);
  __vbaObjSet(&local_24,uVar2);
  __vbaExitProc();
  __vbaFreeObj(&LAB_11037ad1);
  __vbaFreeStr();
  return;
}


// ---- FUN_11037af0 @ 11037af0

undefined4 FUN_11037af0(int *param_1,undefined2 *param_2)

{
  int iVar1;
  void *local_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_11001ae6;
  local_18 = ExceptionList;
  local_10 = &stack0xffffffd0;
  local_c = &DAT_11001a80;
  local_8 = 0;
  ExceptionList = &local_18;
  (**(code **)(*param_1 + 4))(param_1);
  iVar1 = param_1[0x10];
  (**(code **)(*param_1 + 8))(param_1);
  *param_2 = (short)iVar1;
  ExceptionList = local_18;
  return local_8;
}


// ---- FUN_11037b60 @ 11037b60

undefined4 FUN_11037b60(int *param_1,undefined2 param_2)

{
  int iVar1;
  undefined4 local_24;
  undefined4 local_1c;
  void *local_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_11001ae6;
  local_18 = ExceptionList;
  local_10 = &stack0xffffffc0;
  local_c = &DAT_11001a88;
  local_8 = 0;
  ExceptionList = &local_18;
  (**(code **)(*param_1 + 4))(param_1);
  *(undefined2 *)(param_1 + 0x10) = param_2;
  iVar1 = (**(code **)(*param_1 + 0x390))(param_1,8,local_24,L"blnZip",local_1c);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,param_1,&DAT_11005a04,0x390);
  }
  (**(code **)(*param_1 + 8))(param_1);
  ExceptionList = local_18;
  return local_8;
}


// ---- FUN_11037c10 @ 11037c10

undefined4 FUN_11037c10(int *param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  void *local_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_11001ae6;
  local_18 = ExceptionList;
  local_10 = &stack0xffffffd0;
  local_c = &DAT_11001a90;
  local_8 = 0;
  ExceptionList = &local_18;
  (**(code **)(*param_1 + 4))(param_1);
  uVar1 = *(undefined2 *)((int)param_1 + 0x42);
  (**(code **)(*param_1 + 8))(param_1);
  *param_2 = uVar1;
  ExceptionList = local_18;
  return local_8;
}


// ---- FUN_11037c80 @ 11037c80

undefined4 FUN_11037c80(int *param_1,undefined2 param_2)

{
  int iVar1;
  undefined4 local_24;
  undefined4 local_1c;
  void *local_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_11001ae6;
  local_18 = ExceptionList;
  local_10 = &stack0xffffffc0;
  local_c = &DAT_11001a98;
  local_8 = 0;
  ExceptionList = &local_18;
  (**(code **)(*param_1 + 4))(param_1);
  *(undefined2 *)((int)param_1 + 0x42) = param_2;
  iVar1 = (**(code **)(*param_1 + 0x390))(param_1,8,local_24,L"blnLocal",local_1c);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,param_1,&DAT_11005a04,0x390);
  }
  (**(code **)(*param_1 + 8))(param_1);
  ExceptionList = local_18;
  return local_8;
}


// ---- FUN_11037d30 @ 11037d30

undefined4 FUN_11037d30(int *param_1,undefined2 *param_2)

{
  int iVar1;
  void *local_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_11001ae6;
  local_18 = ExceptionList;
  local_10 = &stack0xffffffd0;
  local_c = &DAT_11001aa0;
  local_8 = 0;
  ExceptionList = &local_18;
  (**(code **)(*param_1 + 4))(param_1);
  iVar1 = param_1[0x11];
  (**(code **)(*param_1 + 8))(param_1);
  *param_2 = (short)iVar1;
  ExceptionList = local_18;
  return local_8;
}


// ---- FUN_11037da0 @ 11037da0

undefined4 FUN_11037da0(int *param_1,undefined2 param_2)

{
  int iVar1;
  undefined4 local_24;
  undefined4 local_1c;
  void *local_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_11001ae6;
  local_18 = ExceptionList;
  local_10 = &stack0xffffffc0;
  local_c = &DAT_11001aa8;
  local_8 = 0;
  ExceptionList = &local_18;
  (**(code **)(*param_1 + 4))(param_1);
  *(undefined2 *)(param_1 + 0x11) = param_2;
  iVar1 = (**(code **)(*param_1 + 0x390))(param_1,8,local_24,L"blnNetwork",local_1c);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,param_1,&DAT_11005a04,0x390);
  }
  (**(code **)(*param_1 + 8))(param_1);
  ExceptionList = local_18;
  return local_8;
}


// ---- FUN_11037e50 @ 11037e50

undefined4 FUN_11037e50(int *param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  void *local_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_11001ae6;
  local_18 = ExceptionList;
  local_10 = &stack0xffffffd0;
  local_c = &DAT_11001ab0;
  local_8 = 0;
  ExceptionList = &local_18;
  (**(code **)(*param_1 + 4))(param_1);
  uVar1 = *(undefined2 *)((int)param_1 + 0x46);
  (**(code **)(*param_1 + 8))(param_1);
  *param_2 = uVar1;
  ExceptionList = local_18;
  return local_8;
}


// ---- FUN_11037ec0 @ 11037ec0

undefined4 FUN_11037ec0(int *param_1,undefined2 param_2)

{
  int iVar1;
  undefined4 local_24;
  undefined4 local_1c;
  void *local_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_11001ae6;
  local_18 = ExceptionList;
  local_10 = &stack0xffffffc0;
  local_c = &DAT_11001ab8;
  local_8 = 0;
  ExceptionList = &local_18;
  (**(code **)(*param_1 + 4))(param_1);
  *(undefined2 *)((int)param_1 + 0x46) = param_2;
  iVar1 = (**(code **)(*param_1 + 0x390))(param_1,8,local_24,L"blnUser",local_1c);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,param_1,&DAT_11005a04,0x390);
  }
  (**(code **)(*param_1 + 8))(param_1);
  ExceptionList = local_18;
  return local_8;
}


// ---- FUN_11037f70 @ 11037f70

void __cdecl FUN_11037f70(int *param_1,undefined4 *param_2)

{
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_11001ae6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffd0;
  local_c = &DAT_11001ac0;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  *param_2 = 0;
  __vbaStrCopy(param_1);
  return;
}


// ---- FUN_11038000 @ 11038000

void __cdecl FUN_11038000(int *param_1)

{
  int iVar1;
  int *piVar2;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_11001ae6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffbc;
  local_c = &DAT_11001ad0;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  piVar2 = param_1;
  (**(code **)(*param_1 + 4))(param_1);
  __vbaStrCopy(piVar2);
  __vbaStrCopy();
  iVar1 = (**(code **)(*param_1 + 0x390))(param_1,8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,param_1,&DAT_11005a04,0x390);
  }
  __vbaFreeStr(&LAB_110380a0);
  return;
}


