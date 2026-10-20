// Decompiled with Ghidra from ImgArc.exe
// Format: Portable Executable (PE), image base 00400000

// ---- __vbaChkstk @ 004015d0

void __vbaChkstk(void)

{
                    /* WARNING: Could not recover jumptable at 0x004015d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __vbaChkstk();
  return;
}


// ---- __vbaFPException @ 004015dc

void __vbaFPException(void)

{
                    /* WARNING: Could not recover jumptable at 0x004015dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __vbaFPException();
  return;
}


// ---- adj_fdiv_m32 @ 004015e8

void __cdecl adj_fdiv_m32(void)

{
                    /* WARNING: Could not recover jumptable at 0x004015e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  adj_fdiv_m32();
  return;
}


// ---- adj_fdiv_m64 @ 004015f4

void __cdecl adj_fdiv_m64(void)

{
                    /* WARNING: Could not recover jumptable at 0x004015f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  adj_fdiv_m64();
  return;
}


// ---- DllFunctionCall @ 00401660

void DllFunctionCall(void)

{
                    /* WARNING: Could not recover jumptable at 0x00401660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DllFunctionCall();
  return;
}


// ---- Ordinal_100 @ 00401822

void Ordinal_100(void)

{
                    /* WARNING: Could not recover jumptable at 0x00401822. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_100();
  return;
}


// ---- entry @ 00401828

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x004019ab) overlaps instruction at (ram,0x004019a6)
    */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Removing unreachable block (ram,0x00401898) */
/* WARNING: Removing unreachable block (ram,0x0040189a) */
/* WARNING: Removing unreachable block (ram,0x004018f0) */
/* WARNING: Removing unreachable block (ram,0x00401904) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void entry(void)

{
  ushort *puVar1;
  char *pcVar2;
  undefined1 uVar3;
  short sVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  char cVar13;
  uint uVar8;
  undefined **ppuVar9;
  int *piVar10;
  char *pcVar11;
  byte *pbVar12;
  byte bVar15;
  char cVar17;
  int extraout_ECX;
  char *pcVar16;
  byte bVar18;
  undefined2 uVar19;
  undefined4 uVar20;
  undefined **ppuVar21;
  uint *puVar22;
  uint unaff_EBX;
  int *piVar23;
  undefined1 *puVar24;
  uint uVar25;
  short unaff_BP;
  int iVar26;
  ushort uVar27;
  undefined1 *unaff_ESI;
  int iVar28;
  undefined4 *puVar29;
  char *pcVar30;
  int unaff_EDI;
  undefined1 *puVar31;
  undefined2 in_ES;
  undefined2 in_GS;
  int unaff_FS_OFFSET;
  bool bVar32;
  undefined8 uVar33;
  ushort in_stack_00000065;
  undefined **in_stack_b811d28b;
  undefined *puStack_4;
  undefined3 uVar14;
  
  puStack_4 = &DAT_0040366c;
  ppuVar9 = &puStack_4;
  ppuVar21 = &puStack_4;
  uVar33 = Ordinal_100();
  iVar26 = (int)((ulonglong)uVar33 >> 0x20);
  pbVar12 = (byte *)uVar33;
  bVar5 = (byte)uVar33;
  *pbVar12 = *pbVar12 + bVar5;
  *pbVar12 = *pbVar12 + bVar5;
  *pbVar12 = *pbVar12 + bVar5;
  *pbVar12 = *pbVar12 ^ bVar5;
  *pbVar12 = *pbVar12 + bVar5;
  *pbVar12 = *pbVar12;
  *pbVar12 = *pbVar12 + bVar5;
  *pbVar12 = *pbVar12 + bVar5;
  uVar8 = (uint)pbVar12 & 0xffffff14;
  *(undefined1 *)(unaff_EDI + 0x43b811d2) = *(undefined1 *)(unaff_EDI + 0x43b811d2);
  bVar15 = (byte)extraout_ECX;
  *(char *)(unaff_EBX - 0x4a) = *(char *)(unaff_EBX - 0x4a) + bVar15;
  pcVar2 = unaff_ESI + 1;
  uVar19 = (undefined2)((ulonglong)uVar33 >> 0x20);
  out(*unaff_ESI,uVar19);
  bVar6 = (byte)&puStack_4;
  puStack_4 = (undefined *)CONCAT31(puStack_4._1_3_,(char)puStack_4 + bVar6 * '\x03');
  puStack_4 = (undefined *)((int)&puStack_4 + (int)puStack_4);
  bVar5 = (char)puStack_4 + bVar6 * '\x03';
  puStack_4._1_3_ = (undefined3)((uint)puStack_4 >> 8);
  puStack_4._0_1_ = bVar5 + bVar6;
  puVar24 = (undefined1 *)(uVar8 - 1);
  uVar20 = in(uVar19);
  *(undefined4 *)(unaff_EDI + -1) = uVar20;
  bVar18 = (byte)((ulonglong)uVar33 >> 0x20);
  if (CARRY1(bVar5,bVar6)) {
    *(byte *)in_stack_b811d28b = *(char *)in_stack_b811d28b + bVar18;
    iVar26 = CONCAT22((short)((ulonglong)uVar33 >> 0x30),CONCAT11(0x94,bVar18));
    pcVar11 = unaff_ESI + 2;
    out(*pcVar2,CONCAT11(0x94,bVar18));
  }
  else {
    puStack_4._0_1_ = (char)puStack_4 + bVar6 * '\x03';
    pbVar12 = (byte *)(extraout_ECX + 0x72);
    bVar5 = *pbVar12;
    *pbVar12 = *pbVar12 + bVar6;
    bVar32 = (short)((unaff_BP + 1U & 3) - (in_stack_00000065 & 3)) < 1;
    in_stack_b811d28b = &puStack_4;
    pcVar11 = pcVar2;
    if (!CARRY1(bVar5,bVar6) && bVar32) {
      if (CARRY1(bVar5,bVar6)) {
        *(byte *)(extraout_ECX + 0x6d) = *(byte *)(extraout_ECX + 0x6d) & bVar15;
        puVar31 = *(undefined1 **)(uVar8 - 2);
        iVar28 = *(int *)(uVar8 + 2);
        iVar26 = *(int *)(uVar8 + 6);
        uVar20 = *(undefined4 *)(uVar8 + 0x12);
        ppuVar9 = *(undefined ***)(uVar8 + 0x1a);
        uVar27 = (ushort)iVar28;
        pbVar12 = (byte *)segment(in_GS,uVar27 + 0x69);
        *pbVar12 = *pbVar12 & (byte)ppuVar9;
        puVar1 = (ushort *)(puVar31 + iVar26 * 2 + 0x70);
        sVar4 = (uVar27 & 3) - (*puVar1 & 3);
        *puVar1 = *puVar1 + (ushort)(0 < sVar4) * sVar4;
        pbVar12 = (byte *)(iVar28 + 0x69);
        *pbVar12 = *pbVar12 & (byte)ppuVar9;
        uVar3 = in((short)uVar20);
        *puVar31 = uVar3;
LAB_004018b8:
        *ppuVar9 = (undefined *)((uint)*ppuVar9 ^ (uint)ppuVar9);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      uVar20 = in(uVar19);
      *(undefined4 *)(unaff_EDI + 3) = uVar20;
      pcVar11 = unaff_ESI + 5;
      out(*(undefined4 *)pcVar2,uVar19);
      if (bVar32) {
        unaff_ESI[0x59] = unaff_ESI[0x59] & (byte)&puStack_4;
        puVar24 = (undefined1 *)(uVar8 - 5);
        *(undefined ***)(uVar8 - 5) = &puStack_4;
        pbVar12 = (byte *)(unaff_EBX + 0x69);
        bVar32 = false;
        *pbVar12 = *pbVar12 & bVar18;
        if (*pbVar12 != 0) goto LAB_004018b8;
      }
      else {
        puStack_4 = (undefined *)
                    CONCAT31(puStack_4._1_3_,(char)puStack_4 + (byte)&puStack_4 * '\x04');
        *(char *)(iVar26 + 0x6600001c) = *(char *)(iVar26 + 0x6600001c) + bVar18;
        ppuVar21 = (undefined **)((int)&puStack_4 + (int)puStack_4);
        bVar32 = CARRY1(*(byte *)ppuVar21,(byte)ppuVar21);
        *(byte *)ppuVar21 = *(byte *)ppuVar21 + (byte)ppuVar21;
        puVar24 = (undefined1 *)(uVar8 - 5);
        *(undefined2 *)(uVar8 - 5) = in_ES;
      }
      goto LAB_00401911;
    }
  }
  ppuVar21 = (undefined **)(unaff_EBX ^ *(uint *)(extraout_ECX + -0x48ee309a));
  *(char *)(unaff_EDI + 3) = (char)in_stack_b811d28b;
  *(char *)((int)in_stack_b811d28b + -0x2d) =
       *(char *)((int)in_stack_b811d28b + -0x2d) + (char)((uint)in_stack_b811d28b >> 8);
  bVar5 = (byte)ppuVar21;
  *(byte *)ppuVar21 = *(byte *)ppuVar21 + bVar5;
  *(byte *)ppuVar21 = *(byte *)ppuVar21 + bVar5;
  *(byte *)ppuVar21 = *(byte *)ppuVar21 + bVar5;
  *(byte *)ppuVar21 = *(byte *)ppuVar21 + bVar5;
  *(byte *)ppuVar21 = *(byte *)ppuVar21 + bVar5;
  *(byte *)ppuVar21 = *(byte *)ppuVar21 + bVar5;
  *(byte *)ppuVar21 = *(byte *)ppuVar21 + bVar5;
  *(byte *)ppuVar21 = *(byte *)ppuVar21 + bVar5;
  *(byte *)ppuVar21 = *(byte *)ppuVar21 + bVar5;
  *(byte *)ppuVar21 = *(byte *)ppuVar21 + bVar5;
  *(byte *)ppuVar21 = *(byte *)ppuVar21 + bVar5;
  *(byte *)ppuVar21 = *(byte *)ppuVar21 + bVar5;
                    /* WARNING: Ignoring partial resolution of indirect */
  *(byte *)ppuVar21 = *(byte *)ppuVar21 + bVar5;
                    /* WARNING: Ignoring partial resolution of indirect */
  *(byte *)ppuVar21 = *(byte *)ppuVar21 + bVar5;
  *(byte *)ppuVar21 = *(byte *)ppuVar21 + bVar5;
  *(byte *)ppuVar21 = *(byte *)ppuVar21 + bVar5;
  *(byte *)ppuVar21 = *(byte *)ppuVar21 + bVar5;
  bVar32 = CARRY1(*(byte *)ppuVar21,bVar5);
  *(byte *)ppuVar21 = *(byte *)ppuVar21 + bVar5;
LAB_00401911:
  cVar7 = (char)iVar26 - bVar32;
  piVar10 = (int *)CONCAT31((int3)((uint)iVar26 >> 8),cVar7);
  pcVar11[3] = pcVar11[3] + (char)((uint)iVar26 >> 8);
  *(char *)piVar10 = (char)*piVar10 + cVar7;
  *pcVar11 = *pcVar11 + cVar7;
  pbVar12 = (byte *)(extraout_ECX + 0x6d);
  bVar5 = *pbVar12;
  *pbVar12 = *pbVar12 + bVar15;
  if (!CARRY1(bVar5,bVar15)) {
    bVar32 = SCARRY1(DAT_43001c01,bVar15 + 1);
    DAT_43001c01 = DAT_43001c01 + bVar15 + 1;
    puVar29 = *(undefined4 **)(puVar24 + 4);
    ppuVar21 = *(undefined ***)(puVar24 + 0x14);
    piVar10 = *(int **)(puVar24 + 0x1c);
    bVar5 = (byte)piVar10;
    if (bVar32) {
      *(char *)piVar10 = (char)*piVar10;
      *(char *)piVar10 = (char)*piVar10;
      *(byte *)(piVar10 + 0x200020) = (char)piVar10[0x200020] + bVar5;
      *(byte *)piVar10 = (char)*piVar10 + bVar5;
    }
    else {
      pbVar12 = (byte *)((int)puVar29 + 0x6f);
      *pbVar12 = *pbVar12 & bVar5;
      out(*puVar29,(short)ppuVar21);
      iVar28 = *(int *)(puVar24 + 0x23);
      pcVar30 = *(char **)(puVar24 + 0x27);
      iVar26 = *(int *)(puVar24 + 0x33);
      puVar22 = *(uint **)(puVar24 + 0x37);
      pcVar16 = *(char **)(puVar24 + 0x3b);
      piVar10 = *(int **)(puVar24 + 0x3f);
      pcVar16[unaff_FS_OFFSET] = pcVar16[unaff_FS_OFFSET] + (char)iVar26;
      piVar10 = (int *)((int)piVar10 + *piVar10);
      piVar23 = (int *)(iVar26 + 1);
      puVar24[iVar28 * 2 + 0x43] = puVar24[iVar28 * 2 + 0x43] + (char)piVar23;
      uVar25 = (uint)(puVar24 + 0x43) | *puVar22;
      *piVar23 = *piVar23 + uVar25;
      *(undefined2 *)(uVar25 - 4) = in_ES;
      pcVar11 = (char *)((int)piVar10 + *piVar10);
      pcVar2 = (char *)((uVar25 - 4) + (int)pcVar30 * 2);
      cVar17 = (char)((uint)pcVar16 >> 8);
      *pcVar2 = *pcVar2 + cVar17;
      bVar5 = (byte)puVar22;
      ppuVar21 = (undefined **)
                 CONCAT22((short)((uint)puVar22 >> 0x10),
                          CONCAT11((char)((uint)puVar22 >> 8) + (char)((uint)piVar23 >> 8),bVar5));
      uVar14 = (undefined3)((uint)pcVar11 >> 8);
      cVar7 = (char)pcVar11 + *pcVar11;
      pbVar12 = (byte *)CONCAT31(uVar14,cVar7);
      *pbVar12 = *pbVar12 + cVar7;
      *pcVar16 = *pcVar16 + cVar7;
      *pcVar16 = *pcVar16 + cVar7;
      cVar13 = (char)((uint)pcVar11 >> 8);
      *pbVar12 = *pbVar12 + cVar13;
      *pbVar12 = *pbVar12 & bVar5;
      *pbVar12 = *pbVar12 + cVar7;
      *pbVar12 = *pbVar12 + cVar7;
      cVar7 = cVar7 + cVar17 + *(char *)CONCAT31(uVar14,cVar7 + cVar17);
      piVar10 = (int *)CONCAT31(uVar14,cVar7);
      *pcVar30 = *pcVar30 + bVar5;
      *(char *)piVar10 = (char)*piVar10 + cVar7;
      *(char *)piVar10 = (char)*piVar10 + cVar17;
      *(char *)piVar10 = (char)*piVar10 + cVar7;
      *(char *)piVar10 = (char)*piVar10 + cVar13;
      *(char *)piVar10 = (char)*piVar10 + cVar7;
      *(char *)piVar10 = (char)*piVar10 + cVar7;
      *(char *)piVar10 = (char)*piVar10 + cVar7;
      *piVar10 = (int)(*piVar10 + (int)piVar10);
      piVar10 = (int *)CONCAT31(uVar14,cVar7);
      *(char *)piVar10 = (char)*piVar10 + cVar7;
      *(char *)piVar10 = (char)*piVar10 + cVar7;
    }
  }
  *(byte *)ppuVar21 = *(byte *)ppuVar21;
  cVar7 = (char)piVar10;
  *(char *)piVar10 = (char)*piVar10 + cVar7;
  *(char *)piVar10 = (char)*piVar10 + cVar7;
  *(char *)piVar10 = (char)*piVar10 + cVar7;
  *(char *)piVar10 = (char)*piVar10 + cVar7;
  *(char *)piVar10 = (char)*piVar10 + cVar7;
  *(char *)piVar10 = (char)*piVar10 + cVar7;
  *(char *)piVar10 = (char)*piVar10 + cVar7;
  *(char *)piVar10 = (char)*piVar10 + cVar7;
  *(char *)piVar10 = (char)*piVar10 + cVar7;
  *(char *)piVar10 = (char)*piVar10 + cVar7;
  *(char *)piVar10 = (char)*piVar10 + cVar7;
  *(char *)(piVar10 + 0x200000) = (char)piVar10[0x200000] + cVar7;
  *(char *)piVar10 = (char)*piVar10 + cVar7;
  *(char *)(piVar10 + 0x2000) = (char)piVar10[0x2000];
  *(char *)piVar10 = (char)*piVar10 + -0x80;
  *(char *)(piVar10 + -0x1fffffe0) = (char)piVar10[-0x1fffffe0] + cVar7;
  *(char *)(piVar10 + -0xfcfd000) = (char)piVar10[-0xfcfd000];
  *(char *)piVar10 = (char)*piVar10 + cVar7;
  *piVar10 = *piVar10 + 1;
  *(char *)piVar10 = (char)*piVar10 + cVar7;
  *piVar10 = *piVar10 + 1;
  *piVar10 = *piVar10 + 1;
  *(char *)piVar10 = (char)*piVar10 + cVar7;
  *piVar10 = *piVar10 + 1;
  *piVar10 = *piVar10 + 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- FUN_00408090 @ 00408090

void FUN_00408090(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if (DAT_0041f118 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00408099. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_0041f118)();
    return;
  }
  UNRECOVERED_JUMPTABLE = (code *)DllFunctionCall(&PTR_s_user32_00408080);
                    /* WARNING: Could not recover jumptable at 0x004080a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


// ---- FUN_00408498 @ 00408498

void FUN_00408498(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if (DAT_0041f130 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004084a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_0041f130)();
    return;
  }
  UNRECOVERED_JUMPTABLE = (code *)DllFunctionCall(&PTR_s_user32_00408488);
                    /* WARNING: Could not recover jumptable at 0x004084af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


// ---- FUN_0040b4b0 @ 0040b4b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040b4b0(uint param_1)

{
  code *pcVar1;
  int *piVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  undefined4 *unaff_FS_OFFSET;
  float10 fVar9;
  undefined4 local_d8;
  short local_d4 [10];
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  float *local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  wchar_t *local_98;
  undefined4 local_94;
  undefined4 local_90 [2];
  undefined4 local_88;
  undefined4 local_80 [2];
  undefined4 local_78;
  undefined4 local_70 [4];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  int *local_50;
  int *local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38 [3];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  float local_1c;
  undefined4 uStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004015d6;
  uStack_18 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_18;
  local_10 = &stack0xfffffed4;
  piVar8 = (int *)(param_1 & 0xfffffffe);
  local_8 = param_1 & 1;
  local_c = &DAT_00401008;
  iVar6 = *piVar8;
  (**(code **)(iVar6 + 4))(piVar8);
  local_1c = 0.0;
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_38[0] = 0;
  local_3c = 0;
  local_40 = 0;
  local_44 = 0;
  local_48 = 0;
  local_4c = (int *)0x0;
  local_50 = (int *)0x0;
  local_60 = 0;
  local_70[0] = 0;
  local_80[0] = 0;
  local_90[0] = 0;
  local_a0 = 0;
  local_b0 = 0;
  local_c0 = 0;
  local_d4[0] = 0;
  local_d4[1] = 0;
  local_d8 = 0;
  uVar4 = __vbaCastObj(piVar8,&DAT_004084e0);
  __vbaObjSet(&local_4c,uVar4);
  FUN_004120b0(&local_4c);
  __vbaFreeObj();
  DAT_0041ec98 = 0;
  DAT_0041ec9a = 0;
  DAT_0041ec9c = 0;
  DAT_0041ecae = 0;
  DAT_0041ecb0 = 0;
  __vbaStrCopy();
  __vbaStrCopy();
  __vbaStrCopy();
  local_1c = 0.0;
  __vbaStrCopy();
  _DAT_0041e024 = 0;
  __vbaStrCat(&DAT_004084fc,L"LEO FTP Image Archive");
  uVar4 = __vbaStrMove();
  __vbaStrCat(L"V01.03 Dec 1998",uVar4);
  uVar4 = __vbaStrMove();
  iVar5 = (**(code **)(iVar6 + 0x54))(piVar8,uVar4);
  if (iVar5 < 0) {
    __vbaHresultCheckObj(iVar5,piVar8,&DAT_00407938,0x54);
  }
  __vbaFreeStrList(2,&local_3c,&local_40);
  _DAT_0041ecb6 = 0;
  FUN_0041d1e0();
  __vbaStrCat(&DAT_00408514,L"LEO FTP Image Archive");
  uVar4 = __vbaStrMove();
  local_58 = __vbaStrCat(L"V01.03 Dec 1998",uVar4);
  pcVar1 = *(code **)(iVar6 + 0x2fc);
  local_60 = 8;
  uVar4 = (*pcVar1)(piVar8,0x1f,1,8,local_5c,local_58,local_54);
  uVar4 = __vbaObjSet(&local_4c,uVar4);
  uVar4 = __vbaLateIdCallLd(local_70,uVar4);
  local_20 = __vbaI4Var(uVar4);
  __vbaFreeStr();
  __vbaFreeObj();
  __vbaFreeVarList(2,&local_60,local_70);
  if (local_20 == 1) {
    local_a8 = (float *)local_38;
    local_98 = (wchar_t *)&local_24;
    local_a0 = 0x4003;
    local_b0 = 0x4003;
    uVar4 = (*pcVar1)(piVar8,0x12,2,0x4003,local_ac,local_a8,local_a4,0x4003,local_9c,local_98,
                      local_94);
    uVar4 = __vbaObjSet(&local_4c,uVar4);
    uVar4 = __vbaLateIdCallLd(&local_60,uVar4);
    __vbaI4Var(uVar4);
    __vbaI2I4();
    __vbaFreeObj();
    __vbaFreeVar();
    local_a0 = 0x4003;
    local_98 = (wchar_t *)&local_28;
    local_b0 = 8;
    local_a8 = (float *)0x4085b8;
    uVar4 = (*pcVar1)(piVar8,9,2,8,local_ac,L"DP_SCANGEN",local_a4,0x4003,local_9c,local_98,local_94
                     );
    uVar4 = __vbaObjSet(&local_4c,uVar4);
    uVar4 = __vbaLateIdCallLd(&local_60,uVar4);
    __vbaI4Var(uVar4);
    __vbaFreeObj();
    __vbaFreeVar();
    local_a8 = &local_1c;
    local_98 = (wchar_t *)&local_28;
    local_a0 = 0x4003;
    local_b0 = 0x4004;
    uVar4 = (*pcVar1)(piVar8,10,3,0x4008,local_bc,&local_2c,local_b4,0x4004,local_ac,local_a8,
                      local_a4,0x4003,local_9c,local_98,local_94);
    uVar4 = __vbaObjSet(&local_4c,uVar4);
    uVar4 = __vbaLateIdCallLd(&local_60,uVar4);
    __vbaI4Var(uVar4);
    __vbaFreeObj();
    __vbaFreeVar();
    fVar9 = (float10)__vbaFpR4();
    if (fVar9 < (float10)local_1c) {
      _DAT_0041e024 = 0xffff;
    }
    local_a0 = 0x4003;
    local_98 = (wchar_t *)&local_28;
    local_b0 = 8;
    local_a8 = (float *)0x4085d4;
    uVar4 = (*pcVar1)(piVar8,9,2,8,local_ac,L"DP_GSP",local_a4,0x4003,local_9c,local_98,local_94);
    uVar4 = __vbaObjSet(&local_4c,uVar4);
    uVar4 = __vbaLateIdCallLd(&local_60,uVar4);
    __vbaI4Var(uVar4);
    __vbaFreeObj();
    __vbaFreeVar();
    local_a8 = &local_1c;
    local_98 = (wchar_t *)&local_28;
    local_a0 = 0x4003;
    local_b0 = 0x4004;
    uVar4 = (*pcVar1)(piVar8,10,3,0x4008,local_bc,&local_2c,local_b4,0x4004,local_ac,local_a8,
                      local_a4,0x4003,local_9c,local_98,local_94);
    uVar4 = __vbaObjSet(&local_4c,uVar4);
    uVar4 = __vbaLateIdCallLd(&local_60,uVar4);
    __vbaI4Var(uVar4);
    __vbaFreeObj();
    __vbaFreeVar();
    fVar9 = (float10)__vbaFpR4();
    if (fVar9 < (float10)local_1c) {
      _DAT_0041e024 = 0xffff;
    }
    local_a0 = 3;
    local_98 = (wchar_t *)0x2e;
    uVar4 = (*pcVar1)(piVar8,0x1c,1,3,local_9c,0x2e,local_94);
    uVar4 = __vbaObjSet(&local_4c,uVar4);
    uVar4 = __vbaLateIdCallLd(&local_60,uVar4);
    iVar5 = __vbaI4Var(uVar4);
    __vbaFreeObj();
    __vbaFreeVar();
    if (iVar5 == 1) {
      Ordinal_669();
      __vbaStrMove();
      local_48 = 0;
      uVar4 = __vbaStrMove(2);
      Ordinal_616(uVar4);
      uVar4 = __vbaStrMove();
      Ordinal_527(uVar4);
      uVar4 = __vbaStrMove();
      iVar5 = __vbaStrCmp(&DAT_00408628,uVar4);
      __vbaFreeStrList(4,&local_3c,&local_40,&local_44,&local_48);
      if (iVar5 == 0) {
        DAT_0041ecb4 = 2;
      }
      else {
        Ordinal_669();
        __vbaStrMove();
        local_48 = 0;
        uVar4 = __vbaStrMove(2);
        Ordinal_616(uVar4);
        uVar4 = __vbaStrMove();
        Ordinal_527(uVar4);
        uVar4 = __vbaStrMove();
        iVar5 = __vbaStrCmp(&DAT_00408634,uVar4);
        __vbaFreeStrList(4,&local_3c,&local_40,&local_44,&local_48);
        DAT_0041ecb4 = (ushort)(iVar5 == 0);
      }
      iVar5 = (**(code **)(iVar6 + 0x754))(piVar8);
      if (iVar5 < 0) {
        __vbaHresultCheckObj(iVar5,piVar8,&DAT_00407968,0x754);
      }
      if (DAT_0041f138 == (int *)0x0) {
        __vbaNew2(&DAT_0040867c,&DAT_0041f138);
      }
      piVar7 = DAT_0041f138;
      iVar5 = (**(code **)(*DAT_0041f138 + 0x14))(DAT_0041f138,&local_50);
      if (iVar5 < 0) {
        __vbaHresultCheckObj(iVar5,piVar7,&DAT_0040866c,0x14);
      }
      piVar7 = local_50;
      if (DAT_0041f138 == (int *)0x0) {
        __vbaNew2(&DAT_0040867c,&DAT_0041f138);
      }
      piVar2 = DAT_0041f138;
      iVar5 = (**(code **)(*DAT_0041f138 + 0x14))(DAT_0041f138,&local_4c);
      if (iVar5 < 0) {
        __vbaHresultCheckObj(iVar5,piVar2,&DAT_0040866c,0x14);
      }
      piVar2 = local_4c;
      iVar5 = (**(code **)(*local_4c + 0x58))(local_4c,&local_3c);
      if (iVar5 < 0) {
        __vbaHresultCheckObj(iVar5,piVar2,&DAT_0040868c,0x58);
      }
      iVar5 = *piVar7;
      __vbaStrCat(L"HELP\\ENGLISH\\",DAT_0041ec7c);
      uVar4 = __vbaStrMove();
      __vbaStrCat(local_3c,uVar4);
      uVar4 = __vbaStrMove();
      __vbaStrCat(L".HLP",uVar4);
      uVar4 = __vbaStrMove();
      iVar5 = (**(code **)(iVar5 + 0x134))(piVar7,uVar4);
      if (iVar5 < 0) {
        __vbaHresultCheckObj(iVar5,piVar7,&DAT_0040868c,0x134);
      }
      __vbaFreeStrList(4,&local_40,&local_3c,&local_44,&local_48);
      __vbaFreeObjList(2,&local_4c,&local_50);
      uVar4 = (**(code **)(iVar6 + 0x410))(piVar8);
      piVar7 = (int *)__vbaObjSet(&local_4c,uVar4);
      iVar5 = *piVar7;
      local_d4[0] = 0x78;
      local_d4[1] = 0;
      FUN_00419e70(local_d4,(short *)&DAT_0041ecb6);
      uVar4 = __vbaStrMove();
      iVar5 = (**(code **)(iVar5 + 0x54))(piVar7,uVar4);
      if (iVar5 < 0) {
        __vbaHresultCheckObj(iVar5,piVar7,&DAT_004086ac,0x54);
      }
      __vbaFreeStr();
      __vbaFreeObj();
      DAT_0041ecb2 = 0xffff;
      DAT_0041eca8 = 0;
      DAT_0041ecaa = 0;
      DAT_0041ecac = 0;
      DAT_0041eca0 = 0;
      local_d4[0] = 0;
      local_d4[1] = 0;
      (**(code **)(iVar6 + 0x734))(piVar8,local_d4);
      sVar3 = FUN_004122c0();
      if (sVar3 == 0) {
        DAT_0041ecb4 = 0;
      }
      uVar4 = (**(code **)(iVar6 + 0x34c))(piVar8);
      piVar7 = (int *)__vbaObjSet(&local_4c,uVar4);
      iVar5 = (**(code **)(*piVar7 + 0xa0))(piVar7,&local_3c);
      if (iVar5 < 0) {
        __vbaHresultCheckObj(iVar5,piVar7,&DAT_004086bc,0xa0);
      }
      local_3c = 0;
      __vbaStrMove();
      __vbaFreeObj();
      local_a0 = 2;
      local_98 = (wchar_t *)0x2;
      uVar4 = (**(code **)(iVar6 + 0x3fc))(piVar8,6,2,local_9c,2,local_94);
      uVar4 = __vbaObjSet(&local_4c,uVar4);
      __vbaLateIdSt(uVar4);
      __vbaFreeObj();
      FUN_00416840();
      (**(code **)(iVar6 + 0x704))(piVar8);
      goto LAB_0040c0e5;
    }
    local_90[0] = 10;
    local_80[0] = 10;
    local_88 = 0x80020004;
    local_78 = 0x80020004;
    local_a8 = (float *)0x40757c;
    local_b0 = 8;
    __vbaVarDup();
    local_98 = L"Image Archiving Not Licenced";
    local_a0 = 8;
    __vbaVarDup();
    Ordinal_595(&local_60,0,local_70,local_80,local_90);
  }
  else {
    local_90[0] = 10;
    local_80[0] = 10;
    local_88 = 0x80020004;
    local_78 = 0x80020004;
    local_a8 = (float *)0x40757c;
    local_b0 = 8;
    __vbaVarDup();
    local_98 = L"Parameter Manager Failed to Initialise";
    local_a0 = 8;
    __vbaVarDup();
    Ordinal_595(&local_60,0,local_70,local_80,local_90);
  }
  __vbaFreeVarList(4,&local_60,local_70,local_80,local_90);
  DAT_0041ec98 = 0xffff;
  local_d4[0] = 0;
  local_d4[1] = 0;
  FUN_00419e70(local_d4,(short *)&DAT_0041ecb6);
  __vbaStrMove();
  local_d8 = __vbaI2I4();
  local_40 = 0;
  __vbaStrMove();
  FUN_00411fc0(&local_3c,(short *)&local_d8);
  __vbaFreeStrList(2,&local_3c,&local_40);
  if (DAT_0041f138 == (int *)0x0) {
    __vbaNew2(&DAT_0040867c,&DAT_0041f138);
  }
  piVar7 = DAT_0041f138;
  iVar6 = *DAT_0041f138;
  uVar4 = __vbaObjSetAddref(&local_4c,piVar8);
  iVar6 = (**(code **)(iVar6 + 0x10))(piVar7,uVar4);
  if (iVar6 < 0) {
    __vbaHresultCheckObj(iVar6,piVar7,&DAT_0040866c,0x10);
  }
  __vbaFreeObj();
  __vbaEnd();
LAB_0040c0e5:
  local_8 = 0;
                    /* WARNING: Could not recover jumptable at 0x0040c144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __vbaFreeStr();
  return;
}


// ---- FUN_0040c170 @ 0040c170

void __cdecl FUN_0040c170(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 *unaff_FS_OFFSET;
  bool bVar6;
  ushort in_FPUStatusWord;
  float10 fVar7;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 local_34 [4];
  int *local_24;
  undefined4 local_20;
  int *local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_004015d6;
  uStack_14 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_14;
  local_c = &stack0xffffff60;
  local_8 = &DAT_00401018;
  local_18 = 0;
  local_1c = (int *)0x0;
  local_20 = 0;
  local_24 = (int *)0x0;
  local_34[0] = 0;
  local_44 = 0;
  local_48 = 0;
  local_4c = 0.0;
  local_50 = 0.0;
  local_54 = 0.0;
  local_58 = 0.0;
  if (DAT_0041ecb4 == 1) {
    iVar5 = *param_1;
    uVar2 = (**(code **)(iVar5 + 0x36c))(param_1);
    piVar3 = (int *)__vbaObjSet(&local_18,uVar2);
    iVar4 = (**(code **)(*piVar3 + 0xe0))(piVar3,&local_48);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar3,&DAT_004086ec,0xe0);
    }
    bVar6 = (short)local_48 != 0;
    __vbaFreeObj();
    if (bVar6) goto LAB_0040c809;
    pcVar1 = *(code **)(iVar5 + 0x318);
    uVar2 = (*pcVar1)(param_1,0x80010007,0xb,local_40,0,local_38);
    uVar2 = __vbaObjSet(&local_18,uVar2);
    __vbaLateIdSt(uVar2);
    __vbaFreeObj();
    uVar2 = (**(code **)(iVar5 + 0x304))(param_1);
    piVar3 = (int *)__vbaObjSet(&local_18,uVar2);
    iVar4 = (**(code **)(*piVar3 + 0x94))(piVar3,0);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar3,&DAT_004086cc,0x94);
    }
    __vbaFreeObj();
    uVar2 = (*pcVar1)(param_1,0x80010006,0);
    uVar2 = __vbaObjSet(&local_18,uVar2);
    __vbaLateIdCallLd(local_34,uVar2);
    if (DAT_0041f138 == (int *)0x0) {
      __vbaNew2(&DAT_0040867c,&DAT_0041f138);
    }
    piVar3 = DAT_0041f138;
    iVar4 = (**(code **)(*DAT_0041f138 + 0x18))(DAT_0041f138,&local_1c);
    pcVar1 = __vbaHresultCheckObj_exref;
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar3,&DAT_0040866c,0x18);
    }
    piVar3 = local_1c;
    iVar4 = (**(code **)(*local_1c + 0x88))(local_1c,&local_50);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar3,&DAT_004086dc,0x88);
    }
    uVar2 = (**(code **)(iVar5 + 0x314))(param_1);
    piVar3 = (int *)__vbaObjSet(&local_20,uVar2);
    iVar4 = (**(code **)(*piVar3 + 0x80))(piVar3,&local_54);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar3,&DAT_004086cc,0x80);
    }
    if (DAT_0041f138 == (int *)0x0) {
      __vbaNew2(&DAT_0040867c,&DAT_0041f138);
    }
    piVar3 = DAT_0041f138;
    iVar4 = (**(code **)(*DAT_0041f138 + 0x18))(DAT_0041f138,&local_24);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar3,&DAT_0040866c,0x18);
    }
    piVar3 = local_24;
    iVar4 = (**(code **)(*local_24 + 0x88))(local_24,&local_58);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar3,&DAT_004086dc,0x88);
    }
    iVar4 = (**(code **)(iVar5 + 0x88))(param_1,&local_4c);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,param_1,&DAT_00407938,0x88);
    }
    fVar7 = (float10)__vbaR4Var(local_34);
    if ((in_FPUStatusWord & 0xd) != 0) goto LAB_0040c852;
    iVar4 = (**(code **)(iVar5 + 0x8c))
                      (param_1,(float)(((float10)local_4c - fVar7 * (float10)local_50) -
                                      (float10)local_58 * (float10)local_54));
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,param_1,&DAT_00407938,0x8c);
    }
    __vbaFreeObjList(4,&local_18,&local_1c,&local_20,&local_24);
    __vbaFreeVar();
    if (DAT_0041ec9e == 0) {
      DAT_0041ecb0 = 0xffff;
      iVar5 = (**(code **)(iVar5 + 0x6fc))(param_1);
      if (iVar5 < 0) {
        __vbaHresultCheckObj(iVar5,param_1,&DAT_00407968,0x6fc);
      }
      while ((DAT_0041ec9e == 0 && (DAT_0041eca0 == 0))) {
        Ordinal_598();
      }
      DAT_0041ecb0 = 0;
    }
    if ((DAT_0041ec9e == -1) && (DAT_0041eca0 == 0)) {
      FUN_00416fc0();
      FUN_00417b60();
    }
    iVar5 = (**(code **)(*param_1 + 0x728))(param_1);
  }
  else {
    if (DAT_0041ecb4 != 2) {
      local_c = &stack0xffffff60;
      uVar2 = (**(code **)(*param_1 + 0x318))(param_1,4,2);
      uVar2 = __vbaObjSet(&local_18,uVar2);
      __vbaLateIdSt(uVar2);
      __vbaFreeObj();
      return;
    }
    iVar5 = *param_1;
    pcVar1 = *(code **)(iVar5 + 0x318);
    local_c = &stack0xffffff60;
    uVar2 = (*pcVar1)(param_1,0x80010007,0xb);
    uVar2 = __vbaObjSet(&local_18,uVar2);
    __vbaLateIdSt(uVar2);
    __vbaFreeObj();
    uVar2 = (**(code **)(iVar5 + 0x304))(param_1);
    piVar3 = (int *)__vbaObjSet(&local_18,uVar2);
    iVar4 = (**(code **)(*piVar3 + 0x94))(piVar3,0);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar3,&DAT_004086cc,0x94);
    }
    __vbaFreeObj();
    uVar2 = (*pcVar1)(param_1,0x80010006,0);
    uVar2 = __vbaObjSet(&local_18,uVar2);
    __vbaLateIdCallLd(local_34,uVar2);
    if (DAT_0041f138 == (int *)0x0) {
      __vbaNew2(&DAT_0040867c,&DAT_0041f138);
    }
    piVar3 = DAT_0041f138;
    iVar4 = (**(code **)(*DAT_0041f138 + 0x18))(DAT_0041f138,&local_1c);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar3,&DAT_0040866c,0x18);
    }
    piVar3 = local_1c;
    iVar4 = (**(code **)(*local_1c + 0x88))(local_1c,&local_50);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar3,&DAT_004086dc,0x88);
    }
    uVar2 = (**(code **)(iVar5 + 0x314))(param_1);
    piVar3 = (int *)__vbaObjSet(&local_20,uVar2);
    iVar4 = (**(code **)(*piVar3 + 0x80))(piVar3,&local_54);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar3,&DAT_004086cc,0x80);
    }
    if (DAT_0041f138 == (int *)0x0) {
      __vbaNew2(&DAT_0040867c,&DAT_0041f138);
    }
    piVar3 = DAT_0041f138;
    iVar4 = (**(code **)(*DAT_0041f138 + 0x18))(DAT_0041f138,&local_24);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar3,&DAT_0040866c,0x18);
    }
    piVar3 = local_24;
    iVar4 = (**(code **)(*local_24 + 0x88))(local_24,&local_58);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar3,&DAT_004086dc,0x88);
    }
    iVar4 = (**(code **)(iVar5 + 0x88))(param_1,&local_4c);
    pcVar1 = __vbaHresultCheckObj_exref;
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,param_1,&DAT_00407938,0x88);
    }
    fVar7 = (float10)__vbaR4Var(local_34);
    if ((in_FPUStatusWord & 0xd) != 0) {
LAB_0040c852:
      __vbaFPException();
      return;
    }
    iVar4 = (**(code **)(iVar5 + 0x8c))
                      (param_1,(float)(((float10)local_4c - fVar7 * (float10)local_50) -
                                      (float10)local_58 * (float10)local_54));
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,param_1,&DAT_00407938,0x8c);
    }
    __vbaFreeObjList(4,&local_18,&local_1c,&local_20,&local_24);
    __vbaFreeVar();
    if (DAT_0041ec9e == 0) {
      DAT_0041ecb0 = 0xffff;
      iVar5 = (**(code **)(iVar5 + 0x6fc))(param_1);
      if (iVar5 < 0) {
        __vbaHresultCheckObj(iVar5,param_1,&DAT_00407968,0x6fc);
      }
      while ((DAT_0041ec9e == 0 && (DAT_0041eca0 == 0))) {
        Ordinal_598();
      }
      DAT_0041ecb0 = 0;
    }
    if ((DAT_0041ec9e == -1) && (DAT_0041eca0 == 0)) {
      FUN_00416fc0();
      FUN_00417b60();
    }
    iVar5 = (**(code **)(*param_1 + 0x728))(param_1);
  }
  if (iVar5 < 0) {
    (*pcVar1)(iVar5,param_1,&DAT_00407968,0x728);
  }
LAB_0040c809:
  __vbaEnd();
  return;
}


// ---- FUN_0040c860 @ 0040c860

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __cdecl FUN_0040c860(uint param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int unaff_ESI;
  undefined4 *unaff_FS_OFFSET;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int **ppiVar7;
  int *local_44;
  undefined1 *puStack_40;
  int *local_3c;
  int **ppiStack_38;
  int *local_34;
  undefined4 uStack_24;
  undefined *puStack_20;
  undefined1 *local_1c;
  undefined1 *local_18;
  uint local_14;
  undefined4 local_10;
  undefined4 local_8;
  
  puStack_20 = &DAT_004015d6;
  uStack_24 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_24;
  __vbaChkstk();
  local_1c = &stack0xffffffd0;
  local_18 = &LAB_00401028;
  local_14 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  local_10 = 0;
  ppiStack_38 = (int **)0x40c8b5;
  local_34 = piVar4;
  (**(code **)(*piVar4 + 4))();
  local_8 = 2;
  if (DAT_0041f138 == (int *)0x0) {
    ppiStack_38 = &DAT_0041f138;
    local_3c = (int *)&DAT_0040867c;
    puStack_40 = (undefined1 *)0x40c8dc;
    __vbaNew2();
  }
  local_3c = DAT_0041f138;
  ppiStack_38 = &local_34;
  puStack_40 = (undefined1 *)0x40c904;
  iVar2 = (**(code **)(*DAT_0041f138 + 0x14))();
  if (iVar2 < 0) {
    puStack_40 = (undefined1 *)0x14;
    local_44 = (int *)&DAT_0040866c;
    __vbaHresultCheckObj();
  }
  puStack_40 = &stack0xffffffd4;
  local_44 = local_34;
  iVar2 = (**(code **)(*local_34 + 0x130))();
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2);
  }
  iVar2 = __vbaLenBstr();
  sVar1 = -(ushort)(iVar2 == 0);
  __vbaFreeStr();
  __vbaFreeObj();
  if (sVar1 == 0) {
    local_8 = 5;
    __vbaOnError();
    local_8 = 6;
    puVar5 = &stack0xffffffb0;
    iVar2 = (**(code **)(*piVar4 + 0x58))(piVar4);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar4,&DAT_00407938,0x58);
    }
    if (DAT_0041f138 == (int *)0x0) {
      __vbaNew2(&DAT_0040867c,&DAT_0041f138);
    }
    ppiVar7 = &local_34;
    iVar2 = (*(code *)local_34[5])(ppiVar7);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,ppiVar7,&DAT_0040866c,0x14);
    }
    puVar6 = &stack0xffffffd4;
    iVar2 = (**(code **)(unaff_ESI + 0x130))(puVar6);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,puVar6,&DAT_0040868c,0x130);
    }
    uVar3 = __vbaStrToAnsi(&stack0xffffffd0,unaff_ESI,0x105,&stack0xffffffb8);
    FUN_00408090();
    __vbaSetSystemError(puVar5,uVar3);
    __vbaFreeStrList(2,&stack0xffffffd4,&stack0xffffffd0);
    __vbaFreeObj();
    local_8 = 7;
    local_3c = (int *)Ordinal_685();
    local_44 = (int *)0x9;
    sVar1 = __vbaBoolVarNull(&local_44);
    __vbaFreeVar();
    if (sVar1 != 0) {
      local_8 = 8;
      uVar3 = Ordinal_685();
      piVar4 = (int *)__vbaObjSet(&local_34,uVar3);
      iVar2 = (**(code **)(*piVar4 + 0x2c))(piVar4,&stack0xffffffd4);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,piVar4,&DAT_004086fc,0x2c);
      }
      __vbaI2I4();
      __vbaStrMove();
      FUN_00411fc0(&stack0xffffffd0,(short *)&stack0xffffffb8);
      __vbaFreeStr();
      __vbaFreeObj();
    }
  }
  else {
    local_8 = 3;
    FUN_00419e70((short *)&stack0xffffffb8,(short *)&DAT_0041ecb6);
    __vbaStrMove();
    __vbaI2I4();
    __vbaStrMove();
    FUN_00411fc0(&stack0xffffffd4,(short *)&stack0xffffffb4);
    __vbaFreeStrList(2,&stack0xffffffd4,&stack0xffffffd0);
  }
  return;
}


// ---- FUN_0040ccd0 @ 0040ccd0

undefined4 FUN_0040ccd0(uint param_1)

{
  int *piVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004015d6;
  local_18 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_18;
  piVar1 = (int *)(param_1 & 0xfffffffe);
  local_10 = &stack0xffffffd4;
  local_8 = param_1 & 1;
  local_c = &DAT_00401078;
  (**(code **)(*piVar1 + 4))(piVar1);
  if ((DAT_0041ec9e == -1) && (DAT_0041eca0 == 0)) {
    FUN_00416fc0();
    FUN_00417b60();
  }
  local_8 = 0;
  (**(code **)(*piVar1 + 8))(piVar1);
  *unaff_FS_OFFSET = local_18;
  return local_8;
}


// ---- FUN_0040cd60 @ 0040cd60

void FUN_0040cd60(uint param_1,undefined4 param_2,undefined4 param_3,short param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *unaff_FS_OFFSET;
  short local_e4 [8];
  undefined4 local_d4 [5];
  undefined4 local_c0;
  undefined4 local_bc;
  short *local_b8;
  undefined4 local_b4;
  undefined4 local_b0 [4];
  undefined4 local_a0 [2];
  undefined4 local_98;
  undefined4 local_90 [4];
  undefined4 local_80 [2];
  undefined4 local_78;
  undefined4 local_70 [4];
  undefined4 local_60 [2];
  undefined4 local_58;
  undefined4 local_50;
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
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004015d6;
  uStack_18 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_18;
  local_8 = param_1 & 1;
  piVar2 = (int *)(param_1 & 0xfffffffe);
  local_10 = &stack0xfffffef0;
  local_c = &DAT_00401080;
  iVar1 = *piVar2;
  (**(code **)(iVar1 + 4))(piVar2);
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
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
  local_50 = 0;
  local_60[0] = 0;
  local_70[0] = 0;
  local_80[0] = 0;
  local_90[0] = 0;
  local_a0[0] = 0;
  local_b0[0] = 0;
  local_c0 = 0;
  local_d4[0] = 0;
  local_e4[6] = 0;
  local_e4[7] = 0;
  local_e4[4] = 0;
  local_e4[5] = 0;
  local_e4[2] = 0;
  local_e4[3] = 0;
  local_e4[0] = 0;
  local_e4[1] = 0;
  __vbaStrCopy();
  __vbaStrCopy();
  if (param_4 == 0) {
    DAT_0041eca8 = 0;
    DAT_0041ecaa = 0xffff;
    local_d4[0] = 0x1c2;
    FUN_00419e70((short *)local_d4,(short *)&DAT_0041ecb6);
    __vbaStrMove();
    local_e4[6] = -1;
    local_e4[7] = -1;
    local_34 = 0;
    __vbaStrCat(local_20,L"Transferred ");
    uVar3 = __vbaStrMove();
    uVar3 = __vbaStrMove(uVar3);
    __vbaStrCat(uVar3);
    uVar3 = __vbaStrMove();
    __vbaStrCat(local_1c,uVar3);
    __vbaStrMove();
    FUN_00416390(&local_30,&param_4,local_e4 + 6);
    __vbaFreeStrList(5,&local_24,&local_28,&local_2c,&local_30,&local_34);
  }
  else {
    DAT_0041eca8 = 0xffff;
    DAT_0041ecaa = 0;
    local_d4[0] = 0x1a4;
    FUN_00419e70((short *)local_d4,(short *)&DAT_0041ecb6);
    __vbaStrMove();
    local_e4[6] = 0x1c2;
    local_e4[7] = 0;
    FUN_00419e70(local_e4 + 6,(short *)&DAT_0041ecb6);
    __vbaStrMove();
    local_e4[4] = 500;
    local_e4[5] = 0;
    FUN_00419e70(local_e4 + 4,(short *)&DAT_0041ecb6);
    __vbaStrMove();
    local_b8 = &param_4;
    local_58 = 0x80020004;
    local_60[0] = 10;
    local_c0 = 0x4002;
    Ordinal_660(local_70,&local_c0,local_60,1,1);
    local_e4[2] = 0x1fe;
    local_e4[3] = 0;
    FUN_00419e70(local_e4 + 2,(short *)&DAT_0041ecb6);
    __vbaStrMove();
    local_e4[0] = -1;
    local_e4[1] = -1;
    local_40 = 0;
    local_44 = 0;
    local_48 = 0;
    uVar3 = __vbaStrMove();
    __vbaStrCat(local_20,uVar3);
    uVar3 = __vbaStrMove();
    uVar3 = __vbaStrMove(uVar3);
    __vbaStrCat(uVar3);
    uVar3 = __vbaStrMove();
    __vbaStrCat(local_1c,uVar3);
    uVar3 = __vbaStrMove();
    uVar3 = __vbaStrMove(uVar3);
    local_78 = __vbaStrCat(uVar3);
    local_98 = local_4c;
    local_80[0] = 8;
    local_a0[0] = 8;
    local_4c = 0;
    uVar3 = __vbaVarAdd(local_90,local_70,local_80);
    uVar3 = __vbaVarAdd(local_b0,local_a0,uVar3);
    __vbaStrVarMove(uVar3);
    __vbaStrMove();
    FUN_00416390(&local_3c,&param_4,local_e4);
    __vbaFreeStrList(0xb,&local_24,&local_28,&local_2c,&local_30,&local_34,&local_38,&local_3c,
                     &local_40,&local_44,&local_48,&local_4c);
    __vbaFreeVarList(6,local_60,local_80,local_70,local_90,local_a0,local_b0);
    local_c0 = 8;
    local_b8 = (short *)local_1c;
    uVar3 = (**(code **)(iVar1 + 0x3fc))(piVar2,0xd,8,local_bc,local_1c,local_b4);
    uVar3 = __vbaObjSet(&local_50,uVar3);
    __vbaLateIdSt(uVar3);
    __vbaFreeObj();
    local_d4[0] = 0xd;
    FUN_00418960((undefined2 *)local_d4);
  }
  local_c0 = 2;
  local_b8 = (short *)0x0;
  uVar3 = (**(code **)(iVar1 + 0x3fc))(piVar2,7,2,local_bc,0,local_b4);
  uVar3 = __vbaObjSet(&local_50,uVar3);
  __vbaLateIdSt(uVar3);
  __vbaFreeObj();
  local_8 = 0;
  __vbaFreeStr(&LAB_0040d25a);
                    /* WARNING: Could not recover jumptable at 0x0040d257. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __vbaFreeStr();
  return;
}


// ---- FUN_0040d280 @ 0040d280

undefined4 FUN_0040d280(uint param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004015d6;
  local_18 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_18;
  local_10 = &stack0xffffffd0;
  piVar2 = (int *)(param_1 & 0xfffffffe);
  local_8 = param_1 & 1;
  iVar1 = *piVar2;
  local_c = &DAT_00401090;
  (**(code **)(iVar1 + 4))(piVar2);
  iVar1 = (**(code **)(iVar1 + 0x718))(piVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar2,&DAT_00407968,0x718);
  }
  local_8 = 0;
  (**(code **)(*piVar2 + 8))(piVar2);
  *unaff_FS_OFFSET = local_18;
  return local_8;
}


// ---- FUN_0040d310 @ 0040d310

void __cdecl FUN_0040d310(uint param_1)

{
  code *pcVar1;
  code *pcVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *unaff_FS_OFFSET;
  short local_58 [4];
  undefined4 local_50;
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
  undefined4 uStack_20;
  undefined *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  uint local_10;
  undefined4 local_c;
  
  puStack_1c = &DAT_004015d6;
  uStack_20 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_20;
  local_18 = &stack0xffffff60;
  local_14 = &DAT_00401098;
  local_10 = param_1 & 1;
  piVar7 = (int *)(param_1 & 0xfffffffe);
  local_c = 0;
  iVar5 = *piVar7;
  (**(code **)(iVar5 + 4))(piVar7);
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  local_44 = 0;
  local_58[2] = 0;
  local_58[3] = 0;
  local_58[0] = 0;
  local_58[1] = 0;
  __vbaOnError(1);
  pcVar1 = *(code **)(iVar5 + 0x30c);
  uVar3 = (*pcVar1)(piVar7,5,0x4008,local_50,&DAT_0041ec84,local_48);
  uVar3 = __vbaObjSet(&local_30,uVar3);
  __vbaLateIdSt(uVar3);
  __vbaFreeObj();
  uVar3 = (*pcVar1)(piVar7,3,8,local_50,L"All Files (*.*)|*.*|Log Files (*.log)|*.log",local_48);
  uVar3 = __vbaObjSet(&local_30,uVar3);
  __vbaLateIdSt(uVar3);
  __vbaFreeObj();
  uVar3 = (*pcVar1)(piVar7,0x17,2,local_50,2,local_48);
  uVar3 = __vbaObjSet(&local_30,uVar3);
  __vbaLateIdSt(uVar3);
  __vbaFreeObj();
  pcVar2 = *(code **)(iVar5 + 0x378);
  uVar3 = (*pcVar2)(piVar7);
  piVar4 = (int *)__vbaObjSet(&local_30,uVar3);
  iVar5 = (**(code **)(*piVar4 + 0x50))(piVar4,&local_28);
  if (iVar5 < 0) {
    __vbaHresultCheckObj(iVar5,piVar4,&DAT_004086ac,0x50);
  }
  local_3c = local_28;
  local_28 = 0;
  local_44 = 8;
  uVar3 = (*pcVar1)(piVar7,1,8,local_40,local_3c,local_38);
  uVar3 = __vbaObjSet(&local_34,uVar3);
  __vbaLateIdSt(uVar3);
  __vbaFreeObjList(2,&local_30,&local_34);
  __vbaFreeVar();
  local_58[0] = 10;
  local_58[1] = 0;
  local_3c = FUN_00419e70(local_58,(short *)&DAT_0041ecb6);
  local_44 = 8;
  uVar3 = (*pcVar1)(piVar7,2,8,local_40,local_3c,local_38);
  uVar3 = __vbaObjSet(&local_30,uVar3);
  __vbaLateIdSt(uVar3);
  __vbaFreeObj();
  __vbaFreeVar();
  uVar3 = (*pcVar1)(piVar7,4,8,local_50,L".log",local_48);
  uVar3 = __vbaObjSet(&local_30,uVar3);
  __vbaLateIdSt(uVar3);
  __vbaFreeObj();
  uVar3 = (*pcVar1)(piVar7,0x12,0xb,local_50,0xffffffff,local_48);
  uVar3 = __vbaObjSet(&local_30,uVar3);
  __vbaLateIdSt(uVar3);
  __vbaFreeObj();
  uVar3 = (*pcVar1)(piVar7,7,3,local_50,4,local_48);
  uVar3 = __vbaObjSet(&local_30,uVar3);
  __vbaLateIdSt(uVar3);
  __vbaFreeObj();
  uVar3 = (*pcVar1)(piVar7,0x1f,0);
  uVar3 = __vbaObjSet(&local_30,uVar3);
  __vbaLateIdCall(uVar3);
  __vbaFreeObj();
  uVar3 = (*pcVar2)(piVar7);
  piVar4 = (int *)__vbaObjSet(&local_34,uVar3);
  iVar5 = *piVar4;
  uVar3 = (*pcVar1)(piVar7,0x1d,0);
  uVar3 = __vbaObjSet(&local_30,uVar3);
  uVar3 = __vbaLateIdCallLd(&local_44,uVar3);
  __vbaStrVarMove(uVar3);
  uVar3 = __vbaStrMove();
  iVar5 = (**(code **)(iVar5 + 0x54))(piVar4,uVar3);
  if (iVar5 < 0) {
    __vbaHresultCheckObj(iVar5,piVar4,&DAT_004086ac,0x54);
  }
  __vbaFreeStr();
  __vbaFreeObjList(2,&local_30,&local_34);
  __vbaFreeVar();
  if (DAT_0041ecb4 == 0) {
    FUN_004135c0();
  }
  __vbaOnError(0);
  __vbaOnError(2);
  local_3c = 0x80020004;
  local_44 = 10;
  uVar3 = Ordinal_648(&local_44);
  local_24 = uVar3;
  __vbaFreeVar();
  uVar6 = (*pcVar2)(piVar7);
  piVar4 = (int *)__vbaObjSet(&local_30,uVar6);
  iVar5 = (**(code **)(*piVar4 + 0x50))(piVar4,&local_28);
  if (iVar5 < 0) {
    __vbaHresultCheckObj(iVar5,piVar4,&DAT_004086ac,0x50);
  }
  __vbaStrCat(local_28,DAT_0041ec84);
  uVar6 = __vbaStrMove();
  __vbaFileOpen(1,0xffffffff,uVar3,uVar6);
  __vbaFreeStrList(2,&local_28,&local_2c);
  __vbaFreeObj();
  __vbaFileClose(uVar3);
  FUN_00416840();
  __vbaOnError(0);
  __vbaExitProc();
  return;
}


// ---- FUN_0040d8d0 @ 0040d8d0

void __cdecl FUN_0040d8d0(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *unaff_FS_OFFSET;
  short local_44 [2];
  undefined4 local_40;
  short local_3c [2];
  undefined4 local_38 [4];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004015d6;
  uStack_18 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_18;
  local_8 = param_1 & 1;
  piVar3 = (int *)(param_1 & 0xfffffffe);
  local_10 = &stack0xffffff9c;
  local_c = &DAT_004010c8;
  iVar1 = *piVar3;
  (**(code **)(iVar1 + 4))(piVar3);
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_38[0] = 0;
  local_40 = 0;
  local_44[0] = 0;
  local_44[1] = 0;
  local_3c[0] = 0x186;
  local_3c[1] = 0;
  FUN_00419e70(local_3c,(short *)&DAT_0041ecb6);
  __vbaStrMove();
  local_40 = __vbaI2I4();
  local_24 = 0;
  __vbaStrMove();
  local_1c = FUN_00411fc0(&local_20,(short *)&local_40);
  __vbaFreeStrList(2,&local_20,&local_24);
  if ((short)local_1c != 7) {
    FUN_00416630();
    local_3c[0] = 400;
    local_3c[1] = 0;
    FUN_00419e70(local_3c,(short *)&DAT_0041ecb6);
    __vbaStrMove();
    uVar2 = (**(code **)(iVar1 + 0x3fc))(piVar3,8,0);
    uVar2 = __vbaObjSet(&local_28,uVar2);
    __vbaLateIdCallLd(local_38,uVar2);
    local_44[0] = -1;
    local_44[1] = -1;
    local_40 = __vbaI2Var(local_38);
    local_24 = 0;
    __vbaStrMove();
    FUN_00416390(&local_20,&local_40,local_44);
    __vbaFreeStrList(2,&local_20,&local_24);
    __vbaFreeObj();
    __vbaFreeVar();
    FUN_00416840();
  }
  return;
}


// ---- FUN_0040da90 @ 0040da90

void __cdecl FUN_0040da90(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004015d6;
  uStack_18 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_18;
  local_10 = &stack0xffffffac;
  piVar5 = (int *)(param_1 & 0xfffffffe);
  local_8 = param_1 & 1;
  iVar1 = *piVar5;
  local_c = &DAT_004010d8;
  (**(code **)(iVar1 + 4))(piVar5);
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  uVar2 = (**(code **)(iVar1 + 0x34c))(piVar5);
  piVar3 = (int *)__vbaObjSet(&local_20,uVar2);
  iVar4 = (**(code **)(*piVar3 + 0xa0))(piVar3,&local_1c);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar3,&DAT_004086bc,0xa0);
  }
  uVar2 = local_1c;
  local_1c = 0;
  uVar2 = (**(code **)(iVar1 + 0x3fc))(piVar5,0x17,1,8,local_30,uVar2,local_28);
  uVar2 = __vbaObjSet(&local_24,uVar2);
  __vbaLateIdCall(uVar2);
  __vbaFreeObjList(2,&local_20,&local_24);
  __vbaFreeVar();
  if (DAT_0041ecb4 == 0) {
    FUN_004135c0();
  }
  return;
}


// ---- FUN_0040dbe0 @ 0040dbe0

void __cdecl FUN_0040dbe0(uint param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004015d6;
  uStack_18 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_18;
  local_10 = &stack0xffffffc4;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  local_8 = param_1 & 1;
  local_c = &DAT_004010e8;
  (**(code **)(*piVar4 + 4))(piVar4);
  local_1c = 0;
  if (DAT_0041f138 == (int *)0x0) {
    __vbaNew2(&DAT_0040867c,&DAT_0041f138);
  }
  piVar1 = DAT_0041f138;
  iVar3 = *DAT_0041f138;
  uVar2 = __vbaObjSetAddref(&local_1c,piVar4);
  iVar3 = (**(code **)(iVar3 + 0x10))(piVar1,uVar2);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar1,&DAT_0040866c,0x10);
  }
  __vbaFreeObj();
  return;
}


// ---- FUN_0040dcc0 @ 0040dcc0

void __cdecl FUN_0040dcc0(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_30 [4];
  undefined4 local_20 [2];
  undefined4 uStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004015d6;
  uStack_18 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_18;
  local_10 = &stack0xffffffb4;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  local_8 = param_1 & 1;
  iVar2 = *piVar4;
  local_c = &DAT_004010f8;
  (**(code **)(iVar2 + 4))(piVar4);
  local_20[0] = 0;
  local_30[0] = 0;
  if (DAT_0041ecb4 == 0) {
    FUN_004135c0();
  }
  pcVar3 = __vbaFreeObj_exref;
  if (DAT_0041ec9e != 0) {
    uVar1 = (**(code **)(iVar2 + 0x3fc))(piVar4,0x1e,0);
    uVar1 = __vbaObjSet(local_20,uVar1);
    uVar1 = __vbaLateIdCallLd(local_30,uVar1);
    __vbaBoolVar(uVar1);
    pcVar3 = __vbaFreeObj_exref;
    __vbaFreeObj();
    __vbaFreeVar();
  }
  uVar1 = (**(code **)(iVar2 + 0x308))(piVar4);
  piVar4 = (int *)__vbaObjSet(local_20,uVar1);
  iVar2 = (**(code **)(*piVar4 + 0x5c))(piVar4,0);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar4,&DAT_00408768,0x5c);
  }
  (*pcVar3)();
  if (DAT_0041f138 == (int *)0x0) {
    __vbaNew2(&DAT_0040867c,&DAT_0041f138);
  }
  piVar4 = DAT_0041f138;
  if (DAT_0041ecdc == 0) {
    __vbaNew2(&DAT_004039e4,&DAT_0041ecdc);
  }
  iVar2 = *piVar4;
  uVar1 = __vbaObjSetAddref(local_20,DAT_0041ecdc);
  iVar2 = (**(code **)(iVar2 + 0x10))(piVar4,uVar1);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar4,&DAT_0040866c,0x10);
  }
  (*pcVar3)();
  return;
}


// ---- FUN_0040de50 @ 0040de50

void __cdecl FUN_0040de50(uint param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *unaff_FS_OFFSET;
  short local_44 [2];
  undefined4 local_40;
  short local_3c [2];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004015d6;
  uStack_18 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_18;
  local_10 = &stack0xffffff90;
  piVar5 = (int *)(param_1 & 0xfffffffe);
  local_8 = param_1 & 1;
  iVar4 = *piVar5;
  local_c = &DAT_00401108;
  (**(code **)(iVar4 + 4))(piVar5);
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_38 = 0;
  local_40 = 0;
  local_44[0] = 0;
  local_44[1] = 0;
  DAT_0041eca0 = 0;
  local_3c[0] = 0x14;
  local_3c[1] = 0;
  FUN_00419e70(local_3c,(short *)&DAT_0041ecb6);
  __vbaStrMove();
  uVar1 = (**(code **)(iVar4 + 0x3fc))(piVar5,8,0);
  uVar1 = __vbaObjSet(&local_24,uVar1);
  __vbaLateIdCallLd(&local_38,uVar1);
  local_44[0] = 0;
  local_44[1] = 0;
  local_40 = __vbaI2Var(&local_38);
  local_20 = 0;
  __vbaStrMove();
  FUN_00416390(&local_1c,&local_40,local_44);
  __vbaFreeStrList(2,&local_1c,&local_20);
  __vbaFreeObj();
  __vbaFreeVar();
  uVar1 = (**(code **)(iVar4 + 0x360))(piVar5);
  piVar2 = (int *)__vbaObjSet(&local_24,uVar1);
  iVar3 = (**(code **)(*piVar2 + 0xa0))(piVar2,&local_1c);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_004086bc,0xa0);
  }
  uVar1 = local_1c;
  local_38 = 8;
  local_30 = local_1c;
  local_1c = 0;
  uVar1 = (**(code **)(iVar4 + 0x310))(piVar5,3,8,local_34,uVar1,local_2c);
  uVar1 = __vbaObjSet(&local_28,uVar1);
  __vbaLateIdSt(uVar1);
  __vbaFreeObjList(2,&local_24,&local_28);
  __vbaFreeVar();
  if (DAT_0041ecae == 0) {
    uVar1 = (**(code **)(iVar4 + 0x368))(piVar5);
    piVar2 = (int *)__vbaObjSet(&local_24,uVar1);
    iVar3 = (**(code **)(*piVar2 + 0xa0))(piVar2,&local_1c);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar2,&DAT_004086bc,0xa0);
    }
    local_1c = 0;
    __vbaStrMove();
    FUN_004160e0(&local_20);
    __vbaStrMove();
    __vbaFreeStr();
    __vbaFreeObj();
    uVar1 = (**(code **)(iVar4 + 0x364))(piVar5);
    piVar2 = (int *)__vbaObjSet(&local_24,uVar1);
    iVar4 = (**(code **)(*piVar2 + 0xa0))(piVar2,&local_1c);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar2,&DAT_004086bc,0xa0);
    }
    local_1c = 0;
    __vbaStrMove();
    FUN_004160e0(&local_20);
    __vbaStrMove();
    __vbaFreeStr();
    __vbaFreeObj();
  }
  if (DAT_0041ecb4 == 0) {
    FUN_004135c0();
  }
  return;
}


// ---- FUN_0040e140 @ 0040e140

void __cdecl FUN_0040e140(uint param_1)

{
  code *pcVar1;
  short sVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined4 *unaff_FS_OFFSET;
  short local_50 [2];
  undefined4 local_4c;
  short local_48 [2];
  undefined4 local_44 [4];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004015d6;
  uStack_18 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_18;
  piVar6 = (int *)(param_1 & 0xfffffffe);
  local_10 = &stack0xffffff88;
  local_8 = param_1 & 1;
  iVar5 = *piVar6;
  local_c = &DAT_00401118;
  (**(code **)(iVar5 + 4))(piVar6);
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  local_44[0] = 0;
  local_4c = 0;
  local_50[0] = 0;
  local_50[1] = 0;
  local_48[0] = 0x28;
  local_48[1] = 0;
  FUN_00419e70(local_48,(short *)&DAT_0041ecb6);
  __vbaStrMove();
  pcVar1 = *(code **)(iVar5 + 0x3fc);
  uVar3 = (*pcVar1)(piVar6,8,0);
  uVar3 = __vbaObjSet(&local_30,uVar3);
  __vbaLateIdCallLd(local_44,uVar3);
  local_50[0] = 0;
  local_50[1] = 0;
  local_4c = __vbaI2Var(local_44);
  local_20 = 0;
  __vbaStrMove();
  FUN_00416390(&local_1c,&local_4c,local_50);
  __vbaFreeStrList(2,&local_1c,&local_20);
  __vbaFreeObj();
  __vbaFreeVar();
  uVar3 = (*pcVar1)(piVar6,0x1e,0);
  uVar3 = __vbaObjSet(&local_30,uVar3);
  uVar3 = __vbaLateIdCallLd(local_44,uVar3);
  sVar2 = __vbaBoolVar(uVar3);
  __vbaFreeObj();
  __vbaFreeVar();
  if (sVar2 == 0) {
    uVar3 = (**(code **)(*piVar6 + 0x368))(piVar6);
    piVar4 = (int *)__vbaObjSet(&local_30,uVar3);
    iVar5 = (**(code **)(*piVar4 + 0xa0))(piVar4,&local_1c);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,piVar4,&DAT_004086bc,0xa0);
    }
    local_48[0] = 0x3c;
    local_48[1] = 0;
    FUN_00419e70(local_48,(short *)&DAT_0041ecb6);
    __vbaStrMove();
    uVar3 = (*pcVar1)(piVar6,8,0);
    uVar3 = __vbaObjSet(&local_34,uVar3);
    __vbaLateIdCallLd(local_44,uVar3);
    local_50[0] = -1;
    local_50[1] = -1;
    local_4c = __vbaI2Var(local_44);
    local_2c = 0;
    __vbaStrCat(&DAT_004088dc,local_1c);
    uVar3 = __vbaStrMove();
    uVar3 = __vbaStrMove(uVar3);
    __vbaStrCat(uVar3);
    __vbaStrMove();
    FUN_00416390(&local_28,&local_4c,local_50);
    __vbaFreeStrList(5,&local_1c,&local_20,&local_24,&local_28,&local_2c);
    __vbaFreeObjList(2,&local_30,&local_34);
    __vbaFreeVar();
  }
  return;
}


// ---- FUN_0040e410 @ 0040e410

void FUN_0040e410(uint param_1)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *unaff_FS_OFFSET;
  short local_48 [2];
  undefined4 local_44 [2];
  undefined4 local_3c;
  undefined4 local_34;
  undefined4 local_30 [4];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004015d6;
  uStack_18 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_18;
  local_10 = &stack0xffffffa4;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  local_8 = param_1 & 1;
  iVar1 = *piVar4;
  local_c = &DAT_00401128;
  (**(code **)(iVar1 + 4))(piVar4);
  pcVar2 = *(code **)(iVar1 + 0x3fc);
  local_1c = 0;
  local_20 = 0;
  local_30[0] = 0;
  local_44[0] = 0;
  local_48[0] = 0;
  local_48[1] = 0;
  uVar3 = (*pcVar2)(piVar4,0x1c,1,2,local_3c,9,local_34);
  uVar3 = __vbaObjSet(&local_20,uVar3);
  uVar3 = __vbaLateIdCallLd(local_30,uVar3);
  __vbaStrVarMove(uVar3);
  __vbaStrMove();
  __vbaFreeObj();
  __vbaFreeVar();
  uVar3 = (*pcVar2)(piVar4,8,0);
  uVar3 = __vbaObjSet(&local_20,uVar3);
  __vbaLateIdCallLd(local_30,uVar3);
  local_48[0] = 0;
  local_48[1] = 0;
  local_44[0] = __vbaI2Var(local_30);
  FUN_00416390(&local_1c,local_44,local_48);
  __vbaFreeObj();
  __vbaFreeVar();
  local_8 = 0;
                    /* WARNING: Could not recover jumptable at 0x0040e53d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __vbaFreeStr();
  return;
}


// ---- FUN_0040e570 @ 0040e570

undefined4 FUN_0040e570(uint param_1)

{
  int *piVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004015d6;
  local_18 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_18;
  piVar1 = (int *)(param_1 & 0xfffffffe);
  local_10 = &stack0xffffffd4;
  local_8 = param_1 & 1;
  local_c = &DAT_00401138;
  (**(code **)(*piVar1 + 4))(piVar1);
  if (DAT_0041ecb4 == 0) {
    FUN_004135c0();
  }
  local_8 = 0;
  (**(code **)(*piVar1 + 8))(piVar1);
  *unaff_FS_OFFSET = local_18;
  return local_8;
}


// ---- FUN_0040e5f0 @ 0040e5f0

void __cdecl FUN_0040e5f0(int *param_1,short *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined4 *unaff_FS_OFFSET;
  bool bVar7;
  undefined4 uVar8;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_004015d6;
  uStack_14 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_14;
  local_c = &stack0xffffffbc;
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  iVar6 = *param_1;
  DAT_0041ec9e = *param_2;
  local_8 = &DAT_00401140;
  uVar2 = (**(code **)(iVar6 + 0x354))(param_1);
  piVar3 = (int *)__vbaObjSet(&local_18,uVar2);
  iVar4 = (**(code **)(*piVar3 + 0x8c))(piVar3,CONCAT22(extraout_var,DAT_0041ec9e));
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar3,&DAT_004086cc,0x8c);
  }
  __vbaFreeObj();
  uVar2 = (**(code **)(iVar6 + 0x348))(param_1);
  piVar3 = (int *)__vbaObjSet(&local_18,uVar2);
  iVar4 = (**(code **)(*piVar3 + 0x8c))(piVar3,CONCAT22(extraout_var_00,DAT_0041ec9e));
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar3,&DAT_004086cc,0x8c);
  }
  __vbaFreeObj();
  uVar2 = (**(code **)(iVar6 + 0x344))(param_1);
  piVar3 = (int *)__vbaObjSet(&local_18,uVar2);
  iVar4 = (**(code **)(*piVar3 + 0x8c))(piVar3,CONCAT22(extraout_var_01,DAT_0041ec9e));
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar3,&DAT_004088e4,0x8c);
  }
  __vbaFreeObj();
  uVar2 = (**(code **)(iVar6 + 0x304))(param_1);
  piVar3 = (int *)__vbaObjSet(&local_18,uVar2);
  iVar4 = (**(code **)(*piVar3 + 0x8c))(piVar3,CONCAT22(extraout_var_02,DAT_0041ec9e));
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar3,&DAT_004086cc,0x8c);
  }
  __vbaFreeObj();
  pcVar1 = *(code **)(iVar6 + 0x388);
  if (DAT_0041ec9e == -1) {
    uVar2 = (*pcVar1)(param_1);
    piVar3 = (int *)__vbaObjSet(&local_1c,uVar2);
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar2 = (**(code **)(*DAT_0041e010 + 0x380))(DAT_0041e010);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar2);
    iVar6 = (**(code **)(*piVar5 + 0x90))(piVar5,&local_20);
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_004088f4,0x90);
    }
    iVar6 = (**(code **)(*piVar3 + 0x8c))(piVar3,local_20);
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar3,&DAT_004086cc,0x8c);
    }
    __vbaFreeObjList(2,&local_18,&local_1c);
  }
  else {
    uVar2 = (*pcVar1)(param_1);
    piVar3 = (int *)__vbaObjSet(&local_18,uVar2);
    iVar6 = (**(code **)(*piVar3 + 0x8c))(piVar3,0);
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar3,&DAT_004086cc,0x8c);
    }
    __vbaFreeObj();
  }
  uVar2 = (*pcVar1)(param_1);
  piVar3 = (int *)__vbaObjSet(&local_18,uVar2);
  iVar6 = (**(code **)(*piVar3 + 0x88))(piVar3,&local_20);
  if (iVar6 < 0) {
    __vbaHresultCheckObj(iVar6,piVar3,&DAT_004086cc,0x88);
  }
  bVar7 = (short)local_20 == -1;
  __vbaFreeObj();
  if (bVar7) {
    uVar2 = (*pcVar1)(param_1);
    piVar3 = (int *)__vbaObjSet(&local_18,uVar2);
    iVar6 = (**(code **)(*piVar3 + 100))(piVar3,0xff);
  }
  else {
    uVar2 = (*pcVar1)(param_1);
    piVar3 = (int *)__vbaObjSet(&local_18,uVar2);
    uVar8 = 0xf;
    uVar2 = FUN_00408498();
    __vbaSetSystemError(uVar8);
    iVar6 = (**(code **)(*piVar3 + 100))(piVar3,uVar2);
  }
  if (iVar6 < 0) {
    __vbaHresultCheckObj(iVar6,piVar3,&DAT_004086cc,100);
  }
  __vbaFreeObj();
  return;
}


// ---- FUN_0040e920 @ 0040e920

void FUN_0040e920(uint param_1,undefined4 param_2,short param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *unaff_FS_OFFSET;
  short local_a0 [2];
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_8c;
  undefined4 local_78 [2];
  short *local_70;
  undefined4 local_68 [4];
  undefined4 local_58 [2];
  undefined4 local_50;
  undefined4 local_48 [4];
  undefined4 local_38 [2];
  undefined4 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004015d6;
  uStack_18 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_18;
  local_10 = &stack0xffffff38;
  piVar5 = (int *)(param_1 & 0xfffffffe);
  local_8 = param_1 & 1;
  iVar3 = *piVar5;
  local_c = &DAT_00401150;
  (**(code **)(iVar3 + 4))(piVar5);
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_38[0] = 0;
  local_48[0] = 0;
  local_58[0] = 0;
  local_68[0] = 0;
  local_78[0] = 0;
  local_98 = 0;
  local_9c = 0;
  local_a0[0] = 0;
  local_a0[1] = 0;
  __vbaStrCopy();
  if (param_3 == 0) {
    __vbaStrCopy();
    uVar2 = (**(code **)(iVar3 + 0x34c))(piVar5);
    piVar5 = (int *)__vbaObjSet(&local_28,uVar2);
    iVar3 = (**(code **)(*piVar5 + 0xa4))(piVar5,local_1c);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar5,&DAT_004086bc,0xa4);
    }
    __vbaFreeObj();
    if (DAT_0041ecb4 == 0) {
      local_9c = 0x46;
      FUN_00419e70((short *)&local_9c,(short *)&DAT_0041ecb6);
      __vbaStrMove();
      local_a0[0] = 0;
      local_a0[1] = 0;
      local_24 = 0;
      __vbaStrMove();
      FUN_00416390(&local_20,&param_3,local_a0);
      __vbaFreeStrList(2,&local_20,&local_24);
      local_9c = 1;
      FUN_00418960((undefined2 *)&local_9c);
    }
  }
  else {
    pcVar1 = *(code **)(iVar3 + 0x344);
    uVar2 = (*pcVar1)(piVar5);
    piVar4 = (int *)__vbaObjSet(&local_28,uVar2);
    iVar3 = (**(code **)(*piVar4 + 0x1e8))(piVar4);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar4,&DAT_004088e4,0x1e8);
    }
    __vbaFreeObj();
    local_9c = 100;
    FUN_00419e70((short *)&local_9c,(short *)&DAT_0041ecb6);
    __vbaStrMove();
    local_70 = &param_3;
    local_30 = 0x80020004;
    local_38[0] = 10;
    local_78[0] = 0x4002;
    Ordinal_660(local_48,local_78,local_38,1,1);
    uVar2 = (*pcVar1)(piVar5);
    piVar4 = (int *)__vbaObjSet(&local_28,uVar2);
    local_50 = local_24;
    local_24 = 0;
    iVar3 = *piVar4;
    local_58[0] = 8;
    uVar2 = __vbaVarAdd(local_68,local_48,local_58,10,local_94,0x80020004,local_8c);
    uVar2 = __vbaStrVarVal(&local_20,uVar2);
    iVar3 = (**(code **)(iVar3 + 0x1ec))(piVar4,uVar2);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar4,&DAT_004088e4,0x1ec);
    }
    __vbaFreeStrList(2,&local_20,&local_24);
    __vbaFreeObj();
    __vbaFreeVarList(4,local_38,local_58,local_48,local_68);
    uVar2 = (*pcVar1)(piVar5);
    piVar5 = (int *)__vbaObjSet(&local_28,uVar2);
    iVar3 = (**(code **)(*piVar5 + 0x8c))(piVar5,0);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar5,&DAT_004088e4,0x8c);
    }
    __vbaFreeObj();
  }
  local_8 = 0;
                    /* WARNING: Could not recover jumptable at 0x0040ec5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __vbaFreeStr();
  return;
}


// ---- FUN_0040ec90 @ 0040ec90

/* WARNING: Type propagation algorithm not settling */

void FUN_0040ec90(uint param_1,undefined4 param_2,short param_3)

{
  code *pcVar1;
  uint uVar2;
  undefined1 uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  undefined2 extraout_var;
  code *pcVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined4 *unaff_FS_OFFSET;
  code *pcStack_174;
  int *piStack_170;
  int *piStack_16c;
  int iStack_168;
  int *piStack_164;
  int *piStack_160;
  int *piStack_15c;
  int *piStack_158;
  int *piStack_154;
  int *piStack_150;
  int *piStack_14c;
  int *piStack_148;
  int *piStack_144;
  int *piStack_140;
  int *piStack_13c;
  undefined4 *puStack_138;
  int *piStack_134;
  int *piStack_130;
  int *piStack_12c;
  int *piStack_120;
  int *piStack_11c;
  undefined *puStack_118;
  int *piStack_114;
  int *piStack_110;
  short local_b8 [6];
  int *local_ac;
  int *local_a4;
  undefined4 local_90;
  int *local_8c;
  short *local_88;
  undefined4 local_84;
  undefined4 local_80 [4];
  undefined4 local_70 [2];
  int local_68;
  int local_60 [4];
  int local_50 [2];
  undefined4 local_48;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  uint local_30;
  undefined4 local_2c;
  undefined4 local_28;
  uint local_20;
  int *local_1c;
  undefined4 uStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004015d6;
  uStack_18 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_18;
  local_8 = param_1 & 1;
  piVar9 = (int *)(param_1 & 0xfffffffe);
  local_10 = &stack0xffffff0c;
  local_c = &DAT_00401160;
  (**(code **)(*piVar9 + 4))();
  local_1c = (int *)0x0;
  local_2c = 0;
  local_34 = 0;
  local_38 = 0;
  local_3c = 0;
  local_40 = 0;
  local_50[0] = 0;
  local_60[0] = 0;
  local_70[0] = 0;
  local_80[0] = 0;
  local_90 = 0;
  local_b8[4] = 0;
  local_b8[5] = 0;
  local_b8[2] = 0;
  local_b8[3] = 0;
  local_b8[0] = 0;
  local_b8[1] = 0;
  __vbaStrCopy();
  local_b8[2] = 0x78;
  local_b8[3] = 0;
  FUN_00419e70(local_b8 + 2,(short *)&DAT_0041ecb6);
  pcVar7 = __vbaStrMove_exref;
  __vbaStrMove();
  local_b8[0] = 0;
  local_b8[1] = 0;
  local_38 = 0;
  __vbaStrMove();
  piStack_110 = (int *)0x40ed64;
  FUN_00416390(&local_34,&param_3,local_b8);
  piStack_110 = (int *)0x40ed74;
  __vbaFreeStrList();
  pcVar1 = *(code **)(*piVar9 + 0x344);
  (*pcVar1)();
  piStack_110 = (int *)0x40ed93;
  piVar4 = (int *)__vbaObjSet();
  piStack_114 = (int *)0x40eda2;
  piStack_110 = piVar4;
  piVar5 = (int *)(**(code **)(*piVar4 + 0x1e8))();
  if ((int)piVar5 < 0) {
    piStack_114 = (int *)0x1e8;
    puStack_118 = &DAT_004088e4;
    piStack_120 = piVar5;
    piStack_11c = piVar4;
    __vbaHresultCheckObj();
  }
  piStack_114 = (int *)0x40edc7;
  __vbaFreeObj();
  piStack_114 = piVar9;
  if (param_3 == 0) {
    puStack_118 = (undefined *)0x40edd8;
    puStack_118 = (undefined *)(*pcVar1)();
    piStack_11c = &local_3c;
    piStack_120 = (int *)0x40ede3;
    piVar5 = (int *)__vbaObjSet();
    piStack_120 = (int *)0xffffffff;
    piVar4 = piVar5;
    iVar6 = (**(code **)(*piVar5 + 0x8c))();
    if (iVar6 < 0) {
      piStack_12c = (int *)&DAT_004088e4;
      puStack_138 = (undefined4 *)0x40ee10;
      piStack_134 = (int *)iVar6;
      piStack_130 = piVar5;
      __vbaHresultCheckObj();
    }
    __vbaFreeObj();
    piStack_12c = (int *)0x40ee23;
    __vbaLenBstr();
    piStack_12c = (int *)0x40ee2b;
    local_28 = __vbaI2I4();
    piStack_12c = (int *)0x40ee3c;
    __vbaStrCopy();
    local_20 = 1;
    uVar2 = local_20;
    while( true ) {
      local_20 = uVar2;
      if ((short)local_28 < (short)local_20) break;
      piStack_130 = (int *)(int)(short)local_20;
      piStack_12c = local_50;
      piStack_134 = (int *)local_2c;
      local_48 = 1;
      local_50[0] = 2;
      puStack_138 = (undefined4 *)0x40ee6e;
      Ordinal_631();
      puStack_138 = (undefined4 *)0x40ee75;
      puStack_138 = (undefined4 *)__vbaStrMove();
      piStack_13c = (int *)0x40ee7c;
      Ordinal_516();
      piStack_13c = (int *)0x40ee84;
      uVar3 = __vbaUI1I2();
      local_30 = CONCAT31(local_30._1_3_,uVar3);
      piStack_13c = (int *)0x40ee90;
      __vbaFreeStr();
      piStack_13c = (int *)0x40ee99;
      __vbaFreeVar();
      if ((char)local_30 == '\r') {
        piStack_13c = (int *)0x1;
        piStack_140 = local_1c;
        piStack_144 = (int *)0x40eeaf;
        Ordinal_616();
        piStack_144 = (int *)0x40eeb6;
        piStack_144 = (int *)__vbaStrMove();
        piStack_148 = (int *)0x40eebd;
        Ordinal_527();
        piStack_148 = (int *)0x40eec4;
        piStack_148 = (int *)__vbaStrMove();
        piStack_14c = (int *)&DAT_00408908;
        piStack_150 = (int *)0x40eed0;
        iVar6 = __vbaStrCmp();
        piStack_150 = &local_38;
        piStack_154 = &local_34;
        piStack_158 = (int *)0x2;
        piStack_15c = (int *)0x40eeea;
        __vbaFreeStrList();
        if (iVar6 != 0) {
          piStack_154 = (int *)0x40eefb;
          piStack_150 = piVar9;
          piStack_154 = (int *)(**(code **)(*piVar9 + 0x344))();
          piStack_158 = &local_3c;
          piStack_15c = (int *)0x40ef06;
          piVar5 = (int *)__vbaObjSet();
          local_90 = 10;
          iStack_168 = 10;
          local_88 = (short *)0x80020004;
          piStack_164 = local_8c;
          piStack_160 = (int *)0x80020004;
          piStack_15c = (int *)local_84;
          piStack_16c = local_1c;
          pcStack_174 = (code *)0x40ef49;
          piStack_170 = piVar5;
          iVar6 = (**(code **)(*piVar5 + 0x1ec))();
          if (iVar6 < 0) {
            pcStack_174 = (code *)0x1ec;
            __vbaHresultCheckObj(iVar6,piVar5,&DAT_004088e4);
          }
          pcStack_174 = (code *)0x40ef68;
          __vbaFreeObj();
        }
        piStack_150 = (int *)0x40ef76;
        __vbaStrCopy();
        local_20 = CONCAT22(extraout_var,(short)local_20 + 1);
      }
      else {
        piStack_140 = (int *)(local_30 & 0xff);
        piStack_13c = local_1c;
        piStack_144 = (int *)0x40ef9d;
        Ordinal_537();
        piStack_144 = (int *)0x40efa4;
        piStack_144 = (int *)__vbaStrMove();
        piStack_148 = (int *)0x40efab;
        __vbaStrCat();
        piStack_148 = (int *)0x40efb2;
        __vbaStrMove();
        piStack_148 = (int *)0x40efbb;
        __vbaFreeStr();
      }
      uVar2 = (uint)(ushort)((short)local_20 + 1);
      if (SCARRY2((short)local_20,1)) {
        piStack_12c = (int *)0x40f304;
        __vbaErrorOverflow();
        piStack_13c = (int *)&DAT_004015d6;
        piStack_140 = (int *)*unaff_FS_OFFSET;
        *unaff_FS_OFFSET = &piStack_140;
        piStack_170 = (int *)0x0;
        piStack_130 = (int *)((uint)piVar4 & 1);
        piVar4 = (int *)((uint)piVar4 & 0xfffffffe);
        puStack_138 = &pcStack_174;
        pcStack_174 = pcVar7;
        piStack_134 = (int *)&DAT_00401170;
        iStack_168 = *piVar4;
        piStack_16c = piVar9;
        piStack_12c = (int *)&stack0xfffffffc;
        (**(code **)(iStack_168 + 4))(piVar4);
        piStack_144 = (int *)0x0;
        piStack_148 = (int *)0x0;
        piStack_14c = (int *)0x0;
        piStack_150 = (int *)0x0;
        piStack_158 = (int *)0x0;
        piStack_154 = (int *)0x50;
        FUN_00419e70((short *)&piStack_154,(short *)&DAT_0041ecb6);
        __vbaStrMove();
        piStack_158 = (int *)0xffffffff;
        piStack_164 = piStack_150;
        piStack_150 = (int *)0x0;
        __vbaStrCat(&DAT_00408910,DAT_0041ec94);
        uVar8 = __vbaStrMove();
        uVar8 = __vbaStrMove(uVar8);
        __vbaStrCat(uVar8);
        __vbaStrMove();
        FUN_00416390(&piStack_14c,&piStack_120,(short *)&piStack_158);
        __vbaFreeStrList(4,&piStack_144,&piStack_148,&piStack_14c,&piStack_150);
        piStack_154 = (int *)0x0;
        (**(code **)(iStack_168 + 0x734))(piVar4,&piStack_154);
        return;
      }
    }
    iVar6 = *piVar9;
    pcVar1 = *(code **)(iVar6 + 0x3fc);
    local_90 = 8;
    piStack_13c = (int *)0x1;
    puStack_138 = (undefined4 *)0x8;
    local_88 = (short *)&DAT_004076d4;
    piStack_140 = (int *)0x16;
    piStack_134 = local_8c;
    piStack_130 = (int *)&DAT_004076d4;
    piStack_12c = (int *)local_84;
    piStack_148 = (int *)0x40f020;
    piStack_144 = piVar9;
    piStack_148 = (int *)(*pcVar1)();
    piStack_14c = &local_3c;
    piStack_150 = (int *)0x40f02b;
    piStack_150 = (int *)__vbaObjSet();
    piStack_154 = local_50;
    piStack_158 = (int *)0x40f036;
    __vbaLateIdCallLd();
    puStack_138 = (undefined4 *)0x0;
    piStack_13c = (int *)0x8;
    piStack_144 = (int *)0x40f043;
    piStack_140 = piVar9;
    piStack_144 = (int *)(*pcVar1)();
    piStack_148 = &local_40;
    piStack_14c = (int *)0x40f04e;
    piStack_14c = (int *)__vbaObjSet();
    piStack_150 = local_60;
    piStack_154 = (int *)0x40f059;
    piStack_144 = (int *)__vbaLateIdCallLd();
    piStack_148 = (int *)0x40f063;
    piStack_148 = (int *)__vbaI2Var();
    piStack_14c = local_50;
    piStack_150 = (int *)0x40f06e;
    __vbaStrVarMove();
    piStack_150 = (int *)0x40f075;
    piStack_150 = (int *)__vbaStrMove();
    piStack_154 = (int *)&DAT_004076d4;
    piStack_15c = (int *)0x40f088;
    piStack_158 = piVar9;
    iVar6 = (**(code **)(iVar6 + 0x748))();
    if (iVar6 < 0) {
      piStack_15c = (int *)0x748;
      piStack_160 = (int *)&DAT_00407968;
      piStack_16c = (int *)0x40f09e;
      iStack_168 = iVar6;
      piStack_164 = piVar9;
      __vbaHresultCheckObj();
    }
    piStack_15c = (int *)0x40f0a7;
    __vbaFreeStr();
    piStack_15c = &local_40;
    piStack_160 = &local_3c;
    piStack_164 = (int *)0x2;
    iStack_168 = 0x40f0b7;
    __vbaFreeObjList();
    piStack_15c = local_60;
    piStack_160 = local_50;
    piStack_164 = (undefined4 *)0x2;
    iStack_168 = 0x40f0ca;
    __vbaFreeVarList();
  }
  else {
    puStack_118 = (undefined *)0x40f0d8;
    puStack_118 = (undefined *)(*pcVar1)();
    piStack_11c = &local_3c;
    piStack_120 = (int *)0x40f0e3;
    piVar4 = (int *)__vbaObjSet();
    piStack_120 = piVar4;
    piVar5 = (int *)(**(code **)(*piVar4 + 0x1e8))();
    if ((int)piVar5 < 0) {
      piStack_134 = (int *)0x40f10e;
      piStack_130 = piVar5;
      piStack_12c = piVar4;
      __vbaHresultCheckObj();
    }
    __vbaFreeObj();
    local_b8[2] = 0x6e;
    local_b8[3] = 0;
    piStack_12c = (int *)0x40f132;
    FUN_00419e70(local_b8 + 2,(short *)&DAT_0041ecb6);
    piStack_12c = (int *)0x40f139;
    __vbaStrMove();
    local_88 = &param_3;
    piStack_12c = (int *)0x1;
    piStack_134 = local_50;
    piStack_130 = (int *)0x1;
    puStack_138 = &local_90;
    piStack_13c = local_60;
    local_48 = 0x80020004;
    local_50[0] = 10;
    local_90 = 0x4002;
    piStack_140 = (int *)0x40f173;
    Ordinal_660();
    piStack_144 = (int *)0x40f17a;
    piStack_140 = piVar9;
    piStack_144 = (int *)(*pcVar1)();
    piStack_148 = &local_3c;
    piStack_14c = (int *)0x40f185;
    pcVar7 = (code *)__vbaObjSet();
    local_68 = local_38;
    iVar6 = *(int *)pcVar7;
    piStack_158 = (int *)0xa;
    local_38 = 0;
    local_70[0] = 8;
    piStack_154 = local_ac;
    piStack_15c = local_70;
    piStack_150 = (int *)0x80020004;
    piStack_14c = local_a4;
    piStack_160 = local_60;
    piStack_164 = local_80;
    iStack_168 = 0x40f1d5;
    iStack_168 = __vbaVarAdd();
    piStack_16c = &local_34;
    piStack_170 = (int *)0x40f1e0;
    piStack_170 = (int *)__vbaStrVarVal();
    pcStack_174 = pcVar7;
    iVar6 = (**(code **)(iVar6 + 0x1ec))();
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,pcVar7,&DAT_004088e4,0x1ec);
    }
    __vbaFreeStrList(2,&local_34,&local_38);
    __vbaFreeObj();
    __vbaFreeVarList(4,local_50,local_70,local_60,local_80);
    uVar8 = (*pcVar1)(piVar9);
    piVar4 = (int *)__vbaObjSet(&local_3c,uVar8);
    iVar6 = (**(code **)(*piVar4 + 0x8c))(piVar4,0);
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar4,&DAT_004088e4,0x8c);
    }
    __vbaFreeObj();
  }
  local_8 = 0;
  piStack_15c = (int *)&LAB_0040f2df;
  piStack_160 = (int *)0x40f2d9;
  __vbaFreeStr();
                    /* WARNING: Could not recover jumptable at 0x0040f2dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __vbaFreeStr();
  return;
}


// ---- FUN_0040f310 @ 0040f310

void __cdecl FUN_0040f310(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *unaff_FS_OFFSET;
  short local_30 [2];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004015d6;
  uStack_18 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_18;
  local_8 = param_1 & 1;
  piVar3 = (int *)(param_1 & 0xfffffffe);
  local_10 = &stack0xffffffb4;
  local_c = &DAT_00401170;
  iVar1 = *piVar3;
  (**(code **)(iVar1 + 4))(piVar3);
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_30[0] = 0;
  local_30[1] = 0;
  local_2c = 0x50;
  FUN_00419e70((short *)&local_2c,(short *)&DAT_0041ecb6);
  __vbaStrMove();
  local_30[0] = -1;
  local_30[1] = -1;
  local_28 = 0;
  __vbaStrCat(&DAT_00408910,DAT_0041ec94);
  uVar2 = __vbaStrMove();
  uVar2 = __vbaStrMove(uVar2);
  __vbaStrCat(uVar2);
  __vbaStrMove();
  FUN_00416390(&local_24,&stack0x00000008,local_30);
  __vbaFreeStrList(4,&local_1c,&local_20,&local_24,&local_28);
  local_2c = 0;
  (**(code **)(iVar1 + 0x734))(piVar3,&local_2c);
  return;
}


// ---- FUN_0040f450 @ 0040f450

void __cdecl FUN_0040f450(uint param_1,short param_2)

{
  code *pcVar1;
  code *pcVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *unaff_FS_OFFSET;
  short local_9c [2];
  undefined4 local_98 [5];
  undefined4 local_84;
  undefined4 local_80;
  short *local_7c;
  undefined4 local_78;
  undefined4 local_74 [4];
  undefined4 local_64 [2];
  undefined4 local_5c;
  undefined4 local_54 [4];
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
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004015d6;
  uStack_18 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_18;
  local_10 = &stack0xffffff2c;
  piVar7 = (int *)(param_1 & 0xfffffffe);
  local_8 = param_1 & 1;
  iVar6 = *piVar7;
  local_c = &DAT_00401180;
  (**(code **)(iVar6 + 4))(piVar7);
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  local_44 = 0;
  local_54[0] = 0;
  local_64[0] = 0;
  local_74[0] = 0;
  local_84 = 0;
  local_98[0] = 0;
  local_9c[0] = 0;
  local_9c[1] = 0;
  if (param_2 == 0) {
    DAT_0041eca0 = 0;
    uVar3 = (**(code **)(iVar6 + 0x368))(piVar7);
    piVar4 = (int *)__vbaObjSet(&local_30,uVar3);
    iVar5 = (**(code **)(*piVar4 + 0xa0))(piVar4,&local_1c);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,piVar4,&DAT_004086bc,0xa0);
    }
    local_1c = 0;
    __vbaStrMove();
    __vbaFreeObj();
    local_98[0] = 0x1e;
    FUN_00419e70((short *)local_98,(short *)&DAT_0041ecb6);
    __vbaStrMove();
    local_9c[0] = -1;
    local_9c[1] = -1;
    local_28 = 0;
    __vbaStrCat(&DAT_00408910,DAT_0041ec94);
    uVar3 = __vbaStrMove();
    uVar3 = __vbaStrMove(uVar3);
    __vbaStrCat(uVar3);
    __vbaStrMove();
    FUN_00416390(&local_24,&param_2,local_9c);
    __vbaFreeStrList(4,&local_1c,&local_20,&local_24,&local_28);
    local_98[0] = 0xffffffff;
    (**(code **)(iVar6 + 0x734))(piVar7,local_98);
    pcVar1 = *(code **)(iVar6 + 0x34c);
    uVar3 = (*pcVar1)(piVar7);
    piVar4 = (int *)__vbaObjSet(&local_30,uVar3);
    iVar5 = (**(code **)(*piVar4 + 0xa0))(piVar4,&local_1c);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,piVar4,&DAT_004086bc,0xa0);
    }
    iVar5 = __vbaStrCmp(&DAT_00407614,local_1c);
    __vbaFreeStr();
    __vbaFreeObj();
    if (iVar5 == 0) {
      pcVar2 = *(code **)(iVar6 + 0x3fc);
      local_84 = 8;
      local_7c = (short *)&DAT_004076d4;
      uVar3 = (*pcVar2)(piVar7,0x16,1,8,local_80,&DAT_004076d4,local_78);
      uVar3 = __vbaObjSet(&local_30,uVar3);
      __vbaLateIdCallLd(&local_44,uVar3);
      uVar3 = (*pcVar2)(piVar7,8,0);
      uVar3 = __vbaObjSet(&local_34,uVar3);
      uVar3 = __vbaLateIdCallLd(local_54,uVar3);
      uVar3 = __vbaI2Var(uVar3);
      __vbaStrVarMove(&local_44,uVar3);
      uVar3 = __vbaStrMove();
      iVar5 = (**(code **)(iVar6 + 0x748))(piVar7,&DAT_004076d4,uVar3);
      if (iVar5 < 0) {
        __vbaHresultCheckObj(iVar5,piVar7,&DAT_00407968,0x748);
      }
      __vbaFreeStr();
      __vbaFreeObjList(2,&local_30,&local_34);
      __vbaFreeVarList(2,&local_44,local_54);
      uVar3 = (*pcVar1)(piVar7);
      piVar4 = (int *)__vbaObjSet(&local_34,uVar3);
      iVar5 = (**(code **)(*piVar4 + 0xa0))(piVar4,&local_1c);
      if (iVar5 < 0) {
        __vbaHresultCheckObj(iVar5,piVar4,&DAT_004086bc,0xa0);
      }
      uVar3 = (*pcVar2)(piVar7,8,0);
      uVar3 = __vbaObjSet(&local_30,uVar3);
      uVar3 = __vbaLateIdCallLd(&local_44,uVar3);
      uVar3 = __vbaI2Var(uVar3);
      iVar6 = (**(code **)(iVar6 + 0x738))(piVar7,local_1c,uVar3);
      if (iVar6 < 0) {
        __vbaHresultCheckObj(iVar6,piVar7,&DAT_00407968,0x738);
      }
      __vbaFreeStr();
      __vbaFreeObjList(2,&local_30,&local_34);
      __vbaFreeVar();
    }
    else {
      uVar3 = (*pcVar1)(piVar7);
      piVar4 = (int *)__vbaObjSet(&local_30,uVar3);
      iVar5 = (**(code **)(*piVar4 + 0xa0))(piVar4,&local_1c);
      if (iVar5 < 0) {
        __vbaHresultCheckObj(iVar5,piVar4,&DAT_004086bc,0xa0);
      }
      uVar3 = local_1c;
      local_44 = 8;
      local_3c = local_1c;
      local_1c = 0;
      uVar3 = (**(code **)(iVar6 + 0x3fc))(piVar7,0x17,1,8,local_40,uVar3,local_38);
      uVar3 = __vbaObjSet(&local_34,uVar3);
      __vbaLateIdCall(uVar3);
      __vbaFreeObjList(2,&local_30,&local_34);
      __vbaFreeVar();
    }
  }
  else {
    DAT_0041eca0 = 0xffff;
    uVar3 = (**(code **)(iVar6 + 0x368))(piVar7);
    piVar7 = (int *)__vbaObjSet(&local_30,uVar3);
    iVar6 = (**(code **)(*piVar7 + 0xa0))(piVar7,&local_1c);
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar7,&DAT_004086bc,0xa0);
    }
    local_98[0] = 0x32;
    FUN_00419e70((short *)local_98,(short *)&DAT_0041ecb6);
    __vbaStrMove();
    local_7c = &param_2;
    local_3c = 0x80020004;
    local_44 = 10;
    local_84 = 0x4002;
    Ordinal_660(local_54,&local_84,&local_44,1,1);
    local_9c[0] = -1;
    local_9c[1] = -1;
    local_2c = 0;
    __vbaStrCat(&DAT_004088dc,local_1c);
    uVar3 = __vbaStrMove();
    uVar3 = __vbaStrMove(uVar3);
    local_5c = __vbaStrCat(uVar3);
    local_64[0] = 8;
    uVar3 = __vbaVarAdd(local_74,local_54,local_64);
    __vbaStrVarMove(uVar3);
    __vbaStrMove();
    FUN_00416390(&local_28,&param_2,local_9c);
    __vbaFreeStrList(5,&local_1c,&local_20,&local_24,&local_28,&local_2c);
    __vbaFreeObj();
    __vbaFreeVarList(4,&local_44,local_64,local_54,local_74);
  }
  return;
}


// ---- FUN_0040fa70 @ 0040fa70

void FUN_0040fa70(uint param_1,undefined4 param_2,undefined4 param_3,short param_4)

{
  code *pcVar1;
  short sVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  code *pcVar7;
  int iVar8;
  short sVar9;
  int *piVar10;
  undefined4 *unaff_FS_OFFSET;
  code *pcStack_174;
  undefined4 uStack_170;
  code *pcStack_16c;
  code *pcStack_168;
  int *piStack_148;
  short asStack_144 [2];
  undefined4 uStack_140;
  short asStack_13c [4];
  undefined4 uStack_134;
  undefined4 uStack_12c;
  undefined4 uStack_124;
  undefined4 uStack_11c;
  undefined4 uStack_114;
  undefined4 uStack_10c;
  undefined4 auStack_108 [4];
  undefined4 auStack_f8 [4];
  undefined4 auStack_e8 [2];
  undefined4 uStack_e0;
  undefined4 auStack_d8 [4];
  undefined4 auStack_c8 [2];
  undefined4 uStack_c0;
  undefined4 auStack_b8 [2];
  undefined2 uStack_b0;
  undefined4 auStack_a8 [4];
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  int iStack_84;
  code *pcStack_80;
  undefined *puStack_7c;
  undefined *puStack_78;
  code *pcStack_74;
  undefined *puStack_70;
  code *pcStack_6c;
  code *pcStack_68;
  code *pcStack_64;
  int *piStack_60;
  undefined4 uStack_5c;
  code *pcStack_58;
  undefined4 local_30;
  undefined4 local_2c;
  code *local_28;
  code *local_24;
  undefined4 local_20;
  undefined4 uStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004015d6;
  uStack_18 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_18;
  local_8 = param_1 & 1;
  pcVar3 = (code *)(param_1 & 0xfffffffe);
  local_10 = &stack0xffffffac;
  local_c = &DAT_00401190;
  iVar8 = *(int *)pcVar3;
  uStack_5c = 0x40fab2;
  pcStack_58 = pcVar3;
  (**(code **)(iVar8 + 4))();
  local_20 = 0;
  local_24 = (code *)0x0;
  local_28 = (code *)0x0;
  local_2c = 0;
  local_30 = 0;
  uStack_5c = 0x40fad1;
  __vbaStrCopy();
  uStack_5c = 0x40fad9;
  __vbaStrCopy();
  uStack_5c = local_20;
  piStack_60 = (int *)&DAT_004076d4;
  pcStack_64 = (code *)0x40fae8;
  iVar4 = __vbaStrCmp();
  pcVar7 = Ordinal_537_exref;
  if (iVar4 == 0) {
    if (param_4 == 0) {
      pcStack_64 = (code *)0x1;
      pcStack_68 = local_24;
      pcStack_6c = (code *)0x22;
      puStack_70 = (undefined *)0x40fb0a;
      Ordinal_537();
      pcVar1 = __vbaStrMove_exref;
      puStack_70 = (undefined *)0x40fb17;
      puStack_70 = (undefined *)__vbaStrMove();
      pcStack_74 = (code *)0x0;
      puStack_78 = (undefined *)0x40fb1f;
      __vbaInStr();
      puStack_78 = (undefined *)0x40fb27;
      uVar5 = __vbaI2I4();
      puStack_78 = (undefined *)0x40fb32;
      __vbaFreeStr();
      sVar2 = (short)uVar5;
      if (sVar2 != 0) {
        pcStack_64 = local_24;
        pcStack_68 = (code *)0x40fb45;
        iVar4 = __vbaLenBstr();
        sVar9 = sVar2 + 1;
        uStack_170 = CONCAT22((short)((uint)uVar5 >> 0x10),sVar9);
        if (((SCARRY2(sVar2,1)) || (iVar6 = iVar4 - sVar9, SBORROW4(iVar4,(int)sVar9))) ||
           (pcStack_68 = (code *)(iVar6 + 1), SCARRY4(iVar6,1))) {
LAB_0040fc74:
          pcStack_68 = (code *)0x40fc7a;
          __vbaErrorOverflow();
          puStack_78 = &DAT_004015d6;
          puStack_7c = (undefined *)*unaff_FS_OFFSET;
          *unaff_FS_OFFSET = &puStack_7c;
          pcStack_74 = (code *)&pcStack_174;
          pcStack_174 = pcVar1;
          piVar10 = (int *)((uint)piStack_60 & 0xfffffffe);
          pcStack_6c = (code *)((uint)piStack_60 & 1);
          iVar8 = *piVar10;
          puStack_70 = &DAT_004011a0;
          pcStack_16c = pcVar7;
          pcStack_68 = (code *)&stack0xfffffffc;
          piStack_60 = piVar10;
          (**(code **)(iVar8 + 4))(piVar10);
          pcStack_80 = (code *)0x0;
          iStack_84 = 0;
          uStack_88 = 0;
          uStack_8c = 0;
          uStack_90 = 0;
          uStack_94 = 0;
          uStack_98 = 0;
          auStack_a8[0] = 0;
          auStack_b8[0] = 0;
          auStack_c8[0] = 0;
          auStack_d8[0] = 0;
          auStack_e8[0] = 0;
          auStack_f8[0] = 0;
          auStack_108[0] = 0;
          asStack_13c[0] = 0;
          asStack_13c[1] = 0;
          uStack_140 = 0;
          asStack_144[0] = 0;
          asStack_144[1] = 0;
          __vbaStrCopy();
          uVar5 = (**(code **)(iVar8 + 0x368))(piVar10);
          piStack_148 = (int *)__vbaObjSet(&uStack_94,uVar5);
          iVar4 = (**(code **)(*piStack_148 + 0xa0))(piStack_148,&uStack_8c);
          if (iVar4 < 0) {
            __vbaHresultCheckObj(iVar4,piStack_148,&DAT_004086bc,0xa0);
          }
          uStack_8c = 0;
          __vbaStrMove();
          __vbaFreeObj();
          uVar5 = (**(code **)(iVar8 + 0x364))(piVar10);
          piStack_148 = (int *)__vbaObjSet(&uStack_94,uVar5);
          iVar4 = (**(code **)(*piStack_148 + 0xa0))(piStack_148,&uStack_8c);
          if (iVar4 < 0) {
            __vbaHresultCheckObj(iVar4,piStack_148,&DAT_004086bc,0xa0);
          }
          uStack_8c = 0;
          __vbaStrMove();
          __vbaFreeObj();
          if ((short)pcStack_58 == 0x3ec) {
            uVar5 = (**(code **)(iVar8 + 0x360))(piVar10);
            piStack_148 = (int *)__vbaObjSet(&uStack_94,uVar5);
            iVar4 = (**(code **)(*piStack_148 + 0xa0))(piStack_148,&uStack_8c);
            if (iVar4 < 0) {
              __vbaHresultCheckObj(iVar4,piStack_148,&DAT_004086bc,0xa0);
            }
            uStack_8c = 0;
            __vbaStrMove();
            __vbaFreeObj();
          }
          pcStack_168 = *(code **)(iVar8 + 0x3fc);
          uVar5 = (*pcStack_168)(piVar10,0x1d,3,0x4008,uStack_134,&iStack_84,uStack_12c,0x4008,
                                 uStack_124,&uStack_88,uStack_11c,0x4008,uStack_114,&pcStack_80,
                                 uStack_10c);
          uVar5 = __vbaObjSet(&uStack_94,uVar5);
          uVar5 = __vbaLateIdCallLd(auStack_a8,uVar5);
          sVar2 = __vbaBoolVar(uVar5);
          __vbaFreeObj();
          __vbaFreeVar();
          if (sVar2 == 0) {
            DAT_0041eca0 = 0xffff;
            asStack_13c[0] = 0x5a;
            asStack_13c[1] = 0;
            FUN_00419e70(asStack_13c,(short *)&DAT_0041ecb6);
            __vbaStrMove();
            uVar5 = (*pcStack_168)(piVar10,8,0);
            uVar5 = __vbaObjSet(&uStack_94,uVar5);
            __vbaLateIdCallLd(auStack_a8,uVar5);
            uStack_c0 = 0x80020004;
            auStack_c8[0] = 10;
            uStack_b0 = __vbaI2Var(auStack_a8);
            auStack_b8[0] = 2;
            Ordinal_660(auStack_d8,auStack_b8,auStack_c8,1,1);
            uVar5 = (*pcStack_168)(piVar10,8,0);
            uVar5 = __vbaObjSet(&uStack_98,uVar5);
            __vbaLateIdCallLd(auStack_108,uVar5);
            asStack_144[0] = -1;
            asStack_144[1] = -1;
            uStack_140 = __vbaI2Var(auStack_108);
            uStack_e0 = uStack_90;
            uStack_90 = 0;
            auStack_e8[0] = 8;
            uVar5 = __vbaVarAdd(auStack_f8,auStack_d8,auStack_e8);
            __vbaStrVarMove(uVar5);
            __vbaStrMove();
            FUN_00416390(&uStack_8c,&uStack_140,asStack_144);
            __vbaFreeStrList(2,&uStack_8c,&uStack_90);
            __vbaFreeObjList(2,&uStack_94,&uStack_98);
            __vbaFreeVarList(7,auStack_a8,auStack_b8,auStack_c8,auStack_e8,auStack_d8,auStack_108,
                             auStack_f8);
          }
          else {
            DAT_0041eca0 = 0;
          }
          pcStack_6c = (code *)0x0;
          __vbaFreeStr(&LAB_004100d3);
          __vbaFreeStr();
                    /* WARNING: Could not recover jumptable at 0x004100d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          __vbaFreeStr();
          return;
        }
        pcStack_6c = local_24;
        puStack_70 = (undefined *)0x40fb6a;
        Ordinal_618();
        puStack_70 = (undefined *)0x40fb71;
        __vbaStrMove();
        puStack_70 = (undefined *)0x1;
        pcStack_74 = local_28;
        puStack_78 = (undefined *)0x22;
        puStack_7c = (undefined *)0x40fb7b;
        Ordinal_537();
        puStack_7c = (undefined *)0x40fb82;
        puStack_7c = (undefined *)__vbaStrMove();
        pcStack_80 = (code *)0x0;
        iStack_84 = 0x40fb8b;
        __vbaInStr();
        iStack_84 = 0x40fb93;
        uVar5 = __vbaI2I4();
        iStack_84 = 0x40fb9e;
        __vbaFreeStr();
        sVar2 = (short)uVar5;
        if (sVar2 != 0) {
          pcStack_68 = (code *)0x40fbb0;
          pcStack_64 = pcVar3;
          pcStack_68 = (code *)(**(code **)(iVar8 + 0x34c))();
          pcStack_6c = (code *)&local_30;
          puStack_70 = (undefined *)0x40fbbb;
          pcVar7 = (code *)__vbaObjSet();
          uStack_170 = CONCAT22((short)((uint)uVar5 >> 0x10),sVar2 + -1);
          if (SBORROW2(sVar2,1)) goto LAB_0040fc74;
          iVar8 = *(int *)pcVar7;
          pcStack_68 = (code *)(int)(short)(sVar2 + -1);
          pcStack_6c = local_28;
          puStack_70 = (undefined *)0x40fbd8;
          Ordinal_616();
          puStack_70 = (undefined *)0x40fbdf;
          puStack_70 = (undefined *)__vbaStrMove();
          puStack_78 = (undefined *)0x40fbea;
          pcStack_74 = pcVar7;
          iVar8 = (**(code **)(iVar8 + 0xa4))();
          if (iVar8 < 0) {
            puStack_78 = (undefined *)0xa4;
            puStack_7c = &DAT_004086bc;
            uStack_88 = 0x40fc00;
            iStack_84 = iVar8;
            pcStack_80 = pcVar7;
            __vbaHresultCheckObj();
          }
          puStack_78 = (undefined *)0x40fc09;
          __vbaFreeStr();
          puStack_78 = (undefined *)0x40fc12;
          __vbaFreeObj();
        }
      }
    }
    if (DAT_0041ecb4 == 0) {
      pcStack_64 = (code *)0x40fc22;
      FUN_004135c0();
    }
  }
  local_8 = 0;
  pcStack_64 = (code *)&LAB_0040fc55;
  pcStack_68 = (code *)0x40fc4a;
  __vbaFreeStr();
  pcStack_68 = (code *)0x40fc4f;
  __vbaFreeStr();
                    /* WARNING: Could not recover jumptable at 0x0040fc52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __vbaFreeStr();
  return;
}


// ---- FUN_0040fc80 @ 0040fc80

void FUN_0040fc80(uint param_1,undefined4 param_2,short param_3)

{
  int iVar1;
  code *pcVar2;
  short sVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  undefined4 *unaff_FS_OFFSET;
  short local_e0 [2];
  undefined4 local_dc;
  short local_d8 [4];
  undefined4 local_d0;
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined4 local_a4 [4];
  undefined4 local_94 [4];
  undefined4 local_84 [2];
  undefined4 local_7c;
  undefined4 local_74 [4];
  undefined4 local_64 [2];
  undefined4 local_5c;
  undefined4 local_54 [2];
  undefined2 local_4c;
  undefined4 local_44 [4];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004015d6;
  uStack_18 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_18;
  local_10 = &stack0xfffffef0;
  piVar7 = (int *)(param_1 & 0xfffffffe);
  local_8 = param_1 & 1;
  iVar1 = *piVar7;
  local_c = &DAT_004011a0;
  (**(code **)(iVar1 + 4))(piVar7);
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  local_44[0] = 0;
  local_54[0] = 0;
  local_64[0] = 0;
  local_74[0] = 0;
  local_84[0] = 0;
  local_94[0] = 0;
  local_a4[0] = 0;
  local_d8[0] = 0;
  local_d8[1] = 0;
  local_dc = 0;
  local_e0[0] = 0;
  local_e0[1] = 0;
  __vbaStrCopy();
  uVar4 = (**(code **)(iVar1 + 0x368))(piVar7);
  piVar5 = (int *)__vbaObjSet(&local_30,uVar4);
  iVar6 = (**(code **)(*piVar5 + 0xa0))(piVar5,&local_28);
  if (iVar6 < 0) {
    __vbaHresultCheckObj(iVar6,piVar5,&DAT_004086bc,0xa0);
  }
  local_28 = 0;
  __vbaStrMove();
  __vbaFreeObj();
  uVar4 = (**(code **)(iVar1 + 0x364))(piVar7);
  piVar5 = (int *)__vbaObjSet(&local_30,uVar4);
  iVar6 = (**(code **)(*piVar5 + 0xa0))(piVar5,&local_28);
  if (iVar6 < 0) {
    __vbaHresultCheckObj(iVar6,piVar5,&DAT_004086bc,0xa0);
  }
  local_28 = 0;
  __vbaStrMove();
  __vbaFreeObj();
  if (param_3 == 0x3ec) {
    uVar4 = (**(code **)(iVar1 + 0x360))(piVar7);
    piVar5 = (int *)__vbaObjSet(&local_30,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0xa0))(piVar5,&local_28);
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_004086bc,0xa0);
    }
    local_28 = 0;
    __vbaStrMove();
    __vbaFreeObj();
  }
  pcVar2 = *(code **)(iVar1 + 0x3fc);
  uVar4 = (*pcVar2)(piVar7,0x1d,3,0x4008,local_d0,&local_20,local_c8,0x4008,local_c0,&local_24,
                    local_b8,0x4008,local_b0,&local_1c,local_a8);
  uVar4 = __vbaObjSet(&local_30,uVar4);
  uVar4 = __vbaLateIdCallLd(local_44,uVar4);
  sVar3 = __vbaBoolVar(uVar4);
  __vbaFreeObj();
  __vbaFreeVar();
  if (sVar3 == 0) {
    DAT_0041eca0 = 0xffff;
    local_d8[0] = 0x5a;
    local_d8[1] = 0;
    FUN_00419e70(local_d8,(short *)&DAT_0041ecb6);
    __vbaStrMove();
    uVar4 = (*pcVar2)(piVar7,8,0);
    uVar4 = __vbaObjSet(&local_30,uVar4);
    __vbaLateIdCallLd(local_44,uVar4);
    local_5c = 0x80020004;
    local_64[0] = 10;
    local_4c = __vbaI2Var(local_44);
    local_54[0] = 2;
    Ordinal_660(local_74,local_54,local_64,1,1);
    uVar4 = (*pcVar2)(piVar7,8,0);
    uVar4 = __vbaObjSet(&local_34,uVar4);
    __vbaLateIdCallLd(local_a4,uVar4);
    local_e0[0] = -1;
    local_e0[1] = -1;
    local_dc = __vbaI2Var(local_a4);
    local_7c = local_2c;
    local_2c = 0;
    local_84[0] = 8;
    uVar4 = __vbaVarAdd(local_94,local_74,local_84);
    __vbaStrVarMove(uVar4);
    __vbaStrMove();
    FUN_00416390(&local_28,&local_dc,local_e0);
    __vbaFreeStrList(2,&local_28,&local_2c);
    __vbaFreeObjList(2,&local_30,&local_34);
    __vbaFreeVarList(7,local_44,local_54,local_64,local_84,local_74,local_a4,local_94);
  }
  else {
    DAT_0041eca0 = 0;
  }
  local_8 = 0;
  __vbaFreeStr(&LAB_004100d3);
  __vbaFreeStr();
                    /* WARNING: Could not recover jumptable at 0x004100d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __vbaFreeStr();
  return;
}


// ---- FUN_00410100 @ 00410100

/* WARNING: Type propagation algorithm not settling */

void FUN_00410100(uint param_1)

{
  code *pcVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  short sVar9;
  short sVar10;
  undefined4 *unaff_FS_OFFSET;
  int **ppiVar11;
  int *piStack_11c;
  int iStack_118;
  int *piStack_114;
  undefined4 *puStack_110;
  int *piStack_10c;
  undefined *puStack_108;
  int *piStack_104;
  int *piStack_100;
  int *piStack_fc;
  int *piStack_f8;
  undefined *puStack_f4;
  int *piStack_f0;
  int *piStack_ec;
  undefined *puStack_e8;
  uint uStack_e4;
  undefined1 *puStack_e0;
  undefined4 uStack_dc;
  int *piStack_d8;
  int *piStack_d4;
  int *piStack_d0;
  undefined *puStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  int iStack_b8;
  int *piStack_b4;
  int *piStack_b0;
  undefined4 *puStack_ac;
  int *piStack_a8;
  undefined *puStack_a4;
  int *piStack_a0;
  int *piStack_9c;
  undefined4 *puStack_98;
  int *piStack_94;
  undefined4 uStack_90;
  int *piStack_8c;
  undefined4 *puStack_88;
  undefined4 uStack_84;
  int *piStack_80;
  int *piStack_7c;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c [4];
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004015d6;
  uStack_18 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_18;
  piVar8 = (int *)(param_1 & 0xfffffffe);
  local_10 = &stack0xffffff88;
  local_8 = param_1 & 1;
  iVar7 = *piVar8;
  local_c = &DAT_004011b0;
  piStack_80 = (int *)0x410143;
  piStack_7c = piVar8;
  (**(code **)(iVar7 + 4))();
  pcVar1 = *(code **)(iVar7 + 0x344);
  local_1c = 0;
  local_2c[2] = 0;
  local_2c[1] = 0;
  local_2c[0] = 0;
  local_30 = 0;
  local_40 = 0;
  local_44 = 0;
  uStack_84 = 0x410163;
  piStack_80 = piVar8;
  uStack_84 = (*pcVar1)();
  puStack_88 = &local_30;
  piStack_8c = (int *)0x41016e;
  piVar2 = (int *)__vbaObjSet();
  uStack_90 = 0x410174;
  piStack_8c = piVar8;
  uStack_90 = (*pcVar1)();
  piStack_94 = local_2c;
  puStack_98 = (undefined4 *)0x41017f;
  piVar3 = (int *)__vbaObjSet();
  puStack_98 = &local_44;
  piStack_a0 = (int *)0x41018e;
  piStack_9c = piVar3;
  puStack_ac = (undefined4 *)(**(code **)(*piVar3 + 0xe0))();
  if ((int)puStack_ac < 0) {
    piStack_a0 = (int *)0xe0;
    puStack_a4 = &DAT_004088e4;
    piStack_b0 = (int *)0x4101a4;
    piStack_a8 = piVar3;
    __vbaHresultCheckObj();
  }
  piStack_a0 = local_2c + 2;
  puStack_a4 = (undefined *)local_44;
  puStack_ac = (undefined4 *)0x4101b8;
  piStack_a8 = piVar2;
  iVar4 = (**(code **)(*piVar2 + 0xe8))();
  if (iVar4 < 0) {
    puStack_ac = (undefined4 *)0xe8;
    piStack_b0 = (int *)&DAT_004088e4;
    uStack_bc = 0x4101ce;
    iStack_b8 = iVar4;
    piStack_b4 = piVar2;
    __vbaHresultCheckObj();
  }
  local_2c[2] = 0;
  puStack_ac = (undefined4 *)0x4101df;
  __vbaStrMove();
  puStack_ac = &local_30;
  piStack_b0 = local_2c;
  piStack_b4 = (int *)0x2;
  iStack_b8 = 0x4101ef;
  __vbaFreeObjList();
  puStack_ac = (undefined4 *)0x1;
  piStack_b0 = (int *)local_1c;
  piStack_b4 = (int *)&DAT_00408918;
  iStack_b8 = 0;
  uStack_bc = 0x410204;
  __vbaInStr();
  uStack_bc = 0x41020c;
  uVar5 = __vbaI2I4();
  uStack_bc = 1;
  uStack_c0 = local_1c;
  uStack_c4 = 0x41021a;
  Ordinal_616();
  uStack_c4 = 0x410221;
  uStack_c4 = __vbaStrMove();
  uStack_c8 = 0x410228;
  Ordinal_527();
  uStack_c8 = 0x41022f;
  uStack_c8 = __vbaStrMove();
  puStack_cc = &DAT_00408920;
  piStack_d0 = (int *)0x41023b;
  iVar4 = __vbaStrCmp();
  piStack_d0 = local_2c + 1;
  piStack_d4 = local_2c + 2;
  sVar9 = (short)uVar5;
  piStack_d8 = (int *)0x2;
  uStack_dc = 0x410260;
  __vbaFreeStrList();
  if (sVar9 != 0 && iVar4 == 0) {
    piStack_d4 = (int *)0x410278;
    piStack_d0 = piVar8;
    piStack_d4 = (int *)(**(code **)(iVar7 + 0x34c))();
    piStack_d8 = local_2c;
    uStack_dc = 0x410283;
    piVar2 = (int *)__vbaObjSet();
    iVar4 = *piVar2;
    uStack_dc = local_1c;
    puStack_e0 = (undefined1 *)0x410292;
    iVar6 = __vbaLenBstr();
    sVar10 = sVar9 + 3;
    piStack_11c = (int *)CONCAT22((short)((uint)uVar5 >> 0x10),sVar10);
    if ((SCARRY2(sVar9,3)) ||
       (puStack_e0 = (undefined1 *)(iVar6 - sVar10), SBORROW4(iVar6,(int)sVar10))) {
      puStack_e0 = (undefined1 *)0x410404;
      __vbaErrorOverflow();
      piStack_f0 = (int *)&DAT_004015d6;
      puStack_f4 = (undefined *)*unaff_FS_OFFSET;
      *unaff_FS_OFFSET = &puStack_f4;
      piStack_ec = (int *)&piStack_11c;
      piVar2 = (int *)((uint)piStack_d8 & 0xfffffffe);
      uStack_e4 = (uint)piStack_d8 & 1;
      iVar7 = *piVar2;
      puStack_e8 = &DAT_004011c0;
      iStack_118 = iVar4;
      piStack_114 = piVar8;
      puStack_e0 = &stack0xfffffffc;
      piStack_d8 = piVar2;
      (**(code **)(iVar7 + 4))(piVar2);
      piStack_f8 = (int *)0x0;
      piStack_fc = (int *)0x0;
      piStack_100 = (int *)0x0;
      FUN_00411ae0();
      uVar5 = (**(code **)(iVar7 + 0x3e4))(piVar2);
      piStack_104 = (int *)__vbaObjSet(&piStack_f8,uVar5);
      iVar4 = (**(code **)(*piStack_104 + 0x54))(piStack_104,DAT_0041ec88);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,piStack_104,&DAT_004086ac,0x54);
      }
      __vbaFreeObj();
      uVar5 = (**(code **)(iVar7 + 1000))(piVar2);
      piStack_104 = (int *)__vbaObjSet(&piStack_f8,uVar5);
      iVar4 = (**(code **)(*piStack_104 + 0x54))(piStack_104,DAT_0041ec84);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,piStack_104,&DAT_004086ac,0x54);
      }
      __vbaFreeObj();
      uVar5 = (**(code **)(iVar7 + 0x3ec))(piVar2);
      piStack_104 = (int *)__vbaObjSet(&piStack_f8,uVar5);
      iVar4 = (**(code **)(*piStack_104 + 0x54))(piStack_104,DAT_0041ec80);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,piStack_104,&DAT_004086ac,0x54);
      }
      __vbaFreeObj();
      pcVar1 = *(code **)(iVar7 + 0x370);
      uVar5 = (*pcVar1)(piVar2);
      piStack_104 = (int *)__vbaObjSet(&piStack_f8,uVar5);
      iVar7 = (**(code **)(*piStack_104 + 0xac))(piStack_104,DAT_0041ec80);
      if (iVar7 < 0) {
        __vbaHresultCheckObj(iVar7,piStack_104,&DAT_00408924,0xac);
      }
      __vbaFreeObj();
      uVar5 = (*pcVar1)(piVar2);
      piStack_104 = (int *)__vbaObjSet(&piStack_f8,uVar5);
      iVar7 = (**(code **)(*piStack_104 + 0xb4))(piStack_104,L"*.tif;*.jpg;*.bmp;*.txt");
      if (iVar7 < 0) {
        __vbaHresultCheckObj(iVar7,piStack_104,&DAT_00408924,0xb4);
      }
      __vbaFreeObj();
      uVar5 = (*pcVar1)(piVar2);
      piStack_104 = (int *)__vbaObjSet(&piStack_f8,uVar5);
      iVar7 = (**(code **)(*piStack_104 + 0xe4))(piStack_104,0);
      if (iVar7 < 0) {
        __vbaHresultCheckObj(iVar7,piStack_104,&DAT_00408924,0xe4);
      }
      __vbaFreeObj();
      uVar5 = (*pcVar1)(piVar2);
      piVar2 = (int *)__vbaObjSet(&piStack_f8,uVar5);
      iVar7 = (**(code **)(*piVar2 + 0xdc))(piVar2,0);
      if (iVar7 < 0) {
        __vbaHresultCheckObj(iVar7,piVar2,&DAT_00408924,0xdc);
      }
      __vbaFreeObj();
      if (DAT_0041e010 == (int *)0x0) {
        __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
      }
      uVar5 = (**(code **)(*DAT_0041e010 + 0x31c))(DAT_0041e010);
      piVar2 = (int *)__vbaObjSet(&piStack_f8,uVar5);
      iVar7 = (**(code **)(*piVar2 + 0xe0))(piVar2,&piStack_fc);
      if (iVar7 < 0) {
        __vbaHresultCheckObj(iVar7,piVar2,&DAT_004086ec,0xe0);
      }
      ppiVar11 = &piStack_100;
      piStack_100 = (int *)-(uint)((short)piStack_fc != 0);
      FUN_004141c0();
      __vbaFreeObj(ppiVar11);
      return;
    }
    uStack_e4 = local_1c;
    puStack_e8 = (undefined *)0x4102b2;
    Ordinal_618();
    puStack_e8 = (undefined *)0x4102bd;
    puStack_e8 = (undefined *)__vbaStrMove();
    piStack_f0 = (int *)0x4102ce;
    piStack_ec = piVar2;
    piVar3 = (int *)(**(code **)(iVar4 + 0xa4))();
    if ((int)piVar3 < 0) {
      piStack_f0 = (int *)0xa4;
      puStack_f4 = &DAT_004086bc;
      piStack_100 = (int *)0x4102e4;
      piStack_fc = piVar3;
      piStack_f8 = piVar2;
      __vbaHresultCheckObj();
    }
    piStack_f0 = (int *)0x4102ed;
    __vbaFreeStr();
    piStack_f0 = (int *)0x4102f6;
    __vbaFreeObj();
    puStack_f4 = (undefined *)0x410300;
    piStack_f0 = piVar8;
    puStack_f4 = (undefined *)(**(code **)(iVar7 + 0x34c))();
    piStack_f8 = local_2c;
    piStack_fc = (int *)0x41030b;
    piVar2 = (int *)__vbaObjSet();
    piStack_fc = local_2c + 2;
    piStack_104 = (int *)0x41031a;
    piStack_100 = piVar2;
    puStack_110 = (undefined4 *)(**(code **)(*piVar2 + 0xa0))();
    if ((int)puStack_110 < 0) {
      piStack_104 = (int *)0xa0;
      puStack_108 = &DAT_004086bc;
      piStack_114 = (int *)0x410330;
      piStack_10c = piVar2;
      __vbaHresultCheckObj();
    }
    puStack_108 = (undefined *)local_2c[2];
    local_40 = 8;
    local_38 = local_2c[2];
    puStack_110 = (undefined4 *)0x8;
    piStack_114 = (int *)0x1;
    iStack_118 = 0x17;
    piStack_10c = (int *)local_3c;
    local_2c[2] = 0;
    piStack_104 = (int *)local_34;
    piStack_11c = piVar8;
    uVar5 = (**(code **)(iVar7 + 0x3fc))();
    uVar5 = __vbaObjSet(&local_30,uVar5);
    __vbaLateIdCall(uVar5);
    puStack_110 = &local_30;
    piStack_114 = local_2c;
    iStack_118 = 2;
    piStack_11c = (int *)0x41038b;
    __vbaFreeObjList();
    puStack_110 = (undefined4 *)0x410397;
    __vbaFreeVar();
  }
  local_8 = 0;
  piStack_d0 = (int *)&LAB_004103df;
                    /* WARNING: Could not recover jumptable at 0x004103d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __vbaFreeStr();
  return;
}


// ---- FUN_00410410 @ 00410410

void __cdecl FUN_00410410(uint param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 *unaff_FS_OFFSET;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004015d6;
  uStack_18 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_18;
  local_10 = &stack0xffffffc0;
  piVar6 = (int *)(param_1 & 0xfffffffe);
  local_8 = param_1 & 1;
  iVar5 = *piVar6;
  local_c = &DAT_004011c0;
  (**(code **)(iVar5 + 4))(piVar6);
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  FUN_00411ae0();
  uVar2 = (**(code **)(iVar5 + 0x3e4))(piVar6);
  piVar3 = (int *)__vbaObjSet(&local_1c,uVar2);
  iVar4 = (**(code **)(*piVar3 + 0x54))(piVar3,DAT_0041ec88);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar3,&DAT_004086ac,0x54);
  }
  __vbaFreeObj();
  uVar2 = (**(code **)(iVar5 + 1000))(piVar6);
  piVar3 = (int *)__vbaObjSet(&local_1c,uVar2);
  iVar4 = (**(code **)(*piVar3 + 0x54))(piVar3,DAT_0041ec84);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar3,&DAT_004086ac,0x54);
  }
  __vbaFreeObj();
  uVar2 = (**(code **)(iVar5 + 0x3ec))(piVar6);
  piVar3 = (int *)__vbaObjSet(&local_1c,uVar2);
  iVar4 = (**(code **)(*piVar3 + 0x54))(piVar3,DAT_0041ec80);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar3,&DAT_004086ac,0x54);
  }
  __vbaFreeObj();
  pcVar1 = *(code **)(iVar5 + 0x370);
  uVar2 = (*pcVar1)(piVar6);
  piVar3 = (int *)__vbaObjSet(&local_1c,uVar2);
  iVar5 = (**(code **)(*piVar3 + 0xac))(piVar3,DAT_0041ec80);
  if (iVar5 < 0) {
    __vbaHresultCheckObj(iVar5,piVar3,&DAT_00408924,0xac);
  }
  __vbaFreeObj();
  uVar2 = (*pcVar1)(piVar6);
  piVar3 = (int *)__vbaObjSet(&local_1c,uVar2);
  iVar5 = (**(code **)(*piVar3 + 0xb4))(piVar3,L"*.tif;*.jpg;*.bmp;*.txt");
  if (iVar5 < 0) {
    __vbaHresultCheckObj(iVar5,piVar3,&DAT_00408924,0xb4);
  }
  __vbaFreeObj();
  uVar2 = (*pcVar1)(piVar6);
  piVar3 = (int *)__vbaObjSet(&local_1c,uVar2);
  iVar5 = (**(code **)(*piVar3 + 0xe4))(piVar3,0);
  if (iVar5 < 0) {
    __vbaHresultCheckObj(iVar5,piVar3,&DAT_00408924,0xe4);
  }
  __vbaFreeObj();
  uVar2 = (*pcVar1)(piVar6);
  piVar3 = (int *)__vbaObjSet(&local_1c,uVar2);
  iVar5 = (**(code **)(*piVar3 + 0xdc))(piVar3,0);
  if (iVar5 < 0) {
    __vbaHresultCheckObj(iVar5,piVar3,&DAT_00408924,0xdc);
  }
  __vbaFreeObj();
  if (DAT_0041e010 == (int *)0x0) {
    __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
  }
  uVar2 = (**(code **)(*DAT_0041e010 + 0x31c))(DAT_0041e010);
  piVar3 = (int *)__vbaObjSet(&local_1c,uVar2);
  iVar5 = (**(code **)(*piVar3 + 0xe0))(piVar3,&local_20);
  if (iVar5 < 0) {
    __vbaHresultCheckObj(iVar5,piVar3,&DAT_004086ec,0xe0);
  }
  piVar3 = &local_24;
  local_24 = -(uint)((short)local_20 != 0);
  FUN_004141c0();
  __vbaFreeObj(piVar3);
  return;
}


// ---- FUN_004106c0 @ 004106c0

void FUN_004106c0(uint param_1)

{
  code *pcVar1;
  code *pcVar2;
  short sVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  undefined4 *unaff_FS_OFFSET;
  bool bVar13;
  undefined4 local_50;
  undefined4 local_4c [4];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004015d6;
  uStack_18 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_18;
  local_10 = &stack0xffffff64;
  piVar12 = (int *)(param_1 & 0xfffffffe);
  local_8 = param_1 & 1;
  iVar11 = *piVar12;
  local_c = &DAT_004011d0;
  (**(code **)(iVar11 + 4))(piVar12);
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  local_38 = 0;
  local_3c = 0;
  local_4c[0] = 0;
  local_50 = 0;
  Ordinal_598();
  pcVar1 = *(code **)(iVar11 + 0x3fc);
  uVar5 = (*pcVar1)(piVar12,0xb,0);
  uVar5 = __vbaObjSet(&local_30,uVar5);
  uVar5 = __vbaLateIdCallLd(local_4c,uVar5);
  sVar3 = __vbaI2Var(uVar5);
  bVar13 = DAT_0041ecb2 != sVar3;
  __vbaFreeObj();
  __vbaFreeVar();
  if (bVar13) {
    uVar5 = (*pcVar1)(piVar12,0xb,0);
    uVar5 = __vbaObjSet(&local_30,uVar5);
    uVar5 = __vbaLateIdCallLd(local_4c,uVar5);
    uVar4 = __vbaI2Var(uVar5);
    __vbaFreeObj();
    __vbaFreeVar();
    switch(uVar4) {
    case 1:
      local_50 = 0x96;
      break;
    case 2:
      local_50 = 0xa0;
      break;
    case 3:
      local_50 = 0xaa;
      break;
    case 4:
      local_50 = 0xb4;
      break;
    case 5:
      local_50 = 0xbe;
      break;
    case 6:
      local_50 = 200;
      break;
    case 7:
      local_50 = 0xd2;
      break;
    case 8:
      local_50 = 0xdc;
      break;
    case 9:
      local_50 = 0xe6;
      break;
    case 10:
      local_50 = 0xf0;
      break;
    case 0xb:
      local_50 = 0xfa;
      break;
    case 0xc:
      local_50 = 0x104;
      break;
    default:
      local_50 = 0x10e;
    }
    FUN_00419e70((short *)&local_50,(short *)&DAT_0041ecb6);
    __vbaStrMove();
    pcVar2 = *(code **)(iVar11 + 0x404);
    uVar5 = (*pcVar2)(piVar12);
    piVar6 = (int *)__vbaObjSet(&local_30,uVar5);
    iVar7 = (**(code **)(*piVar6 + 0x50))(piVar6,&local_20);
    if (iVar7 < 0) {
      __vbaHresultCheckObj(iVar7,piVar6,&DAT_004086ac,0x50);
    }
    iVar7 = __vbaStrCmp(local_20,local_1c);
    __vbaFreeStr();
    __vbaFreeObj();
    if (iVar7 != 0) {
      uVar5 = (*pcVar2)(piVar12);
      piVar6 = (int *)__vbaObjSet(&local_30,uVar5);
      iVar7 = (**(code **)(*piVar6 + 0x54))(piVar6,local_1c);
      if (iVar7 < 0) {
        __vbaHresultCheckObj(iVar7,piVar6,&DAT_004086ac,0x54);
      }
      __vbaFreeObj();
    }
    uVar5 = (*pcVar1)(piVar12,0xb,0);
    uVar5 = __vbaObjSet(&local_30,uVar5);
    uVar5 = __vbaLateIdCallLd(local_4c,uVar5);
    DAT_0041ecb2 = __vbaI2Var(uVar5);
    __vbaFreeObj();
    __vbaFreeVar();
  }
  uVar5 = (**(code **)(iVar11 + 0x368))(piVar12);
  piVar6 = (int *)__vbaObjSet(&local_30,uVar5);
  iVar7 = (**(code **)(*piVar6 + 0xa0))(piVar6,&local_20);
  if (iVar7 < 0) {
    __vbaHresultCheckObj(iVar7,piVar6,&DAT_004086bc,0xa0);
  }
  uVar5 = (**(code **)(iVar11 + 0x364))(piVar12);
  piVar6 = (int *)__vbaObjSet(&local_34,uVar5);
  iVar7 = (**(code **)(*piVar6 + 0xa0))(piVar6,&local_24);
  if (iVar7 < 0) {
    __vbaHresultCheckObj(iVar7,piVar6,&DAT_004086bc,0xa0);
  }
  pcVar1 = *(code **)(iVar11 + 0x360);
  uVar5 = (*pcVar1)(piVar12);
  piVar6 = (int *)__vbaObjSet(&local_38,uVar5);
  iVar7 = (**(code **)(*piVar6 + 0xa0))(piVar6,&local_28);
  if (iVar7 < 0) {
    __vbaHresultCheckObj(iVar7,piVar6,&DAT_004086bc,0xa0);
  }
  uVar5 = (**(code **)(iVar11 + 0x34c))(piVar12);
  piVar6 = (int *)__vbaObjSet(&local_3c,uVar5);
  iVar7 = (**(code **)(*piVar6 + 0xa0))(piVar6,&local_2c);
  if (iVar7 < 0) {
    __vbaHresultCheckObj(iVar7,piVar6,&DAT_004086bc,0xa0);
  }
  iVar7 = __vbaLenBstr(local_2c);
  iVar8 = __vbaLenBstr(local_28);
  iVar9 = __vbaLenBstr(local_24);
  iVar10 = __vbaLenBstr(local_20);
  __vbaFreeStrList(4,&local_20,&local_24,&local_28,&local_2c);
  __vbaFreeObjList(4,&local_30,&local_34,&local_38,&local_3c);
  if (((iVar7 == 0 || iVar8 == 0) || iVar9 == 0) || iVar10 == 0) {
    uVar5 = (**(code **)(iVar11 + 0x358))(piVar12);
    piVar12 = (int *)__vbaObjSet(&local_30,uVar5);
    iVar11 = (**(code **)(*piVar12 + 0x8c))(piVar12,0);
    if (iVar11 < 0) {
      __vbaHresultCheckObj(iVar11,piVar12,&DAT_004086cc,0x8c);
    }
    __vbaFreeObj();
  }
  else {
    if (DAT_0041ec9e == -1) {
      uVar5 = (**(code **)(iVar11 + 0x358))();
      piVar6 = (int *)__vbaObjSet(&local_30,uVar5);
      iVar11 = (**(code **)(*piVar6 + 0x8c))(piVar6,0);
      if (iVar11 < 0) {
        __vbaHresultCheckObj(iVar11,piVar6,&DAT_004086cc,0x8c);
      }
      pcVar2 = __vbaFreeObj_exref;
      __vbaFreeObj();
      uVar5 = (*pcVar1)(piVar12);
      piVar12 = (int *)__vbaObjSet(&local_30,uVar5);
      iVar11 = (**(code **)(*piVar12 + 0x8c))(piVar12,0);
    }
    else {
      uVar5 = (**(code **)(iVar11 + 0x358))(piVar12);
      piVar6 = (int *)__vbaObjSet(&local_30,uVar5);
      iVar11 = (**(code **)(*piVar6 + 0x8c))(piVar6,0xffffffff);
      if (iVar11 < 0) {
        __vbaHresultCheckObj(iVar11,piVar6,&DAT_004086cc,0x8c);
      }
      pcVar2 = __vbaFreeObj_exref;
      __vbaFreeObj();
      uVar5 = (*pcVar1)(piVar12);
      piVar12 = (int *)__vbaObjSet(&local_30,uVar5);
      iVar11 = (**(code **)(*piVar12 + 0x8c))(piVar12,0xffffffff);
    }
    if (iVar11 < 0) {
      __vbaHresultCheckObj(iVar11,piVar12,&DAT_004086bc,0x8c);
    }
    (*pcVar2)();
  }
  local_8 = 0;
                    /* WARNING: Could not recover jumptable at 0x00410c8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __vbaFreeStr();
  return;
}


// ---- FUN_00410ce0 @ 00410ce0

undefined4 FUN_00410ce0(uint param_1,undefined2 *param_2)

{
  int *piVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004015d6;
  local_18 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_18;
  piVar1 = (int *)(param_1 & 0xfffffffe);
  local_10 = &stack0xffffffd4;
  local_8 = param_1 & 1;
  local_c = &DAT_004011e0;
  (**(code **)(*piVar1 + 4))(piVar1);
  local_8 = 0;
  *param_2 = 0;
  (**(code **)(*piVar1 + 8))(piVar1);
  *unaff_FS_OFFSET = local_18;
  return local_8;
}


// ---- FUN_00410d50 @ 00410d50

void __cdecl FUN_00410d50(uint param_1,short *param_2)

{
  short sVar1;
  short sVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_2c [4];
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004015d6;
  uStack_18 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_18;
  local_10 = &stack0xffffffb8;
  piVar7 = (int *)(param_1 & 0xfffffffe);
  local_8 = param_1 & 1;
  iVar6 = *piVar7;
  local_c = &DAT_004011e8;
  (**(code **)(iVar6 + 4))(piVar7);
  local_1c = 0;
  local_2c[0] = 0;
  uVar3 = (**(code **)(iVar6 + 0x318))(piVar7,4,0);
  uVar3 = __vbaObjSet(&local_1c,uVar3);
  uVar3 = __vbaLateIdCallLd(local_2c,uVar3);
  sVar2 = __vbaI2Var(uVar3);
  sVar1 = *param_2;
  __vbaFreeObj();
  __vbaFreeVar();
  if (sVar1 != 1 && sVar2 == 1) {
    uVar3 = (**(code **)(iVar6 + 0x370))(piVar7);
    piVar4 = (int *)__vbaObjSet(&local_1c,uVar3);
    iVar5 = (**(code **)(*piVar4 + 0x1dc))(piVar4);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,piVar4,&DAT_00408924,0x1dc);
    }
    __vbaFreeObj();
  }
  uVar3 = (**(code **)(iVar6 + 0x318))(piVar7,4,0);
  uVar3 = __vbaObjSet(&local_1c,uVar3);
  uVar3 = __vbaLateIdCallLd(local_2c,uVar3);
  sVar2 = __vbaI2Var(uVar3);
  sVar1 = *param_2;
  __vbaFreeObj();
  __vbaFreeVar();
  if (sVar1 != 2 && sVar2 == 2) {
    iVar6 = (**(code **)(iVar6 + 0x76c))(piVar7);
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar7,&DAT_00407968,0x76c);
    }
  }
  return;
}


// ---- FUN_00410f00 @ 00410f00

undefined4 FUN_00410f00(uint param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004015d6;
  local_18 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_18;
  local_10 = &stack0xffffffd0;
  piVar2 = (int *)(param_1 & 0xfffffffe);
  local_8 = param_1 & 1;
  iVar1 = *piVar2;
  local_c = &DAT_004011f8;
  (**(code **)(iVar1 + 4))(piVar2);
  iVar1 = (**(code **)(iVar1 + 0x76c))(piVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar2,&DAT_00407968,0x76c);
  }
  local_8 = 0;
  (**(code **)(*piVar2 + 8))(piVar2);
  *unaff_FS_OFFSET = local_18;
  return local_8;
}


// ---- FUN_00410f90 @ 00410f90

undefined4 FUN_00410f90(uint param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004015d6;
  local_18 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_18;
  local_10 = &stack0xffffffd0;
  piVar2 = (int *)(param_1 & 0xfffffffe);
  local_8 = param_1 & 1;
  iVar1 = *piVar2;
  local_c = &DAT_00401200;
  (**(code **)(iVar1 + 4))(piVar2);
  iVar1 = (**(code **)(iVar1 + 0x76c))(piVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar2,&DAT_00407968,0x76c);
  }
  local_8 = 0;
  (**(code **)(*piVar2 + 8))(piVar2);
  *unaff_FS_OFFSET = local_18;
  return local_8;
}


// ---- FUN_00411020 @ 00411020

undefined4 FUN_00411020(uint param_1)

{
  int *piVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004015d6;
  local_18 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_18;
  piVar1 = (int *)(param_1 & 0xfffffffe);
  local_10 = &stack0xffffffd4;
  local_8 = param_1 & 1;
  local_c = &DAT_00401208;
  (**(code **)(*piVar1 + 4))(piVar1);
  FUN_00416840();
  local_8 = 0;
  (**(code **)(*piVar1 + 8))(piVar1);
  *unaff_FS_OFFSET = local_18;
  return local_8;
}


// ---- FUN_00411090 @ 00411090

void __cdecl FUN_00411090(uint param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *unaff_FS_OFFSET;
  bool bVar4;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004015d6;
  uStack_18 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_18;
  local_10 = &stack0xffffffc0;
  local_8 = param_1 & 1;
  local_c = &DAT_00401210;
  (**(code **)(*(int *)(param_1 & 0xfffffffe) + 4))((int *)(param_1 & 0xfffffffe));
  local_1c = 0;
  local_20 = 0;
  if (((DAT_0041ec9a != -1) && (DAT_0041ec9c != -1)) && (DAT_0041ecb0 != -1)) {
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar1 = (**(code **)(*DAT_0041e010 + 0x334))(DAT_0041e010);
    piVar2 = (int *)__vbaObjSet(&local_1c,uVar1);
    iVar3 = (**(code **)(*piVar2 + 0xe0))(piVar2,&local_20);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar2,&DAT_004086ec,0xe0);
    }
    bVar4 = (short)local_20 == 1;
    __vbaFreeObj();
    DAT_0041ecae = -(ushort)bVar4;
    if (DAT_0041ecb4 == 0) {
      FUN_004135c0();
    }
  }
  return;
}


// ---- FUN_004111d0 @ 004111d0

undefined4 FUN_004111d0(uint param_1,short *param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int *piVar4;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004015d6;
  local_18 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_18;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  local_10 = &stack0xffffffd4;
  local_8 = param_1 & 1;
  local_c = &DAT_00401220;
  (**(code **)(*piVar4 + 4))(piVar4);
  if (*param_2 != 8) {
    sVar2 = Ordinal_516(&DAT_00408940);
    sVar1 = *param_2;
    sVar3 = Ordinal_516(&DAT_00408938);
    if (*param_2 < sVar3 || sVar2 < sVar1) {
      *param_2 = 0;
    }
  }
  local_8 = 0;
  (**(code **)(*piVar4 + 8))(piVar4);
  *unaff_FS_OFFSET = local_18;
  return local_8;
}


// ---- FUN_00411270 @ 00411270

undefined4 FUN_00411270(uint param_1,short *param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int *piVar4;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004015d6;
  local_18 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_18;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  local_10 = &stack0xffffffd4;
  local_8 = param_1 & 1;
  local_c = &DAT_00401228;
  (**(code **)(*piVar4 + 4))(piVar4);
  if (*param_2 != 8) {
    sVar2 = Ordinal_516(&DAT_00408938);
    sVar1 = *param_2;
    sVar3 = Ordinal_516(&DAT_00408940);
    if (sVar3 < *param_2 || sVar1 < sVar2) {
      *param_2 = 0;
    }
  }
  local_8 = 0;
  (**(code **)(*piVar4 + 8))(piVar4);
  *unaff_FS_OFFSET = local_18;
  return local_8;
}


// ---- FUN_00411310 @ 00411310

undefined4 FUN_00411310(uint param_1,short *param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int *piVar4;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004015d6;
  local_18 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_18;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  local_10 = &stack0xffffffd4;
  local_8 = param_1 & 1;
  local_c = &DAT_00401230;
  (**(code **)(*piVar4 + 4))(piVar4);
  if (*param_2 != 8) {
    sVar2 = Ordinal_516(&DAT_00408940);
    sVar1 = *param_2;
    sVar3 = Ordinal_516(&DAT_00408938);
    if (*param_2 < sVar3 || sVar2 < sVar1) {
      *param_2 = 0;
    }
  }
  local_8 = 0;
  (**(code **)(*piVar4 + 8))(piVar4);
  *unaff_FS_OFFSET = local_18;
  return local_8;
}


// ---- FUN_004113b0 @ 004113b0

undefined4 FUN_004113b0(uint param_1,short *param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int *piVar4;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004015d6;
  local_18 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_18;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  local_10 = &stack0xffffffd4;
  local_8 = param_1 & 1;
  local_c = &DAT_00401238;
  (**(code **)(*piVar4 + 4))(piVar4);
  if (*param_2 != 8) {
    sVar2 = Ordinal_516(&DAT_00408938);
    sVar1 = *param_2;
    sVar3 = Ordinal_516(&DAT_00408940);
    if (sVar3 < *param_2 || sVar1 < sVar2) {
      *param_2 = 0;
    }
  }
  local_8 = 0;
  (**(code **)(*piVar4 + 8))(piVar4);
  *unaff_FS_OFFSET = local_18;
  return local_8;
}


// ---- FUN_00411450 @ 00411450

undefined4 FUN_00411450(uint param_1,short *param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int *piVar4;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined1 *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004015d6;
  local_18 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_18;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  local_10 = &stack0xffffffd4;
  local_8 = param_1 & 1;
  local_c = &LAB_00401240;
  (**(code **)(*piVar4 + 4))(piVar4);
  if (*param_2 != 8) {
    sVar2 = Ordinal_516(&DAT_00408940);
    sVar1 = *param_2;
    sVar3 = Ordinal_516(&DAT_00408938);
    if (*param_2 < sVar3 || sVar2 < sVar1) {
      *param_2 = 0;
    }
  }
  local_8 = 0;
  (**(code **)(*piVar4 + 8))(piVar4);
  *unaff_FS_OFFSET = local_18;
  return local_8;
}


// ---- FUN_004114f0 @ 004114f0

void FUN_004114f0(uint param_1)

{
  short sVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_48;
  short local_44 [4];
  undefined4 local_3c;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24 [2];
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004015d6;
  uStack_18 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_18;
  local_10 = &stack0xffffff98;
  local_8 = param_1 & 1;
  local_c = &DAT_00401248;
  (**(code **)(*(int *)(param_1 & 0xfffffffe) + 4))((int *)(param_1 & 0xfffffffe));
  local_1c = 0;
  local_24[0] = 0;
  local_28 = 0;
  local_2c = 0;
  local_30 = 0;
  local_44[2] = 0;
  local_44[3] = 0;
  local_48 = 0;
  local_44[0] = 0x212;
  local_44[1] = 0;
  FUN_00419e70(local_44,(short *)&DAT_0041ecb6);
  __vbaStrMove();
  local_48 = __vbaI2I4();
  local_2c = 0;
  __vbaStrMove();
  sVar1 = FUN_00411fc0(&local_28,(short *)&local_48);
  __vbaFreeStrList(2,&local_28,&local_2c);
  if (sVar1 != 7) {
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar2 = (**(code **)(*DAT_0041e010 + 0x32c))(DAT_0041e010);
    piVar3 = (int *)__vbaObjSet(&local_30,uVar2);
    iVar4 = (**(code **)(*piVar3 + 0x1e8))(piVar3);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar3,&DAT_004088e4,0x1e8);
    }
    __vbaFreeObj();
    if (DAT_0041ecae != 0) {
      __vbaStrCopy();
      __vbaStrCopy();
      __vbaStrCat(local_1c,DAT_0041ec80);
      __vbaStrMove();
      FUN_00416da0(local_24,&local_28);
      __vbaFreeStr();
      if (DAT_0041e010 == (int *)0x0) {
        __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
      }
      uVar2 = (**(code **)(*DAT_0041e010 + 0x32c))(DAT_0041e010);
      piVar3 = (int *)__vbaObjSet(&local_30,uVar2);
      iVar4 = (**(code **)(*piVar3 + 0x1ec))(piVar3,local_1c,10,local_3c,0x80020004,local_34);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,piVar3,&DAT_004088e4,0x1ec);
      }
      __vbaFreeObj();
    }
    FUN_00417b60();
  }
  local_8 = 0;
  __vbaFreeStr(&LAB_00411720);
                    /* WARNING: Could not recover jumptable at 0x0041171d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __vbaFreeStr();
  return;
}


// ---- FUN_00411740 @ 00411740

undefined4 FUN_00411740(uint param_1)

{
  int *piVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004015d6;
  local_18 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_18;
  piVar1 = (int *)(param_1 & 0xfffffffe);
  local_10 = &stack0xffffffd4;
  local_8 = param_1 & 1;
  local_c = &DAT_00401258;
  (**(code **)(*piVar1 + 4))(piVar1);
  if ((((DAT_0041ec9a != -1) && (DAT_0041ec9c != -1)) && (DAT_0041ecb0 != -1)) &&
     (DAT_0041ecb4 == 0)) {
    FUN_004135c0();
  }
  local_8 = 0;
  (**(code **)(*piVar1 + 8))(piVar1);
  *unaff_FS_OFFSET = local_18;
  return local_8;
}


// ---- FUN_004117e0 @ 004117e0

undefined4 FUN_004117e0(uint param_1)

{
  int *piVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004015d6;
  local_18 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_18;
  piVar1 = (int *)(param_1 & 0xfffffffe);
  local_10 = &stack0xffffffd4;
  local_8 = param_1 & 1;
  local_c = &DAT_00401260;
  (**(code **)(*piVar1 + 4))(piVar1);
  if ((((DAT_0041ec9a != -1) && (DAT_0041ec9c != -1)) && (DAT_0041ecb0 != -1)) &&
     (DAT_0041ecb4 == 0)) {
    FUN_004135c0();
  }
  local_8 = 0;
  (**(code **)(*piVar1 + 8))(piVar1);
  *unaff_FS_OFFSET = local_18;
  return local_8;
}


// ---- FUN_00411880 @ 00411880

/* WARNING: Type propagation algorithm not settling */

int * __cdecl FUN_00411880(uint param_1)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  short sVar6;
  undefined4 *unaff_FS_OFFSET;
  int *piStack_94;
  int iStack_90;
  code *pcStack_8c;
  int *piStack_88;
  undefined *puStack_84;
  int *piStack_80;
  int *piStack_7c;
  int *piStack_78;
  int *piStack_74;
  int *piStack_70;
  int *piStack_6c;
  int *piStack_68;
  int *piStack_64;
  int *piStack_60;
  undefined *puStack_5c;
  int *piStack_58;
  int *piStack_54;
  int local_28 [4];
  undefined4 uStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  int *piVar7;
  
  puStack_14 = &DAT_004015d6;
  uStack_18 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_18;
  piStack_54 = (int *)(param_1 & 0xfffffffe);
  local_10 = &stack0xffffffb0;
  local_8 = param_1 & 1;
  local_c = &DAT_00401268;
  piStack_58 = (int *)0x4118bf;
  (**(code **)(*piStack_54 + 4))();
  pcVar1 = __vbaObjSet_exref;
  local_28[1] = 0;
  local_28[0] = 0;
  while( true ) {
    if (DAT_0041e010 == (int *)0x0) {
      piStack_58 = (int *)&DAT_0041e010;
      puStack_5c = &DAT_00404ab8;
      piStack_60 = (int *)0x4118e6;
      __vbaNew2();
    }
    piStack_58 = DAT_0041e010;
    puStack_5c = (undefined *)0x4118f4;
    puStack_5c = (undefined *)(**(code **)(*DAT_0041e010 + 0x324))();
    piStack_60 = local_28 + 1;
    piStack_64 = (int *)0x4118fb;
    piVar3 = (int *)__vbaObjSet();
    piStack_64 = local_28;
    piStack_6c = (int *)0x41190a;
    piStack_68 = piVar3;
    piVar4 = (int *)(**(code **)(*piVar3 + 0xd8))();
    if ((int)piVar4 < 0) {
      piStack_6c = (int *)0xd8;
      piStack_70 = (int *)&DAT_004088e4;
      piStack_7c = (int *)0x411920;
      piStack_78 = piVar4;
      piStack_74 = piVar3;
      __vbaHresultCheckObj();
    }
    iVar2 = local_28[0];
    piStack_6c = (int *)0x41192c;
    piVar3 = (int *)__vbaFreeObj();
    if ((short)iVar2 < 1) break;
    piVar4 = (int *)0x0;
    while( true ) {
      piVar7 = piVar4;
      sVar6 = (short)piVar7;
      if ((short)((short)iVar2 + -1) < sVar6) {
        return piVar3;
      }
      if (DAT_0041e010 == (int *)0x0) {
        piStack_6c = (int *)&DAT_0041e010;
        piStack_70 = (int *)&DAT_00404ab8;
        piStack_74 = (int *)0x411966;
        __vbaNew2();
      }
      piStack_6c = DAT_0041e010;
      piStack_70 = (int *)0x411974;
      piStack_70 = (int *)(**(code **)(*DAT_0041e010 + 0x324))();
      piStack_74 = local_28 + 1;
      piStack_78 = (int *)0x41197b;
      piVar3 = (int *)__vbaObjSet();
      piStack_78 = local_28;
      puStack_84 = (undefined *)0x41198b;
      piStack_80 = piVar3;
      piStack_7c = piVar7;
      iVar5 = (**(code **)(*piVar3 + 0x138))();
      if (iVar5 < 0) {
        puStack_84 = (undefined *)0x138;
        piStack_88 = (int *)&DAT_004088e4;
        piStack_94 = (int *)0x4119a1;
        iStack_90 = iVar5;
        pcStack_8c = (code *)piVar3;
        __vbaHresultCheckObj();
      }
      iVar5 = local_28[0];
      puStack_84 = (undefined *)0x4119ad;
      __vbaFreeObj();
      if ((short)iVar5 != 0) break;
      piVar3 = (int *)(uint)(ushort)(sVar6 + 1);
      piVar4 = piVar3;
      if (SCARRY2(sVar6,1)) {
        piStack_6c = (int *)0x411a63;
        __vbaErrorOverflow();
        piStack_7c = (int *)&DAT_004015d6;
        piStack_80 = (int *)*unaff_FS_OFFSET;
        *unaff_FS_OFFSET = &piStack_80;
        pcStack_8c = pcVar1;
        iStack_90 = iVar5;
        piVar3 = (int *)((uint)piStack_64 & 0xfffffffe);
        piStack_78 = (int *)&piStack_94;
        piStack_70 = (int *)((uint)piStack_64 & 1);
        piStack_74 = (int *)&DAT_00401278;
        piStack_94 = piVar7;
        piStack_6c = (int *)&stack0xfffffffc;
        piStack_64 = piVar3;
        (**(code **)(*piVar3 + 4))(piVar3);
        FUN_00418a30();
        piStack_70 = (int *)0x0;
        (**(code **)(*piStack_64 + 8))(piStack_64);
        *unaff_FS_OFFSET = piStack_80;
        return piStack_70;
      }
    }
    if (DAT_0041e010 == (int *)0x0) {
      piStack_6c = (int *)&DAT_0041e010;
      piStack_70 = (int *)&DAT_00404ab8;
      piStack_74 = (int *)0x4119e0;
      __vbaNew2();
    }
    piStack_6c = DAT_0041e010;
    piStack_70 = (int *)0x4119ee;
    piStack_70 = (int *)(**(code **)(*DAT_0041e010 + 0x324))();
    piStack_74 = local_28 + 1;
    piStack_78 = (int *)0x4119f5;
    piVar3 = (int *)__vbaObjSet();
    piStack_80 = (int *)0x411a01;
    piStack_7c = piVar3;
    piStack_78 = piVar7;
    piVar4 = (int *)(**(code **)(*piVar3 + 0x1f0))();
    if ((int)piVar4 < 0) {
      piStack_80 = (int *)0x1f0;
      puStack_84 = &DAT_004088e4;
      iStack_90 = 0x411a17;
      pcStack_8c = (code *)piVar4;
      piStack_88 = piVar3;
      __vbaHresultCheckObj();
    }
    piStack_80 = (int *)0x411a20;
    __vbaFreeObj();
  }
  return piVar3;
}


// ---- FUN_00411a70 @ 00411a70

undefined4 FUN_00411a70(uint param_1)

{
  int *piVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004015d6;
  local_18 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_18;
  piVar1 = (int *)(param_1 & 0xfffffffe);
  local_10 = &stack0xffffffd4;
  local_8 = param_1 & 1;
  local_c = &DAT_00401278;
  (**(code **)(*piVar1 + 4))(piVar1);
  FUN_00418a30();
  local_8 = 0;
  (**(code **)(*piVar1 + 8))(piVar1);
  *unaff_FS_OFFSET = local_18;
  return local_8;
}


// ---- FUN_00411ae0 @ 00411ae0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00411ae0(void)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  short *psVar4;
  undefined4 *unaff_FS_OFFSET;
  bool bVar5;
  undefined4 auStack_d68 [2];
  undefined1 *puStack_d60;
  undefined4 auStack_d58 [2];
  undefined4 uStack_d50;
  undefined4 auStack_d48 [2];
  undefined4 uStack_d40;
  undefined4 auStack_d38 [4];
  undefined4 uStack_d28;
  wchar_t *pwStack_d24;
  short local_c6c [1580];
  undefined4 uStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_004015d6;
  uStack_14 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_14;
  psVar4 = local_c6c;
  for (iVar2 = 0x314; iVar2 != 0; iVar2 = iVar2 + -1) {
    psVar4[0] = 0;
    psVar4[1] = 0;
    psVar4 = psVar4 + 2;
  }
  *(undefined1 *)psVar4 = 0;
  local_8 = &DAT_00401280;
  local_c = &stack0xfffff314;
  __vbaAryConstruct();
  if (DAT_0041e010 == (int *)0x0) {
    __vbaNew2();
  }
  (**(code **)(*DAT_0041e010 + 0x2fc))();
  __vbaObjSet();
  pwStack_d24 = (wchar_t *)0x411bc2;
  __vbaLateIdCallLd();
  __vbaI4Var();
  __vbaI2I4();
  __vbaFreeObj();
  __vbaFreeVar();
  __vbaCopyBytes();
  __vbaStrCopy();
  sVar1 = 0;
  do {
    if (0x15d < sVar1) {
LAB_00411c9b:
      __vbaStrCopy();
      sVar1 = 0;
      goto LAB_00411cad;
    }
    uVar3 = (uint)sVar1;
    if (0x15d < uVar3) {
      __vbaGenerateBoundsError();
    }
    if ((&DAT_0041e028)[uVar3] == '\0') goto LAB_00411c9b;
    if (0x15d < uVar3) {
      __vbaGenerateBoundsError();
    }
    Ordinal_537();
    __vbaStrMove();
    __vbaStrCat();
    __vbaStrMove();
    __vbaFreeStr();
    bVar5 = SCARRY2(sVar1,1);
    sVar1 = sVar1 + 1;
  } while (!bVar5);
  goto LAB_00411fb2;
  while( true ) {
    uVar3 = (uint)sVar1;
    if (0x15d < uVar3) {
      __vbaGenerateBoundsError();
    }
    if ((&DAT_0041e5a0)[uVar3] == '\0') goto LAB_00411d31;
    if (0x15d < uVar3) {
      __vbaGenerateBoundsError();
    }
    Ordinal_537();
    __vbaStrMove();
    __vbaStrCat();
    __vbaStrMove();
    __vbaFreeStr();
    bVar5 = SCARRY2(sVar1,1);
    sVar1 = sVar1 + 1;
    if (bVar5) break;
LAB_00411cad:
    if (0x15d < sVar1) {
LAB_00411d31:
      __vbaStrCopy();
      sVar1 = 0;
      goto LAB_00411d43;
    }
  }
  goto LAB_00411fb2;
  while( true ) {
    uVar3 = (uint)sVar1;
    if (0x15d < uVar3) {
      __vbaGenerateBoundsError();
    }
    if ((&DAT_0041e2e4)[uVar3] == '\0') goto LAB_00411dc7;
    if (0x15d < uVar3) {
      __vbaGenerateBoundsError();
    }
    Ordinal_537();
    __vbaStrMove();
    __vbaStrCat();
    __vbaStrMove();
    __vbaFreeStr();
    bVar5 = SCARRY2(sVar1,1);
    sVar1 = sVar1 + 1;
    if (bVar5) break;
LAB_00411d43:
    if (0x15d < sVar1) {
LAB_00411dc7:
      __vbaStrCopy();
      sVar1 = 0;
      goto LAB_00411dd9;
    }
  }
  goto LAB_00411fb2;
  while( true ) {
    uVar3 = (uint)sVar1;
    if (0x15d < uVar3) {
      __vbaGenerateBoundsError();
    }
    if ((&DAT_0041eb1c)[uVar3] == '\0') goto LAB_00411e59;
    if (0x15d < uVar3) {
      __vbaGenerateBoundsError();
    }
    Ordinal_537();
    __vbaStrMove();
    __vbaStrCat();
    __vbaStrMove();
    __vbaFreeStr();
    bVar5 = SCARRY2(sVar1,1);
    sVar1 = sVar1 + 1;
    if (bVar5) break;
LAB_00411dd9:
    if (0x15d < sVar1) {
LAB_00411e59:
      __vbaStrCopy();
      sVar1 = 0;
      goto LAB_00411e76;
    }
  }
  goto LAB_00411fb2;
  while( true ) {
    uVar3 = (uint)sVar1;
    if (0x15d < uVar3) {
      __vbaGenerateBoundsError();
    }
    if ((&DAT_0041e85c)[uVar3] == '\0') goto LAB_00411efd;
    if (0x15d < uVar3) {
      __vbaGenerateBoundsError();
    }
    Ordinal_537();
    __vbaStrMove();
    __vbaStrCat();
    __vbaStrMove();
    __vbaFreeStr();
    bVar5 = SCARRY2(sVar1,1);
    sVar1 = sVar1 + 1;
    if (bVar5) break;
LAB_00411e76:
    if (0x15d < sVar1) {
LAB_00411efd:
      Ordinal_527();
      __vbaStrMove();
      iVar2 = __vbaStrCmp();
      if (iVar2 == 0) {
        _DAT_0041ecb6 = 0;
        pwStack_d24 = (wchar_t *)0x411f3c;
        FUN_0041ad10((short *)&DAT_0041ecb6);
      }
      else {
        pwStack_d24 = L"FRENCH";
        uStack_d28 = 0x411f51;
        iVar2 = __vbaStrCmp();
        _DAT_0041ecb6 = (iVar2 != 0) + 1;
        pwStack_d24 = 
        L"ꅨ䄟\xeb00败邍\xfff3\xffff䐕䈓贀貍\xfff3\xffff䀕䈓贀粍\xfff3\xffff정䈑쌀趍\xf394\xffff◿ፄB诃\xf04d幟襤\r"
        ;
        FUN_0041ad10((short *)&DAT_0041ecb6);
      }
                    /* WARNING: Could not recover jumptable at 0x00411f9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      __vbaFreeStr();
      return;
    }
  }
LAB_00411fb2:
  __vbaErrorOverflow();
  pwStack_d24 = (wchar_t *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pwStack_d24;
  auStack_d38[0] = 0;
  auStack_d68[0] = 0;
  uStack_d50 = 0x80020004;
  uStack_d40 = 0x80020004;
  auStack_d58[0] = 10;
  auStack_d48[0] = 10;
  __vbaVarDup();
  puStack_d60 = &DAT_0041e028;
  auStack_d68[0] = 0x4008;
  Ordinal_595(auStack_d68,(int)local_c6c[0],auStack_d38,auStack_d48,auStack_d58);
  uStack_d28 = __vbaI2I4();
  __vbaFreeVarList(3,auStack_d38,auStack_d48,auStack_d58);
  return;
}


// ---- FUN_00411fc0 @ 00411fc0

void __cdecl FUN_00411fc0(undefined4 param_1,short *param_2)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_58 [2];
  undefined4 local_50;
  undefined4 local_48 [2];
  undefined4 local_40;
  undefined4 local_38 [2];
  undefined4 local_30;
  undefined4 local_28 [4];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_004015d6;
  uStack_14 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_14;
  local_28[0] = 0;
  local_58[0] = 0;
  local_c = &stack0xffffff68;
  local_40 = 0x80020004;
  local_30 = 0x80020004;
  local_8 = &DAT_00401290;
  local_48[0] = 10;
  local_38[0] = 10;
  __vbaVarDup();
  local_50 = param_1;
  local_58[0] = 0x4008;
  Ordinal_595(local_58,(int)*param_2,local_28,local_38,local_48);
  local_18 = __vbaI2I4();
  __vbaFreeVarList(3,local_28,local_38,local_48);
  return;
}


// ---- FUN_004120b0 @ 004120b0

void __cdecl FUN_004120b0(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 *unaff_FS_OFFSET;
  ushort in_FPUStatusWord;
  float10 fVar4;
  float local_20;
  float local_1c;
  int *local_18;
  undefined4 uStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_004015d6;
  uStack_14 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_14;
  local_c = &stack0xffffffb0;
  piVar1 = (int *)*param_1;
  local_8 = &DAT_004012a8;
  local_18 = (int *)0x0;
  local_1c = 0.0;
  local_20 = 0.0;
  iVar3 = (**(code **)(*piVar1 + 0x80))(piVar1,&local_20);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar1,&DAT_004084e0,0x80);
  }
  piVar1 = (int *)*param_1;
  if (DAT_0041f138 == (int *)0x0) {
    __vbaNew2(&DAT_0040867c,&DAT_0041f138);
  }
  piVar2 = DAT_0041f138;
  iVar3 = (**(code **)(*DAT_0041f138 + 0x18))(DAT_0041f138,&local_18);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_0040866c,0x18);
  }
  piVar2 = local_18;
  iVar3 = (**(code **)(*local_18 + 0x98))(local_18,&local_1c);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_004086dc,0x98);
  }
  iVar3 = *piVar1;
  if (DAT_0041e000 == 0) {
    fVar4 = ((float10)local_1c - (float10)local_20) / (float10)DAT_004012a0;
  }
  else {
    fVar4 = (float10)adj_fdiv_m32(DAT_004012a0,iVar3);
    iVar3 = extraout_ECX;
  }
  if ((in_FPUStatusWord & 0xd) == 0) {
    iVar3 = (**(code **)(iVar3 + 0x74))(piVar1,(float)fVar4);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar1,&DAT_004084e0,0x74);
    }
    __vbaFreeObj();
    piVar1 = (int *)*param_1;
    iVar3 = (**(code **)(*piVar1 + 0x88))(piVar1,&local_20);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar1,&DAT_004084e0,0x88);
    }
    piVar1 = (int *)*param_1;
    if (DAT_0041f138 == (int *)0x0) {
      __vbaNew2(&DAT_0040867c,&DAT_0041f138);
    }
    piVar2 = DAT_0041f138;
    iVar3 = (**(code **)(*DAT_0041f138 + 0x18))(DAT_0041f138,&local_18);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar2,&DAT_0040866c,0x18);
    }
    piVar2 = local_18;
    iVar3 = (**(code **)(*local_18 + 0x50))(local_18,&local_1c);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar2,&DAT_004086dc,0x50);
    }
    iVar3 = *piVar1;
    if (DAT_0041e000 == 0) {
      fVar4 = ((float10)local_1c - (float10)local_20) / (float10)DAT_004012a0;
    }
    else {
      fVar4 = (float10)adj_fdiv_m32(DAT_004012a0);
      iVar3 = extraout_ECX_00;
    }
    if ((in_FPUStatusWord & 0xd) == 0) {
      iVar3 = (**(code **)(iVar3 + 0x7c))(piVar1,(float)fVar4);
      if (iVar3 < 0) {
        __vbaHresultCheckObj(iVar3,piVar1,&DAT_004084e0,0x7c);
      }
      __vbaFreeObj();
      return;
    }
  }
  __vbaFPException();
  return;
}


// ---- FUN_004122c0 @ 004122c0

void FUN_004122c0(void)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  code *pcVar5;
  code *pcVar6;
  undefined4 *unaff_FS_OFFSET;
  bool bVar7;
  int local_a0;
  undefined4 local_9c [5];
  undefined4 local_88;
  undefined4 local_84;
  undefined4 *local_80;
  undefined4 local_7c;
  undefined4 local_78 [4];
  undefined4 local_68 [2];
  undefined4 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
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
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_004015d6;
  uStack_14 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_14;
  local_c = &stack0xffffff44;
  local_18 = 0;
  local_1c = 0;
  local_28 = 0;
  local_2c = 0;
  local_30 = 0;
  local_40 = 0;
  local_44 = 0;
  local_48 = 0;
  local_4c = 0;
  local_50 = 0;
  local_54 = 0;
  local_58 = 0;
  local_68[0] = 0;
  local_78[0] = 0;
  local_9c[0] = 0;
  local_a0 = 0;
  local_88 = 8;
  DAT_0041ec9a = 0xffff;
  local_24 = -1;
  local_80 = (undefined4 *)&DAT_00408c7c;
  local_8 = &DAT_004012b8;
  Ordinal_689(L"LEO FTP Image Archive",DAT_0041ec88,L"FTPShowArchived",8);
  uVar1 = __vbaStrMove();
  Ordinal_581(uVar1);
  local_38 = __vbaFpI2();
  __vbaFreeStr();
  local_88 = 8;
  local_80 = (undefined4 *)&DAT_004084f4;
  Ordinal_689(L"LEO FTP Image Archive",DAT_0041ec88,L"FTPUser",8,local_84,&DAT_004084f4,local_7c);
  __vbaStrMove();
  local_80 = (undefined4 *)&DAT_004084f4;
  local_88 = 8;
  Ordinal_689(L"LEO FTP Image Archive",DAT_0041ec88,L"FTPPassword",8,local_84,&DAT_004084f4,local_7c
             );
  __vbaStrMove();
  local_88 = 8;
  local_80 = (undefined4 *)&DAT_004084f4;
  Ordinal_689(L"LEO FTP Image Archive",DAT_0041ec88,L"FTPHost",8,local_84,&DAT_004084f4,local_7c);
  __vbaStrMove();
  local_88 = 8;
  local_80 = (undefined4 *)&DAT_004084f4;
  Ordinal_689(L"LEO FTP Image Archive",DAT_0041ec88,L"FTPDir",8,local_84,&DAT_004084f4,local_7c);
  __vbaStrMove();
  local_88 = 8;
  local_80 = (undefined4 *)&DAT_004084f4;
  Ordinal_689(L"LEO FTP Image Archive",DAT_0041ec88,L"LogFile",8,local_84,&DAT_004084f4,local_7c);
  __vbaStrMove();
  local_88 = 8;
  local_80 = (undefined4 *)&DAT_00408c7c;
  Ordinal_689(L"LEO FTP Image Archive",DAT_0041ec88,L"ImmediateXfers",8,local_84,&DAT_00408c7c,
              local_7c);
  uVar1 = __vbaStrMove();
  Ordinal_581(uVar1);
  local_20 = __vbaFpI2();
  __vbaFreeStr();
  local_88 = 8;
  local_80 = (undefined4 *)&DAT_00408c7c;
  Ordinal_689(L"LEO FTP Image Archive",DAT_0041ec88,L"NetPrinterEnable",8,local_84,&DAT_00408c7c,
              local_7c);
  uVar1 = __vbaStrMove();
  Ordinal_581(uVar1);
  local_34 = __vbaFpI2();
  __vbaFreeStr();
  local_88 = 8;
  local_80 = (undefined4 *)&DAT_00408c7c;
  Ordinal_689(L"LEO FTP Image Archive",DAT_0041ec88,L"NetPrinterType",8,local_84,&DAT_00408c7c,
              local_7c);
  uVar1 = __vbaStrMove();
  Ordinal_581(uVar1);
  local_4c = __vbaFpI2();
  __vbaFreeStr();
  local_88 = 8;
  local_80 = (undefined4 *)&DAT_00408c7c;
  Ordinal_689(L"LEO FTP Image Archive",DAT_0041ec88,L"NetPrintCopies",8,local_84,&DAT_00408c7c,
              local_7c);
  uVar1 = __vbaStrMove();
  Ordinal_581(uVar1);
  local_28 = __vbaFpI2();
  __vbaFreeStr();
  local_88 = 8;
  local_80 = (undefined4 *)&DAT_00408c7c;
  Ordinal_689(L"LEO FTP Image Archive",DAT_0041ec88,L"NetPrintAcross",8,local_84,&DAT_00408c7c,
              local_7c);
  uVar1 = __vbaStrMove();
  Ordinal_581(uVar1);
  local_48 = __vbaFpI2();
  __vbaFreeStr();
  local_88 = 8;
  local_80 = (undefined4 *)&DAT_00408c7c;
  Ordinal_689(L"LEO FTP Image Archive",DAT_0041ec88,L"NetPrintDown",8,local_84,&DAT_00408c7c,
              local_7c);
  uVar1 = __vbaStrMove();
  Ordinal_581(uVar1);
  local_1c = __vbaFpI2();
  __vbaFreeStr();
  local_88 = 8;
  local_80 = (undefined4 *)&DAT_00408c7c;
  Ordinal_689(L"LEO FTP Image Archive",DAT_0041ec88,L"NetPrintGap",8,local_84,&DAT_00408c7c,local_7c
             );
  uVar1 = __vbaStrMove();
  Ordinal_581(uVar1);
  local_44 = __vbaFpI2();
  __vbaFreeStr();
  local_88 = 8;
  local_80 = (undefined4 *)&DAT_00408c7c;
  Ordinal_689(L"LEO FTP Image Archive",DAT_0041ec88,L"NetPrintMargin",8,local_84,&DAT_00408c7c,
              local_7c);
  uVar1 = __vbaStrMove();
  Ordinal_581(uVar1);
  local_40 = __vbaFpI2();
  __vbaFreeStr();
  local_88 = 8;
  local_80 = (undefined4 *)&DAT_00408c7c;
  Ordinal_689(L"LEO FTP Image Archive",DAT_0041ec88,L"NetPrintLandscape",8,local_84,&DAT_00408c7c,
              local_7c);
  uVar1 = __vbaStrMove();
  Ordinal_581(uVar1);
  local_3c = __vbaFpI2();
  __vbaFreeStr();
  local_88 = 8;
  local_80 = (undefined4 *)&DAT_00408c7c;
  Ordinal_689(L"LEO FTP Image Archive",DAT_0041ec88,L"NetPrintScaleMode",8,local_84,&DAT_00408c7c,
              local_7c);
  uVar1 = __vbaStrMove();
  Ordinal_581(uVar1);
  local_18 = __vbaFpI2();
  __vbaFreeStr();
  if ((short)local_38 == -1) {
    local_24 = 0;
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar1 = (**(code **)(*DAT_0041e010 + 0x31c))(DAT_0041e010);
    pcVar5 = __vbaObjSet_exref;
    piVar2 = (int *)__vbaObjSet(&local_58,uVar1);
    iVar3 = (**(code **)(*piVar2 + 0xe4))(piVar2,0);
  }
  else {
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar1 = (**(code **)(*DAT_0041e010 + 0x31c))(DAT_0041e010);
    pcVar5 = __vbaObjSet_exref;
    piVar2 = (int *)__vbaObjSet(&local_58,uVar1);
    iVar3 = (**(code **)(*piVar2 + 0xe4))(piVar2,local_38);
  }
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_004086ec,0xe4);
  }
  __vbaFreeObj();
  iVar3 = __vbaLenBstr(DAT_0041ec8c);
  if (iVar3 == 0) {
    local_24 = 0;
  }
  iVar3 = __vbaLenBstr(DAT_0041ec90);
  if (iVar3 == 0) {
    local_24 = 0;
  }
  iVar3 = __vbaLenBstr(local_2c);
  if (iVar3 == 0) {
    local_24 = 0;
  }
  if (DAT_0041ecae == 0) {
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar1 = (**(code **)(*DAT_0041e010 + 0x368))(DAT_0041e010);
    piVar2 = (int *)(*pcVar5)(&local_58,uVar1);
    iVar3 = *piVar2;
    FUN_00416230(&DAT_0041ec8c);
    uVar1 = __vbaStrMove();
    iVar3 = (**(code **)(iVar3 + 0xa4))(piVar2,uVar1);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar2,&DAT_004086bc,0xa4);
    }
    __vbaFreeStr();
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar1 = (**(code **)(*DAT_0041e010 + 0x364))(DAT_0041e010);
    piVar2 = (int *)__vbaObjSet(&local_58,uVar1);
    iVar3 = *piVar2;
    FUN_00416230(&DAT_0041ec90);
    uVar1 = __vbaStrMove();
    iVar3 = (**(code **)(iVar3 + 0xa4))(piVar2,uVar1);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar2,&DAT_004086bc,0xa4);
    }
    __vbaFreeStr();
    __vbaFreeObj();
    pcVar5 = __vbaObjSet_exref;
  }
  if (DAT_0041e010 == (int *)0x0) {
    __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
  }
  uVar1 = (**(code **)(*DAT_0041e010 + 0x360))(DAT_0041e010);
  piVar2 = (int *)(*pcVar5)(&local_58,uVar1);
  iVar3 = (**(code **)(*piVar2 + 0xa4))(piVar2,local_2c);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_004086bc,0xa4);
  }
  __vbaFreeObj();
  iVar3 = __vbaLenBstr(local_50);
  if (iVar3 == 0) {
    local_24 = iVar3;
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar1 = (**(code **)(*DAT_0041e010 + 0x34c))(DAT_0041e010);
    piVar2 = (int *)(*pcVar5)(&local_58,uVar1);
    iVar3 = (**(code **)(*piVar2 + 0xa4))(piVar2,&DAT_00407614);
  }
  else {
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar1 = (**(code **)(*DAT_0041e010 + 0x34c))(DAT_0041e010);
    piVar2 = (int *)(*pcVar5)(&local_58,uVar1);
    iVar3 = (**(code **)(*piVar2 + 0xa4))(piVar2,local_50);
  }
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_004086bc,0xa4);
  }
  __vbaFreeObj();
  iVar3 = __vbaLenBstr(local_30);
  if (iVar3 == 0) {
    local_24 = iVar3;
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar1 = (**(code **)(*DAT_0041e010 + 0x378))(DAT_0041e010);
    piVar2 = (int *)(*pcVar5)(&local_58,uVar1);
    iVar3 = (**(code **)(*piVar2 + 0x54))(piVar2,L"LEOFTP.LOG");
  }
  else {
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar1 = (**(code **)(*DAT_0041e010 + 0x378))(DAT_0041e010);
    piVar2 = (int *)(*pcVar5)(&local_58,uVar1);
    iVar3 = (**(code **)(*piVar2 + 0x54))(piVar2,local_30);
  }
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_004086ac,0x54);
  }
  __vbaFreeObj();
  uVar1 = local_20;
  if ((short)local_20 == -1) {
    local_24 = 0;
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar1 = (**(code **)(*DAT_0041e010 + 0x36c))(DAT_0041e010);
    piVar2 = (int *)(*pcVar5)(&local_58,uVar1);
    iVar3 = (**(code **)(*piVar2 + 0xe4))(piVar2,0);
  }
  else {
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x36c))(DAT_0041e010);
    piVar2 = (int *)(*pcVar5)(&local_58,uVar4);
    iVar3 = (**(code **)(*piVar2 + 0xe4))(piVar2,uVar1);
  }
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_004086ec,0xe4);
  }
  __vbaFreeObj();
  uVar1 = local_34;
  if ((short)local_34 == -1) {
    local_24 = 0;
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar1 = (**(code **)(*DAT_0041e010 + 0x334))(DAT_0041e010);
    piVar2 = (int *)(*pcVar5)(&local_58,uVar1);
    iVar3 = (**(code **)(*piVar2 + 0xe4))(piVar2,0);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar2,&DAT_004086ec,0xe4);
    }
    __vbaFreeObj();
    DAT_0041ecae = 0;
  }
  else {
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x334))(DAT_0041e010);
    piVar2 = (int *)(*pcVar5)(&local_58,uVar4);
    iVar3 = (**(code **)(*piVar2 + 0xe4))(piVar2,uVar1);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar2,&DAT_004086ec,0xe4);
    }
    __vbaFreeObj();
  }
  if (DAT_0041e010 == (int *)0x0) {
    __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
  }
  uVar1 = (**(code **)(*DAT_0041e010 + 0x334))(DAT_0041e010);
  piVar2 = (int *)(*pcVar5)(&local_58,uVar1);
  iVar3 = (**(code **)(*piVar2 + 0xe0))(piVar2,local_9c);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_004086ec,0xe0);
  }
  bVar7 = (short)local_9c[0] == 1;
  __vbaFreeObj();
  DAT_0041ecae = -(ushort)bVar7;
  if ((short)local_4c == -1) {
    local_24 = 0;
    local_4c = 0;
  }
  if ((short)local_28 == -1) {
    local_24 = 0;
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar1 = (**(code **)(*DAT_0041e010 + 0x394))(DAT_0041e010);
    piVar2 = (int *)(*pcVar5)(&local_58,uVar1);
    iVar3 = (**(code **)(*piVar2 + 0xa4))(piVar2,&DAT_00408c88);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar2,&DAT_004086bc,0xa4);
    }
    __vbaFreeObj();
    pcVar6 = Ordinal_660_exref;
  }
  else {
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar1 = (**(code **)(*DAT_0041e010 + 0x394))(DAT_0041e010);
    piVar2 = (int *)(*pcVar5)(&local_58,uVar1);
    pcVar6 = Ordinal_660_exref;
    local_80 = &local_28;
    local_60 = 0x80020004;
    local_68[0] = 10;
    local_88 = 0x4002;
    Ordinal_660(local_78,&local_88,local_68,1,1);
    iVar3 = *piVar2;
    uVar1 = __vbaStrVarVal(&local_54,local_78);
    iVar3 = (**(code **)(iVar3 + 0xa4))(piVar2,uVar1);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar2,&DAT_004086bc,0xa4);
    }
    __vbaFreeStr();
    __vbaFreeObj();
    __vbaFreeVarList(2,local_68,local_78);
    pcVar5 = __vbaObjSet_exref;
  }
  if ((short)local_48 == -1) {
    local_24 = 0;
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar1 = (**(code **)(*DAT_0041e010 + 0x398))(DAT_0041e010);
    piVar2 = (int *)(*pcVar5)(&local_58,uVar1);
    iVar3 = (**(code **)(*piVar2 + 0xa4))(piVar2,&DAT_00408c88);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar2,&DAT_004086bc,0xa4);
    }
    __vbaFreeObj();
  }
  else {
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar1 = (**(code **)(*DAT_0041e010 + 0x398))(DAT_0041e010);
    piVar2 = (int *)(*pcVar5)(&local_58,uVar1);
    local_80 = &local_48;
    local_60 = 0x80020004;
    local_68[0] = 10;
    local_88 = 0x4002;
    (*pcVar6)(local_78,&local_88,local_68,1,1);
    iVar3 = *piVar2;
    uVar1 = __vbaStrVarVal(&local_54,local_78);
    iVar3 = (**(code **)(iVar3 + 0xa4))(piVar2,uVar1);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar2,&DAT_004086bc,0xa4);
    }
    __vbaFreeStr();
    __vbaFreeObj();
    __vbaFreeVarList(2,local_68,local_78);
    pcVar5 = __vbaObjSet_exref;
  }
  if ((short)local_1c == -1) {
    local_24 = 0;
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar1 = (**(code **)(*DAT_0041e010 + 0x39c))(DAT_0041e010);
    piVar2 = (int *)(*pcVar5)(&local_58,uVar1);
    iVar3 = (**(code **)(*piVar2 + 0xa4))(piVar2,&DAT_00408c88);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar2,&DAT_004086bc,0xa4);
    }
    __vbaFreeObj();
  }
  else {
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar1 = (**(code **)(*DAT_0041e010 + 0x39c))(DAT_0041e010);
    piVar2 = (int *)(*pcVar5)(&local_58,uVar1);
    local_80 = &local_1c;
    local_60 = 0x80020004;
    local_68[0] = 10;
    local_88 = 0x4002;
    (*pcVar6)(local_78,&local_88,local_68,1,1);
    iVar3 = *piVar2;
    uVar1 = __vbaStrVarVal(&local_54,local_78);
    iVar3 = (**(code **)(iVar3 + 0xa4))(piVar2,uVar1);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar2,&DAT_004086bc,0xa4);
    }
    __vbaFreeStr();
    __vbaFreeObj();
    __vbaFreeVarList(2,local_68,local_78);
    pcVar5 = __vbaObjSet_exref;
  }
  if ((short)local_44 == -1) {
    local_24 = 0;
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar1 = (**(code **)(*DAT_0041e010 + 0x3a0))(DAT_0041e010);
    piVar2 = (int *)(*pcVar5)(&local_58,uVar1);
    iVar3 = (**(code **)(*piVar2 + 0xa4))(piVar2,&DAT_00408c90);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar2,&DAT_004086bc,0xa4);
    }
    __vbaFreeObj();
  }
  else {
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar1 = (**(code **)(*DAT_0041e010 + 0x3a0))(DAT_0041e010);
    piVar2 = (int *)(*pcVar5)(&local_58,uVar1);
    local_80 = &local_44;
    local_60 = 0x80020004;
    local_68[0] = 10;
    local_88 = 0x4002;
    (*pcVar6)(local_78,&local_88,local_68,1,1);
    iVar3 = *piVar2;
    uVar1 = __vbaStrVarVal(&local_54,local_78);
    iVar3 = (**(code **)(iVar3 + 0xa4))(piVar2,uVar1);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar2,&DAT_004086bc,0xa4);
    }
    __vbaFreeStr();
    __vbaFreeObj();
    __vbaFreeVarList(2,local_68,local_78);
    pcVar5 = __vbaObjSet_exref;
  }
  if ((short)local_40 == -1) {
    local_24 = 0;
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar1 = (**(code **)(*DAT_0041e010 + 0x390))(DAT_0041e010);
    piVar2 = (int *)(*pcVar5)(&local_58,uVar1);
    iVar3 = (**(code **)(*piVar2 + 0xa4))(piVar2,&DAT_00408c98);
    pcVar6 = __vbaHresultCheckObj_exref;
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar2,&DAT_004086bc,0xa4);
      __vbaFreeObj();
    }
    else {
      __vbaFreeObj();
    }
  }
  else {
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar1 = (**(code **)(*DAT_0041e010 + 0x390))(DAT_0041e010);
    piVar2 = (int *)(*pcVar5)(&local_58,uVar1);
    local_80 = &local_40;
    local_60 = 0x80020004;
    local_68[0] = 10;
    local_88 = 0x4002;
    (*pcVar6)(local_78,&local_88,local_68,1,1);
    iVar3 = *piVar2;
    uVar1 = __vbaStrVarVal(&local_54,local_78);
    iVar3 = (**(code **)(iVar3 + 0xa4))(piVar2,uVar1);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar2,&DAT_004086bc,0xa4);
    }
    __vbaFreeStr();
    __vbaFreeObj();
    __vbaFreeVarList(2,local_68,local_78);
    pcVar6 = __vbaHresultCheckObj_exref;
  }
  if ((short)local_3c == -1) {
    local_24 = 0;
  }
  else if ((short)local_3c != 1) {
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar1 = (**(code **)(*DAT_0041e010 + 0x3a4))(DAT_0041e010);
    piVar2 = (int *)(*pcVar5)(&local_58,uVar1);
    iVar3 = (**(code **)(*piVar2 + 0xe4))(piVar2,0xffffffff);
    goto joined_r0x00413495;
  }
  if (DAT_0041e010 == (int *)0x0) {
    __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
  }
  uVar1 = (**(code **)(*DAT_0041e010 + 0x3a8))(DAT_0041e010);
  piVar2 = (int *)(*pcVar5)(&local_58,uVar1);
  iVar3 = (**(code **)(*piVar2 + 0xe4))(piVar2,0xffffffff);
joined_r0x00413495:
  if (iVar3 < 0) {
    (*pcVar6)(iVar3,piVar2,&DAT_00408c9c,0xe4);
  }
  __vbaFreeObj();
  if ((short)local_18 == -1) {
    local_24 = 0;
    local_18 = 0;
  }
  if (DAT_0041e010 == (int *)0x0) {
    __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
  }
  uVar1 = (**(code **)(*DAT_0041e010 + 0x31c))(DAT_0041e010);
  piVar2 = (int *)(*pcVar5)(&local_58,uVar1);
  iVar3 = (**(code **)(*piVar2 + 0xe0))(piVar2,local_9c);
  if (iVar3 < 0) {
    (*pcVar6)(iVar3,piVar2,&DAT_004086ec,0xe0);
  }
  piVar2 = &local_a0;
  local_a0 = -(uint)((short)local_9c[0] != 0);
  FUN_004141c0();
  __vbaFreeObj(piVar2);
  FUN_00415a50((short *)&local_4c);
  FUN_00415ca0((short *)&local_18);
  FUN_004143e0(&DAT_0041ecae);
  DAT_0041ec9a = 0;
  __vbaFreeStr(&LAB_004135a1);
  __vbaFreeStr();
                    /* WARNING: Could not recover jumptable at 0x0041359e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __vbaFreeStr();
  return;
}


// ---- FUN_004135c0 @ 004135c0

void FUN_004135c0(void)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *unaff_FS_OFFSET;
  bool bVar5;
  int local_58;
  undefined4 local_54;
  undefined4 local_50 [2];
  uint *local_48;
  undefined4 local_40 [2];
  short local_38;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  uint local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_004015d6;
  uStack_14 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_14;
  local_c = &stack0xffffff80;
  local_8 = &DAT_004012c8;
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_30 = 0;
  local_40[0] = 0;
  local_50[0] = 0;
  local_54 = 0;
  local_58 = 0;
  puVar1 = &stack0xffffff80;
  if (DAT_0041ec98 == 0) {
    DAT_0041ec9c = 0xffff;
    puVar1 = &stack0xffffff80;
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
      puVar1 = local_c;
    }
    local_c = puVar1;
    uVar2 = (**(code **)(*DAT_0041e010 + 0x31c))(DAT_0041e010);
    piVar3 = (int *)__vbaObjSet(&local_30,uVar2);
    iVar4 = (**(code **)(*piVar3 + 0xe0))(piVar3,&local_54);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar3,&DAT_004086ec,0xe0);
    }
    local_38 = (short)local_54;
    local_40[0] = 2;
    Ordinal_536(local_40);
    uVar2 = __vbaStrMove();
    Ordinal_690(L"LEO FTP Image Archive",DAT_0041ec88,L"FTPShowArchived",uVar2);
    __vbaFreeStr();
    __vbaFreeObj();
    __vbaFreeVar();
    if (DAT_0041ecae == 0) {
      if (DAT_0041e010 == (int *)0x0) {
        __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
      }
      uVar2 = (**(code **)(*DAT_0041e010 + 0x368))(DAT_0041e010);
      piVar3 = (int *)__vbaObjSet(&local_30,uVar2);
      iVar4 = (**(code **)(*piVar3 + 0xa0))(piVar3,&local_28);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,piVar3,&DAT_004086bc,0xa0);
      }
      local_28 = 0;
      __vbaStrMove();
      FUN_004160e0(&local_2c);
      __vbaStrMove();
      __vbaFreeStr();
      __vbaFreeObj();
      local_54 = 0x118;
      FUN_00419e70((short *)&local_54,(short *)&DAT_0041ecb6);
      __vbaStrMove();
      local_2c = 0;
      uVar2 = __vbaStrMove(local_1c);
      Ordinal_690(L"LEO FTP Image Archive",DAT_0041ec88,uVar2);
      __vbaFreeStrList(2,&local_28,&local_2c);
      if (DAT_0041e010 == (int *)0x0) {
        __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
      }
      uVar2 = (**(code **)(*DAT_0041e010 + 0x364))(DAT_0041e010);
      piVar3 = (int *)__vbaObjSet(&local_30,uVar2);
      iVar4 = (**(code **)(*piVar3 + 0xa0))(piVar3,&local_28);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,piVar3,&DAT_004086bc,0xa0);
      }
      local_28 = 0;
      __vbaStrMove();
      FUN_004160e0(&local_2c);
      __vbaStrMove();
      __vbaFreeStr();
      __vbaFreeObj();
      Ordinal_690(L"LEO FTP Image Archive",DAT_0041ec88,L"FTPPassword",local_1c);
    }
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar2 = (**(code **)(*DAT_0041e010 + 0x360))(DAT_0041e010);
    piVar3 = (int *)__vbaObjSet(&local_30,uVar2);
    iVar4 = (**(code **)(*piVar3 + 0xa0))(piVar3,&local_28);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar3,&DAT_004086bc,0xa0);
    }
    Ordinal_690(L"LEO FTP Image Archive",DAT_0041ec88,L"FTPHost",local_28);
    __vbaFreeStr();
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar2 = (**(code **)(*DAT_0041e010 + 0x34c))(DAT_0041e010);
    piVar3 = (int *)__vbaObjSet(&local_30,uVar2);
    iVar4 = (**(code **)(*piVar3 + 0xa0))(piVar3,&local_28);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar3,&DAT_004086bc,0xa0);
    }
    Ordinal_690(L"LEO FTP Image Archive",DAT_0041ec88,L"FTPDir",local_28);
    __vbaFreeStr();
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar2 = (**(code **)(*DAT_0041e010 + 0x378))(DAT_0041e010);
    piVar3 = (int *)__vbaObjSet(&local_30,uVar2);
    iVar4 = (**(code **)(*piVar3 + 0x50))(piVar3,&local_28);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar3,&DAT_004086ac,0x50);
    }
    Ordinal_690(L"LEO FTP Image Archive",DAT_0041ec88,L"LogFile",local_28);
    __vbaFreeStr();
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar2 = (**(code **)(*DAT_0041e010 + 0x36c))(DAT_0041e010);
    piVar3 = (int *)__vbaObjSet(&local_30,uVar2);
    iVar4 = (**(code **)(*piVar3 + 0xe0))(piVar3,&local_54);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar3,&DAT_004086ec,0xe0);
    }
    local_38 = (short)local_54;
    local_40[0] = 2;
    Ordinal_536(local_40);
    uVar2 = __vbaStrMove();
    Ordinal_690(L"LEO FTP Image Archive",DAT_0041ec88,L"ImmediateXfers",uVar2);
    __vbaFreeStr();
    __vbaFreeObj();
    __vbaFreeVar();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar2 = (**(code **)(*DAT_0041e010 + 0x334))(DAT_0041e010);
    piVar3 = (int *)__vbaObjSet(&local_30,uVar2);
    iVar4 = (**(code **)(*piVar3 + 0xe0))(piVar3,&local_54);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar3,&DAT_004086ec,0xe0);
    }
    local_38 = (short)local_54;
    local_40[0] = 2;
    Ordinal_536(local_40);
    uVar2 = __vbaStrMove();
    Ordinal_690(L"LEO FTP Image Archive",DAT_0041ec88,L"NetPrinterEnable",uVar2);
    __vbaFreeStr();
    __vbaFreeObj();
    __vbaFreeVar();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar2 = (**(code **)(*DAT_0041e010 + 0x3ac))(DAT_0041e010);
    piVar3 = (int *)__vbaObjSet(&local_30,uVar2);
    iVar4 = (**(code **)(*piVar3 + 0xf0))(piVar3,&local_54);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar3,&DAT_00408cac,0xf0);
    }
    bVar5 = (short)local_54 == -1;
    __vbaFreeObj();
    if (bVar5) {
      local_24 = 0xffffffff;
    }
    else {
      if (DAT_0041e010 == (int *)0x0) {
        __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
      }
      uVar2 = (**(code **)(*DAT_0041e010 + 0x3ac))(DAT_0041e010);
      piVar3 = (int *)__vbaObjSet(&local_30,uVar2);
      iVar4 = (**(code **)(*piVar3 + 0xf0))(piVar3,&local_54);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,piVar3,&DAT_00408cac,0xf0);
      }
      local_24 = local_54;
      __vbaFreeObj();
    }
    local_48 = &local_24;
    local_50[0] = 0x4002;
    Ordinal_536(local_50);
    uVar2 = __vbaStrMove();
    Ordinal_690(L"LEO FTP Image Archive",DAT_0041ec88,L"NetPrinterType",uVar2);
    __vbaFreeStr();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar2 = (**(code **)(*DAT_0041e010 + 0x394))(DAT_0041e010);
    piVar3 = (int *)__vbaObjSet(&local_30,uVar2);
    iVar4 = (**(code **)(*piVar3 + 0xa0))(piVar3,&local_28);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar3,&DAT_004086bc,0xa0);
    }
    Ordinal_690(L"LEO FTP Image Archive",DAT_0041ec88,L"NetPrintCopies",local_28);
    __vbaFreeStr();
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar2 = (**(code **)(*DAT_0041e010 + 0x398))(DAT_0041e010);
    piVar3 = (int *)__vbaObjSet(&local_30,uVar2);
    iVar4 = (**(code **)(*piVar3 + 0xa0))(piVar3,&local_28);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar3,&DAT_004086bc,0xa0);
    }
    Ordinal_690(L"LEO FTP Image Archive",DAT_0041ec88,L"NetPrintAcross",local_28);
    __vbaFreeStr();
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar2 = (**(code **)(*DAT_0041e010 + 0x39c))(DAT_0041e010);
    piVar3 = (int *)__vbaObjSet(&local_30,uVar2);
    iVar4 = (**(code **)(*piVar3 + 0xa0))(piVar3,&local_28);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar3,&DAT_004086bc,0xa0);
    }
    Ordinal_690(L"LEO FTP Image Archive",DAT_0041ec88,L"NetPrintDown",local_28);
    __vbaFreeStr();
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar2 = (**(code **)(*DAT_0041e010 + 0x3a0))(DAT_0041e010);
    piVar3 = (int *)__vbaObjSet(&local_30,uVar2);
    iVar4 = (**(code **)(*piVar3 + 0xa0))(piVar3,&local_28);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar3,&DAT_004086bc,0xa0);
    }
    Ordinal_690(L"LEO FTP Image Archive",DAT_0041ec88,L"NetPrintGap",local_28);
    __vbaFreeStr();
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar2 = (**(code **)(*DAT_0041e010 + 0x390))(DAT_0041e010);
    piVar3 = (int *)__vbaObjSet(&local_30,uVar2);
    iVar4 = (**(code **)(*piVar3 + 0xa0))(piVar3,&local_28);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar3,&DAT_004086bc,0xa0);
    }
    Ordinal_690(L"LEO FTP Image Archive",DAT_0041ec88,L"NetPrintMargin",local_28);
    __vbaFreeStr();
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar2 = (**(code **)(*DAT_0041e010 + 0x3a8))(DAT_0041e010);
    piVar3 = (int *)__vbaObjSet(&local_30,uVar2);
    iVar4 = (**(code **)(*piVar3 + 0xe0))(piVar3,&local_54);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar3,&DAT_00408c9c,0xe0);
    }
    bVar5 = (short)local_54 == -1;
    __vbaFreeObj();
    local_20 = (uint)bVar5;
    local_48 = &local_20;
    local_50[0] = 0x4002;
    Ordinal_536(local_50);
    uVar2 = __vbaStrMove();
    Ordinal_690(L"LEO FTP Image Archive",DAT_0041ec88,L"NetPrintLandscape",uVar2);
    __vbaFreeStr();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar2 = (**(code **)(*DAT_0041e010 + 0x38c))(DAT_0041e010);
    piVar3 = (int *)__vbaObjSet(&local_30,uVar2);
    iVar4 = (**(code **)(*piVar3 + 0xf0))(piVar3,&local_54);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar3,&DAT_00408cac,0xf0);
    }
    bVar5 = (short)local_54 == -1;
    __vbaFreeObj();
    if (bVar5) {
      local_18 = 0xffffffff;
    }
    else {
      if (DAT_0041e010 == (int *)0x0) {
        __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
      }
      uVar2 = (**(code **)(*DAT_0041e010 + 0x38c))(DAT_0041e010);
      piVar3 = (int *)__vbaObjSet(&local_30,uVar2);
      iVar4 = (**(code **)(*piVar3 + 0xf0))(piVar3,&local_54);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,piVar3,&DAT_00408cac,0xf0);
      }
      local_18 = local_54;
      __vbaFreeObj();
    }
    local_48 = &local_18;
    local_50[0] = 0x4002;
    Ordinal_536(local_50);
    uVar2 = __vbaStrMove();
    Ordinal_690(L"LEO FTP Image Archive",DAT_0041ec88,L"NetPrintScaleMode",uVar2);
    __vbaFreeStr();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar2 = (**(code **)(*DAT_0041e010 + 0x31c))(DAT_0041e010);
    piVar3 = (int *)__vbaObjSet(&local_30,uVar2);
    iVar4 = (**(code **)(*piVar3 + 0xe0))(piVar3,&local_54);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar3,&DAT_004086ec,0xe0);
    }
    piVar3 = &local_58;
    local_58 = -(uint)((short)local_54 != 0);
    FUN_004141c0();
    __vbaFreeObj(piVar3);
    FUN_00415a50((short *)&local_24);
    FUN_00415ca0((short *)&local_18);
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar2 = (**(code **)(*DAT_0041e010 + 0x334))(DAT_0041e010);
    piVar3 = (int *)__vbaObjSet(&local_30,uVar2);
    iVar4 = (**(code **)(*piVar3 + 0xe0))(piVar3,&local_54);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar3,&DAT_004086ec,0xe0);
    }
    local_58 = -(uint)((short)local_54 != 0);
    FUN_004143e0((short *)&local_58);
    __vbaFreeObj();
    DAT_0041ec9c = 0;
    puVar1 = local_c;
  }
  local_c = puVar1;
                    /* WARNING: Could not recover jumptable at 0x004141a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __vbaFreeStr();
  return;
}


// ---- FUN_004141c0 @ 004141c0

void FUN_004141c0(void)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_004015d6;
  uStack_14 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_14;
  local_c = &stack0xffffffc8;
  local_8 = &DAT_004012d8;
  local_18 = 0;
  local_1c = 0;
  puVar1 = &stack0xffffffc8;
  if (DAT_0041e010 == (int *)0x0) {
    __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    puVar1 = local_c;
  }
  local_c = puVar1;
  uVar2 = (**(code **)(*DAT_0041e010 + 0x31c))(DAT_0041e010);
  piVar3 = (int *)__vbaObjSet(&local_18,uVar2);
  iVar4 = (**(code **)(*piVar3 + 0xe0))(piVar3,&local_1c);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar3,&DAT_004086ec,0xe0);
  }
  uVar2 = local_1c;
  __vbaFreeObj();
  if ((short)uVar2 == 0) {
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar2 = (**(code **)(*DAT_0041e010 + 0x370))(DAT_0041e010);
    piVar3 = (int *)__vbaObjSet(&local_18,uVar2);
    iVar4 = (**(code **)(*piVar3 + 0xd4))(piVar3,0xffffffff);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar3,&DAT_00408924,0xd4);
    }
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar2 = (**(code **)(*DAT_0041e010 + 0x370))(DAT_0041e010);
    piVar3 = (int *)__vbaObjSet(&local_18,uVar2);
    iVar4 = (**(code **)(*piVar3 + 0xc4))(piVar3,0);
  }
  else {
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar2 = (**(code **)(*DAT_0041e010 + 0x370))(DAT_0041e010);
    piVar3 = (int *)__vbaObjSet(&local_18,uVar2);
    iVar4 = (**(code **)(*piVar3 + 0xd4))(piVar3,0xffffffff);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar3,&DAT_00408924,0xd4);
    }
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar2 = (**(code **)(*DAT_0041e010 + 0x370))(DAT_0041e010);
    piVar3 = (int *)__vbaObjSet(&local_18,uVar2);
    iVar4 = (**(code **)(*piVar3 + 0xc4))(piVar3,0xffffffff);
  }
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar3,&DAT_00408924,0xc4);
  }
  __vbaFreeObj();
  FUN_00418a30();
  return;
}


// ---- FUN_004143e0 @ 004143e0

void FUN_004143e0(short *param_1)

{
  undefined1 *puVar1;
  short sVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  undefined2 extraout_var_04;
  undefined2 extraout_var_05;
  undefined2 extraout_var_06;
  undefined2 extraout_var_07;
  undefined2 extraout_var_08;
  undefined2 extraout_var_09;
  undefined2 extraout_var_10;
  undefined2 extraout_var_11;
  undefined2 extraout_var_12;
  undefined2 extraout_var_13;
  undefined2 extraout_var_14;
  undefined2 extraout_var_15;
  undefined2 extraout_var_16;
  code *pcVar9;
  undefined4 *unaff_FS_OFFSET;
  bool bVar10;
  float10 fVar11;
  float10 fVar12;
  undefined4 uVar13;
  short local_f4 [2];
  undefined4 local_f0;
  undefined4 local_ec [13];
  undefined4 local_b8 [2];
  undefined4 *local_b0;
  undefined4 local_a8 [4];
  undefined4 local_98 [4];
  undefined4 local_88 [2];
  undefined4 local_80;
  undefined4 local_78 [2];
  undefined8 local_70;
  undefined4 local_68 [4];
  undefined4 local_58 [2];
  undefined4 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_004015d6;
  uStack_14 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_14;
  local_c = &stack0xfffffebc;
  local_8 = &DAT_004012e8;
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  local_38 = 0;
  local_48[0] = 0;
  local_58[0] = 0;
  local_68[0] = 0;
  local_78[0] = 0;
  local_88[0] = 0;
  local_98[0] = 0;
  local_a8[0] = 0;
  local_b8[0] = 0;
  local_ec[0] = 0;
  local_f0 = 0;
  local_f4[0] = 0;
  local_f4[1] = 0;
  puVar1 = &stack0xfffffebc;
  if (DAT_0041e010 == (int *)0x0) {
    __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    puVar1 = local_c;
  }
  local_c = puVar1;
  uVar3 = (**(code **)(*DAT_0041e010 + 0x380))(DAT_0041e010);
  piVar4 = (int *)__vbaObjSet(&local_30,uVar3);
  iVar5 = (**(code **)(*piVar4 + 0x94))(piVar4,CONCAT22(extraout_var,*param_1));
  if (iVar5 < 0) {
    __vbaHresultCheckObj(iVar5,piVar4,&DAT_004088f4,0x94);
  }
  __vbaFreeObj();
  if (DAT_0041e010 == (int *)0x0) {
    __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
  }
  uVar3 = (**(code **)(*DAT_0041e010 + 0x3c8))(DAT_0041e010);
  piVar4 = (int *)__vbaObjSet(&local_30,uVar3);
  iVar5 = (**(code **)(*piVar4 + 0x94))(piVar4,CONCAT22(extraout_var_08,*param_1));
  if (iVar5 < 0) {
    __vbaHresultCheckObj(iVar5,piVar4,&DAT_004086ac,0x94);
  }
  __vbaFreeObj();
  if (DAT_0041e010 == (int *)0x0) {
    __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
  }
  uVar3 = (**(code **)(*DAT_0041e010 + 0x3ac))(DAT_0041e010);
  piVar4 = (int *)__vbaObjSet(&local_30,uVar3);
  iVar5 = (**(code **)(*piVar4 + 0x94))(piVar4,CONCAT22(extraout_var_00,*param_1));
  if (iVar5 < 0) {
    __vbaHresultCheckObj(iVar5,piVar4,&DAT_00408cac,0x94);
  }
  __vbaFreeObj();
  if (DAT_0041e010 == (int *)0x0) {
    __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
  }
  uVar3 = (**(code **)(*DAT_0041e010 + 0x3c0))(DAT_0041e010);
  piVar4 = (int *)__vbaObjSet(&local_30,uVar3);
  iVar5 = (**(code **)(*piVar4 + 0x94))(piVar4,CONCAT22(extraout_var_09,*param_1));
  if (iVar5 < 0) {
    __vbaHresultCheckObj(iVar5,piVar4,&DAT_004086ac,0x94);
  }
  __vbaFreeObj();
  if (DAT_0041e010 == (int *)0x0) {
    __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
  }
  uVar3 = (**(code **)(*DAT_0041e010 + 0x3bc))(DAT_0041e010);
  piVar4 = (int *)__vbaObjSet(&local_30,uVar3);
  iVar5 = (**(code **)(*piVar4 + 0x94))(piVar4,CONCAT22(extraout_var_01,*param_1));
  if (iVar5 < 0) {
    __vbaHresultCheckObj(iVar5,piVar4,&DAT_004086ac,0x94);
  }
  __vbaFreeObj();
  if (DAT_0041e010 == (int *)0x0) {
    __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
  }
  uVar3 = (**(code **)(*DAT_0041e010 + 0x3b8))(DAT_0041e010);
  piVar4 = (int *)__vbaObjSet(&local_30,uVar3);
  iVar5 = (**(code **)(*piVar4 + 0x94))(piVar4,CONCAT22(extraout_var_10,*param_1));
  if (iVar5 < 0) {
    __vbaHresultCheckObj(iVar5,piVar4,&DAT_004086ac,0x94);
  }
  __vbaFreeObj();
  if (DAT_0041e010 == (int *)0x0) {
    __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
  }
  uVar3 = (**(code **)(*DAT_0041e010 + 0x3c4))(DAT_0041e010);
  piVar4 = (int *)__vbaObjSet(&local_30,uVar3);
  iVar5 = (**(code **)(*piVar4 + 0x94))(piVar4,CONCAT22(extraout_var_02,*param_1));
  if (iVar5 < 0) {
    __vbaHresultCheckObj(iVar5,piVar4,&DAT_004086ac,0x94);
  }
  __vbaFreeObj();
  if (DAT_0041e010 == (int *)0x0) {
    __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
  }
  uVar3 = (**(code **)(*DAT_0041e010 + 0x3b4))(DAT_0041e010);
  piVar4 = (int *)__vbaObjSet(&local_30,uVar3);
  iVar5 = (**(code **)(*piVar4 + 0x94))(piVar4,CONCAT22(extraout_var_11,*param_1));
  if (iVar5 < 0) {
    __vbaHresultCheckObj(iVar5,piVar4,&DAT_004086ac,0x94);
  }
  __vbaFreeObj();
  if (DAT_0041e010 == (int *)0x0) {
    __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
  }
  uVar3 = (**(code **)(*DAT_0041e010 + 0x394))(DAT_0041e010);
  piVar4 = (int *)__vbaObjSet(&local_30,uVar3);
  iVar5 = (**(code **)(*piVar4 + 0x8c))(piVar4,CONCAT22(extraout_var_03,*param_1));
  if (iVar5 < 0) {
    __vbaHresultCheckObj(iVar5,piVar4,&DAT_004086bc,0x8c);
  }
  __vbaFreeObj();
  if (DAT_0041e010 == (int *)0x0) {
    __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
  }
  uVar3 = (**(code **)(*DAT_0041e010 + 0x398))(DAT_0041e010);
  piVar4 = (int *)__vbaObjSet(&local_30,uVar3);
  iVar5 = (**(code **)(*piVar4 + 0x8c))(piVar4,CONCAT22(extraout_var_12,*param_1));
  if (iVar5 < 0) {
    __vbaHresultCheckObj(iVar5,piVar4,&DAT_004086bc,0x8c);
  }
  __vbaFreeObj();
  if (DAT_0041e010 == (int *)0x0) {
    __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
  }
  uVar3 = (**(code **)(*DAT_0041e010 + 0x39c))(DAT_0041e010);
  piVar4 = (int *)__vbaObjSet(&local_30,uVar3);
  iVar5 = (**(code **)(*piVar4 + 0x8c))(piVar4,CONCAT22(extraout_var_04,*param_1));
  if (iVar5 < 0) {
    __vbaHresultCheckObj(iVar5,piVar4,&DAT_004086bc,0x8c);
  }
  __vbaFreeObj();
  if (DAT_0041e010 == (int *)0x0) {
    __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
  }
  uVar3 = (**(code **)(*DAT_0041e010 + 0x3a0))(DAT_0041e010);
  piVar4 = (int *)__vbaObjSet(&local_30,uVar3);
  iVar5 = (**(code **)(*piVar4 + 0x8c))(piVar4,CONCAT22(extraout_var_13,*param_1));
  if (iVar5 < 0) {
    __vbaHresultCheckObj(iVar5,piVar4,&DAT_004086bc,0x8c);
  }
  __vbaFreeObj();
  if (DAT_0041e010 == (int *)0x0) {
    __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
  }
  uVar3 = (**(code **)(*DAT_0041e010 + 0x390))(DAT_0041e010);
  piVar4 = (int *)__vbaObjSet(&local_30,uVar3);
  iVar5 = (**(code **)(*piVar4 + 0x8c))(piVar4,CONCAT22(extraout_var_05,*param_1));
  if (iVar5 < 0) {
    __vbaHresultCheckObj(iVar5,piVar4,&DAT_004086bc,0x8c);
  }
  __vbaFreeObj();
  if (DAT_0041e010 == (int *)0x0) {
    __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
  }
  uVar3 = (**(code **)(*DAT_0041e010 + 0x3a8))(DAT_0041e010);
  piVar4 = (int *)__vbaObjSet(&local_30,uVar3);
  iVar5 = (**(code **)(*piVar4 + 0x94))(piVar4,CONCAT22(extraout_var_14,*param_1));
  if (iVar5 < 0) {
    __vbaHresultCheckObj(iVar5,piVar4,&DAT_00408c9c,0x94);
  }
  __vbaFreeObj();
  if (DAT_0041e010 == (int *)0x0) {
    __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
  }
  uVar3 = (**(code **)(*DAT_0041e010 + 0x3a4))(DAT_0041e010);
  piVar4 = (int *)__vbaObjSet(&local_30,uVar3);
  iVar5 = (**(code **)(*piVar4 + 0x94))(piVar4,CONCAT22(extraout_var_06,*param_1));
  if (iVar5 < 0) {
    __vbaHresultCheckObj(iVar5,piVar4,&DAT_00408c9c,0x94);
  }
  __vbaFreeObj();
  if (DAT_0041e010 == (int *)0x0) {
    __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
  }
  uVar3 = (**(code **)(*DAT_0041e010 + 0x3b0))(DAT_0041e010);
  piVar4 = (int *)__vbaObjSet(&local_30,uVar3);
  iVar5 = (**(code **)(*piVar4 + 0x94))(piVar4,CONCAT22(extraout_var_15,*param_1));
  if (iVar5 < 0) {
    __vbaHresultCheckObj(iVar5,piVar4,&DAT_004086ac,0x94);
  }
  __vbaFreeObj();
  if (DAT_0041e010 == (int *)0x0) {
    __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
  }
  uVar3 = (**(code **)(*DAT_0041e010 + 0x38c))(DAT_0041e010);
  piVar4 = (int *)__vbaObjSet(&local_30,uVar3);
  iVar5 = (**(code **)(*piVar4 + 0x94))(piVar4,CONCAT22(extraout_var_07,*param_1));
  if (iVar5 < 0) {
    __vbaHresultCheckObj(iVar5,piVar4,&DAT_00408cac,0x94);
  }
  __vbaFreeObj();
  if (DAT_0041e010 == (int *)0x0) {
    __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
  }
  uVar3 = (**(code **)(*DAT_0041e010 + 900))(DAT_0041e010);
  piVar4 = (int *)__vbaObjSet(&local_30,uVar3);
  iVar5 = (**(code **)(*piVar4 + 0x8c))(piVar4,CONCAT22(extraout_var_16,*param_1));
  if (iVar5 < 0) {
    __vbaHresultCheckObj(iVar5,piVar4,&DAT_004086cc,0x8c);
  }
  __vbaFreeObj();
  if (*param_1 == -1) {
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar3 = (**(code **)(*DAT_0041e010 + 0x388))(DAT_0041e010);
    piVar4 = (int *)__vbaObjSet(&local_34,uVar3);
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar3 = (**(code **)(*DAT_0041e010 + 0x354))(DAT_0041e010);
    piVar6 = (int *)__vbaObjSet(&local_30,uVar3);
    iVar5 = (**(code **)(*piVar6 + 0x88))(piVar6,local_ec);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,piVar6,&DAT_004086cc,0x88);
    }
    iVar5 = (**(code **)(*piVar4 + 0x8c))(piVar4,local_ec[0]);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,piVar4,&DAT_004086cc,0x8c);
    }
    __vbaFreeObjList(2,&local_30,&local_34);
  }
  else {
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar3 = (**(code **)(*DAT_0041e010 + 0x388))(DAT_0041e010);
    piVar4 = (int *)__vbaObjSet(&local_30,uVar3);
    iVar5 = (**(code **)(*piVar4 + 0x8c))(piVar4,0);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,piVar4,&DAT_004086cc,0x8c);
    }
    __vbaFreeObj();
  }
  if (DAT_0041e010 == (int *)0x0) {
    __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
  }
  uVar3 = (**(code **)(*DAT_0041e010 + 0x388))(DAT_0041e010);
  piVar4 = (int *)__vbaObjSet(&local_30,uVar3);
  iVar5 = (**(code **)(*piVar4 + 0x88))(piVar4,local_ec);
  if (iVar5 < 0) {
    __vbaHresultCheckObj(iVar5,piVar4,&DAT_004086cc,0x88);
  }
  bVar10 = (short)local_ec[0] == -1;
  __vbaFreeObj();
  if (bVar10) {
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar3 = (**(code **)(*DAT_0041e010 + 0x388))(DAT_0041e010);
    piVar4 = (int *)__vbaObjSet(&local_30,uVar3);
    iVar5 = (**(code **)(*piVar4 + 100))(piVar4,0xff);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,piVar4,&DAT_004086cc,100);
    }
    __vbaFreeObj();
  }
  else {
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar3 = (**(code **)(*DAT_0041e010 + 0x388))(DAT_0041e010);
    piVar4 = (int *)__vbaObjSet(&local_30,uVar3);
    uVar13 = 0xf;
    uVar3 = FUN_00408498();
    __vbaSetSystemError(uVar13);
    iVar5 = (**(code **)(*piVar4 + 100))(piVar4,uVar3);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,piVar4,&DAT_004086cc,100);
    }
    __vbaFreeObj();
  }
  if (DAT_0041e010 == (int *)0x0) {
    __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
  }
  uVar3 = (**(code **)(*DAT_0041e010 + 0x368))(DAT_0041e010);
  piVar4 = (int *)__vbaObjSet(&local_30,uVar3);
  iVar5 = (**(code **)(*piVar4 + 0xa0))(piVar4,&local_20);
  if (iVar5 < 0) {
    __vbaHresultCheckObj(iVar5,piVar4,&DAT_004086bc,0xa0);
  }
  local_20 = 0;
  __vbaStrMove();
  __vbaFreeObj();
  if (DAT_0041e010 == (int *)0x0) {
    __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
  }
  uVar3 = (**(code **)(*DAT_0041e010 + 0x364))(DAT_0041e010);
  piVar4 = (int *)__vbaObjSet(&local_30,uVar3);
  iVar5 = (**(code **)(*piVar4 + 0xa0))(piVar4,&local_20);
  if (iVar5 < 0) {
    __vbaHresultCheckObj(iVar5,piVar4,&DAT_004086bc,0xa0);
  }
  local_20 = 0;
  __vbaStrMove();
  __vbaFreeObj();
  if (DAT_0041ecae == 0) {
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar3 = (**(code **)(*DAT_0041e010 + 0x368))(DAT_0041e010);
    piVar4 = (int *)__vbaObjSet(&local_30,uVar3);
    iVar5 = (**(code **)(*piVar4 + 0x8c))(piVar4,0xffffffff);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,piVar4,&DAT_004086bc,0x8c);
    }
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar3 = (**(code **)(*DAT_0041e010 + 0x364))(DAT_0041e010);
    piVar4 = (int *)__vbaObjSet(&local_30,uVar3);
    iVar5 = (**(code **)(*piVar4 + 0x8c))(piVar4,0xffffffff);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,piVar4,&DAT_004086bc,0x8c);
    }
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar3 = (**(code **)(*DAT_0041e010 + 0x368))(DAT_0041e010);
    piVar4 = (int *)__vbaObjSet(&local_30,uVar3);
    iVar5 = *piVar4;
    FUN_00416230(&DAT_0041ec8c);
    uVar3 = __vbaStrMove();
    iVar5 = (**(code **)(iVar5 + 0xa4))(piVar4,uVar3);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,piVar4,&DAT_004086bc,0xa4);
    }
    __vbaFreeStr();
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar3 = (**(code **)(*DAT_0041e010 + 0x364))(DAT_0041e010);
    piVar4 = (int *)__vbaObjSet(&local_30,uVar3);
    iVar5 = *piVar4;
    FUN_00416230(&DAT_0041ec90);
    uVar3 = __vbaStrMove();
    iVar5 = (**(code **)(iVar5 + 0xa4))(piVar4,uVar3);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,piVar4,&DAT_004086bc,0xa4);
    }
    __vbaFreeStr();
    __vbaFreeObj();
  }
  else {
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar3 = (**(code **)(*DAT_0041e010 + 0x368))(DAT_0041e010);
    piVar4 = (int *)__vbaObjSet(&local_30,uVar3);
    iVar5 = (**(code **)(*piVar4 + 0x8c))(piVar4,0);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,piVar4,&DAT_004086bc,0x8c);
    }
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar3 = (**(code **)(*DAT_0041e010 + 0x364))(DAT_0041e010);
    piVar4 = (int *)__vbaObjSet(&local_30,uVar3);
    iVar5 = (**(code **)(*piVar4 + 0x8c))(piVar4,0);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,piVar4,&DAT_004086bc,0x8c);
    }
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar3 = (**(code **)(*DAT_0041e010 + 0x368))(DAT_0041e010);
    piVar4 = (int *)__vbaObjSet(&local_30,uVar3);
    local_b0 = &DAT_0041ec88;
    local_b8[0] = 0x4008;
    Ordinal_518(local_48,local_b8);
    iVar5 = *piVar4;
    uVar3 = __vbaStrVarVal(&local_20,local_48);
    iVar5 = (**(code **)(iVar5 + 0xa4))(piVar4,uVar3);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,piVar4,&DAT_004086bc,0xa4);
    }
    __vbaFreeStr();
    __vbaFreeObj();
    __vbaFreeVar();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar3 = (**(code **)(*DAT_0041e010 + 0x398))(DAT_0041e010);
    piVar4 = (int *)__vbaObjSet(&local_30,uVar3);
    iVar5 = (**(code **)(*piVar4 + 0xa0))(piVar4,&local_20);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,piVar4,&DAT_004086bc,0xa0);
    }
    fVar11 = (float10)Ordinal_581(local_20);
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar3 = (**(code **)(*DAT_0041e010 + 0x39c))(DAT_0041e010);
    piVar4 = (int *)__vbaObjSet(&local_34,uVar3);
    iVar5 = (**(code **)(*piVar4 + 0xa0))(piVar4,&local_24);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,piVar4,&DAT_004086bc,0xa0);
    }
    fVar12 = (float10)Ordinal_581(local_24);
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar3 = (**(code **)(*DAT_0041e010 + 0x364))(DAT_0041e010);
    piVar4 = (int *)__vbaObjSet(&local_38,uVar3);
    local_50 = 0x80020004;
    local_58[0] = 10;
    local_48[0] = 5;
    local_40 = (double)fVar11;
    Ordinal_660(local_68,local_48,local_58,1,1);
    local_80 = 0x80020004;
    local_88[0] = 10;
    local_78[0] = 5;
    local_70 = (double)fVar12;
    Ordinal_660(local_98,local_78,local_88,1,1);
    iVar5 = *piVar4;
    uVar3 = __vbaVarAdd(local_a8,local_98,local_68);
    uVar3 = __vbaStrVarVal(&local_28,uVar3);
    iVar5 = (**(code **)(iVar5 + 0xa4))(piVar4,uVar3);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,piVar4,&DAT_004086bc,0xa4);
    }
    __vbaFreeStrList(3,&local_20,&local_24,&local_28);
    __vbaFreeObjList(3,&local_30,&local_34,&local_38);
    __vbaFreeVarList(7,local_48,local_58,local_78,local_88,local_68,local_98,local_a8);
  }
  pcVar9 = __vbaObjSet_exref;
  if (DAT_0041ec9e == -1) {
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar3 = (**(code **)(*DAT_0041e010 + 0x368))(DAT_0041e010);
    piVar4 = (int *)__vbaObjSet(&local_30,uVar3);
    iVar5 = (**(code **)(*piVar4 + 0xa0))(piVar4,&local_20);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,piVar4,&DAT_004086bc,0xa0);
    }
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar3 = (**(code **)(*DAT_0041e010 + 0x364))(DAT_0041e010);
    piVar4 = (int *)__vbaObjSet(&local_34,uVar3);
    iVar5 = (**(code **)(*piVar4 + 0xa0))(piVar4,&local_24);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,piVar4,&DAT_004086bc,0xa0);
    }
    iVar5 = __vbaStrCmp(local_24,local_18);
    iVar7 = __vbaStrCmp(local_20,local_1c);
    __vbaFreeStrList(2,&local_20,&local_24);
    __vbaFreeObjList(2,&local_30,&local_34);
    if (iVar5 != 0 || iVar7 != 0) {
      local_ec[0] = 0x28;
      FUN_00419e70((short *)local_ec,(short *)&DAT_0041ecb6);
      __vbaStrMove();
      if (DAT_0041e010 == (int *)0x0) {
        __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
      }
      uVar3 = (**(code **)(*DAT_0041e010 + 0x3fc))(DAT_0041e010,8,0);
      uVar3 = __vbaObjSet(&local_30,uVar3);
      __vbaLateIdCallLd(local_48,uVar3);
      local_f4[0] = 0;
      local_f4[1] = 0;
      local_f0 = __vbaI2Var(local_48);
      local_24 = 0;
      __vbaStrMove();
      FUN_00416390(&local_20,&local_f0,local_f4);
      __vbaFreeStrList(2,&local_20,&local_24);
      __vbaFreeObj();
      __vbaFreeVar();
      if (DAT_0041e010 == (int *)0x0) {
        __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
      }
      uVar3 = (**(code **)(*DAT_0041e010 + 0x344))(DAT_0041e010);
      piVar4 = (int *)__vbaObjSet(&local_30,uVar3);
      iVar5 = (**(code **)(*piVar4 + 0x1e8))(piVar4);
      if (iVar5 < 0) {
        __vbaHresultCheckObj(iVar5,piVar4,&DAT_004088e4,0x1e8);
      }
      __vbaFreeObj();
      if (DAT_0041e010 == (int *)0x0) {
        __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
      }
      uVar3 = (**(code **)(*DAT_0041e010 + 0x3fc))(DAT_0041e010,0x1e,0);
      uVar3 = __vbaObjSet(&local_30,uVar3);
      uVar3 = __vbaLateIdCallLd(local_48,uVar3);
      sVar2 = __vbaBoolVar(uVar3);
      __vbaFreeObj();
      __vbaFreeVar();
      if (sVar2 == 0) {
        local_ec[0] = 0x3c;
        FUN_00419e70((short *)local_ec,(short *)&DAT_0041ecb6);
        __vbaStrMove();
        if (DAT_0041e010 == (int *)0x0) {
          __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
        }
        uVar3 = (**(code **)(*DAT_0041e010 + 0x3fc))(DAT_0041e010,8,0);
        uVar3 = __vbaObjSet(&local_30,uVar3);
        __vbaLateIdCallLd(local_48,uVar3);
        local_f4[0] = -1;
        local_f4[1] = -1;
        local_f0 = __vbaI2Var(local_48);
        local_2c = 0;
        __vbaStrCat(&DAT_004088dc,local_1c);
        uVar3 = __vbaStrMove();
        uVar3 = __vbaStrMove(uVar3);
        __vbaStrCat(uVar3);
        __vbaStrMove();
        FUN_00416390(&local_28,&local_f0,local_f4);
        __vbaFreeStrList(4,&local_20,&local_24,&local_28,&local_2c);
        __vbaFreeObj();
        __vbaFreeVar();
      }
      DAT_0041eca0 = 0;
      pcVar9 = __vbaObjSet_exref;
    }
  }
  if (DAT_0041ecae == -1) {
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar3 = (**(code **)(*DAT_0041e010 + 0x368))(DAT_0041e010);
    piVar4 = (int *)(*pcVar9)(&local_30,uVar3);
    iVar5 = (**(code **)(*piVar4 + 0xa0))(piVar4,&local_20);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,piVar4,&DAT_004086bc,0xa0);
    }
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar3 = (**(code **)(*DAT_0041e010 + 0x364))(DAT_0041e010);
    piVar4 = (int *)(*pcVar9)(&local_34,uVar3);
    iVar5 = (**(code **)(*piVar4 + 0xa0))(piVar4,&local_24);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,piVar4,&DAT_004086bc,0xa0);
    }
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar3 = (**(code **)(*DAT_0041e010 + 0x360))(DAT_0041e010);
    piVar4 = (int *)(*pcVar9)(&local_38,uVar3);
    iVar5 = (**(code **)(*piVar4 + 0xa0))(piVar4,&local_28);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,piVar4,&DAT_004086bc,0xa0);
    }
    iVar5 = __vbaLenBstr(local_24);
    iVar7 = __vbaLenBstr(local_28);
    iVar8 = __vbaLenBstr(local_20);
    __vbaFreeStrList(3,&local_20,&local_24,&local_28);
    __vbaFreeObjList(3,&local_30,&local_34,&local_38);
    if ((iVar5 != 0 && iVar7 != 0) && iVar8 != 0) {
      if (DAT_0041e010 == (int *)0x0) {
        __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
      }
      uVar3 = (**(code **)(*DAT_0041e010 + 0x368))(DAT_0041e010);
      piVar4 = (int *)(*pcVar9)(&local_30,uVar3);
      iVar5 = (**(code **)(*piVar4 + 0xa0))(piVar4,&local_20);
      if (iVar5 < 0) {
        __vbaHresultCheckObj(iVar5,piVar4,&DAT_004086bc,0xa0);
      }
      if (DAT_0041e010 == (int *)0x0) {
        __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
      }
      uVar3 = (**(code **)(*DAT_0041e010 + 0x364))(DAT_0041e010);
      piVar4 = (int *)(*pcVar9)(&local_34,uVar3);
      iVar5 = (**(code **)(*piVar4 + 0xa0))(piVar4,&local_24);
      if (iVar5 < 0) {
        __vbaHresultCheckObj(iVar5,piVar4,&DAT_004086bc,0xa0);
      }
      iVar5 = __vbaStrCmp(local_24,local_18);
      iVar7 = __vbaStrCmp(local_20,local_1c);
      __vbaFreeStrList(2,&local_20,&local_24);
      __vbaFreeObjList(2,&local_30,&local_34);
      if (iVar5 != 0 || iVar7 != 0) {
        DAT_0041ecb0 = 0xffff;
        if (DAT_0041e010 == (int *)0x0) {
          __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
        }
        piVar4 = DAT_0041e010;
        iVar5 = (**(code **)(*DAT_0041e010 + 0x6fc))(DAT_0041e010);
        if (iVar5 < 0) {
          __vbaHresultCheckObj(iVar5,piVar4,&DAT_00407968,0x6fc);
        }
        while ((DAT_0041ec9e == 0 && (DAT_0041eca0 == 0))) {
          Ordinal_598();
        }
        DAT_0041ecb0 = 0;
      }
    }
  }
  __vbaFreeStr(&LAB_00415a38);
                    /* WARNING: Could not recover jumptable at 0x00415a35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __vbaFreeStr();
  return;
}


// ---- FUN_00415a50 @ 00415a50

void __cdecl FUN_00415a50(short *param_1)

{
  short sVar1;
  bool bVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined2 extraout_var;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_2c [2];
  undefined4 local_24;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_004015d6;
  uStack_14 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_14;
  local_c = &stack0xffffffb8;
  local_8 = &DAT_004012f8;
  local_18 = 0;
  local_2c[0] = 0;
  puVar3 = &stack0xffffffb8;
  if (DAT_0041e010 == (int *)0x0) {
    __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    puVar3 = local_c;
  }
  local_c = puVar3;
  uVar4 = (**(code **)(*DAT_0041e010 + 0x3ac))(DAT_0041e010);
  piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
  iVar6 = (**(code **)(*piVar5 + 0x1e8))(piVar5);
  if (iVar6 < 0) {
    __vbaHresultCheckObj(iVar6,piVar5,&DAT_00408cac,0x1e8);
  }
  __vbaFreeObj();
  if (DAT_0041e010 == (int *)0x0) {
    __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
  }
  uVar4 = (**(code **)(*DAT_0041e010 + 0x3ac))(DAT_0041e010);
  piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
  iVar6 = (**(code **)(*piVar5 + 0x1ec))(piVar5,L"Codonics NP1600",2,local_24,0,local_1c);
  if (iVar6 < 0) {
    __vbaHresultCheckObj(iVar6,piVar5,&DAT_00408cac,0x1ec);
  }
  __vbaFreeObj();
  if (DAT_0041e010 == (int *)0x0) {
    __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
  }
  uVar4 = (**(code **)(*DAT_0041e010 + 0x3ac))(DAT_0041e010);
  piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
  iVar6 = (**(code **)(*piVar5 + 0xe8))(piVar5,local_2c);
  if (iVar6 < 0) {
    __vbaHresultCheckObj(iVar6,piVar5,&DAT_00408cac,0xe8);
  }
  sVar1 = *param_1;
  bVar2 = (short)local_2c[0] <= sVar1;
  __vbaFreeObj();
  if (sVar1 < 0 || bVar2) {
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x3ac))(DAT_0041e010);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0xf4))(piVar5,0);
  }
  else {
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x3ac))(DAT_0041e010);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0xf4))(piVar5,CONCAT22(extraout_var,*param_1));
  }
  if (iVar6 < 0) {
    __vbaHresultCheckObj(iVar6,piVar5,&DAT_00408cac,0xf4);
  }
  __vbaFreeObj();
  return;
}


// ---- FUN_00415ca0 @ 00415ca0

void __cdecl FUN_00415ca0(short *param_1)

{
  short sVar1;
  bool bVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined2 extraout_var;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_2c [2];
  undefined4 local_24;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_004015d6;
  uStack_14 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_14;
  local_c = &stack0xffffffb4;
  local_8 = &DAT_00401308;
  local_18 = 0;
  local_2c[0] = 0;
  puVar3 = &stack0xffffffb4;
  if (DAT_0041e010 == (int *)0x0) {
    __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    puVar3 = local_c;
  }
  local_c = puVar3;
  uVar4 = (**(code **)(*DAT_0041e010 + 0x38c))(DAT_0041e010);
  piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
  iVar6 = (**(code **)(*piVar5 + 0x1e8))(piVar5);
  if (iVar6 < 0) {
    __vbaHresultCheckObj(iVar6,piVar5,&DAT_00408cac,0x1e8);
  }
  __vbaFreeObj();
  if (DAT_0041e010 == (int *)0x0) {
    __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
  }
  uVar4 = (**(code **)(*DAT_0041e010 + 0x38c))(DAT_0041e010);
  piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
  iVar6 = (**(code **)(*piVar5 + 0x1ec))(piVar5,&DAT_004078d8,2,local_24,0,local_1c);
  if (iVar6 < 0) {
    __vbaHresultCheckObj(iVar6,piVar5,&DAT_00408cac,0x1ec);
  }
  __vbaFreeObj();
  if (DAT_0041e010 == (int *)0x0) {
    __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
  }
  uVar4 = (**(code **)(*DAT_0041e010 + 0x38c))(DAT_0041e010);
  piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
  iVar6 = (**(code **)(*piVar5 + 0x1ec))(piVar5,L"BILINEAR",2,local_24,1,local_1c);
  if (iVar6 < 0) {
    __vbaHresultCheckObj(iVar6,piVar5,&DAT_00408cac,0x1ec);
  }
  __vbaFreeObj();
  if (DAT_0041e010 == (int *)0x0) {
    __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
  }
  uVar4 = (**(code **)(*DAT_0041e010 + 0x38c))(DAT_0041e010);
  piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
  iVar6 = (**(code **)(*piVar5 + 0x1ec))(piVar5,L"BICUBIC",2,local_24,2,local_1c);
  if (iVar6 < 0) {
    __vbaHresultCheckObj(iVar6,piVar5,&DAT_00408cac,0x1ec);
  }
  __vbaFreeObj();
  if (DAT_0041e010 == (int *)0x0) {
    __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
  }
  uVar4 = (**(code **)(*DAT_0041e010 + 0x38c))(DAT_0041e010);
  piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
  iVar6 = (**(code **)(*piVar5 + 0x1ec))(piVar5,L"MITCHELL",2,local_24,3,local_1c);
  if (iVar6 < 0) {
    __vbaHresultCheckObj(iVar6,piVar5,&DAT_00408cac,0x1ec);
  }
  __vbaFreeObj();
  if (DAT_0041e010 == (int *)0x0) {
    __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
  }
  uVar4 = (**(code **)(*DAT_0041e010 + 0x38c))(DAT_0041e010);
  piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
  iVar6 = (**(code **)(*piVar5 + 0x1ec))(piVar5,L"LANCZOS",2,local_24,4,local_1c);
  if (iVar6 < 0) {
    __vbaHresultCheckObj(iVar6,piVar5,&DAT_00408cac,0x1ec);
  }
  __vbaFreeObj();
  if (DAT_0041e010 == (int *)0x0) {
    __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
  }
  uVar4 = (**(code **)(*DAT_0041e010 + 0x38c))(DAT_0041e010);
  piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
  iVar6 = (**(code **)(*piVar5 + 0xe8))(piVar5,local_2c);
  if (iVar6 < 0) {
    __vbaHresultCheckObj(iVar6,piVar5,&DAT_00408cac,0xe8);
  }
  sVar1 = *param_1;
  bVar2 = (short)local_2c[0] <= sVar1;
  __vbaFreeObj();
  if (sVar1 < 0 || bVar2) {
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x38c))(DAT_0041e010);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0xf4))(piVar5,0);
  }
  else {
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x38c))(DAT_0041e010);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0xf4))(piVar5,CONCAT22(extraout_var,*param_1));
  }
  if (iVar6 < 0) {
    __vbaHresultCheckObj(iVar6,piVar5,&DAT_00408cac,0xf4);
  }
  __vbaFreeObj();
  return;
}


// ---- FUN_004160e0 @ 004160e0

void __cdecl FUN_004160e0(int *param_1)

{
  code *pcVar1;
  uint uVar2;
  code **ppcVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  int *unaff_EDI;
  undefined4 *unaff_FS_OFFSET;
  code *pcStack_1d8;
  uint uStack_1d4;
  undefined4 auStack_1c0 [2];
  undefined *puStack_1b8;
  undefined4 uStack_1b0;
  wchar_t *pwStack_1a8;
  undefined4 auStack_1a0 [2];
  undefined *puStack_198;
  undefined4 uStack_190;
  wchar_t *pwStack_188;
  undefined4 auStack_180 [4];
  undefined4 auStack_170 [4];
  undefined4 auStack_160 [4];
  undefined4 auStack_150 [4];
  undefined4 auStack_140 [4];
  undefined4 auStack_130 [4];
  undefined4 auStack_120 [4];
  undefined4 auStack_110 [4];
  undefined4 auStack_100 [4];
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 *puStack_e0;
  undefined4 *puStack_dc;
  undefined4 *puStack_d8;
  undefined1 *puStack_d4;
  int iStack_d0;
  code *pcStack_cc;
  uint uStack_c8;
  int *piStack_c4;
  undefined4 uStack_b8;
  undefined4 auStack_a0 [2];
  undefined4 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_80;
  undefined *puStack_7c;
  undefined4 *puStack_78;
  undefined4 *puStack_74;
  undefined4 *puStack_70;
  undefined1 *puStack_6c;
  int iStack_68;
  undefined4 local_38 [2];
  undefined4 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 *local_20;
  undefined4 uStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  
  puStack_14 = &DAT_004015d6;
  uStack_18 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_18;
  local_10 = &stack0xffffff9c;
  local_c = &DAT_00401318;
  local_20 = (undefined1 *)0x0;
  local_24 = 0;
  local_28 = 0;
  local_38[0] = 0;
  iStack_68 = 0x416125;
  __vbaStrCopy();
  iStack_68 = *param_1;
  puStack_6c = (undefined1 *)0x416131;
  __vbaLenBstr();
  puStack_6c = (undefined1 *)0x416139;
  sVar4 = __vbaI2I4();
  pcVar1 = __vbaStrMove_exref;
  uVar2 = 1;
  do {
    uVar10 = uVar2;
    sVar6 = (short)uVar10;
    if (sVar4 < sVar6) {
      return;
    }
    puStack_70 = local_38;
    puStack_74 = (undefined4 *)(int)sVar6;
    puStack_6c = local_20;
    puStack_78 = (undefined4 *)*param_1;
    local_30 = 1;
    local_38[0] = 2;
    puStack_7c = (undefined *)0x416174;
    Ordinal_631();
    puStack_7c = (undefined *)0x41617b;
    puStack_7c = (undefined *)__vbaStrMove();
    uStack_80 = 0x416182;
    sVar5 = Ordinal_516();
    if (SBORROW2(0xff,sVar5)) break;
    puStack_6c = (undefined1 *)(int)(short)(0xff - sVar5);
    puStack_70 = (undefined4 *)0x416199;
    Ordinal_537();
    puStack_70 = (undefined4 *)0x4161a0;
    puStack_70 = (undefined4 *)__vbaStrMove();
    puStack_74 = (undefined4 *)0x4161a7;
    __vbaStrCat();
    puStack_74 = (undefined4 *)0x4161ae;
    __vbaStrMove();
    puStack_74 = &local_28;
    puStack_78 = &local_24;
    puStack_7c = (undefined *)0x2;
    uStack_80 = 0x4161be;
    __vbaFreeStrList();
    puStack_74 = (undefined4 *)0x4161ca;
    __vbaFreeVar();
    uVar2 = (uint)(ushort)(sVar6 + 1);
  } while (!SCARRY2(sVar6,1));
  puStack_6c = (undefined1 *)0x41622b;
  __vbaErrorOverflow();
  puStack_7c = &DAT_004015d6;
  uStack_80 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_80;
  piStack_c4 = param_1;
  puStack_78 = &pcStack_cc;
  pcStack_cc = pcVar1;
  puStack_74 = (undefined4 *)&DAT_00401328;
  uStack_88 = 0;
  uStack_8c = 0;
  uStack_90 = 0;
  auStack_a0[0] = 0;
  iStack_d0 = 0x416275;
  uStack_c8 = uVar10;
  puStack_6c = &stack0xfffffffc;
  __vbaStrCopy();
  iStack_d0 = *unaff_EDI;
  puStack_d4 = (undefined1 *)0x416281;
  __vbaLenBstr();
  puStack_d4 = (undefined1 *)0x416289;
  uStack_b8 = __vbaI2I4();
  pcVar1 = __vbaStrMove_exref;
  uVar2 = 1;
  do {
    uVar10 = uVar2;
    sVar4 = (short)uVar10;
    if ((short)uStack_b8 < sVar4) {
      return;
    }
    puStack_d8 = auStack_a0;
    puStack_dc = (undefined4 *)(int)sVar4;
    puStack_d4 = (undefined1 *)uStack_88;
    puStack_e0 = (undefined4 *)*unaff_EDI;
    uStack_98 = 1;
    auStack_a0[0] = 2;
    uStack_e4 = 0x4162c4;
    Ordinal_631();
    uStack_e4 = 0x4162cb;
    uStack_e4 = __vbaStrMove();
    uStack_e8 = 0x4162d2;
    sVar6 = Ordinal_516();
    if (SBORROW2(sVar6,0xff)) break;
    puStack_d4 = (undefined1 *)0x4162e6;
    sVar6 = __vbaI2Abs();
    puStack_d4 = (undefined1 *)(int)sVar6;
    puStack_d8 = (undefined4 *)0x4162f0;
    Ordinal_537();
    puStack_d8 = (undefined4 *)0x4162f7;
    puStack_d8 = (undefined4 *)__vbaStrMove();
    puStack_dc = (undefined4 *)0x4162fe;
    __vbaStrCat();
    puStack_dc = (undefined4 *)0x416305;
    __vbaStrMove();
    puStack_dc = &uStack_90;
    puStack_e0 = &uStack_8c;
    uStack_e4 = 2;
    uStack_e8 = 0x416315;
    __vbaFreeStrList();
    puStack_dc = (undefined4 *)0x416321;
    __vbaFreeVar();
    uVar2 = (uint)(ushort)(sVar4 + 1);
  } while (!SCARRY2(sVar4,1));
  puStack_d4 = (undefined1 *)0x416382;
  __vbaErrorOverflow();
  puStack_e0 = (undefined4 *)&DAT_004015d6;
  uStack_e4 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_e4;
  puStack_dc = &pcStack_1d8;
  pcStack_1d8 = pcVar1;
  puStack_d8 = (undefined4 *)&DAT_00401338;
  uStack_e8 = 0;
  uStack_ec = 0;
  uStack_f0 = 0;
  auStack_100[0] = 0;
  auStack_110[0] = 0;
  auStack_120[0] = 0;
  auStack_130[0] = 0;
  auStack_140[0] = 0;
  auStack_150[0] = 0;
  auStack_160[0] = 0;
  auStack_170[0] = 0;
  auStack_180[0] = 0;
  uStack_190 = 0;
  auStack_1a0[0] = 0;
  uStack_1b0 = 0;
  auStack_1c0[0] = 0;
  uStack_1d4 = uVar10;
  ppcVar3 = &pcStack_1d8;
  puStack_d4 = (undefined1 *)&puStack_6c;
  if (DAT_0041e010 == (int *)0x0) {
    puStack_d4 = (undefined1 *)&puStack_6c;
    __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    ppcVar3 = (code **)puStack_dc;
  }
  puStack_dc = ppcVar3;
  uVar7 = (**(code **)(*DAT_0041e010 + 0x410))(DAT_0041e010);
  piVar8 = (int *)__vbaObjSet(&uStack_f0,uVar7);
  iVar9 = (**(code **)(*piVar8 + 0x54))(piVar8,*(undefined4 *)pcStack_cc);
  if (iVar9 < 0) {
    __vbaHresultCheckObj(iVar9,piVar8,&DAT_004086ac,0x54);
  }
  __vbaFreeObj();
  Ordinal_612(auStack_100);
  Ordinal_610(auStack_140);
  pwStack_188 = L"hh:mm";
  uStack_190 = 8;
  __vbaVarDup();
  Ordinal_660(auStack_120,auStack_100,auStack_110,1,1);
  puStack_198 = &DAT_00408910;
  auStack_1a0[0] = 8;
  pwStack_1a8 = L"dd-mm-yy";
  uStack_1b0 = 8;
  __vbaVarDup();
  Ordinal_660(auStack_160,auStack_140,auStack_150,1,1);
  puStack_1b8 = &DAT_00408ce8;
  auStack_1c0[0] = 8;
  uVar7 = __vbaVarAdd(auStack_130,auStack_1a0,auStack_120);
  uVar7 = __vbaVarAdd(auStack_170,auStack_160,uVar7);
  uVar7 = __vbaVarAdd(auStack_180,auStack_1c0,uVar7);
  __vbaStrVarMove(uVar7);
  __vbaStrMove();
  __vbaFreeVarList(9,auStack_100,auStack_110,auStack_120,auStack_140,auStack_150,auStack_130,
                   auStack_160,auStack_170,auStack_180);
  if ((short)*piStack_c4 == -1) {
    __vbaStrCat(*(undefined4 *)pcStack_cc,uStack_e8);
    __vbaStrMove();
    FUN_00416c10(&uStack_ec);
    __vbaFreeStr();
  }
                    /* WARNING: Could not recover jumptable at 0x0041660d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __vbaFreeStr();
  return;
}


// ---- FUN_00416230 @ 00416230

void __cdecl FUN_00416230(int *param_1)

{
  code *pcVar1;
  uint uVar2;
  code **ppcVar3;
  short sVar4;
  short sVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  short *unaff_EBX;
  short sVar9;
  undefined4 *unaff_EDI;
  undefined4 *unaff_FS_OFFSET;
  code *pcStack_170;
  uint uStack_16c;
  int *piStack_168;
  undefined4 auStack_158 [2];
  undefined *puStack_150;
  undefined4 uStack_148;
  wchar_t *pwStack_140;
  undefined4 auStack_138 [2];
  undefined *puStack_130;
  undefined4 uStack_128;
  wchar_t *pwStack_120;
  undefined4 auStack_118 [4];
  undefined4 auStack_108 [4];
  undefined4 auStack_f8 [4];
  undefined4 auStack_e8 [4];
  undefined4 auStack_d8 [4];
  undefined4 auStack_c8 [4];
  undefined4 auStack_b8 [4];
  undefined4 auStack_a8 [4];
  undefined4 auStack_98 [4];
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 *puStack_78;
  undefined4 *puStack_74;
  undefined4 *puStack_70;
  undefined1 *puStack_6c;
  int iStack_68;
  undefined4 local_38 [2];
  undefined4 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 uStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint uVar10;
  
  puStack_14 = &DAT_004015d6;
  uStack_18 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_18;
  local_10 = &stack0xffffff9c;
  local_c = &DAT_00401328;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_38[0] = 0;
  iStack_68 = 0x416275;
  __vbaStrCopy();
  iStack_68 = *param_1;
  puStack_6c = (undefined1 *)0x416281;
  __vbaLenBstr();
  puStack_6c = (undefined1 *)0x416289;
  sVar4 = __vbaI2I4();
  pcVar1 = __vbaStrMove_exref;
  uVar2 = 1;
  do {
    uVar10 = uVar2;
    sVar9 = (short)uVar10;
    if (sVar4 < sVar9) {
      return;
    }
    puStack_70 = local_38;
    puStack_74 = (undefined4 *)(int)sVar9;
    puStack_6c = (undefined1 *)local_20;
    puStack_78 = (undefined4 *)*param_1;
    local_30 = 1;
    local_38[0] = 2;
    uStack_7c = 0x4162c4;
    Ordinal_631();
    uStack_7c = 0x4162cb;
    uStack_7c = __vbaStrMove();
    uStack_80 = 0x4162d2;
    sVar5 = Ordinal_516();
    if (SBORROW2(sVar5,0xff)) break;
    puStack_6c = (undefined1 *)0x4162e6;
    sVar5 = __vbaI2Abs();
    puStack_6c = (undefined1 *)(int)sVar5;
    puStack_70 = (undefined4 *)0x4162f0;
    Ordinal_537();
    puStack_70 = (undefined4 *)0x4162f7;
    puStack_70 = (undefined4 *)__vbaStrMove();
    puStack_74 = (undefined4 *)0x4162fe;
    __vbaStrCat();
    puStack_74 = (undefined4 *)0x416305;
    __vbaStrMove();
    puStack_74 = &local_28;
    puStack_78 = &local_24;
    uStack_7c = 2;
    uStack_80 = 0x416315;
    __vbaFreeStrList();
    puStack_74 = (undefined4 *)0x416321;
    __vbaFreeVar();
    uVar2 = (uint)(ushort)(sVar9 + 1);
  } while (!SCARRY2(sVar9,1));
  puStack_6c = (undefined1 *)0x416382;
  __vbaErrorOverflow();
  puStack_78 = (undefined4 *)&DAT_004015d6;
  uStack_7c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_7c;
  piStack_168 = param_1;
  puStack_74 = &pcStack_170;
  pcStack_170 = pcVar1;
  puStack_70 = (undefined4 *)&DAT_00401338;
  uStack_80 = 0;
  uStack_84 = 0;
  uStack_88 = 0;
  auStack_98[0] = 0;
  auStack_a8[0] = 0;
  auStack_b8[0] = 0;
  auStack_c8[0] = 0;
  auStack_d8[0] = 0;
  auStack_e8[0] = 0;
  auStack_f8[0] = 0;
  auStack_108[0] = 0;
  auStack_118[0] = 0;
  uStack_128 = 0;
  auStack_138[0] = 0;
  uStack_148 = 0;
  auStack_158[0] = 0;
  uStack_16c = uVar10;
  ppcVar3 = &pcStack_170;
  puStack_6c = &stack0xfffffffc;
  if (DAT_0041e010 == (int *)0x0) {
    puStack_6c = &stack0xfffffffc;
    __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    ppcVar3 = (code **)puStack_74;
  }
  puStack_74 = ppcVar3;
  uVar6 = (**(code **)(*DAT_0041e010 + 0x410))(DAT_0041e010);
  piVar7 = (int *)__vbaObjSet(&uStack_88,uVar6);
  iVar8 = (**(code **)(*piVar7 + 0x54))(piVar7,*unaff_EDI);
  if (iVar8 < 0) {
    __vbaHresultCheckObj(iVar8,piVar7,&DAT_004086ac,0x54);
  }
  __vbaFreeObj();
  Ordinal_612(auStack_98);
  Ordinal_610(auStack_d8);
  pwStack_120 = L"hh:mm";
  uStack_128 = 8;
  __vbaVarDup();
  Ordinal_660(auStack_b8,auStack_98,auStack_a8,1,1);
  puStack_130 = &DAT_00408910;
  auStack_138[0] = 8;
  pwStack_140 = L"dd-mm-yy";
  uStack_148 = 8;
  __vbaVarDup();
  Ordinal_660(auStack_f8,auStack_d8,auStack_e8,1,1);
  puStack_150 = &DAT_00408ce8;
  auStack_158[0] = 8;
  uVar6 = __vbaVarAdd(auStack_c8,auStack_138,auStack_b8);
  uVar6 = __vbaVarAdd(auStack_108,auStack_f8,uVar6);
  uVar6 = __vbaVarAdd(auStack_118,auStack_158,uVar6);
  __vbaStrVarMove(uVar6);
  __vbaStrMove();
  __vbaFreeVarList(9,auStack_98,auStack_a8,auStack_b8,auStack_d8,auStack_e8,auStack_c8,auStack_f8,
                   auStack_108,auStack_118);
  if (*unaff_EBX == -1) {
    __vbaStrCat(*unaff_EDI,uStack_80);
    __vbaStrMove();
    FUN_00416c10(&uStack_84);
    __vbaFreeStr();
  }
                    /* WARNING: Could not recover jumptable at 0x0041660d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __vbaFreeStr();
  return;
}


// ---- FUN_00416390 @ 00416390

void FUN_00416390(undefined4 *param_1,undefined4 param_2,short *param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_f0 [2];
  undefined *local_e8;
  undefined4 local_e0;
  wchar_t *local_d8;
  undefined4 local_d0 [2];
  undefined *local_c8;
  undefined4 local_c0;
  wchar_t *local_b8;
  undefined4 local_b0 [4];
  undefined4 local_a0 [4];
  undefined4 local_90 [4];
  undefined4 local_80 [4];
  undefined4 local_70 [4];
  undefined4 local_60 [4];
  undefined4 local_50 [4];
  undefined4 local_40 [4];
  undefined4 local_30 [4];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_004015d6;
  uStack_14 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_14;
  local_c = &stack0xfffffef8;
  local_8 = &DAT_00401338;
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  local_30[0] = 0;
  local_40[0] = 0;
  local_50[0] = 0;
  local_60[0] = 0;
  local_70[0] = 0;
  local_80[0] = 0;
  local_90[0] = 0;
  local_a0[0] = 0;
  local_b0[0] = 0;
  local_c0 = 0;
  local_d0[0] = 0;
  local_e0 = 0;
  local_f0[0] = 0;
  puVar1 = &stack0xfffffef8;
  if (DAT_0041e010 == (int *)0x0) {
    __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    puVar1 = local_c;
  }
  local_c = puVar1;
  uVar2 = (**(code **)(*DAT_0041e010 + 0x410))(DAT_0041e010);
  piVar3 = (int *)__vbaObjSet(&local_20,uVar2);
  iVar4 = (**(code **)(*piVar3 + 0x54))(piVar3,*param_1);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar3,&DAT_004086ac,0x54);
  }
  __vbaFreeObj();
  Ordinal_612(local_30);
  Ordinal_610(local_70);
  local_b8 = L"hh:mm";
  local_c0 = 8;
  __vbaVarDup();
  Ordinal_660(local_50,local_30,local_40,1,1);
  local_c8 = &DAT_00408910;
  local_d0[0] = 8;
  local_d8 = L"dd-mm-yy";
  local_e0 = 8;
  __vbaVarDup();
  Ordinal_660(local_90,local_70,local_80,1,1);
  local_e8 = &DAT_00408ce8;
  local_f0[0] = 8;
  uVar2 = __vbaVarAdd(local_60,local_d0,local_50);
  uVar2 = __vbaVarAdd(local_a0,local_90,uVar2);
  uVar2 = __vbaVarAdd(local_b0,local_f0,uVar2);
  __vbaStrVarMove(uVar2);
  __vbaStrMove();
  __vbaFreeVarList(9,local_30,local_40,local_50,local_70,local_80,local_60,local_90,local_a0,
                   local_b0);
  if (*param_3 == -1) {
    __vbaStrCat(*param_1,local_18);
    __vbaStrMove();
    FUN_00416c10(&local_1c);
    __vbaFreeStr();
  }
                    /* WARNING: Could not recover jumptable at 0x0041660d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __vbaFreeStr();
  return;
}


// ---- FUN_00416630 @ 00416630

void FUN_00416630(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_40 [2];
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  puStack_1c = &DAT_004015d6;
  uStack_20 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_20;
  local_18 = &stack0xffffff88;
  local_14 = &DAT_00401348;
  local_10 = 0;
  local_c = 0;
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_30 = 0;
  local_40[0] = 0;
  __vbaOnError(1);
  local_38 = 0x80020004;
  local_40[0] = 10;
  uVar1 = Ordinal_648(local_40);
  local_24 = uVar1;
  __vbaFreeVar();
  if (DAT_0041e010 == (int *)0x0) {
    __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
  }
  uVar2 = (**(code **)(*DAT_0041e010 + 0x378))(DAT_0041e010);
  piVar3 = (int *)__vbaObjSet(&local_30,uVar2);
  iVar4 = (**(code **)(*piVar3 + 0x50))(piVar3,&local_28);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar3,&DAT_004086ac,0x50);
  }
  __vbaStrCat(local_28,DAT_0041ec84);
  uVar2 = __vbaStrMove();
  __vbaFileOpen(2,0xffffffff,uVar1,uVar2);
  __vbaFreeStrList(2,&local_28,&local_2c);
  __vbaFreeObj();
  __vbaFileClose(uVar1);
  __vbaOnError(0);
  __vbaExitProc();
  return;
}


// ---- FUN_00416840 @ 00416840

void FUN_00416840(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_44 [2];
  undefined4 local_3c;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined *puStack_1c;
  undefined1 *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  puStack_1c = &DAT_004015d6;
  uStack_20 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_20;
  local_18 = &stack0xffffff74;
  local_14 = &LAB_00401370;
  local_10 = 0;
  local_c = 0;
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  local_44[0] = 0;
  __vbaOnError(1);
  local_3c = 0x80020004;
  local_44[0] = 10;
  uVar1 = Ordinal_648(local_44);
  local_24 = uVar1;
  __vbaFreeVar();
  if (DAT_0041e010 == (int *)0x0) {
    __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
  }
  uVar2 = (**(code **)(*DAT_0041e010 + 0x378))(DAT_0041e010);
  piVar3 = (int *)__vbaObjSet(&local_30,uVar2);
  iVar4 = (**(code **)(*piVar3 + 0x50))(piVar3,&local_28);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar3,&DAT_004086ac,0x50);
  }
  __vbaStrCat(local_28,DAT_0041ec84);
  uVar2 = __vbaStrMove();
  __vbaFileOpen(1,0xffffffff,uVar1,uVar2);
  __vbaFreeStrList(2,&local_28,&local_2c);
  __vbaFreeObj();
  uVar2 = Ordinal_570(uVar1);
  if (DAT_0041e010 == (int *)0x0) {
    __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
  }
  uVar5 = (**(code **)(*DAT_0041e010 + 0x340))(DAT_0041e010);
  piVar3 = (int *)__vbaObjSet(&local_30,uVar5);
  iVar4 = *piVar3;
  Ordinal_620(uVar2,uVar1);
  uVar1 = __vbaStrMove();
  iVar4 = (**(code **)(iVar4 + 0xa4))(piVar3,uVar1);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar3,&DAT_004086bc,0xa4);
  }
  __vbaFreeStr();
  __vbaFreeObj();
  if (DAT_0041e010 == (int *)0x0) {
    __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
  }
  uVar1 = (**(code **)(*DAT_0041e010 + 0x340))(DAT_0041e010);
  piVar3 = (int *)__vbaObjSet(&local_34,uVar1);
  if (DAT_0041e010 == (int *)0x0) {
    __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
  }
  uVar1 = (**(code **)(*DAT_0041e010 + 0x340))(DAT_0041e010);
  piVar6 = (int *)__vbaObjSet(&local_30,uVar1);
  iVar4 = (**(code **)(*piVar6 + 0xa0))(piVar6,&local_28);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar6,&DAT_004086bc,0xa0);
  }
  iVar4 = *piVar3;
  uVar1 = __vbaLenBstr(local_28);
  iVar4 = (**(code **)(iVar4 + 0x114))(piVar3,uVar1);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar3,&DAT_004086bc,0x114);
  }
  __vbaFreeStr();
  __vbaFreeObjList(2,&local_30,&local_34);
  if (DAT_0041e010 == (int *)0x0) {
    __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
  }
  uVar1 = (**(code **)(*DAT_0041e010 + 0x340))(DAT_0041e010);
  piVar3 = (int *)__vbaObjSet(&local_30,uVar1);
  iVar4 = (**(code **)(*piVar3 + 0x11c))(piVar3,1);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar3,&DAT_004086bc,0x11c);
  }
  __vbaFreeObj();
  __vbaFileClose(local_24);
  __vbaOnError(0);
  __vbaExitProc();
  return;
}


// ---- FUN_00416c10 @ 00416c10

void __cdecl FUN_00416c10(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_40 [2];
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  puStack_1c = &DAT_004015d6;
  uStack_20 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_20;
  local_18 = &stack0xffffff8c;
  local_14 = &DAT_00401398;
  local_10 = 0;
  local_c = 0;
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_30 = 0;
  local_40[0] = 0;
  __vbaOnError(1);
  local_38 = 0x80020004;
  local_40[0] = 10;
  uVar1 = Ordinal_648(local_40);
  local_24 = uVar1;
  __vbaFreeVar();
  if (DAT_0041e010 == (int *)0x0) {
    __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
  }
  uVar2 = (**(code **)(*DAT_0041e010 + 0x378))(DAT_0041e010);
  piVar3 = (int *)__vbaObjSet(&local_30,uVar2);
  iVar4 = (**(code **)(*piVar3 + 0x50))(piVar3,&local_28);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar3,&DAT_004086ac,0x50);
  }
  __vbaStrCat(local_28,DAT_0041ec84);
  uVar2 = __vbaStrMove();
  __vbaFileOpen(8,0xffffffff,uVar1,uVar2);
  __vbaFreeStrList(2,&local_28,&local_2c);
  __vbaFreeObj();
  __vbaPrintFile(&DAT_00408cf4,uVar1,*param_1);
  __vbaFileClose(uVar1);
  __vbaOnError(0);
  __vbaExitProc();
  return;
}


// ---- FUN_00416da0 @ 00416da0

void __cdecl FUN_00416da0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_3c [2];
  undefined4 local_34;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  puStack_1c = &DAT_004015d6;
  uStack_20 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_20;
  local_18 = &stack0xffffff8c;
  local_14 = &DAT_004013c0;
  local_10 = 0;
  local_c = 0;
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_3c[0] = 0;
  __vbaOnError(1);
  local_34 = 0x80020004;
  local_3c[0] = 10;
  uVar1 = Ordinal_648(local_3c);
  local_24 = uVar1;
  __vbaFreeVar();
  __vbaFileOpen(2,0xffffffff,uVar1,*param_2);
  __vbaPrintFile(&DAT_00408cf4,uVar1,*param_1);
  __vbaFileClose(uVar1);
  __vbaOnError(0);
  __vbaExitProc();
  return;
}


// ---- FUN_00416f30 @ 00416f30

void FUN_00416f30(undefined4 param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_30 [2];
  undefined4 local_28;
  undefined4 local_20;
  undefined *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  puStack_1c = &DAT_004015d6;
  local_20 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_20;
  local_18 = &stack0xffffffb4;
  local_14 = &DAT_004013e8;
  local_10 = 0;
  local_c = 0;
  local_30[0] = 0;
  __vbaOnError(1);
  local_28 = param_1;
  local_30[0] = 0x4008;
  Ordinal_529(local_30);
  __vbaOnError(0);
  __vbaExitProc();
  *unaff_FS_OFFSET = local_20;
  return;
}


// ---- FUN_00416fc0 @ 00416fc0

void FUN_00416fc0(void)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined2 extraout_var;
  code *pcVar6;
  short sVar7;
  code *pcVar8;
  undefined4 *unaff_FS_OFFSET;
  bool bVar9;
  float10 fVar10;
  wchar_t *pwStack_11c;
  wchar_t *pwStack_118;
  int *piStack_114;
  undefined4 local_ac [5];
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_8c;
  undefined4 local_88 [4];
  undefined4 local_78 [2];
  undefined4 local_70;
  undefined4 local_68 [4];
  undefined4 local_58 [2];
  undefined4 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined4 local_38;
  wchar_t local_34 [2];
  undefined4 local_30;
  undefined4 local_2c;
  wchar_t *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_004015d6;
  uStack_14 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_14;
  local_c = &stack0xffffff24;
  local_8 = &DAT_00401410;
  local_18 = 0;
  local_28 = (wchar_t *)0x0;
  local_2c = 0;
  local_30 = 0;
  local_34[0] = L'\0';
  local_34[1] = L'\0';
  local_38 = 0;
  local_48[0] = 0;
  local_58[0] = 0;
  local_68[0] = 0;
  local_78[0] = 0;
  local_88[0] = 0;
  local_98 = 0;
  local_ac[0] = 0;
  puVar1 = &stack0xffffff24;
  if (DAT_0041e010 == (int *)0x0) {
    __vbaNew2();
    puVar1 = local_c;
  }
  local_c = puVar1;
  (**(code **)(*DAT_0041e010 + 0x32c))();
  piVar2 = (int *)__vbaObjSet();
  iVar3 = (**(code **)(*piVar2 + 0x1e8))();
  if (iVar3 < 0) {
    __vbaHresultCheckObj();
  }
  __vbaFreeObj();
  if (DAT_0041e010 == (int *)0x0) {
    __vbaNew2();
  }
  (**(code **)(*DAT_0041e010 + 0x324))();
  piVar2 = (int *)__vbaObjSet();
  iVar3 = (**(code **)(*piVar2 + 0xd8))();
  if (iVar3 < 0) {
    piStack_114 = (int *)0x4170d2;
    __vbaHresultCheckObj();
  }
  uVar4 = local_ac[0];
  local_24 = local_ac[0];
  __vbaFreeObj();
  pcVar6 = __vbaStrCat_exref;
  pcVar8 = __vbaStrMove_exref;
  if (DAT_0041ecae != 0) {
    __vbaStrCopy();
    __vbaStrCopy();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2();
    }
    (**(code **)(*DAT_0041e010 + 0x3a8))();
    piStack_114 = (int *)__vbaObjSet();
    pwStack_118 = L"쌻ች\xe068";
    iVar3 = (**(code **)(*piStack_114 + 0xe0))();
    if (iVar3 < 0) {
      pwStack_118 = (wchar_t *)0xe0;
      pwStack_11c = L"企㎭暙ᇏಷꨀ怀鏓伉㎭暙ᇏಷꨀ怀鏓\n";
      __vbaHresultCheckObj();
    }
    bVar9 = (short)local_ac[0] == -1;
    pwStack_118 = (wchar_t *)0x41717b;
    __vbaFreeObj();
    pcVar6 = __vbaStrCat_exref;
    if (bVar9) {
      pwStack_118 = local_28;
      pwStack_11c = L" LANDSCAPE";
      __vbaStrCat();
      pcVar8 = __vbaStrMove_exref;
      __vbaStrMove();
    }
    else {
      pwStack_118 = local_28;
      pwStack_11c = L" PORTRAIT";
      __vbaStrCat();
      __vbaStrMove();
      pcVar6 = __vbaStrCat_exref;
      pcVar8 = __vbaStrMove_exref;
    }
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2();
    }
    (**(code **)(*DAT_0041e010 + 0x394))();
    piVar2 = (int *)__vbaObjSet();
    iVar3 = (**(code **)(*piVar2 + 0xa0))();
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar2,&DAT_004086bc);
    }
    fVar10 = (float10)Ordinal_581();
    local_70 = (*pcVar6)(L" COPIES ",local_28);
    local_78[0] = 8;
    local_50 = 0x80020004;
    local_58[0] = 10;
    local_48[0] = 5;
    local_40 = (double)fVar10;
    Ordinal_660(local_68,local_48,local_58,1,1);
    uVar4 = __vbaVarAdd(local_88,local_68,local_78);
    __vbaStrVarMove(uVar4);
    (*pcVar8)();
    __vbaFreeStr();
    __vbaFreeObj();
    __vbaFreeVarList(5,local_48,local_58,local_78,local_68,local_88);
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x3a0))(DAT_0041e010);
    piVar2 = (int *)__vbaObjSet(local_34,uVar4);
    iVar3 = (**(code **)(*piVar2 + 0xa0))(piVar2,&local_2c);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar2,&DAT_004086bc,0xa0);
    }
    fVar10 = (float10)Ordinal_581(local_2c);
    local_70 = (*pcVar6)(L" GAP ",local_28);
    local_78[0] = 8;
    local_50 = 0x80020004;
    local_58[0] = 10;
    local_48[0] = 5;
    local_40 = (double)fVar10;
    Ordinal_660(local_68,local_48,local_58,1,1);
    uVar4 = __vbaVarAdd(local_88,local_68,local_78);
    __vbaStrVarMove(uVar4);
    (*pcVar8)();
    __vbaFreeStr();
    __vbaFreeObj();
    __vbaFreeVarList(5,local_48,local_58,local_78,local_68,local_88);
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x390))(DAT_0041e010);
    piVar2 = (int *)__vbaObjSet(local_34,uVar4);
    iVar3 = (**(code **)(*piVar2 + 0xa0))(piVar2,&local_2c);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar2,&DAT_004086bc,0xa0);
    }
    fVar10 = (float10)Ordinal_581(local_2c);
    local_70 = (*pcVar6)(L" MARGIN ",local_28);
    local_78[0] = 8;
    local_50 = 0x80020004;
    local_58[0] = 10;
    local_48[0] = 5;
    local_40 = (double)fVar10;
    Ordinal_660(local_68,local_48,local_58,1,1);
    uVar4 = __vbaVarAdd(local_88,local_68,local_78);
    __vbaStrVarMove(uVar4);
    (*pcVar8)();
    __vbaFreeStr();
    __vbaFreeObj();
    __vbaFreeVarList(5,local_48,local_58,local_78,local_68,local_88);
    (*pcVar6)(L" BACKGROUND 80/80/80",local_28);
    (*pcVar8)();
    (*pcVar6)(L" CELL FF/FF/FF",local_28);
    (*pcVar8)();
    (*pcVar6)(L" EMPTY FF/FF/FF",local_28);
    (*pcVar8)();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x38c))(DAT_0041e010);
    piVar2 = (int *)__vbaObjSet(local_34,uVar4);
    iVar3 = (**(code **)(*piVar2 + 0xf0))(piVar2,local_ac);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar2,&DAT_00408cac,0xf0);
    }
    bVar9 = (short)local_ac[0] == -1;
    __vbaFreeObj();
    if (bVar9) {
      local_1c = 0;
    }
    else {
      if (DAT_0041e010 == (int *)0x0) {
        __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
      }
      uVar4 = (**(code **)(*DAT_0041e010 + 0x38c))(DAT_0041e010);
      piVar2 = (int *)__vbaObjSet(local_34,uVar4);
      iVar3 = (**(code **)(*piVar2 + 0xf0))(piVar2,local_ac);
      if (iVar3 < 0) {
        __vbaHresultCheckObj(iVar3,piVar2,&DAT_00408cac,0xf0);
      }
      local_1c = local_ac[0];
      __vbaFreeObj();
    }
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x38c))(DAT_0041e010);
    piVar2 = (int *)__vbaObjSet(local_34,uVar4);
    iVar3 = (**(code **)(*piVar2 + 0xf8))(piVar2,local_1c,&local_2c);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar2,&DAT_00408cac,0xf8);
    }
    (*pcVar6)(L" SCALE ",local_28);
    uVar4 = (*pcVar8)();
    (*pcVar6)(local_2c,uVar4);
    (*pcVar8)();
    __vbaFreeStrList(2,&local_30,&local_2c);
    __vbaFreeObj();
    (*pcVar6)(local_18,DAT_0041ec80);
    (*pcVar8)();
    FUN_00416da0(&local_28,&local_2c);
    __vbaFreeStr();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x32c))(DAT_0041e010);
    piVar2 = (int *)__vbaObjSet(local_34,uVar4);
    iVar3 = (**(code **)(*piVar2 + 0x1ec))(piVar2,local_18,10,local_94,0x80020004,local_8c);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar2,&DAT_004088e4,0x1ec);
    }
    __vbaFreeObj();
    uVar4 = local_24;
  }
  sVar7 = (short)uVar4;
  if (sVar7 < 1) {
LAB_004178d3:
    if (DAT_0041ecae != 0) {
      __vbaStrCopy();
      __vbaStrCopy();
      (*pcVar6)();
      (*pcVar8)();
      piStack_114 = (int *)0x41791b;
      FUN_00416da0(&local_28,&local_2c);
      piStack_114 = (int *)0x417924;
      __vbaFreeStr();
      if (DAT_0041e010 == (int *)0x0) {
        piStack_114 = (int *)&DAT_0041e010;
        pwStack_118 = L"\x01";
        pwStack_11c = L"Ⴁ䇠謀倈釿̬";
        __vbaNew2();
      }
      piStack_114 = DAT_0041e010;
      pwStack_118 = L"喍僐ｒᰕ䈒茀წ\xf08bﲋહ";
      pwStack_118 = (wchar_t *)(**(code **)(*DAT_0041e010 + 0x32c))();
      pwStack_11c = local_34;
      piVar2 = (int *)__vbaObjSet();
      iVar3 = (**(code **)(*piVar2 + 0x1ec))();
      if (iVar3 < 0) {
        __vbaHresultCheckObj(iVar3,piVar2,&DAT_004088e4,0x1ec);
      }
      __vbaFreeObj();
    }
    __vbaFreeStr();
                    /* WARNING: Could not recover jumptable at 0x00417a09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    __vbaFreeStr();
    return;
  }
  if (!SBORROW2(sVar7,1)) {
    local_20 = 0;
    uVar4 = local_20;
    do {
      local_20 = uVar4;
      if ((short)(sVar7 + -1) < (short)local_20) goto LAB_004178d3;
      if (DAT_0041e010 == (int *)0x0) {
        __vbaNew2();
      }
      (**(code **)(*DAT_0041e010 + 0x32c))();
      piVar2 = (int *)__vbaObjSet();
      if (DAT_0041e010 == (int *)0x0) {
        piStack_114 = (int *)&DAT_00404ab8;
        pwStack_118 = L"Ⴁ䇠謀倈釿̤";
        __vbaNew2();
      }
      piStack_114 = (int *)0x41781a;
      piStack_114 = (int *)(**(code **)(*DAT_0041e010 + 0x324))();
      pwStack_118 = local_34;
      pwStack_11c = (wchar_t *)0x417825;
      piVar5 = (int *)__vbaObjSet();
      pwStack_11c = (wchar_t *)&local_2c;
      iVar3 = (**(code **)(*piVar5 + 0xe8))();
      if (iVar3 < 0) {
        __vbaHresultCheckObj();
      }
      iVar3 = (**(code **)(*piVar2 + 0x1ec))(piVar2,local_2c);
      if (iVar3 < 0) {
        __vbaHresultCheckObj(iVar3,piVar2,&DAT_004088e4,0x1ec);
      }
      __vbaFreeStr();
      __vbaFreeObjList(2,local_34,&local_38);
      pcVar6 = __vbaStrCat_exref;
      pcVar8 = __vbaStrMove_exref;
      uVar4 = CONCAT22(extraout_var,(short)local_20 + 1);
    } while (!SCARRY2((short)local_20,1));
  }
  __vbaErrorOverflow();
  piStack_114 = (int *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &piStack_114;
  pwStack_118 = (wchar_t *)0x0;
  pwStack_11c = (wchar_t *)0x0;
  if (DAT_0041e010 == (int *)0x0) {
    __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
  }
  uVar4 = (**(code **)(*DAT_0041e010 + 0x32c))(DAT_0041e010);
  piVar2 = (int *)__vbaObjSet(&pwStack_11c,uVar4);
  iVar3 = (**(code **)(*piVar2 + 0x1e8))(piVar2);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_004088e4,0x1e8);
  }
  __vbaFreeObj();
  if (DAT_0041ecae != 0) {
    __vbaStrCat(L"IMGARC_CANCEL.CMD",DAT_0041ec80);
    __vbaStrMove();
    FUN_00416f30(&pwStack_118);
    __vbaStrCat(L"IMGARC_SETUP.CMD",DAT_0041ec80);
    __vbaStrMove();
    FUN_00416f30(&pwStack_118);
    __vbaStrCat(L"IMGARC_PRINT.CMD",DAT_0041ec80);
    __vbaStrMove();
    FUN_00416f30(&pwStack_118);
  }
                    /* WARNING: Could not recover jumptable at 0x00417b3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __vbaFreeStr();
  return;
}


// ---- FUN_00417a30 @ 00417a30

void FUN_00417a30(void)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_004015d6;
  uStack_14 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_14;
  local_c = &stack0xffffffcc;
  local_8 = &DAT_00401420;
  local_18 = 0;
  local_1c = 0;
  puVar1 = &stack0xffffffcc;
  if (DAT_0041e010 == (int *)0x0) {
    __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    puVar1 = local_c;
  }
  local_c = puVar1;
  uVar2 = (**(code **)(*DAT_0041e010 + 0x32c))(DAT_0041e010);
  piVar3 = (int *)__vbaObjSet(&local_1c,uVar2);
  iVar4 = (**(code **)(*piVar3 + 0x1e8))(piVar3);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar3,&DAT_004088e4,0x1e8);
  }
  __vbaFreeObj();
  if (DAT_0041ecae != 0) {
    __vbaStrCat(L"IMGARC_CANCEL.CMD",DAT_0041ec80);
    __vbaStrMove();
    FUN_00416f30(&local_18);
    __vbaStrCat(L"IMGARC_SETUP.CMD",DAT_0041ec80);
    __vbaStrMove();
    FUN_00416f30(&local_18);
    __vbaStrCat(L"IMGARC_PRINT.CMD",DAT_0041ec80);
    __vbaStrMove();
    FUN_00416f30(&local_18);
  }
                    /* WARNING: Could not recover jumptable at 0x00417b3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __vbaFreeStr();
  return;
}


// ---- FUN_00417b60 @ 00417b60

/* WARNING: Restarted to delay deadcode elimination for space: ram */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00417b60(void)

{
  code *pcVar1;
  short sVar2;
  undefined2 uVar3;
  int **ppiVar4;
  int iVar5;
  int ****ppppiVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined2 extraout_var;
  undefined4 unaff_EBX;
  undefined4 unaff_EDI;
  undefined4 *unaff_FS_OFFSET;
  short sVar10;
  int ***pppiVar11;
  int ****local_70;
  undefined *local_6c;
  int **local_68;
  int ****local_64;
  int local_60;
  int ****local_5c;
  undefined *local_58;
  int **local_54;
  int *piStack_50;
  int **ppiStack_4c;
  int **ppiStack_48;
  int ***local_44;
  int ****local_40;
  undefined *local_3c;
  int **local_38;
  undefined4 local_34;
  undefined4 uStack_24;
  undefined *puStack_20;
  undefined1 *local_1c;
  undefined *local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_8;
  
  puStack_20 = &DAT_004015d6;
  uStack_24 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_24;
  __vbaChkstk();
  local_1c = &stack0xffffffd0;
  local_18 = &DAT_00401430;
  local_14 = 0;
  local_10 = 0;
  local_8 = 2;
  local_34 = 0xffffffff;
  local_38 = (int **)0x417bb4;
  __vbaOnError();
  local_8 = 3;
  if (DAT_0041e010 == (int *)0x0) {
    local_38 = &DAT_0041e010;
    local_3c = &DAT_00404ab8;
    local_40 = (int ****)0x417bd4;
    __vbaNew2();
  }
  local_38 = (int **)DAT_0041e010;
  local_3c = (undefined *)0x417c03;
  local_3c = (undefined *)(**(code **)(*DAT_0041e010 + 0x32c))();
  local_40 = &local_44;
  local_44 = (int ***)0x417c0e;
  ppiVar4 = (int **)__vbaObjSet();
  local_44 = &local_68;
  ppiStack_4c = (int **)0x417c24;
  ppiStack_48 = ppiVar4;
  iVar5 = (*(code *)(*ppiVar4)[0x36])();
  if (iVar5 < 0) {
    ppiStack_4c = (int **)0xd8;
    piStack_50 = (int *)&DAT_004088e4;
    local_5c = (int ****)0x417c45;
    local_58 = (undefined *)iVar5;
    local_54 = ppiVar4;
    __vbaHresultCheckObj();
  }
  DAT_0041ecbc = (short)local_68;
  ppiStack_4c = (int **)0x417c6b;
  __vbaFreeObj();
  DAT_0041ecbe = 0;
  local_8 = 5;
  if (DAT_0041e010 == (int *)0x0) {
    ppiStack_4c = &DAT_0041e010;
    piStack_50 = (int *)&DAT_00404ab8;
    local_54 = (int **)0x417c9b;
    __vbaNew2();
  }
  piStack_50 = DAT_0041e010;
  ppiStack_4c = (int **)0x0;
  local_54 = (int **)0x417ccd;
  piVar8 = DAT_0041e010;
  iVar5 = (**(code **)(*DAT_0041e010 + 0x1bc))();
  if (iVar5 < 0) {
    local_54 = (int **)0x1bc;
    local_58 = &DAT_00407938;
    local_64 = (int ****)0x417cee;
    local_60 = iVar5;
    local_5c = (int ****)piVar8;
    __vbaHresultCheckObj();
  }
  local_8 = 6;
  if (DAT_0041e010 == (int *)0x0) {
    local_54 = &DAT_0041e010;
    local_58 = &DAT_00404ab8;
    local_5c = (int ****)0x417d20;
    __vbaNew2();
  }
  local_54 = (int **)DAT_0041e010;
  local_58 = (undefined *)0x417d4f;
  local_58 = (undefined *)(**(code **)(*DAT_0041e010 + 0x308))();
  local_5c = &local_44;
  local_60 = 0x417d5a;
  ppppiVar6 = (int ****)__vbaObjSet();
  local_60 = 0;
  local_68 = (int **)0x417d6b;
  local_64 = ppppiVar6;
  iVar5 = (*(code *)(*ppppiVar6)[0x17])();
  if (iVar5 < 0) {
    local_68 = (int **)0x5c;
    local_6c = &DAT_00408768;
    local_70 = ppppiVar6;
    __vbaHresultCheckObj(iVar5);
  }
  local_68 = (int **)0x417da4;
  __vbaFreeObj();
  local_8 = 7;
  if (DAT_0041e010 == (int *)0x0) {
    local_68 = &DAT_0041e010;
    local_6c = &DAT_00404ab8;
    local_70 = (int ****)0x417dc4;
    __vbaNew2();
  }
  local_68 = (int **)DAT_0041e010;
  local_6c = (undefined *)0x417df3;
  local_6c = (undefined *)(**(code **)(*DAT_0041e010 + 0x32c))();
  local_70 = &local_44;
  __vbaObjSet();
  pppiVar11 = &local_68;
  iVar5 = (*(code *)local_68[0x36])(pppiVar11);
  if (iVar5 < 0) {
    __vbaHresultCheckObj(iVar5,pppiVar11,&DAT_004088e4,0xd8);
  }
  sVar2 = 0x7e60;
  __vbaFreeObj();
  if (sVar2 != 0) {
    local_8 = 8;
    if (DAT_0041ecdc == (int *)0x0) {
      __vbaNew2(&DAT_004039e4,&DAT_0041ecdc);
    }
    uVar7 = (**(code **)(*DAT_0041ecdc + 0x300))(DAT_0041ecdc);
    piVar8 = (int *)__vbaObjSet(&local_44,uVar7);
    iVar5 = (**(code **)(*piVar8 + 0x94))(piVar8,0);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,piVar8,&DAT_004086cc,0x94);
    }
    __vbaFreeObj();
  }
  if (DAT_0041ecbc < 1) {
    local_8 = 0x22;
    local_68 = (int **)CONCAT22(local_68._2_2_,0x1ae);
    FUN_00419e70((short *)&local_68,(short *)&DAT_0041ecb6);
    __vbaStrMove();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar7 = (**(code **)(*DAT_0041e010 + 0x3fc))(DAT_0041e010,8,0);
    uVar7 = __vbaObjSet(&local_44,uVar7);
    __vbaLateIdCallLd(&local_54,uVar7);
    local_70 = (int ****)CONCAT22(local_70._2_2_,0xffff);
    uVar3 = __vbaI2Var(&local_54);
    local_6c = (undefined *)CONCAT22(local_6c._2_2_,uVar3);
    local_40 = (int ****)0x0;
    __vbaStrMove();
    FUN_00416390(&local_3c,&local_6c,(short *)&local_70);
    __vbaFreeStrList(2,&local_3c,&local_40);
    __vbaFreeObj();
    __vbaFreeVar();
LAB_004185c6:
    local_8 = 0x24;
    if (DAT_0041ecdc == (int *)0x0) {
      __vbaNew2(&DAT_004039e4,&DAT_0041ecdc);
    }
    uVar7 = (**(code **)(*DAT_0041ecdc + 0x2fc))(DAT_0041ecdc);
    piVar8 = (int *)__vbaObjSet(&local_44,uVar7);
    iVar5 = (**(code **)(*piVar8 + 0x5c))(piVar8,0);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,piVar8,&DAT_00408768,0x5c);
    }
    __vbaFreeObj();
    DAT_0041ecbc = 0;
    local_8 = 0x26;
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    piVar8 = DAT_0041e010;
    iVar5 = (**(code **)(*DAT_0041e010 + 0x1bc))(DAT_0041e010,0xffffffff);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,piVar8,&DAT_00407938,0x1bc);
    }
    local_8 = 0x27;
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar7 = (**(code **)(*DAT_0041e010 + 0x308))(DAT_0041e010);
    piVar8 = (int *)__vbaObjSet(&local_44,uVar7);
    iVar5 = (**(code **)(*piVar8 + 0x5c))(piVar8,0xffffffff);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,piVar8,&DAT_00408768,0x5c);
    }
    __vbaFreeObj();
    local_8 = 0x28;
    FUN_00418a30();
    local_8 = 0x29;
    FUN_00416840();
    local_8 = 0x2a;
    if (DAT_0041ecdc == (int *)0x0) {
      __vbaNew2(&DAT_004039e4,&DAT_0041ecdc);
    }
    piVar8 = DAT_0041ecdc;
    iVar5 = (**(code **)(*DAT_0041ecdc + 0x1bc))(DAT_0041ecdc,0);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,piVar8,&DAT_00408778,0x1bc);
    }
    if (DAT_0041ecb4 == 0) {
      local_8 = 0x2c;
      if (DAT_0041e010 == (int *)0x0) {
        __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
      }
      piVar8 = DAT_0041e010;
      iVar5 = (**(code **)(*DAT_0041e010 + 0x6f8))(DAT_0041e010);
      if (iVar5 < 0) {
        __vbaHresultCheckObj(iVar5,piVar8,&DAT_00407968,0x6f8);
      }
    }
    local_8 = 0x2e;
    __vbaOnError(0);
    local_8 = 0x2f;
    FUN_00417a30();
    __vbaFreeStr(&LAB_00418946);
    __vbaFreeStr();
    __vbaFreeStr();
    __vbaFreeStr();
    return;
  }
  local_8 = 0xb;
  if (!SBORROW2(DAT_0041ecbc,1)) {
    ppppiVar6 = (int ****)(uint)(ushort)(DAT_0041ecbc - 1);
    DAT_0041ecbe = 0;
    sVar2 = DAT_0041ecbe;
    do {
      DAT_0041ecbe = sVar2;
      if ((short)ppppiVar6 < DAT_0041ecbe) goto LAB_004185c6;
      local_8 = 0xc;
      if (DAT_0041e010 == (int *)0x0) {
        __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
      }
      uVar7 = (**(code **)(*DAT_0041e010 + 0x32c))(DAT_0041e010);
      ppppiVar6 = &local_44;
      piVar8 = (int *)__vbaObjSet();
      iVar5 = (**(code **)(*piVar8 + 0xe8))(piVar8,CONCAT22(extraout_var,DAT_0041ecbe),&local_3c);
      if (iVar5 < 0) {
        __vbaHresultCheckObj(iVar5,piVar8,&DAT_004088e4,0xe8);
      }
      local_3c = (undefined *)0x0;
      __vbaStrMove();
      __vbaFreeObj();
      local_8 = 0xd;
      if (DAT_0041e010 == (int *)0x0) {
        __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
      }
      uVar9 = (**(code **)(*DAT_0041e010 + 0x34c))(DAT_0041e010);
      piVar8 = (int *)__vbaObjSet(&local_44,uVar9);
      iVar5 = (**(code **)(*piVar8 + 0xa0))(piVar8,&local_3c);
      if (iVar5 < 0) {
        __vbaHresultCheckObj(iVar5,piVar8,&DAT_004086bc,0xa0);
      }
      __vbaStrCat(&DAT_00408e38,local_3c);
      __vbaStrMove();
      __vbaFreeStr();
      __vbaFreeObj();
      local_8 = 0xe;
      __vbaStrCat(unaff_EBX,DAT_0041ec80);
      __vbaStrMove();
      local_8 = 0xf;
      __vbaStrCat(unaff_EBX,local_34);
      __vbaStrMove();
      local_8 = 0x10;
      if (DAT_0041ecdc == (int *)0x0) {
        __vbaNew2(&DAT_004039e4,&DAT_0041ecdc);
      }
      piVar8 = DAT_0041ecdc;
      iVar5 = (**(code **)(*DAT_0041ecdc + 0x6f8))
                        (DAT_0041ecdc,&stack0xffffffd0,&stack0xffffffd4,&stack0xffffffd8,&local_34);
      if (iVar5 < 0) {
        __vbaHresultCheckObj(iVar5,piVar8,&DAT_004087a8,0x6f8);
      }
      local_8 = 0x11;
      if (DAT_0041ecdc == (int *)0x0) {
        __vbaNew2(&DAT_004039e4,&DAT_0041ecdc);
      }
      piVar8 = DAT_0041ecdc;
      iVar5 = (**(code **)(*DAT_0041ecdc + 0x1bc))(DAT_0041ecdc,0xffffffff);
      if (iVar5 < 0) {
        __vbaHresultCheckObj(iVar5,piVar8,&DAT_00408778,0x1bc);
      }
      local_8 = 0x12;
      local_5c = (int ****)0x6;
      local_64 = (int ****)0x2;
      if (DAT_0041e010 == (int *)0x0) {
        __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
      }
      __vbaChkstk();
      uVar9 = (**(code **)(*DAT_0041e010 + 0x3fc))
                        (DAT_0041e010,10,local_64,local_60,local_5c,local_58);
      uVar9 = __vbaObjSet(&local_44,uVar9);
      __vbaLateIdSt(uVar9);
      __vbaFreeObj();
      while ((sVar10 = (short)uVar7, DAT_0041ecaa == 0 && (DAT_0041eca8 == 0))) {
        local_8 = 0x14;
        Ordinal_598();
      }
      if ((DAT_0041ecaa == -1) && (DAT_0041eca8 == 0)) {
        local_8 = 0x17;
        Ordinal_579(unaff_EDI);
        sVar10 = -0x7c85;
        sVar2 = __vbaI2I4();
        local_38 = (int **)CONCAT22(local_38._2_2_,sVar2);
        local_8 = 0x18;
        if (SBORROW4((int)sVar2,0x20)) break;
        if (-1 < sVar2 + -0x20) {
          local_8 = 0x19;
          if (SBORROW4((int)sVar2,0x20)) break;
          ppppiVar6 = (int ****)0x4183b6;
          uVar7 = unaff_EDI;
          Ordinal_580(unaff_EDI,sVar2 + -0x20);
          sVar10 = (short)uVar7;
        }
      }
      if (DAT_0041ecac == -1) {
        local_8 = 0x1d;
        local_68 = (int **)CONCAT22(local_68._2_2_,0x1b8);
        FUN_00419e70((short *)&local_68,(short *)&DAT_0041ecb6);
        __vbaStrMove();
        if (DAT_0041e010 == (int *)0x0) {
          __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
        }
        uVar7 = (**(code **)(*DAT_0041e010 + 0x3fc))(DAT_0041e010,8,0);
        uVar7 = __vbaObjSet(&local_44,uVar7);
        __vbaLateIdCallLd(&local_54,uVar7);
        local_70 = (int ****)CONCAT22(local_70._2_2_,0xffff);
        uVar3 = __vbaI2Var(&local_54);
        local_6c = (undefined *)CONCAT22(local_6c._2_2_,uVar3);
        local_40 = (int ****)0x0;
        __vbaStrMove();
        FUN_00416390(&local_3c,&local_6c,(short *)&local_70);
        __vbaFreeStrList(2,&local_3c,&local_40);
        __vbaFreeObj();
        __vbaFreeVar();
        goto LAB_004185c6;
      }
      local_8 = 0x20;
      sVar2 = DAT_0041ecbe + sVar10;
    } while (!SCARRY2(DAT_0041ecbe,sVar10));
  }
  __vbaErrorOverflow();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ---- FUN_00418960 @ 00418960

void __cdecl FUN_00418960(undefined2 *param_1)

{
  undefined2 uVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_24;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_004015d6;
  uStack_14 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_14;
  local_c = &stack0xffffffc8;
  uVar1 = *param_1;
  local_8 = &DAT_00401510;
  local_18 = 0;
  puVar2 = &stack0xffffffc8;
  if (DAT_0041e010 == (int *)0x0) {
    __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    puVar2 = local_c;
  }
  local_c = puVar2;
  uVar3 = (**(code **)(*DAT_0041e010 + 0x3fc))(DAT_0041e010,10,2,local_24,uVar1,local_1c);
  uVar3 = __vbaObjSet(&local_18,uVar3);
  __vbaLateIdSt(uVar3);
  __vbaFreeObj();
  return;
}


// ---- FUN_00418a30 @ 00418a30

/* WARNING: Type propagation algorithm not settling */

void FUN_00418a30(void)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  undefined2 extraout_var;
  code *pcVar7;
  short sVar8;
  code *pcVar9;
  undefined4 *unaff_FS_OFFSET;
  int **ppiVar10;
  undefined *puVar11;
  code *pcStack_f0;
  int *piStack_ec;
  code *pcStack_e8;
  int iStack_e4;
  int *piStack_e0;
  int *piStack_dc;
  int *piStack_d8;
  int *piStack_d4;
  undefined4 uStack_d0;
  int iStack_cc;
  int *piStack_c8;
  undefined *puStack_c4;
  undefined4 uStack_c0;
  int *piStack_bc;
  undefined4 uStack_b8;
  int *piStack_b4;
  int *piStack_b0;
  undefined *puStack_ac;
  int *piStack_a8;
  int *piStack_a4;
  undefined *puStack_a0;
  int *piStack_9c;
  int *piStack_98;
  int *piStack_94;
  int *piStack_90;
  undefined *puStack_8c;
  int *piStack_88;
  int *piStack_84;
  int *piStack_80;
  undefined *puStack_7c;
  int *piStack_78;
  int *piStack_74;
  int *piStack_70;
  undefined *puStack_6c;
  int *piStack_68;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_2c;
  int local_28 [4];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_004015d6;
  uStack_14 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_14;
  local_c = &stack0xffffff9c;
  local_8 = &DAT_00401520;
  local_28[2] = 0;
  local_28[1] = 0;
  local_28[0] = 0;
  local_38 = 0;
  local_3c = 0;
  puVar1 = &stack0xffffff9c;
  if (DAT_0041e010 == (int *)0x0) {
    piStack_68 = (int *)&DAT_0041e010;
    puStack_6c = &DAT_00404ab8;
    piStack_70 = (int *)0x418a83;
    __vbaNew2();
    puVar1 = local_c;
  }
  local_c = puVar1;
  piStack_68 = DAT_0041e010;
  puStack_6c = (undefined *)0x418a91;
  puStack_6c = (undefined *)(**(code **)(*DAT_0041e010 + 0x370))();
  pcVar9 = __vbaObjSet_exref;
  piStack_70 = local_28 + 1;
  piStack_74 = (int *)0x418a9e;
  piVar2 = (int *)__vbaObjSet();
  piStack_78 = (int *)0x418aa9;
  piStack_74 = piVar2;
  iVar3 = (**(code **)(*piVar2 + 0x1dc))();
  pcVar7 = __vbaHresultCheckObj_exref;
  if (iVar3 < 0) {
    piStack_78 = (int *)0x1dc;
    puStack_7c = &DAT_00408924;
    piStack_88 = (int *)0x418ac1;
    piStack_84 = (int *)iVar3;
    piStack_80 = piVar2;
    __vbaHresultCheckObj();
  }
  piStack_78 = (int *)0x418ad2;
  __vbaFreeObj();
  if (DAT_0041e010 == (int *)0x0) {
    piStack_78 = (int *)&DAT_0041e010;
    puStack_7c = &DAT_00404ab8;
    piStack_80 = (int *)0x418aeb;
    __vbaNew2();
  }
  piStack_78 = DAT_0041e010;
  puStack_7c = (undefined *)0x418af9;
  puStack_7c = (undefined *)(**(code **)(*DAT_0041e010 + 0x324))();
  piStack_80 = local_28 + 1;
  piStack_84 = (int *)0x418b00;
  piVar2 = (int *)__vbaObjSet();
  piStack_88 = (int *)0x418b0b;
  piStack_84 = piVar2;
  iVar3 = (**(code **)(*piVar2 + 0x1e8))();
  if (iVar3 < 0) {
    piStack_88 = (int *)0x1e8;
    puStack_8c = &DAT_004088e4;
    piStack_98 = (int *)0x418b1d;
    piStack_94 = (int *)iVar3;
    piStack_90 = piVar2;
    __vbaHresultCheckObj();
  }
  piStack_88 = (int *)0x418b26;
  __vbaFreeObj();
  if (DAT_0041e010 == (int *)0x0) {
    piStack_88 = (int *)&DAT_0041e010;
    puStack_8c = &DAT_00404ab8;
    piStack_90 = (int *)0x418b3f;
    __vbaNew2();
  }
  piStack_88 = DAT_0041e010;
  puStack_8c = (undefined *)0x418b4d;
  puStack_8c = (undefined *)(**(code **)(*DAT_0041e010 + 0x370))();
  piStack_90 = local_28 + 1;
  piStack_94 = (int *)0x418b54;
  piVar2 = (int *)__vbaObjSet();
  piStack_94 = &local_3c;
  piStack_9c = (int *)0x418b63;
  piStack_98 = piVar2;
  piVar4 = (int *)(**(code **)(*piVar2 + 0xe8))();
  if ((int)piVar4 < 0) {
    piStack_9c = (int *)0xe8;
    puStack_a0 = &DAT_00408924;
    puStack_ac = (undefined *)0x418b75;
    piStack_a8 = piVar4;
    piStack_a4 = piVar2;
    __vbaHresultCheckObj();
  }
  uVar5 = local_3c;
  piStack_9c = (int *)0x418b81;
  __vbaFreeObj();
  sVar8 = (short)uVar5;
  if (0 < sVar8) {
    piVar2 = (int *)CONCAT22((short)((uint)uVar5 >> 0x10),sVar8 + -1);
    pcStack_f0 = pcVar9;
    if (!SBORROW2(sVar8,1)) {
      local_18 = 0;
      uVar5 = local_18;
      do {
        local_18 = uVar5;
        if ((short)(sVar8 + -1) < (short)local_18) {
          return;
        }
        if (DAT_0041e010 == (int *)0x0) {
          piStack_9c = (int *)&DAT_0041e010;
          puStack_a0 = &DAT_00404ab8;
          piStack_a4 = (int *)0x418bcb;
          __vbaNew2();
        }
        piStack_9c = DAT_0041e010;
        puStack_a0 = (undefined *)0x418bd9;
        puStack_a0 = (undefined *)(**(code **)(*DAT_0041e010 + 0x324))();
        piStack_a4 = local_28;
        piStack_a8 = (int *)0x418be0;
        piVar4 = (int *)(*pcVar9)();
        pcVar7 = (code *)0x80020004;
        if (DAT_0041e010 == (int *)0x0) {
          piStack_a8 = (int *)&DAT_0041e010;
          puStack_ac = &DAT_00404ab8;
          piStack_b0 = (int *)0x418c00;
          __vbaNew2();
        }
        piStack_a8 = DAT_0041e010;
        puStack_ac = (undefined *)0x418c0e;
        puStack_ac = (undefined *)(**(code **)(*DAT_0041e010 + 0x370))();
        piStack_b0 = local_28 + 1;
        piStack_b4 = (int *)0x418c19;
        piVar2 = (int *)__vbaObjSet();
        piStack_b4 = local_28 + 2;
        uStack_b8 = local_18;
        uStack_c0 = 0x418c2c;
        piStack_bc = piVar2;
        iStack_cc = (**(code **)(*piVar2 + 0xf8))();
        if (iStack_cc < 0) {
          uStack_c0 = 0xf8;
          puStack_c4 = &DAT_00408924;
          uStack_d0 = 0x418c42;
          piStack_c8 = piVar2;
          __vbaHresultCheckObj();
        }
        iStack_cc = 10;
        piStack_c8 = (int *)local_34;
        puStack_c4 = (undefined *)0x80020004;
        uStack_c0 = local_2c;
        uStack_d0 = local_28[2];
        piStack_d8 = (int *)0x418c6a;
        piStack_d4 = piVar4;
        iVar3 = (**(code **)(*piVar4 + 0x1ec))();
        if (iVar3 < 0) {
          piStack_d8 = (int *)0x1ec;
          piStack_dc = (int *)&DAT_004088e4;
          pcStack_e8 = (code *)0x418c80;
          iStack_e4 = iVar3;
          piStack_e0 = piVar4;
          __vbaHresultCheckObj();
        }
        piStack_d8 = (int *)0x418c89;
        __vbaFreeStr();
        piStack_d8 = local_28;
        piStack_dc = local_28 + 1;
        piStack_e0 = (int *)0x2;
        iStack_e4 = 0x418c99;
        __vbaFreeObjList();
        pcStack_f0 = __vbaObjSet_exref;
        pcVar9 = __vbaObjSet_exref;
        uVar5 = CONCAT22(extraout_var,(short)local_18 + 1);
      } while (!SCARRY2((short)local_18,1));
    }
    piStack_9c = (int *)0x418cf0;
    __vbaErrorOverflow();
    puStack_ac = &DAT_004015d6;
    piStack_b0 = (int *)*unaff_FS_OFFSET;
    *unaff_FS_OFFSET = &piStack_b0;
    piStack_a8 = (int *)&pcStack_f0;
    piVar4 = (int *)((uint)piStack_94 & 0xfffffffe);
    puStack_a0 = (undefined *)((uint)piStack_94 & 1);
    iVar3 = *piVar4;
    piStack_a4 = (int *)&DAT_00401530;
    piStack_ec = piVar2;
    pcStack_e8 = pcVar7;
    piStack_9c = (int *)&stack0xfffffffc;
    piStack_94 = piVar4;
    (**(code **)(iVar3 + 4))(piVar4);
    piStack_b4 = (int *)0x0;
    uStack_b8 = 0;
    piStack_bc = (int *)0x0;
    uStack_c0 = 0;
    piStack_d4 = (int *)0x0;
    uVar5 = __vbaCastObj(piVar4,&DAT_004084e0);
    __vbaObjSet(&uStack_c0,uVar5);
    FUN_004120b0(&uStack_c0);
    __vbaFreeObj();
    piStack_d4 = (int *)0x154;
    __vbaStrCat(&DAT_004084fc,L"LEO FTP Image Archive");
    uVar5 = __vbaStrMove();
    ppiVar10 = &piStack_d4;
    puVar11 = &DAT_0041ecb6;
    FUN_00419e70((short *)ppiVar10,(short *)&DAT_0041ecb6);
    uVar5 = __vbaStrMove(ppiVar10,puVar11,uVar5);
    __vbaStrCat(uVar5);
    uVar5 = __vbaStrMove();
    iVar6 = (**(code **)(iVar3 + 0x54))(piVar4,uVar5);
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar4,&DAT_00408778,0x54);
    }
    __vbaFreeStrList(3,&piStack_b4,&uStack_b8,&piStack_bc);
    uVar5 = (**(code **)(iVar3 + 800))(piVar4);
    piStack_d8 = (int *)__vbaObjSet(&uStack_c0,uVar5);
    iVar6 = (**(code **)(*piStack_d8 + 0x54))(piStack_d8,&DAT_004084f4);
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piStack_d8,&DAT_004086ac,0x54);
    }
    __vbaFreeObj();
    uVar5 = (**(code **)(iVar3 + 0x318))(piVar4);
    piStack_d8 = (int *)__vbaObjSet(&uStack_c0,uVar5);
    iVar6 = (**(code **)(*piStack_d8 + 0x54))(piStack_d8,&DAT_004084f4);
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piStack_d8,&DAT_004086ac,0x54);
    }
    __vbaFreeObj();
    pcVar7 = *(code **)(iVar3 + 0x304);
    uVar5 = (*pcVar7)(piVar4,1,4,iStack_cc,0x447a0000,puStack_c4);
    uVar5 = __vbaObjSet(&uStack_c0,uVar5);
    __vbaLateIdSt(uVar5);
    __vbaFreeObj();
    uVar5 = (*pcVar7)(piVar4,2,4,iStack_cc,0,puStack_c4);
    uVar5 = __vbaObjSet(&uStack_c0,uVar5);
    __vbaLateIdSt(uVar5);
    __vbaFreeObj();
    uVar5 = (*pcVar7)(piVar4,5,4,iStack_cc,0,puStack_c4);
    uVar5 = __vbaObjSet(&uStack_c0,uVar5);
    __vbaLateIdSt(uVar5);
    __vbaFreeObj();
    FUN_0041d1e0();
    FUN_0041ad10((short *)&DAT_0041ecb6);
    return;
  }
  return;
}


// ---- FUN_00418f80 @ 00418f80

void __cdecl FUN_00418f80(uint param_1)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_40;
  short local_3c [4];
  undefined4 local_34;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20 [2];
  undefined4 uStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004015d6;
  uStack_18 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_18;
  local_10 = &stack0xffffffa8;
  local_8 = param_1 & 1;
  local_c = &DAT_00401540;
  (**(code **)(*(int *)(param_1 & 0xfffffffe) + 4))((int *)(param_1 & 0xfffffffe));
  local_20[0] = 0;
  local_24 = 0;
  local_28 = 0;
  local_3c[2] = 0;
  local_3c[3] = 0;
  local_40 = 0;
  local_3c[0] = 0x168;
  local_3c[1] = 0;
  FUN_00419e70(local_3c,(short *)&DAT_0041ecb6);
  __vbaStrMove();
  local_40 = __vbaI2I4();
  local_24 = 0;
  __vbaStrMove();
  sVar1 = FUN_00411fc0(local_20,(short *)&local_40);
  __vbaFreeStrList(2,local_20,&local_24);
  if (sVar1 != 7) {
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar2 = (**(code **)(*DAT_0041e010 + 0x3fc))(DAT_0041e010,10,2,local_34,5,local_2c);
    uVar2 = __vbaObjSet(&local_28,uVar2);
    __vbaLateIdSt(uVar2);
    __vbaFreeObj();
    DAT_0041ecac = 0xffff;
  }
  return;
}


// ---- FUN_004190f0 @ 004190f0

void __cdecl FUN_004190f0(uint param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004015d6;
  uStack_18 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_18;
  local_10 = &stack0xffffffc4;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  local_8 = param_1 & 1;
  local_c = &DAT_00401550;
  (**(code **)(*piVar4 + 4))(piVar4);
  local_1c = 0;
  if (DAT_0041f138 == (int *)0x0) {
    __vbaNew2(&DAT_0040867c,&DAT_0041f138);
  }
  piVar1 = DAT_0041f138;
  iVar3 = *DAT_0041f138;
  uVar2 = __vbaObjSetAddref(&local_1c,piVar4);
  iVar3 = (**(code **)(iVar3 + 0x10))(piVar1,uVar2);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar1,&DAT_0040866c,0x10);
  }
  __vbaFreeObj();
  return;
}


// ---- FUN_004191d0 @ 004191d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004191d0(int *****param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  int ****ppppiVar1;
  code *pcVar2;
  short sVar3;
  undefined4 **ppuVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *unaff_FS_OFFSET;
  ushort in_FPUStatusWord;
  float10 fVar9;
  undefined4 **ppuStack_284;
  int **ppiStack_280;
  undefined4 **ppuStack_27c;
  undefined4 **ppuStack_278;
  undefined4 **ppuStack_274;
  undefined4 uStack_270;
  undefined4 **ppuStack_26c;
  undefined4 **ppuStack_268;
  undefined4 *puStack_264;
  int *piStack_1fc;
  undefined *puStack_1f8;
  undefined4 uStack_1f4;
  int *piStack_1f0;
  undefined4 *puStack_1ec;
  int *piStack_1e8;
  undefined4 *puStack_1e4;
  int ******ppppppiStack_1e0;
  undefined4 **ppuStack_1dc;
  undefined4 *puStack_1d8;
  undefined4 *puStack_1d4;
  int *****pppppiStack_1d0;
  int *****pppppiStack_1cc;
  undefined4 *puStack_1c8;
  int *****pppppiStack_1c4;
  undefined4 uStack_1c0;
  undefined4 *puStack_1bc;
  undefined4 uStack_1b8;
  undefined4 *puStack_1b4;
  undefined4 *puStack_1b0;
  int iStack_1ac;
  int *piStack_1a8;
  undefined4 *puStack_1a4;
  undefined1 *puStack_1a0;
  int *piStack_19c;
  undefined4 *puStack_198;
  undefined4 *puStack_194;
  undefined4 *puStack_190;
  int *****pppppiStack_18c;
  undefined4 *puStack_188;
  undefined4 *puStack_184;
  undefined4 *puStack_180;
  short local_11c [12];
  int ****local_104 [2];
  undefined2 *local_fc;
  int *local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4 [4];
  undefined4 local_c4 [4];
  undefined4 local_b4 [2];
  undefined4 local_ac;
  int local_a4 [4];
  undefined4 local_94 [2];
  undefined4 local_8c;
  undefined4 local_84 [4];
  undefined4 local_74 [2];
  undefined4 local_6c;
  undefined4 local_64 [4];
  int local_54 [2];
  undefined4 local_4c;
  undefined4 local_44 [2];
  undefined4 local_3c;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 *local_24;
  undefined4 local_20;
  uint local_1c;
  undefined4 uStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &DAT_004015d6;
  uStack_18 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_18;
  local_10 = &stack0xfffffebc;
  ppppiVar1 = *param_1;
  local_c = &DAT_00401560;
  local_8 = 0;
  (*(code *)ppppiVar1[1])();
  local_24 = (undefined4 *)0x0;
  local_28 = 0;
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  local_44[0] = 0;
  local_54[0] = 0;
  local_64[0] = 0;
  local_74[0] = 0;
  local_84[0] = 0;
  local_94[0] = 0;
  local_a4[0] = 0;
  local_b4[0] = 0;
  local_c4[0] = 0;
  local_d4[0] = 0;
  local_104[0] = (int ****)0x0;
  local_11c[0] = 0;
  local_11c[1] = 0;
  local_11c[2] = 0x1e0;
  local_11c[3] = 0;
  __vbaStrCat();
  pcVar2 = __vbaStrMove_exref;
  __vbaStrMove();
  FUN_00419e70(local_11c + 2,(short *)&DAT_0041ecb6);
  ppuVar4 = (undefined4 **)__vbaStrMove();
  local_6c = __vbaStrCat();
  if (!SCARRY2(DAT_0041ecbe,1)) {
    local_3c = CONCAT22(local_3c._2_2_,DAT_0041ecbe + 1);
    local_74[0] = 8;
    local_4c = 0x80020004;
    local_54[0] = 10;
    local_44[0] = 2;
    Ordinal_660();
    local_11c[0] = 0x1ea;
    local_11c[1] = 0;
    puStack_180 = (undefined4 *)0x419308;
    local_8c = FUN_00419e70(local_11c,(short *)&DAT_0041ecb6);
    puStack_180 = (undefined4 *)0x1;
    puStack_188 = local_b4;
    puStack_184 = (undefined4 *)0x1;
    local_94[0] = 8;
    local_ac = 0x80020004;
    local_b4[0] = 10;
    local_fc = &DAT_0041ecbc;
    local_104[0] = (int ****)0x4002;
    pppppiStack_18c = local_104;
    puStack_190 = local_c4;
    puStack_194 = (undefined4 *)0x41935f;
    Ordinal_660();
    puStack_194 = local_74;
    puStack_198 = local_64;
    piStack_19c = local_84;
    puStack_1a0 = (undefined1 *)0x419371;
    puStack_1a0 = (undefined1 *)__vbaVarAdd();
    puStack_1a4 = local_94;
    piStack_1a8 = local_a4;
    iStack_1ac = 0x419386;
    iStack_1ac = __vbaVarAdd();
    puStack_1b0 = local_c4;
    puStack_1b4 = local_d4;
    uStack_1b8 = 0x41939b;
    uStack_1b8 = __vbaVarAdd();
    puStack_1bc = &local_30;
    uStack_1c0 = 0x4193a6;
    uStack_1c0 = __vbaStrVarVal();
    pppppiStack_1c4 = param_1;
    puStack_1c8 = (undefined4 *)0x4193b1;
    puStack_1d4 = (undefined4 *)(*(code *)ppppiVar1[0x15])();
    if ((int)puStack_1d4 < 0) {
      puStack_1c8 = (undefined4 *)0x54;
      pppppiStack_1cc = (int *****)&DAT_00408778;
      pppppiStack_1d0 = param_1;
      puStack_1d8 = (undefined4 *)0x4193c4;
      __vbaHresultCheckObj();
    }
    puStack_1c8 = &local_30;
    pppppiStack_1cc = (int *****)&local_2c;
    pppppiStack_1d0 = (int *****)&local_28;
    puStack_1d4 = (undefined4 *)0x3;
    puStack_1d8 = (undefined4 *)0x4193d8;
    __vbaFreeStrList();
    puStack_1c8 = local_d4;
    pppppiStack_1cc = (int *****)local_c4;
    pppppiStack_1d0 = (int *****)local_a4;
    puStack_1d4 = local_b4;
    puStack_1d8 = local_94;
    ppuStack_1dc = (undefined4 **)local_84;
    ppppppiStack_1e0 = (int ******)local_64;
    puStack_1e4 = local_74;
    piStack_1e8 = local_54;
    puStack_1ec = local_44;
    piStack_1f0 = (int *)0xa;
    uStack_1f4 = 0x41941a;
    __vbaFreeVarList();
    puStack_1c8 = (undefined4 *)*param_2;
    pppppiStack_1cc = (int *****)0x419429;
    DAT_0041ecb8 = Ordinal_578();
    pppppiStack_1cc = param_1;
    pppppiStack_1d0 = (int *****)0x41943b;
    pppppiStack_1d0 = (int *****)(*(code *)ppppiVar1[200])();
    puStack_1d4 = &local_34;
    puStack_1d8 = (undefined4 *)0x419446;
    piVar5 = (int *)__vbaObjSet();
    puStack_1d8 = (undefined4 *)*param_4;
    ppppppiStack_1e0 = (int ******)0x419458;
    ppuStack_1dc = (undefined4 **)piVar5;
    puVar6 = (undefined4 *)(**(code **)(*piVar5 + 0x54))();
    if ((int)puVar6 < 0) {
      ppppppiStack_1e0 = (int ******)0x54;
      puStack_1e4 = (undefined4 *)&DAT_004086ac;
      piStack_1f0 = (int *)0x419471;
      puStack_1ec = puVar6;
      piStack_1e8 = piVar5;
      __vbaHresultCheckObj();
    }
    ppppppiStack_1e0 = (int ******)0x41947a;
    __vbaFreeObj();
    ppppppiStack_1e0 = (int ******)param_1;
    puStack_1e4 = (undefined4 *)0x419487;
    puStack_1e4 = (undefined4 *)(*(code *)ppppiVar1[0xc6])();
    piStack_1e8 = &local_34;
    puStack_1ec = (undefined4 *)0x419492;
    piVar5 = (int *)__vbaObjSet();
    puStack_1ec = (undefined4 *)*param_5;
    uStack_1f4 = 0x4194a4;
    piStack_1f0 = piVar5;
    iVar7 = (**(code **)(*piVar5 + 0x54))();
    if (iVar7 < 0) {
      uStack_1f4 = 0x54;
      puStack_1f8 = &DAT_004086ac;
      piStack_1fc = piVar5;
      __vbaHresultCheckObj();
    }
    uStack_1f4 = 0x4194c6;
    __vbaFreeObj();
    uStack_1f4 = 0x4194cc;
    Ordinal_598();
    piStack_1fc = local_e0;
    puStack_1f8 = (undefined *)0x0;
    uStack_1f4 = local_d8;
    (*(code *)ppppiVar1[0xc1])();
    __vbaObjSet();
    __vbaLateIdSt();
    __vbaFreeObj();
    DAT_0041eca8 = 0;
    DAT_0041ecaa = 0;
    DAT_0041ecac = 0;
    local_dc = *param_2;
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2();
    }
    (**(code **)(*DAT_0041e010 + 0x3fc))();
    __vbaObjSet();
    __vbaLateIdSt();
    __vbaFreeObj();
    __vbaStrCopy();
    __vbaStrCopy();
    __vbaLenBstr();
    local_20 = __vbaI2I4();
    local_1c = 1;
    while( true ) {
      sVar3 = (short)local_1c;
      if ((short)local_20 < sVar3) break;
      local_3c = 1;
      local_44[0] = 2;
      Ordinal_631();
      __vbaStrMove();
      iVar7 = __vbaStrCmp();
      __vbaFreeStr();
      __vbaFreeVar();
      if (iVar7 == 0) {
        puStack_180 = (undefined4 *)&DAT_00408ea8;
        puStack_184 = (undefined4 *)0x419649;
        __vbaStrCat();
        puStack_184 = (undefined4 *)0x41964f;
        __vbaStrMove();
      }
      else {
        puStack_180 = local_44;
        local_3c = 1;
        local_44[0] = 2;
        puStack_188 = local_24;
        pppppiStack_18c = (int *****)0x419674;
        puStack_184 = (undefined4 *)(int)sVar3;
        Ordinal_631();
        pppppiStack_18c = (int *****)0x41967b;
        pppppiStack_18c = (int *****)__vbaStrMove();
        puStack_190 = (undefined4 *)0x419682;
        __vbaStrCat();
        puStack_190 = (undefined4 *)0x419688;
        __vbaStrMove();
        puStack_190 = (undefined4 *)0x419691;
        __vbaFreeStr();
        puStack_190 = (undefined4 *)0x41969a;
        __vbaFreeVar();
      }
      local_1c = (uint)(ushort)((short)local_1c + 1);
    }
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2();
    }
    puStack_180 = (undefined4 *)0x419705;
    puStack_180 = (undefined4 *)(**(code **)(*DAT_0041e010 + 0x3fc))();
    puStack_184 = &local_34;
    puStack_188 = (undefined4 *)0x419712;
    puStack_188 = (undefined4 *)__vbaObjSet();
    pppppiStack_18c = (int *****)0x419719;
    __vbaLateIdSt();
    pppppiStack_18c = (int *****)0x419722;
    __vbaFreeObj();
    pppppiStack_18c = param_1;
    puStack_190 = (undefined4 *)0x41972b;
    puStack_190 = (undefined4 *)(*(code *)(*param_1)[0xbf])();
    puStack_194 = &local_34;
    puStack_198 = (undefined4 *)0x419732;
    piVar5 = (int *)__vbaObjSet();
    puStack_198 = (undefined4 *)0xffffffff;
    puStack_1a0 = (undefined1 *)0x41973c;
    piStack_19c = piVar5;
    iVar7 = (**(code **)(*piVar5 + 0x5c))();
    if (iVar7 < 0) {
      puStack_1a0 = (undefined1 *)0x5c;
      puStack_1a4 = (undefined4 *)&DAT_00408768;
      puStack_1b0 = (undefined4 *)0x41974f;
      iStack_1ac = iVar7;
      piStack_1a8 = piVar5;
      __vbaHresultCheckObj();
    }
    puStack_1a0 = (undefined1 *)0x419758;
    __vbaFreeObj();
    puStack_1a0 = &LAB_004197cd;
                    /* WARNING: Could not recover jumptable at 0x004197c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    __vbaFreeStr();
    return;
  }
  __vbaErrorOverflow();
  *unaff_FS_OFFSET = &stack0xfffffe84;
  puVar6 = *ppuVar4;
  (*(code *)puVar6[1])();
  puStack_188 = (undefined4 *)0x0;
  pppppiStack_18c = (int *****)0x0;
  puStack_194 = (undefined4 *)0x0;
  puStack_198 = (undefined4 *)0x0;
  if (DAT_0041e000 == 0) {
    fVar9 = (float10)_DAT_00401570 / (float10)DAT_0041ecb8;
  }
  else {
    fVar9 = (float10)adj_fdiv_m64();
  }
  piStack_1a8 = (int *)0x0;
  uStack_1b8 = 0;
  puStack_1c8 = (undefined4 *)0x0;
  puStack_1d8 = (undefined4 *)0x0;
  piStack_1e8 = (int *)0x0;
  piStack_1fc = (int *)0x0;
  puStack_190 = (undefined4 *)(float)fVar9;
  if ((in_FPUStatusWord & 0xd) == 0) {
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2();
    }
    (**(code **)(*DAT_0041e010 + 0x3fc))();
    __vbaObjSet();
    puStack_264 = (undefined4 *)0x4198e4;
    __vbaLateIdCallLd();
    puStack_180 = (undefined4 *)__vbaI4Var();
    __vbaFreeObj();
    __vbaFreeVar();
    if (SBORROW4(DAT_0041ecb8,(int)puStack_180)) {
      __vbaErrorOverflow();
      *unaff_FS_OFFSET = &stack0xfffffda4;
      piVar5 = (int *)((uint)param_1 & 0xfffffffe);
      iVar7 = *piVar5;
      (**(code **)(iVar7 + 4))(piVar5);
      puStack_264 = (undefined4 *)0x0;
      ppuStack_268 = (undefined4 **)0x0;
      ppuStack_26c = (undefined4 **)0x0;
      ppuStack_27c = (undefined4 **)0x0;
      ppiStack_280 = (int **)0x0;
      ppuStack_284 = (undefined4 **)0x0;
      uVar8 = (**(code **)(iVar7 + 0x2fc))(piVar5);
      piVar5 = (int *)__vbaObjSet(&ppuStack_26c,uVar8);
      iVar7 = (**(code **)(*piVar5 + 0x5c))(piVar5,0);
      if (iVar7 < 0) {
        __vbaHresultCheckObj(iVar7,piVar5,&DAT_00408768,0x5c);
      }
      __vbaFreeObj();
      if ((*(ushort *)pcVar2 < 2) && (DAT_0041ecbc != 0)) {
        ppiStack_280 = (int **)0x15e;
        FUN_00419e70((short *)&ppiStack_280,(short *)&DAT_0041ecb6);
        __vbaStrMove();
        ppuStack_284 = (undefined4 **)__vbaI2I4();
        ppuStack_268 = (undefined4 **)0x0;
        __vbaStrMove();
        sVar3 = FUN_00411fc0(&puStack_264,(short *)&ppuStack_284);
        __vbaFreeStrList(2,&puStack_264,&ppuStack_268);
        if (sVar3 == 7) {
          uRam00000000 = 0xffff;
        }
        else {
          if (DAT_0041e010 == (int *)0x0) {
            __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
          }
          uVar8 = (**(code **)(*DAT_0041e010 + 0x3fc))(DAT_0041e010,10,2,ppuStack_278,5,uStack_270);
          uVar8 = __vbaObjSet(&ppuStack_26c,uVar8);
          __vbaLateIdSt(uVar8);
          __vbaFreeObj();
        }
      }
      return;
    }
    pppppiStack_18c = (int *****)(DAT_0041ecb8 - (int)puStack_180);
    if (DAT_0041ecb8 - (int)puStack_180 < 0) {
      pppppiStack_18c = (int *****)0x0;
    }
    if ((in_FPUStatusWord & 0xd) == 0) {
      puStack_184 = (undefined4 *)__vbaFpI2();
      if ((int)pppppiStack_18c < 1) {
        if (puStack_180 == (undefined4 *)0x0) {
          piStack_1fc = (int *)0x154;
        }
        else {
          piStack_1fc = (int *)0x1d6;
        }
        FUN_00419e70((short *)&piStack_1fc,(short *)&DAT_0041ecb6);
        __vbaStrMove();
      }
      else {
        ppppppiStack_1e0 = &pppppiStack_18c;
        puStack_1a0 = (undefined1 *)0x80020004;
        piStack_1a8 = (int *)0xa;
        piStack_1e8 = (int *)0x4003;
        Ordinal_660();
        piStack_1fc = (int *)0x1cc;
        puStack_264 = (undefined4 *)0x41999f;
        uStack_1c0 = FUN_00419e70((short *)&piStack_1fc,(short *)&DAT_0041ecb6);
        puStack_264 = &uStack_1b8;
        ppuStack_268 = &puStack_1c8;
        ppuStack_26c = &puStack_1d8;
        puStack_1c8 = (undefined4 *)0x8;
        uStack_270 = 0x4199bb;
        uStack_270 = __vbaVarAdd();
        ppuStack_274 = (undefined4 **)0x4199c2;
        __vbaStrVarMove();
        ppuStack_274 = (undefined4 **)0x4199cd;
        __vbaStrMove();
        ppuStack_274 = &puStack_1d8;
        ppuStack_278 = &puStack_1c8;
        ppuStack_27c = (undefined4 **)&uStack_1b8;
        ppiStack_280 = &piStack_1a8;
        ppuStack_284 = (undefined4 **)0x4;
        __vbaFreeVarList();
      }
      ppuStack_274 = (undefined4 **)0x0;
      iVar7 = (int)(short)puStack_184;
      pcVar2 = (code *)puVar6[0xc1];
      ppuStack_278 = (undefined4 **)0x5;
      ppiStack_280 = (int **)0x419a4a;
      ppuStack_27c = ppuVar4;
      ppiStack_280 = (int **)(*pcVar2)();
      ppuStack_284 = &puStack_198;
      __vbaObjSet();
      ppiStack_280 = (int **)__vbaLateIdCallLd();
      ppuStack_284 = (undefined4 **)0x419a66;
      fVar9 = (float10)__vbaR4Var();
      ppuStack_284 = (undefined4 **)0x419a9c;
      __vbaFreeObj();
      ppuStack_284 = (undefined4 **)0x419aa5;
      __vbaFreeVar();
      if (fVar9 != (float10)iVar7) {
        ppppppiStack_1e0 = (int ******)(float)iVar7;
        piStack_1e8 = (int *)0x4;
        ppuStack_284 = ppuStack_1dc;
        (*pcVar2)();
        __vbaObjSet();
        __vbaLateIdSt();
        __vbaFreeObj();
      }
      pcVar2 = (code *)puVar6[0xc4];
      ppuStack_284 = ppuVar4;
      (*pcVar2)();
      piVar5 = (int *)__vbaObjSet();
      iVar7 = (**(code **)(*piVar5 + 0x50))();
      if (iVar7 < 0) {
        __vbaHresultCheckObj();
      }
      iVar7 = __vbaStrCmp();
      __vbaFreeStr();
      __vbaFreeObj();
      if (iVar7 != 0) {
        (*pcVar2)();
        piVar5 = (int *)__vbaObjSet(&puStack_198);
        iVar7 = (**(code **)(*piVar5 + 0x54))(piVar5,puStack_188);
        if (iVar7 < 0) {
          __vbaHresultCheckObj(iVar7,piVar5,&DAT_004086ac,0x54);
        }
        __vbaFreeObj();
      }
                    /* WARNING: Could not recover jumptable at 0x00419bd1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      __vbaFreeStr();
      return;
    }
  }
  __vbaFPException();
  return;
}


// ---- FUN_00419800 @ 00419800

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00419800(int *param_1)

{
  code *pcVar1;
  short sVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  ushort *unaff_EBX;
  undefined2 *unaff_ESI;
  uint unaff_EDI;
  undefined4 *unaff_FS_OFFSET;
  ushort in_FPUStatusWord;
  float10 fVar7;
  int *piStack_120;
  undefined4 *puStack_11c;
  int *piStack_118;
  undefined4 *puStack_114;
  undefined4 *puStack_110;
  undefined4 uStack_10c;
  undefined4 *puStack_108;
  undefined4 *puStack_104;
  undefined4 *puStack_100;
  short local_98 [10];
  undefined4 local_84;
  int *local_7c;
  int *local_78;
  undefined4 local_74 [4];
  undefined4 local_64 [2];
  undefined4 local_5c;
  undefined4 local_54 [4];
  undefined4 local_44 [2];
  undefined4 local_3c;
  int local_34 [2];
  float local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 uStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &DAT_004015d6;
  uStack_18 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_18;
  local_10 = &stack0xffffff24;
  iVar4 = *param_1;
  local_c = &DAT_00401578;
  local_8 = 0;
  (**(code **)(iVar4 + 4))();
  local_24 = 0;
  local_28 = 0;
  local_34[1] = 0;
  local_34[0] = 0;
  if (DAT_0041e000 == 0) {
    fVar7 = (float10)_DAT_00401570 / (float10)DAT_0041ecb8;
  }
  else {
    fVar7 = (float10)adj_fdiv_m64();
  }
  local_44[0] = 0;
  local_54[0] = 0;
  local_64[0] = 0;
  local_74[0] = 0;
  local_84 = 0;
  local_98[0] = 0;
  local_98[1] = 0;
  local_2c = (float)fVar7;
  if ((in_FPUStatusWord & 0xd) == 0) {
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2();
    }
    (**(code **)(*DAT_0041e010 + 0x3fc))();
    __vbaObjSet();
    puStack_100 = (undefined4 *)0x4198e4;
    __vbaLateIdCallLd();
    local_1c = __vbaI4Var();
    __vbaFreeObj();
    __vbaFreeVar();
    if (SBORROW4(DAT_0041ecb8,local_1c)) {
      __vbaErrorOverflow();
      *unaff_FS_OFFSET = &stack0xffffff08;
      piVar3 = (int *)(unaff_EDI & 0xfffffffe);
      iVar4 = *piVar3;
      (**(code **)(iVar4 + 4))(piVar3);
      puStack_100 = (undefined4 *)0x0;
      puStack_104 = (undefined4 *)0x0;
      puStack_108 = (undefined4 *)0x0;
      piStack_118 = (int *)0x0;
      puStack_11c = (undefined4 *)0x0;
      piStack_120 = (int *)0x0;
      uVar5 = (**(code **)(iVar4 + 0x2fc))(piVar3);
      piVar3 = (int *)__vbaObjSet(&puStack_108,uVar5);
      iVar4 = (**(code **)(*piVar3 + 0x5c))(piVar3,0);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,piVar3,&DAT_00408768,0x5c);
      }
      __vbaFreeObj();
      if ((*unaff_EBX < 2) && (DAT_0041ecbc != 0)) {
        puStack_11c = (undefined4 *)0x15e;
        FUN_00419e70((short *)&puStack_11c,(short *)&DAT_0041ecb6);
        __vbaStrMove();
        piStack_120 = (int *)__vbaI2I4();
        puStack_104 = (undefined4 *)0x0;
        __vbaStrMove();
        sVar2 = FUN_00411fc0(&puStack_100,(short *)&piStack_120);
        __vbaFreeStrList(2,&puStack_100,&puStack_104);
        if (sVar2 == 7) {
          *unaff_ESI = 0xffff;
        }
        else {
          if (DAT_0041e010 == (int *)0x0) {
            __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
          }
          uVar5 = (**(code **)(*DAT_0041e010 + 0x3fc))(DAT_0041e010,10,2,puStack_114,5,uStack_10c);
          uVar5 = __vbaObjSet(&puStack_108,uVar5);
          __vbaLateIdSt(uVar5);
          __vbaFreeObj();
        }
      }
      return;
    }
    local_28 = DAT_0041ecb8 - local_1c;
    if (DAT_0041ecb8 - local_1c < 0) {
      local_28 = 0;
    }
    if ((in_FPUStatusWord & 0xd) == 0) {
      local_20 = __vbaFpI2();
      if (local_28 < 1) {
        if (local_1c == 0) {
          local_98[0] = 0x154;
          local_98[1] = 0;
        }
        else {
          local_98[0] = 0x1d6;
          local_98[1] = 0;
        }
        FUN_00419e70(local_98,(short *)&DAT_0041ecb6);
        __vbaStrMove();
      }
      else {
        local_7c = &local_28;
        local_3c = 0x80020004;
        local_44[0] = 10;
        local_84 = 0x4003;
        Ordinal_660();
        local_98[0] = 0x1cc;
        local_98[1] = 0;
        puStack_100 = (undefined4 *)0x41999f;
        local_5c = FUN_00419e70(local_98,(short *)&DAT_0041ecb6);
        puStack_100 = local_54;
        puStack_104 = local_64;
        puStack_108 = local_74;
        local_64[0] = 8;
        uStack_10c = 0x4199bb;
        uStack_10c = __vbaVarAdd();
        puStack_110 = (undefined4 *)0x4199c2;
        __vbaStrVarMove();
        puStack_110 = (undefined4 *)0x4199cd;
        __vbaStrMove();
        puStack_110 = local_74;
        puStack_114 = local_64;
        piStack_118 = local_54;
        puStack_11c = local_44;
        piStack_120 = (int *)0x4;
        __vbaFreeVarList();
      }
      puStack_110 = (undefined4 *)0x0;
      iVar6 = (int)(short)local_20;
      pcVar1 = *(code **)(iVar4 + 0x304);
      puStack_114 = (undefined4 *)0x5;
      piStack_118 = param_1;
      puStack_11c = (undefined4 *)0x419a4a;
      puStack_11c = (undefined4 *)(*pcVar1)();
      piStack_120 = local_34;
      __vbaObjSet();
      puStack_11c = (undefined4 *)__vbaLateIdCallLd();
      piStack_120 = (int *)0x419a66;
      fVar7 = (float10)__vbaR4Var();
      piStack_120 = (int *)0x419a9c;
      __vbaFreeObj();
      piStack_120 = (int *)0x419aa5;
      __vbaFreeVar();
      if (fVar7 != (float10)iVar6) {
        local_7c = (int *)(float)iVar6;
        local_84 = 4;
        piStack_120 = local_78;
        (*pcVar1)();
        __vbaObjSet();
        __vbaLateIdSt();
        __vbaFreeObj();
      }
      piStack_120 = param_1;
      pcVar1 = *(code **)(iVar4 + 0x310);
      (*pcVar1)();
      piVar3 = (int *)__vbaObjSet();
      iVar4 = (**(code **)(*piVar3 + 0x50))();
      if (iVar4 < 0) {
        __vbaHresultCheckObj();
      }
      iVar4 = __vbaStrCmp();
      __vbaFreeStr();
      __vbaFreeObj();
      if (iVar4 != 0) {
        (*pcVar1)();
        piVar3 = (int *)__vbaObjSet(local_34);
        iVar4 = (**(code **)(*piVar3 + 0x54))(piVar3,local_24);
        if (iVar4 < 0) {
          __vbaHresultCheckObj(iVar4,piVar3,&DAT_004086ac,0x54);
        }
        __vbaFreeObj();
      }
                    /* WARNING: Could not recover jumptable at 0x00419bd1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      __vbaFreeStr();
      return;
    }
  }
  __vbaFPException();
  return;
}


// ---- FUN_00419c10 @ 00419c10

void __cdecl FUN_00419c10(uint param_1,undefined2 *param_2,ushort *param_3)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_40;
  short local_3c [4];
  undefined4 local_34;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20 [2];
  undefined4 uStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004015d6;
  uStack_18 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_18;
  local_10 = &stack0xffffffa0;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  local_8 = param_1 & 1;
  iVar3 = *piVar4;
  local_c = &DAT_00401588;
  (**(code **)(iVar3 + 4))(piVar4);
  local_20[0] = 0;
  local_24 = 0;
  local_28 = 0;
  local_3c[2] = 0;
  local_3c[3] = 0;
  local_3c[0] = 0;
  local_3c[1] = 0;
  local_40 = 0;
  uVar2 = (**(code **)(iVar3 + 0x2fc))(piVar4);
  piVar4 = (int *)__vbaObjSet(&local_28,uVar2);
  iVar3 = (**(code **)(*piVar4 + 0x5c))(piVar4,0);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar4,&DAT_00408768,0x5c);
  }
  __vbaFreeObj();
  if ((*param_3 < 2) && (DAT_0041ecbc != 0)) {
    local_3c[0] = 0x15e;
    local_3c[1] = 0;
    FUN_00419e70(local_3c,(short *)&DAT_0041ecb6);
    __vbaStrMove();
    local_40 = __vbaI2I4();
    local_24 = 0;
    __vbaStrMove();
    sVar1 = FUN_00411fc0(local_20,(short *)&local_40);
    __vbaFreeStrList(2,local_20,&local_24);
    if (sVar1 == 7) {
      *param_2 = 0xffff;
    }
    else {
      if (DAT_0041e010 == (int *)0x0) {
        __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
      }
      uVar2 = (**(code **)(*DAT_0041e010 + 0x3fc))(DAT_0041e010,10,2,local_34,5,local_2c);
      uVar2 = __vbaObjSet(&local_28,uVar2);
      __vbaLateIdSt(uVar2);
      __vbaFreeObj();
    }
  }
  return;
}


// ---- FUN_00419de0 @ 00419de0

undefined4 FUN_00419de0(uint param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_004015d6;
  local_18 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_18;
  local_10 = &stack0xffffffd0;
  piVar2 = (int *)(param_1 & 0xfffffffe);
  local_8 = param_1 & 1;
  iVar1 = *piVar2;
  local_c = &DAT_00401598;
  (**(code **)(iVar1 + 4))(piVar2);
  if (DAT_0041ecbc != 0) {
    iVar1 = (**(code **)(iVar1 + 0x6fc))(piVar2);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piVar2,&DAT_004087a8,0x6fc);
    }
  }
  local_8 = 0;
  (**(code **)(*piVar2 + 8))(piVar2);
  *unaff_FS_OFFSET = local_18;
  return local_8;
}


// ---- FUN_00419e70 @ 00419e70

void __cdecl FUN_00419e70(short *param_1,short *param_2)

{
  int iVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 uStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_004015d6;
  uStack_14 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_14;
  local_c = &stack0xffffffcc;
  local_8 = &DAT_004015a0;
  if (*param_2 == 0) {
    iVar1 = (int)*param_1;
    if (10 < iVar1) {
      if (0x1e < iVar1) {
        if (0x32 < iVar1) {
          if (0x46 < iVar1) {
            if (0x5a < iVar1) {
              if (0x6e < iVar1) {
                if (0x82 < iVar1) {
                  if (0x96 < iVar1) {
                    if (0xaa < iVar1) {
                      if (0xbe < iVar1) {
                        if (0xd2 < iVar1) {
                          if (0xe6 < iVar1) {
                            if (0xfa < iVar1) {
                              if (0x10e < iVar1) {
                                switch(iVar1) {
                                case 0x118:
                                  goto switchD_00419fbd_caseD_118;
                                case 0x122:
                                  goto switchD_00419fbd_caseD_122;
                                case 300:
                                  goto switchD_00419fbd_caseD_12c;
                                case 0x136:
                                  goto switchD_00419fbd_caseD_136;
                                case 0x140:
                                  goto switchD_00419fbd_caseD_140;
                                case 0x14a:
                                  goto switchD_00419fbd_caseD_14a;
                                case 0x154:
                                  goto switchD_00419fbd_caseD_154;
                                case 0x15e:
                                  goto switchD_00419fbd_caseD_15e;
                                case 0x168:
                                  goto switchD_00419fbd_caseD_168;
                                case 0x172:
                                  goto switchD_00419fbd_caseD_172;
                                case 0x17c:
                                  goto switchD_00419fbd_caseD_17c;
                                case 0x186:
                                  goto switchD_00419fbd_caseD_186;
                                case 400:
                                  goto switchD_00419fbd_caseD_190;
                                case 0x19a:
                                  goto switchD_00419fbd_caseD_19a;
                                case 0x1a4:
                                  goto switchD_00419fbd_caseD_1a4;
                                case 0x1ae:
                                  goto switchD_00419fbd_caseD_1ae;
                                case 0x1b8:
                                  goto switchD_00419fbd_caseD_1b8;
                                case 0x1c2:
                                  goto switchD_00419fbd_caseD_1c2;
                                case 0x1cc:
                                  goto switchD_00419fbd_caseD_1cc;
                                case 0x1d6:
                                  goto switchD_00419fbd_caseD_1d6;
                                case 0x1e0:
                                  goto switchD_00419fbd_caseD_1e0;
                                case 0x1ea:
                                  goto switchD_00419fbd_caseD_1ea;
                                case 500:
                                  goto switchD_00419fbd_caseD_1f4;
                                case 0x1fe:
                                  goto switchD_00419fbd_caseD_1fe;
                                case 0x208:
                                  goto switchD_00419fbd_caseD_208;
                                case 0x212:
                                  goto switchD_00419fbd_caseD_212;
                                }
                                goto switchD_00419fbd_caseD_119;
                              }
joined_r0x0041a5de:
                              if (iVar1 == 0x10e) {
LAB_0041a603:
                                local_c = &stack0xffffffcc;
                                __vbaStrCopy();
                                return;
                              }
                              if (iVar1 == 0x104) {
                                local_c = &stack0xffffffcc;
                                __vbaStrCopy();
                                return;
                              }
                              goto switchD_00419fbd_caseD_119;
                            }
joined_r0x0041a59a:
                            if (iVar1 == 0xfa) {
LAB_0041a5bf:
                              local_c = &stack0xffffffcc;
                              __vbaStrCopy();
                              return;
                            }
                            if (iVar1 == 0xf0) {
                              local_c = &stack0xffffffcc;
                              __vbaStrCopy();
                              return;
                            }
                            goto switchD_00419fbd_caseD_119;
                          }
joined_r0x0041a556:
                          if (iVar1 == 0xe6) {
LAB_0041a57b:
                            local_c = &stack0xffffffcc;
                            __vbaStrCopy();
                            return;
                          }
                          if (iVar1 == 0xdc) {
                            local_c = &stack0xffffffcc;
                            __vbaStrCopy();
                            return;
                          }
                          goto switchD_00419fbd_caseD_119;
                        }
joined_r0x0041a512:
                        if (iVar1 == 0xd2) {
LAB_0041a537:
                          local_c = &stack0xffffffcc;
                          __vbaStrCopy();
                          return;
                        }
                        if (iVar1 == 200) {
                          local_c = &stack0xffffffcc;
                          __vbaStrCopy();
                          return;
                        }
                        goto switchD_00419fbd_caseD_119;
                      }
joined_r0x0041a4ce:
                      if (iVar1 == 0xbe) {
LAB_0041a4f3:
                        local_c = &stack0xffffffcc;
                        __vbaStrCopy();
                        return;
                      }
                      if (iVar1 == 0xb4) {
                        local_c = &stack0xffffffcc;
                        __vbaStrCopy();
                        return;
                      }
                      goto switchD_00419fbd_caseD_119;
                    }
joined_r0x0041a48a:
                    if (iVar1 == 0xaa) {
LAB_0041a4af:
                      local_c = &stack0xffffffcc;
                      __vbaStrCopy();
                      return;
                    }
                    if (iVar1 == 0xa0) {
                      local_c = &stack0xffffffcc;
                      __vbaStrCopy();
                      return;
                    }
                    goto switchD_00419fbd_caseD_119;
                  }
joined_r0x0041a446:
                  if (iVar1 == 0x96) {
LAB_0041a46b:
                    local_c = &stack0xffffffcc;
                    __vbaStrCopy();
                    return;
                  }
                  if (iVar1 == 0x8c) {
                    local_c = &stack0xffffffcc;
                    __vbaStrCopy();
                    return;
                  }
                  goto switchD_00419fbd_caseD_119;
                }
joined_r0x0041a404:
                if (iVar1 == 0x82) {
LAB_0041a427:
                  local_c = &stack0xffffffcc;
                  __vbaStrCopy();
                  return;
                }
                if (iVar1 == 0x78) {
                  local_c = &stack0xffffffcc;
                  __vbaStrCopy();
                  return;
                }
                goto switchD_00419fbd_caseD_119;
              }
joined_r0x0041a3c2:
              if (iVar1 == 0x6e) {
LAB_0041a3e5:
                local_c = &stack0xffffffcc;
                __vbaStrCopy();
                return;
              }
              if (iVar1 == 100) {
                local_c = &stack0xffffffcc;
                __vbaStrCopy();
                return;
              }
              goto switchD_00419fbd_caseD_119;
            }
joined_r0x0041a382:
            if (iVar1 == 0x5a) {
LAB_0041a3a5:
              local_c = &stack0xffffffcc;
              __vbaStrCopy();
              return;
            }
            if (iVar1 == 0x50) {
              local_c = &stack0xffffffcc;
              __vbaStrCopy();
              return;
            }
            goto switchD_00419fbd_caseD_119;
          }
joined_r0x0041a342:
          if (iVar1 == 0x46) {
LAB_0041a365:
            local_c = &stack0xffffffcc;
            __vbaStrCopy();
            return;
          }
          if (iVar1 == 0x3c) {
            local_c = &stack0xffffffcc;
            __vbaStrCopy();
            return;
          }
          goto switchD_00419fbd_caseD_119;
        }
joined_r0x0041a302:
        if (iVar1 == 0x32) {
LAB_0041a325:
          local_c = &stack0xffffffcc;
          __vbaStrCopy();
          return;
        }
        if (iVar1 == 0x28) {
          local_c = &stack0xffffffcc;
          __vbaStrCopy();
          return;
        }
        goto switchD_00419fbd_caseD_119;
      }
joined_r0x0041a2c2:
      if (iVar1 == 0x1e) {
LAB_0041a2e5:
        local_c = &stack0xffffffcc;
        __vbaStrCopy();
        return;
      }
      if (iVar1 == 0x14) {
        local_c = &stack0xffffffcc;
        __vbaStrCopy();
        return;
      }
      goto switchD_00419fbd_caseD_119;
    }
  }
  else {
    if (*param_2 == 1) {
      iVar1 = (int)*param_1;
      if (iVar1 < 0xb) {
        if (iVar1 != 10) {
          if (iVar1 == 0) {
            local_c = &stack0xffffffcc;
            __vbaStrCopy();
            return;
          }
          goto switchD_00419fbd_caseD_119;
        }
        goto LAB_0041a2a5;
      }
      if (iVar1 < 0x1f) {
        if (iVar1 != 0x1e) {
          if (iVar1 == 0x14) {
            local_c = &stack0xffffffcc;
            __vbaStrCopy();
            return;
          }
          goto switchD_00419fbd_caseD_119;
        }
        goto LAB_0041a2e5;
      }
      if (iVar1 < 0x33) {
        if (iVar1 != 0x32) {
          if (iVar1 == 0x28) {
            local_c = &stack0xffffffcc;
            __vbaStrCopy();
            return;
          }
          goto switchD_00419fbd_caseD_119;
        }
        goto LAB_0041a325;
      }
      if (iVar1 < 0x47) {
        if (iVar1 != 0x46) {
          if (iVar1 == 0x3c) {
            local_c = &stack0xffffffcc;
            __vbaStrCopy();
            return;
          }
          goto switchD_00419fbd_caseD_119;
        }
        goto LAB_0041a365;
      }
      if (iVar1 < 0x5b) {
        if (iVar1 != 0x5a) {
          if (iVar1 == 0x50) {
            local_c = &stack0xffffffcc;
            __vbaStrCopy();
            return;
          }
          goto switchD_00419fbd_caseD_119;
        }
        goto LAB_0041a3a5;
      }
      if (iVar1 < 0x6f) {
        if (iVar1 != 0x6e) {
          if (iVar1 == 100) {
            local_c = &stack0xffffffcc;
            __vbaStrCopy();
            return;
          }
          goto switchD_00419fbd_caseD_119;
        }
        goto LAB_0041a3e5;
      }
      if (iVar1 < 0x83) {
        if (iVar1 != 0x82) {
          if (iVar1 == 0x78) {
            local_c = &stack0xffffffcc;
            __vbaStrCopy();
            return;
          }
          goto switchD_00419fbd_caseD_119;
        }
        goto LAB_0041a427;
      }
      if (iVar1 < 0x97) {
        if (iVar1 != 0x96) {
          if (iVar1 == 0x8c) {
            local_c = &stack0xffffffcc;
            __vbaStrCopy();
            return;
          }
          goto switchD_00419fbd_caseD_119;
        }
        goto LAB_0041a46b;
      }
      if (iVar1 < 0xab) {
        if (iVar1 != 0xaa) {
          if (iVar1 == 0xa0) {
            local_c = &stack0xffffffcc;
            __vbaStrCopy();
            return;
          }
          goto switchD_00419fbd_caseD_119;
        }
        goto LAB_0041a4af;
      }
      if (iVar1 < 0xbf) {
        if (iVar1 != 0xbe) {
          if (iVar1 == 0xb4) {
            local_c = &stack0xffffffcc;
            __vbaStrCopy();
            return;
          }
          goto switchD_00419fbd_caseD_119;
        }
        goto LAB_0041a4f3;
      }
      if (iVar1 < 0xd3) {
        if (iVar1 != 0xd2) {
          if (iVar1 == 200) {
            local_c = &stack0xffffffcc;
            __vbaStrCopy();
            return;
          }
          goto switchD_00419fbd_caseD_119;
        }
        goto LAB_0041a537;
      }
      if (iVar1 < 0xe7) {
        if (iVar1 != 0xe6) {
          if (iVar1 == 0xdc) {
            local_c = &stack0xffffffcc;
            __vbaStrCopy();
            return;
          }
          goto switchD_00419fbd_caseD_119;
        }
        goto LAB_0041a57b;
      }
      if (iVar1 < 0xfb) {
        if (iVar1 != 0xfa) {
          if (iVar1 == 0xf0) {
            local_c = &stack0xffffffcc;
            __vbaStrCopy();
            return;
          }
          goto switchD_00419fbd_caseD_119;
        }
        goto LAB_0041a5bf;
      }
      if (iVar1 < 0x10f) {
        if (iVar1 != 0x10e) {
          if (iVar1 == 0x104) {
            __vbaStrCopy();
            return;
          }
          goto switchD_00419fbd_caseD_119;
        }
        goto LAB_0041a603;
      }
      switch(iVar1) {
      case 0x118:
        goto switchD_00419fbd_caseD_118;
      case 0x122:
        goto switchD_00419fbd_caseD_122;
      case 300:
        goto switchD_00419fbd_caseD_12c;
      case 0x136:
        goto switchD_00419fbd_caseD_136;
      case 0x140:
        goto switchD_00419fbd_caseD_140;
      case 0x14a:
        goto switchD_00419fbd_caseD_14a;
      case 0x154:
        goto switchD_00419fbd_caseD_154;
      case 0x15e:
        goto switchD_00419fbd_caseD_15e;
      case 0x168:
        goto switchD_00419fbd_caseD_168;
      case 0x172:
        goto switchD_00419fbd_caseD_172;
      case 0x17c:
        goto switchD_00419fbd_caseD_17c;
      case 0x186:
        goto switchD_00419fbd_caseD_186;
      case 400:
        goto switchD_00419fbd_caseD_190;
      case 0x19a:
        goto switchD_00419fbd_caseD_19a;
      case 0x1a4:
        goto switchD_00419fbd_caseD_1a4;
      case 0x1ae:
        goto switchD_00419fbd_caseD_1ae;
      case 0x1b8:
        goto switchD_00419fbd_caseD_1b8;
      case 0x1c2:
        goto switchD_00419fbd_caseD_1c2;
      case 0x1cc:
        goto switchD_00419fbd_caseD_1cc;
      case 0x1d6:
        goto switchD_00419fbd_caseD_1d6;
      case 0x1e0:
        goto switchD_00419fbd_caseD_1e0;
      case 0x1ea:
        goto switchD_00419fbd_caseD_1ea;
      case 500:
        goto switchD_00419fbd_caseD_1f4;
      case 0x1fe:
        goto switchD_00419fbd_caseD_1fe;
      case 0x208:
        goto switchD_00419fbd_caseD_208;
      case 0x212:
        goto switchD_00419fbd_caseD_212;
      }
      goto switchD_00419fbd_caseD_119;
    }
    iVar1 = (int)*param_1;
    if (10 < iVar1) {
      if (0x1e < iVar1) {
        if (0x32 < iVar1) {
          if (0x46 < iVar1) {
            if (0x5a < iVar1) {
              if (0x6e < iVar1) {
                if (0x82 < iVar1) {
                  if (0x96 < iVar1) {
                    if (0xaa < iVar1) {
                      if (0xbe < iVar1) {
                        if (0xd2 < iVar1) {
                          if (0xe6 < iVar1) {
                            if (0xfa < iVar1) {
                              if (0x10e < iVar1) {
                                switch(iVar1) {
                                case 0x118:
switchD_00419fbd_caseD_118:
                                  local_c = &stack0xffffffcc;
                                  __vbaStrCopy();
                                  return;
                                case 0x122:
switchD_00419fbd_caseD_122:
                                  local_c = &stack0xffffffcc;
                                  __vbaStrCopy();
                                  return;
                                case 300:
switchD_00419fbd_caseD_12c:
                                  local_c = &stack0xffffffcc;
                                  __vbaStrCopy();
                                  return;
                                case 0x136:
switchD_00419fbd_caseD_136:
                                  local_c = &stack0xffffffcc;
                                  __vbaStrCopy();
                                  return;
                                case 0x140:
switchD_00419fbd_caseD_140:
                                  local_c = &stack0xffffffcc;
                                  __vbaStrCopy();
                                  return;
                                case 0x14a:
switchD_00419fbd_caseD_14a:
                                  local_c = &stack0xffffffcc;
                                  __vbaStrCopy();
                                  return;
                                case 0x154:
switchD_00419fbd_caseD_154:
                                  local_c = &stack0xffffffcc;
                                  __vbaStrCopy();
                                  return;
                                case 0x15e:
switchD_00419fbd_caseD_15e:
                                  local_c = &stack0xffffffcc;
                                  __vbaStrCopy();
                                  return;
                                case 0x168:
switchD_00419fbd_caseD_168:
                                  local_c = &stack0xffffffcc;
                                  __vbaStrCopy();
                                  return;
                                case 0x172:
switchD_00419fbd_caseD_172:
                                  local_c = &stack0xffffffcc;
                                  __vbaStrCopy();
                                  return;
                                case 0x17c:
switchD_00419fbd_caseD_17c:
                                  local_c = &stack0xffffffcc;
                                  __vbaStrCopy();
                                  return;
                                case 0x186:
switchD_00419fbd_caseD_186:
                                  local_c = &stack0xffffffcc;
                                  __vbaStrCopy();
                                  return;
                                case 400:
switchD_00419fbd_caseD_190:
                                  local_c = &stack0xffffffcc;
                                  __vbaStrCopy();
                                  return;
                                case 0x19a:
switchD_00419fbd_caseD_19a:
                                  local_c = &stack0xffffffcc;
                                  __vbaStrCopy();
                                  return;
                                case 0x1a4:
switchD_00419fbd_caseD_1a4:
                                  local_c = &stack0xffffffcc;
                                  __vbaStrCopy();
                                  return;
                                case 0x1ae:
switchD_00419fbd_caseD_1ae:
                                  local_c = &stack0xffffffcc;
                                  __vbaStrCopy();
                                  return;
                                case 0x1b8:
switchD_00419fbd_caseD_1b8:
                                  local_c = &stack0xffffffcc;
                                  __vbaStrCopy();
                                  return;
                                case 0x1c2:
switchD_00419fbd_caseD_1c2:
                                  local_c = &stack0xffffffcc;
                                  __vbaStrCopy();
                                  return;
                                case 0x1cc:
switchD_00419fbd_caseD_1cc:
                                  local_c = &stack0xffffffcc;
                                  __vbaStrCopy();
                                  return;
                                case 0x1d6:
switchD_00419fbd_caseD_1d6:
                                  local_c = &stack0xffffffcc;
                                  __vbaStrCopy();
                                  return;
                                case 0x1e0:
switchD_00419fbd_caseD_1e0:
                                  local_c = &stack0xffffffcc;
                                  __vbaStrCopy();
                                  return;
                                case 0x1ea:
switchD_00419fbd_caseD_1ea:
                                  local_c = &stack0xffffffcc;
                                  __vbaStrCopy();
                                  return;
                                case 500:
switchD_00419fbd_caseD_1f4:
                                  local_c = &stack0xffffffcc;
                                  __vbaStrCopy();
                                  return;
                                case 0x1fe:
switchD_00419fbd_caseD_1fe:
                                  local_c = &stack0xffffffcc;
                                  __vbaStrCopy();
                                  return;
                                case 0x208:
switchD_00419fbd_caseD_208:
                                  local_c = &stack0xffffffcc;
                                  __vbaStrCopy();
                                  return;
                                case 0x212:
switchD_00419fbd_caseD_212:
                                  local_c = &stack0xffffffcc;
                                  __vbaStrCopy();
                                  return;
                                }
                                goto switchD_00419fbd_caseD_119;
                              }
                              goto joined_r0x0041a5de;
                            }
                            goto joined_r0x0041a59a;
                          }
                          goto joined_r0x0041a556;
                        }
                        goto joined_r0x0041a512;
                      }
                      goto joined_r0x0041a4ce;
                    }
                    goto joined_r0x0041a48a;
                  }
                  goto joined_r0x0041a446;
                }
                goto joined_r0x0041a404;
              }
              goto joined_r0x0041a3c2;
            }
            goto joined_r0x0041a382;
          }
          goto joined_r0x0041a342;
        }
        goto joined_r0x0041a302;
      }
      goto joined_r0x0041a2c2;
    }
  }
  if (iVar1 == 10) {
LAB_0041a2a5:
    local_c = &stack0xffffffcc;
    __vbaStrCopy();
    return;
  }
  if (iVar1 == 0) {
    local_c = &stack0xffffffcc;
    __vbaStrCopy();
    return;
  }
switchD_00419fbd_caseD_119:
  local_c = &stack0xffffffcc;
  __vbaStrCopy();
  return;
}


// ---- FUN_0041ad10 @ 0041ad10

void FUN_0041ad10(short *param_1)

{
  code *pcVar1;
  code *pcVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_24;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_004015d6;
  uStack_14 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_14;
  local_c = &stack0xffffffc0;
  local_8 = &DAT_004015b0;
  local_18 = 0;
  if ((*param_1 == 0) || (*param_1 == 1)) {
    local_c = &stack0xffffffc0;
    if (DAT_0041e010 == (int *)0x0) {
      local_c = &stack0xffffffc0;
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x40c))(DAT_0041e010);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x54))(piVar5,L"Status : ");
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_004086ac,0x54);
    }
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x408))(DAT_0041e010);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x54))(piVar5,L"FTP Connection Status : ");
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_004086ac,0x54);
    }
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x304))(DAT_0041e010);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x54))(piVar5,L"Transfer");
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_004086cc,0x54);
    }
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x300))(DAT_0041e010);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x54))(piVar5,L"Help");
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_004086cc,0x54);
    }
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x314))(DAT_0041e010);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x54))(piVar5,L"Close");
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_004086cc,0x54);
    }
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x318))(DAT_0041e010,4,2,local_24,3,local_1c);
    uVar4 = __vbaObjSet(&local_18,uVar4);
    __vbaLateIdSt(uVar4);
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x318))
                      (DAT_0041e010,0xfffffdfa,8,local_24,L"Network Printer",local_1c);
    uVar4 = __vbaObjSet(&local_18,uVar4);
    __vbaLateIdSt(uVar4);
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x330))(DAT_0041e010);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x54))(piVar5,L"Transfer to Printer");
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_004088f4,0x54);
    }
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x334))(DAT_0041e010);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x54))(piVar5,L"Enable Transfers to Network Printer : ");
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_004086ec,0x54);
    }
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x380))(DAT_0041e010);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x54))(piVar5,L"Printer Options");
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_004088f4,0x54);
    }
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x3c8))(DAT_0041e010);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x54))(piVar5,L"Printer Model : ");
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_004086ac,0x54);
    }
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x3c0))(DAT_0041e010);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x54))(piVar5,L"Copies (1-99) : ");
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_004086ac,0x54);
    }
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x3bc))(DAT_0041e010);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x54))(piVar5,L"Images Across Page (1-9) : ");
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_004086ac,0x54);
    }
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x3b8))(DAT_0041e010);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x54))(piVar5,L"Images Down Page (1-9) : ");
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_004086ac,0x54);
    }
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x3c4))(DAT_0041e010);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x54))(piVar5,L"Gap Between Images (3) : ");
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_004086ac,0x54);
    }
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x3b4))(DAT_0041e010);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x54))(piVar5,L"Page Border (5) : ");
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_004086ac,0x54);
    }
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x3a8))(DAT_0041e010);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x54))(piVar5,L"Landscape");
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_00408c9c,0x54);
    }
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x3a4))(DAT_0041e010);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x54))(piVar5,L"Portrait");
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_00408c9c,0x54);
    }
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x3b0))(DAT_0041e010);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x54))(piVar5,L"Scaling : ");
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_004086ac,0x54);
    }
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x388))(DAT_0041e010);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x54))(piVar5,L"Cancel Current Job");
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_004086cc,0x54);
    }
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 900))(DAT_0041e010);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x54))(piVar5,L"Apply Print Settings");
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_004086cc,0x54);
    }
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x318))(DAT_0041e010,4,2,local_24,2,local_1c);
    uVar4 = __vbaObjSet(&local_18,uVar4);
    __vbaLateIdSt(uVar4);
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x318))
                      (DAT_0041e010,0xfffffdfa,8,local_24,L"Options",local_1c);
    uVar4 = __vbaObjSet(&local_18,uVar4);
    __vbaLateIdSt(uVar4);
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x37c))(DAT_0041e010);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x54))(piVar5,L"Image Transfer");
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_004088f4,0x54);
    }
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x36c))(DAT_0041e010);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x54))(piVar5,L"Transfer Files at end of Session : ");
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_004086ec,0x54);
    }
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x374))(DAT_0041e010);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x54))(piVar5,L"Log File");
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_004088f4,0x54);
    }
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x35c))(DAT_0041e010);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x54))(piVar5,L"Browse...");
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_004086cc,0x54);
    }
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x33c))(DAT_0041e010);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x54))(piVar5,L"Update");
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_004086cc,0x54);
    }
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x338))(DAT_0041e010);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x54))(piVar5,L"Clear Log");
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_004086cc,0x54);
    }
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x318))(DAT_0041e010,4,2,local_24,1,local_1c);
    uVar4 = __vbaObjSet(&local_18,uVar4);
    __vbaLateIdSt(uVar4);
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x318))
                      (DAT_0041e010,0xfffffdfa,8,local_24,L"Destination",local_1c);
    uVar4 = __vbaObjSet(&local_18,uVar4);
    __vbaLateIdSt(uVar4);
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x3d0))(DAT_0041e010);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x54))(piVar5,L"User : ");
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_004086ac,0x54);
    }
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x3d4))(DAT_0041e010);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x54))(piVar5,L"Password : ");
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_004086ac,0x54);
    }
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x3d8))(DAT_0041e010);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x54))(piVar5,L"FTP Host : ");
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_004086ac,0x54);
    }
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x3cc))(DAT_0041e010);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x54))(piVar5,L"Image Dir : ");
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_004086ac,0x54);
    }
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x3dc))(DAT_0041e010);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x54))(piVar5,L"Archived Images: ");
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_004086ac,0x54);
    }
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x358))(DAT_0041e010);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x54))(piVar5,L"Log In");
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_004086cc,0x54);
    }
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x354))(DAT_0041e010);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x54))(piVar5,L"Log Out");
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_004086cc,0x54);
    }
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x350))(DAT_0041e010);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x54))(piVar5,L"Status");
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_004086cc,0x54);
    }
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x348))(DAT_0041e010);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x54))(piVar5,L"Change Dir");
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_004086cc,0x54);
    }
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x318))(DAT_0041e010,4,2,local_24,0,local_1c);
    uVar4 = __vbaObjSet(&local_18,uVar4);
    __vbaLateIdSt(uVar4);
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x318))
                      (DAT_0041e010,0xfffffdfa,8,local_24,L"Source",local_1c);
    uVar4 = __vbaObjSet(&local_18,uVar4);
    __vbaLateIdSt(uVar4);
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x3e0))(DAT_0041e010);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x54))(piVar5,L"User : ");
    pcVar1 = __vbaHresultCheckObj_exref;
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_004086ac,0x54);
    }
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x3f0))(DAT_0041e010);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x54))(piVar5,L"User Dir : ");
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_004086ac,0x54);
    }
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x3f4))(DAT_0041e010);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x54))(piVar5,L"Image Dir : ");
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_004086ac,0x54);
    }
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x3f8))(DAT_0041e010);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x54))(piVar5,L"Images for Archive: ");
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_004086ac,0x54);
    }
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x31c))(DAT_0041e010);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x54))(piVar5,L"Include Files Already Transferred : ");
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_004086ec,0x54);
    }
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 800))(DAT_0041e010);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x54))(piVar5,L"Exclude");
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_004086cc,0x54);
    }
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x328))(DAT_0041e010);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x54))(piVar5,L"Refresh");
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_004086cc,0x54);
    }
    __vbaFreeObj();
    if (DAT_0041ecdc == (int *)0x0) {
      __vbaNew2(&DAT_004039e4,&DAT_0041ecdc);
    }
    uVar4 = (**(code **)(*DAT_0041ecdc + 0x324))(DAT_0041ecdc);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x54))(piVar5,L"Source : ");
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_004086ac,0x54);
    }
    __vbaFreeObj();
    if (DAT_0041ecdc == (int *)0x0) {
      __vbaNew2(&DAT_004039e4,&DAT_0041ecdc);
    }
    uVar4 = (**(code **)(*DAT_0041ecdc + 0x31c))(DAT_0041ecdc);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x54))(piVar5,L"Destination : ");
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_004086ac,0x54);
    }
    __vbaFreeObj();
    if (DAT_0041ecdc == (int *)0x0) {
      __vbaNew2(&DAT_004039e4,&DAT_0041ecdc);
    }
    uVar4 = (**(code **)(*DAT_0041ecdc + 0x314))(DAT_0041ecdc);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x54))(piVar5,L"Progress : ");
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_004086ac,0x54);
    }
    __vbaFreeObj();
    if (DAT_0041ecdc == (int *)0x0) {
      __vbaNew2(&DAT_004039e4,&DAT_0041ecdc);
    }
    uVar4 = (**(code **)(*DAT_0041ecdc + 0x300))(DAT_0041ecdc);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x54))(piVar5,L"Cancel All");
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_004086cc,0x54);
    }
    pcVar2 = __vbaFreeObj_exref;
    __vbaFreeObj();
    if (DAT_0041ecdc == (int *)0x0) {
      __vbaNew2(&DAT_004039e4,&DAT_0041ecdc);
    }
    uVar4 = (**(code **)(*DAT_0041ecdc + 0x308))(DAT_0041ecdc);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x54))(piVar5,L"Cancel");
  }
  else {
    puVar3 = &stack0xffffffc0;
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
      puVar3 = local_c;
    }
    local_c = puVar3;
    uVar4 = (**(code **)(*DAT_0041e010 + 0x40c))(DAT_0041e010);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x54))(piVar5,L"Status : ");
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_004086ac,0x54);
    }
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x408))(DAT_0041e010);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x54))(piVar5,L"FTP Connection Status : ");
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_004086ac,0x54);
    }
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x304))(DAT_0041e010);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x54))(piVar5,L"Transfer");
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_004086cc,0x54);
    }
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x300))(DAT_0041e010);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x54))(piVar5,L"Help");
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_004086cc,0x54);
    }
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x314))(DAT_0041e010);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x54))(piVar5,L"Close");
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_004086cc,0x54);
    }
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x318))(DAT_0041e010,4,2,local_24,3,local_1c);
    uVar4 = __vbaObjSet(&local_18,uVar4);
    __vbaLateIdSt(uVar4);
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x318))
                      (DAT_0041e010,0xfffffdfa,8,local_24,L"Network Printer",local_1c);
    uVar4 = __vbaObjSet(&local_18,uVar4);
    __vbaLateIdSt(uVar4);
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x330))(DAT_0041e010);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x54))(piVar5,L"Transfer to Printer");
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_004088f4,0x54);
    }
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x334))(DAT_0041e010);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x54))(piVar5,L"Enable Transfers to Network Printer : ");
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_004086ec,0x54);
    }
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x380))(DAT_0041e010);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x54))(piVar5,L"Printer Options");
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_004088f4,0x54);
    }
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x3c8))(DAT_0041e010);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x54))(piVar5,L"Printer Model : ");
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_004086ac,0x54);
    }
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x3c0))(DAT_0041e010);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x54))(piVar5,L"Copies (1-99) : ");
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_004086ac,0x54);
    }
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x3bc))(DAT_0041e010);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x54))(piVar5,L"Images Across Page (1-9) : ");
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_004086ac,0x54);
    }
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x3b8))(DAT_0041e010);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x54))(piVar5,L"Images Down Page (1-9) : ");
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_004086ac,0x54);
    }
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x3c4))(DAT_0041e010);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x54))(piVar5,L"Gap Between Images (3) : ");
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_004086ac,0x54);
    }
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x3b4))(DAT_0041e010);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x54))(piVar5,L"Page Border (5) : ");
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_004086ac,0x54);
    }
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x3a8))(DAT_0041e010);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x54))(piVar5,L"Landscape");
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_00408c9c,0x54);
    }
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x3a4))(DAT_0041e010);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x54))(piVar5,L"Portrait");
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_00408c9c,0x54);
    }
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x3b0))(DAT_0041e010);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x54))(piVar5,L"Scaling : ");
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_004086ac,0x54);
    }
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x388))(DAT_0041e010);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x54))(piVar5,L"Cancel Current Job");
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_004086cc,0x54);
    }
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 900))(DAT_0041e010);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x54))(piVar5,L"Apply Print Settings");
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_004086cc,0x54);
    }
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x318))(DAT_0041e010,4,2,local_24,2,local_1c);
    uVar4 = __vbaObjSet(&local_18,uVar4);
    __vbaLateIdSt(uVar4);
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x318))
                      (DAT_0041e010,0xfffffdfa,8,local_24,L"Options",local_1c);
    uVar4 = __vbaObjSet(&local_18,uVar4);
    __vbaLateIdSt(uVar4);
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x37c))(DAT_0041e010);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x54))(piVar5,L"Image Transfer");
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_004088f4,0x54);
    }
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x36c))(DAT_0041e010);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x54))(piVar5,L"Transfer Files at end of Session : ");
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_004086ec,0x54);
    }
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x374))(DAT_0041e010);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x54))(piVar5,L"Log File");
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_004088f4,0x54);
    }
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x35c))(DAT_0041e010);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x54))(piVar5,L"Browse...");
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_004086cc,0x54);
    }
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x33c))(DAT_0041e010);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x54))(piVar5,L"Update");
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_004086cc,0x54);
    }
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x338))(DAT_0041e010);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x54))(piVar5,L"Clear Log");
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_004086cc,0x54);
    }
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x318))(DAT_0041e010,4,2,local_24,1,local_1c);
    uVar4 = __vbaObjSet(&local_18,uVar4);
    __vbaLateIdSt(uVar4);
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x318))
                      (DAT_0041e010,0xfffffdfa,8,local_24,L"Destination",local_1c);
    uVar4 = __vbaObjSet(&local_18,uVar4);
    __vbaLateIdSt(uVar4);
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x3d0))(DAT_0041e010);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x54))(piVar5,L"User : ");
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_004086ac,0x54);
    }
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x3d4))(DAT_0041e010);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x54))(piVar5,L"Password : ");
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_004086ac,0x54);
    }
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x3d8))(DAT_0041e010);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x54))(piVar5,L"FTP Host : ");
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_004086ac,0x54);
    }
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x3cc))(DAT_0041e010);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x54))(piVar5,L"Image Dir : ");
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_004086ac,0x54);
    }
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x3dc))(DAT_0041e010);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x54))(piVar5,L"Archived Images: ");
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_004086ac,0x54);
    }
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x358))(DAT_0041e010);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x54))(piVar5,L"Log In");
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_004086cc,0x54);
    }
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x354))(DAT_0041e010);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x54))(piVar5,L"Log Out");
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_004086cc,0x54);
    }
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x350))(DAT_0041e010);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x54))(piVar5,L"Status");
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_004086cc,0x54);
    }
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x348))(DAT_0041e010);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x54))(piVar5,L"Change Dir");
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_004086cc,0x54);
    }
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x318))(DAT_0041e010,4,2,local_24,0,local_1c);
    uVar4 = __vbaObjSet(&local_18,uVar4);
    __vbaLateIdSt(uVar4);
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x318))
                      (DAT_0041e010,0xfffffdfa,8,local_24,L"Source",local_1c);
    uVar4 = __vbaObjSet(&local_18,uVar4);
    __vbaLateIdSt(uVar4);
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x3e0))(DAT_0041e010);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x54))(piVar5,L"User : ");
    pcVar1 = __vbaHresultCheckObj_exref;
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_004086ac,0x54);
    }
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x3f0))(DAT_0041e010);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x54))(piVar5,L"User Dir : ");
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_004086ac,0x54);
    }
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x3f4))(DAT_0041e010);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x54))(piVar5,L"Image Dir : ");
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_004086ac,0x54);
    }
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x3f8))(DAT_0041e010);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x54))(piVar5,L"Images for Archive: ");
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_004086ac,0x54);
    }
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x31c))(DAT_0041e010);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x54))(piVar5,L"Include Files Already Transferred : ");
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_004086ec,0x54);
    }
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 800))(DAT_0041e010);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x54))(piVar5,L"Exclude");
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_004086cc,0x54);
    }
    __vbaFreeObj();
    if (DAT_0041e010 == (int *)0x0) {
      __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    }
    uVar4 = (**(code **)(*DAT_0041e010 + 0x328))(DAT_0041e010);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x54))(piVar5,L"Refresh");
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_004086cc,0x54);
    }
    __vbaFreeObj();
    if (DAT_0041ecdc == (int *)0x0) {
      __vbaNew2(&DAT_004039e4,&DAT_0041ecdc);
    }
    uVar4 = (**(code **)(*DAT_0041ecdc + 0x324))(DAT_0041ecdc);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x54))(piVar5,L"Source : ");
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_004086ac,0x54);
    }
    __vbaFreeObj();
    if (DAT_0041ecdc == (int *)0x0) {
      __vbaNew2(&DAT_004039e4,&DAT_0041ecdc);
    }
    uVar4 = (**(code **)(*DAT_0041ecdc + 0x31c))(DAT_0041ecdc);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x54))(piVar5,L"Destination : ");
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_004086ac,0x54);
    }
    __vbaFreeObj();
    if (DAT_0041ecdc == (int *)0x0) {
      __vbaNew2(&DAT_004039e4,&DAT_0041ecdc);
    }
    uVar4 = (**(code **)(*DAT_0041ecdc + 0x314))(DAT_0041ecdc);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x54))(piVar5,L"Progress : ");
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_004086ac,0x54);
    }
    __vbaFreeObj();
    if (DAT_0041ecdc == (int *)0x0) {
      __vbaNew2(&DAT_004039e4,&DAT_0041ecdc);
    }
    uVar4 = (**(code **)(*DAT_0041ecdc + 0x300))(DAT_0041ecdc);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x54))(piVar5,L"Cancel All");
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_004086cc,0x54);
    }
    pcVar2 = __vbaFreeObj_exref;
    __vbaFreeObj();
    if (DAT_0041ecdc == (int *)0x0) {
      __vbaNew2(&DAT_004039e4,&DAT_0041ecdc);
    }
    uVar4 = (**(code **)(*DAT_0041ecdc + 0x308))(DAT_0041ecdc);
    piVar5 = (int *)__vbaObjSet(&local_18,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x54))(piVar5,L"Cancel");
  }
  if (iVar6 < 0) {
    (*pcVar1)(iVar6,piVar5,&DAT_004086cc,0x54);
  }
  (*pcVar2)();
  return;
}


// ---- FUN_0041d1e0 @ 0041d1e0

void FUN_0041d1e0(void)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_24;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &DAT_004015d6;
  uStack_14 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_14;
  local_c = &stack0xffffffc0;
  local_8 = &DAT_004015c0;
  local_18 = 0;
  puVar1 = &stack0xffffffc0;
  if (DAT_0041e010 == (int *)0x0) {
    __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
    puVar1 = local_c;
  }
  local_c = puVar1;
  piVar4 = DAT_0041e010;
  iVar2 = (**(code **)(*DAT_0041e010 + 0x1e4))(DAT_0041e010,1000);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar4,&DAT_00407938,0x1e4);
  }
  if (DAT_0041e010 == (int *)0x0) {
    __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
  }
  uVar3 = (**(code **)(*DAT_0041e010 + 0x304))(DAT_0041e010);
  piVar4 = (int *)__vbaObjSet(&local_18,uVar3);
  iVar2 = (**(code **)(*piVar4 + 0x124))(piVar4,0x3f2);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar4,&DAT_004086cc,0x124);
  }
  __vbaFreeObj();
  if (DAT_0041e010 == (int *)0x0) {
    __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
  }
  uVar3 = (**(code **)(*DAT_0041e010 + 0x300))(DAT_0041e010);
  piVar4 = (int *)__vbaObjSet(&local_18,uVar3);
  iVar2 = (**(code **)(*piVar4 + 0x124))(piVar4,1000);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar4,&DAT_004086cc,0x124);
  }
  __vbaFreeObj();
  if (DAT_0041e010 == (int *)0x0) {
    __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
  }
  uVar3 = (**(code **)(*DAT_0041e010 + 0x314))(DAT_0041e010);
  piVar4 = (int *)__vbaObjSet(&local_18,uVar3);
  iVar2 = (**(code **)(*piVar4 + 0x124))(piVar4,0x3fc);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar4,&DAT_004086cc,0x124);
  }
  __vbaFreeObj();
  if (DAT_0041e010 == (int *)0x0) {
    __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
  }
  uVar3 = (**(code **)(*DAT_0041e010 + 0x318))(DAT_0041e010,0x80010032,3,local_24,0x406,local_1c);
  uVar3 = __vbaObjSet(&local_18,uVar3);
  __vbaLateIdSt(uVar3);
  __vbaFreeObj();
  if (DAT_0041e010 == (int *)0x0) {
    __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
  }
  uVar3 = (**(code **)(*DAT_0041e010 + 0x324))(DAT_0041e010);
  piVar4 = (int *)__vbaObjSet(&local_18,uVar3);
  iVar2 = (**(code **)(*piVar4 + 0x164))(piVar4,0x410);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar4,&DAT_004088e4,0x164);
  }
  __vbaFreeObj();
  if (DAT_0041e010 == (int *)0x0) {
    __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
  }
  uVar3 = (**(code **)(*DAT_0041e010 + 0x31c))(DAT_0041e010);
  piVar4 = (int *)__vbaObjSet(&local_18,uVar3);
  iVar2 = (**(code **)(*piVar4 + 0x11c))(piVar4,0x4a6);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar4,&DAT_004086ec,0x11c);
  }
  __vbaFreeObj();
  if (DAT_0041e010 == (int *)0x0) {
    __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
  }
  uVar3 = (**(code **)(*DAT_0041e010 + 800))(DAT_0041e010);
  piVar4 = (int *)__vbaObjSet(&local_18,uVar3);
  iVar2 = (**(code **)(*piVar4 + 0x124))(piVar4,0x4b0);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar4,&DAT_004086cc,0x124);
  }
  __vbaFreeObj();
  if (DAT_0041e010 == (int *)0x0) {
    __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
  }
  uVar3 = (**(code **)(*DAT_0041e010 + 0x328))(DAT_0041e010);
  piVar4 = (int *)__vbaObjSet(&local_18,uVar3);
  iVar2 = (**(code **)(*piVar4 + 0x124))(piVar4,0x4ba);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar4,&DAT_004086cc,0x124);
  }
  __vbaFreeObj();
  if (DAT_0041e010 == (int *)0x0) {
    __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
  }
  uVar3 = (**(code **)(*DAT_0041e010 + 0x368))(DAT_0041e010);
  piVar4 = (int *)__vbaObjSet(&local_18,uVar3);
  iVar2 = (**(code **)(*piVar4 + 0x17c))(piVar4,0x41a);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar4,&DAT_004086bc,0x17c);
  }
  __vbaFreeObj();
  if (DAT_0041e010 == (int *)0x0) {
    __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
  }
  uVar3 = (**(code **)(*DAT_0041e010 + 0x364))(DAT_0041e010);
  piVar4 = (int *)__vbaObjSet(&local_18,uVar3);
  iVar2 = (**(code **)(*piVar4 + 0x17c))(piVar4,0x424);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar4,&DAT_004086bc,0x17c);
  }
  __vbaFreeObj();
  if (DAT_0041e010 == (int *)0x0) {
    __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
  }
  uVar3 = (**(code **)(*DAT_0041e010 + 0x360))(DAT_0041e010);
  piVar4 = (int *)__vbaObjSet(&local_18,uVar3);
  iVar2 = (**(code **)(*piVar4 + 0x17c))(piVar4,0x42e);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar4,&DAT_004086bc,0x17c);
  }
  __vbaFreeObj();
  if (DAT_0041e010 == (int *)0x0) {
    __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
  }
  uVar3 = (**(code **)(*DAT_0041e010 + 0x34c))(DAT_0041e010);
  piVar4 = (int *)__vbaObjSet(&local_18,uVar3);
  iVar2 = (**(code **)(*piVar4 + 0x17c))(piVar4,0x438);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar4,&DAT_004086bc,0x17c);
  }
  __vbaFreeObj();
  if (DAT_0041e010 == (int *)0x0) {
    __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
  }
  uVar3 = (**(code **)(*DAT_0041e010 + 0x344))(DAT_0041e010);
  piVar4 = (int *)__vbaObjSet(&local_18,uVar3);
  iVar2 = (**(code **)(*piVar4 + 0x164))(piVar4,0x442);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar4,&DAT_004088e4,0x164);
  }
  __vbaFreeObj();
  if (DAT_0041e010 == (int *)0x0) {
    __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
  }
  uVar3 = (**(code **)(*DAT_0041e010 + 0x358))(DAT_0041e010);
  piVar4 = (int *)__vbaObjSet(&local_18,uVar3);
  iVar2 = (**(code **)(*piVar4 + 0x124))(piVar4,0x44c);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar4,&DAT_004086cc,0x124);
  }
  __vbaFreeObj();
  if (DAT_0041e010 == (int *)0x0) {
    __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
  }
  uVar3 = (**(code **)(*DAT_0041e010 + 0x354))(DAT_0041e010);
  piVar4 = (int *)__vbaObjSet(&local_18,uVar3);
  iVar2 = (**(code **)(*piVar4 + 0x124))(piVar4,0x456);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar4,&DAT_004086cc,0x124);
  }
  __vbaFreeObj();
  if (DAT_0041e010 == (int *)0x0) {
    __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
  }
  uVar3 = (**(code **)(*DAT_0041e010 + 0x350))(DAT_0041e010);
  piVar4 = (int *)__vbaObjSet(&local_18,uVar3);
  iVar2 = (**(code **)(*piVar4 + 0x124))(piVar4,0x460);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar4,&DAT_004086cc,0x124);
  }
  __vbaFreeObj();
  if (DAT_0041e010 == (int *)0x0) {
    __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
  }
  uVar3 = (**(code **)(*DAT_0041e010 + 0x348))(DAT_0041e010);
  piVar4 = (int *)__vbaObjSet(&local_18,uVar3);
  iVar2 = (**(code **)(*piVar4 + 0x124))(piVar4,0x46a);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar4,&DAT_004086cc,0x124);
  }
  __vbaFreeObj();
  if (DAT_0041e010 == (int *)0x0) {
    __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
  }
  uVar3 = (**(code **)(*DAT_0041e010 + 0x36c))(DAT_0041e010);
  piVar4 = (int *)__vbaObjSet(&local_18,uVar3);
  iVar2 = (**(code **)(*piVar4 + 0x11c))(piVar4,0x474);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar4,&DAT_004086ec,0x11c);
  }
  __vbaFreeObj();
  if (DAT_0041e010 == (int *)0x0) {
    __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
  }
  uVar3 = (**(code **)(*DAT_0041e010 + 0x340))(DAT_0041e010);
  piVar4 = (int *)__vbaObjSet(&local_18,uVar3);
  iVar2 = (**(code **)(*piVar4 + 0x17c))(piVar4,0x47e);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar4,&DAT_004086bc,0x17c);
  }
  __vbaFreeObj();
  if (DAT_0041e010 == (int *)0x0) {
    __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
  }
  uVar3 = (**(code **)(*DAT_0041e010 + 0x35c))(DAT_0041e010);
  piVar4 = (int *)__vbaObjSet(&local_18,uVar3);
  iVar2 = (**(code **)(*piVar4 + 0x124))(piVar4,0x488);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar4,&DAT_004086cc,0x124);
  }
  __vbaFreeObj();
  if (DAT_0041e010 == (int *)0x0) {
    __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
  }
  uVar3 = (**(code **)(*DAT_0041e010 + 0x33c))(DAT_0041e010);
  piVar4 = (int *)__vbaObjSet(&local_18,uVar3);
  iVar2 = (**(code **)(*piVar4 + 0x124))(piVar4,0x492);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar4,&DAT_004086cc,0x124);
  }
  __vbaFreeObj();
  if (DAT_0041e010 == (int *)0x0) {
    __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
  }
  uVar3 = (**(code **)(*DAT_0041e010 + 0x338))(DAT_0041e010);
  piVar4 = (int *)__vbaObjSet(&local_18,uVar3);
  iVar2 = (**(code **)(*piVar4 + 0x124))(piVar4,0x49c);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar4,&DAT_004086cc,0x124);
  }
  __vbaFreeObj();
  if (DAT_0041e010 == (int *)0x0) {
    __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
  }
  uVar3 = (**(code **)(*DAT_0041e010 + 0x334))(DAT_0041e010);
  piVar4 = (int *)__vbaObjSet(&local_18,uVar3);
  iVar2 = (**(code **)(*piVar4 + 0x11c))(piVar4,0x4c4);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar4,&DAT_004086ec,0x11c);
  }
  __vbaFreeObj();
  if (DAT_0041e010 == (int *)0x0) {
    __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
  }
  uVar3 = (**(code **)(*DAT_0041e010 + 0x3ac))(DAT_0041e010);
  piVar4 = (int *)__vbaObjSet(&local_18,uVar3);
  iVar2 = (**(code **)(*piVar4 + 0x164))(piVar4,0x4ce);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar4,&DAT_00408cac,0x164);
  }
  __vbaFreeObj();
  if (DAT_0041e010 == (int *)0x0) {
    __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
  }
  uVar3 = (**(code **)(*DAT_0041e010 + 0x394))(DAT_0041e010);
  piVar4 = (int *)__vbaObjSet(&local_18,uVar3);
  iVar2 = (**(code **)(*piVar4 + 0x17c))(piVar4,0x4d8);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar4,&DAT_004086bc,0x17c);
  }
  __vbaFreeObj();
  if (DAT_0041e010 == (int *)0x0) {
    __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
  }
  uVar3 = (**(code **)(*DAT_0041e010 + 0x398))(DAT_0041e010);
  piVar4 = (int *)__vbaObjSet(&local_18,uVar3);
  iVar2 = (**(code **)(*piVar4 + 0x17c))(piVar4,0x4e2);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar4,&DAT_004086bc,0x17c);
  }
  __vbaFreeObj();
  if (DAT_0041e010 == (int *)0x0) {
    __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
  }
  uVar3 = (**(code **)(*DAT_0041e010 + 0x39c))(DAT_0041e010);
  piVar4 = (int *)__vbaObjSet(&local_18,uVar3);
  iVar2 = (**(code **)(*piVar4 + 0x17c))(piVar4,0x4ec);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar4,&DAT_004086bc,0x17c);
  }
  __vbaFreeObj();
  if (DAT_0041e010 == (int *)0x0) {
    __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
  }
  uVar3 = (**(code **)(*DAT_0041e010 + 0x3a0))(DAT_0041e010);
  piVar4 = (int *)__vbaObjSet(&local_18,uVar3);
  iVar2 = (**(code **)(*piVar4 + 0x17c))(piVar4,0x4f6);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar4,&DAT_004086bc,0x17c);
  }
  __vbaFreeObj();
  if (DAT_0041e010 == (int *)0x0) {
    __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
  }
  uVar3 = (**(code **)(*DAT_0041e010 + 0x390))(DAT_0041e010);
  piVar4 = (int *)__vbaObjSet(&local_18,uVar3);
  iVar2 = (**(code **)(*piVar4 + 0x17c))(piVar4,0x500);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar4,&DAT_004086bc,0x17c);
  }
  __vbaFreeObj();
  if (DAT_0041e010 == (int *)0x0) {
    __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
  }
  uVar3 = (**(code **)(*DAT_0041e010 + 0x3a8))(DAT_0041e010);
  piVar4 = (int *)__vbaObjSet(&local_18,uVar3);
  iVar2 = (**(code **)(*piVar4 + 0x11c))(piVar4,0x50a);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar4,&DAT_00408c9c,0x11c);
  }
  __vbaFreeObj();
  if (DAT_0041e010 == (int *)0x0) {
    __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
  }
  uVar3 = (**(code **)(*DAT_0041e010 + 0x3a4))(DAT_0041e010);
  piVar4 = (int *)__vbaObjSet(&local_18,uVar3);
  iVar2 = (**(code **)(*piVar4 + 0x11c))(piVar4,0x514);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar4,&DAT_00408c9c,0x11c);
  }
  __vbaFreeObj();
  if (DAT_0041e010 == (int *)0x0) {
    __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
  }
  uVar3 = (**(code **)(*DAT_0041e010 + 0x38c))(DAT_0041e010);
  piVar4 = (int *)__vbaObjSet(&local_18,uVar3);
  iVar2 = (**(code **)(*piVar4 + 0x164))(piVar4,0x51e);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar4,&DAT_00408cac,0x164);
  }
  __vbaFreeObj();
  if (DAT_0041e010 == (int *)0x0) {
    __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
  }
  uVar3 = (**(code **)(*DAT_0041e010 + 900))(DAT_0041e010);
  piVar4 = (int *)__vbaObjSet(&local_18,uVar3);
  iVar2 = (**(code **)(*piVar4 + 0x124))(piVar4,0x528);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar4,&DAT_004086cc,0x124);
  }
  __vbaFreeObj();
  if (DAT_0041e010 == (int *)0x0) {
    __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
  }
  uVar3 = (**(code **)(*DAT_0041e010 + 0x388))(DAT_0041e010);
  piVar4 = (int *)__vbaObjSet(&local_18,uVar3);
  iVar2 = (**(code **)(*piVar4 + 0x124))(piVar4,0x532);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar4,&DAT_004086cc,0x124);
  }
  __vbaFreeObj();
  if (DAT_0041e010 == (int *)0x0) {
    __vbaNew2(&DAT_00404ab8,&DAT_0041e010);
  }
  piVar4 = DAT_0041e010;
  iVar2 = (**(code **)(*DAT_0041e010 + 0x1e4))(DAT_0041e010,2000);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar4,&DAT_00407938,0x1e4);
  }
  if (DAT_0041ecdc == (int *)0x0) {
    __vbaNew2(&DAT_004039e4,&DAT_0041ecdc);
  }
  uVar3 = (**(code **)(*DAT_0041ecdc + 0x300))(DAT_0041ecdc);
  piVar4 = (int *)__vbaObjSet(&local_18,uVar3);
  iVar2 = (**(code **)(*piVar4 + 0x124))(piVar4,0x7da);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar4,&DAT_004086cc,0x124);
  }
  __vbaFreeObj();
  if (DAT_0041ecdc == (int *)0x0) {
    __vbaNew2(&DAT_004039e4,&DAT_0041ecdc);
  }
  uVar3 = (**(code **)(*DAT_0041ecdc + 0x308))(DAT_0041ecdc);
  piVar4 = (int *)__vbaObjSet(&local_18,uVar3);
  iVar2 = (**(code **)(*piVar4 + 0x124))(piVar4,0x7e4);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar4,&DAT_004086cc,0x124);
  }
  __vbaFreeObj();
  return;
}


