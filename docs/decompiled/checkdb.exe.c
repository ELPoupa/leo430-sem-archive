// Decompiled with Ghidra from checkdb.exe
// Format: Portable Executable (PE), image base 00400000

// ---- __vbaFPException @ 0040173c

void __vbaFPException(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040173c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __vbaFPException();
  return;
}


// ---- adj_fdiv_m32 @ 00401748

void __cdecl adj_fdiv_m32(void)

{
                    /* WARNING: Could not recover jumptable at 0x00401748. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  adj_fdiv_m32();
  return;
}


// ---- DllFunctionCall @ 004017c0

void DllFunctionCall(void)

{
                    /* WARNING: Could not recover jumptable at 0x004017c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DllFunctionCall();
  return;
}


// ---- ThunRTMain @ 004018ec

void ThunRTMain(void)

{
                    /* WARNING: Could not recover jumptable at 0x004018ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ThunRTMain();
  return;
}


// ---- entry @ 004018f4

void entry(void)

{
  code *pcVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  char unaff_BL;
  int *unaff_EDI;
  byte in_AF;
  undefined4 *unaff_retaddr;
  undefined2 in_stack_00000010;
  char *in_stack_00000014;
  char in_stack_00000018;
  int *piVar5;
  
  pbVar3 = (byte *)ThunRTMain(&DAT_00401fd8);
  bVar2 = (byte)pbVar3;
  *pbVar3 = *pbVar3 + bVar2;
  *pbVar3 = *pbVar3 + bVar2;
  *pbVar3 = *pbVar3 + bVar2;
  *pbVar3 = *pbVar3 ^ bVar2;
  *pbVar3 = *pbVar3 + bVar2;
  pbVar3 = pbVar3 + 1;
  bVar2 = (byte)pbVar3;
  *pbVar3 = *pbVar3 + bVar2;
  *pbVar3 = *pbVar3 + bVar2;
  *pbVar3 = *pbVar3 + bVar2;
  *(char *)((int)unaff_EDI + -0x1fb464d7) = *(char *)((int)unaff_EDI + -0x1fb464d7) + unaff_BL;
  in_AF = 9 < (bVar2 & 0xf) | in_AF;
  uVar4 = CONCAT31((int3)((uint)pbVar3 >> 8),bVar2 + in_AF * '\x06') & 0xffffff0f;
  bVar2 = (char)uVar4 + ((char)((uint)pbVar3 >> 8) + in_AF) * '\x11';
  piVar5 = (int *)CONCAT22((short)(uVar4 >> 0x10),(ushort)bVar2);
  *unaff_EDI = *unaff_EDI + 0x443f9760 + (uint)in_AF;
  *piVar5 = *piVar5;
  *(byte *)piVar5 = (char)*piVar5 + bVar2;
  *(byte *)piVar5 = (char)*piVar5 + bVar2;
  *piVar5 = (int)(*piVar5 + (int)piVar5);
  *(byte *)piVar5 = (char)*piVar5 + bVar2;
  *(byte *)piVar5 = (char)*piVar5 + bVar2;
  *(byte *)piVar5 = (char)*piVar5 + bVar2;
  out(*unaff_retaddr,in_stack_00000010);
  *in_stack_00000014 = *in_stack_00000014 + in_stack_00000018;
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ---- FUN_00402bf4 @ 00402bf4

void FUN_00402bf4(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if (DAT_004333b0 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00402bfd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_004333b0)();
    return;
  }
  UNRECOVERED_JUMPTABLE = (code *)DllFunctionCall(&PTR_s_kernel32_00402bdc);
                    /* WARNING: Could not recover jumptable at 0x00402c0b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


// ---- FUN_00402c48 @ 00402c48

void FUN_00402c48(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if (DAT_004333bc != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00402c51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_004333bc)();
    return;
  }
  UNRECOVERED_JUMPTABLE = (code *)DllFunctionCall(&PTR_s_kernel32_00402c30);
                    /* WARNING: Could not recover jumptable at 0x00402c5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


// ---- FUN_00402c9c @ 00402c9c

void FUN_00402c9c(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if (DAT_004333c8 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00402ca5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_004333c8)();
    return;
  }
  UNRECOVERED_JUMPTABLE = (code *)DllFunctionCall(&PTR_s_kernel32_00402c84);
                    /* WARNING: Could not recover jumptable at 0x00402cb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


// ---- FUN_0040a140 @ 0040a140

void __cdecl FUN_0040a140(int *param_1,short *param_2)

{
  code *pcVar1;
  code *pcVar2;
  short sVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int **ppiVar7;
  uint uVar8;
  undefined4 uVar9;
  int extraout_ECX;
  int extraout_ECX_00;
  int **ppiVar10;
  ushort uVar11;
  float10 fVar12;
  code *pcStack_208;
  code *pcStack_204;
  int **ppiStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  int iStack_1e0;
  int **ppiStack_1dc;
  int **ppiStack_1d8;
  int *piVar13;
  int **ppiStack_1d0;
  int **ppiStack_1cc;
  int **ppiStack_1c8;
  int **ppiStack_1c4;
  int **ppiStack_1c0;
  int *piStack_138;
  int *piStack_134;
  code *pcStack_130;
  int *piStack_10c;
  int *apiStack_108 [5];
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  int **ppiStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  int **ppiStack_cc;
  undefined4 uStack_c8;
  undefined4 auStack_c4 [2];
  undefined4 uStack_bc;
  undefined4 auStack_b4 [2];
  undefined4 uStack_ac;
  int *apiStack_a4 [2];
  undefined4 uStack_9c;
  int *apiStack_94 [4];
  int *piStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  int *piStack_74;
  int *piStack_70;
  undefined *puStack_6c;
  undefined4 *puStack_68;
  int *piStack_64;
  undefined *puStack_60;
  int *piStack_5c;
  int *piStack_58;
  undefined *puStack_54;
  int *piStack_50;
  int *piStack_4c;
  undefined *puStack_48;
  int *piStack_44;
  int *piStack_40;
  int **ppiStack_3c;
  int local_1c;
  void *pvStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &DAT_00401736;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc8;
  local_c = &DAT_00401130;
  local_8 = 0;
  ppiStack_3c = (int **)param_1;
  piStack_40 = (int *)0x40a177;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))();
  piStack_40 = param_1;
  local_1c = 0;
  piStack_44 = (int *)0x40a183;
  iVar4 = (**(code **)(*param_1 + 0x2a0))();
  if (iVar4 < 0) {
    piStack_44 = (int *)0x2a0;
    puStack_48 = &DAT_004028a8;
    piStack_4c = param_1;
    puStack_54 = (undefined *)0x40a19b;
    piStack_50 = (int *)iVar4;
    __vbaHresultCheckObj();
  }
  piStack_44 = param_1;
  *(undefined2 *)(param_1 + 0xd) = 0xffff;
  puStack_48 = (undefined *)0x40a1aa;
  puStack_48 = (undefined *)(**(code **)(*param_1 + 0x2fc))();
  pcVar1 = __vbaObjSet_exref;
  piStack_4c = &local_1c;
  piStack_50 = (int *)0x40a1b7;
  piVar5 = (int *)__vbaObjSet();
  sVar3 = (short)(*param_2 * 1000);
  if ((int)sVar3 == *param_2 * 1000) {
    puStack_48 = (undefined *)(int)sVar3;
    piStack_50 = (int *)0x40a1d4;
    piStack_4c = piVar5;
    piVar6 = (int *)(**(code **)(*piVar5 + 100))();
    if ((int)piVar6 < 0) {
      piStack_50 = (int *)0x64;
      puStack_54 = &DAT_00402a2c;
      puStack_60 = (undefined *)0x40a1e9;
      piStack_5c = piVar6;
      piStack_58 = piVar5;
      __vbaHresultCheckObj();
    }
    piStack_50 = (int *)0x40a1f2;
    __vbaFreeObj();
    piStack_50 = param_1;
    puStack_54 = (undefined *)0x40a1fb;
    puStack_54 = (undefined *)(**(code **)(*param_1 + 0x2fc))();
    piStack_58 = &local_1c;
    piStack_5c = (int *)0x40a202;
    piVar5 = (int *)__vbaObjSet();
    puStack_54 = (undefined *)0xffffffff;
    piStack_5c = (int *)0x40a20c;
    piStack_58 = piVar5;
    iVar4 = (**(code **)(*piVar5 + 0x5c))();
    if (iVar4 < 0) {
      piStack_5c = (int *)0x5c;
      puStack_60 = &DAT_00402a2c;
      puStack_6c = (undefined *)0x40a221;
      puStack_68 = (undefined4 *)iVar4;
      piStack_64 = piVar5;
      __vbaHresultCheckObj();
    }
    piStack_5c = (int *)0x40a22a;
    __vbaFreeObj();
    while ((short)param_1[0xd] != 0) {
      piStack_5c = (int *)0x40a239;
      rtcDoEvents();
    }
    piStack_5c = param_1;
    puStack_60 = (undefined *)0x40a244;
    puStack_60 = (undefined *)(**(code **)(*param_1 + 0x2fc))();
    piStack_64 = &local_1c;
    puStack_68 = (undefined4 *)0x40a24b;
    piVar5 = (int *)__vbaObjSet();
    puStack_60 = (undefined *)0x0;
    puStack_68 = (undefined4 *)0x40a255;
    piStack_64 = piVar5;
    piVar6 = (int *)(**(code **)(*piVar5 + 0x5c))();
    if ((int)piVar6 < 0) {
      puStack_68 = (undefined4 *)0x5c;
      puStack_6c = &DAT_00402a2c;
      uStack_78 = 0x40a26a;
      piStack_74 = piVar6;
      piStack_70 = piVar5;
      __vbaHresultCheckObj();
    }
    puStack_68 = (undefined4 *)0x40a273;
    __vbaFreeObj();
    *(undefined2 *)(param_1 + 0xd) = 0;
    return;
  }
  puStack_48 = (undefined *)0x40a2b0;
  __vbaErrorOverflow();
  puStack_54 = &DAT_00401736;
  piStack_58 = ExceptionList;
  pcStack_130 = pcVar1;
  piStack_134 = param_1;
  piStack_50 = (int *)&piStack_138;
  piStack_4c = (int *)&DAT_00401140;
  puStack_48 = (undefined *)((uint)ppiStack_3c & 1);
  ppiVar10 = (int **)((uint)ppiStack_3c & 0xfffffffe);
  ExceptionList = &piStack_58;
  piStack_138 = piVar5;
  piStack_44 = (int *)&stack0xfffffffc;
  ppiStack_3c = ppiVar10;
  (*(code *)(*ppiVar10)[1])();
  piStack_5c = (int *)0x0;
  puStack_60 = (undefined *)0x0;
  piStack_64 = (int *)0x0;
  puStack_68 = (undefined4 *)0x0;
  puStack_6c = (undefined *)0x0;
  piStack_70 = (int *)0x0;
  piStack_74 = (int *)0x0;
  uStack_78 = 0;
  uStack_7c = 0;
  uStack_80 = 0;
  piStack_84 = (int *)0x0;
  apiStack_94[0] = (int *)0x0;
  apiStack_a4[0] = (int *)0x0;
  auStack_b4[0] = 0;
  auStack_c4[0] = 0;
  uStack_d4 = 0;
  uStack_e4 = 0;
  uStack_f4 = 0;
  apiStack_108[0] = (int *)0x0;
  if (*(short *)((int)ppiVar10 + 0x36) == 0) {
    *(undefined2 *)((int)ppiVar10 + 0x36) = 0xffff;
    (*(code *)(*ppiVar10)[0xc0])();
    piVar5 = (int *)__vbaObjSet();
    iVar4 = (**(code **)(*piVar5 + 0x54))();
    if (iVar4 < 0) {
      __vbaHresultCheckObj();
    }
    __vbaFreeObj();
    apiStack_108[0] = (int *)0x1;
    iVar4 = (*(code *)(*ppiVar10)[0x1be])();
    if (iVar4 < 0) {
      __vbaHresultCheckObj();
    }
    (*(code *)(*ppiVar10)[0xc1])();
    __vbaObjSet();
    __vbaLateIdCallLd();
    __vbaStrVarMove();
    pcVar1 = __vbaStrMove_exref;
    __vbaStrMove();
    __vbaFreeObj();
    __vbaFreeVar();
    if (DAT_004333d0 == (int *)0x0) {
      __vbaNew2();
    }
    iVar4 = *DAT_004333d0;
    piStack_10c = DAT_004333d0;
    __vbaStrCat();
    __vbaStrMove();
    iVar4 = (**(code **)(iVar4 + 0x28))();
    if (iVar4 < 0) {
      __vbaHresultCheckObj();
    }
    __vbaFreeStr();
    if (DAT_004333d0 == (int *)0x0) {
      __vbaNew2();
    }
    piStack_10c = DAT_004333d0;
    iVar4 = *DAT_004333d0;
    __vbaStrCat();
    __vbaStrMove();
    iVar4 = (**(code **)(iVar4 + 0x80))();
    if (iVar4 < 0) {
      __vbaHresultCheckObj();
    }
    __vbaFreeStr();
    if (DAT_004333d0 == (int *)0x0) {
      __vbaNew2();
    }
    uStack_d4 = 10;
    ppiStack_cc = (int **)0x80020004;
    iVar4 = (**(code **)(*DAT_004333d0 + 0x84))();
    if (iVar4 < 0) {
      __vbaHresultCheckObj();
    }
    piStack_84 = (int *)0x0;
    __vbaObjSet();
    ppiStack_cc = (int **)0x80020004;
    uStack_d4 = 10;
    iVar4 = *DAT_00433028;
    ppiStack_1c0 = (int **)0x402cd4;
    ppiStack_1c4 = (int **)0x40a612;
    __vbaStrCat();
    __vbaStrMove();
    ppiStack_1c0 = (int **)DAT_00433028;
    ppiStack_1c4 = (int **)0x40a624;
    ppiVar7 = (int **)(**(code **)(iVar4 + 0x58))();
    if ((int)ppiVar7 < 0) {
      ppiStack_1c4 = (int **)0x58;
      ppiStack_1c8 = (int **)&DAT_00402ce8;
      ppiStack_1cc = (int **)DAT_00433028;
      ppiStack_1d0 = ppiVar7;
      __vbaHresultCheckObj();
    }
    ppiStack_1c4 = (int **)piStack_84;
    piStack_84 = (int *)0x0;
    ppiStack_1c8 = (int **)&DAT_0043302c;
    ppiStack_1cc = (int **)0x40a655;
    __vbaObjSet();
    ppiStack_1c4 = (int **)0x40a660;
    __vbaFreeStr();
    ppiStack_1c4 = (int **)0x40a66e;
    __vbaStrCopy();
    ppiStack_1c0 = (int **)0x40a677;
    FUN_00417030(&piStack_70);
    ppiStack_1c0 = (int **)0x40a680;
    __vbaStrMove();
    ppiStack_1c0 = (int **)0x40a685;
    __vbaFreeStr();
    ppiStack_1c0 = (int **)0x0;
    ppiStack_1c4 = (int **)0x4f;
    ppiStack_1cc = (int **)0x40a692;
    ppiStack_1c8 = ppiVar10;
    ppiStack_1cc = (int **)(*(code *)(*ppiVar10)[0xc1])();
    ppiStack_1d0 = &piStack_84;
    ppiStack_1cc = (int **)__vbaObjSet();
    ppiStack_1d0 = apiStack_94;
    ppiStack_1c4 = (int **)__vbaLateIdCallLd();
    ppiStack_1c8 = (int **)0x40a6b2;
    __vbaStrVarMove();
    ppiStack_1c4 = (int **)0x40a6b9;
    __vbaStrMove();
    ppiStack_1c4 = (int **)0x40a6c2;
    __vbaFreeObj();
    ppiStack_1c4 = (int **)0x40a6cb;
    __vbaFreeVar();
    ppiStack_1c0 = (int **)0x402a40;
    ppiStack_1c4 = (int **)puStack_68;
    ppiStack_1c8 = (int **)0x40a6da;
    iVar4 = __vbaStrCmp();
    if (iVar4 != 0) {
      auStack_c4[0] = 10;
      auStack_b4[0] = 10;
      apiStack_a4[0] = (int *)0xa;
      uStack_bc = 0x80020004;
      uStack_ac = 0x80020004;
      uStack_9c = 0x80020004;
      ppiStack_cc = (int **)0x402d24;
      uStack_d4 = 8;
      ppiStack_1c0 = (int **)0x40a71d;
      __vbaVarDup();
      ppiStack_1c0 = (int **)auStack_c4;
      ppiStack_1c4 = (int **)auStack_b4;
      ppiStack_1c8 = apiStack_a4;
      ppiStack_1d0 = apiStack_94;
      ppiStack_1cc = (int **)0x0;
      rtcMsgBox();
      ppiStack_1c0 = (int **)auStack_c4;
      ppiStack_1c4 = (int **)auStack_b4;
      ppiStack_1c8 = apiStack_a4;
      ppiStack_1cc = apiStack_94;
      ppiStack_1d0 = (int **)0x4;
      __vbaFreeVarList();
    }
    ppiStack_1c0 = (int **)0x40a75e;
    __vbaStrCopy();
    FUN_00417030(&piStack_70);
    __vbaStrMove();
    __vbaFreeStr();
    ppiStack_1c0 = (int **)&DAT_00402df8;
    ppiStack_1c4 = (int **)0x40a782;
    iVar4 = __vbaStrCmp();
    if (iVar4 != 0) {
      ppiStack_cc = (int **)&DAT_00402e00;
      uStack_d4 = 8;
      __vbaVarDup();
      rtcStringVar();
      __vbaStrVarMove();
      __vbaStrMove();
      __vbaFreeVarList();
      FUN_0040b410();
      __vbaStrMove();
      __vbaStrCat();
      __vbaStrMove();
      __vbaFreeStr();
      pcVar2 = __vbaStrToAnsi_exref;
      __vbaStrToAnsi();
      uVar8 = __vbaStrToAnsi();
      ppiStack_1c0 = (int **)0x40a838;
      __vbaStrToAnsi();
      ppiStack_1c0 = &piStack_74;
      ppiStack_1c4 = (int **)0x40a844;
      __vbaStrToAnsi();
      ppiStack_1c4 = &piStack_70;
      ppiStack_1c0 = (int **)0x402e28;
      ppiStack_1c8 = (int **)0x40a850;
      ppiStack_1c0 = (int **)__vbaStrToAnsi();
      ppiStack_1c4 = (int **)0x40a856;
      FUN_00402c9c();
      ppiStack_1c4 = (int **)0x40a85c;
      __vbaSetSystemError();
      ppiStack_1c8 = &piStack_5c;
      ppiStack_1c4 = (int **)uStack_7c;
      ppiStack_1cc = (int **)0x40a86a;
      __vbaStrToUnicode();
      ppiStack_1c8 = (int **)&puStack_6c;
      ppiStack_1c4 = (int **)uStack_80;
      ppiStack_1cc = (int **)0x40a878;
      __vbaStrToUnicode();
      ppiStack_1c4 = (int **)&uStack_80;
      ppiStack_1c8 = (int **)&uStack_7c;
      ppiStack_1cc = (int **)&uStack_78;
      ppiStack_1d0 = &piStack_74;
      ppiStack_1d8 = (int **)0x5;
      ppiStack_1dc = (int **)0x40a894;
      __vbaFreeStrList();
      ppiStack_1c4 = (int **)&uStack_d4;
      ppiStack_1c8 = apiStack_94;
      ppiStack_cc = &piStack_5c;
      uStack_d4 = 0x4008;
      ppiStack_1cc = (int **)0x40a8bb;
      rtcTrimVar();
      ppiStack_1c4 = apiStack_94;
      ppiStack_1c8 = (int **)0x40a8c5;
      __vbaStrVarMove();
      ppiStack_1c4 = (int **)0x40a8cc;
      __vbaStrMove();
      ppiStack_1c4 = (int **)0x40a8d5;
      __vbaFreeVar();
      ppiStack_cc = &piStack_5c;
      ppiStack_1c0 = (int **)piStack_5c;
      uStack_d4 = 0x4008;
      ppiStack_1c4 = (int **)0x40a8f2;
      iVar4 = __vbaLenBstr();
      ppiStack_1c0 = (int **)(iVar4 + -1);
      if (SBORROW4(iVar4,1)) {
        ppiStack_1c0 = (int **)0x40b0a4;
        __vbaErrorOverflow();
        ppiStack_1cc = (int **)&DAT_00401736;
        ppiStack_1d0 = ExceptionList;
        pcStack_204 = pcVar1;
        ppiStack_1c8 = (int **)&pcStack_208;
        pcStack_208 = pcVar2;
        ppiStack_1c4 = (int **)&DAT_00401158;
        ppiStack_1c0 = (int **)(uVar8 & 1);
        piVar5 = (int *)(uVar8 & 0xfffffffe);
        ExceptionList = &ppiStack_1d0;
        ppiStack_200 = ppiVar10;
        (**(code **)(*piVar5 + 4))(piVar5);
        piVar6 = (int *)0x0;
        ppiStack_1d8 = (int **)0x0;
        ppiStack_1dc = (int **)0x0;
        iVar4 = (**(code **)(*piVar5 + 0x80))(piVar5,&ppiStack_1dc);
        if (iVar4 < 0) {
          __vbaHresultCheckObj(iVar4,piVar5,&DAT_004028a8,0x80);
        }
        if (DAT_004333cc == (int *)0x0) {
          __vbaNew2(&DAT_004032c8,&DAT_004333cc);
        }
        piVar13 = DAT_004333cc;
        iVar4 = (**(code **)(*DAT_004333cc + 0x18))(DAT_004333cc,&stack0xfffffe2c);
        if (iVar4 < 0) {
          __vbaHresultCheckObj(iVar4,piVar13,&DAT_004032b8,0x18);
        }
        piVar13 = piVar6;
        iVar4 = (**(code **)(*piVar6 + 0x98))(piVar6,&ppiStack_1d8);
        uVar11 = 0;
        if (iVar4 < 0) {
          __vbaHresultCheckObj(iVar4,piVar6,&DAT_004032d8,0x98);
        }
        iVar4 = *piVar5;
        if (DAT_00433000 == 0) {
          fVar12 = ((float10)(float)ppiStack_1d8 - (float10)(float)ppiStack_1dc) /
                   (float10)DAT_00401154;
        }
        else {
          fVar12 = (float10)adj_fdiv_m32(DAT_00401154,iVar4);
          iVar4 = extraout_ECX;
        }
        if ((uVar11 & 0xd) == 0) {
          iVar4 = (**(code **)(iVar4 + 0x74))(piVar5,(float)fVar12);
          if (iVar4 < 0) {
            __vbaHresultCheckObj(iVar4,piVar5,&DAT_004028a8,0x74);
          }
          __vbaFreeObj();
          iVar4 = (**(code **)(*piVar5 + 0x88))(piVar5,&ppiStack_1dc);
          if (iVar4 < 0) {
            __vbaHresultCheckObj(iVar4,piVar5,&DAT_004028a8,0x88);
          }
          if (DAT_004333cc == (int *)0x0) {
            __vbaNew2(&DAT_004032c8,&DAT_004333cc);
          }
          piVar6 = DAT_004333cc;
          iVar4 = (**(code **)(*DAT_004333cc + 0x18))(DAT_004333cc,&stack0xfffffe2c);
          if (iVar4 < 0) {
            __vbaHresultCheckObj(iVar4,piVar6,&DAT_004032b8,0x18);
          }
          iVar4 = (**(code **)(*piVar13 + 0x50))(piVar13,&ppiStack_1d8);
          uVar11 = 0;
          if (iVar4 < 0) {
            __vbaHresultCheckObj(iVar4,piVar13,&DAT_004032d8,0x50);
          }
          iVar4 = *piVar5;
          if (DAT_00433000 == 0) {
            fVar12 = ((float10)(float)ppiStack_1d8 - (float10)(float)ppiStack_1dc) /
                     (float10)DAT_00401150;
          }
          else {
            fVar12 = (float10)adj_fdiv_m32(DAT_00401150,iVar4);
            iVar4 = extraout_ECX_00;
          }
          if ((uVar11 & 0xd) == 0) {
            iVar4 = (**(code **)(iVar4 + 0x7c))(piVar5,(float)fVar12);
            if (iVar4 < 0) {
              __vbaHresultCheckObj(iVar4,piVar5,&DAT_004028a8,0x7c);
            }
            __vbaFreeObj();
            *(undefined2 *)((int)piVar5 + 0x36) = 0;
            return;
          }
        }
        __vbaFPException();
        return;
      }
      ppiStack_1c8 = apiStack_94;
      ppiStack_1cc = (int **)0x40a90d;
      ppiStack_1c4 = (int **)&uStack_d4;
      rtcLeftCharVar();
      ppiStack_1c0 = apiStack_94;
      ppiStack_1c4 = (int **)0x40a917;
      __vbaStrVarMove();
      ppiStack_1c0 = (int **)0x40a91e;
      __vbaStrMove();
      ppiStack_1c0 = (int **)0x40a927;
      __vbaFreeVar();
      ppiStack_1c0 = (int **)0x402e5c;
      ppiStack_1c4 = (int **)0x40a936;
      iVar4 = __vbaStrCmp();
      if (iVar4 == 0) {
        ppiStack_1c0 = (int **)&uStack_7c;
        __vbaStrToAnsi();
        __vbaStrToAnsi();
        __vbaStrToAnsi();
        ppiStack_1c0 = (int **)0x40a967;
        __vbaStrToAnsi();
        FUN_00402c48();
        __vbaSetSystemError();
        ppiStack_1c0 = (int **)&puStack_60;
        ppiStack_1c4 = (int **)0x40a983;
        __vbaStrToUnicode();
        ppiStack_1c0 = (int **)&puStack_6c;
        ppiStack_1c4 = (int **)0x40a98d;
        __vbaStrToUnicode();
        ppiStack_1c0 = (int **)&uStack_78;
        ppiStack_1c4 = &piStack_74;
        ppiStack_1c8 = &piStack_70;
        ppiStack_1cc = (int **)0x4;
        ppiStack_1d0 = (int **)0x40a9a5;
        __vbaFreeStrList();
      }
    }
    ppiStack_1c0 = (int **)0x402a40;
    ppiStack_1c4 = (int **)0x40a9ba;
    iVar4 = __vbaStrCmp();
    if (iVar4 == 0) {
      ppiStack_1c0 = (int **)0x40a9c7;
      ppiStack_1c0 = (int **)(*(code *)(*ppiVar10)[0xc0])();
      ppiStack_1c4 = &piStack_84;
      ppiStack_1c8 = (int **)0x40a9d2;
      ppiVar7 = (int **)__vbaObjSet();
      ppiStack_1c0 = (int **)0x402eac;
      ppiStack_1c8 = (int **)0x40a9df;
      ppiStack_1c4 = ppiVar7;
      iVar4 = (*(code *)(*ppiVar7)[0x15])();
      if (iVar4 < 0) {
        ppiStack_1c8 = (int **)0x54;
        ppiStack_1cc = (int **)&DAT_00402a84;
        ppiStack_1d8 = (int **)0x40a9f4;
        ppiStack_1d0 = ppiVar7;
        __vbaHresultCheckObj();
      }
      ppiStack_1c8 = (int **)0x40a9fd;
      __vbaFreeObj();
      ppiStack_1c8 = apiStack_108;
      apiStack_108[0] = (int *)0x2;
      ppiStack_1d0 = (int **)0x40aa17;
      ppiStack_1cc = ppiVar10;
      ppiVar7 = (int **)(*(code *)(*ppiVar10)[0x1be])();
      if ((int)ppiVar7 < 0) {
        ppiStack_1cc = (int **)0x6f8;
        ppiStack_1d0 = (int **)&DAT_004028d8;
        ppiStack_1dc = (int **)0x40aa2d;
        ppiStack_1d8 = ppiVar7;
        __vbaHresultCheckObj();
      }
      ppiStack_1cc = (int **)0x40aa33;
      __vbaEnd();
    }
    ppiStack_1c0 = (int **)0x40aa3e;
    ppiVar7 = (int **)(*(code *)(*DAT_0043302c)[0x16])();
    if ((int)ppiVar7 < 0) {
      ppiStack_1c0 = (int **)0x58;
      ppiStack_1c4 = (int **)&DAT_00402ed0;
      ppiStack_1c8 = DAT_0043302c;
      ppiStack_1d0 = (int **)0x40aa59;
      ppiStack_1cc = ppiVar7;
      __vbaHresultCheckObj();
    }
    ppiStack_1c4 = (int **)0x40aa62;
    ppiStack_1c0 = ppiVar10;
    ppiStack_1c4 = (int **)(*(code *)(*ppiVar10)[0xc0])();
    ppiStack_1c8 = &piStack_84;
    ppiStack_1cc = (int **)0x40aa6d;
    ppiStack_1c8 = (int **)__vbaObjSet();
    ppiStack_1c4 = (int **)0x402ef4;
    ppiStack_1cc = (int **)0x40aa7a;
    ppiVar7 = (int **)(**(code **)((int)*ppiStack_1c8 + 0x54))();
    if ((int)ppiVar7 < 0) {
      ppiStack_1cc = (int **)0x54;
      ppiStack_1d0 = (int **)&DAT_00402a84;
      ppiStack_1dc = (int **)0x40aa8f;
      ppiStack_1d8 = ppiVar7;
      __vbaHresultCheckObj();
    }
    ppiStack_1cc = (int **)0x40aa98;
    __vbaFreeObj();
    ppiStack_1cc = apiStack_108;
    apiStack_108[0] = (int *)0x1;
    ppiStack_1d0 = ppiVar10;
    iVar4 = (*(code *)(*ppiVar10)[0x1be])();
    if (iVar4 < 0) {
      ppiStack_1d8 = (int **)&DAT_004028d8;
      uStack_1e4 = 0x40aac8;
      iStack_1e0 = iVar4;
      ppiStack_1dc = ppiVar10;
      __vbaHresultCheckObj();
    }
    ppiStack_1d8 = (int **)0x402f20;
    ppiStack_1dc = (int **)0x40aad7;
    __vbaStrCat();
    __vbaStrMove();
    ppiStack_1d8 = (int **)0x40aae7;
    FUN_0041ec10(&piStack_70);
    ppiStack_1d8 = (int **)0x40aaf0;
    __vbaFreeStr();
    ppiStack_cc = (int **)0x80020004;
    uStack_d4 = 10;
    iVar4 = *DAT_00433028;
    ppiStack_1d8 = &piStack_84;
    uStack_1e8 = 10;
    uStack_1e4 = uStack_f0;
    iStack_1e0 = -0x7ffdfffc;
    ppiStack_1dc = ppiStack_e8;
    uStack_1f8 = 10;
    uStack_1f4 = uStack_e0;
    uStack_1f0 = 0x80020004;
    uStack_1ec = uStack_d8;
    pcStack_208 = (code *)0xa;
    pcStack_204 = (code *)uStack_d0;
    ppiStack_200 = (int **)0x80020004;
    uStack_1fc = uStack_c8;
    __vbaStrCat(L"\\LEO_USER",piStack_64);
    uVar9 = __vbaStrMove();
    iVar4 = (**(code **)(iVar4 + 0x58))(DAT_00433028,uVar9);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,DAT_00433028,&DAT_00402ce8,0x58);
    }
    piVar5 = piStack_84;
    piStack_84 = (int *)0x0;
    __vbaObjSet(&DAT_0043302c,piVar5);
    __vbaFreeStr();
    uVar9 = (*(code *)(*ppiVar10)[0xc0])(ppiVar10);
    piVar5 = (int *)__vbaObjSet(&piStack_84,uVar9);
    iVar4 = (**(code **)(*piVar5 + 0x54))(piVar5,L"Converting database");
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar5,&DAT_00402a84,0x54);
    }
    __vbaFreeObj();
    apiStack_108[0] = (int *)0x1;
    iVar4 = (*(code *)(*ppiVar10)[0x1be])(ppiVar10,apiStack_108);
    if (iVar4 < 0) {
      __vbaHresultCheckObj();
    }
    iVar4 = __vbaStrCmp();
    if (iVar4 == 0) {
      FUN_00417730();
    }
    iVar4 = __vbaStrCmp();
    if (iVar4 == 0) {
      FUN_00417f30();
    }
    iVar4 = __vbaStrCmp();
    if (iVar4 == 0) {
      FUN_0041d2f0();
    }
    iVar4 = __vbaStrCmp();
    if (iVar4 == 0) {
      FUN_00418060();
    }
    iVar4 = __vbaStrCmp();
    if (iVar4 == 0) {
      FUN_00418170();
    }
    iVar4 = __vbaStrCmp();
    if (iVar4 == 0) {
      FUN_00418220();
    }
    iVar4 = __vbaStrCmp();
    if (iVar4 == 0) {
      FUN_004182d0();
    }
    iVar4 = __vbaStrCmp();
    if (iVar4 == 0) {
      FUN_00418380();
    }
    iVar4 = __vbaStrCmp();
    if (iVar4 == 0) {
      FUN_00418440();
    }
    iVar4 = __vbaStrCmp();
    if (iVar4 == 0) {
      FUN_004184f0();
    }
    iVar4 = __vbaStrCmp();
    if (iVar4 == 0) {
      FUN_004185a0();
    }
    iVar4 = __vbaStrCmp();
    if (iVar4 == 0) {
      FUN_0041a440();
    }
    iVar4 = __vbaStrCmp();
    if (iVar4 == 0) {
      FUN_0041a230();
    }
    iVar4 = __vbaStrCmp();
    if (iVar4 == 0) {
      FUN_0041a180();
    }
    iVar4 = __vbaStrCmp();
    if (iVar4 == 0) {
      FUN_0041a0d0();
    }
    iVar4 = __vbaStrCmp();
    if (iVar4 == 0) {
      FUN_0041a020();
    }
    iVar4 = __vbaStrCmp();
    if (iVar4 == 0) {
      FUN_00419f70();
    }
    iVar4 = __vbaStrCmp();
    if (iVar4 == 0) {
      FUN_00419ec0();
    }
    iVar4 = __vbaStrCmp();
    if (iVar4 == 0) {
      FUN_00419e10();
    }
    iVar4 = __vbaStrCmp();
    if (iVar4 == 0) {
      FUN_00419d60();
    }
    iVar4 = __vbaStrCmp();
    if (iVar4 == 0) {
      FUN_00419ca0();
    }
    iVar4 = __vbaStrCmp();
    if (iVar4 == 0) {
      FUN_00419bf0();
    }
    iVar4 = __vbaStrCmp();
    if (iVar4 == 0) {
      FUN_00418b80();
    }
    iVar4 = __vbaStrCmp();
    if (iVar4 == 0) {
      FUN_00418c30();
    }
    iVar4 = __vbaStrCmp();
    if (iVar4 == 0) {
      FUN_00418ce0();
    }
    iVar4 = __vbaStrCmp();
    if (iVar4 == 0) {
      FUN_00418d90();
    }
    iVar4 = __vbaStrCmp();
    if (iVar4 == 0) {
      FUN_00418e40();
    }
    iVar4 = __vbaStrCmp();
    if (iVar4 == 0) {
      FUN_00418ef0();
    }
    iVar4 = __vbaStrCmp();
    if (iVar4 == 0) {
      FUN_00418fa0();
    }
    iVar4 = __vbaStrCmp();
    if (iVar4 == 0) {
      FUN_00419310();
    }
    iVar4 = __vbaStrCmp();
    if (iVar4 == 0) {
      FUN_00419260();
    }
    iVar4 = __vbaStrCmp();
    if (iVar4 == 0) {
      FUN_00419260();
    }
    iVar4 = __vbaStrCmp();
    if (iVar4 == 0) {
      FUN_004191b0();
    }
    iVar4 = __vbaStrCmp();
    if (iVar4 == 0) {
      FUN_00419100();
    }
    iVar4 = __vbaStrCmp();
    if (iVar4 == 0) {
      FUN_00419050();
    }
    iVar4 = __vbaStrCmp();
    if (iVar4 != 0) {
      iVar4 = (*(code *)(*ppiVar10)[0x15])();
      if (iVar4 < 0) {
        __vbaHresultCheckObj();
      }
      uStack_bc = 0x80020004;
      uStack_ac = 0x80020004;
      uStack_9c = 0x80020004;
      auStack_c4[0] = 10;
      auStack_b4[0] = 10;
      apiStack_a4[0] = (int *)0xa;
      ppiStack_cc = (int **)0x4031b0;
      uStack_d4 = 8;
      __vbaVarDup();
      rtcMsgBox();
      __vbaFreeVarList();
    }
    __vbaEnd();
  }
  puStack_48 = (undefined *)0x0;
  __vbaFreeStr();
  __vbaFreeStr();
  __vbaFreeStr();
  __vbaFreeStr();
  __vbaFreeStr();
  return;
}


// ---- FUN_0040b0b0 @ 0040b0b0

void __cdecl FUN_0040b0b0(uint param_1)

{
  int *piVar1;
  int iVar2;
  int extraout_ECX;
  int extraout_ECX_00;
  int *piVar3;
  ushort uVar4;
  float10 fVar5;
  float local_24;
  float local_20;
  int *local_1c;
  void *pvStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_00401736;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffb0;
  local_c = &DAT_00401158;
  local_8 = param_1 & 1;
  piVar3 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar3 + 4))(piVar3);
  local_1c = (int *)0x0;
  local_20 = 0.0;
  local_24 = 0.0;
  iVar2 = (**(code **)(*piVar3 + 0x80))(piVar3,&local_24);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar3,&DAT_004028a8,0x80);
  }
  if (DAT_004333cc == (int *)0x0) {
    __vbaNew2(&DAT_004032c8,&DAT_004333cc);
  }
  piVar1 = DAT_004333cc;
  iVar2 = (**(code **)(*DAT_004333cc + 0x18))(DAT_004333cc,&local_1c);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_004032b8,0x18);
  }
  piVar1 = local_1c;
  iVar2 = (**(code **)(*local_1c + 0x98))(local_1c,&local_20);
  uVar4 = 0;
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_004032d8,0x98);
  }
  iVar2 = *piVar3;
  if (DAT_00433000 == 0) {
    fVar5 = ((float10)local_20 - (float10)local_24) / (float10)DAT_00401154;
  }
  else {
    fVar5 = (float10)adj_fdiv_m32(DAT_00401154,iVar2);
    iVar2 = extraout_ECX;
  }
  if ((uVar4 & 0xd) == 0) {
    iVar2 = (**(code **)(iVar2 + 0x74))(piVar3,(float)fVar5);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar3,&DAT_004028a8,0x74);
    }
    __vbaFreeObj();
    iVar2 = (**(code **)(*piVar3 + 0x88))(piVar3,&local_24);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar3,&DAT_004028a8,0x88);
    }
    if (DAT_004333cc == (int *)0x0) {
      __vbaNew2(&DAT_004032c8,&DAT_004333cc);
    }
    piVar1 = DAT_004333cc;
    iVar2 = (**(code **)(*DAT_004333cc + 0x18))(DAT_004333cc,&local_1c);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar1,&DAT_004032b8,0x18);
    }
    piVar1 = local_1c;
    iVar2 = (**(code **)(*local_1c + 0x50))(local_1c,&local_20);
    uVar4 = 0;
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar1,&DAT_004032d8,0x50);
    }
    iVar2 = *piVar3;
    if (DAT_00433000 == 0) {
      fVar5 = ((float10)local_20 - (float10)local_24) / (float10)DAT_00401150;
    }
    else {
      fVar5 = (float10)adj_fdiv_m32(DAT_00401150,iVar2);
      iVar2 = extraout_ECX_00;
    }
    if ((uVar4 & 0xd) == 0) {
      iVar2 = (**(code **)(iVar2 + 0x7c))(piVar3,(float)fVar5);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,piVar3,&DAT_004028a8,0x7c);
      }
      __vbaFreeObj();
      *(undefined2 *)((int)piVar3 + 0x36) = 0;
      return;
    }
  }
  __vbaFPException();
  return;
}


// ---- FUN_0040b2e0 @ 0040b2e0

undefined4 FUN_0040b2e0(uint param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  void *local_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_00401736;
  local_18 = ExceptionList;
  local_10 = &stack0xffffffd0;
  local_c = &DAT_00401168;
  local_8 = param_1 & 1;
  piVar1 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &local_18;
  piVar5 = piVar1;
  (**(code **)(*piVar1 + 4))(piVar1);
  piVar4 = DAT_0043302c;
  iVar2 = (**(code **)(*DAT_0043302c + 0x58))(DAT_0043302c);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,DAT_0043302c,&DAT_00402ed0,0x58);
  }
  piVar3 = DAT_00433028;
  iVar2 = (**(code **)(*DAT_00433028 + 0x50))(DAT_00433028);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,DAT_00433028,&DAT_00402ce8,0x50);
  }
  __vbaEnd(piVar3,piVar4,piVar5);
  local_8 = 0;
  (**(code **)(*piVar1 + 8))();
  ExceptionList = local_18;
  return local_8;
}


// ---- FUN_0040b3a0 @ 0040b3a0

undefined4 FUN_0040b3a0(uint param_1)

{
  int *piVar1;
  void *local_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_00401736;
  local_18 = ExceptionList;
  local_10 = &stack0xffffffd4;
  local_c = &DAT_00401170;
  local_8 = param_1 & 1;
  piVar1 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &local_18;
  (**(code **)(*piVar1 + 4))(piVar1);
  *(undefined2 *)(piVar1 + 0xd) = 0;
  local_8 = 0;
  (**(code **)(*piVar1 + 8))(piVar1);
  ExceptionList = local_18;
  return local_8;
}


// ---- FUN_0040b410 @ 0040b410

void FUN_0040b410(void)

{
  int *piVar1;
  code *pcVar2;
  code *pcVar3;
  code *pcVar4;
  int iVar5;
  undefined2 *unaff_EBX;
  undefined4 *unaff_ESI;
  code *pcStack_e4;
  code *pcStack_e0;
  code *pcStack_dc;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  wchar_t *pwStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 auStack_8c [2];
  undefined4 uStack_84;
  void *pvStack_7c;
  undefined4 *puStack_78;
  undefined4 **ppuStack_74;
  code *pcStack_70;
  undefined4 *puStack_6c;
  undefined2 *puStack_5c;
  undefined4 *puStack_58;
  undefined4 *local_54;
  undefined2 *puStack_50;
  undefined4 *local_4c;
  undefined4 local_44 [4];
  undefined4 local_34 [4];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  void *pvStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  
  puStack_14 = &DAT_00401736;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff98;
  local_c = &DAT_00401178;
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_34[0] = 0;
  local_44[0] = 0;
  local_4c = (undefined4 *)&DAT_00402e00;
  local_54 = (undefined4 *)0x8;
  puStack_6c = (undefined4 *)0x40b464;
  ExceptionList = &pvStack_18;
  __vbaVarDup();
  puStack_6c = local_34;
  ppuStack_74 = (undefined4 **)local_44;
  pcStack_70 = (code *)0xff;
  puStack_78 = (undefined4 *)0x40b477;
  rtcStringVar();
  pcVar3 = __vbaStrVarMove_exref;
  puStack_6c = local_44;
  pcStack_70 = (code *)0x40b483;
  __vbaStrVarMove();
  pcVar4 = __vbaStrMove_exref;
  puStack_6c = (undefined4 *)0x40b490;
  __vbaStrMove();
  puStack_6c = local_44;
  pcStack_70 = (code *)local_34;
  ppuStack_74 = (undefined4 **)0x2;
  puStack_78 = (undefined4 *)0x40b4a0;
  __vbaFreeVarList();
  ppuStack_74 = (undefined4 **)&local_24;
  puStack_6c = (undefined4 *)0xff;
  pcStack_70 = (code *)local_1c;
  puStack_78 = (undefined4 *)0x40b4b6;
  pcStack_70 = (code *)__vbaStrToAnsi();
  ppuStack_74 = (undefined4 **)0x40b4bc;
  FUN_00402bf4();
  ppuStack_74 = (undefined4 **)0x40b4c2;
  __vbaSetSystemError();
  puStack_78 = &local_1c;
  ppuStack_74 = (undefined4 **)local_24;
  pvStack_7c = (void *)0x40b4d0;
  __vbaStrToUnicode();
  ppuStack_74 = (undefined4 **)0x40b4d9;
  __vbaFreeStr();
  ppuStack_74 = &local_54;
  puStack_78 = local_34;
  local_4c = &local_1c;
  local_54 = (undefined4 *)0x4008;
  pvStack_7c = (void *)0x40b4f4;
  rtcTrimVar();
  ppuStack_74 = (undefined4 **)local_34;
  puStack_78 = (undefined4 *)0x40b4fa;
  __vbaStrVarMove();
  ppuStack_74 = (undefined4 **)0x40b501;
  __vbaStrMove();
  pcVar2 = __vbaFreeVar_exref;
  ppuStack_74 = (undefined4 **)0x40b50c;
  __vbaFreeVar();
  local_4c = &local_1c;
  pcStack_70 = (code *)local_1c;
  local_54 = (undefined4 *)0x4008;
  ppuStack_74 = (undefined4 **)0x40b523;
  iVar5 = __vbaLenBstr();
  pcStack_70 = (code *)(iVar5 + -1);
  if (!SBORROW4(iVar5,1)) {
    ppuStack_74 = &local_54;
    puStack_78 = local_34;
    pvStack_7c = (void *)0x40b537;
    rtcLeftCharVar();
    pcStack_70 = (code *)local_34;
    ppuStack_74 = (undefined4 **)0x40b53d;
    __vbaStrVarMove();
    pcStack_70 = (code *)0x40b544;
    __vbaStrMove();
    pcStack_70 = (code *)0x40b549;
    __vbaFreeVar();
    puStack_6c = (undefined4 *)&LAB_0040b586;
    pcStack_70 = (code *)0x40b585;
    __vbaFreeStr();
    return;
  }
  pcStack_70 = FUN_0040b5a0;
  __vbaErrorOverflow();
  puStack_78 = (undefined4 *)&DAT_00401736;
  pvStack_7c = ExceptionList;
  pcStack_dc = pcVar2;
  pcStack_e0 = pcVar3;
  ppuStack_74 = (undefined4 **)&pcStack_e4;
  pcStack_e4 = pcVar4;
  pcStack_70 = (code *)&DAT_00401188;
  auStack_8c[0] = 0;
  uStack_9c = 0;
  piVar1 = (int *)*unaff_ESI;
  uStack_ac = 0;
  uStack_cc = 0;
  ExceptionList = &pvStack_7c;
  puStack_6c = (undefined4 *)&stack0xfffffffc;
  iVar5 = (**(code **)(*piVar1 + 0xc0))(piVar1);
  if (iVar5 < 0) {
    __vbaHresultCheckObj(iVar5,piVar1,&DAT_00403434,0xc0);
  }
  piVar1 = (int *)*unaff_ESI;
  uStack_b4 = CONCAT22(uStack_b4._2_2_,*puStack_5c);
  uStack_ac = 8;
  pwStack_a4 = L"licence";
  iVar5 = (**(code **)(*piVar1 + 0x128))
                    (piVar1,8,uStack_a8,L"licence",uStack_a0,2,uStack_b8,uStack_b4,uStack_b0);
  if (iVar5 < 0) {
    __vbaHresultCheckObj(iVar5,piVar1,&DAT_00403434,0x128);
  }
  piVar1 = (int *)*unaff_ESI;
  uStack_ac = 8;
  uStack_b4 = CONCAT22(uStack_b4._2_2_,*unaff_EBX);
  pwStack_a4 = L"Machine";
  iVar5 = (**(code **)(*piVar1 + 0x128))
                    (piVar1,8,uStack_a8,L"Machine",uStack_a0,2,uStack_b8,uStack_b4,uStack_b0);
  if (iVar5 < 0) {
    __vbaHresultCheckObj(iVar5,piVar1,&DAT_00403434,0x128);
  }
  piVar1 = (int *)*unaff_ESI;
  uStack_b4 = *puStack_58;
  uStack_ac = 8;
  pwStack_a4 = L"salesCode";
  iVar5 = (**(code **)(*piVar1 + 0x128))
                    (piVar1,8,uStack_a8,L"salesCode",uStack_a0,8,uStack_b8,uStack_b4,uStack_b0);
  if (iVar5 < 0) {
    __vbaHresultCheckObj(iVar5,piVar1,&DAT_00403434,0x128);
  }
  iVar5 = __vbaStrCmp(&DAT_00402df8,*local_54);
  piVar1 = (int *)*unaff_ESI;
  if (iVar5 == 0) {
    uStack_84 = 0x80020004;
    auStack_8c[0] = 10;
    uStack_ac = 0x4008;
    rtcMidCharVar(&uStack_9c,&uStack_ac,6,auStack_8c);
    iVar5 = (**(code **)(*piVar1 + 0x128))
                      (piVar1,8,uStack_c8,L"partNumber",uStack_c0,uStack_9c,uStack_98,uStack_94,
                       uStack_90);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,piVar1,&DAT_00403434,0x128);
    }
    __vbaFreeVarList(2,auStack_8c,&uStack_9c);
  }
  else {
    pwStack_a4 = L"partNumber";
    uStack_b4 = *local_54;
    uStack_ac = 8;
    iVar5 = (**(code **)(*piVar1 + 0x128))
                      (piVar1,8,uStack_a8,L"partNumber",uStack_a0,8,uStack_b8,uStack_b4,uStack_b0);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,piVar1,&DAT_00403434,0x128);
    }
  }
  piVar1 = (int *)*unaff_ESI;
  uStack_ac = 8;
  uStack_b4 = CONCAT22(uStack_b4._2_2_,*puStack_50);
  pwStack_a4 = L"Class";
  iVar5 = (**(code **)(*piVar1 + 0x128))
                    (piVar1,8,uStack_a8,L"Class",uStack_a0,2,uStack_b8,uStack_b4,uStack_b0);
  if (iVar5 < 0) {
    __vbaHresultCheckObj(iVar5,piVar1,&DAT_00403434,0x128);
  }
  piVar1 = (int *)*unaff_ESI;
  iVar5 = (**(code **)(*piVar1 + 0x164))(piVar1,1,0);
  if (iVar5 < 0) {
    __vbaHresultCheckObj(iVar5,piVar1,&DAT_00403434,0x164);
  }
  return;
}


// ---- FUN_0040b5a0 @ 0040b5a0

void __cdecl
FUN_0040b5a0(undefined4 *param_1,undefined2 *param_2,undefined2 *param_3,undefined4 *param_4,
            undefined4 *param_5,undefined2 *param_6)

{
  int *piVar1;
  int iVar2;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  wchar_t *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24 [2];
  undefined4 local_1c;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_00401736;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffff84;
  local_8 = &DAT_00401188;
  local_24[0] = 0;
  local_34 = 0;
  piVar1 = (int *)*param_1;
  local_44 = 0;
  ExceptionList = &pvStack_14;
  iVar2 = (**(code **)(*piVar1 + 0xc0))(piVar1);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_00403434,0xc0);
  }
  piVar1 = (int *)*param_1;
  local_44 = 8;
  local_3c = L"licence";
  iVar2 = (**(code **)(*piVar1 + 0x128))
                    (piVar1,8,local_40,L"licence",local_38,2,local_50,*param_3,local_48);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_00403434,0x128);
  }
  piVar1 = (int *)*param_1;
  local_44 = 8;
  local_3c = L"Machine";
  iVar2 = (**(code **)(*piVar1 + 0x128))
                    (piVar1,8,local_40,L"Machine",local_38,2,local_50,*param_2,local_48);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_00403434,0x128);
  }
  piVar1 = (int *)*param_1;
  local_4c = *param_4;
  local_44 = 8;
  local_3c = L"salesCode";
  iVar2 = (**(code **)(*piVar1 + 0x128))
                    (piVar1,8,local_40,L"salesCode",local_38,8,local_50,local_4c,local_48);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_00403434,0x128);
  }
  iVar2 = __vbaStrCmp(&DAT_00402df8,*param_5);
  piVar1 = (int *)*param_1;
  if (iVar2 == 0) {
    local_3c = (wchar_t *)param_4;
    local_1c = 0x80020004;
    local_24[0] = 10;
    local_44 = 0x4008;
    rtcMidCharVar(&local_34,&local_44,6,local_24);
    iVar2 = (**(code **)(*piVar1 + 0x128))
                      (piVar1,8,local_60,L"partNumber",local_58,local_34,local_30,local_2c,local_28)
    ;
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar1,&DAT_00403434,0x128);
    }
    __vbaFreeVarList(2,local_24,&local_34);
  }
  else {
    local_3c = L"partNumber";
    local_4c = *param_5;
    local_44 = 8;
    iVar2 = (**(code **)(*piVar1 + 0x128))
                      (piVar1,8,local_40,L"partNumber",local_38,8,local_50,local_4c,local_48);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar1,&DAT_00403434,0x128);
    }
  }
  piVar1 = (int *)*param_1;
  local_44 = 8;
  local_4c = CONCAT22(local_4c._2_2_,*param_6);
  local_3c = L"Class";
  iVar2 = (**(code **)(*piVar1 + 0x128))
                    (piVar1,8,local_40,L"Class",local_38,2,local_50,local_4c,local_48);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_00403434,0x128);
  }
  piVar1 = (int *)*param_1;
  iVar2 = (**(code **)(*piVar1 + 0x164))(piVar1,1,0);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_00403434,0x164);
  }
  return;
}


// ---- FUN_0040b950 @ 0040b950

void FUN_0040b950(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  wchar_t *pwVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  int *piVar9;
  int *piVar10;
  undefined4 local_44 [4];
  undefined4 local_34;
  int *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int *local_24;
  undefined4 local_20;
  int *local_1c;
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_00401736;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffff08;
  local_8 = &DAT_00401198;
  local_18 = 0;
  local_1c = (int *)0x0;
  local_20 = 0;
  local_24 = (int *)0x0;
  local_28 = 0;
  local_2c = 0;
  local_30 = (int *)0x0;
  local_34 = 0;
  local_44[0] = 0;
  ExceptionList = &pvStack_14;
  iVar1 = (**(code **)(*DAT_0043302c + 0x6c))(DAT_0043302c,8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,DAT_0043302c,&DAT_00402ed0,0x6c);
  }
  piVar10 = local_30;
  local_30 = (int *)0x0;
  __vbaObjSet(&local_24,piVar10);
  iVar1 = (**(code **)(*local_24 + 0x70))(local_24,8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_24,&DAT_004034d0,0x70);
  }
  piVar10 = local_30;
  local_30 = (int *)0x0;
  __vbaObjSet(&local_20,piVar10);
  iVar1 = (**(code **)(*local_24 + 0x60))(local_24,&local_30);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_24,&DAT_004034d0,0x60);
  }
  piVar10 = local_30;
  iVar1 = *local_30;
  uVar2 = __vbaObjSetAddref(&local_34,local_20);
  iVar1 = (**(code **)(iVar1 + 0x28))(piVar10,uVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar10,&DAT_004034e0,0x28);
  }
  __vbaFreeObjList(2,&local_34,&local_30);
  iVar1 = (**(code **)(*local_24 + 0x70))(local_24,8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_24,&DAT_004034d0,0x70);
  }
  piVar10 = local_30;
  local_30 = (int *)0x0;
  __vbaObjSet(&local_20,piVar10);
  iVar1 = (**(code **)(*local_24 + 0x60))(local_24,&local_30);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_24,&DAT_004034d0,0x60);
  }
  piVar10 = local_30;
  iVar1 = *local_30;
  uVar2 = __vbaObjSetAddref(&local_34,local_20);
  iVar1 = (**(code **)(iVar1 + 0x28))(piVar10,uVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar10,&DAT_004034e0,0x28);
  }
  __vbaFreeObjList(2,&local_34,&local_30);
  iVar1 = (**(code **)(*local_24 + 0x70))(local_24,8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_24,&DAT_004034d0,0x70);
  }
  piVar10 = local_30;
  local_30 = (int *)0x0;
  __vbaObjSet(&local_20,piVar10);
  iVar1 = (**(code **)(*local_24 + 0x60))(local_24,&local_30);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_24,&DAT_004034d0,0x60);
  }
  piVar10 = local_30;
  iVar1 = *local_30;
  uVar2 = __vbaObjSetAddref(&local_34,local_20);
  iVar1 = (**(code **)(iVar1 + 0x28))(piVar10,uVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar10,&DAT_004034e0,0x28);
  }
  __vbaFreeObjList(2,&local_34,&local_30);
  iVar1 = (**(code **)(*local_24 + 0x70))(local_24,8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_24,&DAT_004034d0,0x70);
  }
  piVar10 = local_30;
  local_30 = (int *)0x0;
  __vbaObjSet(&local_20,piVar10);
  iVar1 = (**(code **)(*local_24 + 0x60))(local_24,&local_30);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_24,&DAT_004034d0,0x60);
  }
  piVar10 = local_30;
  iVar1 = *local_30;
  uVar2 = __vbaObjSetAddref(&local_34,local_20);
  iVar1 = (**(code **)(iVar1 + 0x28))(piVar10,uVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar10,&DAT_004034e0,0x28);
  }
  __vbaFreeObjList(2,&local_34,&local_30);
  iVar1 = (**(code **)(*local_24 + 0x70))(local_24,8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_24,&DAT_004034d0,0x70);
  }
  piVar10 = local_30;
  local_30 = (int *)0x0;
  __vbaObjSet(&local_20,piVar10);
  iVar1 = (**(code **)(*local_24 + 0x60))(local_24,&local_30);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_24,&DAT_004034d0,0x60);
  }
  piVar10 = local_30;
  iVar1 = *local_30;
  uVar2 = __vbaObjSetAddref(&local_34,local_20);
  iVar1 = (**(code **)(iVar1 + 0x28))(piVar10,uVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar10,&DAT_004034e0,0x28);
  }
  __vbaFreeObjList(2,&local_34,&local_30);
  iVar1 = (**(code **)(*local_24 + 0x70))(local_24,8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_24,&DAT_004034d0,0x70);
  }
  piVar10 = local_30;
  local_30 = (int *)0x0;
  __vbaObjSet(&local_20,piVar10);
  iVar1 = (**(code **)(*local_24 + 0x60))(local_24,&local_30);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_24,&DAT_004034d0,0x60);
  }
  piVar10 = local_30;
  iVar1 = *local_30;
  uVar2 = __vbaObjSetAddref(&local_34,local_20);
  iVar1 = (**(code **)(iVar1 + 0x28))(piVar10,uVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar10,&DAT_004034e0,0x28);
  }
  __vbaFreeObjList(2,&local_34,&local_30);
  iVar1 = (**(code **)(*local_24 + 0x70))(local_24,8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_24,&DAT_004034d0,0x70);
  }
  piVar10 = local_30;
  local_30 = (int *)0x0;
  __vbaObjSet(&local_20,piVar10);
  iVar1 = (**(code **)(*local_24 + 0x60))(local_24,&local_30);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_24,&DAT_004034d0,0x60);
  }
  piVar10 = local_30;
  iVar1 = *local_30;
  uVar2 = __vbaObjSetAddref(&local_34,local_20);
  iVar1 = (**(code **)(iVar1 + 0x28))(piVar10,uVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar10,&DAT_004034e0,0x28);
  }
  __vbaFreeObjList(2,&local_34,&local_30);
  iVar1 = (**(code **)(*local_24 + 0x70))(local_24,8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_24,&DAT_004034d0,0x70);
  }
  piVar10 = local_30;
  local_30 = (int *)0x0;
  __vbaObjSet(&local_20,piVar10);
  iVar1 = (**(code **)(*local_24 + 0x60))(local_24,&local_30);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_24,&DAT_004034d0,0x60);
  }
  piVar10 = local_30;
  iVar1 = *local_30;
  uVar2 = __vbaObjSetAddref(&local_34,local_20);
  iVar1 = (**(code **)(iVar1 + 0x28))(piVar10,uVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar10,&DAT_004034e0,0x28);
  }
  __vbaFreeObjList(2,&local_34,&local_30);
  iVar1 = (**(code **)(*local_24 + 0x70))(local_24,8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_24,&DAT_004034d0,0x70);
  }
  piVar10 = local_30;
  local_30 = (int *)0x0;
  __vbaObjSet(&local_20,piVar10);
  iVar1 = (**(code **)(*local_24 + 0x60))(local_24,&local_30);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_24,&DAT_004034d0,0x60);
  }
  piVar10 = local_30;
  iVar1 = *local_30;
  uVar2 = __vbaObjSetAddref(&local_34,local_20);
  iVar1 = (**(code **)(iVar1 + 0x28))(piVar10,uVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar10,&DAT_004034e0,0x28);
  }
  __vbaFreeObjList(2,&local_34,&local_30);
  iVar1 = (**(code **)(*DAT_0043302c + 0x44))(DAT_0043302c,&local_30);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,DAT_0043302c,&DAT_00402ed0,0x44);
  }
  piVar10 = local_30;
  iVar1 = *local_30;
  uVar2 = __vbaObjSetAddref(&local_34,local_24);
  iVar1 = (**(code **)(iVar1 + 0x28))(piVar10,uVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar10,&DAT_004034e0,0x28);
  }
  __vbaFreeObjList(2,&local_34,&local_30);
  iVar1 = (**(code **)(*local_24 + 0x74))(local_24,8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_24,&DAT_004034d0,0x74);
  }
  piVar10 = local_30;
  local_30 = (int *)0x0;
  __vbaObjSet(&local_1c,piVar10);
  iVar1 = (**(code **)(*local_1c + 0x60))(local_1c,8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c,&DAT_004035cc,0x60);
  }
  piVar10 = local_30;
  local_30 = (int *)0x0;
  __vbaObjSet(&local_20,piVar10);
  iVar1 = (**(code **)(*local_1c + 0x50))(local_1c,0xffffffff);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c,&DAT_004035cc,0x50);
  }
  piVar10 = local_1c;
  iVar1 = (**(code **)(*local_1c + 0x40))(local_1c,0xffffffff);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c,&DAT_004035cc,0x40);
  }
  uVar2 = 0xffffffff;
  piVar9 = local_1c;
  iVar1 = (**(code **)(*local_1c + 0x30))(local_1c,0xffffffff);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c,&DAT_004035cc,0x30);
  }
  __vbaObjSetAddref(&local_30,local_20);
  puVar8 = local_44;
  piVar7 = local_1c;
  iVar1 = (**(code **)(*local_1c + 0x58))(local_1c,puVar8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c,&DAT_004035cc,0x58);
  }
  uVar5 = 1;
  pwVar4 = L"Append";
  uVar6 = 0x4009;
  uVar3 = __vbaObjVar(local_44);
  __vbaLateMemCall(uVar3,pwVar4,uVar5,uVar6);
  uVar3 = __vbaCastObj(local_30,&DAT_004035dc);
  __vbaObjSet(&local_20,uVar3);
  __vbaFreeObj();
  __vbaFreeVar(piVar7);
  __vbaStrCopy(puVar8,piVar9);
  __vbaStrCopy(uVar2,piVar10);
  FUN_00417400(&local_28,&local_2c);
  __vbaFreeStrList(2,&local_28,&local_2c);
  __vbaFreeObj(&LAB_0040c6a8);
  __vbaFreeObj();
  __vbaFreeObj();
  __vbaFreeObj();
  return;
}


// ---- FUN_0040c6c0 @ 0040c6c0

void FUN_0040c6c0(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  wchar_t *pwVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 local_3c [4];
  undefined4 local_2c;
  int *local_28;
  int *local_24;
  undefined4 local_20;
  int *local_1c;
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined1 *local_8;
  
  puStack_10 = &DAT_00401736;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffff3c;
  local_8 = &LAB_004011a8;
  local_18 = 0;
  local_1c = (int *)0x0;
  local_20 = 0;
  local_24 = (int *)0x0;
  local_28 = (int *)0x0;
  local_2c = 0;
  local_3c[0] = 0;
  ExceptionList = &pvStack_14;
  iVar1 = (**(code **)(*DAT_0043302c + 0x6c))(DAT_0043302c,8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,DAT_0043302c,&DAT_00402ed0,0x6c);
  }
  piVar3 = local_28;
  local_28 = (int *)0x0;
  __vbaObjSet(&local_24,piVar3);
  iVar1 = (**(code **)(*local_24 + 0x70))(local_24,8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_24,&DAT_004034d0,0x70);
  }
  piVar3 = local_28;
  local_28 = (int *)0x0;
  __vbaObjSet(&local_20,piVar3);
  iVar1 = (**(code **)(*local_24 + 0x60))(local_24,&local_28);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_24,&DAT_004034d0,0x60);
  }
  piVar3 = local_28;
  iVar1 = *local_28;
  uVar2 = __vbaObjSetAddref(&local_2c,local_20);
  iVar1 = (**(code **)(iVar1 + 0x28))(piVar3,uVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar3,&DAT_004034e0,0x28);
  }
  __vbaFreeObjList(2,&local_2c,&local_28);
  iVar1 = (**(code **)(*local_24 + 0x70))(local_24,8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_24,&DAT_004034d0,0x70);
  }
  piVar3 = local_28;
  local_28 = (int *)0x0;
  __vbaObjSet(&local_20,piVar3);
  iVar1 = (**(code **)(*local_24 + 0x60))(local_24,&local_28);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_24,&DAT_004034d0,0x60);
  }
  piVar3 = local_28;
  iVar1 = *local_28;
  uVar2 = __vbaObjSetAddref(&local_2c,local_20);
  iVar1 = (**(code **)(iVar1 + 0x28))(piVar3,uVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar3,&DAT_004034e0,0x28);
  }
  __vbaFreeObjList(2,&local_2c,&local_28);
  iVar1 = (**(code **)(*local_24 + 0x70))(local_24,8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_24,&DAT_004034d0,0x70);
  }
  piVar3 = local_28;
  local_28 = (int *)0x0;
  __vbaObjSet(&local_20,piVar3);
  iVar1 = (**(code **)(*local_24 + 0x60))(local_24,&local_28);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_24,&DAT_004034d0,0x60);
  }
  piVar3 = local_28;
  iVar1 = *local_28;
  uVar2 = __vbaObjSetAddref(&local_2c,local_20);
  iVar1 = (**(code **)(iVar1 + 0x28))(piVar3,uVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar3,&DAT_004034e0,0x28);
  }
  __vbaFreeObjList(2,&local_2c,&local_28);
  iVar1 = (**(code **)(*DAT_0043302c + 0x44))(DAT_0043302c,&local_28);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,DAT_0043302c,&DAT_00402ed0,0x44);
  }
  piVar3 = local_28;
  iVar1 = *local_28;
  uVar2 = __vbaObjSetAddref(&local_2c,local_24);
  iVar1 = (**(code **)(iVar1 + 0x28))(piVar3,uVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar3,&DAT_004034e0,0x28);
  }
  __vbaFreeObjList(2,&local_2c,&local_28);
  iVar1 = (**(code **)(*local_24 + 0x74))(local_24,8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_24,&DAT_004034d0,0x74);
  }
  piVar3 = local_28;
  local_28 = (int *)0x0;
  __vbaObjSet(&local_1c,piVar3);
  iVar1 = (**(code **)(*local_1c + 0x60))(local_1c,8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c,&DAT_004035cc,0x60);
  }
  piVar3 = local_28;
  local_28 = (int *)0x0;
  __vbaObjSet(&local_20,piVar3);
  iVar1 = (**(code **)(*local_1c + 0x50))(local_1c,0xffffffff);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c,&DAT_004035cc,0x50);
  }
  iVar1 = (**(code **)(*local_1c + 0x40))(local_1c,0xffffffff);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c,&DAT_004035cc,0x40);
  }
  iVar1 = (**(code **)(*local_1c + 0x30))(local_1c,0xffffffff);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c,&DAT_004035cc,0x30);
  }
  __vbaObjSetAddref(&local_28,local_20);
  piVar3 = local_1c;
  iVar1 = (**(code **)(*local_1c + 0x58))(local_1c,local_3c);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c,&DAT_004035cc,0x58);
  }
  uVar5 = 1;
  pwVar4 = L"Append";
  uVar6 = 0x4009;
  uVar2 = __vbaObjVar(local_3c);
  __vbaLateMemCall(uVar2,pwVar4,uVar5,uVar6);
  uVar2 = __vbaCastObj(local_28,&DAT_004035dc);
  __vbaObjSet(&local_20,uVar2);
  __vbaFreeObj();
  __vbaFreeVar(piVar3);
  iVar1 = (**(code **)(*local_1c + 0x60))(local_1c,8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c,&DAT_004035cc,0x60);
  }
  piVar3 = local_28;
  local_28 = (int *)0x0;
  __vbaObjSet(&local_20,piVar3);
  iVar1 = (**(code **)(*local_1c + 0x50))(local_1c,0);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c,&DAT_004035cc,0x50);
  }
  iVar1 = (**(code **)(*local_1c + 0x40))(local_1c,0xffffffff);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c,&DAT_004035cc,0x40);
  }
  iVar1 = (**(code **)(*local_1c + 0x30))(local_1c,0);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c,&DAT_004035cc,0x30);
  }
  __vbaObjSetAddref(&local_28,local_20);
  piVar3 = local_1c;
  iVar1 = (**(code **)(*local_1c + 0x58))(local_1c,local_3c);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c,&DAT_004035cc,0x58);
  }
  uVar5 = 1;
  pwVar4 = L"Append";
  uVar6 = 0x4009;
  uVar2 = __vbaObjVar(local_3c);
  __vbaLateMemCall(uVar2,pwVar4,uVar5,uVar6);
  uVar2 = __vbaCastObj(local_28,&DAT_004035dc);
  __vbaObjSet(&local_20,uVar2);
  __vbaFreeObj();
  __vbaFreeVar(piVar3);
  iVar1 = (**(code **)(*local_24 + 100))(local_24,&local_28);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_24,&DAT_004034d0,100);
  }
  piVar3 = local_28;
  iVar1 = *local_28;
  uVar2 = __vbaObjSetAddref(&local_2c,local_1c);
  iVar1 = (**(code **)(iVar1 + 0x28))(piVar3,uVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar3,&DAT_004034e0,0x28);
  }
  __vbaFreeObjList(2,&local_2c,&local_28);
  __vbaFreeObj(&LAB_0040cf6d);
  __vbaFreeObj();
  __vbaFreeObj();
  __vbaFreeObj();
  return;
}


// ---- FUN_0040cf80 @ 0040cf80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040cf80(void)

{
  ushort in_FPUStatusWord;
  undefined4 ***pppuVar1;
  undefined1 **ppuVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined4 ***pppuVar7;
  undefined4 ***pppuVar8;
  undefined4 ***pppuVar9;
  undefined4 ***pppuVar10;
  undefined4 ***pppuVar11;
  undefined4 ***pppuVar12;
  undefined4 ***pppuVar13;
  undefined4 ***pppuVar14;
  undefined1 **ppuVar15;
  undefined1 *puVar16;
  undefined4 **local_58;
  undefined4 **local_54;
  undefined4 **local_50;
  undefined4 **local_4c;
  undefined4 **local_48;
  undefined4 **local_44;
  undefined4 **local_40;
  undefined4 **local_3c;
  undefined1 *local_20;
  undefined1 *local_1c;
  undefined4 **local_18;
  undefined4 **ppuStack_14;
  undefined4 **ppuStack_10;
  undefined4 **local_c;
  undefined4 **local_8;
  
  ppuStack_10 = (undefined4 **)&DAT_00401736;
  ppuStack_14 = ExceptionList;
  local_c = (undefined4 **)&stack0xffffff98;
  local_8 = (undefined4 **)&DAT_004011d0;
  local_18 = (undefined4 **)0x0;
  local_1c = (undefined1 *)0x0;
  local_3c = (undefined4 **)0x0;
  local_40 = (undefined4 **)0x0;
  local_44 = (undefined4 **)0x0;
  local_48 = (undefined4 **)0x0;
  local_4c = (undefined4 **)0x0;
  local_50 = (undefined4 **)0x0;
  local_54 = (undefined4 **)0x0;
  local_58 = (undefined4 **)0x0;
  local_20 = (undefined1 *)0xffffffff;
  ExceptionList = &ppuStack_14;
  __vbaStrCopy();
  ppuVar15 = &local_20;
  ppuVar2 = &local_1c;
  local_18 = (undefined4 **)
             FUN_0040f950(ppuVar2,(undefined2 *)ppuVar15,(undefined2 *)&stack0xffffffdc,
                          (undefined2 *)&stack0xffffffd8,(undefined4 *)&stack0xffffffd4,
                          (undefined4 *)&stack0xffffffd0);
  __vbaFreeStr();
  local_20 = (undefined1 *)0x3;
  local_58 = (undefined4 ***)0x0;
  local_54 = (undefined4 ***)0x0;
  local_50 = (undefined4 ***)0x3d4ccccd;
  local_4c = (undefined4 ***)0x13880;
  local_48 = (undefined4 ***)0x32000;
  local_44 = (undefined4 ***)0x32;
  local_40 = (undefined4 ***)0xc80;
  local_3c = (undefined4 **)0x3a03126f;
  __vbaStrCopy(ppuVar2,ppuVar15);
  puVar16 = &stack0xffffffdc;
  ppuVar15 = &local_20;
  pppuVar14 = &local_58;
  pppuVar13 = &local_54;
  pppuVar12 = &local_50;
  pppuVar11 = &local_4c;
  pppuVar10 = &local_48;
  pppuVar9 = &local_44;
  pppuVar8 = &local_40;
  pppuVar7 = &local_3c;
  puVar6 = &stack0xffffffc8;
  puVar5 = &stack0xffffffcc;
  puVar4 = &stack0xffffffd0;
  puVar3 = &stack0xffffffd4;
  ppuVar2 = &local_1c;
  pppuVar1 = &local_18;
  FUN_00410bb0();
  __vbaFreeStr(pppuVar1,ppuVar2,puVar3,puVar4,puVar5,puVar6,pppuVar7,pppuVar8,pppuVar9,pppuVar10,
               pppuVar11,pppuVar12,pppuVar13,pppuVar14,ppuVar15,puVar16);
  local_3c = (undefined4 **)(float)_DAT_004011c8;
  local_20 = (undefined1 *)0x3;
  if ((in_FPUStatusWord & 0xd) == 0) {
    local_50 = (undefined4 **)0x3d4ccccd;
    local_58 = (undefined4 **)0x0;
    local_54 = (undefined4 **)0x0;
    local_4c = (undefined4 ***)0x13880;
    local_48 = (undefined4 ***)0x32000;
    local_44 = (undefined4 ***)0x32;
    local_40 = (undefined4 ***)0xc80;
    __vbaStrCopy(pppuVar1,ppuVar2);
    puVar16 = &stack0xffffffdc;
    ppuVar15 = &local_20;
    pppuVar14 = &local_58;
    pppuVar13 = &local_54;
    pppuVar12 = &local_50;
    pppuVar11 = &local_4c;
    pppuVar10 = &local_48;
    pppuVar9 = &local_44;
    pppuVar8 = &local_40;
    pppuVar7 = &local_3c;
    puVar6 = &stack0xffffffc8;
    puVar5 = &stack0xffffffcc;
    puVar4 = &stack0xffffffd0;
    puVar3 = &stack0xffffffd4;
    ppuVar2 = &local_1c;
    pppuVar1 = &local_18;
    FUN_00410bb0();
    __vbaFreeStr(pppuVar1,ppuVar2,puVar3,puVar4,puVar5,puVar6,pppuVar7,pppuVar8,pppuVar9,pppuVar10,
                 pppuVar11,pppuVar12,pppuVar13,pppuVar14,ppuVar15,puVar16);
    local_58 = (undefined4 ***)0x0;
    local_20 = (undefined1 *)0x1;
    local_54 = (undefined4 ***)0x0;
    local_50 = (undefined4 ***)0x3a03126f;
    local_3c = (undefined4 **)(float)_DAT_004011c8;
    if ((in_FPUStatusWord & 0xd) == 0) {
      local_4c = (undefined4 ***)0x17700;
      local_48 = (undefined4 ***)0x32000;
      local_44 = (undefined4 ***)0x32;
      local_40 = (undefined4 ***)0xc80;
      __vbaStrCopy();
      pppuVar14 = &local_58;
      pppuVar13 = &local_54;
      pppuVar12 = &local_50;
      pppuVar11 = &local_4c;
      pppuVar10 = &local_48;
      pppuVar9 = &local_44;
      pppuVar8 = &local_40;
      pppuVar7 = &local_3c;
      puVar16 = &stack0xffffffc8;
      puVar6 = &stack0xffffffcc;
      puVar5 = &stack0xffffffd0;
      puVar4 = &stack0xffffffd4;
      ppuVar15 = &local_1c;
      pppuVar1 = &local_18;
      FUN_00410bb0();
      __vbaFreeStr(pppuVar1,ppuVar15,puVar4,puVar5,puVar6,puVar16,pppuVar7,pppuVar8,pppuVar9,
                   pppuVar10,pppuVar11,pppuVar12,pppuVar13,pppuVar14);
      local_20 = (undefined1 *)0xffffffff;
      __vbaStrCopy(pppuVar1,ppuVar15);
      local_18 = (undefined4 **)
                 FUN_0040f950(&local_1c,(undefined2 *)&local_20,(undefined2 *)&stack0xffffffdc,
                              (undefined2 *)&stack0xffffffd8,(undefined4 *)&stack0xffffffd4,
                              (undefined4 *)&stack0xffffffd0);
      __vbaFreeStr();
      local_20 = (undefined1 *)0x3;
      local_58 = (undefined4 ***)0x0;
      local_54 = (undefined4 ***)0x0;
      local_3c = (undefined4 **)(float)_DAT_004011c0;
      if ((in_FPUStatusWord & 0xd) == 0) {
        local_50 = (undefined4 ***)0x3d23d70a;
        local_4c = (undefined4 ***)0xfa00;
        local_48 = (undefined4 ***)0x32000;
        local_44 = (undefined4 ***)0x32;
        local_40 = (undefined4 ***)0xc80;
        __vbaStrCopy(pppuVar11,pppuVar12);
        puVar16 = &stack0xffffffdc;
        ppuVar15 = &local_20;
        pppuVar14 = &local_58;
        pppuVar13 = &local_54;
        pppuVar12 = &local_50;
        pppuVar11 = &local_4c;
        pppuVar10 = &local_48;
        pppuVar9 = &local_44;
        pppuVar8 = &local_40;
        pppuVar7 = &local_3c;
        puVar6 = &stack0xffffffc8;
        puVar5 = &stack0xffffffcc;
        puVar4 = &stack0xffffffd0;
        puVar3 = &stack0xffffffd4;
        ppuVar2 = &local_1c;
        pppuVar1 = &local_18;
        FUN_00410bb0();
        __vbaFreeStr(pppuVar1,ppuVar2,puVar3,puVar4,puVar5,puVar6,pppuVar7,pppuVar8,pppuVar9,
                     pppuVar10,pppuVar11,pppuVar12,pppuVar13,pppuVar14,ppuVar15,puVar16);
        local_3c = (undefined4 **)(float)_DAT_004011c0;
        local_20 = (undefined1 *)0x3;
        if ((in_FPUStatusWord & 0xd) == 0) {
          local_50 = (undefined4 ***)0x3d23d70a;
          local_58 = (undefined4 ***)0x0;
          local_54 = (undefined4 ***)0x0;
          local_4c = (undefined4 ***)0xfa00;
          local_48 = (undefined4 ***)0x32000;
          local_44 = (undefined4 ***)0x32;
          local_40 = (undefined4 ***)0xc80;
          __vbaStrCopy(ppuVar15,puVar16);
          puVar16 = &stack0xffffffdc;
          ppuVar15 = &local_20;
          pppuVar14 = &local_58;
          pppuVar13 = &local_54;
          pppuVar12 = &local_50;
          pppuVar11 = &local_4c;
          pppuVar10 = &local_48;
          pppuVar9 = &local_44;
          pppuVar8 = &local_40;
          pppuVar7 = &local_3c;
          puVar6 = &stack0xffffffc8;
          puVar5 = &stack0xffffffcc;
          puVar4 = &stack0xffffffd0;
          puVar3 = &stack0xffffffd4;
          ppuVar2 = &local_1c;
          pppuVar1 = &local_18;
          FUN_00410bb0();
          __vbaFreeStr(pppuVar1,ppuVar2,puVar3,puVar4,puVar5,puVar6,pppuVar7,pppuVar8,pppuVar9,
                       pppuVar10,pppuVar11,pppuVar12,pppuVar13,pppuVar14,ppuVar15,puVar16);
          local_3c = (undefined4 **)(float)_DAT_004011b8;
          local_20 = (undefined1 *)0x1;
          if ((in_FPUStatusWord & 0xd) == 0) {
            local_58 = (undefined4 **)0x0;
            local_54 = (undefined4 **)0x0;
            local_50 = (undefined4 **)0x3a03126f;
            local_4c = (undefined4 **)0x7d00;
            local_48 = (undefined4 **)0x19000;
            local_44 = (undefined4 **)0x32;
            local_40 = (undefined4 **)0xc80;
            __vbaStrCopy();
            local_8 = &local_44;
            local_c = &local_40;
            ppuStack_10 = &local_3c;
            ppuStack_14 = (undefined4 **)&stack0xffffffc8;
            local_18 = (undefined4 **)&stack0xffffffcc;
            local_1c = &stack0xffffffd0;
            local_20 = &stack0xffffffd4;
            FUN_00410bb0();
            __vbaFreeStr();
            local_20 = (undefined1 *)0xffffffff;
            __vbaStrCopy();
            local_3c = (undefined4 **)0x40d4d4;
            local_18 = (undefined4 **)
                       FUN_0040f950(&local_1c,(undefined2 *)&local_20,(undefined2 *)&stack0xffffffdc
                                    ,(undefined2 *)&stack0xffffffd8,(undefined4 *)&stack0xffffffd4,
                                    (undefined4 *)&stack0xffffffd0);
            local_3c = (undefined4 **)0x40d4dc;
            __vbaFreeStr();
            local_20 = (undefined1 *)0x3;
            local_58 = (undefined4 **)0x0;
            local_54 = (undefined4 **)0x0;
            local_50 = (undefined4 **)0x3d4ccccd;
            local_4c = (undefined4 **)0xbb80;
            local_48 = (undefined4 **)0x32000;
            local_44 = (undefined4 **)0x32;
            local_40 = (undefined4 **)0x7d00;
            local_3c = (undefined4 **)0x40d539;
            __vbaStrCopy();
            local_3c = &local_58;
            local_40 = &local_54;
            local_44 = &local_50;
            local_48 = &local_4c;
            local_4c = &local_48;
            local_50 = &local_44;
            local_54 = &local_40;
            local_58 = &local_3c;
            ppuVar15 = &local_1c;
            pppuVar14 = &local_18;
            FUN_00410bb0();
            __vbaFreeStr(pppuVar14,ppuVar15);
            local_20 = (undefined1 *)0xffffffff;
            __vbaStrCopy(pppuVar14,ppuVar15);
            puVar16 = &stack0xffffffd4;
            puVar6 = &stack0xffffffd8;
            puVar5 = &stack0xffffffdc;
            ppuVar15 = &local_20;
            ppuVar2 = &local_1c;
            pppuVar14 = &local_18;
            FUN_004113c0();
            __vbaFreeStr(pppuVar14,ppuVar2,ppuVar15,puVar5,puVar6,puVar16);
            local_20 = (undefined1 *)0xffffffff;
            __vbaStrCopy(pppuVar14,ppuVar2);
            puVar16 = &stack0xffffffd4;
            puVar6 = &stack0xffffffd8;
            puVar5 = &stack0xffffffdc;
            ppuVar15 = &local_20;
            ppuVar2 = &local_1c;
            pppuVar14 = &local_18;
            FUN_004113c0();
            __vbaFreeStr(pppuVar14,ppuVar2,ppuVar15,puVar5,puVar6,puVar16);
            local_20 = (undefined1 *)0xffffffff;
            __vbaStrCopy(pppuVar14,ppuVar2);
            puVar16 = &stack0xffffffd4;
            puVar6 = &stack0xffffffd8;
            puVar5 = &stack0xffffffdc;
            ppuVar15 = &local_20;
            ppuVar2 = &local_1c;
            pppuVar14 = &local_18;
            FUN_004113c0();
            __vbaFreeStr(pppuVar14,ppuVar2,ppuVar15,puVar5,puVar6,puVar16);
            local_20 = (undefined1 *)0xffffffff;
            __vbaStrCopy(pppuVar14,ppuVar2);
            puVar16 = &stack0xffffffd4;
            puVar6 = &stack0xffffffd8;
            puVar5 = &stack0xffffffdc;
            ppuVar15 = &local_20;
            ppuVar2 = &local_1c;
            pppuVar14 = &local_18;
            FUN_004113c0();
            __vbaFreeStr(pppuVar14,ppuVar2,ppuVar15,puVar5,puVar6,puVar16);
            local_3c = (undefined4 **)(float)_DAT_004011c8;
            if ((in_FPUStatusWord & 0xd) == 0) {
              local_50 = (undefined4 **)0x3d4ccccd;
              local_20 = (undefined1 *)0x3;
              local_58 = (undefined4 **)0x0;
              local_54 = (undefined4 **)0x0;
              local_4c = (undefined4 **)0xbb80;
              local_48 = (undefined4 **)0x32000;
              local_44 = (undefined4 **)0x32;
              local_40 = (undefined4 **)0x7d00;
              local_3c = (undefined4 **)0x40d6fa;
              __vbaStrCopy();
              local_3c = &local_58;
              local_40 = &local_54;
              local_44 = &local_50;
              local_48 = &local_4c;
              local_4c = &local_48;
              local_50 = &local_44;
              local_54 = &local_40;
              local_58 = &local_3c;
              ppuVar15 = &local_1c;
              pppuVar14 = &local_18;
              FUN_00410bb0();
              __vbaFreeStr(pppuVar14,ppuVar15);
              local_20 = (undefined1 *)0xffffffff;
              __vbaStrCopy(pppuVar14,ppuVar15);
              puVar16 = &stack0xffffffd4;
              puVar6 = &stack0xffffffd8;
              puVar5 = &stack0xffffffdc;
              ppuVar15 = &local_20;
              ppuVar2 = &local_1c;
              pppuVar14 = &local_18;
              FUN_004113c0();
              __vbaFreeStr(pppuVar14,ppuVar2,ppuVar15,puVar5,puVar6,puVar16);
              local_20 = (undefined1 *)0xffffffff;
              __vbaStrCopy(pppuVar14,ppuVar2);
              puVar16 = &stack0xffffffd4;
              puVar6 = &stack0xffffffd8;
              puVar5 = &stack0xffffffdc;
              ppuVar15 = &local_20;
              ppuVar2 = &local_1c;
              pppuVar14 = &local_18;
              FUN_004113c0();
              __vbaFreeStr(pppuVar14,ppuVar2,ppuVar15,puVar5,puVar6,puVar16);
              local_20 = (undefined1 *)0xffffffff;
              __vbaStrCopy(pppuVar14,ppuVar2);
              puVar16 = &stack0xffffffd4;
              puVar6 = &stack0xffffffd8;
              puVar5 = &stack0xffffffdc;
              ppuVar15 = &local_20;
              ppuVar2 = &local_1c;
              pppuVar14 = &local_18;
              FUN_004113c0();
              __vbaFreeStr(pppuVar14,ppuVar2,ppuVar15,puVar5,puVar6,puVar16);
              local_20 = (undefined1 *)0xffffffff;
              __vbaStrCopy(pppuVar14,ppuVar2);
              puVar16 = &stack0xffffffd4;
              puVar6 = &stack0xffffffd8;
              puVar5 = &stack0xffffffdc;
              ppuVar15 = &local_20;
              ppuVar2 = &local_1c;
              pppuVar14 = &local_18;
              FUN_004113c0();
              __vbaFreeStr(pppuVar14,ppuVar2,ppuVar15,puVar5,puVar6,puVar16);
              local_58 = (undefined4 ***)0x0;
              local_20 = (undefined1 *)0x1;
              local_54 = (undefined4 ***)0x0;
              local_50 = (undefined4 ***)0x3a03126f;
              local_4c = (undefined4 ***)0x17700;
              local_48 = (undefined4 ***)0x32000;
              local_3c = (undefined4 **)(float)_DAT_004011c8;
              if ((in_FPUStatusWord & 0xd) == 0) {
                local_44 = (undefined4 **)0x32;
                local_40 = (undefined4 **)0x7d00;
                __vbaStrCopy();
                FUN_00410bb0();
                __vbaFreeStr();
                local_20 = (undefined1 *)0xffffffff;
                __vbaStrCopy();
                FUN_004113c0();
                __vbaFreeStr();
                local_20 = (undefined1 *)0xffffffff;
                __vbaStrCopy();
                FUN_004113c0();
                __vbaFreeStr();
                local_20 = (undefined1 *)0x2;
                local_58 = (undefined4 **)0x0;
                local_54 = (undefined4 **)0x0;
                local_50 = (undefined4 **)0x0;
                local_4c = (undefined4 **)0xfa00;
                local_48 = (undefined4 **)0x32000;
                local_44 = (undefined4 **)0x32;
                local_40 = (undefined4 **)0x7d00;
                local_3c = (undefined4 **)0x40000000;
                __vbaStrCopy();
                local_8 = &local_4c;
                local_c = &local_48;
                ppuStack_10 = &local_44;
                ppuStack_14 = &local_40;
                local_18 = &local_3c;
                local_1c = &stack0xffffffc8;
                local_20 = &stack0xffffffcc;
                FUN_00410bb0();
                __vbaFreeStr();
                local_20 = (undefined1 *)0x3;
                local_58 = (undefined4 **)0x0;
                local_54 = (undefined4 **)0x0;
                local_50 = (undefined4 **)0x0;
                local_4c = (undefined4 **)0x17700;
                local_48 = (undefined4 **)0x32000;
                local_44 = (undefined4 **)0x32;
                local_40 = (undefined4 **)0x7d00;
                local_3c = (undefined4 **)0x40000000;
                __vbaStrCopy();
                local_3c = &local_50;
                local_40 = &local_4c;
                local_44 = &local_48;
                local_48 = &local_44;
                local_4c = &local_40;
                local_50 = &local_3c;
                local_54 = (undefined4 **)&stack0xffffffc8;
                local_58 = (undefined4 **)&stack0xffffffcc;
                FUN_00410bb0();
                __vbaFreeStr();
                local_20 = (undefined1 *)0xffffffff;
                __vbaStrCopy();
                ppuVar15 = &local_20;
                ppuVar2 = &local_1c;
                local_18 = (undefined4 **)
                           FUN_0040f950(ppuVar2,(undefined2 *)ppuVar15,
                                        (undefined2 *)&stack0xffffffdc,
                                        (undefined2 *)&stack0xffffffd8,
                                        (undefined4 *)&stack0xffffffd4,
                                        (undefined4 *)&stack0xffffffd0);
                __vbaFreeStr();
                local_20 = (undefined1 *)0x3;
                local_58 = (undefined4 ***)0x0;
                local_54 = (undefined4 ***)0x0;
                local_50 = (undefined4 ***)0x3d19999a;
                local_4c = (undefined4 ***)0xfa00;
                local_48 = (undefined4 ***)0x32000;
                local_44 = (undefined4 ***)0x32;
                local_40 = (undefined4 ***)0x7d00;
                local_3c = (undefined4 **)0x3a03126f;
                __vbaStrCopy(ppuVar2,ppuVar15);
                puVar16 = &stack0xffffffdc;
                ppuVar15 = &local_20;
                pppuVar14 = &local_58;
                pppuVar13 = &local_54;
                pppuVar12 = &local_50;
                pppuVar11 = &local_4c;
                pppuVar10 = &local_48;
                pppuVar9 = &local_44;
                pppuVar8 = &local_40;
                pppuVar7 = &local_3c;
                puVar6 = &stack0xffffffc8;
                puVar5 = &stack0xffffffcc;
                puVar4 = &stack0xffffffd0;
                puVar3 = &stack0xffffffd4;
                ppuVar2 = &local_1c;
                pppuVar1 = &local_18;
                FUN_00410bb0();
                __vbaFreeStr(pppuVar1,ppuVar2,puVar3,puVar4,puVar5,puVar6,pppuVar7,pppuVar8,pppuVar9
                             ,pppuVar10,pppuVar11,pppuVar12,pppuVar13,pppuVar14,ppuVar15,puVar16);
                local_3c = (undefined4 **)(float)_DAT_004011c8;
                local_20 = (undefined1 *)0x3;
                if ((in_FPUStatusWord & 0xd) == 0) {
                  local_50 = (undefined4 ***)0x3d19999a;
                  local_58 = (undefined4 ***)0x0;
                  local_54 = (undefined4 ***)0x0;
                  local_4c = (undefined4 ***)0xfa00;
                  local_48 = (undefined4 ***)0x32000;
                  local_44 = (undefined4 ***)0x32;
                  local_40 = (undefined4 ***)0x7d00;
                  __vbaStrCopy(ppuVar15,puVar16);
                  puVar16 = &stack0xffffffdc;
                  ppuVar15 = &local_20;
                  pppuVar14 = &local_58;
                  pppuVar13 = &local_54;
                  pppuVar12 = &local_50;
                  pppuVar11 = &local_4c;
                  pppuVar10 = &local_48;
                  pppuVar9 = &local_44;
                  pppuVar8 = &local_40;
                  pppuVar7 = &local_3c;
                  puVar6 = &stack0xffffffc8;
                  puVar5 = &stack0xffffffcc;
                  puVar4 = &stack0xffffffd0;
                  puVar3 = &stack0xffffffd4;
                  ppuVar2 = &local_1c;
                  pppuVar1 = &local_18;
                  FUN_00410bb0();
                  __vbaFreeStr(pppuVar1,ppuVar2,puVar3,puVar4,puVar5,puVar6,pppuVar7,pppuVar8,
                               pppuVar9,pppuVar10,pppuVar11,pppuVar12,pppuVar13,pppuVar14,ppuVar15,
                               puVar16);
                  local_3c = (undefined4 **)(float)_DAT_004011c8;
                  local_20 = (undefined1 *)0x1;
                  if ((in_FPUStatusWord & 0xd) == 0) {
                    local_58 = (undefined4 **)0x0;
                    local_54 = (undefined4 **)0x0;
                    local_50 = (undefined4 **)0x3a03126f;
                    local_4c = (undefined4 **)0x1900;
                    local_48 = (undefined4 **)0x19000;
                    local_44 = (undefined4 **)0x32;
                    local_40 = (undefined4 **)0x7d00;
                    __vbaStrCopy();
                    local_8 = &local_4c;
                    local_c = &local_48;
                    ppuStack_10 = &local_44;
                    ppuStack_14 = &local_40;
                    local_18 = &local_3c;
                    local_1c = &stack0xffffffc8;
                    local_20 = &stack0xffffffcc;
                    FUN_00410bb0();
                    __vbaFreeStr();
                    local_20 = (undefined1 *)0x3;
                    local_58 = (undefined4 **)0x0;
                    local_54 = (undefined4 **)0x0;
                    local_50 = (undefined4 **)0x0;
                    local_4c = (undefined4 **)0xbb80;
                    local_48 = (undefined4 **)0x19000;
                    local_44 = (undefined4 **)0x32;
                    local_40 = (undefined4 **)0x7d00;
                    local_3c = (undefined4 **)0x40000000;
                    __vbaStrCopy();
                    local_3c = &local_50;
                    local_40 = &local_4c;
                    local_44 = &local_48;
                    local_48 = &local_44;
                    local_4c = &local_40;
                    local_50 = &local_3c;
                    local_54 = (undefined4 **)&stack0xffffffc8;
                    local_58 = (undefined4 **)&stack0xffffffcc;
                    FUN_00410bb0();
                    __vbaFreeStr();
                    local_20 = (undefined1 *)0xffffffff;
                    __vbaStrCopy();
                    ppuVar15 = &local_20;
                    ppuVar2 = &local_1c;
                    local_18 = (undefined4 **)
                               FUN_0040f950(ppuVar2,(undefined2 *)ppuVar15,
                                            (undefined2 *)&stack0xffffffdc,
                                            (undefined2 *)&stack0xffffffd8,
                                            (undefined4 *)&stack0xffffffd4,
                                            (undefined4 *)&stack0xffffffd0);
                    __vbaFreeStr();
                    local_20 = (undefined1 *)0x3;
                    local_58 = (undefined4 ***)0x0;
                    local_54 = (undefined4 ***)0x0;
                    local_50 = (undefined4 ***)0x3d9c28f6;
                    local_4c = (undefined4 ***)0x186a0;
                    local_48 = (undefined4 ***)0x33900;
                    local_44 = (undefined4 ***)0x32;
                    local_40 = (undefined4 ***)0x80e8;
                    local_3c = (undefined4 **)0x3a03126f;
                    __vbaStrCopy(ppuVar2,ppuVar15);
                    puVar16 = &stack0xffffffdc;
                    ppuVar15 = &local_20;
                    pppuVar14 = &local_58;
                    pppuVar13 = &local_54;
                    pppuVar12 = &local_50;
                    pppuVar11 = &local_4c;
                    pppuVar10 = &local_48;
                    pppuVar9 = &local_44;
                    pppuVar8 = &local_40;
                    pppuVar7 = &local_3c;
                    puVar6 = &stack0xffffffc8;
                    puVar5 = &stack0xffffffcc;
                    puVar4 = &stack0xffffffd0;
                    puVar3 = &stack0xffffffd4;
                    ppuVar2 = &local_1c;
                    pppuVar1 = &local_18;
                    FUN_00410bb0();
                    __vbaFreeStr(pppuVar1,ppuVar2,puVar3,puVar4,puVar5,puVar6,pppuVar7,pppuVar8,
                                 pppuVar9,pppuVar10,pppuVar11,pppuVar12,pppuVar13,pppuVar14,ppuVar15
                                 ,puVar16);
                    local_3c = (undefined4 **)(float)_DAT_004011c8;
                    if ((in_FPUStatusWord & 0xd) == 0) {
                      local_20 = (undefined1 *)0x3;
                      local_58 = (undefined4 ***)0x0;
                      local_54 = (undefined4 ***)0x0;
                      local_50 = (undefined4 ***)0x3d9c28f6;
                      local_4c = (undefined4 ***)0x186a0;
                      local_48 = (undefined4 ***)0x33900;
                      local_44 = (undefined4 ***)0x32;
                      local_40 = (undefined4 ***)0x80e8;
                      __vbaStrCopy(ppuVar15,puVar16);
                      puVar16 = &stack0xffffffdc;
                      ppuVar15 = &local_20;
                      pppuVar14 = &local_58;
                      pppuVar13 = &local_54;
                      pppuVar12 = &local_50;
                      pppuVar11 = &local_4c;
                      pppuVar10 = &local_48;
                      pppuVar9 = &local_44;
                      pppuVar8 = &local_40;
                      pppuVar7 = &local_3c;
                      puVar6 = &stack0xffffffc8;
                      puVar5 = &stack0xffffffcc;
                      puVar4 = &stack0xffffffd0;
                      puVar3 = &stack0xffffffd4;
                      ppuVar2 = &local_1c;
                      pppuVar1 = &local_18;
                      FUN_00410bb0();
                      __vbaFreeStr(pppuVar1,ppuVar2,puVar3,puVar4,puVar5,puVar6,pppuVar7,pppuVar8,
                                   pppuVar9,pppuVar10,pppuVar11,pppuVar12,pppuVar13,pppuVar14,
                                   ppuVar15,puVar16);
                      local_3c = (undefined4 **)(float)_DAT_004011c0;
                      local_20 = (undefined1 *)0x1;
                      if ((in_FPUStatusWord & 0xd) == 0) {
                        local_58 = (undefined4 **)0x0;
                        local_54 = (undefined4 **)0x0;
                        local_50 = (undefined4 **)0x3a03126f;
                        local_4c = (undefined4 **)0x13880;
                        local_48 = (undefined4 **)0x33900;
                        local_44 = (undefined4 **)0x32;
                        local_40 = (undefined4 **)0x80e8;
                        __vbaStrCopy();
                        FUN_00410bb0();
                        __vbaFreeStr();
                        local_20 = (undefined1 *)0x2;
                        local_58 = (undefined4 **)0x0;
                        local_54 = (undefined4 **)0x0;
                        local_50 = (undefined4 **)0x0;
                        local_4c = (undefined4 **)0x186a0;
                        local_48 = (undefined4 **)0x33900;
                        local_44 = (undefined4 **)0x32;
                        local_40 = (undefined4 **)0x80e8;
                        local_3c = (undefined4 **)0x40000000;
                        __vbaStrCopy();
                        FUN_00410bb0();
                        __vbaFreeStr();
                        local_20 = (undefined1 *)0x3;
                        local_58 = (undefined4 **)0x0;
                        local_54 = (undefined4 **)0x0;
                        local_50 = (undefined4 **)0x0;
                        local_4c = (undefined4 **)0x186a0;
                        local_48 = (undefined4 **)0x33900;
                        local_44 = (undefined4 **)0x32;
                        local_40 = (undefined4 **)0x80e8;
                        local_3c = (undefined4 **)0x40000000;
                        __vbaStrCopy();
                        local_8 = &local_4c;
                        local_c = &local_48;
                        ppuStack_10 = &local_44;
                        ppuStack_14 = &local_40;
                        local_18 = &local_3c;
                        local_1c = &stack0xffffffc8;
                        local_20 = &stack0xffffffcc;
                        FUN_00410bb0();
                        __vbaFreeStr();
                        local_20 = (undefined1 *)0x3;
                        local_58 = (undefined4 **)0x0;
                        local_54 = (undefined4 **)0x0;
                        local_50 = (undefined4 **)0x38d1b717;
                        local_4c = (undefined4 **)0x186a0;
                        local_48 = (undefined4 **)0x33900;
                        local_44 = (undefined4 **)0x32;
                        local_40 = (undefined4 **)0x80e8;
                        local_3c = (undefined4 **)0x3951b717;
                        __vbaStrCopy();
                        local_3c = &local_50;
                        local_40 = &local_4c;
                        local_44 = &local_48;
                        local_48 = &local_44;
                        local_4c = &local_40;
                        local_50 = &local_3c;
                        local_54 = (undefined4 **)&stack0xffffffc8;
                        local_58 = (undefined4 **)&stack0xffffffcc;
                        FUN_00410bb0();
                        __vbaFreeStr();
                        local_20 = (undefined1 *)0xffffffff;
                        __vbaStrCopy();
                        ppuVar15 = &local_20;
                        ppuVar2 = &local_1c;
                        local_18 = (undefined4 **)
                                   FUN_0040f950(ppuVar2,(undefined2 *)ppuVar15,
                                                (undefined2 *)&stack0xffffffdc,
                                                (undefined2 *)&stack0xffffffd8,
                                                (undefined4 *)&stack0xffffffd4,
                                                (undefined4 *)&stack0xffffffd0);
                        __vbaFreeStr();
                        local_20 = (undefined1 *)0x3;
                        local_58 = (undefined4 ***)0x0;
                        local_54 = (undefined4 ***)0x0;
                        local_50 = (undefined4 ***)0x3d800000;
                        local_4c = (undefined4 ***)0x186a0;
                        local_48 = (undefined4 ***)0x33900;
                        local_44 = (undefined4 ***)0x32;
                        local_40 = (undefined4 ***)0x80e8;
                        local_3c = (undefined4 **)0x3a03126f;
                        __vbaStrCopy(ppuVar2,ppuVar15);
                        puVar16 = &stack0xffffffdc;
                        ppuVar15 = &local_20;
                        pppuVar14 = &local_58;
                        pppuVar13 = &local_54;
                        pppuVar12 = &local_50;
                        pppuVar11 = &local_4c;
                        pppuVar10 = &local_48;
                        pppuVar9 = &local_44;
                        pppuVar8 = &local_40;
                        pppuVar7 = &local_3c;
                        puVar6 = &stack0xffffffc8;
                        puVar5 = &stack0xffffffcc;
                        puVar4 = &stack0xffffffd0;
                        puVar3 = &stack0xffffffd4;
                        ppuVar2 = &local_1c;
                        pppuVar1 = &local_18;
                        FUN_00410bb0();
                        __vbaFreeStr(pppuVar1,ppuVar2,puVar3,puVar4,puVar5,puVar6,pppuVar7,pppuVar8,
                                     pppuVar9,pppuVar10,pppuVar11,pppuVar12,pppuVar13,pppuVar14,
                                     ppuVar15,puVar16);
                        local_3c = (undefined4 **)(float)_DAT_004011c8;
                        if ((in_FPUStatusWord & 0xd) == 0) {
                          local_50 = (undefined4 ***)0x3d800000;
                          local_20 = (undefined1 *)0x3;
                          local_58 = (undefined4 ***)0x0;
                          local_54 = (undefined4 ***)0x0;
                          local_4c = (undefined4 ***)0x186a0;
                          local_48 = (undefined4 ***)0x33900;
                          local_44 = (undefined4 ***)0x32;
                          local_40 = (undefined4 ***)0x80e8;
                          __vbaStrCopy(ppuVar15,puVar16);
                          puVar16 = &stack0xffffffdc;
                          ppuVar15 = &local_20;
                          pppuVar14 = &local_58;
                          pppuVar13 = &local_54;
                          pppuVar12 = &local_50;
                          pppuVar11 = &local_4c;
                          pppuVar10 = &local_48;
                          pppuVar9 = &local_44;
                          pppuVar8 = &local_40;
                          pppuVar7 = &local_3c;
                          puVar6 = &stack0xffffffc8;
                          puVar5 = &stack0xffffffcc;
                          puVar4 = &stack0xffffffd0;
                          puVar3 = &stack0xffffffd4;
                          ppuVar2 = &local_1c;
                          pppuVar1 = &local_18;
                          FUN_00410bb0();
                          __vbaFreeStr(pppuVar1,ppuVar2,puVar3,puVar4,puVar5,puVar6,pppuVar7,
                                       pppuVar8,pppuVar9,pppuVar10,pppuVar11,pppuVar12,pppuVar13,
                                       pppuVar14,ppuVar15,puVar16);
                          local_3c = (undefined4 **)(float)_DAT_004011c0;
                          local_20 = (undefined1 *)0x1;
                          if ((in_FPUStatusWord & 0xd) == 0) {
                            local_58 = (undefined4 **)0x0;
                            local_54 = (undefined4 **)0x0;
                            local_50 = (undefined4 **)0x3a03126f;
                            local_4c = (undefined4 **)0x186a0;
                            local_48 = (undefined4 **)0x33900;
                            local_44 = (undefined4 **)0x32;
                            local_40 = (undefined4 **)0x80e8;
                            __vbaStrCopy();
                            FUN_00410bb0();
                            __vbaFreeStr();
                            local_20 = (undefined1 *)0x2;
                            local_58 = (undefined4 **)0x0;
                            local_54 = (undefined4 **)0x0;
                            local_50 = (undefined4 **)0x0;
                            local_4c = (undefined4 **)0x186a0;
                            local_48 = (undefined4 **)0x33900;
                            local_44 = (undefined4 **)0x32;
                            local_40 = (undefined4 **)0x80e8;
                            local_3c = (undefined4 **)0x40000000;
                            __vbaStrCopy();
                            local_8 = &local_4c;
                            local_c = &local_48;
                            ppuStack_10 = &local_44;
                            ppuStack_14 = &local_40;
                            local_18 = &local_3c;
                            local_1c = &stack0xffffffc8;
                            local_20 = &stack0xffffffcc;
                            FUN_00410bb0();
                            __vbaFreeStr();
                            local_20 = (undefined1 *)0x3;
                            local_58 = (undefined4 **)0x0;
                            local_54 = (undefined4 **)0x0;
                            local_50 = (undefined4 **)0x0;
                            local_4c = (undefined4 **)0x186a0;
                            local_48 = (undefined4 **)0x33900;
                            local_44 = (undefined4 **)0x32;
                            local_40 = (undefined4 **)0x80e8;
                            local_3c = (undefined4 **)0x40000000;
                            __vbaStrCopy();
                            local_3c = &local_50;
                            local_40 = &local_4c;
                            local_44 = &local_48;
                            local_48 = &local_44;
                            local_4c = &local_40;
                            local_50 = &local_3c;
                            local_54 = (undefined4 **)&stack0xffffffc8;
                            local_58 = (undefined4 **)&stack0xffffffcc;
                            FUN_00410bb0();
                            __vbaFreeStr();
                            local_20 = (undefined1 *)0xffffffff;
                            __vbaStrCopy();
                            ppuVar15 = &local_20;
                            ppuVar2 = &local_1c;
                            local_18 = (undefined4 **)
                                       FUN_0040f950(ppuVar2,(undefined2 *)ppuVar15,
                                                    (undefined2 *)&stack0xffffffdc,
                                                    (undefined2 *)&stack0xffffffd8,
                                                    (undefined4 *)&stack0xffffffd4,
                                                    (undefined4 *)&stack0xffffffd0);
                            __vbaFreeStr();
                            local_20 = (undefined1 *)0x3;
                            local_58 = (undefined4 ***)0x0;
                            local_54 = (undefined4 ***)0x0;
                            local_50 = (undefined4 ***)0x3d19999a;
                            local_4c = (undefined4 ***)0xfa00;
                            local_48 = (undefined4 ***)0x32000;
                            local_44 = (undefined4 ***)0x32;
                            local_40 = (undefined4 ***)0x7d00;
                            local_3c = (undefined4 **)0x3a03126f;
                            __vbaStrCopy(ppuVar2,ppuVar15);
                            puVar16 = &stack0xffffffdc;
                            ppuVar15 = &local_20;
                            pppuVar14 = &local_58;
                            pppuVar13 = &local_54;
                            pppuVar12 = &local_50;
                            pppuVar11 = &local_4c;
                            pppuVar10 = &local_48;
                            pppuVar9 = &local_44;
                            pppuVar8 = &local_40;
                            pppuVar7 = &local_3c;
                            puVar6 = &stack0xffffffc8;
                            puVar5 = &stack0xffffffcc;
                            puVar4 = &stack0xffffffd0;
                            puVar3 = &stack0xffffffd4;
                            ppuVar2 = &local_1c;
                            pppuVar1 = &local_18;
                            FUN_00410bb0();
                            __vbaFreeStr(pppuVar1,ppuVar2,puVar3,puVar4,puVar5,puVar6,pppuVar7,
                                         pppuVar8,pppuVar9,pppuVar10,pppuVar11,pppuVar12,pppuVar13,
                                         pppuVar14,ppuVar15,puVar16);
                            local_3c = (undefined4 **)(float)_DAT_004011c8;
                            local_20 = (undefined1 *)0x3;
                            if ((in_FPUStatusWord & 0xd) == 0) {
                              local_50 = (undefined4 ***)0x3d19999a;
                              local_58 = (undefined4 ***)0x0;
                              local_54 = (undefined4 ***)0x0;
                              local_4c = (undefined4 ***)0xfa00;
                              local_48 = (undefined4 ***)0x32000;
                              local_44 = (undefined4 ***)0x32;
                              local_40 = (undefined4 ***)0x7d00;
                              __vbaStrCopy(ppuVar15,puVar16);
                              puVar16 = &stack0xffffffdc;
                              ppuVar15 = &local_20;
                              pppuVar14 = &local_58;
                              pppuVar13 = &local_54;
                              pppuVar12 = &local_50;
                              pppuVar11 = &local_4c;
                              pppuVar10 = &local_48;
                              pppuVar9 = &local_44;
                              pppuVar8 = &local_40;
                              pppuVar7 = &local_3c;
                              puVar6 = &stack0xffffffc8;
                              puVar5 = &stack0xffffffcc;
                              puVar4 = &stack0xffffffd0;
                              puVar3 = &stack0xffffffd4;
                              ppuVar2 = &local_1c;
                              pppuVar1 = &local_18;
                              FUN_00410bb0();
                              __vbaFreeStr(pppuVar1,ppuVar2,puVar3,puVar4,puVar5,puVar6,pppuVar7,
                                           pppuVar8,pppuVar9,pppuVar10,pppuVar11,pppuVar12,pppuVar13
                                           ,pppuVar14,ppuVar15,puVar16);
                              local_3c = (undefined4 **)(float)_DAT_004011c8;
                              local_20 = (undefined1 *)0x1;
                              if ((in_FPUStatusWord & 0xd) == 0) {
                                local_58 = (undefined4 **)0x0;
                                local_54 = (undefined4 **)0x0;
                                local_50 = (undefined4 **)0x3a03126f;
                                local_4c = (undefined4 **)0x186a0;
                                local_48 = (undefined4 **)0x33900;
                                local_44 = (undefined4 **)0x32;
                                local_40 = (undefined4 **)0x80e8;
                                __vbaStrCopy(pppuVar1,ppuVar2);
                                puVar16 = &stack0xffffffdc;
                                ppuVar15 = &local_20;
                                pppuVar14 = &local_58;
                                pppuVar13 = &local_54;
                                pppuVar12 = &local_50;
                                pppuVar11 = &local_4c;
                                pppuVar10 = &local_48;
                                pppuVar9 = &local_44;
                                pppuVar8 = &local_40;
                                pppuVar7 = &local_3c;
                                puVar6 = &stack0xffffffc8;
                                puVar5 = &stack0xffffffcc;
                                puVar4 = &stack0xffffffd0;
                                puVar3 = &stack0xffffffd4;
                                ppuVar2 = &local_1c;
                                pppuVar1 = &local_18;
                                FUN_00410bb0();
                                __vbaFreeStr(pppuVar1,ppuVar2,puVar3,puVar4,puVar5,puVar6,pppuVar7,
                                             pppuVar8,pppuVar9,pppuVar10,pppuVar11,pppuVar12,
                                             pppuVar13,pppuVar14,ppuVar15,puVar16);
                                local_20 = (undefined1 *)0x3;
                                local_58 = (undefined4 **)0x0;
                                local_54 = (undefined4 **)0x0;
                                local_50 = (undefined4 **)0x0;
                                local_4c = (undefined4 **)0xbb80;
                                local_48 = (undefined4 **)0x19000;
                                local_44 = (undefined4 **)0x32;
                                local_40 = (undefined4 **)0x7d00;
                                local_3c = (undefined4 **)0x40000000;
                                __vbaStrCopy(pppuVar1,ppuVar2);
                                puVar16 = &stack0xffffffdc;
                                ppuVar15 = &local_20;
                                pppuVar14 = &local_58;
                                pppuVar13 = &local_54;
                                pppuVar12 = &local_50;
                                pppuVar11 = &local_4c;
                                pppuVar10 = &local_48;
                                pppuVar9 = &local_44;
                                pppuVar8 = &local_40;
                                pppuVar7 = &local_3c;
                                puVar6 = &stack0xffffffc8;
                                puVar5 = &stack0xffffffcc;
                                puVar4 = &stack0xffffffd0;
                                puVar3 = &stack0xffffffd4;
                                ppuVar2 = &local_1c;
                                pppuVar1 = &local_18;
                                FUN_00410bb0();
                                __vbaFreeStr(pppuVar1,ppuVar2,puVar3,puVar4,puVar5,puVar6,pppuVar7,
                                             pppuVar8,pppuVar9,pppuVar10,pppuVar11,pppuVar12,
                                             pppuVar13,pppuVar14,ppuVar15,puVar16);
                                return;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  __vbaFPException();
  return;
}


// ---- FUN_0040e8e0 @ 0040e8e0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040e8e0(void)

{
  ushort in_FPUStatusWord;
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  float *pfVar15;
  float *pfVar16;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  float local_40 [11];
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_00401736;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffff94;
  local_8 = &DAT_004011e0;
  local_40[3] = 0.0762;
  local_40[4] = 0.0762;
  local_40[10] = 0.0;
  local_40[9] = 0.0;
  local_40[8] = 0.0;
  local_40[2] = 0.0;
  local_40[1] = 0.0;
  local_40[0] = 0.0;
  local_44 = 0;
  local_48 = 0;
  local_4c = 0;
  local_50 = 0;
  local_54 = 0;
  local_58 = 0;
  local_5c = 0;
  local_40[5] = -NAN;
  local_40[6] = 0.0;
  local_40[7] = -NAN;
  ExceptionList = &pvStack_14;
  __vbaStrCopy();
  pfVar7 = local_40 + 7;
  pfVar16 = local_40 + 8;
  local_40[9] = (float)FUN_0040f950(pfVar16,(undefined2 *)pfVar7,(undefined2 *)(local_40 + 6),
                                    (undefined2 *)(local_40 + 5),local_40 + 4,local_40 + 3);
  __vbaFreeStr();
  local_40[6] = 5.60519e-45;
  local_40[7] = 4.2039e-45;
  local_5c = 0;
  local_58 = 0;
  local_54 = 0x3d9c28f6;
  local_50 = 100000;
  local_4c = 0x33900;
  local_48 = 0x32;
  local_44 = 33000;
  local_40[0] = 0.0005;
  local_40[1] = 0.0762;
  local_40[2] = 0.1524;
  local_40[3] = 0.0;
  local_40[4] = 156250.0;
  __vbaStrCopy(pfVar16,pfVar7);
  pfVar16 = local_40 + 6;
  pfVar15 = local_40 + 7;
  puVar14 = &local_5c;
  puVar13 = &local_58;
  puVar12 = &local_54;
  puVar11 = &local_50;
  puVar10 = &local_4c;
  puVar9 = &local_48;
  puVar8 = &local_44;
  pfVar7 = local_40;
  pfVar6 = local_40 + 1;
  pfVar5 = local_40 + 2;
  pfVar4 = local_40 + 3;
  pfVar3 = local_40 + 4;
  pfVar2 = local_40 + 8;
  pfVar1 = local_40 + 9;
  FUN_00410bb0();
  __vbaFreeStr(pfVar1,pfVar2,pfVar3,pfVar4,pfVar5,pfVar6,pfVar7,puVar8,puVar9,puVar10,puVar11,
               puVar12,puVar13,puVar14,pfVar15,pfVar16);
  local_40[0] = (float)_DAT_004011c8;
  if ((in_FPUStatusWord & 0xd) == 0) {
    local_40[6] = 7.00649e-45;
    local_40[7] = 4.2039e-45;
    local_5c = 0;
    local_58 = 0;
    local_54 = 0x3d9c28f6;
    local_50 = 100000;
    local_4c = 0x33900;
    local_48 = 0x32;
    local_44 = 33000;
    local_40[1] = 0.0762;
    local_40[2] = 0.1524;
    local_40[3] = 0.0;
    local_40[4] = 156250.0;
    __vbaStrCopy(pfVar1,pfVar2);
    pfVar16 = local_40 + 6;
    pfVar15 = local_40 + 7;
    puVar14 = &local_5c;
    puVar13 = &local_58;
    puVar12 = &local_54;
    puVar11 = &local_50;
    puVar10 = &local_4c;
    puVar9 = &local_48;
    puVar8 = &local_44;
    pfVar7 = local_40;
    pfVar6 = local_40 + 1;
    pfVar5 = local_40 + 2;
    pfVar4 = local_40 + 3;
    pfVar3 = local_40 + 4;
    pfVar2 = local_40 + 8;
    pfVar1 = local_40 + 9;
    FUN_00410bb0();
    __vbaFreeStr(pfVar1,pfVar2,pfVar3,pfVar4,pfVar5,pfVar6,pfVar7,puVar8,puVar9,puVar10,puVar11,
                 puVar12,puVar13,puVar14,pfVar15,pfVar16);
    local_5c = 0;
    local_40[6] = 1.4013e-45;
    local_40[7] = 1.4013e-45;
    local_58 = 0;
    local_54 = 0x3a03126f;
    local_50 = 40000;
    local_4c = 0x33900;
    local_40[0] = (float)_DAT_004011c0;
    if ((in_FPUStatusWord & 0xd) == 0) {
      local_48 = 0x32;
      local_44 = 33000;
      local_40[1] = 0.02;
      local_40[2] = 0.043;
      local_40[3] = 0.0;
      local_40[4] = 20833.334;
      __vbaStrCopy(pfVar1,pfVar2);
      pfVar16 = local_40 + 6;
      pfVar15 = local_40 + 7;
      puVar14 = &local_5c;
      puVar13 = &local_58;
      puVar12 = &local_54;
      puVar11 = &local_50;
      puVar10 = &local_4c;
      puVar9 = &local_48;
      puVar8 = &local_44;
      pfVar7 = local_40;
      pfVar6 = local_40 + 1;
      pfVar5 = local_40 + 2;
      pfVar4 = local_40 + 3;
      pfVar3 = local_40 + 4;
      pfVar2 = local_40 + 8;
      pfVar1 = local_40 + 9;
      FUN_00410bb0();
      __vbaFreeStr(pfVar1,pfVar2,pfVar3,pfVar4,pfVar5,pfVar6,pfVar7,puVar8,puVar9,puVar10,puVar11,
                   puVar12,puVar13,puVar14,pfVar15,pfVar16);
      local_40[6] = 4.2039e-45;
      local_40[7] = 2.8026e-45;
      local_5c = 0;
      local_58 = 0;
      local_54 = 0;
      local_50 = 50000;
      local_4c = 0x33900;
      local_48 = 0x32;
      local_44 = 33000;
      local_40[0] = 2.0;
      local_40[1] = 0.0;
      local_40[2] = 65.0;
      local_40[3] = -15.0;
      local_40[4] = 58593.7;
      __vbaStrCopy(pfVar1,pfVar2);
      pfVar16 = local_40 + 6;
      pfVar15 = local_40 + 7;
      puVar14 = &local_5c;
      puVar13 = &local_58;
      puVar12 = &local_54;
      puVar11 = &local_50;
      puVar10 = &local_4c;
      puVar9 = &local_48;
      puVar8 = &local_44;
      pfVar7 = local_40;
      pfVar6 = local_40 + 1;
      pfVar5 = local_40 + 2;
      pfVar4 = local_40 + 3;
      pfVar3 = local_40 + 4;
      pfVar2 = local_40 + 8;
      pfVar1 = local_40 + 9;
      FUN_00410bb0();
      __vbaFreeStr(pfVar1,pfVar2,pfVar3,pfVar4,pfVar5,pfVar6,pfVar7,puVar8,puVar9,puVar10,puVar11,
                   puVar12,puVar13,puVar14,pfVar15,pfVar16);
      local_40[6] = 8.40779e-45;
      local_40[7] = 4.2039e-45;
      local_5c = 0;
      local_58 = 0;
      local_54 = 0;
      local_50 = 100000;
      local_4c = 0x33900;
      local_48 = 0x32;
      local_44 = 33000;
      local_40[0] = 2.0;
      local_40[1] = 0.0;
      local_40[2] = 720.0;
      local_40[3] = -380.0;
      local_40[4] = 101461.0;
      __vbaStrCopy(pfVar1,pfVar2);
      pfVar16 = local_40 + 6;
      pfVar15 = local_40 + 7;
      puVar14 = &local_5c;
      puVar13 = &local_58;
      puVar12 = &local_54;
      puVar11 = &local_50;
      puVar10 = &local_4c;
      puVar9 = &local_48;
      puVar8 = &local_44;
      pfVar7 = local_40;
      pfVar6 = local_40 + 1;
      pfVar5 = local_40 + 2;
      pfVar4 = local_40 + 3;
      pfVar3 = local_40 + 4;
      pfVar2 = local_40 + 8;
      pfVar1 = local_40 + 9;
      FUN_00410bb0();
      __vbaFreeStr(pfVar1,pfVar2,pfVar3,pfVar4,pfVar5,pfVar6,pfVar7,puVar8,puVar9,puVar10,puVar11,
                   puVar12,puVar13,puVar14,pfVar15,pfVar16);
      local_40[6] = 2.8026e-45;
      local_40[7] = 4.2039e-45;
      local_5c = 0;
      local_58 = 0;
      local_54 = 0x38d1b717;
      local_50 = 100000;
      local_4c = 0x33900;
      local_48 = 500;
      local_44 = 33000;
      local_40[0] = 0.0002;
      local_40[1] = 0.005;
      local_40[2] = 0.01;
      local_40[3] = 0.0;
      local_40[4] = 835.175;
      __vbaStrCopy(pfVar1,pfVar2);
      pfVar16 = local_40 + 6;
      pfVar15 = local_40 + 7;
      puVar14 = &local_5c;
      puVar13 = &local_58;
      puVar12 = &local_54;
      puVar11 = &local_50;
      puVar10 = &local_4c;
      puVar9 = &local_48;
      puVar8 = &local_44;
      pfVar7 = local_40;
      pfVar6 = local_40 + 1;
      pfVar5 = local_40 + 2;
      pfVar4 = local_40 + 3;
      pfVar3 = local_40 + 4;
      pfVar2 = local_40 + 8;
      pfVar1 = local_40 + 9;
      FUN_00410bb0();
      __vbaFreeStr(pfVar1,pfVar2,pfVar3,pfVar4,pfVar5,pfVar6,pfVar7,puVar8,puVar9,puVar10,puVar11,
                   puVar12,puVar13,puVar14,pfVar15,pfVar16);
      __vbaFreeObj(&LAB_0040eda9);
      return;
    }
  }
  __vbaFPException();
  return;
}


// ---- FUN_0040edc0 @ 0040edc0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040edc0(void)

{
  undefined4 uVar1;
  int iVar2;
  ushort in_FPUStatusWord;
  undefined4 *puVar3;
  undefined4 *puVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  float local_74 [9];
  undefined4 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  wchar_t *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int *local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_00401736;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffff58;
  local_8 = &DAT_004011f0;
  local_18 = (int *)0x0;
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_74[2] = 0.0;
  local_74[1] = 0.0;
  local_74[0] = 0.0;
  local_78 = 0;
  local_7c = 0;
  local_80 = 0;
  local_84 = 0;
  local_88 = 0;
  local_8c = 0;
  local_90 = 0;
  local_74[3] = 0.05;
  local_74[4] = 0.062;
  local_74[5] = 0.0;
  local_74[6] = -NAN;
  local_74[7] = -NAN;
  ExceptionList = &pvStack_14;
  __vbaStrCopy();
  pfVar8 = local_74 + 7;
  puVar4 = &local_20;
  local_1c = FUN_0040f950(puVar4,(undefined2 *)pfVar8,(undefined2 *)(local_74 + 6),
                          (undefined2 *)(local_74 + 5),local_74 + 4,local_74 + 3);
  __vbaFreeStr();
  local_74[6] = 2.8026e-45;
  local_74[7] = 4.2039e-45;
  local_90 = 0;
  local_8c = 0;
  local_88 = 0x3d4ccccd;
  local_84 = 48000;
  local_80 = 0x32000;
  local_7c = 0x32;
  local_78 = 32000;
  local_74[0] = 0.0005;
  local_74[1] = 0.0625;
  local_74[2] = 0.125;
  local_74[3] = 0.0;
  local_74[4] = 122718.0;
  __vbaStrCopy(puVar4,pfVar8);
  pfVar7 = local_74 + 6;
  pfVar6 = local_74 + 7;
  puVar18 = &local_90;
  puVar17 = &local_8c;
  puVar16 = &local_88;
  puVar4 = &local_84;
  puVar3 = &local_80;
  puVar15 = &local_7c;
  puVar14 = &local_78;
  pfVar8 = local_74;
  pfVar5 = local_74 + 1;
  pfVar13 = local_74 + 2;
  pfVar12 = local_74 + 3;
  pfVar11 = local_74 + 4;
  puVar10 = &local_20;
  puVar9 = &local_1c;
  FUN_00410bb0();
  __vbaFreeStr(puVar9,puVar10,pfVar11,pfVar12,pfVar13,pfVar5,pfVar8,puVar14,puVar15,puVar3,puVar4,
               puVar16,puVar17,puVar18,pfVar6,pfVar7);
  local_74[4] = 0.1;
  local_74[5] = 0.0;
  local_74[6] = 7.00649e-45;
  local_74[7] = -NAN;
  __vbaStrCopy(puVar9,puVar10);
  pfVar8 = local_74 + 4;
  pfVar7 = local_74 + 5;
  pfVar6 = local_74 + 6;
  pfVar5 = local_74 + 7;
  puVar4 = &local_20;
  puVar3 = &local_1c;
  FUN_004113c0();
  __vbaFreeStr(puVar3,puVar4,pfVar5,pfVar6,pfVar7,pfVar8);
  local_74[4] = 0.1;
  local_74[5] = 0.0;
  local_74[6] = 9.80909e-45;
  local_74[7] = -NAN;
  __vbaStrCopy(puVar3,puVar4);
  pfVar8 = local_74 + 4;
  pfVar7 = local_74 + 5;
  pfVar6 = local_74 + 6;
  pfVar5 = local_74 + 7;
  puVar4 = &local_20;
  puVar3 = &local_1c;
  FUN_004113c0();
  __vbaFreeStr(puVar3,puVar4,pfVar5,pfVar6,pfVar7,pfVar8);
  local_74[4] = 0.1;
  local_74[5] = -NAN;
  local_74[6] = 7.00649e-45;
  local_74[7] = -NAN;
  __vbaStrCopy(puVar3,puVar4);
  pfVar8 = local_74 + 4;
  pfVar7 = local_74 + 5;
  pfVar6 = local_74 + 6;
  pfVar5 = local_74 + 7;
  puVar4 = &local_20;
  puVar3 = &local_1c;
  FUN_004113c0();
  __vbaFreeStr(puVar3,puVar4,pfVar5,pfVar6,pfVar7,pfVar8);
  local_74[4] = 0.1;
  local_74[5] = -NAN;
  local_74[6] = 9.80909e-45;
  local_74[7] = -NAN;
  __vbaStrCopy(puVar3,puVar4);
  pfVar8 = local_74 + 4;
  pfVar7 = local_74 + 5;
  pfVar6 = local_74 + 6;
  pfVar5 = local_74 + 7;
  puVar4 = &local_20;
  puVar3 = &local_1c;
  FUN_004113c0();
  __vbaFreeStr(puVar3,puVar4,pfVar5,pfVar6,pfVar7,pfVar8);
  local_74[0] = (float)_DAT_004011c8;
  local_74[6] = 4.2039e-45;
  local_74[7] = 4.2039e-45;
  if ((in_FPUStatusWord & 0xd) == 0) {
    local_88 = 0x3d4ccccd;
    local_74[1] = 0.05;
    local_90 = 0;
    local_8c = 0;
    local_84 = 48000;
    local_80 = 0x32000;
    local_7c = 0x32;
    local_78 = 32000;
    local_74[2] = 0.1;
    local_74[3] = 0.0;
    local_74[4] = 122718.0;
    __vbaStrCopy(puVar3,puVar4);
    pfVar7 = local_74 + 6;
    pfVar6 = local_74 + 7;
    puVar18 = &local_90;
    puVar17 = &local_8c;
    puVar16 = &local_88;
    puVar4 = &local_84;
    puVar3 = &local_80;
    puVar15 = &local_7c;
    puVar14 = &local_78;
    pfVar8 = local_74;
    pfVar5 = local_74 + 1;
    pfVar13 = local_74 + 2;
    pfVar12 = local_74 + 3;
    pfVar11 = local_74 + 4;
    puVar10 = &local_20;
    puVar9 = &local_1c;
    FUN_00410bb0();
    __vbaFreeStr(puVar9,puVar10,pfVar11,pfVar12,pfVar13,pfVar5,pfVar8,puVar14,puVar15,puVar3,puVar4,
                 puVar16,puVar17,puVar18,pfVar6,pfVar7);
    local_74[4] = 0.125;
    local_74[5] = 0.0;
    local_74[6] = 7.00649e-45;
    local_74[7] = -NAN;
    __vbaStrCopy(puVar9,puVar10);
    pfVar8 = local_74 + 4;
    pfVar7 = local_74 + 5;
    pfVar6 = local_74 + 6;
    pfVar5 = local_74 + 7;
    puVar4 = &local_20;
    puVar3 = &local_1c;
    FUN_004113c0();
    __vbaFreeStr(puVar3,puVar4,pfVar5,pfVar6,pfVar7,pfVar8);
    local_74[4] = 0.125;
    local_74[5] = 0.0;
    local_74[6] = 9.80909e-45;
    local_74[7] = -NAN;
    __vbaStrCopy(puVar3,puVar4);
    pfVar8 = local_74 + 4;
    pfVar7 = local_74 + 5;
    pfVar6 = local_74 + 6;
    pfVar5 = local_74 + 7;
    puVar4 = &local_20;
    puVar3 = &local_1c;
    FUN_004113c0();
    __vbaFreeStr(puVar3,puVar4,pfVar5,pfVar6,pfVar7,pfVar8);
    local_74[4] = 0.125;
    local_74[5] = -NAN;
    local_74[6] = 7.00649e-45;
    local_74[7] = -NAN;
    __vbaStrCopy(puVar3,puVar4);
    pfVar8 = local_74 + 4;
    pfVar7 = local_74 + 5;
    pfVar6 = local_74 + 6;
    pfVar5 = local_74 + 7;
    puVar4 = &local_20;
    puVar3 = &local_1c;
    FUN_004113c0();
    __vbaFreeStr(puVar3,puVar4,pfVar5,pfVar6,pfVar7,pfVar8);
    local_74[4] = 0.125;
    local_74[5] = -NAN;
    local_74[6] = 9.80909e-45;
    local_74[7] = -NAN;
    __vbaStrCopy(puVar3,puVar4);
    pfVar8 = local_74 + 4;
    pfVar7 = local_74 + 5;
    pfVar6 = local_74 + 6;
    pfVar5 = local_74 + 7;
    puVar4 = &local_20;
    puVar3 = &local_1c;
    FUN_004113c0();
    __vbaFreeStr(puVar3,puVar4,pfVar5,pfVar6,pfVar7,pfVar8);
    local_74[0] = (float)_DAT_004011c8;
    local_74[6] = 1.4013e-45;
    local_74[7] = 1.4013e-45;
    if ((in_FPUStatusWord & 0xd) == 0) {
      local_90 = 0;
      local_8c = 0;
      local_88 = 0x3a03126f;
      local_84 = 96000;
      local_80 = 0x32000;
      local_7c = 0x32;
      local_78 = 32000;
      local_74[1] = 0.03;
      local_74[2] = 0.035;
      local_74[3] = 0.0;
      local_74[4] = 15494.0;
      __vbaStrCopy(puVar3,puVar4);
      pfVar7 = local_74 + 6;
      pfVar6 = local_74 + 7;
      puVar18 = &local_90;
      puVar17 = &local_8c;
      puVar16 = &local_88;
      puVar4 = &local_84;
      puVar3 = &local_80;
      puVar15 = &local_7c;
      puVar14 = &local_78;
      pfVar8 = local_74;
      pfVar5 = local_74 + 1;
      pfVar13 = local_74 + 2;
      pfVar12 = local_74 + 3;
      pfVar11 = local_74 + 4;
      puVar10 = &local_20;
      puVar9 = &local_1c;
      FUN_00410bb0();
      __vbaFreeStr(puVar9,puVar10,pfVar11,pfVar12,pfVar13,pfVar5,pfVar8,puVar14,puVar15,puVar3,
                   puVar4,puVar16,puVar17,puVar18,pfVar6,pfVar7);
      local_74[4] = 0.022;
      local_74[5] = -NAN;
      local_74[6] = 7.00649e-45;
      local_74[7] = -NAN;
      __vbaStrCopy(puVar9,puVar10);
      pfVar8 = local_74 + 4;
      pfVar7 = local_74 + 5;
      pfVar6 = local_74 + 6;
      pfVar5 = local_74 + 7;
      puVar4 = &local_20;
      puVar3 = &local_1c;
      FUN_004113c0();
      __vbaFreeStr(puVar3,puVar4,pfVar5,pfVar6,pfVar7,pfVar8);
      local_74[4] = 0.022;
      local_74[5] = -NAN;
      local_74[6] = 9.80909e-45;
      local_74[7] = -NAN;
      __vbaStrCopy(puVar3,puVar4);
      pfVar8 = local_74 + 4;
      pfVar7 = local_74 + 5;
      pfVar6 = local_74 + 6;
      pfVar5 = local_74 + 7;
      puVar4 = &local_20;
      puVar3 = &local_1c;
      FUN_004113c0();
      __vbaFreeStr(puVar3,puVar4,pfVar5,pfVar6,pfVar7,pfVar8);
      local_44 = 10;
      local_3c = (undefined *)0x80020004;
      iVar2 = (**(code **)(*DAT_0043302c + 0xbc))
                        (DAT_0043302c,L"CentreRule",3,local_30,2,local_28,10,local_40,0x80020004,
                         local_38,10,local_50,0x80020004,local_48,&local_24);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,DAT_0043302c,&DAT_00402ed0,0xbc);
      }
      uVar1 = local_24;
      local_24 = 0;
      __vbaObjSet(&local_18,uVar1);
      iVar2 = (**(code **)(*local_18 + 0xc0))(local_18);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0xc0);
      }
      local_3c = (undefined *)CONCAT22(local_3c._2_2_,(undefined2)local_1c);
      iVar2 = (**(code **)(*local_18 + 0x128))
                        (local_18,8,local_30,L"stage",local_28,2,local_40,local_3c,local_38);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0x128);
      }
      iVar2 = (**(code **)(*local_18 + 0x128))
                        (local_18,8,local_30,L"axis",local_28,8,local_40,&DAT_004036a4,local_38);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0x128);
      }
      iVar2 = (**(code **)(*local_18 + 0x128))
                        (local_18,8,local_30,L"column",local_28,0xb,local_40,0xffffffff,local_38);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0x128);
      }
      iVar2 = (**(code **)(*local_18 + 0x128))
                        (local_18,8,local_30,L"Centre",local_28,5,local_40,0x9999999a,0x3fa99999);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0x128);
      }
      local_3c = (undefined *)0x5;
      iVar2 = (**(code **)(*local_18 + 0x128))
                        (local_18,8,local_30,L"value",local_28,2,local_40,5,0x3fa99999);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0x128);
      }
      iVar2 = (**(code **)(*local_18 + 0x164))(local_18,1,0);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0x164);
      }
      iVar2 = (**(code **)(*local_18 + 0xc0))(local_18);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0xc0);
      }
      local_3c = (undefined *)CONCAT22(local_3c._2_2_,(undefined2)local_1c);
      local_2c = L"stage";
      iVar2 = (**(code **)(*local_18 + 0x128))
                        (local_18,8,local_30,L"stage",local_28,2,local_40,local_3c,0x3fa99999);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0x128);
      }
      local_3c = &DAT_004036a4;
      local_2c = L"axis";
      iVar2 = (**(code **)(*local_18 + 0x128))
                        (local_18,8,local_30,L"axis",local_28,8,local_40,&DAT_004036a4,0x3fa99999);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0x128);
      }
      local_3c = (undefined *)0xffffffff;
      local_2c = L"column";
      iVar2 = (**(code **)(*local_18 + 0x128))
                        (local_18,8,local_30,L"column",local_28,0xb,local_40,0xffffffff,0x3fa99999);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0x128);
      }
      local_3c = (undefined *)0x9999999a;
      local_38 = 0x3fa99999;
      local_2c = L"Centre";
      iVar2 = (**(code **)(*local_18 + 0x128))
                        (local_18,8,local_30,L"Centre",local_28,5,local_40,0x9999999a,0x3fa99999);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0x128);
      }
      local_34 = 8;
      local_2c = L"value";
      iVar2 = (**(code **)(*local_18 + 0x128))
                        (local_18,8,local_30,L"value",local_28,2,local_40,7,local_38);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0x128);
      }
      iVar2 = (**(code **)(*local_18 + 0x164))(local_18,1,0);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0x164);
      }
      iVar2 = (**(code **)(*local_18 + 0xc4))(local_18);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0xc4);
      }
      __vbaFreeObj(&LAB_0040f92e);
      return;
    }
  }
  __vbaFPException();
  return;
}


// ---- FUN_0040f950 @ 0040f950

void __cdecl
FUN_0040f950(undefined4 *param_1,undefined2 *param_2,undefined2 *param_3,undefined2 *param_4,
            undefined4 *param_5,undefined4 *param_6)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  code *pcVar5;
  wchar_t *pwVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int **ppiVar9;
  undefined1 auStack_2c0 [4];
  code *pcStack_2bc;
  undefined1 *puStack_2b8;
  int *piStack_264;
  undefined4 uStack_258;
  undefined4 uStack_250;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  wchar_t *pwStack_224;
  undefined4 uStack_220;
  undefined4 auStack_21c [4];
  undefined4 uStack_20c;
  int *piStack_208;
  int *piStack_204;
  undefined4 uStack_200;
  int *piStack_1fc;
  undefined4 *puStack_1f8;
  undefined4 *puStack_1f4;
  int *piStack_1f0;
  int *piStack_1ec;
  code *pcStack_1e8;
  int iStack_1c0;
  int *piStack_1bc;
  undefined *puStack_1b8;
  undefined4 uStack_1b4;
  int *piStack_1b0;
  undefined4 uStack_1ac;
  wchar_t *pwStack_1a4;
  int iStack_1a0;
  int *piStack_19c;
  undefined *puStack_198;
  undefined4 uStack_194;
  int *piStack_190;
  undefined4 uStack_18c;
  wchar_t *pwStack_184;
  int iStack_180;
  int *piStack_17c;
  undefined *puStack_178;
  undefined4 uStack_174;
  int *piStack_170;
  undefined4 uStack_16c;
  wchar_t *pwStack_164;
  int iStack_160;
  int *piStack_15c;
  undefined *puStack_158;
  undefined4 uStack_154;
  int *piStack_150;
  undefined4 uStack_14c;
  wchar_t *pwStack_144;
  undefined4 uStack_140;
  int iStack_13c;
  int *piStack_138;
  undefined *puStack_134;
  undefined4 uStack_130;
  int *piStack_12c;
  undefined4 uStack_128;
  wchar_t *pwStack_120;
  undefined4 uStack_11c;
  int iStack_118;
  int *piStack_114;
  int *piStack_110;
  undefined4 uStack_10c;
  int *piStack_108;
  undefined4 uStack_104;
  wchar_t *pwStack_fc;
  undefined4 uStack_f8;
  int iStack_f4;
  int *piStack_f0;
  wchar_t *pwStack_ec;
  undefined *puStack_e8;
  int *piStack_e4;
  int *piStack_e0;
  int **ppiStack_dc;
  int *piStack_d8;
  wchar_t *pwStack_d4;
  undefined4 local_80 [5];
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_4c [4];
  undefined4 local_3c;
  int local_38;
  int *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int *local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_00401736;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffff68;
  local_8 = &DAT_00401200;
  local_6c = 10;
  local_64 = 0x80020004;
  local_18 = (int *)0x0;
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_3c = 0;
  local_4c[0] = 0;
  local_80[0] = 0;
  pwStack_d4 = (wchar_t *)DAT_0043302c;
  piStack_d8 = (int *)0x40fa0e;
  ExceptionList = &pvStack_14;
  iVar1 = (**(code **)(*DAT_0043302c + 0xbc))();
  if (iVar1 < 0) {
    piStack_d8 = (int *)0xbc;
    ppiStack_dc = (int **)&DAT_00402ed0;
    piStack_e0 = DAT_0043302c;
    puStack_e8 = (undefined *)0x40fa2c;
    piStack_e4 = (int *)iVar1;
    __vbaHresultCheckObj();
  }
  ppiStack_dc = &local_18;
  piStack_d8 = (int *)local_2c;
  local_2c = 0;
  piStack_e0 = (int *)0x40fa3d;
  __vbaObjSet();
  piStack_d8 = (int *)0x40fa4b;
  __vbaStrCopy();
  pwStack_d4 = (wchar_t *)0x40fa54;
  FUN_00417030(&local_24);
  pwStack_d4 = (wchar_t *)0x40fa5f;
  pwStack_d4 = (wchar_t *)__vbaStrMove();
  piStack_d8 = (int *)0x40fa66;
  rtcR8ValFromBstr();
  pwStack_d4 = (wchar_t *)0x40fa6c;
  local_20 = __vbaFpI2();
  pwStack_d4 = (wchar_t *)&local_28;
  piStack_d8 = &local_24;
  ppiStack_dc = (int **)0x2;
  piStack_e0 = (int *)0x40fa7f;
  __vbaFreeStrList();
  piStack_d8 = (int *)*param_1;
  iVar1 = *local_18;
  pwStack_d4 = L"Name = \'";
  ppiStack_dc = (int **)0x40fa98;
  __vbaStrCat();
  pwStack_d4 = L"桐㡴@ᗿာ@킋䶍ￜక䀑倀䖋僬鏿Ô";
  pwStack_d4 = (wchar_t *)__vbaStrMove();
  piStack_d8 = (int *)&DAT_00403874;
  ppiStack_dc = (int **)0x40faaf;
  __vbaStrCat();
  pwStack_d4 = L"譐\xec45ｐ풓";
  pwStack_d4 = (wchar_t *)__vbaStrMove();
  piStack_d8 = local_18;
  ppiStack_dc = (int **)0x40fac5;
  puStack_e8 = (undefined *)(**(code **)(iVar1 + 0xd4))();
  pcVar5 = __vbaHresultCheckObj_exref;
  if ((int)puStack_e8 < 0) {
    ppiStack_dc = (int **)0xd4;
    piStack_e0 = (int *)&DAT_00403434;
    piStack_e4 = local_18;
    pwStack_ec = 
    L"۫ᶋး@喍跜\xe045偒ɪᗿე@䖋菬ೄ喍讄刈ｐ屑삅\xe2db๽䶋櫬桜㐴@偑폿荦葽ༀ펅"
    ;
    __vbaHresultCheckObj();
  }
  ppiStack_dc = (int **)&local_28;
  piStack_e0 = &local_24;
  piStack_e4 = (int *)0x2;
  puStack_e8 = (undefined *)0x40fafa;
  __vbaFreeStrList();
  ppiStack_dc = (int **)local_80;
  piStack_e0 = local_18;
  piStack_e4 = (int *)0x40fb0a;
  iVar1 = (**(code **)(*local_18 + 0x5c))();
  if (iVar1 < 0) {
    piStack_e4 = (int *)0x5c;
    puStack_e8 = &DAT_00403434;
    pwStack_ec = (wchar_t *)local_18;
    iStack_f4 = 0x40fb1e;
    piStack_f0 = (int *)iVar1;
    __vbaHresultCheckObj();
  }
  if ((short)local_80[0] == 0) {
    piStack_e4 = local_18;
    puStack_e8 = (undefined *)0x40fb35;
    iVar1 = (**(code **)(*local_18 + 0xd0))();
    if (iVar1 < 0) {
      puStack_e8 = (undefined *)0xd0;
      pwStack_ec = L"1";
      piStack_f0 = local_18;
      uStack_f8 = 0x40fb4c;
      iStack_f4 = iVar1;
      __vbaHresultCheckObj();
    }
    puStack_e8 = (undefined *)*param_1;
    pwStack_ec = L"(old)";
    piStack_f0 = (int *)0x40fb5d;
    pwStack_ec = (wchar_t *)__vbaStrCat();
    local_3c = 8;
    iStack_f4 = 8;
    piStack_f0 = (int *)local_38;
    puStack_e8 = (undefined *)local_30;
    uStack_104 = 8;
    pwStack_fc = L"name";
    piStack_108 = local_18;
    uStack_10c = 0x40fba7;
    local_34 = (int *)pwStack_ec;
    iVar1 = (**(code **)(*local_18 + 0x128))();
    pcVar5 = __vbaHresultCheckObj_exref;
    if (iVar1 < 0) {
      uStack_10c = 0x128;
      piStack_110 = (int *)&DAT_00403434;
      piStack_114 = local_18;
      uStack_11c = 0x40fbc4;
      iStack_118 = iVar1;
      __vbaHresultCheckObj();
    }
    uStack_10c = 0x40fbd5;
    __vbaFreeVar();
    piStack_108 = (int *)0x0;
    uStack_10c = 1;
    piStack_110 = local_18;
    piStack_114 = (int *)0x40fbe5;
    iVar1 = (**(code **)(*local_18 + 0x164))();
    if (iVar1 < 0) {
      piStack_e4 = (int *)0x164;
      puStack_e8 = &DAT_00403434;
      pwStack_ec = (wchar_t *)local_18;
      iStack_f4 = 0x40fbfc;
      piStack_f0 = (int *)iVar1;
      __vbaHresultCheckObj();
    }
  }
  piStack_e4 = local_18;
  puStack_e8 = (undefined *)0x40fc08;
  iStack_f4 = (**(code **)(*local_18 + 0xc0))();
  if (iStack_f4 < 0) {
    puStack_e8 = (undefined *)0xc0;
    pwStack_ec = L"1";
    piStack_f0 = local_18;
    uStack_f8 = 0x40fc1f;
    (*pcVar5)();
  }
  local_6c = 2;
  local_64 = CONCAT22(local_64._2_2_,(undefined2)local_20);
  iStack_f4 = 2;
  piStack_f0 = (int *)local_68;
  pwStack_ec = (wchar_t *)local_64;
  puStack_e8 = (undefined *)local_60;
  uStack_104 = 8;
  pwStack_fc = L"stage";
  piStack_108 = local_18;
  uStack_10c = 0x40fc71;
  iStack_118 = (**(code **)(*local_18 + 0x128))();
  if (iStack_118 < 0) {
    uStack_10c = 0x128;
    piStack_110 = (int *)&DAT_00403434;
    piStack_114 = local_18;
    uStack_11c = 0x40fc8c;
    __vbaHresultCheckObj();
  }
  piStack_110 = (int *)*param_1;
  local_6c = 8;
  iStack_118 = 8;
  piStack_114 = (int *)local_68;
  uStack_10c = local_60;
  uStack_128 = 8;
  pwStack_120 = L"name";
  piStack_12c = local_18;
  uStack_130 = 0x40fcdb;
  local_64 = piStack_110;
  iStack_13c = (**(code **)(*local_18 + 0x128))();
  if (iStack_13c < 0) {
    uStack_130 = 0x128;
    puStack_134 = &DAT_00403434;
    piStack_138 = local_18;
    uStack_140 = 0x40fcf6;
    __vbaHresultCheckObj();
  }
  local_64 = CONCAT22(local_64._2_2_,*param_2);
  local_6c = 0xb;
  iStack_13c = 0xb;
  piStack_138 = (int *)local_68;
  puStack_134 = (undefined *)local_64;
  uStack_130 = local_60;
  uStack_14c = 8;
  pwStack_144 = L"fixed";
  piStack_150 = local_18;
  uStack_154 = 0x40fd4a;
  iVar1 = (**(code **)(*local_18 + 0x128))();
  if (iVar1 < 0) {
    uStack_154 = 0x128;
    puStack_158 = &DAT_00403434;
    piStack_15c = local_18;
    pwStack_164 = L"ᶋဌ@䶍ﾘ诓၅喋菬წ警레\v";
    iStack_160 = iVar1;
    __vbaHresultCheckObj();
  }
  uStack_154 = 0x40fd70;
  __vbaFreeVar();
  local_64 = CONCAT22(local_64._2_2_,*param_3);
  local_6c = 0xb;
  piStack_15c = (int *)0xb;
  puStack_158 = (undefined *)local_68;
  uStack_154 = local_64;
  piStack_150 = (int *)local_60;
  uStack_16c = 8;
  pwStack_164 = L"cartesian";
  piStack_170 = local_18;
  uStack_174 = 0x40fdc4;
  iVar1 = (**(code **)(*local_18 + 0x128))();
  if (iVar1 < 0) {
    uStack_174 = 0x128;
    puStack_178 = &DAT_00403434;
    piStack_17c = local_18;
    pwStack_184 = L"䶍ﾘ诓ᑕ䶋菬წ䗇ࢨ";
    iStack_180 = iVar1;
    __vbaHresultCheckObj();
  }
  uStack_174 = 0x40fde4;
  __vbaFreeVar();
  local_5c = 8;
  local_64 = CONCAT22(local_64._2_2_,*param_4);
  local_6c = 0xb;
  piStack_17c = (int *)0xb;
  puStack_178 = (undefined *)local_68;
  uStack_174 = local_64;
  piStack_170 = (int *)local_60;
  uStack_18c = 8;
  pwStack_184 = L"sideTilt";
  piStack_190 = local_18;
  uStack_194 = 0x40fe3d;
  iVar1 = (**(code **)(*local_18 + 0x128))();
  if (iVar1 < 0) {
    uStack_194 = 0x128;
    puStack_198 = &DAT_00403434;
    piStack_19c = local_18;
    pwStack_1a4 = L"䶍ﾘ诓ᡅ\xec83謐맜\x04";
    iStack_1a0 = iVar1;
    __vbaHresultCheckObj();
  }
  uStack_194 = 0x40fe5d;
  __vbaFreeVar();
  uStack_194 = *param_5;
  local_6c = 4;
  piStack_19c = (int *)0x4;
  puStack_198 = (undefined *)local_68;
  piStack_190 = (int *)local_60;
  uStack_1ac = 8;
  pwStack_1a4 = L"RotCentreX";
  piStack_1b0 = local_18;
  uStack_1b4 = 0x40feac;
  local_64 = uStack_194;
  iStack_1c0 = (**(code **)(*local_18 + 0x128))();
  if (iStack_1c0 < 0) {
    uStack_1b4 = 0x128;
    puStack_1b8 = &DAT_00403434;
    piStack_1bc = local_18;
    __vbaHresultCheckObj();
  }
  puStack_1b8 = (undefined *)*param_6;
  local_6c = 4;
  iStack_1c0 = 4;
  piStack_1bc = (int *)local_68;
  uStack_1b4 = local_60;
  local_64 = puStack_1b8;
  iVar1 = (**(code **)(*local_18 + 0x128))();
  pcVar5 = __vbaHresultCheckObj_exref;
  if (iVar1 < 0) {
    pcStack_1e8 = (code *)0x40ff33;
    __vbaHresultCheckObj();
  }
  piVar2 = (int *)(**(code **)(*local_18 + 0x164))();
  if ((int)piVar2 < 0) {
    pcStack_1e8 = (code *)&DAT_00403434;
    piStack_1ec = local_18;
    puStack_1f4 = (undefined4 *)0x40ff62;
    piStack_1f0 = piVar2;
    __vbaHresultCheckObj();
  }
  pcStack_1e8 = (code *)0x40ff6e;
  puVar3 = (undefined4 *)(**(code **)(*local_18 + 0xc4))();
  if ((int)puVar3 < 0) {
    pcStack_1e8 = (code *)0xc4;
    piStack_1ec = (int *)&DAT_00403434;
    piStack_1f0 = local_18;
    puStack_1f8 = (undefined4 *)0x40ff85;
    puStack_1f4 = puVar3;
    __vbaHresultCheckObj();
  }
  pcStack_1e8 = (code *)&local_3c;
  local_1c = local_20;
  if (SCARRY2((short)local_20,1)) {
    pcStack_1e8 = FUN_00410060;
    __vbaErrorOverflow();
    piStack_1f0 = (int *)&DAT_00401736;
    puStack_1f4 = ExceptionList;
    pcStack_2bc = pcVar5;
    piStack_1ec = (int *)auStack_2c0;
    pcStack_1e8 = (code *)&DAT_00401210;
    uStack_23c = 10;
    uStack_234 = 0x80020004;
    puStack_1f8 = (undefined4 *)0x0;
    piStack_1fc = (int *)0x0;
    uStack_200 = 0;
    piStack_204 = (int *)0x0;
    piStack_208 = (int *)0x0;
    uStack_20c = 0;
    auStack_21c[0] = 0;
    ExceptionList = &puStack_1f4;
    puStack_2b8 = (undefined1 *)&iStack_1c0;
    iVar1 = (**(code **)(*DAT_0043302c + 0x6c))
                      (DAT_0043302c,8,uStack_228,L"Stage",uStack_220,10,uStack_238,0x80020004,
                       uStack_230,10,uStack_248,0x80020004,uStack_240,10,uStack_258,0x80020004,
                       uStack_250,&piStack_208);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,DAT_0043302c,&DAT_00402ed0,0x6c);
    }
    piVar2 = piStack_208;
    piStack_208 = (int *)0x0;
    __vbaObjSet(&piStack_204,piVar2);
    uStack_244 = 0x80020004;
    uStack_23c = 3;
    uStack_22c = 8;
    pwStack_224 = L"Stage";
    iVar1 = (**(code **)(*piStack_204 + 0x70))
                      (piStack_204,8,uStack_228,L"Stage",uStack_220,3,uStack_238,3,uStack_230,10,
                       uStack_248,0x80020004,uStack_240,&piStack_208);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piStack_204,&DAT_004034d0,0x70);
    }
    piVar2 = piStack_208;
    piStack_208 = (int *)0x0;
    __vbaObjSet(&uStack_200,piVar2);
    iVar1 = (**(code **)(*piStack_204 + 0x60))(piStack_204,&piStack_208);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piStack_204,&DAT_004034d0,0x60);
    }
    piStack_264 = piStack_208;
    iVar1 = *piStack_208;
    uVar4 = __vbaObjSetAddref(&uStack_20c,uStack_200);
    piVar2 = piStack_264;
    iVar1 = (**(code **)(iVar1 + 0x28))(piStack_264,uVar4);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piVar2,&DAT_004034e0,0x28);
    }
    __vbaFreeObjList(2,&uStack_20c,&piStack_208);
    iVar1 = (**(code **)(*piStack_204 + 0x70))
                      (piStack_204,8,uStack_228,L"Name",uStack_220,3,uStack_238,10,uStack_230,2,
                       uStack_248,0x1e,uStack_240,&piStack_208);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piStack_204,&DAT_004034d0,0x70);
    }
    piVar2 = piStack_208;
    piStack_208 = (int *)0x0;
    __vbaObjSet(&uStack_200,piVar2);
    iVar1 = (**(code **)(*piStack_204 + 0x60))(piStack_204,&piStack_208);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piStack_204,&DAT_004034d0,0x60);
    }
    piStack_264 = piStack_208;
    iVar1 = *piStack_208;
    uVar4 = __vbaObjSetAddref(&uStack_20c,uStack_200);
    piVar2 = piStack_264;
    iVar1 = (**(code **)(iVar1 + 0x28))(piStack_264,uVar4);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piVar2,&DAT_004034e0,0x28);
    }
    __vbaFreeObjList(2,&uStack_20c,&piStack_208);
    iVar1 = (**(code **)(*piStack_204 + 0x70))
                      (piStack_204,8,uStack_228,L"Fixed",uStack_220,3,uStack_238,1,uStack_230,10,
                       uStack_248,0x80020004,uStack_240,&piStack_208);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piStack_204,&DAT_004034d0,0x70);
    }
    piVar2 = piStack_208;
    piStack_208 = (int *)0x0;
    __vbaObjSet(&uStack_200,piVar2);
    iVar1 = (**(code **)(*piStack_204 + 0x60))(piStack_204,&piStack_208);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piStack_204,&DAT_004034d0,0x60);
    }
    piStack_264 = piStack_208;
    iVar1 = *piStack_208;
    uVar4 = __vbaObjSetAddref(&uStack_20c,uStack_200);
    piVar2 = piStack_264;
    iVar1 = (**(code **)(iVar1 + 0x28))(piStack_264,uVar4);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piVar2,&DAT_004034e0,0x28);
    }
    __vbaFreeObjList(2,&uStack_20c,&piStack_208);
    iVar1 = (**(code **)(*piStack_204 + 0x70))
                      (piStack_204,8,uStack_228,L"Cartesian",uStack_220,3,uStack_238,1,uStack_230,10
                       ,uStack_248,0x80020004,uStack_240,&piStack_208);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piStack_204,&DAT_004034d0,0x70);
    }
    piVar2 = piStack_208;
    piStack_208 = (int *)0x0;
    __vbaObjSet(&uStack_200,piVar2);
    iVar1 = (**(code **)(*piStack_204 + 0x60))(piStack_204,&piStack_208);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piStack_204,&DAT_004034d0,0x60);
    }
    piStack_264 = piStack_208;
    iVar1 = *piStack_208;
    uVar4 = __vbaObjSetAddref(&uStack_20c,uStack_200);
    piVar2 = piStack_264;
    iVar1 = (**(code **)(iVar1 + 0x28))(piStack_264,uVar4);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piVar2,&DAT_004034e0,0x28);
    }
    __vbaFreeObjList(2,&uStack_20c,&piStack_208);
    iVar1 = (**(code **)(*piStack_204 + 0x70))
                      (piStack_204,8,uStack_228,L"SideTilt",uStack_220,3,uStack_238,1,uStack_230,10,
                       uStack_248,0x80020004,uStack_240,&piStack_208);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piStack_204,&DAT_004034d0,0x70);
    }
    piVar2 = piStack_208;
    piStack_208 = (int *)0x0;
    __vbaObjSet(&uStack_200,piVar2);
    iVar1 = (**(code **)(*piStack_204 + 0x60))(piStack_204,&piStack_208);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piStack_204,&DAT_004034d0,0x60);
    }
    piStack_264 = piStack_208;
    iVar1 = *piStack_208;
    uVar4 = __vbaObjSetAddref(&uStack_20c,uStack_200);
    piVar2 = piStack_264;
    iVar1 = (**(code **)(iVar1 + 0x28))(piStack_264,uVar4);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piVar2,&DAT_004034e0,0x28);
    }
    __vbaFreeObjList(2,&uStack_20c,&piStack_208);
    iVar1 = (**(code **)(*piStack_204 + 0x70))
                      (piStack_204,8,uStack_228,L"RotCentreX",uStack_220,3,uStack_238,6,uStack_230,
                       10,uStack_248,0x80020004,uStack_240,&piStack_208);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piStack_204,&DAT_004034d0,0x70);
    }
    piVar2 = piStack_208;
    piStack_208 = (int *)0x0;
    __vbaObjSet(&uStack_200,piVar2);
    iVar1 = (**(code **)(*piStack_204 + 0x60))(piStack_204,&piStack_208);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piStack_204,&DAT_004034d0,0x60);
    }
    piStack_264 = piStack_208;
    iVar1 = *piStack_208;
    uVar4 = __vbaObjSetAddref(&uStack_20c,uStack_200);
    piVar2 = piStack_264;
    iVar1 = (**(code **)(iVar1 + 0x28))(piStack_264,uVar4);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piVar2,&DAT_004034e0,0x28);
    }
    __vbaFreeObjList(2,&uStack_20c,&piStack_208);
    iVar1 = (**(code **)(*piStack_204 + 0x70))
                      (piStack_204,8,uStack_228,L"RotCentreY",uStack_220,3,uStack_238,6,uStack_230,
                       10,uStack_248,0x80020004,uStack_240,&piStack_208);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piStack_204,&DAT_004034d0,0x70);
    }
    piVar2 = piStack_208;
    piStack_208 = (int *)0x0;
    __vbaObjSet(&uStack_200,piVar2);
    iVar1 = (**(code **)(*piStack_204 + 0x60))(piStack_204,&piStack_208);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piStack_204,&DAT_004034d0,0x60);
    }
    piStack_264 = piStack_208;
    iVar1 = *piStack_208;
    uVar4 = __vbaObjSetAddref(&uStack_20c,uStack_200);
    piVar2 = piStack_264;
    iVar1 = (**(code **)(iVar1 + 0x28))(piStack_264,uVar4);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piVar2,&DAT_004034e0,0x28);
    }
    __vbaFreeObjList(2,&uStack_20c,&piStack_208);
    iVar1 = (**(code **)(*DAT_0043302c + 0x44))(DAT_0043302c,&piStack_208);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,DAT_0043302c,&DAT_00402ed0,0x44);
    }
    piStack_264 = piStack_208;
    iVar1 = *piStack_208;
    uVar4 = __vbaObjSetAddref(&uStack_20c,piStack_204);
    piVar2 = piStack_264;
    iVar1 = (**(code **)(iVar1 + 0x28))(piStack_264,uVar4);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piVar2,&DAT_004034e0,0x28);
    }
    __vbaFreeObjList(2,&uStack_20c,&piStack_208);
    iVar1 = (**(code **)(*piStack_204 + 0x74))
                      (piStack_204,8,uStack_228,L"primarykey",uStack_220,&piStack_208);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piStack_204,&DAT_004034d0,0x74);
    }
    piVar2 = piStack_208;
    piStack_208 = (int *)0x0;
    __vbaObjSet(&piStack_1fc,piVar2);
    uStack_23c = 10;
    uStack_234 = 0x80020004;
    uStack_22c = 8;
    iVar1 = (**(code **)(*piStack_1fc + 0x60))
                      (piStack_1fc,8,uStack_228,L"Stage",uStack_220,10,uStack_238,0x80020004,
                       uStack_230,10,uStack_248,0x80020004,uStack_240,&piStack_208);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piStack_1fc,&DAT_004035cc,0x60);
    }
    piVar2 = piStack_208;
    piStack_208 = (int *)0x0;
    __vbaObjSet(&uStack_200,piVar2);
    iVar1 = (**(code **)(*piStack_1fc + 0x50))(piStack_1fc,0xffffffff);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piStack_1fc,&DAT_004035cc,0x50);
    }
    iVar1 = (**(code **)(*piStack_1fc + 0x40))(piStack_1fc,0xffffffff);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piStack_1fc,&DAT_004035cc,0x40);
    }
    iVar1 = (**(code **)(*piStack_1fc + 0x30))(piStack_1fc,0xffffffff);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piStack_1fc,&DAT_004035cc,0x30);
    }
    __vbaObjSetAddref(&piStack_208,uStack_200);
    ppiVar9 = &piStack_208;
    piVar2 = piStack_1fc;
    iVar1 = (**(code **)(*piStack_1fc + 0x58))(piStack_1fc,auStack_21c);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piStack_1fc,&DAT_004035cc,0x58);
    }
    uVar7 = 1;
    pwVar6 = L"Append";
    uVar8 = 0x4009;
    uVar4 = __vbaObjVar(auStack_21c);
    __vbaLateMemCall(uVar4,pwVar6,uVar7,uVar8,uStack_228,ppiVar9,uStack_220);
    uVar4 = __vbaCastObj(piStack_208,&DAT_004035dc);
    __vbaObjSet(&uStack_200,uVar4);
    __vbaFreeObj();
    __vbaFreeVar(piVar2);
    iVar1 = (**(code **)(*piStack_204 + 100))(piStack_204,&piStack_208);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piStack_204,&DAT_004034d0,100);
    }
    piVar2 = piStack_208;
    iVar1 = *piStack_208;
    uVar4 = __vbaObjSetAddref(&uStack_20c,piStack_1fc);
    iVar1 = (**(code **)(iVar1 + 0x28))(piVar2,uVar4);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piVar2,&DAT_004034e0,0x28);
    }
    __vbaFreeObjList(2,&uStack_20c,&piStack_208);
    __vbaFreeObj(&LAB_00410b92);
    __vbaFreeObj();
    __vbaFreeObj();
    __vbaFreeObj();
    return;
  }
  local_34 = (int *)CONCAT22(local_34._2_2_,(short)local_20 + 1);
  piStack_1ec = local_4c;
  local_3c = 2;
  piStack_1f0 = (int *)0x40ffae;
  rtcVarStrFromVar();
  pcStack_1e8 = (code *)local_4c;
  piStack_1ec = (int *)0x40ffb8;
  __vbaStrVarMove();
  pcStack_1e8 = (code *)0x40ffc3;
  __vbaStrMove();
  pcStack_1e8 = (code *)0x40ffd1;
  __vbaStrCopy();
  pcStack_1e8 = (code *)0x40ffde;
  FUN_00417400(&local_24,&local_28);
  pcStack_1e8 = (code *)&local_28;
  piStack_1ec = &local_24;
  piStack_1f0 = (int *)0x2;
  puStack_1f4 = (undefined4 *)0x40ffee;
  __vbaFreeStrList();
  puStack_1f4 = local_4c;
  puStack_1f8 = &local_3c;
  piStack_1fc = (int *)0x2;
  uStack_200 = 0x40fffe;
  __vbaFreeVarList();
  pcStack_1e8 = (code *)&LAB_00410043;
  piStack_1ec = (int *)0x410042;
  __vbaFreeObj();
  return;
}


// ---- FUN_00410060 @ 00410060

void FUN_00410060(void)

{
  int iVar1;
  undefined4 uVar2;
  wchar_t *pwVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 local_3c [4];
  undefined4 local_2c;
  int *local_28;
  int *local_24;
  undefined4 local_20;
  int *local_1c;
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_00401736;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffff20;
  local_8 = &DAT_00401210;
  local_18 = 0;
  local_1c = (int *)0x0;
  local_20 = 0;
  local_24 = (int *)0x0;
  local_28 = (int *)0x0;
  local_2c = 0;
  local_3c[0] = 0;
  ExceptionList = &pvStack_14;
  iVar1 = (**(code **)(*DAT_0043302c + 0x6c))(DAT_0043302c,8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,DAT_0043302c,&DAT_00402ed0,0x6c);
  }
  piVar6 = local_28;
  local_28 = (int *)0x0;
  __vbaObjSet(&local_24,piVar6);
  iVar1 = (**(code **)(*local_24 + 0x70))(local_24,8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_24,&DAT_004034d0,0x70);
  }
  piVar6 = local_28;
  local_28 = (int *)0x0;
  __vbaObjSet(&local_20,piVar6);
  iVar1 = (**(code **)(*local_24 + 0x60))(local_24,&local_28);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_24,&DAT_004034d0,0x60);
  }
  piVar6 = local_28;
  iVar1 = *local_28;
  uVar2 = __vbaObjSetAddref(&local_2c,local_20);
  iVar1 = (**(code **)(iVar1 + 0x28))(piVar6,uVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar6,&DAT_004034e0,0x28);
  }
  __vbaFreeObjList(2,&local_2c,&local_28);
  iVar1 = (**(code **)(*local_24 + 0x70))(local_24,8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_24,&DAT_004034d0,0x70);
  }
  piVar6 = local_28;
  local_28 = (int *)0x0;
  __vbaObjSet(&local_20,piVar6);
  iVar1 = (**(code **)(*local_24 + 0x60))(local_24,&local_28);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_24,&DAT_004034d0,0x60);
  }
  piVar6 = local_28;
  iVar1 = *local_28;
  uVar2 = __vbaObjSetAddref(&local_2c,local_20);
  iVar1 = (**(code **)(iVar1 + 0x28))(piVar6,uVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar6,&DAT_004034e0,0x28);
  }
  __vbaFreeObjList(2,&local_2c,&local_28);
  iVar1 = (**(code **)(*local_24 + 0x70))(local_24,8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_24,&DAT_004034d0,0x70);
  }
  piVar6 = local_28;
  local_28 = (int *)0x0;
  __vbaObjSet(&local_20,piVar6);
  iVar1 = (**(code **)(*local_24 + 0x60))(local_24,&local_28);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_24,&DAT_004034d0,0x60);
  }
  piVar6 = local_28;
  iVar1 = *local_28;
  uVar2 = __vbaObjSetAddref(&local_2c,local_20);
  iVar1 = (**(code **)(iVar1 + 0x28))(piVar6,uVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar6,&DAT_004034e0,0x28);
  }
  __vbaFreeObjList(2,&local_2c,&local_28);
  iVar1 = (**(code **)(*local_24 + 0x70))(local_24,8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_24,&DAT_004034d0,0x70);
  }
  piVar6 = local_28;
  local_28 = (int *)0x0;
  __vbaObjSet(&local_20,piVar6);
  iVar1 = (**(code **)(*local_24 + 0x60))(local_24,&local_28);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_24,&DAT_004034d0,0x60);
  }
  piVar6 = local_28;
  iVar1 = *local_28;
  uVar2 = __vbaObjSetAddref(&local_2c,local_20);
  iVar1 = (**(code **)(iVar1 + 0x28))(piVar6,uVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar6,&DAT_004034e0,0x28);
  }
  __vbaFreeObjList(2,&local_2c,&local_28);
  iVar1 = (**(code **)(*local_24 + 0x70))(local_24,8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_24,&DAT_004034d0,0x70);
  }
  piVar6 = local_28;
  local_28 = (int *)0x0;
  __vbaObjSet(&local_20,piVar6);
  iVar1 = (**(code **)(*local_24 + 0x60))(local_24,&local_28);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_24,&DAT_004034d0,0x60);
  }
  piVar6 = local_28;
  iVar1 = *local_28;
  uVar2 = __vbaObjSetAddref(&local_2c,local_20);
  iVar1 = (**(code **)(iVar1 + 0x28))(piVar6,uVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar6,&DAT_004034e0,0x28);
  }
  __vbaFreeObjList(2,&local_2c,&local_28);
  iVar1 = (**(code **)(*local_24 + 0x70))(local_24,8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_24,&DAT_004034d0,0x70);
  }
  piVar6 = local_28;
  local_28 = (int *)0x0;
  __vbaObjSet(&local_20,piVar6);
  iVar1 = (**(code **)(*local_24 + 0x60))(local_24,&local_28);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_24,&DAT_004034d0,0x60);
  }
  piVar6 = local_28;
  iVar1 = *local_28;
  uVar2 = __vbaObjSetAddref(&local_2c,local_20);
  iVar1 = (**(code **)(iVar1 + 0x28))(piVar6,uVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar6,&DAT_004034e0,0x28);
  }
  __vbaFreeObjList(2,&local_2c,&local_28);
  iVar1 = (**(code **)(*local_24 + 0x70))(local_24,8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_24,&DAT_004034d0,0x70);
  }
  piVar6 = local_28;
  local_28 = (int *)0x0;
  __vbaObjSet(&local_20,piVar6);
  iVar1 = (**(code **)(*local_24 + 0x60))(local_24,&local_28);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_24,&DAT_004034d0,0x60);
  }
  piVar6 = local_28;
  iVar1 = *local_28;
  uVar2 = __vbaObjSetAddref(&local_2c,local_20);
  iVar1 = (**(code **)(iVar1 + 0x28))(piVar6,uVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar6,&DAT_004034e0,0x28);
  }
  __vbaFreeObjList(2,&local_2c,&local_28);
  iVar1 = (**(code **)(*DAT_0043302c + 0x44))(DAT_0043302c,&local_28);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,DAT_0043302c,&DAT_00402ed0,0x44);
  }
  piVar6 = local_28;
  iVar1 = *local_28;
  uVar2 = __vbaObjSetAddref(&local_2c,local_24);
  iVar1 = (**(code **)(iVar1 + 0x28))(piVar6,uVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar6,&DAT_004034e0,0x28);
  }
  __vbaFreeObjList(2,&local_2c,&local_28);
  iVar1 = (**(code **)(*local_24 + 0x74))(local_24,8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_24,&DAT_004034d0,0x74);
  }
  piVar6 = local_28;
  local_28 = (int *)0x0;
  __vbaObjSet(&local_1c,piVar6);
  iVar1 = (**(code **)(*local_1c + 0x60))(local_1c,8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c,&DAT_004035cc,0x60);
  }
  piVar6 = local_28;
  local_28 = (int *)0x0;
  __vbaObjSet(&local_20,piVar6);
  iVar1 = (**(code **)(*local_1c + 0x50))(local_1c,0xffffffff);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c,&DAT_004035cc,0x50);
  }
  iVar1 = (**(code **)(*local_1c + 0x40))(local_1c,0xffffffff);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c,&DAT_004035cc,0x40);
  }
  iVar1 = (**(code **)(*local_1c + 0x30))(local_1c,0xffffffff);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c,&DAT_004035cc,0x30);
  }
  __vbaObjSetAddref(&local_28,local_20);
  piVar6 = local_1c;
  iVar1 = (**(code **)(*local_1c + 0x58))(local_1c,local_3c);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c,&DAT_004035cc,0x58);
  }
  uVar4 = 1;
  pwVar3 = L"Append";
  uVar5 = 0x4009;
  uVar2 = __vbaObjVar(local_3c);
  __vbaLateMemCall(uVar2,pwVar3,uVar4,uVar5);
  uVar2 = __vbaCastObj(local_28,&DAT_004035dc);
  __vbaObjSet(&local_20,uVar2);
  __vbaFreeObj();
  __vbaFreeVar(piVar6);
  iVar1 = (**(code **)(*local_24 + 100))(local_24,&local_28);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_24,&DAT_004034d0,100);
  }
  piVar6 = local_28;
  iVar1 = *local_28;
  uVar2 = __vbaObjSetAddref(&local_2c,local_1c);
  iVar1 = (**(code **)(iVar1 + 0x28))(piVar6,uVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar6,&DAT_004034e0,0x28);
  }
  __vbaFreeObjList(2,&local_2c,&local_28);
  __vbaFreeObj(&LAB_00410b92);
  __vbaFreeObj();
  __vbaFreeObj();
  __vbaFreeObj();
  return;
}


// ---- FUN_00410bb0 @ 00410bb0

void FUN_00410bb0(void)

{
  int iVar1;
  int *local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_00401736;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffff9c;
  local_8 = &DAT_00401220;
  local_18 = (int *)0x0;
  ExceptionList = &pvStack_14;
  iVar1 = (**(code **)(*DAT_0043302c + 0xbc))(DAT_0043302c,L"Axis",3);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,DAT_0043302c,&DAT_00402ed0,0xbc);
  }
  __vbaObjSet(&local_18,0);
  iVar1 = (**(code **)(*local_18 + 0xc0))(local_18);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_18,&DAT_00403434,0xc0);
  }
  iVar1 = (**(code **)(*local_18 + 0x128))(local_18,8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_18,&DAT_00403434,0x128);
  }
  iVar1 = (**(code **)(*local_18 + 0x128))(local_18,8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_18,&DAT_00403434,0x128);
  }
  iVar1 = (**(code **)(*local_18 + 0x128))(local_18,8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_18,&DAT_00403434,0x128);
  }
  iVar1 = (**(code **)(*local_18 + 0x128))(local_18,8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_18,&DAT_00403434,0x128);
  }
  iVar1 = (**(code **)(*local_18 + 0x128))(local_18,8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_18,&DAT_00403434,0x128);
  }
  iVar1 = (**(code **)(*local_18 + 0x128))(local_18,8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_18,&DAT_00403434,0x128);
  }
  iVar1 = (**(code **)(*local_18 + 0x128))(local_18,8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_18,&DAT_00403434,0x128);
  }
  iVar1 = (**(code **)(*local_18 + 0x128))(local_18,8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_18,&DAT_00403434,0x128);
  }
  iVar1 = (**(code **)(*local_18 + 0x128))(local_18,8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_18,&DAT_00403434,0x128);
  }
  iVar1 = (**(code **)(*local_18 + 0x128))(local_18,8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_18,&DAT_00403434,0x128);
  }
  iVar1 = (**(code **)(*local_18 + 0x128))(local_18,8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_18,&DAT_00403434,0x128);
  }
  iVar1 = (**(code **)(*local_18 + 0x128))(local_18,8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_18,&DAT_00403434,0x128);
  }
  iVar1 = (**(code **)(*local_18 + 0x128))(local_18,8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_18,&DAT_00403434,0x128);
  }
  iVar1 = (**(code **)(*local_18 + 0x128))(local_18,8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_18,&DAT_00403434,0x128);
  }
  iVar1 = (**(code **)(*local_18 + 0x128))(local_18,8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_18,&DAT_00403434,0x128);
  }
  iVar1 = (**(code **)(*local_18 + 0x128))(local_18,8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_18,&DAT_00403434,0x128);
  }
  iVar1 = (**(code **)(*local_18 + 0x164))(local_18,1,0);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_18,&DAT_00403434,0x164);
  }
  iVar1 = (**(code **)(*local_18 + 0xc4))(local_18);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_18,&DAT_00403434,0xc4);
  }
  __vbaFreeObj(&LAB_004113a1);
  return;
}


// ---- FUN_004113c0 @ 004113c0

void FUN_004113c0(void)

{
  int iVar1;
  int *piVar2;
  int *local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_00401736;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffff9c;
  local_8 = &DAT_00401230;
  local_18 = (int *)0x0;
  ExceptionList = &pvStack_14;
  iVar1 = (**(code **)(*DAT_0043302c + 0xbc))(DAT_0043302c,L"AxisRule",3);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,DAT_0043302c,&DAT_00402ed0,0xbc);
  }
  __vbaObjSet(&local_18,0);
  iVar1 = (**(code **)(*local_18 + 0xc0))(local_18);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_18,&DAT_00403434,0xc0);
  }
  iVar1 = (**(code **)(*local_18 + 0x128))(local_18,8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_18,&DAT_00403434,0x128);
  }
  iVar1 = (**(code **)(*local_18 + 0x128))(local_18,8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_18,&DAT_00403434,0x128);
  }
  piVar2 = local_18;
  iVar1 = (**(code **)(*local_18 + 0x128))(local_18,8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_18,&DAT_00403434,0x128);
  }
  __vbaFreeVar(piVar2);
  iVar1 = (**(code **)(*local_18 + 0x128))(local_18,8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_18,&DAT_00403434,0x128);
  }
  piVar2 = local_18;
  iVar1 = (**(code **)(*local_18 + 0x128))(local_18,8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_18,&DAT_00403434,0x128);
  }
  __vbaFreeVar(piVar2);
  iVar1 = (**(code **)(*local_18 + 0x128))(local_18,8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_18,&DAT_00403434,0x128);
  }
  iVar1 = (**(code **)(*local_18 + 0x164))(local_18,1,0);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_18,&DAT_00403434,0x164);
  }
  iVar1 = (**(code **)(*local_18 + 0xc4))(local_18);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_18,&DAT_00403434,0xc4);
  }
  __vbaFreeObj(&LAB_004117e5);
  return;
}


// ---- FUN_00411800 @ 00411800

void FUN_00411800(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_2c;
  int *local_28;
  int *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int *local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_00401736;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffff44;
  local_8 = &DAT_00401240;
  local_18 = (int *)0x0;
  local_1c = 0;
  local_20 = 0;
  local_24 = (int *)0x0;
  local_28 = (int *)0x0;
  local_2c = 0;
  ExceptionList = &pvStack_14;
  iVar2 = (**(code **)(*DAT_0043302c + 0x6c))(DAT_0043302c,8);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,DAT_0043302c,&DAT_00402ed0,0x6c);
  }
  piVar1 = local_28;
  local_28 = (int *)0x0;
  __vbaObjSet(&local_24,piVar1);
  iVar2 = (**(code **)(*local_24 + 0x70))(local_24,8);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_24,&DAT_004034d0,0x70);
  }
  piVar1 = local_28;
  local_28 = (int *)0x0;
  __vbaObjSet(&local_20,piVar1);
  iVar2 = (**(code **)(*local_24 + 0x60))(local_24,&local_28);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_24,&DAT_004034d0,0x60);
  }
  piVar1 = local_28;
  iVar2 = *local_28;
  uVar3 = __vbaObjSetAddref(&local_2c,local_20);
  iVar2 = (**(code **)(iVar2 + 0x28))(piVar1,uVar3);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_004034e0,0x28);
  }
  __vbaFreeObjList(2,&local_2c,&local_28);
  iVar2 = (**(code **)(*local_24 + 0x70))(local_24,8);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_24,&DAT_004034d0,0x70);
  }
  piVar1 = local_28;
  local_28 = (int *)0x0;
  __vbaObjSet(&local_20,piVar1);
  iVar2 = (**(code **)(*local_24 + 0x60))(local_24,&local_28);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_24,&DAT_004034d0,0x60);
  }
  piVar1 = local_28;
  iVar2 = *local_28;
  uVar3 = __vbaObjSetAddref(&local_2c,local_20);
  iVar2 = (**(code **)(iVar2 + 0x28))(piVar1,uVar3);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_004034e0,0x28);
  }
  __vbaFreeObjList(2,&local_2c,&local_28);
  iVar2 = (**(code **)(*local_24 + 0x70))(local_24,8);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_24,&DAT_004034d0,0x70);
  }
  piVar1 = local_28;
  local_28 = (int *)0x0;
  __vbaObjSet(&local_20,piVar1);
  iVar2 = (**(code **)(*local_24 + 0x60))(local_24,&local_28);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_24,&DAT_004034d0,0x60);
  }
  piVar1 = local_28;
  iVar2 = *local_28;
  uVar3 = __vbaObjSetAddref(&local_2c,local_20);
  iVar2 = (**(code **)(iVar2 + 0x28))(piVar1,uVar3);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_004034e0,0x28);
  }
  __vbaFreeObjList(2,&local_2c,&local_28);
  iVar2 = (**(code **)(*local_24 + 0x70))(local_24,8);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_24,&DAT_004034d0,0x70);
  }
  piVar1 = local_28;
  local_28 = (int *)0x0;
  __vbaObjSet(&local_20,piVar1);
  iVar2 = (**(code **)(*local_24 + 0x60))(local_24,&local_28);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_24,&DAT_004034d0,0x60);
  }
  piVar1 = local_28;
  iVar2 = *local_28;
  uVar3 = __vbaObjSetAddref(&local_2c,local_20);
  iVar2 = (**(code **)(iVar2 + 0x28))(piVar1,uVar3);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_004034e0,0x28);
  }
  __vbaFreeObjList(2,&local_2c,&local_28);
  iVar2 = (**(code **)(*local_24 + 0x70))(local_24,8);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_24,&DAT_004034d0,0x70);
  }
  piVar1 = local_28;
  local_28 = (int *)0x0;
  __vbaObjSet(&local_20,piVar1);
  iVar2 = (**(code **)(*local_24 + 0x60))(local_24,&local_28);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_24,&DAT_004034d0,0x60);
  }
  piVar1 = local_28;
  iVar2 = *local_28;
  uVar3 = __vbaObjSetAddref(&local_2c,local_20);
  iVar2 = (**(code **)(iVar2 + 0x28))(piVar1,uVar3);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_004034e0,0x28);
  }
  __vbaFreeObjList(2,&local_2c,&local_28);
  iVar2 = (**(code **)(*DAT_0043302c + 0x44))(DAT_0043302c,&local_28);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,DAT_0043302c,&DAT_00402ed0,0x44);
  }
  piVar1 = local_28;
  iVar2 = *local_28;
  uVar3 = __vbaObjSetAddref(&local_2c,local_24);
  iVar2 = (**(code **)(iVar2 + 0x28))(piVar1,uVar3);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_004034e0,0x28);
  }
  __vbaFreeObjList(2,&local_2c,&local_28);
  iVar2 = (**(code **)(*DAT_0043302c + 0xbc))(DAT_0043302c,L"CentreRule",3);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,DAT_0043302c,&DAT_00402ed0,0xbc);
  }
  piVar1 = local_28;
  local_28 = (int *)0x0;
  __vbaObjSet(&local_18,piVar1);
  iVar2 = (**(code **)(*local_18 + 0xc0))(local_18);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0xc0);
  }
  iVar2 = (**(code **)(*local_18 + 0x128))(local_18,8);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0x128);
  }
  iVar2 = (**(code **)(*local_18 + 0x128))(local_18,8);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0x128);
  }
  iVar2 = (**(code **)(*local_18 + 0x128))(local_18,8);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0x128);
  }
  iVar2 = (**(code **)(*local_18 + 0x128))(local_18,8);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0x128);
  }
  iVar2 = (**(code **)(*local_18 + 0x128))(local_18,8);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0x128);
  }
  iVar2 = (**(code **)(*local_18 + 0x164))(local_18,1,0);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0x164);
  }
  iVar2 = (**(code **)(*local_18 + 0xc0))(local_18);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0xc0);
  }
  iVar2 = (**(code **)(*local_18 + 0x128))(local_18,8);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0x128);
  }
  iVar2 = (**(code **)(*local_18 + 0x128))(local_18,8);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0x128);
  }
  iVar2 = (**(code **)(*local_18 + 0x128))(local_18,8);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0x128);
  }
  iVar2 = (**(code **)(*local_18 + 0x128))(local_18,8);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0x128);
  }
  iVar2 = (**(code **)(*local_18 + 0x128))(local_18,8);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0x128);
  }
  iVar2 = (**(code **)(*local_18 + 0x164))(local_18,1,0);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0x164);
  }
  iVar2 = (**(code **)(*local_18 + 0xc4))(local_18);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0xc4);
  }
  __vbaFreeObj(&LAB_00412449);
  __vbaFreeObj();
  __vbaFreeObj();
  __vbaFreeObj();
  return;
}


// ---- FUN_00412460 @ 00412460

void FUN_00412460(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  int *local_28;
  int *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined1 *local_8;
  
  puStack_10 = &DAT_00401736;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffff48;
  local_8 = &LAB_00401250;
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  local_24 = (int *)0x0;
  local_28 = (int *)0x0;
  local_2c = 0;
  ExceptionList = &pvStack_14;
  iVar2 = (**(code **)(*DAT_0043302c + 0x6c))(DAT_0043302c,8);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,DAT_0043302c,&DAT_00402ed0,0x6c);
  }
  piVar1 = local_28;
  local_28 = (int *)0x0;
  __vbaObjSet(&local_24,piVar1);
  iVar2 = (**(code **)(*local_24 + 0x70))
                    (local_24,8,local_38,L"Stage",local_30,3,local_48,3,local_40,10);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_24,&DAT_004034d0,0x70);
  }
  piVar1 = local_28;
  local_28 = (int *)0x0;
  __vbaObjSet(&local_20,piVar1);
  iVar2 = (**(code **)(*local_24 + 0x60))(local_24,&local_28);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_24,&DAT_004034d0,0x60);
  }
  piVar1 = local_28;
  iVar2 = *local_28;
  uVar3 = __vbaObjSetAddref(&local_2c,local_20);
  iVar2 = (**(code **)(iVar2 + 0x28))(piVar1,uVar3);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_004034e0,0x28);
  }
  __vbaFreeObjList(2,&local_2c,&local_28);
  iVar2 = (**(code **)(*local_24 + 0x70))
                    (local_24,8,local_38,L"Axis",local_30,3,local_48,10,local_40,2);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_24,&DAT_004034d0,0x70);
  }
  piVar1 = local_28;
  local_28 = (int *)0x0;
  __vbaObjSet(&local_20,piVar1);
  iVar2 = (**(code **)(*local_24 + 0x60))(local_24,&local_28);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_24,&DAT_004034d0,0x60);
  }
  piVar1 = local_28;
  iVar2 = *local_28;
  uVar3 = __vbaObjSetAddref(&local_2c,local_20);
  iVar2 = (**(code **)(iVar2 + 0x28))(piVar1,uVar3);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_004034e0,0x28);
  }
  __vbaFreeObjList(2,&local_2c,&local_28);
  iVar2 = (**(code **)(*local_24 + 0x70))
                    (local_24,8,local_38,L"Range",local_30,3,local_48,6,local_40,10);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_24,&DAT_004034d0,0x70);
  }
  piVar1 = local_28;
  local_28 = (int *)0x0;
  __vbaObjSet(&local_20,piVar1);
  iVar2 = (**(code **)(*local_24 + 0x60))(local_24,&local_28);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_24,&DAT_004034d0,0x60);
  }
  piVar1 = local_28;
  iVar2 = *local_28;
  uVar3 = __vbaObjSetAddref(&local_2c,local_20);
  iVar2 = (**(code **)(iVar2 + 0x28))(piVar1,uVar3);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_004034e0,0x28);
  }
  __vbaFreeObjList(2,&local_2c,&local_28);
  iVar2 = (**(code **)(*local_24 + 0x70))
                    (local_24,8,local_38,&DAT_00403b30,local_30,3,local_48,1,local_40,10);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_24,&DAT_004034d0,0x70);
  }
  piVar1 = local_28;
  local_28 = (int *)0x0;
  __vbaObjSet(&local_20,piVar1);
  iVar2 = (**(code **)(*local_24 + 0x60))(local_24,&local_28);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_24,&DAT_004034d0,0x60);
  }
  piVar1 = local_28;
  iVar2 = *local_28;
  uVar3 = __vbaObjSetAddref(&local_2c,local_20);
  iVar2 = (**(code **)(iVar2 + 0x28))(piVar1,uVar3);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_004034e0,0x28);
  }
  __vbaFreeObjList(2,&local_2c,&local_28);
  iVar2 = (**(code **)(*local_24 + 0x70))
                    (local_24,8,local_38,L"Column",local_30,3,local_48,1,local_40,10);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_24,&DAT_004034d0,0x70);
  }
  piVar1 = local_28;
  local_28 = (int *)0x0;
  __vbaObjSet(&local_20,piVar1);
  iVar2 = (**(code **)(*local_24 + 0x60))(local_24,&local_28);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_24,&DAT_004034d0,0x60);
  }
  piVar1 = local_28;
  iVar2 = *local_28;
  uVar3 = __vbaObjSetAddref(&local_2c,local_20);
  iVar2 = (**(code **)(iVar2 + 0x28))(piVar1,uVar3);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_004034e0,0x28);
  }
  __vbaFreeObjList(2,&local_2c,&local_28);
  iVar2 = (**(code **)(*local_24 + 0x70))
                    (local_24,8,local_38,L"Value",local_30,3,local_48,3,local_40,10);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_24,&DAT_004034d0,0x70);
  }
  piVar1 = local_28;
  local_28 = (int *)0x0;
  __vbaObjSet(&local_20,piVar1);
  iVar2 = (**(code **)(*local_24 + 0x60))(local_24,&local_28);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_24,&DAT_004034d0,0x60);
  }
  piVar1 = local_28;
  iVar2 = *local_28;
  uVar3 = __vbaObjSetAddref(&local_2c,local_20);
  iVar2 = (**(code **)(iVar2 + 0x28))(piVar1,uVar3);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_004034e0,0x28);
  }
  __vbaFreeObjList(2,&local_2c,&local_28);
  iVar2 = (**(code **)(*DAT_0043302c + 0x44))(DAT_0043302c,&local_28);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,DAT_0043302c,&DAT_00402ed0,0x44);
  }
  piVar1 = local_28;
  iVar2 = *local_28;
  uVar3 = __vbaObjSetAddref(&local_2c,local_24);
  iVar2 = (**(code **)(iVar2 + 0x28))(piVar1,uVar3);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_004034e0,0x28);
  }
  __vbaFreeObjList(2,&local_2c,&local_28);
  __vbaFreeObj(&LAB_00412c1a);
  __vbaFreeObj();
  __vbaFreeObj();
  __vbaFreeObj();
  return;
}


// ---- FUN_00412c30 @ 00412c30

void FUN_00412c30(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  int *local_28;
  int *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_00401736;
  pvStack_14 = ExceptionList;
  local_c = &stack0xfffffef8;
  local_8 = &DAT_00401260;
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  local_24 = (int *)0x0;
  local_28 = (int *)0x0;
  local_2c = 0;
  ExceptionList = &pvStack_14;
  iVar2 = (**(code **)(*DAT_0043302c + 0x6c))(DAT_0043302c,8);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,DAT_0043302c,&DAT_00402ed0,0x6c);
  }
  piVar1 = local_28;
  local_28 = (int *)0x0;
  __vbaObjSet(&local_24,piVar1);
  iVar2 = (**(code **)(*local_24 + 0x70))
                    (local_24,8,local_38,L"Stage",local_30,3,local_48,3,local_40,10);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_24,&DAT_004034d0,0x70);
  }
  piVar1 = local_28;
  local_28 = (int *)0x0;
  __vbaObjSet(&local_20,piVar1);
  iVar2 = (**(code **)(*local_24 + 0x60))(local_24,&local_28);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_24,&DAT_004034d0,0x60);
  }
  piVar1 = local_28;
  iVar2 = *local_28;
  uVar3 = __vbaObjSetAddref(&local_2c,local_20);
  iVar2 = (**(code **)(iVar2 + 0x28))(piVar1,uVar3);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_004034e0,0x28);
  }
  __vbaFreeObjList(2,&local_2c,&local_28);
  iVar2 = (**(code **)(*local_24 + 0x70))
                    (local_24,8,local_38,L"Axis",local_30,3,local_48,10,local_40,2);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_24,&DAT_004034d0,0x70);
  }
  piVar1 = local_28;
  local_28 = (int *)0x0;
  __vbaObjSet(&local_20,piVar1);
  iVar2 = (**(code **)(*local_24 + 0x60))(local_24,&local_28);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_24,&DAT_004034d0,0x60);
  }
  piVar1 = local_28;
  iVar2 = *local_28;
  uVar3 = __vbaObjSetAddref(&local_2c,local_20);
  iVar2 = (**(code **)(iVar2 + 0x28))(piVar1,uVar3);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_004034e0,0x28);
  }
  __vbaFreeObjList(2,&local_2c,&local_28);
  iVar2 = (**(code **)(*local_24 + 0x70))
                    (local_24,8,local_38,L"StepSize",local_30,3,local_48,6,local_40,10);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_24,&DAT_004034d0,0x70);
  }
  piVar1 = local_28;
  local_28 = (int *)0x0;
  __vbaObjSet(&local_20,piVar1);
  iVar2 = (**(code **)(*local_24 + 0x60))(local_24,&local_28);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_24,&DAT_004034d0,0x60);
  }
  piVar1 = local_28;
  iVar2 = *local_28;
  uVar3 = __vbaObjSetAddref(&local_2c,local_20);
  iVar2 = (**(code **)(iVar2 + 0x28))(piVar1,uVar3);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_004034e0,0x28);
  }
  __vbaFreeObjList(2,&local_2c,&local_28);
  iVar2 = (**(code **)(*local_24 + 0x70))
                    (local_24,8,local_38,L"LowRange",local_30,3,local_48,6,local_40,10);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_24,&DAT_004034d0,0x70);
  }
  piVar1 = local_28;
  local_28 = (int *)0x0;
  __vbaObjSet(&local_20,piVar1);
  iVar2 = (**(code **)(*local_24 + 0x60))(local_24,&local_28);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_24,&DAT_004034d0,0x60);
  }
  piVar1 = local_28;
  iVar2 = *local_28;
  uVar3 = __vbaObjSetAddref(&local_2c,local_20);
  iVar2 = (**(code **)(iVar2 + 0x28))(piVar1,uVar3);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_004034e0,0x28);
  }
  __vbaFreeObjList(2,&local_2c,&local_28);
  iVar2 = (**(code **)(*local_24 + 0x70))
                    (local_24,8,local_38,L"HighRange",local_30,3,local_48,6,local_40,10);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_24,&DAT_004034d0,0x70);
  }
  piVar1 = local_28;
  local_28 = (int *)0x0;
  __vbaObjSet(&local_20,piVar1);
  iVar2 = (**(code **)(*local_24 + 0x60))(local_24,&local_28);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_24,&DAT_004034d0,0x60);
  }
  piVar1 = local_28;
  iVar2 = *local_28;
  uVar3 = __vbaObjSetAddref(&local_2c,local_20);
  iVar2 = (**(code **)(iVar2 + 0x28))(piVar1,uVar3);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_004034e0,0x28);
  }
  __vbaFreeObjList(2,&local_2c,&local_28);
  iVar2 = (**(code **)(*local_24 + 0x70))
                    (local_24,8,local_38,L"MidPoint",local_30,3,local_48,6,local_40,10);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_24,&DAT_004034d0,0x70);
  }
  piVar1 = local_28;
  local_28 = (int *)0x0;
  __vbaObjSet(&local_20,piVar1);
  iVar2 = (**(code **)(*local_24 + 0x60))(local_24,&local_28);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_24,&DAT_004034d0,0x60);
  }
  piVar1 = local_28;
  iVar2 = *local_28;
  uVar3 = __vbaObjSetAddref(&local_2c,local_20);
  iVar2 = (**(code **)(iVar2 + 0x28))(piVar1,uVar3);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_004034e0,0x28);
  }
  __vbaFreeObjList(2,&local_2c,&local_28);
  iVar2 = (**(code **)(*local_24 + 0x70))
                    (local_24,8,local_38,L"BLDistance",local_30,3,local_48,6,local_40,10);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_24,&DAT_004034d0,0x70);
  }
  piVar1 = local_28;
  local_28 = (int *)0x0;
  __vbaObjSet(&local_20,piVar1);
  iVar2 = (**(code **)(*local_24 + 0x60))(local_24,&local_28);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_24,&DAT_004034d0,0x60);
  }
  piVar1 = local_28;
  iVar2 = *local_28;
  uVar3 = __vbaObjSetAddref(&local_2c,local_20);
  iVar2 = (**(code **)(iVar2 + 0x28))(piVar1,uVar3);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_004034e0,0x28);
  }
  __vbaFreeObjList(2,&local_2c,&local_28);
  iVar2 = (**(code **)(*local_24 + 0x70))
                    (local_24,8,local_38,L"BLSpeed",local_30,3,local_48,4,local_40,10);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_24,&DAT_004034d0,0x70);
  }
  piVar1 = local_28;
  local_28 = (int *)0x0;
  __vbaObjSet(&local_20,piVar1);
  iVar2 = (**(code **)(*local_24 + 0x60))(local_24,&local_28);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_24,&DAT_004034d0,0x60);
  }
  piVar1 = local_28;
  iVar2 = *local_28;
  uVar3 = __vbaObjSetAddref(&local_2c,local_20);
  iVar2 = (**(code **)(iVar2 + 0x28))(piVar1,uVar3);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_004034e0,0x28);
  }
  __vbaFreeObjList(2,&local_2c,&local_28);
  iVar2 = (**(code **)(*local_24 + 0x70))
                    (local_24,8,local_38,L"StartSpeed",local_30,3,local_48,4,local_40,10);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_24,&DAT_004034d0,0x70);
  }
  piVar1 = local_28;
  local_28 = (int *)0x0;
  __vbaObjSet(&local_20,piVar1);
  iVar2 = (**(code **)(*local_24 + 0x60))(local_24,&local_28);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_24,&DAT_004034d0,0x60);
  }
  piVar1 = local_28;
  iVar2 = *local_28;
  uVar3 = __vbaObjSetAddref(&local_2c,local_20);
  iVar2 = (**(code **)(iVar2 + 0x28))(piVar1,uVar3);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_004034e0,0x28);
  }
  __vbaFreeObjList(2,&local_2c,&local_28);
  iVar2 = (**(code **)(*local_24 + 0x70))
                    (local_24,8,local_38,L"Acceleration",local_30,3,local_48,4,local_40,10);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_24,&DAT_004034d0,0x70);
  }
  piVar1 = local_28;
  local_28 = (int *)0x0;
  __vbaObjSet(&local_20,piVar1);
  iVar2 = (**(code **)(*local_24 + 0x60))(local_24,&local_28);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_24,&DAT_004034d0,0x60);
  }
  piVar1 = local_28;
  iVar2 = *local_28;
  uVar3 = __vbaObjSetAddref(&local_2c,local_20);
  iVar2 = (**(code **)(iVar2 + 0x28))(piVar1,uVar3);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_004034e0,0x28);
  }
  __vbaFreeObjList(2,&local_2c,&local_28);
  iVar2 = (**(code **)(*local_24 + 0x70))
                    (local_24,8,local_38,L"MaxSpeed",local_30,3,local_48,4,local_40,10);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_24,&DAT_004034d0,0x70);
  }
  piVar1 = local_28;
  local_28 = (int *)0x0;
  __vbaObjSet(&local_20,piVar1);
  iVar2 = (**(code **)(*local_24 + 0x60))(local_24,&local_28);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_24,&DAT_004034d0,0x60);
  }
  piVar1 = local_28;
  iVar2 = *local_28;
  uVar3 = __vbaObjSetAddref(&local_2c,local_20);
  iVar2 = (**(code **)(iVar2 + 0x28))(piVar1,uVar3);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_004034e0,0x28);
  }
  __vbaFreeObjList(2,&local_2c,&local_28);
  iVar2 = (**(code **)(*local_24 + 0x70))
                    (local_24,8,local_38,L"InitPosition",local_30,3,local_48,6,local_40,10);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_24,&DAT_004034d0,0x70);
  }
  piVar1 = local_28;
  local_28 = (int *)0x0;
  __vbaObjSet(&local_20,piVar1);
  iVar2 = (**(code **)(*local_24 + 0x60))(local_24,&local_28);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_24,&DAT_004034d0,0x60);
  }
  piVar1 = local_28;
  iVar2 = *local_28;
  uVar3 = __vbaObjSetAddref(&local_2c,local_20);
  iVar2 = (**(code **)(iVar2 + 0x28))(piVar1,uVar3);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_004034e0,0x28);
  }
  __vbaFreeObjList(2,&local_2c,&local_28);
  iVar2 = (**(code **)(*local_24 + 0x70))
                    (local_24,8,local_38,L"LowSafe",local_30,3,local_48,6,local_40,10);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_24,&DAT_004034d0,0x70);
  }
  piVar1 = local_28;
  local_28 = (int *)0x0;
  __vbaObjSet(&local_20,piVar1);
  iVar2 = (**(code **)(*local_24 + 0x60))(local_24,&local_28);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_24,&DAT_004034d0,0x60);
  }
  piVar1 = local_28;
  iVar2 = *local_28;
  uVar3 = __vbaObjSetAddref(&local_2c,local_20);
  iVar2 = (**(code **)(iVar2 + 0x28))(piVar1,uVar3);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_004034e0,0x28);
  }
  __vbaFreeObjList(2,&local_2c,&local_28);
  iVar2 = (**(code **)(*local_24 + 0x70))
                    (local_24,8,local_38,L"HighSafe",local_30,3,local_48,6,local_40,10);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_24,&DAT_004034d0,0x70);
  }
  piVar1 = local_28;
  local_28 = (int *)0x0;
  __vbaObjSet(&local_20,piVar1);
  iVar2 = (**(code **)(*local_24 + 0x60))(local_24,&local_28);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_24,&DAT_004034d0,0x60);
  }
  piVar1 = local_28;
  iVar2 = *local_28;
  uVar3 = __vbaObjSetAddref(&local_2c,local_20);
  iVar2 = (**(code **)(iVar2 + 0x28))(piVar1,uVar3);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_004034e0,0x28);
  }
  __vbaFreeObjList(2,&local_2c,&local_28);
  iVar2 = (**(code **)(*local_24 + 0x70))
                    (local_24,8,local_38,L"ProtZPriority",local_30,3,local_48,3,local_40,10);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_24,&DAT_004034d0,0x70);
  }
  piVar1 = local_28;
  local_28 = (int *)0x0;
  __vbaObjSet(&local_20,piVar1);
  iVar2 = (**(code **)(*local_24 + 0x60))(local_24,&local_28);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_24,&DAT_004034d0,0x60);
  }
  piVar1 = local_28;
  iVar2 = *local_28;
  uVar3 = __vbaObjSetAddref(&local_2c,local_20);
  iVar2 = (**(code **)(iVar2 + 0x28))(piVar1,uVar3);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_004034e0,0x28);
  }
  __vbaFreeObjList(2,&local_2c,&local_28);
  iVar2 = (**(code **)(*local_24 + 0x70))
                    (local_24,8,local_38,L"InitOrder",local_30,3,local_48,3,local_40,10);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_24,&DAT_004034d0,0x70);
  }
  piVar1 = local_28;
  local_28 = (int *)0x0;
  __vbaObjSet(&local_20,piVar1);
  iVar2 = (**(code **)(*local_24 + 0x60))(local_24,&local_28);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_24,&DAT_004034d0,0x60);
  }
  piVar1 = local_28;
  iVar2 = *local_28;
  uVar3 = __vbaObjSetAddref(&local_2c,local_20);
  iVar2 = (**(code **)(iVar2 + 0x28))(piVar1,uVar3);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_004034e0,0x28);
  }
  __vbaFreeObjList(2,&local_2c,&local_28);
  iVar2 = (**(code **)(*DAT_0043302c + 0x44))(DAT_0043302c,&local_28);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,DAT_0043302c,&DAT_00402ed0,0x44);
  }
  piVar1 = local_28;
  iVar2 = *local_28;
  uVar3 = __vbaObjSetAddref(&local_2c,local_24);
  iVar2 = (**(code **)(iVar2 + 0x28))(piVar1,uVar3);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_004034e0,0x28);
  }
  __vbaFreeObjList(2,&local_2c,&local_28);
  __vbaFreeObj(&LAB_00413e17);
  __vbaFreeObj();
  __vbaFreeObj();
  __vbaFreeObj();
  return;
}


// ---- FUN_00413e30 @ 00413e30

void FUN_00413e30(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_34;
  undefined4 local_2c;
  undefined4 local_28;
  int *local_24;
  int *local_20;
  undefined4 local_1c;
  int *local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_00401736;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffff68;
  local_8 = &DAT_00401270;
  local_18 = (int *)0x0;
  local_1c = 0;
  local_20 = (int *)0x0;
  local_24 = (int *)0x0;
  local_28 = 0;
  ExceptionList = &pvStack_14;
  iVar2 = (**(code **)(*DAT_0043302c + 0x6c))(DAT_0043302c,8);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,DAT_0043302c,&DAT_00402ed0,0x6c);
  }
  piVar1 = local_24;
  local_24 = (int *)0x0;
  __vbaObjSet(&local_20,piVar1);
  iVar2 = (**(code **)(*local_20 + 0x70))(local_20,8,local_34,L"keyword",local_2c,3);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_20,&DAT_004034d0,0x70);
  }
  piVar1 = local_24;
  local_24 = (int *)0x0;
  __vbaObjSet(&local_1c,piVar1);
  iVar2 = (**(code **)(*local_20 + 0x60))(local_20,&local_24);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_20,&DAT_004034d0,0x60);
  }
  piVar1 = local_24;
  iVar2 = *local_24;
  uVar3 = __vbaObjSetAddref(&local_28,local_1c);
  iVar2 = (**(code **)(iVar2 + 0x28))(piVar1,uVar3);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_004034e0,0x28);
  }
  __vbaFreeObjList(2,&local_28,&local_24);
  iVar2 = (**(code **)(*DAT_0043302c + 0x44))(DAT_0043302c,&local_24);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,DAT_0043302c,&DAT_00402ed0,0x44);
  }
  piVar1 = local_24;
  iVar2 = *local_24;
  uVar3 = __vbaObjSetAddref(&local_28,local_20);
  iVar2 = (**(code **)(iVar2 + 0x28))(piVar1,uVar3);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_004034e0,0x28);
  }
  __vbaFreeObjList(2,&local_28,&local_24);
  iVar2 = (**(code **)(*DAT_0043302c + 0xbc))(DAT_0043302c,L"keywords",3,local_34,2,local_2c,10);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,DAT_0043302c,&DAT_00402ed0,0xbc);
  }
  piVar1 = local_24;
  local_24 = (int *)0x0;
  __vbaObjSet(&local_18,piVar1);
  iVar2 = (**(code **)(*local_18 + 0xc0))(local_18);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0xc0);
  }
  iVar2 = (**(code **)(*local_18 + 0x128))(local_18,8,local_34,L"keyword",local_2c,8);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0x128);
  }
  iVar2 = (**(code **)(*local_18 + 0x164))(local_18,1,0);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0x164);
  }
  iVar2 = (**(code **)(*local_18 + 0xc0))(local_18);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0xc0);
  }
  iVar2 = (**(code **)(*local_18 + 0x128))(local_18,8,local_34,L"keyword",local_2c,8);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0x128);
  }
  iVar2 = (**(code **)(*local_18 + 0x164))(local_18,1,0);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0x164);
  }
  iVar2 = (**(code **)(*local_18 + 0xc0))(local_18);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0xc0);
  }
  iVar2 = (**(code **)(*local_18 + 0x128))(local_18,8,local_34,L"keyword",local_2c,8);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0x128);
  }
  iVar2 = (**(code **)(*local_18 + 0x164))(local_18,1,0);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0x164);
  }
  iVar2 = (**(code **)(*local_18 + 0xc0))(local_18);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0xc0);
  }
  iVar2 = (**(code **)(*local_18 + 0x128))(local_18,8,local_34,L"keyword",local_2c,8);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0x128);
  }
  iVar2 = (**(code **)(*local_18 + 0x164))(local_18,1,0);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0x164);
  }
  iVar2 = (**(code **)(*local_18 + 0xc0))(local_18);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0xc0);
  }
  iVar2 = (**(code **)(*local_18 + 0x128))(local_18,8,local_34,L"keyword",local_2c,8);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0x128);
  }
  iVar2 = (**(code **)(*local_18 + 0x164))(local_18,1,0);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0x164);
  }
  iVar2 = (**(code **)(*local_18 + 0xc0))(local_18);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0xc0);
  }
  iVar2 = (**(code **)(*local_18 + 0x128))(local_18,8,local_34,L"keyword",local_2c,8);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0x128);
  }
  iVar2 = (**(code **)(*local_18 + 0x164))(local_18,1,0);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0x164);
  }
  iVar2 = (**(code **)(*local_18 + 0xc0))(local_18);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0xc0);
  }
  iVar2 = (**(code **)(*local_18 + 0x128))(local_18,8,local_34,L"keyword",local_2c,8);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0x128);
  }
  iVar2 = (**(code **)(*local_18 + 0x164))(local_18,1,0);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0x164);
  }
  iVar2 = (**(code **)(*local_18 + 0xc0))(local_18);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0xc0);
  }
  iVar2 = (**(code **)(*local_18 + 0x128))(local_18,8,local_34,L"keyword",local_2c,8);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0x128);
  }
  iVar2 = (**(code **)(*local_18 + 0x164))(local_18,1,0);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0x164);
  }
  iVar2 = (**(code **)(*local_18 + 0xc0))(local_18);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0xc0);
  }
  iVar2 = (**(code **)(*local_18 + 0x128))(local_18,8,local_34,L"keyword",local_2c,8);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0x128);
  }
  iVar2 = (**(code **)(*local_18 + 0x164))(local_18,1,0);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0x164);
  }
  iVar2 = (**(code **)(*local_18 + 0xc0))(local_18);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0xc0);
  }
  iVar2 = (**(code **)(*local_18 + 0x128))(local_18,8,local_34,L"keyword",local_2c,8);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0x128);
  }
  iVar2 = (**(code **)(*local_18 + 0x164))(local_18,1,0);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0x164);
  }
  iVar2 = (**(code **)(*local_18 + 0xc0))(local_18);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0xc0);
  }
  iVar2 = (**(code **)(*local_18 + 0x128))(local_18,8,local_34,L"keyword",local_2c,8);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0x128);
  }
  iVar2 = (**(code **)(*local_18 + 0x164))(local_18,1,0);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0x164);
  }
  iVar2 = (**(code **)(*local_18 + 0xc0))(local_18);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0xc0);
  }
  iVar2 = (**(code **)(*local_18 + 0x128))(local_18,8,local_34,L"keyword",local_2c,8);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0x128);
  }
  iVar2 = (**(code **)(*local_18 + 0x164))(local_18,1,0);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0x164);
  }
  iVar2 = (**(code **)(*local_18 + 0xc0))(local_18);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0xc0);
  }
  iVar2 = (**(code **)(*local_18 + 0x128))(local_18,8,local_34,L"keyword",local_2c,8);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0x128);
  }
  iVar2 = (**(code **)(*local_18 + 0x164))(local_18,1,0);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0x164);
  }
  iVar2 = (**(code **)(*local_18 + 0xc0))(local_18);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0xc0);
  }
  iVar2 = (**(code **)(*local_18 + 0x128))(local_18,8,local_34,L"keyword",local_2c,8);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0x128);
  }
  iVar2 = (**(code **)(*local_18 + 0x164))(local_18,1,0);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0x164);
  }
  iVar2 = (**(code **)(*local_18 + 0xc4))(local_18);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0xc4);
  }
  __vbaFreeObj(&LAB_00414b83);
  __vbaFreeObj();
  __vbaFreeObj();
  return;
}


// ---- FUN_00414ba0 @ 00414ba0

void FUN_00414ba0(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  wchar_t *pwVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 local_3c [4];
  undefined4 local_2c;
  int *local_28;
  int *local_24;
  undefined4 local_20;
  int *local_1c;
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_00401736;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffff44;
  local_8 = &DAT_00401280;
  local_18 = 0;
  local_1c = (int *)0x0;
  local_20 = 0;
  local_24 = (int *)0x0;
  local_28 = (int *)0x0;
  local_2c = 0;
  local_3c[0] = 0;
  ExceptionList = &pvStack_14;
  iVar1 = (**(code **)(*DAT_0043302c + 0x6c))(DAT_0043302c,8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,DAT_0043302c,&DAT_00402ed0,0x6c);
  }
  piVar3 = local_28;
  local_28 = (int *)0x0;
  __vbaObjSet(&local_24,piVar3);
  iVar1 = (**(code **)(*local_24 + 0x70))(local_24,8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_24,&DAT_004034d0,0x70);
  }
  piVar3 = local_28;
  local_28 = (int *)0x0;
  __vbaObjSet(&local_20,piVar3);
  iVar1 = (**(code **)(*local_24 + 0x60))(local_24,&local_28);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_24,&DAT_004034d0,0x60);
  }
  piVar3 = local_28;
  iVar1 = *local_28;
  uVar2 = __vbaObjSetAddref(&local_2c,local_20);
  iVar1 = (**(code **)(iVar1 + 0x28))(piVar3,uVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar3,&DAT_004034e0,0x28);
  }
  __vbaFreeObjList(2,&local_2c,&local_28);
  iVar1 = (**(code **)(*local_24 + 0x70))(local_24,8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_24,&DAT_004034d0,0x70);
  }
  piVar3 = local_28;
  local_28 = (int *)0x0;
  __vbaObjSet(&local_20,piVar3);
  iVar1 = (**(code **)(*local_24 + 0x60))(local_24,&local_28);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_24,&DAT_004034d0,0x60);
  }
  piVar3 = local_28;
  iVar1 = *local_28;
  uVar2 = __vbaObjSetAddref(&local_2c,local_20);
  iVar1 = (**(code **)(iVar1 + 0x28))(piVar3,uVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar3,&DAT_004034e0,0x28);
  }
  __vbaFreeObjList(2,&local_2c,&local_28);
  iVar1 = (**(code **)(*DAT_0043302c + 0x44))(DAT_0043302c,&local_28);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,DAT_0043302c,&DAT_00402ed0,0x44);
  }
  piVar3 = local_28;
  iVar1 = *local_28;
  uVar2 = __vbaObjSetAddref(&local_2c,local_24);
  iVar1 = (**(code **)(iVar1 + 0x28))(piVar3,uVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar3,&DAT_004034e0,0x28);
  }
  __vbaFreeObjList(2,&local_2c,&local_28);
  iVar1 = (**(code **)(*local_24 + 0x74))(local_24,8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_24,&DAT_004034d0,0x74);
  }
  piVar3 = local_28;
  local_28 = (int *)0x0;
  __vbaObjSet(&local_1c,piVar3);
  iVar1 = (**(code **)(*local_1c + 0x60))(local_1c,8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c,&DAT_004035cc,0x60);
  }
  piVar3 = local_28;
  local_28 = (int *)0x0;
  __vbaObjSet(&local_20,piVar3);
  iVar1 = (**(code **)(*local_1c + 0x50))(local_1c,0xffffffff);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c,&DAT_004035cc,0x50);
  }
  iVar1 = (**(code **)(*local_1c + 0x40))(local_1c,0xffffffff);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c,&DAT_004035cc,0x40);
  }
  iVar1 = (**(code **)(*local_1c + 0x30))(local_1c,0xffffffff);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c,&DAT_004035cc,0x30);
  }
  __vbaObjSetAddref(&local_28,local_20);
  piVar3 = local_1c;
  iVar1 = (**(code **)(*local_1c + 0x58))(local_1c,local_3c);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c,&DAT_004035cc,0x58);
  }
  uVar5 = 1;
  pwVar4 = L"Append";
  uVar6 = 0x4009;
  uVar2 = __vbaObjVar(local_3c);
  __vbaLateMemCall(uVar2,pwVar4,uVar5,uVar6);
  uVar2 = __vbaCastObj(local_28,&DAT_004035dc);
  __vbaObjSet(&local_20,uVar2);
  __vbaFreeObj();
  __vbaFreeVar(piVar3);
  iVar1 = (**(code **)(*local_1c + 0x60))(local_1c,8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c,&DAT_004035cc,0x60);
  }
  piVar3 = local_28;
  local_28 = (int *)0x0;
  __vbaObjSet(&local_20,piVar3);
  iVar1 = (**(code **)(*local_1c + 0x50))(local_1c,0);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c,&DAT_004035cc,0x50);
  }
  iVar1 = (**(code **)(*local_1c + 0x40))(local_1c,0xffffffff);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c,&DAT_004035cc,0x40);
  }
  iVar1 = (**(code **)(*local_1c + 0x30))(local_1c,0);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c,&DAT_004035cc,0x30);
  }
  __vbaObjSetAddref(&local_28,local_20);
  piVar3 = local_1c;
  iVar1 = (**(code **)(*local_1c + 0x58))(local_1c,local_3c);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c,&DAT_004035cc,0x58);
  }
  uVar5 = 1;
  pwVar4 = L"Append";
  uVar6 = 0x4009;
  uVar2 = __vbaObjVar(local_3c);
  __vbaLateMemCall(uVar2,pwVar4,uVar5,uVar6);
  uVar2 = __vbaCastObj(local_28,&DAT_004035dc);
  __vbaObjSet(&local_20,uVar2);
  __vbaFreeObj();
  __vbaFreeVar(piVar3);
  iVar1 = (**(code **)(*local_24 + 100))(local_24,&local_28);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_24,&DAT_004034d0,100);
  }
  piVar3 = local_28;
  iVar1 = *local_28;
  uVar2 = __vbaObjSetAddref(&local_2c,local_1c);
  iVar1 = (**(code **)(iVar1 + 0x28))(piVar3,uVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar3,&DAT_004034e0,0x28);
  }
  __vbaFreeObjList(2,&local_2c,&local_28);
  __vbaFreeObj(&LAB_00415344);
  __vbaFreeObj();
  __vbaFreeObj();
  __vbaFreeObj();
  return;
}


// ---- FUN_00415360 @ 00415360

void FUN_00415360(void)

{
  int iVar1;
  undefined4 uVar2;
  wchar_t *pwVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 local_3c [4];
  undefined4 local_2c;
  int *local_28;
  int *local_24;
  undefined4 local_20;
  int *local_1c;
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_00401736;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffff20;
  local_8 = &DAT_00401290;
  local_18 = 0;
  local_1c = (int *)0x0;
  local_20 = 0;
  local_24 = (int *)0x0;
  local_28 = (int *)0x0;
  local_2c = 0;
  local_3c[0] = 0;
  ExceptionList = &pvStack_14;
  iVar1 = (**(code **)(*DAT_0043302c + 0x6c))(DAT_0043302c,8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,DAT_0043302c,&DAT_00402ed0,0x6c);
  }
  piVar6 = local_28;
  local_28 = (int *)0x0;
  __vbaObjSet(&local_24,piVar6);
  iVar1 = (**(code **)(*local_24 + 0x70))(local_24,8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_24,&DAT_004034d0,0x70);
  }
  piVar6 = local_28;
  local_28 = (int *)0x0;
  __vbaObjSet(&local_20,piVar6);
  iVar1 = (**(code **)(*local_24 + 0x60))(local_24,&local_28);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_24,&DAT_004034d0,0x60);
  }
  piVar6 = local_28;
  iVar1 = *local_28;
  uVar2 = __vbaObjSetAddref(&local_2c,local_20);
  iVar1 = (**(code **)(iVar1 + 0x28))(piVar6,uVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar6,&DAT_004034e0,0x28);
  }
  __vbaFreeObjList(2,&local_2c,&local_28);
  iVar1 = (**(code **)(*local_24 + 0x70))(local_24,8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_24,&DAT_004034d0,0x70);
  }
  piVar6 = local_28;
  local_28 = (int *)0x0;
  __vbaObjSet(&local_20,piVar6);
  iVar1 = (**(code **)(*local_24 + 0x60))(local_24,&local_28);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_24,&DAT_004034d0,0x60);
  }
  piVar6 = local_28;
  iVar1 = *local_28;
  uVar2 = __vbaObjSetAddref(&local_2c,local_20);
  iVar1 = (**(code **)(iVar1 + 0x28))(piVar6,uVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar6,&DAT_004034e0,0x28);
  }
  __vbaFreeObjList(2,&local_2c,&local_28);
  iVar1 = (**(code **)(*local_24 + 0x70))(local_24,8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_24,&DAT_004034d0,0x70);
  }
  piVar6 = local_28;
  local_28 = (int *)0x0;
  __vbaObjSet(&local_20,piVar6);
  iVar1 = (**(code **)(*local_24 + 0x60))(local_24,&local_28);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_24,&DAT_004034d0,0x60);
  }
  piVar6 = local_28;
  iVar1 = *local_28;
  uVar2 = __vbaObjSetAddref(&local_2c,local_20);
  iVar1 = (**(code **)(iVar1 + 0x28))(piVar6,uVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar6,&DAT_004034e0,0x28);
  }
  __vbaFreeObjList(2,&local_2c,&local_28);
  iVar1 = (**(code **)(*local_24 + 0x70))(local_24,8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_24,&DAT_004034d0,0x70);
  }
  piVar6 = local_28;
  local_28 = (int *)0x0;
  __vbaObjSet(&local_20,piVar6);
  iVar1 = (**(code **)(*local_24 + 0x60))(local_24,&local_28);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_24,&DAT_004034d0,0x60);
  }
  piVar6 = local_28;
  iVar1 = *local_28;
  uVar2 = __vbaObjSetAddref(&local_2c,local_20);
  iVar1 = (**(code **)(iVar1 + 0x28))(piVar6,uVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar6,&DAT_004034e0,0x28);
  }
  __vbaFreeObjList(2,&local_2c,&local_28);
  iVar1 = (**(code **)(*local_24 + 0x70))(local_24,8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_24,&DAT_004034d0,0x70);
  }
  piVar6 = local_28;
  local_28 = (int *)0x0;
  __vbaObjSet(&local_20,piVar6);
  iVar1 = (**(code **)(*local_24 + 0x60))(local_24,&local_28);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_24,&DAT_004034d0,0x60);
  }
  piVar6 = local_28;
  iVar1 = *local_28;
  uVar2 = __vbaObjSetAddref(&local_2c,local_20);
  iVar1 = (**(code **)(iVar1 + 0x28))(piVar6,uVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar6,&DAT_004034e0,0x28);
  }
  __vbaFreeObjList(2,&local_2c,&local_28);
  iVar1 = (**(code **)(*local_24 + 0x70))(local_24,8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_24,&DAT_004034d0,0x70);
  }
  piVar6 = local_28;
  local_28 = (int *)0x0;
  __vbaObjSet(&local_20,piVar6);
  iVar1 = (**(code **)(*local_24 + 0x60))(local_24,&local_28);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_24,&DAT_004034d0,0x60);
  }
  piVar6 = local_28;
  iVar1 = *local_28;
  uVar2 = __vbaObjSetAddref(&local_2c,local_20);
  iVar1 = (**(code **)(iVar1 + 0x28))(piVar6,uVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar6,&DAT_004034e0,0x28);
  }
  __vbaFreeObjList(2,&local_2c,&local_28);
  iVar1 = (**(code **)(*local_24 + 0x70))(local_24,8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_24,&DAT_004034d0,0x70);
  }
  piVar6 = local_28;
  local_28 = (int *)0x0;
  __vbaObjSet(&local_20,piVar6);
  iVar1 = (**(code **)(*local_24 + 0x60))(local_24,&local_28);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_24,&DAT_004034d0,0x60);
  }
  piVar6 = local_28;
  iVar1 = *local_28;
  uVar2 = __vbaObjSetAddref(&local_2c,local_20);
  iVar1 = (**(code **)(iVar1 + 0x28))(piVar6,uVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar6,&DAT_004034e0,0x28);
  }
  __vbaFreeObjList(2,&local_2c,&local_28);
  iVar1 = (**(code **)(*DAT_0043302c + 0x44))(DAT_0043302c,&local_28);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,DAT_0043302c,&DAT_00402ed0,0x44);
  }
  piVar6 = local_28;
  iVar1 = *local_28;
  uVar2 = __vbaObjSetAddref(&local_2c,local_24);
  iVar1 = (**(code **)(iVar1 + 0x28))(piVar6,uVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar6,&DAT_004034e0,0x28);
  }
  __vbaFreeObjList(2,&local_2c,&local_28);
  iVar1 = (**(code **)(*local_24 + 0x74))(local_24,8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_24,&DAT_004034d0,0x74);
  }
  piVar6 = local_28;
  local_28 = (int *)0x0;
  __vbaObjSet(&local_1c,piVar6);
  iVar1 = (**(code **)(*local_1c + 0x60))(local_1c,8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c,&DAT_004035cc,0x60);
  }
  piVar6 = local_28;
  local_28 = (int *)0x0;
  __vbaObjSet(&local_20,piVar6);
  iVar1 = (**(code **)(*local_1c + 0x50))(local_1c,0xffffffff);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c,&DAT_004035cc,0x50);
  }
  iVar1 = (**(code **)(*local_1c + 0x30))(local_1c,0xffffffff);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c,&DAT_004035cc,0x30);
  }
  iVar1 = (**(code **)(*local_1c + 0x40))(local_1c,0xffffffff);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c,&DAT_004035cc,0x40);
  }
  __vbaObjSetAddref(&local_28,local_20);
  piVar6 = local_1c;
  iVar1 = (**(code **)(*local_1c + 0x58))(local_1c,local_3c);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c,&DAT_004035cc,0x58);
  }
  uVar4 = 1;
  pwVar3 = L"Append";
  uVar5 = 0x4009;
  uVar2 = __vbaObjVar(local_3c);
  __vbaLateMemCall(uVar2,pwVar3,uVar4,uVar5);
  uVar2 = __vbaCastObj(local_28,&DAT_004035dc);
  __vbaObjSet(&local_20,uVar2);
  __vbaFreeObj();
  __vbaFreeVar(piVar6);
  iVar1 = (**(code **)(*local_24 + 100))(local_24,&local_28);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_24,&DAT_004034d0,100);
  }
  piVar6 = local_28;
  iVar1 = *local_28;
  uVar2 = __vbaObjSetAddref(&local_2c,local_1c);
  iVar1 = (**(code **)(iVar1 + 0x28))(piVar6,uVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar6,&DAT_004034e0,0x28);
  }
  __vbaFreeObjList(2,&local_2c,&local_28);
  __vbaFreeObj(&LAB_00415e92);
  __vbaFreeObj();
  __vbaFreeObj();
  __vbaFreeObj();
  return;
}


// ---- FUN_00415eb0 @ 00415eb0

void FUN_00415eb0(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  wchar_t *pwVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 local_3c [4];
  undefined4 local_2c;
  int *local_28;
  int *local_24;
  undefined4 local_20;
  int *local_1c;
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_00401736;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffff3c;
  local_8 = &DAT_004012a0;
  local_18 = 0;
  local_1c = (int *)0x0;
  local_20 = 0;
  local_24 = (int *)0x0;
  local_28 = (int *)0x0;
  local_2c = 0;
  local_3c[0] = 0;
  ExceptionList = &pvStack_14;
  iVar1 = (**(code **)(*DAT_0043302c + 0x6c))(DAT_0043302c,8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,DAT_0043302c,&DAT_00402ed0,0x6c);
  }
  piVar3 = local_28;
  local_28 = (int *)0x0;
  __vbaObjSet(&local_24,piVar3);
  iVar1 = (**(code **)(*local_24 + 0x70))(local_24,8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_24,&DAT_004034d0,0x70);
  }
  piVar3 = local_28;
  local_28 = (int *)0x0;
  __vbaObjSet(&local_20,piVar3);
  iVar1 = (**(code **)(*local_24 + 0x60))(local_24,&local_28);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_24,&DAT_004034d0,0x60);
  }
  piVar3 = local_28;
  iVar1 = *local_28;
  uVar2 = __vbaObjSetAddref(&local_2c,local_20);
  iVar1 = (**(code **)(iVar1 + 0x28))(piVar3,uVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar3,&DAT_004034e0,0x28);
  }
  __vbaFreeObjList(2,&local_2c,&local_28);
  iVar1 = (**(code **)(*local_24 + 0x70))(local_24,8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_24,&DAT_004034d0,0x70);
  }
  piVar3 = local_28;
  local_28 = (int *)0x0;
  __vbaObjSet(&local_20,piVar3);
  iVar1 = (**(code **)(*local_24 + 0x60))(local_24,&local_28);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_24,&DAT_004034d0,0x60);
  }
  piVar3 = local_28;
  iVar1 = *local_28;
  uVar2 = __vbaObjSetAddref(&local_2c,local_20);
  iVar1 = (**(code **)(iVar1 + 0x28))(piVar3,uVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar3,&DAT_004034e0,0x28);
  }
  __vbaFreeObjList(2,&local_2c,&local_28);
  iVar1 = (**(code **)(*local_24 + 0x70))(local_24,8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_24,&DAT_004034d0,0x70);
  }
  piVar3 = local_28;
  local_28 = (int *)0x0;
  __vbaObjSet(&local_20,piVar3);
  iVar1 = (**(code **)(*local_24 + 0x60))(local_24,&local_28);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_24,&DAT_004034d0,0x60);
  }
  piVar3 = local_28;
  iVar1 = *local_28;
  uVar2 = __vbaObjSetAddref(&local_2c,local_20);
  iVar1 = (**(code **)(iVar1 + 0x28))(piVar3,uVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar3,&DAT_004034e0,0x28);
  }
  __vbaFreeObjList(2,&local_2c,&local_28);
  iVar1 = (**(code **)(*DAT_0043302c + 0x44))(DAT_0043302c,&local_28);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,DAT_0043302c,&DAT_00402ed0,0x44);
  }
  piVar3 = local_28;
  iVar1 = *local_28;
  uVar2 = __vbaObjSetAddref(&local_2c,local_24);
  iVar1 = (**(code **)(iVar1 + 0x28))(piVar3,uVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar3,&DAT_004034e0,0x28);
  }
  __vbaFreeObjList(2,&local_2c,&local_28);
  iVar1 = (**(code **)(*local_24 + 0x74))(local_24,8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_24,&DAT_004034d0,0x74);
  }
  piVar3 = local_28;
  local_28 = (int *)0x0;
  __vbaObjSet(&local_1c,piVar3);
  iVar1 = (**(code **)(*local_1c + 0x60))(local_1c,8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c,&DAT_004035cc,0x60);
  }
  piVar3 = local_28;
  local_28 = (int *)0x0;
  __vbaObjSet(&local_20,piVar3);
  iVar1 = (**(code **)(*local_1c + 0x50))(local_1c,0xffffffff);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c,&DAT_004035cc,0x50);
  }
  iVar1 = (**(code **)(*local_1c + 0x40))(local_1c,0xffffffff);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c,&DAT_004035cc,0x40);
  }
  iVar1 = (**(code **)(*local_1c + 0x30))(local_1c,0xffffffff);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c,&DAT_004035cc,0x30);
  }
  __vbaObjSetAddref(&local_28,local_20);
  piVar3 = local_1c;
  iVar1 = (**(code **)(*local_1c + 0x58))(local_1c,local_3c);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c,&DAT_004035cc,0x58);
  }
  uVar5 = 1;
  pwVar4 = L"Append";
  uVar6 = 0x4009;
  uVar2 = __vbaObjVar(local_3c);
  __vbaLateMemCall(uVar2,pwVar4,uVar5,uVar6);
  uVar2 = __vbaCastObj(local_28,&DAT_004035dc);
  __vbaObjSet(&local_20,uVar2);
  __vbaFreeObj();
  __vbaFreeVar(piVar3);
  iVar1 = (**(code **)(*local_1c + 0x60))(local_1c,8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c,&DAT_004035cc,0x60);
  }
  piVar3 = local_28;
  local_28 = (int *)0x0;
  __vbaObjSet(&local_20,piVar3);
  iVar1 = (**(code **)(*local_1c + 0x50))(local_1c,0);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c,&DAT_004035cc,0x50);
  }
  iVar1 = (**(code **)(*local_1c + 0x40))(local_1c,0xffffffff);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c,&DAT_004035cc,0x40);
  }
  iVar1 = (**(code **)(*local_1c + 0x30))(local_1c,0);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c,&DAT_004035cc,0x30);
  }
  __vbaObjSetAddref(&local_28,local_20);
  piVar3 = local_1c;
  iVar1 = (**(code **)(*local_1c + 0x58))(local_1c,local_3c);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c,&DAT_004035cc,0x58);
  }
  uVar5 = 1;
  pwVar4 = L"Append";
  uVar6 = 0x4009;
  uVar2 = __vbaObjVar(local_3c);
  __vbaLateMemCall(uVar2,pwVar4,uVar5,uVar6);
  uVar2 = __vbaCastObj(local_28,&DAT_004035dc);
  __vbaObjSet(&local_20,uVar2);
  __vbaFreeObj();
  __vbaFreeVar(piVar3);
  iVar1 = (**(code **)(*local_24 + 100))(local_24,&local_28);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_24,&DAT_004034d0,100);
  }
  piVar3 = local_28;
  iVar1 = *local_28;
  uVar2 = __vbaObjSetAddref(&local_2c,local_1c);
  iVar1 = (**(code **)(iVar1 + 0x28))(piVar3,uVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar3,&DAT_004034e0,0x28);
  }
  __vbaFreeObjList(2,&local_2c,&local_28);
  __vbaFreeObj(&LAB_0041675d);
  __vbaFreeObj();
  __vbaFreeObj();
  __vbaFreeObj();
  return;
}


// ---- FUN_00416770 @ 00416770

void FUN_00416770(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  wchar_t *pwVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 local_3c [4];
  undefined4 local_2c;
  int *local_28;
  int *local_24;
  undefined4 local_20;
  int *local_1c;
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_00401736;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffff3c;
  local_8 = &DAT_004012b0;
  local_18 = 0;
  local_1c = (int *)0x0;
  local_20 = 0;
  local_24 = (int *)0x0;
  local_28 = (int *)0x0;
  local_2c = 0;
  local_3c[0] = 0;
  ExceptionList = &pvStack_14;
  iVar1 = (**(code **)(*DAT_0043302c + 0x6c))(DAT_0043302c,8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,DAT_0043302c,&DAT_00402ed0,0x6c);
  }
  piVar3 = local_28;
  local_28 = (int *)0x0;
  __vbaObjSet(&local_24,piVar3);
  iVar1 = (**(code **)(*local_24 + 0x70))(local_24,8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_24,&DAT_004034d0,0x70);
  }
  piVar3 = local_28;
  local_28 = (int *)0x0;
  __vbaObjSet(&local_20,piVar3);
  iVar1 = (**(code **)(*local_24 + 0x60))(local_24,&local_28);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_24,&DAT_004034d0,0x60);
  }
  piVar3 = local_28;
  iVar1 = *local_28;
  uVar2 = __vbaObjSetAddref(&local_2c,local_20);
  iVar1 = (**(code **)(iVar1 + 0x28))(piVar3,uVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar3,&DAT_004034e0,0x28);
  }
  __vbaFreeObjList(2,&local_2c,&local_28);
  iVar1 = (**(code **)(*local_24 + 0x70))(local_24,8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_24,&DAT_004034d0,0x70);
  }
  piVar3 = local_28;
  local_28 = (int *)0x0;
  __vbaObjSet(&local_20,piVar3);
  iVar1 = (**(code **)(*local_24 + 0x60))(local_24,&local_28);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_24,&DAT_004034d0,0x60);
  }
  piVar3 = local_28;
  iVar1 = *local_28;
  uVar2 = __vbaObjSetAddref(&local_2c,local_20);
  iVar1 = (**(code **)(iVar1 + 0x28))(piVar3,uVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar3,&DAT_004034e0,0x28);
  }
  __vbaFreeObjList(2,&local_2c,&local_28);
  iVar1 = (**(code **)(*local_24 + 0x70))(local_24,8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_24,&DAT_004034d0,0x70);
  }
  piVar3 = local_28;
  local_28 = (int *)0x0;
  __vbaObjSet(&local_20,piVar3);
  iVar1 = (**(code **)(*local_24 + 0x60))(local_24,&local_28);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_24,&DAT_004034d0,0x60);
  }
  piVar3 = local_28;
  iVar1 = *local_28;
  uVar2 = __vbaObjSetAddref(&local_2c,local_20);
  iVar1 = (**(code **)(iVar1 + 0x28))(piVar3,uVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar3,&DAT_004034e0,0x28);
  }
  __vbaFreeObjList(2,&local_2c,&local_28);
  iVar1 = (**(code **)(*DAT_0043302c + 0x44))(DAT_0043302c,&local_28);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,DAT_0043302c,&DAT_00402ed0,0x44);
  }
  piVar3 = local_28;
  iVar1 = *local_28;
  uVar2 = __vbaObjSetAddref(&local_2c,local_24);
  iVar1 = (**(code **)(iVar1 + 0x28))(piVar3,uVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar3,&DAT_004034e0,0x28);
  }
  __vbaFreeObjList(2,&local_2c,&local_28);
  iVar1 = (**(code **)(*local_24 + 0x74))(local_24,8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_24,&DAT_004034d0,0x74);
  }
  piVar3 = local_28;
  local_28 = (int *)0x0;
  __vbaObjSet(&local_1c,piVar3);
  iVar1 = (**(code **)(*local_1c + 0x60))(local_1c,8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c,&DAT_004035cc,0x60);
  }
  piVar3 = local_28;
  local_28 = (int *)0x0;
  __vbaObjSet(&local_20,piVar3);
  iVar1 = (**(code **)(*local_1c + 0x50))(local_1c,0xffffffff);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c,&DAT_004035cc,0x50);
  }
  iVar1 = (**(code **)(*local_1c + 0x40))(local_1c,0xffffffff);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c,&DAT_004035cc,0x40);
  }
  iVar1 = (**(code **)(*local_1c + 0x30))(local_1c,0xffffffff);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c,&DAT_004035cc,0x30);
  }
  __vbaObjSetAddref(&local_28,local_20);
  piVar3 = local_1c;
  iVar1 = (**(code **)(*local_1c + 0x58))(local_1c,local_3c);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c,&DAT_004035cc,0x58);
  }
  uVar5 = 1;
  pwVar4 = L"Append";
  uVar6 = 0x4009;
  uVar2 = __vbaObjVar(local_3c);
  __vbaLateMemCall(uVar2,pwVar4,uVar5,uVar6);
  uVar2 = __vbaCastObj(local_28,&DAT_004035dc);
  __vbaObjSet(&local_20,uVar2);
  __vbaFreeObj();
  __vbaFreeVar(piVar3);
  iVar1 = (**(code **)(*local_1c + 0x60))(local_1c,8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c,&DAT_004035cc,0x60);
  }
  piVar3 = local_28;
  local_28 = (int *)0x0;
  __vbaObjSet(&local_20,piVar3);
  iVar1 = (**(code **)(*local_1c + 0x50))(local_1c,0);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c,&DAT_004035cc,0x50);
  }
  iVar1 = (**(code **)(*local_1c + 0x40))(local_1c,0xffffffff);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c,&DAT_004035cc,0x40);
  }
  iVar1 = (**(code **)(*local_1c + 0x30))(local_1c,0);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c,&DAT_004035cc,0x30);
  }
  __vbaObjSetAddref(&local_28,local_20);
  piVar3 = local_1c;
  iVar1 = (**(code **)(*local_1c + 0x58))(local_1c,local_3c);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c,&DAT_004035cc,0x58);
  }
  uVar5 = 1;
  pwVar4 = L"Append";
  uVar6 = 0x4009;
  uVar2 = __vbaObjVar(local_3c);
  __vbaLateMemCall(uVar2,pwVar4,uVar5,uVar6);
  uVar2 = __vbaCastObj(local_28,&DAT_004035dc);
  __vbaObjSet(&local_20,uVar2);
  __vbaFreeObj();
  __vbaFreeVar(piVar3);
  iVar1 = (**(code **)(*local_24 + 100))(local_24,&local_28);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_24,&DAT_004034d0,100);
  }
  piVar3 = local_28;
  iVar1 = *local_28;
  uVar2 = __vbaObjSetAddref(&local_2c,local_1c);
  iVar1 = (**(code **)(iVar1 + 0x28))(piVar3,uVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar3,&DAT_004034e0,0x28);
  }
  __vbaFreeObjList(2,&local_2c,&local_28);
  __vbaFreeObj(&LAB_0041701d);
  __vbaFreeObj();
  __vbaFreeObj();
  __vbaFreeObj();
  return;
}


// ---- FUN_00417030 @ 00417030

void __cdecl FUN_00417030(undefined4 *param_1)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  code *pcVar5;
  int **ppiVar6;
  int *piVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 local_78 [5];
  undefined4 local_64;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 local_44 [2];
  int *local_3c;
  int *local_34;
  int *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int *local_1c;
  void *pvStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  
  puStack_14 = &DAT_00401736;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff58;
  local_c = &DAT_004012c0;
  local_64 = 10;
  local_1c = (int *)0x0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_30 = (int *)0x0;
  local_34 = (int *)0x0;
  local_44[0] = 0;
  local_78[0] = 0;
  ExceptionList = &pvStack_18;
  iVar3 = (**(code **)(*DAT_0043302c + 0xbc))(DAT_0043302c,L"keys",3);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,DAT_0043302c,&DAT_00402ed0,0xbc);
  }
  piVar9 = local_30;
  local_30 = (int *)0x0;
  __vbaObjSet(&local_1c,piVar9);
  iVar3 = *local_1c;
  __vbaStrCat(*param_1,L"KEY = \'");
  uVar4 = __vbaStrMove();
  __vbaStrCat(&DAT_00403874,uVar4);
  uVar4 = __vbaStrMove();
  piVar9 = local_1c;
  iVar3 = (**(code **)(iVar3 + 0xd4))(local_1c,uVar4);
  pcVar5 = __vbaHresultCheckObj_exref;
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,local_1c,&DAT_00403434,0xd4);
  }
  __vbaFreeStrList(2,&local_28,&local_2c);
  puVar8 = local_78;
  piVar7 = local_1c;
  iVar3 = (**(code **)(*local_1c + 0x5c))(local_1c,puVar8);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,local_1c,&DAT_00403434,0x5c);
  }
  if ((short)local_78[0] == 0) {
    ppiVar6 = &local_30;
    iVar3 = (**(code **)(*local_1c + 0xb4))(local_1c,ppiVar6);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,local_1c,&DAT_00403434,0xb4);
    }
    piVar1 = local_30;
    iVar3 = (**(code **)(*local_30 + 0x30))(local_30,8,local_50,L"stringVal",local_48,&local_34);
    pcVar5 = __vbaHresultCheckObj_exref;
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar1,&DAT_00403eb4,0x30);
    }
    local_3c = local_34;
    local_34 = (int *)0x0;
    local_44[0] = 9;
    sVar2 = rtcIsNull(local_44);
    __vbaFreeObj();
    __vbaFreeVar(ppiVar6);
    if (sVar2 == 0) {
      iVar3 = (**(code **)(*local_1c + 0xb4))(local_1c,&local_30);
      if (iVar3 < 0) {
        __vbaHresultCheckObj(iVar3,local_1c,&DAT_00403434,0xb4);
      }
      piVar7 = local_30;
      iVar3 = (**(code **)(*local_30 + 0x30))(local_30,8,local_50,L"stringVal",local_48,&local_34);
      pcVar5 = __vbaHresultCheckObj_exref;
      if (iVar3 < 0) {
        __vbaHresultCheckObj(iVar3,piVar7,&DAT_00403eb4,0x30);
      }
      piVar7 = local_34;
      iVar3 = (**(code **)(*local_34 + 0x44))(local_34,local_44);
      if (iVar3 < 0) {
        __vbaHresultCheckObj(iVar3,piVar7,&DAT_004035dc,0x44);
      }
      __vbaStrVarMove(local_44);
      __vbaStrMove();
      __vbaFreeObjList(2,&local_30,&local_34);
      __vbaFreeVar(puVar8);
    }
    else {
      __vbaStrCopy(piVar7,puVar8);
    }
  }
  else {
    __vbaStrCopy(piVar7,puVar8);
  }
  piVar7 = local_1c;
  iVar3 = (**(code **)(*local_1c + 0xc4))(local_1c);
  if (iVar3 < 0) {
    (*pcVar5)(iVar3,local_1c,&DAT_00403434,0xc4);
  }
  __vbaStrCopy(piVar7,piVar9);
  __vbaFreeObj(&LAB_004173e6);
  __vbaFreeStr();
  return;
}


// ---- FUN_00417400 @ 00417400

void __cdecl FUN_00417400(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_58 [6];
  undefined4 local_40;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int *local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_00401736;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffff90;
  local_8 = &DAT_004012d0;
  local_18 = (int *)0x0;
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_58[0] = 0;
  ExceptionList = &pvStack_14;
  iVar1 = (**(code **)(*DAT_0043302c + 0xbc))(DAT_0043302c,L"keys",3);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,DAT_0043302c,&DAT_00402ed0,0xbc);
  }
  uVar2 = local_24;
  local_24 = 0;
  __vbaObjSet(&local_18,uVar2);
  iVar1 = *local_18;
  __vbaStrCat(*param_1,L"KEY = \'");
  uVar2 = __vbaStrMove();
  __vbaStrCat(&DAT_00403874,uVar2);
  uVar2 = __vbaStrMove();
  iVar1 = (**(code **)(iVar1 + 0xd4))(local_18,uVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_18,&DAT_00403434,0xd4);
  }
  __vbaFreeStrList(2,&local_1c,&local_20);
  iVar1 = (**(code **)(*local_18 + 0x5c))(local_18,local_58);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_18,&DAT_00403434,0x5c);
  }
  if ((short)local_58[0] == 0) {
    iVar1 = (**(code **)(*local_18 + 0xd0))(local_18);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,local_18,&DAT_00403434,0xd0);
    }
  }
  else {
    iVar1 = (**(code **)(*local_18 + 0xc0))(local_18);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,local_18,&DAT_00403434,0xc0);
    }
    iVar1 = (**(code **)(*local_18 + 0x128))
                      (local_18,8,local_30,&DAT_00403ec8,local_28,8,local_40,*param_1,local_38);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,local_18,&DAT_00403434,0x128);
    }
  }
  iVar1 = (**(code **)(*local_18 + 0x128))
                    (local_18,8,local_30,L"stringVal",local_28,8,local_40,*param_2,local_38);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_18,&DAT_00403434,0x128);
  }
  iVar1 = (**(code **)(*local_18 + 0x164))(local_18,1,0);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_18,&DAT_00403434,0x164);
  }
  iVar1 = (**(code **)(*local_18 + 0xc4))(local_18);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_18,&DAT_00403434,0xc4);
  }
  __vbaFreeObj(&LAB_0041771d);
  return;
}


// ---- FUN_00417730 @ 00417730

void FUN_00417730(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 local_5c;
  undefined4 local_54;
  undefined4 local_4c;
  undefined4 local_44;
  undefined4 local_3c;
  undefined4 local_34;
  int *local_30;
  int *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int *local_20;
  undefined4 local_1c;
  int *local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_00401736;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffff70;
  local_8 = &DAT_004012e0;
  local_18 = (int *)0x0;
  local_1c = 0;
  local_20 = (int *)0x0;
  local_24 = 0;
  local_28 = 0;
  local_2c = (int *)0x0;
  local_30 = (int *)0x0;
  ExceptionList = &pvStack_14;
  iVar1 = (**(code **)(*DAT_0043302c + 0x44))(DAT_0043302c,&local_2c);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,DAT_0043302c,&DAT_00402ed0,0x44);
  }
  piVar4 = local_2c;
  iVar1 = (**(code **)(*local_2c + 0x30))(local_2c,8,local_3c,L"users",local_34,&local_30);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar4,&DAT_00403ee0,0x30);
  }
  piVar4 = local_30;
  local_30 = (int *)0x0;
  __vbaObjSet(&local_20,piVar4);
  __vbaFreeObj();
  iVar1 = (**(code **)(*local_20 + 0x70))
                    (local_20,8,local_3c,L"GunOffPriviledge",local_34,3,local_4c,1,local_44,10,
                     local_5c,0x80020004,local_54,&local_2c);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_20,&DAT_004034d0,0x70);
  }
  piVar4 = local_2c;
  local_2c = (int *)0x0;
  __vbaObjSet(&local_1c,piVar4);
  iVar1 = (**(code **)(*local_20 + 0x60))(local_20,&local_2c);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_20,&DAT_004034d0,0x60);
  }
  piVar4 = local_2c;
  iVar1 = *local_2c;
  uVar2 = __vbaObjSetAddref(&local_30,local_1c);
  iVar1 = (**(code **)(iVar1 + 0x28))(piVar4,uVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar4,&DAT_004034e0,0x28);
  }
  __vbaFreeObjList(2,&local_30,&local_2c);
  iVar1 = (**(code **)(*DAT_0043302c + 0xbc))
                    (DAT_0043302c,L"USERS",3,local_3c,2,local_34,10,local_4c,0x80020004,local_44,10,
                     local_5c,0x80020004,local_54,&local_2c);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,DAT_0043302c,&DAT_00402ed0,0xbc);
  }
  piVar4 = local_2c;
  local_2c = (int *)0x0;
  __vbaObjSet(&local_18,piVar4);
  iVar1 = (**(code **)(*local_18 + 0xd4))(local_18,L"username = \'DEVELOPMENT\'");
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_18,&DAT_00403434,0xd4);
  }
  iVar1 = (**(code **)(*local_18 + 0xd0))(local_18);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_18,&DAT_00403434,0xd0);
  }
  iVar1 = (**(code **)(*local_18 + 0xb4))(local_18,&local_2c);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_18,&DAT_00403434,0xb4);
  }
  piVar4 = local_2c;
  iVar1 = (**(code **)(*local_2c + 0x30))
                    (local_2c,8,local_3c,L"GunOffPriviledge",local_34,&local_30);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar4,&DAT_00403eb4,0x30);
  }
  piVar4 = local_30;
  iVar1 = (**(code **)(*local_30 + 0x48))(local_30,0xb,local_4c,0xffffffff,local_44);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar4,&DAT_004035dc,0x48);
  }
  __vbaFreeObjList(2,&local_2c,&local_30);
  iVar1 = (**(code **)(*local_18 + 0x164))(local_18,1,0);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_18,&DAT_00403434,0x164);
  }
  iVar1 = (**(code **)(*local_18 + 0xd4))(local_18,L"username = \'SERVICE\'");
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_18,&DAT_00403434,0xd4);
  }
  iVar1 = (**(code **)(*local_18 + 0xd0))(local_18);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_18,&DAT_00403434,0xd0);
  }
  iVar1 = (**(code **)(*local_18 + 0xb4))(local_18,&local_2c);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_18,&DAT_00403434,0xb4);
  }
  piVar4 = local_2c;
  iVar1 = (**(code **)(*local_2c + 0x30))
                    (local_2c,8,local_3c,L"GunOffPriviledge",local_34,&local_30);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar4,&DAT_00403eb4,0x30);
  }
  piVar4 = local_30;
  iVar1 = (**(code **)(*local_30 + 0x48))(local_30,0xb,local_4c,0xffffffff,local_44);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar4,&DAT_004035dc,0x48);
  }
  __vbaFreeObjList(2,&local_2c,&local_30);
  iVar1 = (**(code **)(*local_18 + 0x164))(local_18,1,0);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_18,&DAT_00403434,0x164);
  }
  iVar1 = (**(code **)(*local_18 + 0xd4))(local_18,L"username = \'FACTORY\'");
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_18,&DAT_00403434,0xd4);
  }
  iVar1 = (**(code **)(*local_18 + 0xd0))(local_18);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_18,&DAT_00403434,0xd0);
  }
  iVar1 = (**(code **)(*local_18 + 0xb4))(local_18,&local_2c);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_18,&DAT_00403434,0xb4);
  }
  piVar4 = local_2c;
  iVar1 = (**(code **)(*local_2c + 0x30))
                    (local_2c,8,local_3c,L"GunOffPriviledge",local_34,&local_30);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar4,&DAT_00403eb4,0x30);
  }
  piVar4 = local_30;
  iVar1 = (**(code **)(*local_30 + 0x48))(local_30,0xb,local_4c,0xffffffff,local_44);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar4,&DAT_004035dc,0x48);
  }
  __vbaFreeObjList(2,&local_2c,&local_30);
  iVar1 = (**(code **)(*local_18 + 0x164))(local_18,1,0);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_18,&DAT_00403434,0x164);
  }
  iVar1 = (**(code **)(*local_18 + 0xd4))(local_18,L"username = \'SYSTEM\'");
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_18,&DAT_00403434,0xd4);
  }
  iVar1 = (**(code **)(*local_18 + 0xd0))(local_18);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_18,&DAT_00403434,0xd0);
  }
  iVar1 = (**(code **)(*local_18 + 0xb4))(local_18,&local_2c);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_18,&DAT_00403434,0xb4);
  }
  piVar4 = local_2c;
  iVar1 = (**(code **)(*local_2c + 0x30))
                    (local_2c,8,local_3c,L"GunOffPriviledge",local_34,&local_30);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar4,&DAT_00403eb4,0x30);
  }
  piVar4 = local_30;
  iVar1 = (**(code **)(*local_30 + 0x48))(local_30,0xb,local_4c,0xffffffff,local_44);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar4,&DAT_004035dc,0x48);
  }
  __vbaFreeObjList(2,&local_2c,&local_30);
  uVar6 = 0;
  uVar2 = 1;
  piVar4 = local_18;
  iVar1 = (**(code **)(*local_18 + 0x164))(local_18,1,0);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_18,&DAT_00403434,0x164);
  }
  piVar3 = local_18;
  iVar1 = (**(code **)(*local_18 + 0xc4))(local_18);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_18,&DAT_00403434,0xc4);
  }
  __vbaStrCopy(piVar3,piVar4);
  __vbaStrCopy(uVar2,uVar6);
  puVar7 = &local_28;
  puVar5 = &local_24;
  FUN_00417400(puVar5,puVar7);
  __vbaFreeStrList(2,&local_24,&local_28);
  __vbaStrCopy(puVar5,puVar7);
  __vbaFreeObj(&LAB_00417f17);
  __vbaFreeObj();
  __vbaFreeObj();
  return;
}


// ---- FUN_00417f30 @ 00417f30

void FUN_00417f30(void)

{
  ExceptionList = &stack0xffffffec;
  FUN_00415360();
  FUN_00413e30();
  FUN_00416770();
  FUN_00415eb0();
  FUN_0040c6c0();
  FUN_00414ba0();
  FUN_0041e730();
  __vbaStrCopy();
  __vbaStrCopy();
  FUN_00417400((undefined4 *)&stack0xffffffe8,(undefined4 *)&stack0xffffffe4);
  __vbaFreeStrList(2);
  __vbaStrCopy();
  __vbaStrCopy();
  FUN_00417400((undefined4 *)&stack0xffffffe8,(undefined4 *)&stack0xffffffe4);
  __vbaFreeStrList();
  __vbaStrCopy();
  __vbaStrCopy();
  FUN_00417400((undefined4 *)&stack0xffffffe8,(undefined4 *)&stack0xffffffe4);
  __vbaFreeStrList();
  __vbaStrCopy();
  return;
}


// ---- FUN_00418060 @ 00418060

void FUN_00418060(void)

{
  undefined4 **local_1c;
  
  ExceptionList = &stack0xffffffec;
  local_1c = (undefined4 **)0x0;
  FUN_0041c9a0();
  __vbaStrCopy();
  FUN_0041c770((undefined4 *)&stack0xffffffe8);
  __vbaFreeStr();
  __vbaStrCopy();
  FUN_0041c770((undefined4 *)&stack0xffffffe8);
  __vbaFreeStr();
  __vbaStrCopy();
  FUN_0041c770((undefined4 *)&stack0xffffffe8);
  __vbaFreeStr();
  FUN_0041bd40();
  FUN_0041e730();
  __vbaStrCopy();
  local_1c = (undefined4 **)0x418108;
  __vbaStrCopy();
  local_1c = (undefined4 **)0x418115;
  FUN_00417400((undefined4 *)&stack0xffffffe8,&local_1c);
  local_1c = &local_1c;
  __vbaFreeStrList();
  local_1c = (undefined4 **)0x418134;
  __vbaStrCopy();
  return;
}


// ---- FUN_00418170 @ 00418170

void FUN_00418170(void)

{
  undefined4 local_1c;
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_00401736;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffffd4;
  local_8 = &DAT_00401310;
  local_18 = 0;
  local_1c = 0;
  ExceptionList = &pvStack_14;
  FUN_0041e730();
  __vbaStrCopy();
  __vbaStrCopy();
  FUN_00417400(&local_18,&local_1c);
  __vbaFreeStrList(2);
  __vbaStrCopy();
  return;
}


// ---- FUN_00418220 @ 00418220

void FUN_00418220(void)

{
  undefined4 local_1c;
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_00401736;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffffd4;
  local_8 = &DAT_00401320;
  local_18 = 0;
  local_1c = 0;
  ExceptionList = &pvStack_14;
  FUN_0041f3a0();
  FUN_0041e730();
  __vbaStrCopy();
  __vbaStrCopy();
  FUN_00417400(&local_18,&local_1c);
  __vbaFreeStrList(2);
  __vbaStrCopy();
  return;
}


// ---- FUN_004182d0 @ 004182d0

void FUN_004182d0(void)

{
  undefined4 local_1c;
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_00401736;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffffd4;
  local_8 = &DAT_00401330;
  local_18 = 0;
  local_1c = 0;
  ExceptionList = &pvStack_14;
  FUN_00421e90();
  __vbaStrCopy();
  __vbaStrCopy();
  FUN_00417400(&local_18,&local_1c);
  __vbaFreeStrList(2);
  __vbaStrCopy();
  return;
}


// ---- FUN_00418380 @ 00418380

void FUN_00418380(void)

{
  undefined4 local_1c;
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_00401736;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffffd4;
  local_8 = &DAT_00401340;
  local_18 = 0;
  local_1c = 0;
  ExceptionList = &pvStack_14;
  FUN_00422930();
  FUN_0041ae10();
  FUN_0041e730();
  __vbaStrCopy();
  __vbaStrCopy();
  FUN_00417400(&local_18,&local_1c);
  __vbaFreeStrList(2);
  __vbaStrCopy();
  return;
}


// ---- FUN_00418440 @ 00418440

void FUN_00418440(void)

{
  undefined4 local_1c;
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined1 *local_8;
  
  puStack_10 = &DAT_00401736;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffffd4;
  local_8 = &LAB_00401350;
  local_18 = 0;
  local_1c = 0;
  ExceptionList = &pvStack_14;
  FUN_004235e0();
  __vbaStrCopy();
  __vbaStrCopy();
  FUN_00417400(&local_18,&local_1c);
  __vbaFreeStrList(2);
  __vbaStrCopy();
  return;
}


// ---- FUN_004184f0 @ 004184f0

void FUN_004184f0(void)

{
  undefined4 local_1c;
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_00401736;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffffd4;
  local_8 = &DAT_00401360;
  local_18 = 0;
  local_1c = 0;
  ExceptionList = &pvStack_14;
  FUN_00423b20();
  __vbaStrCopy();
  __vbaStrCopy();
  FUN_00417400(&local_18,&local_1c);
  __vbaFreeStrList(2);
  __vbaStrCopy();
  return;
}


// ---- FUN_004185a0 @ 004185a0

void FUN_004185a0(void)

{
  undefined4 **local_1c;
  
  ExceptionList = &stack0xffffffec;
  local_1c = (undefined4 **)0x0;
  FUN_00424600();
  __vbaStrCopy();
  FUN_0041a4f0((undefined4 *)&stack0xffffffe8);
  __vbaFreeStr();
  __vbaStrCopy();
  FUN_0041a4f0((undefined4 *)&stack0xffffffe8);
  __vbaFreeStr();
  __vbaStrCopy();
  FUN_0041a4f0((undefined4 *)&stack0xffffffe8);
  __vbaFreeStr();
  __vbaStrCopy();
  local_1c = (undefined4 **)0x41863e;
  __vbaStrCopy();
  local_1c = (undefined4 **)0x41864b;
  FUN_00417400((undefined4 *)&stack0xffffffe8,&local_1c);
  local_1c = &local_1c;
  __vbaFreeStrList();
  local_1c = (undefined4 **)0x41866a;
  __vbaStrCopy();
  return;
}


// ---- FUN_004186a0 @ 004186a0

void __cdecl FUN_004186a0(undefined4 *param_1,undefined2 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_78;
  undefined4 local_74 [5];
  undefined4 local_60;
  undefined4 local_5c;
  wchar_t *local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  wchar_t *local_48;
  undefined4 local_44;
  undefined4 local_40 [4];
  undefined4 local_30 [4];
  undefined4 local_20;
  undefined4 local_1c;
  int *local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_00401736;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffff6c;
  local_8 = &DAT_00401380;
  local_18 = (int *)0x0;
  local_1c = 0;
  local_20 = 0;
  local_30[0] = 0;
  local_40[0] = 0;
  local_74[0] = 0;
  local_78 = 0;
  local_58 = (wchar_t *)0x80020004;
  local_50 = 3;
  local_48 = (wchar_t *)0x2;
  local_60 = 10;
  ExceptionList = &pvStack_14;
  iVar1 = (**(code **)(*DAT_0043302c + 0xbc))(DAT_0043302c,*param_1,3);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,DAT_0043302c,&DAT_00402ed0,0xbc);
  }
  uVar2 = local_20;
  local_20 = 0;
  __vbaObjSet(&local_18,uVar2);
  iVar1 = (**(code **)(*local_18 + 0x34))(local_18,local_74);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_18,&DAT_00403434,0x34);
  }
  iVar1 = (**(code **)(*local_18 + 0x20))(local_18,&local_78);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_18,&DAT_00403434,0x20);
  }
  if ((short)local_78 == 0 || (short)local_74[0] == 0) {
    local_58 = L"licence = ";
    local_60 = 8;
    local_48 = param_2;
    local_50 = 0x4002;
    rtcVarStrFromVar(local_30,&local_50);
    iVar1 = *local_18;
    uVar2 = __vbaVarAdd(local_40,local_30,&local_60);
    uVar2 = __vbaStrVarVal(&local_1c,uVar2);
    iVar1 = (**(code **)(iVar1 + 0xd4))(local_18,uVar2);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,local_18,&DAT_00403434,0xd4);
    }
    __vbaFreeStr();
    __vbaFreeVarList(2,local_30,local_40);
    iVar1 = (**(code **)(*local_18 + 0x5c))(local_18,local_74);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,local_18,&DAT_00403434,0x5c);
    }
    if ((short)local_74[0] == 0) {
      iVar1 = (**(code **)(*local_18 + 0xd0))(local_18);
      if (iVar1 < 0) {
        __vbaHresultCheckObj(iVar1,local_18,&DAT_00403434,0xd0);
      }
      local_60 = 2;
      local_58 = (wchar_t *)0x1;
      local_48 = L"code";
      local_50 = 8;
      iVar1 = (**(code **)(*local_18 + 0x128))
                        (local_18,8,local_4c,L"code",local_44,2,local_5c,1,local_54);
      goto joined_r0x00418ac1;
    }
    iVar1 = (**(code **)(*local_18 + 0xc0))();
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,local_18,&DAT_00403434,0xc0);
    }
    local_60 = 2;
    local_58 = (wchar_t *)CONCAT22(local_58._2_2_,*param_2);
    local_50 = 8;
    local_48 = L"licence";
    iVar1 = (**(code **)(*local_18 + 0x128))
                      (local_18,8,local_4c,L"licence",local_44,2,local_5c,local_58,local_54);
  }
  else {
    iVar1 = (**(code **)(*local_18 + 0xc0))(local_18);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,local_18,&DAT_00403434,0xc0);
    }
    local_58 = (wchar_t *)CONCAT22(local_58._2_2_,*param_2);
    local_60 = 2;
    local_50 = 8;
    local_48 = L"licence";
    iVar1 = (**(code **)(*local_18 + 0x128))
                      (local_18,8,local_4c,L"licence",local_44,2,local_5c,local_58,local_54);
  }
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_18,&DAT_00403434,0x128);
  }
  local_60 = 2;
  local_58 = (wchar_t *)0x1;
  local_48 = L"code";
  local_50 = 8;
  iVar1 = (**(code **)(*local_18 + 0x128))
                    (local_18,8,local_4c,L"code",local_44,2,local_5c,1,local_54);
joined_r0x00418ac1:
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_18,&DAT_00403434,0x128);
  }
  iVar1 = (**(code **)(*local_18 + 0x164))(local_18,1,0);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_18,&DAT_00403434,0x164);
  }
  iVar1 = (**(code **)(*local_18 + 0xc4))(local_18);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_18,&DAT_00403434,0xc4);
  }
  __vbaFreeObj(&LAB_00418b61);
  return;
}


// ---- FUN_00418b80 @ 00418b80

void FUN_00418b80(void)

{
  undefined4 local_1c;
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_00401736;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffffd4;
  local_8 = &DAT_00401390;
  local_18 = 0;
  local_1c = 0;
  ExceptionList = &pvStack_14;
  FUN_00419890();
  __vbaStrCopy();
  __vbaStrCopy();
  FUN_00417400(&local_18,&local_1c);
  __vbaFreeStrList(2);
  __vbaStrCopy();
  return;
}


// ---- FUN_00418c30 @ 00418c30

void FUN_00418c30(void)

{
  undefined4 local_1c;
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_00401736;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffffd4;
  local_8 = &DAT_004013a0;
  local_18 = 0;
  local_1c = 0;
  ExceptionList = &pvStack_14;
  FUN_0040b950();
  __vbaStrCopy();
  __vbaStrCopy();
  FUN_00417400(&local_18,&local_1c);
  __vbaFreeStrList(2);
  __vbaStrCopy();
  return;
}


// ---- FUN_00418ce0 @ 00418ce0

void FUN_00418ce0(void)

{
  undefined4 local_1c;
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_00401736;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffffd4;
  local_8 = &DAT_004013b0;
  local_18 = 0;
  local_1c = 0;
  ExceptionList = &pvStack_14;
  FUN_0042e4c0();
  __vbaStrCopy();
  __vbaStrCopy();
  FUN_00417400(&local_18,&local_1c);
  __vbaFreeStrList(2);
  __vbaStrCopy();
  return;
}


// ---- FUN_00418d90 @ 00418d90

void FUN_00418d90(void)

{
  undefined4 local_1c;
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_00401736;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffffd4;
  local_8 = &DAT_004013c0;
  local_18 = 0;
  local_1c = 0;
  ExceptionList = &pvStack_14;
  FUN_00419610();
  __vbaStrCopy();
  __vbaStrCopy();
  FUN_00417400(&local_18,&local_1c);
  __vbaFreeStrList(2);
  __vbaStrCopy();
  return;
}


// ---- FUN_00418e40 @ 00418e40

void FUN_00418e40(void)

{
  undefined4 local_1c;
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined1 *local_8;
  
  puStack_10 = &DAT_00401736;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffffd4;
  local_8 = &LAB_004013d0;
  local_18 = 0;
  local_1c = 0;
  ExceptionList = &pvStack_14;
  FUN_0042cfe0();
  __vbaStrCopy();
  __vbaStrCopy();
  FUN_00417400(&local_18,&local_1c);
  __vbaFreeStrList(2);
  __vbaStrCopy();
  return;
}


// ---- FUN_00418ef0 @ 00418ef0

void FUN_00418ef0(void)

{
  undefined4 local_1c;
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_00401736;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffffd4;
  local_8 = &DAT_004013e0;
  local_18 = 0;
  local_1c = 0;
  ExceptionList = &pvStack_14;
  FUN_00411800();
  __vbaStrCopy();
  __vbaStrCopy();
  FUN_00417400(&local_18,&local_1c);
  __vbaFreeStrList(2);
  __vbaStrCopy();
  return;
}


// ---- FUN_00418fa0 @ 00418fa0

void FUN_00418fa0(void)

{
  undefined4 local_1c;
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_00401736;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffffd4;
  local_8 = &DAT_004013f0;
  local_18 = 0;
  local_1c = 0;
  ExceptionList = &pvStack_14;
  FUN_004193c0();
  __vbaStrCopy();
  __vbaStrCopy();
  FUN_00417400(&local_18,&local_1c);
  __vbaFreeStrList(2);
  __vbaStrCopy();
  return;
}


// ---- FUN_00419050 @ 00419050

void FUN_00419050(void)

{
  undefined4 local_1c;
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_00401736;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffffd4;
  local_8 = &DAT_00401400;
  local_18 = 0;
  local_1c = 0;
  ExceptionList = &pvStack_14;
  FUN_0040e8e0();
  __vbaStrCopy();
  __vbaStrCopy();
  FUN_00417400(&local_18,&local_1c);
  __vbaFreeStrList(2);
  __vbaStrCopy();
  return;
}


// ---- FUN_00419100 @ 00419100

void FUN_00419100(void)

{
  undefined4 local_1c;
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_00401736;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffffd4;
  local_8 = &DAT_00401410;
  local_18 = 0;
  local_1c = 0;
  ExceptionList = &pvStack_14;
  FUN_0042b480();
  __vbaStrCopy();
  __vbaStrCopy();
  FUN_00417400(&local_18,&local_1c);
  __vbaFreeStrList(2);
  __vbaStrCopy();
  return;
}


// ---- FUN_004191b0 @ 004191b0

void FUN_004191b0(void)

{
  undefined4 local_1c;
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_00401736;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffffd4;
  local_8 = &DAT_00401420;
  local_18 = 0;
  local_1c = 0;
  ExceptionList = &pvStack_14;
  FUN_0041e730();
  __vbaStrCopy();
  __vbaStrCopy();
  FUN_00417400(&local_18,&local_1c);
  __vbaFreeStrList(2);
  __vbaStrCopy();
  return;
}


// ---- FUN_00419260 @ 00419260

void FUN_00419260(void)

{
  undefined4 local_1c;
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_00401736;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffffd4;
  local_8 = &DAT_00401430;
  local_18 = 0;
  local_1c = 0;
  ExceptionList = &pvStack_14;
  FUN_0040edc0();
  __vbaStrCopy();
  __vbaStrCopy();
  FUN_00417400(&local_18,&local_1c);
  __vbaFreeStrList(2);
  __vbaStrCopy();
  return;
}


// ---- FUN_00419310 @ 00419310

void FUN_00419310(void)

{
  undefined4 local_1c;
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_00401736;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffffd4;
  local_8 = &DAT_00401440;
  local_18 = 0;
  local_1c = 0;
  ExceptionList = &pvStack_14;
  FUN_0042abb0();
  __vbaStrCopy();
  __vbaStrCopy();
  FUN_00417400(&local_18,&local_1c);
  __vbaFreeStrList(2);
  __vbaStrCopy();
  return;
}


// ---- FUN_004193c0 @ 004193c0

void FUN_004193c0(void)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  undefined4 local_50 [6];
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  int *local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_00401736;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffff98;
  local_8 = &DAT_00401450;
  local_18 = (int *)0x0;
  local_1c = 0;
  local_50[0] = 0;
  ExceptionList = &pvStack_14;
  iVar2 = (**(code **)(*DAT_0043302c + 0xbc))(DAT_0043302c,L"Axis",3);
  pcVar3 = __vbaHresultCheckObj_exref;
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,DAT_0043302c,&DAT_00402ed0,0xbc);
  }
  uVar1 = local_1c;
  local_1c = 0;
  __vbaObjSet(&local_18,uVar1);
  iVar2 = (**(code **)(*local_18 + 0xd4))(local_18,L"stage = 4 AND axis = \'M\'");
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0xd4);
  }
  iVar2 = (**(code **)(*local_18 + 0x5c))(local_18,local_50);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0x5c);
  }
  if ((short)local_50[0] == 0) {
    iVar2 = (**(code **)(*local_18 + 0xd0))(local_18);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0xd0);
    }
    iVar2 = (**(code **)(*local_18 + 0x128))
                      (local_18,8,local_28,L"startSpeed",local_20,2,local_38,500,local_30);
    pcVar3 = __vbaHresultCheckObj_exref;
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0x128);
    }
    iVar2 = (**(code **)(*local_18 + 0x164))(local_18,1,0);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0x164);
    }
  }
  iVar2 = (**(code **)(*local_18 + 0xc4))(local_18);
  if (iVar2 < 0) {
    (*pcVar3)(iVar2,local_18,&DAT_00403434,0xc4);
  }
  __vbaFreeObj(&LAB_004195f9);
  return;
}


// ---- FUN_00419610 @ 00419610

void FUN_00419610(void)

{
  int iVar1;
  int *local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_00401736;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffff98;
  local_8 = &DAT_00401460;
  local_18 = (int *)0x0;
  ExceptionList = &pvStack_14;
  iVar1 = (**(code **)(*DAT_0043302c + 0xbc))(DAT_0043302c,L"Stage",3);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,DAT_0043302c,&DAT_00402ed0,0xbc);
  }
  __vbaObjSet(&local_18,0);
  iVar1 = (**(code **)(*local_18 + 0xd4))(local_18,L"stage = 2");
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_18,&DAT_00403434,0xd4);
  }
  iVar1 = (**(code **)(*local_18 + 0xd0))(local_18);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_18,&DAT_00403434,0xd0);
  }
  iVar1 = (**(code **)(*local_18 + 0x128))(local_18,8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_18,&DAT_00403434,0x128);
  }
  iVar1 = (**(code **)(*local_18 + 0x128))(local_18,8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_18,&DAT_00403434,0x128);
  }
  iVar1 = (**(code **)(*local_18 + 0x164))(local_18,1,0);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_18,&DAT_00403434,0x164);
  }
  iVar1 = (**(code **)(*local_18 + 0xc4))(local_18);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_18,&DAT_00403434,0xc4);
  }
  __vbaFreeObj(&LAB_00419879);
  return;
}


// ---- FUN_00419890 @ 00419890

void FUN_00419890(void)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  undefined4 local_50 [6];
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  int *local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_00401736;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffff98;
  local_8 = &DAT_00401470;
  local_18 = (int *)0x0;
  local_1c = 0;
  local_50[0] = 0;
  ExceptionList = &pvStack_14;
  iVar2 = (**(code **)(*DAT_0043302c + 0xbc))(DAT_0043302c,L"Axis",3);
  pcVar3 = __vbaHresultCheckObj_exref;
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,DAT_0043302c,&DAT_00402ed0,0xbc);
  }
  uVar1 = local_1c;
  local_1c = 0;
  __vbaObjSet(&local_18,uVar1);
  iVar2 = (**(code **)(*local_18 + 0xd4))(local_18,L"stage = 4 AND axis = \'Z\'");
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0xd4);
  }
  iVar2 = (**(code **)(*local_18 + 0x5c))(local_18,local_50);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0x5c);
  }
  if ((short)local_50[0] == 0) {
    iVar2 = (**(code **)(*local_18 + 0xd0))(local_18);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0xd0);
    }
    iVar2 = (**(code **)(*local_18 + 0x128))
                      (local_18,8,local_28,L"MaxSpeed",local_20,3,local_38,40000,local_30);
    pcVar3 = __vbaHresultCheckObj_exref;
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0x128);
    }
    iVar2 = (**(code **)(*local_18 + 0x164))(local_18,1,0);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0x164);
    }
  }
  iVar2 = (**(code **)(*local_18 + 0xd4))(local_18,L"stage = 4 AND axis = \'T\'");
  if (iVar2 < 0) {
    (*pcVar3)(iVar2,local_18,&DAT_00403434,0xd4);
  }
  iVar2 = (**(code **)(*local_18 + 0x5c))(local_18,local_50);
  if (iVar2 < 0) {
    (*pcVar3)(iVar2,local_18,&DAT_00403434,0x5c);
  }
  if ((short)local_50[0] == 0) {
    iVar2 = (**(code **)(*local_18 + 0xd0))(local_18);
    if (iVar2 < 0) {
      (*pcVar3)(iVar2,local_18,&DAT_00403434,0xd0);
    }
    iVar2 = (**(code **)(*local_18 + 0x128))
                      (local_18,8,local_28,L"MaxSpeed",local_20,3,local_38,50000,local_30);
    pcVar3 = __vbaHresultCheckObj_exref;
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0x128);
    }
    iVar2 = (**(code **)(*local_18 + 0x164))(local_18,1,0);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0x164);
    }
  }
  iVar2 = (**(code **)(*local_18 + 0xc4))(local_18);
  if (iVar2 < 0) {
    (*pcVar3)(iVar2,local_18,&DAT_00403434,0xc4);
  }
  __vbaFreeObj(&LAB_00419bdb);
  return;
}


// ---- FUN_00419bf0 @ 00419bf0

void FUN_00419bf0(void)

{
  undefined4 local_1c;
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_00401736;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffffd4;
  local_8 = &DAT_00401480;
  local_18 = 0;
  local_1c = 0;
  ExceptionList = &pvStack_14;
  FUN_0041ee30();
  __vbaStrCopy();
  __vbaStrCopy();
  FUN_00417400(&local_18,&local_1c);
  __vbaFreeStrList(2);
  __vbaStrCopy();
  return;
}


// ---- FUN_00419ca0 @ 00419ca0

void FUN_00419ca0(void)

{
  undefined4 local_1c;
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_00401736;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffffd4;
  local_8 = &DAT_00401490;
  local_18 = 0;
  local_1c = 0;
  ExceptionList = &pvStack_14;
  FUN_00412c30();
  FUN_00412460();
  FUN_00410060();
  FUN_0040cf80();
  FUN_0041e730();
  __vbaStrCopy();
  __vbaStrCopy();
  FUN_00417400(&local_18,&local_1c);
  __vbaFreeStrList(2);
  __vbaStrCopy();
  return;
}


// ---- FUN_00419d60 @ 00419d60

void FUN_00419d60(void)

{
  undefined4 local_1c;
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_00401736;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffffd4;
  local_8 = &DAT_004014a0;
  local_18 = 0;
  local_1c = 0;
  ExceptionList = &pvStack_14;
  FUN_0042eb90();
  FUN_0041b9e0();
  __vbaStrCopy();
  __vbaStrCopy();
  FUN_00417400(&local_18,&local_1c);
  __vbaFreeStrList(2);
  __vbaStrCopy();
  return;
}


// ---- FUN_00419e10 @ 00419e10

void FUN_00419e10(void)

{
  undefined4 local_1c;
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_00401736;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffffd4;
  local_8 = &DAT_004014b0;
  local_18 = 0;
  local_1c = 0;
  ExceptionList = &pvStack_14;
  FUN_004308b0();
  FUN_0041bb50();
  __vbaStrCopy();
  __vbaStrCopy();
  FUN_00417400(&local_18,&local_1c);
  __vbaFreeStrList(2);
  __vbaStrCopy();
  return;
}


// ---- FUN_00419ec0 @ 00419ec0

void FUN_00419ec0(void)

{
  undefined4 local_1c;
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_00401736;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffffd4;
  local_8 = &DAT_004014c0;
  local_18 = 0;
  local_1c = 0;
  ExceptionList = &pvStack_14;
  FUN_0041a960();
  __vbaStrCopy();
  __vbaStrCopy();
  FUN_00417400(&local_18,&local_1c);
  __vbaFreeStrList(2);
  __vbaStrCopy();
  return;
}


// ---- FUN_00419f70 @ 00419f70

void FUN_00419f70(void)

{
  undefined4 local_1c;
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_00401736;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffffd4;
  local_8 = &DAT_004014d0;
  local_18 = 0;
  local_1c = 0;
  ExceptionList = &pvStack_14;
  FUN_00428b50();
  __vbaStrCopy();
  __vbaStrCopy();
  FUN_00417400(&local_18,&local_1c);
  __vbaFreeStrList(2);
  __vbaStrCopy();
  return;
}


// ---- FUN_0041a020 @ 0041a020

void FUN_0041a020(void)

{
  undefined4 local_1c;
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_00401736;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffffd4;
  local_8 = &DAT_004014e0;
  local_18 = 0;
  local_1c = 0;
  ExceptionList = &pvStack_14;
  FUN_00428570();
  __vbaStrCopy();
  __vbaStrCopy();
  FUN_00417400(&local_18,&local_1c);
  __vbaFreeStrList(2);
  __vbaStrCopy();
  return;
}


// ---- FUN_0041a0d0 @ 0041a0d0

void FUN_0041a0d0(void)

{
  undefined4 local_1c;
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_00401736;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffffd4;
  local_8 = &DAT_004014f0;
  local_18 = 0;
  local_1c = 0;
  ExceptionList = &pvStack_14;
  FUN_0041e730();
  FUN_00427cb0();
  __vbaStrCopy();
  __vbaStrCopy();
  FUN_00417400(&local_18,&local_1c);
  __vbaFreeStrList(2);
  __vbaStrCopy();
  return;
}


// ---- FUN_0041a180 @ 0041a180

void FUN_0041a180(void)

{
  undefined4 local_1c;
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_00401736;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffffd4;
  local_8 = &DAT_00401500;
  local_18 = 0;
  local_1c = 0;
  ExceptionList = &pvStack_14;
  FUN_0041b440();
  FUN_00425160();
  __vbaStrCopy();
  __vbaStrCopy();
  FUN_00417400(&local_18,&local_1c);
  __vbaFreeStrList(2);
  __vbaStrCopy();
  return;
}


// ---- FUN_0041a230 @ 0041a230

void FUN_0041a230(void)

{
  short sVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 local_38;
  undefined4 local_34 [4];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c [2];
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_00401736;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffffb8;
  local_8 = &DAT_00401510;
  local_1c[0] = 0;
  local_20 = 0;
  local_24 = 0;
  local_34[0] = 0;
  local_38 = 0;
  ExceptionList = &pvStack_14;
  FUN_00424b80();
  if (DAT_00433010 == (int *)0x0) {
    __vbaNew2(&DAT_00402420,&DAT_00433010);
  }
  uVar4 = 0;
  uVar2 = (**(code **)(*DAT_00433010 + 0x304))(DAT_00433010,0x4c,0);
  uVar2 = __vbaObjSet(&local_24,uVar2);
  uVar2 = __vbaLateIdCallLd(local_34,uVar2);
  __vbaI4Var(uVar2);
  sVar1 = __vbaI2I4(uVar2);
  __vbaFreeObj();
  __vbaFreeVar(uVar4);
  pcVar3 = __vbaFreeStr_exref;
  if (sVar1 == 9) {
    local_38 = 2;
    __vbaStrCopy();
    FUN_004186a0(local_1c,(undefined2 *)&local_38);
    pcVar3 = __vbaFreeStr_exref;
    __vbaFreeStr();
    local_38 = 2;
    __vbaStrCopy();
    FUN_004186a0(local_1c,(undefined2 *)&local_38);
    __vbaFreeStr();
    local_38 = 2;
    __vbaStrCopy();
    FUN_004186a0(local_1c,(undefined2 *)&local_38);
    __vbaFreeStr();
  }
  local_38 = 1;
  __vbaStrCopy();
  FUN_004186a0(local_1c,(undefined2 *)&local_38);
  (*pcVar3)();
  local_38 = 1;
  __vbaStrCopy();
  FUN_004186a0(local_1c,(undefined2 *)&local_38);
  (*pcVar3)();
  local_38 = 1;
  __vbaStrCopy();
  FUN_004186a0(local_1c,(undefined2 *)&local_38);
  (*pcVar3)();
  __vbaStrCopy();
  __vbaStrCopy();
  FUN_00417400(local_1c,&local_20);
  __vbaFreeStrList(2,local_1c,&local_20);
  __vbaStrCopy();
  return;
}


// ---- FUN_0041a440 @ 0041a440

void FUN_0041a440(void)

{
  undefined4 local_1c;
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined1 *local_8;
  
  puStack_10 = &DAT_00401736;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffffd4;
  local_8 = &LAB_00401520;
  local_18 = 0;
  local_1c = 0;
  ExceptionList = &pvStack_14;
  FUN_00424870();
  __vbaStrCopy();
  __vbaStrCopy();
  FUN_00417400(&local_18,&local_1c);
  __vbaFreeStrList(2);
  __vbaStrCopy();
  return;
}


// ---- FUN_0041a4f0 @ 0041a4f0

void __cdecl FUN_0041a4f0(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_54;
  undefined4 local_50 [9];
  undefined4 local_2c;
  undefined4 local_1c;
  int *local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_00401736;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffff90;
  local_8 = &DAT_00401530;
  local_18 = (int *)0x0;
  local_1c = 0;
  local_50[0] = 0;
  local_54 = 0;
  ExceptionList = &pvStack_14;
  iVar2 = (**(code **)(*DAT_0043302c + 0xbc))(DAT_0043302c,*param_1,3);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,DAT_0043302c,&DAT_00402ed0,0xbc);
  }
  uVar1 = local_1c;
  local_1c = 0;
  __vbaObjSet(&local_18,uVar1);
  iVar2 = (**(code **)(*local_18 + 0x34))(local_18,local_50);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0x34);
  }
  iVar2 = (**(code **)(*local_18 + 0x20))(local_18,&local_54);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0x20);
  }
  if ((short)local_54 == 0 || (short)local_50[0] == 0) {
    iVar2 = (**(code **)(*local_18 + 0xd4))(local_18,L"licence = 25");
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0xd4);
    }
    iVar2 = (**(code **)(*local_18 + 0x5c))(local_18,local_50);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0x5c);
    }
    if ((short)local_50[0] == 0) {
      iVar2 = (**(code **)(*local_18 + 0xd0))(local_18);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0xd0);
      }
      iVar2 = (**(code **)(*local_18 + 0x128))(local_18,8);
    }
    else {
      iVar2 = (**(code **)(*local_18 + 0xc0))();
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0xc0);
      }
      iVar2 = (**(code **)(*local_18 + 0x128))(local_18,8);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0x128);
      }
      local_2c = 8;
      iVar2 = (**(code **)(*local_18 + 0x128))(local_18,8);
    }
  }
  else {
    iVar2 = (**(code **)(*local_18 + 0xc0))(local_18);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0xc0);
    }
    iVar2 = (**(code **)(*local_18 + 0x128))(local_18,8);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0x128);
    }
    local_2c = 8;
    iVar2 = (**(code **)(*local_18 + 0x128))(local_18,8);
  }
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0x128);
  }
  iVar2 = (**(code **)(*local_18 + 0x164))(local_18,1,0);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0x164);
  }
  iVar2 = (**(code **)(*local_18 + 0xc4))(local_18);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0xc4);
  }
  __vbaFreeObj(&LAB_0041a94c);
  return;
}


// ---- FUN_0041a960 @ 0041a960

void FUN_0041a960(void)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  int *piVar4;
  undefined4 local_6c [2];
  undefined4 local_64;
  undefined4 local_5c;
  undefined4 local_54;
  undefined4 local_4c;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int *local_24;
  int *local_20;
  undefined4 local_1c;
  int *local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_00401736;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffff64;
  local_8 = &DAT_00401540;
  local_18 = (int *)0x0;
  local_1c = 0;
  local_20 = (int *)0x0;
  local_24 = (int *)0x0;
  local_28 = 0;
  local_38 = 0;
  local_6c[0] = 0;
  ExceptionList = &pvStack_14;
  iVar1 = (**(code **)(*DAT_0043302c + 0x44))(DAT_0043302c,&local_24);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,DAT_0043302c,&DAT_00402ed0,0x44);
  }
  piVar4 = local_24;
  iVar1 = (**(code **)(*local_24 + 0x30))(local_24,8,local_44,L"Users",local_3c,&local_28);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar4,&DAT_00403ee0,0x30);
  }
  uVar2 = local_28;
  local_28 = 0;
  __vbaObjSet(&local_20,uVar2);
  __vbaFreeObj();
  iVar1 = (**(code **)(*local_20 + 0x70))
                    (local_20,8,local_44,L"StageInit",local_3c,3,local_54,1,local_4c,10,local_64,
                     0x80020004,local_5c,&local_24);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_20,&DAT_004034d0,0x70);
  }
  piVar4 = local_24;
  local_24 = (int *)0x0;
  __vbaObjSet(&local_1c,piVar4);
  iVar1 = (**(code **)(*local_20 + 0x60))(local_20,&local_24);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_20,&DAT_004034d0,0x60);
  }
  piVar4 = local_24;
  iVar1 = *local_24;
  uVar2 = __vbaObjSetAddref(&local_28,local_1c);
  iVar1 = (**(code **)(iVar1 + 0x28))(piVar4,uVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar4,&DAT_004034e0,0x28);
  }
  __vbaFreeObjList(2,&local_28,&local_24);
  local_40 = 2;
  iVar1 = (**(code **)(*DAT_0043302c + 0xbc))
                    (DAT_0043302c,L"USERS",3,local_44,2,local_3c,10,local_54,0x80020004,local_4c,10,
                     local_64,0x80020004,local_5c,&local_24);
  pcVar3 = __vbaHresultCheckObj_exref;
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,DAT_0043302c,&DAT_00402ed0,0xbc);
  }
  piVar4 = local_24;
  local_24 = (int *)0x0;
  __vbaObjSet(&local_18,piVar4);
  iVar1 = (**(code **)(*local_18 + 0xe4))(local_18);
  if (-1 < iVar1) goto LAB_0041ac0c;
  uVar2 = 0xe4;
  do {
    (*pcVar3)(iVar1,local_18,&DAT_00403434,uVar2);
LAB_0041ac0c:
    do {
      iVar1 = (**(code **)(*local_18 + 0x34))(local_18,local_6c);
      if (iVar1 < 0) {
        (*pcVar3)(iVar1,local_18,&DAT_00403434,0x34);
      }
      if ((short)local_6c[0] != 0) {
        iVar1 = (**(code **)(*local_18 + 0xc4))(local_18);
        if (iVar1 < 0) {
          (*pcVar3)(iVar1,local_18,&DAT_00403434,0xc4);
        }
        __vbaFreeObj(&LAB_0041adfe);
        __vbaFreeObj();
        __vbaFreeObj();
        return;
      }
      iVar1 = (**(code **)(*local_18 + 0xd0))();
      if (iVar1 < 0) {
        (*pcVar3)(iVar1,local_18,&DAT_00403434,0xd0);
      }
      iVar1 = (**(code **)(*local_18 + 0xb4))(local_18,&local_24);
      if (iVar1 < 0) {
        (*pcVar3)(iVar1,local_18,&DAT_00403434,0xb4);
      }
      piVar4 = local_24;
      iVar1 = (**(code **)(*local_24 + 0x30))(local_24,8,local_44,L"supervisor",local_3c,&local_28);
      if (iVar1 < 0) {
        __vbaHresultCheckObj(iVar1,piVar4,&DAT_00403eb4,0x30);
      }
      uVar2 = local_28;
      local_38 = 9;
      local_30 = local_28;
      local_28 = 0;
      piVar4 = local_18;
      iVar1 = (**(code **)(*local_18 + 0x128))
                        (local_18,8,local_54,L"StageInit",local_4c,9,local_34,uVar2,local_2c);
      pcVar3 = __vbaHresultCheckObj_exref;
      if (iVar1 < 0) {
        __vbaHresultCheckObj(iVar1,local_18,&DAT_00403434,0x128);
      }
      __vbaFreeObj();
      __vbaFreeVar(piVar4);
      iVar1 = (**(code **)(*local_18 + 0x164))(local_18,1,0);
      if (iVar1 < 0) {
        __vbaHresultCheckObj(iVar1,local_18,&DAT_00403434,0x164);
      }
      iVar1 = (**(code **)(*local_18 + 0xec))(local_18);
    } while (-1 < iVar1);
    uVar2 = 0xec;
  } while( true );
}


// ---- FUN_0041ae10 @ 0041ae10

void FUN_0041ae10(void)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  int *piVar4;
  undefined4 local_6c [2];
  undefined4 local_64;
  undefined4 local_5c;
  undefined4 local_54;
  undefined4 local_4c;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int *local_24;
  int *local_20;
  undefined4 local_1c;
  int *local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_00401736;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffff60;
  local_8 = &DAT_00401550;
  local_18 = (int *)0x0;
  local_1c = 0;
  local_20 = (int *)0x0;
  local_24 = (int *)0x0;
  local_28 = 0;
  local_38 = 0;
  local_6c[0] = 0;
  ExceptionList = &pvStack_14;
  iVar1 = (**(code **)(*DAT_0043302c + 0x44))(DAT_0043302c,&local_24);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,DAT_0043302c,&DAT_00402ed0,0x44);
  }
  piVar4 = local_24;
  iVar1 = (**(code **)(*local_24 + 0x30))(local_24,8,local_44,L"Users",local_3c,&local_28);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar4,&DAT_00403ee0,0x30);
  }
  uVar2 = local_28;
  local_28 = 0;
  __vbaObjSet(&local_20,uVar2);
  __vbaFreeObj();
  iVar1 = (**(code **)(*local_20 + 0x70))
                    (local_20,8,local_44,L"CommonToolbar",local_3c,3,local_54,1,local_4c,10,local_64
                     ,0x80020004,local_5c,&local_24);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_20,&DAT_004034d0,0x70);
  }
  piVar4 = local_24;
  local_24 = (int *)0x0;
  __vbaObjSet(&local_1c,piVar4);
  iVar1 = (**(code **)(*local_20 + 0x60))(local_20,&local_24);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_20,&DAT_004034d0,0x60);
  }
  piVar4 = local_24;
  iVar1 = *local_24;
  uVar2 = __vbaObjSetAddref(&local_28,local_1c);
  iVar1 = (**(code **)(iVar1 + 0x28))(piVar4,uVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar4,&DAT_004034e0,0x28);
  }
  __vbaFreeObjList(2,&local_28,&local_24);
  iVar1 = (**(code **)(*local_20 + 0x70))
                    (local_20,8,local_44,L"GunAlign",local_3c,3,local_54,1,local_4c,10,local_64,
                     0x80020004,local_5c,&local_24);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_20,&DAT_004034d0,0x70);
  }
  piVar4 = local_24;
  local_24 = (int *)0x0;
  __vbaObjSet(&local_1c,piVar4);
  iVar1 = (**(code **)(*local_20 + 0x60))(local_20,&local_24);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_20,&DAT_004034d0,0x60);
  }
  piVar4 = local_24;
  iVar1 = *local_24;
  uVar2 = __vbaObjSetAddref(&local_28,local_1c);
  iVar1 = (**(code **)(iVar1 + 0x28))(piVar4,uVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar4,&DAT_004034e0,0x28);
  }
  __vbaFreeObjList(2,&local_28,&local_24);
  local_40 = 2;
  iVar1 = (**(code **)(*DAT_0043302c + 0xbc))
                    (DAT_0043302c,L"USERS",3,local_44,2,local_3c,10,local_54,0x80020004,local_4c,10,
                     local_64,0x80020004,local_5c,&local_24);
  pcVar3 = __vbaHresultCheckObj_exref;
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,DAT_0043302c,&DAT_00402ed0,0xbc);
  }
  piVar4 = local_24;
  local_24 = (int *)0x0;
  __vbaObjSet(&local_18,piVar4);
  iVar1 = (**(code **)(*local_18 + 0xe4))(local_18);
  if (-1 < iVar1) goto LAB_0041b1c3;
  uVar2 = 0xe4;
  do {
    (*pcVar3)(iVar1,local_18,&DAT_00403434,uVar2);
LAB_0041b1c3:
    do {
      iVar1 = (**(code **)(*local_18 + 0x34))(local_18,local_6c);
      if (iVar1 < 0) {
        (*pcVar3)(iVar1,local_18,&DAT_00403434,0x34);
      }
      if ((short)local_6c[0] != 0) {
        iVar1 = (**(code **)(*local_18 + 0xc4))(local_18);
        if (iVar1 < 0) {
          (*pcVar3)(iVar1,local_18,&DAT_00403434,0xc4);
        }
        __vbaFreeObj(&LAB_0041b421);
        __vbaFreeObj();
        __vbaFreeObj();
        return;
      }
      iVar1 = (**(code **)(*local_18 + 0xd0))();
      if (iVar1 < 0) {
        (*pcVar3)(iVar1,local_18,&DAT_00403434,0xd0);
      }
      uVar2 = local_44;
      iVar1 = (**(code **)(*local_18 + 0x128))
                        (local_18,8,local_44,L"CommonToolbar",local_3c,0xb,local_54,0,local_4c);
      if (iVar1 < 0) {
        __vbaHresultCheckObj(iVar1,local_18,&DAT_00403434,0x128);
      }
      iVar1 = (**(code **)(*local_18 + 0xb4))(local_18,&local_24);
      if (iVar1 < 0) {
        __vbaHresultCheckObj(iVar1,local_18,&DAT_00403434,0xb4);
      }
      piVar4 = local_24;
      iVar1 = (**(code **)(*local_24 + 0x30))(local_24,8,uVar2,L"supervisor",local_3c,&local_28);
      if (iVar1 < 0) {
        __vbaHresultCheckObj(iVar1,piVar4,&DAT_00403eb4,0x30);
      }
      uVar2 = local_28;
      local_38 = 9;
      local_30 = local_28;
      local_28 = 0;
      piVar4 = local_18;
      iVar1 = (**(code **)(*local_18 + 0x128))
                        (local_18,8,local_54,L"gunAlign",local_4c,9,local_34,uVar2,local_2c);
      pcVar3 = __vbaHresultCheckObj_exref;
      if (iVar1 < 0) {
        __vbaHresultCheckObj(iVar1,local_18,&DAT_00403434,0x128);
      }
      __vbaFreeObj();
      __vbaFreeVar(piVar4);
      iVar1 = (**(code **)(*local_18 + 0x164))(local_18,1,0);
      if (iVar1 < 0) {
        __vbaHresultCheckObj(iVar1,local_18,&DAT_00403434,0x164);
      }
      iVar1 = (**(code **)(*local_18 + 0xec))(local_18);
    } while (-1 < iVar1);
    uVar2 = 0xec;
  } while( true );
}


// ---- FUN_0041b440 @ 0041b440

void FUN_0041b440(void)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  int *piVar4;
  undefined4 local_6c [2];
  undefined4 local_64;
  undefined4 local_5c;
  undefined4 local_54;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int *local_24;
  int *local_20;
  undefined4 local_1c;
  int *local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_00401736;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffff68;
  local_8 = &DAT_00401560;
  local_18 = (int *)0x0;
  local_1c = 0;
  local_20 = (int *)0x0;
  local_24 = (int *)0x0;
  local_28 = 0;
  local_38 = 0;
  local_6c[0] = 0;
  ExceptionList = &pvStack_14;
  iVar1 = (**(code **)(*DAT_0043302c + 0x44))(DAT_0043302c,&local_24);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,DAT_0043302c,&DAT_00402ed0,0x44);
  }
  piVar4 = local_24;
  iVar1 = (**(code **)(*local_24 + 0x30))(local_24,8,local_44,L"Users",local_3c,&local_28);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar4,&DAT_00403ee0,0x30);
  }
  uVar2 = local_28;
  local_28 = 0;
  __vbaObjSet(&local_20,uVar2);
  __vbaFreeObj();
  local_48 = 8;
  iVar1 = (**(code **)(*local_20 + 0x70))
                    (local_20,8,local_44,L"CalEnableExpires",local_3c,3,local_54,8,local_4c,10,
                     local_64,0x80020004,local_5c,&local_24);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_20,&DAT_004034d0,0x70);
  }
  piVar4 = local_24;
  local_24 = (int *)0x0;
  __vbaObjSet(&local_1c,piVar4);
  iVar1 = (**(code **)(*local_20 + 0x60))(local_20,&local_24);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_20,&DAT_004034d0,0x60);
  }
  piVar4 = local_24;
  iVar1 = *local_24;
  uVar2 = __vbaObjSetAddref(&local_28,local_1c);
  iVar1 = (**(code **)(iVar1 + 0x28))(piVar4,uVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar4,&DAT_004034e0,0x28);
  }
  __vbaFreeObjList(2,&local_28,&local_24);
  iVar1 = (**(code **)(*local_20 + 0x70))
                    (local_20,8,local_44,L"TempCalEnable",local_3c,3,local_54,1,local_4c,10,local_64
                     ,0x80020004,local_5c,&local_24);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_20,&DAT_004034d0,0x70);
  }
  piVar4 = local_24;
  local_24 = (int *)0x0;
  __vbaObjSet(&local_1c,piVar4);
  iVar1 = (**(code **)(*local_20 + 0x60))(local_20,&local_24);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_20,&DAT_004034d0,0x60);
  }
  piVar4 = local_24;
  iVar1 = *local_24;
  uVar2 = __vbaObjSetAddref(&local_28,local_1c);
  iVar1 = (**(code **)(iVar1 + 0x28))(piVar4,uVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar4,&DAT_004034e0,0x28);
  }
  __vbaFreeObjList(2,&local_28,&local_24);
  local_40 = 2;
  iVar1 = (**(code **)(*DAT_0043302c + 0xbc))
                    (DAT_0043302c,L"USERS",3,local_44,2,local_3c,10,local_54,0x80020004,local_4c,10,
                     local_64,0x80020004,local_5c,&local_24);
  pcVar3 = __vbaHresultCheckObj_exref;
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,DAT_0043302c,&DAT_00402ed0,0xbc);
  }
  piVar4 = local_24;
  local_24 = (int *)0x0;
  __vbaObjSet(&local_18,piVar4);
  iVar1 = (**(code **)(*local_18 + 0xe4))(local_18);
  if (-1 < iVar1) goto LAB_0041b7f1;
  uVar2 = 0xe4;
  do {
    (*pcVar3)(iVar1,local_18,&DAT_00403434,uVar2);
LAB_0041b7f1:
    do {
      iVar1 = (**(code **)(*local_18 + 0x34))(local_18,local_6c);
      if (iVar1 < 0) {
        (*pcVar3)(iVar1,local_18,&DAT_00403434,0x34);
      }
      if ((short)local_6c[0] != 0) {
        iVar1 = (**(code **)(*local_18 + 0xc4))(local_18);
        if (iVar1 < 0) {
          (*pcVar3)(iVar1,local_18,&DAT_00403434,0xc4);
        }
        __vbaFreeObj(&LAB_0041b9ce);
        __vbaFreeObj();
        __vbaFreeObj();
        return;
      }
      iVar1 = (**(code **)(*local_18 + 0xd0))();
      if (iVar1 < 0) {
        (*pcVar3)(iVar1,local_18,&DAT_00403434,0xd0);
      }
      rtcGetPresentDate(&local_38);
      piVar4 = local_18;
      iVar1 = (**(code **)(*local_18 + 0x128))
                        (local_18,8,local_44,L"CalEnableExpires",local_3c,local_38,local_34,local_30
                         ,local_2c);
      if (iVar1 < 0) {
        __vbaHresultCheckObj(iVar1,local_18,&DAT_00403434,0x128);
      }
      __vbaFreeVar(piVar4);
      iVar1 = (**(code **)(*local_18 + 0x128))
                        (local_18,8,local_44,L"TempCalEnable",local_3c,0xb,local_54,0,local_4c);
      pcVar3 = __vbaHresultCheckObj_exref;
      if (iVar1 < 0) {
        __vbaHresultCheckObj(iVar1,local_18,&DAT_00403434,0x128);
      }
      iVar1 = (**(code **)(*local_18 + 0x164))(local_18,1,0);
      if (iVar1 < 0) {
        __vbaHresultCheckObj(iVar1,local_18,&DAT_00403434,0x164);
      }
      iVar1 = (**(code **)(*local_18 + 0xec))(local_18);
    } while (-1 < iVar1);
    uVar2 = 0xec;
  } while( true );
}


// ---- FUN_0041b9e0 @ 0041b9e0

void FUN_0041b9e0(void)

{
  undefined1 *puVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 local_34;
  undefined4 local_30 [4];
  undefined4 local_20;
  undefined4 local_1c [2];
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_00401736;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffffbc;
  local_8 = &DAT_00401570;
  local_1c[0] = 0;
  local_20 = 0;
  local_30[0] = 0;
  local_34 = 0;
  ExceptionList = &pvStack_14;
  puVar1 = &stack0xffffffbc;
  if (DAT_00433010 == (int *)0x0) {
    ExceptionList = &pvStack_14;
    __vbaNew2(&DAT_00402420,&DAT_00433010);
    puVar1 = local_c;
  }
  local_c = puVar1;
  uVar5 = 0;
  uVar3 = (**(code **)(*DAT_00433010 + 0x304))(DAT_00433010,0x4c,0);
  uVar3 = __vbaObjSet(&local_20,uVar3);
  uVar3 = __vbaLateIdCallLd(local_30,uVar3);
  uVar4 = __vbaI4Var(uVar3);
  __vbaStrI4(uVar4);
  uVar4 = __vbaStrMove();
  rtcR8ValFromBstr(uVar4);
  sVar2 = __vbaFpI2();
  __vbaFreeStr();
  __vbaFreeObj();
  __vbaFreeVar(uVar3);
  if (((sVar2 == 8) || (sVar2 == 7)) || (sVar2 == 9)) {
    local_34 = 0x30;
    __vbaStrCopy(uVar5);
    puVar6 = local_1c;
    FUN_004186a0(puVar6,(undefined2 *)&local_34);
    __vbaFreeStr();
    local_34 = 0x30;
    __vbaStrCopy(puVar6);
    puVar6 = local_1c;
    FUN_004186a0(puVar6,(undefined2 *)&local_34);
    __vbaFreeStr();
    local_34 = 0x30;
    __vbaStrCopy(puVar6);
    FUN_004186a0(local_1c,(undefined2 *)&local_34);
    __vbaFreeStr();
  }
  return;
}


// ---- FUN_0041bb50 @ 0041bb50

void FUN_0041bb50(void)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  short sVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 local_34;
  undefined4 local_30 [4];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_00401736;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffffbc;
  local_8 = &DAT_00401580;
  local_1c = 0;
  local_20 = 0;
  local_30[0] = 0;
  local_34 = 0;
  ExceptionList = &pvStack_14;
  puVar1 = &stack0xffffffbc;
  if (DAT_00433010 == (int *)0x0) {
    ExceptionList = &pvStack_14;
    __vbaNew2(&DAT_00402420,&DAT_00433010);
    puVar1 = local_c;
  }
  local_c = puVar1;
  uVar5 = 0;
  uVar2 = (**(code **)(*DAT_00433010 + 0x304))(DAT_00433010,0x4c,0);
  uVar2 = __vbaObjSet(&local_20,uVar2);
  uVar3 = __vbaLateIdCallLd(local_30,uVar2);
  uVar2 = __vbaI4Var(uVar3);
  __vbaStrI4(uVar2);
  uVar2 = __vbaStrMove();
  rtcR8ValFromBstr(uVar2);
  uVar2 = __vbaFpI2();
  local_18 = uVar2;
  __vbaFreeStr();
  __vbaFreeObj();
  __vbaFreeVar(uVar3);
  sVar4 = (short)uVar2;
  if (((sVar4 == 8) || (sVar4 == 7)) || (sVar4 == 9)) {
    local_34 = 0x24;
    __vbaStrCopy(uVar5);
    puVar6 = &local_1c;
    FUN_004186a0(puVar6,(undefined2 *)&local_34);
    __vbaFreeStr();
    local_34 = 0x24;
    __vbaStrCopy(puVar6);
    puVar6 = &local_1c;
    FUN_004186a0(puVar6,(undefined2 *)&local_34);
    __vbaFreeStr();
    local_34 = 0x24;
    __vbaStrCopy(puVar6);
    FUN_004186a0(&local_1c,(undefined2 *)&local_34);
    __vbaFreeStr();
    uVar2 = local_18;
  }
  if ((short)uVar2 == 9) {
    local_34 = 0xe;
    __vbaStrCopy();
    FUN_004186a0(&local_1c,(undefined2 *)&local_34);
    __vbaFreeStr();
    local_34 = 0xe;
    __vbaStrCopy();
    FUN_004186a0(&local_1c,(undefined2 *)&local_34);
    __vbaFreeStr();
    local_34 = 0xe;
    __vbaStrCopy();
    FUN_004186a0(&local_1c,(undefined2 *)&local_34);
    __vbaFreeStr();
  }
  return;
}


// ---- FUN_0041bd40 @ 0041bd40

void FUN_0041bd40(void)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  code *pcVar5;
  int *piVar6;
  undefined4 local_7c [2];
  undefined4 local_74;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  wchar_t *local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int *local_34;
  undefined4 local_30;
  int *local_2c;
  int *local_28;
  int *local_24;
  undefined4 local_20;
  int *local_1c;
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_00401736;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffff48;
  local_8 = &DAT_00401590;
  local_18 = 0;
  local_1c = (int *)0x0;
  local_20 = 0;
  local_24 = (int *)0x0;
  local_28 = (int *)0x0;
  local_2c = (int *)0x0;
  local_30 = 0;
  local_34 = (int *)0x0;
  local_38 = 0;
  local_48 = 0;
  local_7c[0] = 0;
  ExceptionList = &pvStack_14;
  puVar1 = &stack0xffffff48;
  if (DAT_00433010 == (int *)0x0) {
    ExceptionList = &pvStack_14;
    __vbaNew2(&DAT_00402420,&DAT_00433010);
    puVar1 = local_c;
  }
  local_c = puVar1;
  uVar2 = (**(code **)(*DAT_00433010 + 0x304))(DAT_00433010,0x4c,0);
  uVar2 = __vbaObjSet(&local_34,uVar2);
  uVar2 = __vbaLateIdCallLd(&local_48,uVar2);
  uVar3 = __vbaI4Var(uVar2);
  __vbaStrI4(uVar3);
  __vbaStrMove();
  __vbaFreeObj();
  __vbaFreeVar(uVar2);
  local_68 = 10;
  iVar4 = (**(code **)(*DAT_0043302c + 0xbc))
                    (DAT_0043302c,L"validLicences",3,local_54,2,local_4c,10,local_64,0x80020004,
                     local_5c,10,local_74,0x80020004,local_6c,&local_34);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,DAT_0043302c,&DAT_00402ed0,0xbc);
  }
  piVar6 = local_34;
  local_34 = (int *)0x0;
  __vbaObjSet(&local_1c,piVar6);
  iVar4 = (**(code **)(*DAT_0043302c + 0xbc))
                    (DAT_0043302c,L"masterLicences",3,local_54,2,local_4c,10,local_64,0x80020004,
                     local_5c,10,local_74,0x80020004,local_6c,&local_34);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,DAT_0043302c,&DAT_00402ed0,0xbc);
  }
  piVar6 = local_34;
  local_34 = (int *)0x0;
  __vbaObjSet(&local_24,piVar6);
  iVar4 = (**(code **)(*DAT_0043302c + 0xbc))
                    (DAT_0043302c,L"copyLicences",3,local_54,2,local_4c,10,local_64,0x80020004,
                     local_5c,10,local_74,0x80020004,local_6c,&local_34);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,DAT_0043302c,&DAT_00402ed0,0xbc);
  }
  piVar6 = local_34;
  local_34 = (int *)0x0;
  __vbaObjSet(&local_2c,piVar6);
  local_68 = 10;
  local_60 = 0x80020004;
  local_58 = 3;
  iVar4 = (**(code **)(*DAT_0043302c + 0xbc))
                    (DAT_0043302c,L"serverLicences",3,local_54,2,local_4c,10,local_64,0x80020004,
                     local_5c,10,local_74,0x80020004,local_6c,&local_34);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,DAT_0043302c,&DAT_00402ed0,0xbc);
  }
  piVar6 = local_34;
  local_34 = (int *)0x0;
  __vbaObjSet(&local_28,piVar6);
  __vbaStrCat(local_20,L"machine = ");
  uVar2 = __vbaStrMove();
  __vbaStrCat(L"and class = 0",uVar2);
  __vbaStrMove();
  __vbaFreeStr();
  iVar4 = (**(code **)(*local_1c + 0xd4))(local_1c,local_18);
  pcVar5 = __vbaHresultCheckObj_exref;
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,local_1c,&DAT_00403434,0xd4);
  }
  while( true ) {
    iVar4 = (**(code **)(*local_1c + 0x5c))(local_1c,local_7c);
    if (iVar4 < 0) {
      (*pcVar5)(iVar4,local_1c,&DAT_00403434,0x5c);
    }
    if ((short)local_7c[0] != 0) break;
    iVar4 = (**(code **)(*local_24 + 0xc0))(local_24);
    if (iVar4 < 0) {
      (*pcVar5)(iVar4,local_24,&DAT_00403434,0xc0);
    }
    iVar4 = (**(code **)(*local_1c + 0xb4))(local_1c,&local_34);
    if (iVar4 < 0) {
      (*pcVar5)(iVar4,local_1c,&DAT_00403434,0xb4);
    }
    piVar6 = local_34;
    iVar4 = (**(code **)(*local_34 + 0x30))(local_34,8,local_54,L"licence",local_4c,&local_38);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar6,&DAT_00403eb4,0x30);
    }
    uVar2 = local_38;
    local_48 = 9;
    local_40 = local_38;
    local_38 = 0;
    piVar6 = local_24;
    iVar4 = (**(code **)(*local_24 + 0x128))
                      (local_24,8,local_64,L"licence",local_5c,9,local_44,uVar2,local_3c);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,local_24,&DAT_00403434,0x128);
    }
    __vbaFreeObj();
    __vbaFreeVar(piVar6);
    iVar4 = (**(code **)(*local_24 + 0x128))
                      (local_24,8,local_54,L"code",local_4c,2,local_64,1,local_5c);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,local_24,&DAT_00403434,0x128);
    }
    iVar4 = (**(code **)(*local_24 + 0x164))(local_24,1,0);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,local_24,&DAT_00403434,0x164);
    }
    iVar4 = (**(code **)(*local_2c + 0xc0))(local_2c);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,local_2c,&DAT_00403434,0xc0);
    }
    iVar4 = (**(code **)(*local_1c + 0xb4))(local_1c,&local_34);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,local_1c,&DAT_00403434,0xb4);
    }
    piVar6 = local_34;
    iVar4 = (**(code **)(*local_34 + 0x30))(local_34,8,local_54,L"licence",local_4c,&local_38);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar6,&DAT_00403eb4,0x30);
    }
    uVar2 = local_38;
    local_48 = 9;
    local_40 = local_38;
    local_38 = 0;
    piVar6 = local_2c;
    iVar4 = (**(code **)(*local_2c + 0x128))
                      (local_2c,8,local_64,L"licence",local_5c,9,local_44,uVar2,local_3c);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,local_2c,&DAT_00403434,0x128);
    }
    __vbaFreeObj();
    __vbaFreeVar(piVar6);
    local_50 = L"code";
    iVar4 = (**(code **)(*local_2c + 0x128))
                      (local_2c,8,local_54,L"code",local_4c,2,local_64,1,local_5c);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,local_2c,&DAT_00403434,0x128);
    }
    iVar4 = (**(code **)(*local_2c + 0x164))(local_2c,1,0);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,local_2c,&DAT_00403434,0x164);
    }
    iVar4 = (**(code **)(*local_28 + 0xc0))(local_28);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,local_28,&DAT_00403434,0xc0);
    }
    iVar4 = (**(code **)(*local_1c + 0xb4))(local_1c,&local_34);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,local_1c,&DAT_00403434,0xb4);
    }
    piVar6 = local_34;
    iVar4 = (**(code **)(*local_34 + 0x30))(local_34,8,local_54,L"licence",local_4c,&local_38);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar6,&DAT_00403eb4,0x30);
    }
    uVar2 = local_38;
    local_48 = 9;
    local_40 = local_38;
    local_38 = 0;
    piVar6 = local_28;
    iVar4 = (**(code **)(*local_28 + 0x128))
                      (local_28,8,local_64,L"licence",local_5c,9,local_44,uVar2,local_3c);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,local_28,&DAT_00403434,0x128);
    }
    __vbaFreeObj();
    __vbaFreeVar(piVar6);
    iVar4 = (**(code **)(*local_28 + 0x128))
                      (local_28,8,local_54,L"code",local_4c,2,local_64,1,local_5c);
    pcVar5 = __vbaHresultCheckObj_exref;
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,local_28,&DAT_00403434,0x128);
    }
    iVar4 = (**(code **)(*local_28 + 0x164))(local_28,1,0);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,local_28,&DAT_00403434,0x164);
    }
    iVar4 = (**(code **)(*local_1c + 0xdc))(local_1c,local_18);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,local_1c,&DAT_00403434,0xdc);
    }
  }
  iVar4 = (**(code **)(*local_1c + 0xc4))(local_1c);
  if (iVar4 < 0) {
    (*pcVar5)(iVar4,local_1c,&DAT_00403434,0xc4);
  }
  iVar4 = (**(code **)(*local_24 + 0xc4))(local_24);
  if (iVar4 < 0) {
    (*pcVar5)(iVar4,local_24,&DAT_00403434,0xc4);
  }
  iVar4 = (**(code **)(*local_2c + 0xc4))(local_2c);
  if (iVar4 < 0) {
    (*pcVar5)(iVar4,local_2c,&DAT_00403434,0xc4);
  }
  iVar4 = (**(code **)(*local_28 + 0xc4))(local_28);
  if (iVar4 < 0) {
    (*pcVar5)(iVar4,local_28,&DAT_00403434,0xc4);
  }
  __vbaFreeStr(&LAB_0041c754);
  __vbaFreeObj();
  __vbaFreeStr();
  __vbaFreeObj();
  __vbaFreeObj();
  __vbaFreeObj();
  return;
}


// ---- FUN_0041c770 @ 0041c770

void __cdecl FUN_0041c770(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_54;
  undefined4 local_50 [13];
  undefined4 local_1c;
  int *local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_00401736;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffff90;
  local_8 = &DAT_004015a0;
  local_18 = (int *)0x0;
  local_1c = 0;
  local_50[0] = 0;
  local_54 = 0;
  ExceptionList = &pvStack_14;
  iVar1 = (**(code **)(*DAT_0043302c + 0xbc))(DAT_0043302c,*param_1,3);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,DAT_0043302c,&DAT_00402ed0,0xbc);
  }
  uVar2 = local_1c;
  local_1c = 0;
  __vbaObjSet(&local_18,uVar2);
  iVar1 = (**(code **)(*local_18 + 0x34))(local_18,local_50);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_18,&DAT_00403434,0x34);
  }
  iVar1 = (**(code **)(*local_18 + 0x20))(local_18,&local_54);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_18,&DAT_00403434,0x20);
  }
  if ((short)local_54 != 0 && (short)local_50[0] != 0) {
LAB_0041c948:
    iVar1 = (**(code **)(*local_18 + 0xc4))(local_18);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,local_18,&DAT_00403434,0xc4);
    }
    __vbaFreeObj(&LAB_0041c986);
    return;
  }
  iVar1 = (**(code **)(*local_18 + 0xe4))(local_18);
  if (-1 < iVar1) goto LAB_0041c8db;
  uVar2 = 0xe4;
  do {
    __vbaHresultCheckObj(iVar1,local_18,&DAT_00403434,uVar2);
LAB_0041c8db:
    do {
      iVar1 = (**(code **)(*local_18 + 0x34))(local_18,local_50);
      if (iVar1 < 0) {
        __vbaHresultCheckObj(iVar1,local_18,&DAT_00403434,0x34);
      }
      if ((short)local_50[0] != 0) goto LAB_0041c948;
      iVar1 = (**(code **)(*local_18 + 0xcc))(local_18);
      if (iVar1 < 0) {
        __vbaHresultCheckObj(iVar1,local_18,&DAT_00403434,0xcc);
      }
      iVar1 = (**(code **)(*local_18 + 0xec))(local_18);
    } while (-1 < iVar1);
    uVar2 = 0xec;
  } while( true );
}


// ---- FUN_0041c9a0 @ 0041c9a0

void FUN_0041c9a0(void)

{
  undefined4 uVar1;
  int iVar2;
  int **ppiVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  wchar_t *pwVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58 [5];
  undefined4 local_44;
  undefined4 local_30;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int *local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_00401736;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffff88;
  local_8 = &DAT_004015b0;
  local_44 = 10;
  local_18 = (int *)0x0;
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_58[0] = 0;
  local_5c = 0;
  local_60 = 0;
  pwVar8 = L"validLicences";
  uVar9 = 3;
  ExceptionList = &pvStack_14;
  piVar7 = DAT_0043302c;
  iVar2 = (**(code **)(*DAT_0043302c + 0xbc))(DAT_0043302c,L"validLicences",3);
  uVar10 = local_30;
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,DAT_0043302c,&DAT_00402ed0,0xbc);
    uVar10 = local_30;
  }
  uVar1 = local_24;
  local_24 = 0;
  __vbaObjSet(&local_18,uVar1);
  local_60 = 1;
  __vbaStrCopy(piVar7,pwVar8);
  __vbaStrCopy(uVar9,uVar10);
  puVar6 = &local_1c;
  puVar5 = &local_5c;
  puVar4 = local_58;
  ppiVar3 = &local_18;
  local_5c = 0x19;
  local_58[0] = 8;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_20,
               (undefined2 *)&local_60);
  __vbaFreeStrList(2,&local_1c,&local_20);
  local_60 = 1;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_1c;
  puVar5 = &local_5c;
  puVar4 = local_58;
  ppiVar3 = &local_18;
  local_5c = 0x19;
  local_58[0] = 7;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_20,
               (undefined2 *)&local_60);
  __vbaFreeStrList(2,&local_1c,&local_20);
  local_60 = 0;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  local_5c = 3;
  local_58[0] = 9;
  puVar6 = &local_1c;
  puVar5 = &local_5c;
  puVar4 = local_58;
  ppiVar3 = &local_18;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_20,
               (undefined2 *)&local_60);
  __vbaFreeStrList(2,&local_1c,&local_20);
  local_60 = 0;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_1c;
  puVar5 = &local_5c;
  puVar4 = local_58;
  ppiVar3 = &local_18;
  local_5c = 4;
  local_58[0] = 9;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_20,
               (undefined2 *)&local_60);
  __vbaFreeStrList(2,&local_1c,&local_20);
  local_60 = 0;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_1c;
  puVar5 = &local_5c;
  puVar4 = local_58;
  ppiVar3 = &local_18;
  local_5c = 5;
  local_58[0] = 9;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_20,
               (undefined2 *)&local_60);
  __vbaFreeStrList(2,&local_1c,&local_20);
  local_60 = 0;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  local_5c = 7;
  puVar6 = &local_1c;
  puVar5 = &local_5c;
  puVar4 = local_58;
  ppiVar3 = &local_18;
  local_58[0] = 9;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_20,
               (undefined2 *)&local_60);
  __vbaFreeStrList(2,&local_1c,&local_20);
  local_60 = 0;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_1c;
  puVar5 = &local_5c;
  puVar4 = local_58;
  ppiVar3 = &local_18;
  local_5c = 9;
  local_58[0] = 9;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_20,
               (undefined2 *)&local_60);
  __vbaFreeStrList(2,&local_1c,&local_20);
  local_60 = 0;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_1c;
  puVar5 = &local_5c;
  puVar4 = local_58;
  ppiVar3 = &local_18;
  local_5c = 0xc;
  local_58[0] = 9;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_20,
               (undefined2 *)&local_60);
  __vbaFreeStrList(2,&local_1c,&local_20);
  local_60 = 0;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_1c;
  puVar5 = &local_5c;
  puVar4 = local_58;
  ppiVar3 = &local_18;
  local_5c = 0xf;
  local_58[0] = 9;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_20,
               (undefined2 *)&local_60);
  __vbaFreeStrList(2,&local_1c,&local_20);
  local_60 = 0;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_1c;
  puVar5 = &local_5c;
  puVar4 = local_58;
  ppiVar3 = &local_18;
  local_5c = 0x11;
  local_58[0] = 9;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_20,
               (undefined2 *)&local_60);
  __vbaFreeStrList(2,&local_1c,&local_20);
  local_60 = 0;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_1c;
  puVar5 = &local_5c;
  puVar4 = local_58;
  ppiVar3 = &local_18;
  local_5c = 0x18;
  local_58[0] = 9;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_20,
               (undefined2 *)&local_60);
  __vbaFreeStrList(2,&local_1c,&local_20);
  local_60 = 0;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_1c;
  puVar5 = &local_5c;
  puVar4 = local_58;
  ppiVar3 = &local_18;
  local_5c = 0x1b;
  local_58[0] = 9;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_20,
               (undefined2 *)&local_60);
  __vbaFreeStrList(2,&local_1c,&local_20);
  local_60 = 0;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_1c;
  puVar5 = &local_5c;
  puVar4 = local_58;
  ppiVar3 = &local_18;
  local_5c = 0x1f;
  local_58[0] = 9;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_20,
               (undefined2 *)&local_60);
  __vbaFreeStrList(2,&local_1c,&local_20);
  local_60 = 0;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_1c;
  puVar5 = &local_5c;
  puVar4 = local_58;
  local_5c = 1;
  local_58[0] = 9;
  ppiVar3 = &local_18;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_20,
               (undefined2 *)&local_60);
  __vbaFreeStrList(2,&local_1c,&local_20);
  local_60 = 0;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_1c;
  puVar5 = &local_5c;
  puVar4 = local_58;
  ppiVar3 = &local_18;
  local_5c = 0x17;
  local_58[0] = 9;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_20,
               (undefined2 *)&local_60);
  __vbaFreeStrList(2,&local_1c,&local_20);
  local_60 = 0;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_1c;
  puVar5 = &local_5c;
  puVar4 = local_58;
  ppiVar3 = &local_18;
  local_5c = 0xe;
  local_58[0] = 9;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_20,
               (undefined2 *)&local_60);
  __vbaFreeStrList(2,&local_1c,&local_20);
  local_60 = 1;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  local_5c = 2;
  local_58[0] = 9;
  puVar6 = &local_1c;
  puVar5 = &local_5c;
  puVar4 = local_58;
  ppiVar3 = &local_18;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_20,
               (undefined2 *)&local_60);
  __vbaFreeStrList(2,&local_1c,&local_20);
  local_60 = 1;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_1c;
  puVar5 = &local_5c;
  puVar4 = local_58;
  ppiVar3 = &local_18;
  local_5c = 6;
  local_58[0] = 9;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_20,
               (undefined2 *)&local_60);
  __vbaFreeStrList(2,&local_1c,&local_20);
  local_60 = 1;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_1c;
  puVar5 = &local_5c;
  puVar4 = local_58;
  ppiVar3 = &local_18;
  local_5c = 0xb;
  local_58[0] = 9;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_20,
               (undefined2 *)&local_60);
  __vbaFreeStrList(2,&local_1c,&local_20);
  local_60 = 1;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_1c;
  puVar5 = &local_5c;
  puVar4 = local_58;
  ppiVar3 = &local_18;
  local_5c = 0x14;
  local_58[0] = 9;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_20,
               (undefined2 *)&local_60);
  __vbaFreeStrList(2,&local_1c,&local_20);
  local_60 = 1;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_1c;
  puVar5 = &local_5c;
  puVar4 = local_58;
  ppiVar3 = &local_18;
  local_5c = 0x20;
  local_58[0] = 9;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_20,
               (undefined2 *)&local_60);
  __vbaFreeStrList(2,&local_1c,&local_20);
  local_60 = 1;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_1c;
  puVar5 = &local_5c;
  puVar4 = local_58;
  ppiVar3 = &local_18;
  local_5c = 0x21;
  local_58[0] = 9;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_20,
               (undefined2 *)&local_60);
  __vbaFreeStrList(2,&local_1c,&local_20);
  local_60 = 1;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_1c;
  puVar5 = &local_5c;
  puVar4 = local_58;
  ppiVar3 = &local_18;
  local_5c = 0x19;
  local_58[0] = 9;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_20,
               (undefined2 *)&local_60);
  __vbaFreeStrList(2,&local_1c,&local_20);
  local_60 = 2;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_1c;
  puVar5 = &local_5c;
  puVar4 = local_58;
  ppiVar3 = &local_18;
  local_5c = 0x1c;
  local_58[0] = 9;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_20,
               (undefined2 *)&local_60);
  __vbaFreeStrList(2,&local_1c,&local_20);
  local_60 = 2;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  local_5c = 0x1d;
  local_58[0] = 9;
  FUN_0040b5a0(&local_18,(undefined2 *)local_58,(undefined2 *)&local_5c,&local_1c,&local_20,
               (undefined2 *)&local_60);
  __vbaFreeStrList(2,&local_1c,&local_20);
  iVar2 = (**(code **)(*local_18 + 0xc4))(local_18);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0xc4);
  }
  __vbaFreeObj(&LAB_0041d2da);
  return;
}


// ---- FUN_0041d2f0 @ 0041d2f0

void FUN_0041d2f0(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int **ppiVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  wchar_t *pwVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64 [2];
  undefined4 local_5c;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_44;
  undefined4 local_3c;
  undefined4 local_34;
  undefined4 local_30;
  int *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int *local_20;
  undefined4 local_1c;
  int *local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_00401736;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffff64;
  local_8 = &DAT_004015c0;
  local_18 = (int *)0x0;
  local_1c = 0;
  local_20 = (int *)0x0;
  local_24 = 0;
  local_28 = 0;
  local_2c = (int *)0x0;
  local_30 = 0;
  local_64[0] = 0;
  local_68 = 0;
  local_6c = 0;
  ExceptionList = &pvStack_14;
  iVar2 = (**(code **)(*DAT_0043302c + 0xbc))(DAT_0043302c,L"validLicences",3);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,DAT_0043302c,&DAT_00402ed0,0xbc);
  }
  piVar3 = local_2c;
  local_2c = (int *)0x0;
  __vbaObjSet(&local_18,piVar3);
  iVar2 = (**(code **)(*local_18 + 0x34))(local_18,local_64);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0x34);
  }
  iVar2 = (**(code **)(*local_18 + 0x20))(local_18,&local_68);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0x20);
  }
  if ((short)local_68 != 0 && (short)local_64[0] != 0) {
LAB_0041d4d8:
    iVar2 = (**(code **)(*local_18 + 0xc4))(local_18);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0xc4);
    }
    iVar2 = (**(code **)(*DAT_0043302c + 0x44))(DAT_0043302c,&local_2c);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,DAT_0043302c,&DAT_00402ed0,0x44);
    }
    piVar3 = local_2c;
    iVar2 = (**(code **)(*local_2c + 0x30))(local_2c,8,local_3c,L"validLicences",local_34,&local_30)
    ;
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar3,&DAT_00403ee0,0x30);
    }
    uVar10 = local_30;
    local_30 = 0;
    __vbaObjSet(&local_20,uVar10);
    __vbaFreeObj();
    iVar2 = (**(code **)(*local_20 + 0x70))
                      (local_20,8,local_3c,L"SalesCode",local_34,3,local_4c,10,local_44,2,local_5c,
                       0x14,local_54,&local_2c);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,local_20,&DAT_004034d0,0x70);
    }
    piVar3 = local_2c;
    local_2c = (int *)0x0;
    __vbaObjSet(&local_1c,piVar3);
    iVar2 = (**(code **)(*local_20 + 0x60))(local_20,&local_2c);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,local_20,&DAT_004034d0,0x60);
    }
    piVar3 = local_2c;
    iVar2 = *local_2c;
    uVar10 = __vbaObjSetAddref(&local_30,local_1c);
    iVar2 = (**(code **)(iVar2 + 0x28))(piVar3,uVar10);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar3,&DAT_004034e0,0x28);
    }
    __vbaFreeObjList(2,&local_30,&local_2c);
    iVar2 = (**(code **)(*local_20 + 0x70))
                      (local_20,8,local_3c,L"PartNumber",local_34,3,local_4c,10,local_44,2,local_5c,
                       0x10,local_54,&local_2c);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,local_20,&DAT_004034d0,0x70);
    }
    piVar3 = local_2c;
    local_2c = (int *)0x0;
    __vbaObjSet(&local_1c,piVar3);
    iVar2 = (**(code **)(*local_20 + 0x60))(local_20,&local_2c);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,local_20,&DAT_004034d0,0x60);
    }
    piVar3 = local_2c;
    iVar2 = *local_2c;
    uVar10 = __vbaObjSetAddref(&local_30,local_1c);
    iVar2 = (**(code **)(iVar2 + 0x28))(piVar3,uVar10);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar3,&DAT_004034e0,0x28);
    }
    __vbaFreeObjList(2,&local_30,&local_2c);
    local_50 = 10;
    pwVar8 = L"validLicences";
    uVar9 = 3;
    piVar3 = DAT_0043302c;
    iVar2 = (**(code **)(*DAT_0043302c + 0xbc))
                      (DAT_0043302c,L"validLicences",3,local_3c,2,local_34,10,local_4c,0x80020004,
                       local_44,10,local_5c,0x80020004,local_54,&local_2c);
    uVar10 = local_3c;
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,DAT_0043302c,&DAT_00402ed0,0xbc);
      uVar10 = local_3c;
    }
    piVar1 = local_2c;
    local_2c = (int *)0x0;
    __vbaObjSet(&local_18,piVar1);
    local_6c = 0;
    __vbaStrCopy(piVar3,pwVar8);
    __vbaStrCopy(uVar9,uVar10);
    puVar6 = &local_24;
    puVar5 = &local_68;
    puVar7 = local_64;
    ppiVar4 = &local_18;
    local_68 = 3;
    local_64[0] = 8;
    FUN_0040b5a0(ppiVar4,(undefined2 *)puVar7,(undefined2 *)puVar5,puVar6,&local_28,
                 (undefined2 *)&local_6c);
    __vbaFreeStrList(2,&local_24,&local_28);
    local_6c = 0;
    __vbaStrCopy(ppiVar4,puVar7);
    __vbaStrCopy(puVar5,puVar6);
    puVar6 = &local_24;
    puVar5 = &local_68;
    puVar7 = local_64;
    ppiVar4 = &local_18;
    local_68 = 4;
    local_64[0] = 8;
    FUN_0040b5a0(ppiVar4,(undefined2 *)puVar7,(undefined2 *)puVar5,puVar6,&local_28,
                 (undefined2 *)&local_6c);
    __vbaFreeStrList(2,&local_24,&local_28);
    local_6c = 0;
    __vbaStrCopy(ppiVar4,puVar7);
    __vbaStrCopy(puVar5,puVar6);
    puVar6 = &local_24;
    local_68 = 5;
    local_64[0] = 8;
    puVar5 = &local_68;
    puVar7 = local_64;
    ppiVar4 = &local_18;
    FUN_0040b5a0(ppiVar4,(undefined2 *)puVar7,(undefined2 *)puVar5,puVar6,&local_28,
                 (undefined2 *)&local_6c);
    __vbaFreeStrList(2,&local_24,&local_28);
    local_6c = 0;
    __vbaStrCopy(ppiVar4,puVar7);
    __vbaStrCopy(puVar5,puVar6);
    puVar6 = &local_24;
    puVar5 = &local_68;
    puVar7 = local_64;
    ppiVar4 = &local_18;
    local_68 = 7;
    local_64[0] = 8;
    FUN_0040b5a0(ppiVar4,(undefined2 *)puVar7,(undefined2 *)puVar5,puVar6,&local_28,
                 (undefined2 *)&local_6c);
    __vbaFreeStrList(2,&local_24,&local_28);
    local_6c = 0;
    __vbaStrCopy(ppiVar4,puVar7);
    __vbaStrCopy(puVar5,puVar6);
    puVar6 = &local_24;
    puVar5 = &local_68;
    puVar7 = local_64;
    ppiVar4 = &local_18;
    local_68 = 9;
    local_64[0] = 8;
    FUN_0040b5a0(ppiVar4,(undefined2 *)puVar7,(undefined2 *)puVar5,puVar6,&local_28,
                 (undefined2 *)&local_6c);
    __vbaFreeStrList(2,&local_24,&local_28);
    local_6c = 0;
    __vbaStrCopy(ppiVar4,puVar7);
    __vbaStrCopy(puVar5,puVar6);
    local_68 = 0xc;
    local_64[0] = 8;
    puVar6 = &local_24;
    puVar5 = &local_68;
    puVar7 = local_64;
    ppiVar4 = &local_18;
    FUN_0040b5a0(ppiVar4,(undefined2 *)puVar7,(undefined2 *)puVar5,puVar6,&local_28,
                 (undefined2 *)&local_6c);
    __vbaFreeStrList(2,&local_24,&local_28);
    local_6c = 0;
    __vbaStrCopy(ppiVar4,puVar7);
    __vbaStrCopy(puVar5,puVar6);
    puVar6 = &local_24;
    puVar5 = &local_68;
    puVar7 = local_64;
    ppiVar4 = &local_18;
    local_68 = 0xf;
    local_64[0] = 8;
    FUN_0040b5a0(ppiVar4,(undefined2 *)puVar7,(undefined2 *)puVar5,puVar6,&local_28,
                 (undefined2 *)&local_6c);
    __vbaFreeStrList(2,&local_24,&local_28);
    local_6c = 0;
    __vbaStrCopy(ppiVar4,puVar7);
    __vbaStrCopy(puVar5,puVar6);
    puVar6 = &local_24;
    puVar5 = &local_68;
    puVar7 = local_64;
    ppiVar4 = &local_18;
    local_68 = 0x11;
    local_64[0] = 8;
    FUN_0040b5a0(ppiVar4,(undefined2 *)puVar7,(undefined2 *)puVar5,puVar6,&local_28,
                 (undefined2 *)&local_6c);
    __vbaFreeStrList(2,&local_24,&local_28);
    local_6c = 0;
    __vbaStrCopy(ppiVar4,puVar7);
    __vbaStrCopy(puVar5,puVar6);
    puVar6 = &local_24;
    puVar5 = &local_68;
    puVar7 = local_64;
    ppiVar4 = &local_18;
    local_68 = 0x18;
    local_64[0] = 8;
    FUN_0040b5a0(ppiVar4,(undefined2 *)puVar7,(undefined2 *)puVar5,puVar6,&local_28,
                 (undefined2 *)&local_6c);
    __vbaFreeStrList(2,&local_24,&local_28);
    local_6c = 0;
    __vbaStrCopy(ppiVar4,puVar7);
    __vbaStrCopy(puVar5,puVar6);
    puVar6 = &local_24;
    puVar5 = &local_68;
    puVar7 = local_64;
    ppiVar4 = &local_18;
    local_68 = 0x1b;
    local_64[0] = 8;
    FUN_0040b5a0(ppiVar4,(undefined2 *)puVar7,(undefined2 *)puVar5,puVar6,&local_28,
                 (undefined2 *)&local_6c);
    __vbaFreeStrList(2,&local_24,&local_28);
    local_6c = 0;
    __vbaStrCopy(ppiVar4,puVar7);
    __vbaStrCopy(puVar5,puVar6);
    puVar6 = &local_24;
    puVar5 = &local_68;
    puVar7 = local_64;
    ppiVar4 = &local_18;
    local_68 = 0x1f;
    local_64[0] = 8;
    FUN_0040b5a0(ppiVar4,(undefined2 *)puVar7,(undefined2 *)puVar5,puVar6,&local_28,
                 (undefined2 *)&local_6c);
    __vbaFreeStrList(2,&local_24,&local_28);
    local_6c = 1;
    __vbaStrCopy(ppiVar4,puVar7);
    __vbaStrCopy(puVar5,puVar6);
    puVar6 = &local_24;
    puVar5 = &local_68;
    puVar7 = local_64;
    ppiVar4 = &local_18;
    local_68 = 1;
    local_64[0] = 8;
    FUN_0040b5a0(ppiVar4,(undefined2 *)puVar7,(undefined2 *)puVar5,puVar6,&local_28,
                 (undefined2 *)&local_6c);
    __vbaFreeStrList(2,&local_24,&local_28);
    local_6c = 1;
    __vbaStrCopy(ppiVar4,puVar7);
    __vbaStrCopy(puVar5,puVar6);
    puVar6 = &local_24;
    puVar5 = &local_68;
    puVar7 = local_64;
    ppiVar4 = &local_18;
    local_68 = 2;
    local_64[0] = 8;
    FUN_0040b5a0(ppiVar4,(undefined2 *)puVar7,(undefined2 *)puVar5,puVar6,&local_28,
                 (undefined2 *)&local_6c);
    __vbaFreeStrList(2,&local_24,&local_28);
    local_6c = 1;
    __vbaStrCopy(ppiVar4,puVar7);
    __vbaStrCopy(puVar5,puVar6);
    puVar6 = &local_24;
    puVar5 = &local_68;
    puVar7 = local_64;
    local_68 = 6;
    local_64[0] = 8;
    ppiVar4 = &local_18;
    FUN_0040b5a0(ppiVar4,(undefined2 *)puVar7,(undefined2 *)puVar5,puVar6,&local_28,
                 (undefined2 *)&local_6c);
    __vbaFreeStrList(2,&local_24,&local_28);
    local_6c = 1;
    __vbaStrCopy(ppiVar4,puVar7);
    __vbaStrCopy(puVar5,puVar6);
    puVar6 = &local_24;
    puVar5 = &local_68;
    puVar7 = local_64;
    ppiVar4 = &local_18;
    local_68 = 0xb;
    local_64[0] = 8;
    FUN_0040b5a0(ppiVar4,(undefined2 *)puVar7,(undefined2 *)puVar5,puVar6,&local_28,
                 (undefined2 *)&local_6c);
    __vbaFreeStrList(2,&local_24,&local_28);
    local_6c = 1;
    __vbaStrCopy(ppiVar4,puVar7);
    __vbaStrCopy(puVar5,puVar6);
    puVar6 = &local_24;
    puVar5 = &local_68;
    puVar7 = local_64;
    ppiVar4 = &local_18;
    local_68 = 0xe;
    local_64[0] = 8;
    FUN_0040b5a0(ppiVar4,(undefined2 *)puVar7,(undefined2 *)puVar5,puVar6,&local_28,
                 (undefined2 *)&local_6c);
    __vbaFreeStrList(2,&local_24,&local_28);
    local_6c = 1;
    __vbaStrCopy(ppiVar4,puVar7);
    __vbaStrCopy(puVar5,puVar6);
    local_68 = 0x14;
    local_64[0] = 8;
    puVar6 = &local_24;
    puVar5 = &local_68;
    puVar7 = local_64;
    ppiVar4 = &local_18;
    FUN_0040b5a0(ppiVar4,(undefined2 *)puVar7,(undefined2 *)puVar5,puVar6,&local_28,
                 (undefined2 *)&local_6c);
    __vbaFreeStrList(2,&local_24,&local_28);
    local_6c = 1;
    __vbaStrCopy(ppiVar4,puVar7);
    __vbaStrCopy(puVar5,puVar6);
    puVar6 = &local_24;
    puVar5 = &local_68;
    puVar7 = local_64;
    ppiVar4 = &local_18;
    local_68 = 0x17;
    local_64[0] = 8;
    FUN_0040b5a0(ppiVar4,(undefined2 *)puVar7,(undefined2 *)puVar5,puVar6,&local_28,
                 (undefined2 *)&local_6c);
    __vbaFreeStrList(2,&local_24,&local_28);
    local_6c = 1;
    __vbaStrCopy(ppiVar4,puVar7);
    __vbaStrCopy(puVar5,puVar6);
    puVar6 = &local_24;
    puVar5 = &local_68;
    puVar7 = local_64;
    ppiVar4 = &local_18;
    local_68 = 0x20;
    local_64[0] = 8;
    FUN_0040b5a0(ppiVar4,(undefined2 *)puVar7,(undefined2 *)puVar5,puVar6,&local_28,
                 (undefined2 *)&local_6c);
    __vbaFreeStrList(2,&local_24,&local_28);
    local_6c = 1;
    __vbaStrCopy(ppiVar4,puVar7);
    __vbaStrCopy(puVar5,puVar6);
    local_68 = 0x21;
    puVar6 = &local_24;
    puVar5 = &local_68;
    puVar7 = local_64;
    ppiVar4 = &local_18;
    local_64[0] = 8;
    FUN_0040b5a0(ppiVar4,(undefined2 *)puVar7,(undefined2 *)puVar5,puVar6,&local_28,
                 (undefined2 *)&local_6c);
    __vbaFreeStrList(2,&local_24,&local_28);
    local_6c = 2;
    __vbaStrCopy(ppiVar4,puVar7);
    __vbaStrCopy(puVar5,puVar6);
    puVar6 = &local_24;
    puVar5 = &local_68;
    puVar7 = local_64;
    ppiVar4 = &local_18;
    local_68 = 0x1c;
    local_64[0] = 8;
    FUN_0040b5a0(ppiVar4,(undefined2 *)puVar7,(undefined2 *)puVar5,puVar6,&local_28,
                 (undefined2 *)&local_6c);
    __vbaFreeStrList(2,&local_24,&local_28);
    local_6c = 2;
    __vbaStrCopy(ppiVar4,puVar7);
    __vbaStrCopy(puVar5,puVar6);
    puVar6 = &local_24;
    puVar5 = &local_68;
    puVar7 = local_64;
    ppiVar4 = &local_18;
    local_68 = 0x1d;
    local_64[0] = 8;
    FUN_0040b5a0(ppiVar4,(undefined2 *)puVar7,(undefined2 *)puVar5,puVar6,&local_28,
                 (undefined2 *)&local_6c);
    __vbaFreeStrList(2,&local_24,&local_28);
    local_6c = 0;
    __vbaStrCopy(ppiVar4,puVar7);
    __vbaStrCopy(puVar5,puVar6);
    puVar6 = &local_24;
    puVar5 = &local_68;
    puVar7 = local_64;
    ppiVar4 = &local_18;
    local_68 = 3;
    local_64[0] = 7;
    FUN_0040b5a0(ppiVar4,(undefined2 *)puVar7,(undefined2 *)puVar5,puVar6,&local_28,
                 (undefined2 *)&local_6c);
    __vbaFreeStrList(2,&local_24,&local_28);
    local_6c = 0;
    __vbaStrCopy(ppiVar4,puVar7);
    __vbaStrCopy(puVar5,puVar6);
    puVar6 = &local_24;
    puVar5 = &local_68;
    puVar7 = local_64;
    ppiVar4 = &local_18;
    local_68 = 4;
    local_64[0] = 7;
    FUN_0040b5a0(ppiVar4,(undefined2 *)puVar7,(undefined2 *)puVar5,puVar6,&local_28,
                 (undefined2 *)&local_6c);
    __vbaFreeStrList(2,&local_24,&local_28);
    local_6c = 0;
    __vbaStrCopy(ppiVar4,puVar7);
    __vbaStrCopy(puVar5,puVar6);
    puVar6 = &local_24;
    puVar5 = &local_68;
    puVar7 = local_64;
    ppiVar4 = &local_18;
    local_68 = 5;
    local_64[0] = 7;
    FUN_0040b5a0(ppiVar4,(undefined2 *)puVar7,(undefined2 *)puVar5,puVar6,&local_28,
                 (undefined2 *)&local_6c);
    __vbaFreeStrList(2,&local_24,&local_28);
    local_6c = 0;
    __vbaStrCopy(ppiVar4,puVar7);
    __vbaStrCopy(puVar5,puVar6);
    local_68 = 7;
    local_64[0] = 7;
    puVar6 = &local_24;
    puVar5 = &local_68;
    puVar7 = local_64;
    ppiVar4 = &local_18;
    FUN_0040b5a0(ppiVar4,(undefined2 *)puVar7,(undefined2 *)puVar5,puVar6,&local_28,
                 (undefined2 *)&local_6c);
    __vbaFreeStrList(2,&local_24,&local_28);
    local_6c = 0;
    __vbaStrCopy(ppiVar4,puVar7);
    __vbaStrCopy(puVar5,puVar6);
    puVar6 = &local_24;
    puVar5 = &local_68;
    puVar7 = local_64;
    ppiVar4 = &local_18;
    local_68 = 9;
    local_64[0] = 7;
    FUN_0040b5a0(ppiVar4,(undefined2 *)puVar7,(undefined2 *)puVar5,puVar6,&local_28,
                 (undefined2 *)&local_6c);
    __vbaFreeStrList(2,&local_24,&local_28);
    local_6c = 0;
    __vbaStrCopy(ppiVar4,puVar7);
    __vbaStrCopy(puVar5,puVar6);
    puVar6 = &local_24;
    puVar5 = &local_68;
    local_68 = 0xc;
    local_64[0] = 7;
    puVar7 = local_64;
    ppiVar4 = &local_18;
    FUN_0040b5a0(ppiVar4,(undefined2 *)puVar7,(undefined2 *)puVar5,puVar6,&local_28,
                 (undefined2 *)&local_6c);
    __vbaFreeStrList(2,&local_24,&local_28);
    local_6c = 0;
    __vbaStrCopy(ppiVar4,puVar7);
    __vbaStrCopy(puVar5,puVar6);
    puVar6 = &local_24;
    puVar5 = &local_68;
    puVar7 = local_64;
    ppiVar4 = &local_18;
    local_68 = 0xf;
    local_64[0] = 7;
    FUN_0040b5a0(ppiVar4,(undefined2 *)puVar7,(undefined2 *)puVar5,puVar6,&local_28,
                 (undefined2 *)&local_6c);
    __vbaFreeStrList(2,&local_24,&local_28);
    local_6c = 0;
    __vbaStrCopy(ppiVar4,puVar7);
    __vbaStrCopy(puVar5,puVar6);
    puVar6 = &local_24;
    puVar5 = &local_68;
    puVar7 = local_64;
    ppiVar4 = &local_18;
    local_68 = 0x11;
    local_64[0] = 7;
    FUN_0040b5a0(ppiVar4,(undefined2 *)puVar7,(undefined2 *)puVar5,puVar6,&local_28,
                 (undefined2 *)&local_6c);
    __vbaFreeStrList(2,&local_24,&local_28);
    local_6c = 0;
    __vbaStrCopy(ppiVar4,puVar7);
    __vbaStrCopy(puVar5,puVar6);
    local_68 = 0x18;
    local_64[0] = 7;
    puVar6 = &local_24;
    puVar5 = &local_68;
    puVar7 = local_64;
    ppiVar4 = &local_18;
    FUN_0040b5a0(ppiVar4,(undefined2 *)puVar7,(undefined2 *)puVar5,puVar6,&local_28,
                 (undefined2 *)&local_6c);
    __vbaFreeStrList(2,&local_24,&local_28);
    local_6c = 0;
    __vbaStrCopy(ppiVar4,puVar7);
    __vbaStrCopy(puVar5,puVar6);
    puVar6 = &local_24;
    puVar5 = &local_68;
    puVar7 = local_64;
    ppiVar4 = &local_18;
    local_68 = 0x1b;
    local_64[0] = 7;
    FUN_0040b5a0(ppiVar4,(undefined2 *)puVar7,(undefined2 *)puVar5,puVar6,&local_28,
                 (undefined2 *)&local_6c);
    __vbaFreeStrList(2,&local_24,&local_28);
    local_6c = 0;
    __vbaStrCopy(ppiVar4,puVar7);
    __vbaStrCopy(puVar5,puVar6);
    puVar6 = &local_24;
    puVar5 = &local_68;
    puVar7 = local_64;
    ppiVar4 = &local_18;
    local_68 = 0x1f;
    local_64[0] = 7;
    FUN_0040b5a0(ppiVar4,(undefined2 *)puVar7,(undefined2 *)puVar5,puVar6,&local_28,
                 (undefined2 *)&local_6c);
    __vbaFreeStrList(2,&local_24,&local_28);
    local_6c = 1;
    __vbaStrCopy(ppiVar4,puVar7);
    __vbaStrCopy(puVar5,puVar6);
    puVar6 = &local_24;
    puVar5 = &local_68;
    puVar7 = local_64;
    ppiVar4 = &local_18;
    local_68 = 1;
    local_64[0] = 7;
    FUN_0040b5a0(ppiVar4,(undefined2 *)puVar7,(undefined2 *)puVar5,puVar6,&local_28,
                 (undefined2 *)&local_6c);
    __vbaFreeStrList(2,&local_24,&local_28);
    local_6c = 1;
    __vbaStrCopy(ppiVar4,puVar7);
    __vbaStrCopy(puVar5,puVar6);
    puVar6 = &local_24;
    puVar5 = &local_68;
    puVar7 = local_64;
    ppiVar4 = &local_18;
    local_68 = 2;
    local_64[0] = 7;
    FUN_0040b5a0(ppiVar4,(undefined2 *)puVar7,(undefined2 *)puVar5,puVar6,&local_28,
                 (undefined2 *)&local_6c);
    __vbaFreeStrList(2,&local_24,&local_28);
    local_6c = 1;
    __vbaStrCopy(ppiVar4,puVar7);
    __vbaStrCopy(puVar5,puVar6);
    puVar6 = &local_24;
    puVar5 = &local_68;
    puVar7 = local_64;
    ppiVar4 = &local_18;
    local_68 = 6;
    local_64[0] = 7;
    FUN_0040b5a0(ppiVar4,(undefined2 *)puVar7,(undefined2 *)puVar5,puVar6,&local_28,
                 (undefined2 *)&local_6c);
    __vbaFreeStrList(2,&local_24,&local_28);
    local_6c = 1;
    __vbaStrCopy(ppiVar4,puVar7);
    __vbaStrCopy(puVar5,puVar6);
    puVar6 = &local_24;
    puVar5 = &local_68;
    puVar7 = local_64;
    ppiVar4 = &local_18;
    local_68 = 0xb;
    local_64[0] = 7;
    FUN_0040b5a0(ppiVar4,(undefined2 *)puVar7,(undefined2 *)puVar5,puVar6,&local_28,
                 (undefined2 *)&local_6c);
    __vbaFreeStrList(2,&local_24,&local_28);
    local_6c = 1;
    __vbaStrCopy(ppiVar4,puVar7);
    __vbaStrCopy(puVar5,puVar6);
    puVar6 = &local_24;
    puVar5 = &local_68;
    puVar7 = local_64;
    ppiVar4 = &local_18;
    local_68 = 0xe;
    local_64[0] = 7;
    FUN_0040b5a0(ppiVar4,(undefined2 *)puVar7,(undefined2 *)puVar5,puVar6,&local_28,
                 (undefined2 *)&local_6c);
    __vbaFreeStrList(2,&local_24,&local_28);
    local_6c = 1;
    __vbaStrCopy(ppiVar4,puVar7);
    __vbaStrCopy(puVar5,puVar6);
    puVar6 = &local_24;
    puVar5 = &local_68;
    puVar7 = local_64;
    ppiVar4 = &local_18;
    local_68 = 0x14;
    local_64[0] = 7;
    FUN_0040b5a0(ppiVar4,(undefined2 *)puVar7,(undefined2 *)puVar5,puVar6,&local_28,
                 (undefined2 *)&local_6c);
    __vbaFreeStrList(2,&local_24,&local_28);
    local_6c = 1;
    __vbaStrCopy(ppiVar4,puVar7);
    __vbaStrCopy(puVar5,puVar6);
    puVar6 = &local_24;
    puVar5 = &local_68;
    puVar7 = local_64;
    ppiVar4 = &local_18;
    local_68 = 0x17;
    local_64[0] = 7;
    FUN_0040b5a0(ppiVar4,(undefined2 *)puVar7,(undefined2 *)puVar5,puVar6,&local_28,
                 (undefined2 *)&local_6c);
    __vbaFreeStrList(2,&local_24,&local_28);
    local_6c = 1;
    __vbaStrCopy(ppiVar4,puVar7);
    __vbaStrCopy(puVar5,puVar6);
    puVar6 = &local_24;
    puVar5 = &local_68;
    puVar7 = local_64;
    ppiVar4 = &local_18;
    local_68 = 0x20;
    local_64[0] = 7;
    FUN_0040b5a0(ppiVar4,(undefined2 *)puVar7,(undefined2 *)puVar5,puVar6,&local_28,
                 (undefined2 *)&local_6c);
    __vbaFreeStrList(2,&local_24,&local_28);
    local_6c = 1;
    __vbaStrCopy(ppiVar4,puVar7);
    __vbaStrCopy(puVar5,puVar6);
    puVar6 = &local_24;
    puVar5 = &local_68;
    local_68 = 0x21;
    local_64[0] = 7;
    puVar7 = local_64;
    ppiVar4 = &local_18;
    FUN_0040b5a0(ppiVar4,(undefined2 *)puVar7,(undefined2 *)puVar5,puVar6,&local_28,
                 (undefined2 *)&local_6c);
    __vbaFreeStrList(2,&local_24,&local_28);
    local_6c = 2;
    __vbaStrCopy(ppiVar4,puVar7);
    __vbaStrCopy(puVar5,puVar6);
    puVar6 = &local_24;
    puVar5 = &local_68;
    puVar7 = local_64;
    ppiVar4 = &local_18;
    local_68 = 0x1c;
    local_64[0] = 7;
    FUN_0040b5a0(ppiVar4,(undefined2 *)puVar7,(undefined2 *)puVar5,puVar6,&local_28,
                 (undefined2 *)&local_6c);
    __vbaFreeStrList(2,&local_24,&local_28);
    local_6c = 2;
    __vbaStrCopy(ppiVar4,puVar7);
    __vbaStrCopy(puVar5,puVar6);
    puVar6 = &local_68;
    puVar5 = local_64;
    ppiVar4 = &local_18;
    local_68 = 0x1d;
    local_64[0] = 7;
    FUN_0040b5a0(ppiVar4,(undefined2 *)puVar5,(undefined2 *)puVar6,&local_24,&local_28,
                 (undefined2 *)&local_6c);
    __vbaFreeStrList(2,&local_24,&local_28);
    piVar3 = local_18;
    iVar2 = (**(code **)(*local_18 + 0xc4))(local_18);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0xc4);
    }
    __vbaStrCopy(piVar3,ppiVar4);
    __vbaStrCopy(puVar5,puVar6);
    puVar6 = &local_28;
    puVar5 = &local_24;
    FUN_00417400(puVar5,puVar6);
    __vbaFreeStrList(2,&local_24,&local_28);
    __vbaStrCopy(puVar5,puVar6);
    __vbaFreeObj(&LAB_0041e71b);
    __vbaFreeObj();
    __vbaFreeObj();
    return;
  }
  iVar2 = (**(code **)(*local_18 + 0xe4))(local_18);
  if (-1 < iVar2) goto LAB_0041d46c;
  uVar10 = 0xe4;
  do {
    __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,uVar10);
LAB_0041d46c:
    do {
      iVar2 = (**(code **)(*local_18 + 0x34))(local_18,local_64);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0x34);
      }
      if ((short)local_64[0] != 0) goto LAB_0041d4d8;
      iVar2 = (**(code **)(*local_18 + 0xcc))(local_18);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0xcc);
      }
      iVar2 = (**(code **)(*local_18 + 0xec))(local_18);
    } while (-1 < iVar2);
    uVar10 = 0xec;
  } while( true );
}


// ---- FUN_0041e730 @ 0041e730

void FUN_0041e730(void)

{
  int *piVar1;
  int iVar2;
  undefined4 local_3c;
  undefined4 local_34;
  undefined4 local_2c;
  undefined4 local_24;
  int *local_20;
  int *local_1c;
  int *local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_00401736;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffff88;
  local_8 = &DAT_004015d0;
  local_18 = (int *)0x0;
  local_1c = (int *)0x0;
  local_20 = (int *)0x0;
  ExceptionList = &pvStack_14;
  iVar2 = (**(code **)(*DAT_0043302c + 0xbc))(DAT_0043302c,L"USERS",3);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,DAT_0043302c,&DAT_00402ed0,0xbc);
  }
  piVar1 = local_1c;
  local_1c = (int *)0x0;
  __vbaObjSet(&local_18,piVar1);
  iVar2 = (**(code **)(*local_18 + 0xd4))(local_18,L"username = \'DEVELOPMENT\'");
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0xd4);
  }
  iVar2 = (**(code **)(*local_18 + 0xd0))(local_18);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0xd0);
  }
  iVar2 = (**(code **)(*local_18 + 0xb4))(local_18,&local_1c);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0xb4);
  }
  piVar1 = local_1c;
  iVar2 = (**(code **)(*local_1c + 0x30))(local_1c,8,local_2c,L"password",local_24,&local_20);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_00403eb4,0x30);
  }
  piVar1 = local_20;
  iVar2 = (**(code **)(*local_20 + 0x48))(local_20,8,local_3c,L"stansted",local_34);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_004035dc,0x48);
  }
  __vbaFreeObjList(2,&local_1c,&local_20);
  iVar2 = (**(code **)(*local_18 + 0x164))(local_18,1,0);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0x164);
  }
  iVar2 = (**(code **)(*local_18 + 0xd4))(local_18,L"username = \'FACTORY\'");
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0xd4);
  }
  iVar2 = (**(code **)(*local_18 + 0xd0))(local_18);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0xd0);
  }
  iVar2 = (**(code **)(*local_18 + 0xb4))(local_18,&local_1c);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0xb4);
  }
  piVar1 = local_1c;
  iVar2 = (**(code **)(*local_1c + 0x30))(local_1c,8,local_2c,L"password",local_24,&local_20);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_00403eb4,0x30);
  }
  piVar1 = local_20;
  iVar2 = (**(code **)(*local_20 + 0x48))(local_20,8,local_3c,L"keele",local_34);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_004035dc,0x48);
  }
  __vbaFreeObjList(2,&local_1c,&local_20);
  iVar2 = (**(code **)(*local_18 + 0x164))(local_18,1,0);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0x164);
  }
  iVar2 = (**(code **)(*local_18 + 0xd4))(local_18,L"username = \'SERVICE\'");
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0xd4);
  }
  iVar2 = (**(code **)(*local_18 + 0xd0))(local_18);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0xd0);
  }
  iVar2 = (**(code **)(*local_18 + 0xb4))(local_18,&local_1c);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0xb4);
  }
  piVar1 = local_1c;
  iVar2 = (**(code **)(*local_1c + 0x30))(local_1c,8,local_2c,L"password",local_24,&local_20);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_00403eb4,0x30);
  }
  piVar1 = local_20;
  iVar2 = (**(code **)(*local_20 + 0x48))(local_20,8,local_3c,L"petrol",local_34);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_004035dc,0x48);
  }
  __vbaFreeObjList(2,&local_1c,&local_20);
  iVar2 = (**(code **)(*local_18 + 0x164))(local_18,1,0);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0x164);
  }
  iVar2 = (**(code **)(*local_18 + 0xc4))(local_18);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0xc4);
  }
  __vbaFreeObj(&LAB_0041ebf1);
  return;
}


// ---- FUN_0041ec10 @ 0041ec10

void __cdecl FUN_0041ec10(undefined4 *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  wchar_t *pwVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 local_58;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_2c [2];
  undefined4 local_24;
  undefined4 local_1c;
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_00401736;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffff88;
  local_8 = &DAT_004015e0;
  local_18 = 0;
  local_1c = 0;
  local_2c[0] = 0;
  ExceptionList = &pvStack_14;
  local_24 = __vbaStrCat(L".BAK",*param_1);
  local_2c[0] = 8;
  rtcDir(local_2c,0);
  uVar2 = __vbaStrMove();
  iVar3 = __vbaStrCmp(&DAT_00402df8,uVar2);
  __vbaFreeStr();
  __vbaFreeVar();
  if (iVar3 != 0) {
    local_24 = __vbaStrCat(L".BAK");
    local_2c[0] = 8;
    rtcKillFiles(local_2c);
    __vbaFreeVar();
  }
  __vbaStrCat(L".MDB");
  __vbaStrMove();
  __vbaStrCat(L".BAK",*param_1);
  uVar2 = __vbaStrMove();
  __vbaNameFile(uVar2);
  __vbaFreeStrList(2,&local_18);
  if (DAT_004333d0 == (int *)0x0) {
    __vbaNew2(&DAT_00402ad4);
  }
  piVar1 = DAT_004333d0;
  iVar3 = *DAT_004333d0;
  uVar7 = 10;
  uVar8 = 0x80020004;
  uVar5 = 3;
  uVar6 = 0x22;
  uVar2 = 8;
  pwVar4 = L";LANGID=0x0409;CP=1252;COUNTRY=0";
  __vbaStrCat(L".mdb",*param_1);
  uVar2 = __vbaStrMove(uVar2,local_38,pwVar4,local_30,uVar5,local_48,uVar6,local_40,uVar7,local_58,
                       uVar8);
  __vbaStrCat(L".BAK",*param_1);
  uVar2 = __vbaStrMove(uVar2);
  iVar3 = (**(code **)(iVar3 + 0x48))(piVar1,uVar2);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar1,&DAT_00402ac4,0x48);
  }
  __vbaFreeStrList(2,&local_18,&local_1c);
  return;
}


// ---- FUN_0041ee30 @ 0041ee30

void FUN_0041ee30(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined4 local_5c [2];
  undefined4 local_54;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int *local_24;
  int *local_20;
  undefined4 local_1c;
  int *local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_00401736;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffff68;
  local_8 = &DAT_004015f0;
  local_18 = (int *)0x0;
  local_1c = 0;
  local_20 = (int *)0x0;
  local_24 = (int *)0x0;
  local_28 = 0;
  local_5c[0] = 0;
  ExceptionList = &pvStack_14;
  iVar2 = (**(code **)(*DAT_0043302c + 0x44))();
  if (iVar2 < 0) {
    __vbaHresultCheckObj();
  }
  piVar1 = local_24;
  iVar2 = (**(code **)(*local_24 + 0x30))(local_24);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_00403ee0,0x30);
  }
  uVar3 = local_28;
  local_28 = 0;
  __vbaObjSet(&local_20,uVar3);
  __vbaFreeObj();
  local_38 = 8;
  iVar2 = (**(code **)(*local_20 + 0x70))
                    (local_20,8,local_34,L"SnapBack",local_2c,3,local_44,1,local_3c,10,local_54,
                     0x80020004,local_4c,&local_24);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_20,&DAT_004034d0,0x70);
  }
  piVar1 = local_24;
  local_24 = (int *)0x0;
  __vbaObjSet(&local_1c,piVar1);
  iVar2 = (**(code **)(*local_20 + 0x60))(local_20,&local_24);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_20,&DAT_004034d0,0x60);
  }
  piVar1 = local_24;
  iVar2 = *local_24;
  uVar3 = __vbaObjSetAddref(&local_28,local_1c);
  iVar2 = (**(code **)(iVar2 + 0x28))(piVar1,uVar3);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_004034e0,0x28);
  }
  __vbaFreeObjList(2,&local_28,&local_24);
  local_48 = 3;
  iVar2 = (**(code **)(*local_20 + 0x70))
                    (local_20,8,local_34,L"PowerDown",local_2c,3,local_44,3,local_3c,10,local_54,
                     0x80020004,local_4c,&local_24);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_20,&DAT_004034d0,0x70);
  }
  piVar1 = local_24;
  local_24 = (int *)0x0;
  __vbaObjSet(&local_1c,piVar1);
  iVar2 = (**(code **)(*local_20 + 0x60))(local_20,&local_24);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_20,&DAT_004034d0,0x60);
  }
  piVar1 = local_24;
  iVar2 = *local_24;
  uVar3 = __vbaObjSetAddref(&local_28,local_1c);
  iVar2 = (**(code **)(iVar2 + 0x28))(piVar1,uVar3);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_004034e0,0x28);
  }
  __vbaFreeObjList(2,&local_28,&local_24);
  local_48 = 10;
  local_40 = 0x80020004;
  local_30 = 2;
  iVar2 = (**(code **)(*DAT_0043302c + 0xbc))
                    (DAT_0043302c,L"Stage",3,local_34,2,local_2c,10,local_44,0x80020004,local_3c,10,
                     local_54,0x80020004,local_4c,&local_24);
  pcVar4 = __vbaHresultCheckObj_exref;
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,DAT_0043302c,&DAT_00402ed0,0xbc);
  }
  piVar1 = local_24;
  local_24 = (int *)0x0;
  __vbaObjSet(&local_18,piVar1);
  iVar2 = (**(code **)(*local_18 + 0xe4))(local_18);
  if (-1 < iVar2) goto LAB_0041f1f5;
  uVar3 = 0xe4;
  do {
    (*pcVar4)(iVar2,local_18,&DAT_00403434,uVar3);
LAB_0041f1f5:
    do {
      iVar2 = (**(code **)(*local_18 + 0x34))(local_18,local_5c);
      if (iVar2 < 0) {
        (*pcVar4)(iVar2,local_18,&DAT_00403434,0x34);
      }
      if ((short)local_5c[0] != 0) {
        iVar2 = (**(code **)(*local_18 + 0xc4))(local_18);
        if (iVar2 < 0) {
          (*pcVar4)(iVar2,local_18,&DAT_00403434,0xc4);
        }
        __vbaFreeObj(&LAB_0041f387);
        __vbaFreeObj();
        __vbaFreeObj();
        return;
      }
      iVar2 = (**(code **)(*local_18 + 0xd0))();
      if (iVar2 < 0) {
        (*pcVar4)(iVar2,local_18,&DAT_00403434,0xd0);
      }
      iVar2 = (**(code **)(*local_18 + 0x128))
                        (local_18,8,local_34,L"snapback",local_2c,0xb,local_44,0,local_3c);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0x128);
      }
      iVar2 = (**(code **)(*local_18 + 0x128))
                        (local_18,8,local_34,L"PowerDown",local_2c,2,local_44,0,local_3c);
      pcVar4 = __vbaHresultCheckObj_exref;
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,local_18,&DAT_00403434,0x128);
      }
      iVar2 = (**(code **)(*local_18 + 0xec))(local_18);
    } while (-1 < iVar2);
    uVar3 = 0xec;
  } while( true );
}


// ---- FUN_0041f3a0 @ 0041f3a0

void FUN_0041f3a0(void)

{
  undefined4 uVar1;
  int iVar2;
  int **ppiVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  wchar_t *pwVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c [5];
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 local_34;
  wchar_t *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int *local_1c;
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_00401736;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffff80;
  local_8 = &DAT_00401600;
  local_48 = 10;
  local_18 = 0;
  local_1c = (int *)0x0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_5c[0] = 0;
  local_60 = 0;
  local_64 = 0;
  ExceptionList = &pvStack_14;
  iVar2 = (**(code **)(*DAT_0043302c + 0xbc))(DAT_0043302c,L"Licences",3);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,DAT_0043302c,&DAT_00402ed0,0xbc);
  }
  uVar10 = local_28;
  local_28 = 0;
  __vbaObjSet(&local_1c,uVar10);
  iVar2 = (**(code **)(*local_1c + 0xc0))(local_1c);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_1c,&DAT_00403434,0xc0);
  }
  iVar2 = (**(code **)(*local_1c + 0x128))(local_1c,8,local_34,L"licence",local_2c,2);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_1c,&DAT_00403434,0x128);
  }
  iVar2 = (**(code **)(*local_1c + 0x128))(local_1c,8,local_34,L"special",local_2c,2);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_1c,&DAT_00403434,0x128);
  }
  local_38 = 8;
  iVar2 = (**(code **)(*local_1c + 0x128))(local_1c,8,local_34,L"Description",local_2c,8);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_1c,&DAT_00403434,0x128);
  }
  iVar2 = (**(code **)(*local_1c + 0x164))(local_1c,1,0);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_1c,&DAT_00403434,0x164);
  }
  iVar2 = (**(code **)(*local_1c + 0xc0))(local_1c);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_1c,&DAT_00403434,0xc0);
  }
  iVar2 = (**(code **)(*local_1c + 0x128))(local_1c,8,local_34,L"licence",local_2c,2);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_1c,&DAT_00403434,0x128);
  }
  iVar2 = (**(code **)(*local_1c + 0x128))(local_1c,8,local_34,L"special",local_2c,2);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_1c,&DAT_00403434,0x128);
  }
  iVar2 = (**(code **)(*local_1c + 0x128))(local_1c,8,local_34,L"Description",local_2c,8);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_1c,&DAT_00403434,0x128);
  }
  iVar2 = (**(code **)(*local_1c + 0x164))(local_1c,1,0);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_1c,&DAT_00403434,0x164);
  }
  iVar2 = (**(code **)(*local_1c + 0xc0))(local_1c);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_1c,&DAT_00403434,0xc0);
  }
  local_30 = L"licence";
  iVar2 = (**(code **)(*local_1c + 0x128))(local_1c,8,local_34,L"licence",local_2c,2);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_1c,&DAT_00403434,0x128);
  }
  local_30 = L"special";
  iVar2 = (**(code **)(*local_1c + 0x128))(local_1c,8,local_34,L"special",local_2c,2);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_1c,&DAT_00403434,0x128);
  }
  iVar2 = (**(code **)(*local_1c + 0x128))(local_1c,8,local_34,L"Description",local_2c,8);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_1c,&DAT_00403434,0x128);
  }
  iVar2 = (**(code **)(*local_1c + 0x164))(local_1c,1,0);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_1c,&DAT_00403434,0x164);
  }
  iVar2 = (**(code **)(*local_1c + 0xd4))(local_1c,L"licence = 25");
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_1c,&DAT_00403434,0xd4);
  }
  iVar2 = (**(code **)(*local_1c + 0xd0))(local_1c);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_1c,&DAT_00403434,0xd0);
  }
  local_30 = L"Description";
  iVar2 = (**(code **)(*local_1c + 0x128))(local_1c,8,local_34,L"Description",local_2c,8);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_1c,&DAT_00403434,0x128);
  }
  iVar2 = (**(code **)(*local_1c + 0x164))(local_1c,1,0);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_1c,&DAT_00403434,0x164);
  }
  iVar2 = (**(code **)(*local_1c + 0xc4))(local_1c);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_1c,&DAT_00403434,0xc4);
  }
  local_48 = 10;
  local_40 = 0x80020004;
  local_38 = 3;
  pwVar8 = L"validLicences";
  uVar9 = 3;
  piVar7 = DAT_0043302c;
  iVar2 = (**(code **)(*DAT_0043302c + 0xbc))
                    (DAT_0043302c,L"validLicences",3,local_34,2,local_2c,10);
  uVar10 = local_34;
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,DAT_0043302c,&DAT_00402ed0,0xbc);
    uVar10 = local_34;
  }
  uVar1 = local_28;
  local_28 = 0;
  __vbaObjSet(&local_1c,uVar1);
  local_64 = 1;
  __vbaStrCopy(piVar7,pwVar8);
  __vbaStrCopy(uVar9,uVar10);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x2b;
  local_5c[0] = 8;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_64);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_64 = 1;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x2b;
  local_5c[0] = 7;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_64);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_64 = 1;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  local_60 = 0x2b;
  local_5c[0] = 9;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_64);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_64 = 1;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x2c;
  local_5c[0] = 8;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_64);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_64 = 1;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x2c;
  local_5c[0] = 7;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_64);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_64 = 1;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  local_60 = 0x2c;
  local_5c[0] = 9;
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_64);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_64 = 1;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x2d;
  local_5c[0] = 8;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_64);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_64 = 1;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x2d;
  local_5c[0] = 7;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_64);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_64 = 1;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x2d;
  local_5c[0] = 9;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_64);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_18 = 0;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0xc;
  local_5c[0] = 0;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0xf;
  local_5c[0] = 0;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x18;
  local_5c[0] = 0;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x1b;
  local_5c[0] = 0;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_18 = 1;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 3;
  local_5c[0] = 0;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 4;
  local_5c[0] = 0;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 5;
  local_5c[0] = 0;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  local_60 = 6;
  local_5c[0] = 0;
  ppiVar3 = &local_1c;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 7;
  local_5c[0] = 0;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 9;
  local_5c[0] = 0;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  local_60 = 10;
  local_5c[0] = 0;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0xb;
  local_5c[0] = 0;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0xe;
  local_5c[0] = 0;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  local_60 = 0x10;
  local_5c[0] = 0;
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x11;
  local_5c[0] = 0;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x14;
  local_5c[0] = 0;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  local_60 = 0x19;
  local_5c[0] = 0;
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x1e;
  local_5c[0] = 0;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x1f;
  local_5c[0] = 0;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  local_60 = 0x20;
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_5c[0] = 0;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x21;
  local_5c[0] = 0;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x22;
  local_5c[0] = 0;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_64 = 2;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x1c;
  local_5c[0] = 0;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_64);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_64 = 2;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x1d;
  local_5c[0] = 0;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_64);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_18 = 0;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 4;
  local_5c[0] = 2;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 5;
  local_5c[0] = 2;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 9;
  local_5c[0] = 2;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0xc;
  local_5c[0] = 2;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0xf;
  local_5c[0] = 2;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x18;
  local_5c[0] = 2;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x1b;
  local_5c[0] = 2;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_18 = 1;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 1;
  local_5c[0] = 2;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  local_60 = 2;
  local_5c[0] = 2;
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  local_60 = 3;
  local_5c[0] = 2;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 6;
  local_5c[0] = 2;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 7;
  local_5c[0] = 2;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  local_60 = 10;
  local_5c[0] = 2;
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0xb;
  local_5c[0] = 2;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0xe;
  local_5c[0] = 2;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  local_60 = 0x10;
  local_5c[0] = 2;
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x11;
  local_5c[0] = 2;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x14;
  local_5c[0] = 2;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x17;
  local_5c[0] = 2;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x19;
  local_5c[0] = 2;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x1e;
  local_5c[0] = 2;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x1f;
  local_5c[0] = 2;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x20;
  local_5c[0] = 2;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x21;
  local_5c[0] = 2;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x22;
  local_5c[0] = 2;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_64 = 2;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x1c;
  local_5c[0] = 2;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_64);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_64 = 2;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x1d;
  local_5c[0] = 2;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_64);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_18 = 0;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 3;
  local_5c[0] = 4;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  local_60 = 4;
  local_5c[0] = 4;
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  local_60 = 5;
  local_5c[0] = 4;
  ppiVar3 = &local_1c;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 7;
  local_5c[0] = 4;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 9;
  local_5c[0] = 4;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  local_60 = 0xc;
  local_5c[0] = 4;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0xf;
  local_5c[0] = 4;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x18;
  local_5c[0] = 4;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  local_60 = 0x1b;
  local_5c[0] = 4;
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x1e;
  local_5c[0] = 4;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x1f;
  local_5c[0] = 4;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_18 = 1;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  local_60 = 1;
  local_5c[0] = 4;
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 2;
  local_5c[0] = 4;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 6;
  local_5c[0] = 4;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 10;
  local_5c[0] = 4;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0xb;
  local_5c[0] = 4;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0xe;
  local_5c[0] = 4;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x10;
  local_5c[0] = 4;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x11;
  local_5c[0] = 4;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x14;
  local_5c[0] = 4;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x17;
  local_5c[0] = 4;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x19;
  local_5c[0] = 4;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x20;
  local_5c[0] = 4;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x21;
  local_5c[0] = 4;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x22;
  local_5c[0] = 4;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_64 = 2;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x1c;
  local_5c[0] = 4;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_64);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_64 = 2;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x1d;
  local_5c[0] = 4;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_64);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_18 = 0;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 4;
  local_5c[0] = 1;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  local_60 = 5;
  local_5c[0] = 1;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 6;
  local_5c[0] = 1;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 9;
  local_5c[0] = 1;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  local_60 = 0xc;
  local_5c[0] = 1;
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0xf;
  local_5c[0] = 1;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x10;
  local_5c[0] = 1;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  local_60 = 0x11;
  local_5c[0] = 1;
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x18;
  local_5c[0] = 1;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x1b;
  local_5c[0] = 1;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_18 = 1;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 1;
  local_5c[0] = 1;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 2;
  local_5c[0] = 1;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 3;
  local_5c[0] = 1;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 7;
  local_5c[0] = 1;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 10;
  local_5c[0] = 1;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0xb;
  local_5c[0] = 1;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0xe;
  local_5c[0] = 1;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x14;
  local_5c[0] = 1;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x16;
  local_5c[0] = 1;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x17;
  local_5c[0] = 1;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x19;
  local_5c[0] = 1;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x1e;
  local_5c[0] = 1;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x1f;
  local_5c[0] = 1;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x20;
  local_5c[0] = 1;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  local_60 = 0x21;
  local_5c[0] = 1;
  ppiVar3 = &local_1c;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x22;
  local_5c[0] = 1;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x23;
  local_5c[0] = 1;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_64 = 2;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  local_60 = 0x1c;
  local_5c[0] = 1;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_64);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_64 = 2;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  local_60 = 0x1d;
  local_5c[0] = 1;
  FUN_0040b5a0(&local_1c,(undefined2 *)local_5c,(undefined2 *)&local_60,&local_20,&local_24,
               (undefined2 *)&local_64);
  __vbaFreeStrList(2,&local_20,&local_24);
  iVar2 = (**(code **)(*local_1c + 0xc4))(local_1c);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_1c,&DAT_00403434,0xc4);
  }
  __vbaFreeObj(&LAB_00421e7c);
  return;
}


// ---- FUN_00421e90 @ 00421e90

void FUN_00421e90(void)

{
  undefined4 uVar1;
  int iVar2;
  int **ppiVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  wchar_t *pwVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c [7];
  undefined4 local_40;
  undefined4 local_34;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int *local_1c;
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_00401736;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffff84;
  local_8 = &DAT_00401610;
  local_18 = 0;
  local_1c = (int *)0x0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_5c[0] = 0;
  local_60 = 0;
  local_64 = 0;
  local_40 = 0x80020004;
  pwVar8 = L"validLicences";
  uVar9 = 3;
  ExceptionList = &pvStack_14;
  piVar7 = DAT_0043302c;
  iVar2 = (**(code **)(*DAT_0043302c + 0xbc))(DAT_0043302c,L"validLicences",3);
  uVar10 = local_34;
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,DAT_0043302c,&DAT_00402ed0,0xbc);
    uVar10 = local_34;
  }
  uVar1 = local_28;
  local_28 = 0;
  __vbaObjSet(&local_1c,uVar1);
  local_64 = 1;
  __vbaStrCopy(piVar7,pwVar8);
  __vbaStrCopy(uVar9,uVar10);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x2d;
  local_5c[0] = 2;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_64);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_64 = 1;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x2d;
  local_5c[0] = 4;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_64);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_64 = 1;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  local_60 = 0x2d;
  local_5c[0] = 10;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_64);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_64 = 1;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x2d;
  local_5c[0] = 1;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_64);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_18 = 0;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 3;
  local_5c[0] = 10;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  local_60 = 4;
  local_5c[0] = 10;
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 5;
  local_5c[0] = 10;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 7;
  local_5c[0] = 10;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 9;
  local_5c[0] = 10;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0xc;
  local_5c[0] = 10;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0xf;
  local_5c[0] = 10;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x18;
  local_5c[0] = 10;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x1b;
  local_5c[0] = 10;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x1e;
  local_5c[0] = 10;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x1f;
  local_5c[0] = 10;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_18 = 1;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 1;
  local_5c[0] = 10;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 2;
  local_5c[0] = 10;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 6;
  local_5c[0] = 10;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 10;
  local_5c[0] = 10;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0xb;
  local_5c[0] = 10;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0xe;
  local_5c[0] = 10;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x10;
  local_5c[0] = 10;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  local_60 = 0x11;
  local_5c[0] = 10;
  ppiVar3 = &local_1c;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x14;
  local_5c[0] = 10;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x17;
  local_5c[0] = 10;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  local_60 = 0x19;
  local_5c[0] = 10;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x20;
  local_5c[0] = 10;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x21;
  local_5c[0] = 10;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  local_60 = 0x22;
  local_5c[0] = 10;
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_64 = 2;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x1c;
  local_5c[0] = 10;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_64);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_64 = 2;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  local_60 = 0x1d;
  local_5c[0] = 10;
  FUN_0040b5a0(&local_1c,(undefined2 *)local_5c,(undefined2 *)&local_60,&local_20,&local_24,
               (undefined2 *)&local_64);
  __vbaFreeStrList(2,&local_20,&local_24);
  iVar2 = (**(code **)(*local_1c + 0xc4))(local_1c);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_1c,&DAT_00403434,0xc4);
  }
  __vbaFreeObj(&LAB_00422915);
  return;
}


// ---- FUN_00422930 @ 00422930

void FUN_00422930(void)

{
  undefined4 uVar1;
  int iVar2;
  int **ppiVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  wchar_t *pwVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c [5];
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 local_34;
  wchar_t *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int *local_1c [2];
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_00401736;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffff80;
  local_8 = &DAT_00401620;
  local_48 = 10;
  local_1c[0] = (int *)0x0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_5c[0] = 0;
  local_60 = 0;
  local_64 = 0;
  ExceptionList = &pvStack_14;
  iVar2 = (**(code **)(*DAT_0043302c + 0xbc))(DAT_0043302c,L"Licences",3);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,DAT_0043302c,&DAT_00402ed0,0xbc);
  }
  uVar10 = local_28;
  local_28 = 0;
  __vbaObjSet(local_1c,uVar10);
  iVar2 = (**(code **)(*local_1c[0] + 0xd4))(local_1c[0],L"licence = 41");
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_1c[0],&DAT_00403434,0xd4);
  }
  iVar2 = (**(code **)(*local_1c[0] + 0x5c))(local_1c[0],local_5c);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_1c[0],&DAT_00403434,0x5c);
  }
  if ((short)local_5c[0] == 0) {
    iVar2 = (**(code **)(*local_1c[0] + 0xd0))(local_1c[0]);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,local_1c[0],&DAT_00403434,0xd0);
    }
    iVar2 = (**(code **)(*local_1c[0] + 0x128))(local_1c[0],8,local_34,L"special",local_2c,2);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,local_1c[0],&DAT_00403434,0x128);
    }
    iVar2 = (**(code **)(*local_1c[0] + 0x164))(local_1c[0],1,0);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,local_1c[0],&DAT_00403434,0x164);
    }
  }
  iVar2 = (**(code **)(*local_1c[0] + 0xc0))(local_1c[0]);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_1c[0],&DAT_00403434,0xc0);
  }
  iVar2 = (**(code **)(*local_1c[0] + 0x128))(local_1c[0],8,local_34,L"licence",local_2c,2);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_1c[0],&DAT_00403434,0x128);
  }
  local_30 = L"special";
  iVar2 = (**(code **)(*local_1c[0] + 0x128))(local_1c[0],8,local_34,L"special",local_2c,2);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_1c[0],&DAT_00403434,0x128);
  }
  local_38 = 8;
  iVar2 = (**(code **)(*local_1c[0] + 0x128))(local_1c[0],8,local_34,L"Description",local_2c,8);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_1c[0],&DAT_00403434,0x128);
  }
  iVar2 = (**(code **)(*local_1c[0] + 0x164))(local_1c[0],1,0);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_1c[0],&DAT_00403434,0x164);
  }
  iVar2 = (**(code **)(*local_1c[0] + 0xc4))(local_1c[0]);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_1c[0],&DAT_00403434,0xc4);
  }
  local_48 = 10;
  local_40 = 0x80020004;
  local_38 = 3;
  pwVar8 = L"validLicences";
  uVar9 = 3;
  piVar7 = DAT_0043302c;
  iVar2 = (**(code **)(*DAT_0043302c + 0xbc))
                    (DAT_0043302c,L"validLicences",3,local_34,2,local_2c,10);
  uVar10 = local_34;
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,DAT_0043302c,&DAT_00402ed0,0xbc);
    uVar10 = local_34;
  }
  uVar1 = local_28;
  local_28 = 0;
  __vbaObjSet(local_1c,uVar1);
  local_64 = 1;
  __vbaStrCopy(piVar7,pwVar8);
  __vbaStrCopy(uVar9,uVar10);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = local_1c;
  local_60 = 0x2b;
  local_5c[0] = 2;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_64);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_64 = 1;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = local_1c;
  local_60 = 0x2b;
  local_5c[0] = 4;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_64);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_64 = 1;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  local_60 = 0x2b;
  local_5c[0] = 10;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = local_1c;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_64);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_64 = 1;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = local_1c;
  local_60 = 0x2b;
  local_5c[0] = 1;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_64);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_64 = 1;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = local_1c;
  local_60 = 0x2c;
  local_5c[0] = 0;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_64);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_64 = 1;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  local_60 = 0x2c;
  local_5c[0] = 2;
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = local_1c;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_64);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_64 = 1;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = local_1c;
  local_60 = 0x2c;
  local_5c[0] = 4;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_64);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_64 = 1;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = local_1c;
  local_60 = 0x2c;
  local_5c[0] = 10;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_64);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_64 = 1;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = local_1c;
  local_60 = 0x2c;
  local_5c[0] = 1;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_64);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_64 = 1;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = local_1c;
  local_60 = 0x29;
  local_5c[0] = 0;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_64);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_64 = 1;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = local_1c;
  local_60 = 0x29;
  local_5c[0] = 2;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_64);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_64 = 1;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = local_1c;
  local_60 = 0x29;
  local_5c[0] = 4;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_64);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_64 = 1;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = local_1c;
  local_60 = 0x29;
  local_5c[0] = 10;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_64);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_64 = 1;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  local_60 = 0x29;
  local_5c[0] = 1;
  ppiVar3 = local_1c;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_64);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_64 = 1;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = local_1c;
  local_60 = 0x29;
  local_5c[0] = 8;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_64);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_64 = 1;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = local_1c;
  local_60 = 0x29;
  local_5c[0] = 7;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_64);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_64 = 1;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  local_60 = 0x29;
  local_5c[0] = 9;
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = local_1c;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_64);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_64 = 1;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = local_1c;
  local_60 = 0x2e;
  local_5c[0] = 0;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_64);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_64 = 1;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = local_1c;
  local_60 = 0x2e;
  local_5c[0] = 2;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_64);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_64 = 1;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  local_60 = 0x2e;
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = local_1c;
  local_5c[0] = 4;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_64);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_64 = 1;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = local_1c;
  local_60 = 0x2e;
  local_5c[0] = 10;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_64);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_64 = 1;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = local_1c;
  local_60 = 0x2e;
  local_5c[0] = 1;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_64);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_64 = 1;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = local_1c;
  local_60 = 0x2e;
  local_5c[0] = 8;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_64);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_64 = 1;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = local_1c;
  local_60 = 0x2e;
  local_5c[0] = 7;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_64);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_64 = 1;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  local_60 = 0x2e;
  local_5c[0] = 9;
  FUN_0040b5a0(local_1c,(undefined2 *)local_5c,(undefined2 *)&local_60,&local_20,&local_24,
               (undefined2 *)&local_64);
  __vbaFreeStrList(2,&local_20,&local_24);
  iVar2 = (**(code **)(*local_1c[0] + 0xc4))(local_1c[0]);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_1c[0],&DAT_00403434,0xc4);
  }
  __vbaFreeObj(&LAB_004235c8);
  return;
}


// ---- FUN_004235e0 @ 004235e0

void FUN_004235e0(void)

{
  undefined4 uVar1;
  int iVar2;
  int **ppiVar3;
  undefined4 *puVar4;
  int *piVar5;
  wchar_t *pwVar6;
  undefined4 local_5c;
  undefined4 local_58 [5];
  undefined4 local_44;
  undefined4 local_24;
  undefined4 local_20;
  int *local_1c [2];
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_00401736;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffff8c;
  local_8 = &DAT_00401630;
  local_44 = 10;
  local_1c[0] = (int *)0x0;
  local_20 = 0;
  local_24 = 0;
  local_58[0] = 0;
  local_5c = 0;
  pwVar6 = L"validLicences";
  ExceptionList = &pvStack_14;
  piVar5 = DAT_0043302c;
  iVar2 = (**(code **)(*DAT_0043302c + 0xbc))(DAT_0043302c,L"validLicences",3);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,DAT_0043302c,&DAT_00402ed0,0xbc);
  }
  uVar1 = local_24;
  local_24 = 0;
  __vbaObjSet(local_1c,uVar1);
  __vbaStrCopy(piVar5,pwVar6);
  puVar4 = local_58;
  ppiVar3 = local_1c;
  local_5c = 0x2e;
  local_58[0] = 0;
  FUN_004238a0(ppiVar3,puVar4,&local_5c,&local_20);
  __vbaFreeStr();
  __vbaStrCopy(ppiVar3,puVar4);
  puVar4 = local_58;
  ppiVar3 = local_1c;
  local_5c = 0x2e;
  local_58[0] = 2;
  FUN_004238a0(ppiVar3,puVar4,&local_5c,&local_20);
  __vbaFreeStr();
  __vbaStrCopy(ppiVar3,puVar4);
  puVar4 = local_58;
  ppiVar3 = local_1c;
  local_5c = 0x2e;
  local_58[0] = 4;
  FUN_004238a0(ppiVar3,puVar4,&local_5c,&local_20);
  __vbaFreeStr();
  __vbaStrCopy(ppiVar3,puVar4);
  puVar4 = local_58;
  ppiVar3 = local_1c;
  local_5c = 0x2e;
  local_58[0] = 10;
  FUN_004238a0(ppiVar3,puVar4,&local_5c,&local_20);
  __vbaFreeStr();
  __vbaStrCopy(ppiVar3,puVar4);
  local_5c = 0x2e;
  local_58[0] = 1;
  puVar4 = local_58;
  ppiVar3 = local_1c;
  FUN_004238a0(ppiVar3,puVar4,&local_5c,&local_20);
  __vbaFreeStr();
  __vbaStrCopy(ppiVar3,puVar4);
  puVar4 = local_58;
  ppiVar3 = local_1c;
  local_5c = 0x2e;
  local_58[0] = 8;
  FUN_004238a0(ppiVar3,puVar4,&local_5c,&local_20);
  __vbaFreeStr();
  __vbaStrCopy(ppiVar3,puVar4);
  puVar4 = local_58;
  ppiVar3 = local_1c;
  local_5c = 0x2e;
  local_58[0] = 7;
  FUN_004238a0(ppiVar3,puVar4,&local_5c,&local_20);
  __vbaFreeStr();
  __vbaStrCopy(ppiVar3,puVar4);
  local_5c = 0x2e;
  local_58[0] = 9;
  FUN_004238a0(local_1c,local_58,&local_5c,&local_20);
  __vbaFreeStr();
  iVar2 = (**(code **)(*local_1c[0] + 0xc4))(local_1c[0]);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_1c[0],&DAT_00403434,0xc4);
  }
  __vbaFreeObj(&LAB_0042388d);
  return;
}


// ---- FUN_004238a0 @ 004238a0

void __cdecl
FUN_004238a0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_ac;
  undefined4 local_a8 [2];
  undefined4 local_a0;
  undefined4 local_98 [2];
  wchar_t *local_90;
  undefined4 local_88;
  undefined4 local_84;
  wchar_t *local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  wchar_t *local_70;
  undefined4 local_6c;
  undefined4 local_68 [4];
  undefined4 local_58 [4];
  undefined4 local_48 [4];
  undefined4 local_38 [4];
  undefined4 local_28 [4];
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_00401736;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffff3c;
  local_8 = &DAT_00401640;
  piVar1 = (int *)*param_1;
  local_18 = 0;
  local_28[0] = 0;
  local_38[0] = 0;
  local_48[0] = 0;
  local_58[0] = 0;
  local_68[0] = 0;
  local_98[0] = 0;
  local_a8[0] = 0;
  local_ac = 0;
  local_80 = L"licence = ";
  local_88 = 8;
  local_70 = (wchar_t *)param_3;
  local_78 = 0x4002;
  ExceptionList = &pvStack_14;
  rtcVarStrFromVar(local_28,&local_78);
  local_90 = L"AND Machine = ";
  local_98[0] = 8;
  local_a0 = param_2;
  local_a8[0] = 0x4002;
  rtcVarStrFromVar(local_58,local_a8);
  iVar3 = *piVar1;
  uVar2 = __vbaVarAdd(local_38,local_28,&local_88);
  uVar2 = __vbaVarAdd(local_48,local_98,uVar2);
  uVar2 = __vbaVarAdd(local_68,local_58,uVar2);
  uVar2 = __vbaStrVarVal(&local_18,uVar2);
  iVar3 = (**(code **)(iVar3 + 0xd4))(piVar1,uVar2);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar1,&DAT_00403434,0xd4);
  }
  __vbaFreeStr();
  __vbaFreeVarList(5,local_28,local_38,local_48,local_58,local_68);
  piVar1 = (int *)*param_1;
  iVar3 = (**(code **)(*piVar1 + 0x5c))(piVar1,&local_ac);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar1,&DAT_00403434,0x5c);
  }
  if ((short)local_ac == 0) {
    piVar1 = (int *)*param_1;
    iVar3 = (**(code **)(*piVar1 + 0xd0))(piVar1);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar1,&DAT_00403434,0xd0);
    }
    piVar1 = (int *)*param_1;
    local_80 = (wchar_t *)*param_4;
    local_88 = 8;
    local_78 = 8;
    local_70 = L"partNumber";
    iVar3 = (**(code **)(*piVar1 + 0x128))
                      (piVar1,8,local_74,L"partNumber",local_6c,8,local_84,local_80,local_7c);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar1,&DAT_00403434,0x128);
    }
    piVar1 = (int *)*param_1;
    iVar3 = (**(code **)(*piVar1 + 0x164))(piVar1,1,0);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar1,&DAT_00403434,0x164);
    }
  }
  return;
}


// ---- FUN_00423b20 @ 00423b20

void FUN_00423b20(void)

{
  undefined4 uVar1;
  int iVar2;
  int **ppiVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  wchar_t *pwVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c [5];
  undefined4 local_48;
  undefined4 local_34;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int *local_1c;
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_00401736;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffff84;
  local_8 = &DAT_00401650;
  local_48 = 10;
  local_18 = 0;
  local_1c = (int *)0x0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_5c[0] = 0;
  local_60 = 0;
  local_64 = 0;
  pwVar8 = L"validLicences";
  uVar9 = 3;
  ExceptionList = &pvStack_14;
  piVar7 = DAT_0043302c;
  iVar2 = (**(code **)(*DAT_0043302c + 0xbc))(DAT_0043302c,L"validLicences",3);
  uVar10 = local_34;
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,DAT_0043302c,&DAT_00402ed0,0xbc);
    uVar10 = local_34;
  }
  uVar1 = local_28;
  local_28 = 0;
  __vbaObjSet(&local_1c,uVar1);
  local_18 = 0;
  __vbaStrCopy(piVar7,pwVar8);
  __vbaStrCopy(uVar9,uVar10);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 3;
  local_5c[0] = 0xb;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 4;
  local_5c[0] = 0xb;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  local_60 = 5;
  local_5c[0] = 0xb;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 7;
  local_5c[0] = 0xb;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 9;
  local_5c[0] = 0xb;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  local_60 = 0xc;
  local_5c[0] = 0xb;
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0xf;
  local_5c[0] = 0xb;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x18;
  local_5c[0] = 0xb;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  local_60 = 0x1b;
  local_5c[0] = 0xb;
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x1e;
  local_5c[0] = 0xb;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x1f;
  local_5c[0] = 0xb;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_18 = 1;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 1;
  local_5c[0] = 0xb;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 2;
  local_5c[0] = 0xb;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 6;
  local_5c[0] = 0xb;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 10;
  local_5c[0] = 0xb;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0xb;
  local_5c[0] = 0xb;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0xe;
  local_5c[0] = 0xb;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x10;
  local_5c[0] = 0xb;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x11;
  local_5c[0] = 0xb;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x14;
  local_5c[0] = 0xb;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x17;
  local_5c[0] = 0xb;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x19;
  local_5c[0] = 0xb;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x20;
  local_5c[0] = 0xb;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x21;
  local_5c[0] = 0xb;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x22;
  local_5c[0] = 0xb;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_64 = 1;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  local_60 = 0x29;
  local_5c[0] = 0xb;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_64);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_64 = 1;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x2b;
  local_5c[0] = 0xb;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_64);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_64 = 1;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x2c;
  local_5c[0] = 0xb;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_64);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_64 = 1;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  local_60 = 0x2d;
  local_5c[0] = 0xb;
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_64);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_64 = 1;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x2e;
  local_5c[0] = 0xb;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_64);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_64 = 2;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x1c;
  local_5c[0] = 0xb;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_64);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_64 = 2;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  local_60 = 0x1d;
  local_5c[0] = 0xb;
  FUN_0040b5a0(&local_1c,(undefined2 *)local_5c,(undefined2 *)&local_60,&local_20,&local_24,
               (undefined2 *)&local_64);
  __vbaFreeStrList(2,&local_20,&local_24);
  iVar2 = (**(code **)(*local_1c + 0xc4))(local_1c);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_1c,&DAT_00403434,0xc4);
  }
  __vbaFreeObj(&LAB_004245eb);
  return;
}


// ---- FUN_00424600 @ 00424600

void FUN_00424600(void)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 local_54 [6];
  undefined4 local_3c;
  undefined4 local_34;
  undefined4 local_2c;
  undefined4 local_24;
  undefined4 local_20;
  int *local_1c [2];
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_00401736;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffff94;
  local_8 = &DAT_00401660;
  local_1c[0] = (int *)0x0;
  local_20 = 0;
  local_54[0] = 0;
  ExceptionList = &pvStack_14;
  iVar1 = (**(code **)(*DAT_0043302c + 0xbc))(DAT_0043302c,L"validLicences",3);
  pcVar2 = __vbaHresultCheckObj_exref;
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,DAT_0043302c,&DAT_00402ed0,0xbc);
  }
  uVar3 = local_20;
  local_20 = 0;
  __vbaObjSet(local_1c,uVar3);
  iVar1 = (**(code **)(*local_1c[0] + 0xd4))(local_1c[0],L"licence = 25 ");
  if (-1 < iVar1) goto LAB_00424711;
  uVar3 = 0xd4;
  do {
    (*pcVar2)(iVar1,local_1c[0],&DAT_00403434,uVar3);
LAB_00424711:
    do {
      iVar1 = (**(code **)(*local_1c[0] + 0x5c))(local_1c[0],local_54);
      if (iVar1 < 0) {
        (*pcVar2)(iVar1,local_1c[0],&DAT_00403434,0x5c);
      }
      if ((short)local_54[0] != 0) {
        iVar1 = (**(code **)(*local_1c[0] + 0xc4))(local_1c[0]);
        if (iVar1 < 0) {
          (*pcVar2)(iVar1,local_1c[0],&DAT_00403434,0xc4);
        }
        __vbaFreeObj(&LAB_0042485e);
        return;
      }
      iVar1 = (**(code **)(*local_1c[0] + 0xd0))();
      if (iVar1 < 0) {
        (*pcVar2)(iVar1,local_1c[0],&DAT_00403434,0xd0);
      }
      iVar1 = (**(code **)(*local_1c[0] + 0x128))
                        (local_1c[0],8,local_2c,L"Class",local_24,2,local_3c,0,local_34);
      pcVar2 = __vbaHresultCheckObj_exref;
      if (iVar1 < 0) {
        __vbaHresultCheckObj(iVar1,local_1c[0],&DAT_00403434,0x128);
      }
      iVar1 = (**(code **)(*local_1c[0] + 0x164))(local_1c[0],1,0);
      if (iVar1 < 0) {
        __vbaHresultCheckObj(iVar1,local_1c[0],&DAT_00403434,0x164);
      }
      iVar1 = (**(code **)(*local_1c[0] + 0xdc))(local_1c[0],L"licence = 25 ");
    } while (-1 < iVar1);
    uVar3 = 0xdc;
  } while( true );
}


// ---- FUN_00424870 @ 00424870

void FUN_00424870(void)

{
  undefined4 uVar1;
  int iVar2;
  int **ppiVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  wchar_t *pwVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c [5];
  undefined4 local_48;
  undefined4 local_34;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int *local_1c [2];
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_00401736;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffff84;
  local_8 = &DAT_00401670;
  local_48 = 10;
  local_1c[0] = (int *)0x0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_5c[0] = 0;
  local_60 = 0;
  local_64 = 0;
  pwVar8 = L"validLicences";
  uVar9 = 3;
  ExceptionList = &pvStack_14;
  piVar7 = DAT_0043302c;
  iVar2 = (**(code **)(*DAT_0043302c + 0xbc))(DAT_0043302c,L"validLicences",3);
  uVar10 = local_34;
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,DAT_0043302c,&DAT_00402ed0,0xbc);
    uVar10 = local_34;
  }
  uVar1 = local_28;
  local_28 = 0;
  __vbaObjSet(local_1c,uVar1);
  local_64 = 1;
  __vbaStrCopy(piVar7,pwVar8);
  __vbaStrCopy(uVar9,uVar10);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = local_1c;
  local_60 = 0x25;
  local_5c[0] = 0;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_64);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_64 = 1;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = local_1c;
  local_60 = 0x25;
  local_5c[0] = 2;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_64);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_64 = 1;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  local_60 = 0x25;
  local_5c[0] = 4;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = local_1c;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_64);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_64 = 1;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = local_1c;
  local_60 = 0x25;
  local_5c[0] = 10;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_64);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_64 = 1;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  local_60 = 0x25;
  local_5c[0] = 1;
  FUN_0040b5a0(local_1c,(undefined2 *)local_5c,(undefined2 *)&local_60,&local_20,&local_24,
               (undefined2 *)&local_64);
  __vbaFreeStrList(2,&local_20,&local_24);
  iVar2 = (**(code **)(*local_1c[0] + 0xc4))(local_1c[0]);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_1c[0],&DAT_00403434,0xc4);
  }
  __vbaFreeObj(&LAB_00424b61);
  return;
}


// ---- FUN_00424b80 @ 00424b80

void FUN_00424b80(void)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 local_54 [6];
  undefined4 local_3c;
  undefined4 local_34;
  undefined4 local_2c;
  undefined4 local_24;
  undefined4 local_20;
  int *local_1c [2];
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_00401736;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffff94;
  local_8 = &DAT_00401680;
  local_1c[0] = (int *)0x0;
  local_20 = 0;
  local_54[0] = 0;
  ExceptionList = &pvStack_14;
  iVar1 = (**(code **)(*DAT_0043302c + 0xbc))(DAT_0043302c,L"validLicences",3);
  pcVar2 = __vbaHresultCheckObj_exref;
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,DAT_0043302c,&DAT_00402ed0,0xbc);
  }
  uVar3 = local_20;
  local_20 = 0;
  __vbaObjSet(local_1c,uVar3);
  iVar1 = (**(code **)(*local_1c[0] + 0xd4))(local_1c[0],L"licence = 1 ");
  if (-1 < iVar1) goto LAB_00424c91;
  uVar3 = 0xd4;
  do {
    __vbaHresultCheckObj(iVar1,local_1c[0],&DAT_00403434,uVar3);
LAB_00424c91:
    do {
      iVar1 = (**(code **)(*local_1c[0] + 0x5c))(local_1c[0],local_54);
      if (iVar1 < 0) {
        __vbaHresultCheckObj(iVar1,local_1c[0],&DAT_00403434,0x5c);
      }
      if ((short)local_54[0] != 0) {
        iVar1 = (**(code **)(*local_1c[0] + 0xd4))(local_1c[0],L"licence = 17 ");
        if (-1 < iVar1) goto LAB_00424dbb;
        uVar3 = 0xd4;
        do {
          __vbaHresultCheckObj(iVar1,local_1c[0],&DAT_00403434,uVar3);
LAB_00424dbb:
          do {
            iVar1 = (**(code **)(*local_1c[0] + 0x5c))(local_1c[0],local_54);
            if (iVar1 < 0) {
              __vbaHresultCheckObj(iVar1,local_1c[0],&DAT_00403434,0x5c);
            }
            if ((short)local_54[0] != 0) {
              iVar1 = (**(code **)(*local_1c[0] + 0xd4))(local_1c[0],L"licence = 7 ");
              if (-1 < iVar1) goto LAB_00424ede;
              uVar3 = 0xd4;
              do {
                __vbaHresultCheckObj(iVar1,local_1c[0],&DAT_00403434,uVar3);
LAB_00424ede:
                do {
                  iVar1 = (**(code **)(*local_1c[0] + 0x5c))(local_1c[0],local_54);
                  if (iVar1 < 0) {
                    __vbaHresultCheckObj(iVar1,local_1c[0],&DAT_00403434,0x5c);
                  }
                  if ((short)local_54[0] != 0) {
                    iVar1 = (**(code **)(*local_1c[0] + 0xd4))
                                      (local_1c[0],L"licence = 2 AND machine = 9 ");
                    if (-1 < iVar1) goto LAB_00425001;
                    uVar3 = 0xd4;
                    do {
                      (*pcVar2)(iVar1,local_1c[0],&DAT_00403434,uVar3);
LAB_00425001:
                      do {
                        iVar1 = (**(code **)(*local_1c[0] + 0x5c))(local_1c[0],local_54);
                        if (iVar1 < 0) {
                          (*pcVar2)(iVar1,local_1c[0],&DAT_00403434,0x5c);
                        }
                        if ((short)local_54[0] != 0) {
                          iVar1 = (**(code **)(*local_1c[0] + 0xc4))(local_1c[0]);
                          if (iVar1 < 0) {
                            (*pcVar2)(iVar1,local_1c[0],&DAT_00403434,0xc4);
                          }
                          __vbaFreeObj(&LAB_00425148);
                          return;
                        }
                        iVar1 = (**(code **)(*local_1c[0] + 0xd0))(local_1c[0]);
                        if (iVar1 < 0) {
                          (*pcVar2)(iVar1,local_1c[0],&DAT_00403434,0xd0);
                        }
                        iVar1 = (**(code **)(*local_1c[0] + 0x128))
                                          (local_1c[0],8,local_2c,L"Class",local_24,2,local_3c,0,
                                           local_34);
                        pcVar2 = __vbaHresultCheckObj_exref;
                        if (iVar1 < 0) {
                          __vbaHresultCheckObj(iVar1,local_1c[0],&DAT_00403434,0x128);
                        }
                        iVar1 = (**(code **)(*local_1c[0] + 0x164))(local_1c[0],1,0);
                        if (iVar1 < 0) {
                          __vbaHresultCheckObj(iVar1,local_1c[0],&DAT_00403434,0x164);
                        }
                        iVar1 = (**(code **)(*local_1c[0] + 0xdc))
                                          (local_1c[0],L"licence = 2 AND machine = 9 ");
                      } while (-1 < iVar1);
                      uVar3 = 0xdc;
                    } while( true );
                  }
                  iVar1 = (**(code **)(*local_1c[0] + 0xd0))(local_1c[0]);
                  if (iVar1 < 0) {
                    __vbaHresultCheckObj(iVar1,local_1c[0],&DAT_00403434,0xd0);
                  }
                  iVar1 = (**(code **)(*local_1c[0] + 0x128))
                                    (local_1c[0],8,local_2c,L"Class",local_24,2,local_3c,0,local_34)
                  ;
                  if (iVar1 < 0) {
                    __vbaHresultCheckObj(iVar1,local_1c[0],&DAT_00403434,0x128);
                  }
                  iVar1 = (**(code **)(*local_1c[0] + 0x164))(local_1c[0],1,0);
                  if (iVar1 < 0) {
                    __vbaHresultCheckObj(iVar1,local_1c[0],&DAT_00403434,0x164);
                  }
                  iVar1 = (**(code **)(*local_1c[0] + 0xdc))(local_1c[0],L"licence = 7 ");
                } while (-1 < iVar1);
                uVar3 = 0xdc;
              } while( true );
            }
            iVar1 = (**(code **)(*local_1c[0] + 0xd0))(local_1c[0]);
            if (iVar1 < 0) {
              __vbaHresultCheckObj(iVar1,local_1c[0],&DAT_00403434,0xd0);
            }
            iVar1 = (**(code **)(*local_1c[0] + 0x128))
                              (local_1c[0],8,local_2c,L"Class",local_24,2,local_3c,0,local_34);
            if (iVar1 < 0) {
              __vbaHresultCheckObj(iVar1,local_1c[0],&DAT_00403434,0x128);
            }
            iVar1 = (**(code **)(*local_1c[0] + 0x164))(local_1c[0],1,0);
            if (iVar1 < 0) {
              __vbaHresultCheckObj(iVar1,local_1c[0],&DAT_00403434,0x164);
            }
            iVar1 = (**(code **)(*local_1c[0] + 0xdc))(local_1c[0],L"licence = 17 ");
          } while (-1 < iVar1);
          uVar3 = 0xdc;
        } while( true );
      }
      iVar1 = (**(code **)(*local_1c[0] + 0xd0))(local_1c[0]);
      if (iVar1 < 0) {
        __vbaHresultCheckObj(iVar1,local_1c[0],&DAT_00403434,0xd0);
      }
      iVar1 = (**(code **)(*local_1c[0] + 0x128))
                        (local_1c[0],8,local_2c,L"Class",local_24,2,local_3c,0,local_34);
      if (iVar1 < 0) {
        __vbaHresultCheckObj(iVar1,local_1c[0],&DAT_00403434,0x128);
      }
      iVar1 = (**(code **)(*local_1c[0] + 0x164))(local_1c[0],1,0);
      if (iVar1 < 0) {
        __vbaHresultCheckObj(iVar1,local_1c[0],&DAT_00403434,0x164);
      }
      iVar1 = (**(code **)(*local_1c[0] + 0xdc))(local_1c[0],L"licence = 1 ");
    } while (-1 < iVar1);
    uVar3 = 0xdc;
  } while( true );
}


// ---- FUN_00425160 @ 00425160

void FUN_00425160(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  int **ppiVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int *piVar9;
  int *piVar10;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c [5];
  undefined4 local_78 [2];
  wchar_t *local_70;
  undefined4 local_58 [4];
  undefined4 local_48 [4];
  undefined4 local_38 [2];
  undefined4 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int *local_1c;
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_00401736;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffff54;
  local_8 = &DAT_00401690;
  local_78[0] = 10;
  local_70 = (wchar_t *)0x80020004;
  local_18 = 0;
  local_1c = (int *)0x0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_38[0] = 0;
  local_48[0] = 0;
  local_58[0] = 0;
  local_8c[0] = 0;
  local_90 = 0;
  local_94 = 0;
  ExceptionList = &pvStack_14;
  iVar1 = (**(code **)(*DAT_0043302c + 0xbc))(DAT_0043302c,L"validLicences",3);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,DAT_0043302c,&DAT_00402ed0,0xbc);
  }
  uVar2 = local_28;
  local_28 = 0;
  __vbaObjSet(&local_1c,uVar2);
  local_70 = L"machine = ";
  local_78[0] = 8;
  local_30 = 0xb;
  local_38[0] = 2;
  rtcVarStrFromVar(local_48,local_38);
  iVar1 = *local_1c;
  uVar2 = __vbaVarAdd(local_58,local_48,local_78);
  uVar2 = __vbaStrVarVal(&local_20,uVar2);
  piVar10 = local_1c;
  iVar1 = (**(code **)(iVar1 + 0xd4))(local_1c,uVar2);
  pcVar4 = __vbaHresultCheckObj_exref;
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c,&DAT_00403434,0xd4);
  }
  __vbaFreeStr();
  while( true ) {
    __vbaFreeVarList(3,local_38,local_48,local_58);
    puVar8 = local_8c;
    piVar9 = local_1c;
    iVar1 = (**(code **)(*local_1c + 0x5c))(local_1c,puVar8);
    if (iVar1 < 0) {
      (*pcVar4)(iVar1,local_1c,&DAT_00403434,0x5c);
    }
    if ((short)local_8c[0] != 0) break;
    iVar1 = (**(code **)(*local_1c + 0xcc))(local_1c);
    if (iVar1 < 0) {
      (*pcVar4)(iVar1,local_1c,&DAT_00403434,0xcc);
    }
    local_70 = L"machine = ";
    local_78[0] = 8;
    local_30 = 0xb;
    local_38[0] = 2;
    rtcVarStrFromVar(local_48,local_38);
    iVar1 = *local_1c;
    uVar3 = __vbaVarAdd(local_58,local_48,local_78);
    uVar3 = __vbaStrVarVal(&local_20,uVar3);
    iVar1 = (**(code **)(iVar1 + 0xdc))(local_1c,uVar3);
    pcVar4 = __vbaHresultCheckObj_exref;
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,local_1c,&DAT_00403434,0xdc);
    }
    __vbaFreeStr();
  }
  local_18 = 0;
  __vbaStrCopy(piVar9,puVar8);
  __vbaStrCopy(piVar10,uVar2);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  local_90 = 1;
  local_8c[0] = 0xb;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  local_90 = 3;
  local_8c[0] = 0xb;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  local_90 = 4;
  local_8c[0] = 0xb;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  local_90 = 5;
  local_8c[0] = 0xb;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  local_90 = 7;
  local_8c[0] = 0xb;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  local_90 = 9;
  local_8c[0] = 0xb;
  ppiVar5 = &local_1c;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  local_90 = 0xc;
  local_8c[0] = 0xb;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  local_90 = 0xf;
  local_8c[0] = 0xb;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  local_90 = 0x11;
  local_8c[0] = 0xb;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  local_90 = 0x18;
  local_8c[0] = 0xb;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  local_90 = 0x19;
  local_8c[0] = 0xb;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  local_90 = 0x1b;
  local_8c[0] = 0xb;
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  local_90 = 0x1f;
  local_8c[0] = 0xb;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_18 = 1;
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  local_90 = 2;
  local_8c[0] = 0xb;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  local_90 = 6;
  local_8c[0] = 0xb;
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  local_90 = 0xb;
  local_8c[0] = 0xb;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  local_90 = 0xe;
  local_8c[0] = 0xb;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  local_90 = 0x14;
  local_8c[0] = 0xb;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  local_90 = 0x17;
  local_8c[0] = 0xb;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  local_90 = 0x20;
  local_8c[0] = 0xb;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  local_90 = 0x21;
  local_8c[0] = 0xb;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_94 = 1;
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  local_90 = 0x29;
  local_8c[0] = 0xb;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_94);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_94 = 1;
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  local_90 = 0x2b;
  local_8c[0] = 0xb;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_94);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_94 = 1;
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  local_90 = 0x2c;
  local_8c[0] = 0xb;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_94);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_94 = 1;
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  local_90 = 0x2d;
  local_8c[0] = 0xb;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_94);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_94 = 1;
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  local_90 = 0x2e;
  local_8c[0] = 0xb;
  ppiVar5 = &local_1c;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_94);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_94 = 2;
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  local_90 = 0x1c;
  local_8c[0] = 0xb;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_94);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_94 = 2;
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  local_90 = 0x1d;
  local_8c[0] = 0xb;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_94);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_18 = 0;
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  local_90 = 1;
  local_8c[0] = 0xc;
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  local_90 = 3;
  local_8c[0] = 0xc;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  local_90 = 4;
  local_8c[0] = 0xc;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  local_90 = 5;
  local_8c[0] = 0xc;
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  local_90 = 7;
  local_8c[0] = 0xc;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  local_90 = 9;
  local_8c[0] = 0xc;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  local_90 = 0xc;
  local_8c[0] = 0xc;
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  local_90 = 0xf;
  local_8c[0] = 0xc;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  local_90 = 0x11;
  local_8c[0] = 0xc;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  local_90 = 0x18;
  local_8c[0] = 0xc;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  local_90 = 0x19;
  local_8c[0] = 0xc;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  local_90 = 0x1b;
  local_8c[0] = 0xc;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  local_90 = 0x1f;
  local_8c[0] = 0xc;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_18 = 1;
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  local_90 = 2;
  local_8c[0] = 0xc;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  local_90 = 6;
  local_8c[0] = 0xc;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  local_90 = 0xb;
  local_8c[0] = 0xc;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  local_90 = 0xe;
  local_8c[0] = 0xc;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  local_90 = 0x14;
  local_8c[0] = 0xc;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  local_90 = 0x17;
  local_8c[0] = 0xc;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  local_90 = 0x20;
  local_8c[0] = 0xc;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  local_90 = 0x21;
  local_8c[0] = 0xc;
  ppiVar5 = &local_1c;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_94 = 1;
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  local_90 = 0x29;
  local_8c[0] = 0xc;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_94);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_94 = 1;
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  local_90 = 0x2b;
  local_8c[0] = 0xc;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_94);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_94 = 1;
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  local_90 = 0x2c;
  local_8c[0] = 0xc;
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_94);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_94 = 1;
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  local_90 = 0x2d;
  local_8c[0] = 0xc;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_94);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_94 = 1;
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  local_90 = 0x2e;
  local_8c[0] = 0xc;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_94);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_94 = 2;
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  local_90 = 0x1c;
  local_8c[0] = 0xc;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_94);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_94 = 2;
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  local_90 = 0x1d;
  local_8c[0] = 0xc;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_94);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_18 = 0;
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  local_90 = 1;
  local_8c[0] = 0xd;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  local_90 = 3;
  local_8c[0] = 0xd;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  local_90 = 4;
  local_8c[0] = 0xd;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  local_90 = 5;
  local_8c[0] = 0xd;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  local_90 = 7;
  local_8c[0] = 0xd;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  local_90 = 9;
  local_8c[0] = 0xd;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  local_90 = 0xc;
  local_8c[0] = 0xd;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  local_90 = 0xf;
  local_8c[0] = 0xd;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  local_90 = 0x11;
  local_8c[0] = 0xd;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  local_90 = 0x18;
  local_8c[0] = 0xd;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  local_90 = 0x19;
  local_8c[0] = 0xd;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  local_90 = 0x1b;
  local_8c[0] = 0xd;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  local_90 = 0x1f;
  local_8c[0] = 0xd;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_18 = 1;
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  local_90 = 2;
  local_8c[0] = 0xd;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  local_90 = 6;
  local_8c[0] = 0xd;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  local_90 = 0xb;
  local_8c[0] = 0xd;
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  local_90 = 0xe;
  local_8c[0] = 0xd;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  local_90 = 0x14;
  local_8c[0] = 0xd;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  local_90 = 0x17;
  local_8c[0] = 0xd;
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  local_90 = 0x20;
  local_8c[0] = 0xd;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  local_90 = 0x21;
  local_8c[0] = 0xd;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_94 = 1;
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  local_90 = 0x29;
  local_8c[0] = 0xd;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_94);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_94 = 1;
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  local_90 = 0x2b;
  local_8c[0] = 0xd;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_94);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_94 = 1;
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  local_90 = 0x2c;
  local_8c[0] = 0xd;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_94);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_94 = 1;
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  local_90 = 0x2d;
  local_8c[0] = 0xd;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_94);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_94 = 1;
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  local_90 = 0x2e;
  local_8c[0] = 0xd;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_94);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_94 = 2;
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  local_90 = 0x1c;
  local_8c[0] = 0xd;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_94);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_94 = 2;
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  local_90 = 0x1d;
  local_8c[0] = 0xd;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_94);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_18 = 0;
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  local_90 = 1;
  local_8c[0] = 0xe;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  local_90 = 3;
  local_8c[0] = 0xe;
  ppiVar5 = &local_1c;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  local_90 = 4;
  local_8c[0] = 0xe;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  local_90 = 5;
  local_8c[0] = 0xe;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  local_90 = 7;
  local_8c[0] = 0xe;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  local_90 = 9;
  local_8c[0] = 0xe;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  local_90 = 0xc;
  local_8c[0] = 0xe;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  local_90 = 0xf;
  local_8c[0] = 0xe;
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  local_90 = 0x11;
  local_8c[0] = 0xe;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  local_90 = 0x18;
  local_8c[0] = 0xe;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  local_90 = 0x19;
  local_8c[0] = 0xe;
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  local_90 = 0x1b;
  local_8c[0] = 0xe;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  local_90 = 0x1f;
  local_8c[0] = 0xe;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_18 = 1;
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  local_90 = 2;
  local_8c[0] = 0xe;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  local_90 = 6;
  local_8c[0] = 0xe;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  local_90 = 0xb;
  local_8c[0] = 0xe;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  local_90 = 0xe;
  local_8c[0] = 0xe;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  local_90 = 0x14;
  local_8c[0] = 0xe;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  local_90 = 0x17;
  local_8c[0] = 0xe;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  local_90 = 0x20;
  local_8c[0] = 0xe;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  local_90 = 0x21;
  local_8c[0] = 0xe;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_94 = 1;
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  local_90 = 0x29;
  local_8c[0] = 0xe;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_94);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_94 = 1;
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  local_90 = 0x2b;
  local_8c[0] = 0xe;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_94);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_94 = 1;
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  local_90 = 0x2c;
  local_8c[0] = 0xe;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_94);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_94 = 1;
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  local_90 = 0x2d;
  local_8c[0] = 0xe;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_94);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_94 = 1;
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  local_90 = 0x2e;
  local_8c[0] = 0xe;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_94);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_94 = 2;
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_20;
  puVar7 = &local_90;
  puVar6 = local_8c;
  ppiVar5 = &local_1c;
  local_90 = 0x1c;
  local_8c[0] = 0xe;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_24,
               (undefined2 *)&local_94);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_94 = 2;
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  local_90 = 0x1d;
  local_8c[0] = 0xe;
  FUN_0040b5a0(&local_1c,(undefined2 *)local_8c,(undefined2 *)&local_90,&local_20,&local_24,
               (undefined2 *)&local_94);
  __vbaFreeStrList(2,&local_20,&local_24);
  iVar1 = (**(code **)(*local_1c + 0xc4))(local_1c);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c,&DAT_00403434,0xc4);
  }
  __vbaFreeObj(&LAB_00427c9f);
  return;
}


// ---- FUN_00427cb0 @ 00427cb0

void FUN_00427cb0(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_94 [2];
  wchar_t *local_8c;
  undefined4 local_84;
  undefined4 local_80;
  wchar_t *local_7c;
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 local_64 [4];
  undefined4 local_54 [4];
  undefined4 local_44 [4];
  undefined4 local_34 [2];
  undefined4 local_2c;
  undefined4 local_24;
  undefined4 local_20;
  int *local_1c [2];
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_00401736;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffff54;
  local_8 = &DAT_004016a0;
  local_94[0] = 10;
  local_1c[0] = (int *)0x0;
  local_20 = 0;
  local_24 = 0;
  local_34[0] = 0;
  local_44[0] = 0;
  local_54[0] = 0;
  local_64[0] = 0;
  local_8c = (wchar_t *)0x80020004;
  local_7c = (wchar_t *)0x80020004;
  local_84 = 10;
  ExceptionList = &pvStack_14;
  iVar1 = (**(code **)(*DAT_0043302c + 0xbc))(DAT_0043302c,L"validLicences",3);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,DAT_0043302c,&DAT_00402ed0,0xbc);
  }
  uVar2 = local_24;
  local_24 = 0;
  __vbaObjSet(local_1c,uVar2);
  local_7c = L"machine = ";
  local_84 = 8;
  local_2c = 2;
  local_34[0] = 2;
  rtcVarStrFromVar(local_44,local_34);
  local_8c = L" AND licence = 3";
  local_94[0] = 8;
  iVar1 = *local_1c[0];
  uVar2 = __vbaVarAdd(local_54,local_44,&local_84);
  uVar2 = __vbaVarAdd(local_64,local_94,uVar2);
  uVar2 = __vbaStrVarVal(&local_20,uVar2);
  iVar1 = (**(code **)(iVar1 + 0xd4))(local_1c[0],uVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c[0],&DAT_00403434,0xd4);
  }
  __vbaFreeStr();
  __vbaFreeVarList(4,local_34,local_44,local_54,local_64);
  iVar1 = (**(code **)(*local_1c[0] + 0xd0))(local_1c[0]);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c[0],&DAT_00403434,0xd0);
  }
  local_84 = 2;
  local_7c = (wchar_t *)0x0;
  iVar1 = (**(code **)(*local_1c[0] + 0x128))
                    (local_1c[0],8,local_70,L"Class",local_68,2,local_80,0,local_78);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c[0],&DAT_00403434,0x128);
  }
  iVar1 = (**(code **)(*local_1c[0] + 0x164))(local_1c[0],1,0);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c[0],&DAT_00403434,0x164);
  }
  local_2c = 2;
  local_34[0] = 2;
  local_7c = L"machine = ";
  local_84 = 8;
  rtcVarStrFromVar(local_44,local_34);
  local_8c = L" AND licence = 30";
  local_94[0] = 8;
  iVar1 = *local_1c[0];
  uVar2 = __vbaVarAdd(local_54,local_44,&local_84);
  uVar2 = __vbaVarAdd(local_64,local_94,uVar2);
  uVar2 = __vbaStrVarVal(&local_20,uVar2);
  iVar1 = (**(code **)(iVar1 + 0xd4))(local_1c[0],uVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c[0],&DAT_00403434,0xd4);
  }
  __vbaFreeStr();
  __vbaFreeVarList(4,local_34,local_44,local_54,local_64);
  iVar1 = (**(code **)(*local_1c[0] + 0xd0))(local_1c[0]);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c[0],&DAT_00403434,0xd0);
  }
  local_84 = 2;
  local_7c = (wchar_t *)0x0;
  iVar1 = (**(code **)(*local_1c[0] + 0x128))
                    (local_1c[0],8,local_70,L"Class",local_68,2,local_80,0,local_78);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c[0],&DAT_00403434,0x128);
  }
  iVar1 = (**(code **)(*local_1c[0] + 0x164))(local_1c[0],1,0);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c[0],&DAT_00403434,0x164);
  }
  local_7c = L"machine = ";
  local_84 = 8;
  local_2c = 0;
  local_34[0] = 2;
  rtcVarStrFromVar(local_44,local_34);
  local_8c = L" AND licence = 30";
  local_94[0] = 8;
  iVar1 = *local_1c[0];
  uVar2 = __vbaVarAdd(local_54,local_44,&local_84);
  uVar2 = __vbaVarAdd(local_64,local_94,uVar2);
  uVar2 = __vbaStrVarVal(&local_20,uVar2);
  iVar1 = (**(code **)(iVar1 + 0xd4))(local_1c[0],uVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c[0],&DAT_00403434,0xd4);
  }
  __vbaFreeStr();
  __vbaFreeVarList(4,local_34,local_44,local_54,local_64);
  iVar1 = (**(code **)(*local_1c[0] + 0xd0))(local_1c[0]);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c[0],&DAT_00403434,0xd0);
  }
  local_84 = 2;
  local_7c = (wchar_t *)0x0;
  iVar1 = (**(code **)(*local_1c[0] + 0x128))
                    (local_1c[0],8,local_70,L"Class",local_68,2,local_80,0,local_78);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c[0],&DAT_00403434,0x128);
  }
  iVar1 = (**(code **)(*local_1c[0] + 0x164))(local_1c[0],1,0);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c[0],&DAT_00403434,0x164);
  }
  local_2c = 2;
  local_34[0] = 2;
  local_7c = L"machine = ";
  local_84 = 8;
  rtcVarStrFromVar(local_44,local_34);
  local_8c = L" AND licence = 31";
  local_94[0] = 8;
  iVar1 = *local_1c[0];
  uVar2 = __vbaVarAdd(local_54,local_44,&local_84);
  uVar2 = __vbaVarAdd(local_64,local_94,uVar2);
  uVar2 = __vbaStrVarVal(&local_20,uVar2);
  iVar1 = (**(code **)(iVar1 + 0xd4))(local_1c[0],uVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c[0],&DAT_00403434,0xd4);
  }
  __vbaFreeStr();
  __vbaFreeVarList(4,local_34,local_44,local_54,local_64);
  iVar1 = (**(code **)(*local_1c[0] + 0xd0))(local_1c[0]);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c[0],&DAT_00403434,0xd0);
  }
  local_84 = 2;
  local_7c = (wchar_t *)0x0;
  iVar1 = (**(code **)(*local_1c[0] + 0x128))
                    (local_1c[0],8,local_70,L"Class",local_68,2,local_80,0,local_78);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c[0],&DAT_00403434,0x128);
  }
  iVar1 = (**(code **)(*local_1c[0] + 0x164))(local_1c[0],1,0);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c[0],&DAT_00403434,0x164);
  }
  local_7c = L"machine = ";
  local_84 = 8;
  local_2c = 0;
  local_34[0] = 2;
  rtcVarStrFromVar(local_44,local_34);
  local_8c = L" AND licence = 31";
  local_94[0] = 8;
  iVar1 = *local_1c[0];
  uVar2 = __vbaVarAdd(local_54,local_44,&local_84);
  uVar2 = __vbaVarAdd(local_64,local_94,uVar2);
  uVar2 = __vbaStrVarVal(&local_20,uVar2);
  iVar1 = (**(code **)(iVar1 + 0xd4))(local_1c[0],uVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c[0],&DAT_00403434,0xd4);
  }
  __vbaFreeStr();
  __vbaFreeVarList(4,local_34,local_44,local_54,local_64);
  iVar1 = (**(code **)(*local_1c[0] + 0xd0))(local_1c[0]);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c[0],&DAT_00403434,0xd0);
  }
  local_84 = 2;
  local_7c = (wchar_t *)0x0;
  iVar1 = (**(code **)(*local_1c[0] + 0x128))
                    (local_1c[0],8,local_70,L"Class",local_68,2,local_80,0,local_78);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c[0],&DAT_00403434,0x128);
  }
  iVar1 = (**(code **)(*local_1c[0] + 0x164))(local_1c[0],1,0);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c[0],&DAT_00403434,0x164);
  }
  iVar1 = (**(code **)(*local_1c[0] + 0xc4))(local_1c[0]);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c[0],&DAT_00403434,0xc4);
  }
  __vbaFreeObj(&LAB_0042855d);
  return;
}


// ---- FUN_00428570 @ 00428570

void FUN_00428570(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_94 [2];
  wchar_t *local_8c;
  undefined4 local_84;
  undefined4 local_80;
  wchar_t *local_7c;
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 local_64 [4];
  undefined4 local_54 [4];
  undefined4 local_44 [4];
  undefined4 local_34 [2];
  undefined4 local_2c;
  undefined4 local_24;
  undefined4 local_20;
  int *local_1c [2];
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_00401736;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffff54;
  local_8 = &DAT_004016b0;
  local_94[0] = 10;
  local_1c[0] = (int *)0x0;
  local_20 = 0;
  local_24 = 0;
  local_34[0] = 0;
  local_44[0] = 0;
  local_54[0] = 0;
  local_64[0] = 0;
  local_8c = (wchar_t *)0x80020004;
  local_7c = (wchar_t *)0x80020004;
  local_84 = 10;
  ExceptionList = &pvStack_14;
  iVar1 = (**(code **)(*DAT_0043302c + 0xbc))(DAT_0043302c,L"validLicences",3);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,DAT_0043302c,&DAT_00402ed0,0xbc);
  }
  uVar2 = local_24;
  local_24 = 0;
  __vbaObjSet(local_1c,uVar2);
  local_7c = L"machine = ";
  local_84 = 8;
  local_2c = 1;
  local_34[0] = 2;
  rtcVarStrFromVar(local_44,local_34);
  local_8c = L" AND licence = 3";
  local_94[0] = 8;
  iVar1 = *local_1c[0];
  uVar2 = __vbaVarAdd(local_54,local_44,&local_84);
  uVar2 = __vbaVarAdd(local_64,local_94,uVar2);
  uVar2 = __vbaStrVarVal(&local_20,uVar2);
  iVar1 = (**(code **)(iVar1 + 0xd4))(local_1c[0],uVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c[0],&DAT_00403434,0xd4);
  }
  __vbaFreeStr();
  __vbaFreeVarList(4,local_34,local_44,local_54,local_64);
  iVar1 = (**(code **)(*local_1c[0] + 0xd0))(local_1c[0]);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c[0],&DAT_00403434,0xd0);
  }
  local_84 = 2;
  local_7c = (wchar_t *)0x0;
  iVar1 = (**(code **)(*local_1c[0] + 0x128))
                    (local_1c[0],8,local_70,L"Class",local_68,2,local_80,0,local_78);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c[0],&DAT_00403434,0x128);
  }
  iVar1 = (**(code **)(*local_1c[0] + 0x164))(local_1c[0],1,0);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c[0],&DAT_00403434,0x164);
  }
  local_7c = L"machine = ";
  local_84 = 8;
  local_2c = 1;
  local_34[0] = 2;
  rtcVarStrFromVar(local_44,local_34);
  local_8c = L" AND licence = 30";
  local_94[0] = 8;
  iVar1 = *local_1c[0];
  uVar2 = __vbaVarAdd(local_54,local_44,&local_84);
  uVar2 = __vbaVarAdd(local_64,local_94,uVar2);
  uVar2 = __vbaStrVarVal(&local_20,uVar2);
  iVar1 = (**(code **)(iVar1 + 0xd4))(local_1c[0],uVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c[0],&DAT_00403434,0xd4);
  }
  __vbaFreeStr();
  __vbaFreeVarList(4,local_34,local_44,local_54,local_64);
  iVar1 = (**(code **)(*local_1c[0] + 0xd0))(local_1c[0]);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c[0],&DAT_00403434,0xd0);
  }
  local_84 = 2;
  local_7c = (wchar_t *)0x0;
  iVar1 = (**(code **)(*local_1c[0] + 0x128))
                    (local_1c[0],8,local_70,L"Class",local_68,2,local_80,0,local_78);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c[0],&DAT_00403434,0x128);
  }
  iVar1 = (**(code **)(*local_1c[0] + 0x164))(local_1c[0],1,0);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c[0],&DAT_00403434,0x164);
  }
  local_7c = L"machine = ";
  local_84 = 8;
  local_2c = 1;
  local_34[0] = 2;
  rtcVarStrFromVar(local_44,local_34);
  local_8c = L" AND licence = 31";
  local_94[0] = 8;
  iVar1 = *local_1c[0];
  uVar2 = __vbaVarAdd(local_54,local_44,&local_84);
  uVar2 = __vbaVarAdd(local_64,local_94,uVar2);
  uVar2 = __vbaStrVarVal(&local_20,uVar2);
  iVar1 = (**(code **)(iVar1 + 0xd4))(local_1c[0],uVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c[0],&DAT_00403434,0xd4);
  }
  __vbaFreeStr();
  __vbaFreeVarList(4,local_34,local_44,local_54,local_64);
  iVar1 = (**(code **)(*local_1c[0] + 0xd0))(local_1c[0]);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c[0],&DAT_00403434,0xd0);
  }
  local_84 = 2;
  local_7c = (wchar_t *)0x0;
  iVar1 = (**(code **)(*local_1c[0] + 0x128))
                    (local_1c[0],8,local_70,L"Class",local_68,2,local_80,0,local_78);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c[0],&DAT_00403434,0x128);
  }
  iVar1 = (**(code **)(*local_1c[0] + 0x164))(local_1c[0],1,0);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c[0],&DAT_00403434,0x164);
  }
  iVar1 = (**(code **)(*local_1c[0] + 0xc4))(local_1c[0]);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c[0],&DAT_00403434,0xc4);
  }
  __vbaFreeObj(&LAB_00428b37);
  return;
}


// ---- FUN_00428b50 @ 00428b50

void FUN_00428b50(void)

{
  undefined4 uVar1;
  int iVar2;
  int **ppiVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  wchar_t *pwVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c [5];
  undefined4 local_48;
  undefined4 local_34;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int *local_1c;
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_00401736;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffff84;
  local_8 = &DAT_004016c0;
  local_48 = 10;
  local_18 = 0;
  local_1c = (int *)0x0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_5c[0] = 0;
  local_60 = 0;
  local_64 = 0;
  pwVar8 = L"validLicences";
  uVar9 = 3;
  ExceptionList = &pvStack_14;
  piVar7 = DAT_0043302c;
  iVar2 = (**(code **)(*DAT_0043302c + 0xbc))(DAT_0043302c,L"validLicences",3);
  uVar10 = local_34;
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,DAT_0043302c,&DAT_00402ed0,0xbc);
    uVar10 = local_34;
  }
  uVar1 = local_28;
  local_28 = 0;
  __vbaObjSet(&local_1c,uVar1);
  local_18 = 0;
  __vbaStrCopy(piVar7,pwVar8);
  __vbaStrCopy(uVar9,uVar10);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 3;
  local_5c[0] = 0xf;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 7;
  local_5c[0] = 0xf;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  local_60 = 0xc;
  local_5c[0] = 0xf;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0xf;
  local_5c[0] = 0xf;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x18;
  local_5c[0] = 0xf;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  local_60 = 0x19;
  local_5c[0] = 0xf;
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x1b;
  local_5c[0] = 0xf;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_18 = 1;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 4;
  local_5c[0] = 0xf;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  local_60 = 5;
  local_5c[0] = 0xf;
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 6;
  local_5c[0] = 0xf;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 9;
  local_5c[0] = 0xf;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0xb;
  local_5c[0] = 0xf;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0xe;
  local_5c[0] = 0xf;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x11;
  local_5c[0] = 0xf;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x14;
  local_5c[0] = 0xf;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x1f;
  local_5c[0] = 0xf;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x20;
  local_5c[0] = 0xf;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x21;
  local_5c[0] = 0xf;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_64 = 1;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x29;
  local_5c[0] = 0xf;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_64);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_64 = 1;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x2c;
  local_5c[0] = 0xf;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_64);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_64 = 1;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x2e;
  local_5c[0] = 0xf;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_64);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_64 = 2;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x1c;
  local_5c[0] = 0xf;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_64);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_64 = 2;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  local_60 = 0x1d;
  local_5c[0] = 0xf;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_64);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_18 = 0;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 3;
  local_5c[0] = 0x10;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 7;
  local_5c[0] = 0x10;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  local_60 = 0xc;
  local_5c[0] = 0x10;
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0xf;
  local_5c[0] = 0x10;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x18;
  local_5c[0] = 0x10;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  local_60 = 0x19;
  local_5c[0] = 0x10;
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x1b;
  local_5c[0] = 0x10;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x1f;
  local_5c[0] = 0x10;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_18 = 1;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 4;
  local_5c[0] = 0x10;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 5;
  local_5c[0] = 0x10;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 6;
  local_5c[0] = 0x10;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 9;
  local_5c[0] = 0x10;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0xb;
  local_5c[0] = 0x10;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0xe;
  local_5c[0] = 0x10;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x11;
  local_5c[0] = 0x10;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x14;
  local_5c[0] = 0x10;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x20;
  local_5c[0] = 0x10;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x21;
  local_5c[0] = 0x10;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_64 = 1;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x29;
  local_5c[0] = 0x10;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_64);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_64 = 1;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  local_60 = 0x2c;
  local_5c[0] = 0x10;
  ppiVar3 = &local_1c;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_64);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_64 = 1;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x2e;
  local_5c[0] = 0x10;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_64);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_64 = 2;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x1c;
  local_5c[0] = 0x10;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_64);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_64 = 2;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  local_60 = 0x1d;
  local_5c[0] = 0x10;
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_64);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_18 = 0;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 1;
  local_5c[0] = 0x11;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 3;
  local_5c[0] = 0x11;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  local_60 = 4;
  local_5c[0] = 0x11;
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 5;
  local_5c[0] = 0x11;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 7;
  local_5c[0] = 0x11;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 9;
  local_5c[0] = 0x11;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0xc;
  local_5c[0] = 0x11;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0xf;
  local_5c[0] = 0x11;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x18;
  local_5c[0] = 0x11;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x19;
  local_5c[0] = 0x11;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x1b;
  local_5c[0] = 0x11;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_18 = 1;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 2;
  local_5c[0] = 0x11;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 6;
  local_5c[0] = 0x11;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0xb;
  local_5c[0] = 0x11;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0xe;
  local_5c[0] = 0x11;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x11;
  local_5c[0] = 0x11;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x14;
  local_5c[0] = 0x11;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x17;
  local_5c[0] = 0x11;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x1f;
  local_5c[0] = 0x11;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  local_60 = 0x20;
  local_5c[0] = 0x11;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x21;
  local_5c[0] = 0x11;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_64 = 1;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x29;
  local_5c[0] = 0x11;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_64);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_64 = 1;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  local_60 = 0x2b;
  local_5c[0] = 0x11;
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_64);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_64 = 1;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x2c;
  local_5c[0] = 0x11;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_64);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_64 = 1;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x2d;
  local_5c[0] = 0x11;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_64);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_64 = 1;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x2e;
  local_5c[0] = 0x11;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_64);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_64 = 2;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x1c;
  local_5c[0] = 0x11;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_64);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_64 = 2;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x1d;
  local_5c[0] = 0x11;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_64);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_18 = 0;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 1;
  local_5c[0] = 0x12;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 3;
  local_5c[0] = 0x12;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 4;
  local_5c[0] = 0x12;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 5;
  local_5c[0] = 0x12;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 7;
  local_5c[0] = 0x12;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 9;
  local_5c[0] = 0x12;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0xc;
  local_5c[0] = 0x12;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0xf;
  local_5c[0] = 0x12;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  local_60 = 0x11;
  puVar5 = &local_60;
  puVar4 = local_5c;
  local_5c[0] = 0x12;
  ppiVar3 = &local_1c;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x18;
  local_5c[0] = 0x12;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x19;
  local_5c[0] = 0x12;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  local_60 = 0x1b;
  local_5c[0] = 0x12;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x1f;
  local_5c[0] = 0x12;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_18 = 1;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 2;
  local_5c[0] = 0x12;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  local_60 = 6;
  local_5c[0] = 0x12;
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0xb;
  local_5c[0] = 0x12;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0xe;
  local_5c[0] = 0x12;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  local_60 = 0x14;
  local_5c[0] = 0x12;
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x17;
  local_5c[0] = 0x12;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x20;
  local_5c[0] = 0x12;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x21;
  local_5c[0] = 0x12;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_64 = 1;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x29;
  local_5c[0] = 0x12;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_64);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_64 = 1;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x2b;
  local_5c[0] = 0x12;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_64);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_64 = 1;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x2c;
  local_5c[0] = 0x12;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_64);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_64 = 1;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x2d;
  local_5c[0] = 0x12;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_64);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_64 = 1;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x2e;
  local_5c[0] = 0x12;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_64);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_64 = 2;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_60;
  puVar4 = local_5c;
  ppiVar3 = &local_1c;
  local_60 = 0x1c;
  local_5c[0] = 0x12;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_64);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_64 = 2;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  local_60 = 0x1d;
  local_5c[0] = 0x12;
  FUN_0040b5a0(&local_1c,(undefined2 *)local_5c,(undefined2 *)&local_60,&local_20,&local_24,
               (undefined2 *)&local_64);
  __vbaFreeStrList(2,&local_20,&local_24);
  iVar2 = (**(code **)(*local_1c + 0xc4))(local_1c);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_1c,&DAT_00403434,0xc4);
  }
  __vbaFreeObj(&LAB_0042ab96);
  return;
}


// ---- FUN_0042abb0 @ 0042abb0

void FUN_0042abb0(void)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined4 local_88 [5];
  undefined4 local_74;
  undefined4 local_70;
  wchar_t *local_6c;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 local_54 [4];
  undefined4 local_44 [4];
  undefined4 local_34 [2];
  undefined4 local_2c;
  undefined4 local_24;
  undefined4 local_20;
  int *local_1c [2];
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_00401736;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffff60;
  local_8 = &DAT_004016d0;
  local_1c[0] = (int *)0x0;
  local_20 = 0;
  local_24 = 0;
  local_34[0] = 0;
  local_44[0] = 0;
  local_54[0] = 0;
  local_88[0] = 0;
  local_6c = (wchar_t *)0x80020004;
  local_74 = 10;
  ExceptionList = &pvStack_14;
  iVar1 = (**(code **)(*DAT_0043302c + 0xbc))(DAT_0043302c,L"validLicences",3);
  pcVar3 = __vbaHresultCheckObj_exref;
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,DAT_0043302c,&DAT_00402ed0,0xbc);
  }
  uVar2 = local_24;
  local_24 = 0;
  __vbaObjSet(local_1c,uVar2);
  local_6c = L"licence = 17 AND machine = ";
  local_74 = 8;
  local_2c = 0xf;
  local_34[0] = 2;
  rtcVarStrFromVar(local_44,local_34);
  iVar1 = *local_1c[0];
  uVar2 = __vbaVarAdd(local_54,local_44,&local_74);
  uVar2 = __vbaStrVarVal(&local_20,uVar2);
  iVar1 = (**(code **)(iVar1 + 0xd4))(local_1c[0],uVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c[0],&DAT_00403434,0xd4);
  }
  __vbaFreeStr();
  __vbaFreeVarList(3,local_34,local_44,local_54);
  iVar1 = (**(code **)(*local_1c[0] + 0x5c))(local_1c[0],local_88);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c[0],&DAT_00403434,0x5c);
  }
  if ((short)local_88[0] == 0) {
    iVar1 = (**(code **)(*local_1c[0] + 0xd0))(local_1c[0]);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,local_1c[0],&DAT_00403434,0xd0);
    }
    local_74 = 2;
    local_6c = (wchar_t *)0x0;
    iVar1 = (**(code **)(*local_1c[0] + 0x128))
                      (local_1c[0],8,local_60,L"Class",local_58,2,local_70,0,local_68);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,local_1c[0],&DAT_00403434,0x128);
    }
    iVar1 = (**(code **)(*local_1c[0] + 0x164))(local_1c[0],1,0);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,local_1c[0],&DAT_00403434,0x164);
    }
  }
  local_6c = L"licence = 17 AND machine = ";
  local_74 = 8;
  local_2c = 0x10;
  local_34[0] = 2;
  rtcVarStrFromVar(local_44,local_34);
  iVar1 = *local_1c[0];
  uVar2 = __vbaVarAdd(local_54,local_44,&local_74);
  uVar2 = __vbaStrVarVal(&local_20,uVar2);
  iVar1 = (**(code **)(iVar1 + 0xd4))(local_1c[0],uVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c[0],&DAT_00403434,0xd4);
  }
  __vbaFreeStr();
  __vbaFreeVarList(3,local_34,local_44,local_54);
  iVar1 = (**(code **)(*local_1c[0] + 0x5c))(local_1c[0],local_88);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c[0],&DAT_00403434,0x5c);
  }
  if ((short)local_88[0] == 0) {
    iVar1 = (**(code **)(*local_1c[0] + 0xd0))(local_1c[0]);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,local_1c[0],&DAT_00403434,0xd0);
    }
    local_74 = 2;
    local_6c = (wchar_t *)0x0;
    iVar1 = (**(code **)(*local_1c[0] + 0x128))
                      (local_1c[0],8,local_60,L"Class",local_58,2,local_70,0,local_68);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,local_1c[0],&DAT_00403434,0x128);
    }
    iVar1 = (**(code **)(*local_1c[0] + 0x164))(local_1c[0],1,0);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,local_1c[0],&DAT_00403434,0x164);
    }
  }
  local_6c = L"licence = 17 AND machine = ";
  local_74 = 8;
  local_2c = 0x11;
  local_34[0] = 2;
  rtcVarStrFromVar(local_44,local_34);
  iVar1 = *local_1c[0];
  uVar2 = __vbaVarAdd(local_54,local_44,&local_74);
  uVar2 = __vbaStrVarVal(&local_20,uVar2);
  iVar1 = (**(code **)(iVar1 + 0xd4))(local_1c[0],uVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c[0],&DAT_00403434,0xd4);
  }
  __vbaFreeStr();
  __vbaFreeVarList(3,local_34,local_44,local_54);
  iVar1 = (**(code **)(*local_1c[0] + 0x5c))(local_1c[0],local_88);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c[0],&DAT_00403434,0x5c);
  }
  if ((short)local_88[0] == 0) {
    iVar1 = (**(code **)(*local_1c[0] + 0xd0))(local_1c[0]);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,local_1c[0],&DAT_00403434,0xd0);
    }
    local_74 = 2;
    local_6c = (wchar_t *)0x0;
    iVar1 = (**(code **)(*local_1c[0] + 0x128))
                      (local_1c[0],8,local_60,L"Class",local_58,2,local_70,0,local_68);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,local_1c[0],&DAT_00403434,0x128);
    }
    iVar1 = (**(code **)(*local_1c[0] + 0x164))(local_1c[0],1,0);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,local_1c[0],&DAT_00403434,0x164);
    }
  }
  local_6c = L"licence = 31 AND machine = ";
  local_74 = 8;
  local_2c = 0xf;
  local_34[0] = 2;
  rtcVarStrFromVar(local_44,local_34);
  iVar1 = *local_1c[0];
  uVar2 = __vbaVarAdd(local_54,local_44,&local_74);
  uVar2 = __vbaStrVarVal(&local_20,uVar2);
  iVar1 = (**(code **)(iVar1 + 0xd4))(local_1c[0],uVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c[0],&DAT_00403434,0xd4);
  }
  __vbaFreeStr();
  __vbaFreeVarList(3,local_34,local_44,local_54);
  iVar1 = (**(code **)(*local_1c[0] + 0x5c))(local_1c[0],local_88);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c[0],&DAT_00403434,0x5c);
  }
  if ((short)local_88[0] == 0) {
    iVar1 = (**(code **)(*local_1c[0] + 0xd0))(local_1c[0]);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,local_1c[0],&DAT_00403434,0xd0);
    }
    local_74 = 2;
    local_6c = (wchar_t *)0x0;
    iVar1 = (**(code **)(*local_1c[0] + 0x128))
                      (local_1c[0],8,local_60,L"Class",local_58,2,local_70,0,local_68);
    pcVar3 = __vbaHresultCheckObj_exref;
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,local_1c[0],&DAT_00403434,0x128);
    }
    iVar1 = (**(code **)(*local_1c[0] + 0x164))(local_1c[0],1,0);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,local_1c[0],&DAT_00403434,0x164);
    }
  }
  local_6c = L"licence = 31 AND machine = ";
  local_74 = 8;
  local_2c = 0x11;
  local_34[0] = 2;
  rtcVarStrFromVar(local_44,local_34);
  iVar1 = *local_1c[0];
  uVar2 = __vbaVarAdd(local_54,local_44,&local_74);
  uVar2 = __vbaStrVarVal(&local_20,uVar2);
  iVar1 = (**(code **)(iVar1 + 0xd4))(local_1c[0],uVar2);
  if (iVar1 < 0) {
    (*pcVar3)(iVar1,local_1c[0],&DAT_00403434,0xd4);
  }
  __vbaFreeStr();
  __vbaFreeVarList(3,local_34,local_44,local_54);
  iVar1 = (**(code **)(*local_1c[0] + 0x5c))(local_1c[0],local_88);
  if (iVar1 < 0) {
    (*pcVar3)(iVar1,local_1c[0],&DAT_00403434,0x5c);
  }
  if ((short)local_88[0] == 0) {
    iVar1 = (**(code **)(*local_1c[0] + 0xd0))(local_1c[0]);
    if (iVar1 < 0) {
      (*pcVar3)(iVar1,local_1c[0],&DAT_00403434,0xd0);
    }
    local_74 = 2;
    local_6c = (wchar_t *)0x0;
    iVar1 = (**(code **)(*local_1c[0] + 0x128))
                      (local_1c[0],8,local_60,L"Class",local_58,2,local_70,0,local_68);
    pcVar3 = __vbaHresultCheckObj_exref;
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,local_1c[0],&DAT_00403434,0x128);
    }
    iVar1 = (**(code **)(*local_1c[0] + 0x164))(local_1c[0],1,0);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,local_1c[0],&DAT_00403434,0x164);
    }
  }
  iVar1 = (**(code **)(*local_1c[0] + 0xc4))(local_1c[0]);
  if (iVar1 < 0) {
    (*pcVar3)(iVar1,local_1c[0],&DAT_00403434,0xc4);
  }
  __vbaFreeObj(&LAB_0042b462);
  return;
}


// ---- FUN_0042b480 @ 0042b480

void FUN_0042b480(void)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  code *pcVar4;
  int **ppiVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0 [2];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  wchar_t *local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  wchar_t *local_84;
  undefined4 local_80;
  undefined4 local_7c [4];
  undefined4 local_6c [4];
  undefined4 local_5c [2];
  undefined4 local_54;
  int *local_4c;
  int *local_48;
  int *local_44;
  int *local_40;
  int *local_3c;
  int *local_38;
  undefined4 local_34;
  undefined4 local_30;
  int *local_2c;
  undefined4 local_28 [3];
  int *local_1c;
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined1 *local_8;
  
  puStack_10 = &DAT_00401736;
  pvStack_14 = ExceptionList;
  local_c = &stack0xfffffef0;
  local_8 = &LAB_004016e0;
  local_9c = 10;
  local_94 = (wchar_t *)0x80020004;
  local_8c = 3;
  local_84 = (wchar_t *)0x2;
  local_18 = 0;
  local_1c = (int *)0x0;
  local_28[0] = 0;
  local_2c = (int *)0x0;
  local_30 = 0;
  local_34 = 0;
  local_38 = (int *)0x0;
  local_3c = (int *)0x0;
  local_40 = (int *)0x0;
  local_44 = (int *)0x0;
  local_48 = (int *)0x0;
  local_4c = (int *)0x0;
  local_5c[0] = 0;
  local_6c[0] = 0;
  local_7c[0] = 0;
  local_b0[0] = 0;
  local_b4 = 0;
  local_b8 = 0;
  ExceptionList = &pvStack_14;
  iVar1 = (**(code **)(*DAT_0043302c + 0xbc))(DAT_0043302c,L"validLicences",3);
  pcVar3 = __vbaHresultCheckObj_exref;
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,DAT_0043302c,&DAT_00402ed0,0xbc);
  }
  piVar11 = local_38;
  local_38 = (int *)0x0;
  __vbaObjSet(&local_1c,piVar11);
  local_94 = L"licence = 23 AND Machine = ";
  local_9c = 8;
  local_54 = 0x13;
  local_5c[0] = 2;
  rtcVarStrFromVar(local_6c,local_5c);
  iVar1 = *local_1c;
  uVar2 = __vbaVarAdd(local_7c,local_6c,&local_9c);
  uVar2 = __vbaStrVarVal(&local_30,uVar2);
  iVar1 = (**(code **)(iVar1 + 0xd4))(local_1c,uVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c,&DAT_00403434,0xd4);
  }
  __vbaFreeStr();
  __vbaFreeVarList(3,local_5c,local_6c,local_7c);
  iVar1 = (**(code **)(*local_1c + 0x5c))(local_1c,local_b0);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c,&DAT_00403434,0x5c);
  }
  if ((short)local_b0[0] == 0) {
    iVar1 = (**(code **)(*local_1c + 0xd0))(local_1c);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,local_1c,&DAT_00403434,0xd0);
    }
    local_94 = (wchar_t *)0x0;
    local_9c = 2;
    local_84 = L"Class";
    local_8c = 8;
    iVar1 = (**(code **)(*local_1c + 0x128))
                      (local_1c,8,local_88,L"Class",local_80,2,local_98,0,local_90);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,local_1c,&DAT_00403434,0x128);
    }
    iVar1 = (**(code **)(*local_1c + 0x164))(local_1c,1,0);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,local_1c,&DAT_00403434,0x164);
    }
  }
  local_9c = 8;
  local_54 = 8;
  local_94 = L"licence = 23 AND Machine = ";
  local_5c[0] = 2;
  rtcVarStrFromVar(local_6c,local_5c);
  iVar1 = *local_1c;
  uVar2 = __vbaVarAdd(local_7c,local_6c,&local_9c);
  uVar2 = __vbaStrVarVal(&local_30,uVar2);
  iVar1 = (**(code **)(iVar1 + 0xd4))(local_1c,uVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c,&DAT_00403434,0xd4);
  }
  __vbaFreeStr();
  __vbaFreeVarList(3,local_5c,local_6c,local_7c);
  iVar1 = (**(code **)(*local_1c + 0x5c))(local_1c,local_b0);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c,&DAT_00403434,0x5c);
  }
  if ((short)local_b0[0] == 0) {
    iVar1 = (**(code **)(*local_1c + 0xd0))(local_1c);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,local_1c,&DAT_00403434,0xd0);
    }
    local_94 = (wchar_t *)0x0;
    local_9c = 2;
    local_84 = L"Class";
    local_8c = 8;
    iVar1 = (**(code **)(*local_1c + 0x128))
                      (local_1c,8,local_88,L"Class",local_80,2,local_98,0,local_90);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,local_1c,&DAT_00403434,0x128);
    }
    iVar1 = (**(code **)(*local_1c + 0x164))(local_1c,1,0);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,local_1c,&DAT_00403434,0x164);
    }
  }
  local_94 = L"licence = 23 AND Machine = ";
  local_9c = 8;
  local_54 = 7;
  local_5c[0] = 2;
  rtcVarStrFromVar(local_6c,local_5c);
  iVar1 = *local_1c;
  uVar2 = __vbaVarAdd(local_7c,local_6c,&local_9c);
  uVar2 = __vbaStrVarVal(&local_30,uVar2);
  iVar1 = (**(code **)(iVar1 + 0xd4))(local_1c,uVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c,&DAT_00403434,0xd4);
  }
  __vbaFreeStr();
  __vbaFreeVarList(3,local_5c,local_6c,local_7c);
  iVar1 = (**(code **)(*local_1c + 0x5c))(local_1c,local_b0);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c,&DAT_00403434,0x5c);
  }
  if ((short)local_b0[0] == 0) {
    iVar1 = (**(code **)(*local_1c + 0xd0))(local_1c);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,local_1c,&DAT_00403434,0xd0);
    }
    local_94 = (wchar_t *)0x0;
    local_9c = 2;
    local_84 = L"Class";
    local_8c = 8;
    iVar1 = (**(code **)(*local_1c + 0x128))
                      (local_1c,8,local_88,L"Class",local_80,2,local_98,0,local_90);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,local_1c,&DAT_00403434,0x128);
    }
    iVar1 = (**(code **)(*local_1c + 0x164))(local_1c,1,0);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,local_1c,&DAT_00403434,0x164);
    }
  }
  local_94 = L"licence = 23 AND Machine = ";
  local_9c = 8;
  local_54 = 0x17;
  local_5c[0] = 2;
  rtcVarStrFromVar(local_6c,local_5c);
  iVar1 = *local_1c;
  uVar2 = __vbaVarAdd(local_7c,local_6c,&local_9c);
  uVar2 = __vbaStrVarVal(&local_30,uVar2);
  iVar1 = (**(code **)(iVar1 + 0xd4))(local_1c,uVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c,&DAT_00403434,0xd4);
  }
  __vbaFreeStr();
  __vbaFreeVarList(3,local_5c,local_6c,local_7c);
  iVar1 = (**(code **)(*local_1c + 0x5c))(local_1c,local_b0);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c,&DAT_00403434,0x5c);
  }
  if ((short)local_b0[0] == 0) {
    iVar1 = (**(code **)(*local_1c + 0xd0))(local_1c);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,local_1c,&DAT_00403434,0xd0);
    }
    local_94 = (wchar_t *)0x0;
    local_9c = 2;
    local_84 = L"Class";
    local_8c = 8;
    iVar1 = (**(code **)(*local_1c + 0x128))
                      (local_1c,8,local_88,L"Class",local_80,2,local_98,0,local_90);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,local_1c,&DAT_00403434,0x128);
    }
    iVar1 = (**(code **)(*local_1c + 0x164))(local_1c,1,0);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,local_1c,&DAT_00403434,0x164);
    }
  }
  local_94 = L"licence = 23 AND Machine = ";
  local_9c = 8;
  local_54 = 0x18;
  local_5c[0] = 2;
  rtcVarStrFromVar(local_6c,local_5c);
  iVar1 = *local_1c;
  uVar2 = __vbaVarAdd(local_7c,local_6c,&local_9c);
  uVar2 = __vbaStrVarVal(&local_30,uVar2);
  iVar1 = (**(code **)(iVar1 + 0xd4))(local_1c,uVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c,&DAT_00403434,0xd4);
  }
  __vbaFreeStr();
  __vbaFreeVarList(3,local_5c,local_6c,local_7c);
  iVar1 = (**(code **)(*local_1c + 0x5c))(local_1c,local_b0);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c,&DAT_00403434,0x5c);
  }
  if ((short)local_b0[0] == 0) {
    iVar1 = (**(code **)(*local_1c + 0xd0))(local_1c);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,local_1c,&DAT_00403434,0xd0);
    }
    local_9c = 2;
    local_8c = 8;
    local_94 = (wchar_t *)0x0;
    local_84 = L"Class";
    iVar1 = (**(code **)(*local_1c + 0x128))
                      (local_1c,8,local_88,L"Class",local_80,2,local_98,0,local_90);
    pcVar3 = __vbaHresultCheckObj_exref;
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,local_1c,&DAT_00403434,0x128);
    }
    iVar1 = (**(code **)(*local_1c + 0x164))(local_1c,1,0);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,local_1c,&DAT_00403434,0x164);
    }
  }
  iVar1 = (**(code **)(*local_1c + 0xc4))(local_1c);
  if (iVar1 < 0) {
    (*pcVar3)(iVar1,local_1c,&DAT_00403434,0xc4);
  }
  local_9c = 10;
  local_94 = (wchar_t *)0x80020004;
  local_8c = 3;
  local_84 = (wchar_t *)0x2;
  iVar1 = (**(code **)(*DAT_0043302c + 0xbc))
                    (DAT_0043302c,L"validLicences",3,local_88,2,local_80,10,local_98,0x80020004,
                     local_90,10,local_a8,0x80020004,local_a0,&local_38);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,DAT_0043302c,&DAT_00402ed0,0xbc);
  }
  piVar11 = local_38;
  local_38 = (int *)0x0;
  __vbaObjSet(&local_1c,piVar11);
  local_8c = 3;
  local_94 = (wchar_t *)0x80020004;
  local_84 = (wchar_t *)0x2;
  local_9c = 10;
  iVar1 = (**(code **)(*DAT_0043302c + 0xbc))
                    (DAT_0043302c,L"validLicences",3,local_88,2,local_80,10,local_98,0x80020004,
                     local_90,10,local_a8,0x80020004,local_a0,&local_38);
  pcVar3 = __vbaHresultCheckObj_exref;
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,DAT_0043302c,&DAT_00402ed0,0xbc);
  }
  piVar11 = local_38;
  local_38 = (int *)0x0;
  __vbaObjSet(&local_2c,piVar11);
  local_94 = L"machine = ";
  local_9c = 8;
  local_54 = 9;
  local_5c[0] = 2;
  rtcVarStrFromVar(local_6c,local_5c);
  iVar1 = *local_2c;
  uVar2 = __vbaVarAdd(local_7c,local_6c,&local_9c);
  uVar2 = __vbaStrVarVal(&local_30,uVar2);
  piVar11 = local_2c;
  iVar1 = (**(code **)(iVar1 + 0xd4))(local_2c,uVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_2c,&DAT_00403434,0xd4);
  }
  __vbaFreeStr();
  __vbaFreeVarList(3,local_5c,local_6c,local_7c);
  pcVar4 = __vbaStrMove_exref;
  while( true ) {
    puVar8 = local_b0;
    piVar10 = local_2c;
    iVar1 = (**(code **)(*local_2c + 0x5c))(local_2c,puVar8);
    if (iVar1 < 0) {
      (*pcVar3)(iVar1,local_2c,&DAT_00403434,0x5c);
    }
    if ((short)local_b0[0] != 0) break;
    iVar1 = (**(code **)(*local_2c + 0xb4))(local_2c,&local_38);
    if (iVar1 < 0) {
      (*pcVar3)(iVar1,local_2c,&DAT_00403434,0xb4);
    }
    piVar10 = local_38;
    local_8c = 8;
    local_84 = L"salesCode";
    iVar1 = (**(code **)(*local_38 + 0x30))(local_38,8,local_88,L"salesCode",local_80,&local_3c);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piVar10,&DAT_00403eb4,0x30);
    }
    piVar10 = local_3c;
    piVar9 = local_3c;
    iVar1 = (**(code **)(*local_3c + 0x44))(local_3c,local_5c);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piVar10,&DAT_004035dc,0x44);
    }
    __vbaStrVarMove(local_5c);
    (*pcVar4)();
    __vbaFreeObjList(2,&local_38,&local_3c);
    __vbaFreeVar(piVar9);
    local_84 = (wchar_t *)local_28;
    local_54 = 0x80020004;
    local_5c[0] = 10;
    local_8c = 0x4008;
    rtcMidCharVar(local_6c,&local_8c,5,local_5c);
    __vbaStrVarMove(local_6c);
    (*pcVar4)();
    __vbaFreeVarList(2,local_5c,local_6c);
    __vbaStrCat(local_28[0],L"1560VP");
    (*pcVar4)();
    iVar1 = (**(code **)(*local_2c + 0xb4))(local_2c,&local_38);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,local_2c,&DAT_00403434,0xb4);
    }
    piVar10 = local_38;
    local_8c = 8;
    local_84 = L"licence";
    iVar1 = (**(code **)(*local_38 + 0x30))(local_38,8,local_88,L"licence",local_80,&local_3c);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piVar10,&DAT_00403eb4,0x30);
    }
    piVar10 = local_3c;
    iVar1 = (**(code **)(*local_3c + 0x44))(local_3c,local_5c);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piVar10,&DAT_004035dc,0x44);
    }
    iVar1 = (**(code **)(*local_2c + 0xb4))(local_2c,&local_40);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,local_2c,&DAT_00403434,0xb4);
    }
    piVar10 = local_40;
    local_9c = 8;
    local_94 = L"partNumber";
    iVar1 = (**(code **)(*local_40 + 0x30))(local_40,8,local_98,L"partNumber",local_90,&local_44);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piVar10,&DAT_00403eb4,0x30);
    }
    piVar10 = local_44;
    iVar1 = (**(code **)(*local_44 + 0x44))(local_44,local_6c);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piVar10,&DAT_004035dc,0x44);
    }
    iVar1 = (**(code **)(*local_2c + 0xb4))(local_2c,&local_48);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,local_2c,&DAT_00403434,0xb4);
    }
    piVar10 = local_48;
    iVar1 = (**(code **)(*local_48 + 0x30))(local_48,8,local_a8,L"Class",local_a0,&local_4c);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piVar10,&DAT_00403eb4,0x30);
    }
    piVar10 = local_4c;
    iVar1 = (**(code **)(*local_4c + 0x44))(local_4c,local_7c);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piVar10,&DAT_004035dc,0x44);
    }
    local_b8 = __vbaI2Var(local_7c);
    __vbaStrVarMove(local_6c);
    pcVar4 = __vbaStrMove_exref;
    __vbaStrMove();
    local_b4 = __vbaI2Var(local_5c);
    local_b0[0] = 0x1a;
    FUN_0040b5a0(&local_1c,(undefined2 *)local_b0,(undefined2 *)&local_b4,local_28,&local_30,
                 (undefined2 *)&local_b8);
    __vbaFreeStr();
    __vbaFreeObjList(6,&local_38,&local_40,&local_48,&local_3c,&local_44,&local_4c);
    __vbaFreeVarList(3,local_5c,local_6c,local_7c);
    local_94 = L"machine = ";
    local_9c = 8;
    local_54 = 9;
    local_5c[0] = 2;
    rtcVarStrFromVar(local_6c,local_5c);
    iVar1 = *local_2c;
    uVar2 = __vbaVarAdd(local_7c,local_6c,&local_9c);
    uVar2 = __vbaStrVarVal(&local_30,uVar2);
    iVar1 = (**(code **)(iVar1 + 0xdc))(local_2c,uVar2);
    pcVar3 = __vbaHresultCheckObj_exref;
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,local_2c,&DAT_00403434,0xdc);
    }
    __vbaFreeStr();
    __vbaFreeVarList(3,local_5c,local_6c,local_7c);
  }
  piVar9 = local_2c;
  iVar1 = (**(code **)(*local_2c + 0xc4))(local_2c);
  if (iVar1 < 0) {
    (*pcVar3)(iVar1,local_2c,&DAT_00403434,0xc4);
  }
  local_18 = 0;
  __vbaStrCopy(piVar9,piVar10);
  __vbaStrCopy(puVar8,piVar11);
  puVar8 = &local_30;
  puVar7 = &local_b4;
  puVar6 = local_b0;
  ppiVar5 = &local_1c;
  local_b4 = 1;
  local_b0[0] = 0x19;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_34,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_30,&local_34);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_30;
  puVar7 = &local_b4;
  puVar6 = local_b0;
  ppiVar5 = &local_1c;
  local_b4 = 3;
  local_b0[0] = 0x19;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_34,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_30,&local_34);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_30;
  puVar7 = &local_b4;
  puVar6 = local_b0;
  ppiVar5 = &local_1c;
  local_b4 = 4;
  local_b0[0] = 0x19;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_34,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_30,&local_34);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_30;
  puVar7 = &local_b4;
  puVar6 = local_b0;
  ppiVar5 = &local_1c;
  local_b4 = 5;
  local_b0[0] = 0x19;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_34,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_30,&local_34);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_30;
  puVar7 = &local_b4;
  puVar6 = local_b0;
  ppiVar5 = &local_1c;
  local_b4 = 7;
  local_b0[0] = 0x19;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_34,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_30,&local_34);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_30;
  puVar7 = &local_b4;
  puVar6 = local_b0;
  local_b4 = 9;
  local_b0[0] = 0x19;
  ppiVar5 = &local_1c;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_34,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_30,&local_34);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_30;
  puVar7 = &local_b4;
  puVar6 = local_b0;
  ppiVar5 = &local_1c;
  local_b4 = 0xc;
  local_b0[0] = 0x19;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_34,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_30,&local_34);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_30;
  puVar7 = &local_b4;
  puVar6 = local_b0;
  ppiVar5 = &local_1c;
  local_b4 = 0xf;
  local_b0[0] = 0x19;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_34,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_30,&local_34);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_30;
  local_b4 = 0x11;
  local_b0[0] = 0x19;
  puVar7 = &local_b4;
  puVar6 = local_b0;
  ppiVar5 = &local_1c;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_34,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_30,&local_34);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_30;
  puVar7 = &local_b4;
  puVar6 = local_b0;
  ppiVar5 = &local_1c;
  local_b4 = 0x18;
  local_b0[0] = 0x19;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_34,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_30,&local_34);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_30;
  puVar7 = &local_b4;
  puVar6 = local_b0;
  ppiVar5 = &local_1c;
  local_b4 = 0x19;
  local_b0[0] = 0x19;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_34,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_30,&local_34);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  local_b4 = 0x1b;
  local_b0[0] = 0x19;
  puVar8 = &local_30;
  puVar7 = &local_b4;
  puVar6 = local_b0;
  ppiVar5 = &local_1c;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_34,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_30,&local_34);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_30;
  puVar7 = &local_b4;
  puVar6 = local_b0;
  ppiVar5 = &local_1c;
  local_b4 = 0x1f;
  local_b0[0] = 0x19;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_34,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_30,&local_34);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_30;
  puVar7 = &local_b4;
  puVar6 = local_b0;
  ppiVar5 = &local_1c;
  local_b4 = 0x2d;
  local_b0[0] = 0x19;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_34,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_30,&local_34);
  local_18 = 1;
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  local_b4 = 2;
  local_b0[0] = 0x19;
  puVar8 = &local_30;
  puVar7 = &local_b4;
  puVar6 = local_b0;
  ppiVar5 = &local_1c;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_34,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_30,&local_34);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_30;
  puVar7 = &local_b4;
  puVar6 = local_b0;
  ppiVar5 = &local_1c;
  local_b4 = 6;
  local_b0[0] = 0x19;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_34,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_30,&local_34);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_30;
  puVar7 = &local_b4;
  puVar6 = local_b0;
  ppiVar5 = &local_1c;
  local_b4 = 0xb;
  local_b0[0] = 0x19;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_34,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_30,&local_34);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_30;
  puVar7 = &local_b4;
  puVar6 = local_b0;
  ppiVar5 = &local_1c;
  local_b4 = 0xe;
  local_b0[0] = 0x19;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_34,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_30,&local_34);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_30;
  puVar7 = &local_b4;
  puVar6 = local_b0;
  ppiVar5 = &local_1c;
  local_b4 = 0x14;
  local_b0[0] = 0x19;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_34,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_30,&local_34);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_30;
  puVar7 = &local_b4;
  puVar6 = local_b0;
  ppiVar5 = &local_1c;
  local_b4 = 0x17;
  local_b0[0] = 0x19;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_34,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_30,&local_34);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_30;
  puVar7 = &local_b4;
  puVar6 = local_b0;
  ppiVar5 = &local_1c;
  local_b4 = 0x20;
  local_b0[0] = 0x19;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_34,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_30,&local_34);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_30;
  puVar7 = &local_b4;
  puVar6 = local_b0;
  ppiVar5 = &local_1c;
  local_b4 = 0x21;
  local_b0[0] = 0x19;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_34,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_30,&local_34);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_30;
  puVar7 = &local_b4;
  puVar6 = local_b0;
  ppiVar5 = &local_1c;
  local_b4 = 0x29;
  local_b0[0] = 0x19;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_34,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_30,&local_34);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_30;
  puVar7 = &local_b4;
  puVar6 = local_b0;
  ppiVar5 = &local_1c;
  local_b4 = 0x2b;
  local_b0[0] = 0x19;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_34,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_30,&local_34);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_30;
  puVar7 = &local_b4;
  puVar6 = local_b0;
  ppiVar5 = &local_1c;
  local_b4 = 0x2c;
  local_b0[0] = 0x19;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_34,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_30,&local_34);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_30;
  puVar7 = &local_b4;
  puVar6 = local_b0;
  ppiVar5 = &local_1c;
  local_b4 = 0x2e;
  local_b0[0] = 0x19;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_34,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_30,&local_34);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_30;
  puVar7 = &local_b4;
  puVar6 = local_b0;
  ppiVar5 = &local_1c;
  local_b4 = 0x2f;
  local_b0[0] = 0x19;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_34,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_30,&local_34);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_30;
  puVar7 = &local_b4;
  puVar6 = local_b0;
  ppiVar5 = &local_1c;
  local_b4 = 0x31;
  local_b0[0] = 0x19;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_34,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_30,&local_34);
  local_b8 = 2;
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_30;
  puVar7 = &local_b4;
  puVar6 = local_b0;
  ppiVar5 = &local_1c;
  local_b4 = 0x1c;
  local_b0[0] = 0x19;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_34,
               (undefined2 *)&local_b8);
  __vbaFreeStrList(2,&local_30,&local_34);
  local_b8 = 2;
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  local_b4 = 0x1d;
  local_b0[0] = 0x19;
  FUN_0040b5a0(&local_1c,(undefined2 *)local_b0,(undefined2 *)&local_b4,&local_30,&local_34,
               (undefined2 *)&local_b8);
  __vbaFreeStrList(2,&local_30,&local_34);
  iVar1 = (**(code **)(*local_1c + 0xc4))(local_1c);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c,&DAT_00403434,0xc4);
  }
  __vbaFreeObj(&LAB_0042cfc7);
  __vbaFreeStr();
  __vbaFreeObj();
  return;
}


// ---- FUN_0042cfe0 @ 0042cfe0

void FUN_0042cfe0(void)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  int *piVar4;
  int **ppiVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int *piVar9;
  wchar_t *pwVar10;
  undefined4 uVar11;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0 [2];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  wchar_t *local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  wchar_t *local_84;
  undefined4 local_80;
  undefined4 local_7c [4];
  undefined4 local_6c [4];
  undefined4 local_5c [2];
  undefined4 local_54;
  int *local_4c;
  int *local_48;
  int *local_44;
  int *local_40;
  int *local_3c;
  int *local_38;
  undefined4 local_34;
  undefined4 local_30;
  int *local_2c;
  undefined4 local_28 [3];
  int *local_1c;
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_00401736;
  pvStack_14 = ExceptionList;
  local_c = &stack0xfffffef4;
  local_8 = &DAT_004016f0;
  local_9c = 10;
  local_94 = (wchar_t *)0x80020004;
  local_8c = 3;
  local_84 = (wchar_t *)0x2;
  local_18 = 0;
  local_1c = (int *)0x0;
  local_28[0] = 0;
  local_2c = (int *)0x0;
  local_30 = 0;
  local_34 = 0;
  uVar11 = 3;
  local_38 = (int *)0x0;
  local_3c = (int *)0x0;
  local_40 = (int *)0x0;
  local_44 = (int *)0x0;
  local_48 = (int *)0x0;
  local_4c = (int *)0x0;
  local_5c[0] = 0;
  local_6c[0] = 0;
  local_7c[0] = 0;
  local_b0[0] = 0;
  local_b4 = 0;
  local_b8 = 0;
  pwVar10 = L"validLicences";
  ExceptionList = &pvStack_14;
  piVar9 = DAT_0043302c;
  uVar2 = local_88;
  iVar1 = (**(code **)(*DAT_0043302c + 0xbc))(DAT_0043302c,L"validLicences",3);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,DAT_0043302c,&DAT_00402ed0,0xbc);
  }
  piVar4 = local_38;
  local_38 = (int *)0x0;
  __vbaObjSet(&local_1c,piVar4);
  local_18 = 1;
  __vbaStrCopy(piVar9,pwVar10);
  __vbaStrCopy(uVar11,uVar2);
  puVar8 = &local_30;
  puVar7 = &local_b4;
  puVar6 = local_b0;
  ppiVar5 = &local_1c;
  local_b4 = 0x31;
  local_b0[0] = 2;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_34,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_30,&local_34);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_30;
  puVar7 = &local_b4;
  puVar6 = local_b0;
  ppiVar5 = &local_1c;
  local_b4 = 0x31;
  local_b0[0] = 4;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_34,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_30,&local_34);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_30;
  local_b4 = 0x31;
  local_b0[0] = 10;
  puVar7 = &local_b4;
  puVar6 = local_b0;
  ppiVar5 = &local_1c;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_34,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_30,&local_34);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_30;
  puVar7 = &local_b4;
  puVar6 = local_b0;
  ppiVar5 = &local_1c;
  local_b4 = 0x31;
  local_b0[0] = 1;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_34,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_30,&local_34);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_30;
  puVar7 = &local_b4;
  puVar6 = local_b0;
  ppiVar5 = &local_1c;
  local_b4 = 0x31;
  local_b0[0] = 0x13;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_34,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_30,&local_34);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  local_b4 = 0x31;
  local_b0[0] = 8;
  puVar8 = &local_30;
  puVar7 = &local_b4;
  puVar6 = local_b0;
  ppiVar5 = &local_1c;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_34,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_30,&local_34);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_30;
  puVar7 = &local_b4;
  puVar6 = local_b0;
  ppiVar5 = &local_1c;
  local_b4 = 0x31;
  local_b0[0] = 7;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_34,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_30,&local_34);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  local_b4 = 0x31;
  local_b0[0] = 9;
  FUN_0040b5a0(&local_1c,(undefined2 *)local_b0,(undefined2 *)&local_b4,&local_30,&local_34,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_30,&local_34);
  local_94 = (wchar_t *)0x80020004;
  local_9c = 10;
  local_84 = (wchar_t *)0x2;
  local_8c = 3;
  iVar1 = (**(code **)(*DAT_0043302c + 0xbc))
                    (DAT_0043302c,L"validLicences",3,local_88,2,local_80,10,local_98,0x80020004,
                     local_90,10,local_a8,0x80020004,local_a0,&local_38);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,DAT_0043302c,&DAT_00402ed0,0xbc);
  }
  piVar9 = local_38;
  local_38 = (int *)0x0;
  __vbaObjSet(&local_2c,piVar9);
  local_94 = L"machine = ";
  local_9c = 8;
  local_54 = 0x13;
  local_5c[0] = 2;
  rtcVarStrFromVar(local_6c,local_5c);
  iVar1 = *local_2c;
  uVar2 = __vbaVarAdd(local_7c,local_6c,&local_9c);
  uVar2 = __vbaStrVarVal(&local_30,uVar2);
  iVar1 = (**(code **)(iVar1 + 0xd4))(local_2c,uVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_2c,&DAT_00403434,0xd4);
  }
  __vbaFreeStr();
  __vbaFreeVarList(3,local_5c,local_6c,local_7c);
  pcVar3 = __vbaStrMove_exref;
  while( true ) {
    iVar1 = (**(code **)(*local_2c + 0x5c))(local_2c,local_b0);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,local_2c,&DAT_00403434,0x5c);
    }
    if ((short)local_b0[0] != 0) break;
    iVar1 = (**(code **)(*local_2c + 0xb4))(local_2c,&local_38);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,local_2c,&DAT_00403434,0xb4);
    }
    piVar9 = local_38;
    local_8c = 8;
    local_84 = L"salesCode";
    iVar1 = (**(code **)(*local_38 + 0x30))(local_38,8,local_88,L"salesCode",local_80,&local_3c);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piVar9,&DAT_00403eb4,0x30);
    }
    piVar9 = local_3c;
    piVar4 = local_3c;
    iVar1 = (**(code **)(*local_3c + 0x44))(local_3c,local_5c);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piVar9,&DAT_004035dc,0x44);
    }
    __vbaStrVarMove(local_5c);
    __vbaStrMove();
    __vbaFreeObjList(2,&local_38,&local_3c);
    __vbaFreeVar(piVar4);
    local_84 = (wchar_t *)local_28;
    local_54 = 0x80020004;
    local_5c[0] = 10;
    local_8c = 0x4008;
    rtcMidCharVar(local_6c,&local_8c,5,local_5c);
    __vbaStrVarMove(local_6c);
    __vbaStrMove();
    __vbaFreeVarList(2,local_5c,local_6c);
    __vbaStrCat(local_28[0],L"1525VP");
    __vbaStrMove();
    iVar1 = (**(code **)(*local_2c + 0xb4))(local_2c,&local_38);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,local_2c,&DAT_00403434,0xb4);
    }
    piVar9 = local_38;
    local_8c = 8;
    local_84 = L"licence";
    iVar1 = (**(code **)(*local_38 + 0x30))(local_38,8,local_88,L"licence",local_80,&local_3c);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piVar9,&DAT_00403eb4,0x30);
    }
    piVar9 = local_3c;
    iVar1 = (**(code **)(*local_3c + 0x44))(local_3c,local_5c);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piVar9,&DAT_004035dc,0x44);
    }
    iVar1 = (**(code **)(*local_2c + 0xb4))(local_2c,&local_40);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,local_2c,&DAT_00403434,0xb4);
    }
    piVar9 = local_40;
    local_9c = 8;
    local_94 = L"partNumber";
    iVar1 = (**(code **)(*local_40 + 0x30))(local_40,8,local_98,L"partNumber",local_90,&local_44);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piVar9,&DAT_00403eb4,0x30);
    }
    piVar9 = local_44;
    iVar1 = (**(code **)(*local_44 + 0x44))(local_44,local_6c);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piVar9,&DAT_004035dc,0x44);
    }
    iVar1 = (**(code **)(*local_2c + 0xb4))(local_2c,&local_48);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,local_2c,&DAT_00403434,0xb4);
    }
    piVar9 = local_48;
    iVar1 = (**(code **)(*local_48 + 0x30))(local_48,8,local_a8,L"Class",local_a0,&local_4c);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piVar9,&DAT_00403eb4,0x30);
    }
    piVar9 = local_4c;
    iVar1 = (**(code **)(*local_4c + 0x44))(local_4c,local_7c);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piVar9,&DAT_004035dc,0x44);
    }
    local_b8 = __vbaI2Var(local_7c);
    __vbaStrVarMove(local_6c);
    __vbaStrMove();
    local_b4 = __vbaI2Var(local_5c);
    local_b0[0] = 0x16;
    FUN_0040b5a0(&local_1c,(undefined2 *)local_b0,(undefined2 *)&local_b4,local_28,&local_30,
                 (undefined2 *)&local_b8);
    __vbaFreeStr();
    __vbaFreeObjList(6,&local_38,&local_40,&local_48,&local_3c,&local_44,&local_4c);
    __vbaFreeVarList(3,local_5c,local_6c,local_7c);
    local_94 = L"machine = ";
    local_9c = 8;
    local_54 = 0x13;
    local_5c[0] = 2;
    rtcVarStrFromVar(local_6c,local_5c);
    iVar1 = *local_2c;
    uVar2 = __vbaVarAdd(local_7c,local_6c,&local_9c);
    uVar2 = __vbaStrVarVal(&local_30,uVar2);
    iVar1 = (**(code **)(iVar1 + 0xdc))(local_2c,uVar2);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,local_2c,&DAT_00403434,0xdc);
    }
    __vbaFreeStr();
    __vbaFreeVarList(3,local_5c,local_6c,local_7c);
  }
  local_9c = 8;
  local_54 = 8;
  local_94 = L"machine = ";
  local_5c[0] = 2;
  rtcVarStrFromVar(local_6c,local_5c);
  iVar1 = *local_2c;
  uVar2 = __vbaVarAdd(local_7c,local_6c,&local_9c);
  uVar2 = __vbaStrVarVal(&local_30,uVar2);
  iVar1 = (**(code **)(iVar1 + 0xd4))(local_2c,uVar2);
  if (-1 < iVar1) goto LAB_0042da62;
  uVar2 = 0xd4;
  do {
    __vbaHresultCheckObj(iVar1,local_2c,&DAT_00403434,uVar2);
LAB_0042da62:
    do {
      __vbaFreeStr();
      __vbaFreeVarList(3,local_5c,local_6c,local_7c);
      iVar1 = (**(code **)(*local_2c + 0x5c))(local_2c,local_b0);
      if (iVar1 < 0) {
        __vbaHresultCheckObj(iVar1,local_2c,&DAT_00403434,0x5c);
      }
      if ((short)local_b0[0] != 0) {
        local_94 = L"machine = ";
        local_9c = 8;
        local_54 = 7;
        local_5c[0] = 2;
        rtcVarStrFromVar(local_6c,local_5c);
        iVar1 = *local_2c;
        uVar2 = __vbaVarAdd(local_7c,local_6c,&local_9c);
        uVar2 = __vbaStrVarVal(&local_30,uVar2);
        iVar1 = (**(code **)(iVar1 + 0xd4))(local_2c,uVar2);
        if (iVar1 < 0) {
          __vbaHresultCheckObj(iVar1,local_2c,&DAT_00403434,0xd4);
        }
        __vbaFreeStr();
        __vbaFreeVarList(3,local_5c,local_6c,local_7c);
        while( true ) {
          iVar1 = (**(code **)(*local_2c + 0x5c))(local_2c,local_b0);
          if (iVar1 < 0) {
            __vbaHresultCheckObj(iVar1,local_2c,&DAT_00403434,0x5c);
          }
          if ((short)local_b0[0] != 0) break;
          iVar1 = (**(code **)(*local_2c + 0xb4))(local_2c,&local_38);
          if (iVar1 < 0) {
            __vbaHresultCheckObj(iVar1,local_2c,&DAT_00403434,0xb4);
          }
          piVar9 = local_38;
          local_8c = 8;
          local_84 = L"salesCode";
          iVar1 = (**(code **)(*local_38 + 0x30))
                            (local_38,8,local_88,L"salesCode",local_80,&local_3c);
          if (iVar1 < 0) {
            __vbaHresultCheckObj(iVar1,piVar9,&DAT_00403eb4,0x30);
          }
          piVar9 = local_3c;
          piVar4 = local_3c;
          iVar1 = (**(code **)(*local_3c + 0x44))(local_3c,local_5c);
          if (iVar1 < 0) {
            __vbaHresultCheckObj(iVar1,piVar9,&DAT_004035dc,0x44);
          }
          __vbaStrVarMove(local_5c);
          (*pcVar3)();
          __vbaFreeObjList(2,&local_38,&local_3c);
          __vbaFreeVar(piVar4);
          local_84 = (wchar_t *)local_28;
          local_54 = 0x80020004;
          local_5c[0] = 10;
          local_8c = 0x4008;
          rtcMidCharVar(local_6c,&local_8c,5,local_5c);
          __vbaStrVarMove(local_6c);
          (*pcVar3)();
          __vbaFreeVarList(2,local_5c,local_6c);
          __vbaStrCat(local_28[0],L"1550VP");
          (*pcVar3)();
          iVar1 = (**(code **)(*local_2c + 0xb4))(local_2c,&local_38);
          if (iVar1 < 0) {
            __vbaHresultCheckObj(iVar1,local_2c,&DAT_00403434,0xb4);
          }
          piVar9 = local_38;
          local_8c = 8;
          local_84 = L"licence";
          iVar1 = (**(code **)(*local_38 + 0x30))(local_38,8,local_88,L"licence",local_80,&local_3c)
          ;
          if (iVar1 < 0) {
            __vbaHresultCheckObj(iVar1,piVar9,&DAT_00403eb4,0x30);
          }
          piVar9 = local_3c;
          iVar1 = (**(code **)(*local_3c + 0x44))(local_3c,local_5c);
          if (iVar1 < 0) {
            __vbaHresultCheckObj(iVar1,piVar9,&DAT_004035dc,0x44);
          }
          iVar1 = (**(code **)(*local_2c + 0xb4))(local_2c,&local_40);
          if (iVar1 < 0) {
            __vbaHresultCheckObj(iVar1,local_2c,&DAT_00403434,0xb4);
          }
          piVar9 = local_40;
          local_9c = 8;
          local_94 = L"partNumber";
          iVar1 = (**(code **)(*local_40 + 0x30))
                            (local_40,8,local_98,L"partNumber",local_90,&local_44);
          if (iVar1 < 0) {
            __vbaHresultCheckObj(iVar1,piVar9,&DAT_00403eb4,0x30);
          }
          piVar9 = local_44;
          iVar1 = (**(code **)(*local_44 + 0x44))(local_44,local_6c);
          if (iVar1 < 0) {
            __vbaHresultCheckObj(iVar1,piVar9,&DAT_004035dc,0x44);
          }
          iVar1 = (**(code **)(*local_2c + 0xb4))(local_2c,&local_48);
          if (iVar1 < 0) {
            __vbaHresultCheckObj(iVar1,local_2c,&DAT_00403434,0xb4);
          }
          piVar9 = local_48;
          iVar1 = (**(code **)(*local_48 + 0x30))(local_48,8,local_a8,L"Class",local_a0,&local_4c);
          if (iVar1 < 0) {
            __vbaHresultCheckObj(iVar1,piVar9,&DAT_00403eb4,0x30);
          }
          piVar9 = local_4c;
          iVar1 = (**(code **)(*local_4c + 0x44))(local_4c,local_7c);
          if (iVar1 < 0) {
            __vbaHresultCheckObj(iVar1,piVar9,&DAT_004035dc,0x44);
          }
          local_b8 = __vbaI2Var(local_7c);
          __vbaStrVarMove(local_6c);
          __vbaStrMove();
          local_b4 = __vbaI2Var(local_5c);
          local_b0[0] = 0x18;
          FUN_0040b5a0(&local_1c,(undefined2 *)local_b0,(undefined2 *)&local_b4,local_28,&local_30,
                       (undefined2 *)&local_b8);
          __vbaFreeStr();
          __vbaFreeObjList(6,&local_38,&local_40,&local_48,&local_3c,&local_44,&local_4c);
          __vbaFreeVarList(3,local_5c,local_6c,local_7c);
          local_94 = L"machine = ";
          local_9c = 8;
          local_54 = 7;
          local_5c[0] = 2;
          rtcVarStrFromVar(local_6c,local_5c);
          iVar1 = *local_2c;
          uVar2 = __vbaVarAdd(local_7c,local_6c,&local_9c);
          uVar2 = __vbaStrVarVal(&local_30,uVar2);
          iVar1 = (**(code **)(iVar1 + 0xdc))(local_2c,uVar2);
          if (iVar1 < 0) {
            __vbaHresultCheckObj(iVar1,local_2c,&DAT_00403434,0xdc);
          }
          __vbaFreeStr();
          __vbaFreeVarList(3,local_5c,local_6c,local_7c);
          pcVar3 = __vbaStrMove_exref;
        }
        iVar1 = (**(code **)(*local_2c + 0xc4))(local_2c);
        if (iVar1 < 0) {
          __vbaHresultCheckObj(iVar1,local_2c,&DAT_00403434,0xc4);
        }
        iVar1 = (**(code **)(*local_1c + 0xc4))(local_1c);
        if (iVar1 < 0) {
          __vbaHresultCheckObj(iVar1,local_1c,&DAT_00403434,0xc4);
        }
        __vbaFreeObj(&LAB_0042e4a2);
        __vbaFreeStr();
        __vbaFreeObj();
        return;
      }
      iVar1 = (**(code **)(*local_2c + 0xb4))(local_2c,&local_38);
      if (iVar1 < 0) {
        __vbaHresultCheckObj(iVar1,local_2c,&DAT_00403434,0xb4);
      }
      piVar9 = local_38;
      local_8c = 8;
      local_84 = L"salesCode";
      iVar1 = (**(code **)(*local_38 + 0x30))(local_38,8,local_88,L"salesCode",local_80,&local_3c);
      if (iVar1 < 0) {
        __vbaHresultCheckObj(iVar1,piVar9,&DAT_00403eb4,0x30);
      }
      piVar9 = local_3c;
      piVar4 = local_3c;
      iVar1 = (**(code **)(*local_3c + 0x44))(local_3c,local_5c);
      if (iVar1 < 0) {
        __vbaHresultCheckObj(iVar1,piVar9,&DAT_004035dc,0x44);
      }
      __vbaStrVarMove(local_5c);
      (*pcVar3)();
      __vbaFreeObjList(2,&local_38,&local_3c);
      __vbaFreeVar(piVar4);
      local_84 = (wchar_t *)local_28;
      local_54 = 0x80020004;
      local_5c[0] = 10;
      local_8c = 0x4008;
      rtcMidCharVar(local_6c,&local_8c,5,local_5c);
      __vbaStrVarMove(local_6c);
      (*pcVar3)();
      __vbaFreeVarList(2,local_5c,local_6c);
      __vbaStrCat(local_28[0],L"1530VP");
      (*pcVar3)();
      iVar1 = (**(code **)(*local_2c + 0xb4))(local_2c,&local_38);
      if (iVar1 < 0) {
        __vbaHresultCheckObj(iVar1,local_2c,&DAT_00403434,0xb4);
      }
      piVar9 = local_38;
      local_8c = 8;
      local_84 = L"licence";
      iVar1 = (**(code **)(*local_38 + 0x30))(local_38,8,local_88,L"licence",local_80,&local_3c);
      if (iVar1 < 0) {
        __vbaHresultCheckObj(iVar1,piVar9,&DAT_00403eb4,0x30);
      }
      piVar9 = local_3c;
      iVar1 = (**(code **)(*local_3c + 0x44))(local_3c,local_5c);
      if (iVar1 < 0) {
        __vbaHresultCheckObj(iVar1,piVar9,&DAT_004035dc,0x44);
      }
      iVar1 = (**(code **)(*local_2c + 0xb4))(local_2c,&local_40);
      if (iVar1 < 0) {
        __vbaHresultCheckObj(iVar1,local_2c,&DAT_00403434,0xb4);
      }
      piVar9 = local_40;
      local_9c = 8;
      local_94 = L"partNumber";
      iVar1 = (**(code **)(*local_40 + 0x30))(local_40,8,local_98,L"partNumber",local_90,&local_44);
      if (iVar1 < 0) {
        __vbaHresultCheckObj(iVar1,piVar9,&DAT_00403eb4,0x30);
      }
      piVar9 = local_44;
      iVar1 = (**(code **)(*local_44 + 0x44))(local_44,local_6c);
      if (iVar1 < 0) {
        __vbaHresultCheckObj(iVar1,piVar9,&DAT_004035dc,0x44);
      }
      iVar1 = (**(code **)(*local_2c + 0xb4))(local_2c,&local_48);
      if (iVar1 < 0) {
        __vbaHresultCheckObj(iVar1,local_2c,&DAT_00403434,0xb4);
      }
      piVar9 = local_48;
      iVar1 = (**(code **)(*local_48 + 0x30))(local_48,8,local_a8,L"Class",local_a0,&local_4c);
      if (iVar1 < 0) {
        __vbaHresultCheckObj(iVar1,piVar9,&DAT_00403eb4,0x30);
      }
      piVar9 = local_4c;
      iVar1 = (**(code **)(*local_4c + 0x44))(local_4c,local_7c);
      if (iVar1 < 0) {
        __vbaHresultCheckObj(iVar1,piVar9,&DAT_004035dc,0x44);
      }
      local_b8 = __vbaI2Var(local_7c);
      __vbaStrVarMove(local_6c);
      pcVar3 = __vbaStrMove_exref;
      __vbaStrMove();
      local_b4 = __vbaI2Var(local_5c);
      local_b0[0] = 0x17;
      FUN_0040b5a0(&local_1c,(undefined2 *)local_b0,(undefined2 *)&local_b4,local_28,&local_30,
                   (undefined2 *)&local_b8);
      __vbaFreeStr();
      __vbaFreeObjList(6,&local_38,&local_40,&local_48,&local_3c,&local_44,&local_4c);
      __vbaFreeVarList(3,local_5c,local_6c,local_7c);
      local_9c = 8;
      local_54 = 8;
      local_94 = L"machine = ";
      local_5c[0] = 2;
      rtcVarStrFromVar(local_6c,local_5c);
      iVar1 = *local_2c;
      uVar2 = __vbaVarAdd(local_7c,local_6c,&local_9c);
      uVar2 = __vbaStrVarVal(&local_30,uVar2);
      iVar1 = (**(code **)(iVar1 + 0xdc))(local_2c,uVar2);
    } while (-1 < iVar1);
    uVar2 = 0xdc;
  } while( true );
}


// ---- FUN_0042e4c0 @ 0042e4c0

void FUN_0042e4c0(void)

{
  undefined4 uVar1;
  int iVar2;
  int **ppiVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  wchar_t *pwVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 local_64;
  undefined4 local_60 [5];
  undefined4 local_4c;
  undefined4 local_44;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int *local_1c;
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined1 *local_8;
  
  puStack_10 = &DAT_00401736;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffff80;
  local_8 = &LAB_00401700;
  local_4c = 10;
  local_18 = 0;
  local_1c = (int *)0x0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_60[0] = 0;
  local_64 = 0;
  ExceptionList = &pvStack_14;
  iVar2 = (**(code **)(*DAT_0043302c + 0xbc))(DAT_0043302c,L"Licences",3);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,DAT_0043302c,&DAT_00402ed0,0xbc);
  }
  uVar10 = local_2c;
  local_2c = 0;
  __vbaObjSet(&local_1c,uVar10);
  iVar2 = (**(code **)(*local_1c + 0xc0))(local_1c);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_1c,&DAT_00403434,0xc0);
  }
  iVar2 = (**(code **)(*local_1c + 0x128))(local_1c,8,local_38,L"licence",local_30,2);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_1c,&DAT_00403434,0x128);
  }
  iVar2 = (**(code **)(*local_1c + 0x128))(local_1c,8,local_38,L"special",local_30,2);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_1c,&DAT_00403434,0x128);
  }
  local_3c = 8;
  iVar2 = (**(code **)(*local_1c + 0x128))(local_1c,8,local_38,L"Description",local_30,8);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_1c,&DAT_00403434,0x128);
  }
  iVar2 = (**(code **)(*local_1c + 0x164))(local_1c,1,0);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_1c,&DAT_00403434,0x164);
  }
  iVar2 = (**(code **)(*local_1c + 0xc4))(local_1c);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_1c,&DAT_00403434,0xc4);
  }
  local_4c = 10;
  local_44 = 0x80020004;
  local_3c = 3;
  pwVar8 = L"validLicences";
  uVar9 = 3;
  piVar7 = DAT_0043302c;
  iVar2 = (**(code **)(*DAT_0043302c + 0xbc))
                    (DAT_0043302c,L"validLicences",3,local_38,2,local_30,10);
  uVar10 = local_38;
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,DAT_0043302c,&DAT_00402ed0,0xbc);
    uVar10 = local_38;
  }
  uVar1 = local_2c;
  local_2c = 0;
  __vbaObjSet(&local_1c,uVar1);
  local_18 = 1;
  __vbaStrCopy(piVar7,pwVar8);
  __vbaStrCopy(uVar9,uVar10);
  puVar6 = &local_24;
  puVar5 = &local_64;
  puVar4 = local_60;
  ppiVar3 = &local_1c;
  local_64 = 0x31;
  local_60[0] = 0xf;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_28,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_24,&local_28);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_24;
  puVar5 = &local_64;
  puVar4 = local_60;
  ppiVar3 = &local_1c;
  local_64 = 0x31;
  local_60[0] = 0x11;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_28,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_24,&local_28);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_24;
  puVar5 = &local_64;
  local_64 = 0x31;
  local_60[0] = 0xb;
  puVar4 = local_60;
  ppiVar3 = &local_1c;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_28,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_24,&local_28);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_24;
  puVar5 = &local_64;
  puVar4 = local_60;
  ppiVar3 = &local_1c;
  local_64 = 0x31;
  local_60[0] = 0x14;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_28,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_24,&local_28);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_24;
  puVar5 = &local_64;
  puVar4 = local_60;
  ppiVar3 = &local_1c;
  local_64 = 0x31;
  local_60[0] = 0xd;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_28,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_24,&local_28);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  local_64 = 0x31;
  local_60[0] = 0x10;
  puVar6 = &local_24;
  puVar5 = &local_64;
  puVar4 = local_60;
  ppiVar3 = &local_1c;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_28,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_24,&local_28);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_24;
  puVar5 = &local_64;
  puVar4 = local_60;
  ppiVar3 = &local_1c;
  local_64 = 0x31;
  local_60[0] = 0x12;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_28,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_24,&local_28);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_24;
  puVar5 = &local_64;
  puVar4 = local_60;
  ppiVar3 = &local_1c;
  local_64 = 0x31;
  local_60[0] = 0xc;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_28,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_24,&local_28);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  local_64 = 0x31;
  local_60[0] = 0x15;
  puVar6 = &local_24;
  puVar5 = &local_64;
  puVar4 = local_60;
  ppiVar3 = &local_1c;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_28,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_24,&local_28);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  local_64 = 0x31;
  local_60[0] = 0xe;
  FUN_0040b5a0(&local_1c,(undefined2 *)local_60,(undefined2 *)&local_64,&local_24,&local_28,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_24,&local_28);
  iVar2 = (**(code **)(*local_1c + 0xc4))(local_1c);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_1c,&DAT_00403434,0xc4);
  }
  __vbaFreeObj(&LAB_0042eb7f);
  __vbaFreeStr();
  return;
}


// ---- FUN_0042eb90 @ 0042eb90

void FUN_0042eb90(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  int **ppiVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94 [2];
  undefined4 local_8c;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  wchar_t *local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  wchar_t *local_68;
  undefined4 local_64;
  undefined4 local_60 [4];
  undefined4 local_50 [4];
  undefined4 local_40 [2];
  undefined4 local_38;
  int *local_30;
  int *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int *local_1c;
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_00401736;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffff38;
  local_8 = &DAT_00401710;
  local_80 = 10;
  local_78 = (wchar_t *)0x80020004;
  local_70 = 3;
  local_68 = (wchar_t *)0x2;
  local_18 = 0;
  local_1c = (int *)0x0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_2c = (int *)0x0;
  local_30 = (int *)0x0;
  local_40[0] = 0;
  local_50[0] = 0;
  local_60[0] = 0;
  local_94[0] = 0;
  local_98 = 0;
  local_9c = 0;
  ExceptionList = &pvStack_14;
  iVar1 = (**(code **)(*DAT_0043302c + 0xbc))(DAT_0043302c,L"Licences",3);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,DAT_0043302c,&DAT_00402ed0,0xbc);
  }
  piVar11 = local_2c;
  local_2c = (int *)0x0;
  __vbaObjSet(&local_1c,piVar11);
  iVar1 = (**(code **)(*local_1c + 0xc0))(local_1c);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c,&DAT_00403434,0xc0);
  }
  local_80 = 2;
  local_78 = (wchar_t *)0x30;
  local_70 = 8;
  local_68 = L"licence";
  iVar1 = (**(code **)(*local_1c + 0x128))
                    (local_1c,8,local_6c,L"licence",local_64,2,local_7c,0x30,local_74);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c,&DAT_00403434,0x128);
  }
  local_80 = 2;
  local_70 = 8;
  local_78 = (wchar_t *)0x0;
  local_68 = L"special";
  iVar1 = (**(code **)(*local_1c + 0x128))
                    (local_1c,8,local_6c,L"special",local_64,2,local_7c,0,local_74);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c,&DAT_00403434,0x128);
  }
  local_80 = 8;
  local_70 = 8;
  local_78 = L"Extended Voltage Range";
  local_68 = L"Description";
  iVar1 = (**(code **)(*local_1c + 0x128))
                    (local_1c,8,local_6c,L"Description",local_64,8,local_7c,
                     L"Extended Voltage Range",local_74);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c,&DAT_00403434,0x128);
  }
  iVar1 = (**(code **)(*local_1c + 0x164))(local_1c,1,0);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c,&DAT_00403434,0x164);
  }
  iVar1 = (**(code **)(*local_1c + 0xc4))(local_1c);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c,&DAT_00403434,0xc4);
  }
  local_80 = 10;
  local_78 = (wchar_t *)0x80020004;
  local_70 = 3;
  local_68 = (wchar_t *)0x2;
  iVar1 = (**(code **)(*DAT_0043302c + 0xbc))
                    (DAT_0043302c,L"validLicences",3,local_6c,2,local_64,10,local_7c,0x80020004,
                     local_74,10,local_8c,0x80020004,local_84,&local_2c);
  pcVar4 = __vbaHresultCheckObj_exref;
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,DAT_0043302c,&DAT_00402ed0,0xbc);
  }
  piVar11 = local_2c;
  local_2c = (int *)0x0;
  __vbaObjSet(&local_1c,piVar11);
  local_78 = L"machine = ";
  local_80 = 8;
  local_38 = 0x13;
  local_40[0] = 2;
  rtcVarStrFromVar(local_50,local_40);
  iVar1 = *local_1c;
  uVar2 = __vbaVarAdd(local_60,local_50,&local_80);
  uVar2 = __vbaStrVarVal(&local_24,uVar2);
  piVar11 = local_1c;
  iVar1 = (**(code **)(iVar1 + 0xd4))(local_1c,uVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c,&DAT_00403434,0xd4);
  }
  __vbaFreeStr();
  while( true ) {
    __vbaFreeVarList(3,local_40,local_50,local_60);
    puVar8 = local_94;
    piVar10 = local_1c;
    iVar1 = (**(code **)(*local_1c + 0x5c))(local_1c,puVar8);
    if (iVar1 < 0) {
      (*pcVar4)(iVar1,local_1c,&DAT_00403434,0x5c);
    }
    if ((short)local_94[0] != 0) break;
    iVar1 = (**(code **)(*local_1c + 0xd0))(local_1c);
    if (iVar1 < 0) {
      (*pcVar4)(iVar1,local_1c,&DAT_00403434,0xd0);
    }
    iVar1 = (**(code **)(*local_1c + 0xb4))(local_1c,&local_2c);
    if (iVar1 < 0) {
      (*pcVar4)(iVar1,local_1c,&DAT_00403434,0xb4);
    }
    piVar10 = local_2c;
    local_70 = 8;
    local_68 = L"salesCode";
    iVar1 = (**(code **)(*local_2c + 0x30))(local_2c,8,local_6c,L"salesCode",local_64,&local_30);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piVar10,&DAT_00403eb4,0x30);
    }
    piVar10 = local_30;
    piVar9 = local_30;
    iVar1 = (**(code **)(*local_30 + 0x44))(local_30,local_40);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piVar10,&DAT_004035dc,0x44);
    }
    __vbaStrVarMove(local_40);
    __vbaStrMove();
    __vbaFreeObjList(2,&local_2c,&local_30);
    __vbaFreeVar(piVar9);
    local_68 = (wchar_t *)&local_20;
    local_38 = 0x80020004;
    local_40[0] = 10;
    local_70 = 0x4008;
    rtcMidCharVar(local_50,&local_70,5,local_40);
    __vbaStrVarMove(local_50);
    __vbaStrMove();
    __vbaFreeVarList(2,local_40,local_50);
    __vbaStrCat(local_20,L"1525");
    __vbaStrMove();
    local_80 = 8;
    local_78 = (wchar_t *)local_20;
    local_68 = L"salesCode";
    local_70 = 8;
    iVar1 = (**(code **)(*local_1c + 0x128))
                      (local_1c,8,local_6c,L"salesCode",local_64,8,local_7c,local_20,local_74);
    pcVar4 = __vbaHresultCheckObj_exref;
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,local_1c,&DAT_00403434,0x128);
    }
    iVar1 = (**(code **)(*local_1c + 0x164))(local_1c,1,0);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,local_1c,&DAT_00403434,0x164);
    }
    local_78 = L"machine = ";
    local_80 = 8;
    local_38 = 0x13;
    local_40[0] = 2;
    rtcVarStrFromVar(local_50,local_40);
    iVar1 = *local_1c;
    uVar3 = __vbaVarAdd(local_60,local_50,&local_80);
    uVar3 = __vbaStrVarVal(&local_24,uVar3);
    iVar1 = (**(code **)(iVar1 + 0xdc))(local_1c,uVar3);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,local_1c,&DAT_00403434,0xdc);
    }
    __vbaFreeStr();
  }
  local_18 = 1;
  __vbaStrCopy(piVar10,puVar8);
  __vbaStrCopy(piVar11,uVar2);
  puVar8 = &local_24;
  puVar7 = &local_98;
  puVar6 = local_94;
  ppiVar5 = &local_1c;
  local_98 = 0x30;
  local_94[0] = 0x13;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_28,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_24,&local_28);
  local_18 = 0;
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_24;
  puVar7 = &local_98;
  puVar6 = local_94;
  ppiVar5 = &local_1c;
  local_98 = 0x30;
  local_94[0] = 8;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_28,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_24,&local_28);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_24;
  puVar7 = &local_98;
  puVar6 = local_94;
  ppiVar5 = &local_1c;
  local_98 = 0x30;
  local_94[0] = 7;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_28,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_24,&local_28);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_24;
  puVar7 = &local_98;
  puVar6 = local_94;
  ppiVar5 = &local_1c;
  local_98 = 0x30;
  local_94[0] = 9;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_28,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_24,&local_28);
  local_18 = 0;
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_24;
  puVar7 = &local_98;
  puVar6 = local_94;
  ppiVar5 = &local_1c;
  local_98 = 1;
  local_94[0] = 0x14;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_28,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_24,&local_28);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_24;
  puVar7 = &local_98;
  local_98 = 3;
  local_94[0] = 0x14;
  puVar6 = local_94;
  ppiVar5 = &local_1c;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_28,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_24,&local_28);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_24;
  puVar7 = &local_98;
  puVar6 = local_94;
  ppiVar5 = &local_1c;
  local_98 = 4;
  local_94[0] = 0x14;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_28,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_24,&local_28);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_24;
  puVar7 = &local_98;
  puVar6 = local_94;
  ppiVar5 = &local_1c;
  local_98 = 5;
  local_94[0] = 0x14;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_28,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_24,&local_28);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  local_98 = 7;
  local_94[0] = 0x14;
  puVar8 = &local_24;
  puVar7 = &local_98;
  puVar6 = local_94;
  ppiVar5 = &local_1c;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_28,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_24,&local_28);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_24;
  puVar7 = &local_98;
  puVar6 = local_94;
  ppiVar5 = &local_1c;
  local_98 = 9;
  local_94[0] = 0x14;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_28,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_24,&local_28);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_24;
  puVar7 = &local_98;
  puVar6 = local_94;
  ppiVar5 = &local_1c;
  local_98 = 0xc;
  local_94[0] = 0x14;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_28,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_24,&local_28);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  local_98 = 0xf;
  local_94[0] = 0x14;
  puVar8 = &local_24;
  puVar7 = &local_98;
  puVar6 = local_94;
  ppiVar5 = &local_1c;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_28,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_24,&local_28);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_24;
  puVar7 = &local_98;
  puVar6 = local_94;
  ppiVar5 = &local_1c;
  local_98 = 0x11;
  local_94[0] = 0x14;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_28,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_24,&local_28);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_24;
  puVar7 = &local_98;
  puVar6 = local_94;
  ppiVar5 = &local_1c;
  local_98 = 0x18;
  local_94[0] = 0x14;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_28,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_24,&local_28);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  local_98 = 0x19;
  puVar8 = &local_24;
  puVar7 = &local_98;
  puVar6 = local_94;
  ppiVar5 = &local_1c;
  local_94[0] = 0x14;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_28,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_24,&local_28);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_24;
  puVar7 = &local_98;
  puVar6 = local_94;
  ppiVar5 = &local_1c;
  local_98 = 0x1b;
  local_94[0] = 0x14;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_28,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_24,&local_28);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_24;
  puVar7 = &local_98;
  puVar6 = local_94;
  ppiVar5 = &local_1c;
  local_98 = 0x1f;
  local_94[0] = 0x14;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_28,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_24,&local_28);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_24;
  puVar7 = &local_98;
  puVar6 = local_94;
  ppiVar5 = &local_1c;
  local_98 = 0x2d;
  local_94[0] = 0x14;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_28,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_24,&local_28);
  local_18 = 1;
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_24;
  puVar7 = &local_98;
  puVar6 = local_94;
  ppiVar5 = &local_1c;
  local_98 = 2;
  local_94[0] = 0x14;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_28,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_24,&local_28);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_24;
  puVar7 = &local_98;
  puVar6 = local_94;
  ppiVar5 = &local_1c;
  local_98 = 6;
  local_94[0] = 0x14;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_28,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_24,&local_28);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_24;
  puVar7 = &local_98;
  puVar6 = local_94;
  ppiVar5 = &local_1c;
  local_98 = 0xb;
  local_94[0] = 0x14;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_28,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_24,&local_28);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_24;
  puVar7 = &local_98;
  puVar6 = local_94;
  ppiVar5 = &local_1c;
  local_98 = 0xe;
  local_94[0] = 0x14;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_28,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_24,&local_28);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_24;
  puVar7 = &local_98;
  puVar6 = local_94;
  ppiVar5 = &local_1c;
  local_98 = 0x14;
  local_94[0] = 0x14;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_28,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_24,&local_28);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_24;
  puVar7 = &local_98;
  puVar6 = local_94;
  ppiVar5 = &local_1c;
  local_98 = 0x17;
  local_94[0] = 0x14;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_28,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_24,&local_28);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_24;
  puVar7 = &local_98;
  puVar6 = local_94;
  ppiVar5 = &local_1c;
  local_98 = 0x20;
  local_94[0] = 0x14;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_28,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_24,&local_28);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_24;
  puVar7 = &local_98;
  puVar6 = local_94;
  ppiVar5 = &local_1c;
  local_98 = 0x21;
  local_94[0] = 0x14;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_28,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_24,&local_28);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_24;
  puVar7 = &local_98;
  puVar6 = local_94;
  ppiVar5 = &local_1c;
  local_98 = 0x29;
  local_94[0] = 0x14;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_28,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_24,&local_28);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_24;
  puVar7 = &local_98;
  puVar6 = local_94;
  ppiVar5 = &local_1c;
  local_98 = 0x2b;
  local_94[0] = 0x14;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_28,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_24,&local_28);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_24;
  puVar7 = &local_98;
  puVar6 = local_94;
  local_98 = 0x2c;
  local_94[0] = 0x14;
  ppiVar5 = &local_1c;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_28,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_24,&local_28);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_24;
  puVar7 = &local_98;
  puVar6 = local_94;
  ppiVar5 = &local_1c;
  local_98 = 0x2e;
  local_94[0] = 0x14;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_28,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_24,&local_28);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_24;
  puVar7 = &local_98;
  puVar6 = local_94;
  ppiVar5 = &local_1c;
  local_98 = 0x2f;
  local_94[0] = 0x14;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_28,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_24,&local_28);
  local_9c = 2;
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_24;
  local_98 = 0x1c;
  local_94[0] = 0x14;
  puVar7 = &local_98;
  puVar6 = local_94;
  ppiVar5 = &local_1c;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_28,
               (undefined2 *)&local_9c);
  __vbaFreeStrList(2,&local_24,&local_28);
  local_9c = 2;
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_24;
  puVar7 = &local_98;
  puVar6 = local_94;
  ppiVar5 = &local_1c;
  local_98 = 0x1d;
  local_94[0] = 0x14;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_28,
               (undefined2 *)&local_9c);
  __vbaFreeStrList(2,&local_24,&local_28);
  local_18 = 0;
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_24;
  puVar7 = &local_98;
  puVar6 = local_94;
  ppiVar5 = &local_1c;
  local_98 = 1;
  local_94[0] = 0x15;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_28,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_24,&local_28);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  local_98 = 3;
  local_94[0] = 0x15;
  puVar8 = &local_24;
  puVar7 = &local_98;
  puVar6 = local_94;
  ppiVar5 = &local_1c;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_28,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_24,&local_28);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_24;
  puVar7 = &local_98;
  puVar6 = local_94;
  ppiVar5 = &local_1c;
  local_98 = 4;
  local_94[0] = 0x15;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_28,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_24,&local_28);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_24;
  puVar7 = &local_98;
  puVar6 = local_94;
  ppiVar5 = &local_1c;
  local_98 = 5;
  local_94[0] = 0x15;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_28,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_24,&local_28);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  local_98 = 7;
  puVar8 = &local_24;
  puVar7 = &local_98;
  puVar6 = local_94;
  ppiVar5 = &local_1c;
  local_94[0] = 0x15;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_28,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_24,&local_28);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_24;
  puVar7 = &local_98;
  puVar6 = local_94;
  ppiVar5 = &local_1c;
  local_98 = 9;
  local_94[0] = 0x15;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_28,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_24,&local_28);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_24;
  puVar7 = &local_98;
  puVar6 = local_94;
  ppiVar5 = &local_1c;
  local_98 = 0xc;
  local_94[0] = 0x15;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_28,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_24,&local_28);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_24;
  puVar7 = &local_98;
  puVar6 = local_94;
  ppiVar5 = &local_1c;
  local_98 = 0xf;
  local_94[0] = 0x15;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_28,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_24,&local_28);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_24;
  puVar7 = &local_98;
  puVar6 = local_94;
  ppiVar5 = &local_1c;
  local_98 = 0x11;
  local_94[0] = 0x15;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_28,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_24,&local_28);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_24;
  puVar7 = &local_98;
  puVar6 = local_94;
  ppiVar5 = &local_1c;
  local_98 = 0x18;
  local_94[0] = 0x15;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_28,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_24,&local_28);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_24;
  puVar7 = &local_98;
  puVar6 = local_94;
  ppiVar5 = &local_1c;
  local_98 = 0x19;
  local_94[0] = 0x15;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_28,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_24,&local_28);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_24;
  puVar7 = &local_98;
  puVar6 = local_94;
  ppiVar5 = &local_1c;
  local_98 = 0x1b;
  local_94[0] = 0x15;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_28,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_24,&local_28);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_24;
  puVar7 = &local_98;
  puVar6 = local_94;
  ppiVar5 = &local_1c;
  local_98 = 0x1f;
  local_94[0] = 0x15;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_28,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_24,&local_28);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_24;
  puVar7 = &local_98;
  puVar6 = local_94;
  ppiVar5 = &local_1c;
  local_98 = 0x2d;
  local_94[0] = 0x15;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_28,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_24,&local_28);
  local_18 = 1;
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_24;
  puVar7 = &local_98;
  puVar6 = local_94;
  ppiVar5 = &local_1c;
  local_98 = 2;
  local_94[0] = 0x15;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_28,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_24,&local_28);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_24;
  puVar7 = &local_98;
  puVar6 = local_94;
  ppiVar5 = &local_1c;
  local_98 = 6;
  local_94[0] = 0x15;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_28,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_24,&local_28);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_24;
  puVar7 = &local_98;
  puVar6 = local_94;
  ppiVar5 = &local_1c;
  local_98 = 0xb;
  local_94[0] = 0x15;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_28,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_24,&local_28);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_24;
  puVar7 = &local_98;
  puVar6 = local_94;
  ppiVar5 = &local_1c;
  local_98 = 0xe;
  local_94[0] = 0x15;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_28,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_24,&local_28);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_24;
  local_98 = 0x14;
  puVar7 = &local_98;
  puVar6 = local_94;
  local_94[0] = 0x15;
  ppiVar5 = &local_1c;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_28,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_24,&local_28);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_24;
  puVar7 = &local_98;
  puVar6 = local_94;
  ppiVar5 = &local_1c;
  local_98 = 0x17;
  local_94[0] = 0x15;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_28,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_24,&local_28);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_24;
  puVar7 = &local_98;
  puVar6 = local_94;
  ppiVar5 = &local_1c;
  local_98 = 0x20;
  local_94[0] = 0x15;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_28,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_24,&local_28);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_24;
  local_98 = 0x21;
  local_94[0] = 0x15;
  puVar7 = &local_98;
  puVar6 = local_94;
  ppiVar5 = &local_1c;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_28,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_24,&local_28);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_24;
  puVar7 = &local_98;
  puVar6 = local_94;
  ppiVar5 = &local_1c;
  local_98 = 0x29;
  local_94[0] = 0x15;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_28,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_24,&local_28);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_24;
  puVar7 = &local_98;
  puVar6 = local_94;
  ppiVar5 = &local_1c;
  local_98 = 0x2b;
  local_94[0] = 0x15;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_28,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_24,&local_28);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  local_98 = 0x2c;
  local_94[0] = 0x15;
  puVar8 = &local_24;
  puVar7 = &local_98;
  puVar6 = local_94;
  ppiVar5 = &local_1c;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_28,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_24,&local_28);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_24;
  puVar7 = &local_98;
  puVar6 = local_94;
  ppiVar5 = &local_1c;
  local_98 = 0x2e;
  local_94[0] = 0x15;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_28,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_24,&local_28);
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  puVar8 = &local_24;
  puVar7 = &local_98;
  puVar6 = local_94;
  ppiVar5 = &local_1c;
  local_98 = 0x2f;
  local_94[0] = 0x15;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_28,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_24,&local_28);
  local_9c = 2;
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  local_98 = 0x1c;
  local_94[0] = 0x15;
  puVar8 = &local_24;
  puVar7 = &local_98;
  puVar6 = local_94;
  ppiVar5 = &local_1c;
  FUN_0040b5a0(ppiVar5,(undefined2 *)puVar6,(undefined2 *)puVar7,puVar8,&local_28,
               (undefined2 *)&local_9c);
  __vbaFreeStrList(2,&local_24,&local_28);
  local_9c = 2;
  __vbaStrCopy(ppiVar5,puVar6);
  __vbaStrCopy(puVar7,puVar8);
  local_98 = 0x1d;
  local_94[0] = 0x15;
  FUN_0040b5a0(&local_1c,(undefined2 *)local_94,(undefined2 *)&local_98,&local_24,&local_28,
               (undefined2 *)&local_9c);
  __vbaFreeStrList(2,&local_24,&local_28);
  iVar1 = (**(code **)(*local_1c + 0xc4))(local_1c);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c,&DAT_00403434,0xc4);
  }
  __vbaFreeObj(&LAB_00430894);
  __vbaFreeStr();
  return;
}


// ---- FUN_004308b0 @ 004308b0

void FUN_004308b0(void)

{
  int iVar1;
  undefined4 uVar2;
  int **ppiVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  int *piVar8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98 [2];
  wchar_t *local_90;
  undefined4 local_88 [2];
  wchar_t *local_80;
  undefined4 local_78;
  wchar_t *local_70;
  undefined4 local_68 [4];
  undefined4 local_58 [4];
  undefined4 local_48 [4];
  undefined4 local_38 [2];
  undefined4 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int *local_1c;
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_00401736;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffff40;
  local_8 = &DAT_00401720;
  local_98[0] = 10;
  local_88[0] = 10;
  local_90 = (wchar_t *)0x80020004;
  local_80 = (wchar_t *)0x80020004;
  local_18 = 0;
  local_1c = (int *)0x0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_38[0] = 0;
  local_48[0] = 0;
  local_58[0] = 0;
  local_68[0] = 0;
  local_9c = 0;
  local_a0 = 0;
  local_a4 = 0;
  ExceptionList = &pvStack_14;
  iVar1 = (**(code **)(*DAT_0043302c + 0xbc))(DAT_0043302c,L"Licences",3);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,DAT_0043302c,&DAT_00402ed0,0xbc);
  }
  uVar2 = local_28;
  local_28 = 0;
  __vbaObjSet(&local_1c,uVar2);
  iVar1 = (**(code **)(*local_1c + 0xd4))(local_1c,L"licence = 36");
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c,&DAT_00403434,0xd4);
  }
  iVar1 = (**(code **)(*local_1c + 0xd0))(local_1c);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c,&DAT_00403434,0xd0);
  }
  local_80 = L"Low Voltage Working";
  local_88[0] = 8;
  iVar1 = (**(code **)(*local_1c + 0x128))(local_1c,8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c,&DAT_00403434,0x128);
  }
  iVar1 = (**(code **)(*local_1c + 0x164))(local_1c,1,0);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c,&DAT_00403434,0x164);
  }
  iVar1 = (**(code **)(*local_1c + 0xc0))(local_1c);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c,&DAT_00403434,0xc0);
  }
  local_80 = (wchar_t *)0x2f;
  local_88[0] = 2;
  iVar1 = (**(code **)(*local_1c + 0x128))(local_1c,8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c,&DAT_00403434,0x128);
  }
  local_80 = (wchar_t *)0x0;
  local_88[0] = 2;
  iVar1 = (**(code **)(*local_1c + 0x128))(local_1c,8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c,&DAT_00403434,0x128);
  }
  local_80 = L"Stage Survey Mode";
  local_88[0] = 8;
  local_70 = L"Description";
  iVar1 = (**(code **)(*local_1c + 0x128))(local_1c,8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c,&DAT_00403434,0x128);
  }
  iVar1 = (**(code **)(*local_1c + 0x164))(local_1c,1,0);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c,&DAT_00403434,0x164);
  }
  iVar1 = (**(code **)(*local_1c + 0xc4))(local_1c);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c,&DAT_00403434,0xc4);
  }
  local_90 = (wchar_t *)0x80020004;
  local_98[0] = 10;
  local_80 = (wchar_t *)0x80020004;
  local_88[0] = 10;
  local_78 = 3;
  iVar1 = (**(code **)(*DAT_0043302c + 0xbc))(DAT_0043302c,L"validLicences",3);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,DAT_0043302c,&DAT_00402ed0,0xbc);
  }
  uVar2 = local_28;
  local_28 = 0;
  __vbaObjSet(&local_1c,uVar2);
  local_80 = L"machine = ";
  local_88[0] = 8;
  local_30 = 9;
  local_38[0] = 2;
  rtcVarStrFromVar(local_48,local_38);
  local_90 = L"AND licence = 14";
  local_98[0] = 8;
  iVar1 = *local_1c;
  uVar2 = __vbaVarAdd(local_58,local_48,local_88);
  uVar2 = __vbaVarAdd(local_68,local_98,uVar2);
  uVar2 = __vbaStrVarVal(&local_20,uVar2);
  piVar8 = local_1c;
  iVar1 = (**(code **)(iVar1 + 0xd4))(local_1c,uVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c,&DAT_00403434,0xd4);
  }
  __vbaFreeStr();
  __vbaFreeVarList(4,local_38,local_48,local_58,local_68);
  puVar6 = &local_9c;
  piVar7 = local_1c;
  iVar1 = (**(code **)(*local_1c + 0x5c))(local_1c,puVar6);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c,&DAT_00403434,0x5c);
  }
  if ((short)local_9c == 0) {
    iVar1 = (**(code **)(*local_1c + 0xd0))(local_1c);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,local_1c,&DAT_00403434,0xd0);
    }
    local_80 = (wchar_t *)0x0;
    local_88[0] = 2;
    iVar1 = (**(code **)(*local_1c + 0x128))(local_1c,8);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,local_1c,&DAT_00403434,0x128);
    }
    iVar1 = (**(code **)(*local_1c + 0x164))(local_1c,1,0);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,local_1c,&DAT_00403434,0x164);
    }
  }
  local_18 = 1;
  __vbaStrCopy(piVar7,puVar6);
  __vbaStrCopy(piVar8,uVar2);
  puVar6 = &local_20;
  puVar5 = &local_a0;
  puVar4 = &local_9c;
  ppiVar3 = &local_1c;
  local_a0 = 0x24;
  local_9c = 1;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_18 = 0;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_a0;
  puVar4 = &local_9c;
  ppiVar3 = &local_1c;
  local_a0 = 0x24;
  local_9c = 8;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_a0;
  puVar4 = &local_9c;
  ppiVar3 = &local_1c;
  local_a0 = 0x24;
  local_9c = 7;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_a0;
  puVar4 = &local_9c;
  ppiVar3 = &local_1c;
  local_a0 = 0x24;
  local_9c = 9;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_18 = 1;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_a0;
  puVar4 = &local_9c;
  ppiVar3 = &local_1c;
  local_a0 = 0x2f;
  local_9c = 2;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_a0;
  local_a0 = 0x2f;
  local_9c = 1;
  puVar4 = &local_9c;
  ppiVar3 = &local_1c;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_a0;
  puVar4 = &local_9c;
  ppiVar3 = &local_1c;
  local_a0 = 0x2f;
  local_9c = 4;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_a0;
  puVar4 = &local_9c;
  ppiVar3 = &local_1c;
  local_a0 = 0x2f;
  local_9c = 10;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  local_a0 = 0x2f;
  local_9c = 0x11;
  puVar6 = &local_20;
  puVar5 = &local_a0;
  puVar4 = &local_9c;
  ppiVar3 = &local_1c;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_a0;
  puVar4 = &local_9c;
  ppiVar3 = &local_1c;
  local_a0 = 0x2f;
  local_9c = 0xb;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_a0;
  puVar4 = &local_9c;
  ppiVar3 = &local_1c;
  local_a0 = 0x2f;
  local_9c = 0xd;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  local_a0 = 0x2f;
  local_9c = 0x12;
  puVar6 = &local_20;
  puVar5 = &local_a0;
  puVar4 = &local_9c;
  ppiVar3 = &local_1c;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_a0;
  puVar4 = &local_9c;
  ppiVar3 = &local_1c;
  local_a0 = 0x2f;
  local_9c = 0xc;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_a0;
  puVar4 = &local_9c;
  ppiVar3 = &local_1c;
  local_a0 = 0x2f;
  local_9c = 0xe;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  local_a0 = 0x2f;
  puVar6 = &local_20;
  puVar5 = &local_a0;
  puVar4 = &local_9c;
  ppiVar3 = &local_1c;
  local_9c = 8;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_a0;
  puVar4 = &local_9c;
  ppiVar3 = &local_1c;
  local_a0 = 0x2f;
  local_9c = 7;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_a0;
  puVar4 = &local_9c;
  ppiVar3 = &local_1c;
  local_a0 = 0x2f;
  local_9c = 9;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_18 = 0;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_a0;
  puVar4 = &local_9c;
  ppiVar3 = &local_1c;
  local_a0 = 1;
  local_9c = 0x13;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_a0;
  puVar4 = &local_9c;
  ppiVar3 = &local_1c;
  local_a0 = 3;
  local_9c = 0x13;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_a0;
  puVar4 = &local_9c;
  ppiVar3 = &local_1c;
  local_a0 = 4;
  local_9c = 0x13;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_a0;
  puVar4 = &local_9c;
  ppiVar3 = &local_1c;
  local_a0 = 5;
  local_9c = 0x13;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_a0;
  puVar4 = &local_9c;
  ppiVar3 = &local_1c;
  local_a0 = 7;
  local_9c = 0x13;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_a0;
  puVar4 = &local_9c;
  ppiVar3 = &local_1c;
  local_a0 = 9;
  local_9c = 0x13;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_a0;
  puVar4 = &local_9c;
  ppiVar3 = &local_1c;
  local_a0 = 0xc;
  local_9c = 0x13;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_a0;
  puVar4 = &local_9c;
  ppiVar3 = &local_1c;
  local_a0 = 0xf;
  local_9c = 0x13;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_a0;
  puVar4 = &local_9c;
  ppiVar3 = &local_1c;
  local_a0 = 0x11;
  local_9c = 0x13;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_a0;
  puVar4 = &local_9c;
  ppiVar3 = &local_1c;
  local_a0 = 0x18;
  local_9c = 0x13;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_a0;
  puVar4 = &local_9c;
  ppiVar3 = &local_1c;
  local_a0 = 0x19;
  local_9c = 0x13;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_a0;
  puVar4 = &local_9c;
  local_a0 = 0x1b;
  local_9c = 0x13;
  ppiVar3 = &local_1c;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_a0;
  puVar4 = &local_9c;
  ppiVar3 = &local_1c;
  local_a0 = 0x1f;
  local_9c = 0x13;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_18 = 1;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_a0;
  puVar4 = &local_9c;
  ppiVar3 = &local_1c;
  local_a0 = 2;
  local_9c = 0x13;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  local_a0 = 6;
  local_9c = 0x13;
  puVar5 = &local_a0;
  puVar4 = &local_9c;
  ppiVar3 = &local_1c;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_a0;
  puVar4 = &local_9c;
  ppiVar3 = &local_1c;
  local_a0 = 0xb;
  local_9c = 0x13;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_a0;
  puVar4 = &local_9c;
  ppiVar3 = &local_1c;
  local_a0 = 0xe;
  local_9c = 0x13;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  local_a0 = 0x14;
  local_9c = 0x13;
  puVar6 = &local_20;
  puVar5 = &local_a0;
  puVar4 = &local_9c;
  ppiVar3 = &local_1c;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_a0;
  puVar4 = &local_9c;
  ppiVar3 = &local_1c;
  local_a0 = 0x17;
  local_9c = 0x13;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_a0;
  puVar4 = &local_9c;
  ppiVar3 = &local_1c;
  local_a0 = 0x20;
  local_9c = 0x13;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  local_a0 = 0x21;
  local_9c = 0x13;
  puVar6 = &local_20;
  puVar5 = &local_a0;
  puVar4 = &local_9c;
  ppiVar3 = &local_1c;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_a0;
  puVar4 = &local_9c;
  ppiVar3 = &local_1c;
  local_a0 = 0x29;
  local_9c = 0x13;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_a0;
  puVar4 = &local_9c;
  ppiVar3 = &local_1c;
  local_a0 = 0x2b;
  local_9c = 0x13;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_a0;
  puVar4 = &local_9c;
  ppiVar3 = &local_1c;
  local_a0 = 0x2c;
  local_9c = 0x13;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_a0;
  puVar4 = &local_9c;
  ppiVar3 = &local_1c;
  local_a0 = 0x2d;
  local_9c = 0x13;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_a0;
  puVar4 = &local_9c;
  ppiVar3 = &local_1c;
  local_a0 = 0x2e;
  local_9c = 0x13;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_a0;
  puVar4 = &local_9c;
  ppiVar3 = &local_1c;
  local_a0 = 0x24;
  local_9c = 0x13;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_a0;
  puVar4 = &local_9c;
  ppiVar3 = &local_1c;
  local_a0 = 0x2f;
  local_9c = 0x13;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_18);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_a4 = 2;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  puVar6 = &local_20;
  puVar5 = &local_a0;
  puVar4 = &local_9c;
  ppiVar3 = &local_1c;
  local_a0 = 0x1c;
  local_9c = 0x13;
  FUN_0040b5a0(ppiVar3,(undefined2 *)puVar4,(undefined2 *)puVar5,puVar6,&local_24,
               (undefined2 *)&local_a4);
  __vbaFreeStrList(2,&local_20,&local_24);
  local_a4 = 2;
  __vbaStrCopy(ppiVar3,puVar4);
  __vbaStrCopy(puVar5,puVar6);
  local_a0 = 0x1d;
  local_9c = 0x13;
  FUN_0040b5a0(&local_1c,(undefined2 *)&local_9c,(undefined2 *)&local_a0,&local_20,&local_24,
               (undefined2 *)&local_a4);
  __vbaFreeStrList(2,&local_20,&local_24);
  iVar1 = (**(code **)(*local_1c + 0xc4))(local_1c);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_1c,&DAT_00403434,0xc4);
  }
  __vbaFreeObj(&LAB_00431fc0);
  return;
}


