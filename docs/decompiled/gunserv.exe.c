// Decompiled with Ghidra from gunserv.exe
// Format: Portable Executable (PE), image base 00400000

// ---- DllFunctionCall @ 00401420

void DllFunctionCall(void)

{
                    /* WARNING: Could not recover jumptable at 0x00401420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DllFunctionCall();
  return;
}


// ---- ThunRTMain @ 00401552

void ThunRTMain(void)

{
                    /* WARNING: Could not recover jumptable at 0x00401552. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ThunRTMain();
  return;
}


// ---- entry @ 00401558

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void entry(void)

{
  ushort *puVar1;
  int iVar2;
  code *pcVar3;
  byte bVar4;
  byte bVar5;
  byte bVar8;
  byte *pbVar6;
  byte *pbVar7;
  int *piVar9;
  byte *unaff_EBX;
  int unaff_EBP;
  int iVar10;
  int in_GS_OFFSET;
  undefined8 uVar11;
  
  uVar11 = ThunRTMain(&DAT_00402064);
  piVar9 = (int *)((ulonglong)uVar11 >> 0x20);
  pbVar6 = (byte *)uVar11;
  bVar4 = (byte)uVar11;
  *pbVar6 = *pbVar6 + bVar4;
  *pbVar6 = *pbVar6 + bVar4;
  *pbVar6 = *pbVar6 + bVar4;
  *pbVar6 = *pbVar6 ^ bVar4;
  *pbVar6 = *pbVar6 + bVar4;
  pbVar7 = pbVar6 + 1;
  bVar5 = (byte)pbVar7;
  *pbVar7 = *pbVar7 + bVar5;
  *pbVar7 = *pbVar7 + bVar5;
  *pbVar7 = *pbVar7 + bVar5;
  bVar4 = *unaff_EBX;
  bVar8 = (byte)((uint)pbVar7 >> 8);
  *unaff_EBX = *unaff_EBX + bVar8;
  _DAT_8b355b32 = _DAT_8b355b32 << 0x12 | (uint)(CONCAT14(CARRY1(bVar4,bVar8),_DAT_8b355b32) >> 0xf)
  ;
  *(char *)(unaff_EBP + 0x3f976000) = *(char *)(unaff_EBP + 0x3f976000) + -0x44;
  *(undefined4 *)pbVar7 = *(undefined4 *)pbVar7;
  *pbVar7 = *pbVar7 + bVar5;
  *pbVar7 = *pbVar7 + bVar5;
  *(byte **)pbVar7 = pbVar7 + *(int *)pbVar7;
  bVar4 = *pbVar7;
  *pbVar7 = *pbVar7 + bVar5;
  if (CARRY1(bVar4,bVar5) || *pbVar7 == 0) {
    iVar2 = *(int *)(pbVar6 + 0x45);
    iVar10 = (int)((longlong)iVar2 * 0x6a6f7250);
    puVar1 = (ushort *)(&DAT_8b355b32 + in_GS_OFFSET + iVar10);
    *puVar1 = *puVar1 + (ushort)(0 < (short)-(*puVar1 & 3)) * -(*puVar1 & 3);
    *piVar9 = *piVar9 + 1;
    pbVar7 = pbVar7 + (-(uint)((longlong)iVar10 != (longlong)iVar2 * 0x6a6f7250) - *(int *)pbVar7);
    *pbVar7 = *pbVar7 + (char)pbVar7;
    *pbVar7 = *pbVar7 + (char)pbVar7;
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  *pbVar7 = *pbVar7 + bVar5;
  *pbVar7 = *pbVar7 + bVar5;
  *pbVar7 = *pbVar7 + bVar5;
  *pbVar7 = *pbVar7 + bVar5;
  *pbVar7 = *pbVar7 + bVar5;
  *pbVar7 = *pbVar7 + bVar5;
  *pbVar7 = *pbVar7 + bVar5;
  *pbVar7 = *pbVar7 + bVar5;
  *pbVar7 = *pbVar7 + bVar5;
  *pbVar7 = *pbVar7 + bVar5;
  *pbVar7 = *pbVar7 + bVar5;
  *pbVar7 = *pbVar7 + bVar5;
  *pbVar7 = *pbVar7 + bVar5;
  *pbVar7 = *pbVar7 + bVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- FUN_00404eb4 @ 00404eb4

void FUN_00404eb4(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if (DAT_0040f4c4 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00404ebd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_0040f4c4)();
    return;
  }
  UNRECOVERED_JUMPTABLE = (code *)DllFunctionCall(&PTR_s_User32_00404e9c);
                    /* WARNING: Could not recover jumptable at 0x00404ecb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


// ---- FUN_00406ce0 @ 00406ce0

undefined4 FUN_00406ce0(uint param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_34;
  undefined4 local_2c;
  undefined4 local_24;
  undefined4 local_1c;
  void *local_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_00401396;
  local_18 = ExceptionList;
  local_10 = &stack0xffffffac;
  local_c = &DAT_00401138;
  local_8 = param_1 & 1;
  piVar2 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &local_18;
  (**(code **)(*piVar2 + 4))(piVar2);
  if (DAT_0040f024 == (int *)0x0) {
    __vbaNew2(&DAT_00402c24,&DAT_0040f024);
  }
  piVar1 = DAT_0040f024;
  iVar3 = (**(code **)(*DAT_0040f024 + 0x2b0))
                    (DAT_0040f024,2,local_24,1,local_1c,10,local_34,0x80020004,local_2c);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar1,&DAT_00404d74,0x2b0);
  }
  local_8 = 0;
  (**(code **)(*piVar2 + 8))(piVar2);
  ExceptionList = local_18;
  return local_8;
}


// ---- FUN_00406dd0 @ 00406dd0

undefined4 FUN_00406dd0(uint param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_34;
  undefined4 local_2c;
  undefined4 local_24;
  undefined4 local_1c;
  void *local_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_00401396;
  local_18 = ExceptionList;
  local_10 = &stack0xffffffac;
  local_c = &DAT_00401140;
  local_8 = param_1 & 1;
  piVar2 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &local_18;
  (**(code **)(*piVar2 + 4))(piVar2);
  FUN_00408ab0();
  if (DAT_0040f084 == (int *)0x0) {
    __vbaNew2(&DAT_00403b64,&DAT_0040f084);
  }
  piVar1 = DAT_0040f084;
  iVar3 = (**(code **)(*DAT_0040f084 + 0x6fc))(DAT_0040f084,0);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar1,&DAT_00404f50,0x6fc);
  }
  if (DAT_0040f084 == (int *)0x0) {
    __vbaNew2(&DAT_00403b64,&DAT_0040f084);
  }
  piVar1 = DAT_0040f084;
  iVar3 = (**(code **)(*DAT_0040f084 + 0x2b0))
                    (DAT_0040f084,2,local_24,1,local_1c,10,local_34,0x80020004,local_2c);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar1,&DAT_00404f20,0x2b0);
  }
  local_8 = 0;
  (**(code **)(*piVar2 + 8))(piVar2);
  ExceptionList = local_18;
  return local_8;
}


// ---- FUN_00406f00 @ 00406f00

undefined4 FUN_00406f00(uint param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_34;
  undefined4 local_2c;
  undefined4 local_24;
  undefined4 local_1c;
  void *local_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined1 *local_c;
  uint local_8;
  
  puStack_14 = &LAB_00401396;
  local_18 = ExceptionList;
  local_10 = &stack0xffffffac;
  local_c = &LAB_00401148;
  local_8 = param_1 & 1;
  piVar2 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &local_18;
  (**(code **)(*piVar2 + 4))(piVar2);
  FUN_00408ab0();
  if (DAT_0040f098 == (int *)0x0) {
    __vbaNew2(&DAT_00402474,&DAT_0040f098);
  }
  piVar1 = DAT_0040f098;
  iVar3 = (**(code **)(*DAT_0040f098 + 0x2b0))
                    (DAT_0040f098,2,local_24,1,local_1c,10,local_34,0x80020004,local_2c);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar1,&DAT_00405064,0x2b0);
  }
  local_8 = 0;
  (**(code **)(*piVar2 + 8))(piVar2);
  ExceptionList = local_18;
  return local_8;
}


// ---- FUN_00406ff0 @ 00406ff0

undefined4 FUN_00406ff0(uint param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 local_20;
  undefined4 local_1c;
  void *local_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_00401396;
  local_18 = ExceptionList;
  local_10 = &stack0xffffffc8;
  local_c = &DAT_00401150;
  local_8 = param_1 & 1;
  piVar2 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &local_18;
  (**(code **)(*piVar2 + 4))(piVar2);
  local_1c = 0;
  local_20 = 0;
  iVar1 = (**(code **)(*piVar2 + 0x58))(piVar2,&local_1c);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar2,&DAT_00404950,0x58);
  }
  local_20 = local_1c;
  FUN_004097b0(&local_20);
  local_8 = 0;
  (**(code **)(*piVar2 + 8))(piVar2);
  ExceptionList = local_18;
  return local_8;
}


// ---- FUN_00407090 @ 00407090

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00407090(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44 [4];
  undefined4 local_34;
  undefined4 local_30;
  float local_2c [5];
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_00401396;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff40;
  local_c = &DAT_00401160;
  local_8 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar4 + 4))(piVar4);
  local_2c[3] = 0.0;
  local_2c[2] = 0.0;
  local_2c[1] = 0.0;
  local_2c[0] = 0.0;
  local_30 = 0;
  local_34 = 0;
  local_44[0] = 0;
  local_98 = 0;
  local_9c = 0;
  iVar1 = (**(code **)(*piVar4 + 0x54))(piVar4,L"Gun Service V03.00");
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar4,&DAT_00404950,0x54);
  }
  puVar9 = &local_98;
  piVar3 = piVar4;
  iVar1 = (**(code **)(*piVar4 + 0x58))(piVar4,puVar9);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar4,&DAT_00404950,0x58);
  }
  local_9c = local_98;
  FUN_004097b0(&local_9c);
  __vbaStrCopy(piVar3,puVar9);
  FUN_004097e0(&local_30);
  __vbaFreeStr();
  if (DAT_0040f010 == (int *)0x0) {
    __vbaNew2(&DAT_00403280,&DAT_0040f010);
  }
  uVar2 = (**(code **)(*DAT_0040f010 + 0x30c))
                    (DAT_0040f010,9,2,8,local_60,L"AP_ACTUALLENS",local_58,0x4003,local_50,
                     local_2c + 1,local_48);
  uVar2 = __vbaObjSet(&local_34,uVar2);
  uVar2 = __vbaLateIdCallLd(local_44,uVar2);
  __vbaI4Var(uVar2);
  __vbaFreeObj();
  __vbaFreeVar(uVar2);
  local_74 = 0x4003;
  uVar2 = (**(code **)(*piVar4 + 0x334))
                    (piVar4,2,3,0x4003,local_70,&DAT_0040f03c,local_68,0x4003,local_60,&DAT_0040f038
                     ,local_58,0x4003,local_50,local_2c + 1,local_48);
  uVar2 = __vbaObjSet(&local_34,uVar2);
  uVar2 = __vbaLateIdCallLd(local_44,uVar2);
  __vbaI4Var(uVar2);
  __vbaFreeObj();
  __vbaFreeVar(uVar2);
  if (DAT_0040f010 == (int *)0x0) {
    __vbaNew2(&DAT_00403280,&DAT_0040f010);
  }
  uVar2 = (**(code **)(*DAT_0040f010 + 0x30c))
                    (DAT_0040f010,9,2,8,local_60,L"AP_ACTUALKV",local_58,0x4003,local_50,
                     local_2c + 1,local_48);
  uVar2 = __vbaObjSet(&local_34,uVar2);
  uVar2 = __vbaLateIdCallLd(local_44,uVar2);
  __vbaI4Var(uVar2);
  __vbaFreeObj();
  __vbaFreeVar(uVar2);
  local_74 = 0x4003;
  uVar2 = (**(code **)(*piVar4 + 0x330))
                    (piVar4,2,3,0x4003,local_70,&DAT_0040f03c,local_68,0x4003,local_60,&DAT_0040f038
                     ,local_58,0x4003,local_50,local_2c + 1,local_48);
  uVar2 = __vbaObjSet(&local_34,uVar2);
  uVar2 = __vbaLateIdCallLd(local_44,uVar2);
  __vbaI4Var(uVar2);
  __vbaFreeObj();
  __vbaFreeVar(uVar2);
  if (DAT_0040f010 == (int *)0x0) {
    __vbaNew2(&DAT_00403280,&DAT_0040f010);
  }
  uVar2 = (**(code **)(*DAT_0040f010 + 0x30c))
                    (DAT_0040f010,9,2,8,local_60,L"AP_ACTUALSUPP",local_58,0x4003,local_50,
                     local_2c + 1,local_48);
  uVar2 = __vbaObjSet(&local_34,uVar2);
  uVar2 = __vbaLateIdCallLd(local_44,uVar2);
  __vbaI4Var(uVar2);
  __vbaFreeObj();
  __vbaFreeVar(uVar2);
  local_74 = 0x4003;
  uVar2 = (**(code **)(*piVar4 + 0x328))
                    (piVar4,2,3,0x4003,local_70,&DAT_0040f03c,local_68,0x4003,local_60,&DAT_0040f038
                     ,local_58,0x4003,local_50,local_2c + 1,local_48);
  uVar2 = __vbaObjSet(&local_34,uVar2);
  uVar2 = __vbaLateIdCallLd(local_44,uVar2);
  __vbaI4Var(uVar2);
  __vbaFreeObj();
  __vbaFreeVar(uVar2);
  if (DAT_0040f010 == (int *)0x0) {
    __vbaNew2(&DAT_00403280,&DAT_0040f010);
  }
  uVar2 = (**(code **)(*DAT_0040f010 + 0x30c))
                    (DAT_0040f010,9,2,8,local_60,L"AP_ACTUALCURRENT",local_58,0x4003,local_50,
                     local_2c + 1,local_48);
  uVar2 = __vbaObjSet(&local_34,uVar2);
  uVar2 = __vbaLateIdCallLd(local_44,uVar2);
  __vbaI4Var(uVar2);
  __vbaFreeObj();
  __vbaFreeVar(uVar2);
  local_74 = 0x4003;
  uVar2 = (**(code **)(*piVar4 + 0x324))
                    (piVar4,2,3,0x4003,local_70,&DAT_0040f03c,local_68,0x4003,local_60,&DAT_0040f038
                     ,local_58,0x4003,local_50,local_2c + 1,local_48);
  uVar2 = __vbaObjSet(&local_34,uVar2);
  uVar2 = __vbaLateIdCallLd(local_44,uVar2);
  __vbaI4Var(uVar2);
  __vbaFreeObj();
  __vbaFreeVar(uVar2);
  if (DAT_0040f010 == (int *)0x0) {
    __vbaNew2(&DAT_00403280,&DAT_0040f010);
  }
  uVar2 = (**(code **)(*DAT_0040f010 + 0x30c))
                    (DAT_0040f010,9,2,8,local_60,L"AP_ACTUALEXT",local_58,0x4003,local_50,
                     local_2c + 1,local_48);
  uVar2 = __vbaObjSet(&local_34,uVar2);
  uVar2 = __vbaLateIdCallLd(local_44,uVar2);
  __vbaI4Var(uVar2);
  __vbaFreeObj();
  __vbaFreeVar(uVar2);
  local_74 = 0x4003;
  uVar2 = (**(code **)(*piVar4 + 800))
                    (piVar4,2,3,0x4003,local_70,&DAT_0040f03c,local_68,0x4003,local_60,&DAT_0040f038
                     ,local_58,0x4003,local_50,local_2c + 1,local_48);
  uVar2 = __vbaObjSet(&local_34,uVar2);
  uVar2 = __vbaLateIdCallLd(local_44,uVar2);
  __vbaI4Var(uVar2);
  __vbaFreeObj();
  __vbaFreeVar(uVar2);
  if (DAT_0040f010 == (int *)0x0) {
    __vbaNew2(&DAT_00403280,&DAT_0040f010);
  }
  uVar2 = (**(code **)(*DAT_0040f010 + 0x30c))
                    (DAT_0040f010,9,2,8,local_60,L"AP_EXTCURRENT",local_58,0x4003,local_50,
                     local_2c + 1,local_48);
  uVar2 = __vbaObjSet(&local_34,uVar2);
  uVar2 = __vbaLateIdCallLd(local_44,uVar2);
  __vbaI4Var(uVar2);
  __vbaFreeObj();
  __vbaFreeVar(uVar2);
  local_74 = 0x4003;
  uVar2 = (**(code **)(*piVar4 + 0x31c))
                    (piVar4,2,3,0x4003,local_70,&DAT_0040f03c,local_68,0x4003,local_60,&DAT_0040f038
                     ,local_58,0x4003,local_50,local_2c + 1,local_48);
  uVar2 = __vbaObjSet(&local_34,uVar2);
  uVar2 = __vbaLateIdCallLd(local_44,uVar2);
  __vbaI4Var(uVar2);
  __vbaFreeObj();
  __vbaFreeVar(uVar2);
  if (DAT_0040f010 == (int *)0x0) {
    __vbaNew2(&DAT_00403280,&DAT_0040f010);
  }
  uVar2 = (**(code **)(*DAT_0040f010 + 0x30c))
                    (DAT_0040f010,9,2,8,local_60,L"AP_MANUALKV",local_58,0x4003,local_50,
                     local_2c + 1,local_48);
  uVar2 = __vbaObjSet(&local_34,uVar2);
  uVar2 = __vbaLateIdCallLd(local_44,uVar2);
  __vbaI4Var(uVar2);
  __vbaFreeObj();
  __vbaFreeVar(uVar2);
  local_74 = 0x4003;
  uVar2 = (**(code **)(*piVar4 + 0x32c))
                    (piVar4,4,3,0x4003,local_70,&DAT_0040f03c,local_68,0x4003,local_60,&DAT_0040f038
                     ,local_58,0x4003,local_50,local_2c + 1,local_48);
  uVar2 = __vbaObjSet(&local_34,uVar2);
  uVar2 = __vbaLateIdCallLd(local_44,uVar2);
  __vbaI4Var(uVar2);
  __vbaFreeObj();
  __vbaFreeVar(uVar2);
  if (DAT_0040f010 == (int *)0x0) {
    __vbaNew2(&DAT_00403280,&DAT_0040f010);
  }
  uVar2 = (**(code **)(*DAT_0040f010 + 0x30c))
                    (DAT_0040f010,9,2,8,local_60,L"AP_MANUALCURRENT",local_58,0x4003,local_50,
                     local_2c + 1,local_48);
  uVar2 = __vbaObjSet(&local_34,uVar2);
  uVar2 = __vbaLateIdCallLd(local_44,uVar2);
  __vbaI4Var(uVar2);
  __vbaFreeObj();
  __vbaFreeVar(uVar2);
  local_74 = 0x4003;
  uVar2 = (**(code **)(*piVar4 + 0x33c))
                    (piVar4,4,3,0x4003,local_70,&DAT_0040f03c,local_68,0x4003,local_60,&DAT_0040f038
                     ,local_58,0x4003,local_50,local_2c + 1,local_48);
  uVar2 = __vbaObjSet(&local_34,uVar2);
  uVar2 = __vbaLateIdCallLd(local_44,uVar2);
  __vbaI4Var(uVar2);
  __vbaFreeObj();
  __vbaFreeVar(uVar2);
  if (DAT_0040f010 == (int *)0x0) {
    __vbaNew2(&DAT_00403280,&DAT_0040f010);
  }
  uVar2 = (**(code **)(*DAT_0040f010 + 0x30c))
                    (DAT_0040f010,9,2,8,local_60,L"AP_MANUALEXT",local_58,0x4003,local_50,
                     local_2c + 1,local_48);
  uVar2 = __vbaObjSet(&local_34,uVar2);
  uVar2 = __vbaLateIdCallLd(local_44,uVar2);
  __vbaI4Var(uVar2);
  __vbaFreeObj();
  __vbaFreeVar(uVar2);
  local_74 = 0x4003;
  uVar2 = (**(code **)(*piVar4 + 0x338))
                    (piVar4,4,3,0x4003,local_70,&DAT_0040f03c,local_68,0x4003,local_60,&DAT_0040f038
                     ,local_58,0x4003,local_50,local_2c + 1,local_48);
  uVar2 = __vbaObjSet(&local_34,uVar2);
  uVar2 = __vbaLateIdCallLd(local_44,uVar2);
  __vbaI4Var(uVar2);
  __vbaFreeObj();
  __vbaFreeVar(uVar2);
  if (DAT_0040f010 == (int *)0x0) {
    __vbaNew2(&DAT_00403280,&DAT_0040f010);
  }
  uVar2 = (**(code **)(*DAT_0040f010 + 0x30c))
                    (DAT_0040f010,9,2,8,local_60,L"AP_MANUALLENS",local_58,0x4003,local_50,
                     local_2c + 1,local_48);
  uVar2 = __vbaObjSet(&local_34,uVar2);
  uVar2 = __vbaLateIdCallLd(local_44,uVar2);
  __vbaI4Var(uVar2);
  __vbaFreeObj();
  __vbaFreeVar(uVar2);
  local_74 = 0x4003;
  uVar2 = (**(code **)(*piVar4 + 0x314))
                    (piVar4,4,3,0x4003,local_70,&DAT_0040f03c,local_68,0x4003,local_60,&DAT_0040f038
                     ,local_58,0x4003,local_50,local_2c + 1,local_48);
  uVar2 = __vbaObjSet(&local_34,uVar2);
  uVar2 = __vbaLateIdCallLd(local_44,uVar2);
  __vbaI4Var(uVar2);
  __vbaFreeObj();
  __vbaFreeVar(uVar2);
  uVar2 = (**(code **)(*piVar4 + 0x30c))
                    (piVar4,9,2,8,local_60,L"CMD_SERVICE_RUNUP",local_58,0x4003,local_50,
                     local_2c + 1,local_48);
  uVar2 = __vbaObjSet(&local_34,uVar2);
  uVar2 = __vbaLateIdCallLd(local_44,uVar2);
  __vbaI4Var(uVar2);
  __vbaFreeObj();
  __vbaFreeVar(uVar2);
  local_94 = 0x4003;
  uVar2 = (**(code **)(*piVar4 + 0x318))
                    (piVar4,1,4,0x4003,local_90,&DAT_0040f03c,local_88,0x4003,local_80,&DAT_0040f038
                     ,local_78,8,local_60,&DAT_004050d4,local_58,0x4003,local_50,local_2c + 1,
                     local_48);
  uVar2 = __vbaObjSet(&local_34,uVar2);
  uVar2 = __vbaLateIdCallLd(local_44,uVar2);
  __vbaI4Var(uVar2);
  __vbaFreeObj();
  __vbaFreeVar(uVar2);
  uVar2 = (**(code **)(*piVar4 + 0x30c))
                    (piVar4,9,2,8,local_60,L"CMD_EHT_RESET",local_58,0x4003,local_50,local_2c + 1,
                     local_48);
  uVar2 = __vbaObjSet(&local_34,uVar2);
  uVar2 = __vbaLateIdCallLd(local_44,uVar2);
  __vbaI4Var(uVar2);
  __vbaFreeObj();
  __vbaFreeVar(uVar2);
  local_94 = 0x4003;
  uVar2 = (**(code **)(*piVar4 + 0x310))
                    (piVar4,1,4,0x4003,local_90,&DAT_0040f03c,local_88,0x4003,local_80,&DAT_0040f038
                     ,local_78,8,local_60,&DAT_004050d4,local_58,0x4003,local_50,local_2c + 1,
                     local_48);
  uVar2 = __vbaObjSet(&local_34,uVar2);
  uVar2 = __vbaLateIdCallLd(local_44,uVar2);
  __vbaI4Var(uVar2);
  __vbaFreeObj();
  __vbaFreeVar(uVar2);
  uVar2 = (**(code **)(*piVar4 + 0x30c))
                    (piVar4,9,2,8,local_60,L"DP_NEWFILAMENT",local_58,0x4003,local_50,local_2c + 1,
                     local_48);
  uVar2 = __vbaObjSet(&local_34,uVar2);
  uVar2 = __vbaLateIdCallLd(local_44,uVar2);
  __vbaI4Var(uVar2);
  __vbaFreeObj();
  __vbaFreeVar(uVar2);
  local_94 = 0x4003;
  uVar2 = (**(code **)(*piVar4 + 0x340))
                    (piVar4,1,4,0x4003,local_90,&DAT_0040f03c,local_88,0x4003,local_80,&DAT_0040f038
                     ,local_78,8,local_60,&DAT_004050d4,local_58,0x4003,local_50,local_2c + 1,
                     local_48);
  uVar2 = __vbaObjSet(&local_34,uVar2);
  uVar2 = __vbaLateIdCallLd(local_44,uVar2);
  __vbaI4Var(uVar2);
  __vbaFreeObj();
  __vbaFreeVar(uVar2);
  uVar2 = (**(code **)(*piVar4 + 0x30c))
                    (piVar4,9,2,8,local_60,L"DP_CALIBRATION",local_58,0x4003,local_50,local_2c + 1,
                     local_48);
  uVar2 = __vbaObjSet(&local_34,uVar2);
  __vbaLateIdCall(uVar2);
  __vbaFreeObj();
  uVar2 = (**(code **)(*piVar4 + 0x30c))
                    (piVar4,10,3,0x4008,local_70,local_2c + 2,local_68,0x4004,local_60,local_2c,
                     local_58,0x4003,local_50,local_2c + 1,local_48);
  uVar2 = __vbaObjSet(&local_34,uVar2);
  __vbaLateIdCall(uVar2);
  __vbaFreeObj();
  if (local_2c[0] == _DAT_00401158) {
    uVar2 = (**(code **)(*piVar4 + 0x304))(piVar4);
    piVar3 = (int *)__vbaObjSet(&local_34,uVar2);
    iVar1 = (**(code **)(*piVar3 + 0x74))(piVar3,0);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piVar3,&DAT_00405304,0x74);
    }
    __vbaFreeObj();
  }
  uVar10 = 0;
  uVar2 = (**(code **)(*piVar4 + 0x30c))(piVar4,0x4d,0);
  uVar2 = __vbaObjSet(&local_34,uVar2);
  uVar2 = __vbaLateIdCallLd(local_44,uVar2);
  __vbaStrVarMove(uVar2);
  __vbaStrMove();
  __vbaFreeObj();
  __vbaFreeVar(uVar10);
  if (DAT_0040f4cc == (int *)0x0) {
    __vbaNew2(&DAT_00405354,&DAT_0040f4cc);
  }
  piVar4 = DAT_0040f4cc;
  iVar1 = *DAT_0040f4cc;
  __vbaStrCat(L"\\admin32.ini",local_2c[3]);
  uVar2 = __vbaStrMove();
  iVar1 = (**(code **)(iVar1 + 0x28))(piVar4,uVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar4,&DAT_00405344,0x28);
  }
  __vbaFreeStr();
  if (DAT_0040f4cc == (int *)0x0) {
    __vbaNew2(&DAT_00405354,&DAT_0040f4cc);
  }
  piVar4 = DAT_0040f4cc;
  iVar1 = *DAT_0040f4cc;
  __vbaStrCat(L"\\system.mda",local_2c[3]);
  uVar2 = __vbaStrMove();
  iVar1 = (**(code **)(iVar1 + 0x80))(piVar4,uVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar4,&DAT_00405344,0x80);
  }
  __vbaFreeStr();
  if (DAT_0040f4cc == (int *)0x0) {
    __vbaNew2(&DAT_00405354,&DAT_0040f4cc);
  }
  piVar4 = DAT_0040f4cc;
  iVar1 = (**(code **)(*DAT_0040f4cc + 0x84))
                    (DAT_0040f4cc,L"LeoWorkspace",L"Phil Williams",L"shepreth",10,local_50,
                     0x80020004,local_48,&local_34);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar4,&DAT_00405344,0x84);
  }
  uVar2 = local_34;
  local_34 = 0;
  __vbaObjSet(&DAT_0040f040,uVar2);
  puVar9 = &local_34;
  local_54 = 10;
  local_4c = 0x80020004;
  uVar7 = 10;
  iVar1 = *DAT_0040f040;
  uVar8 = 0x80020004;
  uVar5 = 10;
  uVar6 = 0x80020004;
  uVar2 = 10;
  uVar10 = 0x80020004;
  __vbaStrCat(L"\\LEO_USER",local_2c[3]);
  uVar2 = __vbaStrMove(uVar2,local_50,uVar10,local_48,uVar5,local_60,uVar6,local_58,uVar7,local_70,
                       uVar8,local_68,puVar9);
  iVar1 = (**(code **)(iVar1 + 0x58))(DAT_0040f040,uVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,DAT_0040f040,&DAT_0040543c,0x58);
  }
  uVar2 = local_34;
  local_34 = 0;
  __vbaObjSet(&DAT_0040f044,uVar2);
  __vbaFreeStr();
  local_8 = 0;
  __vbaFreeStr(&LAB_0040846c);
  __vbaFreeStr();
  return;
}


// ---- FUN_00408490 @ 00408490

undefined4 FUN_00408490(uint param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  void *local_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_00401396;
  local_18 = ExceptionList;
  local_10 = &stack0xffffffd0;
  local_c = &DAT_00401170;
  local_8 = param_1 & 1;
  piVar1 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &local_18;
  (**(code **)(*piVar1 + 4))(piVar1);
  iVar2 = (**(code **)(*DAT_0040f044 + 0x58))(DAT_0040f044);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,DAT_0040f044,&DAT_0040544c,0x58);
  }
  iVar2 = (**(code **)(*DAT_0040f040 + 0x50))(DAT_0040f040);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,DAT_0040f040,&DAT_0040543c,0x50);
  }
  uVar3 = __vbaCastObj(0,&DAT_0040544c);
  __vbaObjSet(&DAT_0040f044,uVar3);
  uVar3 = __vbaCastObj(0,&DAT_0040543c);
  __vbaObjSet(&DAT_0040f040,uVar3);
  local_8 = 0;
  (**(code **)(*piVar1 + 8))(piVar1);
  ExceptionList = local_18;
  return local_8;
}


// ---- FUN_00408580 @ 00408580

void __cdecl FUN_00408580(uint param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_00401396;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc4;
  local_c = &DAT_00401178;
  local_8 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar4 + 4))(piVar4);
  local_1c = 0;
  if (DAT_0040f4c8 == (int *)0x0) {
    __vbaNew2(&DAT_0040547c,&DAT_0040f4c8);
  }
  piVar1 = DAT_0040f4c8;
  iVar3 = *DAT_0040f4c8;
  uVar2 = __vbaObjSetAddref(&local_1c,piVar4);
  iVar3 = (**(code **)(iVar3 + 0x10))(piVar1,uVar2);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar1,&DAT_0040546c,0x10);
  }
  __vbaFreeObj();
  return;
}


// ---- FUN_00408650 @ 00408650

void __cdecl FUN_00408650(undefined4 *param_1,undefined4 *param_2)

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
  undefined1 *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &LAB_00401396;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffff90;
  local_8 = &DAT_00401188;
  local_18 = (int *)0x0;
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_58[0] = 0;
  ExceptionList = &pvStack_14;
  iVar1 = (**(code **)(*DAT_0040f044 + 0xbc))(DAT_0040f044,L"keys",3);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,DAT_0040f044,&DAT_0040544c,0xbc);
  }
  uVar2 = local_24;
  local_24 = 0;
  __vbaObjSet(&local_18,uVar2);
  iVar1 = *local_18;
  __vbaStrCat(*param_1,L"KEY = \'");
  uVar2 = __vbaStrMove();
  __vbaStrCat(&DAT_004055c0,uVar2);
  uVar2 = __vbaStrMove();
  iVar1 = (**(code **)(iVar1 + 0xd4))(local_18,uVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_18,&DAT_004055c4,0xd4);
  }
  __vbaFreeStrList(2,&local_1c,&local_20);
  iVar1 = (**(code **)(*local_18 + 0x5c))(local_18,local_58);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_18,&DAT_004055c4,0x5c);
  }
  if ((short)local_58[0] == 0) {
    iVar1 = (**(code **)(*local_18 + 0xd0))(local_18);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,local_18,&DAT_004055c4,0xd0);
    }
  }
  else {
    iVar1 = (**(code **)(*local_18 + 0xc0))(local_18);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,local_18,&DAT_004055c4,0xc0);
    }
    iVar1 = (**(code **)(*local_18 + 0x128))
                      (local_18,8,local_30,&DAT_004055d8,local_28,8,local_40,*param_1,local_38);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,local_18,&DAT_004055c4,0x128);
    }
  }
  iVar1 = (**(code **)(*local_18 + 0x128))
                    (local_18,8,local_30,L"stringVal",local_28,8,local_40,*param_2,local_38);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_18,&DAT_004055c4,0x128);
  }
  iVar1 = (**(code **)(*local_18 + 0x164))(local_18,1,0);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_18,&DAT_004055c4,0x164);
  }
  iVar1 = (**(code **)(*local_18 + 0xc4))(local_18);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_18,&DAT_004055c4,0xc4);
  }
  __vbaFreeObj(&LAB_0040896d);
  return;
}


// ---- FUN_00408980 @ 00408980

void __cdecl FUN_00408980(undefined4 *param_1,short *param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  float10 fVar5;
  undefined4 *puVar6;
  int *piVar7;
  int *piVar8;
  undefined4 uVar9;
  int *piVar10;
  short *psStack_104;
  undefined4 uStack_100;
  code *pcStack_fc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 auStack_d0 [2];
  undefined4 uStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  wchar_t *pwStack_a4;
  undefined4 uStack_a0;
  undefined4 auStack_9c [4];
  int *piStack_8c;
  int *piStack_88;
  undefined4 uStack_84;
  int *piStack_80;
  undefined4 auStack_7c [4];
  void *pvStack_6c;
  undefined1 *puStack_68;
  undefined4 *puStack_64;
  undefined4 *puStack_60;
  undefined4 *puStack_5c;
  undefined4 local_40 [2];
  undefined4 *local_38;
  undefined4 local_30 [4];
  undefined4 local_20;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  
  pcVar4 = __vbaLenBstr_exref;
  puStack_14 = &LAB_00401396;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffa8;
  local_c = &DAT_00401198;
  puStack_5c = (undefined4 *)*param_1;
  local_1c = 0;
  local_20 = 0;
  local_30[0] = 0;
  local_40[0] = 0;
  sVar1 = *param_2;
  puStack_60 = (undefined4 *)0x4089ce;
  ExceptionList = &pvStack_18;
  iVar2 = __vbaLenBstr();
  if (sVar1 < iVar2) {
    puStack_60 = local_40;
    puStack_64 = local_30;
    local_38 = param_1;
    local_40[0] = 0x4008;
    puStack_68 = (undefined1 *)0x4089ee;
    puStack_5c = (undefined4 *)(int)sVar1;
    rtcLeftCharVar();
    puStack_5c = local_30;
    puStack_60 = (undefined4 *)0x4089f8;
    __vbaStrVarMove();
    puStack_5c = (undefined4 *)0x408a03;
    __vbaStrMove();
    puStack_5c = (undefined4 *)0x408a0c;
    __vbaFreeVar();
  }
  else {
    puStack_5c = (undefined4 *)*param_1;
    puStack_60 = (undefined4 *)0x408a18;
    iVar2 = __vbaLenBstr();
    if (iVar2 < *param_2) {
      uVar9 = *param_1;
      puStack_64 = (undefined4 *)0x408a25;
      puStack_60 = (undefined4 *)uVar9;
      puStack_5c = (undefined4 *)uVar9;
      iVar2 = __vbaLenBstr();
      puStack_60 = (undefined4 *)(*param_2 - iVar2);
      if (SBORROW4((int)*param_2,iVar2)) {
        puStack_60 = (undefined4 *)0x408aaf;
        __vbaErrorOverflow();
        puStack_68 = &LAB_00401396;
        pvStack_6c = ExceptionList;
        pcStack_fc = pcVar4;
        puStack_64 = &psStack_104;
        psStack_104 = param_2;
        puStack_60 = (undefined4 *)&DAT_004011a8;
        auStack_7c[0] = 0;
        piStack_80 = (int *)0x0;
        uStack_84 = 0;
        piStack_88 = (int *)0x0;
        piStack_8c = (int *)0x0;
        auStack_9c[0] = 0;
        auStack_d0[0] = 0;
        uStack_d4 = 0;
        uStack_d8 = 0;
        pwStack_a4 = (wchar_t *)0x80020004;
        uStack_ac = 10;
        ExceptionList = &pvStack_6c;
        uStack_100 = uVar9;
        puStack_5c = (undefined4 *)&stack0xfffffffc;
        iVar2 = (**(code **)(*DAT_0040f044 + 0xbc))
                          (DAT_0040f044,L"TIPS",10,uStack_a8,0x80020004,uStack_a0,10,uStack_b8,
                           0x80020004,uStack_b0,10,uStack_c8,0x80020004,uStack_c0,&piStack_88);
        pcVar4 = __vbaHresultCheckObj_exref;
        if (iVar2 < 0) {
          __vbaHresultCheckObj(iVar2,DAT_0040f044,&DAT_0040544c,0xbc);
        }
        piVar10 = piStack_88;
        piStack_88 = (int *)0x0;
        __vbaObjSet(&piStack_80,piVar10);
        iVar2 = (**(code **)(*piStack_80 + 0x20))(piStack_80,auStack_d0);
        if (iVar2 < 0) {
          __vbaHresultCheckObj(iVar2,piStack_80,&DAT_004055c4,0x20);
        }
        iVar2 = (**(code **)(*piStack_80 + 0x34))(piStack_80,&uStack_d4);
        if (iVar2 < 0) {
          __vbaHresultCheckObj(iVar2,piStack_80,&DAT_004055c4,0x34);
        }
        if ((short)uStack_d4 == 0 || (short)auStack_d0[0] == 0) {
          iVar2 = (**(code **)(*piStack_80 + 0x168))(piStack_80,0);
          if (iVar2 < 0) {
            __vbaHresultCheckObj(iVar2,piStack_80,&DAT_004055c4,0x168);
          }
          piVar10 = piStack_80;
          iVar2 = (**(code **)(*piStack_80 + 0x70))(piStack_80,&uStack_d8);
          if (iVar2 < 0) {
            __vbaHresultCheckObj(iVar2,piStack_80,&DAT_004055c4,0x70);
          }
          DAT_0040f04c = __vbaI2I4(piVar10);
          __vbaErase(&DAT_00404e64,&DAT_0040f048);
          __vbaRedim(0,0x28,&DAT_0040f048,&DAT_00404e64,1,(int)DAT_0040f04c,0);
          pwStack_a4 = (wchar_t *)0x0;
          uStack_ac = 2;
          __vbaVarMove();
          iVar2 = (**(code **)(*piStack_80 + 0xe4))(piStack_80);
          if (-1 < iVar2) goto LAB_00408d02;
          uVar9 = 0xe4;
          do {
            (*pcVar4)(iVar2,piStack_80,&DAT_004055c4,uVar9);
LAB_00408d02:
            do {
              iVar2 = (**(code **)(*piStack_80 + 0x34))(piStack_80,auStack_d0);
              if (iVar2 < 0) {
                (*pcVar4)(iVar2,piStack_80,&DAT_004055c4,0x34);
              }
              if ((short)auStack_d0[0] != 0) goto LAB_00408c0f;
              iVar2 = (**(code **)(*piStack_80 + 0xb4))(piStack_80,&piStack_88);
              if (iVar2 < 0) {
                (*pcVar4)(iVar2,piStack_80,&DAT_004055c4,0xb4);
              }
              piVar10 = piStack_88;
              uStack_ac = 8;
              pwStack_a4 = L"Engineer";
              piVar8 = piStack_88;
              iVar2 = (**(code **)(*piStack_88 + 0x30))
                                (piStack_88,8,uStack_a8,L"Engineer",uStack_a0,&piStack_8c);
              if (iVar2 < 0) {
                __vbaHresultCheckObj(iVar2,piVar10,&DAT_00405620,0x30);
              }
              piVar10 = piStack_8c;
              puVar6 = auStack_9c;
              piVar7 = piStack_8c;
              iVar2 = (**(code **)(*piStack_8c + 0x44))(piStack_8c,puVar6);
              if (iVar2 < 0) {
                __vbaHresultCheckObj(iVar2,piVar10,&DAT_00405630,0x44);
              }
              if ((DAT_0040f048 == (short *)0x0) || (*DAT_0040f048 != 1)) {
                __vbaGenerateBoundsError();
              }
              else {
                iVar2 = __vbaI4Var(auStack_7c);
                if (*(uint *)(DAT_0040f048 + 8) <= (uint)(iVar2 - *(int *)(DAT_0040f048 + 10))) {
                  __vbaGenerateBoundsError();
                }
              }
              __vbaStrVarMove(auStack_9c);
              __vbaStrMove();
              __vbaStrCopy(piVar7,puVar6);
              __vbaFreeStr();
              __vbaFreeObjList(2,&piStack_88,&piStack_8c);
              __vbaFreeVar(piVar8);
              iVar2 = (**(code **)(*piStack_80 + 0xb4))(piStack_80,&piStack_88);
              if (iVar2 < 0) {
                __vbaHresultCheckObj(iVar2,piStack_80,&DAT_004055c4,0xb4);
              }
              piVar10 = piStack_88;
              uStack_ac = 8;
              pwStack_a4 = L"ExtractorVoltage";
              iVar2 = (**(code **)(*piStack_88 + 0x30))
                                (piStack_88,8,uStack_a8,L"ExtractorVoltage",uStack_a0,&piStack_8c);
              if (iVar2 < 0) {
                __vbaHresultCheckObj(iVar2,piVar10,&DAT_00405620,0x30);
              }
              piVar10 = piStack_8c;
              iVar2 = (**(code **)(*piStack_8c + 0x44))(piStack_8c,auStack_9c);
              if (iVar2 < 0) {
                __vbaHresultCheckObj(iVar2,piVar10,&DAT_00405630,0x44);
              }
              if ((DAT_0040f048 == (short *)0x0) || (*DAT_0040f048 != 1)) {
                iVar2 = __vbaGenerateBoundsError();
              }
              else {
                iVar3 = __vbaI4Var(auStack_7c);
                iVar2 = *(int *)(DAT_0040f048 + 10);
                if (*(uint *)(DAT_0040f048 + 8) <= (uint)(iVar3 - iVar2)) {
                  __vbaGenerateBoundsError();
                }
                iVar2 = (iVar3 - iVar2) * 0x28;
              }
              puVar6 = auStack_9c;
              fVar5 = (float10)__vbaR4Var(puVar6);
              *(float *)(*(int *)(DAT_0040f048 + 6) + 0x20 + iVar2) = (float)fVar5;
              __vbaFreeObjList(2,&piStack_88,&piStack_8c);
              __vbaFreeVar(puVar6);
              iVar2 = (**(code **)(*piStack_80 + 0xb4))(piStack_80,&piStack_88);
              if (iVar2 < 0) {
                __vbaHresultCheckObj(iVar2,piStack_80,&DAT_004055c4,0xb4);
              }
              piVar10 = piStack_88;
              uStack_ac = 8;
              pwStack_a4 = L"FilamentCurrent";
              iVar2 = (**(code **)(*piStack_88 + 0x30))
                                (piStack_88,8,uStack_a8,L"FilamentCurrent",uStack_a0,&piStack_8c);
              if (iVar2 < 0) {
                __vbaHresultCheckObj(iVar2,piVar10,&DAT_00405620,0x30);
              }
              piVar10 = piStack_8c;
              iVar2 = (**(code **)(*piStack_8c + 0x44))(piStack_8c,auStack_9c);
              if (iVar2 < 0) {
                __vbaHresultCheckObj(iVar2,piVar10,&DAT_00405630,0x44);
              }
              if ((DAT_0040f048 == (short *)0x0) || (*DAT_0040f048 != 1)) {
                iVar2 = __vbaGenerateBoundsError();
              }
              else {
                iVar3 = __vbaI4Var(auStack_7c);
                iVar2 = *(int *)(DAT_0040f048 + 10);
                if (*(uint *)(DAT_0040f048 + 8) <= (uint)(iVar3 - iVar2)) {
                  __vbaGenerateBoundsError();
                }
                iVar2 = (iVar3 - iVar2) * 0x28;
              }
              puVar6 = auStack_9c;
              fVar5 = (float10)__vbaR4Var(puVar6);
              *(float *)(*(int *)(DAT_0040f048 + 6) + 0x14 + iVar2) = (float)fVar5;
              __vbaFreeObjList(2,&piStack_88,&piStack_8c);
              __vbaFreeVar(puVar6);
              iVar2 = (**(code **)(*piStack_80 + 0xb4))(piStack_80,&piStack_88);
              if (iVar2 < 0) {
                __vbaHresultCheckObj(iVar2,piStack_80,&DAT_004055c4,0xb4);
              }
              piVar10 = piStack_88;
              uStack_ac = 8;
              pwStack_a4 = L"Length";
              iVar2 = (**(code **)(*piStack_88 + 0x30))
                                (piStack_88,8,uStack_a8,L"Length",uStack_a0,&piStack_8c);
              if (iVar2 < 0) {
                __vbaHresultCheckObj(iVar2,piVar10,&DAT_00405620,0x30);
              }
              piVar10 = piStack_8c;
              iVar2 = (**(code **)(*piStack_8c + 0x44))(piStack_8c,auStack_9c);
              if (iVar2 < 0) {
                __vbaHresultCheckObj(iVar2,piVar10,&DAT_00405630,0x44);
              }
              if ((DAT_0040f048 == (short *)0x0) || (*DAT_0040f048 != 1)) {
                iVar2 = __vbaGenerateBoundsError();
              }
              else {
                iVar3 = __vbaI4Var(auStack_7c);
                iVar2 = *(int *)(DAT_0040f048 + 10);
                if (*(uint *)(DAT_0040f048 + 8) <= (uint)(iVar3 - iVar2)) {
                  __vbaGenerateBoundsError();
                }
                iVar2 = (iVar3 - iVar2) * 0x28;
              }
              puVar6 = auStack_9c;
              fVar5 = (float10)__vbaR4Var(puVar6);
              *(float *)(*(int *)(DAT_0040f048 + 6) + 0x1c + iVar2) = (float)fVar5;
              __vbaFreeObjList(2,&piStack_88,&piStack_8c);
              __vbaFreeVar(puVar6);
              iVar2 = (**(code **)(*piStack_80 + 0xb4))(piStack_80,&piStack_88);
              if (iVar2 < 0) {
                __vbaHresultCheckObj(iVar2,piStack_80,&DAT_004055c4,0xb4);
              }
              piVar10 = piStack_88;
              uStack_ac = 8;
              pwStack_a4 = L"Radius";
              iVar2 = (**(code **)(*piStack_88 + 0x30))
                                (piStack_88,8,uStack_a8,L"Radius",uStack_a0,&piStack_8c);
              if (iVar2 < 0) {
                __vbaHresultCheckObj(iVar2,piVar10,&DAT_00405620,0x30);
              }
              piVar10 = piStack_8c;
              iVar2 = (**(code **)(*piStack_8c + 0x44))(piStack_8c,auStack_9c);
              if (iVar2 < 0) {
                __vbaHresultCheckObj(iVar2,piVar10,&DAT_00405630,0x44);
              }
              if ((DAT_0040f048 == (short *)0x0) || (*DAT_0040f048 != 1)) {
                iVar2 = __vbaGenerateBoundsError();
              }
              else {
                iVar3 = __vbaI4Var(auStack_7c);
                iVar2 = *(int *)(DAT_0040f048 + 10);
                if (*(uint *)(DAT_0040f048 + 8) <= (uint)(iVar3 - iVar2)) {
                  __vbaGenerateBoundsError();
                }
                iVar2 = (iVar3 - iVar2) * 0x28;
              }
              puVar6 = auStack_9c;
              fVar5 = (float10)__vbaR4Var(puVar6);
              *(float *)(*(int *)(DAT_0040f048 + 6) + 0x18 + iVar2) = (float)fVar5;
              __vbaFreeObjList(2,&piStack_88,&piStack_8c);
              __vbaFreeVar(puVar6);
              iVar2 = (**(code **)(*piStack_80 + 0xb4))(piStack_80,&piStack_88);
              if (iVar2 < 0) {
                __vbaHresultCheckObj(iVar2,piStack_80,&DAT_004055c4,0xb4);
              }
              piVar10 = piStack_88;
              uStack_ac = 8;
              pwStack_a4 = L"Date";
              iVar2 = (**(code **)(*piStack_88 + 0x30))
                                (piStack_88,8,uStack_a8,L"Date",uStack_a0,&piStack_8c);
              if (iVar2 < 0) {
                __vbaHresultCheckObj(iVar2,piVar10,&DAT_00405620,0x30);
              }
              piVar10 = piStack_8c;
              piVar8 = piStack_8c;
              iVar2 = (**(code **)(*piStack_8c + 0x44))(piStack_8c,auStack_9c);
              if (iVar2 < 0) {
                __vbaHresultCheckObj(iVar2,piVar10,&DAT_00405630,0x44);
              }
              if ((DAT_0040f048 == (short *)0x0) || (*DAT_0040f048 != 1)) {
                iVar2 = __vbaGenerateBoundsError();
              }
              else {
                iVar3 = __vbaI4Var(auStack_7c);
                iVar2 = *(int *)(DAT_0040f048 + 10);
                if (*(uint *)(DAT_0040f048 + 8) <= (uint)(iVar3 - iVar2)) {
                  __vbaGenerateBoundsError();
                }
                iVar2 = (iVar3 - iVar2) * 0x28;
              }
              fVar5 = (float10)__vbaDateVar(auStack_9c);
              *(double *)(*(int *)(DAT_0040f048 + 6) + iVar2) = (double)fVar5;
              __vbaFreeObjList(2,&piStack_88,&piStack_8c);
              __vbaFreeVar(piVar8);
              iVar2 = (**(code **)(*piStack_80 + 0xb4))(piStack_80,&piStack_88);
              if (iVar2 < 0) {
                __vbaHresultCheckObj(iVar2,piStack_80,&DAT_004055c4,0xb4);
              }
              piVar10 = piStack_88;
              uStack_ac = 8;
              pwStack_a4 = L"serialnumber";
              piVar8 = piStack_88;
              iVar2 = (**(code **)(*piStack_88 + 0x30))
                                (piStack_88,8,uStack_a8,L"serialnumber",uStack_a0,&piStack_8c);
              if (iVar2 < 0) {
                __vbaHresultCheckObj(iVar2,piVar10,&DAT_00405620,0x30);
              }
              piVar10 = piStack_8c;
              puVar6 = auStack_9c;
              piVar7 = piStack_8c;
              iVar2 = (**(code **)(*piStack_8c + 0x44))(piStack_8c,puVar6);
              if (iVar2 < 0) {
                __vbaHresultCheckObj(iVar2,piVar10,&DAT_00405630,0x44);
              }
              if ((DAT_0040f048 == (short *)0x0) || (*DAT_0040f048 != 1)) {
                __vbaGenerateBoundsError();
              }
              else {
                iVar2 = __vbaI4Var(auStack_7c);
                if (*(uint *)(DAT_0040f048 + 8) <= (uint)(iVar2 - *(int *)(DAT_0040f048 + 10))) {
                  __vbaGenerateBoundsError();
                }
              }
              __vbaStrVarMove(auStack_9c);
              __vbaStrMove();
              __vbaStrCopy(piVar7,puVar6);
              __vbaFreeStr();
              __vbaFreeObjList(2,&piStack_88,&piStack_8c);
              __vbaFreeVar(piVar8);
              iVar2 = (**(code **)(*piStack_80 + 0xb4))(piStack_80,&piStack_88);
              if (iVar2 < 0) {
                __vbaHresultCheckObj(iVar2,piStack_80,&DAT_004055c4,0xb4);
              }
              piVar10 = piStack_88;
              uStack_ac = 8;
              pwStack_a4 = L"TipType";
              piVar8 = piStack_88;
              iVar2 = (**(code **)(*piStack_88 + 0x30))
                                (piStack_88,8,uStack_a8,L"TipType",uStack_a0,&piStack_8c);
              if (iVar2 < 0) {
                __vbaHresultCheckObj(iVar2,piVar10,&DAT_00405620,0x30);
              }
              piVar10 = piStack_8c;
              puVar6 = auStack_9c;
              piVar7 = piStack_8c;
              iVar2 = (**(code **)(*piStack_8c + 0x44))(piStack_8c,puVar6);
              if (iVar2 < 0) {
                __vbaHresultCheckObj(iVar2,piVar10,&DAT_00405630,0x44);
              }
              if ((DAT_0040f048 == (short *)0x0) || (*DAT_0040f048 != 1)) {
                __vbaGenerateBoundsError();
              }
              else {
                iVar2 = __vbaI4Var(auStack_7c);
                if (*(uint *)(DAT_0040f048 + 8) <= (uint)(iVar2 - *(int *)(DAT_0040f048 + 10))) {
                  __vbaGenerateBoundsError();
                }
              }
              __vbaStrVarMove(auStack_9c);
              __vbaStrMove();
              __vbaStrCopy(piVar7,puVar6);
              __vbaFreeStr();
              __vbaFreeObjList(2,&piStack_88,&piStack_8c);
              __vbaFreeVar(piVar8);
              iVar2 = (**(code **)(*piStack_80 + 0xb4))(piStack_80,&piStack_88);
              if (iVar2 < 0) {
                __vbaHresultCheckObj(iVar2,piStack_80,&DAT_004055c4,0xb4);
              }
              piVar10 = piStack_88;
              uStack_ac = 8;
              pwStack_a4 = L"TotalCurrent";
              iVar2 = (**(code **)(*piStack_88 + 0x30))
                                (piStack_88,8,uStack_a8,L"TotalCurrent",uStack_a0,&piStack_8c);
              pcVar4 = __vbaHresultCheckObj_exref;
              if (iVar2 < 0) {
                __vbaHresultCheckObj(iVar2,piVar10,&DAT_00405620,0x30);
              }
              piVar10 = piStack_8c;
              iVar2 = (**(code **)(*piStack_8c + 0x44))(piStack_8c,auStack_9c);
              if (iVar2 < 0) {
                __vbaHresultCheckObj(iVar2,piVar10,&DAT_00405630,0x44);
              }
              if ((DAT_0040f048 == (short *)0x0) || (*DAT_0040f048 != 1)) {
                iVar2 = __vbaGenerateBoundsError();
              }
              else {
                iVar3 = __vbaI4Var(auStack_7c);
                iVar2 = *(int *)(DAT_0040f048 + 10);
                if (*(uint *)(DAT_0040f048 + 8) <= (uint)(iVar3 - iVar2)) {
                  __vbaGenerateBoundsError();
                }
                iVar2 = (iVar3 - iVar2) * 0x28;
              }
              puVar6 = auStack_9c;
              fVar5 = (float10)__vbaR4Var(puVar6);
              *(float *)(*(int *)(DAT_0040f048 + 6) + 0x24 + iVar2) = (float)fVar5;
              __vbaFreeObjList(2,&piStack_88,&piStack_8c);
              __vbaFreeVar(puVar6);
              pwStack_a4 = (wchar_t *)0x1;
              uStack_ac = 2;
              __vbaVarAdd(auStack_9c,&uStack_ac,auStack_7c);
              __vbaVarMove();
              iVar2 = (**(code **)(*piStack_80 + 0xec))(piStack_80);
            } while (-1 < iVar2);
            uVar9 = 0xec;
          } while( true );
        }
        DAT_0040f04c = 0;
LAB_00408c0f:
        iVar2 = (**(code **)(*piStack_80 + 0xc4))(piStack_80);
        if (iVar2 < 0) {
          (*pcVar4)(iVar2,piStack_80,&DAT_004055c4,0xc4);
        }
        __vbaFreeVar(&LAB_0040979e);
        __vbaFreeObj();
        return;
      }
      puStack_64 = (undefined4 *)0x408a33;
      rtcSpaceBstr();
      puStack_60 = (undefined4 *)0x408a40;
      puStack_60 = (undefined4 *)__vbaStrMove();
      puStack_64 = (undefined4 *)0x408a47;
      __vbaStrCat();
      puStack_5c = (undefined4 *)0x408a4e;
      __vbaStrMove();
      puStack_5c = (undefined4 *)0x408a57;
      __vbaFreeStr();
    }
    else {
      puStack_5c = (undefined4 *)0x408a69;
      __vbaStrCopy();
    }
  }
  return;
}


// ---- FUN_00408ab0 @ 00408ab0

void FUN_00408ab0(void)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  float10 fVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78 [9];
  undefined4 local_54;
  undefined4 local_50;
  wchar_t *local_4c;
  undefined4 local_48;
  undefined4 local_44 [4];
  int *local_34;
  int *local_30;
  undefined4 local_2c;
  int *local_28;
  undefined4 local_24 [4];
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &LAB_00401396;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffff54;
  local_8 = &DAT_004011a8;
  local_24[0] = 0;
  local_28 = (int *)0x0;
  local_2c = 0;
  local_30 = (int *)0x0;
  local_34 = (int *)0x0;
  local_44[0] = 0;
  local_78[0] = 0;
  local_7c = 0;
  local_80 = 0;
  local_4c = (wchar_t *)0x80020004;
  local_54 = 10;
  ExceptionList = &pvStack_14;
  iVar1 = (**(code **)(*DAT_0040f044 + 0xbc))(DAT_0040f044,L"TIPS",10);
  pcVar3 = __vbaHresultCheckObj_exref;
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,DAT_0040f044,&DAT_0040544c,0xbc);
  }
  piVar9 = local_30;
  local_30 = (int *)0x0;
  __vbaObjSet(&local_28,piVar9);
  iVar1 = (**(code **)(*local_28 + 0x20))(local_28,local_78);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_28,&DAT_004055c4,0x20);
  }
  iVar1 = (**(code **)(*local_28 + 0x34))(local_28,&local_7c);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_28,&DAT_004055c4,0x34);
  }
  if ((short)local_7c == 0 || (short)local_78[0] == 0) {
    iVar1 = (**(code **)(*local_28 + 0x168))(local_28,0);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,local_28,&DAT_004055c4,0x168);
    }
    piVar9 = local_28;
    iVar1 = (**(code **)(*local_28 + 0x70))(local_28,&local_80);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,local_28,&DAT_004055c4,0x70);
    }
    DAT_0040f04c = __vbaI2I4(piVar9);
    __vbaErase(&DAT_00404e64,&DAT_0040f048);
    __vbaRedim(0,0x28,&DAT_0040f048,&DAT_00404e64,1,(int)DAT_0040f04c,0);
    local_4c = (wchar_t *)0x0;
    local_54 = 2;
    __vbaVarMove();
    iVar1 = (**(code **)(*local_28 + 0xe4))(local_28);
    if (-1 < iVar1) goto LAB_00408d02;
    uVar8 = 0xe4;
    do {
      (*pcVar3)(iVar1,local_28,&DAT_004055c4,uVar8);
LAB_00408d02:
      do {
        iVar1 = (**(code **)(*local_28 + 0x34))(local_28,local_78);
        if (iVar1 < 0) {
          (*pcVar3)(iVar1,local_28,&DAT_004055c4,0x34);
        }
        if ((short)local_78[0] != 0) goto LAB_00408c0f;
        iVar1 = (**(code **)(*local_28 + 0xb4))(local_28,&local_30);
        if (iVar1 < 0) {
          (*pcVar3)(iVar1,local_28,&DAT_004055c4,0xb4);
        }
        piVar9 = local_30;
        local_54 = 8;
        local_4c = L"Engineer";
        piVar7 = local_30;
        iVar1 = (**(code **)(*local_30 + 0x30))(local_30,8,local_50,L"Engineer",local_48,&local_34);
        if (iVar1 < 0) {
          __vbaHresultCheckObj(iVar1,piVar9,&DAT_00405620,0x30);
        }
        piVar9 = local_34;
        puVar5 = local_44;
        piVar6 = local_34;
        iVar1 = (**(code **)(*local_34 + 0x44))(local_34,puVar5);
        if (iVar1 < 0) {
          __vbaHresultCheckObj(iVar1,piVar9,&DAT_00405630,0x44);
        }
        if ((DAT_0040f048 == (short *)0x0) || (*DAT_0040f048 != 1)) {
          __vbaGenerateBoundsError();
        }
        else {
          iVar1 = __vbaI4Var(local_24);
          if (*(uint *)(DAT_0040f048 + 8) <= (uint)(iVar1 - *(int *)(DAT_0040f048 + 10))) {
            __vbaGenerateBoundsError();
          }
        }
        __vbaStrVarMove(local_44);
        __vbaStrMove();
        __vbaStrCopy(piVar6,puVar5);
        __vbaFreeStr();
        __vbaFreeObjList(2,&local_30,&local_34);
        __vbaFreeVar(piVar7);
        iVar1 = (**(code **)(*local_28 + 0xb4))(local_28,&local_30);
        if (iVar1 < 0) {
          __vbaHresultCheckObj(iVar1,local_28,&DAT_004055c4,0xb4);
        }
        piVar9 = local_30;
        local_54 = 8;
        local_4c = L"ExtractorVoltage";
        iVar1 = (**(code **)(*local_30 + 0x30))
                          (local_30,8,local_50,L"ExtractorVoltage",local_48,&local_34);
        if (iVar1 < 0) {
          __vbaHresultCheckObj(iVar1,piVar9,&DAT_00405620,0x30);
        }
        piVar9 = local_34;
        iVar1 = (**(code **)(*local_34 + 0x44))(local_34,local_44);
        if (iVar1 < 0) {
          __vbaHresultCheckObj(iVar1,piVar9,&DAT_00405630,0x44);
        }
        if ((DAT_0040f048 == (short *)0x0) || (*DAT_0040f048 != 1)) {
          iVar1 = __vbaGenerateBoundsError();
        }
        else {
          iVar2 = __vbaI4Var(local_24);
          iVar1 = *(int *)(DAT_0040f048 + 10);
          if (*(uint *)(DAT_0040f048 + 8) <= (uint)(iVar2 - iVar1)) {
            __vbaGenerateBoundsError();
          }
          iVar1 = (iVar2 - iVar1) * 0x28;
        }
        puVar5 = local_44;
        fVar4 = (float10)__vbaR4Var(puVar5);
        *(float *)(*(int *)(DAT_0040f048 + 6) + 0x20 + iVar1) = (float)fVar4;
        __vbaFreeObjList(2,&local_30,&local_34);
        __vbaFreeVar(puVar5);
        iVar1 = (**(code **)(*local_28 + 0xb4))(local_28,&local_30);
        if (iVar1 < 0) {
          __vbaHresultCheckObj(iVar1,local_28,&DAT_004055c4,0xb4);
        }
        piVar9 = local_30;
        local_54 = 8;
        local_4c = L"FilamentCurrent";
        iVar1 = (**(code **)(*local_30 + 0x30))
                          (local_30,8,local_50,L"FilamentCurrent",local_48,&local_34);
        if (iVar1 < 0) {
          __vbaHresultCheckObj(iVar1,piVar9,&DAT_00405620,0x30);
        }
        piVar9 = local_34;
        iVar1 = (**(code **)(*local_34 + 0x44))(local_34,local_44);
        if (iVar1 < 0) {
          __vbaHresultCheckObj(iVar1,piVar9,&DAT_00405630,0x44);
        }
        if ((DAT_0040f048 == (short *)0x0) || (*DAT_0040f048 != 1)) {
          iVar1 = __vbaGenerateBoundsError();
        }
        else {
          iVar2 = __vbaI4Var(local_24);
          iVar1 = *(int *)(DAT_0040f048 + 10);
          if (*(uint *)(DAT_0040f048 + 8) <= (uint)(iVar2 - iVar1)) {
            __vbaGenerateBoundsError();
          }
          iVar1 = (iVar2 - iVar1) * 0x28;
        }
        puVar5 = local_44;
        fVar4 = (float10)__vbaR4Var(puVar5);
        *(float *)(*(int *)(DAT_0040f048 + 6) + 0x14 + iVar1) = (float)fVar4;
        __vbaFreeObjList(2,&local_30,&local_34);
        __vbaFreeVar(puVar5);
        iVar1 = (**(code **)(*local_28 + 0xb4))(local_28,&local_30);
        if (iVar1 < 0) {
          __vbaHresultCheckObj(iVar1,local_28,&DAT_004055c4,0xb4);
        }
        piVar9 = local_30;
        local_54 = 8;
        local_4c = L"Length";
        iVar1 = (**(code **)(*local_30 + 0x30))(local_30,8,local_50,L"Length",local_48,&local_34);
        if (iVar1 < 0) {
          __vbaHresultCheckObj(iVar1,piVar9,&DAT_00405620,0x30);
        }
        piVar9 = local_34;
        iVar1 = (**(code **)(*local_34 + 0x44))(local_34,local_44);
        if (iVar1 < 0) {
          __vbaHresultCheckObj(iVar1,piVar9,&DAT_00405630,0x44);
        }
        if ((DAT_0040f048 == (short *)0x0) || (*DAT_0040f048 != 1)) {
          iVar1 = __vbaGenerateBoundsError();
        }
        else {
          iVar2 = __vbaI4Var(local_24);
          iVar1 = *(int *)(DAT_0040f048 + 10);
          if (*(uint *)(DAT_0040f048 + 8) <= (uint)(iVar2 - iVar1)) {
            __vbaGenerateBoundsError();
          }
          iVar1 = (iVar2 - iVar1) * 0x28;
        }
        puVar5 = local_44;
        fVar4 = (float10)__vbaR4Var(puVar5);
        *(float *)(*(int *)(DAT_0040f048 + 6) + 0x1c + iVar1) = (float)fVar4;
        __vbaFreeObjList(2,&local_30,&local_34);
        __vbaFreeVar(puVar5);
        iVar1 = (**(code **)(*local_28 + 0xb4))(local_28,&local_30);
        if (iVar1 < 0) {
          __vbaHresultCheckObj(iVar1,local_28,&DAT_004055c4,0xb4);
        }
        piVar9 = local_30;
        local_54 = 8;
        local_4c = L"Radius";
        iVar1 = (**(code **)(*local_30 + 0x30))(local_30,8,local_50,L"Radius",local_48,&local_34);
        if (iVar1 < 0) {
          __vbaHresultCheckObj(iVar1,piVar9,&DAT_00405620,0x30);
        }
        piVar9 = local_34;
        iVar1 = (**(code **)(*local_34 + 0x44))(local_34,local_44);
        if (iVar1 < 0) {
          __vbaHresultCheckObj(iVar1,piVar9,&DAT_00405630,0x44);
        }
        if ((DAT_0040f048 == (short *)0x0) || (*DAT_0040f048 != 1)) {
          iVar1 = __vbaGenerateBoundsError();
        }
        else {
          iVar2 = __vbaI4Var(local_24);
          iVar1 = *(int *)(DAT_0040f048 + 10);
          if (*(uint *)(DAT_0040f048 + 8) <= (uint)(iVar2 - iVar1)) {
            __vbaGenerateBoundsError();
          }
          iVar1 = (iVar2 - iVar1) * 0x28;
        }
        puVar5 = local_44;
        fVar4 = (float10)__vbaR4Var(puVar5);
        *(float *)(*(int *)(DAT_0040f048 + 6) + 0x18 + iVar1) = (float)fVar4;
        __vbaFreeObjList(2,&local_30,&local_34);
        __vbaFreeVar(puVar5);
        iVar1 = (**(code **)(*local_28 + 0xb4))(local_28,&local_30);
        if (iVar1 < 0) {
          __vbaHresultCheckObj(iVar1,local_28,&DAT_004055c4,0xb4);
        }
        piVar9 = local_30;
        local_54 = 8;
        local_4c = L"Date";
        iVar1 = (**(code **)(*local_30 + 0x30))(local_30,8,local_50,L"Date",local_48,&local_34);
        if (iVar1 < 0) {
          __vbaHresultCheckObj(iVar1,piVar9,&DAT_00405620,0x30);
        }
        piVar9 = local_34;
        piVar7 = local_34;
        iVar1 = (**(code **)(*local_34 + 0x44))(local_34,local_44);
        if (iVar1 < 0) {
          __vbaHresultCheckObj(iVar1,piVar9,&DAT_00405630,0x44);
        }
        if ((DAT_0040f048 == (short *)0x0) || (*DAT_0040f048 != 1)) {
          iVar1 = __vbaGenerateBoundsError();
        }
        else {
          iVar2 = __vbaI4Var(local_24);
          iVar1 = *(int *)(DAT_0040f048 + 10);
          if (*(uint *)(DAT_0040f048 + 8) <= (uint)(iVar2 - iVar1)) {
            __vbaGenerateBoundsError();
          }
          iVar1 = (iVar2 - iVar1) * 0x28;
        }
        fVar4 = (float10)__vbaDateVar(local_44);
        *(double *)(*(int *)(DAT_0040f048 + 6) + iVar1) = (double)fVar4;
        __vbaFreeObjList(2,&local_30,&local_34);
        __vbaFreeVar(piVar7);
        iVar1 = (**(code **)(*local_28 + 0xb4))(local_28,&local_30);
        if (iVar1 < 0) {
          __vbaHresultCheckObj(iVar1,local_28,&DAT_004055c4,0xb4);
        }
        piVar9 = local_30;
        local_54 = 8;
        local_4c = L"serialnumber";
        piVar7 = local_30;
        iVar1 = (**(code **)(*local_30 + 0x30))
                          (local_30,8,local_50,L"serialnumber",local_48,&local_34);
        if (iVar1 < 0) {
          __vbaHresultCheckObj(iVar1,piVar9,&DAT_00405620,0x30);
        }
        piVar9 = local_34;
        puVar5 = local_44;
        piVar6 = local_34;
        iVar1 = (**(code **)(*local_34 + 0x44))(local_34,puVar5);
        if (iVar1 < 0) {
          __vbaHresultCheckObj(iVar1,piVar9,&DAT_00405630,0x44);
        }
        if ((DAT_0040f048 == (short *)0x0) || (*DAT_0040f048 != 1)) {
          __vbaGenerateBoundsError();
        }
        else {
          iVar1 = __vbaI4Var(local_24);
          if (*(uint *)(DAT_0040f048 + 8) <= (uint)(iVar1 - *(int *)(DAT_0040f048 + 10))) {
            __vbaGenerateBoundsError();
          }
        }
        __vbaStrVarMove(local_44);
        __vbaStrMove();
        __vbaStrCopy(piVar6,puVar5);
        __vbaFreeStr();
        __vbaFreeObjList(2,&local_30,&local_34);
        __vbaFreeVar(piVar7);
        iVar1 = (**(code **)(*local_28 + 0xb4))(local_28,&local_30);
        if (iVar1 < 0) {
          __vbaHresultCheckObj(iVar1,local_28,&DAT_004055c4,0xb4);
        }
        piVar9 = local_30;
        local_54 = 8;
        local_4c = L"TipType";
        piVar7 = local_30;
        iVar1 = (**(code **)(*local_30 + 0x30))(local_30,8,local_50,L"TipType",local_48,&local_34);
        if (iVar1 < 0) {
          __vbaHresultCheckObj(iVar1,piVar9,&DAT_00405620,0x30);
        }
        piVar9 = local_34;
        puVar5 = local_44;
        piVar6 = local_34;
        iVar1 = (**(code **)(*local_34 + 0x44))(local_34,puVar5);
        if (iVar1 < 0) {
          __vbaHresultCheckObj(iVar1,piVar9,&DAT_00405630,0x44);
        }
        if ((DAT_0040f048 == (short *)0x0) || (*DAT_0040f048 != 1)) {
          __vbaGenerateBoundsError();
        }
        else {
          iVar1 = __vbaI4Var(local_24);
          if (*(uint *)(DAT_0040f048 + 8) <= (uint)(iVar1 - *(int *)(DAT_0040f048 + 10))) {
            __vbaGenerateBoundsError();
          }
        }
        __vbaStrVarMove(local_44);
        __vbaStrMove();
        __vbaStrCopy(piVar6,puVar5);
        __vbaFreeStr();
        __vbaFreeObjList(2,&local_30,&local_34);
        __vbaFreeVar(piVar7);
        iVar1 = (**(code **)(*local_28 + 0xb4))(local_28,&local_30);
        if (iVar1 < 0) {
          __vbaHresultCheckObj(iVar1,local_28,&DAT_004055c4,0xb4);
        }
        piVar9 = local_30;
        local_54 = 8;
        local_4c = L"TotalCurrent";
        iVar1 = (**(code **)(*local_30 + 0x30))
                          (local_30,8,local_50,L"TotalCurrent",local_48,&local_34);
        pcVar3 = __vbaHresultCheckObj_exref;
        if (iVar1 < 0) {
          __vbaHresultCheckObj(iVar1,piVar9,&DAT_00405620,0x30);
        }
        piVar9 = local_34;
        iVar1 = (**(code **)(*local_34 + 0x44))(local_34,local_44);
        if (iVar1 < 0) {
          __vbaHresultCheckObj(iVar1,piVar9,&DAT_00405630,0x44);
        }
        if ((DAT_0040f048 == (short *)0x0) || (*DAT_0040f048 != 1)) {
          iVar1 = __vbaGenerateBoundsError();
        }
        else {
          iVar2 = __vbaI4Var(local_24);
          iVar1 = *(int *)(DAT_0040f048 + 10);
          if (*(uint *)(DAT_0040f048 + 8) <= (uint)(iVar2 - iVar1)) {
            __vbaGenerateBoundsError();
          }
          iVar1 = (iVar2 - iVar1) * 0x28;
        }
        puVar5 = local_44;
        fVar4 = (float10)__vbaR4Var(puVar5);
        *(float *)(*(int *)(DAT_0040f048 + 6) + 0x24 + iVar1) = (float)fVar4;
        __vbaFreeObjList(2,&local_30,&local_34);
        __vbaFreeVar(puVar5);
        local_4c = (wchar_t *)0x1;
        local_54 = 2;
        __vbaVarAdd(local_44,&local_54,local_24);
        __vbaVarMove();
        iVar1 = (**(code **)(*local_28 + 0xec))(local_28);
      } while (-1 < iVar1);
      uVar8 = 0xec;
    } while( true );
  }
  DAT_0040f04c = 0;
LAB_00408c0f:
  iVar1 = (**(code **)(*local_28 + 0xc4))(local_28);
  if (iVar1 < 0) {
    (*pcVar3)(iVar1,local_28,&DAT_004055c4,0xc4);
  }
  __vbaFreeVar(&LAB_0040979e);
  __vbaFreeObj();
  return;
}


// ---- FUN_004097b0 @ 004097b0

void FUN_004097b0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar7 = 3;
  uVar6 = 0;
  uVar5 = 0;
  uVar1 = *param_1;
  uVar4 = 0;
  uVar3 = 0;
  uVar2 = 0xffffffff;
  FUN_00404eb4();
  __vbaSetSystemError(uVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7);
  return;
}


// ---- FUN_004097e0 @ 004097e0

void __cdecl FUN_004097e0(undefined4 param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_5c [2];
  undefined4 local_54;
  undefined4 local_4c [2];
  undefined4 local_44;
  undefined4 local_3c [2];
  undefined4 local_34;
  undefined4 local_2c [4];
  undefined4 local_1c [2];
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &LAB_00401396;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffff50;
  local_8 = &DAT_004011b8;
  local_1c[0] = 0;
  local_2c[0] = 0;
  local_3c[0] = 0;
  local_4c[0] = 0;
  local_5c[0] = 0;
  ExceptionList = &pvStack_14;
  puVar1 = &stack0xffffff50;
  if (DAT_0040f010 == (int *)0x0) {
    ExceptionList = &pvStack_14;
    __vbaNew2(&DAT_00403280,&DAT_0040f010);
    puVar1 = local_c;
  }
  local_c = puVar1;
  uVar4 = local_60;
  uVar2 = (**(code **)(*DAT_0040f010 + 0x30c))(DAT_0040f010,0x1f,1,0x4008,local_68,param_1,local_60)
  ;
  uVar2 = __vbaObjSet(local_1c,uVar2);
  uVar2 = __vbaLateIdCallLd(local_2c,uVar2);
  iVar3 = __vbaI4Var(uVar2);
  __vbaFreeObj();
  __vbaFreeVar(uVar2);
  if (iVar3 == 0) {
    local_54 = 0x80020004;
    local_44 = 0x80020004;
    local_34 = 0x80020004;
    local_5c[0] = 10;
    local_4c[0] = 10;
    local_3c[0] = 10;
    __vbaVarDup();
    rtcMsgBox(local_2c,0,local_3c,local_4c,local_5c);
    __vbaFreeVarList(4,local_2c,local_3c,local_4c,local_5c);
    __vbaEnd(uVar4);
  }
  else {
    if (DAT_0040f010 == (int *)0x0) {
      __vbaNew2(&DAT_00403280,&DAT_0040f010);
    }
    uVar4 = (**(code **)(*DAT_0040f010 + 0x30c))
                      (DAT_0040f010,0x12,2,0x4003,local_78,&DAT_0040f03c,local_70,0x4003,local_68,
                       &DAT_0040f038,local_60);
    uVar4 = __vbaObjSet(local_1c,uVar4);
    uVar4 = __vbaLateIdCallLd(local_2c,uVar4);
    __vbaI4Var(uVar4);
    __vbaFreeObj();
    __vbaFreeVar(uVar4);
  }
  return;
}


// ---- FUN_00409a20 @ 00409a20

undefined4 FUN_00409a20(uint param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 local_20;
  undefined4 local_1c;
  void *local_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_00401396;
  local_18 = ExceptionList;
  local_10 = &stack0xffffffc8;
  local_c = &DAT_004011c8;
  local_8 = param_1 & 1;
  piVar2 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &local_18;
  (**(code **)(*piVar2 + 4))(piVar2);
  local_1c = 0;
  local_20 = 0;
  iVar1 = (**(code **)(*piVar2 + 0x58))(piVar2,&local_1c);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar2,&DAT_00404d74,0x58);
  }
  local_20 = local_1c;
  FUN_004097b0(&local_20);
  local_8 = 0;
  (**(code **)(*piVar2 + 8))(piVar2);
  ExceptionList = local_18;
  return local_8;
}


// ---- FUN_00409ac0 @ 00409ac0

void __cdecl FUN_00409ac0(uint param_1)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 local_34 [4];
  undefined4 local_24;
  undefined4 local_20 [2];
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_00401396;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff88;
  local_c = &DAT_004011d0;
  local_8 = param_1 & 1;
  piVar2 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar2 + 4))(piVar2);
  local_20[0] = 0;
  local_24 = 0;
  local_34[0] = 0;
  if (DAT_0040f010 == (int *)0x0) {
    __vbaNew2(&DAT_00403280,&DAT_0040f010);
  }
  uVar1 = (**(code **)(*DAT_0040f010 + 0x30c))
                    (DAT_0040f010,9,2,8,local_50,L"AP_NOMINALFIL",local_48,0x4003,local_40,local_20,
                     local_38);
  uVar1 = __vbaObjSet(&local_24,uVar1);
  uVar1 = __vbaLateIdCallLd(local_34,uVar1);
  __vbaI4Var(uVar1);
  __vbaFreeObj();
  __vbaFreeVar(uVar1);
  uVar1 = (**(code **)(*piVar2 + 0x31c))
                    (piVar2,2,3,0x4003,local_60,&DAT_0040f03c,local_58,0x4003,local_50,&DAT_0040f038
                     ,local_48,0x4003,local_40,local_20,local_38);
  uVar1 = __vbaObjSet(&local_24,uVar1);
  uVar1 = __vbaLateIdCallLd(local_34,uVar1);
  __vbaI4Var(uVar1);
  __vbaFreeObj();
  __vbaFreeVar(uVar1);
  if (DAT_0040f010 == (int *)0x0) {
    __vbaNew2(&DAT_00403280,&DAT_0040f010);
  }
  uVar1 = (**(code **)(*DAT_0040f010 + 0x30c))
                    (DAT_0040f010,9,2,8,local_50,L"AP_NOMINALEXT",local_48,0x4003,local_40,local_20,
                     local_38);
  uVar1 = __vbaObjSet(&local_24,uVar1);
  uVar1 = __vbaLateIdCallLd(local_34,uVar1);
  __vbaI4Var(uVar1);
  __vbaFreeObj();
  __vbaFreeVar(uVar1);
  uVar1 = (**(code **)(*piVar2 + 0x318))
                    (piVar2,2,3,0x4003,local_60,&DAT_0040f03c,local_58,0x4003,local_50,&DAT_0040f038
                     ,local_48,0x4003,local_40,local_20,local_38);
  uVar1 = __vbaObjSet(&local_24,uVar1);
  uVar1 = __vbaLateIdCallLd(local_34,uVar1);
  __vbaI4Var(uVar1);
  __vbaFreeObj();
  __vbaFreeVar(uVar1);
  if (DAT_0040f010 == (int *)0x0) {
    __vbaNew2(&DAT_00403280,&DAT_0040f010);
  }
  uVar1 = (**(code **)(*DAT_0040f010 + 0x30c))
                    (DAT_0040f010,9,2,8,local_50,L"AP_NOMINALEXTI",local_48,0x4003,local_40,local_20
                     ,local_38);
  uVar1 = __vbaObjSet(&local_24,uVar1);
  uVar1 = __vbaLateIdCallLd(local_34,uVar1);
  __vbaI4Var(uVar1);
  __vbaFreeObj();
  __vbaFreeVar(uVar1);
  uVar1 = (**(code **)(*piVar2 + 0x314))
                    (piVar2,2,3,0x4003,local_60,&DAT_0040f03c,local_58,0x4003,local_50,&DAT_0040f038
                     ,local_48,0x4003,local_40,local_20,local_38);
  uVar1 = __vbaObjSet(&local_24,uVar1);
  uVar1 = __vbaLateIdCallLd(local_34,uVar1);
  __vbaI4Var(uVar1);
  __vbaFreeObj();
  __vbaFreeVar(uVar1);
  if (DAT_0040f010 == (int *)0x0) {
    __vbaNew2(&DAT_00403280,&DAT_0040f010);
  }
  uVar1 = (**(code **)(*DAT_0040f010 + 0x30c))
                    (DAT_0040f010,9,2,8,local_50,L"AP_MIN_EXT",local_48,0x4003,local_40,local_20,
                     local_38);
  uVar1 = __vbaObjSet(&local_24,uVar1);
  uVar1 = __vbaLateIdCallLd(local_34,uVar1);
  __vbaI4Var(uVar1);
  __vbaFreeObj();
  __vbaFreeVar(uVar1);
  uVar1 = (**(code **)(*piVar2 + 0x310))
                    (piVar2,2,3,0x4003,local_60,&DAT_0040f03c,local_58,0x4003,local_50,&DAT_0040f038
                     ,local_48,0x4003,local_40,local_20,local_38);
  uVar1 = __vbaObjSet(&local_24,uVar1);
  uVar1 = __vbaLateIdCallLd(local_34,uVar1);
  __vbaI4Var(uVar1);
  __vbaFreeObj();
  __vbaFreeVar(uVar1);
  if (DAT_0040f010 == (int *)0x0) {
    __vbaNew2(&DAT_00403280,&DAT_0040f010);
  }
  uVar1 = (**(code **)(*DAT_0040f010 + 0x30c))
                    (DAT_0040f010,9,2,8,local_50,L"AP_EHT_CAL_100",local_48,0x4003,local_40,local_20
                     ,local_38);
  uVar1 = __vbaObjSet(&local_24,uVar1);
  uVar1 = __vbaLateIdCallLd(local_34,uVar1);
  __vbaI4Var(uVar1);
  __vbaFreeObj();
  __vbaFreeVar(uVar1);
  uVar1 = (**(code **)(*piVar2 + 0x30c))
                    (piVar2,2,3,0x4003,local_60,&DAT_0040f03c,local_58,0x4003,local_50,&DAT_0040f038
                     ,local_48,0x4003,local_40,local_20,local_38);
  uVar1 = __vbaObjSet(&local_24,uVar1);
  uVar1 = __vbaLateIdCallLd(local_34,uVar1);
  __vbaI4Var(uVar1);
  __vbaFreeObj();
  __vbaFreeVar(uVar1);
  if (DAT_0040f010 == (int *)0x0) {
    __vbaNew2(&DAT_00403280,&DAT_0040f010);
  }
  uVar1 = (**(code **)(*DAT_0040f010 + 0x30c))
                    (DAT_0040f010,9,2,8,local_50,L"AP_EHT_CAL_10KV",local_48,0x4003,local_40,
                     local_20,local_38);
  uVar1 = __vbaObjSet(&local_24,uVar1);
  uVar1 = __vbaLateIdCallLd(local_34,uVar1);
  __vbaI4Var(uVar1);
  __vbaFreeObj();
  __vbaFreeVar(uVar1);
  uVar1 = (**(code **)(*piVar2 + 0x308))
                    (piVar2,2,3,0x4003,local_60,&DAT_0040f03c,local_58,0x4003,local_50,&DAT_0040f038
                     ,local_48,0x4003,local_40,local_20,local_38);
  uVar1 = __vbaObjSet(&local_24,uVar1);
  uVar1 = __vbaLateIdCallLd(local_34,uVar1);
  __vbaI4Var(uVar1);
  __vbaFreeObj();
  __vbaFreeVar(uVar1);
  if (DAT_0040f010 == (int *)0x0) {
    __vbaNew2(&DAT_00403280,&DAT_0040f010);
  }
  uVar1 = (**(code **)(*DAT_0040f010 + 0x30c))
                    (DAT_0040f010,9,2,8,local_50,L"AP_EHT_CAL_24KV",local_48,0x4003,local_40,
                     local_20,local_38);
  uVar1 = __vbaObjSet(&local_24,uVar1);
  uVar1 = __vbaLateIdCallLd(local_34,uVar1);
  __vbaI4Var(uVar1);
  __vbaFreeObj();
  __vbaFreeVar(uVar1);
  uVar1 = (**(code **)(*piVar2 + 0x304))
                    (piVar2,2,3,0x4003,local_60,&DAT_0040f03c,local_58,0x4003,local_50,&DAT_0040f038
                     ,local_48,0x4003,local_40,local_20,local_38);
  uVar1 = __vbaObjSet(&local_24,uVar1);
  uVar1 = __vbaLateIdCallLd(local_34,uVar1);
  __vbaI4Var(uVar1);
  __vbaFreeObj();
  __vbaFreeVar(uVar1);
  if (DAT_0040f010 == (int *)0x0) {
    __vbaNew2(&DAT_00403280,&DAT_0040f010);
  }
  uVar1 = (**(code **)(*DAT_0040f010 + 0x30c))
                    (DAT_0040f010,9,2,8,local_50,L"AP_EHT_CAL_30KV",local_48,0x4003,local_40,
                     local_20,local_38);
  uVar1 = __vbaObjSet(&local_24,uVar1);
  uVar1 = __vbaLateIdCallLd(local_34,uVar1);
  __vbaI4Var(uVar1);
  __vbaFreeObj();
  __vbaFreeVar(uVar1);
  uVar1 = (**(code **)(*piVar2 + 0x300))
                    (piVar2,2,3,0x4003,local_60,&DAT_0040f03c,local_58,0x4003,local_50,&DAT_0040f038
                     ,local_48,0x4003,local_40,local_20,local_38);
  uVar1 = __vbaObjSet(&local_24,uVar1);
  uVar1 = __vbaLateIdCallLd(local_34,uVar1);
  __vbaI4Var(uVar1);
  __vbaFreeObj();
  __vbaFreeVar(uVar1);
  if (DAT_0040f010 == (int *)0x0) {
    __vbaNew2(&DAT_00403280,&DAT_0040f010);
  }
  uVar1 = (**(code **)(*DAT_0040f010 + 0x30c))
                    (DAT_0040f010,9,2,8,local_50,L"AP_MAX_EXTRACTOR_V",local_48,0x4003,local_40,
                     local_20,local_38);
  uVar1 = __vbaObjSet(&local_24,uVar1);
  uVar1 = __vbaLateIdCallLd(local_34,uVar1);
  __vbaI4Var(uVar1);
  __vbaFreeObj();
  __vbaFreeVar(uVar1);
  uVar1 = (**(code **)(*piVar2 + 0x2fc))
                    (piVar2,2,3,0x4003,local_60,&DAT_0040f03c,local_58,0x4003,local_50,&DAT_0040f038
                     ,local_48,0x4003,local_40,local_20,local_38);
  uVar1 = __vbaObjSet(&local_24,uVar1);
  uVar1 = __vbaLateIdCallLd(local_34,uVar1);
  __vbaI4Var(uVar1);
  __vbaFreeObj();
  __vbaFreeVar(uVar1);
  return;
}


// ---- FUN_0040a5f0 @ 0040a5f0

void __cdecl FUN_0040a5f0(uint param_1)

{
  undefined4 uVar1;
  undefined4 local_3c;
  undefined4 local_34;
  undefined4 local_30 [4];
  undefined4 local_20 [2];
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_00401396;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffac;
  local_c = &DAT_004011e0;
  local_8 = param_1 & 1;
  ExceptionList = &pvStack_18;
  (**(code **)(*(int *)(param_1 & 0xfffffffe) + 4))((int *)(param_1 & 0xfffffffe));
  local_20[0] = 0;
  local_30[0] = 0;
  if (DAT_0040f010 == (int *)0x0) {
    __vbaNew2(&DAT_00403280,&DAT_0040f010);
  }
  uVar1 = (**(code **)(*DAT_0040f010 + 0x30c))
                    (DAT_0040f010,0x18,1,0x4003,local_3c,&stack0x00000008,local_34);
  uVar1 = __vbaObjSet(local_20,uVar1);
  uVar1 = __vbaLateIdCallLd(local_30,uVar1);
  __vbaI4Var(uVar1);
  __vbaFreeObj();
  __vbaFreeVar(uVar1);
  return;
}


// ---- FUN_0040a6f0 @ 0040a6f0

void __cdecl FUN_0040a6f0(uint param_1)

{
  undefined4 uVar1;
  undefined4 local_3c;
  undefined4 local_34;
  undefined4 local_30 [4];
  undefined4 local_20 [2];
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_00401396;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffac;
  local_c = &DAT_004011f0;
  local_8 = param_1 & 1;
  ExceptionList = &pvStack_18;
  (**(code **)(*(int *)(param_1 & 0xfffffffe) + 4))((int *)(param_1 & 0xfffffffe));
  local_20[0] = 0;
  local_30[0] = 0;
  if (DAT_0040f010 == (int *)0x0) {
    __vbaNew2(&DAT_00403280,&DAT_0040f010);
  }
  uVar1 = (**(code **)(*DAT_0040f010 + 0x30c))
                    (DAT_0040f010,0x18,1,0x4003,local_3c,&stack0x00000008,local_34);
  uVar1 = __vbaObjSet(local_20,uVar1);
  uVar1 = __vbaLateIdCallLd(local_30,uVar1);
  __vbaI4Var(uVar1);
  __vbaFreeObj();
  __vbaFreeVar(uVar1);
  return;
}


// ---- FUN_0040a7f0 @ 0040a7f0

void __cdecl FUN_0040a7f0(uint param_1)

{
  undefined4 uVar1;
  undefined4 local_3c;
  undefined4 local_34;
  undefined4 local_30 [4];
  undefined4 local_20 [2];
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_00401396;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffac;
  local_c = &DAT_00401200;
  local_8 = param_1 & 1;
  ExceptionList = &pvStack_18;
  (**(code **)(*(int *)(param_1 & 0xfffffffe) + 4))((int *)(param_1 & 0xfffffffe));
  local_20[0] = 0;
  local_30[0] = 0;
  if (DAT_0040f010 == (int *)0x0) {
    __vbaNew2(&DAT_00403280,&DAT_0040f010);
  }
  uVar1 = (**(code **)(*DAT_0040f010 + 0x30c))
                    (DAT_0040f010,0x18,1,0x4003,local_3c,&stack0x00000008,local_34);
  uVar1 = __vbaObjSet(local_20,uVar1);
  uVar1 = __vbaLateIdCallLd(local_30,uVar1);
  __vbaI4Var(uVar1);
  __vbaFreeObj();
  __vbaFreeVar(uVar1);
  return;
}


// ---- FUN_0040a8f0 @ 0040a8f0

void __cdecl FUN_0040a8f0(uint param_1)

{
  undefined4 uVar1;
  undefined4 local_3c;
  undefined4 local_34;
  undefined4 local_30 [4];
  undefined4 local_20 [2];
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_00401396;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffac;
  local_c = &DAT_00401210;
  local_8 = param_1 & 1;
  ExceptionList = &pvStack_18;
  (**(code **)(*(int *)(param_1 & 0xfffffffe) + 4))((int *)(param_1 & 0xfffffffe));
  local_20[0] = 0;
  local_30[0] = 0;
  if (DAT_0040f010 == (int *)0x0) {
    __vbaNew2(&DAT_00403280,&DAT_0040f010);
  }
  uVar1 = (**(code **)(*DAT_0040f010 + 0x30c))
                    (DAT_0040f010,0x18,1,0x4003,local_3c,&stack0x00000008,local_34);
  uVar1 = __vbaObjSet(local_20,uVar1);
  uVar1 = __vbaLateIdCallLd(local_30,uVar1);
  __vbaI4Var(uVar1);
  __vbaFreeObj();
  __vbaFreeVar(uVar1);
  return;
}


// ---- FUN_0040a9f0 @ 0040a9f0

void __cdecl FUN_0040a9f0(uint param_1)

{
  undefined4 uVar1;
  undefined4 local_3c;
  undefined4 local_34;
  undefined4 local_30 [4];
  undefined4 local_20 [2];
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_00401396;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffac;
  local_c = &DAT_00401220;
  local_8 = param_1 & 1;
  ExceptionList = &pvStack_18;
  (**(code **)(*(int *)(param_1 & 0xfffffffe) + 4))((int *)(param_1 & 0xfffffffe));
  local_20[0] = 0;
  local_30[0] = 0;
  if (DAT_0040f010 == (int *)0x0) {
    __vbaNew2(&DAT_00403280,&DAT_0040f010);
  }
  uVar1 = (**(code **)(*DAT_0040f010 + 0x30c))
                    (DAT_0040f010,0x18,1,0x4003,local_3c,&stack0x00000008,local_34);
  uVar1 = __vbaObjSet(local_20,uVar1);
  uVar1 = __vbaLateIdCallLd(local_30,uVar1);
  __vbaI4Var(uVar1);
  __vbaFreeObj();
  __vbaFreeVar(uVar1);
  return;
}


// ---- FUN_0040aaf0 @ 0040aaf0

void __cdecl FUN_0040aaf0(uint param_1)

{
  undefined4 uVar1;
  undefined4 local_3c;
  undefined4 local_34;
  undefined4 local_30 [4];
  undefined4 local_20 [2];
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_00401396;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffac;
  local_c = &DAT_00401230;
  local_8 = param_1 & 1;
  ExceptionList = &pvStack_18;
  (**(code **)(*(int *)(param_1 & 0xfffffffe) + 4))((int *)(param_1 & 0xfffffffe));
  local_20[0] = 0;
  local_30[0] = 0;
  if (DAT_0040f010 == (int *)0x0) {
    __vbaNew2(&DAT_00403280,&DAT_0040f010);
  }
  uVar1 = (**(code **)(*DAT_0040f010 + 0x30c))
                    (DAT_0040f010,0x18,1,0x4003,local_3c,&stack0x00000008,local_34);
  uVar1 = __vbaObjSet(local_20,uVar1);
  uVar1 = __vbaLateIdCallLd(local_30,uVar1);
  __vbaI4Var(uVar1);
  __vbaFreeObj();
  __vbaFreeVar(uVar1);
  return;
}


// ---- FUN_0040abf0 @ 0040abf0

void __cdecl FUN_0040abf0(uint param_1)

{
  undefined4 uVar1;
  undefined4 local_3c;
  undefined4 local_34;
  undefined4 local_30 [4];
  undefined4 local_20 [2];
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_00401396;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffac;
  local_c = &DAT_00401240;
  local_8 = param_1 & 1;
  ExceptionList = &pvStack_18;
  (**(code **)(*(int *)(param_1 & 0xfffffffe) + 4))((int *)(param_1 & 0xfffffffe));
  local_20[0] = 0;
  local_30[0] = 0;
  if (DAT_0040f010 == (int *)0x0) {
    __vbaNew2(&DAT_00403280,&DAT_0040f010);
  }
  uVar1 = (**(code **)(*DAT_0040f010 + 0x30c))
                    (DAT_0040f010,0x18,1,0x4003,local_3c,&stack0x00000008,local_34);
  uVar1 = __vbaObjSet(local_20,uVar1);
  uVar1 = __vbaLateIdCallLd(local_30,uVar1);
  __vbaI4Var(uVar1);
  __vbaFreeObj();
  __vbaFreeVar(uVar1);
  return;
}


// ---- FUN_0040acf0 @ 0040acf0

void __cdecl FUN_0040acf0(uint param_1)

{
  undefined4 uVar1;
  undefined4 local_3c;
  undefined4 local_34;
  undefined4 local_30 [4];
  undefined4 local_20 [2];
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_00401396;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffac;
  local_c = &DAT_00401250;
  local_8 = param_1 & 1;
  ExceptionList = &pvStack_18;
  (**(code **)(*(int *)(param_1 & 0xfffffffe) + 4))((int *)(param_1 & 0xfffffffe));
  local_20[0] = 0;
  local_30[0] = 0;
  if (DAT_0040f010 == (int *)0x0) {
    __vbaNew2(&DAT_00403280,&DAT_0040f010);
  }
  uVar1 = (**(code **)(*DAT_0040f010 + 0x30c))
                    (DAT_0040f010,0x18,1,0x4003,local_3c,&stack0x00000008,local_34);
  uVar1 = __vbaObjSet(local_20,uVar1);
  uVar1 = __vbaLateIdCallLd(local_30,uVar1);
  __vbaI4Var(uVar1);
  __vbaFreeObj();
  __vbaFreeVar(uVar1);
  return;
}


// ---- FUN_0040adf0 @ 0040adf0

void __cdecl FUN_0040adf0(uint param_1)

{
  undefined4 uVar1;
  undefined4 local_3c;
  undefined4 local_34;
  undefined4 local_30 [4];
  undefined4 local_20 [2];
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_00401396;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffac;
  local_c = &DAT_00401260;
  local_8 = param_1 & 1;
  ExceptionList = &pvStack_18;
  (**(code **)(*(int *)(param_1 & 0xfffffffe) + 4))((int *)(param_1 & 0xfffffffe));
  local_20[0] = 0;
  local_30[0] = 0;
  if (DAT_0040f010 == (int *)0x0) {
    __vbaNew2(&DAT_00403280,&DAT_0040f010);
  }
  uVar1 = (**(code **)(*DAT_0040f010 + 0x30c))
                    (DAT_0040f010,0x18,1,0x4003,local_3c,&stack0x00000008,local_34);
  uVar1 = __vbaObjSet(local_20,uVar1);
  uVar1 = __vbaLateIdCallLd(local_30,uVar1);
  __vbaI4Var(uVar1);
  __vbaFreeObj();
  __vbaFreeVar(uVar1);
  return;
}


// ---- FUN_0040aef0 @ 0040aef0

void __cdecl FUN_0040aef0(uint param_1)

{
  undefined4 uVar1;
  undefined4 local_3c;
  undefined4 local_34;
  undefined4 local_30 [4];
  undefined4 local_20 [2];
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_00401396;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffac;
  local_c = &DAT_00401270;
  local_8 = param_1 & 1;
  ExceptionList = &pvStack_18;
  (**(code **)(*(int *)(param_1 & 0xfffffffe) + 4))((int *)(param_1 & 0xfffffffe));
  local_20[0] = 0;
  local_30[0] = 0;
  if (DAT_0040f010 == (int *)0x0) {
    __vbaNew2(&DAT_00403280,&DAT_0040f010);
  }
  uVar1 = (**(code **)(*DAT_0040f010 + 0x30c))
                    (DAT_0040f010,0x18,1,0x4003,local_3c,&stack0x00000008,local_34);
  uVar1 = __vbaObjSet(local_20,uVar1);
  uVar1 = __vbaLateIdCallLd(local_30,uVar1);
  __vbaI4Var(uVar1);
  __vbaFreeObj();
  __vbaFreeVar(uVar1);
  return;
}


// ---- FUN_0040aff0 @ 0040aff0

void __cdecl FUN_0040aff0(uint param_1)

{
  undefined4 uVar1;
  undefined4 local_3c;
  undefined4 local_34;
  undefined4 local_30 [4];
  undefined4 local_20 [2];
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_00401396;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffac;
  local_c = &DAT_00401280;
  local_8 = param_1 & 1;
  ExceptionList = &pvStack_18;
  (**(code **)(*(int *)(param_1 & 0xfffffffe) + 4))((int *)(param_1 & 0xfffffffe));
  local_20[0] = 0;
  local_30[0] = 0;
  if (DAT_0040f010 == (int *)0x0) {
    __vbaNew2(&DAT_00403280,&DAT_0040f010);
  }
  uVar1 = (**(code **)(*DAT_0040f010 + 0x30c))
                    (DAT_0040f010,0x18,1,0x4003,local_3c,&stack0x00000008,local_34);
  uVar1 = __vbaObjSet(local_20,uVar1);
  uVar1 = __vbaLateIdCallLd(local_30,uVar1);
  __vbaI4Var(uVar1);
  __vbaFreeObj();
  __vbaFreeVar(uVar1);
  return;
}


// ---- FUN_0040b0f0 @ 0040b0f0

void __cdecl FUN_0040b0f0(uint param_1)

{
  undefined4 uVar1;
  undefined4 local_3c;
  undefined4 local_34;
  undefined4 local_30 [4];
  undefined4 local_20 [2];
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_00401396;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffac;
  local_c = &DAT_00401290;
  local_8 = param_1 & 1;
  ExceptionList = &pvStack_18;
  (**(code **)(*(int *)(param_1 & 0xfffffffe) + 4))((int *)(param_1 & 0xfffffffe));
  local_20[0] = 0;
  local_30[0] = 0;
  if (DAT_0040f010 == (int *)0x0) {
    __vbaNew2(&DAT_00403280,&DAT_0040f010);
  }
  uVar1 = (**(code **)(*DAT_0040f010 + 0x30c))
                    (DAT_0040f010,0x18,1,0x4003,local_3c,&stack0x00000008,local_34);
  uVar1 = __vbaObjSet(local_20,uVar1);
  uVar1 = __vbaLateIdCallLd(local_30,uVar1);
  __vbaI4Var(uVar1);
  __vbaFreeObj();
  __vbaFreeVar(uVar1);
  return;
}


// ---- FUN_0040b1f0 @ 0040b1f0

void __cdecl FUN_0040b1f0(uint param_1)

{
  undefined4 uVar1;
  undefined4 local_3c;
  undefined4 local_34;
  undefined4 local_30 [4];
  undefined4 local_20 [2];
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_00401396;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffac;
  local_c = &DAT_004012a0;
  local_8 = param_1 & 1;
  ExceptionList = &pvStack_18;
  (**(code **)(*(int *)(param_1 & 0xfffffffe) + 4))((int *)(param_1 & 0xfffffffe));
  local_20[0] = 0;
  local_30[0] = 0;
  if (DAT_0040f010 == (int *)0x0) {
    __vbaNew2(&DAT_00403280,&DAT_0040f010);
  }
  uVar1 = (**(code **)(*DAT_0040f010 + 0x30c))
                    (DAT_0040f010,0x18,1,0x4003,local_3c,&stack0x00000008,local_34);
  uVar1 = __vbaObjSet(local_20,uVar1);
  uVar1 = __vbaLateIdCallLd(local_30,uVar1);
  __vbaI4Var(uVar1);
  __vbaFreeObj();
  __vbaFreeVar(uVar1);
  return;
}


// ---- FUN_0040b2f0 @ 0040b2f0

void __cdecl FUN_0040b2f0(uint param_1)

{
  undefined4 uVar1;
  undefined4 local_3c;
  undefined4 local_34;
  undefined4 local_30 [4];
  undefined4 local_20 [2];
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_00401396;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffac;
  local_c = &DAT_004012b0;
  local_8 = param_1 & 1;
  ExceptionList = &pvStack_18;
  (**(code **)(*(int *)(param_1 & 0xfffffffe) + 4))((int *)(param_1 & 0xfffffffe));
  local_20[0] = 0;
  local_30[0] = 0;
  if (DAT_0040f010 == (int *)0x0) {
    __vbaNew2(&DAT_00403280,&DAT_0040f010);
  }
  uVar1 = (**(code **)(*DAT_0040f010 + 0x30c))
                    (DAT_0040f010,0x18,1,0x4003,local_3c,&stack0x00000008,local_34);
  uVar1 = __vbaObjSet(local_20,uVar1);
  uVar1 = __vbaLateIdCallLd(local_30,uVar1);
  __vbaI4Var(uVar1);
  __vbaFreeObj();
  __vbaFreeVar(uVar1);
  return;
}


// ---- FUN_0040b3f0 @ 0040b3f0

void __cdecl FUN_0040b3f0(uint param_1)

{
  undefined4 uVar1;
  undefined4 local_3c;
  undefined4 local_34;
  undefined4 local_30 [4];
  undefined4 local_20 [2];
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_00401396;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffac;
  local_c = &DAT_004012c0;
  local_8 = param_1 & 1;
  ExceptionList = &pvStack_18;
  (**(code **)(*(int *)(param_1 & 0xfffffffe) + 4))((int *)(param_1 & 0xfffffffe));
  local_20[0] = 0;
  local_30[0] = 0;
  if (DAT_0040f010 == (int *)0x0) {
    __vbaNew2(&DAT_00403280,&DAT_0040f010);
  }
  uVar1 = (**(code **)(*DAT_0040f010 + 0x30c))
                    (DAT_0040f010,0x18,1,0x4003,local_3c,&stack0x00000008,local_34);
  uVar1 = __vbaObjSet(local_20,uVar1);
  uVar1 = __vbaLateIdCallLd(local_30,uVar1);
  __vbaI4Var(uVar1);
  __vbaFreeObj();
  __vbaFreeVar(uVar1);
  return;
}


// ---- FUN_0040b4f0 @ 0040b4f0

void __cdecl FUN_0040b4f0(uint param_1)

{
  undefined4 uVar1;
  undefined4 local_3c;
  undefined4 local_34;
  undefined4 local_30 [4];
  undefined4 local_20 [2];
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_00401396;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffac;
  local_c = &DAT_004012d0;
  local_8 = param_1 & 1;
  ExceptionList = &pvStack_18;
  (**(code **)(*(int *)(param_1 & 0xfffffffe) + 4))((int *)(param_1 & 0xfffffffe));
  local_20[0] = 0;
  local_30[0] = 0;
  if (DAT_0040f010 == (int *)0x0) {
    __vbaNew2(&DAT_00403280,&DAT_0040f010);
  }
  uVar1 = (**(code **)(*DAT_0040f010 + 0x30c))
                    (DAT_0040f010,0x18,1,0x4003,local_3c,&stack0x00000008,local_34);
  uVar1 = __vbaObjSet(local_20,uVar1);
  uVar1 = __vbaLateIdCallLd(local_30,uVar1);
  __vbaI4Var(uVar1);
  __vbaFreeObj();
  __vbaFreeVar(uVar1);
  return;
}


// ---- FUN_0040b5f0 @ 0040b5f0

void __cdecl FUN_0040b5f0(uint param_1)

{
  undefined4 uVar1;
  undefined4 local_3c;
  undefined4 local_34;
  undefined4 local_30 [4];
  undefined4 local_20 [2];
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_00401396;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffac;
  local_c = &DAT_004012e0;
  local_8 = param_1 & 1;
  ExceptionList = &pvStack_18;
  (**(code **)(*(int *)(param_1 & 0xfffffffe) + 4))((int *)(param_1 & 0xfffffffe));
  local_20[0] = 0;
  local_30[0] = 0;
  if (DAT_0040f010 == (int *)0x0) {
    __vbaNew2(&DAT_00403280,&DAT_0040f010);
  }
  uVar1 = (**(code **)(*DAT_0040f010 + 0x30c))
                    (DAT_0040f010,0x18,1,0x4003,local_3c,&stack0x00000008,local_34);
  uVar1 = __vbaObjSet(local_20,uVar1);
  uVar1 = __vbaLateIdCallLd(local_30,uVar1);
  __vbaI4Var(uVar1);
  __vbaFreeObj();
  __vbaFreeVar(uVar1);
  return;
}


// ---- FUN_0040b6f0 @ 0040b6f0

void __cdecl FUN_0040b6f0(uint param_1)

{
  undefined4 uVar1;
  undefined4 local_3c;
  undefined4 local_34;
  undefined4 local_30 [4];
  undefined4 local_20 [2];
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_00401396;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffac;
  local_c = &DAT_004012f0;
  local_8 = param_1 & 1;
  ExceptionList = &pvStack_18;
  (**(code **)(*(int *)(param_1 & 0xfffffffe) + 4))((int *)(param_1 & 0xfffffffe));
  local_20[0] = 0;
  local_30[0] = 0;
  if (DAT_0040f010 == (int *)0x0) {
    __vbaNew2(&DAT_00403280,&DAT_0040f010);
  }
  uVar1 = (**(code **)(*DAT_0040f010 + 0x30c))
                    (DAT_0040f010,0x18,1,0x4003,local_3c,&stack0x00000008,local_34);
  uVar1 = __vbaObjSet(local_20,uVar1);
  uVar1 = __vbaLateIdCallLd(local_30,uVar1);
  __vbaI4Var(uVar1);
  __vbaFreeObj();
  __vbaFreeVar(uVar1);
  return;
}


// ---- FUN_0040b7f0 @ 0040b7f0

void __cdecl FUN_0040b7f0(uint param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_00401396;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc4;
  local_c = &DAT_00401300;
  local_8 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar4 + 4))(piVar4);
  local_1c = 0;
  if (DAT_0040f4c8 == (int *)0x0) {
    __vbaNew2(&DAT_0040547c,&DAT_0040f4c8);
  }
  piVar1 = DAT_0040f4c8;
  iVar3 = *DAT_0040f4c8;
  uVar2 = __vbaObjSetAddref(&local_1c,piVar4);
  iVar3 = (**(code **)(iVar3 + 0x10))(piVar1,uVar2);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar1,&DAT_0040546c,0x10);
  }
  __vbaFreeObj();
  return;
}


// ---- FUN_0040b8c0 @ 0040b8c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_0040b8c0(uint param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  code *pcVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 local_100;
  undefined4 local_f8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  float *local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  wchar_t *local_bc;
  undefined4 local_b8;
  undefined4 local_b4 [2];
  undefined4 local_ac;
  undefined4 local_a4 [2];
  undefined4 local_9c;
  undefined4 local_94 [2];
  undefined4 local_8c;
  undefined4 local_84 [2];
  undefined4 local_7c;
  undefined4 local_74 [2];
  undefined4 local_6c;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  float *local_48;
  float local_44;
  undefined4 local_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  undefined4 local_30;
  wchar_t local_2c [2];
  float local_28;
  undefined4 local_24;
  int *local_20;
  float local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined1 *local_c;
  uint local_8;
  
  puStack_14 = &LAB_00401396;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xfffffebc;
  local_c = &LAB_00401320;
  local_8 = param_1 & 1;
  piVar1 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar1 + 4))(piVar1);
  local_bc = local_2c;
  local_20 = (int *)0x0;
  local_24 = 0;
  local_2c[0] = L'\0';
  local_2c[1] = L'\0';
  local_30 = 0;
  local_34 = 0;
  local_38 = 0.0;
  local_40 = 0;
  local_4c = 0;
  local_50 = 0;
  local_54 = 0;
  local_64 = 0;
  local_74[0] = 0;
  local_84[0] = 0;
  local_94[0] = 0;
  local_a4[0] = 0;
  local_b4[0] = 0;
  local_c4 = 0x4003;
  local_cc = (float *)0x4052c0;
  local_d4 = 8;
  if (DAT_0040f010 == (int *)0x0) {
    __vbaNew2(&DAT_00403280,&DAT_0040f010);
  }
  uVar2 = (**(code **)(*DAT_0040f010 + 0x30c))
                    (DAT_0040f010,9,2,local_d4,local_d0,local_cc,local_c8,local_c4,local_c0,local_bc
                     ,local_b8);
  uVar2 = __vbaObjSet(&local_54,uVar2);
  __vbaLateIdCall(uVar2);
  __vbaFreeObj();
  local_bc = local_2c;
  local_cc = &local_38;
  local_c4 = 0x4003;
  local_d4 = 0x4004;
  if (DAT_0040f010 == (int *)0x0) {
    __vbaNew2(&DAT_00403280,&DAT_0040f010);
  }
  uVar2 = (**(code **)(*DAT_0040f010 + 0x30c))
                    (DAT_0040f010,10,3,0x4008,local_e0,&local_40,local_d8,local_d4,local_d0,local_cc
                     ,local_c8,local_c4,local_c0,local_bc,local_b8);
  uVar2 = __vbaObjSet(&local_54,uVar2);
  __vbaLateIdCall(uVar2);
  __vbaFreeObj();
  pcVar5 = __vbaFreeVarList_exref;
  if (local_38 == _DAT_00401158) {
    rtcVarBstrFromAnsi(&local_64,10);
    puVar13 = local_b4;
    local_c4 = 8;
    local_d4 = 8;
    puVar12 = local_a4;
    puVar11 = local_94;
    uVar10 = 4;
    local_b4[0] = 10;
    local_a4[0] = 10;
    local_94[0] = 10;
    local_ac = 0x80020004;
    local_9c = 0x80020004;
    local_8c = 0x80020004;
    local_bc = 
    L"New Filament state is not set, if you subsequently set new filament you will need to re-enter Tip Data."
    ;
    local_cc = (float *)0x405a84;
    uVar2 = __vbaVarAdd(local_74,&local_64,&local_c4);
    uVar2 = __vbaVarAdd(local_84,&local_d4,uVar2);
    iVar3 = rtcMsgBox(uVar2,uVar10,puVar11,puVar12,puVar13);
    pcVar5 = __vbaFreeVarList_exref;
    __vbaFreeVarList(6,&local_64,local_74,local_84,local_94,local_a4,local_b4);
    if (iVar3 != 6) goto LAB_0040ca4d;
  }
  uVar2 = (**(code **)(*piVar1 + 0x340))(piVar1);
  piVar4 = (int *)__vbaObjSet(&local_54,uVar2);
  iVar3 = (**(code **)(*piVar4 + 0xa0))(piVar4,&local_4c);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar4,&DAT_00405ab8,0xa0);
  }
  local_5c = local_4c;
  local_4c = 0;
  local_64 = 8;
  rtcTrimVar(local_74,&local_64);
  __vbaStrVarMove(local_74);
  __vbaStrMove();
  __vbaFreeObj();
  (*pcVar5)(2,&local_64,local_74);
  iVar3 = __vbaLenBstr(local_30);
  if (iVar3 < 2) {
    local_bc = L"Engineer Name required";
  }
  else {
    uVar2 = (**(code **)(*piVar1 + 0x338))(piVar1);
    piVar4 = (int *)__vbaObjSet(&local_54,uVar2);
    iVar3 = (**(code **)(*piVar4 + 0xa0))(piVar4,&local_4c);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar4,&DAT_00405ab8,0xa0);
    }
    local_5c = local_4c;
    local_4c = 0;
    local_64 = 8;
    rtcTrimVar(local_74,&local_64);
    __vbaStrVarMove(local_74);
    __vbaStrMove();
    __vbaFreeObj();
    (*pcVar5)(2,&local_64,local_74);
    iVar3 = __vbaLenBstr(local_34);
    if (iVar3 < 2) {
      local_bc = L"Tip Type Required";
    }
    else {
      uVar2 = (**(code **)(*piVar1 + 0x330))(piVar1);
      piVar4 = (int *)__vbaObjSet(&local_54,uVar2);
      iVar3 = (**(code **)(*piVar4 + 0xa0))(piVar4,&local_4c);
      if (iVar3 < 0) {
        __vbaHresultCheckObj(iVar3,piVar4,&DAT_00405ab8,0xa0);
      }
      local_5c = local_4c;
      local_4c = 0;
      local_64 = 8;
      rtcTrimVar(local_74,&local_64);
      __vbaStrVarMove(local_74);
      __vbaStrMove();
      __vbaFreeObj();
      (*pcVar5)(2,&local_64,local_74);
      iVar3 = __vbaLenBstr(local_24);
      if (3 < iVar3) {
        uVar2 = (**(code **)(*piVar1 + 0x318))(piVar1);
        piVar4 = (int *)__vbaObjSet(&local_54,uVar2);
        iVar3 = (**(code **)(*piVar4 + 0xa0))(piVar4,&local_4c);
        if (iVar3 < 0) {
          __vbaHresultCheckObj(iVar3,piVar4,&DAT_00405ab8,0xa0);
        }
        fVar6 = (float10)rtcR8ValFromBstr(local_4c);
        local_44 = (float)fVar6;
        __vbaFreeStr();
        __vbaFreeObj();
        fVar7 = (float10)__vbaFpR4();
        fVar6 = (float10)local_44;
        fVar8 = (float10)__vbaFpR4();
        if (fVar7 <= fVar6 && (float10)local_44 <= fVar8) {
          uVar2 = (**(code **)(*piVar1 + 0x310))(piVar1);
          piVar4 = (int *)__vbaObjSet(&local_54,uVar2);
          iVar3 = (**(code **)(*piVar4 + 0xa0))(piVar4,&local_4c);
          if (iVar3 < 0) {
            __vbaHresultCheckObj(iVar3,piVar4,&DAT_00405ab8,0xa0);
          }
          fVar6 = (float10)rtcR8ValFromBstr(local_4c);
          local_28 = (float)fVar6;
          __vbaFreeStr();
          __vbaFreeObj();
          if (local_28 <= _DAT_00401310 && local_28 != _DAT_00401158) {
            uVar2 = (**(code **)(*piVar1 + 800))(piVar1);
            piVar4 = (int *)__vbaObjSet(&local_54,uVar2);
            iVar3 = (**(code **)(*piVar4 + 0xa0))(piVar4,&local_4c);
            if (iVar3 < 0) {
              __vbaHresultCheckObj(iVar3,piVar4,&DAT_00405ab8,0xa0);
            }
            fVar6 = (float10)rtcR8ValFromBstr(local_4c);
            local_3c = (float)fVar6;
            __vbaFreeStr();
            __vbaFreeObj();
            if (local_3c == _DAT_00401158) {
              local_bc = L"Must define Length";
            }
            else {
              uVar2 = (**(code **)(*piVar1 + 0x328))(piVar1);
              piVar4 = (int *)__vbaObjSet(&local_54,uVar2);
              iVar3 = (**(code **)(*piVar4 + 0xa0))(piVar4,&local_4c);
              if (iVar3 < 0) {
                __vbaHresultCheckObj(iVar3,piVar4,&DAT_00405ab8,0xa0);
              }
              fVar6 = (float10)rtcR8ValFromBstr(local_4c);
              local_1c = (float)fVar6;
              __vbaFreeStr();
              __vbaFreeObj();
              if (local_1c != _DAT_00401158) {
                uVar2 = (**(code **)(*piVar1 + 0x308))(piVar1);
                piVar4 = (int *)__vbaObjSet(&local_54,uVar2);
                iVar3 = (**(code **)(*piVar4 + 0xa0))(piVar4,&local_4c);
                if (iVar3 < 0) {
                  __vbaHresultCheckObj(iVar3,piVar4,&DAT_00405ab8,0xa0);
                }
                fVar6 = (float10)rtcR8ValFromBstr(local_4c);
                local_48 = (float *)(float)fVar6;
                __vbaFreeStr();
                __vbaFreeObj();
                if ((float)local_48 == _DAT_00401158) {
                  local_8c = 0x80020004;
                  local_94[0] = 10;
                  local_7c = 0x80020004;
                  local_84[0] = 10;
                  local_6c = 0x80020004;
                  local_74[0] = 10;
                  local_bc = L"Must define Total Current";
                  local_c4 = 8;
                  __vbaVarDup();
                  rtcMsgBox(&local_64,0,local_74,local_84,local_94);
                  (*pcVar5)(4,&local_64,local_74,local_84,local_94);
                }
                else {
                  local_bc = (wchar_t *)0x80020004;
                  local_cc = (float *)0x80020004;
                  local_d4 = 10;
                  local_c4 = 10;
                  iVar3 = (**(code **)(*DAT_0040f044 + 0xbc))
                                    (DAT_0040f044,L"TIPS",10,local_c0,0x80020004,local_b8,10,
                                     local_d0,0x80020004,local_c8,10,local_e0,0x80020004,local_d8,
                                     &local_54);
                  if (iVar3 < 0) {
                    __vbaHresultCheckObj(iVar3,DAT_0040f044,&DAT_0040544c,0xbc);
                  }
                  uVar2 = local_54;
                  local_54 = 0;
                  __vbaObjSet(&local_20,uVar2);
                  iVar3 = (**(code **)(*local_20 + 0xc0))(local_20);
                  if (iVar3 < 0) {
                    __vbaHresultCheckObj(iVar3,local_20,&DAT_004055c4,0xc0);
                  }
                  rtcGetPresentDate(&local_64);
                  local_c4 = 8;
                  local_bc = L"Date";
                  piVar4 = local_20;
                  iVar3 = (**(code **)(*local_20 + 0x128))
                                    (local_20,8,local_c0,L"Date",local_b8,local_64,local_60,local_5c
                                     ,local_58);
                  if (iVar3 < 0) {
                    __vbaHresultCheckObj(iVar3,local_20,&DAT_004055c4,0x128);
                  }
                  __vbaFreeVar(piVar4);
                  local_d4 = 8;
                  local_cc = (float *)local_30;
                  local_bc = L"Engineer";
                  local_c4 = 8;
                  iVar3 = (**(code **)(*local_20 + 0x128))
                                    (local_20,8,local_c0,L"Engineer",local_b8,8,local_d0,local_30,
                                     local_c8);
                  if (iVar3 < 0) {
                    __vbaHresultCheckObj(iVar3,local_20,&DAT_004055c4,0x128);
                  }
                  local_d4 = 8;
                  local_cc = (float *)local_34;
                  local_bc = L"TipType";
                  local_c4 = 8;
                  iVar3 = (**(code **)(*local_20 + 0x128))
                                    (local_20,8,local_c0,L"TipType",local_b8,8,local_d0,local_34,
                                     local_c8);
                  if (iVar3 < 0) {
                    __vbaHresultCheckObj(iVar3,local_20,&DAT_004055c4,0x128);
                  }
                  local_d4 = 8;
                  local_cc = (float *)local_24;
                  local_bc = L"serialnumber";
                  local_c4 = 8;
                  iVar3 = (**(code **)(*local_20 + 0x128))
                                    (local_20,8,local_c0,L"serialnumber",local_b8,8,local_d0,
                                     local_24,local_c8);
                  if (iVar3 < 0) {
                    __vbaHresultCheckObj(iVar3,local_20,&DAT_004055c4,0x128);
                  }
                  local_d4 = 4;
                  local_cc = (float *)local_44;
                  local_bc = L"FilamentCurrent";
                  local_c4 = 8;
                  iVar3 = (**(code **)(*local_20 + 0x128))
                                    (local_20,8,local_c0,L"FilamentCurrent",local_b8,4,local_d0,
                                     local_44,local_c8);
                  if (iVar3 < 0) {
                    __vbaHresultCheckObj(iVar3,local_20,&DAT_004055c4,0x128);
                  }
                  local_d4 = 4;
                  local_cc = (float *)local_1c;
                  local_bc = L"Radius";
                  local_c4 = 8;
                  iVar3 = (**(code **)(*local_20 + 0x128))
                                    (local_20,8,local_c0,L"Radius",local_b8,4,local_d0,local_1c,
                                     local_c8);
                  if (iVar3 < 0) {
                    __vbaHresultCheckObj(iVar3,local_20,&DAT_004055c4,0x128);
                  }
                  local_d4 = 4;
                  local_cc = (float *)local_3c;
                  local_bc = L"Length";
                  local_c4 = 8;
                  iVar3 = (**(code **)(*local_20 + 0x128))
                                    (local_20,8,local_c0,L"Length",local_b8,4,local_d0,local_3c,
                                     local_c8);
                  if (iVar3 < 0) {
                    __vbaHresultCheckObj(iVar3,local_20,&DAT_004055c4,0x128);
                  }
                  local_d4 = 4;
                  local_cc = (float *)local_28;
                  local_bc = L"ExtractorVoltage";
                  local_c4 = 8;
                  iVar3 = (**(code **)(*local_20 + 0x128))
                                    (local_20,8,local_c0,L"ExtractorVoltage",local_b8,4,local_d0,
                                     local_28,local_c8);
                  if (iVar3 < 0) {
                    __vbaHresultCheckObj(iVar3,local_20,&DAT_004055c4,0x128);
                  }
                  local_d4 = 4;
                  local_cc = local_48;
                  local_bc = L"TotalCurrent";
                  local_c4 = 8;
                  iVar3 = (**(code **)(*local_20 + 0x128))
                                    (local_20,8,local_c0,L"TotalCurrent",local_b8,4,local_d0,
                                     local_48,local_c8);
                  if (iVar3 < 0) {
                    __vbaHresultCheckObj(iVar3,local_20,&DAT_004055c4,0x128);
                  }
                  uVar10 = 0;
                  uVar2 = 1;
                  piVar4 = local_20;
                  iVar3 = (**(code **)(*local_20 + 0x164))(local_20,1,0);
                  if (iVar3 < 0) {
                    __vbaHresultCheckObj(iVar3,local_20,&DAT_004055c4,0x164);
                  }
                  piVar9 = local_20;
                  iVar3 = (**(code **)(*local_20 + 0xc4))(local_20);
                  if (iVar3 < 0) {
                    __vbaHresultCheckObj(iVar3,local_20,&DAT_004055c4,0xc4);
                  }
                  __vbaStrCopy(piVar9,piVar4);
                  __vbaStrCopy(uVar2,uVar10);
                  FUN_00408650(&local_4c,&local_50);
                  __vbaFreeStrList(2,&local_4c,&local_50);
                  local_bc = (wchar_t *)0x3fccc;
                  local_c4 = 3;
                  if (DAT_0040f010 == (int *)0x0) {
                    __vbaNew2(&DAT_00403280,&DAT_0040f010);
                  }
                  uVar2 = (**(code **)(*DAT_0040f010 + 0x30c))
                                    (DAT_0040f010,0x38,3,2,local_100,0,local_f8,2,local_e0,0x11,
                                     local_d8,local_c4,local_c0,local_bc,local_b8);
                  uVar2 = __vbaObjSet(&local_54,uVar2);
                  __vbaLateIdCall(uVar2);
                  __vbaFreeObj();
                  if (DAT_0040f4c8 == (int *)0x0) {
                    __vbaNew2(&DAT_0040547c,&DAT_0040f4c8);
                  }
                  piVar4 = DAT_0040f4c8;
                  iVar3 = *DAT_0040f4c8;
                  uVar2 = __vbaObjSetAddref(&local_54,piVar1);
                  iVar3 = (**(code **)(iVar3 + 0x10))(piVar4,uVar2);
                  if (iVar3 < 0) {
                    __vbaHresultCheckObj(iVar3,piVar4,&DAT_0040546c,0x10);
                  }
                  __vbaFreeObj();
                }
                goto LAB_0040ca4d;
              }
              local_bc = L"Must define Radius";
            }
          }
          else {
            local_bc = L"Invalid Extractor Voltage";
          }
        }
        else {
          local_bc = L"Invalid Filament Current";
        }
        local_6c = 0x80020004;
        local_74[0] = 10;
        local_7c = 0x80020004;
        local_84[0] = 10;
        local_8c = 0x80020004;
        local_94[0] = 10;
        local_c4 = 8;
        __vbaVarDup();
        rtcMsgBox(&local_64,0,local_74,local_84,local_94);
        (*pcVar5)(4,&local_64,local_74,local_84,local_94);
        goto LAB_0040ca4d;
      }
      local_bc = L"Tip Serial Number Required";
    }
  }
  local_6c = 0x80020004;
  local_74[0] = 10;
  local_7c = 0x80020004;
  local_84[0] = 10;
  local_8c = 0x80020004;
  local_94[0] = 10;
  local_c4 = 8;
  __vbaVarDup();
  rtcMsgBox(&local_64,0,local_74,local_84,local_94);
  (*pcVar5)(4,&local_64,local_74,local_84,local_94);
LAB_0040ca4d:
  local_8 = 0;
  __vbaFreeObj(&LAB_0040cac9);
  __vbaFreeStr();
  __vbaFreeStr();
  __vbaFreeStr();
  __vbaFreeStr();
  return;
}


// ---- FUN_0040caf0 @ 0040caf0

void __cdecl FUN_0040caf0(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  wchar_t *local_68;
  undefined4 local_60 [2];
  wchar_t *local_58;
  undefined4 local_50 [4];
  undefined4 local_40 [4];
  undefined4 local_30 [4];
  undefined4 local_20;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_00401396;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff54;
  local_c = &DAT_00401330;
  local_8 = param_1 & 1;
  piVar5 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar5 + 4))(piVar5);
  local_1c = 0;
  local_20 = 0;
  local_30[0] = 0;
  local_40[0] = 0;
  local_50[0] = 0;
  local_60[0] = 0;
  local_70 = 0;
  local_74 = 0;
  local_78 = 0;
  iVar1 = (**(code **)(*piVar5 + 0x58))(piVar5,&local_74);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar5,&DAT_00404f20,0x58);
  }
  local_78 = local_74;
  FUN_004097b0(&local_78);
  if ((short)piVar5[0xd] == 0) {
    rtcGetPresentDate(local_30);
    uVar2 = (**(code **)(*piVar5 + 0x344))(piVar5);
    piVar5 = (int *)__vbaObjSet(&local_20,uVar2);
    local_58 = L"Medium Date";
    local_60[0] = 8;
    __vbaVarDup();
    rtcVarFromFormatVar(local_50,local_30,local_40,1,1);
    iVar1 = *piVar5;
    uVar2 = __vbaStrVarVal(&local_1c,local_50);
    iVar1 = (**(code **)(iVar1 + 0xa4))(piVar5,uVar2);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piVar5,&DAT_00405ab8,0xa4);
    }
    __vbaFreeStr();
    __vbaFreeObj();
    __vbaFreeVarList(3,local_30,local_40,local_50);
  }
  else {
    uVar2 = (**(code **)(*piVar5 + 0x340))(piVar5);
    piVar3 = (int *)__vbaObjSet(&local_20,uVar2);
    iVar1 = (**(code **)(*piVar3 + 0x8c))(piVar3,0);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piVar3,&DAT_00405ab8,0x8c);
    }
    __vbaFreeObj();
    uVar2 = (**(code **)(*piVar5 + 0x310))(piVar5);
    piVar3 = (int *)__vbaObjSet(&local_20,uVar2);
    iVar1 = (**(code **)(*piVar3 + 0x8c))(piVar3,0);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piVar3,&DAT_00405ab8,0x8c);
    }
    __vbaFreeObj();
    uVar2 = (**(code **)(*piVar5 + 0x318))(piVar5);
    piVar3 = (int *)__vbaObjSet(&local_20,uVar2);
    iVar1 = (**(code **)(*piVar3 + 0x8c))(piVar3,0);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piVar3,&DAT_00405ab8,0x8c);
    }
    __vbaFreeObj();
    uVar2 = (**(code **)(*piVar5 + 800))(piVar5);
    piVar3 = (int *)__vbaObjSet(&local_20,uVar2);
    iVar1 = (**(code **)(*piVar3 + 0x8c))(piVar3,0);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piVar3,&DAT_00405ab8,0x8c);
    }
    __vbaFreeObj();
    uVar2 = (**(code **)(*piVar5 + 0x328))(piVar5);
    piVar3 = (int *)__vbaObjSet(&local_20,uVar2);
    iVar1 = (**(code **)(*piVar3 + 0x8c))(piVar3,0);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piVar3,&DAT_00405ab8,0x8c);
    }
    __vbaFreeObj();
    uVar2 = (**(code **)(*piVar5 + 0x330))(piVar5);
    piVar3 = (int *)__vbaObjSet(&local_20,uVar2);
    iVar1 = (**(code **)(*piVar3 + 0x8c))(piVar3,0);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piVar3,&DAT_00405ab8,0x8c);
    }
    __vbaFreeObj();
    uVar2 = (**(code **)(*piVar5 + 0x308))(piVar5);
    piVar3 = (int *)__vbaObjSet(&local_20,uVar2);
    iVar1 = (**(code **)(*piVar3 + 0x8c))(piVar3,0);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piVar3,&DAT_00405ab8,0x8c);
    }
    __vbaFreeObj();
    uVar2 = (**(code **)(*piVar5 + 0x338))(piVar5);
    piVar3 = (int *)__vbaObjSet(&local_20,uVar2);
    iVar1 = (**(code **)(*piVar3 + 0x8c))(piVar3,0);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piVar3,&DAT_00405ab8,0x8c);
    }
    __vbaFreeObj();
    uVar2 = (**(code **)(*piVar5 + 0x2fc))(piVar5);
    piVar3 = (int *)__vbaObjSet(&local_20,uVar2);
    iVar1 = (**(code **)(*piVar3 + 0x8c))(piVar3,0);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piVar3,&DAT_00405c80,0x8c);
    }
    __vbaFreeObj();
    uVar2 = (**(code **)(*piVar5 + 0x344))(piVar5);
    piVar3 = (int *)__vbaObjSet(&local_20,uVar2);
    local_68 = L"medium Date";
    local_70 = 8;
    __vbaVarDup();
    local_58 = (wchar_t *)&DAT_0040f050;
    local_60[0] = 0x4007;
    rtcVarFromFormatVar(local_40,local_60,local_30,1,1);
    iVar1 = *piVar3;
    uVar2 = __vbaStrVarVal(&local_1c,local_40);
    iVar1 = (**(code **)(iVar1 + 0xa4))(piVar3,uVar2);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piVar3,&DAT_00405ab8,0xa4);
    }
    __vbaFreeStr();
    __vbaFreeObj();
    __vbaFreeVarList(2,local_30,local_40);
    uVar2 = (**(code **)(*piVar5 + 0x340))(piVar5);
    piVar3 = (int *)__vbaObjSet(&local_20,uVar2);
    iVar1 = (**(code **)(*piVar3 + 0xa4))(piVar3,DAT_0040f058);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piVar3,&DAT_00405ab8,0xa4);
    }
    __vbaFreeObj();
    uVar2 = (**(code **)(*piVar5 + 0x310))(piVar5);
    piVar4 = (int *)__vbaObjSet(&local_20,uVar2);
    local_58 = (wchar_t *)&DAT_0040f070;
    local_60[0] = 0x4004;
    rtcVarStrFromVar(local_30,local_60);
    iVar1 = *piVar4;
    uVar2 = __vbaStrVarVal(&local_1c,local_30);
    piVar3 = piVar4;
    iVar1 = (**(code **)(iVar1 + 0xa4))(piVar4,uVar2);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piVar4,&DAT_00405ab8,0xa4);
    }
    __vbaFreeStr();
    __vbaFreeObj();
    __vbaFreeVar(piVar3);
    uVar2 = (**(code **)(*piVar5 + 0x318))(piVar5);
    piVar4 = (int *)__vbaObjSet(&local_20,uVar2);
    local_58 = (wchar_t *)&DAT_0040f064;
    local_60[0] = 0x4004;
    rtcVarStrFromVar(local_30,local_60);
    iVar1 = *piVar4;
    uVar2 = __vbaStrVarVal(&local_1c,local_30);
    piVar3 = piVar4;
    iVar1 = (**(code **)(iVar1 + 0xa4))(piVar4,uVar2);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piVar4,&DAT_00405ab8,0xa4);
    }
    __vbaFreeStr();
    __vbaFreeObj();
    __vbaFreeVar(piVar3);
    uVar2 = (**(code **)(*piVar5 + 800))(piVar5);
    piVar4 = (int *)__vbaObjSet(&local_20,uVar2);
    local_58 = (wchar_t *)&DAT_0040f06c;
    local_60[0] = 0x4004;
    rtcVarStrFromVar(local_30,local_60);
    iVar1 = *piVar4;
    uVar2 = __vbaStrVarVal(&local_1c,local_30);
    piVar3 = piVar4;
    iVar1 = (**(code **)(iVar1 + 0xa4))(piVar4,uVar2);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piVar4,&DAT_00405ab8,0xa4);
    }
    __vbaFreeStr();
    __vbaFreeObj();
    __vbaFreeVar(piVar3);
    uVar2 = (**(code **)(*piVar5 + 0x328))(piVar5);
    piVar4 = (int *)__vbaObjSet(&local_20,uVar2);
    local_58 = (wchar_t *)&DAT_0040f068;
    local_60[0] = 0x4004;
    rtcVarStrFromVar(local_30,local_60);
    iVar1 = *piVar4;
    uVar2 = __vbaStrVarVal(&local_1c,local_30);
    piVar3 = piVar4;
    iVar1 = (**(code **)(iVar1 + 0xa4))(piVar4,uVar2);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piVar4,&DAT_00405ab8,0xa4);
    }
    __vbaFreeStr();
    __vbaFreeObj();
    __vbaFreeVar(piVar3);
    uVar2 = (**(code **)(*piVar5 + 0x330))(piVar5);
    piVar3 = (int *)__vbaObjSet(&local_20,uVar2);
    iVar1 = (**(code **)(*piVar3 + 0xa4))(piVar3,DAT_0040f060);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piVar3,&DAT_00405ab8,0xa4);
    }
    __vbaFreeObj();
    uVar2 = (**(code **)(*piVar5 + 0x308))(piVar5);
    piVar4 = (int *)__vbaObjSet(&local_20,uVar2);
    local_58 = (wchar_t *)&DAT_0040f074;
    local_60[0] = 0x4004;
    rtcVarStrFromVar(local_30,local_60);
    iVar1 = *piVar4;
    uVar2 = __vbaStrVarVal(&local_1c,local_30);
    piVar3 = piVar4;
    iVar1 = (**(code **)(iVar1 + 0xa4))(piVar4,uVar2);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piVar4,&DAT_00405ab8,0xa4);
    }
    __vbaFreeStr();
    __vbaFreeObj();
    __vbaFreeVar(piVar3);
    uVar2 = (**(code **)(*piVar5 + 0x338))(piVar5);
    piVar5 = (int *)__vbaObjSet(&local_20,uVar2);
    iVar1 = (**(code **)(*piVar5 + 0xa4))(piVar5,DAT_0040f05c);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piVar5,&DAT_00405ab8,0xa4);
    }
    __vbaFreeObj();
  }
  return;
}


// ---- FUN_0040d2d0 @ 0040d2d0

void __cdecl FUN_0040d2d0(uint param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_00401396;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc4;
  local_c = &DAT_00401340;
  local_8 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar4 + 4))(piVar4);
  local_1c = 0;
  if (DAT_0040f4c8 == (int *)0x0) {
    __vbaNew2(&DAT_0040547c,&DAT_0040f4c8);
  }
  piVar1 = DAT_0040f4c8;
  iVar3 = *DAT_0040f4c8;
  uVar2 = __vbaObjSetAddref(&local_1c,piVar4);
  iVar3 = (**(code **)(iVar3 + 0x10))(piVar1,uVar2);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar1,&DAT_0040546c,0x10);
  }
  __vbaFreeObj();
  return;
}


// ---- FUN_0040d3a0 @ 0040d3a0

void __cdecl FUN_0040d3a0(uint param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 local_40 [2];
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_00401396;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffa0;
  local_c = &DAT_00401350;
  local_8 = param_1 & 1;
  piVar5 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar5 + 4))(piVar5);
  local_1c = 0;
  local_40[0] = 0;
  if (DAT_0040f084 == (int *)0x0) {
    __vbaNew2(&DAT_00403b64,&DAT_0040f084);
  }
  piVar1 = DAT_0040f084;
  iVar2 = (**(code **)(*DAT_0040f084 + 0x6fc))(DAT_0040f084,0xffffffff);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_00404f50,0x6fc);
  }
  uVar3 = (**(code **)(*piVar5 + 0x304))(piVar5);
  piVar5 = (int *)__vbaObjSet(&local_1c,uVar3);
  iVar2 = (**(code **)(*piVar5 + 0xe0))(piVar5,local_40);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar5,&DAT_00405d00,0xe0);
  }
  if ((DAT_0040f048 == (short *)0x0) || (*DAT_0040f048 != 1)) {
    iVar2 = __vbaGenerateBoundsError();
  }
  else {
    iVar4 = (int)(short)local_40[0];
    iVar2 = *(int *)(DAT_0040f048 + 10);
    if (*(uint *)(DAT_0040f048 + 8) <= (uint)(iVar4 - iVar2)) {
      __vbaGenerateBoundsError();
    }
    iVar2 = (iVar4 - iVar2) * 0x28;
  }
  __vbaRecAssign(&DAT_00404e64,&DAT_0040f050,*(int *)(DAT_0040f048 + 6) + iVar2);
  __vbaFreeObj();
  if (DAT_0040f084 == (int *)0x0) {
    __vbaNew2(&DAT_00403b64,&DAT_0040f084);
  }
  piVar5 = DAT_0040f084;
  iVar2 = (**(code **)(*DAT_0040f084 + 0x2b0))
                    (DAT_0040f084,2,local_28,1,local_20,10,local_38,0x80020004,local_30);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar5,&DAT_00404f20,0x2b0);
  }
  return;
}


// ---- FUN_0040d580 @ 0040d580

void __cdecl FUN_0040d580(uint param_1)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 uVar7;
  short sVar8;
  int *piVar9;
  code *pcVar10;
  uint uVar11;
  int iVar12;
  code *pcStack_178;
  int *piStack_174;
  int *piStack_170;
  undefined4 *puStack_16c;
  int *piStack_168;
  undefined4 *puStack_164;
  undefined4 uStack_160;
  undefined4 *puStack_15c;
  undefined4 *puStack_158;
  undefined4 *puStack_154;
  short **ppsStack_150;
  undefined4 local_ec;
  undefined4 local_e8;
  short local_e4 [4];
  undefined4 *local_dc;
  int local_d4;
  undefined4 local_d0 [2];
  undefined4 local_c8;
  undefined4 local_c0 [2];
  undefined *local_b8;
  undefined4 local_b0;
  wchar_t *local_a8;
  undefined4 local_a0 [2];
  int local_98;
  undefined4 local_90 [4];
  undefined4 local_80 [4];
  int local_70 [2];
  undefined4 local_68;
  undefined4 local_60 [4];
  undefined4 local_50 [4];
  undefined4 local_40 [4];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  short *local_24;
  short *local_20;
  uint local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_00401396;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xfffffedc;
  local_c = &DAT_00401360;
  local_8 = param_1 & 1;
  piVar9 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar9 + 4))();
  pcVar10 = (code *)0x0;
  local_20 = (short *)0x0;
  local_24 = (short *)0x0;
  local_28 = 0;
  local_2c = 0;
  local_30 = 0;
  local_40[0] = 0;
  local_50[0] = 0;
  local_60[0] = 0;
  local_70[0] = 0;
  local_80[0] = 0;
  local_90[0] = 0;
  local_a0[0] = 0;
  local_b0 = 0;
  local_c0[0] = 0;
  local_d0[0] = 0;
  local_e4[2] = 0;
  local_e4[3] = 0;
  local_e4[0] = 0;
  local_e4[1] = 0;
  local_e8 = 0;
  local_ec = 0;
  iVar2 = (**(code **)(*piVar9 + 0x58))();
  if (iVar2 < 0) {
    __vbaHresultCheckObj();
  }
  local_ec = local_e8;
  FUN_004097b0(&local_ec);
  (**(code **)(*piVar9 + 0x300))();
  piVar3 = (int *)__vbaObjSet();
  iVar2 = (**(code **)(*piVar3 + 0x8c))();
  if (iVar2 < 0) {
    ppsStack_150 = (short **)0x40d68b;
    __vbaHresultCheckObj();
  }
  __vbaFreeObj();
  (**(code **)(*piVar9 + 0x304))();
  piVar4 = (int *)__vbaObjSet();
  puVar5 = (undefined4 *)(**(code **)(*piVar4 + 0x1e8))();
  if ((int)puVar5 < 0) {
    puStack_158 = (undefined4 *)0x40d6cb;
    puStack_154 = puVar5;
    ppsStack_150 = (short **)piVar4;
    __vbaHresultCheckObj();
  }
  __vbaFreeObj();
  sVar1 = DAT_0040f04c + -1;
  if (!SBORROW2(DAT_0040f04c,1)) {
    local_1c = 0;
    uVar11 = local_1c;
    do {
      local_1c = uVar11;
      sVar8 = (short)local_1c;
      if (sVar1 < sVar8) {
        return;
      }
      local_a8 = L"Medium Date";
      local_b0 = 8;
      __vbaVarDup();
      ppsStack_150 = (short **)0x40d72b;
      __vbaAryLock();
      if ((local_20 == (short *)0x0) || (*local_20 != 1)) {
        local_98 = __vbaGenerateBoundsError();
      }
      else {
        uVar11 = (int)sVar8 - *(int *)(local_20 + 10);
        if (*(uint *)(local_20 + 8) <= uVar11) {
          __vbaGenerateBoundsError();
        }
        local_98 = uVar11 * 0x28;
      }
      local_98 = *(int *)(local_20 + 6) + local_98;
      ppsStack_150 = (short **)local_40;
      puStack_154 = local_a0;
      puStack_158 = local_50;
      local_a0[0] = 0x4007;
      puStack_15c = (undefined4 *)0x40d791;
      rtcVarFromFormatVar();
      __vbaAryUnlock();
      local_e4[0] = 0xc;
      local_e4[1] = 0;
      ppsStack_150 = (short **)0x40d7b8;
      __vbaAryLock();
      if ((local_24 == (short *)0x0) || (*local_24 != 1)) {
        iVar2 = __vbaGenerateBoundsError();
      }
      else {
        iVar12 = (int)(short)local_1c;
        iVar2 = *(int *)(local_24 + 10);
        if (*(uint *)(local_24 + 8) <= (uint)(iVar12 - iVar2)) {
          __vbaGenerateBoundsError();
        }
        iVar2 = (iVar12 - iVar2) * 0x28;
      }
      ppsStack_150 = (short **)0x40d803;
      FUN_00408980((undefined4 *)(*(int *)(local_24 + 6) + 0xc + iVar2),local_e4);
      ppsStack_150 = (short **)0x40d80e;
      __vbaStrMove();
      ppsStack_150 = &local_24;
      puStack_154 = (undefined4 *)0x40d814;
      __vbaAryUnlock();
      puStack_154 = (undefined4 *)0x40d81d;
      ppsStack_150 = (short **)piVar9;
      puStack_154 = (undefined4 *)(**(code **)(*piVar9 + 0x304))();
      puStack_158 = &local_30;
      puStack_15c = (undefined4 *)0x40d828;
      piVar6 = (int *)__vbaObjSet();
      local_68 = local_28;
      local_c0[0] = 8;
      local_70[0] = 8;
      piVar4 = (int *)0xa;
      local_b8 = &DAT_00405ccc;
      local_28 = 0;
      if ((DAT_0040f048 == (short *)0x0) || (*DAT_0040f048 != 1)) {
        puStack_154 = (undefined4 *)0x40d89f;
        iVar2 = __vbaGenerateBoundsError();
      }
      else {
        iVar12 = (int)(short)local_1c;
        iVar2 = *(int *)(DAT_0040f048 + 10);
        if (*(uint *)(DAT_0040f048 + 8) <= (uint)(iVar12 - iVar2)) {
          puStack_154 = (undefined4 *)0x40d885;
          __vbaGenerateBoundsError();
        }
        iVar2 = (iVar12 - iVar2) * 0x28;
      }
      pcVar10 = __vbaVarAdd_exref;
      local_c8 = *(undefined4 *)(*(int *)(DAT_0040f048 + 6) + 0x10 + iVar2);
      local_d0[0] = 8;
      iVar2 = *piVar6;
      uStack_160 = 10;
      puStack_15c = local_dc;
      puStack_158 = (undefined4 *)0x80020004;
      puStack_154 = (undefined4 *)local_d4;
      puStack_164 = local_50;
      piStack_168 = local_c0;
      puStack_16c = local_60;
      piStack_170 = (int *)0x40d8f7;
      puStack_164 = (undefined4 *)__vbaVarAdd();
      piStack_168 = local_70;
      puStack_16c = local_80;
      piStack_170 = (int *)0x40d902;
      puStack_164 = (undefined4 *)__vbaVarAdd();
      piStack_168 = local_d0;
      puStack_16c = local_90;
      piStack_170 = (int *)0x40d913;
      puStack_164 = (undefined4 *)__vbaVarAdd();
      piStack_168 = &local_2c;
      puStack_16c = (undefined4 *)0x40d91e;
      puStack_164 = (undefined4 *)__vbaStrVarVal();
      puStack_16c = (undefined4 *)0x40d92c;
      piStack_168 = piVar6;
      iVar2 = (**(code **)(iVar2 + 0x1ec))();
      if (iVar2 < 0) {
        puStack_158 = (undefined4 *)0x40d944;
        puStack_154 = (undefined4 *)iVar2;
        ppsStack_150 = (short **)piVar6;
        __vbaHresultCheckObj();
      }
      __vbaFreeStr();
      __vbaFreeObj();
      ppsStack_150 = (short **)local_70;
      puStack_154 = local_60;
      puStack_158 = local_50;
      puStack_15c = local_40;
      uStack_160 = 6;
      puStack_164 = (undefined4 *)0x40d979;
      __vbaFreeVarList();
      uVar11 = (uint)(ushort)((short)local_1c + 1);
    } while (!SCARRY2((short)local_1c,1));
  }
  __vbaErrorOverflow();
  puStack_154 = (undefined4 *)&LAB_00401396;
  puStack_158 = ExceptionList;
  ppsStack_150 = (short **)&pcStack_178;
  piVar3 = (int *)((uint)piVar3 & 0xfffffffe);
  ExceptionList = &puStack_158;
  pcStack_178 = pcVar10;
  piStack_174 = piVar9;
  piStack_170 = piVar4;
  (**(code **)(*piVar3 + 4))(piVar3);
  puStack_15c = (undefined4 *)0x0;
  uVar7 = (**(code **)(*piVar3 + 0x300))(piVar3);
  piVar9 = (int *)__vbaObjSet(&puStack_15c,uVar7);
  iVar2 = (**(code **)(*piVar9 + 0x8c))(piVar9,0xffffffff);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar9,&DAT_00405c80,0x8c);
  }
  __vbaFreeObj();
  return;
}


// ---- FUN_0040da30 @ 0040da30

void __cdecl FUN_0040da30(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_00401396;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc8;
  local_c = &DAT_00401370;
  local_8 = param_1 & 1;
  piVar3 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar3 + 4))(piVar3);
  local_1c = 0;
  uVar1 = (**(code **)(*piVar3 + 0x300))(piVar3);
  piVar3 = (int *)__vbaObjSet(&local_1c,uVar1);
  iVar2 = (**(code **)(*piVar3 + 0x8c))(piVar3,0xffffffff);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar3,&DAT_00405c80,0x8c);
  }
  __vbaFreeObj();
  return;
}


// ---- FUN_0040daf0 @ 0040daf0

void __cdecl FUN_0040daf0(uint param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 local_40 [2];
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_00401396;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffa0;
  local_c = &DAT_00401380;
  local_8 = param_1 & 1;
  piVar5 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar5 + 4))(piVar5);
  local_1c = 0;
  local_40[0] = 0;
  if (DAT_0040f084 == (int *)0x0) {
    __vbaNew2(&DAT_00403b64,&DAT_0040f084);
  }
  piVar1 = DAT_0040f084;
  iVar2 = (**(code **)(*DAT_0040f084 + 0x6fc))(DAT_0040f084,0xffffffff);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_00404f50,0x6fc);
  }
  uVar3 = (**(code **)(*piVar5 + 0x304))(piVar5);
  piVar5 = (int *)__vbaObjSet(&local_1c,uVar3);
  iVar2 = (**(code **)(*piVar5 + 0xe0))(piVar5,local_40);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar5,&DAT_00405d00,0xe0);
  }
  if ((DAT_0040f048 == (short *)0x0) || (*DAT_0040f048 != 1)) {
    iVar2 = __vbaGenerateBoundsError();
  }
  else {
    iVar4 = (int)(short)local_40[0];
    iVar2 = *(int *)(DAT_0040f048 + 10);
    if (*(uint *)(DAT_0040f048 + 8) <= (uint)(iVar4 - iVar2)) {
      __vbaGenerateBoundsError();
    }
    iVar2 = (iVar4 - iVar2) * 0x28;
  }
  __vbaRecAssign(&DAT_00404e64,&DAT_0040f050,*(int *)(DAT_0040f048 + 6) + iVar2);
  __vbaFreeObj();
  if (DAT_0040f084 == (int *)0x0) {
    __vbaNew2(&DAT_00403b64,&DAT_0040f084);
  }
  piVar5 = DAT_0040f084;
  iVar2 = (**(code **)(*DAT_0040f084 + 0x2b0))
                    (DAT_0040f084,2,local_28,1,local_20,10,local_38,0x80020004,local_30);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar5,&DAT_00404f20,0x2b0);
  }
  return;
}


