// Decompiled with Ghidra from Cal98.exe
// Format: Portable Executable (PE), image base 00400000

// ---- __vbaChkstk @ 004020e0

void __vbaChkstk(void)

{
                    /* WARNING: Could not recover jumptable at 0x004020e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __vbaChkstk();
  return;
}


// ---- __vbaFPException @ 004020ec

void __vbaFPException(void)

{
                    /* WARNING: Could not recover jumptable at 0x004020ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __vbaFPException();
  return;
}


// ---- adj_fdiv_m32 @ 004020f8

void __cdecl adj_fdiv_m32(void)

{
                    /* WARNING: Could not recover jumptable at 0x004020f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  adj_fdiv_m32();
  return;
}


// ---- adj_fdiv_m64 @ 00402104

void __cdecl adj_fdiv_m64(void)

{
                    /* WARNING: Could not recover jumptable at 0x00402104. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  adj_fdiv_m64();
  return;
}


// ---- adj_fdiv_r @ 0040210a

void __cdecl adj_fdiv_r(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040210a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  adj_fdiv_r();
  return;
}


// ---- adj_fdivr_m32 @ 00402116

void __cdecl adj_fdivr_m32(void)

{
                    /* WARNING: Could not recover jumptable at 0x00402116. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  adj_fdivr_m32();
  return;
}


// ---- DllFunctionCall @ 00402170

void DllFunctionCall(void)

{
                    /* WARNING: Could not recover jumptable at 0x00402170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DllFunctionCall();
  return;
}


// ---- ThunRTMain @ 00402326

void ThunRTMain(void)

{
                    /* WARNING: Could not recover jumptable at 0x00402326. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ThunRTMain();
  return;
}


// ---- entry @ 0040232c

/* WARNING: Instruction at (ram,0x00402359) overlaps instruction at (ram,0x00402357)
    */

void entry(void)

{
  byte bVar1;
  undefined1 uVar2;
  code *pcVar3;
  ulonglong uVar4;
  bool bVar5;
  uint5 uVar6;
  byte bVar7;
  char cVar8;
  uint uVar9;
  byte *pbVar11;
  char *extraout_ECX;
  int unaff_EBX;
  int unaff_ESI;
  undefined1 *unaff_EDI;
  bool bVar13;
  byte in_AF;
  undefined8 uVar14;
  int *piVar10;
  char *pcVar12;
  
  uVar14 = ThunRTMain();
  pbVar11 = (byte *)uVar14;
  bVar7 = (byte)uVar14;
  *pbVar11 = *pbVar11 + bVar7;
  *pbVar11 = *pbVar11 + bVar7;
  *pbVar11 = *pbVar11 + bVar7;
  *pbVar11 = *pbVar11 ^ bVar7;
  *pbVar11 = *pbVar11 + bVar7;
  *pbVar11 = *pbVar11 + bVar7;
  *pbVar11 = *pbVar11 + bVar7;
  bVar1 = *pbVar11;
  *pbVar11 = *pbVar11 + bVar7;
  if (CARRY1(bVar1,bVar7)) {
    *pbVar11 = *pbVar11 + bVar7;
    *pbVar11 = *pbVar11 + bVar7;
    *extraout_ECX = *extraout_ECX + bVar7;
    *pbVar11 = *pbVar11 + bVar7;
    *extraout_ECX = *extraout_ECX + bVar7;
    pbVar11 = (byte *)CONCAT31((int3)((ulonglong)uVar14 >> 8),bVar7 + 0x50);
  }
  bVar13 = CARRY1(bVar1,bVar7) && 0xaf < bVar7;
  bVar1 = (byte)extraout_ECX & 0x1f;
  uVar6 = CONCAT14(bVar13,(int)((ulonglong)uVar14 >> 0x20));
  uVar4 = (ulonglong)uVar6 << bVar1 | (ulonglong)(uVar6 >> 0x21 - bVar1);
  bVar5 = ((uint)extraout_ECX & 0x1f) == 0;
  *(int *)(unaff_ESI + -0x689ffff9) =
       *(int *)(unaff_ESI + -0x689ffff9) + unaff_EBX +
       (uint)(byte)(bVar5 * bVar13 | !bVar5 * ((uVar4 & 0x100000000) != 0));
  in_AF = 9 < ((byte)pbVar11 & 0xf) | in_AF;
  uVar9 = CONCAT31((int3)((uint)pbVar11 >> 8),(byte)pbVar11 + in_AF * -6) & 0xffffff0f;
  cVar8 = (char)uVar9;
  piVar10 = (int *)CONCAT22((short)(uVar9 >> 0x10),
                            CONCAT11((char)((uint)pbVar11 >> 8) - in_AF,cVar8));
  *piVar10 = *piVar10;
  *(char *)piVar10 = (char)*piVar10 + cVar8;
  *(char *)piVar10 = (char)*piVar10 + cVar8;
  *piVar10 = (int)(*piVar10 + (int)piVar10);
  *(char *)piVar10 = (char)*piVar10 + cVar8;
  pcVar12 = (char *)((int)piVar10 + (int)uVar4 * 2);
  *pcVar12 = *pcVar12 + cVar8;
  cVar8 = (char)unaff_EBX + *(char *)((int)piVar10 + 0x61);
  pcVar12 = (char *)CONCAT31((int3)((uint)unaff_EBX >> 8),cVar8);
  uVar2 = in((short)uVar4);
  *unaff_EDI = uVar2;
  (extraout_ECX + 1)[(int)pcVar12] = (extraout_ECX + 1)[(int)pcVar12] + (char)(uVar4 >> 8);
  *pcVar12 = *pcVar12 + cVar8;
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


// ---- FUN_00407e08 @ 00407e08

void FUN_00407e08(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if (DAT_00422614 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00407e11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_00422614)();
    return;
  }
  UNRECOVERED_JUMPTABLE = (code *)DllFunctionCall(&PTR_s_kernel32_00407df0);
                    /* WARNING: Could not recover jumptable at 0x00407e1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


// ---- FUN_00407e5c @ 00407e5c

void FUN_00407e5c(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if (DAT_00422620 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00407e65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_00422620)();
    return;
  }
  UNRECOVERED_JUMPTABLE = (code *)DllFunctionCall(&PTR_s_user32_00407e44);
                    /* WARNING: Could not recover jumptable at 0x00407e73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


// ---- FUN_00407eac @ 00407eac

void FUN_00407eac(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if (DAT_0042262c != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00407eb5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_0042262c)();
    return;
  }
  UNRECOVERED_JUMPTABLE = (code *)DllFunctionCall(&PTR_s_kernel32_00407e94);
                    /* WARNING: Could not recover jumptable at 0x00407ec3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


// ---- FUN_0040b410 @ 0040b410

void __cdecl FUN_0040b410(int *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_004020e6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffffd0;
  local_8 = &DAT_00401190;
  local_18 = 0;
  ExceptionList = &pvStack_14;
  uVar1 = (**(code **)(*param_1 + 0x348))(param_1);
  piVar2 = (int *)__vbaObjSet(&local_18,uVar1);
  iVar3 = (**(code **)(*piVar2 + 100))(piVar2,0x808080);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,100);
  }
  __vbaFreeObj();
  uVar1 = (**(code **)(*param_1 + 0x34c))(param_1);
  piVar2 = (int *)__vbaObjSet(&local_18,uVar1);
  iVar3 = (**(code **)(*piVar2 + 100))(piVar2,0x808080);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,100);
  }
  __vbaFreeObj();
  uVar1 = (**(code **)(*param_1 + 0x350))(param_1);
  piVar2 = (int *)__vbaObjSet(&local_18,uVar1);
  iVar3 = (**(code **)(*piVar2 + 100))(piVar2,0x808080);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,100);
  }
  __vbaFreeObj();
  uVar1 = (**(code **)(*param_1 + 0x354))(param_1);
  piVar2 = (int *)__vbaObjSet(&local_18,uVar1);
  iVar3 = (**(code **)(*piVar2 + 100))(piVar2,0x808080);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,100);
  }
  __vbaFreeObj();
  uVar1 = (**(code **)(*param_1 + 0x358))(param_1);
  piVar2 = (int *)__vbaObjSet(&local_18,uVar1);
  iVar3 = (**(code **)(*piVar2 + 100))(piVar2,0x808080);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,100);
  }
  __vbaFreeObj();
  uVar1 = (**(code **)(*param_1 + 0x35c))(param_1);
  piVar2 = (int *)__vbaObjSet(&local_18,uVar1);
  iVar3 = (**(code **)(*piVar2 + 100))(piVar2,0x808080);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,100);
  }
  __vbaFreeObj();
  uVar1 = (**(code **)(*param_1 + 0x360))(param_1);
  piVar2 = (int *)__vbaObjSet(&local_18,uVar1);
  iVar3 = (**(code **)(*piVar2 + 100))(piVar2,0x808080);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,100);
  }
  __vbaFreeObj();
  uVar1 = (**(code **)(*param_1 + 0x364))(param_1);
  piVar2 = (int *)__vbaObjSet(&local_18,uVar1);
  iVar3 = (**(code **)(*piVar2 + 100))(piVar2,0x808080);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,100);
  }
  __vbaFreeObj();
  return;
}


// ---- FUN_0040b650 @ 0040b650

void __cdecl FUN_0040b650(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined2 extraout_var;
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_004020e6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffffd0;
  local_8 = &DAT_004011a0;
  local_18 = 0;
  ExceptionList = &pvStack_14;
  __vbaStrCopy();
  (**(code **)(*param_1 + 0x38c))();
  piVar1 = (int *)__vbaObjSet(&local_18);
  piVar3 = piVar1;
  iVar2 = (**(code **)(*piVar1 + 0x54))(piVar1);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_00406fdc,0x54);
  }
  __vbaFreeObj();
  FUN_0041c1c0();
  __vbaPrintFile(&DAT_0040701c,CONCAT22(extraout_var,DAT_00422040),L"Done C3 hysteresis",piVar3);
  __vbaStrCopy();
  (**(code **)(*param_1 + 0x38c))();
  piVar3 = (int *)__vbaObjSet();
  iVar2 = (**(code **)(*piVar3 + 0x54))();
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar3);
  }
  __vbaFreeObj();
  return;
}


// ---- FUN_0040b770 @ 0040b770

void __cdecl FUN_0040b770(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined2 extraout_var;
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_004020e6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffffd0;
  local_8 = &DAT_004011b0;
  local_18 = 0;
  ExceptionList = &pvStack_14;
  __vbaStrCopy();
  (**(code **)(*param_1 + 0x38c))();
  piVar1 = (int *)__vbaObjSet(&local_18);
  piVar3 = piVar1;
  iVar2 = (**(code **)(*piVar1 + 0x54))(piVar1);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_00406fdc,0x54);
  }
  __vbaFreeObj();
  FUN_0041ba90();
  __vbaPrintFile(&DAT_0040701c,CONCAT22(extraout_var,DAT_00422040),L"Done C1/C2 hysteresis",piVar3);
  __vbaStrCopy();
  (**(code **)(*param_1 + 0x38c))();
  piVar3 = (int *)__vbaObjSet();
  iVar2 = (**(code **)(*piVar3 + 0x54))();
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar3);
  }
  __vbaFreeObj();
  return;
}


// ---- FUN_0040b890 @ 0040b890

void __cdecl FUN_0040b890(int *param_1,float *param_2)

{
  int *piVar1;
  int iVar2;
  undefined2 extraout_var;
  float10 fVar3;
  int *piVar4;
  undefined4 local_1c;
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_004020e6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffffcc;
  local_8 = &DAT_004011c0;
  local_18 = 0;
  local_1c = 0;
  ExceptionList = &pvStack_14;
  FUN_0041d220();
  __vbaStrCopy();
  __vbaStrCat();
  __vbaStrMove();
  (**(code **)(*param_1 + 0x38c))();
  piVar1 = (int *)__vbaObjSet(&local_1c);
  piVar4 = piVar1;
  iVar2 = (**(code **)(*piVar1 + 0x54))(piVar1);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_00406fdc,0x54);
  }
  __vbaFreeObj();
  FUN_0041f810();
  fVar3 = (float10)FUN_0041b4c0();
  *param_2 = (float)fVar3;
  __vbaPrintFile(&DAT_0040701c,CONCAT22(extraout_var,DAT_00422040),L"C3 focused manually",piVar4);
  __vbaFreeStr();
  return;
}


// ---- FUN_0040b990 @ 0040b990

void __cdecl FUN_0040b990(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined2 extraout_var;
  int *piVar3;
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_004020e6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffffd0;
  local_8 = &DAT_004011d0;
  local_18 = 0;
  ExceptionList = &pvStack_14;
  FUN_0041d220();
  __vbaStrCopy();
  __vbaStrCat();
  __vbaStrMove();
  (**(code **)(*param_1 + 0x38c))();
  piVar1 = (int *)__vbaObjSet(&local_18);
  piVar3 = piVar1;
  iVar2 = (**(code **)(*piVar1 + 0x54))(piVar1);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_00406fdc,0x54);
  }
  __vbaFreeObj();
  FUN_0041f810();
  __vbaPrintFile(&DAT_0040701c,CONCAT22(extraout_var,DAT_00422040),
                 L"C1 adjusted for maximum brightness",piVar3);
  return;
}


// ---- FUN_0040bae0 @ 0040bae0

void __cdecl FUN_0040bae0(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 local_1c;
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_004020e6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffffcc;
  local_8 = &DAT_004011e0;
  local_18 = 0;
  local_1c = 0;
  ExceptionList = &pvStack_14;
  FUN_0041d220();
  __vbaStrCopy();
  __vbaStrCat();
  __vbaStrMove();
  (**(code **)(*param_1 + 0x38c))();
  piVar1 = (int *)__vbaObjSet(&local_1c);
  iVar2 = (**(code **)(*piVar1 + 0x54))(piVar1);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_00406fdc,0x54);
  }
  __vbaFreeObj();
  FUN_0041f810();
  __vbaFreeStr(&LAB_0040bba4);
  return;
}


// ---- FUN_0040bbc0 @ 0040bbc0

void __cdecl FUN_0040bbc0(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 local_1c;
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_004020e6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffffcc;
  local_8 = &DAT_004011f0;
  local_18 = 0;
  local_1c = 0;
  ExceptionList = &pvStack_14;
  FUN_0041d220();
  __vbaStrCopy();
  __vbaStrCat();
  __vbaStrMove();
  (**(code **)(*param_1 + 0x38c))();
  piVar1 = (int *)__vbaObjSet(&local_1c);
  iVar2 = (**(code **)(*piVar1 + 0x54))(piVar1);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_00406fdc,0x54);
  }
  __vbaFreeObj();
  FUN_0041f810();
  __vbaFreeStr(&LAB_0040bc84);
  return;
}


// ---- FUN_0040bca0 @ 0040bca0

void __cdecl FUN_0040bca0(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined2 extraout_var;
  int *piVar3;
  undefined4 local_1c;
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_004020e6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffffcc;
  local_8 = &DAT_00401200;
  local_18 = 0;
  local_1c = 0;
  ExceptionList = &pvStack_14;
  FUN_0041d220();
  __vbaStrCopy();
  __vbaStrCat();
  __vbaStrMove();
  (**(code **)(*param_1 + 0x38c))();
  piVar1 = (int *)__vbaObjSet(&local_1c);
  piVar3 = piVar1;
  iVar2 = (**(code **)(*piVar1 + 0x54))(piVar1);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_00406fdc,0x54);
  }
  __vbaFreeObj();
  FUN_0041f810();
  __vbaPrintFile(&DAT_0040701c,CONCAT22(extraout_var,DAT_00422040),
                 L"C1 adjusted for maximum brightness",piVar3);
  __vbaFreeStr();
  return;
}


// ---- FUN_0040bda0 @ 0040bda0

void __cdecl FUN_0040bda0(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined2 extraout_var;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_004020e6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffff94;
  local_8 = &DAT_00401210;
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  ExceptionList = &pvStack_14;
  FUN_0041d220();
  __vbaStrCopy();
  __vbaStrCat();
  __vbaStrMove();
  (**(code **)(*param_1 + 0x38c))();
  piVar1 = (int *)__vbaObjSet(&local_24);
  iVar2 = (**(code **)(*piVar1 + 0x54))(piVar1);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_00406fdc,0x54);
  }
  __vbaFreeObj();
  if (DAT_00422078 == (int *)0x0) {
    __vbaNew2(&DAT_00403b14,&DAT_00422078);
  }
  uVar3 = (**(code **)(*DAT_00422078 + 0x324))
                    (DAT_00422078,9,2,8,local_40,L"AP_BRIGHTNESS",local_38,0x4003,local_30,&local_20
                     ,local_28);
  uVar3 = __vbaObjSet(&local_24,uVar3);
  __vbaLateIdCall(uVar3);
  __vbaFreeObj();
  if (DAT_00422078 == (int *)0x0) {
    __vbaNew2(&DAT_00403b14,&DAT_00422078);
  }
  uVar3 = (**(code **)(*DAT_00422078 + 0x324))
                    (DAT_00422078,9,2,8,local_40,L"AP_C2",local_38,0x4003,local_30,&local_1c,
                     local_28);
  uVar3 = __vbaObjSet(&local_24,uVar3);
  __vbaLateIdCall(uVar3);
  __vbaFreeObj();
  if (DAT_00422078 == (int *)0x0) {
    __vbaNew2(&DAT_00403b14,&DAT_00422078);
  }
  uVar3 = (**(code **)(*DAT_00422078 + 0x324))
                    (DAT_00422078,0x35,2,0x4003,local_40,&local_1c,local_38,0x4003,local_30,
                     &local_20,local_28);
  uVar3 = __vbaObjSet(&local_24,uVar3);
  __vbaLateIdCall(uVar3);
  __vbaFreeObj();
  FUN_0041f810();
  __vbaPrintFile(&DAT_0040701c,CONCAT22(extraout_var,DAT_00422040),
                 L"C2 adjusted for maximum brightness",local_28);
  __vbaFreeStr(&LAB_0040c00c);
  return;
}


// ---- FUN_0040c030 @ 0040c030

void __cdecl FUN_0040c030(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_004020e6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffffd0;
  local_8 = &DAT_00401220;
  local_18 = 0;
  ExceptionList = &pvStack_14;
  FUN_0041d220();
  __vbaStrCopy();
  __vbaStrCat();
  __vbaStrMove();
  (**(code **)(*param_1 + 0x38c))();
  piVar1 = (int *)__vbaObjSet(&local_18);
  iVar2 = (**(code **)(*piVar1 + 0x54))(piVar1);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_00406fdc,0x54);
  }
  __vbaFreeObj();
  FUN_0041f810();
  return;
}


// ---- FUN_0040c110 @ 0040c110

void __cdecl FUN_0040c110(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined1 *local_8;
  
  puStack_10 = &DAT_004020e6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffffd0;
  local_8 = &LAB_00401230;
  local_18 = 0;
  ExceptionList = &pvStack_14;
  FUN_0041d220();
  __vbaStrCopy();
  __vbaStrCat();
  __vbaStrMove();
  (**(code **)(*param_1 + 0x38c))();
  piVar1 = (int *)__vbaObjSet(&local_18);
  iVar2 = (**(code **)(*piVar1 + 0x54))(piVar1);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_00406fdc,0x54);
  }
  __vbaFreeObj();
  FUN_0041f810();
  return;
}


// ---- FUN_0040c1f0 @ 0040c1f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_0040c1f0(int *param_1,float *param_2)

{
  int *piVar1;
  int iVar2;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 uVar5;
  undefined4 uVar3;
  int *piVar4;
  ushort uVar6;
  float10 fVar7;
  undefined *puVar8;
  int *piVar9;
  float local_60 [3];
  wchar_t *local_54;
  undefined4 local_3c [4];
  undefined4 local_2c [2];
  double local_24;
  undefined4 local_1c;
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_004020e6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffff88;
  local_8 = &DAT_00401258;
  local_18 = 0;
  local_1c = 0;
  local_2c[0] = 0;
  local_3c[0] = 0;
  local_60[1] = 0.0;
  local_60[0] = 0.0;
  ExceptionList = &pvStack_14;
  __vbaStrCopy();
  (**(code **)(*param_1 + 0x38c))();
  piVar1 = (int *)__vbaObjSet(&local_1c);
  iVar2 = (**(code **)(*piVar1 + 0x54))(piVar1);
  uVar6 = 0;
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_00406fdc,0x54);
  }
  __vbaFreeObj();
  local_60[0] = *param_2;
  FUN_0041f560(local_60);
  if (DAT_00422000 == 0) {
    fVar7 = (float10)*param_2 / (float10)(double)CONCAT44(DAT_00401254,DAT_00401250);
    uVar5 = extraout_var;
  }
  else {
    fVar7 = (float10)adj_fdiv_m64();
    uVar5 = extraout_var_00;
  }
  puVar8 = &DAT_00407728;
  if ((uVar6 & 0xd) == 0) {
    uVar3 = (undefined4)((ulonglong)(double)fVar7 >> 0x20);
    __vbaPrintFile(&DAT_00407734,CONCAT22(uVar5,DAT_00422040),L"EHT = ");
    if (DAT_00422000 != 0) {
      adj_fdiv_m64(DAT_00401248,DAT_0040124c,uVar3,puVar8);
    }
    if ((uVar6 & 0xd) == 0) {
      fVar7 = (float10)rtcSqr();
      DAT_00422058 = (float)fVar7;
      (**(code **)(*param_1 + 0x308))();
      piVar1 = (int *)__vbaObjSet();
      local_54 = L"00.0";
      local_60[1] = 1.12104e-44;
      __vbaVarDup();
      if (DAT_00422000 == 0) {
        fVar7 = (float10)*param_2 / (float10)(double)CONCAT44(DAT_00401254,DAT_00401250);
      }
      else {
        fVar7 = (float10)adj_fdiv_m64();
      }
      local_2c[0] = 5;
      local_24 = (double)fVar7;
      if ((uVar6 & 0xd) == 0) {
        iVar2 = *piVar1;
        rtcBstrFromFormatVar(local_2c,local_3c);
        __vbaStrMove();
        iVar2 = (**(code **)(iVar2 + 0xa4))();
        if (iVar2 < 0) {
          __vbaHresultCheckObj();
        }
        __vbaFreeStr();
        __vbaFreeObj();
        __vbaFreeVarList(2,local_2c,local_3c);
        piVar9 = param_1;
        uVar3 = (**(code **)(*param_1 + 0x308))(param_1);
        piVar4 = (int *)__vbaObjSet(&local_1c,uVar3);
        piVar1 = piVar4;
        iVar2 = (**(code **)(*piVar4 + 0x204))(piVar4);
        if (iVar2 < 0) {
          __vbaHresultCheckObj(iVar2,piVar4,&DAT_00406f50,0x204);
        }
        __vbaFreeObj();
        __vbaStrCopy(piVar1,piVar9);
        uVar3 = (**(code **)(*param_1 + 0x38c))(param_1);
        piVar1 = (int *)__vbaObjSet(&local_1c,uVar3);
        iVar2 = (**(code **)(*piVar1 + 0x54))(piVar1,DAT_00422030);
        if (iVar2 < 0) {
          __vbaHresultCheckObj(iVar2,piVar1,&DAT_00406fdc,0x54);
        }
        __vbaFreeObj();
        return;
      }
    }
  }
  __vbaFPException();
  return;
}


// ---- FUN_0040c4d0 @ 0040c4d0

void __cdecl FUN_0040c4d0(int *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_004020e6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffffd0;
  local_8 = &DAT_00401268;
  local_18 = 0;
  ExceptionList = &pvStack_14;
  uVar1 = (**(code **)(*param_1 + 0x348))(param_1);
  piVar2 = (int *)__vbaObjSet(&local_18,uVar1);
  iVar3 = (**(code **)(*piVar2 + 100))(piVar2,0);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,100);
  }
  __vbaFreeObj();
  uVar1 = (**(code **)(*param_1 + 0x34c))(param_1);
  piVar2 = (int *)__vbaObjSet(&local_18,uVar1);
  iVar3 = (**(code **)(*piVar2 + 100))(piVar2,0);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,100);
  }
  __vbaFreeObj();
  return;
}


// ---- FUN_0040c5a0 @ 0040c5a0

void __cdecl FUN_0040c5a0(int *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_004020e6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffffd0;
  local_8 = &DAT_00401278;
  local_18 = 0;
  ExceptionList = &pvStack_14;
  uVar1 = (**(code **)(*param_1 + 0x348))(param_1);
  piVar2 = (int *)__vbaObjSet(&local_18,uVar1);
  iVar3 = (**(code **)(*piVar2 + 100))(piVar2,0x808080);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,100);
  }
  __vbaFreeObj();
  uVar1 = (**(code **)(*param_1 + 0x34c))(param_1);
  piVar2 = (int *)__vbaObjSet(&local_18,uVar1);
  iVar3 = (**(code **)(*piVar2 + 100))(piVar2,0x808080);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,100);
  }
  __vbaFreeObj();
  return;
}


// ---- FUN_0040c680 @ 0040c680

void __cdecl FUN_0040c680(int *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_004020e6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffffd0;
  local_8 = &DAT_00401288;
  local_18 = 0;
  ExceptionList = &pvStack_14;
  uVar1 = (**(code **)(*param_1 + 0x348))(param_1);
  piVar2 = (int *)__vbaObjSet(&local_18,uVar1);
  iVar3 = (**(code **)(*piVar2 + 100))(piVar2,0xff);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,100);
  }
  __vbaFreeObj();
  uVar1 = (**(code **)(*param_1 + 0x34c))(param_1);
  piVar2 = (int *)__vbaObjSet(&local_18,uVar1);
  iVar3 = (**(code **)(*piVar2 + 100))(piVar2,0xff);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,100);
  }
  __vbaFreeObj();
  return;
}


// ---- FUN_0040cb60 @ 0040cb60

void __cdecl FUN_0040cb60(int *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_004020e6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffffd0;
  local_8 = &DAT_004012a0;
  local_18 = 0;
  ExceptionList = &pvStack_14;
  uVar1 = (**(code **)(*param_1 + 0x354))(param_1);
  piVar2 = (int *)__vbaObjSet(&local_18,uVar1);
  iVar3 = (**(code **)(*piVar2 + 100))(piVar2,0);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,100);
  }
  __vbaFreeObj();
  uVar1 = (**(code **)(*param_1 + 0x358))(param_1);
  piVar2 = (int *)__vbaObjSet(&local_18,uVar1);
  iVar3 = (**(code **)(*piVar2 + 100))(piVar2,0);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,100);
  }
  __vbaFreeObj();
  uVar1 = (**(code **)(*param_1 + 0x35c))(param_1);
  piVar2 = (int *)__vbaObjSet(&local_18,uVar1);
  iVar3 = (**(code **)(*piVar2 + 100))(piVar2,0);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,100);
  }
  __vbaFreeObj();
  uVar1 = (**(code **)(*param_1 + 0x350))(param_1);
  piVar2 = (int *)__vbaObjSet(&local_18,uVar1);
  iVar3 = (**(code **)(*piVar2 + 100))(piVar2,0);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,100);
  }
  __vbaFreeObj();
  return;
}


// ---- FUN_0040cca0 @ 0040cca0

void __cdecl FUN_0040cca0(int *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined1 *local_8;
  
  puStack_10 = &DAT_004020e6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffffd0;
  local_8 = &LAB_004012b0;
  local_18 = 0;
  ExceptionList = &pvStack_14;
  uVar1 = (**(code **)(*param_1 + 0x354))(param_1);
  piVar2 = (int *)__vbaObjSet(&local_18,uVar1);
  iVar3 = (**(code **)(*piVar2 + 100))(piVar2,0x808080);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,100);
  }
  __vbaFreeObj();
  uVar1 = (**(code **)(*param_1 + 0x358))(param_1);
  piVar2 = (int *)__vbaObjSet(&local_18,uVar1);
  iVar3 = (**(code **)(*piVar2 + 100))(piVar2,0x808080);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,100);
  }
  __vbaFreeObj();
  uVar1 = (**(code **)(*param_1 + 0x35c))(param_1);
  piVar2 = (int *)__vbaObjSet(&local_18,uVar1);
  iVar3 = (**(code **)(*piVar2 + 100))(piVar2,0x808080);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,100);
  }
  __vbaFreeObj();
  uVar1 = (**(code **)(*param_1 + 0x350))(param_1);
  piVar2 = (int *)__vbaObjSet(&local_18,uVar1);
  iVar3 = (**(code **)(*piVar2 + 100))(piVar2,0x808080);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,100);
  }
  __vbaFreeObj();
  return;
}


// ---- FUN_0040cdf0 @ 0040cdf0

void __cdecl FUN_0040cdf0(int *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_004020e6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffffd0;
  local_8 = &DAT_004012c0;
  local_18 = 0;
  ExceptionList = &pvStack_14;
  uVar1 = (**(code **)(*param_1 + 0x354))(param_1);
  piVar2 = (int *)__vbaObjSet(&local_18,uVar1);
  iVar3 = (**(code **)(*piVar2 + 100))(piVar2,0xff);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,100);
  }
  __vbaFreeObj();
  uVar1 = (**(code **)(*param_1 + 0x358))(param_1);
  piVar2 = (int *)__vbaObjSet(&local_18,uVar1);
  iVar3 = (**(code **)(*piVar2 + 100))(piVar2,0xff);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,100);
  }
  __vbaFreeObj();
  uVar1 = (**(code **)(*param_1 + 0x35c))(param_1);
  piVar2 = (int *)__vbaObjSet(&local_18,uVar1);
  iVar3 = (**(code **)(*piVar2 + 100))(piVar2,0xff);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,100);
  }
  __vbaFreeObj();
  uVar1 = (**(code **)(*param_1 + 0x350))(param_1);
  piVar2 = (int *)__vbaObjSet(&local_18,uVar1);
  iVar3 = (**(code **)(*piVar2 + 100))(piVar2,0xff);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,100);
  }
  __vbaFreeObj();
  return;
}


// ---- FUN_0040d050 @ 0040d050

void __cdecl FUN_0040d050(int *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_004020e6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffffd0;
  local_8 = &DAT_004012d0;
  local_18 = 0;
  ExceptionList = &pvStack_14;
  uVar1 = (**(code **)(*param_1 + 0x360))(param_1);
  piVar2 = (int *)__vbaObjSet(&local_18,uVar1);
  iVar3 = (**(code **)(*piVar2 + 100))(piVar2,0);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,100);
  }
  __vbaFreeObj();
  uVar1 = (**(code **)(*param_1 + 0x364))(param_1);
  piVar2 = (int *)__vbaObjSet(&local_18,uVar1);
  iVar3 = (**(code **)(*piVar2 + 100))(piVar2,0);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,100);
  }
  __vbaFreeObj();
  return;
}


// ---- FUN_0040d120 @ 0040d120

void __cdecl FUN_0040d120(int *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_004020e6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffffd0;
  local_8 = &DAT_004012e0;
  local_18 = 0;
  ExceptionList = &pvStack_14;
  uVar1 = (**(code **)(*param_1 + 0x360))(param_1);
  piVar2 = (int *)__vbaObjSet(&local_18,uVar1);
  iVar3 = (**(code **)(*piVar2 + 100))(piVar2,0x808080);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,100);
  }
  __vbaFreeObj();
  uVar1 = (**(code **)(*param_1 + 0x364))(param_1);
  piVar2 = (int *)__vbaObjSet(&local_18,uVar1);
  iVar3 = (**(code **)(*piVar2 + 100))(piVar2,0x808080);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,100);
  }
  __vbaFreeObj();
  return;
}


// ---- FUN_0040d200 @ 0040d200

void __cdecl FUN_0040d200(int *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_004020e6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffffd0;
  local_8 = &DAT_004012f0;
  local_18 = 0;
  ExceptionList = &pvStack_14;
  uVar1 = (**(code **)(*param_1 + 0x360))(param_1);
  piVar2 = (int *)__vbaObjSet(&local_18,uVar1);
  iVar3 = (**(code **)(*piVar2 + 100))(piVar2,0xff);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,100);
  }
  __vbaFreeObj();
  uVar1 = (**(code **)(*param_1 + 0x364))(param_1);
  piVar2 = (int *)__vbaObjSet(&local_18,uVar1);
  iVar3 = (**(code **)(*piVar2 + 100))(piVar2,0xff);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,100);
  }
  __vbaFreeObj();
  return;
}


// ---- FUN_0040d480 @ 0040d480

/* WARNING: Removing unreachable block (ram,0x0040ea88) */
/* WARNING: Removing unreachable block (ram,0x0040e8ee) */
/* WARNING: Removing unreachable block (ram,0x0040e844) */
/* WARNING: Removing unreachable block (ram,0x0040e79e) */
/* WARNING: Removing unreachable block (ram,0x0040e720) */
/* WARNING: Removing unreachable block (ram,0x0040e62f) */
/* WARNING: Removing unreachable block (ram,0x0040e589) */
/* WARNING: Removing unreachable block (ram,0x0040e50b) */
/* WARNING: Removing unreachable block (ram,0x0040e46d) */
/* WARNING: Removing unreachable block (ram,0x0040e3c4) */
/* WARNING: Removing unreachable block (ram,0x0040e31e) */
/* WARNING: Removing unreachable block (ram,0x0040e2a0) */
/* WARNING: Removing unreachable block (ram,0x0040e2cb) */
/* WARNING: Removing unreachable block (ram,0x0040e349) */
/* WARNING: Removing unreachable block (ram,0x0040e3ef) */
/* WARNING: Removing unreachable block (ram,0x0040e4e0) */
/* WARNING: Removing unreachable block (ram,0x0040e55e) */
/* WARNING: Removing unreachable block (ram,0x0040e604) */
/* WARNING: Removing unreachable block (ram,0x0040e6ad) */
/* WARNING: Removing unreachable block (ram,0x0040e74b) */
/* WARNING: Removing unreachable block (ram,0x0040e7c9) */
/* WARNING: Removing unreachable block (ram,0x0040e86f) */
/* WARNING: Removing unreachable block (ram,0x0040ea38) */
/* WARNING: Removing unreachable block (ram,0x0040ead8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void __cdecl FUN_0040d480(uint param_1)

{
  float fVar1;
  int *****pppppiVar2;
  int *piVar3;
  int ******ppppppiVar4;
  int iVar5;
  undefined4 uVar6;
  undefined2 extraout_var;
  undefined2 uVar9;
  int *******pppppppiVar7;
  int *******pppppppiVar8;
  int *******pppppppiVar10;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 in_FPUStatusWord;
  byte bVar12;
  ushort uVar11;
  float10 fVar13;
  float10 fVar14;
  float10 extraout_ST1;
  float10 extraout_ST1_00;
  int *****local_10c;
  int *****local_108;
  undefined2 local_104 [26];
  undefined4 uStackY_d0;
  int ******ppppppiStackY_cc;
  int ******ppppppiStackY_c8;
  int ******ppppppiStackY_c4;
  undefined1 *puStackY_c0;
  int ******ppppppiStackY_bc;
  int ******ppppppiStackY_b8;
  int ******ppppppiStackY_b4;
  int ******ppppppiStackY_b0;
  int ******ppppppiStackY_ac;
  int ******ppppppiStackY_a8;
  int ******ppppppiStackY_a4;
  int ******local_a0;
  int ******ppppppiStackY_9c;
  int ******local_98;
  int ******ppppppiStackY_94;
  int ******local_90;
  int ******local_8c;
  int ******local_84;
  int ******local_70;
  undefined8 uStack_6c;
  int ******ppppppiStack_64;
  int ******ppppppiStack_60;
  int ******local_5c;
  int ******local_58;
  int ******local_54;
  int ******local_50;
  int ******ppppppiStack_4c;
  int ******local_48;
  int *local_44;
  int ******local_40;
  int ******local_3c;
  int ******local_38;
  int ******ppppppiStack_34;
  void *pvStack_24;
  undefined *puStack_20;
  undefined1 *local_1c;
  undefined *local_18;
  uint local_14;
  undefined4 local_10;
  undefined4 local_8;
  
  bVar12 = (byte)((ushort)in_FPUStatusWord >> 8);
  puStack_20 = &DAT_004020e6;
  pvStack_24 = ExceptionList;
  ExceptionList = &pvStack_24;
  __vbaChkstk();
  local_1c = &stack0xffffffd0;
  local_18 = &DAT_00401308;
  local_14 = param_1 & 1;
  pppppppiVar10 = (int *******)(param_1 & 0xfffffffe);
  local_10 = 0;
  local_38 = (int ******)0x40d4d5;
  ppppppiStack_34 = (int ******)pppppppiVar10;
  (*(code *)(*pppppppiVar10)[1])();
  local_8 = 2;
  local_38 = (int ******)0x1;
  local_3c = (int ******)0x40d4eb;
  __vbaOnError();
  local_8 = 3;
  local_38 = (int ******)0x40d502;
  __vbaStrCopy();
  local_8 = 4;
  if (DAT_00422010 == (int *)0x0) {
    ppppppiStack_34 = (int ******)&DAT_004049b8;
    local_38 = (int ******)0x40d522;
    __vbaNew2();
  }
  ppppppiStack_34 = (int ******)0x40d551;
  ppppppiStack_34 = (int ******)(**(code **)(*DAT_00422010 + 0x390))();
  local_38 = (int ******)&local_90;
  local_3c = (int ******)0x40d55f;
  piVar3 = (int *)__vbaObjSet();
  ppppppiStack_34 = (int ******)DAT_00422028;
  local_3c = (int ******)0x40d57d;
  local_38 = (int ******)piVar3;
  ppppppiVar4 = (int ******)(**(code **)(*piVar3 + 0x54))();
  bVar12 = bVar12 & 0x7f;
  if ((int)ppppppiVar4 < 0) {
    local_3c = (int ******)0x54;
    local_40 = (int ******)&DAT_00406fdc;
    ppppppiStack_4c = (int ******)0x40d5a9;
    local_48 = ppppppiVar4;
    local_44 = piVar3;
    __vbaHresultCheckObj();
  }
  local_3c = (int ******)0x40d5c7;
  __vbaFreeObj();
  local_8 = 5;
  local_3c = (int ******)0x40d5de;
  __vbaStrCopy();
  local_8 = 6;
  local_38 = (int ******)0x40d5f4;
  ppppppiStack_34 = (int ******)pppppppiVar10;
  local_38 = (int ******)(*(code *)(*pppppppiVar10)[0xe3])();
  local_3c = (int ******)&local_90;
  local_40 = (int ******)0x40d602;
  ppppppiVar4 = (int ******)__vbaObjSet();
  local_38 = (int ******)DAT_00422030;
  local_40 = (int ******)0x40d621;
  local_3c = ppppppiVar4;
  iVar5 = (*(code *)(*ppppppiVar4)[0x15])();
  bVar12 = bVar12 & 0x7f;
  if (iVar5 < 0) {
    local_40 = (int ******)0x54;
    local_44 = (int *)&DAT_00406fdc;
    local_50 = (int ******)0x40d64d;
    ppppppiStack_4c = (int ******)iVar5;
    local_48 = ppppppiVar4;
    __vbaHresultCheckObj();
  }
  local_40 = (int ******)0x40d66b;
  __vbaFreeObj();
  local_8 = 7;
  local_44 = (int *)0x40d681;
  local_40 = (int ******)pppppppiVar10;
  local_44 = (int *)(*(code *)(*pppppppiVar10)[0xe1])();
  local_48 = (int ******)&local_90;
  ppppppiStack_4c = (int ******)0x40d68f;
  ppppppiVar4 = (int ******)__vbaObjSet();
  local_44 = (int *)0x0;
  ppppppiStack_4c = (int ******)0x40d6ac;
  local_48 = ppppppiVar4;
  iVar5 = (*(code *)(*ppppppiVar4)[0x23])();
  bVar12 = bVar12 & 0x7f;
  if (iVar5 < 0) {
    ppppppiStack_4c = (int ******)0x8c;
    local_50 = (int ******)&DAT_00407768;
    local_5c = (int ******)0x40d6db;
    local_58 = (int ******)iVar5;
    local_54 = ppppppiVar4;
    __vbaHresultCheckObj();
  }
  ppppppiStack_4c = (int ******)0x40d6f9;
  __vbaFreeObj();
  local_8 = 8;
  local_50 = (int ******)0x40d70f;
  ppppppiStack_4c = (int ******)pppppppiVar10;
  local_50 = (int ******)(*(code *)(*pppppppiVar10)[0xe0])();
  local_54 = (int ******)&local_90;
  local_58 = (int ******)0x40d71d;
  ppppppiVar4 = (int ******)__vbaObjSet();
  local_50 = (int ******)0x0;
  local_58 = (int ******)0x40d73a;
  local_54 = ppppppiVar4;
  iVar5 = (*(code *)(*ppppppiVar4)[0x23])();
  bVar12 = bVar12 & 0x7f;
  if (iVar5 < 0) {
    local_58 = (int ******)0x8c;
    local_5c = (int ******)&DAT_00407768;
    uStack_6c = (double)CONCAT44(0x40d769,(undefined4)uStack_6c);
    ppppppiStack_64 = (int ******)iVar5;
    ppppppiStack_60 = ppppppiVar4;
    __vbaHresultCheckObj();
  }
  local_58 = (int ******)0x40d787;
  __vbaFreeObj();
  local_8 = 9;
  local_5c = (int ******)0x40d79d;
  local_58 = (int ******)pppppppiVar10;
  local_5c = (int ******)(*(code *)(*pppppppiVar10)[0xe2])();
  ppppppiStack_60 = (int ******)&local_90;
  ppppppiStack_64 = (int ******)0x40d7ab;
  piVar3 = (int *)__vbaObjSet();
  local_5c = (int ******)0x0;
  ppppppiStack_64 = (int ******)0x40d7c8;
  ppppppiStack_60 = (int ******)piVar3;
  ppppppiVar4 = (int ******)(**(code **)(*piVar3 + 0x8c))();
  bVar12 = bVar12 & 0x7f;
  if ((int)ppppppiVar4 < 0) {
    ppppppiStack_64 = (int ******)0x8c;
    uStack_6c = (double)CONCAT44(&DAT_00407768,piVar3);
    local_70 = ppppppiVar4;
    __vbaHresultCheckObj();
  }
  ppppppiStack_64 = (int ******)0x40d815;
  __vbaFreeObj();
  local_8 = 10;
  uStack_6c = (double)CONCAT44(0x40d82b,(undefined4)uStack_6c);
  ppppppiStack_64 = (int ******)pppppppiVar10;
  uVar6 = (*(code *)(*pppppppiVar10)[0xc0])();
  uStack_6c = (double)CONCAT44(uVar6,&local_90);
  local_70 = (int ******)0x40d839;
  piVar3 = (int *)__vbaObjSet();
  uStack_6c = (double)ZEXT48(piVar3);
  local_70 = (int ******)0x40d856;
  iVar5 = (**(code **)(*piVar3 + 0x8c))();
  uVar11 = (bVar12 & 0x7f) << 8;
  if (iVar5 < 0) {
    local_70 = (int ******)0x8c;
    __vbaHresultCheckObj();
  }
  local_70 = (int ******)0x40d8a3;
  __vbaFreeObj();
  local_8 = 0xb;
  local_70 = (int ******)0x40d8af;
  FUN_0041cc00();
  local_8 = 0xc;
  local_98 = (int ******)0x80020004;
  local_a0 = (int ******)0xa;
  local_70 = (int ******)&local_a0;
  DAT_00422040 = rtcFreeFile();
  local_70 = (int ******)0x40d8e9;
  __vbaFreeVar();
  local_8 = 0xd;
  uStack_6c._0_4_ = DAT_0042203c;
  local_70 = (int ******)CONCAT22(extraout_var,DAT_00422040);
  __vbaFileOpen();
  local_8 = 0xe;
  uStack_6c = (double)CONCAT44(uStack_6c._4_4_,L"***************************************");
  local_70 = (int ******)CONCAT22(extraout_var_00,DAT_00422040);
  __vbaPrintFile();
  local_8 = 0xf;
  local_5c = (int ******)0x4077d0;
  ppppppiStack_60 = (int ******)CONCAT22(extraout_var_01,DAT_00422040);
  ppppppiStack_64 = (int ******)&DAT_0040701c;
  uStack_6c = (double)CONCAT44(0x40d949,(undefined4)uStack_6c);
  __vbaPrintFile();
  local_8 = 0x10;
  local_50 = (int ******)0x40d962;
  ppppppiStack_4c = (int ******)pppppppiVar10;
  (*(code *)(*pppppppiVar10)[0x205])();
  local_8 = 0x11;
  local_54 = (int ******)0x40d978;
  local_50 = (int ******)pppppppiVar10;
  (*(code *)(*pppppppiVar10)[0x1d4])();
  local_8 = 0x12;
  local_54 = &local_108;
  local_58 = (int ******)(pppppppiVar10 + 0x35);
  ppppppiStack_60 = (int ******)0x40d99f;
  local_5c = (int ******)pppppppiVar10;
  (*(code *)(*pppppppiVar10)[0x1d2])();
  local_40 = (int ******)local_108;
  local_8 = 0x13;
  uVar9 = (undefined2)((uint)pppppppiVar10 >> 0x10);
  if ((uVar11 & 0xd) == 0) {
    if ((uVar11 & 0xd) == 0) {
      local_8 = 0x14;
      if (DAT_00422000 == 0) {
        fVar14 = ((float10)(float)local_108 *
                 (float10)ABS((float)pppppppiVar10[0xd] - (float)pppppppiVar10[0xf])) /
                 ((float10)ABS((float)pppppppiVar10[0xd] - (float)pppppppiVar10[0xf]) -
                 (float10)(float)local_108);
      }
      else {
        ppppppiStack_64 = (int ******)0x40da05;
        ppppppiStack_60 = (int ******)CONCAT22(uVar9,uVar11);
        fVar14 = (float10)adj_fdiv_r();
      }
      local_44 = (int *)(float)fVar14;
      if ((uVar11 & 0xd) == 0) {
        local_8 = 0x15;
        if (((uVar11 & 0xd) == 0) &&
           (fVar1 = ABS(((float)local_44 + (float)pppppppiVar10[0xe]) - (float)pppppppiVar10[0x1a]),
           (uVar11 & 0xd) == 0)) {
          local_8 = 0x16;
          if ((uVar11 & 0xd) == 0) {
            local_58 = (int ******)ABS((float)pppppppiVar10[0x19] - (float)pppppppiVar10[0x1f]);
            if ((uVar11 & 0xd) == 0) {
              local_8 = 0x17;
              if (DAT_00422000 == 0) {
                fVar14 = ((float10)fVar1 * (float10)(float)local_58) /
                         ((float10)fVar1 + (float10)(float)local_58);
              }
              else {
                ppppppiStack_64 = (int ******)0x40da96;
                ppppppiStack_60 = (int ******)CONCAT22(uVar9,uVar11);
                fVar14 = (float10)adj_fdiv_r();
              }
              local_54 = (int ******)(float)fVar14;
              if ((uVar11 & 0xd) == 0) {
                local_8 = 0x18;
                ppppppiStack_60 = &local_108;
                ppppppiStack_64 = (int ******)&local_54;
                uStack_6c._0_4_ = 0x40dac5;
                uStack_6c._4_4_ = pppppppiVar10;
                (*(code *)(*pppppppiVar10)[0x1d6])();
                pppppiVar2 = local_108;
                local_8 = 0x19;
                uStack_6c = (double)CONCAT44(uStack_6c._4_4_,pppppppiVar10 + 0x32);
                local_70 = (int ******)pppppppiVar10;
                (*(code *)(*pppppppiVar10)[0x1cb])();
                local_8 = 0x1b;
                local_84 = (int ******)0x40db27;
                (*(code *)(*pppppppiVar10)[0x202])();
                local_8 = 0x1c;
                local_108 = (int *****)((float)local_108 + (float)pppppppiVar10[0x33]);
                if ((uVar11 & 0xd) == 0) {
                  ppppppiStack_60 = (int ******)(pppppppiVar10 + 0x2c);
                  ppppppiStack_64 = (int ******)(pppppppiVar10 + 0x2b);
                  uStack_6c = (double)CONCAT44(&local_108,pppppppiVar10 + 0x35);
                  local_70 = (int ******)pppppppiVar10;
                  (*(code *)(*pppppppiVar10)[0x1cf])();
                  local_8 = 0x1d;
                  (*(code *)(*pppppppiVar10)[0x206])();
                  local_8 = 0x1e;
                  local_84 = (int ******)0x40dbbd;
                  (*(code *)(*pppppppiVar10)[0x207])();
                  local_8 = 0x1f;
                  local_84 = (int ******)pppppppiVar10;
                  (*(code *)(*pppppppiVar10)[0x1c0])();
                  local_8 = 0x20;
                  local_8c = (int ******)0x40dbe9;
                  (*(code *)(*pppppppiVar10)[0x1c6])();
                  local_8 = 0x21;
                  local_90 = (int ******)0x40dbff;
                  local_8c = (int ******)pppppppiVar10;
                  (*(code *)(*pppppppiVar10)[0x1c5])();
                  local_8 = 0x22;
                  ppppppiStackY_94 = (int ******)0x40dc15;
                  local_90 = (int ******)pppppppiVar10;
                  (*(code *)(*pppppppiVar10)[0x1c8])();
                  local_8 = 0x23;
                  ppppppiStackY_94 = (int ******)(pppppppiVar10 + 0x2b);
                  ppppppiStackY_9c = (int ******)0x40dc35;
                  local_98 = (int ******)pppppppiVar10;
                  (*(code *)(*pppppppiVar10)[0x1ef])();
                  local_8 = 0x24;
                  ppppppiStackY_9c = (int ******)(pppppppiVar10 + 0x2c);
                  ppppppiStackY_a4 = (int ******)0x40dc55;
                  local_a0 = (int ******)pppppppiVar10;
                  (*(code *)(*pppppppiVar10)[0x1f0])();
                  local_8 = 0x25;
                  ppppppiStackY_a4 = (int ******)(pppppppiVar10 + 0x2d);
                  ppppppiStackY_ac = (int ******)0x40dc74;
                  ppppppiStackY_a8 = (int ******)pppppppiVar10;
                  (*(code *)(*pppppppiVar10)[0x1f1])();
                  local_8 = 0x26;
                  ppppppiStackY_ac = (int ******)(pppppppiVar10 + 0x2d);
                  ppppppiStackY_b0 = (int ******)(pppppppiVar10 + 0x2c);
                  ppppppiStackY_b4 = (int ******)(pppppppiVar10 + 0x2b);
                  ppppppiStackY_bc = (int ******)0x40dca7;
                  ppppppiStackY_b8 = (int ******)pppppppiVar10;
                  (*(code *)(*pppppppiVar10)[0x201])();
                  local_38 = pppppppiVar10[0x2c];
                  local_84 = pppppppiVar10[0x35];
                  local_8 = 0x2a;
                  ppppppiStackY_bc = (int ******)(pppppppiVar10 + 0x30);
                  puStackY_c0 = &stack0xffffffd8;
                  ppppppiStackY_c4 = (int ******)&local_84;
                  ppppppiStackY_cc = (int ******)0x40dd08;
                  ppppppiStackY_c8 = (int ******)pppppppiVar10;
                  (*(code *)(*pppppppiVar10)[0x202])();
                  local_8 = 0x2b;
                  uStackY_d0 = 0x40dd1e;
                  ppppppiStackY_cc = (int ******)pppppppiVar10;
                  (*(code *)(*pppppppiVar10)[0x1c4])();
                  local_8 = 0x2c;
                  local_10c = (int *****)((float)pppppiVar2 + (float)pppppppiVar10[0x33]);
                  if (((uVar11 & 0xd) == 0) &&
                     (local_108 = (int *****)-(float)pppppppiVar10[0x35], (uVar11 & 0xd) == 0)) {
                    ppppppiStack_60 = (int ******)(pppppppiVar10 + 0x2c);
                    ppppppiStack_64 = (int ******)(pppppppiVar10 + 0x2b);
                    uStack_6c = (double)CONCAT44(&local_10c,&local_108);
                    local_70 = (int ******)pppppppiVar10;
                    (*(code *)(*pppppppiVar10)[0x1cf])();
                    local_8 = 0x2d;
                    (*(code *)(*pppppppiVar10)[0x207])();
                    local_8 = 0x2e;
                    (*(code *)(*pppppppiVar10)[0x1c0])();
                    local_8 = 0x2f;
                    local_84 = (int ******)0x40ddd3;
                    FUN_004212e0((undefined4 *)&DAT_00422044);
                    local_8 = 0x30;
                    local_84 = (int ******)pppppppiVar10;
                    (*(code *)(*pppppppiVar10)[0x1c6])();
                    local_8 = 0x31;
                    local_8c = (int ******)0x40ddff;
                    (*(code *)(*pppppppiVar10)[0x1c5])();
                    local_8 = 0x32;
                    local_90 = (int ******)0x40de15;
                    local_8c = (int ******)pppppppiVar10;
                    (*(code *)(*pppppppiVar10)[0x1c8])();
                    local_8 = 0x33;
                    local_90 = (int ******)(pppppppiVar10 + 0x2b);
                    local_98 = (int ******)0x40de35;
                    ppppppiStackY_94 = (int ******)pppppppiVar10;
                    (*(code *)(*pppppppiVar10)[0x1ef])();
                    local_8 = 0x34;
                    local_98 = (int ******)(pppppppiVar10 + 0x2c);
                    local_a0 = (int ******)0x40de54;
                    ppppppiStackY_9c = (int ******)pppppppiVar10;
                    (*(code *)(*pppppppiVar10)[0x1f0])();
                    local_8 = 0x35;
                    local_a0 = (int ******)(pppppppiVar10 + 0x2d);
                    ppppppiStackY_a8 = (int ******)0x40de74;
                    ppppppiStackY_a4 = (int ******)pppppppiVar10;
                    (*(code *)(*pppppppiVar10)[0x1f1])();
                    local_8 = 0x36;
                    ppppppiStackY_a8 = (int ******)(pppppppiVar10 + 0x2d);
                    ppppppiStackY_ac = (int ******)(pppppppiVar10 + 0x2c);
                    ppppppiStackY_b0 = (int ******)(pppppppiVar10 + 0x2b);
                    ppppppiStackY_b8 = (int ******)0x40dea7;
                    ppppppiStackY_b4 = (int ******)pppppppiVar10;
                    (*(code *)(*pppppppiVar10)[0x201])();
                    local_8c = pppppppiVar10[0x2b];
                    local_48 = pppppppiVar10[0x2c];
                    local_8 = 0x39;
                    ppppppiStackY_bc = (int ******)0x40dee6;
                    ppppppiStackY_b8 = (int ******)pppppppiVar10;
                    (*(code *)(*pppppppiVar10)[0x1c3])();
                    local_8 = 0x3a;
                    local_108 = (int *****)((float)pppppiVar2 + (float)pppppppiVar10[0x33]);
                    if ((uVar11 & 0xd) == 0) {
                      ppppppiStack_60 = (int ******)(pppppppiVar10 + 0x2c);
                      ppppppiStack_64 = (int ******)(pppppppiVar10 + 0x2b);
                      uStack_6c = (double)CONCAT44(&local_108,pppppppiVar10 + 0x35);
                      local_70 = (int ******)pppppppiVar10;
                      (*(code *)(*pppppppiVar10)[0x1cf])();
                      local_8 = 0x3b;
                      (*(code *)(*pppppppiVar10)[0x206])();
                      local_8 = 0x3c;
                      local_84 = (int ******)0x40df7c;
                      (*(code *)(*pppppppiVar10)[0x207])();
                      local_8 = 0x3d;
                      local_84 = (int ******)pppppppiVar10;
                      (*(code *)(*pppppppiVar10)[0x1c0])();
                      local_8 = 0x3e;
                      local_8c = (int ******)0x40dfa3;
                      FUN_004212e0((undefined4 *)&DAT_00422044);
                      local_8 = 0x3f;
                      local_8c = (int ******)(pppppppiVar10 + 0x31);
                      ppppppiStackY_94 = (int ******)0x40dfc3;
                      local_90 = (int ******)pppppppiVar10;
                      (*(code *)(*pppppppiVar10)[0x1cb])();
                      local_84 = pppppppiVar10[0x35];
                      local_8 = 0x41;
                      ppppppiStackY_94 = (int ******)(pppppppiVar10 + 0x30);
                      local_98 = (int ******)&stack0xffffffd8;
                      ppppppiStackY_9c = (int ******)&local_84;
                      ppppppiStackY_a4 = (int ******)0x40dffe;
                      local_a0 = (int ******)pppppppiVar10;
                      (*(code *)(*pppppppiVar10)[0x202])();
                      local_8 = 0x42;
                      local_108 = (int *****)((float)pppppiVar2 + (float)pppppppiVar10[0x33]);
                      if ((uVar11 & 0xd) == 0) {
                        ppppppiStack_60 = (int ******)(pppppppiVar10 + 0x2c);
                        ppppppiStack_64 = (int ******)(pppppppiVar10 + 0x2b);
                        uStack_6c = (double)CONCAT44(&local_108,pppppppiVar10 + 0x35);
                        local_70 = (int ******)pppppppiVar10;
                        (*(code *)(*pppppppiVar10)[0x1cf])();
                        local_8 = 0x43;
                        (*(code *)(*pppppppiVar10)[0x206])();
                        local_8 = 0x44;
                        local_84 = (int ******)0x40e093;
                        (*(code *)(*pppppppiVar10)[0x207])();
                        local_8 = 0x45;
                        local_84 = (int ******)pppppppiVar10;
                        (*(code *)(*pppppppiVar10)[0x1c0])();
                        local_8 = 0x46;
                        local_8c = (int ******)0x40e0ba;
                        FUN_004212e0((undefined4 *)&DAT_00422044);
                        local_8 = 0x47;
                        local_90 = (int ******)0x40e0d0;
                        local_8c = (int ******)pppppppiVar10;
                        (*(code *)(*pppppppiVar10)[0x1c6])();
                        local_8 = 0x48;
                        ppppppiStackY_94 = (int ******)0x40e0e6;
                        local_90 = (int ******)pppppppiVar10;
                        (*(code *)(*pppppppiVar10)[0x1c5])();
                        local_8 = 0x49;
                        local_98 = (int ******)0x40e0fc;
                        ppppppiStackY_94 = (int ******)pppppppiVar10;
                        (*(code *)(*pppppppiVar10)[0x1c8])();
                        local_8 = 0x4a;
                        local_98 = (int ******)(pppppppiVar10 + 0x2b);
                        local_a0 = (int ******)0x40e11c;
                        ppppppiStackY_9c = (int ******)pppppppiVar10;
                        (*(code *)(*pppppppiVar10)[0x1ef])();
                        local_8 = 0x4b;
                        local_a0 = (int ******)(pppppppiVar10 + 0x2c);
                        ppppppiStackY_a8 = (int ******)0x40e13b;
                        ppppppiStackY_a4 = (int ******)pppppppiVar10;
                        (*(code *)(*pppppppiVar10)[0x1f0])();
                        local_8 = 0x4c;
                        ppppppiStackY_a8 = (int ******)(pppppppiVar10 + 0x2d);
                        ppppppiStackY_b0 = (int ******)0x40e15b;
                        ppppppiStackY_ac = (int ******)pppppppiVar10;
                        (*(code *)(*pppppppiVar10)[0x1f1])();
                        local_8 = 0x4d;
                        ppppppiStackY_b0 = (int ******)(pppppppiVar10 + 0x2d);
                        ppppppiStackY_b4 = (int ******)(pppppppiVar10 + 0x2c);
                        ppppppiStackY_b8 = (int ******)(pppppppiVar10 + 0x2b);
                        puStackY_c0 = (undefined1 *)0x40e18e;
                        ppppppiStackY_bc = (int ******)pppppppiVar10;
                        (*(code *)(*pppppppiVar10)[0x201])();
                        ppppppiVar4 = pppppppiVar10[0x2b];
                        local_3c = pppppppiVar10[0x2c];
                        local_8 = 0x50;
                        ppppppiStack_60 = (int ******)0x3fe00000;
                        ppppppiStack_64 = (int ******)0x0;
                        fVar14 = (float10)(float)pppppppiVar10[0x32];
                        if (DAT_00422000 == 0) {
                          fVar13 = (float10)(float)pppppppiVar10[0x32] /
                                   (float10)(double)CONCAT44(DAT_0040124c,DAT_00401248);
                        }
                        else {
                          uStack_6c = (double)CONCAT44(DAT_0040124c,DAT_00401248);
                          local_70 = (int ******)0x40e1f6;
                          fVar13 = (float10)adj_fdiv_m64();
                          fVar14 = extraout_ST1;
                        }
                        if ((uVar11 & 0xd) == 0) {
                          uStack_6c = (double)((fVar13 + (float10)_DAT_00401240) * fVar14);
                          local_70 = (int ******)0x40e214;
                          fVar14 = (float10)__vbaPowerR8();
                          pppppppiVar7 = (int *******)(float)fVar14;
                          local_8 = 0x51;
                          ppppppiStack_60 = (int ******)0x3fe00000;
                          ppppppiStack_64 = (int ******)0x0;
                          fVar14 = (float10)(float)pppppppiVar10[0x31];
                          if (DAT_00422000 == 0) {
                            fVar13 = (float10)(float)pppppppiVar10[0x31] /
                                     (float10)(double)CONCAT44(DAT_0040124c,DAT_00401248);
                          }
                          else {
                            uStack_6c = (double)CONCAT44(DAT_0040124c,DAT_00401248);
                            local_70 = (int ******)0x40e259;
                            fVar13 = (float10)adj_fdiv_m64();
                            fVar14 = extraout_ST1_00;
                          }
                          if ((uVar11 & 0xd) == 0) {
                            uStack_6c = (double)((fVar13 + (float10)_DAT_00401240) * fVar14);
                            local_70 = (int ******)0x40e277;
                            fVar14 = (float10)__vbaPowerR8();
                            pppppppiVar8 = (int *******)(float)fVar14;
                            pppppppiVar10[0x74][4][5] = (int ****)pppppiVar2;
                            local_8 = 0x53;
                            if (DAT_00422000 == 0) {
                              fVar14 = -(float10)(float)pppppppiVar10[0x21] /
                                       (float10)(float)pppppppiVar7;
                            }
                            else {
                              ppppppiStack_64 = (int ******)0x40e376;
                              ppppppiStack_60 = (int ******)pppppppiVar7;
                              fVar14 = (float10)adj_fdiv_m32();
                            }
                            pppppppiVar10[0x74][4][9] = (int ****)(float)fVar14;
                            if ((uVar11 & 0xd) == 0) {
                              local_8 = 0x54;
                              if (DAT_00422000 == 0) {
                                fVar14 = (-(float10)(float)pppppppiVar10[0x20] *
                                         (float10)(float)(pppppppiVar10 + 0x2c)) /
                                         (float10)(float)pppppppiVar7;
                              }
                              else {
                                ppppppiStack_64 = (int ******)0x40e41f;
                                ppppppiStack_60 = (int ******)pppppppiVar7;
                                fVar14 = (float10)adj_fdiv_m32();
                              }
                              pppppppiVar10[0x74][4][0xd] = (int ****)(float)fVar14;
                              if ((uVar11 & 0xd) == 0) {
                                local_8 = 0x55;
                                if (DAT_00422000 == 0) {
                                  fVar14 = ((float10)(float)local_38 *
                                           (float10)(float)pppppppiVar10[0x21]) /
                                           (float10)(float)pppppppiVar7;
                                }
                                else {
                                  ppppppiStack_64 = (int ******)0x40e49b;
                                  ppppppiStack_60 = (int ******)pppppppiVar7;
                                  fVar14 = (float10)adj_fdiv_m32();
                                }
                                pppppppiVar10[0x74][0xd][1] = (int ****)(float)fVar14;
                                if ((uVar11 & 0xd) == 0) {
                                  pppppppiVar10[0x74][4][6] = (int ****)pppppiVar2;
                                  local_8 = 0x57;
                                  if (DAT_00422000 == 0) {
                                    fVar14 = -(float10)(float)pppppppiVar10[0x21] /
                                             (float10)(float)pppppppiVar8;
                                  }
                                  else {
                                    ppppppiStack_64 = (int ******)0x40e5b6;
                                    ppppppiStack_60 = (int ******)pppppppiVar8;
                                    fVar14 = (float10)adj_fdiv_m32();
                                  }
                                  pppppppiVar10[0x74][4][10] = (int ****)(float)fVar14;
                                  if ((uVar11 & 0xd) == 0) {
                                    local_8 = 0x58;
                                    if (DAT_00422000 == 0) {
                                      fVar14 = (-(float10)(float)pppppppiVar10[0x20] *
                                               (float10)(float)ppppppiVar4) /
                                               (float10)(float)pppppppiVar8;
                                    }
                                    else {
                                      ppppppiStack_64 = (int ******)0x40e65f;
                                      ppppppiStack_60 = (int ******)pppppppiVar8;
                                      fVar14 = (float10)adj_fdiv_m32();
                                    }
                                    pppppppiVar10[0x74][4][0xe] = (int ****)(float)fVar14;
                                    if ((uVar11 & 0xd) == 0) {
                                      local_8 = 0x59;
                                      if (DAT_00422000 == 0) {
                                        fVar14 = ((float10)(float)local_3c *
                                                 (float10)(float)pppppppiVar10[0x21]) /
                                                 (float10)(float)pppppppiVar8;
                                      }
                                      else {
                                        ppppppiStack_64 = (int ******)0x40e6db;
                                        ppppppiStack_60 = (int ******)pppppppiVar8;
                                        fVar14 = (float10)adj_fdiv_m32();
                                      }
                                      pppppppiVar10[0x74][0xd][2] = (int ****)(float)fVar14;
                                      if ((uVar11 & 0xd) == 0) {
                                        pppppppiVar10[0x74][4][7] = (int ****)pppppiVar2;
                                        local_8 = 0x5b;
                                        if (DAT_00422000 == 0) {
                                          fVar14 = -(float10)(float)pppppppiVar10[0x21] /
                                                   (float10)(float)pppppppiVar7;
                                        }
                                        else {
                                          ppppppiStack_64 = (int ******)0x40e7f6;
                                          ppppppiStack_60 = (int ******)pppppppiVar7;
                                          fVar14 = (float10)adj_fdiv_m32();
                                        }
                                        pppppppiVar10[0x74][4][0xb] = (int ****)(float)fVar14;
                                        if ((uVar11 & 0xd) == 0) {
                                          local_8 = 0x5c;
                                          if (DAT_00422000 == 0) {
                                            fVar14 = ((float10)(float)local_8c *
                                                     (float10)(float)pppppppiVar10[0x20]) /
                                                     (float10)(float)pppppppiVar7;
                                          }
                                          else {
                                            ppppppiStack_64 = (int ******)0x40e8a0;
                                            ppppppiStack_60 = (int ******)pppppppiVar7;
                                            fVar14 = (float10)adj_fdiv_m32();
                                          }
                                          pppppppiVar10[0x74][4][0xf] = (int ****)(float)fVar14;
                                          if ((uVar11 & 0xd) == 0) {
                                            local_8 = 0x5d;
                                            if (DAT_00422000 == 0) {
                                              fVar14 = ((float10)(float)local_48 *
                                                       (float10)(float)pppppppiVar10[0x21]) /
                                                       (float10)(float)pppppppiVar7;
                                            }
                                            else {
                                              ppppppiStack_64 = (int ******)0x40e91c;
                                              ppppppiStack_60 = (int ******)pppppppiVar7;
                                              fVar14 = (float10)adj_fdiv_m32();
                                            }
                                            pppppppiVar10[0x74][0xd][3] = (int ****)(float)fVar14;
                                            if ((uVar11 & 0xd) == 0) {
                                              local_50 = (int ******)CONCAT22(local_50._2_2_,3);
                                              local_8 = 0x60;
                                              local_10c = (int *****)(pppppppiVar10[0x74] + 0x11);
                                              local_108 = (int *****)(pppppppiVar10[0x74] + 1);
                                              ppppppiStack_60 = (int ******)((int)&uStack_6c + 4);
                                              ppppppiStack_64 = &local_10c;
                                              uStack_6c = (double)CONCAT44(&local_70,&local_50);
                                              local_70 = &local_108;
                                              (*(code *)(*pppppppiVar10)[0x1ff])();
                                              local_8 = 0x61;
                                              local_10c = (int *****)(pppppppiVar10[0x74] + 0x11);
                                              local_108 = (int *****)(pppppppiVar10[0x74] + 1);
                                              local_84 = (int ******)&local_50;
                                              local_90 = (int ******)0x40ea12;
                                              local_8c = (int ******)pppppppiVar10;
                                              (*(code *)(*pppppppiVar10)[0x1fe])();
                                              pppppppiVar10[0x26] =
                                                   (int ******)pppppppiVar10[0x74][0xd][1];
                                              pppppppiVar10[0x27] =
                                                   (int ******)pppppppiVar10[0x74][0xd][2];
                                              local_8 = 100;
                                              if (DAT_00422000 == 0) {
                                                fVar14 = (float10)(float)pppppppiVar10[0x74][0xd][3]
                                                         / (float10)(float)pppppppiVar10[0x26];
                                              }
                                              else {
                                                ppppppiStack_60 = pppppppiVar10[0x26];
                                                ppppppiStack_64 = (int ******)0x40eb18;
                                                fVar14 = (float10)adj_fdiv_m32();
                                              }
                                              pppppppiVar10[0x28] = (int ******)(float)fVar14;
                                              if ((uVar11 & 0xd) == 0) {
                                                pppppppiVar10[0x25] = pppppppiVar10[0x28];
                                                local_8 = 0x66;
                                                ppppppiStack_64 = (int ******)0x40eb5a;
                                                ppppppiStack_60 = (int ******)pppppppiVar10;
                                                (*(code *)(*pppppppiVar10)[0x200])();
                                                local_8 = 0x67;
                                                uStack_6c = (double)CONCAT44(0x40eb70,(undefined4)
                                                                                      uStack_6c);
                                                ppppppiStack_64 = (int ******)pppppppiVar10;
                                                (*(code *)(*pppppppiVar10)[0x1d5])();
                                                local_8 = 0x68;
                                                local_104[0] = 2;
                                                uStack_6c = (double)(CONCAT44(local_104,param_1) &
                                                                    0xfffffffffffffffe);
                                                local_70 = (int ******)0x40eb96;
                                                (*(code *)(*pppppppiVar10)[0x20d])();
                                                local_8 = 0x69;
                                                local_70 = (int ******)0x40ebad;
                                                __vbaStrCopy();
                                                local_8 = 0x6a;
                                                if (DAT_00422010 == (int *)0x0) {
                                                  uStack_6c = 2.016500347483544e-307;
                                                  local_70 = (int ******)0x40ebcd;
                                                  __vbaNew2();
                                                }
                                                uStack_6c._4_4_ = (int *******)DAT_00422010;
                                                uStack_6c._0_4_ = 0x40ebfc;
                                                uStack_6c._0_4_ =
                                                     (**(code **)(*DAT_00422010 + 0x390))();
                                                local_70 = (int ******)&local_90;
                                                local_70 = (int ******)__vbaObjSet();
                                                uStack_6c = (double)CONCAT44(uStack_6c._4_4_,
                                                                             DAT_00422028);
                                                iVar5 = (*(code *)(*local_70)[0x15])();
                                                if (iVar5 < 0) {
                                                  local_84 = (int ******)0x40ec55;
                                                  __vbaHresultCheckObj();
                                                }
                                                __vbaFreeObj();
                                                local_8 = 0x6b;
                                                __vbaStrCopy();
                                                local_8 = 0x6c;
                                                uStack_6c = (double)(CONCAT44(uStack_6c._4_4_,
                                                                              param_1) &
                                                                    0xfffffffffffffffe);
                                                local_70 = (int ******)0x40eca0;
                                                local_70 = (int ******)
                                                           (*(code *)(*pppppppiVar10)[0xe3])();
                                                piVar3 = (int *)__vbaObjSet();
                                                local_70 = (int ******)DAT_00422030;
                                                pppppppiVar7 = (int *******)
                                                               (**(code **)(*piVar3 + 0x54))();
                                                if ((int)pppppppiVar7 < 0) {
                                                  local_84 = (int ******)pppppppiVar7;
                                                  __vbaHresultCheckObj();
                                                }
                                                __vbaFreeObj();
                                                local_8 = 0x6d;
                                                (*(code *)(*pppppppiVar10)[0xe1])();
                                                local_84 = (int ******)0x40ed3b;
                                                pppppppiVar7 = (int *******)__vbaObjSet();
                                                local_84 = (int ******)0x40ed58;
                                                pppppppiVar8 = (int *******)
                                                               (*(code *)(*pppppppiVar7)[0x23])();
                                                if ((int)pppppppiVar8 < 0) {
                                                  local_84 = (int ******)0x8c;
                                                  ppppppiStackY_94 = (int ******)0x40ed87;
                                                  local_90 = (int ******)pppppppiVar8;
                                                  local_8c = (int ******)pppppppiVar7;
                                                  __vbaHresultCheckObj();
                                                }
                                                local_84 = (int ******)0x40eda5;
                                                __vbaFreeObj();
                                                local_8 = 0x6e;
                                                local_84 = (int ******)pppppppiVar10;
                                                (*(code *)(*pppppppiVar10)[0xe0])();
                                                local_8c = (int ******)&local_90;
                                                local_90 = (int ******)0x40edc9;
                                                pppppppiVar7 = (int *******)__vbaObjSet();
                                                local_90 = (int ******)0x40ede6;
                                                local_8c = (int ******)pppppppiVar7;
                                                pppppppiVar8 = (int *******)
                                                               (*(code *)(*pppppppiVar7)[0x23])();
                                                if ((int)pppppppiVar8 < 0) {
                                                  local_90 = (int ******)0x8c;
                                                  ppppppiStackY_94 = (int ******)&DAT_00407768;
                                                  local_a0 = (int ******)0x40ee15;
                                                  ppppppiStackY_9c = (int ******)pppppppiVar8;
                                                  local_98 = (int ******)pppppppiVar7;
                                                  __vbaHresultCheckObj();
                                                }
                                                local_90 = (int ******)0x40ee33;
                                                __vbaFreeObj();
                                                local_8 = 0x6f;
                                                ppppppiStackY_94 = (int ******)0x40ee49;
                                                local_90 = (int ******)pppppppiVar10;
                                                ppppppiStackY_94 =
                                                     (int ******)(*(code *)(*pppppppiVar10)[0xe2])()
                                                ;
                                                local_98 = (int ******)&local_90;
                                                ppppppiStackY_9c = (int ******)0x40ee57;
                                                pppppppiVar7 = (int *******)__vbaObjSet();
                                                ppppppiStackY_94 = (int ******)0xffffffff;
                                                ppppppiStackY_9c = (int ******)0x40ee74;
                                                local_98 = (int ******)pppppppiVar7;
                                                pppppppiVar8 = (int *******)
                                                               (*(code *)(*pppppppiVar7)[0x23])();
                                                if ((int)pppppppiVar8 < 0) {
                                                  ppppppiStackY_9c = (int ******)0x8c;
                                                  local_a0 = (int ******)&DAT_00407768;
                                                  ppppppiStackY_ac = (int ******)0x40eea3;
                                                  ppppppiStackY_a8 = (int ******)pppppppiVar8;
                                                  ppppppiStackY_a4 = (int ******)pppppppiVar7;
                                                  __vbaHresultCheckObj();
                                                }
                                                ppppppiStackY_9c = (int ******)0x40eec1;
                                                __vbaFreeObj();
                                                local_8 = 0x70;
                                                local_a0 = (int ******)0x40eed7;
                                                ppppppiStackY_9c = (int ******)pppppppiVar10;
                                                local_a0 = (int ******)
                                                           (*(code *)(*pppppppiVar10)[0xc0])();
                                                ppppppiStackY_a4 = (int ******)&local_90;
                                                ppppppiStackY_a8 = (int ******)0x40eee5;
                                                pppppppiVar10 = (int *******)__vbaObjSet();
                                                local_a0 = (int ******)0xffffffff;
                                                ppppppiStackY_a8 = (int ******)0x40ef02;
                                                ppppppiStackY_a4 = (int ******)pppppppiVar10;
                                                pppppppiVar7 = (int *******)
                                                               (*(code *)(*pppppppiVar10)[0x23])();
                                                if ((int)pppppppiVar7 < 0) {
                                                  ppppppiStackY_a8 = (int ******)0x8c;
                                                  ppppppiStackY_ac = (int ******)&DAT_00407768;
                                                  ppppppiStackY_b8 = (int ******)0x40ef31;
                                                  ppppppiStackY_b4 = (int ******)pppppppiVar7;
                                                  ppppppiStackY_b0 = (int ******)pppppppiVar10;
                                                  __vbaHresultCheckObj();
                                                }
                                                ppppppiStackY_a8 = (int ******)0x40ef4f;
                                                __vbaFreeObj();
                                                local_8 = 0x71;
                                                ppppppiStackY_a8 =
                                                     (int ******)
                                                     CONCAT22(extraout_var_02,DAT_00422040);
                                                ppppppiStackY_ac = (int ******)0x40ef64;
                                                __vbaFileClose();
                                                local_8 = 0x72;
                                                ppppppiStackY_a8 = (int ******)0x40ef70;
                                                FUN_0041d160();
                                                ppppppiStackY_a8 = (int ******)0x40f063;
                                                __vbaExitProc();
                                                ppppppiStackY_a8 = (int ******)&LAB_0040f0a2;
                                                ppppppiStackY_ac = (int ******)0x40f0a1;
                                                __vbaFreeStr();
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


// ---- FUN_0040f0d0 @ 0040f0d0

void __cdecl FUN_0040f0d0(uint param_1,short *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_1c;
  void *pvStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined1 *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004020e6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc8;
  local_c = &LAB_00401518;
  local_8 = param_1 & 1;
  piVar3 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar3 + 4))(piVar3);
  local_1c = 0;
  if (*param_2 == 1) {
    uVar1 = (**(code **)(*piVar3 + 0x38c))(piVar3);
    piVar3 = (int *)__vbaObjSet(&local_1c,uVar1);
    iVar2 = (**(code **)(*piVar3 + 0x54))
                      (piVar3,L"(Calculates C2 Cal and Rem and Xtalk21. Sets Xtalk12 = Xtalk21.)");
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar3,&DAT_00406fdc,0x54);
    }
    __vbaFreeObj();
  }
  return;
}


// ---- FUN_0040f1a0 @ 0040f1a0

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void __cdecl FUN_0040f1a0(uint param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined2 extraout_var;
  wchar_t *pwVar4;
  undefined2 extraout_var_00;
  int *piVar5;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  int *local_a4;
  undefined *puStack_a0;
  int *piStack_9c;
  int *piStack_98;
  undefined *puStack_94;
  int *piStack_90;
  int *piStack_8c;
  undefined *puStack_88;
  int *piStack_84;
  int *piStack_80;
  undefined *puStack_7c;
  int *piStack_78;
  int *piStack_74;
  int **ppiStack_70;
  int **ppiStack_6c;
  int **ppiStack_68;
  int *piStack_64;
  wchar_t *pwStack_60;
  wchar_t *pwStack_5c;
  wchar_t *pwStack_58;
  int **ppiStack_54;
  int *piStack_50;
  int *piStack_4c;
  int *piStack_48;
  int *piStack_44;
  int *local_40;
  int *piStack_3c;
  int *local_38;
  int *piStack_34;
  void *pvStack_24;
  undefined *puStack_20;
  undefined1 *local_1c;
  undefined1 *local_18;
  uint local_14;
  undefined4 local_10;
  undefined4 local_8;
  
  puStack_20 = &DAT_004020e6;
  pvStack_24 = ExceptionList;
  ExceptionList = &pvStack_24;
  __vbaChkstk();
  local_1c = &stack0xffffffd0;
  local_18 = &LAB_00401528;
  local_14 = param_1 & 1;
  piVar5 = (int *)(param_1 & 0xfffffffe);
  local_10 = 0;
  local_38 = (int *)0x40f1f5;
  piStack_34 = piVar5;
  (**(code **)(*piVar5 + 4))();
  local_8 = 2;
  local_38 = (int *)0x1;
  piStack_3c = (int *)0x40f20b;
  __vbaOnError();
  local_8 = 3;
  local_38 = (int *)0x40f222;
  __vbaStrCopy();
  local_8 = 4;
  if (DAT_00422010 == (int *)0x0) {
    piStack_34 = (int *)&DAT_004049b8;
    local_38 = (int *)0x40f242;
    __vbaNew2();
  }
  piStack_34 = (int *)0x40f271;
  piStack_34 = (int *)(**(code **)(*DAT_00422010 + 0x390))();
  local_38 = (int *)&stack0xffffffd0;
  piStack_3c = (int *)0x40f27c;
  piVar1 = (int *)__vbaObjSet();
  piStack_34 = (int *)DAT_00422028;
  piStack_3c = (int *)0x40f29a;
  local_38 = piVar1;
  piVar2 = (int *)(**(code **)(*piVar1 + 0x54))();
  if ((int)piVar2 < 0) {
    piStack_3c = (int *)0x54;
    local_40 = (int *)&DAT_00406fdc;
    piStack_4c = (int *)0x40f2c6;
    piStack_48 = piVar2;
    piStack_44 = piVar1;
    __vbaHresultCheckObj();
  }
  piStack_3c = (int *)0x40f2e1;
  __vbaFreeObj();
  local_8 = 5;
  piStack_3c = (int *)0x40f2f8;
  __vbaStrCopy();
  local_8 = 6;
  local_38 = (int *)0x40f30e;
  piStack_34 = piVar5;
  local_38 = (int *)(**(code **)(*piVar5 + 0x38c))();
  piStack_3c = (int *)&stack0xffffffd0;
  local_40 = (int *)0x40f319;
  piVar1 = (int *)__vbaObjSet();
  local_38 = (int *)DAT_00422030;
  local_40 = (int *)0x40f338;
  piStack_3c = piVar1;
  iVar3 = (**(code **)(*piVar1 + 0x54))();
  if (iVar3 < 0) {
    local_40 = (int *)0x54;
    piStack_44 = (int *)&DAT_00406fdc;
    piStack_50 = (int *)0x40f364;
    piStack_4c = (int *)iVar3;
    piStack_48 = piVar1;
    __vbaHresultCheckObj();
  }
  local_40 = (int *)0x40f37f;
  __vbaFreeObj();
  local_8 = 7;
  piStack_44 = (int *)0x40f395;
  local_40 = piVar5;
  piStack_44 = (int *)(**(code **)(*piVar5 + 900))();
  piStack_48 = (int *)&stack0xffffffd0;
  piStack_4c = (int *)0x40f3a0;
  piVar1 = (int *)__vbaObjSet();
  piStack_44 = (int *)0x0;
  piStack_4c = (int *)0x40f3bd;
  piStack_48 = piVar1;
  iVar3 = (**(code **)(*piVar1 + 0x8c))();
  if (iVar3 < 0) {
    piStack_4c = (int *)0x8c;
    piStack_50 = (int *)&DAT_00407768;
    pwStack_5c = L"薉Ｔ\xffff૫藇Ｔ\xffff";
    pwStack_58 = (wchar_t *)iVar3;
    ppiStack_54 = (int **)piVar1;
    __vbaHresultCheckObj();
  }
  piStack_4c = (int *)0x40f407;
  __vbaFreeObj();
  local_8 = 8;
  piStack_50 = (int *)0x40f41d;
  piStack_4c = piVar5;
  piStack_50 = (int *)(**(code **)(*piVar5 + 0x380))();
  ppiStack_54 = (int **)&stack0xffffffd0;
  pwStack_58 = L"薉｜\xffffj開｜\xffffʋ趋｜\xffffｑ貐";
  piVar1 = (int *)__vbaObjSet();
  piStack_50 = (int *)0x0;
  pwStack_58 = L"\xe2db薉ｘ\xffff붃ｘ\xffff紀栦\x8c";
  ppiStack_54 = (int **)piVar1;
  iVar3 = (**(code **)(*piVar1 + 0x8c))();
  if (iVar3 < 0) {
    pwStack_58 = (wchar_t *)0x8c;
    pwStack_5c = L"仱㎭暙ᇏಷꨀ怀鏓N";
    ppiStack_68 = (int **)0x40f474;
    piStack_64 = (int *)iVar3;
    pwStack_60 = (wchar_t *)piVar1;
    __vbaHresultCheckObj();
  }
  pwStack_58 = L"䗇ৼ";
  __vbaFreeObj();
  local_8 = 9;
  pwStack_5c = L"赐푍ｑ倕䀐褀岅\xffff櫿謀岕\xffff诿謂岍\xffff凿郿\x8c";
  pwStack_58 = (wchar_t *)piVar5;
  pwStack_5c = (wchar_t *)(**(code **)(*piVar5 + 0x300))();
  pwStack_60 = (wchar_t *)&stack0xffffffd0;
  piStack_64 = (int *)0x40f4b0;
  piVar1 = (int *)__vbaObjSet();
  pwStack_5c = (wchar_t *)0x0;
  piStack_64 = (int *)0x40f4cd;
  pwStack_60 = (wchar_t *)piVar1;
  iVar3 = (**(code **)(*piVar1 + 0x8c))();
  if (iVar3 < 0) {
    piStack_64 = (int *)0x8c;
    ppiStack_68 = (int **)&DAT_00407768;
    piStack_74 = (int *)0x40f4fc;
    ppiStack_70 = (int **)iVar3;
    ppiStack_6c = (int **)piVar1;
    __vbaHresultCheckObj();
  }
  piStack_64 = (int *)0x40f517;
  __vbaFreeObj();
  local_8 = 10;
  ppiStack_68 = (int **)0x40f52d;
  piStack_64 = piVar5;
  ppiStack_68 = (int **)(**(code **)(*piVar5 + 0x388))();
  ppiStack_6c = (int **)&stack0xffffffd0;
  ppiStack_70 = (int **)0x40f538;
  piVar1 = (int *)__vbaObjSet();
  ppiStack_68 = (int **)0x0;
  ppiStack_70 = (int **)0x40f555;
  ppiStack_6c = (int **)piVar1;
  iVar3 = (**(code **)(*piVar1 + 0x8c))();
  if (iVar3 < 0) {
    ppiStack_70 = (int **)0x8c;
    piStack_74 = (int *)&DAT_00407768;
    piStack_80 = (int *)0x40f584;
    puStack_7c = (undefined *)iVar3;
    piStack_78 = piVar1;
    __vbaHresultCheckObj();
  }
  ppiStack_70 = (int **)0x40f59f;
  __vbaFreeObj();
  local_8 = 0xb;
  local_38 = (int *)0x80020004;
  local_40 = (int *)0xa;
  ppiStack_70 = &local_40;
  piStack_74 = (int *)0x40f5be;
  DAT_00422040 = rtcFreeFile();
  ppiStack_70 = (int **)0x40f5cd;
  __vbaFreeVar();
  local_8 = 0xc;
  ppiStack_6c = (int **)DAT_0042203c;
  ppiStack_70 = (int **)CONCAT22(extraout_var,DAT_00422040);
  piStack_74 = (int *)0xffffffff;
  piStack_78 = (int *)0x8;
  puStack_7c = (undefined *)0x40f5ec;
  __vbaFileOpen();
  local_8 = 0xd;
  ppiStack_6c = (int **)0x40777c;
  ppiStack_70 = (int **)CONCAT22(extraout_var_01,DAT_00422040);
  piStack_74 = (int *)&DAT_0040701c;
  piStack_78 = (int *)0x40f60b;
  __vbaPrintFile();
  local_8 = 0xe;
  pwStack_5c = L"CALIBRATE C1";
  pwStack_60 = (wchar_t *)CONCAT22(extraout_var_02,DAT_00422040);
  piStack_64 = (int *)&DAT_0040701c;
  ppiStack_68 = (int **)0x40f62d;
  __vbaPrintFile();
  piVar5[0x23] = piVar5[0x26];
  piVar5[0x24] = piVar5[0x27];
  local_8 = 0x11;
  piStack_50 = (int *)0x40f678;
  piStack_4c = piVar5;
  (**(code **)(*piVar5 + 0x800))();
  local_8 = 0x12;
  ppiStack_54 = (int **)0x40f68e;
  piStack_50 = piVar5;
  (**(code **)(*piVar5 + 0x738))();
  local_8 = 0x13;
  ppiStack_54 = (int **)DAT_00422028;
  pwStack_58 = L": WAITING MANUAL ADJUSTMENT";
  pwStack_5c = L"킋⢹䈠＀堕䀑윀ﱅ\x14";
  __vbaStrCat();
  ppiStack_54 = (int **)0x40f6b3;
  __vbaStrMove();
  local_8 = 0x14;
  if (DAT_00422010 == (int *)0x0) {
    ppiStack_54 = &DAT_00422010;
    pwStack_58 = L"\x01";
    pwStack_5c = (wchar_t *)0x40f6d3;
    __vbaNew2();
  }
  ppiStack_54 = (int **)DAT_00422010;
  pwStack_58 = 
  L"赐푍ｑ倕䀐褀岅\xffff诿⠕䈠刀薋｜\xffffࢋ開｜\xffffｒ呑\xe2db薉ｘ\xffff붃ｘ\xffff紀樣桔濜@薋｜\xffff譐墍\xffff凿ᗿ၀@薉＠\xffff૫藇＠\xffff"
  ;
  pwStack_58 = (wchar_t *)(**(code **)(*DAT_00422010 + 0x390))();
  pwStack_5c = (wchar_t *)&stack0xffffffd0;
  pwStack_60 = (wchar_t *)0x40f70d;
  piVar1 = (int *)__vbaObjSet();
  pwStack_58 = (wchar_t *)DAT_00422028;
  pwStack_60 = 
  L"\xe2db薉ｘ\xffff붃ｘ\xffff紀樣桔濜@薋｜\xffff譐墍\xffff凿ᗿ၀@薉＠\xffff૫藇＠\xffff"
  ;
  pwStack_5c = (wchar_t *)piVar1;
  pwVar4 = (wchar_t *)(**(code **)(*piVar1 + 0x54))();
  if ((int)pwVar4 < 0) {
    pwStack_60 = (wchar_t *)0x54;
    piStack_64 = (int *)&DAT_00406fdc;
    ppiStack_70 = (int **)0x40f758;
    ppiStack_6c = (int **)pwVar4;
    ppiStack_68 = (int **)piVar1;
    __vbaHresultCheckObj();
  }
  pwStack_60 = L"䗇ᗼ";
  __vbaFreeObj();
  local_8 = 0x15;
  pwStack_60 = L"䗇᛼";
  FUN_0041d220();
  local_8 = 0x16;
  pwStack_60 = L"䗇៼";
  __vbaStrCopy();
  local_8 = 0x17;
  pwStack_5c = (wchar_t *)0x40f7ac;
  pwStack_58 = (wchar_t *)piVar5;
  pwStack_5c = (wchar_t *)(**(code **)(*piVar5 + 0x38c))();
  pwStack_60 = (wchar_t *)&stack0xffffffd0;
  piStack_64 = (int *)0x40f7b7;
  pwVar4 = (wchar_t *)__vbaObjSet();
  pwStack_5c = (wchar_t *)DAT_00422030;
  piStack_64 = (int *)0x40f7d5;
  pwStack_60 = pwVar4;
  iVar3 = (**(code **)(*(int *)pwVar4 + 0x54))();
  if (iVar3 < 0) {
    piStack_64 = (int *)0x54;
    ppiStack_68 = (int **)&DAT_00406fdc;
    piStack_74 = (int *)0x40f801;
    ppiStack_70 = (int **)iVar3;
    ppiStack_6c = (int **)pwVar4;
    __vbaHresultCheckObj();
  }
  piStack_64 = (int *)0x40f81c;
  __vbaFreeObj();
  local_8 = 0x18;
  piStack_64 = (int *)0x40f828;
  FUN_0041f810();
  local_8 = 0x19;
  ppiStack_68 = (int **)0x40f83e;
  piStack_64 = piVar5;
  (**(code **)(*piVar5 + 0x814))();
  local_8 = 0x1a;
  local_a4 = (int *)CONCAT22(local_a4._2_2_,1);
  ppiStack_68 = &local_a4;
  ppiStack_70 = (int **)0x40f864;
  ppiStack_6c = (int **)piVar5;
  (**(code **)(*piVar5 + 0x834))();
  local_8 = 0x1b;
  ppiStack_70 = (int **)0x40f87b;
  __vbaStrCopy();
  local_8 = 0x1c;
  ppiStack_68 = (int **)0x40f892;
  __vbaStrCopy();
  local_8 = 0x1d;
  piStack_64 = (int *)0x40f8a8;
  pwStack_60 = (wchar_t *)piVar5;
  piStack_64 = (int *)(**(code **)(*piVar5 + 0x38c))();
  ppiStack_68 = (int **)&stack0xffffffd0;
  ppiStack_6c = (int **)0x40f8b3;
  piVar1 = (int *)__vbaObjSet();
  piStack_64 = (int *)DAT_00422030;
  ppiStack_6c = (int **)0x40f8d2;
  ppiStack_68 = (int **)piVar1;
  iVar3 = (**(code **)(*piVar1 + 0x54))();
  if (iVar3 < 0) {
    ppiStack_6c = (int **)0x54;
    ppiStack_70 = (int **)&DAT_00406fdc;
    puStack_7c = (undefined *)0x40f8fe;
    piStack_78 = (int *)iVar3;
    piStack_74 = piVar1;
    __vbaHresultCheckObj();
  }
  ppiStack_6c = (int **)0x40f919;
  __vbaFreeObj();
  local_8 = 0x1e;
  if (DAT_00422010 == (int *)0x0) {
    ppiStack_6c = &DAT_00422010;
    ppiStack_70 = (int **)&DAT_004049b8;
    piStack_74 = (int *)0x40f939;
    __vbaNew2();
  }
  ppiStack_6c = (int **)DAT_00422010;
  ppiStack_70 = (int **)0x40f968;
  ppiStack_70 = (int **)(**(code **)(*DAT_00422010 + 0x390))();
  piStack_74 = (int *)&stack0xffffffd0;
  piStack_78 = (int *)0x40f973;
  piVar1 = (int *)__vbaObjSet();
  ppiStack_70 = (int **)DAT_00422028;
  piStack_78 = (int *)0x40f991;
  piStack_74 = piVar1;
  iVar3 = (**(code **)(*piVar1 + 0x54))();
  if (iVar3 < 0) {
    piStack_78 = (int *)0x54;
    puStack_7c = &DAT_00406fdc;
    puStack_88 = (undefined *)0x40f9bd;
    piStack_84 = (int *)iVar3;
    piStack_80 = piVar1;
    __vbaHresultCheckObj();
  }
  piStack_78 = (int *)0x40f9d8;
  __vbaFreeObj();
  local_8 = 0x1f;
  puStack_7c = (undefined *)0x40f9ee;
  piStack_78 = piVar5;
  puStack_7c = (undefined *)(**(code **)(*piVar5 + 900))();
  piStack_80 = (int *)&stack0xffffffd0;
  piStack_84 = (int *)0x40f9f9;
  piVar1 = (int *)__vbaObjSet();
  puStack_7c = (undefined *)0xffffffff;
  piStack_84 = (int *)0x40fa16;
  piStack_80 = piVar1;
  iVar3 = (**(code **)(*piVar1 + 0x8c))();
  if (iVar3 < 0) {
    piStack_84 = (int *)0x8c;
    puStack_88 = &DAT_00407768;
    puStack_94 = (undefined *)0x40fa45;
    piStack_90 = (int *)iVar3;
    piStack_8c = piVar1;
    __vbaHresultCheckObj();
  }
  piStack_84 = (int *)0x40fa60;
  __vbaFreeObj();
  local_8 = 0x20;
  puStack_88 = (undefined *)0x40fa76;
  piStack_84 = piVar5;
  puStack_88 = (undefined *)(**(code **)(*piVar5 + 0x380))();
  piStack_8c = (int *)&stack0xffffffd0;
  piStack_90 = (int *)0x40fa81;
  piVar1 = (int *)__vbaObjSet();
  puStack_88 = (undefined *)0xffffffff;
  piStack_90 = (int *)0x40fa9e;
  piStack_8c = piVar1;
  iVar3 = (**(code **)(*piVar1 + 0x8c))();
  if (iVar3 < 0) {
    piStack_90 = (int *)0x8c;
    puStack_94 = &DAT_00407768;
    puStack_a0 = (undefined *)0x40facd;
    piStack_9c = (int *)iVar3;
    piStack_98 = piVar1;
    __vbaHresultCheckObj();
  }
  piStack_90 = (int *)0x40fae8;
  __vbaFreeObj();
  local_8 = 0x21;
  puStack_94 = (undefined *)0x40fafe;
  piStack_90 = piVar5;
  puStack_94 = (undefined *)(**(code **)(*piVar5 + 0x388))();
  piStack_98 = (int *)&stack0xffffffd0;
  piStack_9c = (int *)0x40fb09;
  piVar1 = (int *)__vbaObjSet();
  puStack_94 = (undefined *)0xffffffff;
  piStack_9c = (int *)0x40fb26;
  piStack_98 = piVar1;
  iVar3 = (**(code **)(*piVar1 + 0x8c))();
  if (iVar3 < 0) {
    piStack_9c = (int *)0x8c;
    puStack_a0 = &DAT_00407768;
    local_a4 = piVar1;
    __vbaHresultCheckObj(iVar3);
  }
  piStack_9c = (int *)0x40fb70;
  __vbaFreeObj();
  local_8 = 0x22;
  puStack_a0 = (undefined *)0x40fb86;
  piStack_9c = piVar5;
  puStack_a0 = (undefined *)(**(code **)(*piVar5 + 0x300))();
  local_a4 = (int *)&stack0xffffffd0;
  local_a4 = (int *)__vbaObjSet();
  puStack_a0 = (undefined *)0xffffffff;
  iVar3 = (**(code **)(*local_a4 + 0x8c))();
  if (iVar3 < 0) {
    __vbaHresultCheckObj(&DAT_00407768,0x8c,&DAT_00407768,0x8c);
  }
  __vbaFreeObj();
  local_8 = 0x23;
  __vbaFileClose(CONCAT22(extraout_var_00,DAT_00422040));
  local_8 = 0x24;
  FUN_0041d160();
  __vbaExitProc();
  __vbaFreeStr(&LAB_0040fd05);
  return;
}


// ---- FUN_0040fd30 @ 0040fd30

void __cdecl FUN_0040fd30(uint param_1,short *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_1c;
  void *pvStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004020e6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc8;
  local_c = &DAT_00401600;
  local_8 = param_1 & 1;
  piVar3 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar3 + 4))(piVar3);
  local_1c = 0;
  if (*param_2 == 1) {
    uVar1 = (**(code **)(*piVar3 + 0x38c))(piVar3);
    piVar3 = (int *)__vbaObjSet(&local_1c,uVar1);
    iVar2 = (**(code **)(*piVar3 + 0x54))(piVar3,L"(Calculates C1 Cal and Rem.)");
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar3,&DAT_00406fdc,0x54);
    }
    __vbaFreeObj();
  }
  return;
}


// ---- FUN_0040fe00 @ 0040fe00

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void __cdecl FUN_0040fe00(uint param_1)

{
  float fVar1;
  int *piVar2;
  wchar_t *********pppppppppwVar3;
  wchar_t ********ppppppppwVar4;
  int iVar5;
  undefined2 extraout_var;
  undefined2 uVar7;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  wchar_t *********pppppppppwVar6;
  wchar_t *********pppppppppwVar8;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  undefined2 in_FPUStatusWord;
  byte bVar10;
  ushort uVar9;
  float10 fVar11;
  wchar_t ********local_10c;
  wchar_t ********ppppppppwStackY_108;
  wchar_t ********ppppppppwStackY_104;
  wchar_t ********ppppppppwStackY_100;
  wchar_t ********ppppppppwStackY_fc;
  wchar_t ********ppppppppwStackY_f8;
  wchar_t ********ppppppppwStackY_f4;
  wchar_t ********ppppppppwStackY_f0;
  wchar_t ********ppppppppwStackY_ec;
  wchar_t ********ppppppppwStackY_e8;
  wchar_t ********ppppppppwStackY_e4;
  wchar_t ********ppppppppwStackY_e0;
  wchar_t ********ppppppppwStackY_dc;
  wchar_t ********ppppppppwStackY_d8;
  wchar_t ********ppppppppwStackY_d4;
  wchar_t ********ppppppppwStackY_d0;
  wchar_t ********ppppppppwStackY_cc;
  wchar_t ********ppppppppwStackY_c8;
  wchar_t ********ppppppppwStackY_c4;
  wchar_t ********ppppppppwStackY_c0;
  wchar_t ********ppppppppwStackY_bc;
  wchar_t ********ppppppppwStackY_b8;
  wchar_t ********ppppppppwStackY_b4;
  wchar_t ********ppppppppwStackY_b0;
  wchar_t ********ppppppppwStackY_ac;
  wchar_t ********local_a8;
  wchar_t ********local_98;
  wchar_t ********local_94;
  wchar_t ********local_90;
  wchar_t ********local_8c;
  wchar_t ********local_88;
  wchar_t ********ppppppppwStack_84;
  wchar_t ********ppppppppwStack_80;
  wchar_t ********ppppppppwStack_7c;
  wchar_t ********ppppppppwStack_78;
  wchar_t ********ppppppppwStack_74;
  wchar_t ********local_70;
  wchar_t ********local_6c;
  wchar_t ********ppppppppwStack_68;
  wchar_t ********local_64;
  wchar_t ********local_60;
  wchar_t ********local_5c;
  wchar_t ********local_58;
  wchar_t ********local_54;
  wchar_t ********local_50;
  wchar_t ********local_4c;
  wchar_t ********local_48;
  wchar_t ********local_44;
  wchar_t ********local_40;
  wchar_t ********local_3c;
  wchar_t ********local_38;
  wchar_t ********local_34;
  void *pvStack_24;
  undefined *puStack_20;
  undefined1 *local_1c;
  undefined *local_18;
  uint local_14;
  undefined4 local_10;
  undefined4 local_8;
  
  bVar10 = (byte)((ushort)in_FPUStatusWord >> 8);
  puStack_20 = &DAT_004020e6;
  pvStack_24 = ExceptionList;
  ExceptionList = &pvStack_24;
  __vbaChkstk();
  local_1c = &stack0xffffffd0;
  local_18 = &DAT_00401610;
  local_14 = param_1 & 1;
  pppppppppwVar8 = (wchar_t *********)(param_1 & 0xfffffffe);
  local_10 = 0;
  local_38 = (wchar_t ********)0x40fe55;
  local_34 = (wchar_t ********)pppppppppwVar8;
  (*(code *)(*pppppppppwVar8)[1])();
  local_8 = 2;
  local_38 = (wchar_t ********)0x1;
  local_3c = (wchar_t ********)0x40fe6b;
  __vbaOnError();
  local_8 = 3;
  local_38 = (wchar_t ********)0x40fe82;
  __vbaStrCopy();
  local_8 = 4;
  if (DAT_00422010 == (int *)0x0) {
    local_34 = (wchar_t ********)&DAT_004049b8;
    local_38 = (wchar_t ********)0x40fea2;
    __vbaNew2();
  }
  local_34 = (wchar_t ********)0x40fed1;
  local_34 = (wchar_t ********)(**(code **)(*DAT_00422010 + 0x390))();
  local_38 = (wchar_t ********)&local_98;
  local_3c = (wchar_t ********)0x40fedf;
  piVar2 = (int *)__vbaObjSet();
  local_34 = (wchar_t ********)DAT_00422028;
  local_3c = (wchar_t ********)0x40fefd;
  local_38 = (wchar_t ********)piVar2;
  pppppppppwVar3 = (wchar_t *********)(**(code **)(*piVar2 + 0x54))();
  bVar10 = bVar10 & 0x7f;
  if ((int)pppppppppwVar3 < 0) {
    local_3c = (wchar_t ********)0x54;
    local_40 = (wchar_t ********)&DAT_00406fdc;
    local_4c = (wchar_t ********)0x40ff29;
    local_48 = (wchar_t ********)pppppppppwVar3;
    local_44 = (wchar_t ********)piVar2;
    __vbaHresultCheckObj();
  }
  local_3c = (wchar_t ********)0x40ff47;
  __vbaFreeObj();
  local_8 = 5;
  local_3c = (wchar_t ********)0x40ff5e;
  __vbaStrCopy();
  local_8 = 6;
  local_38 = (wchar_t ********)0x40ff74;
  local_34 = (wchar_t ********)pppppppppwVar8;
  local_38 = (wchar_t ********)(*(code *)(*pppppppppwVar8)[0xe3])();
  local_3c = (wchar_t ********)&local_98;
  local_40 = (wchar_t ********)0x40ff82;
  pppppppppwVar3 = (wchar_t *********)__vbaObjSet();
  local_38 = (wchar_t ********)DAT_00422030;
  local_40 = (wchar_t ********)0x40ffa1;
  local_3c = (wchar_t ********)pppppppppwVar3;
  ppppppppwVar4 = (wchar_t ********)(*(code *)(*pppppppppwVar3)[0x15])();
  bVar10 = bVar10 & 0x7f;
  if ((int)ppppppppwVar4 < 0) {
    local_40 = (wchar_t ********)0x54;
    local_44 = (wchar_t ********)&DAT_00406fdc;
    local_50 = (wchar_t ********)0x40ffcd;
    local_4c = ppppppppwVar4;
    local_48 = (wchar_t ********)pppppppppwVar3;
    __vbaHresultCheckObj();
  }
  local_40 = (wchar_t ********)0x40ffeb;
  __vbaFreeObj();
  local_8 = 7;
  local_44 = (wchar_t ********)0x410001;
  local_40 = (wchar_t ********)pppppppppwVar8;
  local_44 = (wchar_t ********)(*(code *)(*pppppppppwVar8)[0xe1])();
  local_48 = (wchar_t ********)&local_98;
  local_4c = (wchar_t ********)0x41000f;
  ppppppppwVar4 = (wchar_t ********)__vbaObjSet();
  local_44 = (wchar_t ********)0x0;
  local_4c = (wchar_t ********)0x41002c;
  local_48 = ppppppppwVar4;
  iVar5 = (*(code *)(*ppppppppwVar4)[0x23])();
  bVar10 = bVar10 & 0x7f;
  if (iVar5 < 0) {
    local_4c = (wchar_t ********)0x8c;
    local_50 = (wchar_t ********)&DAT_00407768;
    local_5c = (wchar_t ********)0x41005b;
    local_58 = (wchar_t ********)iVar5;
    local_54 = ppppppppwVar4;
    __vbaHresultCheckObj();
  }
  local_4c = (wchar_t ********)0x410079;
  __vbaFreeObj();
  local_8 = 8;
  local_50 = (wchar_t ********)0x41008f;
  local_4c = (wchar_t ********)pppppppppwVar8;
  local_50 = (wchar_t ********)(*(code *)(*pppppppppwVar8)[0xe0])();
  local_54 = (wchar_t ********)&local_98;
  local_58 = (wchar_t ********)0x41009d;
  ppppppppwVar4 = (wchar_t ********)__vbaObjSet();
  local_50 = (wchar_t ********)0x0;
  local_58 = (wchar_t ********)0x4100ba;
  local_54 = ppppppppwVar4;
  iVar5 = (*(code *)(*ppppppppwVar4)[0x23])();
  bVar10 = bVar10 & 0x7f;
  if (iVar5 < 0) {
    local_58 = (wchar_t ********)0x8c;
    local_5c = (wchar_t ********)&DAT_00407768;
    ppppppppwStack_68 = (wchar_t ********)0x4100e9;
    local_64 = (wchar_t ********)iVar5;
    local_60 = ppppppppwVar4;
    __vbaHresultCheckObj();
  }
  local_58 = (wchar_t ********)0x410107;
  __vbaFreeObj();
  local_8 = 9;
  local_5c = (wchar_t ********)0x41011d;
  local_58 = (wchar_t ********)pppppppppwVar8;
  local_5c = (wchar_t ********)(*(code *)(*pppppppppwVar8)[0xc0])();
  local_60 = (wchar_t ********)&local_98;
  local_64 = (wchar_t ********)0x41012b;
  ppppppppwVar4 = (wchar_t ********)__vbaObjSet();
  local_5c = (wchar_t ********)0x0;
  local_64 = (wchar_t ********)0x410148;
  local_60 = ppppppppwVar4;
  iVar5 = (*(code *)(*ppppppppwVar4)[0x23])();
  bVar10 = bVar10 & 0x7f;
  if (iVar5 < 0) {
    local_64 = (wchar_t ********)0x8c;
    ppppppppwStack_68 = (wchar_t ********)&DAT_00407768;
    ppppppppwStack_74 = (wchar_t ********)0x410177;
    local_70 = (wchar_t ********)iVar5;
    local_6c = ppppppppwVar4;
    __vbaHresultCheckObj();
  }
  local_64 = (wchar_t ********)0x410195;
  __vbaFreeObj();
  local_8 = 10;
  ppppppppwStack_68 = (wchar_t ********)0x4101ab;
  local_64 = (wchar_t ********)pppppppppwVar8;
  ppppppppwStack_68 = (wchar_t ********)(*(code *)(*pppppppppwVar8)[0xe2])();
  local_6c = (wchar_t ********)&local_98;
  local_70 = (wchar_t ********)0x4101b9;
  ppppppppwVar4 = (wchar_t ********)__vbaObjSet();
  ppppppppwStack_68 = (wchar_t ********)0x0;
  local_70 = (wchar_t ********)0x4101d6;
  local_6c = ppppppppwVar4;
  iVar5 = (*(code *)(*ppppppppwVar4)[0x23])();
  uVar9 = (bVar10 & 0x7f) << 8;
  if (iVar5 < 0) {
    local_70 = (wchar_t ********)0x8c;
    ppppppppwStack_74 = (wchar_t ********)&DAT_00407768;
    ppppppppwStack_80 = (wchar_t ********)0x410205;
    ppppppppwStack_7c = (wchar_t ********)iVar5;
    ppppppppwStack_78 = ppppppppwVar4;
    __vbaHresultCheckObj();
  }
  local_70 = (wchar_t ********)0x410223;
  __vbaFreeObj();
  local_8 = 0xb;
  local_70 = (wchar_t ********)0x41022f;
  FUN_0041cc00();
  local_8 = 0xc;
  local_a8 = (wchar_t ********)0xa;
  local_70 = (wchar_t ********)&local_a8;
  ppppppppwStack_74 = (wchar_t ********)0x410257;
  DAT_00422040 = rtcFreeFile();
  local_70 = (wchar_t ********)0x410269;
  __vbaFreeVar();
  local_8 = 0xd;
  local_6c = (wchar_t ********)DAT_0042203c;
  local_70 = (wchar_t ********)CONCAT22(extraout_var,DAT_00422040);
  ppppppppwStack_74 = (wchar_t ********)0xffffffff;
  ppppppppwStack_78 = (wchar_t ********)0x8;
  ppppppppwStack_7c = (wchar_t ********)0x410288;
  __vbaFileOpen();
  local_8 = 0xe;
  local_6c = (wchar_t ********)0x40777c;
  local_70 = (wchar_t ********)CONCAT22(extraout_var_02,DAT_00422040);
  ppppppppwStack_74 = (wchar_t ********)&DAT_0040701c;
  ppppppppwStack_78 = (wchar_t ********)0x4102a7;
  __vbaPrintFile();
  local_8 = 0xf;
  local_5c = (wchar_t ********)0x4079a0;
  local_60 = (wchar_t ********)CONCAT22(extraout_var_03,DAT_00422040);
  local_64 = (wchar_t ********)&DAT_0040701c;
  ppppppppwStack_68 = (wchar_t ********)0x4102c9;
  __vbaPrintFile();
  local_8 = 0x10;
  local_50 = (wchar_t ********)0x4102e2;
  local_4c = (wchar_t ********)pppppppppwVar8;
  (*(code *)(*pppppppppwVar8)[0x205])();
  local_8 = 0x11;
  local_54 = (wchar_t ********)0x4102f8;
  local_50 = (wchar_t ********)pppppppppwVar8;
  (*(code *)(*pppppppppwVar8)[0x1d9])();
  local_8 = 0x12;
  local_54 = (wchar_t ********)&local_10c;
  local_58 = (wchar_t ********)(pppppppppwVar8 + 0x38);
  local_60 = (wchar_t ********)0x41031f;
  local_5c = (wchar_t ********)pppppppppwVar8;
  (*(code *)(*pppppppppwVar8)[0x1d2])();
  local_44 = local_10c;
  local_8 = 0x13;
  uVar7 = (undefined2)((uint)pppppppppwVar8 >> 0x10);
  if ((uVar9 & 0xd) == 0) {
    local_94 = (wchar_t ********)ABS((float)pppppppppwVar8[0xd] - (float)pppppppppwVar8[0xf]);
    if ((uVar9 & 0xd) == 0) {
      local_8 = 0x14;
      if (DAT_00422000 == 0) {
        fVar11 = ((float10)(float)local_10c * (float10)(float)local_94) /
                 ((float10)(float)local_94 - (float10)(float)local_10c);
      }
      else {
        local_64 = (wchar_t ********)0x410385;
        local_60 = (wchar_t ********)CONCAT22(uVar7,uVar9);
        fVar11 = (float10)adj_fdiv_r();
      }
      local_40 = (wchar_t ********)(float)fVar11;
      if ((uVar9 & 0xd) == 0) {
        local_8 = 0x15;
        if (((uVar9 & 0xd) == 0) &&
           (fVar1 = ABS(((float)local_40 + (float)pppppppppwVar8[0xe]) - (float)pppppppppwVar8[0x1a]
                       ), (uVar9 & 0xd) == 0)) {
          local_8 = 0x16;
          local_60 = (wchar_t ********)&local_10c;
          local_64 = (wchar_t ********)(pppppppppwVar8 + 0x36);
          local_6c = (wchar_t ********)0x4103e9;
          ppppppppwStack_68 = (wchar_t ********)pppppppppwVar8;
          (*(code *)(*pppppppppwVar8)[0x1d7])();
          local_54 = local_10c;
          local_8 = 0x17;
          if (DAT_00422000 == 0) {
            fVar11 = ((float10)(float)local_10c * (float10)fVar1) /
                     ((float10)fVar1 - (float10)(float)local_10c);
          }
          else {
            local_60 = local_10c;
            local_64 = (wchar_t ********)0x41041a;
            fVar11 = (float10)adj_fdiv_r();
          }
          local_50 = (wchar_t ********)(float)fVar11;
          if ((uVar9 & 0xd) == 0) {
            local_8 = 0x18;
            local_60 = (wchar_t ********)&local_6c;
            local_64 = (wchar_t ********)&local_4c;
            ppppppppwStack_68 = (wchar_t ********)(pppppppppwVar8 + 0x37);
            local_70 = (wchar_t ********)0x41044f;
            local_6c = (wchar_t ********)pppppppppwVar8;
            (*(code *)(*pppppppppwVar8)[0x1de])();
            local_8 = 0x19;
            if (((uVar9 & 0xd) == 0) &&
               (local_34 = (wchar_t ********)
                           ABS(((float)local_50 + (float)pppppppppwVar8[0x19]) - (float)local_4c),
               (uVar9 & 0xd) == 0)) {
              local_8 = 0x1a;
              if ((uVar9 & 0xd) == 0) {
                local_5c = (wchar_t ********)ABS((float)pppppppppwVar8[0x39] - (float)local_6c);
                if ((uVar9 & 0xd) == 0) {
                  local_8 = 0x1b;
                  if (DAT_00422000 == 0) {
                    fVar11 = ((float10)(float)local_34 * (float10)(float)local_5c) /
                             ((float10)(float)local_34 + (float10)(float)local_5c);
                  }
                  else {
                    local_64 = (wchar_t ********)0x4104cf;
                    local_60 = (wchar_t ********)CONCAT22(extraout_var_00,uVar9);
                    fVar11 = (float10)adj_fdiv_r();
                  }
                  local_60 = (wchar_t ********)(float)fVar11;
                  if ((uVar9 & 0xd) == 0) {
                    local_8 = 0x1c;
                    local_60 = (wchar_t ********)&local_10c;
                    local_64 = (wchar_t ********)&local_60;
                    local_6c = (wchar_t ********)0x4104fe;
                    ppppppppwStack_68 = (wchar_t ********)pppppppppwVar8;
                    (*(code *)(*pppppppppwVar8)[0x1dc])();
                    local_90 = local_10c;
                    pppppppppwVar8[0x2e] = pppppppppwVar8[0x38];
                    pppppppppwVar8[0x2f] = pppppppppwVar8[0x36];
                    pppppppppwVar8[0x30] = local_10c;
                    local_8 = 0x20;
                    local_6c = (wchar_t ********)(pppppppppwVar8 + 0x32);
                    ppppppppwStack_74 = (wchar_t ********)0x410572;
                    local_70 = (wchar_t ********)pppppppppwVar8;
                    (*(code *)(*pppppppppwVar8)[0x1cb])();
                    local_8 = 0x21;
                    ppppppppwStack_74 = (wchar_t ********)(pppppppppwVar8 + 0x30);
                    ppppppppwStack_78 = (wchar_t ********)(pppppppppwVar8 + 0x2f);
                    ppppppppwStack_7c = (wchar_t ********)(pppppppppwVar8 + 0x2e);
                    ppppppppwStack_84 = (wchar_t ********)0x4105a5;
                    ppppppppwStack_80 = (wchar_t ********)pppppppppwVar8;
                    (*(code *)(*pppppppppwVar8)[0x202])();
                    local_8 = 0x22;
                    ppppppppwStack_84 = (wchar_t ********)(pppppppppwVar8 + 0x2c);
                    local_88 = (wchar_t ********)(pppppppppwVar8 + 0x2b);
                    local_8c = (wchar_t ********)(pppppppppwVar8 + 0x2f);
                    local_90 = (wchar_t ********)(pppppppppwVar8 + 0x2e);
                    local_98 = (wchar_t ********)0x4105e1;
                    local_94 = (wchar_t ********)pppppppppwVar8;
                    (*(code *)(*pppppppppwVar8)[0x1cf])();
                    local_8 = 0x23;
                    local_98 = (wchar_t ********)&local_10c;
                    (*(code *)(*pppppppppwVar8)[0x1db])();
                    pppppppppwVar8[0x2d] = local_10c;
                    local_8 = 0x24;
                    ppppppppwStackY_ac = (wchar_t ********)0x410637;
                    local_a8 = (wchar_t ********)pppppppppwVar8;
                    (*(code *)(*pppppppppwVar8)[0x209])();
                    local_8 = 0x25;
                    ppppppppwStackY_ac = (wchar_t ********)(pppppppppwVar8 + 0x2b);
                    ppppppppwStackY_b4 = (wchar_t ********)0x410656;
                    ppppppppwStackY_b0 = (wchar_t ********)pppppppppwVar8;
                    (*(code *)(*pppppppppwVar8)[0x206])();
                    local_8 = 0x26;
                    ppppppppwStackY_b4 = (wchar_t ********)(pppppppppwVar8 + 0x2c);
                    ppppppppwStackY_bc = (wchar_t ********)0x410676;
                    ppppppppwStackY_b8 = (wchar_t ********)pppppppppwVar8;
                    (*(code *)(*pppppppppwVar8)[0x207])();
                    local_8 = 0x27;
                    ppppppppwStackY_bc = (wchar_t ********)(pppppppppwVar8 + 0x2d);
                    ppppppppwStackY_c4 = (wchar_t ********)0x410696;
                    ppppppppwStackY_c0 = (wchar_t ********)pppppppppwVar8;
                    (*(code *)(*pppppppppwVar8)[0x208])();
                    local_8 = 0x28;
                    ppppppppwStackY_c4 = (wchar_t ********)(pppppppppwVar8 + 0x2b);
                    ppppppppwStackY_cc = (wchar_t ********)0x4106b5;
                    ppppppppwStackY_c8 = (wchar_t ********)pppppppppwVar8;
                    (*(code *)(*pppppppppwVar8)[0x1ef])();
                    local_8 = 0x29;
                    ppppppppwStackY_cc = (wchar_t ********)(pppppppppwVar8 + 0x2c);
                    ppppppppwStackY_d4 = (wchar_t ********)0x4106d5;
                    ppppppppwStackY_d0 = (wchar_t ********)pppppppppwVar8;
                    (*(code *)(*pppppppppwVar8)[0x1f0])();
                    local_8 = 0x2a;
                    ppppppppwStackY_d8 = (wchar_t ********)0x4106eb;
                    ppppppppwStackY_d4 = (wchar_t ********)pppppppppwVar8;
                    (*(code *)(*pppppppppwVar8)[0x1bf])();
                    local_8 = 0x2b;
                    ppppppppwStackY_d8 = (wchar_t ********)(pppppppppwVar8 + 0x2d);
                    ppppppppwStackY_e0 = (wchar_t ********)0x41070b;
                    ppppppppwStackY_dc = (wchar_t ********)pppppppppwVar8;
                    (*(code *)(*pppppppppwVar8)[0x1c1])();
                    local_8 = 0x2c;
                    ppppppppwStackY_e0 = (wchar_t ********)(pppppppppwVar8 + 0x2d);
                    ppppppppwStackY_e4 = (wchar_t ********)(pppppppppwVar8 + 0x2c);
                    ppppppppwStackY_e8 = (wchar_t ********)(pppppppppwVar8 + 0x2b);
                    ppppppppwStackY_f0 = (wchar_t ********)0x41073e;
                    ppppppppwStackY_ec = (wchar_t ********)pppppppppwVar8;
                    (*(code *)(*pppppppppwVar8)[0x201])();
                    local_64 = pppppppppwVar8[0x2d];
                    local_8 = 0x2e;
                    ppppppppwStackY_f0 = (wchar_t ********)(pppppppppwVar8 + 0x2c);
                    ppppppppwStackY_f4 = (wchar_t ********)(pppppppppwVar8 + 0x2b);
                    ppppppppwStackY_f8 = (wchar_t ********)(pppppppppwVar8 + 0x2f);
                    ppppppppwStackY_fc = (wchar_t ********)(pppppppppwVar8 + 0x2e);
                    ppppppppwStackY_104 = (wchar_t ********)0x41078e;
                    ppppppppwStackY_100 = (wchar_t ********)pppppppppwVar8;
                    (*(code *)(*pppppppppwVar8)[0x1d0])();
                    local_8 = 0x2f;
                    ppppppppwStackY_104 = (wchar_t ********)&local_10c;
                    ppppppppwStackY_108 = (wchar_t ********)(pppppppppwVar8 + 0x2e);
                    local_10c = (wchar_t ********)pppppppppwVar8;
                    (*(code *)(*pppppppppwVar8)[0x1d2])();
                    local_44 = local_10c;
                    local_8 = 0x30;
                    if ((uVar9 & 0xd) == 0) {
                      local_94 = (wchar_t ********)
                                 ABS((float)pppppppppwVar8[0xd] - (float)pppppppppwVar8[0xf]);
                      if ((uVar9 & 0xd) == 0) {
                        local_8 = 0x31;
                        if (DAT_00422000 == 0) {
                          fVar11 = ((float10)(float)local_10c * (float10)(float)local_94) /
                                   ((float10)(float)local_94 - (float10)(float)local_10c);
                        }
                        else {
                          local_64 = (wchar_t ********)0x41081b;
                          local_60 = (wchar_t ********)CONCAT22(uVar7,uVar9);
                          fVar11 = (float10)adj_fdiv_r();
                        }
                        local_40 = (wchar_t ********)(float)fVar11;
                        if ((uVar9 & 0xd) == 0) {
                          local_8 = 0x32;
                          if (((uVar9 & 0xd) == 0) &&
                             (fVar1 = ABS(((float)local_40 + (float)pppppppppwVar8[0xe]) -
                                          (float)pppppppppwVar8[0x1a]), (uVar9 & 0xd) == 0)) {
                            local_8 = 0x33;
                            local_60 = (wchar_t ********)&local_10c;
                            local_64 = (wchar_t ********)(pppppppppwVar8 + 0x2f);
                            local_6c = (wchar_t ********)0x41087f;
                            ppppppppwStack_68 = (wchar_t ********)pppppppppwVar8;
                            (*(code *)(*pppppppppwVar8)[0x1d7])();
                            local_54 = local_10c;
                            local_8 = 0x34;
                            if (DAT_00422000 == 0) {
                              fVar11 = ((float10)(float)local_10c * (float10)fVar1) /
                                       ((float10)fVar1 - (float10)(float)local_10c);
                            }
                            else {
                              local_60 = local_10c;
                              local_64 = (wchar_t ********)0x4108b0;
                              fVar11 = (float10)adj_fdiv_r();
                            }
                            local_50 = (wchar_t ********)(float)fVar11;
                            if ((uVar9 & 0xd) == 0) {
                              local_8 = 0x35;
                              local_60 = (wchar_t ********)&local_6c;
                              local_64 = (wchar_t ********)&local_4c;
                              ppppppppwStack_68 = (wchar_t ********)(pppppppppwVar8 + 0x37);
                              local_70 = (wchar_t ********)0x4108e5;
                              local_6c = (wchar_t ********)pppppppppwVar8;
                              (*(code *)(*pppppppppwVar8)[0x1de])();
                              local_8 = 0x36;
                              if (((uVar9 & 0xd) == 0) &&
                                 (local_34 = (wchar_t ********)
                                             ABS(((float)local_50 + (float)pppppppppwVar8[0x19]) -
                                                 (float)local_4c), (uVar9 & 0xd) == 0)) {
                                local_8 = 0x37;
                                if ((uVar9 & 0xd) == 0) {
                                  local_5c = (wchar_t ********)
                                             ABS((float)pppppppppwVar8[0x39] - (float)local_6c);
                                  if ((uVar9 & 0xd) == 0) {
                                    local_8 = 0x38;
                                    if (DAT_00422000 == 0) {
                                      fVar11 = ((float10)(float)local_34 * (float10)(float)local_5c)
                                               / ((float10)(float)local_34 +
                                                 (float10)(float)local_5c);
                                    }
                                    else {
                                      local_64 = (wchar_t ********)0x410965;
                                      local_60 = (wchar_t ********)CONCAT22(extraout_var_01,uVar9);
                                      fVar11 = (float10)adj_fdiv_r();
                                    }
                                    local_60 = (wchar_t ********)(float)fVar11;
                                    if ((uVar9 & 0xd) == 0) {
                                      local_8 = 0x39;
                                      local_60 = (wchar_t ********)&local_10c;
                                      local_64 = (wchar_t ********)&local_60;
                                      local_6c = (wchar_t ********)0x410994;
                                      ppppppppwStack_68 = (wchar_t ********)pppppppppwVar8;
                                      (*(code *)(*pppppppppwVar8)[0x1dc])();
                                      local_38 = local_10c;
                                      local_88 = (wchar_t ********)DAT_00422058;
                                      local_8 = 0x3b;
                                      local_6c = (wchar_t ********)(pppppppppwVar8 + 0x31);
                                      ppppppppwStack_74 = (wchar_t ********)0x4109cf;
                                      local_70 = (wchar_t ********)pppppppppwVar8;
                                      (*(code *)(*pppppppppwVar8)[0x1cb])();
                                      local_8 = 0x3c;
                                      ppppppppwStack_74 = (wchar_t ********)(pppppppppwVar8 + 0x30);
                                      ppppppppwStack_78 = (wchar_t ********)(pppppppppwVar8 + 0x2f);
                                      ppppppppwStack_7c = (wchar_t ********)(pppppppppwVar8 + 0x2e);
                                      ppppppppwStack_84 = (wchar_t ********)0x410a02;
                                      ppppppppwStack_80 = (wchar_t ********)pppppppppwVar8;
                                      (*(code *)(*pppppppppwVar8)[0x202])();
                                      local_8 = 0x3d;
                                      ppppppppwStack_84 = (wchar_t ********)(pppppppppwVar8 + 0x2c);
                                      local_88 = (wchar_t ********)(pppppppppwVar8 + 0x2b);
                                      local_8c = (wchar_t ********)(pppppppppwVar8 + 0x2f);
                                      local_90 = (wchar_t ********)(pppppppppwVar8 + 0x2e);
                                      local_98 = (wchar_t ********)0x410a3f;
                                      local_94 = (wchar_t ********)pppppppppwVar8;
                                      (*(code *)(*pppppppppwVar8)[0x1cf])();
                                      local_8 = 0x3e;
                                      local_98 = (wchar_t ********)&local_10c;
                                      (*(code *)(*pppppppppwVar8)[0x1db])();
                                      pppppppppwVar8[0x2d] = local_10c;
                                      local_8 = 0x3f;
                                      ppppppppwStackY_ac = (wchar_t ********)0x410a95;
                                      local_a8 = (wchar_t ********)pppppppppwVar8;
                                      (*(code *)(*pppppppppwVar8)[0x206])();
                                      local_8 = 0x40;
                                      ppppppppwStackY_ac = (wchar_t ********)(pppppppppwVar8 + 0x2c)
                                      ;
                                      ppppppppwStackY_b4 = (wchar_t ********)0x410ab5;
                                      ppppppppwStackY_b0 = (wchar_t ********)pppppppppwVar8;
                                      (*(code *)(*pppppppppwVar8)[0x207])();
                                      local_8 = 0x41;
                                      ppppppppwStackY_b4 = (wchar_t ********)(pppppppppwVar8 + 0x2d)
                                      ;
                                      ppppppppwStackY_bc = (wchar_t ********)0x410ad4;
                                      ppppppppwStackY_b8 = (wchar_t ********)pppppppppwVar8;
                                      (*(code *)(*pppppppppwVar8)[0x208])();
                                      local_8 = 0x42;
                                      ppppppppwStackY_c0 = (wchar_t ********)0x410aea;
                                      ppppppppwStackY_bc = (wchar_t ********)pppppppppwVar8;
                                      (*(code *)(*pppppppppwVar8)[0x1bf])();
                                      local_8 = 0x43;
                                      ppppppppwStackY_c0 = (wchar_t ********)(pppppppppwVar8 + 0x2d)
                                      ;
                                      ppppppppwStackY_c8 = (wchar_t ********)0x410b0a;
                                      ppppppppwStackY_c4 = (wchar_t ********)pppppppppwVar8;
                                      (*(code *)(*pppppppppwVar8)[0x1c1])();
                                      local_8 = 0x44;
                                      ppppppppwStackY_c8 = (wchar_t ********)(pppppppppwVar8 + 0x2b)
                                      ;
                                      ppppppppwStackY_d0 = (wchar_t ********)0x410b2a;
                                      ppppppppwStackY_cc = (wchar_t ********)pppppppppwVar8;
                                      (*(code *)(*pppppppppwVar8)[0x1ef])();
                                      local_8 = 0x45;
                                      ppppppppwStackY_d0 = (wchar_t ********)(pppppppppwVar8 + 0x2c)
                                      ;
                                      ppppppppwStackY_d8 = (wchar_t ********)0x410b49;
                                      ppppppppwStackY_d4 = (wchar_t ********)pppppppppwVar8;
                                      (*(code *)(*pppppppppwVar8)[0x1f0])();
                                      local_8 = 0x46;
                                      ppppppppwStackY_d8 = (wchar_t ********)(pppppppppwVar8 + 0x2d)
                                      ;
                                      ppppppppwStackY_dc = (wchar_t ********)(pppppppppwVar8 + 0x2c)
                                      ;
                                      ppppppppwStackY_e0 = (wchar_t ********)(pppppppppwVar8 + 0x2b)
                                      ;
                                      ppppppppwStackY_e8 = (wchar_t ********)0x410b7c;
                                      ppppppppwStackY_e4 = (wchar_t ********)pppppppppwVar8;
                                      (*(code *)(*pppppppppwVar8)[0x201])();
                                      local_70 = pppppppppwVar8[0x2d];
                                      local_8c = (wchar_t ********)DAT_00422058;
                                      local_8 = 0x49;
                                      ppppppppwStackY_e8 = (wchar_t ********)(pppppppppwVar8 + 0x2c)
                                      ;
                                      ppppppppwStackY_ec = (wchar_t ********)(pppppppppwVar8 + 0x2b)
                                      ;
                                      ppppppppwStackY_f0 = (wchar_t ********)(pppppppppwVar8 + 0x2f)
                                      ;
                                      ppppppppwStackY_f4 = (wchar_t ********)(pppppppppwVar8 + 0x2e)
                                      ;
                                      ppppppppwStackY_fc = (wchar_t ********)0x410bde;
                                      ppppppppwStackY_f8 = (wchar_t ********)pppppppppwVar8;
                                      (*(code *)(*pppppppppwVar8)[0x1d0])();
                                      local_8 = 0x4a;
                                      ppppppppwStackY_fc = (wchar_t ********)&local_10c;
                                      ppppppppwStackY_100 =
                                           (wchar_t ********)(pppppppppwVar8 + 0x2e);
                                      ppppppppwStackY_108 = (wchar_t ********)0x410c04;
                                      ppppppppwStackY_104 = (wchar_t ********)pppppppppwVar8;
                                      (*(code *)(*pppppppppwVar8)[0x1d2])();
                                      local_44 = local_10c;
                                      local_8 = 0x4b;
                                      if ((uVar9 & 0xd) == 0) {
                                        local_94 = (wchar_t ********)
                                                   ABS((float)pppppppppwVar8[0xd] -
                                                       (float)pppppppppwVar8[0xf]);
                                        if ((uVar9 & 0xd) == 0) {
                                          local_8 = 0x4c;
                                          if (DAT_00422000 == 0) {
                                            fVar11 = ((float10)(float)local_10c *
                                                     (float10)(float)local_94) /
                                                     ((float10)(float)local_94 -
                                                     (float10)(float)local_10c);
                                          }
                                          else {
                                            local_64 = (wchar_t ********)0x410c6a;
                                            local_60 = (wchar_t ********)CONCAT22(uVar7,uVar9);
                                            fVar11 = (float10)adj_fdiv_r();
                                          }
                                          local_40 = (wchar_t ********)(float)fVar11;
                                          if ((uVar9 & 0xd) == 0) {
                                            local_8 = 0x4d;
                                            if (((uVar9 & 0xd) == 0) &&
                                               (fVar1 = ABS(((float)local_40 +
                                                            (float)pppppppppwVar8[0xe]) -
                                                            (float)pppppppppwVar8[0x1a]),
                                               (uVar9 & 0xd) == 0)) {
                                              local_8 = 0x4e;
                                              local_60 = (wchar_t ********)&local_10c;
                                              local_64 = (wchar_t ********)(pppppppppwVar8 + 0x2f);
                                              local_6c = (wchar_t ********)0x410cce;
                                              ppppppppwStack_68 = (wchar_t ********)pppppppppwVar8;
                                              pppppppppwVar3 =
                                                   (wchar_t *********)
                                                   (*(code *)(*pppppppppwVar8)[0x1d7])();
                                              local_54 = local_10c;
                                              local_8 = 0x4f;
                                              if (DAT_00422000 == 0) {
                                                fVar11 = ((float10)(float)local_10c * (float10)fVar1
                                                         ) / ((float10)fVar1 -
                                                             (float10)(float)local_10c);
                                              }
                                              else {
                                                local_64 = (wchar_t ********)0x410cff;
                                                local_60 = (wchar_t ********)pppppppppwVar3;
                                                fVar11 = (float10)adj_fdiv_r();
                                              }
                                              local_50 = (wchar_t ********)(float)fVar11;
                                              if ((uVar9 & 0xd) == 0) {
                                                local_8 = 0x50;
                                                local_60 = (wchar_t ********)&local_6c;
                                                local_64 = (wchar_t ********)&local_4c;
                                                ppppppppwStack_68 =
                                                     (wchar_t ********)(pppppppppwVar8 + 0x37);
                                                local_70 = (wchar_t ********)0x410d35;
                                                local_6c = (wchar_t ********)pppppppppwVar8;
                                                (*(code *)(*pppppppppwVar8)[0x1de])();
                                                local_8 = 0x51;
                                                if (((uVar9 & 0xd) == 0) &&
                                                   (local_34 = (wchar_t ********)
                                                               ABS(((float)local_50 +
                                                                   (float)pppppppppwVar8[0x19]) -
                                                                   (float)local_4c),
                                                   (uVar9 & 0xd) == 0)) {
                                                  local_8 = 0x52;
                                                  if ((uVar9 & 0xd) == 0) {
                                                    local_5c = (wchar_t ********)
                                                               ABS((float)pppppppppwVar8[0x39] -
                                                                   (float)local_6c);
                                                    if ((uVar9 & 0xd) == 0) {
                                                      local_8 = 0x53;
                                                      if (DAT_00422000 == 0) {
                                                        fVar11 = ((float10)(float)local_34 *
                                                                 (float10)(float)local_5c) /
                                                                 ((float10)(float)local_34 +
                                                                 (float10)(float)local_5c);
                                                      }
                                                      else {
                                                        local_64 = (wchar_t ********)0x410db5;
                                                        local_60 = (wchar_t ********)
                                                                   CONCAT22(uVar7,uVar9);
                                                        fVar11 = (float10)adj_fdiv_r();
                                                      }
                                                      local_60 = (wchar_t ********)(float)fVar11;
                                                      if ((uVar9 & 0xd) == 0) {
                                                        local_8 = 0x54;
                                                        local_60 = (wchar_t ********)&local_10c;
                                                        local_64 = (wchar_t ********)&local_60;
                                                        local_6c = (wchar_t ********)0x410de4;
                                                        ppppppppwStack_68 =
                                                             (wchar_t ********)pppppppppwVar8;
                                                        pppppppppwVar3 =
                                                             (wchar_t *********)
                                                             (*(code *)(*pppppppppwVar8)[0x1dc])();
                                                        local_3c = local_10c;
                                                        local_8 = 0x55;
                                                        if (DAT_00422000 == 0) {
                                                          fVar11 = (((float10)(float)local_64 -
                                                                    (float10)(float)local_70) *
                                                                   (float10)(float)pppppppppwVar8
                                                                                   [0x22]) /
                                                                   ((float10)(float)local_38 *
                                                                    (float10)(float)local_88 -
                                                                   (float10)(float)local_10c *
                                                                   (float10)(float)local_8c);
                                                        }
                                                        else {
                                                          local_64 = (wchar_t ********)0x410e2c;
                                                          local_60 = (wchar_t ********)
                                                                     pppppppppwVar3;
                                                          fVar11 = (float10)adj_fdiv_r();
                                                          pppppppppwVar3 =
                                                               (wchar_t *********)local_60;
                                                        }
                                                        local_48 = (wchar_t ********)(float)fVar11;
                                                        if ((uVar9 & 0xd) == 0) {
                                                          local_8 = 0x56;
                                                          if (DAT_00422000 == 0) {
                                                            fVar11 = ((float10)(float)local_3c *
                                                                      (float10)(float)local_8c *
                                                                      (float10)(float)local_64 -
                                                                     (float10)(float)local_38 *
                                                                     (float10)(float)local_88 *
                                                                     (float10)(float)local_70) /
                                                                     ((float10)(float)local_38 *
                                                                      (float10)(float)local_88 -
                                                                     (float10)(float)local_3c *
                                                                     (float10)(float)local_8c);
                                                          }
                                                          else {
                                                            local_64 = (wchar_t ********)0x410e84;
                                                            local_60 = (wchar_t ********)
                                                                       CONCAT22((short)((uint)
                                                  pppppppppwVar3 >> 0x10),uVar9);
                                                  fVar11 = (float10)adj_fdiv_r();
                                                  }
                                                  if ((uVar9 & 0xd) == 0) {
                                                    pppppppppwVar8[0x29] = local_48;
                                                    pppppppppwVar8[0x2a] =
                                                         (wchar_t ********)(float)fVar11;
                                                    local_8 = 0x59;
                                                    local_64 = (wchar_t ********)0x410ece;
                                                    local_60 = (wchar_t ********)pppppppppwVar8;
                                                    (*(code *)(*pppppppppwVar8)[0x200])();
                                                    local_8 = 0x5a;
                                                    ppppppppwStack_68 = (wchar_t ********)0x410ee4;
                                                    local_64 = (wchar_t ********)pppppppppwVar8;
                                                    (*(code *)(*pppppppppwVar8)[0x1da])();
                                                    local_8 = 0x5b;
                                                    local_6c = (wchar_t ********)0x410efa;
                                                    ppppppppwStack_68 =
                                                         (wchar_t ********)pppppppppwVar8;
                                                    (*(code *)(*pppppppppwVar8)[0x20e])();
                                                    local_8 = 0x5c;
                                                    local_6c = (wchar_t ********)0x410f11;
                                                    __vbaStrCopy();
                                                    local_8 = 0x5d;
                                                    if (DAT_00422010 == (int *)0x0) {
                                                      local_64 = (wchar_t ********)&DAT_00422010;
                                                      ppppppppwStack_68 =
                                                           (wchar_t ********)&DAT_004049b8;
                                                      local_6c = (wchar_t ********)0x410f31;
                                                      __vbaNew2();
                                                    }
                                                    local_64 = (wchar_t ********)DAT_00422010;
                                                    ppppppppwStack_68 = (wchar_t ********)0x410f60;
                                                    ppppppppwStack_68 =
                                                         (wchar_t ********)
                                                         (**(code **)(*DAT_00422010 + 0x390))();
                                                    local_6c = (wchar_t ********)&local_98;
                                                    local_70 = (wchar_t ********)0x410f6e;
                                                    pppppppppwVar3 =
                                                         (wchar_t *********)__vbaObjSet();
                                                    ppppppppwStack_68 =
                                                         (wchar_t ********)DAT_00422028;
                                                    local_70 = (wchar_t ********)0x410f8d;
                                                    local_6c = (wchar_t ********)pppppppppwVar3;
                                                    pppppppppwVar6 =
                                                         (wchar_t *********)
                                                         (*(code *)(*pppppppppwVar3)[0x15])();
                                                    if ((int)pppppppppwVar6 < 0) {
                                                      local_70 = (wchar_t ********)0x54;
                                                      ppppppppwStack_74 =
                                                           (wchar_t ********)&DAT_00406fdc;
                                                      ppppppppwStack_80 = (wchar_t ********)0x410fb9
                                                      ;
                                                      ppppppppwStack_7c =
                                                           (wchar_t ********)pppppppppwVar6;
                                                      ppppppppwStack_78 =
                                                           (wchar_t ********)pppppppppwVar3;
                                                      __vbaHresultCheckObj();
                                                    }
                                                    local_70 = (wchar_t ********)0x410fd7;
                                                    __vbaFreeObj();
                                                    local_8 = 0x5e;
                                                    local_70 = (wchar_t ********)0x410fee;
                                                    __vbaStrCopy();
                                                    local_8 = 0x5f;
                                                    local_6c = (wchar_t ********)0x411004;
                                                    ppppppppwStack_68 =
                                                         (wchar_t ********)pppppppppwVar8;
                                                    local_6c = (wchar_t ********)
                                                               (*(code *)(*pppppppppwVar8)[0xe3])();
                                                    local_70 = (wchar_t ********)&local_98;
                                                    ppppppppwStack_74 = (wchar_t ********)0x411012;
                                                    pppppppppwVar3 =
                                                         (wchar_t *********)__vbaObjSet();
                                                    local_6c = (wchar_t ********)DAT_00422030;
                                                    ppppppppwStack_74 = (wchar_t ********)0x411030;
                                                    local_70 = (wchar_t ********)pppppppppwVar3;
                                                    pppppppppwVar6 =
                                                         (wchar_t *********)
                                                         (*(code *)(*pppppppppwVar3)[0x15])();
                                                    if ((int)pppppppppwVar6 < 0) {
                                                      ppppppppwStack_74 = (wchar_t ********)0x54;
                                                      ppppppppwStack_78 =
                                                           (wchar_t ********)&DAT_00406fdc;
                                                      ppppppppwStack_84 = (wchar_t ********)0x41105c
                                                      ;
                                                      ppppppppwStack_80 =
                                                           (wchar_t ********)pppppppppwVar6;
                                                      ppppppppwStack_7c =
                                                           (wchar_t ********)pppppppppwVar3;
                                                      __vbaHresultCheckObj();
                                                    }
                                                    ppppppppwStack_74 = (wchar_t ********)0x41107a;
                                                    __vbaFreeObj();
                                                    local_8 = 0x60;
                                                    ppppppppwStack_78 = (wchar_t ********)0x411090;
                                                    ppppppppwStack_74 =
                                                         (wchar_t ********)pppppppppwVar8;
                                                    ppppppppwStack_78 =
                                                         (wchar_t ********)
                                                         (*(code *)(*pppppppppwVar8)[0xe1])();
                                                    ppppppppwStack_7c = (wchar_t ********)&local_98;
                                                    ppppppppwStack_80 = (wchar_t ********)0x41109e;
                                                    pppppppppwVar3 =
                                                         (wchar_t *********)__vbaObjSet();
                                                    ppppppppwStack_78 = (wchar_t ********)0xffffffff
                                                    ;
                                                    ppppppppwStack_80 = (wchar_t ********)0x4110bb;
                                                    ppppppppwStack_7c =
                                                         (wchar_t ********)pppppppppwVar3;
                                                    pppppppppwVar6 =
                                                         (wchar_t *********)
                                                         (*(code *)(*pppppppppwVar3)[0x23])();
                                                    if ((int)pppppppppwVar6 < 0) {
                                                      ppppppppwStack_80 = (wchar_t ********)0x8c;
                                                      ppppppppwStack_84 =
                                                           (wchar_t ********)&DAT_00407768;
                                                      local_90 = (wchar_t ********)0x4110ea;
                                                      local_8c = (wchar_t ********)pppppppppwVar6;
                                                      local_88 = (wchar_t ********)pppppppppwVar3;
                                                      __vbaHresultCheckObj();
                                                    }
                                                    ppppppppwStack_80 = (wchar_t ********)0x411108;
                                                    __vbaFreeObj();
                                                    local_8 = 0x61;
                                                    ppppppppwStack_84 = (wchar_t ********)0x41111e;
                                                    ppppppppwStack_80 =
                                                         (wchar_t ********)pppppppppwVar8;
                                                    ppppppppwStack_84 =
                                                         (wchar_t ********)
                                                         (*(code *)(*pppppppppwVar8)[0xe0])();
                                                    local_88 = (wchar_t ********)&local_98;
                                                    local_8c = (wchar_t ********)0x41112c;
                                                    pppppppppwVar3 =
                                                         (wchar_t *********)__vbaObjSet();
                                                    ppppppppwStack_84 = (wchar_t ********)0xffffffff
                                                    ;
                                                    local_8c = (wchar_t ********)0x411149;
                                                    local_88 = (wchar_t ********)pppppppppwVar3;
                                                    pppppppppwVar6 =
                                                         (wchar_t *********)
                                                         (*(code *)(*pppppppppwVar3)[0x23])();
                                                    if ((int)pppppppppwVar6 < 0) {
                                                      local_8c = (wchar_t ********)0x8c;
                                                      local_90 = (wchar_t ********)&DAT_00407768;
                                                      local_98 = (wchar_t ********)pppppppppwVar6;
                                                      local_94 = (wchar_t ********)pppppppppwVar3;
                                                      __vbaHresultCheckObj();
                                                    }
                                                    local_8c = (wchar_t ********)0x411196;
                                                    __vbaFreeObj();
                                                    local_8 = 0x62;
                                                    local_90 = (wchar_t ********)0x4111ac;
                                                    local_8c = (wchar_t ********)pppppppppwVar8;
                                                    local_90 = (wchar_t ********)
                                                               (*(code *)(*pppppppppwVar8)[0xe2])();
                                                    local_94 = (wchar_t ********)&local_98;
                                                    local_98 = (wchar_t ********)0x4111ba;
                                                    local_94 = (wchar_t ********)__vbaObjSet();
                                                    local_90 = (wchar_t ********)0xffffffff;
                                                    local_98 = (wchar_t ********)0x4111d7;
                                                    iVar5 = (**(code **)((int)*local_94 + 0x8c))();
                                                    if (iVar5 < 0) {
                                                      local_98 = (wchar_t ********)0x8c;
                                                      local_a8 = (wchar_t ********)0x411206;
                                                      __vbaHresultCheckObj();
                                                    }
                                                    local_98 = (wchar_t ********)0x411224;
                                                    __vbaFreeObj();
                                                    local_8 = 99;
                                                    local_98 = (wchar_t ********)pppppppppwVar8;
                                                    (*(code *)(*pppppppppwVar8)[0xc0])();
                                                    pppppppppwVar8 =
                                                         (wchar_t *********)__vbaObjSet();
                                                    pppppppppwVar3 =
                                                         (wchar_t *********)
                                                         (*(code *)(*pppppppppwVar8)[0x23])();
                                                    if ((int)pppppppppwVar3 < 0) {
                                                      local_a8 = (wchar_t ********)&DAT_00407768;
                                                      ppppppppwStackY_b4 =
                                                           (wchar_t ********)0x411294;
                                                      ppppppppwStackY_b0 =
                                                           (wchar_t ********)pppppppppwVar3;
                                                      ppppppppwStackY_ac =
                                                           (wchar_t ********)pppppppppwVar8;
                                                      __vbaHresultCheckObj();
                                                    }
                                                    __vbaFreeObj();
                                                    local_8 = 100;
                                                    local_a8 = (wchar_t ********)0x4112c6;
                                                    __vbaFileClose();
                                                    local_8 = 0x65;
                                                    FUN_0041cca0();
                                                    local_8 = 0x66;
                                                    local_a8 = (wchar_t ********)0x4112e3;
                                                    FUN_0041f560((float *)&DAT_00422048);
                                                    local_a8 = (wchar_t ********)0x4113d6;
                                                    __vbaExitProc();
                                                    local_a8 = (wchar_t ********)&LAB_00411415;
                                                    ppppppppwStackY_ac = (wchar_t ********)0x411414;
                                                    __vbaFreeStr();
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


// ---- FUN_00411440 @ 00411440

void __cdecl FUN_00411440(uint param_1,short *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_1c;
  void *pvStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004020e6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc8;
  local_c = &DAT_004017f0;
  local_8 = param_1 & 1;
  piVar3 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar3 + 4))(piVar3);
  local_1c = 0;
  if (*param_2 == 1) {
    uVar1 = (**(code **)(*piVar3 + 0x38c))(piVar3);
    piVar3 = (int *)__vbaObjSet(&local_1c,uVar1);
    iVar2 = (**(code **)(*piVar3 + 0x54))(piVar3,L"(Calculates C3 Cal and Rem.)");
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar3,&DAT_00406fdc,0x54);
    }
    __vbaFreeObj();
  }
  return;
}


// ---- FUN_00411510 @ 00411510

void __cdecl FUN_00411510(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_1c;
  void *pvStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004020e6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc8;
  local_c = &DAT_00401800;
  local_8 = param_1 & 1;
  piVar3 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar3 + 4))(piVar3);
  DAT_0042202c = 1;
  local_1c = 0;
  uVar1 = (**(code **)(*piVar3 + 0x2fc))(piVar3);
  piVar3 = (int *)__vbaObjSet(&local_1c,uVar1);
  iVar2 = (**(code **)(*piVar3 + 0x8c))(piVar3,0);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar3,&DAT_00407768,0x8c);
  }
  __vbaFreeObj();
  return;
}


// ---- FUN_004115e0 @ 004115e0

void __cdecl FUN_004115e0(uint param_1)

{
  short sVar1;
  int *piVar2;
  undefined4 local_7c [2];
  undefined4 *local_74;
  undefined4 local_6c;
  undefined4 local_64;
  undefined4 local_5c [2];
  undefined4 local_54;
  undefined4 local_4c [2];
  undefined4 local_44;
  undefined4 local_3c;
  undefined4 local_28;
  undefined4 local_24;
  void *pvStack_20;
  undefined *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  uint local_10;
  undefined4 local_c;
  
  puStack_1c = &DAT_004020e6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffff38;
  local_14 = &DAT_00401810;
  local_10 = param_1 & 1;
  piVar2 = (int *)(param_1 & 0xfffffffe);
  local_c = 0;
  ExceptionList = &pvStack_20;
  (**(code **)(*piVar2 + 4))(piVar2);
  local_24 = 0;
  local_28 = 0;
  local_3c = 0;
  local_4c[0] = 0;
  local_5c[0] = 0;
  local_6c = 0;
  local_7c[0] = 0;
  __vbaOnError(1);
  sVar1 = FUN_0041b110();
  if (sVar1 == 0) {
    __vbaStrCat(DAT_0042203c,L"c:\\windows\\notepad.exe ");
    __vbaStrMove();
    local_74 = &local_28;
    local_7c[0] = 0x4008;
    rtcShell(local_7c);
    __vbaVarMove();
  }
  else {
    __vbaStrCopy(piVar2);
    local_64 = 0x80020004;
    local_6c = 10;
    local_54 = 0x80020004;
    local_5c[0] = 10;
    local_44 = 0x80020004;
    local_4c[0] = 10;
    local_74 = &local_24;
    local_7c[0] = 0x4008;
    rtcMsgBox(local_7c,0x30,local_4c,local_5c);
    __vbaFreeVarList(3,local_4c,local_5c);
  }
  __vbaExitProc();
  __vbaFreeStr();
  __vbaFreeStr();
  __vbaFreeVar();
  return;
}


// ---- FUN_00411800 @ 00411800

void __cdecl FUN_00411800(uint param_1,short *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_1c;
  void *pvStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004020e6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc8;
  local_c = &DAT_00401838;
  local_8 = param_1 & 1;
  piVar3 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar3 + 4))(piVar3);
  local_1c = 0;
  if (*param_2 == 1) {
    uVar1 = (**(code **)(*piVar3 + 0x38c))(piVar3);
    piVar3 = (int *)__vbaObjSet(&local_1c,uVar1);
    iVar2 = (**(code **)(*piVar3 + 0x54))(piVar3,L"(Executes NOTEPAD.EXE and opens log file.)");
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar3,&DAT_00406fdc,0x54);
    }
    __vbaFreeObj();
  }
  return;
}


// ---- FUN_004118d0 @ 004118d0

void FUN_004118d0(void)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_004020e6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffffd0;
  local_8 = &DAT_00401848;
  local_18 = 0;
  ExceptionList = &pvStack_14;
  puVar2 = &stack0xffffffd0;
  if (DAT_00422630 == (int *)0x0) {
    ExceptionList = &pvStack_14;
    __vbaNew2(&DAT_00407b3c,&DAT_00422630);
    puVar2 = local_c;
  }
  local_c = puVar2;
  piVar1 = DAT_00422630;
  if (DAT_00422010 == 0) {
    __vbaNew2(&DAT_004049b8,&DAT_00422010);
  }
  iVar4 = *piVar1;
  uVar3 = __vbaObjSetAddref(&local_18,DAT_00422010);
  piVar5 = piVar1;
  iVar4 = (**(code **)(iVar4 + 0x10))(piVar1,uVar3);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar1,&DAT_00407b2c,0x10);
  }
  __vbaFreeObj();
  __vbaEnd(piVar5,uVar3);
  return;
}


// ---- FUN_004119a0 @ 004119a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_004119a0(uint param_1)

{
  int iVar1;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  int *piVar2;
  undefined2 extraout_var_01;
  ushort uVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  int *piVar7;
  float local_54;
  float local_50 [2];
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_2c [2];
  undefined4 local_24;
  int *local_1c;
  void *pvStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004020e6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff78;
  local_c = &DAT_00401858;
  local_8 = param_1 & 1;
  piVar2 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar2 + 4))(piVar2);
  local_1c = (int *)0x0;
  local_2c[0] = 0;
  local_50[0] = 0.0;
  local_54 = 0.0;
  if (DAT_00422010 == (int *)0x0) {
    __vbaNew2(&DAT_004049b8,&DAT_00422010);
  }
  piVar4 = DAT_00422010;
  iVar1 = (**(code **)(*DAT_00422010 + 0x80))(DAT_00422010,&local_54);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar4,&DAT_00406c9c,0x80);
  }
  if (DAT_00422010 == (int *)0x0) {
    __vbaNew2(&DAT_004049b8,&DAT_00422010);
  }
  piVar4 = DAT_00422010;
  if (DAT_00422630 == (int *)0x0) {
    __vbaNew2(&DAT_00407b3c,&DAT_00422630);
  }
  piVar7 = DAT_00422630;
  iVar1 = (**(code **)(*DAT_00422630 + 0x18))(DAT_00422630,&local_1c);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar7,&DAT_00407b2c,0x18);
  }
  piVar7 = local_1c;
  iVar1 = (**(code **)(*local_1c + 0x98))(local_1c,local_50);
  uVar3 = 0;
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar7,&DAT_00407b4c,0x98);
  }
  if ((uVar3 & 0xd) == 0) {
    iVar1 = (**(code **)(*piVar4 + 0x74))(piVar4,local_50[0] - local_54);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piVar4,&DAT_00406c9c,0x74);
    }
    __vbaFreeObj();
    if (DAT_00422010 == (int *)0x0) {
      __vbaNew2(&DAT_004049b8,&DAT_00422010);
    }
    piVar4 = DAT_00422010;
    iVar1 = (**(code **)(*DAT_00422010 + 0x88))(DAT_00422010,&local_54);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piVar4,&DAT_00406c9c,0x88);
    }
    if (DAT_00422010 == (int *)0x0) {
      __vbaNew2(&DAT_004049b8,&DAT_00422010);
    }
    piVar4 = DAT_00422010;
    if (DAT_00422630 == (int *)0x0) {
      __vbaNew2(&DAT_00407b3c,&DAT_00422630);
    }
    piVar7 = DAT_00422630;
    iVar1 = (**(code **)(*DAT_00422630 + 0x18))(DAT_00422630,&local_1c);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piVar7,&DAT_00407b2c,0x18);
    }
    piVar7 = local_1c;
    iVar1 = (**(code **)(*local_1c + 0x50))(local_1c,local_50);
    uVar3 = 0;
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piVar7,&DAT_00407b4c,0x50);
    }
    if ((uVar3 & 0xd) == 0) {
      piVar7 = piVar4;
      iVar1 = (**(code **)(*piVar4 + 0x7c))(piVar4,local_50[0] - local_54);
      if (iVar1 < 0) {
        __vbaHresultCheckObj(iVar1,piVar4,&DAT_00406c9c,0x7c);
      }
      __vbaFreeObj();
      if (DAT_0042205c == -1) {
        if (DAT_00422010 == (int *)0x0) {
          __vbaNew2(&DAT_004049b8,&DAT_00422010);
        }
        piVar4 = DAT_00422010;
        iVar1 = (**(code **)(*DAT_00422010 + 0x54))
                          (DAT_00422010,L"435VP - Column Calibration Calculator V08.02");
        if (iVar1 < 0) {
          __vbaHresultCheckObj(iVar1,piVar4,&DAT_00406c9c,0x54);
        }
      }
      local_24 = 0x80020004;
      local_2c[0] = 10;
      DAT_00422040 = rtcFreeFile(local_2c);
      __vbaFreeVar(piVar7);
      __vbaFileOpen(8,0xffffffff,CONCAT22(extraout_var_01,DAT_00422040),DAT_0042203c);
      if (DAT_00422010 == (int *)0x0) {
        __vbaNew2(&DAT_004049b8,&DAT_00422010);
      }
      piVar4 = DAT_00422010;
      local_3c = 10;
      iVar1 = (**(code **)(*DAT_00422010 + 0x2b0))
                        (DAT_00422010,10,local_38,0x80020004,local_30,10,local_48,0x80020004,
                         local_40);
      if (iVar1 < 0) {
        __vbaHresultCheckObj(iVar1,piVar4,&DAT_00406c9c,0x2b0);
      }
      (**(code **)(*piVar2 + 0x828))(piVar2);
      (**(code **)(*piVar2 + 0x82c))(piVar2);
      piVar4 = piVar2;
      (**(code **)(*piVar2 + 0x830))(piVar2);
      __vbaPrintFile(&DAT_0040701c,CONCAT22(extraout_var,DAT_00422040),L"DEFAULT CALIBRATION",piVar4
                    );
      (**(code **)(*piVar2 + 0x800))(piVar2);
      FUN_0041b750();
      (**(code **)(*piVar2 + 0x810))(piVar2);
      (**(code **)(*piVar2 + 0x80c))(piVar2);
      (**(code **)(*piVar2 + 0x83c))(piVar2);
      _DAT_00422024 = 0;
      if (DAT_00422630 == (int *)0x0) {
        __vbaNew2(&DAT_00407b3c,&DAT_00422630);
      }
      piVar4 = DAT_00422630;
      piVar7 = DAT_00422630;
      iVar1 = (**(code **)(*DAT_00422630 + 0x18))(DAT_00422630,&local_1c);
      if (iVar1 < 0) {
        __vbaHresultCheckObj(iVar1,piVar4,&DAT_00407b2c,0x18);
      }
      piVar4 = local_1c;
      uVar6 = 0;
      piVar5 = local_1c;
      iVar1 = (**(code **)(*local_1c + 0x7c))(local_1c,0);
      if (iVar1 < 0) {
        __vbaHresultCheckObj(iVar1,piVar4,&DAT_00407b4c,0x7c);
      }
      __vbaFreeObj();
      piVar4 = piVar2;
      (**(code **)(*piVar2 + 0x6f8))(piVar2);
      __vbaFileClose(CONCAT22(extraout_var_00,DAT_00422040));
      __vbaStrCopy(piVar4,piVar5);
      __vbaStrCopy(uVar6,piVar7);
      uVar6 = (**(code **)(*piVar2 + 0x38c))(piVar2);
      piVar2 = (int *)__vbaObjSet(&local_1c,uVar6);
      iVar1 = (**(code **)(*piVar2 + 0x54))(piVar2,DAT_00422030);
      if (iVar1 < 0) {
        __vbaHresultCheckObj(iVar1,piVar2,&DAT_00406fdc,0x54);
      }
      __vbaFreeObj();
      return;
    }
  }
  __vbaFPException();
  return;
}


// ---- FUN_00411e70 @ 00411e70

void __cdecl FUN_00411e70(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_1c;
  void *pvStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004020e6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc8;
  local_c = &DAT_00401868;
  local_8 = param_1 & 1;
  piVar3 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar3 + 4))(piVar3);
  local_1c = 0;
  uVar1 = (**(code **)(*piVar3 + 0x38c))(piVar3);
  piVar3 = (int *)__vbaObjSet(&local_1c,uVar1);
  iVar2 = (**(code **)(*piVar3 + 0x54))(piVar3,DAT_00422030);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar3,&DAT_00406fdc,0x54);
  }
  __vbaFreeObj();
  return;
}


// ---- FUN_00411f30 @ 00411f30

undefined4 FUN_00411f30(uint param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 local_20 [2];
  void *local_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004020e6;
  local_18 = ExceptionList;
  local_10 = &stack0xffffffc0;
  local_c = &DAT_00401878;
  local_8 = param_1 & 1;
  piVar2 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &local_18;
  (**(code **)(*piVar2 + 4))(piVar2);
  local_20[0] = 0;
  if (DAT_00422010 == (int *)0x0) {
    __vbaNew2(&DAT_004049b8,&DAT_00422010);
  }
  piVar1 = DAT_00422010;
  iVar3 = (**(code **)(*DAT_00422010 + 0x58))(DAT_00422010,local_20);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar1,&DAT_00406c9c,0x58);
  }
  uVar10 = 3;
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = 0xffffffff;
  uVar4 = local_20[0];
  FUN_00407e5c();
  __vbaSetSystemError(uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10);
  __vbaI2I4(uVar4);
  local_8 = 0;
  (**(code **)(*piVar2 + 8))(piVar2);
  ExceptionList = local_18;
  return local_8;
}


// ---- FUN_00412000 @ 00412000

void __cdecl FUN_00412000(uint param_1)

{
  int *piVar1;
  undefined4 local_5c [2];
  undefined4 *local_54;
  undefined4 local_4c [2];
  undefined4 local_44;
  undefined4 local_3c [2];
  undefined4 local_34;
  undefined4 local_2c [4];
  undefined4 local_1c;
  void *pvStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004020e6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff60;
  local_c = &DAT_00401880;
  local_8 = param_1 & 1;
  piVar1 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar1 + 4))(piVar1);
  local_1c = 0;
  local_2c[0] = 0;
  local_3c[0] = 0;
  local_4c[0] = 0;
  local_5c[0] = 0;
  thunk_FUN_0041d160();
  __vbaStrCat(DAT_0042203c,L"Log saved as text file ");
  __vbaStrMove();
  local_44 = 0x80020004;
  local_34 = 0x80020004;
  local_4c[0] = 10;
  local_3c[0] = 10;
  __vbaVarDup();
  local_54 = &local_1c;
  local_5c[0] = 0x4008;
  rtcMsgBox(local_5c,0x30,local_2c,local_3c,local_4c);
  __vbaFreeVarList(3,local_2c,local_3c,local_4c);
  __vbaEnd(piVar1);
  local_8 = 0;
  __vbaFreeStr();
  return;
}


// ---- FUN_00412140 @ 00412140

void __cdecl FUN_00412140(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_1c;
  void *pvStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004020e6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc8;
  local_c = &DAT_00401890;
  local_8 = param_1 & 1;
  piVar3 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar3 + 4))(piVar3);
  local_1c = 0;
  uVar1 = (**(code **)(*piVar3 + 0x38c))(piVar3);
  piVar3 = (int *)__vbaObjSet(&local_1c,uVar1);
  iVar2 = (**(code **)(*piVar3 + 0x54))(piVar3,DAT_00422030);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar3,&DAT_00406fdc,0x54);
  }
  __vbaFreeObj();
  return;
}


// ---- FUN_00412200 @ 00412200

/* WARNING: Removing unreachable block (ram,0x00412428) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_00412200(uint param_1,undefined4 param_2,undefined4 param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  bool bVar9;
  float10 fVar10;
  float10 fVar11;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  void *pvStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004020e6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffac;
  local_c = &DAT_004018a8;
  local_8 = param_1 & 1;
  piVar8 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar8 + 4))(piVar8);
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  uVar5 = (**(code **)(*piVar8 + 0x344))(piVar8);
  piVar6 = (int *)__vbaObjSet(&local_1c,uVar5);
  iVar7 = (**(code **)(*piVar6 + 0x80))(piVar6,&local_24);
  if (iVar7 < 0) {
    __vbaHresultCheckObj(iVar7,piVar6,&DAT_00407f20,0x80);
  }
  uVar5 = (**(code **)(*piVar8 + 0x344))(piVar8);
  piVar6 = (int *)__vbaObjSet(&local_20,uVar5);
  iVar7 = (**(code **)(*piVar6 + 0x88))(piVar6,&local_28);
  if (iVar7 < 0) {
    __vbaHresultCheckObj(iVar7,piVar6,&DAT_00407f20,0x88);
  }
  bVar9 = _DAT_004018a0 < *param_4;
  fVar10 = (float10)__vbaFpR4();
  fVar4 = _DAT_004018a0;
  fVar1 = *param_4;
  fVar2 = *param_5;
  fVar11 = (float10)__vbaFpR4();
  fVar3 = *param_5;
  __vbaFreeObjList(2,&local_1c,&local_20);
  if (((fVar4 < fVar2 && (float10)fVar3 < fVar11) && (float10)fVar1 < fVar10) && bVar9) {
    uVar5 = (**(code **)(*piVar8 + 0x38c))(piVar8);
    piVar6 = (int *)__vbaObjSet(&local_1c,uVar5);
    iVar7 = (**(code **)(*piVar6 + 0x54))
                      (piVar6,
                       L"(Calibration Values: Grey=Default Value, Red=Calculated Value, Black=Value transferred to LEO)"
                      );
  }
  else {
    uVar5 = (**(code **)(*piVar8 + 0x38c))(piVar8);
    piVar6 = (int *)__vbaObjSet(&local_1c,uVar5);
    iVar7 = (**(code **)(*piVar6 + 0x54))(piVar6,DAT_00422030);
  }
  if (iVar7 < 0) {
    __vbaHresultCheckObj(iVar7,piVar6,&DAT_00406fdc,0x54);
  }
  __vbaFreeObj();
  return;
}


// ---- FUN_00412460 @ 00412460

void __cdecl FUN_00412460(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_1c;
  void *pvStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004020e6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc8;
  local_c = &DAT_004018b8;
  local_8 = param_1 & 1;
  piVar3 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar3 + 4))(piVar3);
  local_1c = 0;
  uVar1 = (**(code **)(*piVar3 + 0x348))(piVar3);
  piVar3 = (int *)__vbaObjSet(&local_1c,uVar1);
  iVar2 = (**(code **)(*piVar3 + 0x204))(piVar3);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar3,&DAT_00406f50,0x204);
  }
  __vbaFreeObj();
  return;
}


// ---- FUN_00412520 @ 00412520

void __cdecl FUN_00412520(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_1c;
  void *pvStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004020e6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc8;
  local_c = &DAT_004018c8;
  local_8 = param_1 & 1;
  piVar3 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar3 + 4))(piVar3);
  local_1c = 0;
  uVar1 = (**(code **)(*piVar3 + 0x314))(piVar3);
  piVar3 = (int *)__vbaObjSet(&local_1c,uVar1);
  iVar2 = (**(code **)(*piVar3 + 0x204))(piVar3);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar3,&DAT_00406f50,0x204);
  }
  __vbaFreeObj();
  return;
}


// ---- FUN_004125e0 @ 004125e0

void __cdecl FUN_004125e0(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_1c;
  void *pvStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004020e6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc8;
  local_c = &DAT_004018d8;
  local_8 = param_1 & 1;
  piVar3 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar3 + 4))(piVar3);
  local_1c = 0;
  uVar1 = (**(code **)(*piVar3 + 0x31c))(piVar3);
  piVar3 = (int *)__vbaObjSet(&local_1c,uVar1);
  iVar2 = (**(code **)(*piVar3 + 0x204))(piVar3);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar3,&DAT_00406f50,0x204);
  }
  __vbaFreeObj();
  return;
}


// ---- FUN_004126a0 @ 004126a0

void __cdecl FUN_004126a0(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_1c;
  void *pvStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004020e6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc8;
  local_c = &DAT_004018e8;
  local_8 = param_1 & 1;
  piVar3 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar3 + 4))(piVar3);
  local_1c = 0;
  uVar1 = (**(code **)(*piVar3 + 0x324))(piVar3);
  piVar3 = (int *)__vbaObjSet(&local_1c,uVar1);
  iVar2 = (**(code **)(*piVar3 + 0x204))(piVar3);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar3,&DAT_00406f50,0x204);
  }
  __vbaFreeObj();
  return;
}


// ---- FUN_00412760 @ 00412760

void __cdecl FUN_00412760(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_1c;
  void *pvStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004020e6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc8;
  local_c = &DAT_004018f8;
  local_8 = param_1 & 1;
  piVar3 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar3 + 4))(piVar3);
  local_1c = 0;
  uVar1 = (**(code **)(*piVar3 + 0x308))(piVar3);
  piVar3 = (int *)__vbaObjSet(&local_1c,uVar1);
  iVar2 = (**(code **)(*piVar3 + 0x204))(piVar3);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar3,&DAT_00406f50,0x204);
  }
  __vbaFreeObj();
  return;
}


// ---- FUN_00412820 @ 00412820

void __cdecl FUN_00412820(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_1c;
  void *pvStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004020e6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc8;
  local_c = &DAT_00401908;
  local_8 = param_1 & 1;
  piVar3 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar3 + 4))(piVar3);
  local_1c = 0;
  uVar1 = (**(code **)(*piVar3 + 0x34c))(piVar3);
  piVar3 = (int *)__vbaObjSet(&local_1c,uVar1);
  iVar2 = (**(code **)(*piVar3 + 0x204))(piVar3);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar3,&DAT_00406f50,0x204);
  }
  __vbaFreeObj();
  return;
}


// ---- FUN_004128e0 @ 004128e0

void __cdecl FUN_004128e0(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_1c;
  void *pvStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004020e6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc8;
  local_c = &DAT_00401918;
  local_8 = param_1 & 1;
  piVar3 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar3 + 4))(piVar3);
  local_1c = 0;
  uVar1 = (**(code **)(*piVar3 + 0x350))(piVar3);
  piVar3 = (int *)__vbaObjSet(&local_1c,uVar1);
  iVar2 = (**(code **)(*piVar3 + 0x204))(piVar3);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar3,&DAT_00406f50,0x204);
  }
  __vbaFreeObj();
  return;
}


// ---- FUN_004129a0 @ 004129a0

void __cdecl FUN_004129a0(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_1c;
  void *pvStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004020e6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc8;
  local_c = &DAT_00401928;
  local_8 = param_1 & 1;
  piVar3 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar3 + 4))(piVar3);
  local_1c = 0;
  uVar1 = (**(code **)(*piVar3 + 0x348))(piVar3);
  piVar3 = (int *)__vbaObjSet(&local_1c,uVar1);
  iVar2 = (**(code **)(*piVar3 + 0x204))(piVar3);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar3,&DAT_00406f50,0x204);
  }
  __vbaFreeObj();
  return;
}


// ---- FUN_00412a60 @ 00412a60

void __cdecl FUN_00412a60(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_1c;
  void *pvStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004020e6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc8;
  local_c = &DAT_00401938;
  local_8 = param_1 & 1;
  piVar3 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar3 + 4))(piVar3);
  local_1c = 0;
  uVar1 = (**(code **)(*piVar3 + 0x354))(piVar3);
  piVar3 = (int *)__vbaObjSet(&local_1c,uVar1);
  iVar2 = (**(code **)(*piVar3 + 0x204))(piVar3);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar3,&DAT_00406f50,0x204);
  }
  __vbaFreeObj();
  return;
}


// ---- FUN_00412b20 @ 00412b20

void __cdecl FUN_00412b20(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_1c;
  void *pvStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004020e6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc8;
  local_c = &DAT_00401948;
  local_8 = param_1 & 1;
  piVar3 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar3 + 4))(piVar3);
  local_1c = 0;
  uVar1 = (**(code **)(*piVar3 + 0x360))(piVar3);
  piVar3 = (int *)__vbaObjSet(&local_1c,uVar1);
  iVar2 = (**(code **)(*piVar3 + 0x204))(piVar3);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar3,&DAT_00406f50,0x204);
  }
  __vbaFreeObj();
  return;
}


// ---- FUN_00412be0 @ 00412be0

void __cdecl FUN_00412be0(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_1c;
  void *pvStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004020e6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc8;
  local_c = &DAT_00401958;
  local_8 = param_1 & 1;
  piVar3 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar3 + 4))(piVar3);
  local_1c = 0;
  uVar1 = (**(code **)(*piVar3 + 0x310))(piVar3);
  piVar3 = (int *)__vbaObjSet(&local_1c,uVar1);
  iVar2 = (**(code **)(*piVar3 + 0x204))(piVar3);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar3,&DAT_00406f50,0x204);
  }
  __vbaFreeObj();
  return;
}


// ---- FUN_00412ca0 @ 00412ca0

void __cdecl FUN_00412ca0(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_1c;
  void *pvStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004020e6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc8;
  local_c = &DAT_00401968;
  local_8 = param_1 & 1;
  piVar3 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar3 + 4))(piVar3);
  local_1c = 0;
  uVar1 = (**(code **)(*piVar3 + 0x30c))(piVar3);
  piVar3 = (int *)__vbaObjSet(&local_1c,uVar1);
  iVar2 = (**(code **)(*piVar3 + 0x204))(piVar3);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar3,&DAT_00406f50,0x204);
  }
  __vbaFreeObj();
  return;
}


// ---- FUN_00413d60 @ 00413d60

void __cdecl FUN_00413d60(int *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 uVar5;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  undefined2 extraout_var_04;
  undefined2 extraout_var_05;
  undefined2 extraout_var_06;
  undefined2 extraout_var_07;
  undefined2 extraout_var_08;
  undefined4 uVar6;
  wchar_t *pwVar7;
  undefined4 local_44 [2];
  int *local_3c;
  undefined4 local_34 [4];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_004020e6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffff6c;
  local_8 = &DAT_00401980;
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_34[0] = 0;
  local_44[0] = 0;
  ExceptionList = &pvStack_14;
  uVar1 = (**(code **)(*param_1 + 0x348))(param_1);
  piVar2 = (int *)__vbaObjSet(&local_20,uVar1);
  __vbaVarDup();
  local_3c = param_1 + 0x23;
  local_44[0] = 0x4004;
  iVar3 = *piVar2;
  rtcBstrFromFormatVar(local_44,local_34,1,1);
  uVar1 = __vbaStrMove();
  piVar4 = piVar2;
  iVar3 = (**(code **)(iVar3 + 0xa4))(piVar2,uVar1);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,0xa4);
  }
  __vbaFreeStr();
  __vbaFreeObj();
  __vbaFreeVar(piVar4);
  uVar1 = (**(code **)(*param_1 + 0x34c))(param_1);
  piVar2 = (int *)__vbaObjSet(&local_20,uVar1);
  __vbaVarDup();
  local_3c = param_1 + 0x24;
  local_44[0] = 0x4004;
  iVar3 = *piVar2;
  rtcBstrFromFormatVar(local_44,local_34,1,1);
  uVar1 = __vbaStrMove();
  piVar4 = piVar2;
  iVar3 = (**(code **)(iVar3 + 0xa4))(piVar2,uVar1);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,0xa4);
  }
  __vbaFreeStr();
  __vbaFreeObj();
  __vbaFreeVar(piVar4);
  uVar1 = (**(code **)(*param_1 + 0x350))(param_1);
  piVar2 = (int *)__vbaObjSet(&local_20,uVar1);
  __vbaVarDup();
  local_3c = param_1 + 0x25;
  local_44[0] = 0x4004;
  iVar3 = *piVar2;
  rtcBstrFromFormatVar(local_44,local_34,1,1);
  uVar1 = __vbaStrMove();
  piVar4 = piVar2;
  iVar3 = (**(code **)(iVar3 + 0xa4))(piVar2,uVar1);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,0xa4);
  }
  __vbaFreeStr();
  __vbaFreeObj();
  __vbaFreeVar(piVar4);
  uVar1 = (**(code **)(*param_1 + 0x354))(param_1);
  piVar2 = (int *)__vbaObjSet(&local_20,uVar1);
  __vbaVarDup();
  local_3c = param_1 + 0x26;
  local_44[0] = 0x4004;
  iVar3 = *piVar2;
  rtcBstrFromFormatVar(local_44,local_34,1,1);
  uVar1 = __vbaStrMove();
  piVar4 = piVar2;
  iVar3 = (**(code **)(iVar3 + 0xa4))(piVar2,uVar1);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,0xa4);
  }
  __vbaFreeStr();
  __vbaFreeObj();
  __vbaFreeVar(piVar4);
  uVar1 = (**(code **)(*param_1 + 0x358))(param_1);
  piVar2 = (int *)__vbaObjSet(&local_20,uVar1);
  __vbaVarDup();
  local_3c = param_1 + 0x27;
  local_44[0] = 0x4004;
  iVar3 = *piVar2;
  rtcBstrFromFormatVar(local_44,local_34,1,1);
  uVar1 = __vbaStrMove();
  piVar4 = piVar2;
  iVar3 = (**(code **)(iVar3 + 0xa4))(piVar2,uVar1);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,0xa4);
  }
  __vbaFreeStr();
  __vbaFreeObj();
  __vbaFreeVar(piVar4);
  uVar1 = (**(code **)(*param_1 + 0x35c))(param_1);
  piVar2 = (int *)__vbaObjSet(&local_20,uVar1);
  __vbaVarDup();
  local_3c = param_1 + 0x28;
  local_44[0] = 0x4004;
  iVar3 = *piVar2;
  rtcBstrFromFormatVar(local_44,local_34,1,1);
  uVar1 = __vbaStrMove();
  piVar4 = piVar2;
  iVar3 = (**(code **)(iVar3 + 0xa4))(piVar2,uVar1);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,0xa4);
  }
  __vbaFreeStr();
  __vbaFreeObj();
  __vbaFreeVar(piVar4);
  uVar1 = (**(code **)(*param_1 + 0x360))(param_1);
  piVar2 = (int *)__vbaObjSet(&local_20,uVar1);
  __vbaVarDup();
  local_3c = param_1 + 0x29;
  local_44[0] = 0x4004;
  iVar3 = *piVar2;
  rtcBstrFromFormatVar(local_44,local_34,1,1);
  uVar1 = __vbaStrMove();
  piVar4 = piVar2;
  iVar3 = (**(code **)(iVar3 + 0xa4))(piVar2,uVar1);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,0xa4);
  }
  __vbaFreeStr();
  __vbaFreeObj();
  __vbaFreeVar(piVar4);
  uVar1 = (**(code **)(*param_1 + 0x364))(param_1);
  piVar2 = (int *)__vbaObjSet(&local_20,uVar1);
  __vbaVarDup();
  local_3c = param_1 + 0x2a;
  local_44[0] = 0x4004;
  iVar3 = *piVar2;
  rtcBstrFromFormatVar(local_44,local_34,1,1);
  uVar1 = __vbaStrMove();
  piVar4 = piVar2;
  iVar3 = (**(code **)(iVar3 + 0xa4))(piVar2,uVar1);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,0xa4);
  }
  __vbaFreeStr();
  __vbaFreeObj();
  __vbaFreeVar(piVar4);
  uVar1 = (**(code **)(*param_1 + 0x348))(param_1);
  piVar4 = (int *)__vbaObjSet(&local_20,uVar1);
  iVar3 = (**(code **)(*piVar4 + 0xa0))(piVar4,&local_18);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar4,&DAT_00406f50,0xa0);
  }
  uVar1 = (**(code **)(*param_1 + 0x34c))(param_1);
  piVar4 = (int *)__vbaObjSet(&local_24,uVar1);
  iVar3 = (**(code **)(*piVar4 + 0xa0))(piVar4,&local_1c);
  uVar5 = extraout_var;
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar4,&DAT_00406f50,0xa0);
    uVar5 = extraout_var_00;
  }
  pwVar7 = L"C1 rem = ";
  uVar6 = 0x32;
  uVar1 = local_1c;
  __vbaPrintFile(&DAT_00408080,CONCAT22(uVar5,DAT_00422040),L"C1 cal = ",local_18);
  __vbaFreeStrList(2,&local_18,&local_1c,uVar6,pwVar7,uVar1);
  __vbaFreeObjList(2,&local_20,&local_24);
  uVar1 = (**(code **)(*param_1 + 0x354))(param_1);
  piVar4 = (int *)__vbaObjSet(&local_20,uVar1);
  iVar3 = (**(code **)(*piVar4 + 0xa0))(piVar4,&local_18);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar4,&DAT_00406f50,0xa0);
  }
  uVar1 = (**(code **)(*param_1 + 0x358))(param_1);
  piVar4 = (int *)__vbaObjSet(&local_24,uVar1);
  iVar3 = (**(code **)(*piVar4 + 0xa0))(piVar4,&local_1c);
  uVar5 = extraout_var_01;
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar4,&DAT_00406f50,0xa0);
    uVar5 = extraout_var_02;
  }
  pwVar7 = L"C2 rem = ";
  uVar6 = 0x32;
  uVar1 = local_1c;
  __vbaPrintFile(&DAT_00408080,CONCAT22(uVar5,DAT_00422040),L"C2 cal = ",local_18);
  __vbaFreeStrList(2,&local_18,&local_1c,uVar6,pwVar7,uVar1);
  __vbaFreeObjList(2,&local_20,&local_24);
  uVar1 = (**(code **)(*param_1 + 0x360))(param_1);
  piVar4 = (int *)__vbaObjSet(&local_20,uVar1);
  iVar3 = (**(code **)(*piVar4 + 0xa0))(piVar4,&local_18);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar4,&DAT_00406f50,0xa0);
  }
  uVar1 = (**(code **)(*param_1 + 0x364))(param_1);
  piVar4 = (int *)__vbaObjSet(&local_24,uVar1);
  iVar3 = (**(code **)(*piVar4 + 0xa0))(piVar4,&local_1c);
  uVar5 = extraout_var_03;
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar4,&DAT_00406f50,0xa0);
    uVar5 = extraout_var_04;
  }
  pwVar7 = L"C3 rem = ";
  uVar6 = 0x32;
  uVar1 = local_1c;
  __vbaPrintFile(&DAT_00408080,CONCAT22(uVar5,DAT_00422040),L"C3 cal = ",local_18);
  __vbaFreeStrList(2,&local_18,&local_1c,uVar6,pwVar7,uVar1);
  __vbaFreeObjList(2,&local_20,&local_24);
  uVar1 = (**(code **)(*param_1 + 0x350))(param_1);
  piVar4 = (int *)__vbaObjSet(&local_20,uVar1);
  iVar3 = (**(code **)(*piVar4 + 0xa0))(piVar4,&local_18);
  uVar5 = extraout_var_05;
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar4,&DAT_00406f50,0xa0);
    uVar5 = extraout_var_06;
  }
  __vbaPrintFile(&DAT_00407f34,CONCAT22(uVar5,DAT_00422040),L"XTLK 12 = ",local_18);
  __vbaFreeStr();
  __vbaFreeObj();
  uVar1 = (**(code **)(*param_1 + 0x35c))(param_1);
  piVar4 = (int *)__vbaObjSet(&local_20,uVar1);
  iVar3 = (**(code **)(*piVar4 + 0xa0))(piVar4,&local_18);
  uVar5 = extraout_var_07;
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar4,&DAT_00406f50,0xa0);
    uVar5 = extraout_var_08;
  }
  __vbaPrintFile(&DAT_00407f34,CONCAT22(uVar5,DAT_00422040),L"XTLK 21 = ",local_18);
  __vbaFreeStr();
  __vbaFreeObj();
  return;
}


// ---- FUN_004145e0 @ 004145e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_004145e0(int *param_1,float *param_2,float *param_3,float *param_4)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 uVar4;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  undefined2 extraout_var_04;
  ushort in_FPUStatusWord;
  ushort uVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 local_3c [4];
  undefined4 local_2c [2];
  double local_24;
  undefined4 local_1c;
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_004020e6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffff80;
  local_8 = &DAT_00401990;
  local_18 = 0;
  local_1c = 0;
  local_2c[0] = 0;
  local_3c[0] = 0;
  ExceptionList = &pvStack_14;
  piVar7 = param_1;
  uVar1 = (**(code **)(*param_1 + 0x310))(param_1);
  piVar2 = (int *)__vbaObjSet(&local_1c,uVar1);
  __vbaVarDup();
  puVar6 = (undefined4 *)0x1;
  local_2c[0] = 5;
  local_24 = (double)(*param_2 * (float)_DAT_00401250);
  if ((in_FPUStatusWord & 0xd) == 0) {
    iVar3 = *piVar2;
    rtcBstrFromFormatVar(local_2c,local_3c,1,1);
    uVar1 = __vbaStrMove();
    iVar3 = (**(code **)(iVar3 + 0xa4))(piVar2,uVar1);
    uVar5 = 0;
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,0xa4);
    }
    __vbaFreeStr();
    __vbaFreeObj();
    __vbaFreeVarList(2,local_2c,local_3c);
    uVar1 = (**(code **)(*param_1 + 0x318))(param_1);
    piVar2 = (int *)__vbaObjSet(&local_1c,uVar1);
    __vbaVarDup();
    piVar7 = (int *)0x1;
    puVar6 = (undefined4 *)0x1;
    local_2c[0] = 5;
    local_24 = (double)(*param_3 * (float)_DAT_00401250);
    if ((uVar5 & 0xd) == 0) {
      iVar3 = *piVar2;
      rtcBstrFromFormatVar(local_2c,local_3c,1,1);
      uVar1 = __vbaStrMove();
      iVar3 = (**(code **)(iVar3 + 0xa4))(piVar2,uVar1);
      uVar5 = 0;
      if (iVar3 < 0) {
        __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,0xa4);
      }
      __vbaFreeStr();
      __vbaFreeObj();
      __vbaFreeVarList(2,local_2c,local_3c);
      (**(code **)(*param_1 + 800))(param_1);
      piVar2 = (int *)__vbaObjSet(&local_1c);
      __vbaVarDup();
      puVar6 = local_3c;
      piVar7 = (int *)0x1;
      local_2c[0] = 5;
      local_24 = (double)(*param_4 * (float)_DAT_00401250);
      if ((uVar5 & 0xd) == 0) {
        iVar3 = *piVar2;
        rtcBstrFromFormatVar(local_2c,puVar6,1);
        __vbaStrMove();
        iVar3 = (**(code **)(iVar3 + 0xa4))(piVar2);
        if (iVar3 < 0) {
          __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,0xa4);
        }
        __vbaFreeStr();
        __vbaFreeObj();
        __vbaFreeVarList(2,local_2c,local_3c);
        uVar1 = (**(code **)(*param_1 + 800))(param_1);
        piVar7 = (int *)__vbaObjSet(&local_1c,uVar1);
        iVar3 = (**(code **)(*piVar7 + 0x204))(piVar7);
        if (iVar3 < 0) {
          __vbaHresultCheckObj(iVar3,piVar7,&DAT_00406f50,0x204);
        }
        __vbaFreeObj();
        uVar1 = (**(code **)(*param_1 + 0x310))(param_1);
        piVar7 = (int *)__vbaObjSet(&local_1c,uVar1);
        iVar3 = (**(code **)(*piVar7 + 0xa0))(piVar7,&local_18);
        uVar4 = extraout_var;
        if (iVar3 < 0) {
          __vbaHresultCheckObj(iVar3,piVar7,&DAT_00406f50,0xa0);
          uVar4 = extraout_var_00;
        }
        __vbaPrintFile(&DAT_0040814c,CONCAT22(uVar4,DAT_00422040),L"C1 current = ",local_18);
        __vbaFreeStr();
        __vbaFreeObj();
        uVar1 = (**(code **)(*param_1 + 0x318))(param_1);
        piVar7 = (int *)__vbaObjSet(&local_1c,uVar1);
        iVar3 = (**(code **)(*piVar7 + 0xa0))(piVar7,&local_18);
        uVar4 = extraout_var_01;
        if (iVar3 < 0) {
          __vbaHresultCheckObj(iVar3,piVar7,&DAT_00406f50,0xa0);
          uVar4 = extraout_var_02;
        }
        __vbaPrintFile(&DAT_0040814c,CONCAT22(uVar4,DAT_00422040),L"C2 current = ",local_18);
        __vbaFreeStr();
        __vbaFreeObj();
        uVar1 = (**(code **)(*param_1 + 800))(param_1);
        piVar7 = (int *)__vbaObjSet(&local_1c,uVar1);
        iVar3 = (**(code **)(*piVar7 + 0xa0))(piVar7,&local_18);
        uVar4 = extraout_var_03;
        if (iVar3 < 0) {
          __vbaHresultCheckObj(iVar3,piVar7,&DAT_00406f50,0xa0);
          uVar4 = extraout_var_04;
        }
        __vbaPrintFile(&DAT_0040814c,CONCAT22(uVar4,DAT_00422040),L"C3 current = ",local_18);
        __vbaFreeStr();
        __vbaFreeObj();
        return;
      }
    }
  }
  local_2c[0] = 5;
  __vbaFPException(puVar6,piVar7);
  return;
}


// ---- FUN_00414a20 @ 00414a20

void __cdecl FUN_00414a20(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 uVar5;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  undefined2 extraout_var_04;
  undefined4 local_3c [2];
  undefined4 local_34;
  undefined4 local_2c [4];
  undefined4 local_1c;
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_004020e6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffff90;
  local_8 = &DAT_004019a0;
  local_18 = 0;
  local_1c = 0;
  local_2c[0] = 0;
  local_3c[0] = 0;
  ExceptionList = &pvStack_14;
  uVar1 = (**(code **)(*param_1 + 0x30c))(param_1);
  piVar2 = (int *)__vbaObjSet(&local_1c,uVar1);
  __vbaVarDup();
  local_34 = param_2;
  local_3c[0] = 0x4004;
  iVar3 = *piVar2;
  rtcBstrFromFormatVar(local_3c,local_2c,1,1);
  uVar1 = __vbaStrMove();
  piVar4 = piVar2;
  iVar3 = (**(code **)(iVar3 + 0xa4))(piVar2,uVar1);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,0xa4);
  }
  __vbaFreeStr();
  __vbaFreeObj();
  __vbaFreeVar(piVar4);
  uVar1 = (**(code **)(*param_1 + 0x314))(param_1);
  piVar2 = (int *)__vbaObjSet(&local_1c,uVar1);
  __vbaVarDup();
  local_34 = param_3;
  local_3c[0] = 0x4004;
  iVar3 = *piVar2;
  rtcBstrFromFormatVar(local_3c,local_2c,1,1);
  uVar1 = __vbaStrMove();
  piVar4 = piVar2;
  iVar3 = (**(code **)(iVar3 + 0xa4))(piVar2,uVar1);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,0xa4);
  }
  __vbaFreeStr();
  __vbaFreeObj();
  __vbaFreeVar(piVar4);
  uVar1 = (**(code **)(*param_1 + 0x31c))(param_1);
  piVar2 = (int *)__vbaObjSet(&local_1c,uVar1);
  __vbaVarDup();
  local_34 = param_4;
  local_3c[0] = 0x4004;
  iVar3 = *piVar2;
  rtcBstrFromFormatVar(local_3c,local_2c,1,1);
  uVar1 = __vbaStrMove();
  piVar4 = piVar2;
  iVar3 = (**(code **)(iVar3 + 0xa4))(piVar2,uVar1);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,0xa4);
  }
  __vbaFreeStr();
  __vbaFreeObj();
  __vbaFreeVar(piVar4);
  uVar1 = (**(code **)(*param_1 + 0x31c))(param_1);
  piVar4 = (int *)__vbaObjSet(&local_1c,uVar1);
  iVar3 = (**(code **)(*piVar4 + 0x204))(piVar4);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar4,&DAT_00406f50,0x204);
  }
  __vbaFreeObj();
  uVar1 = (**(code **)(*param_1 + 0x30c))(param_1);
  piVar4 = (int *)__vbaObjSet(&local_1c,uVar1);
  iVar3 = (**(code **)(*piVar4 + 0xa0))(piVar4,&local_18);
  uVar5 = extraout_var;
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar4,&DAT_00406f50,0xa0);
    uVar5 = extraout_var_00;
  }
  __vbaPrintFile(&DAT_00407f34,CONCAT22(uVar5,DAT_00422040),L"C1 exi = ",local_18);
  __vbaFreeStr();
  __vbaFreeObj();
  uVar1 = (**(code **)(*param_1 + 0x314))(param_1);
  piVar4 = (int *)__vbaObjSet(&local_1c,uVar1);
  iVar3 = (**(code **)(*piVar4 + 0xa0))(piVar4,&local_18);
  uVar5 = extraout_var_01;
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar4,&DAT_00406f50,0xa0);
    uVar5 = extraout_var_02;
  }
  __vbaPrintFile(&DAT_00407f34,CONCAT22(uVar5,DAT_00422040),L"C2 exi = ",local_18);
  __vbaFreeStr();
  __vbaFreeObj();
  uVar1 = (**(code **)(*param_1 + 0x31c))(param_1);
  piVar4 = (int *)__vbaObjSet(&local_1c,uVar1);
  iVar3 = (**(code **)(*piVar4 + 0xa0))(piVar4,&local_18);
  uVar5 = extraout_var_03;
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar4,&DAT_00406f50,0xa0);
    uVar5 = extraout_var_04;
  }
  __vbaPrintFile(&DAT_00407f34,CONCAT22(uVar5,DAT_00422040),L"C3 exi = ",local_18);
  __vbaFreeStr();
  __vbaFreeObj();
  return;
}


// ---- FUN_00414de0 @ 00414de0

void __cdecl FUN_00414de0(int *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  ushort in_FPUStatusWord;
  float10 fVar4;
  undefined4 local_40 [4];
  undefined4 local_30 [2];
  float local_28;
  undefined4 local_20;
  undefined4 local_1c;
  float local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_004020e6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffff88;
  local_8 = &DAT_004019b8;
  local_1c = 0;
  local_20 = 0;
  local_30[0] = 0;
  local_40[0] = 0;
  ExceptionList = &pvStack_14;
  __vbaStrCopy();
  fVar4 = (float10)FUN_00420380(&local_1c);
  local_18 = (float)fVar4;
  __vbaFreeStr();
  uVar1 = (**(code **)(*param_1 + 0x308))();
  piVar2 = (int *)__vbaObjSet(&local_20,uVar1);
  __vbaVarDup();
  if (DAT_00422000 == 0) {
    fVar4 = (float10)local_18 / (float10)DAT_004019b0;
  }
  else {
    fVar4 = (float10)adj_fdiv_m32(DAT_004019b0);
  }
  local_30[0] = 4;
  local_28 = (float)fVar4;
  if ((in_FPUStatusWord & 0xd) == 0) {
    iVar3 = *piVar2;
    rtcBstrFromFormatVar(local_30,local_40,1,1);
    uVar1 = __vbaStrMove();
    iVar3 = (**(code **)(iVar3 + 0xa4))(piVar2,uVar1);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,0xa4);
    }
    __vbaFreeStr();
    __vbaFreeObj();
    __vbaFreeVarList(2,local_30,local_40);
    return;
  }
  __vbaFPException(1);
  return;
}


// ---- FUN_00414f50 @ 00414f50

void __cdecl FUN_00414f50(int *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  ushort in_FPUStatusWord;
  float10 fVar4;
  undefined4 local_40 [4];
  undefined4 local_30 [2];
  float local_28;
  undefined4 local_20;
  undefined4 local_1c;
  float local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_004020e6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffff88;
  local_8 = &DAT_004019c8;
  local_1c = 0;
  local_20 = 0;
  local_30[0] = 0;
  local_40[0] = 0;
  ExceptionList = &pvStack_14;
  __vbaStrCopy();
  fVar4 = (float10)FUN_00420380(&local_1c);
  local_18 = (float)fVar4;
  __vbaFreeStr();
  uVar1 = (**(code **)(*param_1 + 0x324))();
  piVar2 = (int *)__vbaObjSet(&local_20,uVar1);
  __vbaVarDup();
  local_28 = local_18 * DAT_004019b0;
  local_30[0] = 4;
  if ((in_FPUStatusWord & 0xd) == 0) {
    iVar3 = *piVar2;
    rtcBstrFromFormatVar(local_30,local_40,1,1);
    uVar1 = __vbaStrMove();
    iVar3 = (**(code **)(iVar3 + 0xa4))(piVar2,uVar1);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,0xa4);
    }
    __vbaFreeStr();
    __vbaFreeObj();
    __vbaFreeVarList(2,local_30,local_40);
    return;
  }
  __vbaFPException(1);
  return;
}


// ---- FUN_004150b0 @ 004150b0

void __cdecl FUN_004150b0(int *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  float10 fVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 local_2c [4];
  undefined4 local_1c;
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_004020e6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffffbc;
  local_8 = &DAT_004019d8;
  local_18 = 0;
  local_1c = 0;
  local_2c[0] = 0;
  ExceptionList = &pvStack_14;
  uVar1 = (**(code **)(*param_1 + 0x348))(param_1);
  piVar2 = (int *)__vbaObjSet(&local_1c,uVar1);
  iVar3 = (**(code **)(*piVar2 + 0xa0))(piVar2,&local_18);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,0xa0);
  }
  puVar6 = local_2c;
  uVar1 = local_18;
  FUN_0041fdc0();
  puVar5 = local_2c;
  fVar4 = (float10)__vbaR4Var(puVar5,puVar6,uVar1);
  param_1[0x23] = (int)(float)fVar4;
  __vbaFreeStr();
  __vbaFreeObj();
  __vbaFreeVar(puVar5);
  uVar1 = (**(code **)(*param_1 + 0x34c))(param_1);
  piVar2 = (int *)__vbaObjSet(&local_1c,uVar1);
  iVar3 = (**(code **)(*piVar2 + 0xa0))(piVar2,&local_18);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,0xa0);
  }
  puVar6 = local_2c;
  uVar1 = local_18;
  FUN_0041fdc0();
  puVar5 = local_2c;
  fVar4 = (float10)__vbaR4Var(puVar5,puVar6,uVar1);
  param_1[0x24] = (int)(float)fVar4;
  __vbaFreeStr();
  __vbaFreeObj();
  __vbaFreeVar(puVar5);
  uVar1 = (**(code **)(*param_1 + 0x350))(param_1);
  piVar2 = (int *)__vbaObjSet(&local_1c,uVar1);
  iVar3 = (**(code **)(*piVar2 + 0xa0))(piVar2,&local_18);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,0xa0);
  }
  puVar6 = local_2c;
  uVar1 = local_18;
  FUN_0041fdc0();
  puVar5 = local_2c;
  fVar4 = (float10)__vbaR4Var(puVar5,puVar6,uVar1);
  param_1[0x25] = (int)(float)fVar4;
  __vbaFreeStr();
  __vbaFreeObj();
  __vbaFreeVar(puVar5);
  uVar1 = (**(code **)(*param_1 + 0x354))(param_1);
  piVar2 = (int *)__vbaObjSet(&local_1c,uVar1);
  iVar3 = (**(code **)(*piVar2 + 0xa0))(piVar2,&local_18);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,0xa0);
  }
  puVar6 = local_2c;
  uVar1 = local_18;
  FUN_0041fdc0();
  puVar5 = local_2c;
  fVar4 = (float10)__vbaR4Var(puVar5,puVar6,uVar1);
  param_1[0x26] = (int)(float)fVar4;
  __vbaFreeStr();
  __vbaFreeObj();
  __vbaFreeVar(puVar5);
  uVar1 = (**(code **)(*param_1 + 0x358))(param_1);
  piVar2 = (int *)__vbaObjSet(&local_1c,uVar1);
  iVar3 = (**(code **)(*piVar2 + 0xa0))(piVar2,&local_18);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,0xa0);
  }
  puVar6 = local_2c;
  uVar1 = local_18;
  FUN_0041fdc0();
  puVar5 = local_2c;
  fVar4 = (float10)__vbaR4Var(puVar5,puVar6,uVar1);
  param_1[0x27] = (int)(float)fVar4;
  __vbaFreeStr();
  __vbaFreeObj();
  __vbaFreeVar(puVar5);
  uVar1 = (**(code **)(*param_1 + 0x35c))(param_1);
  piVar2 = (int *)__vbaObjSet(&local_1c,uVar1);
  iVar3 = (**(code **)(*piVar2 + 0xa0))(piVar2,&local_18);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,0xa0);
  }
  puVar6 = local_2c;
  uVar1 = local_18;
  FUN_0041fdc0();
  puVar5 = local_2c;
  fVar4 = (float10)__vbaR4Var(puVar5,puVar6,uVar1);
  param_1[0x28] = (int)(float)fVar4;
  __vbaFreeStr();
  __vbaFreeObj();
  __vbaFreeVar(puVar5);
  uVar1 = (**(code **)(*param_1 + 0x360))(param_1);
  piVar2 = (int *)__vbaObjSet(&local_1c,uVar1);
  iVar3 = (**(code **)(*piVar2 + 0xa0))(piVar2,&local_18);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,0xa0);
  }
  puVar6 = local_2c;
  uVar1 = local_18;
  FUN_0041fdc0();
  puVar5 = local_2c;
  fVar4 = (float10)__vbaR4Var(puVar5,puVar6,uVar1);
  param_1[0x29] = (int)(float)fVar4;
  __vbaFreeStr();
  __vbaFreeObj();
  __vbaFreeVar(puVar5);
  uVar1 = (**(code **)(*param_1 + 0x364))(param_1);
  piVar2 = (int *)__vbaObjSet(&local_1c,uVar1);
  iVar3 = (**(code **)(*piVar2 + 0xa0))(piVar2,&local_18);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,0xa0);
  }
  puVar6 = local_2c;
  uVar1 = local_18;
  FUN_0041fdc0();
  puVar5 = local_2c;
  fVar4 = (float10)__vbaR4Var(puVar5,puVar6,uVar1);
  param_1[0x2a] = (int)(float)fVar4;
  __vbaFreeStr();
  __vbaFreeObj();
  __vbaFreeVar(puVar5);
  return;
}


// ---- FUN_004154b0 @ 004154b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_004154b0(undefined4 param_1,float *param_2)

{
  undefined4 uVar1;
  undefined2 extraout_var;
  ushort in_FPUStatusWord;
  undefined4 local_3c [4];
  undefined4 local_2c [2];
  double local_24;
  undefined4 local_1c;
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_004020e6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffff90;
  local_8 = &DAT_004019e8;
  local_18 = 0;
  local_1c = 0;
  local_2c[0] = 0;
  local_3c[0] = 0;
  ExceptionList = &pvStack_14;
  FUN_0041d3d0(param_2);
  __vbaVarDup();
  local_2c[0] = 5;
  local_24 = (double)(*param_2 * (float)_DAT_00401250);
  if ((in_FPUStatusWord & 0xd) == 0) {
    rtcBstrFromFormatVar(local_2c,local_3c,1,1);
    __vbaStrMove();
    local_1c = 0;
    uVar1 = __vbaStrMove(&DAT_00408140);
    __vbaPrintFile(&DAT_0040814c,CONCAT22(extraout_var,DAT_00422040),L"C1 current set to ",uVar1);
    __vbaFreeStrList(2,&local_18,&local_1c);
    __vbaFreeVarList(2,local_2c,local_3c);
    return;
  }
  __vbaFPException(1);
  return;
}


// ---- FUN_004155e0 @ 004155e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_004155e0(undefined4 param_1,float *param_2)

{
  undefined4 uVar1;
  undefined2 extraout_var;
  ushort in_FPUStatusWord;
  undefined4 local_3c [4];
  undefined4 local_2c [2];
  double local_24;
  undefined4 local_1c;
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined1 *local_8;
  
  puStack_10 = &DAT_004020e6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffff90;
  local_8 = &LAB_004019f8;
  local_18 = 0;
  local_1c = 0;
  local_2c[0] = 0;
  local_3c[0] = 0;
  ExceptionList = &pvStack_14;
  FUN_0041d530(param_2);
  __vbaVarDup();
  local_2c[0] = 5;
  local_24 = (double)(*param_2 * (float)_DAT_00401250);
  if ((in_FPUStatusWord & 0xd) == 0) {
    rtcBstrFromFormatVar(local_2c,local_3c,1,1);
    __vbaStrMove();
    local_1c = 0;
    uVar1 = __vbaStrMove(&DAT_00408140);
    __vbaPrintFile(&DAT_0040814c,CONCAT22(extraout_var,DAT_00422040),L"C2 current set to ",uVar1);
    __vbaFreeStrList(2,&local_18,&local_1c);
    __vbaFreeVarList(2,local_2c,local_3c);
    return;
  }
  __vbaFPException(1);
  return;
}


// ---- FUN_00415710 @ 00415710

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00415710(undefined4 param_1,float *param_2)

{
  undefined4 uVar1;
  undefined2 extraout_var;
  ushort in_FPUStatusWord;
  undefined4 local_3c [4];
  undefined4 local_2c [2];
  double local_24;
  undefined4 local_1c;
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_004020e6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffff90;
  local_8 = &DAT_00401a08;
  local_18 = 0;
  local_1c = 0;
  local_2c[0] = 0;
  local_3c[0] = 0;
  ExceptionList = &pvStack_14;
  FUN_0041d690(param_2);
  __vbaVarDup();
  local_2c[0] = 5;
  local_24 = (double)(*param_2 * (float)_DAT_00401250);
  if ((in_FPUStatusWord & 0xd) == 0) {
    rtcBstrFromFormatVar(local_2c,local_3c,1,1);
    __vbaStrMove();
    local_1c = 0;
    uVar1 = __vbaStrMove(&DAT_00408140);
    __vbaPrintFile(&DAT_0040814c,CONCAT22(extraout_var,DAT_00422040),L"C3 current set to ",uVar1);
    __vbaFreeStrList(2,&local_18,&local_1c);
    __vbaFreeVarList(2,local_2c,local_3c);
    return;
  }
  __vbaFPException(1);
  return;
}


// ---- FUN_00415840 @ 00415840

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00415840(int *param_1,float *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  ushort in_FPUStatusWord;
  float10 fVar4;
  undefined4 local_ac [2];
  undefined4 *local_a4;
  undefined4 local_9c [2];
  wchar_t *local_94;
  undefined4 local_8c [2];
  wchar_t *local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_74;
  undefined4 local_6c;
  undefined4 local_64;
  undefined4 local_5c [2];
  undefined4 local_54;
  undefined4 local_4c [2];
  undefined4 local_44;
  undefined4 local_3c [2];
  double local_34;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  wchar_t local_18 [2];
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_004020e6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xfffffefc;
  local_8 = &DAT_00401a20;
  local_18[0] = L'\0';
  local_18[1] = L'\0';
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_3c[0] = 0;
  local_4c[0] = 0;
  local_5c[0] = 0;
  local_6c = 0;
  local_7c = 0;
  local_8c[0] = 0;
  local_ac[0] = 0;
  local_94 = L"00.0";
  local_9c[0] = 8;
  ExceptionList = &pvStack_14;
  __vbaVarDup();
  local_3c[0] = 5;
  local_34 = (double)(*param_2 * (float)_DAT_00401250);
  if ((in_FPUStatusWord & 0xd) == 0) {
    rtcBstrFromFormatVar(local_3c,local_4c,1,1);
    __vbaStrMove();
    __vbaFreeVarList(2,local_3c,local_4c);
    __vbaStrCopy();
    local_1c = 0;
    while ((short)local_1c == 0) {
      local_a4 = &local_24;
      local_94 = local_18;
      local_74 = 0x80020004;
      local_7c = 10;
      local_64 = 0x80020004;
      local_6c = 10;
      local_54 = 0x80020004;
      local_5c[0] = 10;
      local_44 = 0x80020004;
      local_4c[0] = 10;
      local_ac[0] = 0x4008;
      local_9c[0] = 0x4008;
      local_84 = 
      L" If you wish to change the required WD value, please enter the new value in the input box below :"
      ;
      local_8c[0] = 8;
      __vbaVarDup();
      rtcInputBox(local_3c,local_9c,local_ac,local_4c,local_5c);
      __vbaStrMove();
      __vbaFreeVarList(5,local_3c,local_4c,local_5c);
      __vbaStrCmp();
      FUN_0041fdc0();
      local_84 = (wchar_t *)0x0;
      local_80 = 0x408f4000;
      local_8c[0] = 5;
      uVar1 = __vbaVarDiv(local_4c,local_8c,local_3c);
      fVar4 = (float10)__vbaR4Var(uVar1);
      *param_2 = (float)fVar4;
      __vbaFreeVar();
      in_FPUStatusWord = 0;
      if (*param_2 <= _DAT_00401a18 && _DAT_00401978 <= *param_2) {
        local_1c = 0xffffffff;
      }
      else {
        rtcBeep();
        local_54 = 0x80020004;
        local_5c[0] = 10;
        local_44 = 0x80020004;
        local_4c[0] = 10;
        local_94 = (wchar_t *)&DAT_00422068;
        local_9c[0] = 0x4008;
        local_84 = L"Please re-enter with a value in the range 0 to 50 mm";
        local_8c[0] = 8;
        __vbaVarDup();
        rtcMsgBox(local_3c,0x30,local_9c);
        __vbaFreeVarList(3,local_3c);
      }
    }
    uVar1 = (**(code **)(*param_1 + 0x324))();
    piVar2 = (int *)__vbaObjSet(&local_2c,uVar1);
    local_94 = L"00.0";
    local_9c[0] = 8;
    __vbaVarDup();
    local_3c[0] = 5;
    local_34 = (double)(*param_2 * (float)_DAT_00401250);
    if ((in_FPUStatusWord & 0xd) == 0) {
      iVar3 = *piVar2;
      rtcBstrFromFormatVar(local_3c,local_4c,1,1);
      uVar1 = __vbaStrMove();
      iVar3 = (**(code **)(iVar3 + 0xa4))(piVar2,uVar1);
      if (iVar3 < 0) {
        __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,0xa4);
      }
      __vbaFreeStr();
      __vbaFreeObj();
      __vbaFreeVarList(2,local_3c,local_4c);
      __vbaFreeStr(&LAB_00415c0c);
      __vbaFreeStr();
      __vbaFreeStr();
      return;
    }
  }
  local_3c[0] = 5;
  __vbaFPException(local_4c,1,1);
  return;
}


// ---- FUN_00415c30 @ 00415c30

void __cdecl FUN_00415c30(int param_1)

{
  short sVar1;
  undefined4 *puVar2;
  undefined4 local_5c [2];
  undefined4 *local_54;
  undefined4 local_4c;
  undefined4 local_44;
  undefined4 local_3c [2];
  undefined4 local_34;
  undefined4 local_2c [4];
  undefined4 local_1c [2];
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_004020e6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffff64;
  local_8 = &DAT_00401a30;
  puVar2 = &DAT_004220ac;
  local_1c[0] = 0;
  local_2c[0] = 0;
  local_3c[0] = 0;
  local_4c = 0;
  local_5c[0] = 0;
  ExceptionList = &pvStack_14;
  sVar1 = FUN_00420ea0(&DAT_004220ac);
  if (sVar1 == 0) {
    *(undefined4 *)(param_1 + 0x34) = DAT_004220ac;
    *(undefined4 *)(param_1 + 0x38) = DAT_004220b0;
    *(undefined4 *)(param_1 + 0x3c) = DAT_004220b4;
    *(undefined4 *)(param_1 + 0x40) = DAT_004220b8;
    *(undefined4 *)(param_1 + 0x44) = DAT_004220bc;
    *(undefined4 *)(param_1 + 0x48) = DAT_004220c0;
    *(undefined4 *)(param_1 + 100) = DAT_004220c4;
    *(undefined4 *)(param_1 + 0x68) = DAT_004220c8;
    *(undefined4 *)(param_1 + 0x4c) = DAT_004220cc;
    *(undefined4 *)(param_1 + 0x50) = DAT_004220d0;
    *(undefined4 *)(param_1 + 0x54) = DAT_004220d4;
    *(undefined4 *)(param_1 + 0x7c) = DAT_004220d8;
    *(undefined4 *)(param_1 + 0x58) = DAT_004220dc;
    *(undefined4 *)(param_1 + 0x5c) = DAT_004220e0;
    *(undefined4 *)(param_1 + 0x60) = DAT_004220e4;
    *(undefined4 *)(param_1 + 0x6c) = DAT_004220e8;
    *(undefined4 *)(param_1 + 0x70) = DAT_004220ec;
    *(undefined4 *)(param_1 + 0x74) = DAT_004220f0;
    *(undefined4 *)(param_1 + 0x78) = DAT_004220f4;
    *(undefined4 *)(param_1 + 0x80) = DAT_004220f8;
    *(undefined4 *)(param_1 + 0x84) = DAT_004220fc;
    *(undefined4 *)(param_1 + 0x88) = DAT_00422100;
  }
  else {
    __vbaStrCopy(puVar2);
    local_44 = 0x80020004;
    local_34 = 0x80020004;
    local_4c = 10;
    local_3c[0] = 10;
    __vbaVarDup();
    local_54 = local_1c;
    local_5c[0] = 0x4008;
    rtcMsgBox(local_5c,0,local_2c,local_3c);
    __vbaFreeVarList(3,local_2c,local_3c);
  }
  __vbaFreeStr();
  return;
}


// ---- FUN_00415f50 @ 00415f50

void __cdecl FUN_00415f50(int *param_1,short *param_2)

{
  short sVar1;
  undefined4 uVar2;
  undefined2 extraout_var;
  int *piVar3;
  int iVar4;
  int *piVar5;
  undefined2 extraout_var_00;
  float10 fVar6;
  int *piVar7;
  wchar_t *pwVar8;
  int *piVar9;
  int local_98 [9];
  undefined4 local_74;
  wchar_t *local_6c;
  undefined4 local_64 [2];
  int *local_5c;
  undefined4 local_54 [2];
  undefined4 local_4c;
  int local_44 [2];
  undefined4 local_3c;
  undefined4 local_34 [4];
  undefined4 local_24;
  undefined4 local_20;
  int local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_004020e6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffff3c;
  local_8 = &DAT_00401a40;
  pwVar8 = L"The calculated calibration values are shown in red.";
  local_18 = 0;
  local_20 = 0;
  local_24 = 0;
  local_34[0] = 0;
  local_44[0] = 0;
  local_54[0] = 0;
  local_64[0] = 0;
  local_74 = 0;
  local_98[0] = 0;
  ExceptionList = &pvStack_14;
  rtcBstrFromAnsi(10);
  uVar2 = __vbaStrMove(pwVar8);
  __vbaStrCat(uVar2,pwVar8);
  __vbaStrMove();
  __vbaFreeStr();
  __vbaStrCat(L"Do you want to transfer these to LEO?",local_18);
  __vbaStrMove();
  local_54[0] = 10;
  local_44[0] = 10;
  local_4c = 0x80020004;
  local_3c = 0x80020004;
  local_6c = L"Transfer new calibration";
  local_74 = 8;
  __vbaVarDup();
  local_5c = &local_18;
  local_64[0] = 0x4008;
  rtcMsgBox(local_64,0x34,local_34,local_44,local_54);
  sVar1 = __vbaI2I4();
  piVar9 = local_44;
  __vbaFreeVarList(3,local_34,piVar9);
  if (sVar1 == 7) {
    __vbaPrintFile(&DAT_0040701c,CONCAT22(extraout_var,DAT_00422040));
    (**(code **)(*param_1 + 0x82c))();
    (**(code **)(*param_1 + 0x800))();
    if (*param_2 == 1) {
      (**(code **)(*param_1 + 0x734))();
    }
    if (*param_2 == 2) {
      (**(code **)(*param_1 + 0x750))();
    }
  }
  else {
    if (*param_2 == 1) {
      local_98[0] = 0;
      FUN_0041d7f0(param_1 + 0x23,(undefined2 *)local_98);
      piVar9 = param_1 + 0x24;
      local_98[0] = 1;
      FUN_0041d7f0(piVar9,(undefined2 *)local_98);
    }
    if (*param_2 == 2) {
      local_98[0] = 3;
      FUN_0041d7f0(param_1 + 0x26,(undefined2 *)local_98);
      local_98[0] = 4;
      FUN_0041d7f0(param_1 + 0x27,(undefined2 *)local_98);
      local_98[0] = 7;
      FUN_0041d7f0(param_1 + 0x25,(undefined2 *)local_98);
      piVar9 = param_1 + 0x28;
      local_98[0] = 8;
      FUN_0041d7f0(piVar9,(undefined2 *)local_98);
    }
    if (*param_2 == 1) {
      local_98[0] = 0;
      fVar6 = (float10)FUN_0041d030((undefined2 *)local_98);
      param_1[0x23] = (int)(float)fVar6;
      piVar9 = local_98;
      local_98[0] = 1;
      fVar6 = (float10)FUN_0041d030((undefined2 *)piVar9);
      param_1[0x24] = (int)(float)fVar6;
    }
    if (*param_2 == 2) {
      local_98[0] = 3;
      fVar6 = (float10)FUN_0041d030((undefined2 *)local_98);
      param_1[0x26] = (int)(float)fVar6;
      local_98[0] = 4;
      fVar6 = (float10)FUN_0041d030((undefined2 *)local_98);
      param_1[0x27] = (int)(float)fVar6;
      local_98[0] = 7;
      fVar6 = (float10)FUN_0041d030((undefined2 *)local_98);
      param_1[0x25] = (int)(float)fVar6;
      local_98[0] = 8;
      fVar6 = (float10)FUN_0041d030((undefined2 *)local_98);
      param_1[0x28] = (int)(float)fVar6;
    }
    piVar7 = param_1;
    uVar2 = (**(code **)(*param_1 + 0x348))(param_1);
    piVar3 = (int *)__vbaObjSet(&local_24,uVar2);
    local_6c = L"0.0000";
    local_74 = 8;
    __vbaVarDup();
    local_5c = param_1 + 0x23;
    local_64[0] = 0x4004;
    iVar4 = *piVar3;
    rtcBstrFromFormatVar(local_64,local_34,1,1);
    uVar2 = __vbaStrMove();
    piVar5 = piVar3;
    iVar4 = (**(code **)(iVar4 + 0xa4))(piVar3,uVar2);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar3,&DAT_00406f50,0xa4);
    }
    __vbaFreeStr();
    __vbaFreeObj();
    __vbaFreeVar(piVar5);
    uVar2 = (**(code **)(*param_1 + 0x34c))(param_1);
    piVar3 = (int *)__vbaObjSet(&local_24,uVar2);
    local_6c = L"0.0000";
    local_74 = 8;
    __vbaVarDup();
    local_5c = param_1 + 0x24;
    local_64[0] = 0x4004;
    iVar4 = *piVar3;
    rtcBstrFromFormatVar(local_64,local_34,1,1);
    uVar2 = __vbaStrMove();
    piVar5 = piVar3;
    iVar4 = (**(code **)(iVar4 + 0xa4))(piVar3,uVar2);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar3,&DAT_00406f50,0xa4);
    }
    __vbaFreeStr();
    __vbaFreeObj();
    __vbaFreeVar(piVar5);
    uVar2 = (**(code **)(*param_1 + 0x350))(param_1);
    piVar3 = (int *)__vbaObjSet(&local_24,uVar2);
    local_6c = L"0.000";
    local_74 = 8;
    __vbaVarDup();
    local_5c = param_1 + 0x25;
    local_64[0] = 0x4004;
    iVar4 = *piVar3;
    rtcBstrFromFormatVar(local_64,local_34,1,1);
    uVar2 = __vbaStrMove();
    piVar5 = piVar3;
    iVar4 = (**(code **)(iVar4 + 0xa4))(piVar3,uVar2);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar3,&DAT_00406f50,0xa4);
    }
    __vbaFreeStr();
    __vbaFreeObj();
    __vbaFreeVar(piVar5);
    uVar2 = (**(code **)(*param_1 + 0x354))(param_1);
    piVar3 = (int *)__vbaObjSet(&local_24,uVar2);
    local_6c = L"0.0000";
    local_74 = 8;
    __vbaVarDup();
    local_5c = param_1 + 0x26;
    local_64[0] = 0x4004;
    iVar4 = *piVar3;
    rtcBstrFromFormatVar(local_64,local_34,1,1);
    uVar2 = __vbaStrMove();
    piVar5 = piVar3;
    iVar4 = (**(code **)(iVar4 + 0xa4))(piVar3,uVar2);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar3,&DAT_00406f50,0xa4);
    }
    __vbaFreeStr();
    __vbaFreeObj();
    __vbaFreeVar(piVar5);
    uVar2 = (**(code **)(*param_1 + 0x358))(param_1);
    piVar3 = (int *)__vbaObjSet(&local_24,uVar2);
    local_6c = L"0.0000";
    local_74 = 8;
    __vbaVarDup();
    local_5c = param_1 + 0x27;
    local_64[0] = 0x4004;
    iVar4 = *piVar3;
    rtcBstrFromFormatVar(local_64,local_34,1,1);
    uVar2 = __vbaStrMove();
    piVar5 = piVar3;
    iVar4 = (**(code **)(iVar4 + 0xa4))(piVar3,uVar2);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar3,&DAT_00406f50,0xa4);
    }
    __vbaFreeStr();
    __vbaFreeObj();
    __vbaFreeVar(piVar5);
    uVar2 = (**(code **)(*param_1 + 0x35c))(param_1);
    piVar5 = (int *)__vbaObjSet(&local_24,uVar2);
    local_6c = L"0.000";
    local_74 = 8;
    __vbaVarDup();
    local_5c = param_1 + 0x28;
    local_64[0] = 0x4004;
    iVar4 = *piVar5;
    rtcBstrFromFormatVar(local_64,local_34,1,1);
    uVar2 = __vbaStrMove();
    iVar4 = (**(code **)(iVar4 + 0xa4))(piVar5,uVar2);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar5,&DAT_00406f50,0xa4);
    }
    __vbaFreeStr();
    __vbaFreeObj();
    __vbaFreeVar(piVar7);
    __vbaPrintFile(&DAT_0040701c,CONCAT22(extraout_var_00,DAT_00422040),
                   L"New calibration transferred to LEO",piVar9);
    if (*param_2 == 1) {
      (**(code **)(*param_1 + 0x730))();
    }
    if (*param_2 == 2) {
      (**(code **)(*param_1 + 0x74c))();
    }
  }
  __vbaFreeStr();
  return;
}


// ---- FUN_004166a0 @ 004166a0

void __cdecl FUN_004166a0(int *param_1)

{
  float *pfVar1;
  float *pfVar2;
  short sVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  float10 fVar8;
  undefined4 *puVar9;
  wchar_t *pwVar10;
  undefined4 *puVar11;
  undefined4 local_98 [9];
  undefined4 local_74;
  wchar_t *local_6c;
  undefined4 local_64 [2];
  float *local_5c;
  undefined4 local_54 [2];
  undefined4 local_4c;
  undefined4 local_44 [2];
  undefined4 local_3c;
  undefined4 local_34 [4];
  undefined4 local_24;
  undefined4 local_20;
  float local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_004020e6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffff4c;
  local_8 = &DAT_00401a50;
  pwVar10 = L"The calculated calibration values are shown in red.";
  local_18 = 0.0;
  local_20 = 0;
  local_24 = 0;
  local_34[0] = 0;
  local_44[0] = 0;
  local_54[0] = 0;
  local_64[0] = 0;
  local_74 = 0;
  local_98[0] = 0;
  ExceptionList = &pvStack_14;
  rtcBstrFromAnsi(10);
  uVar4 = __vbaStrMove(pwVar10);
  __vbaStrCat(uVar4,pwVar10);
  __vbaStrMove();
  __vbaFreeStr();
  __vbaStrCat(L"Do you want to transfer these to LEO?",local_18);
  __vbaStrMove();
  local_54[0] = 10;
  local_44[0] = 10;
  local_4c = 0x80020004;
  local_3c = 0x80020004;
  local_6c = L"Transfer new calibration";
  local_74 = 8;
  __vbaVarDup();
  local_5c = &local_18;
  local_64[0] = 0x4008;
  rtcMsgBox(local_64,0x34,local_34,local_44,local_54);
  sVar3 = __vbaI2I4();
  __vbaFreeVarList(3,local_34,local_44);
  if (sVar3 == 7) {
    (**(code **)(*param_1 + 0x82c))();
    piVar5 = param_1;
    (**(code **)(*param_1 + 0x800))(param_1);
    __vbaPrintFile(&DAT_0040701c,CONCAT22(extraout_var_00,DAT_00422040),
                   L"New calibration NOT transferred!",piVar5);
    (**(code **)(*param_1 + 0x764))();
  }
  else {
    __vbaStrCopy();
    (**(code **)(*param_1 + 0x38c))();
    piVar5 = (int *)__vbaObjSet();
    iVar6 = (**(code **)(*piVar5 + 0x54))();
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_00406fdc,0x54);
    }
    __vbaFreeObj();
    pfVar1 = (float *)(param_1 + 0x29);
    local_98[0] = 5;
    FUN_0041d7f0(pfVar1,(undefined2 *)local_98);
    pfVar2 = (float *)(param_1 + 0x2a);
    local_98[0] = 6;
    FUN_0041d7f0(pfVar2,(undefined2 *)local_98);
    puVar11 = local_98;
    local_98[0] = 5;
    fVar8 = (float10)FUN_0041d030((undefined2 *)puVar11);
    *pfVar1 = (float)fVar8;
    puVar9 = local_98;
    local_98[0] = 6;
    fVar8 = (float10)FUN_0041d030((undefined2 *)puVar9);
    *pfVar2 = (float)fVar8;
    uVar4 = (**(code **)(*param_1 + 0x360))(param_1);
    piVar7 = (int *)__vbaObjSet(&local_24,uVar4);
    local_6c = L"0.0000";
    local_74 = 8;
    __vbaVarDup();
    local_64[0] = 0x4004;
    iVar6 = *piVar7;
    local_5c = pfVar1;
    rtcBstrFromFormatVar(local_64,local_34,1,1);
    uVar4 = __vbaStrMove();
    piVar5 = piVar7;
    iVar6 = (**(code **)(iVar6 + 0xa4))(piVar7,uVar4);
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar7,&DAT_00406f50,0xa4);
    }
    __vbaFreeStr();
    __vbaFreeObj();
    __vbaFreeVar(piVar5);
    uVar4 = (**(code **)(*param_1 + 0x364))(param_1);
    piVar7 = (int *)__vbaObjSet(&local_24,uVar4);
    local_6c = L"0.0000";
    local_74 = 8;
    __vbaVarDup();
    local_64[0] = 0x4004;
    iVar6 = *piVar7;
    local_5c = pfVar2;
    rtcBstrFromFormatVar(local_64,local_34,1,1);
    uVar4 = __vbaStrMove();
    piVar5 = piVar7;
    iVar6 = (**(code **)(iVar6 + 0xa4))(piVar7,uVar4);
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar7,&DAT_00406f50,0xa4);
    }
    __vbaFreeStr();
    __vbaFreeObj();
    __vbaFreeVar(piVar5);
    __vbaPrintFile(&DAT_0040701c,CONCAT22(extraout_var,DAT_00422040),
                   L"New calibration transferred to LEO",uVar4);
    __vbaStrCopy(puVar9,puVar11);
    uVar4 = (**(code **)(*param_1 + 0x38c))(param_1);
    piVar5 = (int *)__vbaObjSet(&local_24,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x54))(piVar5,DAT_00422030);
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_00406fdc,0x54);
    }
    __vbaFreeObj();
    (**(code **)(*param_1 + 0x760))(param_1);
  }
  __vbaFreeStr();
  return;
}


// ---- FUN_00416ab0 @ 00416ab0

undefined4 FUN_00416ab0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar1 = param_1 + 0x2b;
  (**(code **)(*param_1 + 0x7bc))(param_1,piVar1);
  piVar2 = param_1 + 0x2c;
  (**(code **)(*param_1 + 0x7c0))(param_1,piVar2);
  piVar3 = param_1 + 0x2d;
  (**(code **)(*param_1 + 0x7c4))(param_1,piVar3);
  (**(code **)(*param_1 + 0x804))(param_1,piVar1,piVar2,piVar3);
  (**(code **)(*param_1 + 0x740))(param_1,param_1 + 0x2e,param_1 + 0x2f,piVar1,piVar2);
  (**(code **)(*param_1 + 0x774))(param_1,param_1 + 0x30,piVar3);
  (**(code **)(*param_1 + 0x808))(param_1,param_1 + 0x2e,param_1 + 0x2f,param_1 + 0x30);
  return 0;
}


// ---- FUN_00416b50 @ 00416b50

void __cdecl FUN_00416b50(uint param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 local_20;
  undefined4 local_1c;
  void *pvStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004020e6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc4;
  local_c = &DAT_00401a60;
  local_8 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar4 + 4))(piVar4);
  local_1c = 0;
  local_20 = 0;
  uVar1 = (**(code **)(*piVar4 + 0x348))(piVar4);
  piVar2 = (int *)__vbaObjSet(&local_20,uVar1);
  puVar5 = &local_1c;
  piVar4 = piVar2;
  iVar3 = (**(code **)(*piVar2 + 0xa0))(piVar2,puVar5);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,0xa0);
  }
  __vbaStrCopy(piVar4,puVar5);
  __vbaFreeStr();
  __vbaFreeObj();
  return;
}


// ---- FUN_00416c40 @ 00416c40

void __cdecl FUN_00416c40(uint param_1,short *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_1c;
  void *pvStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004020e6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc8;
  local_c = &DAT_00401a70;
  local_8 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar4 + 4))(piVar4);
  local_1c = 0;
  if (*param_2 == 0xd) {
    uVar1 = (**(code **)(*piVar4 + 0x348))(piVar4);
    piVar2 = (int *)__vbaObjSet(&local_1c,uVar1);
    iVar3 = (**(code **)(*piVar2 + 0xa4))(piVar2,piVar4[0x3a]);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,0xa4);
    }
    __vbaFreeObj();
  }
  return;
}


// ---- FUN_00416d10 @ 00416d10

undefined4 FUN_00416d10(uint param_1)

{
  int *piVar1;
  void *local_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004020e6;
  local_18 = ExceptionList;
  local_10 = &stack0xffffffd4;
  local_c = &DAT_00401a80;
  local_8 = param_1 & 1;
  piVar1 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &local_18;
  (**(code **)(*piVar1 + 4))(piVar1);
  local_8 = 0;
  (**(code **)(*piVar1 + 8))(piVar1);
  ExceptionList = local_18;
  return local_8;
}


// ---- FUN_00416d80 @ 00416d80

void __cdecl FUN_00416d80(uint param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 local_20;
  undefined4 local_1c;
  void *pvStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004020e6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc4;
  local_c = &DAT_00401a88;
  local_8 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar4 + 4))(piVar4);
  local_1c = 0;
  local_20 = 0;
  uVar1 = (**(code **)(*piVar4 + 0x354))(piVar4);
  piVar2 = (int *)__vbaObjSet(&local_20,uVar1);
  puVar5 = &local_1c;
  piVar4 = piVar2;
  iVar3 = (**(code **)(*piVar2 + 0xa0))(piVar2,puVar5);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,0xa0);
  }
  __vbaStrCopy(piVar4,puVar5);
  __vbaFreeStr();
  __vbaFreeObj();
  return;
}


// ---- FUN_00416e70 @ 00416e70

void __cdecl FUN_00416e70(uint param_1,short *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_1c;
  void *pvStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004020e6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc8;
  local_c = &DAT_00401a98;
  local_8 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar4 + 4))(piVar4);
  local_1c = 0;
  if (*param_2 == 0xd) {
    uVar1 = (**(code **)(*piVar4 + 0x354))(piVar4);
    piVar2 = (int *)__vbaObjSet(&local_1c,uVar1);
    iVar3 = (**(code **)(*piVar2 + 0xa4))(piVar2,piVar4[0x3b]);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,0xa4);
    }
    __vbaFreeObj();
  }
  return;
}


// ---- FUN_00416f40 @ 00416f40

void __cdecl FUN_00416f40(uint param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 local_20;
  undefined4 local_1c;
  void *pvStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004020e6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc4;
  local_c = &DAT_00401aa8;
  local_8 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar4 + 4))(piVar4);
  local_1c = 0;
  local_20 = 0;
  uVar1 = (**(code **)(*piVar4 + 0x360))(piVar4);
  piVar2 = (int *)__vbaObjSet(&local_20,uVar1);
  puVar5 = &local_1c;
  piVar4 = piVar2;
  iVar3 = (**(code **)(*piVar2 + 0xa0))(piVar2,puVar5);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,0xa0);
  }
  __vbaStrCopy(piVar4,puVar5);
  __vbaFreeStr();
  __vbaFreeObj();
  return;
}


// ---- FUN_00417030 @ 00417030

void __cdecl FUN_00417030(uint param_1,short *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_1c;
  void *pvStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004020e6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc8;
  local_c = &DAT_00401ab8;
  local_8 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar4 + 4))(piVar4);
  local_1c = 0;
  if (*param_2 == 0xd) {
    uVar1 = (**(code **)(*piVar4 + 0x360))(piVar4);
    piVar2 = (int *)__vbaObjSet(&local_1c,uVar1);
    iVar3 = (**(code **)(*piVar2 + 0xa4))(piVar2,piVar4[0x3c]);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,0xa4);
    }
    __vbaFreeObj();
  }
  return;
}


// ---- FUN_00417100 @ 00417100

void __cdecl FUN_00417100(uint param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 local_20;
  undefined4 local_1c;
  void *pvStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004020e6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc4;
  local_c = &DAT_00401ac8;
  local_8 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar4 + 4))(piVar4);
  local_1c = 0;
  local_20 = 0;
  uVar1 = (**(code **)(*piVar4 + 0x310))(piVar4);
  piVar2 = (int *)__vbaObjSet(&local_20,uVar1);
  puVar5 = &local_1c;
  piVar4 = piVar2;
  iVar3 = (**(code **)(*piVar2 + 0xa0))(piVar2,puVar5);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,0xa0);
  }
  __vbaStrCopy(piVar4,puVar5);
  __vbaFreeStr();
  __vbaFreeObj();
  return;
}


// ---- FUN_004171f0 @ 004171f0

void __cdecl FUN_004171f0(uint param_1,short *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_1c;
  void *pvStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004020e6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc8;
  local_c = &DAT_00401ad8;
  local_8 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar4 + 4))(piVar4);
  local_1c = 0;
  if (*param_2 == 0xd) {
    uVar1 = (**(code **)(*piVar4 + 0x310))(piVar4);
    piVar2 = (int *)__vbaObjSet(&local_1c,uVar1);
    iVar3 = (**(code **)(*piVar2 + 0xa4))(piVar2,piVar4[0x45]);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,0xa4);
    }
    __vbaFreeObj();
  }
  return;
}


// ---- FUN_004172c0 @ 004172c0

void __cdecl FUN_004172c0(uint param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 local_20;
  undefined4 local_1c;
  void *pvStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004020e6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc4;
  local_c = &DAT_00401ae8;
  local_8 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar4 + 4))(piVar4);
  local_1c = 0;
  local_20 = 0;
  uVar1 = (**(code **)(*piVar4 + 0x318))(piVar4);
  piVar2 = (int *)__vbaObjSet(&local_20,uVar1);
  puVar5 = &local_1c;
  piVar4 = piVar2;
  iVar3 = (**(code **)(*piVar2 + 0xa0))(piVar2,puVar5);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,0xa0);
  }
  __vbaStrCopy(piVar4,puVar5);
  __vbaFreeStr();
  __vbaFreeObj();
  return;
}


// ---- FUN_004173b0 @ 004173b0

void __cdecl FUN_004173b0(uint param_1,short *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_1c;
  void *pvStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004020e6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc8;
  local_c = &DAT_00401af8;
  local_8 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar4 + 4))(piVar4);
  local_1c = 0;
  if (*param_2 == 0xd) {
    uVar1 = (**(code **)(*piVar4 + 0x318))(piVar4);
    piVar2 = (int *)__vbaObjSet(&local_1c,uVar1);
    iVar3 = (**(code **)(*piVar2 + 0xa4))(piVar2,piVar4[0x46]);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,0xa4);
    }
    __vbaFreeObj();
  }
  return;
}


// ---- FUN_00417480 @ 00417480

void __cdecl FUN_00417480(uint param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 local_20;
  undefined4 local_1c;
  void *pvStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004020e6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc4;
  local_c = &DAT_00401b08;
  local_8 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar4 + 4))(piVar4);
  local_1c = 0;
  local_20 = 0;
  uVar1 = (**(code **)(*piVar4 + 800))(piVar4);
  piVar2 = (int *)__vbaObjSet(&local_20,uVar1);
  puVar5 = &local_1c;
  piVar4 = piVar2;
  iVar3 = (**(code **)(*piVar2 + 0xa0))(piVar2,puVar5);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,0xa0);
  }
  __vbaStrCopy(piVar4,puVar5);
  __vbaFreeStr();
  __vbaFreeObj();
  return;
}


// ---- FUN_00417570 @ 00417570

void __cdecl FUN_00417570(uint param_1,short *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_1c;
  void *pvStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004020e6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc8;
  local_c = &DAT_00401b18;
  local_8 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar4 + 4))(piVar4);
  local_1c = 0;
  if (*param_2 == 0xd) {
    uVar1 = (**(code **)(*piVar4 + 800))(piVar4);
    piVar2 = (int *)__vbaObjSet(&local_1c,uVar1);
    iVar3 = (**(code **)(*piVar2 + 0xa4))(piVar2,piVar4[0x47]);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,0xa4);
    }
    __vbaFreeObj();
  }
  return;
}


// ---- FUN_00417640 @ 00417640

void __cdecl FUN_00417640(uint param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 local_20;
  undefined4 local_1c;
  void *pvStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004020e6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc4;
  local_c = &DAT_00401b28;
  local_8 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar4 + 4))(piVar4);
  local_1c = 0;
  local_20 = 0;
  uVar1 = (**(code **)(*piVar4 + 0x30c))(piVar4);
  piVar2 = (int *)__vbaObjSet(&local_20,uVar1);
  puVar5 = &local_1c;
  piVar4 = piVar2;
  iVar3 = (**(code **)(*piVar2 + 0xa0))(piVar2,puVar5);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,0xa0);
  }
  __vbaStrCopy(piVar4,puVar5);
  __vbaFreeStr();
  __vbaFreeObj();
  return;
}


// ---- FUN_00417730 @ 00417730

void __cdecl FUN_00417730(uint param_1,short *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_1c;
  void *pvStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004020e6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc8;
  local_c = &DAT_00401b38;
  local_8 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar4 + 4))(piVar4);
  local_1c = 0;
  if (*param_2 == 0xd) {
    uVar1 = (**(code **)(*piVar4 + 0x30c))(piVar4);
    piVar2 = (int *)__vbaObjSet(&local_1c,uVar1);
    iVar3 = (**(code **)(*piVar2 + 0xa4))(piVar2,piVar4[0x42]);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,0xa4);
    }
    __vbaFreeObj();
  }
  return;
}


// ---- FUN_00417800 @ 00417800

void __cdecl FUN_00417800(uint param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 local_20;
  undefined4 local_1c;
  void *pvStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004020e6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc4;
  local_c = &DAT_00401b48;
  local_8 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar4 + 4))(piVar4);
  local_1c = 0;
  local_20 = 0;
  uVar1 = (**(code **)(*piVar4 + 0x314))(piVar4);
  piVar2 = (int *)__vbaObjSet(&local_20,uVar1);
  puVar5 = &local_1c;
  piVar4 = piVar2;
  iVar3 = (**(code **)(*piVar2 + 0xa0))(piVar2,puVar5);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,0xa0);
  }
  __vbaStrCopy(piVar4,puVar5);
  __vbaFreeStr();
  __vbaFreeObj();
  return;
}


// ---- FUN_004178f0 @ 004178f0

void __cdecl FUN_004178f0(uint param_1,short *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_1c;
  void *pvStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004020e6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc8;
  local_c = &DAT_00401b58;
  local_8 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar4 + 4))(piVar4);
  local_1c = 0;
  if (*param_2 == 0xd) {
    uVar1 = (**(code **)(*piVar4 + 0x314))(piVar4);
    piVar2 = (int *)__vbaObjSet(&local_1c,uVar1);
    iVar3 = (**(code **)(*piVar2 + 0xa4))(piVar2,piVar4[0x43]);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,0xa4);
    }
    __vbaFreeObj();
  }
  return;
}


// ---- FUN_004179c0 @ 004179c0

void __cdecl FUN_004179c0(uint param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 local_20;
  undefined4 local_1c;
  void *pvStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004020e6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc4;
  local_c = &DAT_00401b68;
  local_8 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar4 + 4))(piVar4);
  local_1c = 0;
  local_20 = 0;
  uVar1 = (**(code **)(*piVar4 + 0x31c))(piVar4);
  piVar2 = (int *)__vbaObjSet(&local_20,uVar1);
  puVar5 = &local_1c;
  piVar4 = piVar2;
  iVar3 = (**(code **)(*piVar2 + 0xa0))(piVar2,puVar5);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,0xa0);
  }
  __vbaStrCopy(piVar4,puVar5);
  __vbaFreeStr();
  __vbaFreeObj();
  return;
}


// ---- FUN_00417ab0 @ 00417ab0

void __cdecl FUN_00417ab0(uint param_1,short *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_1c;
  void *pvStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004020e6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc8;
  local_c = &DAT_00401b78;
  local_8 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar4 + 4))(piVar4);
  local_1c = 0;
  if (*param_2 == 0xd) {
    uVar1 = (**(code **)(*piVar4 + 0x31c))(piVar4);
    piVar2 = (int *)__vbaObjSet(&local_1c,uVar1);
    iVar3 = (**(code **)(*piVar2 + 0xa4))(piVar2,piVar4[0x44]);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,0xa4);
    }
    __vbaFreeObj();
  }
  return;
}


// ---- FUN_00417b80 @ 00417b80

void __cdecl FUN_00417b80(uint param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 local_20;
  undefined4 local_1c;
  void *pvStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004020e6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc4;
  local_c = &DAT_00401b88;
  local_8 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar4 + 4))(piVar4);
  local_1c = 0;
  local_20 = 0;
  uVar1 = (**(code **)(*piVar4 + 0x308))(piVar4);
  piVar2 = (int *)__vbaObjSet(&local_20,uVar1);
  puVar5 = &local_1c;
  piVar4 = piVar2;
  iVar3 = (**(code **)(*piVar2 + 0xa0))(piVar2,puVar5);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,0xa0);
  }
  __vbaStrCopy(piVar4,puVar5);
  __vbaFreeStr();
  __vbaFreeObj();
  return;
}


// ---- FUN_00417c70 @ 00417c70

void __cdecl FUN_00417c70(uint param_1,short *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_1c;
  void *pvStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004020e6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc8;
  local_c = &DAT_00401b98;
  local_8 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar4 + 4))(piVar4);
  local_1c = 0;
  if (*param_2 == 0xd) {
    uVar1 = (**(code **)(*piVar4 + 0x308))(piVar4);
    piVar2 = (int *)__vbaObjSet(&local_1c,uVar1);
    iVar3 = (**(code **)(*piVar2 + 0xa4))(piVar2,piVar4[0x48]);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,0xa4);
    }
    __vbaFreeObj();
  }
  return;
}


// ---- FUN_00417d40 @ 00417d40

void __cdecl FUN_00417d40(uint param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 local_20;
  undefined4 local_1c;
  void *pvStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004020e6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc4;
  local_c = &DAT_00401ba8;
  local_8 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar4 + 4))(piVar4);
  local_1c = 0;
  local_20 = 0;
  uVar1 = (**(code **)(*piVar4 + 0x34c))(piVar4);
  piVar2 = (int *)__vbaObjSet(&local_20,uVar1);
  puVar5 = &local_1c;
  piVar4 = piVar2;
  iVar3 = (**(code **)(*piVar2 + 0xa0))(piVar2,puVar5);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,0xa0);
  }
  __vbaStrCopy(piVar4,puVar5);
  __vbaFreeStr();
  __vbaFreeObj();
  return;
}


// ---- FUN_00417e30 @ 00417e30

void __cdecl FUN_00417e30(uint param_1,short *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_1c;
  void *pvStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004020e6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc8;
  local_c = &DAT_00401bb8;
  local_8 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar4 + 4))(piVar4);
  local_1c = 0;
  if (*param_2 == 0xd) {
    uVar1 = (**(code **)(*piVar4 + 0x34c))(piVar4);
    piVar2 = (int *)__vbaObjSet(&local_1c,uVar1);
    iVar3 = (**(code **)(*piVar2 + 0xa4))(piVar2,piVar4[0x3d]);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,0xa4);
    }
    __vbaFreeObj();
  }
  return;
}


// ---- FUN_00417f00 @ 00417f00

void __cdecl FUN_00417f00(uint param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 local_20;
  undefined4 local_1c;
  void *pvStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004020e6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc4;
  local_c = &DAT_00401bc8;
  local_8 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar4 + 4))(piVar4);
  local_1c = 0;
  local_20 = 0;
  uVar1 = (**(code **)(*piVar4 + 0x358))(piVar4);
  piVar2 = (int *)__vbaObjSet(&local_20,uVar1);
  puVar5 = &local_1c;
  piVar4 = piVar2;
  iVar3 = (**(code **)(*piVar2 + 0xa0))(piVar2,puVar5);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,0xa0);
  }
  __vbaStrCopy(piVar4,puVar5);
  __vbaFreeStr();
  __vbaFreeObj();
  return;
}


// ---- FUN_00417ff0 @ 00417ff0

void __cdecl FUN_00417ff0(uint param_1,short *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_1c;
  void *pvStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004020e6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc8;
  local_c = &DAT_00401bd8;
  local_8 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar4 + 4))(piVar4);
  local_1c = 0;
  if (*param_2 == 0xd) {
    uVar1 = (**(code **)(*piVar4 + 0x358))(piVar4);
    piVar2 = (int *)__vbaObjSet(&local_1c,uVar1);
    iVar3 = (**(code **)(*piVar2 + 0xa4))(piVar2,piVar4[0x3e]);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,0xa4);
    }
    __vbaFreeObj();
  }
  return;
}


// ---- FUN_004180c0 @ 004180c0

void __cdecl FUN_004180c0(uint param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 local_20;
  undefined4 local_1c;
  void *pvStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004020e6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc4;
  local_c = &DAT_00401be8;
  local_8 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar4 + 4))(piVar4);
  local_1c = 0;
  local_20 = 0;
  uVar1 = (**(code **)(*piVar4 + 0x364))(piVar4);
  piVar2 = (int *)__vbaObjSet(&local_20,uVar1);
  puVar5 = &local_1c;
  piVar4 = piVar2;
  iVar3 = (**(code **)(*piVar2 + 0xa0))(piVar2,puVar5);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,0xa0);
  }
  __vbaStrCopy(piVar4,puVar5);
  __vbaFreeStr();
  __vbaFreeObj();
  return;
}


// ---- FUN_004181b0 @ 004181b0

void __cdecl FUN_004181b0(uint param_1,short *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_1c;
  void *pvStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004020e6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc8;
  local_c = &DAT_00401bf8;
  local_8 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar4 + 4))(piVar4);
  local_1c = 0;
  if (*param_2 == 0xd) {
    uVar1 = (**(code **)(*piVar4 + 0x364))(piVar4);
    piVar2 = (int *)__vbaObjSet(&local_1c,uVar1);
    iVar3 = (**(code **)(*piVar2 + 0xa4))(piVar2,piVar4[0x3f]);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,0xa4);
    }
    __vbaFreeObj();
  }
  return;
}


// ---- FUN_00418280 @ 00418280

void __cdecl FUN_00418280(uint param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 local_20;
  undefined4 local_1c;
  void *pvStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004020e6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc4;
  local_c = &DAT_00401c08;
  local_8 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar4 + 4))(piVar4);
  local_1c = 0;
  local_20 = 0;
  uVar1 = (**(code **)(*piVar4 + 0x324))(piVar4);
  piVar2 = (int *)__vbaObjSet(&local_20,uVar1);
  puVar5 = &local_1c;
  piVar4 = piVar2;
  iVar3 = (**(code **)(*piVar2 + 0xa0))(piVar2,puVar5);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,0xa0);
  }
  __vbaStrCopy(piVar4,puVar5);
  __vbaFreeStr();
  __vbaFreeObj();
  return;
}


// ---- FUN_00418370 @ 00418370

void __cdecl FUN_00418370(uint param_1,short *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_1c;
  void *pvStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004020e6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc8;
  local_c = &DAT_00401c18;
  local_8 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar4 + 4))(piVar4);
  local_1c = 0;
  if (*param_2 == 0xd) {
    uVar1 = (**(code **)(*piVar4 + 0x324))(piVar4);
    piVar2 = (int *)__vbaObjSet(&local_1c,uVar1);
    iVar3 = (**(code **)(*piVar2 + 0xa4))(piVar2,piVar4[0x49]);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,0xa4);
    }
    __vbaFreeObj();
  }
  return;
}


// ---- FUN_00418440 @ 00418440

void __cdecl FUN_00418440(uint param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 local_20;
  undefined4 local_1c;
  void *pvStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004020e6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc4;
  local_c = &DAT_00401c28;
  local_8 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar4 + 4))(piVar4);
  local_1c = 0;
  local_20 = 0;
  uVar1 = (**(code **)(*piVar4 + 0x350))(piVar4);
  piVar2 = (int *)__vbaObjSet(&local_20,uVar1);
  puVar5 = &local_1c;
  piVar4 = piVar2;
  iVar3 = (**(code **)(*piVar2 + 0xa0))(piVar2,puVar5);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,0xa0);
  }
  __vbaStrCopy(piVar4,puVar5);
  __vbaFreeStr();
  __vbaFreeObj();
  return;
}


// ---- FUN_00418530 @ 00418530

void __cdecl FUN_00418530(uint param_1,short *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_1c;
  void *pvStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined1 *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004020e6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc8;
  local_c = &LAB_00401c38;
  local_8 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar4 + 4))(piVar4);
  local_1c = 0;
  if (*param_2 == 0xd) {
    uVar1 = (**(code **)(*piVar4 + 0x350))(piVar4);
    piVar2 = (int *)__vbaObjSet(&local_1c,uVar1);
    iVar3 = (**(code **)(*piVar2 + 0xa4))(piVar2,piVar4[0x40]);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,0xa4);
    }
    __vbaFreeObj();
  }
  return;
}


// ---- FUN_00418600 @ 00418600

void __cdecl FUN_00418600(uint param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 local_20;
  undefined4 local_1c;
  void *pvStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004020e6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc4;
  local_c = &DAT_00401c48;
  local_8 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar4 + 4))(piVar4);
  local_1c = 0;
  local_20 = 0;
  uVar1 = (**(code **)(*piVar4 + 0x35c))(piVar4);
  piVar2 = (int *)__vbaObjSet(&local_20,uVar1);
  puVar5 = &local_1c;
  piVar4 = piVar2;
  iVar3 = (**(code **)(*piVar2 + 0xa0))(piVar2,puVar5);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,0xa0);
  }
  __vbaStrCopy(piVar4,puVar5);
  __vbaFreeStr();
  __vbaFreeObj();
  return;
}


// ---- FUN_004186f0 @ 004186f0

void __cdecl FUN_004186f0(uint param_1,short *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_1c;
  void *pvStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004020e6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc8;
  local_c = &DAT_00401c58;
  local_8 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar4 + 4))(piVar4);
  local_1c = 0;
  if (*param_2 == 0xd) {
    uVar1 = (**(code **)(*piVar4 + 0x35c))(piVar4);
    piVar2 = (int *)__vbaObjSet(&local_1c,uVar1);
    iVar3 = (**(code **)(*piVar2 + 0xa4))(piVar2,piVar4[0x41]);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,0xa4);
    }
    __vbaFreeObj();
  }
  return;
}


// ---- FUN_004187c0 @ 004187c0

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void __cdecl FUN_004187c0(uint param_1)

{
  wchar_t *pwVar1;
  code *pcVar2;
  undefined2 uVar3;
  short sVar4;
  int *piVar5;
  int ****ppppiVar6;
  int iVar7;
  int **ppiVar8;
  undefined *puVar9;
  wchar_t *****pppppwVar10;
  wchar_t *pwStack00000008;
  undefined *puStack0000000c;
  int ****ppppiStack00000010;
  int *****pppppiStack00000014;
  wchar_t **ppwStack00000018;
  int ****ppppiStack0000001c;
  int *piStack00000020;
  wchar_t **ppwStack00000028;
  int **ppiStack0000002c;
  undefined4 uStack00000030;
  undefined4 uStack00000034;
  undefined4 uStack00000038;
  int ****ppppiStack0000003c;
  int ***local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  wchar_t ****local_a0;
  int ***local_9c;
  undefined4 local_98;
  undefined4 local_94;
  wchar_t ****local_90;
  int ***local_8c;
  undefined4 uStack_7c;
  int ****ppppiStack_78;
  int iStack_74;
  int *piStack_70;
  undefined *puStack_6c;
  int **local_68;
  int ****ppppiStack_64;
  wchar_t ****ppppwStack_60;
  wchar_t *****pppppwStack_5c;
  int ****local_58;
  wchar_t ****local_54;
  wchar_t ***local_50;
  int ****local_4c;
  wchar_t ****local_48;
  wchar_t ***local_44;
  int ****local_40;
  wchar_t ****local_3c;
  wchar_t ****local_38;
  wchar_t *****local_34;
  void *pvStack_24;
  undefined *puStack_20;
  undefined1 *local_1c;
  wchar_t ****local_18;
  wchar_t *****local_14;
  undefined *local_10;
  undefined4 uStack_c;
  wchar_t *local_8;
  
  puStack_20 = &DAT_004020e6;
  pvStack_24 = ExceptionList;
  ExceptionList = &pvStack_24;
  __vbaChkstk();
  local_1c = &stack0xffffffd0;
  local_18 = (wchar_t ****)&LAB_00401c68;
  local_14 = (wchar_t *****)(param_1 & 1);
  pppppwVar10 = (wchar_t *****)(param_1 & 0xfffffffe);
  local_10 = (undefined *)0x0;
  local_38 = (wchar_t ****)0x418815;
  local_34 = pppppwVar10;
  (*(code *)(*pppppwVar10)[1])();
  local_8 = (wchar_t *)0x2;
  local_38 = (wchar_t ****)0x1;
  local_3c = (wchar_t ****)0x41882b;
  __vbaOnError();
  local_8 = (wchar_t *)0x3;
  local_3c = (wchar_t ****)0x418841;
  local_38 = (wchar_t ****)pppppwVar10;
  local_3c = (wchar_t ****)(*(code *)(*pppppwVar10)[0xc4])();
  local_40 = (int ****)&local_58;
  local_44 = (wchar_t ***)0x41884c;
  piVar5 = (int *)__vbaObjSet();
  local_3c = &local_50;
  local_44 = (wchar_t ***)0x41886b;
  local_40 = (int ****)piVar5;
  local_50 = (wchar_t ***)(**(code **)(*piVar5 + 0xa0))();
  if ((int)local_50 < 0) {
    local_44 = (wchar_t ***)0xa0;
    local_48 = (wchar_t ****)&DAT_00406f50;
    local_54 = (wchar_t ****)0x41889a;
    local_4c = (int ****)piVar5;
    __vbaHresultCheckObj();
  }
  local_50 = (wchar_t ***)0x0;
  local_44 = (wchar_t ***)0x4188cb;
  __vbaStrMove();
  local_44 = (wchar_t ***)0x4188d4;
  __vbaFreeObj();
  local_8 = (wchar_t *)0x4;
  local_48 = (wchar_t ****)0x4188ea;
  local_44 = (wchar_t ***)pppppwVar10;
  local_48 = (wchar_t ****)(*(code *)(*pppppwVar10)[0xc3])();
  local_4c = (int ****)&local_58;
  local_50 = (wchar_t ***)0x4188f5;
  ppppiVar6 = (int ****)__vbaObjSet();
  local_48 = &local_50;
  local_50 = (wchar_t ***)0x418914;
  local_4c = ppppiVar6;
  iVar7 = (*(code *)(*ppppiVar6)[0x28])();
  if (iVar7 < 0) {
    local_50 = (wchar_t ***)0xa0;
    local_54 = (wchar_t ****)&DAT_00406f50;
    ppppwStack_60 = (wchar_t ****)0x418943;
    pppppwStack_5c = (wchar_t *****)iVar7;
    local_58 = ppppiVar6;
    __vbaHresultCheckObj();
  }
  local_50 = (wchar_t ***)0x418974;
  __vbaStrMove();
  local_50 = (wchar_t ***)0x41897d;
  __vbaFreeObj();
  local_8 = (wchar_t *)0x5;
  local_54 = (wchar_t ****)0x418993;
  local_50 = (wchar_t ***)pppppwVar10;
  local_54 = (wchar_t ****)(*(code *)(*pppppwVar10)[0xc2])();
  local_58 = (int ****)&local_58;
  pppppwStack_5c = (wchar_t *****)0x41899e;
  ppppiVar6 = (int ****)__vbaObjSet();
  local_54 = &local_50;
  pppppwStack_5c = (wchar_t *****)0x4189bd;
  local_58 = ppppiVar6;
  ppiVar8 = (int **)(*(code *)(*ppppiVar6)[0x28])();
  if ((int)ppiVar8 < 0) {
    pppppwStack_5c = (wchar_t *****)0xa0;
    ppppwStack_60 = (wchar_t ****)&DAT_00406f50;
    puStack_6c = (undefined *)0x4189ec;
    local_68 = ppiVar8;
    ppppiStack_64 = ppppiVar6;
    __vbaHresultCheckObj();
  }
  local_50 = (wchar_t ***)0x0;
  pppppwStack_5c = (wchar_t *****)0x418a1d;
  __vbaStrMove();
  pppppwStack_5c = (wchar_t *****)0x418a26;
  __vbaFreeObj();
  local_8 = (wchar_t *)0x6;
  ppppwStack_60 = (wchar_t ****)0x418a3c;
  pppppwStack_5c = pppppwVar10;
  ppppwStack_60 = (wchar_t ****)(*(code *)(*pppppwVar10)[0xc1])();
  ppppiStack_64 = (int ****)&local_58;
  local_68 = (int **)0x418a47;
  piVar5 = (int *)__vbaObjSet();
  ppppwStack_60 = &local_50;
  local_68 = (int **)0x418a66;
  ppppiStack_64 = (int ****)piVar5;
  iVar7 = (**(code **)(*piVar5 + 0xa0))();
  if (iVar7 < 0) {
    local_68 = (int **)0xa0;
    puStack_6c = &DAT_00406f50;
    ppppiStack_78 = (int ****)0x418a95;
    iStack_74 = iVar7;
    piStack_70 = piVar5;
    __vbaHresultCheckObj();
  }
  local_50 = (wchar_t ***)0x0;
  local_68 = (int **)0x418ac6;
  __vbaStrMove();
  local_68 = (int **)0x418acf;
  __vbaFreeObj();
  local_8 = (wchar_t *)0x7;
  local_90 = (wchar_t ****)&stack0xffffffd8;
  local_98 = 0x4008;
  local_a0 = (wchar_t ****)&local_34;
  local_a8 = 0x4008;
  if (DAT_00422078 == (int *)0x0) {
    local_68 = &DAT_00422078;
    puStack_6c = &DAT_00403b14;
    piStack_70 = (int *)0x418b28;
    __vbaNew2();
  }
  local_68 = (int **)0x418b48;
  __vbaChkstk();
  ppppiStack_64 = (int ****)local_98;
  ppppwStack_60 = (wchar_t ****)local_94;
  pppppwStack_5c = (wchar_t *****)local_90;
  local_58 = (int ****)local_8c;
  local_68 = (int **)0x418b77;
  __vbaChkstk();
  ppppiStack_64 = (int ****)local_a8;
  ppppwStack_60 = (wchar_t ****)local_a4;
  pppppwStack_5c = (wchar_t *****)local_a0;
  local_58 = (int ****)local_9c;
  local_68 = (int **)0x418ba6;
  __vbaChkstk();
  ppppiStack_64 = (int ****)0x4008;
  local_58 = (int ****)local_ac;
  local_68 = (int **)0x3;
  puStack_6c = (undefined *)0x33;
  piStack_70 = DAT_00422078;
  iStack_74 = 0x418be8;
  pppppwStack_5c = &local_48;
  iStack_74 = (**(code **)(*DAT_00422078 + 0x324))();
  ppppiStack_78 = (int ****)&local_58;
  uStack_7c = 0x418bf3;
  iStack_74 = __vbaObjSet();
  ppppiStack_78 = (int ****)&local_68;
  uStack_7c = 0x418bfe;
  local_3c = (wchar_t ****)__vbaLateIdCallLd();
  local_40 = (int ****)0x418c08;
  local_38 = (wchar_t ****)__vbaI4Var();
  local_40 = (int ****)0x418c14;
  __vbaFreeObj();
  local_40 = (int ****)0x418c1d;
  __vbaFreeVar();
  if (DAT_0042205c == -1) {
    local_8 = (wchar_t *)0x9;
    local_3c = local_48;
    local_40 = (int ****)0x408a5c;
    local_44 = (wchar_t ***)0x418c48;
    __vbaStrCat();
    local_3c = (wchar_t ****)0x418c53;
    local_3c = (wchar_t ****)__vbaStrMove();
    local_40 = (int ****)0x418c5a;
    rtcMakeDir();
    local_3c = (wchar_t ****)0x418c63;
    __vbaFreeStr();
    local_8 = (wchar_t *)0xa;
    local_3c = local_48;
    local_40 = (int ****)0x408a5c;
    local_44 = (wchar_t ***)0x418c79;
    __vbaStrCat();
    local_3c = (wchar_t ****)0x418c86;
    __vbaStrMove();
    local_8 = (wchar_t *)0xb;
    local_3c = (wchar_t ****)0x8;
    local_40 = (int ****)local_44;
    local_44 = (wchar_t ***)0x418c99;
    rtcLeftCharBstr();
    local_3c = (wchar_t ****)0x418ca6;
    __vbaStrMove();
    local_8 = (wchar_t *)0xc;
    local_3c = (wchar_t ****)0x1;
    local_40 = (int ****)DAT_00422038;
    local_44 = (wchar_t ***)&DAT_00408a74;
    local_48 = (wchar_t ****)0x0;
    local_4c = (int ****)0x418cc2;
    __vbaInStr();
    local_3c = (wchar_t ****)0x418cca;
    uVar3 = __vbaI2I4();
    local_40 = (int ****)CONCAT22(local_40._2_2_,uVar3);
  }
  else {
    local_8 = (wchar_t *)0xe;
    local_3c = local_48;
    local_40 = (int ****)0x408a7c;
    local_44 = (wchar_t ***)0x418ce9;
    __vbaStrCat();
    local_3c = (wchar_t ****)0x418cf4;
    local_3c = (wchar_t ****)__vbaStrMove();
    local_40 = (int ****)0x418cfb;
    rtcMakeDir();
    local_3c = (wchar_t ****)0x418d04;
    __vbaFreeStr();
    local_8 = (wchar_t *)0xf;
    local_3c = local_48;
    local_40 = (int ****)0x408a7c;
    local_44 = (wchar_t ***)0x418d1a;
    __vbaStrCat();
    local_3c = (wchar_t ****)0x418d27;
    __vbaStrMove();
    local_8 = (wchar_t *)0x10;
    local_3c = (wchar_t ****)0x8;
    local_40 = (int ****)local_44;
    local_44 = (wchar_t ***)0x418d3a;
    rtcLeftCharBstr();
    local_3c = (wchar_t ****)0x418d47;
    __vbaStrMove();
    local_8 = (wchar_t *)0x11;
    local_3c = (wchar_t ****)0x1;
    local_40 = (int ****)DAT_00422038;
    local_44 = (wchar_t ***)&DAT_00408a74;
    local_48 = (wchar_t ****)0x0;
    local_4c = (int ****)0x418d64;
    __vbaInStr();
    local_3c = (wchar_t ****)0x418d6c;
    uVar3 = __vbaI2I4();
    local_40 = (int ****)CONCAT22(local_40._2_2_,uVar3);
  }
  if (((short)local_40 == 0) || (8 < (short)local_40)) {
    local_8 = (wchar_t *)0x14;
    local_38 = (wchar_t ****)0x8;
    local_3c = (wchar_t ****)DAT_00422038;
    local_40 = (int ****)0x418d9b;
    rtcLeftCharBstr();
    local_38 = (wchar_t ****)0x418da8;
    __vbaStrMove();
  }
  else {
    local_8 = (wchar_t *)0x16;
    if (SBORROW2((short)local_40,1)) {
      local_38 = (wchar_t ****)0x4195ef;
      __vbaErrorOverflow();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_38 = (wchar_t ****)(int)(short)((short)local_40 + -1);
    local_3c = (wchar_t ****)DAT_00422038;
    local_40 = (int ****)0x418dcf;
    rtcLeftCharBstr();
    local_38 = (wchar_t ****)0x418ddc;
    __vbaStrMove();
  }
  local_8 = (wchar_t *)0x18;
  local_90 = &DAT_00422034;
  local_98 = 0x4008;
  local_38 = (wchar_t ****)0x1;
  local_3c = (wchar_t ****)&local_98;
  local_40 = (int ****)&local_68;
  local_44 = (wchar_t ***)0x418e0a;
  rtcRightCharVar();
  local_a0 = (wchar_t ****)&DAT_00408a90;
  local_a8 = 0x8008;
  local_38 = (wchar_t ****)&local_68;
  local_3c = (wchar_t ****)&local_a8;
  local_40 = (int ****)0x418e2f;
  sVar4 = __vbaVarTstNe();
  local_38 = (wchar_t ****)0x418e3f;
  __vbaFreeVar();
  if (sVar4 == 0) {
    local_8 = (wchar_t *)0x1b;
    local_34 = (wchar_t *****)DAT_00422034;
    local_38 = (wchar_t ****)DAT_00422038;
    local_3c = (wchar_t ****)0x418ecf;
    __vbaStrCat();
    local_34 = (wchar_t *****)0x418eda;
    local_34 = (wchar_t *****)__vbaStrMove();
    local_38 = (wchar_t ****)0x408a98;
    local_3c = (wchar_t ****)0x418ee6;
    __vbaStrCat();
    local_34 = (wchar_t *****)0x418ef3;
    __vbaStrMove();
    local_34 = (wchar_t *****)0x418efc;
    __vbaFreeStr();
  }
  else {
    local_8 = (wchar_t *)0x19;
    local_34 = (wchar_t *****)DAT_00422034;
    local_38 = (wchar_t ****)&DAT_00408a90;
    local_3c = (wchar_t ****)0x418e62;
    __vbaStrCat();
    local_34 = (wchar_t *****)0x418e6d;
    local_34 = (wchar_t *****)__vbaStrMove();
    local_38 = (wchar_t ****)DAT_00422038;
    local_3c = (wchar_t ****)0x418e7b;
    __vbaStrCat();
    local_34 = (wchar_t *****)0x418e86;
    local_34 = (wchar_t *****)__vbaStrMove();
    local_38 = (wchar_t ****)0x408a98;
    local_3c = (wchar_t ****)0x418e92;
    __vbaStrCat();
    local_34 = (wchar_t *****)0x418e9f;
    __vbaStrMove();
    local_34 = &local_54;
    local_38 = &local_50;
    local_3c = (wchar_t ****)0x2;
    local_40 = (int ****)0x418eaf;
    __vbaFreeStrList();
  }
  local_8 = (wchar_t *)0x1d;
  local_34 = (wchar_t *****)0x418f09;
  rtcDoEvents();
  local_8 = (wchar_t *)0x1f;
  local_34 = (wchar_t *****)DAT_0042203c;
  local_38 = (wchar_t ****)0x1;
  local_3c = (wchar_t ****)0xffffffff;
  local_40 = (int ****)0x8;
  local_44 = (wchar_t ***)0x418f22;
  __vbaFileOpen();
  if (DAT_0042205c == -1) {
    local_8 = (wchar_t *)0x21;
    local_34 = (wchar_t *****)0x408aa8;
    local_38 = (wchar_t ****)0x1;
    local_3c = (wchar_t ****)&DAT_0040701c;
    local_40 = (int ****)0x418f4c;
    __vbaPrintFile();
  }
  else {
    local_8 = (wchar_t *)0x23;
    local_34 = (wchar_t *****)0x408b00;
    local_38 = (wchar_t ****)0x1;
    local_3c = (wchar_t ****)&DAT_0040701c;
    local_40 = (int ****)0x418f6a;
    __vbaPrintFile();
  }
  local_8 = (wchar_t *)0x25;
  pvStack_24 = (void *)0x418f7a;
  rtcGetDateBstr();
  pvStack_24 = (void *)0x418f85;
  __vbaStrMove();
  local_54 = (wchar_t ****)0x0;
  pvStack_24 = (void *)0x418fa4;
  pvStack_24 = (void *)__vbaStrMove();
  __vbaPrintFile();
  local_14 = &local_54;
  local_18 = &local_50;
  local_1c = (undefined1 *)0x2;
  puStack_20 = (undefined *)0x418fc5;
  __vbaFreeStrList();
  local_8 = (wchar_t *)0x26;
  local_14 = (wchar_t *****)0x418fb2;
  local_18 = (wchar_t ****)0x408b54;
  local_1c = (undefined1 *)0x1;
  puStack_20 = &DAT_00408b78;
  pvStack_24 = (void *)0x418fe5;
  __vbaPrintFile();
  local_8 = L"Serial number : ";
  uStack_c = 1;
  local_10 = &DAT_00408b78;
  local_14 = (wchar_t *****)0x419005;
  __vbaPrintFile();
  local_8 = (wchar_t *)0x28;
  puStack0000000c = (undefined *)local_4c;
  pwStack00000008 = L"Customer name : ";
  __vbaPrintFile();
  local_8 = (wchar_t *)0x29;
  ppppiStack0000001c = (int ****)local_3c;
  ppwStack00000018 = (wchar_t **)0x408bd4;
  pppppiStack00000014 = (int *****)0x1;
  ppppiStack00000010 = (int ****)&DAT_00408b78;
  puStack0000000c = (undefined *)0x419045;
  __vbaPrintFile();
  local_8 = (wchar_t *)0x2a;
  ppiStack0000002c = (int **)0x1;
  ppwStack00000028 = (wchar_t **)0x419057;
  __vbaFileClose();
  local_8 = (wchar_t *)0x2b;
  if (DAT_00422010 == (int *)0x0) {
    ppiStack0000002c = &DAT_00422010;
    ppwStack00000028 = (wchar_t **)&DAT_004049b8;
    __vbaNew2();
  }
  piVar5 = DAT_00422010;
  local_a0 = (wchar_t ****)0x80020004;
  local_a8 = 10;
  local_90 = (wchar_t ****)0x80020004;
  local_98 = 10;
  ppiStack0000002c = (int **)0x4190cd;
  __vbaChkstk();
  uStack00000030 = local_a8;
  uStack00000034 = local_a4;
  uStack00000038 = local_a0;
  ppppiStack0000003c = (int ****)local_9c;
  ppiStack0000002c = (int **)0x4190fc;
  __vbaChkstk();
  uStack00000030 = local_98;
  uStack00000034 = local_94;
  uStack00000038 = local_90;
  ppppiStack0000003c = (int ****)local_8c;
  ppwStack00000028 = (wchar_t **)0x419136;
  ppiStack0000002c = (int **)piVar5;
  puVar9 = (undefined *)(**(code **)(*piVar5 + 0x2b0))();
  if ((int)puVar9 < 0) {
    ppwStack00000028 = (wchar_t **)0x2b0;
    ppwStack00000018 = (wchar_t **)0x419165;
    ppppiStack0000001c = (int ****)puVar9;
    piStack00000020 = piVar5;
    __vbaHresultCheckObj();
  }
  local_8 = (wchar_t *)0x2c;
  if (DAT_00422630 == (wchar_t *)0x0) {
    ppwStack00000028 = &DAT_00422630;
    piStack00000020 = (int *)0x419197;
    __vbaNew2();
  }
  pwVar1 = DAT_00422630;
  ppwStack00000028 = (wchar_t **)&local_58;
  piStack00000020 = (int *)0x4191d1;
  puVar9 = (undefined *)(**(code **)(*(int *)DAT_00422630 + 0x18))();
  if ((int)puVar9 < 0) {
    piStack00000020 = (int *)0x18;
    ppppiStack0000001c = (int ****)&DAT_00407b2c;
    ppppiStack00000010 = (int ****)0x4191fd;
    pppppiStack00000014 = (int *****)puVar9;
    ppwStack00000018 = (wchar_t **)pwVar1;
    __vbaHresultCheckObj();
  }
  piStack00000020 = (int *)0x0;
  ppppiStack0000001c = local_58;
  ppwStack00000018 = (wchar_t **)0x41922c;
  puVar9 = (undefined *)(*(code *)(*local_58)[0x1f])();
  if ((int)puVar9 < 0) {
    ppwStack00000018 = (wchar_t **)0x7c;
    pppppiStack00000014 = (int *****)&DAT_00407b4c;
    ppppiStack00000010 = local_58;
    pwStack00000008 = L"薉ﻔ\xffff૫藇ﻔ\xffff";
    puStack0000000c = puVar9;
    __vbaHresultCheckObj();
  }
  ppwStack00000018 = (wchar_t **)0x419273;
  __vbaFreeObj();
  local_8 = (wchar_t *)0x2d;
  if (DAT_00422630 == (wchar_t *)0x0) {
    ppwStack00000018 = &DAT_00422630;
    pppppiStack00000014 = (int *****)&DAT_00407b3c;
    ppppiStack00000010 = (int ****)0x419293;
    __vbaNew2();
  }
  pwVar1 = DAT_00422630;
  if (DAT_00422110 == 0) {
    ppwStack00000018 = (wchar_t **)&DAT_00422110;
    pppppiStack00000014 = (int *****)&DAT_00404238;
    ppppiStack00000010 = (int ****)0x4192d0;
    __vbaNew2();
  }
  ppwStack00000018 = (wchar_t **)DAT_00422110;
  pppppiStack00000014 = &local_58;
  ppppiStack00000010 = (int ****)0x4192f9;
  ppwStack00000018 = (wchar_t **)__vbaObjSetAddref();
  ppppiStack00000010 = (int ****)0x41930c;
  pppppiStack00000014 = (int *****)pwVar1;
  iVar7 = (**(code **)(*(int *)pwVar1 + 0x10))();
  if (iVar7 < 0) {
    ppppiStack00000010 = (int ****)0x10;
    puStack0000000c = &DAT_00407b2c;
    pwStack00000008 = pwVar1;
    __vbaHresultCheckObj();
  }
  ppppiStack00000010 = (int ****)0x419353;
  __vbaFreeObj();
  ppppiStack00000010 = (int ****)0x41952d;
  __vbaExitProc();
  ppppiStack00000010 = (int ****)&LAB_004195b4;
  puStack0000000c = (undefined *)0x419574;
  __vbaFreeStr();
  puStack0000000c = (undefined *)0x41957d;
  __vbaFreeStr();
  puStack0000000c = (undefined *)0x419586;
  __vbaFreeStr();
  puStack0000000c = (undefined *)0x41958f;
  __vbaFreeStr();
  puStack0000000c = (undefined *)0x419598;
  __vbaFreeStr();
  puStack0000000c = (undefined *)0x4195a1;
  __vbaFreeStr();
  puStack0000000c = (undefined *)0x4195aa;
  __vbaFreeStr();
  puStack0000000c = (undefined *)0x4195b3;
  __vbaFreeStr();
  return;
}


// ---- FUN_004195f0 @ 004195f0

void __cdecl FUN_004195f0(uint param_1)

{
  int *piVar1;
  undefined2 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int extraout_ECX;
  int extraout_ECX_00;
  code *pcVar7;
  ushort uVar8;
  float10 fVar9;
  int *piVar10;
  float fVar11;
  undefined4 uVar12;
  int *piVar13;
  wchar_t *pwVar14;
  float *pfVar15;
  undefined4 uVar16;
  int *piVar17;
  undefined4 uVar18;
  int **ppiVar19;
  int *piVar20;
  wchar_t *pwVar21;
  float *pfVar22;
  undefined4 *puVar23;
  float local_b8;
  float local_b4 [9];
  undefined4 local_90;
  wchar_t *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 *local_78;
  undefined4 local_74;
  undefined4 local_70 [2];
  undefined4 local_68;
  undefined4 local_60 [2];
  undefined4 local_58;
  undefined4 local_50 [4];
  int *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30 [2];
  undefined4 local_28 [2];
  undefined4 local_20;
  undefined4 local_1c;
  void *pvStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004020e6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff10;
  local_c = &DAT_00401d80;
  local_8 = param_1 & 1;
  piVar3 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  piVar6 = piVar3;
  (**(code **)(*piVar3 + 4))(piVar3);
  local_1c = 0;
  local_20 = 0;
  local_28[0] = 0;
  local_30[0] = 0;
  local_34 = 0;
  local_38 = 0;
  local_3c = 0;
  local_40 = (int *)0x0;
  local_50[0] = 0;
  local_60[0] = 0;
  local_70[0] = 0;
  local_80 = 0;
  local_90 = 0;
  local_b4[0] = 0.0;
  local_b8 = 0.0;
  if (DAT_00422110 == (int *)0x0) {
    __vbaNew2(&DAT_00404238,&DAT_00422110);
  }
  piVar1 = DAT_00422110;
  pfVar22 = &local_b8;
  piVar20 = DAT_00422110;
  iVar4 = (**(code **)(*DAT_00422110 + 0x80))(DAT_00422110,pfVar22);
  pcVar7 = __vbaHresultCheckObj_exref;
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar1,&DAT_004089d8,0x80);
  }
  if (DAT_00422110 == (int *)0x0) {
    __vbaNew2(&DAT_00404238,&DAT_00422110);
  }
  piVar1 = DAT_00422110;
  if (DAT_00422630 == (int *)0x0) {
    __vbaNew2(&DAT_00407b3c,&DAT_00422630);
  }
  piVar10 = DAT_00422630;
  ppiVar19 = &local_40;
  piVar17 = DAT_00422630;
  iVar4 = (**(code **)(*DAT_00422630 + 0x18))(DAT_00422630,ppiVar19);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar10,&DAT_00407b2c,0x18);
  }
  piVar10 = local_40;
  pfVar15 = local_b4;
  piVar13 = local_40;
  iVar4 = (**(code **)(*local_40 + 0x98))(local_40,pfVar15);
  uVar8 = 0;
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar10,&DAT_00407b4c,0x98);
  }
  iVar4 = *piVar1;
  if (DAT_00422000 == 0) {
    fVar9 = ((float10)local_b4[0] - (float10)local_b8) / (float10)DAT_00401d7c;
  }
  else {
    fVar9 = (float10)adj_fdiv_m32(DAT_00401d7c,iVar4);
    iVar4 = extraout_ECX;
  }
  if ((uVar8 & 0xd) != 0) {
LAB_00419ddc:
    __vbaFPException();
    return;
  }
  iVar4 = (**(code **)(iVar4 + 0x74))(piVar1,(float)fVar9);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar1,&DAT_004089d8,0x74);
  }
  __vbaFreeObj();
  if (DAT_00422110 == (int *)0x0) {
    __vbaNew2(&DAT_00404238,&DAT_00422110);
  }
  piVar1 = DAT_00422110;
  iVar4 = (**(code **)(*DAT_00422110 + 0x88))(DAT_00422110,&local_b8);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar1,&DAT_004089d8,0x88);
  }
  if (DAT_00422110 == (int *)0x0) {
    __vbaNew2(&DAT_00404238,&DAT_00422110);
  }
  piVar1 = DAT_00422110;
  if (DAT_00422630 == (int *)0x0) {
    __vbaNew2(&DAT_00407b3c,&DAT_00422630);
  }
  piVar10 = DAT_00422630;
  iVar4 = (**(code **)(*DAT_00422630 + 0x18))(DAT_00422630,&local_40);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar10,&DAT_00407b2c,0x18);
  }
  piVar10 = local_40;
  iVar4 = (**(code **)(*local_40 + 0x50))(local_40,local_b4);
  uVar8 = 0;
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar10,&DAT_00407b4c,0x50);
  }
  iVar4 = *piVar1;
  if (DAT_00422000 == 0) {
    fVar9 = ((float10)local_b4[0] - (float10)local_b8) / (float10)DAT_00401d7c;
  }
  else {
    fVar9 = (float10)adj_fdiv_m32(DAT_00401d7c,iVar4);
    iVar4 = extraout_ECX_00;
  }
  if ((uVar8 & 0xd) != 0) goto LAB_00419ddc;
  fVar11 = (float)fVar9;
  piVar10 = piVar1;
  iVar4 = (**(code **)(iVar4 + 0x7c))(piVar1,fVar11);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar1,&DAT_004089d8,0x7c);
  }
  __vbaFreeObj();
  __vbaStrCopy(piVar10,fVar11);
  uVar12 = 0x4198c5;
  __vbaStrCopy(piVar13,pfVar15);
  uVar16 = 0x4198d1;
  __vbaStrCopy(piVar17,ppiVar19);
  DAT_0042205c = 0;
  __vbaStrCopy(piVar20,pfVar22);
  puVar23 = local_30;
  uVar2 = FUN_00420090(puVar23);
  __vbaFreeStr();
  switch(uVar2) {
  case 0:
    break;
  case 1:
    break;
  case 2:
    break;
  case 3:
    if (DAT_00422110 == (int *)0x0) {
      __vbaNew2(&DAT_00404238,&DAT_00422110);
    }
    piVar1 = DAT_00422110;
    pwVar21 = L"435VP Series - Column Calibration Calculator";
    uVar18 = 0x419953;
    piVar20 = DAT_00422110;
    iVar4 = (**(code **)(*DAT_00422110 + 0x54))
                      (DAT_00422110,L"435VP Series - Column Calibration Calculator");
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar1,&DAT_004089d8,0x54);
    }
    __vbaStrCopy(uVar12,piVar13);
    pwVar14 = L"The software has detected a 435/438 (HPSEM) Column";
    rtcBstrFromAnsi(10);
    uVar12 = __vbaStrMove(pwVar14);
    __vbaStrCat(uVar12,pwVar14);
    uVar12 = __vbaStrMove();
    rtcBstrFromAnsi(0xd);
    uVar5 = __vbaStrMove(uVar12);
    __vbaStrCat(uVar5,uVar12);
    __vbaStrMove();
    __vbaFreeStrList(3,local_30,&local_34,&local_38);
    __vbaStrCat(L"Please ensure the fixed aperture is removed and",local_1c);
    uVar12 = __vbaStrMove();
    rtcBstrFromAnsi(10);
    uVar5 = __vbaStrMove(uVar12);
    __vbaStrCat(uVar5,uVar12);
    uVar12 = __vbaStrMove();
    rtcBstrFromAnsi(0xd);
    uVar5 = __vbaStrMove(uVar12);
    __vbaStrCat(uVar5,uVar12);
    __vbaStrMove();
    __vbaFreeStrList(4,local_30,&local_34,&local_38,&local_3c);
    __vbaStrCat(L"the variable aperture is in place before proceeding",local_1c);
    uVar12 = __vbaStrMove();
    rtcBstrFromAnsi(10);
    uVar5 = __vbaStrMove(uVar12);
    __vbaStrCat(uVar5,uVar12);
    uVar12 = __vbaStrMove();
    rtcBstrFromAnsi(0xd);
    uVar5 = __vbaStrMove(uVar12);
    __vbaStrCat(uVar5,uVar12);
    __vbaStrMove();
    __vbaFreeStrList(4,local_30,&local_34,&local_38,&local_3c);
    __vbaStrCat(L"with the calibration.",local_1c);
    __vbaStrMove();
    local_70[0] = 10;
    local_60[0] = 10;
    local_68 = 0x80020004;
    local_58 = 0x80020004;
    local_88 = L"435VP Column Calibration";
    local_90 = 8;
    __vbaVarDup();
    local_78 = &local_1c;
    local_80 = 0x4008;
    rtcMsgBox(&local_80,0x40,local_50,local_60,local_70);
    __vbaFreeVarList(3,local_50,local_60,local_70);
    DAT_0042205c = 0xffff;
    __vbaStrCopy(uVar16,uVar18);
    __vbaStrCopy(piVar20,pwVar21);
    __vbaStrCopy(puVar23,piVar6);
    pcVar7 = __vbaHresultCheckObj_exref;
    goto LAB_00419b6d;
  default:
    break;
  case 5:
    break;
  case 7:
    __vbaStrCopy(puVar23,piVar6);
    DAT_0042205c = 0xffff;
    goto LAB_00419b6d;
  }
  __vbaStrCopy(puVar23,piVar6);
LAB_00419b6d:
  uVar12 = (**(code **)(*piVar3 + 0x310))(piVar3);
  piVar6 = (int *)__vbaObjSet(&local_40,uVar12);
  iVar4 = (**(code **)(*piVar6 + 0xa4))(piVar6,local_20);
  if (iVar4 < 0) {
    (*pcVar7)(iVar4,piVar6,&DAT_00406f50,0xa4);
  }
  __vbaFreeObj();
  uVar12 = (**(code **)(*piVar3 + 0x30c))(piVar3);
  piVar6 = (int *)__vbaObjSet(&local_40,uVar12);
  iVar4 = (**(code **)(*piVar6 + 0xa4))(piVar6,L"default");
  if (iVar4 < 0) {
    (*pcVar7)(iVar4,piVar6,&DAT_00406f50,0xa4);
  }
  __vbaFreeObj();
  local_78 = local_28;
  local_80 = 0x4008;
  if (DAT_00422078 == (int *)0x0) {
    __vbaNew2(&DAT_00403b14,&DAT_00422078);
  }
  uVar12 = (**(code **)(*DAT_00422078 + 0x324))
                     (DAT_00422078,0x14,1,local_80,local_7c,local_78,local_74);
  uVar12 = __vbaObjSet(&local_40,uVar12);
  uVar12 = __vbaLateIdCallLd(local_50,uVar12);
  iVar4 = __vbaI4Var(uVar12);
  __vbaFreeObj();
  __vbaFreeVar(uVar12);
  if (iVar4 == 1) {
    uVar12 = (**(code **)(*piVar3 + 0x30c))(piVar3);
    piVar6 = (int *)__vbaObjSet(&local_40,uVar12);
    iVar4 = (**(code **)(*piVar6 + 0xa4))(piVar6,local_28[0]);
    if (iVar4 < 0) {
      (*pcVar7)(iVar4,piVar6,&DAT_00406f50,0xa4);
    }
    __vbaFreeObj();
  }
  uVar12 = (**(code **)(*piVar3 + 0x308))(piVar3);
  piVar6 = (int *)__vbaObjSet(&local_40,uVar12);
  iVar4 = (**(code **)(*piVar6 + 0xa4))(piVar6,&DAT_0040904c);
  if (iVar4 < 0) {
    (*pcVar7)(iVar4,piVar6,&DAT_00406f50,0xa4);
  }
  __vbaFreeObj();
  uVar12 = (**(code **)(*piVar3 + 0x304))(piVar3);
  piVar6 = (int *)__vbaObjSet(&local_40,uVar12);
  iVar4 = (**(code **)(*piVar6 + 0xa4))(piVar6,&DAT_0040904c);
  if (iVar4 < 0) {
    (*pcVar7)(iVar4,piVar6,&DAT_00406f50,0xa4);
  }
  __vbaFreeObj();
  local_8 = 0;
  __vbaFreeStr(&LAB_00419d9b);
  __vbaFreeStr();
  __vbaFreeStr();
  return;
}


// ---- FUN_00419df0 @ 00419df0

void __cdecl FUN_00419df0(uint param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  void *pvStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004020e6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffb8;
  local_c = &DAT_00401d90;
  local_8 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar4 + 4))(piVar4);
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  uVar1 = (**(code **)(*piVar4 + 0x308))(piVar4);
  piVar2 = (int *)__vbaObjSet(&local_20,uVar1);
  iVar3 = (**(code **)(*piVar2 + 0x114))(piVar2,0);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,0x114);
  }
  __vbaFreeObj();
  uVar1 = (**(code **)(*piVar4 + 0x308))(piVar4);
  piVar2 = (int *)__vbaObjSet(&local_24,uVar1);
  uVar1 = (**(code **)(*piVar4 + 0x308))(piVar4);
  piVar4 = (int *)__vbaObjSet(&local_20,uVar1);
  iVar3 = (**(code **)(*piVar4 + 0xa0))(piVar4,&local_1c);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar4,&DAT_00406f50,0xa0);
  }
  iVar3 = *piVar2;
  uVar1 = __vbaLenBstr(local_1c);
  iVar3 = (**(code **)(iVar3 + 0x11c))(piVar2,uVar1);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,0x11c);
  }
  __vbaFreeStr();
  __vbaFreeObjList(2,&local_20,&local_24);
  return;
}


// ---- FUN_00419f60 @ 00419f60

undefined4 FUN_00419f60(uint param_1,short *param_2)

{
  int iVar1;
  int *piVar2;
  void *local_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined1 *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004020e6;
  local_18 = ExceptionList;
  local_10 = &stack0xffffffd0;
  local_c = &LAB_00401da0;
  local_8 = param_1 & 1;
  piVar2 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &local_18;
  (**(code **)(*piVar2 + 4))(piVar2);
  if (*param_2 == 0xd) {
    iVar1 = (**(code **)(*piVar2 + 0x6f8))(piVar2);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piVar2,&DAT_00408a08,0x6f8);
    }
  }
  local_8 = 0;
  (**(code **)(*piVar2 + 8))(piVar2);
  ExceptionList = local_18;
  return local_8;
}


// ---- FUN_00419ff0 @ 00419ff0

void __cdecl FUN_00419ff0(uint param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  void *pvStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004020e6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffb8;
  local_c = &DAT_00401da8;
  local_8 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar4 + 4))(piVar4);
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  uVar1 = (**(code **)(*piVar4 + 0x304))(piVar4);
  piVar2 = (int *)__vbaObjSet(&local_20,uVar1);
  iVar3 = (**(code **)(*piVar2 + 0x114))(piVar2,0);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,0x114);
  }
  __vbaFreeObj();
  uVar1 = (**(code **)(*piVar4 + 0x304))(piVar4);
  piVar2 = (int *)__vbaObjSet(&local_24,uVar1);
  uVar1 = (**(code **)(*piVar4 + 0x304))(piVar4);
  piVar4 = (int *)__vbaObjSet(&local_20,uVar1);
  iVar3 = (**(code **)(*piVar4 + 0xa0))(piVar4,&local_1c);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar4,&DAT_00406f50,0xa0);
  }
  iVar3 = *piVar2;
  uVar1 = __vbaLenBstr(local_1c);
  iVar3 = (**(code **)(iVar3 + 0x11c))(piVar2,uVar1);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,0x11c);
  }
  __vbaFreeStr();
  __vbaFreeObjList(2,&local_20,&local_24);
  return;
}


// ---- FUN_0041a160 @ 0041a160

undefined4 FUN_0041a160(uint param_1,short *param_2)

{
  int iVar1;
  int *piVar2;
  void *local_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined1 *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004020e6;
  local_18 = ExceptionList;
  local_10 = &stack0xffffffd0;
  local_c = &LAB_00401db8;
  local_8 = param_1 & 1;
  piVar2 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &local_18;
  (**(code **)(*piVar2 + 4))(piVar2);
  if (*param_2 == 0xd) {
    iVar1 = (**(code **)(*piVar2 + 0x6f8))(piVar2);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piVar2,&DAT_00408a08,0x6f8);
    }
  }
  local_8 = 0;
  (**(code **)(*piVar2 + 8))(piVar2);
  ExceptionList = local_18;
  return local_8;
}


// ---- FUN_0041a1f0 @ 0041a1f0

void __cdecl FUN_0041a1f0(uint param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_1c;
  void *pvStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004020e6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc8;
  local_c = &DAT_00401dc0;
  local_8 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar4 + 4))(piVar4);
  local_1c = 0;
  uVar1 = (**(code **)(*piVar4 + 0x310))(piVar4);
  piVar2 = (int *)__vbaObjSet(&local_1c,uVar1);
  iVar3 = (**(code **)(*piVar2 + 0x114))(piVar2,2);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,0x114);
  }
  __vbaFreeObj();
  uVar1 = (**(code **)(*piVar4 + 0x310))(piVar4);
  piVar2 = (int *)__vbaObjSet(&local_1c,uVar1);
  iVar3 = (**(code **)(*piVar2 + 0x11c))(piVar2,2);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,0x11c);
  }
  __vbaFreeObj();
  return;
}


// ---- FUN_0041a2f0 @ 0041a2f0

undefined4 FUN_0041a2f0(uint param_1,short *param_2)

{
  int iVar1;
  int *piVar2;
  void *local_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004020e6;
  local_18 = ExceptionList;
  local_10 = &stack0xffffffd0;
  local_c = &DAT_00401dd0;
  local_8 = param_1 & 1;
  piVar2 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &local_18;
  (**(code **)(*piVar2 + 4))(piVar2);
  if (*param_2 == 0xd) {
    iVar1 = (**(code **)(*piVar2 + 0x6f8))(piVar2);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piVar2,&DAT_00408a08,0x6f8);
    }
  }
  local_8 = 0;
  (**(code **)(*piVar2 + 8))(piVar2);
  ExceptionList = local_18;
  return local_8;
}


// ---- FUN_0041a380 @ 0041a380

void __cdecl FUN_0041a380(uint param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  void *pvStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004020e6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffb8;
  local_c = &DAT_00401dd8;
  local_8 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar4 + 4))(piVar4);
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  uVar1 = (**(code **)(*piVar4 + 0x30c))(piVar4);
  piVar2 = (int *)__vbaObjSet(&local_20,uVar1);
  iVar3 = (**(code **)(*piVar2 + 0x114))(piVar2,0);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,0x114);
  }
  __vbaFreeObj();
  uVar1 = (**(code **)(*piVar4 + 0x30c))(piVar4);
  piVar2 = (int *)__vbaObjSet(&local_24,uVar1);
  uVar1 = (**(code **)(*piVar4 + 0x30c))(piVar4);
  piVar4 = (int *)__vbaObjSet(&local_20,uVar1);
  iVar3 = (**(code **)(*piVar4 + 0xa0))(piVar4,&local_1c);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar4,&DAT_00406f50,0xa0);
  }
  iVar3 = *piVar2;
  uVar1 = __vbaLenBstr(local_1c);
  iVar3 = (**(code **)(iVar3 + 0x11c))(piVar2,uVar1);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406f50,0x11c);
  }
  __vbaFreeStr();
  __vbaFreeObjList(2,&local_20,&local_24);
  return;
}


// ---- FUN_0041a4f0 @ 0041a4f0

undefined4 FUN_0041a4f0(uint param_1,short *param_2)

{
  int iVar1;
  int *piVar2;
  void *local_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004020e6;
  local_18 = ExceptionList;
  local_10 = &stack0xffffffd0;
  local_c = &DAT_00401de8;
  local_8 = param_1 & 1;
  piVar2 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &local_18;
  (**(code **)(*piVar2 + 4))(piVar2);
  if (*param_2 == 0xd) {
    iVar1 = (**(code **)(*piVar2 + 0x6f8))(piVar2);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piVar2,&DAT_00408a08,0x6f8);
    }
  }
  local_8 = 0;
  (**(code **)(*piVar2 + 8))(piVar2);
  ExceptionList = local_18;
  return local_8;
}


// ---- FUN_0041a580 @ 0041a580

void __cdecl FUN_0041a580(uint param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int extraout_ECX;
  int extraout_ECX_00;
  int *piVar4;
  ushort uVar5;
  float10 fVar6;
  float local_48;
  float local_44 [6];
  undefined4 local_2c;
  undefined4 local_24;
  int *local_20 [2];
  void *pvStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004020e6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff84;
  local_c = &DAT_00401df0;
  local_8 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar4 + 4))(piVar4);
  local_20[0] = (int *)0x0;
  local_44[0] = 0.0;
  local_48 = 0.0;
  uVar2 = (**(code **)(*piVar4 + 0x324))(piVar4,0x1f,1,8,local_2c,L"Cal98",local_24);
  uVar2 = __vbaObjSet(local_20,uVar2);
  __vbaLateIdCall(uVar2);
  __vbaFreeObj();
  if (DAT_00422078 == (int *)0x0) {
    __vbaNew2(&DAT_00403b14,&DAT_00422078);
  }
  piVar4 = DAT_00422078;
  iVar3 = (**(code **)(*DAT_00422078 + 0x80))(DAT_00422078,&local_48);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar4,&DAT_00407418,0x80);
  }
  if (DAT_00422078 == (int *)0x0) {
    __vbaNew2(&DAT_00403b14,&DAT_00422078);
  }
  piVar4 = DAT_00422078;
  if (DAT_00422630 == (int *)0x0) {
    __vbaNew2(&DAT_00407b3c,&DAT_00422630);
  }
  piVar1 = DAT_00422630;
  iVar3 = (**(code **)(*DAT_00422630 + 0x18))(DAT_00422630,local_20);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar1,&DAT_00407b2c,0x18);
  }
  piVar1 = local_20[0];
  iVar3 = (**(code **)(*local_20[0] + 0x98))(local_20[0],local_44);
  uVar5 = 0;
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar1,&DAT_00407b4c,0x98);
  }
  iVar3 = *piVar4;
  if (DAT_00422000 == 0) {
    fVar6 = ((float10)local_44[0] - (float10)local_48) / (float10)DAT_00401d7c;
  }
  else {
    fVar6 = (float10)adj_fdiv_m32(DAT_00401d7c,iVar3);
    iVar3 = extraout_ECX;
  }
  if ((uVar5 & 0xd) == 0) {
    iVar3 = (**(code **)(iVar3 + 0x74))(piVar4,(float)fVar6);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar4,&DAT_00407418,0x74);
    }
    __vbaFreeObj();
    if (DAT_00422078 == (int *)0x0) {
      __vbaNew2(&DAT_00403b14,&DAT_00422078);
    }
    piVar4 = DAT_00422078;
    iVar3 = (**(code **)(*DAT_00422078 + 0x88))(DAT_00422078,&local_48);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar4,&DAT_00407418,0x88);
    }
    if (DAT_00422078 == (int *)0x0) {
      __vbaNew2(&DAT_00403b14,&DAT_00422078);
    }
    piVar4 = DAT_00422078;
    if (DAT_00422630 == (int *)0x0) {
      __vbaNew2(&DAT_00407b3c,&DAT_00422630);
    }
    piVar1 = DAT_00422630;
    iVar3 = (**(code **)(*DAT_00422630 + 0x18))(DAT_00422630,local_20);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar1,&DAT_00407b2c,0x18);
    }
    piVar1 = local_20[0];
    iVar3 = (**(code **)(*local_20[0] + 0x50))(local_20[0],local_44);
    uVar5 = 0;
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar1,&DAT_00407b4c,0x50);
    }
    iVar3 = *piVar4;
    if (DAT_00422000 == 0) {
      fVar6 = ((float10)local_44[0] - (float10)local_48) / (float10)DAT_00401d7c;
    }
    else {
      fVar6 = (float10)adj_fdiv_m32(DAT_00401d7c,iVar3);
      iVar3 = extraout_ECX_00;
    }
    if ((uVar5 & 0xd) == 0) {
      iVar3 = (**(code **)(iVar3 + 0x7c))(piVar4,(float)fVar6);
      if (iVar3 < 0) {
        __vbaHresultCheckObj(iVar3,piVar4,&DAT_00407418,0x7c);
      }
      __vbaFreeObj();
      return;
    }
  }
  __vbaFPException();
  return;
}


// ---- FUN_0041a880 @ 0041a880

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_0041a880(uint param_1)

{
  float10 fVar1;
  int *piVar2;
  int iVar3;
  float10 fVar4;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 *local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  wchar_t *local_58;
  undefined4 local_54;
  undefined4 local_50 [2];
  undefined4 local_48;
  undefined4 local_40 [2];
  undefined4 local_38;
  undefined4 local_30 [4];
  int *local_20;
  undefined4 local_1c;
  void *pvStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004020e6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff4c;
  local_c = &DAT_00401e00;
  local_8 = param_1 & 1;
  piVar2 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar2 + 4))(piVar2);
  local_1c = 0;
  local_20 = (int *)0x0;
  local_30[0] = 0;
  local_40[0] = 0;
  local_50[0] = 0;
  local_60 = 0;
  local_70 = 0;
  __vbaStrCopy(piVar2);
  FUN_00420380(&local_1c);
  fVar4 = (float10)__vbaFpR4();
  fVar1 = (float10)_DAT_00401978;
  __vbaFreeStr();
  if (fVar4 == fVar1) {
    rtcBeep();
    local_48 = 0x80020004;
    local_50[0] = 10;
    local_38 = 0x80020004;
    local_40[0] = 10;
    local_68 = &DAT_00422060;
    local_70 = 0x4008;
    local_58 = L"Calibration not enabled!";
    local_60 = 8;
    __vbaVarDup();
    rtcMsgBox(local_30,0x10,&local_70,local_40,local_50);
    __vbaFreeVarList(3,local_30,local_40,local_50);
  }
  else {
    FUN_0041ae00();
    if (DAT_00422630 == (int *)0x0) {
      __vbaNew2(&DAT_00407b3c,&DAT_00422630);
    }
    piVar2 = DAT_00422630;
    iVar3 = (**(code **)(*DAT_00422630 + 0x18))(DAT_00422630,&local_20);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar2,&DAT_00407b2c,0x18);
    }
    piVar2 = local_20;
    iVar3 = (**(code **)(*local_20 + 0x7c))(local_20,0xb);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar2,&DAT_00407b4c,0x7c);
    }
    __vbaFreeObj();
    if (DAT_00422110 == (int *)0x0) {
      __vbaNew2(&DAT_00404238,&DAT_00422110);
    }
    piVar2 = DAT_00422110;
    local_70 = 10;
    local_60 = 10;
    local_68 = (undefined4 *)0x80020004;
    local_58 = (wchar_t *)0x80020004;
    iVar3 = (**(code **)(*DAT_00422110 + 0x2b0))
                      (DAT_00422110,10,local_5c,0x80020004,local_54,10,local_6c,0x80020004,local_64)
    ;
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar2,&DAT_004089d8,0x2b0);
    }
    if (DAT_00422630 == (int *)0x0) {
      __vbaNew2(&DAT_00407b3c,&DAT_00422630);
    }
    piVar2 = DAT_00422630;
    iVar3 = (**(code **)(*DAT_00422630 + 0x18))(DAT_00422630,&local_20);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar2,&DAT_00407b2c,0x18);
    }
    piVar2 = local_20;
    iVar3 = (**(code **)(*local_20 + 0x7c))(local_20,0);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar2,&DAT_00407b4c,0x7c);
    }
    __vbaFreeObj();
    if (DAT_00422078 == (int *)0x0) {
      __vbaNew2(&DAT_00403b14,&DAT_00422078);
    }
    piVar2 = DAT_00422078;
    iVar3 = (**(code **)(*DAT_00422078 + 0x2b4))(DAT_00422078);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar2,&DAT_00407418,0x2b4);
    }
  }
  return;
}


// ---- FUN_0041ab90 @ 0041ab90

void __cdecl FUN_0041ab90(uint param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_1c;
  void *pvStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004020e6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc8;
  local_c = &DAT_00401e10;
  local_8 = param_1 & 1;
  ExceptionList = &pvStack_18;
  (**(code **)(*(int *)(param_1 & 0xfffffffe) + 4))((int *)(param_1 & 0xfffffffe));
  local_1c = 0;
  if (DAT_00422630 == (int *)0x0) {
    __vbaNew2(&DAT_00407b3c,&DAT_00422630);
  }
  piVar1 = DAT_00422630;
  if (DAT_00422078 == 0) {
    __vbaNew2(&DAT_00403b14,&DAT_00422078);
  }
  iVar3 = *piVar1;
  uVar2 = __vbaObjSetAddref(&local_1c,DAT_00422078);
  iVar3 = (**(code **)(iVar3 + 0x10))(piVar1,uVar2);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar1,&DAT_00407b2c,0x10);
  }
  __vbaFreeObj();
  return;
}


// ---- FUN_0041ac80 @ 0041ac80

void __cdecl FUN_0041ac80(uint param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 local_64 [2];
  undefined4 local_5c;
  undefined4 local_54 [2];
  undefined4 local_4c;
  undefined4 local_44 [4];
  undefined4 local_34 [2];
  undefined4 local_2c;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  void *pvStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004020e6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff54;
  local_c = &DAT_00401e20;
  local_8 = param_1 & 1;
  ExceptionList = &pvStack_18;
  (**(code **)(*(int *)(param_1 & 0xfffffffe) + 4))((int *)(param_1 & 0xfffffffe));
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_34[0] = 0;
  local_44[0] = 0;
  local_54[0] = 0;
  local_64[0] = 0;
  rtcBstrFromAnsi(10);
  __vbaStrMove();
  local_5c = 0x80020004;
  local_64[0] = 10;
  local_4c = 0x80020004;
  local_54[0] = 10;
  __vbaVarDup();
  local_24 = 0;
  uVar2 = DAT_00422060;
  uVar1 = __vbaStrMove(DAT_00422060);
  __vbaStrCat(uVar1,uVar2);
  uVar2 = __vbaStrMove();
  local_2c = __vbaStrCat(L"Press OK to continue, or Quit to exit",uVar2);
  local_34[0] = 8;
  rtcMsgBox(local_34,0x40,local_44,local_54,local_64);
  __vbaFreeStrList(3,&local_1c,&local_20,&local_24);
  __vbaFreeVarList(4,local_34,local_44,local_54,local_64);
  return;
}


// ---- FUN_0041ae00 @ 0041ae00

void FUN_0041ae00(void)

{
  int *piVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 local_6c [2];
  undefined4 *local_64;
  undefined4 local_5c [2];
  undefined4 local_54;
  undefined4 local_4c [2];
  undefined4 local_44;
  undefined4 local_3c [4];
  int *local_2c;
  undefined4 local_28;
  undefined4 local_24 [3];
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined1 *local_8;
  
  puStack_10 = &DAT_004020e6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffff44;
  local_8 = &LAB_00401e30;
  local_18 = 0;
  local_24[0] = 0;
  local_28 = 0;
  local_2c = (int *)0x0;
  local_3c[0] = 0;
  local_4c[0] = 0;
  local_5c[0] = 0;
  local_6c[0] = 0;
  ExceptionList = &pvStack_14;
  __vbaStrCopy();
  sVar2 = FUN_00420090(local_24);
  __vbaFreeStr();
  if (sVar2 == 0) {
    uVar6 = 10;
    rtcBstrFromAnsi(10);
    uVar3 = __vbaStrMove();
    __vbaStrCat(uVar3,uVar6);
    __vbaStrMove();
    __vbaFreeStr();
    __vbaStrCat(L"This calibration is for 420/430/460 columns.",local_18);
    uVar3 = __vbaStrMove();
    rtcBstrFromAnsi(10);
    uVar6 = __vbaStrMove(uVar3);
    __vbaStrCat(uVar6,uVar3);
    __vbaStrMove();
    __vbaFreeStrList(2,local_24,&local_28);
    __vbaStrCat(L"Do you wish to proceed?",local_18);
    __vbaStrMove();
    local_5c[0] = 10;
    local_4c[0] = 10;
    local_54 = 0x80020004;
    local_44 = 0x80020004;
    __vbaVarDup();
    local_64 = &local_18;
    local_6c[0] = 0x4008;
    rtcMsgBox(local_6c,0x34,local_3c,local_4c,local_5c);
    sVar2 = __vbaI2I4();
    __vbaFreeVarList(3,local_3c,local_4c);
    if (sVar2 == 7) {
      if (DAT_00422630 == (int *)0x0) {
        __vbaNew2(&DAT_00407b3c);
      }
      piVar1 = DAT_00422630;
      piVar7 = DAT_00422630;
      iVar4 = (**(code **)(*DAT_00422630 + 0x18))(DAT_00422630);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,piVar1,&DAT_00407b2c,0x18);
      }
      piVar1 = local_2c;
      uVar3 = 0xb;
      piVar5 = local_2c;
      iVar4 = (**(code **)(*local_2c + 0x7c))(local_2c,0xb);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,piVar1,&DAT_00407b4c,0x7c);
      }
      __vbaFreeObj();
      if (DAT_00422630 == (int *)0x0) {
        __vbaNew2(&DAT_00407b3c,&DAT_00422630);
      }
      piVar1 = DAT_00422630;
      if (DAT_00422078 == 0) {
        __vbaNew2(&DAT_00403b14,&DAT_00422078);
      }
      iVar4 = *piVar1;
      uVar6 = __vbaObjSetAddref(&local_2c,DAT_00422078);
      iVar4 = (**(code **)(iVar4 + 0x10))(piVar1,uVar6);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,piVar1,&DAT_00407b2c,0x10);
      }
      __vbaFreeObj();
      if (DAT_00422630 == (int *)0x0) {
        __vbaNew2(&DAT_00407b3c,&DAT_00422630);
      }
      piVar1 = DAT_00422630;
      iVar4 = (**(code **)(*DAT_00422630 + 0x18))(DAT_00422630,&local_2c);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,piVar1,&DAT_00407b2c,0x18);
      }
      piVar1 = local_2c;
      iVar4 = (**(code **)(*local_2c + 0x7c))(local_2c,0);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,piVar1,&DAT_00407b4c,0x7c);
      }
      __vbaFreeObj();
      __vbaEnd(piVar5,uVar3,piVar7);
    }
  }
  __vbaFreeStr();
  return;
}


// ---- FUN_0041b110 @ 0041b110

void FUN_0041b110(void)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 local_20;
  undefined4 local_1c [2];
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_004020e6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffffc4;
  local_8 = &DAT_00401e40;
  local_1c[0] = 0;
  local_20 = 0;
  ExceptionList = &pvStack_14;
  puVar1 = &stack0xffffffc4;
  if (DAT_00422010 == (int *)0x0) {
    ExceptionList = &pvStack_14;
    __vbaNew2(&DAT_004049b8,&DAT_00422010);
    puVar1 = local_c;
  }
  local_c = puVar1;
  uVar2 = (**(code **)(*DAT_00422010 + 0x390))(DAT_00422010);
  piVar3 = (int *)__vbaObjSet(&local_20,uVar2);
  iVar4 = (**(code **)(*piVar3 + 0x50))(piVar3,local_1c);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar3,&DAT_00406fdc,0x50);
  }
  __vbaStrCmp(L"READY",local_1c[0]);
  __vbaFreeStr();
  __vbaFreeObj();
  return;
}


// ---- FUN_0041b200 @ 0041b200

void FUN_0041b200(void)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  float10 fVar6;
  undefined4 local_20;
  undefined4 local_1c;
  float local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_004020e6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffffc8;
  local_8 = &DAT_00401e50;
  local_1c = 0;
  local_20 = 0;
  ExceptionList = &pvStack_14;
  puVar1 = &stack0xffffffc8;
  if (DAT_00422010 == (int *)0x0) {
    ExceptionList = &pvStack_14;
    __vbaNew2(&DAT_004049b8,&DAT_00422010);
    puVar1 = local_c;
  }
  local_c = puVar1;
  uVar2 = (**(code **)(*DAT_00422010 + 0x390))(DAT_00422010);
  piVar3 = (int *)__vbaObjSet(&local_20,uVar2);
  iVar4 = *piVar3;
  __vbaStrCat(L": READING LENS CURRENT",DAT_00422028);
  uVar2 = __vbaStrMove();
  piVar5 = piVar3;
  iVar4 = (**(code **)(iVar4 + 0x54))(piVar3,uVar2);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar3,&DAT_00406fdc,0x54);
  }
  __vbaFreeStr();
  __vbaFreeObj();
  __vbaStrCopy(piVar5,uVar2);
  fVar6 = (float10)FUN_00420380(&local_1c);
  local_18 = (float)fVar6;
  __vbaFreeStr();
  if (DAT_00422010 == (int *)0x0) {
    __vbaNew2(&DAT_004049b8,&DAT_00422010);
  }
  uVar2 = (**(code **)(*DAT_00422010 + 0x390))(DAT_00422010);
  piVar5 = (int *)__vbaObjSet(&local_20,uVar2);
  iVar4 = (**(code **)(*piVar5 + 0x54))(piVar5,DAT_00422028);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar5,&DAT_00406fdc,0x54);
  }
  __vbaFreeObj();
  return;
}


// ---- FUN_0041b360 @ 0041b360

void FUN_0041b360(void)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  float10 fVar6;
  undefined4 local_20;
  undefined4 local_1c;
  float local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_004020e6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffffc8;
  local_8 = &DAT_00401e60;
  local_1c = 0;
  local_20 = 0;
  ExceptionList = &pvStack_14;
  puVar1 = &stack0xffffffc8;
  if (DAT_00422010 == (int *)0x0) {
    ExceptionList = &pvStack_14;
    __vbaNew2(&DAT_004049b8,&DAT_00422010);
    puVar1 = local_c;
  }
  local_c = puVar1;
  uVar2 = (**(code **)(*DAT_00422010 + 0x390))(DAT_00422010);
  piVar3 = (int *)__vbaObjSet(&local_20,uVar2);
  iVar4 = *piVar3;
  __vbaStrCat(L": READING LENS CURRENT",DAT_00422028);
  uVar2 = __vbaStrMove();
  piVar5 = piVar3;
  iVar4 = (**(code **)(iVar4 + 0x54))(piVar3,uVar2);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar3,&DAT_00406fdc,0x54);
  }
  __vbaFreeStr();
  __vbaFreeObj();
  __vbaStrCopy(piVar5,uVar2);
  fVar6 = (float10)FUN_00420380(&local_1c);
  local_18 = (float)fVar6;
  __vbaFreeStr();
  if (DAT_00422010 == (int *)0x0) {
    __vbaNew2(&DAT_004049b8,&DAT_00422010);
  }
  uVar2 = (**(code **)(*DAT_00422010 + 0x390))(DAT_00422010);
  piVar5 = (int *)__vbaObjSet(&local_20,uVar2);
  iVar4 = (**(code **)(*piVar5 + 0x54))(piVar5,DAT_00422028);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar5,&DAT_00406fdc,0x54);
  }
  __vbaFreeObj();
  return;
}


// ---- FUN_0041b4c0 @ 0041b4c0

void FUN_0041b4c0(void)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  float10 fVar6;
  undefined4 local_20;
  undefined4 local_1c;
  float local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_004020e6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffffc8;
  local_8 = &DAT_00401e70;
  local_1c = 0;
  local_20 = 0;
  ExceptionList = &pvStack_14;
  puVar1 = &stack0xffffffc8;
  if (DAT_00422010 == (int *)0x0) {
    ExceptionList = &pvStack_14;
    __vbaNew2(&DAT_004049b8,&DAT_00422010);
    puVar1 = local_c;
  }
  local_c = puVar1;
  uVar2 = (**(code **)(*DAT_00422010 + 0x390))(DAT_00422010);
  piVar3 = (int *)__vbaObjSet(&local_20,uVar2);
  iVar4 = *piVar3;
  __vbaStrCat(L": READING LENS CURRENT",DAT_00422028);
  uVar2 = __vbaStrMove();
  piVar5 = piVar3;
  iVar4 = (**(code **)(iVar4 + 0x54))(piVar3,uVar2);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar3,&DAT_00406fdc,0x54);
  }
  __vbaFreeStr();
  __vbaFreeObj();
  __vbaStrCopy(piVar5,uVar2);
  fVar6 = (float10)FUN_00420380(&local_1c);
  local_18 = (float)fVar6;
  __vbaFreeStr();
  if (DAT_00422010 == (int *)0x0) {
    __vbaNew2(&DAT_004049b8,&DAT_00422010);
  }
  uVar2 = (**(code **)(*DAT_00422010 + 0x390))(DAT_00422010);
  piVar5 = (int *)__vbaObjSet(&local_20,uVar2);
  iVar4 = (**(code **)(*piVar5 + 0x54))(piVar5,DAT_00422028);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar5,&DAT_00406fdc,0x54);
  }
  __vbaFreeObj();
  return;
}


// ---- FUN_0041b620 @ 0041b620

void __cdecl FUN_0041b620(undefined2 *param_1)

{
  float10 fVar1;
  undefined4 local_20;
  float local_1c;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_004020e6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffffcc;
  local_8 = &DAT_00401e80;
  local_1c = 0.0;
  local_20 = 0;
  ExceptionList = &pvStack_14;
  switch(*param_1) {
  case 0:
    ExceptionList = &pvStack_14;
    local_c = &stack0xffffffcc;
    __vbaStrCopy();
    break;
  case 1:
    goto LAB_0041b6de;
  default:
    goto switchD_0041b660_caseD_2;
  case 3:
    ExceptionList = &pvStack_14;
    local_c = &stack0xffffffcc;
    __vbaStrCopy();
    break;
  case 4:
    ExceptionList = &pvStack_14;
    local_c = &stack0xffffffcc;
    __vbaStrCopy();
    break;
  case 5:
    goto LAB_0041b6de;
  case 6:
    ExceptionList = &pvStack_14;
    local_c = &stack0xffffffcc;
    __vbaStrCopy();
    break;
  case 7:
    ExceptionList = &pvStack_14;
    __vbaStrCopy();
    break;
  case 8:
LAB_0041b6de:
    ExceptionList = &pvStack_14;
    local_c = &stack0xffffffcc;
    __vbaStrCopy();
  }
  fVar1 = (float10)FUN_00420380(&local_20);
  local_1c = (float)fVar1;
  __vbaFreeStr();
switchD_0041b660_caseD_2:
  return;
}


// ---- FUN_0041b750 @ 0041b750

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041b750(void)

{
  undefined2 uVar1;
  int *piVar2;
  int iVar3;
  ushort uVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 extraout_ST0;
  undefined4 local_1c;
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_004020e6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffffcc;
  local_8 = &DAT_00401e98;
  local_18 = 0;
  local_1c = 0;
  ExceptionList = &pvStack_14;
  fVar5 = (float10)FUN_004210e0();
  _DAT_00422054 = (float)fVar5;
  while( true ) {
    fVar6 = (float10)__vbaFpR4();
    fVar5 = (float10)_DAT_00422054;
    fVar7 = (float10)__vbaFpR4();
    uVar4 = 0;
    if ((float10)_DAT_00422054 <= fVar7 && fVar6 <= fVar5) break;
    fVar5 = (float10)__vbaFpR4();
    if (fVar5 < (float10)_DAT_00422054) {
      FUN_0041d220();
      __vbaStrCopy();
      __vbaStrCat();
      __vbaStrMove();
      __vbaStrCat();
      __vbaStrMove();
      __vbaStrCat();
      __vbaStrMove();
      if (DAT_00422010 == (int *)0x0) {
        __vbaNew2();
      }
      (**(code **)(*DAT_00422010 + 0x38c))();
      piVar2 = (int *)__vbaObjSet(&local_1c);
      iVar3 = (**(code **)(*piVar2 + 0x54))(piVar2);
      if (iVar3 < 0) {
        __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406fdc,0x54);
      }
      __vbaFreeObj();
      FUN_0041f810();
      fVar5 = (float10)FUN_004210e0();
      _DAT_00422054 = (float)fVar5;
    }
    fVar5 = (float10)__vbaFpR4();
    if ((float10)_DAT_00422054 < fVar5) {
      FUN_0041d220();
      __vbaStrCopy();
      __vbaStrCat();
      __vbaStrMove();
      __vbaStrCat();
      __vbaStrMove();
      __vbaStrCat();
      __vbaStrMove();
      if (DAT_00422010 == (int *)0x0) {
        __vbaNew2();
      }
      (**(code **)(*DAT_00422010 + 0x38c))();
      piVar2 = (int *)__vbaObjSet(&local_1c);
      iVar3 = (**(code **)(*piVar2 + 0x54))(piVar2);
      if (iVar3 < 0) {
        __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406fdc,0x54);
      }
      __vbaFreeObj();
      FUN_0041f810();
      fVar5 = (float10)FUN_004210e0();
      _DAT_00422054 = (float)fVar5;
    }
  }
  fVar5 = (float10)FUN_00421060();
  _DAT_00422044 = (float)fVar5;
  __vbaStrCopy();
  fVar5 = (float10)FUN_00420380(&local_18);
  _DAT_00422048 = (float)fVar5;
  __vbaFreeStr();
  fVar5 = (float10)FUN_00421260();
  _DAT_0042204c = (float)fVar5;
  _DAT_00422050 = FUN_004211e0();
  uVar1 = FUN_00421160();
  if (DAT_00422000 == 0) {
    fVar5 = (float10)_DAT_00422048 / (float10)(double)CONCAT44(DAT_0040124c,DAT_00401248);
  }
  else {
    uVar1 = adj_fdiv_m64(DAT_00401248);
    fVar5 = extraout_ST0;
  }
  _DAT_00422052 = uVar1;
  if ((uVar4 & 0xd) == 0) {
    fVar5 = (float10)rtcSqr((double)((fVar5 + (float10)_DAT_00401240) * (float10)_DAT_00422048));
    DAT_00422058 = (float)fVar5;
    return;
  }
  __vbaFPException();
  return;
}


// ---- FUN_0041ba90 @ 0041ba90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041ba90(void)

{
  undefined1 *puVar1;
  short sVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  code *pcVar7;
  ushort uVar8;
  float10 fVar9;
  undefined4 local_48 [4];
  undefined4 local_38 [2];
  double local_30;
  undefined4 local_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  float local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_004020e6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffff80;
  local_8 = &DAT_00401ea8;
  local_24 = 0;
  local_28 = 0;
  local_38[0] = 0;
  local_48[0] = 0;
  ExceptionList = &pvStack_14;
  puVar1 = &stack0xffffff80;
  if (DAT_00422010 == (int *)0x0) {
    ExceptionList = &pvStack_14;
    __vbaNew2(&DAT_004049b8,&DAT_00422010);
    puVar1 = local_c;
  }
  local_c = puVar1;
  uVar3 = (**(code **)(*DAT_00422010 + 0x390))(DAT_00422010);
  piVar4 = (int *)__vbaObjSet(&local_28,uVar3);
  iVar5 = *piVar4;
  __vbaStrCat(L": C1/C2 HYSTERESIS",DAT_00422028);
  uVar3 = __vbaStrMove();
  piVar6 = piVar4;
  iVar5 = (**(code **)(iVar5 + 0x54))(piVar4,uVar3);
  uVar8 = 0;
  if (iVar5 < 0) {
    __vbaHresultCheckObj(iVar5,piVar4,&DAT_00406fdc,0x54);
  }
  __vbaFreeStr();
  __vbaFreeObj();
  rtcDoEvents();
  pcVar7 = __vbaStrCopy_exref;
  __vbaStrCopy(piVar6,uVar3);
  FUN_0041f940(&local_24);
  __vbaFreeStr();
  while( true ) {
    (*pcVar7)();
    sVar2 = FUN_00420090(&local_24);
    __vbaFreeStr();
    if (sVar2 == 0) break;
    (*pcVar7)();
    fVar9 = (float10)FUN_00420380(&local_24);
    local_20 = (float)fVar9;
    __vbaFreeStr();
    (*pcVar7)();
    fVar9 = (float10)FUN_00420380(&local_24);
    local_18 = (float)fVar9;
    __vbaFreeStr();
    (*pcVar7)();
    fVar9 = (float10)FUN_00420380(&local_24);
    local_1c = (float)fVar9;
    __vbaFreeStr();
    if (DAT_00422010 == (int *)0x0) {
      __vbaNew2(&DAT_004049b8,&DAT_00422010);
    }
    uVar3 = (**(code **)(*DAT_00422010 + 0x310))(DAT_00422010);
    piVar6 = (int *)__vbaObjSet(&local_28,uVar3);
    __vbaVarDup();
    local_38[0] = 5;
    local_30 = (double)(local_20 * (float)_DAT_00401250);
    if ((uVar8 & 0xd) != 0) goto LAB_0041c1b5;
    iVar5 = *piVar6;
    rtcBstrFromFormatVar(local_38,local_48,1,1);
    uVar3 = __vbaStrMove();
    iVar5 = (**(code **)(iVar5 + 0xa4))(piVar6,uVar3);
    uVar8 = 0;
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,piVar6,&DAT_00406f50,0xa4);
    }
    __vbaFreeStr();
    __vbaFreeObj();
    __vbaFreeVarList(2,local_38,local_48);
    if (DAT_00422010 == (int *)0x0) {
      __vbaNew2(&DAT_004049b8,&DAT_00422010);
    }
    uVar3 = (**(code **)(*DAT_00422010 + 0x318))(DAT_00422010);
    piVar6 = (int *)__vbaObjSet(&local_28,uVar3);
    __vbaVarDup();
    local_38[0] = 5;
    local_30 = (double)(local_18 * (float)_DAT_00401250);
    if ((uVar8 & 0xd) != 0) goto LAB_0041c1b5;
    iVar5 = *piVar6;
    rtcBstrFromFormatVar(local_38,local_48,1,1);
    uVar3 = __vbaStrMove();
    iVar5 = (**(code **)(iVar5 + 0xa4))(piVar6,uVar3);
    uVar8 = 0;
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,piVar6,&DAT_00406f50,0xa4);
    }
    __vbaFreeStr();
    __vbaFreeObj();
    __vbaFreeVarList(2,local_38,local_48);
    if (DAT_00422010 == (int *)0x0) {
      __vbaNew2(&DAT_004049b8,&DAT_00422010);
    }
    uVar3 = (**(code **)(*DAT_00422010 + 800))(DAT_00422010);
    piVar6 = (int *)__vbaObjSet(&local_28,uVar3);
    __vbaVarDup();
    local_38[0] = 5;
    local_30 = (double)(local_1c * (float)_DAT_00401250);
    if ((uVar8 & 0xd) != 0) goto LAB_0041c1b5;
    iVar5 = *piVar6;
    rtcBstrFromFormatVar(local_38,local_48,1,1);
    uVar3 = __vbaStrMove();
    iVar5 = (**(code **)(iVar5 + 0xa4))(piVar6,uVar3);
    uVar8 = 0;
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,piVar6,&DAT_00406f50,0xa4);
    }
    __vbaFreeStr();
    __vbaFreeObj();
    __vbaFreeVarList(2,local_38,local_48);
    rtcDoEvents();
    pcVar7 = __vbaStrCopy_exref;
  }
  if (DAT_00422010 == (int *)0x0) {
    __vbaNew2(&DAT_004049b8,&DAT_00422010);
  }
  uVar3 = (**(code **)(*DAT_00422010 + 0x390))(DAT_00422010);
  piVar6 = (int *)__vbaObjSet(&local_28,uVar3);
  iVar5 = (**(code **)(*piVar6 + 0x54))(piVar6,DAT_00422028);
  uVar8 = 0;
  if (iVar5 < 0) {
    __vbaHresultCheckObj(iVar5,piVar6,&DAT_00406fdc,0x54);
  }
  __vbaFreeObj();
  (*pcVar7)();
  fVar9 = (float10)FUN_00420380(&local_24);
  local_20 = (float)fVar9;
  __vbaFreeStr();
  (*pcVar7)();
  fVar9 = (float10)FUN_00420380(&local_24);
  local_18 = (float)fVar9;
  __vbaFreeStr();
  (*pcVar7)();
  fVar9 = (float10)FUN_00420380(&local_24);
  local_1c = (float)fVar9;
  __vbaFreeStr();
  if (DAT_00422010 == (int *)0x0) {
    __vbaNew2(&DAT_004049b8,&DAT_00422010);
  }
  uVar3 = (**(code **)(*DAT_00422010 + 0x310))(DAT_00422010);
  piVar6 = (int *)__vbaObjSet(&local_28,uVar3);
  __vbaVarDup();
  local_30 = (double)(local_20 * (float)_DAT_00401250);
  if ((uVar8 & 0xd) == 0) {
    local_38[0] = 5;
    iVar5 = *piVar6;
    rtcBstrFromFormatVar(local_38,local_48,1,1);
    uVar3 = __vbaStrMove();
    iVar5 = (**(code **)(iVar5 + 0xa4))(piVar6,uVar3);
    uVar8 = 0;
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,piVar6,&DAT_00406f50,0xa4);
    }
    __vbaFreeStr();
    __vbaFreeObj();
    __vbaFreeVarList(2,local_38,local_48);
    if (DAT_00422010 == (int *)0x0) {
      __vbaNew2(&DAT_004049b8,&DAT_00422010);
    }
    uVar3 = (**(code **)(*DAT_00422010 + 0x318))(DAT_00422010);
    piVar6 = (int *)__vbaObjSet(&local_28,uVar3);
    __vbaVarDup();
    local_30 = (double)(local_18 * (float)_DAT_00401250);
    if ((uVar8 & 0xd) == 0) {
      local_38[0] = 5;
      iVar5 = *piVar6;
      rtcBstrFromFormatVar(local_38,local_48,1,1);
      uVar3 = __vbaStrMove();
      iVar5 = (**(code **)(iVar5 + 0xa4))(piVar6,uVar3);
      uVar8 = 0;
      if (iVar5 < 0) {
        __vbaHresultCheckObj(iVar5,piVar6,&DAT_00406f50,0xa4);
      }
      __vbaFreeStr();
      __vbaFreeObj();
      __vbaFreeVarList(2,local_38,local_48);
      if (DAT_00422010 == (int *)0x0) {
        __vbaNew2(&DAT_004049b8,&DAT_00422010);
      }
      uVar3 = (**(code **)(*DAT_00422010 + 800))(DAT_00422010);
      piVar6 = (int *)__vbaObjSet(&local_28,uVar3);
      __vbaVarDup();
      local_30 = (double)(local_1c * (float)_DAT_00401250);
      if ((uVar8 & 0xd) == 0) {
        local_38[0] = 5;
        iVar5 = *piVar6;
        rtcBstrFromFormatVar(local_38,local_48,1,1);
        uVar3 = __vbaStrMove();
        iVar5 = (**(code **)(iVar5 + 0xa4))(piVar6,uVar3);
        if (iVar5 < 0) {
          __vbaHresultCheckObj(iVar5,piVar6,&DAT_00406f50,0xa4);
        }
        __vbaFreeStr();
        __vbaFreeObj();
        __vbaFreeVarList(2,local_38,local_48);
        rtcDoEvents();
        return;
      }
    }
  }
LAB_0041c1b5:
  __vbaFPException(1);
  return;
}


// ---- FUN_0041c1c0 @ 0041c1c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041c1c0(void)

{
  undefined1 *puVar1;
  short sVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  code *pcVar7;
  ushort uVar8;
  float10 fVar9;
  undefined4 local_48 [4];
  undefined4 local_38 [2];
  double local_30;
  undefined4 local_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  float local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_004020e6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffff80;
  local_8 = &DAT_00401eb8;
  local_24 = 0;
  local_28 = 0;
  local_38[0] = 0;
  local_48[0] = 0;
  ExceptionList = &pvStack_14;
  puVar1 = &stack0xffffff80;
  if (DAT_00422010 == (int *)0x0) {
    ExceptionList = &pvStack_14;
    __vbaNew2(&DAT_004049b8,&DAT_00422010);
    puVar1 = local_c;
  }
  local_c = puVar1;
  uVar3 = (**(code **)(*DAT_00422010 + 0x390))(DAT_00422010);
  piVar4 = (int *)__vbaObjSet(&local_28,uVar3);
  iVar5 = *piVar4;
  __vbaStrCat(L": C3 HYSTERESIS",DAT_00422028);
  uVar3 = __vbaStrMove();
  piVar6 = piVar4;
  iVar5 = (**(code **)(iVar5 + 0x54))(piVar4,uVar3);
  uVar8 = 0;
  if (iVar5 < 0) {
    __vbaHresultCheckObj(iVar5,piVar4,&DAT_00406fdc,0x54);
  }
  __vbaFreeStr();
  __vbaFreeObj();
  rtcDoEvents();
  pcVar7 = __vbaStrCopy_exref;
  __vbaStrCopy(piVar6,uVar3);
  FUN_0041f940(&local_24);
  __vbaFreeStr();
  while( true ) {
    (*pcVar7)();
    sVar2 = FUN_00420090(&local_24);
    __vbaFreeStr();
    if (sVar2 == 0) break;
    (*pcVar7)();
    fVar9 = (float10)FUN_00420380(&local_24);
    local_20 = (float)fVar9;
    __vbaFreeStr();
    (*pcVar7)();
    fVar9 = (float10)FUN_00420380(&local_24);
    local_18 = (float)fVar9;
    __vbaFreeStr();
    (*pcVar7)();
    fVar9 = (float10)FUN_00420380(&local_24);
    local_1c = (float)fVar9;
    __vbaFreeStr();
    if (DAT_00422010 == (int *)0x0) {
      __vbaNew2(&DAT_004049b8,&DAT_00422010);
    }
    uVar3 = (**(code **)(*DAT_00422010 + 0x310))(DAT_00422010);
    piVar6 = (int *)__vbaObjSet(&local_28,uVar3);
    __vbaVarDup();
    local_38[0] = 5;
    local_30 = (double)(local_20 * (float)_DAT_00401250);
    if ((uVar8 & 0xd) != 0) goto LAB_0041c8e5;
    iVar5 = *piVar6;
    rtcBstrFromFormatVar(local_38,local_48,1,1);
    uVar3 = __vbaStrMove();
    iVar5 = (**(code **)(iVar5 + 0xa4))(piVar6,uVar3);
    uVar8 = 0;
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,piVar6,&DAT_00406f50,0xa4);
    }
    __vbaFreeStr();
    __vbaFreeObj();
    __vbaFreeVarList(2,local_38,local_48);
    if (DAT_00422010 == (int *)0x0) {
      __vbaNew2(&DAT_004049b8,&DAT_00422010);
    }
    uVar3 = (**(code **)(*DAT_00422010 + 0x318))(DAT_00422010);
    piVar6 = (int *)__vbaObjSet(&local_28,uVar3);
    __vbaVarDup();
    local_38[0] = 5;
    local_30 = (double)(local_18 * (float)_DAT_00401250);
    if ((uVar8 & 0xd) != 0) goto LAB_0041c8e5;
    iVar5 = *piVar6;
    rtcBstrFromFormatVar(local_38,local_48,1,1);
    uVar3 = __vbaStrMove();
    iVar5 = (**(code **)(iVar5 + 0xa4))(piVar6,uVar3);
    uVar8 = 0;
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,piVar6,&DAT_00406f50,0xa4);
    }
    __vbaFreeStr();
    __vbaFreeObj();
    __vbaFreeVarList(2,local_38,local_48);
    if (DAT_00422010 == (int *)0x0) {
      __vbaNew2(&DAT_004049b8,&DAT_00422010);
    }
    uVar3 = (**(code **)(*DAT_00422010 + 800))(DAT_00422010);
    piVar6 = (int *)__vbaObjSet(&local_28,uVar3);
    __vbaVarDup();
    local_38[0] = 5;
    local_30 = (double)(local_1c * (float)_DAT_00401250);
    if ((uVar8 & 0xd) != 0) goto LAB_0041c8e5;
    iVar5 = *piVar6;
    rtcBstrFromFormatVar(local_38,local_48,1,1);
    uVar3 = __vbaStrMove();
    iVar5 = (**(code **)(iVar5 + 0xa4))(piVar6,uVar3);
    uVar8 = 0;
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,piVar6,&DAT_00406f50,0xa4);
    }
    __vbaFreeStr();
    __vbaFreeObj();
    __vbaFreeVarList(2,local_38,local_48);
    rtcDoEvents();
    pcVar7 = __vbaStrCopy_exref;
  }
  if (DAT_00422010 == (int *)0x0) {
    __vbaNew2(&DAT_004049b8,&DAT_00422010);
  }
  uVar3 = (**(code **)(*DAT_00422010 + 0x390))(DAT_00422010);
  piVar6 = (int *)__vbaObjSet(&local_28,uVar3);
  iVar5 = (**(code **)(*piVar6 + 0x54))(piVar6,DAT_00422028);
  uVar8 = 0;
  if (iVar5 < 0) {
    __vbaHresultCheckObj(iVar5,piVar6,&DAT_00406fdc,0x54);
  }
  __vbaFreeObj();
  (*pcVar7)();
  fVar9 = (float10)FUN_00420380(&local_24);
  local_20 = (float)fVar9;
  __vbaFreeStr();
  (*pcVar7)();
  fVar9 = (float10)FUN_00420380(&local_24);
  local_18 = (float)fVar9;
  __vbaFreeStr();
  (*pcVar7)();
  fVar9 = (float10)FUN_00420380(&local_24);
  local_1c = (float)fVar9;
  __vbaFreeStr();
  if (DAT_00422010 == (int *)0x0) {
    __vbaNew2(&DAT_004049b8,&DAT_00422010);
  }
  uVar3 = (**(code **)(*DAT_00422010 + 0x310))(DAT_00422010);
  piVar6 = (int *)__vbaObjSet(&local_28,uVar3);
  __vbaVarDup();
  local_30 = (double)(local_20 * (float)_DAT_00401250);
  if ((uVar8 & 0xd) == 0) {
    local_38[0] = 5;
    iVar5 = *piVar6;
    rtcBstrFromFormatVar(local_38,local_48,1,1);
    uVar3 = __vbaStrMove();
    iVar5 = (**(code **)(iVar5 + 0xa4))(piVar6,uVar3);
    uVar8 = 0;
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,piVar6,&DAT_00406f50,0xa4);
    }
    __vbaFreeStr();
    __vbaFreeObj();
    __vbaFreeVarList(2,local_38,local_48);
    if (DAT_00422010 == (int *)0x0) {
      __vbaNew2(&DAT_004049b8,&DAT_00422010);
    }
    uVar3 = (**(code **)(*DAT_00422010 + 0x318))(DAT_00422010);
    piVar6 = (int *)__vbaObjSet(&local_28,uVar3);
    __vbaVarDup();
    local_30 = (double)(local_18 * (float)_DAT_00401250);
    if ((uVar8 & 0xd) == 0) {
      local_38[0] = 5;
      iVar5 = *piVar6;
      rtcBstrFromFormatVar(local_38,local_48,1,1);
      uVar3 = __vbaStrMove();
      iVar5 = (**(code **)(iVar5 + 0xa4))(piVar6,uVar3);
      uVar8 = 0;
      if (iVar5 < 0) {
        __vbaHresultCheckObj(iVar5,piVar6,&DAT_00406f50,0xa4);
      }
      __vbaFreeStr();
      __vbaFreeObj();
      __vbaFreeVarList(2,local_38,local_48);
      if (DAT_00422010 == (int *)0x0) {
        __vbaNew2(&DAT_004049b8,&DAT_00422010);
      }
      uVar3 = (**(code **)(*DAT_00422010 + 800))(DAT_00422010);
      piVar6 = (int *)__vbaObjSet(&local_28,uVar3);
      __vbaVarDup();
      local_30 = (double)(local_1c * (float)_DAT_00401250);
      if ((uVar8 & 0xd) == 0) {
        local_38[0] = 5;
        iVar5 = *piVar6;
        rtcBstrFromFormatVar(local_38,local_48,1,1);
        uVar3 = __vbaStrMove();
        iVar5 = (**(code **)(iVar5 + 0xa4))(piVar6,uVar3);
        if (iVar5 < 0) {
          __vbaHresultCheckObj(iVar5,piVar6,&DAT_00406f50,0xa4);
        }
        __vbaFreeStr();
        __vbaFreeObj();
        __vbaFreeVarList(2,local_38,local_48);
        rtcDoEvents();
        return;
      }
    }
  }
LAB_0041c8e5:
  __vbaFPException(1);
  return;
}


// ---- FUN_0041c8f0 @ 0041c8f0

void FUN_0041c8f0(void)

{
  short sVar1;
  short sVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  float10 fVar7;
  undefined4 *puVar8;
  undefined4 local_ac [13];
  undefined4 local_78;
  wchar_t *local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_48 [2];
  undefined4 local_40;
  undefined4 local_38 [4];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  float local_1c;
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_004020e6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffff3c;
  local_8 = &DAT_00401ec8;
  local_1c = 0.0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_38[0] = 0;
  local_48[0] = 0;
  local_58 = 0;
  local_68 = 0;
  local_78 = 0;
  local_ac[0] = 0;
  ExceptionList = &pvStack_14;
  __vbaStrCopy();
  local_18 = FUN_00420090(&local_20);
  __vbaFreeStr();
  if (((short)local_18 == 5) || ((short)local_18 == 7)) {
    __vbaStrCopy();
    fVar7 = (float10)FUN_00420380(&local_20);
    local_1c = (float)fVar7;
    __vbaFreeStr();
    local_ac[0] = 0;
    __vbaStrCopy();
    FUN_00420b30(&local_20,local_ac);
    __vbaFreeStr();
    local_60 = 0x80020004;
    local_50 = 0x80020004;
    local_40 = 0x80020004;
    local_68 = 10;
    local_58 = 10;
    local_48[0] = 10;
    local_70 = L"Please manually normalise C1 lens";
    local_78 = 8;
    __vbaVarDup();
    rtcMsgBox(local_38,0,local_48);
    __vbaFreeVarList(4,local_38,local_48);
    __vbaStrCopy();
    FUN_00420b30(&local_20,&local_1c);
    __vbaFreeStr();
  }
  else {
    if (DAT_00422010 == (int *)0x0) {
      __vbaNew2(&DAT_004049b8);
    }
    uVar3 = (**(code **)(*DAT_00422010 + 0x390))();
    piVar4 = (int *)__vbaObjSet(&local_28,uVar3);
    iVar5 = *piVar4;
    __vbaStrCat(L": NORMALISING C1",DAT_00422028);
    uVar3 = __vbaStrMove();
    piVar6 = piVar4;
    iVar5 = (**(code **)(iVar5 + 0x54))(piVar4,uVar3);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,piVar4,&DAT_00406fdc,0x54);
    }
    __vbaFreeStr();
    __vbaFreeObj();
    __vbaStrCopy(piVar6,uVar3);
    puVar8 = &local_20;
    FUN_0041f940(puVar8);
    __vbaFreeStr();
    while( true ) {
      __vbaStrCopy(puVar8);
      __vbaStrCopy();
      sVar1 = FUN_00420090(&local_20);
      sVar2 = FUN_00420090(&local_24);
      puVar8 = &local_20;
      __vbaFreeStrList(2);
      if (sVar1 != 3 || sVar2 == 0) break;
      rtcDoEvents();
    }
    if (DAT_00422010 == (int *)0x0) {
      __vbaNew2(&DAT_004049b8);
    }
    uVar3 = (**(code **)(*DAT_00422010 + 0x390))();
    piVar6 = (int *)__vbaObjSet(&local_28,uVar3);
    iVar5 = (**(code **)(*piVar6 + 0x54))(piVar6,DAT_00422028);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,piVar6,&DAT_00406fdc,0x54);
    }
    __vbaFreeObj();
  }
  return;
}


// ---- FUN_0041cc00 @ 0041cc00

void FUN_0041cc00(void)

{
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_004020e6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffffd4;
  local_8 = &DAT_00401ed8;
  local_18 = 0;
  ExceptionList = &pvStack_14;
  __vbaStrCopy();
  FUN_00420780(&local_18);
  __vbaFreeStr();
  __vbaStrCopy();
  FUN_00420780(&local_18);
  __vbaFreeStr();
  return;
}


// ---- FUN_0041cca0 @ 0041cca0

void FUN_0041cca0(void)

{
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_004020e6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffffd4;
  local_8 = &DAT_00401ee8;
  local_18 = 0;
  ExceptionList = &pvStack_14;
  __vbaStrCopy();
  FUN_00420780(&local_18);
  __vbaFreeStr();
  __vbaStrCopy();
  FUN_00420780(&local_18);
  __vbaFreeStr();
  return;
}


// ---- FUN_0041cd50 @ 0041cd50

void FUN_0041cd50(void)

{
  short sVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  float10 fVar6;
  undefined4 *puVar7;
  undefined4 local_a8 [13];
  undefined4 local_74;
  wchar_t *local_6c;
  undefined4 local_64;
  undefined4 local_5c;
  undefined4 local_54;
  undefined4 local_4c;
  undefined4 local_44 [2];
  undefined4 local_3c;
  undefined4 local_34 [4];
  undefined4 local_24;
  undefined4 local_20;
  float local_1c;
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_004020e6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffff3c;
  local_8 = &DAT_00401ef8;
  local_1c = 0.0;
  local_20 = 0;
  local_24 = 0;
  local_34[0] = 0;
  local_44[0] = 0;
  local_54 = 0;
  local_64 = 0;
  local_74 = 0;
  local_a8[0] = 0;
  ExceptionList = &pvStack_14;
  __vbaStrCopy();
  local_18 = FUN_00420090(&local_20);
  __vbaFreeStr();
  if (((short)local_18 == 5) || ((short)local_18 == 7)) {
    __vbaStrCopy();
    fVar6 = (float10)FUN_00420380(&local_20);
    local_1c = (float)fVar6;
    __vbaFreeStr();
    local_a8[0] = 0;
    __vbaStrCopy();
    FUN_00420b30(&local_20,local_a8);
    __vbaFreeStr();
    local_5c = 0x80020004;
    local_4c = 0x80020004;
    local_3c = 0x80020004;
    local_64 = 10;
    local_54 = 10;
    local_44[0] = 10;
    local_6c = L"Please manually reverse C1 lens";
    local_74 = 8;
    __vbaVarDup();
    rtcMsgBox(local_34,0,local_44);
    __vbaFreeVarList(4,local_34,local_44);
    __vbaStrCopy();
    FUN_00420b30(&local_20,&local_1c);
    __vbaFreeStr();
  }
  else {
    if (DAT_00422010 == (int *)0x0) {
      __vbaNew2(&DAT_004049b8);
    }
    uVar2 = (**(code **)(*DAT_00422010 + 0x390))();
    piVar3 = (int *)__vbaObjSet(&local_24,uVar2);
    iVar4 = *piVar3;
    __vbaStrCat(L": REVERSING C1",DAT_00422028);
    uVar2 = __vbaStrMove();
    piVar5 = piVar3;
    iVar4 = (**(code **)(iVar4 + 0x54))(piVar3,uVar2);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar3,&DAT_00406fdc,0x54);
    }
    __vbaFreeStr();
    __vbaFreeObj();
    __vbaStrCopy(piVar5,uVar2);
    puVar7 = &local_20;
    FUN_0041f940(puVar7);
    __vbaFreeStr();
    while( true ) {
      __vbaStrCopy(puVar7);
      sVar1 = FUN_00420090(&local_20);
      __vbaFreeStr();
      if (sVar1 == 1) break;
      puVar7 = (undefined4 *)0x41cea9;
      rtcDoEvents();
    }
    if (DAT_00422010 == (int *)0x0) {
      __vbaNew2(&DAT_004049b8,&DAT_00422010);
    }
    uVar2 = (**(code **)(*DAT_00422010 + 0x390))(DAT_00422010);
    piVar5 = (int *)__vbaObjSet(&local_24,uVar2);
    iVar4 = (**(code **)(*piVar5 + 0x54))(piVar5,DAT_00422028);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar5,&DAT_00406fdc,0x54);
    }
    __vbaFreeObj();
  }
  return;
}


// ---- FUN_0041d030 @ 0041d030

void __cdecl FUN_0041d030(undefined2 *param_1)

{
  float10 fVar1;
  undefined4 local_1c;
  float local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_004020e6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffffd0;
  local_8 = &DAT_00401f08;
  local_18 = 0.0;
  local_1c = 0;
  ExceptionList = &pvStack_14;
  switch(*param_1) {
  case 0:
    ExceptionList = &pvStack_14;
    local_c = &stack0xffffffd0;
    __vbaStrCopy();
    break;
  case 1:
    goto LAB_0041d0ee;
  default:
    goto code_r0x0041d10d;
  case 3:
    ExceptionList = &pvStack_14;
    local_c = &stack0xffffffd0;
    __vbaStrCopy();
    break;
  case 4:
    ExceptionList = &pvStack_14;
    local_c = &stack0xffffffd0;
    __vbaStrCopy();
    break;
  case 5:
    goto LAB_0041d0ee;
  case 6:
    ExceptionList = &pvStack_14;
    local_c = &stack0xffffffd0;
    __vbaStrCopy();
    break;
  case 7:
    ExceptionList = &pvStack_14;
    __vbaStrCopy();
    break;
  case 8:
LAB_0041d0ee:
    ExceptionList = &pvStack_14;
    local_c = &stack0xffffffd0;
    __vbaStrCopy();
  }
  fVar1 = (float10)FUN_00420380(&local_1c);
  local_18 = (float)fVar1;
  __vbaFreeStr();
code_r0x0041d10d:
  return;
}


// ---- FUN_0041d160 @ 0041d160

void FUN_0041d160(void)

{
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_004020e6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffffd4;
  local_8 = &DAT_00401f18;
  local_18 = 0;
  ExceptionList = &pvStack_14;
  __vbaStrCopy();
  FUN_00420780(&local_18);
  __vbaFreeStr();
  FUN_004212e0((undefined4 *)&DAT_00422044);
  FUN_0041c8f0();
  FUN_0041f560((float *)&DAT_00422048);
  FUN_004214e0((undefined4 *)&DAT_0042204c);
  FUN_00421460();
  FUN_00421360((undefined2 *)&DAT_00422052);
  return;
}


// ---- FUN_0041d220 @ 0041d220

void FUN_0041d220(void)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 local_1c;
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_004020e6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffffcc;
  local_8 = &DAT_00401f28;
  local_18 = 0;
  local_1c = 0;
  DAT_0042202c = 0;
  ExceptionList = &pvStack_14;
  puVar1 = &stack0xffffffcc;
  if (DAT_00422010 == (int *)0x0) {
    ExceptionList = &pvStack_14;
    __vbaNew2(&DAT_004049b8,&DAT_00422010);
    puVar1 = local_c;
  }
  local_c = puVar1;
  uVar2 = (**(code **)(*DAT_00422010 + 0x2fc))(DAT_00422010);
  piVar3 = (int *)__vbaObjSet(&local_1c,uVar2);
  iVar4 = (**(code **)(*piVar3 + 0x8c))(piVar3,0xffffffff);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar3,&DAT_00407768,0x8c);
  }
  __vbaFreeObj();
  if (DAT_00422010 == (int *)0x0) {
    __vbaNew2(&DAT_004049b8,&DAT_00422010);
  }
  uVar2 = (**(code **)(*DAT_00422010 + 0x2fc))(DAT_00422010);
  piVar3 = (int *)__vbaObjSet(&local_1c,uVar2);
  iVar4 = (**(code **)(*piVar3 + 0x1a4))(piVar3);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar3,&DAT_00407768,0x1a4);
  }
  __vbaFreeObj();
  if (DAT_00422010 == (int *)0x0) {
    __vbaNew2(&DAT_004049b8,&DAT_00422010);
  }
  uVar2 = (**(code **)(*DAT_00422010 + 0x390))(DAT_00422010);
  piVar3 = (int *)__vbaObjSet(&local_1c,uVar2);
  iVar4 = *piVar3;
  __vbaStrCat(L": WAITING MANUAL ADJUSTMENT",DAT_00422028);
  uVar2 = __vbaStrMove();
  iVar4 = (**(code **)(iVar4 + 0x54))(piVar3,uVar2);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar3,&DAT_00406fdc,0x54);
  }
  __vbaFreeStr();
  __vbaFreeObj();
  return;
}


// ---- thunk_FUN_0041d160 @ 0041d3c0

void thunk_FUN_0041d160(void)

{
  undefined4 uStack_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *puStack_c;
  undefined *puStack_8;
  
  puStack_10 = &DAT_004020e6;
  pvStack_14 = ExceptionList;
  puStack_c = &stack0xffffffd4;
  puStack_8 = &DAT_00401f18;
  uStack_18 = 0;
  ExceptionList = &pvStack_14;
  __vbaStrCopy();
  FUN_00420780(&uStack_18);
  __vbaFreeStr();
  FUN_004212e0((undefined4 *)&DAT_00422044);
  FUN_0041c8f0();
  FUN_0041f560((float *)&DAT_00422048);
  FUN_004214e0((undefined4 *)&DAT_0042204c);
  FUN_00421460();
  FUN_00421360((undefined2 *)&DAT_00422052);
  return;
}


// ---- FUN_0041d3d0 @ 0041d3d0

void __cdecl FUN_0041d3d0(undefined4 *param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  undefined4 local_1c;
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_004020e6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffffcc;
  local_8 = &DAT_00401f38;
  local_18 = 0;
  local_1c = 0;
  ExceptionList = &pvStack_14;
  puVar1 = &stack0xffffffcc;
  if (DAT_00422010 == (int *)0x0) {
    ExceptionList = &pvStack_14;
    __vbaNew2(&DAT_004049b8,&DAT_00422010);
    puVar1 = local_c;
  }
  local_c = puVar1;
  uVar2 = (**(code **)(*DAT_00422010 + 0x390))(DAT_00422010);
  piVar3 = (int *)__vbaObjSet(&local_1c,uVar2);
  iVar4 = *piVar3;
  __vbaStrCat(L": SETTING LENS CURRENT",DAT_00422028);
  uVar2 = __vbaStrMove();
  piVar5 = piVar3;
  iVar4 = (**(code **)(iVar4 + 0x54))(piVar3,uVar2);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar3,&DAT_00406fdc,0x54);
  }
  __vbaFreeStr();
  __vbaFreeObj();
  __vbaStrCopy(piVar5,uVar2);
  FUN_00420b30(&local_18,param_1);
  __vbaFreeStr();
  if (DAT_00422010 == (int *)0x0) {
    __vbaNew2(&DAT_004049b8,&DAT_00422010);
  }
  uVar2 = (**(code **)(*DAT_00422010 + 0x390))(DAT_00422010);
  piVar5 = (int *)__vbaObjSet(&local_1c,uVar2);
  iVar4 = (**(code **)(*piVar5 + 0x54))(piVar5,DAT_00422028);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar5,&DAT_00406fdc,0x54);
  }
  __vbaFreeObj();
  return;
}


// ---- FUN_0041d530 @ 0041d530

void __cdecl FUN_0041d530(undefined4 *param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  undefined4 local_1c;
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_004020e6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffffcc;
  local_8 = &DAT_00401f48;
  local_18 = 0;
  local_1c = 0;
  ExceptionList = &pvStack_14;
  puVar1 = &stack0xffffffcc;
  if (DAT_00422010 == (int *)0x0) {
    ExceptionList = &pvStack_14;
    __vbaNew2(&DAT_004049b8,&DAT_00422010);
    puVar1 = local_c;
  }
  local_c = puVar1;
  uVar2 = (**(code **)(*DAT_00422010 + 0x390))(DAT_00422010);
  piVar3 = (int *)__vbaObjSet(&local_1c,uVar2);
  iVar4 = *piVar3;
  __vbaStrCat(L": SETTING LENS CURRENT",DAT_00422028);
  uVar2 = __vbaStrMove();
  piVar5 = piVar3;
  iVar4 = (**(code **)(iVar4 + 0x54))(piVar3,uVar2);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar3,&DAT_00406fdc,0x54);
  }
  __vbaFreeStr();
  __vbaFreeObj();
  __vbaStrCopy(piVar5,uVar2);
  FUN_00420b30(&local_18,param_1);
  __vbaFreeStr();
  if (DAT_00422010 == (int *)0x0) {
    __vbaNew2(&DAT_004049b8,&DAT_00422010);
  }
  uVar2 = (**(code **)(*DAT_00422010 + 0x390))(DAT_00422010);
  piVar5 = (int *)__vbaObjSet(&local_1c,uVar2);
  iVar4 = (**(code **)(*piVar5 + 0x54))(piVar5,DAT_00422028);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar5,&DAT_00406fdc,0x54);
  }
  __vbaFreeObj();
  return;
}


// ---- FUN_0041d690 @ 0041d690

void __cdecl FUN_0041d690(undefined4 *param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  undefined4 local_1c;
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined1 *local_8;
  
  puStack_10 = &DAT_004020e6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffffcc;
  local_8 = &LAB_00401f58;
  local_18 = 0;
  local_1c = 0;
  ExceptionList = &pvStack_14;
  puVar1 = &stack0xffffffcc;
  if (DAT_00422010 == (int *)0x0) {
    ExceptionList = &pvStack_14;
    __vbaNew2(&DAT_004049b8,&DAT_00422010);
    puVar1 = local_c;
  }
  local_c = puVar1;
  uVar2 = (**(code **)(*DAT_00422010 + 0x390))(DAT_00422010);
  piVar3 = (int *)__vbaObjSet(&local_1c,uVar2);
  iVar4 = *piVar3;
  __vbaStrCat(L": SETTING LENS CURRENT",DAT_00422028);
  uVar2 = __vbaStrMove();
  piVar5 = piVar3;
  iVar4 = (**(code **)(iVar4 + 0x54))(piVar3,uVar2);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar3,&DAT_00406fdc,0x54);
  }
  __vbaFreeStr();
  __vbaFreeObj();
  __vbaStrCopy(piVar5,uVar2);
  FUN_00420b30(&local_18,param_1);
  __vbaFreeStr();
  if (DAT_00422010 == (int *)0x0) {
    __vbaNew2(&DAT_004049b8,&DAT_00422010);
  }
  uVar2 = (**(code **)(*DAT_00422010 + 0x390))(DAT_00422010);
  piVar5 = (int *)__vbaObjSet(&local_1c,uVar2);
  iVar4 = (**(code **)(*piVar5 + 0x54))(piVar5,DAT_00422028);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar5,&DAT_00406fdc,0x54);
  }
  __vbaFreeObj();
  return;
}


// ---- FUN_0041d7f0 @ 0041d7f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041d7f0(undefined4 *param_1,undefined2 *param_2)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  ushort in_FPUStatusWord;
  ushort uVar6;
  float10 fVar7;
  float10 fVar8;
  int **ppiVar9;
  undefined4 local_84;
  undefined4 local_7c;
  undefined4 local_74;
  undefined4 local_6c;
  undefined4 local_68 [2];
  undefined4 local_60;
  undefined4 local_58 [2];
  undefined4 local_50;
  undefined4 local_48 [2];
  undefined4 local_40;
  undefined4 local_38 [2];
  undefined4 local_30;
  int *local_28;
  undefined4 local_24;
  undefined4 local_20;
  float local_1c;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_004020e6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffff3c;
  local_8 = &DAT_00401f78;
  local_20 = 0;
  local_24 = 0;
  local_28 = (int *)0x0;
  local_38[0] = 0;
  local_48[0] = 0;
  local_58[0] = 0;
  local_68[0] = 0;
  ExceptionList = &pvStack_14;
  switch(*param_2) {
  case 0:
    ExceptionList = &pvStack_14;
    local_c = &stack0xffffff3c;
    __vbaStrCopy();
    FUN_0041f940(&local_24);
    __vbaFreeStr();
    fVar7 = (float10)rtcGetTimer();
    local_1c = (float)fVar7;
    if (DAT_00422078 == (int *)0x0) {
      __vbaNew2(&DAT_00403b14);
    }
    uVar2 = (**(code **)(*DAT_00422078 + 0x324))
                      (DAT_00422078,9,2,8,local_84,L"CMD_C1CAL",local_7c,0x4003,local_74,&local_20);
    uVar2 = __vbaObjSet(&local_28,uVar2);
    uVar2 = __vbaLateIdCallLd(local_38,uVar2);
    __vbaI4Var(uVar2);
    __vbaFreeObj();
    __vbaFreeVar(uVar2);
    do {
      if (DAT_00422078 == (int *)0x0) {
        __vbaNew2(&DAT_00403b14,&DAT_00422078);
      }
      uVar2 = local_6c;
      uVar3 = (**(code **)(*DAT_00422078 + 0x324))
                        (DAT_00422078,2,1,0x4003,local_74,&local_20,local_6c);
      uVar3 = __vbaObjSet(&local_28,uVar3);
      uVar3 = __vbaLateIdCallLd(local_38,uVar3);
      iVar4 = __vbaI4Var(uVar3);
      __vbaFreeObj();
      __vbaFreeVar(uVar2);
      if (iVar4 != 0) goto LAB_0041da46;
      rtcDoEvents();
      rtcGetTimer();
      if ((in_FPUStatusWord & 0xd) != 0) goto LAB_0041f554;
      fVar7 = (float10)__vbaFpR4();
      in_FPUStatusWord = 0;
    } while (fVar7 <= (float10)_DAT_00401f70);
    local_60 = 0x80020004;
    local_68[0] = 10;
    local_50 = 0x80020004;
    local_58[0] = 10;
    local_40 = 0x80020004;
    local_48[0] = 10;
    local_30 = __vbaStrCat(L"CMD_C1CAL",L"Failed to enable command ");
    local_38[0] = 8;
    rtcMsgBox(local_38,0,local_48,local_58,local_68);
    __vbaFreeVarList(4,local_38,local_48,local_58,local_68);
LAB_0041da46:
    __vbaStrCopy();
    FUN_0041f940(&local_24);
    __vbaFreeStr();
    fVar7 = (float10)rtcGetTimer();
    local_1c = (float)fVar7;
    if (DAT_00422078 == (int *)0x0) {
      __vbaNew2(&DAT_00403b14);
    }
    uVar2 = (**(code **)(*DAT_00422078 + 0x324))
                      (DAT_00422078,9,2,8,local_84,L"AP_C1CAL",local_7c,0x4003,local_74,&local_20);
    uVar2 = __vbaObjSet(&local_28,uVar2);
    uVar2 = __vbaLateIdCallLd(local_38,uVar2);
    __vbaI4Var(uVar2);
    __vbaFreeObj();
    __vbaFreeVar(uVar2);
    do {
      if (DAT_00422078 == (int *)0x0) {
        __vbaNew2(&DAT_00403b14,&DAT_00422078);
      }
      uVar2 = local_6c;
      uVar3 = (**(code **)(*DAT_00422078 + 0x324))
                        (DAT_00422078,2,1,0x4003,local_74,&local_20,local_6c);
      uVar3 = __vbaObjSet(&local_28,uVar3);
      uVar3 = __vbaLateIdCallLd(local_38,uVar3);
      iVar4 = __vbaI4Var(uVar3);
      __vbaFreeObj();
      __vbaFreeVar(uVar2);
      if (iVar4 != 0) goto LAB_0041f454;
      rtcDoEvents();
      rtcGetTimer();
      if ((in_FPUStatusWord & 0xd) != 0) {
LAB_0041f554:
        __vbaFPException();
        return;
      }
      fVar7 = (float10)__vbaFpR4();
      in_FPUStatusWord = 0;
    } while (fVar7 <= (float10)_DAT_00401f70);
    local_60 = 0x80020004;
    local_68[0] = 10;
    local_50 = 0x80020004;
    local_58[0] = 10;
    local_40 = 0x80020004;
    local_48[0] = 10;
    local_30 = __vbaStrCat(L"AP_C1CAL",L"Failed to set parameter ");
    local_38[0] = 8;
    rtcMsgBox(local_38,0,local_48,local_58,local_68);
    __vbaFreeVarList(4,local_38,local_48,local_58,local_68);
    break;
  case 1:
    ExceptionList = &pvStack_14;
    local_c = &stack0xffffff3c;
    __vbaStrCopy();
    FUN_0041f940(&local_24);
    __vbaFreeStr();
    fVar7 = (float10)rtcGetTimer();
    local_1c = (float)fVar7;
    if (DAT_00422078 == (int *)0x0) {
      __vbaNew2(&DAT_00403b14);
    }
    uVar2 = (**(code **)(*DAT_00422078 + 0x324))
                      (DAT_00422078,9,2,8,local_84,L"CMD_C1REM",local_7c,0x4003,local_74,&local_20);
    uVar2 = __vbaObjSet(&local_28,uVar2);
    uVar2 = __vbaLateIdCallLd(local_38,uVar2);
    __vbaI4Var(uVar2);
    __vbaFreeObj();
    __vbaFreeVar(uVar2);
    do {
      if (DAT_00422078 == (int *)0x0) {
        __vbaNew2(&DAT_00403b14,&DAT_00422078);
      }
      uVar2 = local_6c;
      uVar3 = (**(code **)(*DAT_00422078 + 0x324))
                        (DAT_00422078,2,1,0x4003,local_74,&local_20,local_6c);
      uVar3 = __vbaObjSet(&local_28,uVar3);
      uVar3 = __vbaLateIdCallLd(local_38,uVar3);
      iVar4 = __vbaI4Var(uVar3);
      __vbaFreeObj();
      __vbaFreeVar(uVar2);
      if (iVar4 != 0) goto LAB_0041de22;
      rtcDoEvents();
      rtcGetTimer();
      if ((in_FPUStatusWord & 0xd) != 0) goto LAB_0041f554;
      fVar7 = (float10)__vbaFpR4();
      in_FPUStatusWord = 0;
    } while (fVar7 <= (float10)_DAT_00401f70);
    local_60 = 0x80020004;
    local_68[0] = 10;
    local_50 = 0x80020004;
    local_58[0] = 10;
    local_40 = 0x80020004;
    local_48[0] = 10;
    local_30 = __vbaStrCat(L"CMD_C1REM",L"Failed to enable command ");
    local_38[0] = 8;
    rtcMsgBox(local_38,0,local_48,local_58,local_68);
    __vbaFreeVarList(4,local_38,local_48,local_58,local_68);
LAB_0041de22:
    __vbaStrCopy();
    FUN_0041f940(&local_24);
    __vbaFreeStr();
    fVar7 = (float10)rtcGetTimer();
    local_1c = (float)fVar7;
    if (DAT_00422078 == (int *)0x0) {
      __vbaNew2(&DAT_00403b14);
    }
    uVar2 = (**(code **)(*DAT_00422078 + 0x324))
                      (DAT_00422078,9,2,8,local_84,L"AP_C1REM",local_7c,0x4003,local_74,&local_20);
    uVar2 = __vbaObjSet(&local_28,uVar2);
    uVar2 = __vbaLateIdCallLd(local_38,uVar2);
    __vbaI4Var(uVar2);
    __vbaFreeObj();
    __vbaFreeVar(uVar2);
    do {
      if (DAT_00422078 == (int *)0x0) {
        __vbaNew2(&DAT_00403b14,&DAT_00422078);
      }
      uVar2 = local_6c;
      uVar3 = (**(code **)(*DAT_00422078 + 0x324))
                        (DAT_00422078,2,1,0x4003,local_74,&local_20,local_6c);
      uVar3 = __vbaObjSet(&local_28,uVar3);
      uVar3 = __vbaLateIdCallLd(local_38,uVar3);
      iVar4 = __vbaI4Var(uVar3);
      __vbaFreeObj();
      __vbaFreeVar(uVar2);
      if (iVar4 != 0) goto LAB_0041f454;
      rtcDoEvents();
      rtcGetTimer();
      if ((in_FPUStatusWord & 0xd) != 0) goto LAB_0041f554;
      fVar7 = (float10)__vbaFpR4();
      in_FPUStatusWord = 0;
    } while (fVar7 <= (float10)_DAT_00401f70);
    local_60 = 0x80020004;
    local_68[0] = 10;
    local_50 = 0x80020004;
    local_58[0] = 10;
    local_40 = 0x80020004;
    local_48[0] = 10;
    local_30 = __vbaStrCat(L"AP_C1REM",L"Failed to set parameter ");
    local_38[0] = 8;
    rtcMsgBox(local_38,0,local_48,local_58,local_68);
    __vbaFreeVarList(4,local_38,local_48,local_58,local_68);
    break;
  default:
    goto switchD_0041d84b_caseD_2;
  case 3:
    ExceptionList = &pvStack_14;
    local_c = &stack0xffffff3c;
    __vbaStrCopy();
    FUN_0041f940(&local_24);
    __vbaFreeStr();
    fVar7 = (float10)rtcGetTimer();
    local_1c = (float)fVar7;
    if (DAT_00422078 == (int *)0x0) {
      __vbaNew2(&DAT_00403b14);
    }
    uVar2 = (**(code **)(*DAT_00422078 + 0x324))
                      (DAT_00422078,9,2,8,local_84,L"CMD_C2CAL",local_7c,0x4003,local_74,&local_20);
    uVar2 = __vbaObjSet(&local_28,uVar2);
    uVar2 = __vbaLateIdCallLd(local_38,uVar2);
    __vbaI4Var(uVar2);
    __vbaFreeObj();
    __vbaFreeVar(uVar2);
    do {
      if (DAT_00422078 == (int *)0x0) {
        __vbaNew2(&DAT_00403b14,&DAT_00422078);
      }
      uVar2 = local_6c;
      uVar3 = (**(code **)(*DAT_00422078 + 0x324))
                        (DAT_00422078,2,1,0x4003,local_74,&local_20,local_6c);
      uVar3 = __vbaObjSet(&local_28,uVar3);
      uVar3 = __vbaLateIdCallLd(local_38,uVar3);
      iVar4 = __vbaI4Var(uVar3);
      __vbaFreeObj();
      __vbaFreeVar(uVar2);
      if (iVar4 != 0) goto LAB_0041e1fe;
      rtcDoEvents();
      rtcGetTimer();
      if ((in_FPUStatusWord & 0xd) != 0) goto LAB_0041f554;
      fVar7 = (float10)__vbaFpR4();
      in_FPUStatusWord = 0;
    } while (fVar7 <= (float10)_DAT_00401f70);
    local_60 = 0x80020004;
    local_68[0] = 10;
    local_50 = 0x80020004;
    local_58[0] = 10;
    local_40 = 0x80020004;
    local_48[0] = 10;
    local_30 = __vbaStrCat(L"CMD_C2CAL",L"Failed to enable command ");
    local_38[0] = 8;
    rtcMsgBox(local_38,0,local_48,local_58,local_68);
    __vbaFreeVarList(4,local_38,local_48,local_58,local_68);
LAB_0041e1fe:
    __vbaStrCopy();
    FUN_0041f940(&local_24);
    __vbaFreeStr();
    fVar7 = (float10)rtcGetTimer();
    local_1c = (float)fVar7;
    if (DAT_00422078 == (int *)0x0) {
      __vbaNew2(&DAT_00403b14);
    }
    uVar2 = (**(code **)(*DAT_00422078 + 0x324))
                      (DAT_00422078,9,2,8,local_84,L"AP_C2CAL",local_7c,0x4003,local_74,&local_20);
    uVar2 = __vbaObjSet(&local_28,uVar2);
    uVar2 = __vbaLateIdCallLd(local_38,uVar2);
    __vbaI4Var(uVar2);
    __vbaFreeObj();
    __vbaFreeVar(uVar2);
    do {
      if (DAT_00422078 == (int *)0x0) {
        __vbaNew2(&DAT_00403b14,&DAT_00422078);
      }
      uVar2 = local_6c;
      uVar3 = (**(code **)(*DAT_00422078 + 0x324))
                        (DAT_00422078,2,1,0x4003,local_74,&local_20,local_6c);
      uVar3 = __vbaObjSet(&local_28,uVar3);
      uVar3 = __vbaLateIdCallLd(local_38,uVar3);
      iVar4 = __vbaI4Var(uVar3);
      __vbaFreeObj();
      __vbaFreeVar(uVar2);
      if (iVar4 != 0) goto LAB_0041f454;
      rtcDoEvents();
      rtcGetTimer();
      if ((in_FPUStatusWord & 0xd) != 0) goto LAB_0041f554;
      fVar7 = (float10)__vbaFpR4();
      in_FPUStatusWord = 0;
    } while (fVar7 <= (float10)_DAT_00401f70);
    local_60 = 0x80020004;
    local_68[0] = 10;
    local_50 = 0x80020004;
    local_58[0] = 10;
    local_40 = 0x80020004;
    local_48[0] = 10;
    local_30 = __vbaStrCat(L"AP_C2CAL",L"Failed to set parameter ");
    local_38[0] = 8;
    rtcMsgBox(local_38,0,local_48,local_58,local_68);
    __vbaFreeVarList(4,local_38,local_48,local_58,local_68);
    break;
  case 4:
    ExceptionList = &pvStack_14;
    local_c = &stack0xffffff3c;
    __vbaStrCopy();
    FUN_0041f940(&local_24);
    __vbaFreeStr();
    fVar7 = (float10)rtcGetTimer();
    local_1c = (float)fVar7;
    if (DAT_00422078 == (int *)0x0) {
      __vbaNew2(&DAT_00403b14);
    }
    uVar2 = (**(code **)(*DAT_00422078 + 0x324))
                      (DAT_00422078,9,2,8,local_84,L"CMD_C2REM",local_7c,0x4003,local_74,&local_20);
    uVar2 = __vbaObjSet(&local_28,uVar2);
    uVar2 = __vbaLateIdCallLd(local_38,uVar2);
    __vbaI4Var(uVar2);
    __vbaFreeObj();
    __vbaFreeVar(uVar2);
    do {
      if (DAT_00422078 == (int *)0x0) {
        __vbaNew2(&DAT_00403b14,&DAT_00422078);
      }
      uVar2 = local_6c;
      uVar3 = (**(code **)(*DAT_00422078 + 0x324))
                        (DAT_00422078,2,1,0x4003,local_74,&local_20,local_6c);
      uVar3 = __vbaObjSet(&local_28,uVar3);
      uVar3 = __vbaLateIdCallLd(local_38,uVar3);
      iVar4 = __vbaI4Var(uVar3);
      __vbaFreeObj();
      __vbaFreeVar(uVar2);
      if (iVar4 != 0) goto LAB_0041e5da;
      rtcDoEvents();
      rtcGetTimer();
      if ((in_FPUStatusWord & 0xd) != 0) goto LAB_0041f554;
      fVar7 = (float10)__vbaFpR4();
      in_FPUStatusWord = 0;
    } while (fVar7 <= (float10)_DAT_00401f70);
    local_60 = 0x80020004;
    local_68[0] = 10;
    local_50 = 0x80020004;
    local_58[0] = 10;
    local_40 = 0x80020004;
    local_48[0] = 10;
    local_30 = __vbaStrCat(L"CMD_C2REM",L"Failed to enable command ");
    local_38[0] = 8;
    rtcMsgBox(local_38,0,local_48,local_58,local_68);
    __vbaFreeVarList(4,local_38,local_48,local_58,local_68);
LAB_0041e5da:
    __vbaStrCopy();
    FUN_0041f940(&local_24);
    __vbaFreeStr();
    fVar7 = (float10)rtcGetTimer();
    local_1c = (float)fVar7;
    if (DAT_00422078 == (int *)0x0) {
      __vbaNew2(&DAT_00403b14);
    }
    uVar2 = (**(code **)(*DAT_00422078 + 0x324))
                      (DAT_00422078,9,2,8,local_84,L"AP_C2REM",local_7c,0x4003,local_74,&local_20);
    uVar2 = __vbaObjSet(&local_28,uVar2);
    uVar2 = __vbaLateIdCallLd(local_38,uVar2);
    __vbaI4Var(uVar2);
    __vbaFreeObj();
    __vbaFreeVar(uVar2);
    do {
      if (DAT_00422078 == (int *)0x0) {
        __vbaNew2(&DAT_00403b14,&DAT_00422078);
      }
      uVar2 = local_6c;
      uVar3 = (**(code **)(*DAT_00422078 + 0x324))
                        (DAT_00422078,2,1,0x4003,local_74,&local_20,local_6c);
      uVar3 = __vbaObjSet(&local_28,uVar3);
      uVar3 = __vbaLateIdCallLd(local_38,uVar3);
      iVar4 = __vbaI4Var(uVar3);
      __vbaFreeObj();
      __vbaFreeVar(uVar2);
      if (iVar4 != 0) goto LAB_0041f454;
      rtcDoEvents();
      rtcGetTimer();
      if ((in_FPUStatusWord & 0xd) != 0) goto LAB_0041f554;
      fVar7 = (float10)__vbaFpR4();
      in_FPUStatusWord = 0;
    } while (fVar7 <= (float10)_DAT_00401f70);
    local_60 = 0x80020004;
    local_68[0] = 10;
    local_50 = 0x80020004;
    local_58[0] = 10;
    local_40 = 0x80020004;
    local_48[0] = 10;
    local_30 = __vbaStrCat(L"AP_C2REM",L"Failed to set parameter ");
    local_38[0] = 8;
    rtcMsgBox(local_38,0,local_48,local_58,local_68);
    __vbaFreeVarList(4,local_38,local_48,local_58,local_68);
    break;
  case 5:
    ExceptionList = &pvStack_14;
    local_c = &stack0xffffff3c;
    __vbaStrCopy();
    FUN_0041f940(&local_24);
    __vbaFreeStr();
    fVar7 = (float10)rtcGetTimer();
    local_1c = (float)fVar7;
    if (DAT_00422078 == (int *)0x0) {
      __vbaNew2(&DAT_00403b14);
    }
    uVar2 = (**(code **)(*DAT_00422078 + 0x324))
                      (DAT_00422078,9,2,8,local_84,L"CMD_C3CAL",local_7c,0x4003,local_74,&local_20);
    uVar2 = __vbaObjSet(&local_28,uVar2);
    uVar2 = __vbaLateIdCallLd(local_38,uVar2);
    __vbaI4Var(uVar2);
    __vbaFreeObj();
    __vbaFreeVar(uVar2);
    do {
      if (DAT_00422078 == (int *)0x0) {
        __vbaNew2(&DAT_00403b14,&DAT_00422078);
      }
      uVar2 = local_6c;
      uVar3 = (**(code **)(*DAT_00422078 + 0x324))
                        (DAT_00422078,2,1,0x4003,local_74,&local_20,local_6c);
      uVar3 = __vbaObjSet(&local_28,uVar3);
      uVar3 = __vbaLateIdCallLd(local_38,uVar3);
      iVar4 = __vbaI4Var(uVar3);
      __vbaFreeObj();
      __vbaFreeVar(uVar2);
      if (iVar4 != 0) goto LAB_0041e9b9;
      rtcDoEvents();
      rtcGetTimer();
      if ((in_FPUStatusWord & 0xd) != 0) goto LAB_0041f554;
      fVar7 = (float10)__vbaFpR4();
      in_FPUStatusWord = 0;
    } while (fVar7 <= (float10)_DAT_00401f70);
    local_60 = 0x80020004;
    local_68[0] = 10;
    local_50 = 0x80020004;
    local_58[0] = 10;
    local_40 = 0x80020004;
    local_48[0] = 10;
    local_30 = __vbaStrCat(L"CMD_C3CAL",L"Failed to enable command ");
    local_38[0] = 8;
    rtcMsgBox(local_38,0,local_48,local_58,local_68);
    __vbaFreeVarList(4,local_38,local_48,local_58,local_68);
LAB_0041e9b9:
    __vbaStrCopy();
    FUN_0041f940(&local_24);
    __vbaFreeStr();
    if (DAT_00422010 == (int *)0x0) {
      __vbaNew2(&DAT_004049b8);
    }
    uVar2 = (**(code **)(*DAT_00422010 + 0x390))();
    piVar5 = (int *)__vbaObjSet(&local_28,uVar2);
    iVar4 = *piVar5;
    __vbaStrCat(L": SETTING C3 CAL",DAT_00422028);
    uVar2 = __vbaStrMove();
    iVar4 = (**(code **)(iVar4 + 0x54))(piVar5,uVar2);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar5,&DAT_00406fdc,0x54);
    }
    __vbaFreeStr();
    __vbaFreeObj();
    rtcDoEvents();
    if (DAT_00422630 == (int *)0x0) {
      __vbaNew2(&DAT_00407b3c,&DAT_00422630);
    }
    piVar5 = DAT_00422630;
    iVar4 = (**(code **)(*DAT_00422630 + 0x18))(DAT_00422630,&local_28);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar5,&DAT_00407b2c,0x18);
    }
    piVar5 = local_28;
    iVar4 = (**(code **)(*local_28 + 0x7c))(local_28,0xb);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar5,&DAT_00407b4c,0x7c);
    }
    __vbaFreeObj();
    uVar2 = 0x41eacd;
    fVar7 = (float10)rtcGetTimer();
    local_1c = (float)fVar7;
    do {
      __vbaStrCopy(uVar2);
      FUN_00420380(&local_24);
      fVar7 = (float10)__vbaFpR4();
      fVar8 = (float10)__vbaFpR4();
      uVar6 = 0;
      __vbaFreeStr();
      if (fVar8 == (float10)(float)fVar7) break;
      rtcDoEvents();
      rtcGetTimer();
      if ((uVar6 & 0xd) != 0) goto LAB_0041f554;
      uVar2 = 0x41eb40;
      fVar7 = (float10)__vbaFpR4();
    } while (fVar7 <= (float10)_DAT_00401f68);
    do {
      rtcDoEvents();
      __vbaStrCopy();
      sVar1 = FUN_00420090(&local_24);
      __vbaFreeStr();
    } while (sVar1 != 0);
    if (DAT_00422630 == (int *)0x0) {
      __vbaNew2(&DAT_00407b3c,&DAT_00422630);
    }
    piVar5 = DAT_00422630;
    ppiVar9 = &local_28;
    iVar4 = (**(code **)(*DAT_00422630 + 0x18))(DAT_00422630,ppiVar9);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar5,&DAT_00407b2c,0x18);
    }
    piVar5 = local_28;
    iVar4 = (**(code **)(*local_28 + 0x7c))(local_28,0);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar5,&DAT_00407b4c,0x7c);
    }
    __vbaFreeObj();
    if (DAT_00422010 == (int *)0x0) {
      __vbaNew2(&DAT_004049b8,&DAT_00422010);
    }
    uVar2 = (**(code **)(*DAT_00422010 + 0x390))(DAT_00422010);
    piVar5 = (int *)__vbaObjSet(&local_28,uVar2);
    iVar4 = (**(code **)(*piVar5 + 0x54))(piVar5,DAT_00422028);
    uVar6 = 0;
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar5,&DAT_00406fdc,0x54);
    }
    __vbaFreeObj();
    fVar7 = (float10)rtcGetTimer();
    local_1c = (float)fVar7;
    if (DAT_00422078 == (int *)0x0) {
      __vbaNew2(&DAT_00403b14,&DAT_00422078);
    }
    uVar2 = (**(code **)(*DAT_00422078 + 0x324))
                      (DAT_00422078,9,2,8,local_84,L"AP_C3CAL",local_7c,0x4003,local_74,&local_20,
                       local_6c);
    uVar2 = __vbaObjSet(&local_28,uVar2);
    uVar2 = __vbaLateIdCallLd(local_38,uVar2);
    __vbaI4Var(uVar2);
    __vbaFreeObj();
    __vbaFreeVar(ppiVar9);
    do {
      if (DAT_00422078 == (int *)0x0) {
        __vbaNew2(&DAT_00403b14,&DAT_00422078);
      }
      uVar2 = local_6c;
      uVar3 = (**(code **)(*DAT_00422078 + 0x324))
                        (DAT_00422078,2,1,0x4003,local_74,&local_20,local_6c);
      uVar3 = __vbaObjSet(&local_28,uVar3);
      uVar3 = __vbaLateIdCallLd(local_38,uVar3);
      iVar4 = __vbaI4Var(uVar3);
      __vbaFreeObj();
      __vbaFreeVar(uVar2);
      if (iVar4 != 0) goto LAB_0041f454;
      rtcDoEvents();
      rtcGetTimer();
      if ((uVar6 & 0xd) != 0) goto LAB_0041f554;
      fVar7 = (float10)__vbaFpR4();
      uVar6 = 0;
    } while (fVar7 <= (float10)_DAT_00401f68);
    local_60 = 0x80020004;
    local_68[0] = 10;
    local_50 = 0x80020004;
    local_58[0] = 10;
    local_40 = 0x80020004;
    local_48[0] = 10;
    local_30 = __vbaStrCat(L"AP_C3CAL",L"Failed to set parameter ");
    local_38[0] = 8;
    rtcMsgBox(local_38,0,local_48,local_58,local_68);
    __vbaFreeVarList(4,local_38,local_48,local_58,local_68);
    break;
  case 6:
    ExceptionList = &pvStack_14;
    local_c = &stack0xffffff3c;
    __vbaStrCopy();
    FUN_0041f940(&local_24);
    __vbaFreeStr();
    fVar7 = (float10)rtcGetTimer();
    local_1c = (float)fVar7;
    if (DAT_00422078 == (int *)0x0) {
      __vbaNew2(&DAT_00403b14);
    }
    uVar2 = (**(code **)(*DAT_00422078 + 0x324))
                      (DAT_00422078,9,2,8,local_84,L"CMD_C3REM",local_7c,0x4003,local_74,&local_20);
    uVar2 = __vbaObjSet(&local_28,uVar2);
    uVar2 = __vbaLateIdCallLd(local_38,uVar2);
    __vbaI4Var(uVar2);
    __vbaFreeObj();
    __vbaFreeVar(uVar2);
    do {
      if (DAT_00422078 == (int *)0x0) {
        __vbaNew2(&DAT_00403b14,&DAT_00422078);
      }
      uVar2 = local_6c;
      uVar3 = (**(code **)(*DAT_00422078 + 0x324))
                        (DAT_00422078,2,1,0x4003,local_74,&local_20,local_6c);
      uVar3 = __vbaObjSet(&local_28,uVar3);
      uVar3 = __vbaLateIdCallLd(local_38,uVar3);
      iVar4 = __vbaI4Var(uVar3);
      __vbaFreeObj();
      __vbaFreeVar(uVar2);
      if (iVar4 != 0) goto LAB_0041f002;
      rtcDoEvents();
      rtcGetTimer();
      if ((in_FPUStatusWord & 0xd) != 0) goto LAB_0041f554;
      fVar7 = (float10)__vbaFpR4();
      in_FPUStatusWord = 0;
    } while (fVar7 <= (float10)_DAT_00401f70);
    local_60 = 0x80020004;
    local_68[0] = 10;
    local_50 = 0x80020004;
    local_58[0] = 10;
    local_40 = 0x80020004;
    local_48[0] = 10;
    local_30 = __vbaStrCat(L"CMD_C3REM",L"Failed to enable command ");
    local_38[0] = 8;
    rtcMsgBox(local_38,0,local_48,local_58,local_68);
    __vbaFreeVarList(4,local_38,local_48,local_58,local_68);
LAB_0041f002:
    __vbaStrCopy();
    FUN_0041f940(&local_24);
    __vbaFreeStr();
    if (DAT_00422010 == (int *)0x0) {
      __vbaNew2(&DAT_004049b8);
    }
    uVar2 = (**(code **)(*DAT_00422010 + 0x390))();
    piVar5 = (int *)__vbaObjSet(&local_28,uVar2);
    iVar4 = *piVar5;
    __vbaStrCat(L": SETTING C3 REM",DAT_00422028);
    uVar2 = __vbaStrMove();
    iVar4 = (**(code **)(iVar4 + 0x54))(piVar5,uVar2);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar5,&DAT_00406fdc,0x54);
    }
    __vbaFreeStr();
    __vbaFreeObj();
    rtcDoEvents();
    if (DAT_00422630 == (int *)0x0) {
      __vbaNew2(&DAT_00407b3c,&DAT_00422630);
    }
    piVar5 = DAT_00422630;
    iVar4 = (**(code **)(*DAT_00422630 + 0x18))(DAT_00422630,&local_28);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar5,&DAT_00407b2c,0x18);
    }
    piVar5 = local_28;
    iVar4 = (**(code **)(*local_28 + 0x7c))(local_28,0xb);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar5,&DAT_00407b4c,0x7c);
    }
    __vbaFreeObj();
    uVar2 = 0x41f116;
    fVar7 = (float10)rtcGetTimer();
    local_1c = (float)fVar7;
    do {
      __vbaStrCopy(uVar2);
      FUN_00420380(&local_24);
      fVar7 = (float10)__vbaFpR4();
      fVar8 = (float10)__vbaFpR4();
      uVar6 = 0;
      __vbaFreeStr();
      if (fVar8 == (float10)(float)fVar7) break;
      rtcDoEvents();
      rtcGetTimer();
      if ((uVar6 & 0xd) != 0) goto LAB_0041f554;
      uVar2 = 0x41f189;
      fVar7 = (float10)__vbaFpR4();
    } while (fVar7 <= (float10)_DAT_00401f68);
    do {
      rtcDoEvents();
      __vbaStrCopy();
      sVar1 = FUN_00420090(&local_24);
      __vbaFreeStr();
    } while (sVar1 != 0);
    if (DAT_00422630 == (int *)0x0) {
      __vbaNew2(&DAT_00407b3c,&DAT_00422630);
    }
    piVar5 = DAT_00422630;
    ppiVar9 = &local_28;
    iVar4 = (**(code **)(*DAT_00422630 + 0x18))(DAT_00422630,ppiVar9);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar5,&DAT_00407b2c,0x18);
    }
    piVar5 = local_28;
    iVar4 = (**(code **)(*local_28 + 0x7c))(local_28,0);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar5,&DAT_00407b4c,0x7c);
    }
    __vbaFreeObj();
    if (DAT_00422010 == (int *)0x0) {
      __vbaNew2(&DAT_004049b8,&DAT_00422010);
    }
    uVar2 = (**(code **)(*DAT_00422010 + 0x390))(DAT_00422010);
    piVar5 = (int *)__vbaObjSet(&local_28,uVar2);
    iVar4 = (**(code **)(*piVar5 + 0x54))(piVar5,DAT_00422028);
    uVar6 = 0;
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar5,&DAT_00406fdc,0x54);
    }
    __vbaFreeObj();
    fVar7 = (float10)rtcGetTimer();
    local_1c = (float)fVar7;
    if (DAT_00422078 == (int *)0x0) {
      __vbaNew2(&DAT_00403b14,&DAT_00422078);
    }
    uVar2 = (**(code **)(*DAT_00422078 + 0x324))
                      (DAT_00422078,9,2,8,local_84,L"AP_C3REM",local_7c,0x4003,local_74,&local_20,
                       local_6c);
    uVar2 = __vbaObjSet(&local_28,uVar2);
    uVar2 = __vbaLateIdCallLd(local_38,uVar2);
    __vbaI4Var(uVar2);
    __vbaFreeObj();
    __vbaFreeVar(ppiVar9);
    do {
      if (DAT_00422078 == (int *)0x0) {
        __vbaNew2(&DAT_00403b14,&DAT_00422078);
      }
      uVar2 = local_6c;
      uVar3 = (**(code **)(*DAT_00422078 + 0x324))
                        (DAT_00422078,2,1,0x4003,local_74,&local_20,local_6c);
      uVar3 = __vbaObjSet(&local_28,uVar3);
      uVar3 = __vbaLateIdCallLd(local_38,uVar3);
      iVar4 = __vbaI4Var(uVar3);
      __vbaFreeObj();
      __vbaFreeVar(uVar2);
      if (iVar4 != 0) goto LAB_0041f454;
      rtcDoEvents();
      rtcGetTimer();
      if ((uVar6 & 0xd) != 0) goto LAB_0041f554;
      fVar7 = (float10)__vbaFpR4();
      uVar6 = 0;
    } while (fVar7 <= (float10)_DAT_00401f68);
    local_60 = 0x80020004;
    local_68[0] = 10;
    local_50 = 0x80020004;
    local_58[0] = 10;
    local_40 = 0x80020004;
    local_48[0] = 10;
    local_30 = __vbaStrCat(L"AP_C3REM",L"Failed to set parameter ");
    local_38[0] = 8;
    rtcMsgBox(local_38,0,local_48,local_58,local_68);
    __vbaFreeVarList(4,local_38,local_48,local_58,local_68);
    break;
  case 7:
    ExceptionList = &pvStack_14;
    local_c = &stack0xffffff3c;
    __vbaStrCopy();
    goto LAB_0041f4ce;
  case 8:
    ExceptionList = &pvStack_14;
    __vbaStrCopy();
LAB_0041f4ce:
    FUN_00420b30(&local_24,param_1);
    __vbaFreeStr();
switchD_0041d84b_caseD_2:
    _DAT_00422024 = 1;
    return;
  }
LAB_0041f454:
  __vbaStrCopy();
  FUN_00420b30(&local_24,param_1);
  __vbaFreeStr();
  __vbaStrCopy();
  FUN_0041f940(&local_24);
  __vbaFreeStr();
  _DAT_00422024 = 1;
  return;
}


// ---- FUN_0041f560 @ 0041f560

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_0041f560(float *param_1)

{
  float fVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  ushort uVar7;
  float10 fVar8;
  undefined4 *puVar9;
  int *local_20;
  undefined4 local_1c;
  float local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_004020e6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffffc0;
  local_8 = &DAT_00401f88;
  local_1c = 0;
  local_20 = (int *)0x0;
  ExceptionList = &pvStack_14;
  puVar2 = &stack0xffffffc0;
  if (DAT_00422010 == (int *)0x0) {
    ExceptionList = &pvStack_14;
    __vbaNew2(&DAT_004049b8,&DAT_00422010);
    puVar2 = local_c;
  }
  local_c = puVar2;
  uVar3 = (**(code **)(*DAT_00422010 + 0x390))(DAT_00422010);
  piVar4 = (int *)__vbaObjSet(&local_20,uVar3);
  iVar5 = *piVar4;
  __vbaStrCat(L": SETTING KV",DAT_00422028);
  uVar3 = __vbaStrMove();
  piVar6 = piVar4;
  iVar5 = (**(code **)(iVar5 + 0x54))(piVar4,uVar3);
  if (iVar5 < 0) {
    __vbaHresultCheckObj(iVar5,piVar4,&DAT_00406fdc,0x54);
  }
  __vbaFreeStr();
  __vbaFreeObj();
  rtcDoEvents();
  __vbaStrCopy(piVar6,uVar3);
  FUN_00420b30(&local_1c,param_1);
  __vbaFreeStr();
  if (DAT_00422630 == (int *)0x0) {
    __vbaNew2(&DAT_00407b3c,&DAT_00422630);
  }
  piVar6 = DAT_00422630;
  iVar5 = (**(code **)(*DAT_00422630 + 0x18))(DAT_00422630,&local_20);
  if (iVar5 < 0) {
    __vbaHresultCheckObj(iVar5,piVar6,&DAT_00407b2c,0x18);
  }
  piVar6 = local_20;
  puVar9 = (undefined4 *)0xb;
  piVar4 = local_20;
  iVar5 = (**(code **)(*local_20 + 0x7c))(local_20,0xb);
  if (iVar5 < 0) {
    __vbaHresultCheckObj(iVar5,piVar6,&DAT_00407b4c,0x7c);
  }
  __vbaFreeObj();
  fVar8 = (float10)rtcGetTimer();
  local_18 = (float)fVar8;
  do {
    __vbaStrCopy(piVar4,puVar9);
    puVar9 = &local_1c;
    FUN_00420380(puVar9);
    fVar8 = (float10)__vbaFpR4();
    fVar1 = *param_1;
    uVar7 = 0;
    __vbaFreeStr();
    if (fVar8 == (float10)fVar1) break;
    rtcDoEvents();
    rtcGetTimer();
    if ((uVar7 & 0xd) != 0) {
      __vbaFPException();
      return;
    }
    piVar4 = (int *)0x41f708;
    fVar8 = (float10)__vbaFpR4();
  } while (fVar8 <= (float10)_DAT_00401f68);
  if (DAT_00422630 == (int *)0x0) {
    __vbaNew2(&DAT_00407b3c,&DAT_00422630);
  }
  piVar6 = DAT_00422630;
  iVar5 = (**(code **)(*DAT_00422630 + 0x18))(DAT_00422630,&local_20);
  if (iVar5 < 0) {
    __vbaHresultCheckObj(iVar5,piVar6,&DAT_00407b2c,0x18);
  }
  piVar6 = local_20;
  iVar5 = (**(code **)(*local_20 + 0x7c))(local_20,0);
  if (iVar5 < 0) {
    __vbaHresultCheckObj(iVar5,piVar6,&DAT_00407b4c,0x7c);
  }
  __vbaFreeObj();
  if (DAT_00422010 == (int *)0x0) {
    __vbaNew2(&DAT_004049b8,&DAT_00422010);
  }
  uVar3 = (**(code **)(*DAT_00422010 + 0x390))(DAT_00422010);
  piVar6 = (int *)__vbaObjSet(&local_20,uVar3);
  iVar5 = (**(code **)(*piVar6 + 0x54))(piVar6,DAT_00422028);
  if (iVar5 < 0) {
    __vbaHresultCheckObj(iVar5,piVar6,&DAT_00406fdc,0x54);
  }
  __vbaFreeObj();
  rtcDoEvents();
  return;
}


// ---- FUN_0041f810 @ 0041f810

void FUN_0041f810(void)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_004020e6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffffd0;
  local_8 = &DAT_00401f98;
  local_18 = 0;
  ExceptionList = &pvStack_14;
  while (DAT_0042202c != 1) {
    rtcDoEvents();
  }
  if (DAT_00422010 == (int *)0x0) {
    __vbaNew2(&DAT_004049b8,&DAT_00422010);
  }
  uVar1 = (**(code **)(*DAT_00422010 + 0x2fc))(DAT_00422010);
  piVar2 = (int *)__vbaObjSet(&local_18,uVar1);
  iVar3 = (**(code **)(*piVar2 + 0x8c))(piVar2,0);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00407768,0x8c);
  }
  __vbaFreeObj();
  DAT_0042202c = 0;
  if (DAT_00422010 == (int *)0x0) {
    __vbaNew2(&DAT_004049b8,&DAT_00422010);
  }
  uVar1 = (**(code **)(*DAT_00422010 + 0x390))(DAT_00422010);
  piVar2 = (int *)__vbaObjSet(&local_18,uVar1);
  iVar3 = (**(code **)(*piVar2 + 0x54))(piVar2,DAT_00422028);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406fdc,0x54);
  }
  __vbaFreeObj();
  return;
}


// ---- FUN_0041f940 @ 0041f940

void __cdecl FUN_0041f940(undefined4 param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 local_84;
  undefined4 local_7c;
  undefined4 local_74;
  undefined4 local_6c;
  undefined4 local_68 [2];
  undefined4 local_60;
  undefined4 local_58 [2];
  undefined4 local_50;
  undefined4 local_48 [4];
  undefined4 local_38 [2];
  undefined4 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20 [2];
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_004020e6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffff54;
  local_8 = &DAT_00401fa8;
  local_18 = 0;
  local_20[0] = 0;
  local_24 = 0;
  local_28 = 0;
  local_38[0] = 0;
  local_48[0] = 0;
  local_58[0] = 0;
  local_68[0] = 0;
  ExceptionList = &pvStack_14;
  puVar1 = &stack0xffffff54;
  if (DAT_00422078 == (int *)0x0) {
    ExceptionList = &pvStack_14;
    __vbaNew2(&DAT_00403b14,&DAT_00422078);
    puVar1 = local_c;
  }
  local_c = puVar1;
  uVar2 = (**(code **)(*DAT_00422078 + 0x324))
                    (DAT_00422078,9,2,0x4008,local_84,param_1,local_7c,0x4003,local_74,local_20,
                     local_6c);
  uVar2 = __vbaObjSet(&local_28,uVar2);
  uVar2 = __vbaLateIdCallLd(local_38,uVar2);
  __vbaI4Var(uVar2);
  __vbaFreeObj();
  __vbaFreeVar(uVar2);
  if (DAT_00422078 == (int *)0x0) {
    __vbaNew2(&DAT_00403b14,&DAT_00422078);
  }
  uVar2 = (**(code **)(*DAT_00422078 + 0x324))
                    (DAT_00422078,0x20,1,0x4003,local_74,local_20,local_6c);
  uVar2 = __vbaObjSet(&local_28,uVar2);
  uVar2 = __vbaLateIdCallLd(local_38,uVar2);
  __vbaI4Var(uVar2);
  local_18 = __vbaI2I4(uVar2);
  __vbaFreeObj();
  __vbaFreeVar(local_6c);
  if ((short)local_18 != 1) {
    FUN_0041ff50((undefined2 *)&local_18);
    __vbaStrMove();
    local_60 = 0x80020004;
    local_50 = 0x80020004;
    local_68[0] = 10;
    local_58[0] = 10;
    __vbaVarDup();
    local_30 = local_24;
    local_24 = 0;
    local_38[0] = 8;
    rtcMsgBox(local_38,0,local_48,local_58,local_68);
    __vbaFreeStr();
    __vbaFreeVarList(4,local_38,local_48,local_58,local_68);
  }
  return;
}


// ---- FUN_0041fba0 @ 0041fba0

void FUN_0041fba0(void)

{
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
  undefined4 local_24;
  undefined4 local_20;
  void *pvStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  
  puStack_14 = &DAT_004020e6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff7c;
  local_c = &DAT_00401fb8;
  local_5c[0] = 2;
  local_20 = 0;
  local_28 = 0;
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  local_38 = 0;
  local_3c = 0;
  local_40 = 0;
  local_44 = 0;
  local_48 = 0;
  local_4c = 0;
  local_54 = 0;
  ExceptionList = &pvStack_18;
  rtcStringBstr(100,local_5c);
  __vbaStrMove();
  __vbaFreeVar();
  __vbaLenBstr();
  local_24 = __vbaI2I4();
  __vbaStrCopy();
  __vbaStrCopy();
  __vbaStrCopy();
  FUN_00420650();
  __vbaStrMove();
  __vbaStrCat();
  __vbaStrMove();
  __vbaFreeStr();
  __vbaStrToAnsi();
  __vbaStrToAnsi();
  __vbaStrToAnsi();
  __vbaStrToAnsi();
  __vbaStrToAnsi();
  FUN_00407e08();
  __vbaSetSystemError();
  __vbaStrToUnicode();
  __vbaStrToUnicode();
  __vbaStrToUnicode();
  __vbaStrToUnicode();
  __vbaStrToUnicode();
  __vbaI2I4();
  __vbaFreeStrList(5,&local_3c,&local_40);
  rtcLeftCharBstr();
  __vbaStrMove();
  __vbaFreeStr();
  __vbaFreeStr();
  __vbaFreeStr();
  __vbaFreeStr();
  __vbaFreeStr();
  return;
}


// ---- FUN_0041fdc0 @ 0041fdc0

void FUN_0041fdc0(void)

{
  short sVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  wchar_t *pwVar6;
  void *pvStack_80;
  undefined *puStack_7c;
  short local_64;
  void *pvStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  
  puStack_14 = &DAT_004020e6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff88;
  local_c = &DAT_00401fc8;
  puStack_7c = (undefined *)0x41fe09;
  ExceptionList = &pvStack_18;
  __vbaStrCopy();
  FUN_0041fba0();
  __vbaStrMove();
  __vbaLenBstr();
  puVar2 = (undefined2 *)__vbaI2I4();
  sVar1 = 1;
  do {
    local_64 = (short)puVar2;
    if (local_64 < sVar1) {
LAB_0041fec3:
      rtcR8ValFromBstr();
      __vbaVarMove();
      __vbaFreeStr();
      __vbaFreeStr();
      return;
    }
    puStack_7c = (undefined *)0x41fe5d;
    rtcMidCharBstr();
    __vbaStrMove();
    iVar3 = __vbaStrCmp();
    __vbaFreeStr();
    __vbaFreeVar();
    if (iVar3 == 0) {
      puStack_7c = &DAT_00408a74;
      pvStack_80 = (void *)0x0;
      __vbaMidStmtBstr();
      goto LAB_0041fec3;
    }
    bVar5 = SCARRY2(sVar1,1);
    sVar1 = sVar1 + 1;
    if (bVar5) {
      __vbaErrorOverflow();
      puStack_7c = &DAT_004020e6;
      pvStack_80 = ExceptionList;
      switch(*puVar2) {
      case 400:
        ExceptionList = &pvStack_80;
        __vbaStrCopy();
        break;
      case 0x191:
        ExceptionList = &pvStack_80;
        __vbaStrCopy();
        break;
      case 0x192:
        ExceptionList = &pvStack_80;
        __vbaStrCopy();
        break;
      case 0x193:
        ExceptionList = &pvStack_80;
        __vbaStrCopy();
        break;
      default:
        pwVar6 = L"Unknown error code ";
        ExceptionList = &pvStack_80;
        __vbaStrI2(*puVar2);
        uVar4 = __vbaStrMove(pwVar6);
        __vbaStrCat(uVar4,pwVar6);
        __vbaStrMove();
        __vbaFreeStr();
        break;
      case 0x196:
        ExceptionList = &pvStack_80;
        __vbaStrCopy();
      }
      return;
    }
  } while( true );
}


// ---- FUN_0041ff50 @ 0041ff50

void __cdecl FUN_0041ff50(undefined2 *param_1)

{
  undefined4 uVar1;
  wchar_t *pwVar2;
  void *pvStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  
  puStack_14 = &DAT_004020e6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc8;
  local_c = &DAT_00401fd8;
  switch(*param_1) {
  case 400:
    ExceptionList = &pvStack_18;
    local_10 = &stack0xffffffc8;
    __vbaStrCopy();
    break;
  case 0x191:
    ExceptionList = &pvStack_18;
    local_10 = &stack0xffffffc8;
    __vbaStrCopy();
    break;
  case 0x192:
    ExceptionList = &pvStack_18;
    local_10 = &stack0xffffffc8;
    __vbaStrCopy();
    break;
  case 0x193:
    ExceptionList = &pvStack_18;
    local_10 = &stack0xffffffc8;
    __vbaStrCopy();
    break;
  default:
    pwVar2 = L"Unknown error code ";
    ExceptionList = &pvStack_18;
    local_10 = &stack0xffffffc8;
    __vbaStrI2(*param_1);
    uVar1 = __vbaStrMove(pwVar2);
    __vbaStrCat(uVar1,pwVar2);
    __vbaStrMove();
    __vbaFreeStr();
    break;
  case 0x196:
    ExceptionList = &pvStack_18;
    __vbaStrCopy();
  }
  return;
}


// ---- FUN_00420090 @ 00420090

void __cdecl FUN_00420090(undefined4 param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  ushort in_FPUStatusWord;
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 local_74 [2];
  undefined4 local_6c;
  undefined4 local_64 [2];
  undefined4 local_5c;
  undefined4 local_54 [4];
  undefined4 local_44 [2];
  undefined4 local_3c;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24 [2];
  undefined4 local_1c;
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_004020e6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffff48;
  local_8 = &DAT_00401ff0;
  local_18 = 0;
  local_1c = 0;
  local_24[0] = 0;
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  local_44[0] = 0;
  local_54[0] = 0;
  local_64[0] = 0;
  local_74[0] = 0;
  ExceptionList = &pvStack_14;
  puVar1 = &stack0xffffff48;
  if (DAT_00422078 == (int *)0x0) {
    ExceptionList = &pvStack_14;
    __vbaNew2(&DAT_00403b14,&DAT_00422078);
    puVar1 = local_c;
  }
  local_c = puVar1;
  uVar2 = (**(code **)(*DAT_00422078 + 0x324))
                    (DAT_00422078,9,2,0x4008,local_90,param_1,local_88,0x4003,local_80,&local_2c,
                     local_78);
  uVar2 = __vbaObjSet(&local_34,uVar2);
  uVar2 = __vbaLateIdCallLd(local_44,uVar2);
  __vbaI4Var(uVar2);
  __vbaFreeObj();
  __vbaFreeVar(uVar2);
  if (DAT_00422078 == (int *)0x0) {
    __vbaNew2(&DAT_00403b14,&DAT_00422078);
  }
  uVar2 = (**(code **)(*DAT_00422078 + 0x324))
                    (DAT_00422078,10,3,0x4008,local_a0,local_24,local_98,0x4004,local_90,&local_1c,
                     local_88,0x4003,local_80,&local_2c,local_78);
  uVar2 = __vbaObjSet(&local_34,uVar2);
  uVar2 = __vbaLateIdCallLd(local_44,uVar2);
  __vbaI4Var(uVar2);
  local_18 = __vbaI2I4(uVar2);
  __vbaFreeObj();
  __vbaFreeVar(local_78);
  if ((short)local_18 == 1) {
    if ((in_FPUStatusWord & 0xd) != 0) {
      __vbaFPException();
      return;
    }
    local_28 = __vbaR8IntI2();
  }
  else {
    FUN_0041ff50((undefined2 *)&local_18);
    __vbaStrMove();
    local_6c = 0x80020004;
    local_74[0] = 10;
    local_5c = 0x80020004;
    local_64[0] = 10;
    __vbaVarDup();
    local_3c = local_30;
    local_30 = 0;
    local_44[0] = 8;
    rtcMsgBox(local_44,0,local_54,local_64,local_74);
    __vbaFreeStr();
    __vbaFreeVarList(4,local_44,local_54,local_64,local_74);
    local_28 = 0;
  }
  __vbaFreeStr(&LAB_0042035a);
  return;
}


// ---- FUN_00420380 @ 00420380

void __cdecl FUN_00420380(undefined4 param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 local_74 [2];
  undefined4 local_6c;
  undefined4 local_64 [2];
  undefined4 local_5c;
  undefined4 local_54 [4];
  undefined4 local_44 [2];
  undefined4 local_3c;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_1c;
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_004020e6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffff48;
  local_8 = &DAT_00402000;
  local_18 = 0;
  local_1c = 0;
  local_28 = 0;
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  local_44[0] = 0;
  local_54[0] = 0;
  local_64[0] = 0;
  local_74[0] = 0;
  ExceptionList = &pvStack_14;
  puVar1 = &stack0xffffff48;
  if (DAT_00422078 == (int *)0x0) {
    ExceptionList = &pvStack_14;
    __vbaNew2(&DAT_00403b14,&DAT_00422078);
    puVar1 = local_c;
  }
  local_c = puVar1;
  uVar2 = (**(code **)(*DAT_00422078 + 0x324))
                    (DAT_00422078,9,2,0x4008,local_90,param_1,local_88,0x4003,local_80,&local_2c,
                     local_78);
  uVar2 = __vbaObjSet(&local_34,uVar2);
  uVar2 = __vbaLateIdCallLd(local_44,uVar2);
  __vbaI4Var(uVar2);
  __vbaFreeObj();
  __vbaFreeVar(uVar2);
  if (DAT_00422078 == (int *)0x0) {
    __vbaNew2(&DAT_00403b14,&DAT_00422078);
  }
  uVar2 = (**(code **)(*DAT_00422078 + 0x324))
                    (DAT_00422078,10,3,0x4008,local_a0,&local_28,local_98,0x4004,local_90,&local_1c,
                     local_88,0x4003,local_80,&local_2c,local_78);
  uVar2 = __vbaObjSet(&local_34,uVar2);
  uVar2 = __vbaLateIdCallLd(local_44,uVar2);
  __vbaI4Var(uVar2);
  local_18 = __vbaI2I4(uVar2);
  __vbaFreeObj();
  __vbaFreeVar(local_78);
  if ((short)local_18 == 1) {
    local_24 = local_1c;
  }
  else {
    FUN_0041ff50((undefined2 *)&local_18);
    __vbaStrMove();
    local_6c = 0x80020004;
    local_74[0] = 10;
    local_5c = 0x80020004;
    local_64[0] = 10;
    __vbaVarDup();
    local_3c = local_30;
    local_30 = 0;
    local_44[0] = 8;
    rtcMsgBox(local_44,0,local_54,local_64,local_74);
    __vbaFreeStr();
    __vbaFreeVarList(4,local_44,local_54,local_64,local_74);
    local_24 = 0;
  }
  __vbaFreeStr();
  return;
}


// ---- FUN_00420650 @ 00420650

void FUN_00420650(void)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_48 [4];
  undefined4 local_38 [2];
  undefined4 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  void *pvStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  
  puStack_14 = &DAT_004020e6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff90;
  local_c = &DAT_00402010;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_48[0] = 0;
  local_30 = 0;
  local_38[0] = 2;
  ExceptionList = &pvStack_18;
  rtcStringVar(local_48,100,local_38);
  __vbaStrVarMove(local_48);
  __vbaStrMove();
  __vbaFreeVarList(2,local_38,local_48);
  uVar2 = __vbaLenBstr(local_24);
  uVar3 = __vbaStrToAnsi(&local_28,local_24);
  FUN_00407eac();
  __vbaSetSystemError(uVar3,uVar2);
  __vbaStrToUnicode(&local_24,local_28);
  sVar1 = __vbaI2I4(uVar3);
  __vbaFreeStr();
  rtcLeftCharBstr(local_24,(int)sVar1);
  __vbaStrMove();
  __vbaFreeStr(&LAB_00420765);
  return;
}


// ---- FUN_00420780 @ 00420780

void __cdecl FUN_00420780(undefined4 *param_1)

{
  undefined4 uVar1;
  ushort in_FPUStatusWord;
  float10 fVar2;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined4 local_84 [2];
  undefined4 local_7c;
  undefined4 local_74 [2];
  undefined4 local_6c;
  undefined4 local_64 [4];
  undefined4 local_54 [2];
  undefined4 local_4c;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  float local_1c;
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_004020e6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffff2c;
  local_8 = &DAT_00402020;
  local_18 = 0;
  local_1c = 0.0;
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  local_38 = 0;
  local_3c = 0;
  local_40 = 0;
  local_44 = 0;
  local_54[0] = 0;
  local_64[0] = 0;
  if ((in_FPUStatusWord & 0xd) == 0) {
    local_74[0] = 0;
    local_84[0] = 0;
    ExceptionList = &pvStack_14;
    local_c = &stack0xffffff2c;
    fVar2 = (float10)__vbaFpCSngR8();
    local_1c = (float)fVar2;
    if (DAT_00422078 == (int *)0x0) {
      __vbaNew2(&DAT_00403b14,&DAT_00422078);
    }
    uVar1 = (**(code **)(*DAT_00422078 + 0x324))
                      (DAT_00422078,9,2,0x4008,local_a0,param_1,local_98,0x4003,local_90,&local_34,
                       local_88);
    uVar1 = __vbaObjSet(&local_44,uVar1);
    uVar1 = __vbaLateIdCallLd(local_54,uVar1);
    __vbaI4Var(uVar1);
    __vbaVarMove();
    __vbaFreeObj();
    __vbaFreeVar(uVar1);
    if (DAT_00422078 == (int *)0x0) {
      __vbaNew2(&DAT_00403b14,&DAT_00422078);
    }
    uVar1 = (**(code **)(*DAT_00422078 + 0x324))
                      (DAT_00422078,0x13,3,0x4008,local_b0,&local_30,local_a8,0x4004,local_a0,
                       &local_1c,local_98,0x4003,local_90,&local_34,local_88);
    uVar1 = __vbaObjSet(&local_44,uVar1);
    uVar1 = __vbaLateIdCallLd(local_54,uVar1);
    __vbaI4Var(uVar1);
    local_18 = __vbaI2I4(uVar1);
    __vbaFreeObj();
    __vbaFreeVar(local_88);
    if ((short)local_18 != 1) {
      FUN_0041ff50((undefined2 *)&local_18);
      __vbaStrMove();
      local_7c = 0x80020004;
      local_6c = 0x80020004;
      local_84[0] = 10;
      local_74[0] = 10;
      __vbaVarDup();
      local_40 = 0;
      uVar1 = __vbaStrMove();
      __vbaStrCat(&DAT_00409ba8,uVar1);
      uVar1 = __vbaStrMove();
      local_4c = __vbaStrCat(*param_1,uVar1);
      local_54[0] = 8;
      rtcMsgBox(local_54,0,local_64,local_74,local_84);
      __vbaFreeStrList(3,&local_38,&local_3c,&local_40);
      __vbaFreeVarList(4,local_54,local_64,local_74,local_84);
    }
    __vbaFreeVar(&LAB_00420b13);
    __vbaFreeStr();
    return;
  }
  ExceptionList = &pvStack_14;
  __vbaFPException();
  return;
}


// ---- FUN_00420b30 @ 00420b30

void __cdecl FUN_00420b30(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined4 local_84 [2];
  undefined4 local_7c;
  undefined4 local_74 [2];
  undefined4 local_6c;
  undefined4 local_64 [4];
  undefined4 local_54 [2];
  undefined4 local_4c;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_1c;
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_004020e6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffff38;
  local_8 = &DAT_00402030;
  local_18 = 0;
  local_1c = *param_2;
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  local_38 = 0;
  local_3c = 0;
  local_40 = 0;
  local_44 = 0;
  local_54[0] = 0;
  local_64[0] = 0;
  local_74[0] = 0;
  local_84[0] = 0;
  ExceptionList = &pvStack_14;
  puVar1 = &stack0xffffff38;
  if (DAT_00422078 == (int *)0x0) {
    ExceptionList = &pvStack_14;
    __vbaNew2(&DAT_00403b14,&DAT_00422078);
    puVar1 = local_c;
  }
  local_c = puVar1;
  uVar2 = (**(code **)(*DAT_00422078 + 0x324))
                    (DAT_00422078,9,2,0x4008,local_a0,param_1,local_98,0x4003,local_90,&local_34,
                     local_88);
  uVar2 = __vbaObjSet(&local_44,uVar2);
  uVar2 = __vbaLateIdCallLd(local_54,uVar2);
  __vbaI4Var(uVar2);
  __vbaVarMove();
  __vbaFreeObj();
  __vbaFreeVar(uVar2);
  if (DAT_00422078 == (int *)0x0) {
    __vbaNew2(&DAT_00403b14,&DAT_00422078);
  }
  uVar2 = (**(code **)(*DAT_00422078 + 0x324))
                    (DAT_00422078,0x13,3,0x4008,local_b0,&local_30,local_a8,0x4004,local_a0,
                     &local_1c,local_98,0x4003,local_90,&local_34,local_88);
  uVar2 = __vbaObjSet(&local_44,uVar2);
  uVar2 = __vbaLateIdCallLd(local_54,uVar2);
  __vbaI4Var(uVar2);
  local_18 = __vbaI2I4(uVar2);
  __vbaFreeObj();
  __vbaFreeVar(local_88);
  if ((short)local_18 != 1) {
    FUN_0041ff50((undefined2 *)&local_18);
    __vbaStrMove();
    local_7c = 0x80020004;
    local_6c = 0x80020004;
    local_84[0] = 10;
    local_74[0] = 10;
    __vbaVarDup();
    local_40 = 0;
    uVar2 = __vbaStrMove();
    __vbaStrCat(&DAT_00409ba8,uVar2);
    uVar2 = __vbaStrMove();
    local_4c = __vbaStrCat(*param_1,uVar2);
    local_54[0] = 8;
    rtcMsgBox(local_54,0,local_64,local_74,local_84);
    __vbaFreeStrList(3,&local_38,&local_3c,&local_40);
    __vbaFreeVarList(4,local_54,local_64,local_74,local_84);
  }
  __vbaFreeVar(&LAB_00420e8b);
  __vbaFreeStr();
  return;
}


// ---- FUN_00420ea0 @ 00420ea0

void __cdecl FUN_00420ea0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined1 *local_80 [6];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_4c [4];
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_30 [12];
  undefined4 *local_24;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_004020e6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffff6c;
  local_8 = &DAT_00402040;
  local_3c = 0;
  local_4c[0] = 0;
  local_80[0] = (undefined1 *)0x0;
  ExceptionList = &pvStack_14;
  __vbaAryConstruct2(local_30,&DAT_00409c2c,4);
  puVar1 = local_24;
  if (DAT_00422078 == (int *)0x0) {
    __vbaNew2(&DAT_00403b14,&DAT_00422078);
  }
  uVar2 = (**(code **)(*DAT_00422078 + 0x324))
                    (DAT_00422078,0x49,2,2,local_68,0x58,local_60,0x4004,local_58,puVar1,local_50);
  uVar2 = __vbaObjSet(&local_3c,uVar2);
  uVar2 = __vbaLateIdCallLd(local_4c,uVar2);
  __vbaI4Var(uVar2);
  __vbaFreeObj();
  __vbaFreeVar(uVar2);
  *param_1 = *local_24;
  param_1[1] = local_24[1];
  param_1[2] = local_24[2];
  param_1[3] = local_24[3];
  param_1[4] = local_24[4];
  param_1[5] = local_24[5];
  param_1[6] = local_24[6];
  param_1[7] = local_24[7];
  param_1[8] = local_24[8];
  param_1[9] = local_24[9];
  param_1[10] = local_24[10];
  param_1[0xb] = local_24[0xb];
  param_1[0xc] = local_24[0xc];
  param_1[0xd] = local_24[0xd];
  param_1[0xe] = local_24[0xe];
  param_1[0xf] = local_24[0xf];
  param_1[0x10] = local_24[0x10];
  param_1[0x11] = local_24[0x11];
  param_1[0x12] = local_24[0x12];
  param_1[0x13] = local_24[0x13];
  param_1[0x14] = local_24[0x14];
  param_1[0x15] = local_24[0x15];
  local_38 = __vbaI2I4(local_50);
  local_80[0] = local_30;
  __vbaAryDestruct(0,local_80);
  return;
}


// ---- FUN_00421060 @ 00421060

void FUN_00421060(void)

{
  float10 fVar1;
  undefined4 local_1c;
  float local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_004020e6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffffd4;
  local_8 = &DAT_00402050;
  local_1c = 0;
  ExceptionList = &pvStack_14;
  __vbaStrCopy();
  fVar1 = (float10)FUN_00420380(&local_1c);
  local_18 = (float)fVar1;
  __vbaFreeStr();
  return;
}


// ---- FUN_004210e0 @ 004210e0

void FUN_004210e0(void)

{
  float10 fVar1;
  undefined4 local_1c;
  float local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_004020e6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffffd4;
  local_8 = &DAT_00402060;
  local_1c = 0;
  ExceptionList = &pvStack_14;
  __vbaStrCopy();
  fVar1 = (float10)FUN_00420380(&local_1c);
  local_18 = (float)fVar1;
  __vbaFreeStr();
  return;
}


// ---- FUN_00421160 @ 00421160

void FUN_00421160(void)

{
  undefined4 local_1c;
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_004020e6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffffd4;
  local_8 = &DAT_00402070;
  local_1c = 0;
  ExceptionList = &pvStack_14;
  __vbaStrCopy();
  local_18 = FUN_00420090(&local_1c);
  __vbaFreeStr();
  return;
}


// ---- FUN_004211e0 @ 004211e0

void FUN_004211e0(void)

{
  undefined4 local_1c;
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_004020e6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffffd4;
  local_8 = &DAT_00402080;
  local_1c = 0;
  ExceptionList = &pvStack_14;
  __vbaStrCopy();
  local_18 = FUN_00420090(&local_1c);
  __vbaFreeStr();
  return;
}


// ---- FUN_00421260 @ 00421260

void FUN_00421260(void)

{
  float10 fVar1;
  undefined4 local_1c;
  float local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_004020e6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffffd4;
  local_8 = &DAT_00402090;
  local_1c = 0;
  ExceptionList = &pvStack_14;
  __vbaStrCopy();
  fVar1 = (float10)FUN_00420380(&local_1c);
  local_18 = (float)fVar1;
  __vbaFreeStr();
  return;
}


// ---- FUN_004212e0 @ 004212e0

void __cdecl FUN_004212e0(undefined4 *param_1)

{
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_004020e6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffffd8;
  local_8 = &DAT_004020a0;
  local_18 = 0;
  ExceptionList = &pvStack_14;
  __vbaStrCopy();
  FUN_00420b30(&local_18,param_1);
  __vbaFreeStr();
  return;
}


// ---- FUN_00421360 @ 00421360

void __cdecl FUN_00421360(undefined2 *param_1)

{
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_004020e6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffffd4;
  local_8 = &DAT_004020b0;
  local_18 = 0;
  ExceptionList = &pvStack_14;
  switch(*param_1) {
  case 0:
    ExceptionList = &pvStack_14;
    local_c = &stack0xffffffd4;
    __vbaStrCopy();
    break;
  case 1:
    ExceptionList = &pvStack_14;
    local_c = &stack0xffffffd4;
    __vbaStrCopy();
    break;
  case 2:
    goto LAB_004213fe;
  case 3:
    ExceptionList = &pvStack_14;
    local_c = &stack0xffffffd4;
    __vbaStrCopy();
    break;
  case 4:
    ExceptionList = &pvStack_14;
    __vbaStrCopy();
    break;
  case 5:
LAB_004213fe:
    ExceptionList = &pvStack_14;
    local_c = &stack0xffffffd4;
    __vbaStrCopy();
    break;
  default:
    goto switchD_0042139b_default;
  }
  FUN_0041f940(&local_18);
  __vbaFreeStr();
switchD_0042139b_default:
  return;
}


// ---- FUN_00421460 @ 00421460

void FUN_00421460(void)

{
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_004020e6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffffd8;
  local_8 = &DAT_004020c0;
  local_18 = 0;
  ExceptionList = &pvStack_14;
  __vbaStrCopy();
  FUN_00420780(&local_18);
  __vbaFreeStr();
  return;
}


// ---- FUN_004214e0 @ 004214e0

void __cdecl FUN_004214e0(undefined4 *param_1)

{
  undefined4 local_18;
  void *pvStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_004020e6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffffd8;
  local_8 = &DAT_004020d0;
  local_18 = 0;
  ExceptionList = &pvStack_14;
  __vbaStrCopy();
  FUN_00420b30(&local_18,param_1);
  __vbaFreeStr();
  return;
}


