// Decompiled with Ghidra from Parachute.exe
// Format: Portable Executable (PE), image base 00400000

// ---- __vbaChkstk @ 00401ce0

void __vbaChkstk(void)

{
                    /* WARNING: Could not recover jumptable at 0x00401ce0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __vbaChkstk();
  return;
}


// ---- __vbaFPException @ 00401cec

void __vbaFPException(void)

{
                    /* WARNING: Could not recover jumptable at 0x00401cec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __vbaFPException();
  return;
}


// ---- DllFunctionCall @ 00401d70

void DllFunctionCall(void)

{
                    /* WARNING: Could not recover jumptable at 0x00401d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DllFunctionCall();
  return;
}


// ---- ThunRTMain @ 00401f38

void ThunRTMain(void)

{
                    /* WARNING: Could not recover jumptable at 0x00401f38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ThunRTMain();
  return;
}


// ---- entry @ 00401f40

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00402141) overlaps instruction at (ram,0x00402140)
    */
/* WARNING: Unable to track spacebase fully for stack */

void entry(void)

{
  ushort *puVar1;
  short sVar2;
  code *pcVar3;
  uint uVar4;
  byte bVar5;
  char cVar6;
  byte bVar7;
  byte bVar8;
  byte *pbVar9;
  undefined4 *puVar10;
  int *piVar11;
  char *pcVar12;
  char *pcVar13;
  byte *pbVar14;
  char cVar16;
  int extraout_ECX;
  uint *puVar15;
  char cVar18;
  int iVar17;
  char cVar20;
  int unaff_EBX;
  undefined4 uVar19;
  undefined4 *puVar21;
  int iVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined1 *unaff_ESI;
  char *pcVar25;
  undefined4 uVar26;
  byte *unaff_EDI;
  char *pcVar27;
  char *pcVar28;
  undefined4 uVar29;
  undefined6 uVar30;
  int local_4;
  
  local_4 = 0x402050;
  uVar30 = ThunRTMain();
  pbVar14 = (byte *)uVar30;
  bVar7 = (byte)uVar30;
  *pbVar14 = *pbVar14 + bVar7;
  *pbVar14 = *pbVar14 + bVar7;
  *pbVar14 = *pbVar14 + bVar7;
  *pbVar14 = *pbVar14 ^ bVar7;
  *pbVar14 = *pbVar14 + bVar7;
  pbVar9 = pbVar14 + 1;
  cVar6 = (char)pbVar9;
  *pbVar9 = *pbVar9 + cVar6;
  *pbVar9 = *pbVar9 + cVar6;
  *pbVar9 = *pbVar9 + cVar6;
  *(char *)(extraout_ECX + 3) = *(char *)(extraout_ECX + 3) + (char)((uint6)uVar30 >> 0x28);
  *(uint *)(pbVar14 + -0x71) = *(uint *)(pbVar14 + -0x71) ^ 0x35;
  puVar10 = (undefined4 *)CONCAT31((int3)((uint)unaff_EDI >> 8),(byte)unaff_EDI ^ *unaff_EDI);
  *(char *)(unaff_EBX + -0x4a) = *(char *)(unaff_EBX + -0x4a) + (char)extraout_ECX;
  out(*unaff_ESI,(short)((uint6)uVar30 >> 0x20));
  bVar5 = (byte)&local_4;
  local_4 = CONCAT31(local_4._1_3_,(char)local_4 + bVar5 * '\x03');
  local_4 = (int)&local_4 + local_4;
  bVar7 = (char)local_4 + bVar5;
  local_4._1_3_ = (undefined3)((uint)local_4 >> 8);
  local_4 = CONCAT31(local_4._1_3_,bVar7 + bVar5);
  puVar10[-1] = &DAT_50000000;
  pcVar27 = (char *)puVar10[-1];
  pcVar25 = (char *)*puVar10;
  iVar22 = puVar10[1];
  uVar19 = puVar10[3];
  iVar17 = puVar10[4];
  puVar15 = (uint *)puVar10[5];
  piVar11 = (int *)puVar10[6];
  puVar21 = puVar10 + 7;
  cVar6 = (char)piVar11;
  if (CARRY1(bVar7,bVar5)) {
    *(char *)piVar11 = (char)*piVar11 + cVar6;
    *(char *)((int)piVar11 + 0x700406e) =
         *(char *)((int)piVar11 + 0x700406e) + (char)((uint)piVar11 >> 8);
    *(char *)piVar11 = (char)*piVar11 + cVar6;
    pcVar28 = pcVar27 + 1;
    cVar16 = in((short)iVar17);
    *pcVar27 = cVar16;
    piVar11 = (int *)(CONCAT31((int3)((uint)piVar11 >> 8),cVar6 + (char)iVar17) + 1);
    *pcVar28 = *pcVar28 + (char)piVar11;
  }
  else {
    puVar1 = (ushort *)((int)piVar11 + 0x75);
    sVar2 = ((ushort)iVar22 & 3) - (*puVar1 & 3);
    *puVar1 = *puVar1 + (ushort)(0 < sVar2) * sVar2;
    if (0 >= sVar2) {
      *(char *)(iVar22 + 0x32) = *(char *)(iVar22 + 0x32) + cVar6;
      *puVar15 = *puVar15 ^ (uint)pcVar25;
      *puVar15 = *puVar15 ^ (uint)pcVar27;
      *(char *)piVar11 = (char)*piVar11 + cVar6;
      *(char *)piVar11 = (char)*piVar11 + cVar6;
      *piVar11 = (int)(*piVar11 + (int)piVar11);
      *(char *)piVar11 = (char)*piVar11 + cVar6;
      *(int **)((int)puVar10 + 0x19) = piVar11;
      *(uint **)((int)puVar10 + 0x15) = puVar15;
      *(int *)((int)puVar10 + 0x11) = iVar17;
      *(undefined4 *)((int)puVar10 + 0xd) = uVar19;
      *(int *)((int)puVar10 + 9) = (int)puVar10 + 0x1d;
      *(int *)((int)puVar10 + 5) = iVar22;
      *(char **)((int)puVar10 + 1) = pcVar25;
      *(char **)((int)puVar10 + -3) = pcVar27;
      pcVar25 = (char *)((int)piVar11 + 1);
      *pcVar25 = *pcVar25 + (char)pcVar25;
      *pcVar25 = *pcVar25 + (char)pcVar25;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(char *)piVar11 = (char)*piVar11 + cVar6;
    *(byte *)((int)piVar11 * 3) = *(byte *)((int)piVar11 * 3) >> 1;
    puVar21 = puVar10 + 8;
    pcVar28 = pcVar27;
  }
  cVar6 = (char)piVar11;
  *(char *)piVar11 = (char)*piVar11 + cVar6;
  pcVar27 = (char *)((int)puVar21 + iVar22 * 2 + 0x70040);
  *pcVar27 = *pcVar27 + (char)puVar15;
  *(char *)piVar11 = (char)*piVar11 + cVar6;
  *(char *)piVar11 = (char)*piVar11 + cVar6;
  cVar18 = (char)((uint)iVar17 >> 8);
  pcVar27 = (char *)(*(int *)CONCAT31((int3)((uint)piVar11 >> 8),cVar6 + cVar18) * 7);
  cVar6 = (char)pcVar27;
  *pcVar27 = *pcVar27 + cVar6;
  cVar16 = (char)((uint)puVar15 >> 8);
  pcVar27[0x700406b] = pcVar27[0x700406b] + cVar16;
  *pcVar27 = *pcVar27 + cVar6;
  pcVar27[0x6b] = pcVar27[0x6b] + cVar6;
  pcVar27 = pcVar27 + 1;
  cVar6 = (char)pcVar27;
  *pcVar28 = *pcVar28 + cVar6;
  *pcVar27 = *pcVar27 + cVar6;
  cVar20 = (char)((uint)uVar19 >> 8);
  cVar6 = cVar6 + cVar20;
  pcVar13 = (char *)CONCAT31((int3)((uint)pcVar27 >> 8),cVar6);
  *puVar21 = 0x40;
  *pcVar28 = *pcVar28 + cVar6;
  *pcVar13 = *pcVar13 + cVar6;
  pcVar13[0x700406a] = pcVar13[0x700406a] + cVar18;
  *pcVar13 = *pcVar13 + cVar6;
  pcVar13[0x6a] = pcVar13[0x6a] + cVar16;
  pcVar12 = pcVar13 + 1;
  *pcVar28 = *pcVar28 + (char)pcVar12;
  *pcVar12 = *pcVar12 + (char)pcVar12;
  pcVar27 = (char *)(iVar17 + iVar22 * 2);
  *pcVar27 = *pcVar27 + (char)((uint)pcVar12 >> 8);
  pcVar13 = pcVar13 + 2;
  cVar6 = (char)pcVar13;
  *pcVar28 = *pcVar28 + cVar6;
  *pcVar13 = *pcVar13 + cVar6;
  cVar6 = cVar6 + (char)((uint)pcVar13 >> 8);
  iVar22 = *(int *)CONCAT31((int3)((uint)pcVar13 >> 8),cVar6);
  pbVar14 = (byte *)(iVar22 * 7);
  if (cVar6 != '\0') {
    pbVar9 = pbVar14 + 1;
    *pcVar28 = *pcVar28 + (char)pbVar9;
    *pbVar9 = *pbVar9 + (char)pbVar9;
    pbVar14[0x56004067] = pbVar14[0x56004067] + cVar18;
    pbVar9 = (byte *)((uint)pbVar9 ^ 0x2a229e21);
    bVar7 = (byte)pbVar9;
    *pbVar9 = *pbVar9 + bVar7;
    *pbVar9 = *pbVar9 + bVar7;
    *pbVar9 = *pbVar9 + bVar7;
    *pbVar9 = *pbVar9 + bVar7;
    *pbVar9 = *pbVar9 + bVar7;
    *pbVar9 = *pbVar9 + bVar7;
    *pcVar25 = *pcVar25 + cVar20;
    *pbVar9 = *pbVar9 + bVar7;
    *pbVar9 = *pbVar9 + bVar7;
    *pbVar9 = *pbVar9 + bVar7;
    *pbVar9 = *pbVar9 + bVar7;
    *pbVar9 = *pbVar9 + bVar7;
    *pbVar9 = *pbVar9 + bVar7;
    bVar7 = bVar7 | *pbVar9;
    puVar15 = (uint *)CONCAT31((int3)((uint)pbVar9 >> 8),bVar7);
    *(uint *)((int)puVar15 * 2) = *(uint *)((int)puVar15 * 2) | (uint)puVar15;
    *(byte *)puVar15 = (char)*puVar15 + bVar7;
    *(byte *)puVar15 = (char)*puVar15 + bVar7;
    *(char *)((int)puVar15 + -0x3bffbc12) =
         *(char *)((int)puVar15 + -0x3bffbc12) + (char)iVar17 + '\x01';
    *puVar15 = *puVar15 & (uint)puVar15;
    pcVar3 = (code *)swi(1);
    (*pcVar3)();
    return;
  }
  pcVar25 = (char *)(iVar22 * 0xe + 0x8d0000);
  *pcVar25 = *pcVar25 + (char)puVar15;
  bVar5 = (byte)pbVar14;
  *pbVar14 = *pbVar14 + bVar5;
  *pbVar14 = *pbVar14 + bVar5;
  *pbVar14 = *pbVar14 + bVar5;
  *pbVar14 = *pbVar14 + bVar5;
  *pbVar14 = *pbVar14 + bVar5;
  *pbVar14 = *pbVar14 + bVar5;
  *pbVar14 = *pbVar14 + bVar5;
  *pbVar14 = *pbVar14 + bVar5;
  bVar7 = *pbVar14;
  *pbVar14 = *pbVar14 + bVar5;
  puVar21[-1] = pbVar14;
  uVar23 = puVar21[1];
  uVar19 = puVar21[4];
  pcVar25 = (char *)puVar21[5];
  puVar15 = (uint *)puVar21[6];
  puVar10 = puVar21 + 7;
  bVar8 = (byte)puVar15;
  if (CARRY1(bVar7,bVar5)) {
    *puVar15 = *puVar15 & (uint)puVar15;
    *puVar15 = (uint)(*puVar15 + (int)puVar15);
    *(byte *)puVar15 = (byte)*puVar15 + bVar8;
    puVar10 = puVar21 + 6;
    puVar21[6] = 0x4021;
code_r0x00402139:
    cVar6 = (char)puVar15;
    *(byte *)puVar15 = (byte)*puVar15 + cVar6;
    pcVar25[0x40] = pcVar25[0x40] + (char)((uint)puVar15 >> 8);
    *pcVar25 = *pcVar25 + cVar6;
    *(byte *)puVar15 = (byte)*puVar15 + cVar6;
    *(byte *)((int)puVar15 + 0x21) = *(byte *)((int)puVar15 + 0x21) + (char)((uint)pcVar25 >> 8);
    puVar15 = (uint *)((int)puVar15 + 1);
    *pcVar25 = *pcVar25 + (char)puVar15;
  }
  else {
    puVar1 = (ushort *)((int)puVar15 + 0x75);
    sVar2 = ((ushort)uVar23 & 3) - (*puVar1 & 3);
    *puVar1 = *puVar1 + (ushort)(0 < sVar2) * sVar2;
    if (0 < sVar2) {
      puVar15 = (uint *)((int)puVar15 + 1);
LAB_00402134_3:
      *(byte *)puVar15 = (byte)*puVar15 + (char)puVar15;
      puVar10 = puVar21 + 7;
      goto code_r0x00402139;
    }
    pbVar14 = (byte *)((int)puVar15 + 0x61);
    bVar7 = *pbVar14;
    *pbVar14 = *pbVar14 + (byte)uVar19;
    if (CARRY1(bVar7,(byte)uVar19)) goto LAB_00402134_3;
    puVar1 = (ushort *)((int)puVar15 + 0x75);
    sVar2 = ((ushort)uVar23 & 3) - (*puVar1 & 3);
    *puVar1 = *puVar1 + (ushort)(0 < sVar2) * sVar2;
    if (0 < sVar2) {
      *puVar15 = (uint)(*puVar15 + (int)puVar15);
    }
    else {
      uVar4 = *puVar15;
      *(byte *)puVar15 = (byte)*puVar15 + bVar8;
      puVar21[6] = puVar15;
      uVar29 = puVar21[6];
      uVar26 = puVar21[7];
      uVar24 = puVar21[8];
      uVar23 = puVar21[10];
      uVar19 = puVar21[0xb];
      pcVar25 = (char *)puVar21[0xc];
      puVar15 = (uint *)puVar21[0xd];
      puVar10 = puVar21 + 0xe;
      if (!CARRY1((byte)uVar4,bVar8)) {
        puVar1 = (ushort *)((int)puVar15 + 0x75);
        sVar2 = ((ushort)uVar24 & 3) - (*puVar1 & 3);
        *puVar1 = *puVar1 + (ushort)(0 < sVar2) * sVar2;
        if (0 >= sVar2) {
          *(byte *)puVar15 = (byte)*puVar15 + (char)puVar15;
          *puVar15 = (uint)(*puVar15 + (int)puVar15);
          *puVar15 = (uint)(*puVar15 + (int)puVar15);
          *(uint **)((int)puVar21 + 0x35) = puVar15;
          *(char **)((int)puVar21 + 0x31) = pcVar25;
          *(undefined4 *)((int)puVar21 + 0x2d) = uVar19;
          *(undefined4 *)((int)puVar21 + 0x29) = uVar23;
          *(int *)((int)puVar21 + 0x25) = (int)puVar21 + 0x39;
          *(undefined4 *)((int)puVar21 + 0x21) = uVar24;
          *(undefined4 *)((int)puVar21 + 0x1d) = uVar26;
          *(undefined4 *)((int)puVar21 + 0x19) = uVar29;
          pbVar14 = (byte *)((int)puVar15 + 1);
          *pbVar14 = *pbVar14 + (char)pbVar14;
          *pbVar14 = *pbVar14 + (char)pbVar14;
          *(byte *)(puVar15 + -0x3fef05) = (byte)puVar15[-0x3fef05] + (char)uVar19;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        goto LAB_0040214b;
      }
    }
  }
  *(byte *)puVar15 = (byte)*puVar15 + (char)puVar15;
  *(undefined4 *)((int)puVar10 + -4) = 0x1004021;
  *(byte *)puVar15 = (byte)*puVar15 + (char)puVar15;
LAB_0040214b:
  pbVar14 = (byte *)((int)puVar15 * 2);
  bVar7 = *pbVar14;
  *pbVar14 = *pbVar14 + (byte)pcVar25;
  *(byte *)puVar15 = (byte)*puVar15 + (char)puVar15 + CARRY1(bVar7,(byte)pcVar25);
  *puVar15 = *puVar15 & (uint)puVar15;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- FUN_0040698c @ 0040698c

void FUN_0040698c(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if (DAT_004516c8 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00406995. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_004516c8)();
    return;
  }
  UNRECOVERED_JUMPTABLE = (code *)DllFunctionCall(&PTR_s_shell32_dll_00406974);
                    /* WARNING: Could not recover jumptable at 0x004069a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


// ---- FUN_004069f8 @ 004069f8

void FUN_004069f8(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if (DAT_004516d4 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00406a01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_004516d4)();
    return;
  }
  UNRECOVERED_JUMPTABLE = (code *)DllFunctionCall(&LAB_004069e0);
                    /* WARNING: Could not recover jumptable at 0x00406a0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


// ---- FUN_00406a80 @ 00406a80

void FUN_00406a80(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if (DAT_004516ec != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00406a89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_004516ec)();
    return;
  }
  UNRECOVERED_JUMPTABLE = (code *)DllFunctionCall(&PTR_s_user32_00406a68);
                    /* WARNING: Could not recover jumptable at 0x00406a97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


// ---- FUN_00406b10 @ 00406b10

void FUN_00406b10(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if (DAT_00451704 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00406b19. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_00451704)();
    return;
  }
  UNRECOVERED_JUMPTABLE = (code *)DllFunctionCall(&PTR_s_user32_00406af8);
                    /* WARNING: Could not recover jumptable at 0x00406b27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


// ---- FUN_00406b58 @ 00406b58

void FUN_00406b58(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if (DAT_00451710 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00406b61. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_00451710)();
    return;
  }
  UNRECOVERED_JUMPTABLE = (code *)DllFunctionCall(&PTR_s_user32_00406b40);
                    /* WARNING: Could not recover jumptable at 0x00406b6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


// ---- FUN_00406bc0 @ 00406bc0

void FUN_00406bc0(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if (DAT_0045171c != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00406bc9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_0045171c)();
    return;
  }
  UNRECOVERED_JUMPTABLE = (code *)DllFunctionCall(&PTR_s_user32_00406ba8);
                    /* WARNING: Could not recover jumptable at 0x00406bd7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


// ---- FUN_00406c08 @ 00406c08

void FUN_00406c08(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if (DAT_00451728 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00406c11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_00451728)();
    return;
  }
  UNRECOVERED_JUMPTABLE = (code *)DllFunctionCall(&PTR_s_user32_00406bf0);
                    /* WARNING: Could not recover jumptable at 0x00406c1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


// ---- FUN_00406c50 @ 00406c50

void FUN_00406c50(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if (DAT_00451734 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00406c59. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_00451734)();
    return;
  }
  UNRECOVERED_JUMPTABLE = (code *)DllFunctionCall(&PTR_s_user32_00406c38);
                    /* WARNING: Could not recover jumptable at 0x00406c67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


// ---- FUN_00406ca4 @ 00406ca4

void FUN_00406ca4(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if (DAT_00451740 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00406cad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_00451740)();
    return;
  }
  UNRECOVERED_JUMPTABLE = (code *)DllFunctionCall(&PTR_s_kernel32_00406c8c);
                    /* WARNING: Could not recover jumptable at 0x00406cbb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


// ---- FUN_00406ce8 @ 00406ce8

void FUN_00406ce8(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if (DAT_0045174c != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00406cf1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_0045174c)();
    return;
  }
  UNRECOVERED_JUMPTABLE = (code *)DllFunctionCall(&PTR_s_kernel32_00406cd0);
                    /* WARNING: Could not recover jumptable at 0x00406cff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


// ---- FUN_00407c8c @ 00407c8c

void FUN_00407c8c(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if (DAT_00451760 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00407c95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_00451760)();
    return;
  }
  UNRECOVERED_JUMPTABLE = (code *)DllFunctionCall(&PTR_s_mpr_dll_00407c74);
                    /* WARNING: Could not recover jumptable at 0x00407ca3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


// ---- FUN_00407cdc @ 00407cdc

void FUN_00407cdc(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if (DAT_0045176c != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00407ce5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_0045176c)();
    return;
  }
  UNRECOVERED_JUMPTABLE = (code *)DllFunctionCall(&PTR_s_mpr_dll_00407cc4);
                    /* WARNING: Could not recover jumptable at 0x00407cf3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


// ---- FUN_00407d28 @ 00407d28

void FUN_00407d28(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if (DAT_00451778 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00407d31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_00451778)();
    return;
  }
  UNRECOVERED_JUMPTABLE = (code *)DllFunctionCall(&PTR_s_mpr_dll_00407d10);
                    /* WARNING: Could not recover jumptable at 0x00407d3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


// ---- FUN_0043ee90 @ 0043ee90

void FUN_0043ee90(void)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_68;
  undefined4 local_58;
  undefined4 local_48;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int *local_28;
  int *local_24;
  void *pvStack_20;
  undefined *puStack_1c;
  undefined1 *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  puStack_1c = &DAT_00401ce6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffff28;
  local_14 = &LAB_004011c0;
  local_10 = 0;
  local_c = 0;
  local_24 = (int *)0x0;
  local_28 = (int *)0x0;
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  local_38 = 0;
  local_48 = 0;
  local_58 = 0;
  local_68 = 0;
  local_78 = 0;
  local_88 = 0;
  local_98 = 0;
  local_9c = 0;
  ExceptionList = &pvStack_20;
  __vbaOnError(1);
  if (local_24 == (int *)0x0) {
    __vbaNew2(&DAT_004036b4,&local_24);
  }
  piVar1 = local_24;
  uVar7 = 3;
  piVar6 = local_24;
  iVar2 = (**(code **)(*local_24 + 0x2b0))
                    (local_24,3,local_84,1,local_7c,10,local_94,0x80020004,local_8c);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_00406478,0x2b0);
  }
  if (local_24 == (int *)0x0) {
    __vbaNew2(&DAT_004036b4,&local_24);
  }
  piVar1 = local_24;
  puVar5 = &local_9c;
  piVar4 = local_24;
  iVar2 = (**(code **)(*local_24 + 0x6f8))(local_24,puVar5);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_004064a8,0x6f8);
  }
  if ((short)local_9c == 0) {
    __vbaEnd(piVar4,puVar5,piVar6,uVar7);
  }
  if (DAT_00451750 == (int *)0x0) {
    __vbaNew2(&DAT_00406724,&DAT_00451750);
  }
  piVar1 = DAT_00451750;
  if (local_24 == (int *)0x0) {
    __vbaNew2(&DAT_004036b4,&local_24);
  }
  iVar2 = *piVar1;
  uVar7 = __vbaObjSetAddref(&local_34,local_24);
  iVar2 = (**(code **)(iVar2 + 0x10))(piVar1,uVar7);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_00406714,0x10);
  }
  __vbaFreeObj();
  puVar3 = &DAT_00406db0;
  uVar7 = __vbaNew(&DAT_004051f0);
  uVar7 = __vbaObjSet(&local_34,uVar7);
  uVar7 = __vbaCastObj(uVar7,puVar3);
  __vbaObjSet(&local_28,uVar7);
  __vbaFreeObj();
  if (DAT_00451750 == (int *)0x0) {
    __vbaNew2(&DAT_00406724,&DAT_00451750);
  }
  piVar1 = DAT_00451750;
  iVar2 = *DAT_00451750;
  uVar7 = __vbaObjSetAddref(&local_34,local_28);
  iVar2 = (**(code **)(iVar2 + 0xc))(piVar1,uVar7);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_00406714,0xc);
  }
  __vbaFreeObj();
  iVar2 = (**(code **)(*local_28 + 0x2b0))
                    (local_28,10,local_84,0x80020004,local_7c,10,local_94,0x80020004,local_8c);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_28,&DAT_00406db0,0x2b0);
    __vbaExitProc();
  }
  else {
    __vbaExitProc();
  }
  __vbaFreeObj(&LAB_0043f2c9);
  __vbaFreeObj();
  return;
}


// ---- FUN_0043f2e0 @ 0043f2e0

undefined4 FUN_0043f2e0(int *param_1)

{
  int *piVar1;
  int iVar2;
  void *local_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &DAT_00401ce6;
  local_18 = ExceptionList;
  local_10 = &stack0xffffffcc;
  local_c = &DAT_004011e8;
  local_8 = 0;
  ExceptionList = &local_18;
  (**(code **)(*param_1 + 4))(param_1);
  if (DAT_00451068 == (int *)0x0) {
    __vbaNew2(&DAT_004051f0,&DAT_00451068);
  }
  piVar1 = DAT_00451068;
  iVar2 = (**(code **)(*DAT_00451068 + 0x6fc))(DAT_00451068);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_00406764,0x6fc);
  }
  (**(code **)(*param_1 + 8))(param_1);
  ExceptionList = local_18;
  return local_8;
}


// ---- FUN_0043f380 @ 0043f380

void __cdecl FUN_0043f380(uint param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  int *local_48;
  int *local_44;
  int *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  void *pvStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_00401ce6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff5c;
  local_c = &DAT_004011f0;
  local_8 = param_1 & 1;
  piVar5 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar5 + 4))(piVar5);
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  local_38 = 0;
  local_3c = 0;
  local_40 = (int *)0x0;
  local_44 = (int *)0x0;
  local_48 = (int *)0x0;
  local_4c = 0;
  local_50 = 0;
  local_54 = 0;
  local_58 = 0;
  uVar2 = (**(code **)(*piVar5 + 0x310))(piVar5);
  piVar5 = (int *)__vbaObjSet(&local_4c,uVar2);
  if (DAT_00451750 == (int *)0x0) {
    __vbaNew2(&DAT_00406724,&DAT_00451750);
  }
  piVar1 = DAT_00451750;
  iVar3 = (**(code **)(*DAT_00451750 + 0x14))(DAT_00451750,&local_40);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar1,&DAT_00406714,0x14);
  }
  piVar1 = local_40;
  iVar3 = (**(code **)(*local_40 + 0xb8))(local_40,&local_50);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar1,&DAT_00406dd0,0xb8);
  }
  if (DAT_00451750 == (int *)0x0) {
    __vbaNew2(&DAT_00406724,&DAT_00451750);
  }
  piVar1 = DAT_00451750;
  iVar3 = (**(code **)(*DAT_00451750 + 0x14))(DAT_00451750,&local_44);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar1,&DAT_00406714,0x14);
  }
  piVar1 = local_44;
  iVar3 = (**(code **)(*local_44 + 0xc0))(local_44,&local_54);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar1,&DAT_00406dd0,0xc0);
  }
  if (DAT_00451750 == (int *)0x0) {
    __vbaNew2(&DAT_00406724,&DAT_00451750);
  }
  piVar1 = DAT_00451750;
  iVar3 = (**(code **)(*DAT_00451750 + 0x14))(DAT_00451750,&local_48);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar1,&DAT_00406714,0x14);
  }
  piVar1 = local_48;
  iVar3 = (**(code **)(*local_48 + 200))(local_48,&local_58);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar1,&DAT_00406dd0,200);
  }
  iVar3 = *piVar5;
  __vbaStrCat(&DAT_00406f60,L"Version ");
  uVar2 = __vbaStrMove();
  __vbaStrI2(local_50);
  uVar4 = __vbaStrMove(uVar2);
  __vbaStrCat(uVar4,uVar2);
  uVar2 = __vbaStrMove();
  __vbaStrCat(&DAT_00406f68,uVar2);
  uVar2 = __vbaStrMove();
  __vbaStrI2(local_54);
  uVar4 = __vbaStrMove(uVar2);
  __vbaStrCat(uVar4,uVar2);
  uVar2 = __vbaStrMove();
  __vbaStrCat(L", revision ",uVar2);
  uVar2 = __vbaStrMove();
  __vbaStrI2(local_58);
  uVar4 = __vbaStrMove(uVar2);
  __vbaStrCat(uVar4,uVar2);
  uVar2 = __vbaStrMove();
  iVar3 = (**(code **)(iVar3 + 0x54))(piVar5,uVar2);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar5,&DAT_00406e74,0x54);
  }
  __vbaFreeStrList(9,&local_1c,&local_20,&local_24,&local_28,&local_2c,&local_30,&local_34,&local_38
                   ,&local_3c);
  __vbaFreeObjList(4,&local_40,&local_44,&local_48,&local_4c);
  return;
}


// ---- FUN_0043f6c0 @ 0043f6c0

void __cdecl FUN_0043f6c0(uint param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_1c;
  void *pvStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_00401ce6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc4;
  local_c = &DAT_00401200;
  local_8 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar4 + 4))(piVar4);
  local_1c = 0;
  if (DAT_00451750 == (int *)0x0) {
    __vbaNew2(&DAT_00406724,&DAT_00451750);
  }
  piVar1 = DAT_00451750;
  iVar3 = *DAT_00451750;
  uVar2 = __vbaObjSetAddref(&local_1c,piVar4);
  iVar3 = (**(code **)(iVar3 + 0x10))(piVar1,uVar2);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar1,&DAT_00406714,0x10);
  }
  __vbaFreeObj();
  return;
}


// ---- FUN_0043f790 @ 0043f790

void __cdecl FUN_0043f790(uint param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_3c [4];
  int *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  void *pvStack_20;
  undefined *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  uint local_10;
  undefined4 local_c;
  
  puStack_1c = &DAT_00401ce6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffff34;
  local_14 = &DAT_00401210;
  local_10 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  local_c = 0;
  ExceptionList = &pvStack_20;
  (**(code **)(*piVar4 + 4))(piVar4);
  local_24 = 0;
  local_28 = 0;
  local_2c = (int *)0x0;
  local_3c[0] = 0;
  __vbaOnError(1);
  *(undefined2 *)((int)piVar4 + 0x36) = 1;
  rtcGetSetting(L"Parachute",L"User",L"LastUser",8,local_78,&DAT_00407128,local_70);
  __vbaStrMove();
  uVar1 = (**(code **)(*piVar4 + 0x308))(piVar4);
  piVar2 = (int *)__vbaObjSet(&local_2c,uVar1);
  iVar3 = (**(code **)(*piVar2 + 0xa4))(piVar2,DAT_00451024);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_0040712c,0xa4);
  }
  __vbaFreeObj();
  uVar1 = (**(code **)(*piVar4 + 0x308))(piVar4);
  piVar2 = (int *)__vbaObjSet(&local_2c,uVar1);
  iVar3 = (**(code **)(*piVar2 + 0xa0))(piVar2,&local_28);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_0040712c,0xa0);
  }
  iVar3 = __vbaStrCmp(&DAT_00407128,local_28);
  __vbaFreeStr();
  __vbaFreeObj();
  if (iVar3 == 0) {
    uVar1 = (**(code **)(*piVar4 + 0x308))(piVar4);
    piVar2 = (int *)__vbaObjSet(&local_2c,uVar1);
    iVar3 = (**(code **)(*piVar2 + 0xdc))(piVar2,0);
  }
  else {
    uVar1 = (**(code **)(*piVar4 + 0x304))();
    piVar2 = (int *)__vbaObjSet(&local_2c,uVar1);
    iVar3 = (**(code **)(*piVar2 + 0xdc))(piVar2,0);
  }
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_0040712c,0xdc);
  }
  __vbaFreeObj();
  uVar5 = 0;
  uVar1 = (**(code **)(*piVar4 + 0x314))(piVar4,0x4e,0);
  uVar1 = __vbaObjSet(&local_2c,uVar1);
  uVar1 = __vbaLateIdCallLd(local_3c,uVar1);
  __vbaStrVarMove(uVar1);
  __vbaStrMove();
  __vbaFreeObj();
  __vbaFreeVar(uVar5);
  rtcRightCharBstr(local_24,1);
  uVar1 = __vbaStrMove();
  iVar3 = __vbaStrCmp(&DAT_00407140,uVar1);
  __vbaFreeStr();
  if (iVar3 != 0) {
    __vbaStrCat(&DAT_00407140,local_24);
    __vbaStrMove();
  }
  if (DAT_00451750 == (int *)0x0) {
    __vbaNew2(&DAT_00406724,&DAT_00451750);
  }
  piVar2 = DAT_00451750;
  iVar3 = (**(code **)(*DAT_00451750 + 0x14))(DAT_00451750,&local_2c);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406714,0x14);
  }
  piVar2 = local_2c;
  iVar3 = *local_2c;
  __vbaStrCat(L"Help\\English\\Parachute.hlp",local_24);
  uVar1 = __vbaStrMove();
  iVar3 = (**(code **)(iVar3 + 0x134))(piVar2,uVar1);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406dd0,0x134);
  }
  __vbaFreeStr();
  __vbaFreeObj();
  __vbaExitProc();
  __vbaFreeStr(&LAB_0043fb6b);
  return;
}


// ---- FUN_0043fb90 @ 0043fb90

undefined4 FUN_0043fb90(uint param_1)

{
  int iVar1;
  int *piVar2;
  void *local_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_00401ce6;
  local_18 = ExceptionList;
  local_10 = &stack0xffffffd0;
  local_c = &DAT_00401238;
  local_8 = param_1 & 1;
  piVar2 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &local_18;
  (**(code **)(*piVar2 + 4))(piVar2);
  *(undefined2 *)(piVar2 + 0xd) = 0;
  iVar1 = (**(code **)(*piVar2 + 0x2b4))(piVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar2,&DAT_00406478,0x2b4);
  }
  local_8 = 0;
  (**(code **)(*piVar2 + 8))(piVar2);
  ExceptionList = local_18;
  return local_8;
}


// ---- FUN_0043fc20 @ 0043fc20

void __cdecl FUN_0043fc20(uint param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 local_28;
  undefined4 local_24;
  void *pvStack_20;
  undefined *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  uint local_10;
  undefined4 local_c;
  
  puStack_1c = &DAT_00401ce6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffff40;
  local_14 = &DAT_00401240;
  local_10 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  local_c = 0;
  ExceptionList = &pvStack_20;
  (**(code **)(*piVar4 + 4))(piVar4);
  local_24 = 0;
  local_28 = 0;
  __vbaOnError(1);
  uVar1 = (**(code **)(*piVar4 + 0x308))(piVar4);
  piVar2 = (int *)__vbaObjSet(&local_28,uVar1);
  puVar6 = &local_24;
  piVar5 = piVar2;
  iVar3 = (**(code **)(*piVar2 + 0xa0))(piVar2,puVar6);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_0040712c,0xa0);
  }
  __vbaStrCopy(piVar5,puVar6);
  __vbaFreeStr();
  __vbaFreeObj();
  uVar1 = (**(code **)(*piVar4 + 0x304))(piVar4);
  piVar2 = (int *)__vbaObjSet(&local_28,uVar1);
  puVar6 = &local_24;
  piVar5 = piVar2;
  iVar3 = (**(code **)(*piVar2 + 0xa0))(piVar2,puVar6);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_0040712c,0xa0);
  }
  __vbaStrCopy(piVar5,puVar6);
  __vbaFreeStr();
  __vbaFreeObj();
  (**(code **)(*piVar4 + 0x70c))(piVar4);
  __vbaExitProc();
  return;
}


// ---- FUN_0043fe50 @ 0043fe50

void __cdecl FUN_0043fe50(int *param_1)

{
  undefined2 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  code *pcVar7;
  int iStack_134;
  int *piStack_130;
  int *piStack_12c;
  int iStack_128;
  undefined4 *puStack_124;
  undefined4 uStack_120;
  int *piStack_11c;
  undefined4 uStack_118;
  int iStack_114;
  int *local_110;
  int *local_10c;
  int *local_108;
  wchar_t *local_104;
  int *local_f4;
  int local_a0;
  undefined4 *local_98;
  undefined4 local_94 [2];
  wchar_t *local_8c;
  undefined4 local_84;
  undefined4 local_7c;
  undefined4 local_74;
  undefined4 local_6c;
  undefined4 local_64;
  undefined4 local_5c;
  undefined4 local_54 [2];
  undefined4 local_4c;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  wchar_t local_34 [8];
  undefined4 local_24;
  void *pvStack_20;
  undefined *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  puStack_1c = &DAT_00401ce6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffff00;
  local_14 = &DAT_00401268;
  local_10 = 0;
  local_c = 0;
  local_24 = 0;
  local_34[6] = L'\0';
  local_34[7] = L'\0';
  local_34[4] = L'\0';
  local_34[5] = L'\0';
  local_34[2] = L'\0';
  local_34[3] = L'\0';
  local_34[0] = L'\0';
  local_34[1] = L'\0';
  local_3c = 0;
  local_40 = 0;
  local_44 = 0;
  local_54[0] = 0;
  local_64 = 0;
  local_74 = 0;
  local_84 = 0;
  local_94[0] = 0;
  local_104 = (wchar_t *)0x1;
  local_108 = (int *)0x43febc;
  ExceptionList = &pvStack_20;
  __vbaOnError();
  if (3 < *(short *)((int)param_1 + 0x36)) {
    local_104 = L"ၪᗿဘ@킋䶍ￔ瀕䀑먀牰@䶍ￜ맗\x04耂䶉뢨\n";
    __vbaStrCopy();
    __vbaStrI4();
    __vbaStrMove();
    __vbaStrCopy();
    local_5c = 0x80020004;
    local_64 = 10;
    local_4c = 0x80020004;
    local_54[0] = 10;
    local_8c = local_34 + 6;
    local_94[0] = 0x4008;
    local_104 = (wchar_t *)0x43ff49;
    __vbaI4Str();
    local_104 = (wchar_t *)local_94;
    local_108 = (undefined4 *)0x43ff57;
    iVar2 = rtcMsgBox();
    __vbaFreeVarList();
    pcVar7 = __vbaObjSet_exref;
    if (iVar2 == 1) {
      __vbaEnd();
      pcVar7 = __vbaObjSet_exref;
    }
    goto switchD_00440127_default;
  }
  local_104 = L"嚋贸\xe04d\xd7ff䖍觐碅\xffff뿿䀈";
  __vbaStrCopy();
  __vbaStrCopy();
  local_8c = local_34;
  local_94[0] = 0x4008;
  local_108 = &local_24;
  local_110 = (int *)0x4008;
  local_10c = (int *)local_a0;
  local_104 = (wchar_t *)local_98;
  iStack_114 = 2;
  uStack_118 = 0x58;
  piStack_11c = param_1;
  uStack_120 = 0x4400dc;
  uStack_120 = (**(code **)(*param_1 + 0x314))();
  pcVar7 = __vbaObjSet_exref;
  puStack_124 = &local_40;
  iStack_128 = 0x4400e9;
  uStack_120 = __vbaObjSet();
  puStack_124 = local_54;
  iStack_128 = 0x4400f4;
  __vbaLateIdCallLd();
  __vbaI4Var();
  uVar1 = __vbaI2I4();
  __vbaFreeObj();
  __vbaFreeVar();
  switch(uVar1) {
  case 0:
    local_7c = 0x80020004;
    local_84 = 10;
    local_6c = 0x80020004;
    local_74 = 10;
    __vbaStrI2();
    __vbaStrMove();
    local_5c = __vbaStrCat();
    local_64 = 8;
    local_8c = L"Invalid User Name or Password, try again!";
    local_94[0] = 8;
    __vbaVarDup();
    rtcMsgBox();
    __vbaFreeStr();
    __vbaFreeVarList();
    (**(code **)(*param_1 + 0x304))();
    piVar3 = (int *)__vbaObjSet();
    iVar2 = (**(code **)(*piVar3 + 0x204))();
    if (iVar2 < 0) {
      __vbaHresultCheckObj();
    }
    __vbaFreeObj();
    (**(code **)(*param_1 + 0x304))();
    local_f4 = (int *)__vbaObjSet();
    puVar4 = (undefined4 *)(**(code **)(*local_f4 + 0x114))();
    if ((int)puVar4 < 0) {
      local_108 = (undefined4 *)0x4402bc;
      local_104 = (wchar_t *)puVar4;
      __vbaHresultCheckObj();
    }
    __vbaFreeObj();
    (**(code **)(*param_1 + 0x304))();
    local_104 = (wchar_t *)0x4402d5;
    piVar3 = (int *)__vbaObjSet();
    (**(code **)(*param_1 + 0x304))();
    local_104 = (wchar_t *)&local_40;
    local_108 = (int *)0x4402e7;
    piVar5 = (int *)__vbaObjSet();
    local_108 = (int *)0x4402f6;
    local_104 = (wchar_t *)piVar5;
    iVar2 = (**(code **)(*piVar5 + 0xa0))();
    if (iVar2 < 0) {
      local_108 = (int *)0xa0;
      local_10c = (int *)&DAT_0040712c;
      uStack_118 = 0x44030e;
      iStack_114 = iVar2;
      local_110 = piVar5;
      __vbaHresultCheckObj();
    }
    iVar2 = *piVar3;
    local_108 = (int *)local_3c;
    local_10c = (int *)0x44031a;
    local_108 = (int *)__vbaLenBstr();
    local_110 = (int *)0x440322;
    local_10c = piVar3;
    piVar5 = (int *)(**(code **)(iVar2 + 0x11c))();
    if ((int)piVar5 < 0) {
      local_104 = L"仡㎭暙ᇏಷꨀ怀鏓\x02";
      local_110 = (int *)0x44033a;
      local_10c = piVar5;
      local_108 = piVar3;
      __vbaHresultCheckObj();
    }
    __vbaFreeStr();
    local_104 = (wchar_t *)&local_40;
    local_108 = (int *)0x2;
    local_10c = (int *)0x440353;
    __vbaFreeObjList();
    if (SCARRY2(*(short *)((int)param_1 + 0x36),1)) {
LAB_00440694:
      __vbaErrorOverflow();
      local_10c = (int *)&DAT_00401ce6;
      local_110 = ExceptionList;
      piStack_130 = param_1;
      local_108 = &iStack_134;
      local_104 = L"\x05\bܽD";
      local_f4 = (int *)((uint)local_f4 & 0xfffffffe);
      ExceptionList = &local_110;
      iStack_134 = iVar2;
      piStack_12c = piVar3;
      (**(code **)(*local_f4 + 4))(local_f4);
      iStack_114 = 0;
      if (DAT_00451750 == (int *)0x0) {
        __vbaNew2(&DAT_00406724,&DAT_00451750);
      }
      piVar3 = DAT_00451750;
      iStack_128 = *DAT_00451750;
      uVar6 = __vbaObjSetAddref(&iStack_114,local_f4);
      iVar2 = (**(code **)(iStack_128 + 0x10))(piVar3,uVar6);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,piVar3,&DAT_00406714,0x10);
      }
      __vbaFreeObj();
      return;
    }
    *(short *)((int)param_1 + 0x36) = *(short *)((int)param_1 + 0x36) + 1;
    __vbaExitProc();
    goto LAB_0044064a;
  case 1:
    local_7c = 0x80020004;
    local_84 = 10;
    local_6c = 0x80020004;
    local_74 = 10;
    __vbaStrI2();
    __vbaStrMove();
    local_5c = __vbaStrCat();
    local_64 = 8;
    local_8c = L"This LEO User is not not authorized to access this utility.";
    local_94[0] = 8;
    __vbaVarDup();
    rtcMsgBox();
    __vbaFreeStr();
    __vbaFreeVarList();
    (**(code **)(*param_1 + 0x304))();
    piVar3 = (int *)__vbaObjSet();
    iVar2 = (**(code **)(*piVar3 + 0x204))();
    if (iVar2 < 0) {
      __vbaHresultCheckObj();
    }
    __vbaFreeObj();
    (**(code **)(*param_1 + 0x304))();
    local_f4 = (int *)__vbaObjSet();
    puVar4 = (undefined4 *)(**(code **)(*local_f4 + 0x114))();
    if ((int)puVar4 < 0) {
      local_108 = (undefined4 *)0x440487;
      local_104 = (wchar_t *)puVar4;
      __vbaHresultCheckObj();
    }
    __vbaFreeObj();
    (**(code **)(*param_1 + 0x304))();
    local_104 = (wchar_t *)0x4404a0;
    piVar3 = (int *)__vbaObjSet();
    (**(code **)(*param_1 + 0x304))();
    local_104 = (wchar_t *)&local_40;
    local_108 = (int *)0x4404b2;
    piVar5 = (int *)__vbaObjSet();
    local_108 = (int *)0x4404c1;
    local_104 = (wchar_t *)piVar5;
    iVar2 = (**(code **)(*piVar5 + 0xa0))();
    if (iVar2 < 0) {
      local_108 = (int *)0xa0;
      local_10c = (int *)&DAT_0040712c;
      uStack_118 = 0x4404d9;
      iStack_114 = iVar2;
      local_110 = piVar5;
      __vbaHresultCheckObj();
    }
    iVar2 = *piVar3;
    local_108 = (int *)local_3c;
    local_10c = (int *)0x4404e5;
    local_108 = (int *)__vbaLenBstr();
    local_110 = (int *)0x4404ed;
    local_10c = piVar3;
    piVar5 = (int *)(**(code **)(iVar2 + 0x11c))();
    if ((int)piVar5 < 0) {
      local_104 = L"仡㎭暙ᇏಷꨀ怀鏓\x02";
      local_110 = (int *)0x440505;
      local_10c = piVar5;
      local_108 = piVar3;
      __vbaHresultCheckObj();
    }
    __vbaFreeStr();
    local_104 = (wchar_t *)&local_40;
    local_108 = (int *)0x2;
    local_10c = (int *)0x44051e;
    __vbaFreeObjList();
    if (SCARRY2(*(short *)((int)param_1 + 0x36),1)) goto LAB_00440694;
    *(short *)((int)param_1 + 0x36) = *(short *)((int)param_1 + 0x36) + 1;
    __vbaExitProc();
    goto LAB_0044064a;
  case 2:
  case 3:
    *(undefined2 *)(param_1 + 0xd) = 0xffff;
    break;
  case 0xffff:
    local_7c = 0x80020004;
    local_84 = 10;
    local_6c = 0x80020004;
    local_74 = 10;
    local_5c = 0x80020004;
    local_64 = 10;
    local_8c = L"There was an error accessing the LEO database.";
    local_94[0] = 8;
    __vbaVarDup();
    local_104 = (wchar_t *)local_54;
    local_108 = (int *)0x440185;
    rtcMsgBox();
    local_104 = (wchar_t *)0x4;
    local_108 = (undefined4 *)0x44019d;
    __vbaFreeVarList();
    __vbaEnd();
  }
switchD_00440127_default:
  (**(code **)(*param_1 + 0x308))();
  piVar3 = (int *)(*pcVar7)();
  puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0xa0))();
  if ((int)puVar4 < 0) {
    local_108 = (undefined4 *)0x43ffbc;
    local_104 = (wchar_t *)puVar4;
    __vbaHresultCheckObj();
  }
  local_3c = 0;
  __vbaStrMove();
  __vbaFreeObj();
  local_104 = L"Parachute";
  local_108 = (int *)0x43fff2;
  rtcSaveSetting();
  if (DAT_00451750 == (int *)0x0) {
    __vbaNew2();
  }
  piVar3 = DAT_00451750;
  iVar2 = *DAT_00451750;
  __vbaObjSetAddref();
  iVar2 = (**(code **)(iVar2 + 0x10))();
  if (iVar2 < 0) {
    local_104 = L"㴢ﳻꃺၨ㢧\b㌫땱\x02";
    local_108 = piVar3;
    local_110 = (int *)0x440043;
    local_10c = (int *)iVar2;
    __vbaHresultCheckObj();
  }
  __vbaFreeObj();
  __vbaExitProc();
LAB_0044064a:
  local_104 = (wchar_t *)0x440655;
  __vbaFreeStr();
  local_104 = L"䶍￘跖푍훿䶍￐쏖쀳䶋擤ඉ";
  __vbaFreeStr();
  local_104 = L"䶍ￔ跖큍훿㏃诀\xe44d襤\r";
  __vbaFreeStr();
  local_104 = L"䶍￐쏖쀳䶋擤ඉ";
  __vbaFreeStr();
  local_104 = L"㏃诀\xe44d襤\r";
  __vbaFreeStr();
  return;
}


// ---- FUN_004406a0 @ 004406a0

void __cdecl FUN_004406a0(uint param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_1c;
  void *pvStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_00401ce6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc4;
  local_c = &DAT_00401290;
  local_8 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar4 + 4))(piVar4);
  local_1c = 0;
  if (DAT_00451750 == (int *)0x0) {
    __vbaNew2(&DAT_00406724,&DAT_00451750);
  }
  piVar1 = DAT_00451750;
  iVar3 = *DAT_00451750;
  uVar2 = __vbaObjSetAddref(&local_1c,piVar4);
  iVar3 = (**(code **)(iVar3 + 0x10))(piVar1,uVar2);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar1,&DAT_00406714,0x10);
  }
  __vbaFreeObj();
  return;
}


// ---- FUN_00440770 @ 00440770

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00440770(uint param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_28;
  undefined4 local_24;
  void *pvStack_20;
  undefined *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  uint local_10;
  undefined4 local_c;
  
  puStack_1c = &DAT_00401ce6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffff38;
  local_14 = &DAT_004012a0;
  local_10 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  local_c = 0;
  ExceptionList = &pvStack_20;
  (**(code **)(*piVar4 + 4))(piVar4);
  local_24 = 0;
  local_28 = 0;
  __vbaOnError(1);
  uVar1 = (**(code **)(*piVar4 + 0x308))(piVar4);
  piVar2 = (int *)__vbaObjSet(&local_28,uVar1);
  iVar3 = (**(code **)(*piVar2 + 0xa0))(piVar2,&local_24);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_0040712c,0xa0);
  }
  local_24 = 0;
  __vbaStrMove();
  __vbaFreeObj();
  iVar3 = __vbaStrCmp(&DAT_00407128,DAT_0045103c);
  if (0 < iVar3) {
    _DAT_00451014 = 0xffff;
  }
  if (DAT_00451750 == (int *)0x0) {
    __vbaNew2(&DAT_00406724,&DAT_00451750);
  }
  piVar2 = DAT_00451750;
  iVar3 = *DAT_00451750;
  uVar1 = __vbaObjSetAddref(&local_28,piVar4);
  iVar3 = (**(code **)(iVar3 + 0x10))(piVar2,uVar1);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406714,0x10);
  }
  __vbaFreeObj();
  __vbaExitProc();
  return;
}


// ---- FUN_004409b0 @ 004409b0

void __cdecl FUN_004409b0(uint param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 local_78 [2];
  undefined4 *local_70;
  undefined4 local_68;
  undefined4 local_58;
  undefined4 local_48;
  undefined4 local_38 [4];
  undefined4 local_28;
  undefined4 local_24;
  void *pvStack_20;
  undefined *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  uint local_10;
  undefined4 local_c;
  
  puStack_1c = &DAT_00401ce6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffff40;
  local_14 = &DAT_004012c8;
  local_10 = param_1 & 1;
  piVar5 = (int *)(param_1 & 0xfffffffe);
  local_c = 0;
  ExceptionList = &pvStack_20;
  piVar4 = piVar5;
  (**(code **)(*piVar5 + 4))(piVar5);
  local_24 = 0;
  local_28 = 0;
  local_38[0] = 0;
  local_48 = 0;
  local_58 = 0;
  local_68 = 0;
  local_78[0] = 0;
  __vbaOnError(1);
  local_70 = &DAT_00451024;
  local_78[0] = 0x4008;
  rtcStrConvVar2(local_38,local_78,3,0);
  __vbaStrVarMove(local_38);
  __vbaStrMove();
  __vbaFreeVar(piVar4);
  uVar1 = (**(code **)(*piVar5 + 0x30c))(piVar5);
  piVar2 = (int *)__vbaObjSet(&local_28,uVar1);
  rtcGetDateVar(local_38);
  iVar3 = *piVar2;
  uVar1 = __vbaStrVarVal(&local_24,local_38);
  piVar4 = piVar2;
  iVar3 = (**(code **)(iVar3 + 0xa4))(piVar2,uVar1);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_0040712c,0xa4);
  }
  __vbaFreeStr();
  __vbaFreeObj();
  __vbaFreeVar(piVar4);
  uVar1 = (**(code **)(*piVar5 + 0x2fc))(piVar5);
  piVar4 = (int *)__vbaObjSet(&local_28,uVar1);
  iVar3 = (**(code **)(*piVar4 + 0xa4))(piVar4,DAT_00451024);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar4,&DAT_0040712c,0xa4);
  }
  __vbaFreeObj();
  __vbaExitProc();
  return;
}


// ---- FUN_00440c20 @ 00440c20

undefined4 FUN_00440c20(uint param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 local_1c;
  void *local_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_00401ce6;
  local_18 = ExceptionList;
  local_10 = &stack0xffffffc8;
  local_c = &DAT_004012f0;
  local_8 = param_1 & 1;
  piVar3 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &local_18;
  (**(code **)(*piVar3 + 4))(piVar3);
  local_1c = 0;
  iVar2 = (**(code **)(*piVar3 + 0x58))(piVar3,&local_1c);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar3,&DAT_00407630,0x58);
  }
  uVar10 = 3;
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = 0xffffffff;
  uVar4 = local_1c;
  FUN_00406c08();
  __vbaSetSystemError(uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10);
  if (DAT_00451068 == (int *)0x0) {
    __vbaNew2(&DAT_004051f0,&DAT_00451068);
  }
  piVar1 = DAT_00451068;
  iVar2 = (**(code **)(*DAT_00451068 + 0x2b4))(DAT_00451068);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_00406734,0x2b4);
  }
  local_8 = 0;
  (**(code **)(*piVar3 + 8))(piVar3);
  ExceptionList = local_18;
  return local_8;
}


// ---- FUN_00440d00 @ 00440d00

void __cdecl FUN_00440d00(uint param_1)

{
  code *pcVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  code *pcVar5;
  int *piVar6;
  int iStack_118;
  int *piStack_114;
  code *pcStack_110;
  int iStack_10c;
  undefined4 *puStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  int iStack_f8;
  int *piStack_f4;
  int *piStack_f0;
  int *piStack_ec;
  wchar_t *pwStack_e8;
  int *piStack_e4;
  int *piStack_e0;
  undefined4 *puStack_dc;
  int *piStack_d8;
  int local_84;
  int *local_80;
  undefined4 *local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_64;
  undefined4 local_54 [4];
  undefined4 local_44 [4];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  void *pvStack_20;
  undefined *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  uint local_10;
  undefined4 local_c;
  
  puStack_1c = &DAT_00401ce6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffff2c;
  local_14 = &DAT_004012f8;
  local_10 = param_1 & 1;
  piStack_d8 = (int *)(param_1 & 0xfffffffe);
  local_c = 0;
  puStack_dc = (undefined4 *)0x440d47;
  ExceptionList = &pvStack_20;
  (**(code **)(*piStack_d8 + 4))();
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  local_44[0] = 0;
  local_54[0] = 0;
  local_64 = 0;
  local_74 = 0;
  local_84 = 0;
  puStack_dc = (undefined4 *)0x1;
  piStack_e0 = (int *)0x440d6d;
  __vbaOnError();
  pcVar5 = __vbaNew2_exref;
  if (DAT_00451750 == (int *)0x0) {
    puStack_dc = &DAT_00451750;
    piStack_e0 = (int *)&DAT_00406724;
    piStack_e4 = (int *)0x440d87;
    __vbaNew2();
  }
  piVar6 = DAT_00451750;
  puStack_dc = &local_30;
  piStack_e0 = DAT_00451750;
  piStack_e4 = (int *)0x440d9f;
  piStack_f0 = (int *)(**(code **)(*DAT_00451750 + 0x28))();
  pcVar1 = __vbaHresultCheckObj_exref;
  if ((int)piStack_f0 < 0) {
    piStack_e4 = (int *)0x28;
    pwStack_e8 = L"㴢ﳻꃺၨ㢧\b㌫땱\x02";
    piStack_ec = piVar6;
    piStack_f4 = (int *)0x440db6;
    __vbaHresultCheckObj();
  }
  local_7c = (undefined4 *)0x1;
  local_84 = 2;
  piStack_e4 = (int *)0x0;
  pwStack_e8 = L"Count";
  piStack_ec = (int *)local_30;
  piStack_f0 = local_44;
  piStack_f4 = (int *)0x440de1;
  piStack_e4 = (int *)__vbaLateMemCallLd();
  pwStack_e8 = (wchar_t *)&local_84;
  piStack_ec = local_54;
  piStack_f0 = (int *)0x440df3;
  piStack_e4 = (int *)__vbaVarSub();
  pwStack_e8 = L"䖉跠푍ᗿᆌ@䶍￀―䀐謀\xe045ƹ";
  local_24 = __vbaI2Var();
  pwStack_e8 = L"䶍￀―䀐謀\xe045ƹ";
  __vbaFreeObj();
  pwStack_e8 = L"䖋맠\x01";
  __vbaFreeVar();
  uVar3 = local_24;
  do {
    local_24 = uVar3;
    if ((short)local_24 < 1) {
      piStack_e4 = (int *)0x440f16;
      __vbaEnd();
      if (DAT_00451750 == (int *)0x0) {
        piStack_d8 = (int *)&DAT_00406724;
        puStack_dc = (undefined4 *)0x440f2b;
        (*pcVar5)();
      }
      piVar6 = DAT_00451750;
      iVar4 = *DAT_00451750;
      piStack_d8 = &local_30;
      puStack_dc = (undefined4 *)0x440f41;
      __vbaObjSetAddref();
      piStack_d8 = piVar6;
      puStack_dc = (undefined4 *)0x440f46;
      iVar4 = (**(code **)(iVar4 + 0x10))();
      if (iVar4 < 0) {
        puStack_dc = (undefined4 *)0x10;
        piStack_e0 = (int *)&DAT_00406714;
        piStack_e4 = piVar6;
        piStack_ec = (undefined4 *)0x440f57;
        pwStack_e8 = (wchar_t *)iVar4;
        __vbaHresultCheckObj();
      }
      puStack_dc = (undefined4 *)0x440f60;
      __vbaFreeObj();
      puStack_dc = (undefined4 *)0x44108d;
      __vbaExitProc();
      return;
    }
    if (DAT_00451750 == (int *)0x0) {
      piStack_e4 = (int *)&DAT_00451750;
      pwStack_e8 = L"\x02";
      piStack_ec = (int *)0x440e35;
      (*pcVar5)();
    }
    piVar6 = DAT_00451750;
    local_7c = &local_24;
    local_84 = 0x4002;
    if (DAT_00451750 == (int *)0x0) {
      piStack_e4 = (int *)&DAT_00451750;
      pwStack_e8 = L"\x02";
      piStack_ec = (int *)0x440e5d;
      (*pcVar5)();
    }
    piVar2 = DAT_00451750;
    piStack_e4 = &local_30;
    pwStack_e8 = (wchar_t *)DAT_00451750;
    piStack_ec = (int *)0x440e6d;
    iStack_f8 = (**(code **)(*DAT_00451750 + 0x28))();
    if (iStack_f8 < 0) {
      piStack_ec = (int *)0x28;
      piStack_f0 = (int *)&DAT_00406714;
      piStack_f4 = piVar2;
      uStack_fc = 0x440e7e;
      __vbaHresultCheckObj();
    }
    iVar4 = *piVar6;
    iStack_f8 = local_84;
    piStack_f4 = local_80;
    piStack_f0 = local_7c;
    piStack_ec = (int *)local_78;
    uStack_fc = 1;
    uStack_100 = 0;
    uStack_104 = local_30;
    puStack_108 = local_44;
    iStack_10c = 0x440eae;
    piStack_ec = (int *)__vbaLateIdCallLd();
    piStack_f0 = (int *)0x440eb8;
    piStack_ec = (int *)__vbaObjVar();
    piStack_f0 = &local_34;
    piStack_f4 = (int *)0x440ec3;
    piStack_ec = (int *)__vbaObjSetAddref();
    piStack_f0 = piVar6;
    piStack_f4 = (int *)0x440ec8;
    piStack_f4 = (int *)(**(code **)(iVar4 + 0x10))();
    if ((int)piStack_f4 < 0) {
      pwStack_e8 = (wchar_t *)0x10;
      piStack_ec = (int *)&DAT_00406714;
      piStack_f0 = piVar6;
      iStack_f8 = 0x440ed9;
      __vbaHresultCheckObj();
    }
    pwStack_e8 = (wchar_t *)&local_34;
    piStack_ec = &local_30;
    piStack_f0 = (int *)0x2;
    piStack_f4 = (int *)0x440ee9;
    __vbaFreeObjList();
    pwStack_e8 = (wchar_t *)0x440ef5;
    __vbaFreeVar();
    pcVar5 = __vbaNew2_exref;
    uVar3 = CONCAT22(0xffff,(short)local_24 + -1);
  } while (!SCARRY2((short)local_24,-1));
  piStack_e4 = (int *)0x4410f6;
  __vbaErrorOverflow();
  piStack_f0 = (int *)&DAT_00401ce6;
  piStack_f4 = ExceptionList;
  pcStack_110 = pcVar1;
  piStack_114 = piVar6;
  piStack_ec = &iStack_118;
  pwStack_e8 = L"\x05\bᆝD";
  piStack_e4 = (int *)((uint)piStack_d8 & 1);
  piVar6 = (int *)((uint)piStack_d8 & 0xfffffffe);
  ExceptionList = &piStack_f4;
  iStack_118 = iVar4;
  piStack_e0 = (int *)&stack0xfffffffc;
  piStack_d8 = piVar6;
  (**(code **)(*piVar6 + 4))(piVar6);
  iStack_f8 = 0;
  if (DAT_00451750 == (int *)0x0) {
    __vbaNew2(&DAT_00406724,&DAT_00451750);
  }
  piVar2 = DAT_00451750;
  iStack_10c = *DAT_00451750;
  uVar3 = __vbaObjSetAddref(&iStack_f8,piVar6);
  iVar4 = (**(code **)(iStack_10c + 0x10))(piVar2,uVar3);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar2,&DAT_00406714,0x10);
  }
  __vbaFreeObj();
  return;
}


// ---- FUN_00441100 @ 00441100

void __cdecl FUN_00441100(uint param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_1c;
  void *pvStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_00401ce6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc4;
  local_c = &DAT_00401320;
  local_8 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar4 + 4))(piVar4);
  local_1c = 0;
  if (DAT_00451750 == (int *)0x0) {
    __vbaNew2(&DAT_00406724,&DAT_00451750);
  }
  piVar1 = DAT_00451750;
  iVar3 = *DAT_00451750;
  uVar2 = __vbaObjSetAddref(&local_1c,piVar4);
  iVar3 = (**(code **)(iVar3 + 0x10))(piVar1,uVar2);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar1,&DAT_00406714,0x10);
  }
  __vbaFreeObj();
  return;
}


// ---- FUN_004411d0 @ 004411d0

void __cdecl FUN_004411d0(uint param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  undefined4 uVar16;
  undefined *puVar17;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 local_44 [4];
  undefined4 local_34;
  int *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  void *pvStack_20;
  undefined *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  uint local_10;
  undefined4 local_c;
  
  puStack_1c = &DAT_00401ce6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffff30;
  local_14 = &DAT_00401330;
  local_10 = param_1 & 1;
  piVar5 = (int *)(param_1 & 0xfffffffe);
  local_c = 0;
  ExceptionList = &pvStack_20;
  piVar3 = piVar5;
  (**(code **)(*piVar5 + 4))(piVar5);
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_30 = (int *)0x0;
  local_34 = 0;
  local_44[0] = 0;
  __vbaOnError(1);
  uVar11 = 0x4008;
  puVar15 = &DAT_00451024;
  uVar9 = 0x68030000;
  piVar6 = piVar5;
  uVar2 = local_80;
  uVar13 = local_78;
  uVar1 = (**(code **)(*piVar5 + 0x354))(piVar5,0x68030000,0x4008,local_80,&DAT_00451024,local_78);
  uVar1 = __vbaObjSet(&local_30,uVar1);
  __vbaLateIdSt(uVar1,piVar6,uVar9,uVar11,uVar2,puVar15);
  __vbaFreeObj();
  uVar16 = 0;
  uVar2 = (**(code **)(*piVar5 + 0x354))(piVar5,0x6003001f,0);
  uVar2 = __vbaObjSet(&local_30,uVar2);
  __vbaLateIdCall(uVar2);
  __vbaFreeObj();
  uVar11 = 0xb;
  uVar12 = 0xffffffff;
  uVar9 = 0x80010007;
  piVar6 = piVar5;
  uVar2 = local_80;
  uVar14 = local_78;
  uVar1 = (**(code **)(*piVar5 + 0x354))(piVar5,0x80010007,0xb,local_80,0xffffffff,local_78);
  uVar1 = __vbaObjSet(&local_30,uVar1);
  __vbaLateIdSt(uVar1,piVar6,uVar9,uVar11,uVar2,uVar12);
  __vbaFreeObj();
  uVar12 = 0xb;
  uVar10 = 0;
  uVar9 = 0x80010007;
  piVar6 = piVar5;
  uVar2 = local_80;
  uVar11 = local_78;
  uVar1 = (**(code **)(*piVar5 + 0x35c))(piVar5,0x80010007,0xb,local_80,0,local_78);
  uVar1 = __vbaObjSet(&local_30,uVar1);
  __vbaLateIdSt(uVar1,piVar6,uVar9,uVar12,uVar2,uVar10);
  __vbaFreeObj();
  uVar10 = 0xb;
  uVar8 = 0;
  uVar12 = 0x80010007;
  piVar6 = piVar5;
  uVar2 = local_80;
  uVar9 = local_78;
  uVar1 = (**(code **)(*piVar5 + 0x358))(piVar5,0x80010007,0xb,local_80,0,local_78);
  uVar1 = __vbaObjSet(&local_30,uVar1);
  __vbaLateIdSt(uVar1,piVar6,uVar12,uVar10,uVar2,uVar8);
  __vbaFreeObj();
  uVar8 = 0xb;
  uVar7 = 0;
  uVar10 = 0x80010007;
  piVar6 = piVar5;
  uVar2 = local_80;
  uVar1 = local_78;
  uVar12 = (**(code **)(*piVar5 + 0x360))(piVar5,0x80010007,0xb,local_80,0,local_78);
  uVar12 = __vbaObjSet(&local_30,uVar12);
  __vbaLateIdSt(uVar12,piVar6,uVar10,uVar8,uVar2,uVar7);
  __vbaFreeObj();
  __vbaStrCopy(uVar1,uVar9);
  __vbaStrCopy(uVar11,uVar14);
  __vbaStrCopy(uVar16,uVar13);
  __vbaStrCopy(piVar3);
  uVar2 = (**(code **)(*piVar5 + 0x328))();
  piVar3 = (int *)__vbaObjSet(&local_30,uVar2);
  uVar2 = *(undefined4 *)piVar5[0x1c];
  piVar6 = piVar3;
  iVar4 = (**(code **)(*piVar3 + 0x54))(piVar3,uVar2);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar3,&DAT_00406e74,0x54);
  }
  __vbaFreeObj();
  uVar9 = 0;
  uVar1 = (**(code **)(*piVar5 + 0x350))(piVar5,0x4d,0);
  uVar1 = __vbaObjSet(&local_30,uVar1);
  uVar1 = __vbaLateIdCallLd(local_44,uVar1);
  __vbaStrVarMove(uVar1);
  __vbaStrMove();
  __vbaStrCopy(uVar9,piVar6);
  __vbaFreeStr();
  __vbaFreeObj();
  __vbaFreeVar(uVar2);
  rtcRightCharBstr(piVar5[0x11],1);
  uVar2 = __vbaStrMove();
  iVar4 = __vbaStrCmp(&DAT_00407140,uVar2);
  __vbaFreeStr();
  if (iVar4 != 0) {
    iVar4 = piVar5[0x11];
    puVar17 = &DAT_00407140;
    __vbaStrCat(&DAT_00407140,iVar4);
    __vbaStrMove();
    __vbaStrCopy(puVar17,iVar4);
    __vbaFreeStr();
  }
  uVar14 = 0x4008;
  piVar6 = piVar5 + 0x11;
  uVar11 = 0x68030006;
  piVar3 = piVar5;
  uVar2 = local_80;
  uVar9 = local_78;
  uVar1 = (**(code **)(*piVar5 + 0x354))(piVar5,0x68030006,0x4008,local_80,piVar6,local_78);
  uVar1 = __vbaObjSet(&local_30,uVar1);
  __vbaLateIdSt(uVar1,piVar3,uVar11,uVar14,uVar2,piVar6);
  __vbaFreeObj();
  uVar13 = 0x4008;
  piVar6 = piVar5 + 0x11;
  uVar14 = 0x68030006;
  piVar3 = piVar5;
  uVar2 = local_80;
  uVar1 = local_78;
  uVar11 = (**(code **)(*piVar5 + 0x358))(piVar5,0x68030006,0x4008,local_80,piVar6,local_78);
  uVar11 = __vbaObjSet(&local_30,uVar11);
  __vbaLateIdSt(uVar11,piVar3,uVar14,uVar13,uVar2,piVar6);
  __vbaFreeObj();
  uVar11 = 0;
  uVar2 = (**(code **)(*piVar5 + 0x350))(piVar5,0x57,0);
  uVar2 = __vbaObjSet(&local_30,uVar2);
  uVar2 = __vbaLateIdCallLd(local_44,uVar2);
  __vbaStrVarMove(uVar2);
  __vbaStrMove();
  __vbaStrCopy(uVar11,uVar1);
  __vbaFreeStr();
  __vbaFreeObj();
  __vbaFreeVar(uVar9);
  rtcRightCharBstr(piVar5[0x12],1);
  uVar2 = __vbaStrMove();
  iVar4 = __vbaStrCmp(&DAT_00407140,uVar2);
  __vbaFreeStr();
  if (iVar4 != 0) {
    iVar4 = piVar5[0x12];
    puVar17 = &DAT_00407140;
    __vbaStrCat(&DAT_00407140,iVar4);
    __vbaStrMove();
    __vbaStrCopy(puVar17,iVar4);
    __vbaFreeStr();
  }
  uVar14 = 0x4008;
  piVar6 = piVar5 + 0x12;
  uVar11 = 0x68030005;
  piVar3 = piVar5;
  uVar2 = local_80;
  uVar1 = local_78;
  uVar9 = (**(code **)(*piVar5 + 0x354))(piVar5,0x68030005,0x4008,local_80,piVar6,local_78);
  uVar9 = __vbaObjSet(&local_30,uVar9);
  __vbaLateIdSt(uVar9,piVar3,uVar11,uVar14,uVar2,piVar6);
  __vbaFreeObj();
  uVar11 = 0x4008;
  piVar6 = piVar5 + 0x12;
  uVar9 = 0x68030005;
  piVar3 = piVar5;
  uVar2 = (**(code **)(*piVar5 + 0x358))(piVar5,0x68030005,0x4008,local_80,piVar6,local_78);
  uVar2 = __vbaObjSet(&local_30,uVar2);
  __vbaLateIdSt(uVar2,piVar3,uVar9,uVar11,local_80,piVar6);
  __vbaFreeObj();
  uVar9 = 0;
  uVar2 = (**(code **)(*piVar5 + 0x350))(piVar5,0x4e,0);
  uVar2 = __vbaObjSet(&local_30,uVar2);
  uVar2 = __vbaLateIdCallLd(local_44,uVar2);
  __vbaStrVarMove(uVar2);
  __vbaStrMove();
  __vbaStrCopy(uVar9,local_78);
  __vbaFreeStr();
  __vbaFreeObj();
  __vbaFreeVar(uVar1);
  rtcRightCharBstr(piVar5[0x13],1);
  uVar2 = __vbaStrMove();
  iVar4 = __vbaStrCmp(&DAT_00407140,uVar2);
  __vbaFreeStr();
  if (iVar4 != 0) {
    iVar4 = piVar5[0x13];
    puVar17 = &DAT_00407140;
    __vbaStrCat(&DAT_00407140,iVar4);
    __vbaStrMove();
    __vbaStrCopy(puVar17,iVar4);
    __vbaFreeStr();
  }
  if (DAT_00451750 == (int *)0x0) {
    __vbaNew2(&DAT_00406724,&DAT_00451750);
  }
  piVar6 = DAT_00451750;
  iVar4 = (**(code **)(*DAT_00451750 + 0x14))(DAT_00451750,&local_30);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar6,&DAT_00406714,0x14);
  }
  piVar6 = local_30;
  iVar4 = *local_30;
  __vbaStrCat(L"Help\\English\\Parachute.hlp",piVar5[0x13]);
  uVar2 = __vbaStrMove();
  iVar4 = (**(code **)(iVar4 + 0x134))(piVar6,uVar2);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar6,&DAT_00406dd0,0x134);
  }
  __vbaFreeStr();
  __vbaFreeObj();
  piVar5[0xd] = 0x10800000;
  iVar4 = (**(code **)(*piVar5 + 0x714))(piVar5);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar5,&DAT_00406764,0x714);
  }
  __vbaExitProc();
  __vbaFreeStr(&LAB_004419b9);
  return;
}


// ---- FUN_004419e0 @ 004419e0

void __cdecl FUN_004419e0(uint param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined *puVar12;
  int *piVar13;
  undefined4 local_7c;
  undefined4 local_74;
  undefined4 local_40 [4];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  void *pvStack_20;
  undefined *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  uint local_10;
  undefined4 local_c;
  
  puStack_1c = &DAT_00401ce6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffff38;
  local_14 = &DAT_00401358;
  local_10 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  local_c = 0;
  ExceptionList = &pvStack_20;
  (**(code **)(*piVar4 + 4))(piVar4);
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_30 = 0;
  local_40[0] = 0;
  __vbaOnError(1);
  uVar10 = 0x4008;
  puVar11 = &DAT_00451024;
  uVar7 = 0x68030000;
  piVar5 = piVar4;
  uVar2 = local_7c;
  uVar9 = local_74;
  uVar1 = (**(code **)(*piVar4 + 0x354))(piVar4,0x68030000,0x4008,local_7c,&DAT_00451024,local_74);
  uVar1 = __vbaObjSet(&local_2c,uVar1);
  __vbaLateIdSt(uVar1,piVar5,uVar7,uVar10,uVar2,puVar11);
  __vbaFreeObj();
  uVar8 = 0x4008;
  puVar11 = &DAT_00451024;
  uVar10 = 0x68030000;
  piVar5 = piVar4;
  uVar2 = local_7c;
  uVar1 = local_74;
  uVar7 = (**(code **)(*piVar4 + 0x358))(piVar4,0x68030000,0x4008,local_7c,&DAT_00451024,local_74);
  uVar7 = __vbaObjSet(&local_2c,uVar7);
  __vbaLateIdSt(uVar7,piVar5,uVar10,uVar8,uVar2,puVar11);
  __vbaFreeObj();
  uVar7 = 0;
  uVar2 = (**(code **)(*piVar4 + 0x350))(piVar4,0x4d,0);
  uVar2 = __vbaObjSet(&local_2c,uVar2);
  uVar2 = __vbaLateIdCallLd(local_40,uVar2);
  __vbaStrVarMove(uVar2);
  __vbaStrMove();
  __vbaStrCopy(uVar7,uVar1);
  __vbaFreeStr();
  __vbaFreeObj();
  __vbaFreeVar(uVar9);
  rtcRightCharBstr(piVar4[0x11],1);
  uVar2 = __vbaStrMove();
  iVar3 = __vbaStrCmp(&DAT_00407140,uVar2);
  __vbaFreeStr();
  if (iVar3 != 0) {
    iVar3 = piVar4[0x11];
    puVar12 = &DAT_00407140;
    __vbaStrCat(&DAT_00407140,iVar3);
    __vbaStrMove();
    __vbaStrCopy(puVar12,iVar3);
    __vbaFreeStr();
  }
  uVar10 = 0x4008;
  piVar5 = piVar4 + 0x11;
  uVar7 = 0x68030006;
  piVar6 = piVar4;
  uVar2 = local_7c;
  piVar13 = piVar5;
  uVar9 = local_74;
  uVar1 = (**(code **)(*piVar4 + 0x354))(piVar4,0x68030006,0x4008,local_7c,piVar5,local_74);
  uVar1 = __vbaObjSet(&local_2c,uVar1);
  __vbaLateIdSt(uVar1,piVar6,uVar7,uVar10,uVar2,piVar13);
  __vbaFreeObj();
  uVar8 = 0x4008;
  uVar10 = 0x68030006;
  piVar6 = piVar4;
  uVar2 = local_7c;
  uVar1 = local_74;
  uVar7 = (**(code **)(*piVar4 + 0x358))(piVar4,0x68030006,0x4008,local_7c,piVar5,local_74);
  uVar7 = __vbaObjSet(&local_2c,uVar7);
  __vbaLateIdSt(uVar7,piVar6,uVar10,uVar8,uVar2,piVar5);
  __vbaFreeObj();
  uVar7 = 0;
  uVar2 = (**(code **)(*piVar4 + 0x350))(piVar4,0x57,0);
  uVar2 = __vbaObjSet(&local_2c,uVar2);
  uVar2 = __vbaLateIdCallLd(local_40,uVar2);
  __vbaStrVarMove(uVar2);
  __vbaStrMove();
  __vbaStrCopy(uVar7,uVar1);
  __vbaFreeStr();
  __vbaFreeObj();
  __vbaFreeVar(uVar9);
  rtcRightCharBstr(piVar4[0x12],1);
  uVar2 = __vbaStrMove();
  iVar3 = __vbaStrCmp(&DAT_00407140,uVar2);
  __vbaFreeStr();
  if (iVar3 != 0) {
    iVar3 = piVar4[0x12];
    puVar12 = &DAT_00407140;
    __vbaStrCat(&DAT_00407140,iVar3);
    __vbaStrMove();
    __vbaStrCopy(puVar12,iVar3);
    __vbaFreeStr();
  }
  uVar7 = 0x4008;
  piVar5 = piVar4 + 0x12;
  uVar9 = 0x68030005;
  piVar6 = piVar4;
  uVar2 = local_7c;
  piVar13 = piVar5;
  uVar1 = (**(code **)(*piVar4 + 0x354))(piVar4,0x68030005,0x4008,local_7c,piVar5,local_74);
  uVar1 = __vbaObjSet(&local_2c,uVar1);
  __vbaLateIdSt(uVar1,piVar6,uVar9,uVar7,uVar2,piVar13);
  __vbaFreeObj();
  uVar9 = 0x4008;
  uVar1 = 0x68030005;
  uVar2 = (**(code **)(*piVar4 + 0x358))(piVar4,0x68030005,0x4008,local_7c,piVar5,local_74);
  uVar2 = __vbaObjSet(&local_2c,uVar2);
  __vbaLateIdSt(uVar2,piVar4,uVar1,uVar9,local_7c,piVar5);
  __vbaFreeObj();
  __vbaExitProc();
  return;
}


// ---- FUN_00441f00 @ 00441f00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00441f00(int ******param_1,int ******param_2,ushort *param_3)

{
  code ******ppppppcVar1;
  code *****pppppcVar2;
  code *****pppppcVar3;
  int **********ppppppppppiVar4;
  short sVar5;
  code ******ppppppcVar6;
  undefined *puVar7;
  int iVar8;
  int ***********pppppppppppiVar9;
  int **********ppppppppppiVar10;
  int ******ppppppiVar11;
  int ***********pppppppppppiVar12;
  int ***********pppppppppppiVar13;
  int *piVar14;
  code ******ppppppcVar15;
  code ******ppppppcVar16;
  undefined4 uVar17;
  uint uVar18;
  code ******ppppppcVar19;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  short sVar20;
  ushort uVar21;
  ushort uVar22;
  code *****pppppcStack_370;
  code *****pppppcStack_36c;
  code *****pppppcStack_368;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_308;
  undefined4 uStack_2f8;
  undefined4 uStack_2e8;
  int iStack_2e4;
  code *****pppppcStack_2e0;
  code ****ppppcStack_2dc;
  code *****pppppcStack_2d8;
  code *****pppppcStack_2d4;
  code *****pppppcStack_2d0;
  code *****pppppcStack_2cc;
  code *****pppppcStack_2c8;
  code *****pppppcStack_2c4;
  code *****pppppcStack_2c0;
  code *****pppppcStack_2bc;
  code *****pppppcStack_2b8;
  code *****pppppcStack_2b4;
  code *****pppppcStack_2b0;
  code *****pppppcStack_2ac;
  code *****pppppcStack_2a8;
  code ****ppppcStack_2a4;
  code *****pppppcStack_2a0;
  code *****pppppcStack_29c;
  code ****ppppcStack_298;
  code *****pppppcStack_294;
  code *****pppppcStack_290;
  code ****ppppcStack_28c;
  int *piStack_288;
  code *****pppppcStack_284;
  code *****pppppcStack_280;
  code *****pppppcStack_27c;
  undefined4 uStack_278;
  code *****pppppcStack_274;
  int **********ppppppppppiStack_270;
  int ******ppppppiStack_26c;
  int **********ppppppppppiStack_268;
  float fStack_264;
  int iStack_260;
  code *****pppppcStack_25c;
  int iStack_258;
  float fStack_254;
  int iStack_250;
  undefined4 uStack_238;
  undefined4 uStack_234;
  short sStack_230;
  code *****pppppcStack_21c;
  code ****ppppcStack_1f8;
  code ****ppppcStack_1f4;
  undefined4 uStack_1f0;
  code ****appppcStack_1e0 [2];
  undefined4 uStack_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1c0;
  undefined4 uStack_1b0;
  undefined4 auStack_1a0 [4];
  code *****pppppcStack_190;
  code *****pppppcStack_18c;
  code ****ppppcStack_188;
  code *****pppppcStack_184;
  code ****ppppcStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  code *****pppppcStack_174;
  code *****pppppcStack_170;
  code *****pppppcStack_16c;
  int **********ppppppppppiStack_168;
  code *****pppppcStack_164;
  int ******ppppppiStack_160;
  int **********ppppppppppiStack_15c;
  int **********ppppppppppiStack_158;
  int **********ppppppppppiStack_154;
  int **********ppppppppppiStack_150;
  int **********ppppppppppiStack_14c;
  int **********ppppppppppiStack_148;
  int **********ppppppppppiStack_144;
  int **********ppppppppppiStack_140;
  int *********pppppppppiStack_13c;
  code *****pppppcStack_138;
  int *********pppppppppiStack_134;
  int **********ppppppppppiStack_130;
  int ******ppppppiStack_12c;
  int ******ppppppiStack_128;
  float local_b4;
  int *********local_b0 [9];
  undefined4 local_8c;
  undefined4 local_7c;
  undefined4 local_6c;
  undefined4 local_5c;
  int **********local_4c;
  int *********local_48;
  int **********local_44;
  int **********local_40;
  int *********local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int **********local_30;
  int local_28;
  void *pvStack_20;
  undefined *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  puStack_1c = &DAT_00401ce6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xfffffedc;
  local_14 = &DAT_00401380;
  local_10 = 0;
  local_c = 0;
  ppppppiStack_128 = param_1;
  ppppppiStack_12c = (int ******)0x441f3d;
  ExceptionList = &pvStack_20;
  (*(code *)(*param_1)[1])();
  local_34 = 0;
  local_38 = 0;
  local_3c = (int *********)0x0;
  local_40 = (int **********)0x0;
  local_44 = (int **********)0x0;
  local_48 = (int *********)0x0;
  local_4c = (int **********)0x0;
  local_5c = 0;
  local_6c = 0;
  local_7c = 0;
  local_8c = 0;
  local_b0[0] = (int *********)0x0;
  local_b4 = 0.0;
  ppppppiStack_12c = (int ******)0x1;
  ppppppppppiStack_130 = (int **********)0x441f75;
  __vbaOnError();
  ppppppiStack_12c = param_1;
  ppppppppppiStack_130 = (int **********)0x441f7e;
  ppppppppppiStack_130 = (int **********)(*(code *)(*param_1)[0xc2])();
  pppppppppiStack_134 = (int *********)&local_3c;
  pppppcStack_138 = (code *****)0x441f89;
  ppppppcVar6 = (code ******)__vbaObjSet();
  ppppppppppiStack_130 = (int **********)&local_40;
  pppppppppiStack_134 = (int *********)CONCAT22(extraout_var_01,*(undefined2 *)param_2);
  pppppppppiStack_13c = (int *********)0x441f9c;
  pppppcStack_138 = (code *****)ppppppcVar6;
  puVar7 = (undefined *)(*(code *)(*ppppppcVar6)[0x10])();
  if ((int)puVar7 < 0) {
    pppppppppiStack_13c = (int *********)0x40;
    ppppppppppiStack_140 = (int **********)&DAT_004077a0;
    ppppppppppiStack_14c = (int **********)0x441fb1;
    ppppppppppiStack_148 = (int **********)puVar7;
    ppppppppppiStack_144 = (int **********)ppppppcVar6;
    __vbaHresultCheckObj();
  }
  ppppppppppiVar10 = local_40;
  pppppppppiStack_13c = (int *********)local_b0;
  ppppppppppiStack_140 = local_40;
  ppppppppppiStack_144 = (int **********)0x441fc3;
  iVar8 = (*(code *)(*local_40)[0x1e])();
  if (iVar8 < 0) {
    ppppppppppiStack_144 = (int **********)0x78;
    ppppppppppiStack_148 = (int **********)&DAT_004077b0;
    ppppppppppiStack_14c = ppppppppppiVar10;
    ppppppppppiStack_154 = (int **********)0x441fd8;
    ppppppppppiStack_150 = (int **********)iVar8;
    __vbaHresultCheckObj();
  }
  ppppppppppiStack_144 = (int **********)0x441fe4;
  pppppppppppiVar9 = (int ***********)__vbaFpI2();
  ppppppppppiStack_144 = (int **********)&local_40;
  ppppppppppiStack_148 = &local_3c;
  ppppppppppiStack_14c = (int **********)0x2;
  ppppppppppiStack_150 = (int **********)0x441ff6;
  __vbaFreeObjList();
  pppppppppppiVar12 = (int ***********)param_2;
  if (!SCARRY2(*(short *)(param_1 + 0x10),1)) {
    local_28 = ((*(short *)param_2 <= (short)(*(short *)(param_1 + 0x10) + 1)) - 1 & 0xfffffffb) - 5
    ;
    uVar22 = *param_3;
    pppppppppppiVar13 = pppppppppppiVar9;
LAB_00442028:
    local_30 = (int **********)pppppppppppiVar13;
    if ((short)((short)local_28 >> 0xf ^ uVar22) <
        (short)((short)local_28 >> 0xf ^ (ushort)local_30)) {
      sVar5 = *(short *)param_2;
      pppppppppppiVar13 = (int ***********)0x1;
      do {
        pppppppppppiVar12 = pppppppppppiVar13;
        sVar20 = (short)pppppppppppiVar12;
        if (sVar5 < sVar20) {
          ppppppppppiStack_144 = (int **********)0x4424ac;
          __vbaExitProc();
          return;
        }
        ppppppppppiStack_144 = (int **********)param_1;
        ppppppppppiStack_148 = (int **********)0x442295;
        ppppppppppiStack_148 = (int **********)(*(code *)(*param_1)[200])();
        ppppppppppiStack_14c = &local_3c;
        ppppppppppiStack_150 = (int **********)0x4422a0;
        pppppppppppiVar9 = (int ***********)__vbaObjSet();
        ppppppppppiStack_148 = local_b0;
        ppppppppppiStack_150 = (int **********)0x4422b2;
        ppppppppppiStack_14c = (int **********)pppppppppppiVar9;
        pppppppppppiVar13 = (int ***********)(*(code *)(*pppppppppppiVar9)[0x20])();
        if ((int)pppppppppppiVar13 < 0) {
          ppppppppppiStack_150 = (int **********)0x80;
          ppppppppppiStack_154 = (int **********)&DAT_004077c0;
          ppppppiStack_160 = (int ******)0x4422ca;
          ppppppppppiStack_15c = (int **********)pppppppppppiVar13;
          ppppppppppiStack_158 = (int **********)pppppppppppiVar9;
          __vbaHresultCheckObj();
        }
        ppppppppppiStack_150 = (int **********)param_1;
        ppppppppppiStack_154 = (int **********)0x4422d3;
        ppppppppppiStack_154 = (int **********)(*(code *)(*param_1)[0xc2])();
        ppppppppppiStack_158 = (int **********)&local_40;
        ppppppppppiStack_15c = (int **********)0x4422de;
        pppppppppppiVar9 = (int ***********)__vbaObjSet();
        ppppppppppiStack_154 = (int **********)&local_44;
        ppppppiStack_160 = (int ******)0x4422eb;
        ppppppppppiStack_15c = (int **********)pppppppppppiVar9;
        ppppppppppiStack_158 = (int **********)pppppppppppiVar12;
        ppppppiVar11 = (int ******)(*(code *)(*pppppppppppiVar9)[0x10])();
        uVar22 = 0;
        if ((int)ppppppiVar11 < 0) {
          ppppppppppiStack_154 = (int **********)0x40;
          ppppppppppiStack_158 = (int **********)&DAT_004077a0;
          pppppcStack_164 = (code *****)0x442300;
          ppppppiStack_160 = ppppppiVar11;
          ppppppppppiStack_15c = (int **********)pppppppppppiVar9;
          __vbaHresultCheckObj();
        }
        pppppppppppiVar9 = (int ***********)local_44;
        if ((uVar22 & 0xd) != 0) {
LAB_0044251f:
          __vbaFPException();
          return;
        }
        ppppppppppiStack_158 = local_44;
        ppppppppppiStack_15c = (int **********)0x44233a;
        ppppppppppiStack_154 = (int **********)((float)(int)sVar20 * (float)local_b0[0]);
        ppppppppppiStack_150 = (int **********)(*(code *)(*local_44)[0x1f])();
        if ((int)ppppppppppiStack_150 < 0) {
          ppppppppppiStack_144 = (int **********)0x7c;
          ppppppppppiStack_148 = (int **********)&DAT_004077b0;
          ppppppppppiStack_14c = (int **********)pppppppppppiVar9;
          ppppppppppiStack_154 = (int **********)0x44234f;
          __vbaHresultCheckObj();
        }
        ppppppppppiStack_144 = (int **********)&local_44;
        ppppppppppiStack_148 = (int **********)&local_40;
        ppppppppppiStack_14c = &local_3c;
        ppppppppppiStack_150 = (int **********)0x3;
        ppppppppppiStack_154 = (int **********)0x442363;
        __vbaFreeObjList();
        pppppppppppiVar13 = (int ***********)(uint)(ushort)(sVar20 + 1);
      } while (!SCARRY2(sVar20,1));
    }
    else {
      ppppppppppiStack_144 = (int **********)param_1;
      ppppppppppiStack_148 = (int **********)0x44204d;
      ppppppppppiStack_148 = (int **********)(*(code *)(*param_1)[0xc2])();
      ppppppppppiStack_14c = &local_3c;
      ppppppppppiStack_150 = (int **********)0x442058;
      ppppppppppiVar10 = (int **********)__vbaObjSet();
      ppppppppppiStack_148 = (int **********)&local_40;
      ppppppppppiStack_14c =
           (int **********)CONCAT22((short)((uint)ppppppppppiVar10 >> 0x10),*(undefined2 *)param_2);
      ppppppppppiStack_154 = (int **********)0x442068;
      ppppppppppiStack_150 = ppppppppppiVar10;
      ppppppiVar11 = (int ******)(*(code *)(*ppppppppppiVar10)[0x10])();
      if ((int)ppppppiVar11 < 0) {
        ppppppppppiStack_154 = (int **********)0x40;
        ppppppppppiStack_158 = (int **********)&DAT_004077a0;
        pppppcStack_164 = (code *****)0x44207d;
        ppppppiStack_160 = ppppppiVar11;
        ppppppppppiStack_15c = ppppppppppiVar10;
        __vbaHresultCheckObj();
      }
      pppppppppppiVar9 = (int ***********)local_40;
      ppppppppppiStack_154 = (int **********)(float)(int)(short)local_30;
      ppppppppppiStack_158 = local_40;
      ppppppppppiStack_15c = (int **********)0x4420a5;
      ppppppppppiStack_150 = (int **********)(*(code *)(*local_40)[0x1f])();
      if ((int)ppppppppppiStack_150 < 0) {
        ppppppppppiStack_144 = (int **********)0x7c;
        ppppppppppiStack_148 = (int **********)&DAT_004077b0;
        ppppppppppiStack_14c = (int **********)pppppppppppiVar9;
        ppppppppppiStack_154 = (int **********)0x4420ba;
        __vbaHresultCheckObj();
      }
      ppppppppppiStack_144 = (int **********)&local_40;
      ppppppppppiStack_148 = &local_3c;
      ppppppppppiStack_14c = (int **********)0x2;
      ppppppppppiStack_150 = (int **********)0x4420ca;
      __vbaFreeObjList();
      sVar5 = *(short *)(param_1 + 0x10);
      pppppppppppiVar12 = (int ***********)param_2;
      if ((!SCARRY2(sVar5,1)) &&
         (pppppppppppiVar9 =
               (int ***********)
               CONCAT22((short)((uint)pppppppppppiVar9 >> 0x10),*(short *)param_2 + -1),
         pppppppppppiVar13 = pppppppppppiVar9, !SBORROW2(*(short *)param_2,1))) goto LAB_004420ee;
    }
  }
LAB_00442524:
  ppppppppppiStack_144 = (int **********)0x44252a;
  __vbaErrorOverflow();
  pppppcVar3 = pppppcStack_138;
  ppppppppppiStack_158 = (int **********)&DAT_00401ce6;
  ppppppppppiStack_15c = ExceptionList;
  ppppppiStack_26c = param_1;
  ppppppppppiStack_154 = (int **********)&ppppppppppiStack_270;
  ppppppppppiStack_150 = (int **********)&DAT_004013a8;
  ppppppppppiStack_14c = (int **********)0x0;
  ppppppppppiStack_148 = (int **********)0x0;
  pppppcStack_274 = pppppcStack_138;
  uStack_278 = 0x44256d;
  ExceptionList = &ppppppppppiStack_15c;
  ppppppppppiStack_270 = (int **********)pppppppppppiVar12;
  ppppppppppiStack_268 = (int **********)pppppppppppiVar9;
  ppppppppppiStack_140 = (int **********)&stack0xfffffffc;
  (*(code *)(*pppppcStack_138)[1])();
  uStack_178 = 0;
  uStack_17c = 0;
  ppppcStack_180 = (code ****)0x0;
  pppppcStack_184 = (code *****)0x0;
  ppppcStack_188 = (code ****)0x0;
  pppppcStack_18c = (code *****)0x0;
  pppppcStack_190 = (code *****)0x0;
  auStack_1a0[0] = 0;
  uStack_1b0 = 0;
  uStack_1c0 = 0;
  uStack_1d0 = 0;
  appppcStack_1e0[0] = (code ****)0x0;
  uStack_1f0 = 0;
  ppppcStack_1f4 = (code ****)0x0;
  ppppcStack_1f8 = (code ****)0x0;
  uStack_278 = 1;
  pppppcStack_27c = (code *****)0x4425b1;
  __vbaOnError();
  uStack_1d8 = 0;
  appppcStack_1e0[0] = (code ****)0x8002;
  uStack_278 = 0x4425d4;
  uStack_278 = __vbaVarVargNofree();
  pppppcStack_27c = appppcStack_1e0;
  pppppcStack_280 = (code *****)0x4425e2;
  sVar5 = __vbaVarTstEq();
  if (sVar5 == 0) {
    uStack_1d8 = 3;
    appppcStack_1e0[0] = (code ****)0x8002;
    uStack_278 = 0x442605;
    uStack_278 = __vbaVarVargNofree();
    pppppcStack_27c = appppcStack_1e0;
    pppppcStack_280 = (code *****)0x442613;
    sVar5 = __vbaVarTstEq();
    if (sVar5 == 0) goto LAB_0044262e;
    uStack_278 = 0x442622;
    uStack_278 = __vbaVarVargNofree();
    pppppcStack_27c = (code *****)0x442629;
    pppppcStack_16c = (code *****)__vbaI2Var();
  }
  else {
LAB_0044262e:
    uStack_1d8 = 1;
    appppcStack_1e0[0] = (code ****)0x2;
    uStack_278 = 0x44264c;
    uStack_278 = __vbaVarVargNofree();
    pppppcStack_27c = appppcStack_1e0;
    pppppcStack_280 = (code *****)auStack_1a0;
    pppppcStack_284 = (code *****)0x44265e;
    uStack_278 = __vbaVarAdd();
    pppppcStack_27c = (code *****)0x442665;
    pppppcStack_16c = (code *****)__vbaI2Var();
    pppppcStack_280 = (code *****)0x442671;
    __vbaFreeVar();
  }
  pppppcStack_27c = pppppcVar3;
  pppppcStack_280 = (code *****)0x44267a;
  pppppcStack_280 = (code *****)(*(code *)(*pppppcVar3)[0xc2])();
  ppppppcVar6 = (code ******)__vbaObjSet_exref;
  pppppcStack_284 = &ppppcStack_180;
  piStack_288 = (int *)0x442687;
  piVar14 = (int *)__vbaObjSet();
  pppppcStack_280 = (code *****)&pppppcStack_184;
  pppppcStack_284 = pppppcStack_16c;
  ppppcStack_28c = (code ****)0x442697;
  piStack_288 = piVar14;
  puVar7 = (undefined *)(**(code **)(*piVar14 + 0x40))();
  if ((int)puVar7 < 0) {
    ppppcStack_28c = (code ****)0x40;
    pppppcStack_290 = (code *****)&DAT_004077a0;
    pppppcStack_29c = (code *****)0x4426ac;
    ppppcStack_298 = (code ****)puVar7;
    pppppcStack_294 = (code *****)piVar14;
    __vbaHresultCheckObj();
  }
  pppppcVar2 = pppppcStack_184;
  ppppcStack_28c = (code ****)&ppppcStack_1f4;
  pppppcStack_290 = pppppcStack_184;
  pppppcStack_294 = (code *****)0x4426be;
  iVar8 = (*(code *)(*pppppcStack_184)[0x1e])();
  if (iVar8 < 0) {
    pppppcStack_294 = (code *****)0x78;
    ppppcStack_298 = (code ****)&DAT_004077b0;
    pppppcStack_29c = pppppcVar2;
    ppppcStack_2a4 = (code ****)0x4426d3;
    pppppcStack_2a0 = (code *****)iVar8;
    __vbaHresultCheckObj();
  }
  pppppcStack_294 = (code *****)0x4426df;
  pppppcStack_170 = (code *****)__vbaFpI2();
  pppppcStack_294 = (code *****)&pppppcStack_184;
  ppppcStack_298 = (code ****)&ppppcStack_180;
  pppppcStack_29c = (code *****)0x2;
  pppppcStack_2a0 = (code *****)0x4426f2;
  __vbaFreeObjList();
  pppppcStack_294 = pppppcVar3;
  ppppcStack_298 = (code ****)0x4426fe;
  ppppcStack_298 = (code ****)(*(code *)(*pppppcVar3)[200])();
  pppppcStack_29c = (code *****)&pppppcStack_184;
  pppppcStack_2a0 = (code *****)0x442705;
  piVar14 = (int *)__vbaObjSet();
  ppppcStack_298 = (code ****)&ppppcStack_1f8;
  pppppcStack_2a0 = (code *****)0x442717;
  pppppcStack_29c = (code *****)piVar14;
  iVar8 = (**(code **)(*piVar14 + 0x80))();
  if (iVar8 < 0) {
    pppppcStack_2a0 = (code *****)0x80;
    ppppcStack_2a4 = (code ****)&DAT_004077c0;
    pppppcStack_2b0 = (code *****)0x44272f;
    pppppcStack_2ac = (code *****)iVar8;
    pppppcStack_2a8 = (code *****)piVar14;
    __vbaHresultCheckObj();
  }
  pppppcStack_2a0 = pppppcVar3;
  ppppcStack_2a4 = (code ****)0x442738;
  ppppcStack_2a4 = (code ****)(*(code *)(*pppppcVar3)[0xc1])();
  pppppcStack_2a8 = &ppppcStack_180;
  pppppcStack_2ac = (code *****)0x44273f;
  ppppppcVar15 = (code ******)__vbaObjSet();
  ppppcStack_2a4 = (code ****)&ppppcStack_1f4;
  pppppcStack_2ac = (code *****)0x442751;
  pppppcStack_2a8 = (code *****)ppppppcVar15;
  ppppppcVar16 = (code ******)(*(code *)(*ppppppcVar15)[0x22])();
  uVar22 = 0;
  if ((int)ppppppcVar16 < 0) {
    pppppcStack_2ac = (code *****)0x88;
    pppppcStack_2b0 = (code *****)&DAT_004077b0;
    pppppcStack_2bc = (code *****)0x442769;
    pppppcStack_2b8 = (code *****)ppppppcVar16;
    pppppcStack_2b4 = (code *****)ppppppcVar15;
    __vbaHresultCheckObj();
  }
  if (!SBORROW2(*(short *)((int)pppppcVar3 + 0x42),(short)pppppcStack_16c)) {
    iStack_250 = (int)(short)(*(short *)((int)pppppcVar3 + 0x42) - (short)pppppcStack_16c);
    fStack_254 = (float)iStack_250;
    if ((uVar22 & 0xd) != 0) {
LAB_00442d84:
      __vbaFPException();
      return;
    }
    pppppcStack_2ac = (code *****)0x4427b6;
    ppppppppppiStack_168 = (int **********)__vbaFpI2();
    pppppcStack_2ac = (code *****)&pppppcStack_184;
    pppppcStack_2b0 = &ppppcStack_180;
    pppppcStack_2b4 = (code *****)0x2;
    pppppcStack_2b8 = (code *****)0x4427c9;
    __vbaFreeObjList();
    uStack_1d8 = CONCAT22(uStack_1d8._2_2_,*(undefined2 *)((int)pppppcVar3 + 0x42));
    appppcStack_1e0[0] = (code ****)0x8002;
    pppppcStack_2ac = (code *****)0x4427f0;
    pppppcStack_2ac = (code *****)__vbaVarVargNofree();
    pppppcStack_2b0 = appppcStack_1e0;
    pppppcStack_2b4 = (code *****)0x4427fe;
    uVar17 = __vbaVarTstLt();
    pppppcStack_164 = (code *****)((-(uint)((short)uVar17 != 0) & 5) + 5);
    pppppcStack_174 = pppppcStack_170;
    ppppppcVar16 = ppppppcVar6;
    ppppppcVar15 = (code ******)pppppcStack_164;
    ppppppcVar19 = (code ******)pppppcStack_174;
    while (pppppcStack_174 = (code *****)ppppppcVar19, ppppppcVar6 = ppppppcVar16,
          uVar22 = (short)ppppppcVar15 >> 0xf,
          uVar18 = CONCAT22((short)((uint)uVar17 >> 0x10),uVar22) ^ (uint)pppppcStack_174,
          (short)uVar18 <= (short)(uVar22 ^ (ushort)ppppppppppiStack_168)) {
      pppppcStack_2ac = pppppcVar3;
      pppppcStack_2b0 = (code *****)0x442836;
      pppppcStack_2b0 = (code *****)(*(code *)(*pppppcVar3)[0xc2])();
      pppppcStack_2b4 = &ppppcStack_180;
      pppppcStack_2b8 = (code *****)0x44283d;
      ppppppcVar6 = (code ******)(*(code *)ppppppcVar6)();
      pppppcStack_2b8 = (code *****)&pppppcStack_184;
      pppppcStack_2bc = pppppcStack_16c;
      pppppcStack_2c4 = (code *****)0x44284d;
      pppppcStack_2c0 = (code *****)ppppppcVar6;
      ppppppcVar16 = (code ******)(*(code *)(*ppppppcVar6)[0x10])();
      if ((int)ppppppcVar16 < 0) {
        pppppcStack_2c4 = (code *****)0x40;
        pppppcStack_2c8 = (code *****)&DAT_004077a0;
        pppppcStack_2d4 = (code *****)0x442862;
        pppppcStack_2d0 = (code *****)ppppppcVar16;
        pppppcStack_2cc = (code *****)ppppppcVar6;
        __vbaHresultCheckObj();
      }
      pppppcVar2 = pppppcStack_184;
      iStack_258 = (int)(short)pppppcStack_174;
      pppppcStack_2c4 = (code *****)(float)iStack_258;
      pppppcStack_2c8 = pppppcStack_184;
      pppppcStack_2cc = (code *****)0x44288a;
      pppppcStack_25c = pppppcStack_2c4;
      pppppcStack_2b8 = (code *****)(*(code *)(*pppppcStack_184)[0x1f])();
      if ((int)pppppcStack_2b8 < 0) {
        pppppcStack_2ac = (code *****)0x7c;
        pppppcStack_2b0 = (code *****)&DAT_004077b0;
        pppppcStack_2b4 = pppppcVar2;
        pppppcStack_2bc = (code *****)0x44289f;
        __vbaHresultCheckObj();
      }
      pppppcStack_2ac = (code *****)&pppppcStack_184;
      pppppcStack_2b0 = &ppppcStack_180;
      pppppcStack_2b4 = (code *****)0x2;
      pppppcStack_2b8 = (code *****)0x4428af;
      __vbaFreeObjList();
      pppppcStack_2ac = (code *****)0x4428b8;
      rtcDoEvents();
      sStack_230 = *(short *)(pppppcVar3 + 0x10);
      ppppppcVar16 = (code ******)
                     CONCAT22((short)((uint)pppppcVar2 >> 0x10),(short)pppppcStack_16c + 1);
      ppppppcVar6 = ppppppcVar16;
      ppppppcVar1 = ppppppcVar15;
      sVar5 = (short)pppppcStack_16c;
      while( true ) {
        if (SCARRY2(sVar5,1)) goto LAB_00442d89;
        sVar5 = (short)ppppppcVar16;
        ppppppcVar6 = ppppppcVar16;
        if (sStack_230 < sVar5) break;
        pppppcStack_2ac = pppppcVar3;
        pppppcStack_2b0 = (code *****)0x4428e7;
        pppppcStack_2b0 = (code *****)(*(code *)(*pppppcVar3)[200])();
        pppppcStack_2b4 = &ppppcStack_188;
        pppppcStack_2b8 = (code *****)0x4428f2;
        ppppppcVar15 = (code ******)__vbaObjSet();
        pppppcStack_2b0 = &ppppcStack_1f8;
        pppppcStack_2b8 = (code *****)0x442904;
        pppppcStack_2b4 = (code *****)ppppppcVar15;
        ppppppcVar19 = (code ******)(*(code *)(*ppppppcVar15)[0x20])();
        if ((int)ppppppcVar19 < 0) {
          pppppcStack_2b8 = (code *****)0x80;
          pppppcStack_2bc = (code *****)&DAT_004077c0;
          pppppcStack_2c8 = (code *****)0x44291c;
          pppppcStack_2c4 = (code *****)ppppppcVar19;
          pppppcStack_2c0 = (code *****)ppppppcVar15;
          __vbaHresultCheckObj();
        }
        pppppcStack_2b8 = pppppcVar3;
        pppppcStack_2bc = (code *****)0x442925;
        pppppcStack_2bc = (code *****)(*(code *)(*pppppcVar3)[0xc2])();
        pppppcStack_2c0 = (code *****)&pppppcStack_18c;
        pppppcStack_2c4 = (code *****)0x442930;
        ppppppcVar15 = (code ******)__vbaObjSet();
        pppppcStack_2bc = (code *****)&pppppcStack_190;
        pppppcStack_2c8 = (code *****)0x44293d;
        pppppcStack_2c4 = (code *****)ppppppcVar15;
        pppppcStack_2c0 = (code *****)ppppppcVar16;
        ppppppcVar16 = (code ******)(*(code *)(*ppppppcVar15)[0x10])();
        if ((int)ppppppcVar16 < 0) {
          pppppcStack_2c8 = (code *****)0x40;
          pppppcStack_2cc = (code *****)&DAT_004077a0;
          pppppcStack_2d8 = (code *****)0x442952;
          pppppcStack_2d4 = (code *****)ppppppcVar16;
          pppppcStack_2d0 = (code *****)ppppppcVar15;
          __vbaHresultCheckObj();
        }
        pppppcStack_21c = pppppcStack_190;
        pppppcStack_2c8 = pppppcVar3;
        pppppcStack_2cc = (code *****)0x442964;
        pppppcStack_2a8 = (code *****)(*(code *)(*pppppcVar3)[0xc2])();
        pppppcStack_2ac = &ppppcStack_180;
        pppppcStack_2b0 = (code *****)0x44296f;
        ppppppcVar15 = (code ******)__vbaObjSet();
        pppppcStack_2a8 = (code *****)&pppppcStack_184;
        pppppcStack_2ac = (code *****)CONCAT22((short)((uint)ppppppcVar15 >> 0x10),sVar5 + -1);
        if (SBORROW2(sVar5,1)) goto LAB_00442d89;
        pppppcStack_2b4 = (code *****)0x442989;
        pppppcStack_2b0 = (code *****)ppppppcVar15;
        ppppppcVar16 = (code ******)(*(code *)(*ppppppcVar15)[0x10])();
        if ((int)ppppppcVar16 < 0) {
          pppppcStack_2b4 = (code *****)0x40;
          pppppcStack_2b8 = (code *****)&DAT_004077a0;
          pppppcStack_2c4 = (code *****)0x44299e;
          pppppcStack_2c0 = (code *****)ppppppcVar16;
          pppppcStack_2bc = (code *****)ppppppcVar15;
          __vbaHresultCheckObj();
        }
        pppppcVar2 = pppppcStack_184;
        pppppcStack_2b4 = &ppppcStack_1f4;
        pppppcStack_2b8 = pppppcStack_184;
        pppppcStack_2bc = (code *****)0x4429b0;
        ppppppcVar15 = (code ******)(*(code *)(*pppppcStack_184)[0x1e])();
        uVar22 = 0;
        if ((int)ppppppcVar15 < 0) {
          pppppcStack_2ac = (code *****)0x78;
          pppppcStack_2b0 = (code *****)&DAT_004077b0;
          pppppcStack_2b4 = pppppcVar2;
          pppppcStack_2bc = (code *****)0x4429c5;
          pppppcStack_2b8 = (code *****)ppppppcVar15;
          __vbaHresultCheckObj();
        }
        ppppppcVar15 = (code ******)pppppcStack_21c;
        if ((uVar22 & 0xd) != 0) goto LAB_00442d84;
        pppppcStack_2b0 = pppppcStack_21c;
        pppppcStack_2b4 = (code *****)0x4429eb;
        pppppcStack_2ac = (code *****)((float)ppppcStack_1f8 + (float)ppppcStack_1f4);
        pppppcStack_2b8 = (code *****)(*(code *)(*pppppcStack_21c)[0x1f])();
        if ((int)pppppcStack_2b8 < 0) {
          pppppcStack_2ac = (code *****)0x7c;
          pppppcStack_2b0 = (code *****)&DAT_004077b0;
          pppppcStack_2b4 = (code *****)ppppppcVar15;
          pppppcStack_2bc = (code *****)0x442a00;
          __vbaHresultCheckObj();
        }
        pppppcStack_2ac = (code *****)&pppppcStack_190;
        pppppcStack_2b0 = (code *****)&pppppcStack_18c;
        pppppcStack_2b4 = &ppppcStack_188;
        pppppcStack_2b8 = (code *****)&pppppcStack_184;
        pppppcStack_2bc = &ppppcStack_180;
        pppppcStack_2c0 = (code *****)0x5;
        pppppcStack_2c4 = (code *****)0x442a1c;
        __vbaFreeObjList();
        ppppppcVar16 = (code ******)(uint)(ushort)(sVar5 + 1);
        ppppppcVar1 = (code ******)pppppcStack_164;
      }
      pppppcStack_2ac = (code *****)0x442a3d;
      uVar17 = rtcDoEvents();
      ppppppcVar16 = (code ******)__vbaObjSet_exref;
      ppppppcVar15 = ppppppcVar1;
      ppppppcVar19 = (code ******)
                     CONCAT22(extraout_var_00,(short)ppppppcVar1 + (short)pppppcStack_174);
      if (SCARRY2((short)ppppppcVar1,(short)pppppcStack_174)) goto LAB_00442d89;
    }
    if (!SBORROW2(*(short *)((int)pppppcVar3 + 0x42),1)) {
      uStack_234 = 1;
      pppppcStack_174 = pppppcStack_16c;
      ppppppcVar16 = ppppppcVar6;
      uStack_238 = CONCAT22((short)(uVar18 >> 0x10),*(short *)((int)pppppcVar3 + 0x42) + -1);
      ppppppcVar19 = (code ******)pppppcStack_174;
      goto LAB_00442a7c;
    }
  }
LAB_00442d89:
  pppppcStack_2ac = (code *****)0x442d8f;
  __vbaErrorOverflow();
  pppppcStack_2c0 = (code *****)&DAT_00401ce6;
  pppppcStack_2c4 = ExceptionList;
  pppppcStack_36c = pppppcVar3;
  pppppcStack_2bc = (code *****)&pppppcStack_370;
  pppppcStack_2b8 = (code *****)&DAT_004013d0;
  pppppcStack_2b4 = (code *****)((uint)pppppcStack_2a0 & 1);
  piVar14 = (int *)((uint)pppppcStack_2a0 & 0xfffffffe);
  pppppcStack_2b0 = (code *****)0x0;
  ExceptionList = &pppppcStack_2c4;
  pppppcStack_370 = (code *****)ppppppcVar15;
  pppppcStack_368 = (code *****)ppppppcVar6;
  pppppcStack_2a8 = (code *****)&ppppppppppiStack_140;
  pppppcStack_2a0 = (code *****)piVar14;
  (**(code **)(*piVar14 + 4))(piVar14);
  pppppcStack_2c8 = (code *****)0x0;
  pppppcStack_2cc = (code *****)0x0;
  pppppcStack_2d0 = (code *****)0x0;
  pppppcStack_2d4 = (code *****)0x0;
  pppppcStack_2d8 = (code *****)0x0;
  uStack_2e8 = 0;
  uStack_2f8 = 0;
  uStack_308 = 0;
  uStack_318 = 0;
  uStack_328 = 0;
  uStack_338 = 0;
  __vbaOnError(1);
  uVar17 = __vbaNew(&DAT_00402d84);
  __vbaObjSet(&pppppcStack_2c8,uVar17);
  iVar8 = (*(code *)(*pppppcStack_2c8)[0xac])
                    (pppppcStack_2c8,3,uStack_324,1,uStack_31c,9,uStack_334,piVar14,uStack_32c);
  if (iVar8 < 0) {
    __vbaHresultCheckObj(iVar8,pppppcStack_2c8,&DAT_00407040,0x2b0);
  }
  uVar17 = __vbaCastObj(0,&DAT_00407070);
  __vbaObjSet(&pppppcStack_2c8,uVar17);
  __vbaExitProc();
  __vbaFreeObj(&LAB_00443017);
  return;
LAB_004420ee:
  while (pppppppppppiVar9 = pppppppppppiVar13, sVar20 = (short)pppppppppppiVar9,
        (short)(sVar5 + 1) <= sVar20) {
    ppppppppppiStack_144 = (int **********)param_1;
    ppppppppppiStack_148 = (int **********)0x442100;
    ppppppppppiStack_148 = (int **********)(*(code *)(*param_1)[200])();
    ppppppppppiStack_14c = (int **********)&local_44;
    ppppppppppiStack_150 = (int **********)0x44210b;
    pppppppppppiVar12 = (int ***********)__vbaObjSet();
    ppppppppppiStack_148 = (int **********)&local_b4;
    ppppppppppiStack_150 = (int **********)0x44211d;
    ppppppppppiStack_14c = (int **********)pppppppppppiVar12;
    pppppppppppiVar13 = (int ***********)(*(code *)(*pppppppppppiVar12)[0x20])();
    if ((int)pppppppppppiVar13 < 0) {
      ppppppppppiStack_150 = (int **********)0x80;
      ppppppppppiStack_154 = (int **********)&DAT_004077c0;
      ppppppiStack_160 = (int ******)0x442135;
      ppppppppppiStack_15c = (int **********)pppppppppppiVar13;
      ppppppppppiStack_158 = (int **********)pppppppppppiVar12;
      __vbaHresultCheckObj();
    }
    ppppppppppiStack_150 = (int **********)param_1;
    ppppppppppiStack_154 = (int **********)0x44213e;
    ppppppppppiStack_154 = (int **********)(*(code *)(*param_1)[0xc2])();
    ppppppppppiStack_158 = &local_48;
    ppppppppppiStack_15c = (int **********)0x442149;
    pppppppppppiVar12 = (int ***********)__vbaObjSet();
    ppppppppppiStack_154 = (int **********)&local_4c;
    ppppppiStack_160 = (int ******)0x442156;
    ppppppppppiStack_15c = (int **********)pppppppppppiVar12;
    ppppppppppiStack_158 = (int **********)pppppppppppiVar9;
    iVar8 = (*(code *)(*pppppppppppiVar12)[0x10])();
    if (iVar8 < 0) {
      ppppppiStack_160 = (int ******)0x40;
      pppppcStack_164 = (code *****)&DAT_004077a0;
      pppppcStack_170 = (code *****)0x44216b;
      pppppcStack_16c = (code *****)iVar8;
      ppppppppppiStack_168 = (int **********)pppppppppppiVar12;
      __vbaHresultCheckObj();
    }
    ppppppppppiVar10 = local_4c;
    ppppppiStack_160 = param_1;
    pppppcStack_164 = (code *****)0x44217d;
    ppppppppppiStack_140 = (int **********)(*(code *)(*param_1)[0xc2])();
    ppppppppppiStack_144 = &local_3c;
    ppppppppppiStack_148 = (int **********)0x442188;
    pppppppppppiVar12 = (int ***********)__vbaObjSet();
    ppppppppppiStack_140 = (int **********)&local_40;
    ppppppppppiStack_144 =
         (int **********)CONCAT22((short)((uint)pppppppppppiVar12 >> 0x10),sVar20 + 1);
    if (SCARRY2(sVar20,1)) goto LAB_00442524;
    ppppppppppiStack_14c = (int **********)0x4421a2;
    ppppppppppiStack_148 = (int **********)pppppppppppiVar12;
    pppppppppppiVar13 = (int ***********)(*(code *)(*pppppppppppiVar12)[0x10])();
    if ((int)pppppppppppiVar13 < 0) {
      ppppppppppiStack_14c = (int **********)0x40;
      ppppppppppiStack_150 = (int **********)&DAT_004077a0;
      ppppppppppiStack_15c = (int **********)0x4421b7;
      ppppppppppiStack_158 = (int **********)pppppppppppiVar13;
      ppppppppppiStack_154 = (int **********)pppppppppppiVar12;
      __vbaHresultCheckObj();
    }
    ppppppppppiVar4 = local_40;
    ppppppppppiStack_14c = local_b0;
    ppppppppppiStack_150 = local_40;
    ppppppppppiStack_154 = (int **********)0x4421c9;
    ppppppiVar11 = (int ******)(*(code *)(*local_40)[0x1e])();
    uVar21 = 0;
    if ((int)ppppppiVar11 < 0) {
      ppppppppppiStack_154 = (int **********)0x78;
      ppppppppppiStack_158 = (int **********)&DAT_004077b0;
      ppppppppppiStack_15c = ppppppppppiVar4;
      pppppcStack_164 = (code *****)0x4421de;
      ppppppiStack_160 = ppppppiVar11;
      __vbaHresultCheckObj();
    }
    if ((uVar21 & 0xd) != 0) goto LAB_0044251f;
    ppppppppppiStack_158 = ppppppppppiVar10;
    ppppppppppiStack_15c = (int **********)0x442204;
    ppppppppppiStack_154 = (int **********)((float)local_b0[0] - local_b4);
    ppppppppppiStack_150 = (int **********)(*(code *)(*ppppppppppiVar10)[0x1f])();
    if ((int)ppppppppppiStack_150 < 0) {
      ppppppppppiStack_144 = (int **********)0x7c;
      ppppppppppiStack_148 = (int **********)&DAT_004077b0;
      ppppppppppiStack_14c = ppppppppppiVar10;
      ppppppppppiStack_154 = (int **********)0x442219;
      __vbaHresultCheckObj();
    }
    ppppppppppiStack_144 = (int **********)&local_4c;
    ppppppppppiStack_148 = &local_48;
    ppppppppppiStack_14c = (int **********)&local_44;
    ppppppppppiStack_150 = (int **********)&local_40;
    ppppppppppiStack_154 = &local_3c;
    ppppppppppiStack_158 = (int **********)0x5;
    ppppppppppiStack_15c = (int **********)0x442235;
    __vbaFreeObjList();
    pppppppppppiVar13 = (int ***********)CONCAT22(0xffff,sVar20 + -1);
    pppppppppppiVar12 = (int ***********)ppppppppppiVar10;
    if (SCARRY2(sVar20,-1)) goto LAB_00442524;
  }
  ppppppppppiStack_144 = (int **********)0x44225a;
  rtcDoEvents();
  pppppppppppiVar12 = (int ***********)param_2;
  pppppppppppiVar13 = (int ***********)CONCAT22(extraout_var,(short)local_28 + (short)local_30);
  if (SCARRY2((short)local_28,(short)local_30)) goto LAB_00442524;
  goto LAB_00442028;
  while( true ) {
    iStack_260 = (int)(short)(*(short *)((int)pppppcVar3 + 0x42) - sVar5);
    fStack_264 = (float)iStack_260;
    if ((uVar22 & 0xd) != 0) goto LAB_00442d84;
    pppppcStack_2b0 = (code *****)ppppppcVar6;
    pppppcStack_2b4 = (code *****)0x442b89;
    pppppcStack_2ac =
         (code *****)(((float)ppppcStack_1f4 - _DAT_004013cc) - fStack_264 * (float)ppppcStack_1f8);
    pppppcStack_2b8 = (code *****)(*(code *)(*ppppppcVar6)[0x1f])();
    if ((int)pppppcStack_2b8 < 0) {
      pppppcStack_2ac = (code *****)0x7c;
      pppppcStack_2b0 = (code *****)&DAT_004077b0;
      pppppcStack_2b4 = (code *****)ppppppcVar6;
      pppppcStack_2bc = (code *****)0x442b9e;
      __vbaHresultCheckObj();
    }
    pppppcStack_2ac = (code *****)&pppppcStack_18c;
    pppppcStack_2b0 = &ppppcStack_188;
    pppppcStack_2b4 = (code *****)&pppppcStack_184;
    pppppcStack_2b8 = &ppppcStack_180;
    pppppcStack_2bc = (code *****)0x4;
    pppppcStack_2c0 = (code *****)0x442bb6;
    __vbaFreeObjList();
    ppppppcVar16 = (code ******)__vbaObjSet_exref;
    ppppppcVar19 = (code ******)CONCAT22(extraout_var_02,(short)uStack_234 + sVar5);
    if (SCARRY2((short)uStack_234,sVar5)) break;
LAB_00442a7c:
    pppppcStack_174 = (code *****)ppppppcVar19;
    if ((short)uStack_238 < (short)pppppcStack_174) {
      pppppcStack_2ac = (code *****)0x442d11;
      __vbaExitProc();
      return;
    }
    pppppcStack_2ac = pppppcVar3;
    pppppcStack_2b0 = (code *****)0x442a8f;
    pppppcStack_2b0 = (code *****)(*(code *)(*pppppcVar3)[200])();
    pppppcStack_2b4 = (code *****)&pppppcStack_184;
    pppppcStack_2b8 = (code *****)0x442a96;
    ppppppcVar6 = (code ******)(*(code *)ppppppcVar16)();
    pppppcStack_2b8 = &ppppcStack_1f8;
    pppppcStack_2c0 = (code *****)0x442aa8;
    pppppcStack_2bc = (code *****)ppppppcVar6;
    ppppppcVar15 = (code ******)(*(code *)(*ppppppcVar6)[0x20])();
    if ((int)ppppppcVar15 < 0) {
      pppppcStack_2c0 = (code *****)0x80;
      pppppcStack_2c4 = (code *****)&DAT_004077c0;
      pppppcStack_2d0 = (code *****)0x442ac0;
      pppppcStack_2cc = (code *****)ppppppcVar15;
      pppppcStack_2c8 = (code *****)ppppppcVar6;
      __vbaHresultCheckObj();
    }
    pppppcStack_2c0 = pppppcVar3;
    pppppcStack_2c4 = (code *****)0x442ac9;
    pppppcStack_2c4 = (code *****)(*(code *)(*pppppcVar3)[0xc2])();
    pppppcStack_2c8 = &ppppcStack_188;
    pppppcStack_2cc = (code *****)0x442ad0;
    ppppppcVar6 = (code ******)(*(code *)ppppppcVar16)();
    pppppcStack_2cc = (code *****)&pppppcStack_18c;
    pppppcStack_2d0 = pppppcStack_174;
    pppppcStack_2d8 = (code *****)0x442ae0;
    pppppcStack_2d4 = (code *****)ppppppcVar6;
    iVar8 = (*(code *)(*ppppppcVar6)[0x10])();
    if (iVar8 < 0) {
      pppppcStack_2d8 = (code *****)0x40;
      ppppcStack_2dc = (code ****)&DAT_004077a0;
      uStack_2e8 = 0x442af5;
      iStack_2e4 = iVar8;
      pppppcStack_2e0 = (code *****)ppppppcVar6;
      __vbaHresultCheckObj();
    }
    ppppppcVar6 = (code ******)pppppcStack_18c;
    pppppcStack_2d8 = pppppcVar3;
    ppppcStack_2dc = (code ****)0x442b01;
    ppppcStack_2dc = (code ****)(*(code *)(*pppppcVar3)[0xc1])();
    pppppcStack_2e0 = &ppppcStack_180;
    iStack_2e4 = 0x442b0c;
    ppppppcVar15 = (code ******)__vbaObjSet();
    ppppcStack_2dc = (code ****)&ppppcStack_1f4;
    iStack_2e4 = 0x442b1e;
    pppppcStack_2e0 = (code *****)ppppppcVar15;
    ppppppcVar16 = (code ******)(*(code *)(*ppppppcVar15)[0x22])();
    uVar22 = 0;
    if ((int)ppppppcVar16 < 0) {
      pppppcStack_2ac = (code *****)0x88;
      pppppcStack_2b0 = (code *****)&DAT_004077b0;
      pppppcStack_2bc = (code *****)0x442b36;
      pppppcStack_2b8 = (code *****)ppppppcVar16;
      pppppcStack_2b4 = (code *****)ppppppcVar15;
      __vbaHresultCheckObj();
    }
    ppppppcVar15 = (code ******)pppppcStack_174;
    sVar5 = (short)pppppcStack_174;
    if (SBORROW2(*(short *)((int)pppppcVar3 + 0x42),sVar5)) break;
  }
  goto LAB_00442d89;
}


// ---- FUN_00442530 @ 00442530

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00442530(undefined ******param_1)

{
  undefined **********ppppppppppuVar1;
  undefined *********pppppppppuVar2;
  short sVar3;
  int *piVar4;
  undefined *puVar5;
  int iVar6;
  undefined **********ppppppppppuVar7;
  undefined **********ppppppppppuVar8;
  undefined **********ppppppppppuVar9;
  undefined **********ppppppppppuVar10;
  undefined4 uVar11;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  short sVar12;
  ushort uVar13;
  undefined *********pppppppppuStack_234;
  undefined ******ppppppuStack_230;
  undefined *********pppppppppuStack_22c;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1cc;
  undefined4 uStack_1bc;
  undefined4 uStack_1ac;
  int iStack_1a8;
  undefined *********pppppppppuStack_1a4;
  undefined ********ppppppppuStack_1a0;
  undefined ******ppppppuStack_19c;
  undefined *********pppppppppuStack_198;
  undefined *********pppppppppuStack_194;
  undefined *********pppppppppuStack_190;
  undefined *********pppppppppuStack_18c;
  undefined *********pppppppppuStack_188;
  undefined *********pppppppppuStack_184;
  undefined *********pppppppppuStack_180;
  undefined *********pppppppppuStack_17c;
  undefined *********pppppppppuStack_178;
  undefined *********pppppppppuStack_174;
  undefined *********pppppppppuStack_170;
  undefined *********pppppppppuStack_16c;
  undefined ********ppppppppuStack_168;
  undefined ******ppppppuStack_164;
  undefined *********pppppppppuStack_160;
  undefined ********ppppppppuStack_15c;
  undefined *********pppppppppuStack_158;
  undefined *********pppppppppuStack_154;
  undefined ********ppppppppuStack_150;
  int *piStack_14c;
  undefined *********pppppppppuStack_148;
  undefined *********pppppppppuStack_144;
  undefined ********ppppppppuStack_140;
  undefined4 uStack_13c;
  undefined ******ppppppuStack_138;
  undefined ********local_bc;
  undefined ********local_b8;
  undefined4 local_b4;
  undefined ********local_a4 [2];
  undefined4 local_9c;
  undefined4 local_94;
  undefined4 local_84;
  undefined4 local_74;
  undefined4 local_64 [4];
  undefined *********local_54;
  undefined *********local_50;
  undefined ********local_4c;
  undefined *********local_48;
  undefined ********local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined *********local_38;
  undefined *********local_34;
  undefined *********local_30;
  undefined4 local_2c;
  undefined *********local_28;
  void *pvStack_20;
  undefined *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  puStack_1c = &DAT_00401ce6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xfffffecc;
  local_14 = &DAT_004013a8;
  local_10 = 0;
  local_c = 0;
  ppppppuStack_138 = param_1;
  uStack_13c = 0x44256d;
  ExceptionList = &pvStack_20;
  (*(code *)(*param_1)[1])();
  local_3c = 0;
  local_40 = 0;
  local_44 = (undefined ********)0x0;
  local_48 = (undefined *********)0x0;
  local_4c = (undefined ********)0x0;
  local_50 = (undefined *********)0x0;
  local_54 = (undefined *********)0x0;
  local_64[0] = 0;
  local_74 = 0;
  local_84 = 0;
  local_94 = 0;
  local_a4[0] = (undefined ********)0x0;
  local_b4 = 0;
  local_b8 = (undefined ********)0x0;
  local_bc = (undefined ********)0x0;
  uStack_13c = 1;
  ppppppppuStack_140 = (undefined ********)0x4425b1;
  __vbaOnError();
  local_9c = 0;
  local_a4[0] = (undefined ********)0x8002;
  uStack_13c = 0x4425d4;
  uStack_13c = __vbaVarVargNofree();
  ppppppppuStack_140 = (undefined ********)local_a4;
  pppppppppuStack_144 = (undefined *********)0x4425e2;
  sVar3 = __vbaVarTstEq();
  if (sVar3 == 0) {
    local_9c = 3;
    local_a4[0] = (undefined ********)0x8002;
    uStack_13c = 0x442605;
    uStack_13c = __vbaVarVargNofree();
    ppppppppuStack_140 = (undefined ********)local_a4;
    pppppppppuStack_144 = (undefined *********)0x442613;
    sVar3 = __vbaVarTstEq();
    if (sVar3 == 0) goto LAB_0044262e;
    uStack_13c = 0x442622;
    uStack_13c = __vbaVarVargNofree();
    ppppppppuStack_140 = (undefined ********)0x442629;
    local_30 = (undefined *********)__vbaI2Var();
  }
  else {
LAB_0044262e:
    local_9c = 1;
    local_a4[0] = (undefined ********)0x2;
    uStack_13c = 0x44264c;
    uStack_13c = __vbaVarVargNofree();
    ppppppppuStack_140 = (undefined ********)local_a4;
    pppppppppuStack_144 = (undefined *********)local_64;
    pppppppppuStack_148 = (undefined *********)0x44265e;
    uStack_13c = __vbaVarAdd();
    ppppppppuStack_140 = (undefined ********)0x442665;
    local_30 = (undefined *********)__vbaI2Var();
    pppppppppuStack_144 = (undefined *********)0x442671;
    __vbaFreeVar();
  }
  ppppppppuStack_140 = (undefined ********)param_1;
  pppppppppuStack_144 = (undefined *********)0x44267a;
  pppppppppuStack_144 = (undefined *********)(*(code *)(*param_1)[0xc2])();
  ppppppppppuVar9 = (undefined **********)__vbaObjSet_exref;
  pppppppppuStack_148 = &local_44;
  piStack_14c = (int *)0x442687;
  piVar4 = (int *)__vbaObjSet();
  pppppppppuStack_144 = (undefined *********)&local_48;
  pppppppppuStack_148 = local_30;
  ppppppppuStack_150 = (undefined ********)0x442697;
  piStack_14c = piVar4;
  puVar5 = (undefined *)(**(code **)(*piVar4 + 0x40))();
  if ((int)puVar5 < 0) {
    ppppppppuStack_150 = (undefined ********)0x40;
    pppppppppuStack_154 = (undefined *********)&DAT_004077a0;
    pppppppppuStack_160 = (undefined *********)0x4426ac;
    ppppppppuStack_15c = (undefined ********)puVar5;
    pppppppppuStack_158 = (undefined *********)piVar4;
    __vbaHresultCheckObj();
  }
  pppppppppuVar2 = local_48;
  ppppppppuStack_150 = (undefined ********)&local_b8;
  pppppppppuStack_154 = local_48;
  pppppppppuStack_158 = (undefined *********)0x4426be;
  iVar6 = (*(code *)(*local_48)[0x1e])();
  if (iVar6 < 0) {
    pppppppppuStack_158 = (undefined *********)0x78;
    ppppppppuStack_15c = (undefined ********)&DAT_004077b0;
    pppppppppuStack_160 = pppppppppuVar2;
    ppppppppuStack_168 = (undefined ********)0x4426d3;
    ppppppuStack_164 = (undefined ******)iVar6;
    __vbaHresultCheckObj();
  }
  pppppppppuStack_158 = (undefined *********)0x4426df;
  local_34 = (undefined *********)__vbaFpI2();
  pppppppppuStack_158 = (undefined *********)&local_48;
  ppppppppuStack_15c = (undefined ********)&local_44;
  pppppppppuStack_160 = (undefined *********)0x2;
  ppppppuStack_164 = (undefined ******)0x4426f2;
  __vbaFreeObjList();
  pppppppppuStack_158 = (undefined *********)param_1;
  ppppppppuStack_15c = (undefined ********)0x4426fe;
  ppppppppuStack_15c = (undefined ********)(*(code *)(*param_1)[200])();
  pppppppppuStack_160 = (undefined *********)&local_48;
  ppppppuStack_164 = (undefined ******)0x442705;
  piVar4 = (int *)__vbaObjSet();
  ppppppppuStack_15c = (undefined ********)&local_bc;
  ppppppuStack_164 = (undefined ******)0x442717;
  pppppppppuStack_160 = (undefined *********)piVar4;
  iVar6 = (**(code **)(*piVar4 + 0x80))();
  if (iVar6 < 0) {
    ppppppuStack_164 = (undefined ******)0x80;
    ppppppppuStack_168 = (undefined ********)&DAT_004077c0;
    pppppppppuStack_174 = (undefined *********)0x44272f;
    pppppppppuStack_170 = (undefined *********)iVar6;
    pppppppppuStack_16c = (undefined *********)piVar4;
    __vbaHresultCheckObj();
  }
  ppppppuStack_164 = param_1;
  ppppppppuStack_168 = (undefined ********)0x442738;
  ppppppppuStack_168 = (undefined ********)(*(code *)(*param_1)[0xc1])();
  pppppppppuStack_16c = &local_44;
  pppppppppuStack_170 = (undefined *********)0x44273f;
  ppppppppppuVar7 = (undefined **********)__vbaObjSet();
  ppppppppuStack_168 = (undefined ********)&local_b8;
  pppppppppuStack_170 = (undefined *********)0x442751;
  pppppppppuStack_16c = (undefined *********)ppppppppppuVar7;
  ppppppppppuVar8 = (undefined **********)(*(code *)(*ppppppppppuVar7)[0x22])();
  uVar13 = 0;
  if ((int)ppppppppppuVar8 < 0) {
    pppppppppuStack_170 = (undefined *********)0x88;
    pppppppppuStack_174 = (undefined *********)&DAT_004077b0;
    pppppppppuStack_180 = (undefined *********)0x442769;
    pppppppppuStack_17c = (undefined *********)ppppppppppuVar8;
    pppppppppuStack_178 = (undefined *********)ppppppppppuVar7;
    __vbaHresultCheckObj();
  }
  if (!SBORROW2(*(short *)((int)param_1 + 0x42),(short)local_30)) {
    if ((uVar13 & 0xd) != 0) {
LAB_00442d84:
      __vbaFPException();
      return;
    }
    pppppppppuStack_170 = (undefined *********)0x4427b6;
    local_2c = __vbaFpI2();
    pppppppppuStack_170 = (undefined *********)&local_48;
    pppppppppuStack_174 = &local_44;
    pppppppppuStack_178 = (undefined *********)0x2;
    pppppppppuStack_17c = (undefined *********)0x4427c9;
    __vbaFreeObjList();
    local_9c = CONCAT22(local_9c._2_2_,*(undefined2 *)((int)param_1 + 0x42));
    local_a4[0] = (undefined ********)0x8002;
    pppppppppuStack_170 = (undefined *********)0x4427f0;
    pppppppppuStack_170 = (undefined *********)__vbaVarVargNofree();
    pppppppppuStack_174 = local_a4;
    pppppppppuStack_178 = (undefined *********)0x4427fe;
    sVar3 = __vbaVarTstLt();
    local_28 = (undefined *********)((-(uint)(sVar3 != 0) & 5) + 5);
    local_38 = local_34;
    ppppppppppuVar8 = ppppppppppuVar9;
    ppppppppppuVar7 = (undefined **********)local_28;
    ppppppppppuVar10 = (undefined **********)local_38;
    while (local_38 = (undefined *********)ppppppppppuVar10, ppppppppppuVar9 = ppppppppppuVar8,
          uVar13 = (short)ppppppppppuVar7 >> 0xf,
          (short)(uVar13 ^ (ushort)local_38) <= (short)(uVar13 ^ (ushort)local_2c)) {
      pppppppppuStack_170 = (undefined *********)param_1;
      pppppppppuStack_174 = (undefined *********)0x442836;
      pppppppppuStack_174 = (undefined *********)(*(code *)(*param_1)[0xc2])();
      pppppppppuStack_178 = &local_44;
      pppppppppuStack_17c = (undefined *********)0x44283d;
      ppppppppppuVar9 = (undefined **********)(*(code *)ppppppppppuVar9)();
      pppppppppuStack_17c = (undefined *********)&local_48;
      pppppppppuStack_180 = local_30;
      pppppppppuStack_188 = (undefined *********)0x44284d;
      pppppppppuStack_184 = (undefined *********)ppppppppppuVar9;
      ppppppppppuVar8 = (undefined **********)(*(code *)(*ppppppppppuVar9)[0x10])();
      if ((int)ppppppppppuVar8 < 0) {
        pppppppppuStack_188 = (undefined *********)0x40;
        pppppppppuStack_18c = (undefined *********)&DAT_004077a0;
        pppppppppuStack_198 = (undefined *********)0x442862;
        pppppppppuStack_194 = (undefined *********)ppppppppppuVar8;
        pppppppppuStack_190 = (undefined *********)ppppppppppuVar9;
        __vbaHresultCheckObj();
      }
      pppppppppuVar2 = local_48;
      pppppppppuStack_188 = (undefined *********)(float)(int)(short)local_38;
      pppppppppuStack_18c = local_48;
      pppppppppuStack_190 = (undefined *********)0x44288a;
      pppppppppuStack_17c = (undefined *********)(*(code *)(*local_48)[0x1f])();
      if ((int)pppppppppuStack_17c < 0) {
        pppppppppuStack_170 = (undefined *********)0x7c;
        pppppppppuStack_174 = (undefined *********)&DAT_004077b0;
        pppppppppuStack_178 = pppppppppuVar2;
        pppppppppuStack_180 = (undefined *********)0x44289f;
        __vbaHresultCheckObj();
      }
      pppppppppuStack_170 = (undefined *********)&local_48;
      pppppppppuStack_174 = &local_44;
      pppppppppuStack_178 = (undefined *********)0x2;
      pppppppppuStack_17c = (undefined *********)0x4428af;
      __vbaFreeObjList();
      pppppppppuStack_170 = (undefined *********)0x4428b8;
      rtcDoEvents();
      sVar3 = *(short *)(param_1 + 0x10);
      ppppppppppuVar8 =
           (undefined **********)CONCAT22((short)((uint)pppppppppuVar2 >> 0x10),(short)local_30 + 1)
      ;
      ppppppppppuVar9 = ppppppppppuVar8;
      ppppppppppuVar10 = ppppppppppuVar7;
      ppppppppppuVar1 = ppppppppppuVar7;
      sVar12 = (short)local_30;
      while( true ) {
        ppppppppppuVar7 = ppppppppppuVar10;
        if (SCARRY2(sVar12,1)) goto LAB_00442d89;
        sVar12 = (short)ppppppppppuVar8;
        ppppppppppuVar9 = ppppppppppuVar8;
        if (sVar3 < sVar12) break;
        pppppppppuStack_170 = (undefined *********)param_1;
        pppppppppuStack_174 = (undefined *********)0x4428e7;
        pppppppppuStack_174 = (undefined *********)(*(code *)(*param_1)[200])();
        pppppppppuStack_178 = &local_4c;
        pppppppppuStack_17c = (undefined *********)0x4428f2;
        ppppppppppuVar7 = (undefined **********)__vbaObjSet();
        pppppppppuStack_174 = &local_bc;
        pppppppppuStack_17c = (undefined *********)0x442904;
        pppppppppuStack_178 = (undefined *********)ppppppppppuVar7;
        ppppppppppuVar10 = (undefined **********)(*(code *)(*ppppppppppuVar7)[0x20])();
        if ((int)ppppppppppuVar10 < 0) {
          pppppppppuStack_17c = (undefined *********)0x80;
          pppppppppuStack_180 = (undefined *********)&DAT_004077c0;
          pppppppppuStack_18c = (undefined *********)0x44291c;
          pppppppppuStack_188 = (undefined *********)ppppppppppuVar10;
          pppppppppuStack_184 = (undefined *********)ppppppppppuVar7;
          __vbaHresultCheckObj();
        }
        pppppppppuStack_17c = (undefined *********)param_1;
        pppppppppuStack_180 = (undefined *********)0x442925;
        pppppppppuStack_180 = (undefined *********)(*(code *)(*param_1)[0xc2])();
        pppppppppuStack_184 = (undefined *********)&local_50;
        pppppppppuStack_188 = (undefined *********)0x442930;
        ppppppppppuVar7 = (undefined **********)__vbaObjSet();
        pppppppppuStack_180 = (undefined *********)&local_54;
        pppppppppuStack_18c = (undefined *********)0x44293d;
        pppppppppuStack_188 = (undefined *********)ppppppppppuVar7;
        pppppppppuStack_184 = (undefined *********)ppppppppppuVar8;
        ppppppppppuVar8 = (undefined **********)(*(code *)(*ppppppppppuVar7)[0x10])();
        if ((int)ppppppppppuVar8 < 0) {
          pppppppppuStack_18c = (undefined *********)0x40;
          pppppppppuStack_190 = (undefined *********)&DAT_004077a0;
          ppppppuStack_19c = (undefined ******)0x442952;
          pppppppppuStack_198 = (undefined *********)ppppppppppuVar8;
          pppppppppuStack_194 = (undefined *********)ppppppppppuVar7;
          __vbaHresultCheckObj();
        }
        ppppppppppuVar10 = (undefined **********)local_54;
        pppppppppuStack_18c = (undefined *********)param_1;
        pppppppppuStack_190 = (undefined *********)0x442964;
        pppppppppuStack_16c = (undefined *********)(*(code *)(*param_1)[0xc2])();
        pppppppppuStack_170 = &local_44;
        pppppppppuStack_174 = (undefined *********)0x44296f;
        ppppppppppuVar7 = (undefined **********)__vbaObjSet();
        pppppppppuStack_16c = (undefined *********)&local_48;
        pppppppppuStack_170 =
             (undefined *********)CONCAT22((short)((uint)ppppppppppuVar7 >> 0x10),sVar12 + -1);
        if (SBORROW2(sVar12,1)) goto LAB_00442d89;
        pppppppppuStack_178 = (undefined *********)0x442989;
        pppppppppuStack_174 = (undefined *********)ppppppppppuVar7;
        ppppppppppuVar8 = (undefined **********)(*(code *)(*ppppppppppuVar7)[0x10])();
        if ((int)ppppppppppuVar8 < 0) {
          pppppppppuStack_178 = (undefined *********)0x40;
          pppppppppuStack_17c = (undefined *********)&DAT_004077a0;
          pppppppppuStack_188 = (undefined *********)0x44299e;
          pppppppppuStack_184 = (undefined *********)ppppppppppuVar8;
          pppppppppuStack_180 = (undefined *********)ppppppppppuVar7;
          __vbaHresultCheckObj();
        }
        pppppppppuVar2 = local_48;
        pppppppppuStack_178 = &local_b8;
        pppppppppuStack_17c = local_48;
        pppppppppuStack_180 = (undefined *********)0x4429b0;
        ppppppppppuVar7 = (undefined **********)(*(code *)(*local_48)[0x1e])();
        uVar13 = 0;
        if ((int)ppppppppppuVar7 < 0) {
          pppppppppuStack_170 = (undefined *********)0x78;
          pppppppppuStack_174 = (undefined *********)&DAT_004077b0;
          pppppppppuStack_178 = pppppppppuVar2;
          pppppppppuStack_180 = (undefined *********)0x4429c5;
          pppppppppuStack_17c = (undefined *********)ppppppppppuVar7;
          __vbaHresultCheckObj();
        }
        if ((uVar13 & 0xd) != 0) goto LAB_00442d84;
        pppppppppuStack_174 = (undefined *********)ppppppppppuVar10;
        pppppppppuStack_178 = (undefined *********)0x4429eb;
        pppppppppuStack_170 = (undefined *********)((float)local_bc + (float)local_b8);
        pppppppppuStack_17c = (undefined *********)(*(code *)(*ppppppppppuVar10)[0x1f])();
        if ((int)pppppppppuStack_17c < 0) {
          pppppppppuStack_170 = (undefined *********)0x7c;
          pppppppppuStack_174 = (undefined *********)&DAT_004077b0;
          pppppppppuStack_178 = (undefined *********)ppppppppppuVar10;
          pppppppppuStack_180 = (undefined *********)0x442a00;
          __vbaHresultCheckObj();
        }
        pppppppppuStack_170 = (undefined *********)&local_54;
        pppppppppuStack_174 = (undefined *********)&local_50;
        pppppppppuStack_178 = &local_4c;
        pppppppppuStack_17c = (undefined *********)&local_48;
        pppppppppuStack_180 = &local_44;
        pppppppppuStack_184 = (undefined *********)0x5;
        pppppppppuStack_188 = (undefined *********)0x442a1c;
        __vbaFreeObjList();
        ppppppppppuVar8 = (undefined **********)(uint)(ushort)(sVar12 + 1);
        ppppppppppuVar1 = (undefined **********)local_28;
      }
      pppppppppuStack_170 = (undefined *********)0x442a3d;
      rtcDoEvents();
      ppppppppppuVar8 = (undefined **********)__vbaObjSet_exref;
      ppppppppppuVar7 = ppppppppppuVar1;
      ppppppppppuVar10 =
           (undefined **********)CONCAT22(extraout_var,(short)ppppppppppuVar1 + (short)local_38);
      if (SCARRY2((short)ppppppppppuVar1,(short)local_38)) goto LAB_00442d89;
    }
    sVar3 = *(short *)((int)param_1 + 0x42);
    if (!SBORROW2(sVar3,1)) {
      local_38 = local_30;
      ppppppppppuVar8 = ppppppppppuVar9;
      ppppppppppuVar10 = (undefined **********)local_38;
      goto LAB_00442a7c;
    }
  }
LAB_00442d89:
  pppppppppuStack_170 = (undefined *********)0x442d8f;
  __vbaErrorOverflow();
  pppppppppuStack_184 = (undefined *********)&DAT_00401ce6;
  pppppppppuStack_188 = ExceptionList;
  ppppppuStack_230 = param_1;
  pppppppppuStack_180 = (undefined *********)&pppppppppuStack_234;
  pppppppppuStack_17c = (undefined *********)&DAT_004013d0;
  pppppppppuStack_178 = (undefined *********)((uint)ppppppuStack_164 & 1);
  piVar4 = (int *)((uint)ppppppuStack_164 & 0xfffffffe);
  pppppppppuStack_174 = (undefined *********)0x0;
  ExceptionList = &pppppppppuStack_188;
  pppppppppuStack_234 = (undefined *********)ppppppppppuVar7;
  pppppppppuStack_22c = (undefined *********)ppppppppppuVar9;
  pppppppppuStack_16c = (undefined *********)&stack0xfffffffc;
  ppppppuStack_164 = (undefined ******)piVar4;
  (**(code **)(*piVar4 + 4))(piVar4);
  pppppppppuStack_18c = (undefined *********)0x0;
  pppppppppuStack_190 = (undefined *********)0x0;
  pppppppppuStack_194 = (undefined *********)0x0;
  pppppppppuStack_198 = (undefined *********)0x0;
  ppppppuStack_19c = (undefined ******)0x0;
  uStack_1ac = 0;
  uStack_1bc = 0;
  uStack_1cc = 0;
  uStack_1dc = 0;
  uStack_1ec = 0;
  uStack_1fc = 0;
  __vbaOnError(1);
  uVar11 = __vbaNew(&DAT_00402d84);
  __vbaObjSet(&pppppppppuStack_18c,uVar11);
  iVar6 = (*(code *)(*pppppppppuStack_18c)[0xac])
                    (pppppppppuStack_18c,3,uStack_1e8,1,uStack_1e0,9,uStack_1f8,piVar4,uStack_1f0);
  if (iVar6 < 0) {
    __vbaHresultCheckObj(iVar6,pppppppppuStack_18c,&DAT_00407040,0x2b0);
  }
  uVar11 = __vbaCastObj(0,&DAT_00407070);
  __vbaObjSet(&pppppppppuStack_18c,uVar11);
  __vbaExitProc();
  __vbaFreeObj(&LAB_00443017);
  return;
  while( true ) {
    if ((uVar13 & 0xd) != 0) goto LAB_00442d84;
    pppppppppuStack_174 = (undefined *********)ppppppppppuVar9;
    pppppppppuStack_178 = (undefined *********)0x442b89;
    pppppppppuStack_170 =
         (undefined *********)
         (((float)local_b8 - _DAT_004013cc) -
         (float)(int)(short)(*(short *)((int)param_1 + 0x42) - sVar12) * (float)local_bc);
    pppppppppuStack_17c = (undefined *********)(*(code *)(*ppppppppppuVar9)[0x1f])();
    if ((int)pppppppppuStack_17c < 0) {
      pppppppppuStack_170 = (undefined *********)0x7c;
      pppppppppuStack_174 = (undefined *********)&DAT_004077b0;
      pppppppppuStack_178 = (undefined *********)ppppppppppuVar9;
      pppppppppuStack_180 = (undefined *********)0x442b9e;
      __vbaHresultCheckObj();
    }
    pppppppppuStack_170 = (undefined *********)&local_50;
    pppppppppuStack_174 = &local_4c;
    pppppppppuStack_178 = (undefined *********)&local_48;
    pppppppppuStack_17c = &local_44;
    pppppppppuStack_180 = (undefined *********)0x4;
    pppppppppuStack_184 = (undefined *********)0x442bb6;
    __vbaFreeObjList();
    ppppppppppuVar8 = (undefined **********)__vbaObjSet_exref;
    ppppppppppuVar10 = (undefined **********)CONCAT22(extraout_var_00,sVar12 + 1);
    if (SCARRY2(sVar12,1)) break;
LAB_00442a7c:
    local_38 = (undefined *********)ppppppppppuVar10;
    if ((short)(sVar3 + -1) < (short)local_38) {
      pppppppppuStack_170 = (undefined *********)0x442d11;
      __vbaExitProc();
      return;
    }
    pppppppppuStack_170 = (undefined *********)param_1;
    pppppppppuStack_174 = (undefined *********)0x442a8f;
    pppppppppuStack_174 = (undefined *********)(*(code *)(*param_1)[200])();
    pppppppppuStack_178 = (undefined *********)&local_48;
    pppppppppuStack_17c = (undefined *********)0x442a96;
    ppppppppppuVar9 = (undefined **********)(*(code *)ppppppppppuVar8)();
    pppppppppuStack_17c = &local_bc;
    pppppppppuStack_184 = (undefined *********)0x442aa8;
    pppppppppuStack_180 = (undefined *********)ppppppppppuVar9;
    ppppppppppuVar7 = (undefined **********)(*(code *)(*ppppppppppuVar9)[0x20])();
    if ((int)ppppppppppuVar7 < 0) {
      pppppppppuStack_184 = (undefined *********)0x80;
      pppppppppuStack_188 = (undefined *********)&DAT_004077c0;
      pppppppppuStack_194 = (undefined *********)0x442ac0;
      pppppppppuStack_190 = (undefined *********)ppppppppppuVar7;
      pppppppppuStack_18c = (undefined *********)ppppppppppuVar9;
      __vbaHresultCheckObj();
    }
    pppppppppuStack_184 = (undefined *********)param_1;
    pppppppppuStack_188 = (undefined *********)0x442ac9;
    pppppppppuStack_188 = (undefined *********)(*(code *)(*param_1)[0xc2])();
    pppppppppuStack_18c = &local_4c;
    pppppppppuStack_190 = (undefined *********)0x442ad0;
    ppppppppppuVar9 = (undefined **********)(*(code *)ppppppppppuVar8)();
    pppppppppuStack_190 = (undefined *********)&local_50;
    pppppppppuStack_194 = local_38;
    ppppppuStack_19c = (undefined ******)0x442ae0;
    pppppppppuStack_198 = (undefined *********)ppppppppppuVar9;
    iVar6 = (*(code *)(*ppppppppppuVar9)[0x10])();
    if (iVar6 < 0) {
      ppppppuStack_19c = (undefined ******)0x40;
      ppppppppuStack_1a0 = (undefined ********)&DAT_004077a0;
      uStack_1ac = 0x442af5;
      iStack_1a8 = iVar6;
      pppppppppuStack_1a4 = (undefined *********)ppppppppppuVar9;
      __vbaHresultCheckObj();
    }
    ppppppppppuVar9 = (undefined **********)local_50;
    ppppppuStack_19c = param_1;
    ppppppppuStack_1a0 = (undefined ********)0x442b01;
    ppppppppuStack_1a0 = (undefined ********)(*(code *)(*param_1)[0xc1])();
    pppppppppuStack_1a4 = &local_44;
    iStack_1a8 = 0x442b0c;
    ppppppppppuVar7 = (undefined **********)__vbaObjSet();
    ppppppppuStack_1a0 = (undefined ********)&local_b8;
    iStack_1a8 = 0x442b1e;
    pppppppppuStack_1a4 = (undefined *********)ppppppppppuVar7;
    ppppppppppuVar8 = (undefined **********)(*(code *)(*ppppppppppuVar7)[0x22])();
    uVar13 = 0;
    if ((int)ppppppppppuVar8 < 0) {
      pppppppppuStack_170 = (undefined *********)0x88;
      pppppppppuStack_174 = (undefined *********)&DAT_004077b0;
      pppppppppuStack_180 = (undefined *********)0x442b36;
      pppppppppuStack_17c = (undefined *********)ppppppppppuVar8;
      pppppppppuStack_178 = (undefined *********)ppppppppppuVar7;
      __vbaHresultCheckObj();
    }
    ppppppppppuVar7 = (undefined **********)local_38;
    sVar12 = (short)local_38;
    if (SBORROW2(*(short *)((int)param_1 + 0x42),sVar12)) break;
  }
  goto LAB_00442d89;
}


// ---- FUN_00442d90 @ 00442d90

void __cdecl FUN_00442d90(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  int *local_24;
  void *pvStack_20;
  undefined *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  uint local_10;
  undefined4 local_c;
  
  puStack_1c = &DAT_00401ce6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffff34;
  local_14 = &DAT_004013d0;
  local_10 = param_1 & 1;
  piVar3 = (int *)(param_1 & 0xfffffffe);
  local_c = 0;
  ExceptionList = &pvStack_20;
  (**(code **)(*piVar3 + 4))(piVar3);
  local_24 = (int *)0x0;
  __vbaOnError(1);
  uVar1 = __vbaNew(&DAT_00402d84);
  __vbaObjSet(&local_24,uVar1);
  iVar2 = (**(code **)(*local_24 + 0x2b0))
                    (local_24,3,local_80,1,local_78,9,local_90,piVar3,local_88);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_24,&DAT_00407040,0x2b0);
  }
  uVar1 = __vbaCastObj(0,&DAT_00407070);
  __vbaObjSet(&local_24,uVar1);
  __vbaExitProc();
  __vbaFreeObj(&LAB_00443017);
  return;
}


// ---- FUN_00443040 @ 00443040

void __cdecl FUN_00443040(uint param_1,short *param_2)

{
  short sVar1;
  bool bVar2;
  float fVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  ushort uVar9;
  float *in_stack_00000018;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float local_98 [5];
  undefined4 local_84;
  undefined4 local_80;
  short *local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_64;
  undefined4 local_54;
  undefined4 local_44;
  int *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  void *pvStack_20;
  undefined *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  uint local_10;
  undefined4 local_c;
  
  puStack_1c = &DAT_00401ce6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffff20;
  local_14 = &DAT_004013f8;
  local_10 = param_1 & 1;
  piVar8 = (int *)(param_1 & 0xfffffffe);
  local_c = 0;
  ExceptionList = &pvStack_20;
  (**(code **)(*piVar8 + 4))(piVar8);
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_30 = 0;
  local_34 = (int *)0x0;
  local_44 = 0;
  local_54 = 0;
  local_64 = 0;
  local_74 = 0;
  local_84 = 0;
  local_98[0] = 0.0;
  __vbaOnError(1);
  *(undefined2 *)((int)piVar8 + 0x42) = 4;
  if ((short)piVar8[0x10] == *param_2) {
    uVar4 = (**(code **)(*piVar8 + 0x328))(piVar8);
    piVar5 = (int *)__vbaObjSet(&local_30,uVar4);
    sVar1 = *param_2;
    if (3 < (uint)(int)sVar1) {
      __vbaGenerateBoundsError();
    }
    iVar6 = (**(code **)(*piVar5 + 0x54))(piVar5,*(undefined4 *)(piVar8[0x1c] + sVar1 * 4));
  }
  else {
    uVar4 = (**(code **)(*piVar8 + 800))(piVar8);
    piVar5 = (int *)__vbaObjSet(&local_30,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x80))(piVar5,local_98);
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_004077c0,0x80);
    }
    bVar2 = local_98[0] < *in_stack_00000018;
    __vbaFreeObj();
    if (bVar2) goto LAB_004436e3;
    uVar4 = (**(code **)(*piVar8 + 800))(piVar8);
    piVar5 = (int *)__vbaObjSet(&local_30,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x80))(piVar5,local_98);
    uVar9 = 0;
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_004077c0,0x80);
    }
    if ((uVar9 & 0xd) != 0) {
      __vbaFPException();
      return;
    }
    local_24 = __vbaFpI2();
    __vbaFreeObj();
    uVar4 = (**(code **)(*piVar8 + 0x308))(piVar8);
    piVar5 = (int *)__vbaObjSet(&local_30,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x40))
                      (piVar5,CONCAT22((short)((uint)&local_34 >> 0x10),*param_2),&local_34);
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_004077a0,0x40);
    }
    piVar5 = local_34;
    iVar6 = (**(code **)(*local_34 + 0x78))(local_34,local_98);
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_004077b0,0x78);
    }
    fVar3 = local_98[0];
    iVar6 = (int)(short)local_24;
    __vbaFreeObjList(2,&local_30,&local_34);
    if (fVar3 <= (float)iVar6) {
      local_7c = param_2;
      local_84 = 0x4002;
      iVar6 = (**(code **)(*piVar8 + 0x704))(piVar8,&local_84);
      if (iVar6 < 0) {
        uVar4 = 0x704;
        goto LAB_004432df;
      }
    }
    else {
      iVar6 = (**(code **)(*piVar8 + 0x700))(piVar8,param_2,&local_24);
      if (iVar6 < 0) {
        uVar4 = 0x700;
LAB_004432df:
        __vbaHresultCheckObj(iVar6,piVar8,&DAT_00406764,uVar4);
      }
    }
    *(short *)(piVar8 + 0x10) = *param_2;
    local_7c = (short *)0x0;
    local_84 = 0xb;
    uVar12 = 0xb;
    uVar13 = 0;
    uVar11 = 0x80010007;
    piVar5 = piVar8;
    uVar4 = local_80;
    uVar7 = (**(code **)(*piVar8 + 0x354))(piVar8,0x80010007,0xb,local_80,0,local_78);
    uVar7 = __vbaObjSet(&local_30,uVar7);
    __vbaLateIdSt(uVar7,piVar5,uVar11,uVar12,uVar4,uVar13);
    __vbaFreeObj();
    local_7c = (short *)0x0;
    local_84 = 0xb;
    uVar12 = 0xb;
    uVar13 = 0;
    uVar11 = 0x80010007;
    piVar5 = piVar8;
    uVar4 = local_80;
    uVar7 = (**(code **)(*piVar8 + 0x358))(piVar8,0x80010007,0xb,local_80,0,local_78);
    uVar7 = __vbaObjSet(&local_30,uVar7);
    __vbaLateIdSt(uVar7,piVar5,uVar11,uVar12,uVar4,uVar13);
    __vbaFreeObj();
    local_7c = (short *)0x0;
    local_84 = 0xb;
    uVar12 = 0xb;
    uVar13 = 0;
    uVar11 = 0x80010007;
    piVar5 = piVar8;
    uVar4 = local_80;
    uVar7 = (**(code **)(*piVar8 + 0x35c))(piVar8,0x80010007,0xb,local_80,0,local_78);
    uVar7 = __vbaObjSet(&local_30,uVar7);
    __vbaLateIdSt(uVar7,piVar5,uVar11,uVar12,uVar4,uVar13);
    __vbaFreeObj();
    local_7c = (short *)0x0;
    local_84 = 0xb;
    uVar12 = 0xb;
    uVar13 = 0;
    uVar11 = 0x80010007;
    piVar5 = piVar8;
    uVar4 = local_80;
    uVar7 = (**(code **)(*piVar8 + 0x360))(piVar8,0x80010007,0xb,local_80,0,local_78);
    uVar7 = __vbaObjSet(&local_30,uVar7);
    __vbaLateIdSt(uVar7,piVar5,uVar11,uVar12,uVar4,uVar13);
    __vbaFreeObj();
    if (*param_2 == 0) {
      local_7c = (short *)0xffffffff;
      local_84 = 0xb;
      uVar13 = 0xb;
      uVar10 = 0xffffffff;
      uVar12 = 0x80010007;
      uVar4 = local_80;
      uVar7 = local_78;
      uVar11 = (**(code **)(*piVar8 + 0x354))(piVar8,0x80010007,0xb,local_80,0xffffffff,local_78);
      uVar11 = __vbaObjSet(&local_30,uVar11);
      __vbaLateIdSt(uVar11,uVar12,uVar13,uVar4,uVar10,uVar7);
      __vbaFreeObj();
    }
    if (*param_2 == 1) {
      local_7c = (short *)0xffffffff;
      local_84 = 0xb;
      uVar13 = 0xb;
      uVar10 = 0xffffffff;
      uVar12 = 0x80010007;
      uVar4 = local_80;
      uVar7 = local_78;
      uVar11 = (**(code **)(*piVar8 + 0x358))(piVar8,0x80010007,0xb,local_80,0xffffffff,local_78);
      uVar11 = __vbaObjSet(&local_30,uVar11);
      __vbaLateIdSt(uVar11,uVar12,uVar13,uVar4,uVar10,uVar7);
      __vbaFreeObj();
    }
    if (*param_2 == 2) {
      local_7c = (short *)0xffffffff;
      local_84 = 0xb;
      uVar12 = 0xb;
      uVar13 = 0xffffffff;
      uVar11 = 0x80010007;
      piVar5 = piVar8;
      uVar4 = local_80;
      uVar7 = (**(code **)(*piVar8 + 0x35c))(piVar8,0x80010007,0xb,local_80,0xffffffff,local_78);
      uVar7 = __vbaObjSet(&local_30,uVar7);
      __vbaLateIdSt(uVar7,piVar5,uVar11,uVar12,uVar4,uVar13);
      __vbaFreeObj();
      uVar4 = (**(code **)(*piVar8 + 0x35c))(piVar8,0x60030001,0);
      uVar4 = __vbaObjSet(&local_30,uVar4);
      __vbaLateIdCall(uVar4);
      __vbaFreeObj();
    }
    if (*param_2 == 3) {
      local_7c = (short *)0xffffffff;
      local_84 = 0xb;
      uVar11 = 0xb;
      uVar12 = 0xffffffff;
      uVar7 = 0x80010007;
      uVar4 = (**(code **)(*piVar8 + 0x360))(piVar8,0x80010007,0xb,local_80,0xffffffff,local_78);
      uVar4 = __vbaObjSet(&local_30,uVar4);
      __vbaLateIdSt(uVar4,uVar7,uVar11,local_80,uVar12,local_78);
      __vbaFreeObj();
    }
    uVar4 = (**(code **)(*piVar8 + 0x328))(piVar8);
    piVar5 = (int *)__vbaObjSet(&local_30,uVar4);
    sVar1 = *param_2;
    if (3 < (uint)(int)sVar1) {
      __vbaGenerateBoundsError();
    }
    iVar6 = (**(code **)(*piVar5 + 0x54))(piVar5,*(undefined4 *)(piVar8[0x1c] + sVar1 * 4));
  }
  if (iVar6 < 0) {
    __vbaHresultCheckObj(iVar6,piVar5,&DAT_00406e74,0x54);
  }
  __vbaFreeObj();
LAB_004436e3:
  __vbaExitProc();
  return;
}


// ---- FUN_00443760 @ 00443760

/* WARNING: Type propagation algorithm not settling */

void __cdecl FUN_00443760(uint param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int local_28 [2];
  void *pvStack_20;
  undefined *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  uint local_10;
  undefined4 local_c;
  
  puStack_1c = &DAT_00401ce6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffffb8;
  local_14 = &DAT_00401420;
  local_10 = param_1 & 1;
  piVar2 = (int *)(param_1 & 0xfffffffe);
  local_c = 0;
  ExceptionList = &pvStack_20;
  (**(code **)(*piVar2 + 4))(piVar2);
  local_28[1] = 0;
  local_28[0] = 0;
  __vbaOnError(1);
  if (local_28[0] == 0) {
    __vbaNew2(&DAT_0040787c,local_28);
  }
  __vbaObjSetAddref(local_28 + 1,local_28[0]);
  iVar1 = (**(code **)(*piVar2 + 0x708))(piVar2,param_2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar2,&DAT_00406764,0x708);
  }
  __vbaExitProc();
  __vbaFreeObj(&LAB_0044382f);
  __vbaFreeObj();
  return;
}


// ---- FUN_00443850 @ 00443850

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00443850(int *param_1,short *param_2)

{
  int *piVar1;
  short sVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int *piVar10;
  code *pcVar11;
  int **ppiVar12;
  int **ppiVar13;
  undefined *puVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  int **ppiVar18;
  undefined4 *puVar19;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_70;
  undefined4 local_60;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  int *local_40;
  int *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int *local_30;
  int *local_2c;
  int *local_28;
  int *local_24;
  void *pvStack_20;
  undefined *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  puStack_1c = &DAT_00401ce6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xfffffee0;
  local_14 = &DAT_00401448;
  local_10 = 0;
  local_c = 0;
  ExceptionList = &pvStack_20;
  (**(code **)(*param_1 + 4))(param_1);
  local_24 = (int *)0x0;
  local_28 = (int *)0x0;
  local_2c = (int *)0x0;
  local_30 = (int *)0x0;
  local_34 = 0;
  local_38 = 0;
  local_3c = (int *)0x0;
  local_40 = (int *)0x0;
  local_50 = 0;
  local_60 = 0;
  local_70 = 0;
  local_80 = 0;
  local_90 = 0;
  local_a0 = 0;
  local_a4 = 0;
  __vbaOnError(1);
  uVar3 = local_84;
  pcVar11 = __vbaObjSet_exref;
  if (*param_2 == 0) {
    piVar10 = param_1;
    uVar3 = (**(code **)(*param_1 + 0x310))(param_1);
    pcVar11 = __vbaObjSet_exref;
    piVar4 = (int *)__vbaObjSet(&local_3c,uVar3);
    ppiVar13 = &local_40;
    iVar5 = (**(code **)(*piVar4 + 0x40))(piVar4,0,ppiVar13);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,piVar4,&DAT_004077a0,0x40);
    }
    piVar4 = local_40;
    iVar5 = (**(code **)(*local_40 + 0xc4))(local_40,0);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,piVar4,&DAT_0040788c,0xc4);
    }
    __vbaFreeObjList(2,&local_3c,&local_40);
    _DAT_00451016 = 0xffff;
    iVar5 = (**(code **)(*param_1 + 0x58))(param_1,&local_a4);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,param_1,&DAT_00406734,0x58);
    }
    if (local_2c == (int *)0x0) {
      __vbaNew2(&DAT_0040787c,&local_2c);
    }
    piVar4 = local_2c;
    iVar5 = (**(code **)(*local_2c + 0x28))
                      (local_2c,local_a4,L"Back up to a removable drive",1,3,local_8c,0x11,local_84,
                       &local_3c);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,piVar4,&DAT_0040786c,0x28);
    }
    piVar4 = local_3c;
    local_3c = (int *)0x0;
    __vbaObjSet(&local_30,piVar4);
    sVar2 = __vbaObjIs(local_30,0);
    if (sVar2 == 0) {
      iVar5 = (**(code **)(*local_30 + 0x2c))(local_30,&local_3c);
      if (iVar5 < 0) {
        __vbaHresultCheckObj(iVar5,local_30,&DAT_004078dc,0x2c);
      }
      piVar4 = local_3c;
      iVar5 = (**(code **)(*local_3c + 0x28))(local_3c,10,local_8c,0x80020004,local_84,&local_40);
      if (iVar5 < 0) {
        __vbaHresultCheckObj(iVar5,piVar4,&DAT_004078ec,0x28);
      }
      piVar4 = local_40;
      iVar5 = (**(code **)(*local_40 + 0x2c))(local_40,&local_34);
      if (iVar5 < 0) {
        __vbaHresultCheckObj(iVar5,piVar4,&DAT_004078fc,0x2c);
      }
      local_34 = 0;
      __vbaStrMove();
      __vbaFreeObjList(2,&local_3c,&local_40);
    }
    iVar5 = __vbaStrCmp(&DAT_00407128,DAT_0045102c);
    uVar3 = local_84;
    if (iVar5 == 0) {
      __vbaStrCopy(ppiVar13,piVar10);
    }
    else {
      rtcRightCharBstr(DAT_0045102c,1);
      uVar6 = __vbaStrMove();
      iVar5 = __vbaStrCmp(&DAT_00407140,uVar6);
      __vbaFreeStr();
      if (iVar5 != 0) {
        __vbaStrCat(&DAT_00407140,DAT_0045102c);
        __vbaStrMove();
      }
      __vbaStrCopy(ppiVar13,piVar10);
      uVar7 = __vbaStrCat(param_1[0xf],DAT_00451030);
      local_50 = 8;
      uVar17 = 8;
      uVar16 = 0x6803000b;
      piVar10 = param_1;
      uVar6 = local_4c;
      uVar9 = local_44;
      local_48 = uVar7;
      uVar8 = (**(code **)(*param_1 + 0x354))(param_1,0x6803000b,8,local_4c,uVar7,local_44);
      uVar8 = __vbaObjSet(&local_3c,uVar8);
      __vbaLateIdSt(uVar8,piVar10,uVar16,uVar17,uVar6,uVar7);
      __vbaFreeObj();
      __vbaFreeVar(uVar9);
      uVar8 = 0x4008;
      puVar19 = &DAT_00451030;
      uVar7 = 0x68030003;
      piVar10 = param_1;
      uVar6 = local_8c;
      uVar9 = (**(code **)(*param_1 + 0x354))
                        (param_1,0x68030003,0x4008,local_8c,&DAT_00451030,local_84);
      uVar9 = __vbaObjSet(&local_3c,uVar9);
      __vbaLateIdSt(uVar9,piVar10,uVar7,uVar8,uVar6,puVar19);
      __vbaFreeObj();
      uVar6 = (**(code **)(*param_1 + 0x354))(param_1,0x6003001a,0);
      uVar6 = __vbaObjSet(&local_3c,uVar6);
      __vbaLateIdCall(uVar6);
      __vbaFreeObj();
    }
  }
  if (*param_2 == 1) {
    piVar10 = param_1;
    uVar6 = (**(code **)(*param_1 + 0x310))(param_1);
    piVar4 = (int *)(*pcVar11)(&local_3c,uVar6);
    iVar5 = (**(code **)(*piVar4 + 0x40))(piVar4,1,&local_40);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,piVar4,&DAT_004077a0,0x40);
    }
    piVar4 = local_40;
    iVar5 = (**(code **)(*local_40 + 0xc4))(local_40,0);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,piVar4,&DAT_0040788c,0xc4);
    }
    __vbaFreeObjList(2,&local_3c,&local_40);
    _DAT_00451018 = 0xffff;
    iVar5 = (**(code **)(*param_1 + 0x58))(param_1,&local_a4);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,param_1,&DAT_00406734,0x58);
    }
    if (local_2c == (int *)0x0) {
      __vbaNew2(&DAT_0040787c,&local_2c);
    }
    piVar4 = local_2c;
    iVar5 = (**(code **)(*local_2c + 0x28))
                      (local_2c,local_a4,L"Back up to a folder on the network",0,3,local_8c,0x12,
                       uVar3,&local_3c);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,piVar4,&DAT_0040786c,0x28);
    }
    piVar4 = local_3c;
    local_3c = (int *)0x0;
    (*pcVar11)(&local_30,piVar4);
    sVar2 = __vbaObjIs(local_30,0);
    if (sVar2 == 0) {
      iVar5 = (**(code **)(*local_30 + 0x2c))(local_30,&local_3c);
      if (iVar5 < 0) {
        __vbaHresultCheckObj(iVar5,local_30,&DAT_004078dc,0x2c);
      }
      piVar4 = local_3c;
      iVar5 = (**(code **)(*local_3c + 0x28))(local_3c,10,local_8c,0x80020004,uVar3,&local_40);
      if (iVar5 < 0) {
        __vbaHresultCheckObj(iVar5,piVar4,&DAT_004078ec,0x28);
      }
      piVar4 = local_40;
      iVar5 = (**(code **)(*local_40 + 0x2c))(local_40,&local_34);
      if (iVar5 < 0) {
        __vbaHresultCheckObj(iVar5,piVar4,&DAT_004078fc,0x2c);
      }
      local_34 = 0;
      __vbaStrMove();
      __vbaFreeObjList(2,&local_3c,&local_40);
    }
    iVar5 = __vbaStrCmp(&DAT_00407128,DAT_0045102c);
    if (iVar5 == 0) {
      __vbaStrCopy(uVar6,piVar10);
    }
    else {
      rtcRightCharBstr(DAT_0045102c,1);
      uVar9 = __vbaStrMove();
      iVar5 = __vbaStrCmp(&DAT_00407140,uVar9);
      __vbaFreeStr();
      if (iVar5 != 0) {
        __vbaStrCat(&DAT_00407140,DAT_0045102c);
        __vbaStrMove();
      }
      __vbaStrCopy(uVar6,piVar10);
      local_48 = __vbaStrCat(param_1[0xf],DAT_00451034);
      local_50 = 8;
      uVar16 = 8;
      uVar8 = 0x6803000a;
      piVar10 = param_1;
      uVar6 = local_4c;
      uVar9 = (**(code **)(*param_1 + 0x354))(param_1,0x6803000a,8,local_4c,local_48,local_44);
      ppiVar13 = &local_3c;
      uVar7 = (*pcVar11)(ppiVar13,uVar9);
      __vbaLateIdSt(uVar7,ppiVar13,uVar9,piVar10,uVar8,uVar16);
      __vbaFreeObj();
      __vbaFreeVar(uVar6);
      uVar8 = 0x4008;
      uVar7 = 0x68030002;
      piVar10 = param_1;
      uVar6 = (**(code **)(*param_1 + 0x354))
                        (param_1,0x68030002,0x4008,local_8c,&DAT_00451034,uVar3);
      ppiVar13 = &local_3c;
      uVar9 = (*pcVar11)(ppiVar13,uVar6);
      __vbaLateIdSt(uVar9,ppiVar13,uVar6,piVar10,uVar7,uVar8);
      __vbaFreeObj();
      uVar6 = (**(code **)(*param_1 + 0x354))(param_1,0x6003001b,0);
      uVar6 = (*pcVar11)(&local_3c,uVar6);
      __vbaLateIdCall(uVar6);
      __vbaFreeObj();
    }
  }
  if (*param_2 == 2) {
    piVar10 = param_1;
    uVar6 = (**(code **)(*param_1 + 0x310))(param_1);
    piVar4 = (int *)(*pcVar11)(&local_3c,uVar6);
    iVar5 = (**(code **)(*piVar4 + 0x40))(piVar4,2,&local_40);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,piVar4,&DAT_004077a0,0x40);
    }
    piVar4 = local_40;
    iVar5 = (**(code **)(*local_40 + 0xc4))(local_40,0);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,piVar4,&DAT_0040788c,0xc4);
    }
    __vbaFreeObjList(2,&local_3c,&local_40);
    _DAT_0045101a = 0xffff;
    iVar5 = (**(code **)(*param_1 + 0x58))(param_1,&local_a4);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,param_1,&DAT_00406734,0x58);
    }
    if (local_2c == (int *)0x0) {
      __vbaNew2(&DAT_0040787c,&local_2c);
    }
    piVar4 = local_2c;
    iVar5 = (**(code **)(*local_2c + 0x28))
                      (local_2c,local_a4,L"Select a user directory to back up",0,8,local_8c,
                       param_1[0x13],uVar3,&local_3c);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,piVar4,&DAT_0040786c,0x28);
    }
    piVar4 = local_3c;
    local_3c = (int *)0x0;
    (*pcVar11)(&local_30,piVar4);
    sVar2 = __vbaObjIs(local_30,0);
    if (sVar2 == 0) {
      iVar5 = (**(code **)(*local_30 + 0x2c))(local_30,&local_3c);
      if (iVar5 < 0) {
        __vbaHresultCheckObj(iVar5,local_30,&DAT_004078dc,0x2c);
      }
      piVar4 = local_3c;
      iVar5 = (**(code **)(*local_3c + 0x28))(local_3c,10,local_8c,0x80020004,uVar3,&local_40);
      if (iVar5 < 0) {
        __vbaHresultCheckObj(iVar5,piVar4,&DAT_004078ec,0x28);
      }
      piVar4 = local_40;
      iVar5 = (**(code **)(*local_40 + 0x2c))(local_40,&local_34);
      if (iVar5 < 0) {
        __vbaHresultCheckObj(iVar5,piVar4,&DAT_004078fc,0x2c);
      }
      local_34 = 0;
      __vbaStrMove();
      __vbaFreeObjList(2,&local_3c,&local_40);
    }
    iVar5 = __vbaStrCmp(&DAT_00407128,DAT_0045102c);
    if (iVar5 == 0) {
      __vbaStrCopy(uVar6,piVar10);
    }
    else {
      rtcRightCharBstr(DAT_0045102c,1);
      uVar9 = __vbaStrMove();
      iVar5 = __vbaStrCmp(&DAT_00407140,uVar9);
      __vbaFreeStr();
      if (iVar5 != 0) {
        __vbaStrCat(&DAT_00407140,DAT_0045102c);
        __vbaStrMove();
      }
      __vbaStrCopy(uVar6,piVar10);
      uVar8 = 0x4008;
      uVar7 = 0x68030009;
      piVar10 = param_1;
      uVar6 = (**(code **)(*param_1 + 0x354))
                        (param_1,0x68030009,0x4008,local_8c,&DAT_00451038,uVar3);
      ppiVar13 = &local_3c;
      uVar9 = (*pcVar11)(ppiVar13,uVar6);
      __vbaLateIdSt(uVar9,ppiVar13,uVar6,piVar10,uVar7,uVar8);
      __vbaFreeObj();
      uVar8 = 0x4008;
      uVar7 = 0x68030004;
      piVar10 = param_1;
      uVar6 = (**(code **)(*param_1 + 0x354))
                        (param_1,0x68030004,0x4008,local_8c,&DAT_00451038,uVar3);
      ppiVar13 = &local_3c;
      uVar9 = (*pcVar11)(ppiVar13,uVar6);
      __vbaLateIdSt(uVar9,ppiVar13,uVar6,piVar10,uVar7,uVar8);
      __vbaFreeObj();
      uVar6 = (**(code **)(*param_1 + 0x354))(param_1,0x6003001c,0);
      uVar6 = (*pcVar11)(&local_3c,uVar6);
      __vbaLateIdCall(uVar6);
      __vbaFreeObj();
    }
  }
  if (*param_2 == 3) {
    piVar10 = param_1;
    uVar6 = (**(code **)(*param_1 + 0x310))(param_1);
    ppiVar13 = &local_3c;
    piVar4 = (int *)(*pcVar11)(ppiVar13,uVar6);
    ppiVar18 = &local_40;
    uVar9 = 3;
    iVar5 = (**(code **)(*piVar4 + 0x40))(piVar4,3,ppiVar18);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,piVar4,&DAT_004077a0,0x40);
    }
    piVar4 = local_40;
    iVar5 = (**(code **)(*local_40 + 0xc4))(local_40,0);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,piVar4,&DAT_0040788c,0xc4);
    }
    __vbaFreeObjList(2,&local_3c,&local_40);
    puVar14 = &DAT_00406db0;
    uVar7 = __vbaNew(&DAT_00403c8c);
    ppiVar12 = &local_3c;
    uVar7 = (*pcVar11)(ppiVar12,uVar7,puVar14);
    uVar7 = __vbaCastObj(uVar7,ppiVar12);
    (*pcVar11)(&local_28,uVar7);
    __vbaFreeObj();
    iVar5 = (**(code **)(*local_28 + 0x2b0))
                      (local_28,3,local_8c,1,uVar3,10,local_9c,0x80020004,local_94);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,local_28,&DAT_00406db0,0x2b0);
    }
    uVar7 = __vbaCastObj(0,&DAT_00406db0);
    (*pcVar11)(&local_28,uVar7);
    uVar17 = 0x400b;
    uVar16 = 0x68030008;
    piVar4 = param_1;
    uVar7 = (**(code **)(*param_1 + 0x354))(param_1,0x68030008,0x400b,local_8c,&DAT_00451014,uVar3);
    ppiVar12 = &local_3c;
    uVar8 = (*pcVar11)(ppiVar12,uVar7);
    __vbaLateIdSt(uVar8,ppiVar12,uVar7,piVar4,uVar16,uVar17);
    __vbaFreeObj();
    uVar7 = (**(code **)(*param_1 + 0x354))(param_1,0x68030007,0x4008,local_8c,&DAT_0045103c,uVar3);
    uVar7 = (*pcVar11)(&local_3c,uVar7);
    __vbaLateIdSt(uVar7,uVar9,ppiVar18,ppiVar13,uVar6,piVar10);
    __vbaFreeObj();
  }
  if (*param_2 == 4) {
    piVar10 = param_1;
    uVar6 = (**(code **)(*param_1 + 0x310))(param_1);
    piVar4 = (int *)(*pcVar11)(&local_3c,uVar6);
    iVar5 = (**(code **)(*piVar4 + 0x40))(piVar4,4,&local_40);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,piVar4,&DAT_004077a0,0x40);
    }
    piVar4 = local_40;
    iVar5 = (**(code **)(*local_40 + 0xc4))(local_40,0);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,piVar4,&DAT_0040788c,0xc4);
    }
    __vbaFreeObjList(2,&local_3c,&local_40);
    iVar5 = (**(code **)(*param_1 + 0x58))(param_1,&local_a4);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,param_1,&DAT_00406734,0x58);
    }
    if (local_2c == (int *)0x0) {
      __vbaNew2(&DAT_0040787c,&local_2c);
    }
    piVar4 = local_2c;
    iVar5 = (**(code **)(*local_2c + 0x28))
                      (local_2c,local_a4,L"Restore from selected folder",3,3,local_8c,0x11,uVar3,
                       &local_3c);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,piVar4,&DAT_0040786c,0x28);
    }
    piVar4 = local_3c;
    local_3c = (int *)0x0;
    (*pcVar11)(&local_30,piVar4);
    sVar2 = __vbaObjIs(local_30,0);
    if (sVar2 == 0) {
      ppiVar13 = &local_3c;
      piVar4 = local_30;
      iVar5 = (**(code **)(*local_30 + 0x2c))(local_30,ppiVar13);
      if (iVar5 < 0) {
        __vbaHresultCheckObj(iVar5,local_30,&DAT_004078dc,0x2c);
      }
      piVar1 = local_3c;
      iVar5 = (**(code **)(*local_3c + 0x28))(local_3c,10,local_8c,0x80020004,uVar3,&local_40);
      if (iVar5 < 0) {
        __vbaHresultCheckObj(iVar5,piVar1,&DAT_004078ec,0x28);
      }
      piVar1 = local_40;
      iVar5 = (**(code **)(*local_40 + 0x2c))(local_40,&local_34);
      if (iVar5 < 0) {
        __vbaHresultCheckObj(iVar5,piVar1,&DAT_004078fc,0x2c);
      }
      local_34 = 0;
      __vbaStrMove();
      __vbaFreeObjList(2,&local_3c,&local_40);
      __vbaStrCopy(piVar4,ppiVar13);
    }
    iVar5 = __vbaStrCmp(&DAT_00407128,DAT_0045102c);
    if (iVar5 == 0) {
      __vbaStrCopy(uVar6,piVar10);
    }
    else {
      rtcRightCharBstr(DAT_0045102c,1);
      uVar9 = __vbaStrMove();
      iVar5 = __vbaStrCmp(&DAT_00407140,uVar9);
      __vbaFreeStr();
      if (iVar5 != 0) {
        __vbaStrCat(&DAT_00407140,DAT_0045102c);
        __vbaStrMove();
      }
      uVar15 = 0x4008;
      puVar19 = &DAT_0045102c;
      uVar17 = 0x68030009;
      piVar4 = param_1;
      uVar9 = local_8c;
      uVar7 = uVar3;
      uVar8 = (**(code **)(*param_1 + 0x358))
                        (param_1,0x68030009,0x4008,local_8c,&DAT_0045102c,uVar3);
      ppiVar13 = &local_3c;
      uVar16 = (*pcVar11)(ppiVar13,uVar8);
      __vbaLateIdSt(uVar16,ppiVar13,uVar8,piVar4,uVar17,uVar15);
      __vbaFreeObj();
      uVar8 = (**(code **)(*param_1 + 0x358))(param_1,0x68030003,0xb,local_8c,0xffffffff,uVar3);
      uVar8 = (*pcVar11)(&local_3c,uVar8);
      __vbaLateIdSt(uVar8,uVar9,puVar19,uVar7,uVar6,piVar10);
      __vbaFreeObj();
    }
  }
  if (*param_2 == 5) {
    piVar10 = param_1;
    uVar6 = (**(code **)(*param_1 + 0x310))(param_1);
    piVar4 = (int *)(*pcVar11)(&local_3c,uVar6);
    iVar5 = (**(code **)(*piVar4 + 0x40))(piVar4,5,&local_40);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,piVar4,&DAT_004077a0,0x40);
    }
    piVar4 = local_40;
    iVar5 = (**(code **)(*local_40 + 0xc4))(local_40,0);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,piVar4,&DAT_0040788c,0xc4);
    }
    __vbaFreeObjList(2,&local_3c,&local_40);
    iVar5 = (**(code **)(*param_1 + 0x58))(param_1,&local_a4);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,param_1,&DAT_00406734,0x58);
    }
    if (local_2c == (int *)0x0) {
      __vbaNew2(&DAT_0040787c,&local_2c);
    }
    piVar4 = local_2c;
    local_88 = 0x11;
    iVar5 = (**(code **)(*local_2c + 0x28))
                      (local_2c,local_a4,L"Restore from a removable drive",0,3,local_8c,0x11,uVar3,
                       &local_3c);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,piVar4,&DAT_0040786c,0x28);
    }
    piVar4 = local_3c;
    local_3c = (int *)0x0;
    (*pcVar11)(&local_30,piVar4);
    sVar2 = __vbaObjIs(local_30,0);
    if (sVar2 == 0) {
      ppiVar13 = &local_3c;
      piVar4 = local_30;
      iVar5 = (**(code **)(*local_30 + 0x2c))(local_30,ppiVar13);
      if (iVar5 < 0) {
        __vbaHresultCheckObj(iVar5,local_30,&DAT_004078dc,0x2c);
      }
      piVar1 = local_3c;
      iVar5 = (**(code **)(*local_3c + 0x28))(local_3c,10,local_8c,0x80020004,uVar3,&local_40);
      if (iVar5 < 0) {
        __vbaHresultCheckObj(iVar5,piVar1,&DAT_004078ec,0x28);
      }
      piVar1 = local_40;
      iVar5 = (**(code **)(*local_40 + 0x2c))(local_40,&local_34);
      if (iVar5 < 0) {
        __vbaHresultCheckObj(iVar5,piVar1,&DAT_004078fc,0x2c);
      }
      local_34 = 0;
      __vbaStrMove();
      __vbaFreeObjList(2,&local_3c,&local_40);
      __vbaStrCopy(piVar4,ppiVar13);
    }
    iVar5 = __vbaStrCmp(&DAT_00407128,DAT_0045102c);
    if (iVar5 == 0) {
      __vbaStrCopy(uVar6,piVar10);
    }
    else {
      rtcRightCharBstr(DAT_0045102c,1);
      uVar9 = __vbaStrMove();
      iVar5 = __vbaStrCmp(&DAT_00407140,uVar9);
      __vbaFreeStr();
      if (iVar5 != 0) {
        __vbaStrCat(&DAT_00407140,DAT_0045102c);
        __vbaStrMove();
      }
      uVar15 = 0x4008;
      puVar19 = &DAT_0045102c;
      uVar17 = 0x68030009;
      piVar4 = param_1;
      uVar9 = local_8c;
      uVar7 = uVar3;
      uVar8 = (**(code **)(*param_1 + 0x358))
                        (param_1,0x68030009,0x4008,local_8c,&DAT_0045102c,uVar3);
      ppiVar13 = &local_3c;
      uVar16 = (*pcVar11)(ppiVar13,uVar8);
      __vbaLateIdSt(uVar16,ppiVar13,uVar8,piVar4,uVar17,uVar15);
      __vbaFreeObj();
      uVar8 = (**(code **)(*param_1 + 0x358))(param_1,0x68030004,0xb,local_8c,0xffffffff,uVar3);
      uVar8 = (*pcVar11)(&local_3c,uVar8);
      __vbaLateIdSt(uVar8,uVar9,puVar19,uVar7,uVar6,piVar10);
      __vbaFreeObj();
    }
  }
  if (*param_2 == 6) {
    piVar10 = param_1;
    uVar6 = (**(code **)(*param_1 + 0x310))(param_1);
    piVar4 = (int *)(*pcVar11)(&local_3c,uVar6);
    iVar5 = (**(code **)(*piVar4 + 0x40))(piVar4,6,&local_40);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,piVar4,&DAT_004077a0,0x40);
    }
    piVar4 = local_40;
    iVar5 = (**(code **)(*local_40 + 0xc4))(local_40,0);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,piVar4,&DAT_0040788c,0xc4);
    }
    __vbaFreeObjList(2,&local_3c,&local_40);
    iVar5 = (**(code **)(*param_1 + 0x58))(param_1,&local_a4);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,param_1,&DAT_00406734,0x58);
    }
    if (local_2c == (int *)0x0) {
      __vbaNew2(&DAT_0040787c,&local_2c);
    }
    piVar4 = local_2c;
    local_88 = 0x12;
    iVar5 = (**(code **)(*local_2c + 0x28))
                      (local_2c,local_a4,L"Restore from a folder on the network",0,3,local_8c,0x12,
                       uVar3,&local_3c);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,piVar4,&DAT_0040786c,0x28);
    }
    piVar4 = local_3c;
    local_3c = (int *)0x0;
    (*pcVar11)(&local_30,piVar4);
    sVar2 = __vbaObjIs(local_30,0);
    if (sVar2 == 0) {
      ppiVar13 = &local_3c;
      piVar4 = local_30;
      iVar5 = (**(code **)(*local_30 + 0x2c))(local_30,ppiVar13);
      if (iVar5 < 0) {
        __vbaHresultCheckObj(iVar5,local_30,&DAT_004078dc,0x2c);
      }
      piVar1 = local_3c;
      iVar5 = (**(code **)(*local_3c + 0x28))(local_3c,10,local_8c,0x80020004,uVar3,&local_40);
      if (iVar5 < 0) {
        __vbaHresultCheckObj(iVar5,piVar1,&DAT_004078ec,0x28);
      }
      piVar1 = local_40;
      iVar5 = (**(code **)(*local_40 + 0x2c))(local_40,&local_34);
      if (iVar5 < 0) {
        __vbaHresultCheckObj(iVar5,piVar1,&DAT_004078fc,0x2c);
      }
      local_34 = 0;
      __vbaStrMove();
      __vbaFreeObjList(2,&local_3c,&local_40);
      __vbaStrCopy(piVar4,ppiVar13);
    }
    iVar5 = __vbaStrCmp(&DAT_00407128,DAT_0045102c);
    if (iVar5 == 0) {
      __vbaStrCopy(uVar6,piVar10);
    }
    else {
      rtcRightCharBstr(DAT_0045102c,1);
      uVar9 = __vbaStrMove();
      iVar5 = __vbaStrCmp(&DAT_00407140,uVar9);
      __vbaFreeStr();
      if (iVar5 != 0) {
        __vbaStrCat(&DAT_00407140,DAT_0045102c);
        __vbaStrMove();
      }
      uVar15 = 0x4008;
      puVar19 = &DAT_0045102c;
      uVar17 = 0x68030009;
      piVar4 = param_1;
      uVar9 = local_8c;
      uVar7 = uVar3;
      uVar8 = (**(code **)(*param_1 + 0x358))
                        (param_1,0x68030009,0x4008,local_8c,&DAT_0045102c,uVar3);
      ppiVar13 = &local_3c;
      uVar16 = (*pcVar11)(ppiVar13,uVar8);
      __vbaLateIdSt(uVar16,ppiVar13,uVar8,piVar4,uVar17,uVar15);
      __vbaFreeObj();
      uVar8 = (**(code **)(*param_1 + 0x358))(param_1,0x68030002,0xb,local_8c,0xffffffff,uVar3);
      uVar8 = (*pcVar11)(&local_3c,uVar8);
      __vbaLateIdSt(uVar8,uVar9,puVar19,uVar7,uVar6,piVar10);
      __vbaFreeObj();
    }
  }
  if (*param_2 == 7) {
    piVar10 = param_1;
    uVar6 = (**(code **)(*param_1 + 0x310))(param_1);
    piVar4 = (int *)(*pcVar11)(&local_3c,uVar6);
    iVar5 = (**(code **)(*piVar4 + 0x40))(piVar4,7,&local_40);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,piVar4,&DAT_004077a0,0x40);
    }
    piVar4 = local_40;
    iVar5 = (**(code **)(*local_40 + 0xc4))(local_40,0);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,piVar4,&DAT_0040788c,0xc4);
    }
    __vbaFreeObjList(2,&local_3c,&local_40);
    iVar5 = (**(code **)(*param_1 + 0x58))(param_1,&local_a4);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,param_1,&DAT_00406734,0x58);
    }
    if (local_2c == (int *)0x0) {
      __vbaNew2(&DAT_0040787c,&local_2c);
    }
    piVar4 = local_2c;
    iVar5 = (**(code **)(*local_2c + 0x28))
                      (local_2c,local_a4,L"Restore userfiles from selected folder",0,8,local_8c,
                       param_1[0x1f],uVar3,&local_3c);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,piVar4,&DAT_0040786c,0x28);
    }
    piVar4 = local_3c;
    local_3c = (int *)0x0;
    (*pcVar11)(&local_30,piVar4);
    sVar2 = __vbaObjIs(local_30,0);
    if (sVar2 == 0) {
      iVar5 = (**(code **)(*local_30 + 0x2c))(local_30,&local_3c);
      if (iVar5 < 0) {
        __vbaHresultCheckObj(iVar5,local_30,&DAT_004078dc,0x2c);
      }
      piVar4 = local_3c;
      iVar5 = (**(code **)(*local_3c + 0x28))(local_3c,10,local_8c,0x80020004,uVar3,&local_40);
      if (iVar5 < 0) {
        __vbaHresultCheckObj(iVar5,piVar4,&DAT_004078ec,0x28);
      }
      piVar4 = local_40;
      iVar5 = (**(code **)(*local_40 + 0x2c))(local_40,&local_34);
      if (iVar5 < 0) {
        __vbaHresultCheckObj(iVar5,piVar4,&DAT_004078fc,0x2c);
      }
      local_34 = 0;
      __vbaStrMove();
      __vbaFreeObjList(2,&local_3c,&local_40);
    }
    iVar5 = __vbaStrCmp(&DAT_00407128,DAT_0045102c);
    if (iVar5 == 0) {
      __vbaStrCopy(uVar6,piVar10);
    }
    else {
      rtcRightCharBstr(DAT_0045102c,1);
      uVar9 = __vbaStrMove();
      iVar5 = __vbaStrCmp(&DAT_00407140,uVar9);
      __vbaFreeStr();
      if (iVar5 != 0) {
        __vbaStrCat(&DAT_00407140,DAT_0045102c);
        __vbaStrMove();
      }
      uVar15 = 0x4008;
      puVar19 = &DAT_0045102c;
      uVar17 = 0x68030009;
      piVar4 = param_1;
      uVar9 = local_8c;
      uVar7 = uVar3;
      uVar8 = (**(code **)(*param_1 + 0x358))
                        (param_1,0x68030009,0x4008,local_8c,&DAT_0045102c,uVar3);
      ppiVar13 = &local_3c;
      uVar16 = (*pcVar11)(ppiVar13,uVar8);
      __vbaLateIdSt(uVar16,ppiVar13,uVar8,piVar4,uVar17,uVar15);
      __vbaFreeObj();
      uVar8 = (**(code **)(*param_1 + 0x358))(param_1,0x68030001,0xb,local_8c,0xffffffff,uVar3);
      uVar8 = (*pcVar11)(&local_3c,uVar8);
      __vbaLateIdSt(uVar8,uVar9,puVar19,uVar7,uVar6,piVar10);
      __vbaFreeObj();
    }
  }
  if (*param_2 == 8) {
    piVar10 = param_1;
    uVar6 = (**(code **)(*param_1 + 0x310))(param_1);
    piVar4 = (int *)(*pcVar11)(&local_3c,uVar6);
    iVar5 = (**(code **)(*piVar4 + 0x40))(piVar4,8,&local_40);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,piVar4,&DAT_004077a0,0x40);
    }
    piVar4 = local_40;
    iVar5 = (**(code **)(*local_40 + 0xc4))(local_40,0);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,piVar4,&DAT_0040788c,0xc4);
    }
    __vbaFreeObjList(2,&local_3c,&local_40);
    iVar5 = (**(code **)(*param_1 + 0x58))(param_1,&local_a4);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,param_1,&DAT_00406734,0x58);
    }
    if (local_2c == (int *)0x0) {
      __vbaNew2(&DAT_0040787c,&local_2c);
    }
    piVar4 = local_2c;
    iVar5 = (**(code **)(*local_2c + 0x28))
                      (local_2c,local_a4,L"Restore userfiles to selected folder",1,8,local_8c,
                       param_1[0x13],uVar3,&local_3c);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,piVar4,&DAT_0040786c,0x28);
    }
    piVar4 = local_3c;
    local_3c = (int *)0x0;
    (*pcVar11)(&local_30,piVar4);
    sVar2 = __vbaObjIs(local_30,0);
    if (sVar2 == 0) {
      iVar5 = (**(code **)(*local_30 + 0x2c))(local_30,&local_3c);
      if (iVar5 < 0) {
        __vbaHresultCheckObj(iVar5,local_30,&DAT_004078dc,0x2c);
      }
      piVar4 = local_3c;
      local_88 = 0x80020004;
      iVar5 = (**(code **)(*local_3c + 0x28))(local_3c,10,local_8c,0x80020004,uVar3,&local_40);
      if (iVar5 < 0) {
        __vbaHresultCheckObj(iVar5,piVar4,&DAT_004078ec,0x28);
      }
      piVar4 = local_40;
      iVar5 = (**(code **)(*local_40 + 0x2c))(local_40,&local_34);
      if (iVar5 < 0) {
        __vbaHresultCheckObj(iVar5,piVar4,&DAT_004078fc,0x2c);
      }
      local_34 = 0;
      __vbaStrMove();
      __vbaFreeObjList(2,&local_3c,&local_40);
    }
    uVar6 = (**(code **)(*param_1 + 0x358))(param_1,0x68030001,0);
    uVar6 = (*pcVar11)(&local_3c,uVar6);
    uVar9 = __vbaLateIdCallLd(&local_50,uVar6);
    uVar7 = 0x44549c;
    sVar2 = __vbaBoolVar(uVar9);
    __vbaFreeObj();
    __vbaFreeVar(piVar10);
    if (sVar2 == -1) {
      puVar14 = &DAT_00407128;
      uVar9 = DAT_0045102c;
      iVar5 = __vbaStrCmp(uVar6,uVar7);
      if (iVar5 == 0) {
        __vbaStrCopy(puVar14,uVar9);
      }
      else {
        rtcRightCharBstr(DAT_0045102c,1);
        uVar6 = __vbaStrMove();
        iVar5 = __vbaStrCmp(&DAT_00407140,uVar6);
        __vbaFreeStr();
        if (iVar5 != 0) {
          __vbaStrCat(&DAT_00407140,DAT_0045102c);
          __vbaStrMove();
        }
        uVar15 = 0x4008;
        puVar19 = &DAT_0045102c;
        uVar17 = 0x68030008;
        piVar10 = param_1;
        uVar6 = local_8c;
        uVar7 = uVar3;
        uVar8 = (**(code **)(*param_1 + 0x358))
                          (param_1,0x68030008,0x4008,local_8c,&DAT_0045102c,uVar3);
        ppiVar13 = &local_3c;
        uVar16 = (*pcVar11)(ppiVar13,uVar8);
        __vbaLateIdSt(uVar16,ppiVar13,uVar8,piVar10,uVar17,uVar15);
        __vbaFreeObj();
        uVar8 = (**(code **)(*param_1 + 0x358))(param_1,0x68030001,0xb,local_8c,0xffffffff,uVar3);
        uVar8 = (*pcVar11)(&local_3c,uVar8);
        __vbaLateIdSt(uVar8,uVar6,puVar19,uVar7,puVar14,uVar9);
        __vbaFreeObj();
      }
    }
  }
  if (*param_2 == 9) {
    uVar6 = (**(code **)(*param_1 + 0x310))(param_1);
    piVar10 = (int *)(*pcVar11)(&local_3c,uVar6);
    iVar5 = (**(code **)(*piVar10 + 0x40))(piVar10,9,&local_40);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,piVar10,&DAT_004077a0,0x40);
    }
    piVar10 = local_40;
    iVar5 = (**(code **)(*local_40 + 0xc4))(local_40,0);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,piVar10,&DAT_0040788c,0xc4);
    }
    __vbaFreeObjList(2,&local_3c,&local_40);
    local_48 = __vbaStrCat(L"Help\\English\\Parachute.hlp",param_1[0x13]);
    local_50 = 8;
    uVar8 = 8;
    uVar7 = 0x13;
    piVar10 = param_1;
    uVar6 = (**(code **)(*param_1 + 0x364))(param_1,0x13,8,local_4c,local_48,local_44);
    ppiVar13 = &local_3c;
    uVar9 = (*pcVar11)(ppiVar13,uVar6);
    __vbaLateIdSt(uVar9,ppiVar13,uVar6,piVar10,uVar7,uVar8);
    __vbaFreeObj();
    __vbaFreeVar(local_4c);
    uVar8 = 2;
    uVar7 = 0x14;
    piVar10 = param_1;
    uVar6 = (**(code **)(*param_1 + 0x364))(param_1,0x14,2,local_8c,0xb,uVar3);
    ppiVar13 = &local_3c;
    uVar9 = (*pcVar11)(ppiVar13,uVar6);
    __vbaLateIdSt(uVar9,ppiVar13,uVar6,piVar10,uVar7,uVar8);
    __vbaFreeObj();
    uVar6 = (**(code **)(*param_1 + 0x364))(param_1,0x23,0);
    uVar6 = (*pcVar11)(&local_3c,uVar6);
    __vbaLateIdCall(uVar6);
    __vbaFreeObj();
  }
  if (*param_2 == 10) {
    uVar6 = (**(code **)(*param_1 + 0x310))(param_1);
    piVar10 = (int *)(*pcVar11)(&local_3c,uVar6);
    iVar5 = (**(code **)(*piVar10 + 0x40))(piVar10,10,&local_40);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,piVar10,&DAT_004077a0,0x40);
    }
    piVar10 = local_40;
    iVar5 = (**(code **)(*local_40 + 0xc4))(local_40,0);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,piVar10,&DAT_0040788c,0xc4);
    }
    __vbaFreeObjList(2,&local_3c,&local_40);
    uVar6 = __vbaNew(&DAT_00402d84);
    (*pcVar11)(&local_24,uVar6);
    iVar5 = (**(code **)(*local_24 + 0x2b0))
                      (local_24,3,local_8c,1,uVar3,9,local_9c,param_1,local_94);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,local_24,&DAT_00407040,0x2b0);
    }
  }
  __vbaExitProc();
  __vbaFreeObj(&LAB_004459d6);
  __vbaFreeObj();
  __vbaFreeObj();
  __vbaFreeObj();
  return;
}


// ---- FUN_00445a00 @ 00445a00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00445a00(int *param_1,short *param_2)

{
  short sVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  code *pcVar9;
  undefined *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int **ppiVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined4 local_b4;
  undefined4 local_ac;
  undefined4 local_a4;
  undefined4 local_9c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  int *local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  int *local_48;
  int *local_44;
  int *local_40;
  int *local_3c;
  int *local_38;
  int *local_34;
  int *local_30;
  int *local_2c;
  int *local_28;
  int *local_24;
  void *pvStack_20;
  undefined *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  puStack_1c = &DAT_00401ce6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffff10;
  local_14 = &DAT_00401470;
  local_10 = 0;
  local_c = 0;
  ExceptionList = &pvStack_20;
  (**(code **)(*param_1 + 4))(param_1);
  local_24 = (int *)0x0;
  local_28 = (int *)0x0;
  local_2c = (int *)0x0;
  local_30 = (int *)0x0;
  local_34 = (int *)0x0;
  local_38 = (int *)0x0;
  local_3c = (int *)0x0;
  local_40 = (int *)0x0;
  local_44 = (int *)0x0;
  local_48 = (int *)0x0;
  local_4c = 0;
  local_50 = 0;
  local_54 = 0;
  local_58 = (int *)0x0;
  local_68 = 0;
  __vbaOnError(1);
  pcVar9 = __vbaObjSet_exref;
  if (*param_2 == 0) {
    piVar8 = param_1;
    uVar2 = (**(code **)(*param_1 + 0x310))(param_1);
    pcVar9 = __vbaObjSet_exref;
    piVar3 = (int *)__vbaObjSet(&local_54,uVar2);
    ppiVar14 = &local_58;
    iVar4 = (**(code **)(*piVar3 + 0x40))(piVar3,0,ppiVar14);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar3,&DAT_004077a0,0x40);
    }
    piVar3 = local_58;
    iVar4 = (**(code **)(*local_58 + 0xc4))(local_58,0);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar3,&DAT_0040788c,0xc4);
    }
    __vbaFreeObjList(2,&local_54,&local_58);
    _DAT_00451016 = 0xffff;
    uVar2 = __vbaNew(&DAT_00402964);
    __vbaObjSet(&local_34,uVar2);
    iVar4 = (**(code **)(*local_34 + 0x2b0))
                      (local_34,3,local_a4,1,local_9c,10,local_b4,0x80020004,local_ac);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,local_34,&DAT_00407b6c,0x2b0);
    }
    uVar2 = __vbaCastObj(0,&DAT_00407b9c);
    __vbaObjSet(&local_34,uVar2);
    iVar4 = __vbaStrCmp(&DAT_00407128,DAT_0045102c);
    if (iVar4 == 0) {
      __vbaStrCopy(ppiVar14,piVar8);
    }
    else {
      rtcRightCharBstr(DAT_0045102c,1);
      uVar2 = __vbaStrMove();
      iVar4 = __vbaStrCmp(&DAT_00407140,uVar2);
      __vbaFreeStr();
      if (iVar4 != 0) {
        __vbaStrCat(&DAT_00407140,DAT_0045102c);
        __vbaStrMove();
      }
      __vbaStrCopy(ppiVar14,piVar8);
      uVar5 = __vbaStrCat(param_1[0xf],DAT_00451030);
      local_68 = 8;
      uVar13 = 8;
      uVar12 = 0x6803000b;
      piVar8 = param_1;
      uVar2 = local_64;
      uVar7 = local_5c;
      local_60 = uVar5;
      uVar6 = (**(code **)(*param_1 + 0x354))(param_1,0x6803000b,8,local_64,uVar5,local_5c);
      uVar6 = __vbaObjSet(&local_54,uVar6);
      __vbaLateIdSt(uVar6,piVar8,uVar12,uVar13,uVar2,uVar5);
      __vbaFreeObj();
      __vbaFreeVar(uVar7);
      uVar6 = 0x4008;
      puVar16 = &DAT_00451030;
      uVar5 = 0x68030003;
      piVar8 = param_1;
      uVar2 = local_a4;
      uVar7 = (**(code **)(*param_1 + 0x354))
                        (param_1,0x68030003,0x4008,local_a4,&DAT_00451030,local_9c);
      uVar7 = __vbaObjSet(&local_54,uVar7);
      __vbaLateIdSt(uVar7,piVar8,uVar5,uVar6,uVar2,puVar16);
      __vbaFreeObj();
      uVar2 = (**(code **)(*param_1 + 0x354))(param_1,0x6003001a,0);
      uVar2 = __vbaObjSet(&local_54,uVar2);
      __vbaLateIdCall(uVar2);
      __vbaFreeObj();
    }
  }
  if (*param_2 == 1) {
    piVar8 = param_1;
    uVar2 = (**(code **)(*param_1 + 0x310))(param_1);
    piVar3 = (int *)(*pcVar9)(&local_54,uVar2);
    iVar4 = (**(code **)(*piVar3 + 0x40))(piVar3,1,&local_58);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar3,&DAT_004077a0,0x40);
    }
    piVar3 = local_58;
    iVar4 = (**(code **)(*local_58 + 0xc4))(local_58,0);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar3,&DAT_0040788c,0xc4);
    }
    __vbaFreeObjList(2,&local_54,&local_58);
    _DAT_00451018 = 0xffff;
    uVar7 = __vbaNew(&DAT_00404974);
    (*pcVar9)(&local_48,uVar7);
    iVar4 = (**(code **)(*local_48 + 0x2b0))
                      (local_48,3,local_a4,1,local_9c,10,local_b4,0x80020004,local_ac);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,local_48,&DAT_00406ed0,0x2b0);
    }
    uVar7 = __vbaCastObj(0,&DAT_00407bf0);
    (*pcVar9)(&local_48,uVar7);
    iVar4 = __vbaStrCmp(&DAT_00407128,DAT_0045102c);
    if (iVar4 == 0) {
      __vbaStrCopy(uVar2,piVar8);
    }
    else {
      rtcRightCharBstr(DAT_0045102c,1);
      uVar7 = __vbaStrMove();
      iVar4 = __vbaStrCmp(&DAT_00407140,uVar7);
      __vbaFreeStr();
      if (iVar4 != 0) {
        __vbaStrCat(&DAT_00407140,DAT_0045102c);
        __vbaStrMove();
      }
      __vbaStrCopy(uVar2,piVar8);
      local_60 = __vbaStrCat(param_1[0xf],DAT_00451034);
      local_68 = 8;
      uVar12 = 8;
      uVar6 = 0x6803000a;
      piVar8 = param_1;
      uVar2 = local_64;
      uVar7 = (**(code **)(*param_1 + 0x354))(param_1,0x6803000a,8,local_64,local_60,local_5c);
      puVar16 = &local_54;
      uVar5 = (*pcVar9)(puVar16,uVar7);
      __vbaLateIdSt(uVar5,puVar16,uVar7,piVar8,uVar6,uVar12);
      __vbaFreeObj();
      __vbaFreeVar(uVar2);
      uVar6 = 0x4008;
      uVar5 = 0x68030002;
      piVar8 = param_1;
      uVar2 = (**(code **)(*param_1 + 0x354))
                        (param_1,0x68030002,0x4008,local_a4,&DAT_00451034,local_9c);
      puVar16 = &local_54;
      uVar7 = (*pcVar9)(puVar16,uVar2);
      __vbaLateIdSt(uVar7,puVar16,uVar2,piVar8,uVar5,uVar6);
      __vbaFreeObj();
      uVar2 = (**(code **)(*param_1 + 0x354))(param_1,0x6003001b,0);
      uVar2 = (*pcVar9)(&local_54,uVar2);
      __vbaLateIdCall(uVar2);
      __vbaFreeObj();
    }
  }
  if (*param_2 == 2) {
    piVar8 = param_1;
    uVar2 = (**(code **)(*param_1 + 0x310))(param_1);
    piVar3 = (int *)(*pcVar9)(&local_54,uVar2);
    iVar4 = (**(code **)(*piVar3 + 0x40))(piVar3,2,&local_58);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar3,&DAT_004077a0,0x40);
    }
    piVar3 = local_58;
    iVar4 = (**(code **)(*local_58 + 0xc4))(local_58,0);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar3,&DAT_0040788c,0xc4);
    }
    __vbaFreeObjList(2,&local_54,&local_58);
    _DAT_0045101a = 0xffff;
    uVar7 = __vbaNew(&DAT_004031fc);
    (*pcVar9)(&local_30,uVar7);
    iVar4 = (**(code **)(*local_30 + 0x2b0))
                      (local_30,3,local_a4,1,local_9c,10,local_b4,0x80020004,local_ac);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,local_30,&DAT_00407d60,0x2b0);
    }
    uVar7 = __vbaCastObj(0,&DAT_00407d90);
    (*pcVar9)(&local_30,uVar7);
    iVar4 = __vbaStrCmp(&DAT_00407128,DAT_0045102c);
    if (iVar4 == 0) {
      __vbaStrCopy(uVar2,piVar8);
    }
    else {
      rtcRightCharBstr(DAT_0045102c,1);
      uVar7 = __vbaStrMove();
      iVar4 = __vbaStrCmp(&DAT_00407140,uVar7);
      __vbaFreeStr();
      if (iVar4 != 0) {
        __vbaStrCat(&DAT_00407140,DAT_0045102c);
        __vbaStrMove();
      }
      __vbaStrCopy(uVar2,piVar8);
      uVar6 = 0x4008;
      uVar5 = 0x68030009;
      piVar8 = param_1;
      uVar2 = (**(code **)(*param_1 + 0x354))
                        (param_1,0x68030009,0x4008,local_a4,&DAT_00451038,local_9c);
      puVar16 = &local_54;
      uVar7 = (*pcVar9)(puVar16,uVar2);
      __vbaLateIdSt(uVar7,puVar16,uVar2,piVar8,uVar5,uVar6);
      __vbaFreeObj();
      uVar6 = 0x4008;
      uVar5 = 0x68030004;
      piVar8 = param_1;
      uVar2 = (**(code **)(*param_1 + 0x354))
                        (param_1,0x68030004,0x4008,local_a4,&DAT_00451038,local_9c);
      puVar16 = &local_54;
      uVar7 = (*pcVar9)(puVar16,uVar2);
      __vbaLateIdSt(uVar7,puVar16,uVar2,piVar8,uVar5,uVar6);
      __vbaFreeObj();
      uVar2 = (**(code **)(*param_1 + 0x354))(param_1,0x6003001c,0);
      uVar2 = (*pcVar9)(&local_54,uVar2);
      __vbaLateIdCall(uVar2);
      __vbaFreeObj();
    }
  }
  if (*param_2 == 3) {
    piVar8 = param_1;
    uVar2 = (**(code **)(*param_1 + 0x310))(param_1);
    puVar16 = &local_54;
    piVar3 = (int *)(*pcVar9)(puVar16,uVar2);
    ppiVar14 = &local_58;
    uVar7 = 3;
    iVar4 = (**(code **)(*piVar3 + 0x40))(piVar3,3,ppiVar14);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar3,&DAT_004077a0,0x40);
    }
    piVar3 = local_58;
    iVar4 = (**(code **)(*local_58 + 0xc4))(local_58,0);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar3,&DAT_0040788c,0xc4);
    }
    __vbaFreeObjList(2,&local_54,&local_58);
    puVar10 = &DAT_00406db0;
    uVar5 = __vbaNew(&DAT_00403c8c);
    puVar15 = &local_54;
    uVar5 = (*pcVar9)(puVar15,uVar5,puVar10);
    uVar5 = __vbaCastObj(uVar5,puVar15);
    (*pcVar9)(&local_2c,uVar5);
    __vbaFreeObj();
    iVar4 = (**(code **)(*local_2c + 0x2b0))
                      (local_2c,3,local_a4,1,local_9c,10,local_b4,0x80020004,local_ac);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,local_2c,&DAT_00406db0,0x2b0);
    }
    uVar5 = __vbaCastObj(0,&DAT_00406db0);
    (*pcVar9)(&local_2c,uVar5);
    uVar13 = 0x400b;
    uVar12 = 0x68030008;
    piVar3 = param_1;
    uVar5 = (**(code **)(*param_1 + 0x354))
                      (param_1,0x68030008,0x400b,local_a4,&DAT_00451014,local_9c);
    puVar15 = &local_54;
    uVar6 = (*pcVar9)(puVar15,uVar5);
    __vbaLateIdSt(uVar6,puVar15,uVar5,piVar3,uVar12,uVar13);
    __vbaFreeObj();
    uVar5 = (**(code **)(*param_1 + 0x354))
                      (param_1,0x68030007,0x4008,local_a4,&DAT_0045103c,local_9c);
    uVar5 = (*pcVar9)(&local_54,uVar5);
    __vbaLateIdSt(uVar5,uVar7,ppiVar14,puVar16,uVar2,piVar8);
    __vbaFreeObj();
  }
  if (*param_2 == 4) {
    piVar8 = param_1;
    uVar2 = (**(code **)(*param_1 + 0x310))(param_1);
    piVar3 = (int *)(*pcVar9)(&local_54,uVar2);
    iVar4 = (**(code **)(*piVar3 + 0x40))(piVar3,4,&local_58);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar3,&DAT_004077a0,0x40);
    }
    piVar3 = local_58;
    iVar4 = (**(code **)(*local_58 + 0xc4))(local_58,0);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar3,&DAT_0040788c,0xc4);
    }
    __vbaFreeObjList(2,&local_54,&local_58);
    uVar7 = __vbaNew(&DAT_00402964);
    (*pcVar9)(&local_3c,uVar7);
    iVar4 = (**(code **)(*local_3c + 0x54))(local_3c,L"Restore from C:\\Backups");
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,local_3c,&DAT_00407b6c,0x54);
    }
    iVar4 = (**(code **)(*local_3c + 0x2b0))
                      (local_3c,3,local_a4,1,local_9c,10,local_b4,0x80020004,local_ac);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,local_3c,&DAT_00407b6c,0x2b0);
    }
    uVar7 = __vbaCastObj(0,&DAT_00407b9c);
    (*pcVar9)(&local_34,uVar7);
    iVar4 = __vbaStrCmp(&DAT_00407128,DAT_0045102c);
    if (iVar4 != 0) {
      rtcRightCharBstr(DAT_0045102c,1);
      uVar7 = __vbaStrMove();
      iVar4 = __vbaStrCmp(&DAT_00407140,uVar7);
      __vbaFreeStr();
      if (iVar4 != 0) {
        __vbaStrCat(&DAT_00407140,DAT_0045102c);
        __vbaStrMove();
      }
      uVar11 = 0x4008;
      puVar15 = &DAT_0045102c;
      uVar13 = 0x68030009;
      piVar3 = param_1;
      uVar5 = local_a4;
      uVar6 = local_9c;
      uVar7 = (**(code **)(*param_1 + 0x358))
                        (param_1,0x68030009,0x4008,local_a4,&DAT_0045102c,local_9c);
      puVar16 = &local_54;
      uVar12 = (*pcVar9)(puVar16,uVar7);
      __vbaLateIdSt(uVar12,puVar16,uVar7,piVar3,uVar13,uVar11);
      __vbaFreeObj();
      uVar13 = 0xffffffff;
      uVar7 = local_9c;
      uVar12 = (**(code **)(*param_1 + 0x358))(param_1,0x68030003,0xb,local_a4,0xffffffff,local_9c);
      uVar12 = (*pcVar9)(&local_54,uVar12);
      __vbaLateIdSt(uVar12,uVar13,uVar7,uVar5,puVar15,uVar6);
      __vbaFreeObj();
    }
    __vbaStrCopy(uVar2,piVar8);
  }
  if (*param_2 == 5) {
    piVar8 = param_1;
    uVar2 = (**(code **)(*param_1 + 0x310))(param_1);
    piVar3 = (int *)(*pcVar9)(&local_54,uVar2);
    iVar4 = (**(code **)(*piVar3 + 0x40))(piVar3,5,&local_58);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar3,&DAT_004077a0,0x40);
    }
    piVar3 = local_58;
    iVar4 = (**(code **)(*local_58 + 0xc4))(local_58,0);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar3,&DAT_0040788c,0xc4);
    }
    __vbaFreeObjList(2,&local_54,&local_58);
    uVar7 = __vbaNew(&DAT_00402964);
    (*pcVar9)(&local_28,uVar7);
    iVar4 = (**(code **)(*local_28 + 0x54))(local_28,L"Restore from Removable Device");
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,local_28,&DAT_00407b6c,0x54);
    }
    iVar4 = (**(code **)(*local_28 + 0x2b0))
                      (local_28,3,local_a4,1,local_9c,10,local_b4,0x80020004,local_ac);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,local_28,&DAT_00407b6c,0x2b0);
    }
    uVar7 = __vbaCastObj(0,&DAT_00407b9c);
    (*pcVar9)(&local_34,uVar7);
    iVar4 = __vbaStrCmp(&DAT_00407128,DAT_0045102c);
    if (iVar4 != 0) {
      rtcRightCharBstr(DAT_0045102c,1);
      uVar7 = __vbaStrMove();
      iVar4 = __vbaStrCmp(&DAT_00407140,uVar7);
      __vbaFreeStr();
      if (iVar4 != 0) {
        __vbaStrCat(&DAT_00407140,DAT_0045102c);
        __vbaStrMove();
      }
      uVar11 = 0x4008;
      puVar15 = &DAT_0045102c;
      uVar13 = 0x68030009;
      piVar3 = param_1;
      uVar5 = local_a4;
      uVar6 = local_9c;
      uVar7 = (**(code **)(*param_1 + 0x358))
                        (param_1,0x68030009,0x4008,local_a4,&DAT_0045102c,local_9c);
      puVar16 = &local_54;
      uVar12 = (*pcVar9)(puVar16,uVar7);
      __vbaLateIdSt(uVar12,puVar16,uVar7,piVar3,uVar13,uVar11);
      __vbaFreeObj();
      uVar13 = 0xffffffff;
      uVar7 = local_9c;
      uVar12 = (**(code **)(*param_1 + 0x358))(param_1,0x68030004,0xb,local_a4,0xffffffff,local_9c);
      uVar12 = (*pcVar9)(&local_54,uVar12);
      __vbaLateIdSt(uVar12,uVar13,uVar7,uVar5,puVar15,uVar6);
      __vbaFreeObj();
    }
    __vbaStrCopy(uVar2,piVar8);
  }
  if (*param_2 == 6) {
    piVar8 = param_1;
    uVar2 = (**(code **)(*param_1 + 0x310))(param_1);
    piVar3 = (int *)(*pcVar9)(&local_54,uVar2);
    iVar4 = (**(code **)(*piVar3 + 0x40))(piVar3,6,&local_58);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar3,&DAT_004077a0,0x40);
    }
    piVar3 = local_58;
    iVar4 = (**(code **)(*local_58 + 0xc4))(local_58,0);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar3,&DAT_0040788c,0xc4);
    }
    __vbaFreeObjList(2,&local_54,&local_58);
    uVar7 = __vbaNew(&DAT_00404974);
    (*pcVar9)(&local_38,uVar7);
    iVar4 = (**(code **)(*local_38 + 0x54))(local_38,L"Restore from Network Location");
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,local_38,&DAT_00406ed0,0x54);
    }
    iVar4 = (**(code **)(*local_38 + 0x2b0))
                      (local_38,3,local_a4,1,local_9c,10,local_b4,0x80020004,local_ac);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,local_38,&DAT_00406ed0,0x2b0);
    }
    uVar7 = __vbaCastObj(0,&DAT_00407bf0);
    (*pcVar9)(&local_38,uVar7);
    iVar4 = __vbaStrCmp(&DAT_00407128,DAT_0045102c);
    if (iVar4 != 0) {
      rtcRightCharBstr(DAT_0045102c,1);
      uVar7 = __vbaStrMove();
      iVar4 = __vbaStrCmp(&DAT_00407140,uVar7);
      __vbaFreeStr();
      if (iVar4 != 0) {
        __vbaStrCat(&DAT_00407140,DAT_0045102c);
        __vbaStrMove();
      }
      uVar11 = 0x4008;
      puVar15 = &DAT_0045102c;
      uVar13 = 0x68030009;
      piVar3 = param_1;
      uVar5 = local_a4;
      uVar6 = local_9c;
      uVar7 = (**(code **)(*param_1 + 0x358))
                        (param_1,0x68030009,0x4008,local_a4,&DAT_0045102c,local_9c);
      puVar16 = &local_54;
      uVar12 = (*pcVar9)(puVar16,uVar7);
      __vbaLateIdSt(uVar12,puVar16,uVar7,piVar3,uVar13,uVar11);
      __vbaFreeObj();
      uVar13 = 0xffffffff;
      uVar7 = local_9c;
      uVar12 = (**(code **)(*param_1 + 0x358))(param_1,0x68030002,0xb,local_a4,0xffffffff,local_9c);
      uVar12 = (*pcVar9)(&local_54,uVar12);
      __vbaLateIdSt(uVar12,uVar13,uVar7,uVar5,puVar15,uVar6);
      __vbaFreeObj();
    }
    __vbaStrCopy(uVar2,piVar8);
  }
  if (*param_2 == 7) {
    piVar8 = param_1;
    uVar2 = (**(code **)(*param_1 + 0x310))(param_1);
    piVar3 = (int *)(*pcVar9)(&local_54,uVar2);
    iVar4 = (**(code **)(*piVar3 + 0x40))(piVar3,7,&local_58);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar3,&DAT_004077a0,0x40);
    }
    piVar3 = local_58;
    iVar4 = (**(code **)(*local_58 + 0xc4))(local_58,0);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar3,&DAT_0040788c,0xc4);
    }
    __vbaFreeObjList(2,&local_54,&local_58);
    uVar7 = __vbaNew(&DAT_00402964);
    (*pcVar9)(&local_44,uVar7);
    iVar4 = (**(code **)(*local_44 + 0x54))(local_44,L"Restore User Files");
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,local_44,&DAT_00407b6c,0x54);
    }
    iVar4 = (**(code **)(*local_44 + 0x2b0))
                      (local_44,3,local_a4,1,local_9c,10,local_b4,0x80020004,local_ac);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,local_44,&DAT_00407b6c,0x2b0);
    }
    uVar7 = __vbaCastObj(0,&DAT_00407b9c);
    (*pcVar9)(&local_44,uVar7);
    iVar4 = __vbaStrCmp(&DAT_00407128,DAT_0045102c);
    if (iVar4 == 0) {
      __vbaStrCopy(uVar2,piVar8);
    }
    else {
      rtcRightCharBstr(DAT_0045102c,1);
      uVar7 = __vbaStrMove();
      iVar4 = __vbaStrCmp(&DAT_00407140,uVar7);
      __vbaFreeStr();
      if (iVar4 != 0) {
        __vbaStrCat(&DAT_00407140,DAT_0045102c);
        __vbaStrMove();
      }
      uVar11 = 0x4008;
      puVar15 = &DAT_0045102c;
      uVar13 = 0x68030009;
      piVar3 = param_1;
      uVar7 = local_a4;
      uVar5 = local_9c;
      uVar6 = (**(code **)(*param_1 + 0x358))
                        (param_1,0x68030009,0x4008,local_a4,&DAT_0045102c,local_9c);
      puVar16 = &local_54;
      uVar12 = (*pcVar9)(puVar16,uVar6);
      __vbaLateIdSt(uVar12,puVar16,uVar6,piVar3,uVar13,uVar11);
      __vbaFreeObj();
      uVar6 = (**(code **)(*param_1 + 0x358))(param_1,0x68030001,0xb,local_a4,0xffffffff,local_9c);
      uVar6 = (*pcVar9)(&local_54,uVar6);
      __vbaLateIdSt(uVar6,uVar7,puVar15,uVar5,uVar2,piVar8);
      __vbaFreeObj();
    }
  }
  if (*param_2 == 8) {
    piVar8 = param_1;
    uVar2 = (**(code **)(*param_1 + 0x310))(param_1);
    piVar3 = (int *)(*pcVar9)(&local_54,uVar2);
    iVar4 = (**(code **)(*piVar3 + 0x40))(piVar3,8,&local_58);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar3,&DAT_004077a0,0x40);
    }
    piVar3 = local_58;
    iVar4 = (**(code **)(*local_58 + 0xc4))(local_58,0);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar3,&DAT_0040788c,0xc4);
    }
    __vbaFreeObjList(2,&local_54,&local_58);
    uVar2 = __vbaNew(&DAT_00402964);
    (*pcVar9)(&local_40,uVar2);
    iVar4 = (**(code **)(*local_40 + 0x54))(local_40,L"Restore User Files");
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,local_40,&DAT_00407b6c,0x54);
    }
    iVar4 = (**(code **)(*local_40 + 0x2b0))
                      (local_40,3,local_a4,1,local_9c,10,local_b4,0x80020004,local_ac);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,local_40,&DAT_00407b6c,0x2b0);
    }
    uVar2 = __vbaCastObj(0,&DAT_00407b9c);
    (*pcVar9)(&local_40,uVar2);
    uVar2 = (**(code **)(*param_1 + 0x358))(param_1,0x68030001,0);
    uVar2 = (*pcVar9)(&local_54,uVar2);
    uVar7 = __vbaLateIdCallLd(&local_68,uVar2);
    uVar5 = 0x446f64;
    sVar1 = __vbaBoolVar(uVar7);
    __vbaFreeObj();
    __vbaFreeVar(piVar8);
    if (sVar1 == -1) {
      puVar10 = &DAT_00407128;
      uVar7 = DAT_0045102c;
      iVar4 = __vbaStrCmp(uVar2,uVar5);
      if (iVar4 == 0) {
        __vbaStrCopy(puVar10,uVar7);
      }
      else {
        rtcRightCharBstr(DAT_0045102c,1);
        uVar2 = __vbaStrMove();
        iVar4 = __vbaStrCmp(&DAT_00407140,uVar2);
        __vbaFreeStr();
        if (iVar4 != 0) {
          __vbaStrCat(&DAT_00407140,DAT_0045102c);
          __vbaStrMove();
        }
        uVar11 = 0x4008;
        puVar15 = &DAT_0045102c;
        uVar13 = 0x68030008;
        piVar8 = param_1;
        uVar2 = local_a4;
        uVar5 = local_9c;
        uVar6 = (**(code **)(*param_1 + 0x358))
                          (param_1,0x68030008,0x4008,local_a4,&DAT_0045102c,local_9c);
        puVar16 = &local_54;
        uVar12 = (*pcVar9)(puVar16,uVar6);
        __vbaLateIdSt(uVar12,puVar16,uVar6,piVar8,uVar13,uVar11);
        __vbaFreeObj();
        uVar6 = (**(code **)(*param_1 + 0x358))(param_1,0x68030001,0xb,local_a4,0xffffffff,local_9c)
        ;
        uVar6 = (*pcVar9)(&local_54,uVar6);
        __vbaLateIdSt(uVar6,uVar2,puVar15,uVar5,puVar10,uVar7);
        __vbaFreeObj();
      }
    }
  }
  if (*param_2 == 9) {
    uVar2 = (**(code **)(*param_1 + 0x310))(param_1);
    piVar8 = (int *)(*pcVar9)(&local_54,uVar2);
    iVar4 = (**(code **)(*piVar8 + 0x40))(piVar8,9,&local_58);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar8,&DAT_004077a0,0x40);
    }
    piVar8 = local_58;
    iVar4 = (**(code **)(*local_58 + 0xc4))(local_58,0);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar8,&DAT_0040788c,0xc4);
    }
    __vbaFreeObjList(2,&local_54,&local_58);
    local_60 = __vbaStrCat(L"Help\\English\\Parachute.hlp",param_1[0x13]);
    local_68 = 8;
    uVar6 = 8;
    uVar5 = 0x13;
    piVar8 = param_1;
    uVar2 = (**(code **)(*param_1 + 0x364))(param_1,0x13,8,local_64,local_60,local_5c);
    puVar16 = &local_54;
    uVar7 = (*pcVar9)(puVar16,uVar2);
    __vbaLateIdSt(uVar7,puVar16,uVar2,piVar8,uVar5,uVar6);
    __vbaFreeObj();
    __vbaFreeVar(local_64);
    uVar6 = 2;
    uVar5 = 0x14;
    piVar8 = param_1;
    uVar2 = (**(code **)(*param_1 + 0x364))(param_1,0x14,2,local_a4,0xb,local_9c);
    puVar16 = &local_54;
    uVar7 = (*pcVar9)(puVar16,uVar2);
    __vbaLateIdSt(uVar7,puVar16,uVar2,piVar8,uVar5,uVar6);
    __vbaFreeObj();
    uVar2 = (**(code **)(*param_1 + 0x364))(param_1,0x23,0);
    uVar2 = (*pcVar9)(&local_54,uVar2);
    __vbaLateIdCall(uVar2);
    __vbaFreeObj();
  }
  if (*param_2 == 10) {
    uVar2 = (**(code **)(*param_1 + 0x310))(param_1);
    piVar8 = (int *)(*pcVar9)(&local_54,uVar2);
    iVar4 = (**(code **)(*piVar8 + 0x40))(piVar8,10,&local_58);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar8,&DAT_004077a0,0x40);
    }
    piVar8 = local_58;
    iVar4 = (**(code **)(*local_58 + 0xc4))(local_58,0);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar8,&DAT_0040788c,0xc4);
    }
    __vbaFreeObjList(2,&local_54,&local_58);
    uVar2 = __vbaNew(&DAT_00402d84);
    (*pcVar9)(&local_24,uVar2);
    iVar4 = (**(code **)(*local_24 + 0x2b0))
                      (local_24,3,local_a4,1,local_9c,9,local_b4,param_1,local_ac);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,local_24,&DAT_00407040,0x2b0);
    }
  }
  __vbaExitProc();
  __vbaFreeObj(&LAB_004474d7);
  __vbaFreeObj();
  __vbaFreeObj();
  __vbaFreeObj();
  __vbaFreeObj();
  __vbaFreeObj();
  __vbaFreeObj();
  __vbaFreeObj();
  __vbaFreeObj();
  __vbaFreeObj();
  return;
}


// ---- FUN_00447500 @ 00447500

void __cdecl FUN_00447500(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  void *pvStack_20;
  undefined *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  puStack_1c = &DAT_00401ce6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffff2c;
  local_14 = &DAT_00401498;
  local_10 = 0;
  local_c = 0;
  ExceptionList = &pvStack_20;
  (**(code **)(*param_1 + 4))(param_1);
  __vbaOnError(1);
  uVar2 = 0xfffffff0;
  uVar1 = *param_2;
  FUN_00406b10();
  __vbaSetSystemError(uVar1,uVar2);
  __vbaExitProc();
  return;
}


// ---- FUN_00447720 @ 00447720

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00447720(int **param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int **ppiVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  code *pcVar8;
  code *pcVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int **ppiVar16;
  int **ppiStack_290;
  int iStack_28c;
  code *pcStack_288;
  int iStack_274;
  undefined4 auStack_270 [13];
  undefined4 auStack_23c [2];
  wchar_t *pwStack_234;
  undefined4 auStack_22c [2];
  wchar_t *pwStack_224;
  undefined4 auStack_21c [2];
  wchar_t *pwStack_214;
  undefined4 auStack_20c [2];
  undefined4 uStack_204;
  undefined4 auStack_1fc [2];
  undefined4 uStack_1f4;
  undefined4 auStack_1ec [2];
  undefined4 uStack_1e4;
  undefined4 auStack_1dc [4];
  undefined4 auStack_1cc [4];
  undefined4 auStack_1bc [4];
  undefined4 auStack_1ac [4];
  undefined4 auStack_19c [4];
  undefined4 auStack_18c [4];
  undefined4 auStack_17c [4];
  undefined4 auStack_16c [4];
  undefined4 auStack_15c [3];
  undefined4 uStack_150;
  int iStack_14c;
  int *piStack_148;
  undefined *puStack_144;
  int *piStack_140;
  int *piStack_13c;
  int *piStack_138;
  int **ppiStack_134;
  int **ppiStack_130;
  int *piStack_12c;
  void *pvStack_128;
  undefined *puStack_124;
  int *piStack_120;
  int **ppiStack_11c;
  void **ppvStack_118;
  int **ppiStack_114;
  int **ppiStack_110;
  int **ppiStack_10c;
  int **ppiStack_108;
  int **ppiStack_104;
  int **ppiStack_100;
  int *piStack_fc;
  int *piStack_f8;
  int **ppiStack_f4;
  int **ppiStack_f0;
  int *piStack_ec;
  int **ppiStack_e8;
  int **ppiStack_e4;
  int *local_a8;
  int *local_a4;
  int local_a0 [5];
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_6c;
  undefined4 local_5c;
  undefined4 local_4c;
  int local_3c;
  int local_38 [2];
  undefined4 local_30;
  int *local_2c [2];
  void *local_24;
  void *pvStack_20;
  undefined *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  puStack_1c = &DAT_00401ce6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffff20;
  local_14 = &DAT_004014c0;
  local_10 = 0;
  local_c = 0;
  ppiStack_e4 = param_1;
  ppiStack_e8 = (int **)0x44775d;
  ExceptionList = &pvStack_20;
  (*(code *)(*param_1)[1])();
  local_24 = (void *)0x0;
  local_2c[0] = (int *)0x0;
  local_30 = 0;
  local_38[1] = 0;
  local_38[0] = 0;
  local_3c = 0;
  local_4c = 0;
  local_5c = 0;
  local_6c = 0;
  local_7c = 0;
  local_8c = 0;
  local_a0[0] = 0;
  local_a4 = (int *)0x0;
  local_a8 = (int *)0x0;
  ppiStack_e8 = (int **)0x1;
  piStack_ec = (int *)0x44779b;
  __vbaOnError();
  ppiStack_e8 = param_1;
  piStack_ec = (int *)0x4477a4;
  piStack_ec = (int *)(*(code *)(*param_1)[0xbf])();
  ppiStack_f0 = (int **)local_38;
  ppiStack_f4 = (int **)0x4477af;
  piVar1 = (int *)__vbaObjSet();
  ppiStack_f0 = (int **)0x4477ba;
  piStack_ec = piVar1;
  iVar2 = (**(code **)(*piVar1 + 0x1e8))();
  pcVar9 = __vbaHresultCheckObj_exref;
  if (iVar2 < 0) {
    ppiStack_f0 = (int **)0x1e8;
    ppiStack_f4 = (int **)&DAT_00407ef4;
    ppiStack_100 = (int **)0x4477d4;
    piStack_fc = (int *)iVar2;
    piStack_f8 = piVar1;
    __vbaHresultCheckObj();
  }
  ppiStack_f0 = (int **)0x4477e5;
  __vbaFreeObj();
  ppiStack_f0 = &local_a4;
  ppiStack_f4 = param_1;
  piStack_f8 = (int *)0x4477f2;
  iVar2 = (*(code *)(*param_1)[0x16])();
  if (iVar2 < 0) {
    piStack_f8 = (int *)0x58;
    piStack_fc = (int *)&DAT_00406734;
    ppiStack_100 = param_1;
    ppiStack_108 = (int **)0x447803;
    ppiStack_104 = (int **)iVar2;
    __vbaHresultCheckObj();
  }
  piStack_f8 = (int *)0x0;
  piStack_fc = local_a4;
  ppiStack_100 = (int **)0x447811;
  local_a8 = (int *)FUN_00406a80();
  pcVar8 = __vbaSetSystemError_exref;
  ppiStack_100 = (int **)0x44781f;
  __vbaSetSystemError();
  local_2c[0] = local_a8;
  do {
    if (local_2c[0] == (int *)0x0) {
      ppiStack_100 = param_1;
      ppiStack_104 = (int **)0x447a33;
      ppiVar4 = (int **)(*(code *)(*param_1)[0x1c6])();
      if ((int)ppiVar4 < 0) {
        ppiStack_104 = (int **)0x718;
        ppiStack_108 = (int **)&DAT_00406764;
        ppiStack_10c = param_1;
        ppiStack_114 = (int **)0x447a49;
        ppiStack_110 = ppiVar4;
        (*pcVar9)();
      }
      ppiStack_104 = (int **)0x447b76;
      __vbaExitProc();
      ppiStack_104 = (int **)&LAB_00447bc3;
      ppiStack_108 = (int **)0x447bc2;
      __vbaFreeStr();
      return;
    }
    ppiStack_100 = &local_a4;
    ppiStack_104 = param_1;
    ppiStack_108 = (int **)0x44783d;
    ppiStack_114 = (int **)(*(code *)(*param_1)[0x16])();
    if ((int)ppiStack_114 < 0) {
      ppiStack_108 = (int **)0x58;
      ppiStack_10c = (int **)&DAT_00406734;
      ppiStack_110 = param_1;
      ppvStack_118 = (void **)0x44784e;
      (*pcVar9)();
    }
    ppiStack_108 = &local_a8;
    ppiStack_10c = local_2c;
    ppiStack_110 = param_1;
    ppiStack_114 = (int **)0x447862;
    piVar1 = (int *)(*(code *)(*param_1)[0x1c4])();
    if ((int)piVar1 < 0) {
      ppiStack_114 = (int **)0x710;
      ppvStack_118 = (void **)&DAT_00406764;
      ppiStack_11c = param_1;
      puStack_124 = (undefined *)0x447874;
      piStack_120 = piVar1;
      (*pcVar9)();
    }
    if (((uint)local_a8 & -(int)(short)(ushort)(local_2c[0] != local_a4)) != 0) {
      ppiStack_114 = (int **)local_2c[0];
      ppvStack_118 = (void **)0x447899;
      local_a4 = (int *)FUN_00406bc0();
      ppvStack_118 = (void **)0x4478a1;
      (*pcVar8)();
      iVar2 = (int)local_a4 + 1;
      if (SCARRY4((int)local_a4,1)) {
        ppvStack_118 = (void **)0x447be8;
        __vbaErrorOverflow();
        ppiVar4 = ppiStack_10c;
        puStack_124 = &DAT_00401ce6;
        pvStack_128 = ExceptionList;
        piStack_120 = (int *)&ppiStack_290;
        ppiStack_290 = param_1;
        ppiStack_11c = (int **)&DAT_004014e8;
        ppvStack_118 = (void **)0x0;
        ExceptionList = &pvStack_128;
        ppiVar16 = ppiStack_10c;
        iStack_28c = iVar2;
        pcStack_288 = pcVar8;
        ppiStack_114 = (int **)&stack0xfffffffc;
        (*(code *)(*ppiStack_10c)[1])(ppiStack_10c);
        piStack_12c = (int *)0x0;
        ppiStack_134 = (int **)0x0;
        piStack_138 = (int *)0x0;
        piStack_13c = (int *)0x0;
        iStack_14c = 0;
        auStack_15c[0] = 0;
        auStack_16c[0] = 0;
        auStack_17c[0] = 0;
        auStack_18c[0] = 0;
        auStack_19c[0] = 0;
        auStack_1ac[0] = 0;
        auStack_1bc[0] = 0;
        auStack_1cc[0] = 0;
        auStack_1dc[0] = 0;
        auStack_1ec[0] = 0;
        auStack_1fc[0] = 0;
        auStack_20c[0] = 0;
        auStack_21c[0] = 0;
        auStack_22c[0] = 0;
        auStack_23c[0] = 0;
        auStack_270[0] = 0;
        __vbaStrCopy(ppiVar16);
        ppiStack_290 = ppiVar4;
        uVar5 = (*(code *)(*ppiVar4)[0xbf])();
        piVar1 = (int *)__vbaObjSet(&piStack_13c,uVar5);
        iVar2 = (**(code **)(*piVar1 + 0x168))(piVar1,auStack_270);
        if (iVar2 < 0) {
          __vbaHresultCheckObj(iVar2,piVar1,&DAT_00407ef4,0x168);
        }
        uVar6 = __vbaStrToAnsi(&ppiStack_134,piStack_12c);
        uVar15 = 0xffffffff;
        uVar14 = 399;
        uVar5 = auStack_270[0];
        iVar2 = FUN_00406c50();
        iStack_274 = iVar2;
        __vbaSetSystemError(uVar5,uVar14,uVar15,uVar6);
        __vbaStrToUnicode(&piStack_12c,ppiStack_134);
        __vbaFreeStr();
        __vbaFreeObj();
        if (iVar2 < 0) {
          iVar2 = (*(code *)(*ppiVar4)[0x1c8])(ppiVar4);
          if (iVar2 < 0) {
            __vbaHresultCheckObj(iVar2,ppiVar4,&DAT_00406764,0x720);
          }
        }
        else {
          _DAT_00451028 = 0xffff;
          rtcVarBstrFromAnsi(&iStack_14c,10);
          rtcVarBstrFromAnsi(auStack_16c,0xd);
          rtcVarBstrFromAnsi(auStack_19c,10);
          rtcVarBstrFromAnsi(auStack_1bc,0xd);
          uStack_204 = 0x80020004;
          uStack_1f4 = 0x80020004;
          uStack_1e4 = 0x80020004;
          auStack_21c[0] = 8;
          auStack_22c[0] = 8;
          auStack_23c[0] = 8;
          puVar13 = auStack_20c;
          auStack_20c[0] = 10;
          auStack_1fc[0] = 10;
          auStack_1ec[0] = 10;
          puVar12 = auStack_1fc;
          puVar11 = auStack_1ec;
          uVar10 = 4;
          pwStack_214 = L"Leo Server is running and must be closed for Archiving.";
          pwStack_224 = L" Answer NO to leave LEO-32 running and abort Archiving.";
          pwStack_234 = L" Answer YES to shut down LEO-32 ready to perform archiving";
          uVar7 = __vbaVarAdd(auStack_15c,&iStack_14c,auStack_21c);
          uVar7 = __vbaVarAdd(auStack_17c,auStack_16c,uVar7);
          uVar7 = __vbaVarAdd(auStack_18c,auStack_22c,uVar7);
          uVar7 = __vbaVarAdd(auStack_1ac,auStack_19c,uVar7);
          uVar7 = __vbaVarAdd(auStack_1cc,auStack_1bc,uVar7);
          uVar7 = __vbaVarAdd(auStack_1dc,auStack_23c,uVar7);
          iVar2 = rtcMsgBox(uVar7,uVar10,puVar11,puVar12,puVar13);
          __vbaFreeVarList(0xd,&iStack_14c,auStack_15c,auStack_16c,auStack_17c,auStack_18c,
                           auStack_19c,auStack_1ac,auStack_1bc,auStack_1cc,auStack_1dc,auStack_1ec,
                           auStack_1fc,auStack_20c);
          if (iVar2 == 7) {
            __vbaEnd(uVar5,uVar14,uVar15,uVar6);
          }
          else {
            uVar5 = (*(code *)(*ppiVar4)[0xbf])(ppiVar4);
            piVar1 = (int *)__vbaObjSet(&piStack_13c,uVar5);
            iVar2 = *piVar1;
            uVar5 = __vbaI2I4(auStack_270);
            iVar2 = (**(code **)(iVar2 + 0x150))(piVar1,uVar5);
            if (iVar2 < 0) {
              iStack_28c = 0x150;
              ppiStack_290 = (int **)&DAT_00407ef4;
              __vbaHresultCheckObj(iVar2,piVar1);
            }
            iStack_28c = 0;
            ppiStack_290 = (int **)0x447f10;
            __vbaStrI2();
            iStack_28c = 0x447f1b;
            iStack_28c = __vbaStrMove();
            ppiStack_290 = &piStack_138;
            iStack_28c = __vbaStrToAnsi();
            ppiStack_290 = (int **)0x0;
            uVar6 = 0x524;
            uVar5 = auStack_270[0];
            FUN_00406c50();
            __vbaSetSystemError(uVar5,uVar6);
            __vbaFreeStrList(2,&ppiStack_134,&piStack_138);
            __vbaFreeObj();
          }
        }
        __vbaFreeStr(&LAB_00448001);
        return;
      }
      ppiStack_11c = (int **)0x4478b7;
      ppvStack_118 = (void **)iVar2;
      rtcSpaceBstr();
      ppvStack_118 = (void **)0x4478c2;
      __vbaStrMove();
      ppiStack_11c = local_24;
      piStack_120 = &local_30;
      puStack_124 = (undefined *)0x4478d1;
      ppvStack_118 = (void **)iVar2;
      ppiStack_11c = (int **)__vbaStrToAnsi();
      piStack_120 = local_2c[0];
      puStack_124 = (undefined *)0x4478db;
      local_a4 = (int *)FUN_00406b58();
      puStack_124 = (undefined *)0x4478e3;
      (*pcVar8)();
      ppiStack_114 = (int **)local_30;
      ppvStack_118 = &local_24;
      ppiStack_11c = (int **)0x4478f1;
      __vbaStrToUnicode();
      piVar1 = local_a4;
      ppiStack_114 = (int **)0x447900;
      __vbaFreeStr();
      pcVar9 = __vbaHresultCheckObj_exref;
      if (0 < (int)piVar1) {
        ppiStack_114 = param_1;
        ppvStack_118 = (void **)0x447911;
        ppvStack_118 = (void **)(*(code *)(*param_1)[0xbf])();
        ppiStack_11c = (int **)local_38;
        piStack_120 = (int *)0x44791c;
        piVar1 = (int *)__vbaObjSet();
        puStack_124 = (undefined *)0xa;
        piStack_120 = (int *)local_88;
        ppiStack_11c = (int **)0x80020004;
        ppvStack_118 = (void **)local_80;
        pvStack_128 = local_24;
        ppiStack_130 = (int **)0x44794e;
        piStack_12c = piVar1;
        piVar3 = (int *)(**(code **)(*piVar1 + 0x1ec))();
        if ((int)piVar3 < 0) {
          ppiStack_130 = (int **)0x1ec;
          ppiStack_134 = (int **)&DAT_00407ef4;
          piStack_140 = (int *)0x447966;
          piStack_13c = piVar3;
          piStack_138 = piVar1;
          __vbaHresultCheckObj();
        }
        ppiStack_130 = (int **)0x44796f;
        __vbaFreeObj();
        ppiStack_130 = param_1;
        ppiStack_134 = (int **)0x447978;
        ppiStack_134 = (int **)(*(code *)(*param_1)[0xbf])();
        piStack_138 = &local_3c;
        piStack_13c = (int *)0x447985;
        piVar1 = (int *)__vbaObjSet();
        ppiStack_134 = param_1;
        piStack_138 = (int *)0x447990;
        piStack_138 = (int *)(*(code *)(*param_1)[0xbf])();
        piStack_13c = local_38;
        piStack_140 = (int *)0x447997;
        piVar3 = (int *)__vbaObjSet();
        piStack_138 = local_a0;
        piStack_140 = (int *)0x4479a9;
        piStack_13c = piVar3;
        iStack_14c = (**(code **)(*piVar3 + 0x158))();
        if (iStack_14c < 0) {
          piStack_140 = (int *)0x158;
          puStack_144 = &DAT_00407ef4;
          uStack_150 = 0x4479c1;
          piStack_148 = piVar3;
          __vbaHresultCheckObj();
        }
        piStack_140 = local_2c[0];
        puStack_144 = (undefined *)local_a0[0];
        iStack_14c = 0x4479d5;
        piStack_148 = piVar1;
        piStack_120 = (int *)(**(code **)(*piVar1 + 0x154))();
        if ((int)piStack_120 < 0) {
          ppiStack_114 = (int **)0x154;
          ppvStack_118 = (void **)&DAT_00407ef4;
          puStack_124 = (undefined *)0x4479ed;
          ppiStack_11c = (int **)piVar1;
          __vbaHresultCheckObj();
        }
        ppiStack_114 = (int **)&local_3c;
        ppvStack_118 = (void **)local_38;
        ppiStack_11c = (int **)0x2;
        piStack_120 = (int *)0x4479fd;
        __vbaFreeObjList();
        pcVar8 = __vbaSetSystemError_exref;
        pcVar9 = __vbaHresultCheckObj_exref;
      }
    }
    ppiStack_114 = (int **)0x2;
    ppvStack_118 = (void **)local_2c[0];
    ppiStack_11c = (int **)0x447a17;
    local_a4 = (int *)FUN_00406a80();
    ppiStack_11c = (int **)0x447a1f;
    (*pcVar8)();
    local_2c[0] = local_a4;
  } while( true );
}


// ---- FUN_00447bf0 @ 00447bf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00447bf0(int *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 local_160 [13];
  undefined4 local_12c [2];
  wchar_t *local_124;
  undefined4 local_11c [2];
  wchar_t *local_114;
  undefined4 local_10c [2];
  wchar_t *local_104;
  undefined4 local_fc [2];
  undefined4 local_f4;
  undefined4 local_ec [2];
  undefined4 local_e4;
  undefined4 local_dc [2];
  undefined4 local_d4;
  undefined4 local_cc [4];
  undefined4 local_bc [4];
  undefined4 local_ac [4];
  undefined4 local_9c [4];
  undefined4 local_8c [4];
  undefined4 local_7c [4];
  undefined4 local_6c [4];
  undefined4 local_5c [4];
  undefined4 local_4c [4];
  undefined4 local_3c [4];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24 [2];
  undefined4 local_1c;
  void *pvStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &DAT_00401ce6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xfffffe80;
  local_c = &DAT_004014e8;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  piVar2 = param_1;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  local_24[0] = 0;
  local_28 = 0;
  local_2c = 0;
  local_3c[0] = 0;
  local_4c[0] = 0;
  local_5c[0] = 0;
  local_6c[0] = 0;
  local_7c[0] = 0;
  local_8c[0] = 0;
  local_9c[0] = 0;
  local_ac[0] = 0;
  local_bc[0] = 0;
  local_cc[0] = 0;
  local_dc[0] = 0;
  local_ec[0] = 0;
  local_fc[0] = 0;
  local_10c[0] = 0;
  local_11c[0] = 0;
  local_12c[0] = 0;
  local_160[0] = 0;
  __vbaStrCopy(piVar2);
  uVar1 = (**(code **)(*param_1 + 0x2fc))();
  piVar2 = (int *)__vbaObjSet(&local_2c,uVar1);
  iVar3 = (**(code **)(*piVar2 + 0x168))(piVar2,local_160);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00407ef4,0x168);
  }
  uVar4 = __vbaStrToAnsi(local_24,local_1c);
  uVar11 = 0xffffffff;
  uVar10 = 399;
  uVar1 = local_160[0];
  iVar3 = FUN_00406c50();
  __vbaSetSystemError(uVar1,uVar10,uVar11,uVar4);
  __vbaStrToUnicode(&local_1c,local_24[0]);
  __vbaFreeStr();
  __vbaFreeObj();
  if (iVar3 < 0) {
    iVar3 = (**(code **)(*param_1 + 0x720))(param_1);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,param_1,&DAT_00406764,0x720);
    }
  }
  else {
    _DAT_00451028 = 0xffff;
    rtcVarBstrFromAnsi(local_3c,10);
    rtcVarBstrFromAnsi(local_5c,0xd);
    rtcVarBstrFromAnsi(local_8c,10);
    rtcVarBstrFromAnsi(local_ac,0xd);
    local_f4 = 0x80020004;
    local_e4 = 0x80020004;
    local_d4 = 0x80020004;
    local_10c[0] = 8;
    local_11c[0] = 8;
    local_12c[0] = 8;
    puVar9 = local_fc;
    local_fc[0] = 10;
    local_ec[0] = 10;
    local_dc[0] = 10;
    puVar8 = local_ec;
    puVar7 = local_dc;
    uVar6 = 4;
    local_104 = L"Leo Server is running and must be closed for Archiving.";
    local_114 = L" Answer NO to leave LEO-32 running and abort Archiving.";
    local_124 = L" Answer YES to shut down LEO-32 ready to perform archiving";
    uVar5 = __vbaVarAdd(local_4c,local_3c,local_10c);
    uVar5 = __vbaVarAdd(local_6c,local_5c,uVar5);
    uVar5 = __vbaVarAdd(local_7c,local_11c,uVar5);
    uVar5 = __vbaVarAdd(local_9c,local_8c,uVar5);
    uVar5 = __vbaVarAdd(local_bc,local_ac,uVar5);
    uVar5 = __vbaVarAdd(local_cc,local_12c,uVar5);
    iVar3 = rtcMsgBox(uVar5,uVar6,puVar7,puVar8,puVar9);
    __vbaFreeVarList(0xd,local_3c,local_4c,local_5c,local_6c,local_7c,local_8c,local_9c,local_ac,
                     local_bc,local_cc,local_dc,local_ec,local_fc);
    if (iVar3 == 7) {
      __vbaEnd(uVar1,uVar10,uVar11,uVar4);
    }
    else {
      uVar1 = (**(code **)(*param_1 + 0x2fc))(param_1);
      piVar2 = (int *)__vbaObjSet(&local_2c,uVar1);
      iVar3 = *piVar2;
      uVar1 = __vbaI2I4(local_160);
      iVar3 = (**(code **)(iVar3 + 0x150))(piVar2,uVar1);
      if (iVar3 < 0) {
        __vbaHresultCheckObj(iVar3,piVar2);
      }
      __vbaStrI2();
      __vbaStrMove();
      __vbaStrToAnsi();
      uVar4 = 0x524;
      uVar1 = local_160[0];
      FUN_00406c50();
      __vbaSetSystemError(uVar1,uVar4);
      __vbaFreeStrList(2,local_24,&local_28);
      __vbaFreeObj();
    }
  }
  __vbaFreeStr(&LAB_00448001);
  return;
}


// ---- FUN_00448020 @ 00448020

void __cdecl FUN_00448020(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 local_78 [2];
  undefined4 local_70;
  undefined4 local_68 [2];
  undefined4 local_60;
  undefined4 local_58 [2];
  undefined4 local_50;
  undefined4 local_48 [2];
  undefined4 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28 [2];
  void *pvStack_20;
  undefined *puStack_1c;
  undefined1 *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  puStack_1c = &DAT_00401ce6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffff1c;
  local_14 = &LAB_004014f8;
  local_10 = 0;
  local_c = 0;
  ExceptionList = &pvStack_20;
  piVar7 = param_1;
  (**(code **)(*param_1 + 4))(param_1);
  local_28[0] = 0;
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  local_38 = 0;
  local_48[0] = 0;
  local_58[0] = 0;
  local_68[0] = 0;
  local_78[0] = 0;
  __vbaOnError(1);
  uVar1 = __vbaStrToAnsi(local_28,L"ShutDownLEOServer32Gracefully");
  uVar6 = 0;
  uVar5 = 2;
  iVar2 = FUN_00406ca4();
  __vbaSetSystemError(uVar5,uVar6,uVar1);
  __vbaFreeStr();
  if (iVar2 < 1) {
    iVar2 = (**(code **)(*param_1 + 0x720))(param_1);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,param_1,&DAT_00406764,0x720);
    }
  }
  else {
    local_70 = 0x80020004;
    local_78[0] = 10;
    local_60 = 0x80020004;
    local_68[0] = 10;
    local_50 = 0x80020004;
    local_58[0] = 10;
    __vbaStrCat(&DAT_004080ec,L"Leo Server is running and must be closed for Archiving.");
    uVar3 = __vbaStrMove();
    __vbaStrCat(L"Answer NO to leave LEO-32 running and abort Archiving.",uVar3);
    uVar3 = __vbaStrMove();
    __vbaStrCat(&DAT_004080ec,uVar3);
    uVar3 = __vbaStrMove();
    local_40 = __vbaStrCat(L"Answer YES to shut down LEO-32 ready to perform archiving",uVar3);
    local_48[0] = 8;
    iVar4 = rtcMsgBox(local_48,4,local_58,local_68,local_78);
    __vbaFreeStrList(3,local_28,&local_2c,&local_30);
    __vbaFreeVarList(4,local_48,local_58,local_68,local_78);
    if (iVar4 == 7) {
      __vbaEnd(uVar5,uVar6,uVar1,piVar7);
    }
    else {
      FUN_00406ce8();
      __vbaSetSystemError(iVar2);
    }
  }
  __vbaExitProc();
  return;
}


// ---- FUN_00448360 @ 00448360

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00448360(int *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_68;
  undefined4 local_58;
  undefined4 local_48;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c [2];
  undefined4 local_24;
  void *pvStack_20;
  undefined *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  puStack_1c = &DAT_00401ce6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffff28;
  local_14 = &DAT_00401520;
  local_10 = 0;
  local_c = 0;
  ExceptionList = &pvStack_20;
  piVar2 = param_1;
  (**(code **)(*param_1 + 4))(param_1);
  local_24 = 0;
  local_2c[0] = 0;
  local_30 = 0;
  local_34 = 0;
  local_38 = 0;
  local_48 = 0;
  local_58 = 0;
  local_68 = 0;
  local_78 = 0;
  local_88 = 0;
  local_98 = 0;
  local_9c = 0;
  __vbaOnError(1);
  __vbaStrCopy(piVar2);
  uVar1 = (**(code **)(*param_1 + 0x2fc))();
  piVar2 = (int *)__vbaObjSet(&local_34,uVar1);
  iVar3 = (**(code **)(*piVar2 + 0x168))(piVar2,&local_9c);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00407ef4,0x168);
  }
  uVar4 = __vbaStrToAnsi(local_2c,local_24);
  uVar6 = 0xffffffff;
  uVar5 = 399;
  uVar1 = local_9c;
  iVar3 = FUN_00406c50();
  __vbaSetSystemError(uVar1,uVar5,uVar6,uVar4);
  __vbaStrToUnicode(&local_24,local_2c[0]);
  __vbaFreeStr();
  __vbaFreeObj();
  if (0 < iVar3) {
    _DAT_00451028 = 0xffff;
    if (DAT_004510b8 == (int *)0x0) {
      __vbaNew2(&DAT_00402680,&DAT_004510b8);
    }
    piVar2 = DAT_004510b8;
    local_88 = 10;
    iVar3 = (**(code **)(*DAT_004510b8 + 0x2b0))
                      (DAT_004510b8,10,local_84,0x80020004,local_7c,10,local_94,0x80020004,local_8c)
    ;
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar2,&DAT_00407630,0x2b0);
    }
    if (DAT_004510b8 == (int *)0x0) {
      __vbaNew2(&DAT_00402680,&DAT_004510b8);
    }
    piVar2 = DAT_004510b8;
    iVar3 = (**(code **)(*DAT_004510b8 + 0x2a8))(DAT_004510b8);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar2,&DAT_00407630,0x2a8);
    }
  }
  __vbaExitProc();
  __vbaFreeStr(&LAB_004486c0);
  return;
}


// ---- FUN_004486e0 @ 004486e0

void __cdecl FUN_004486e0(uint param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 local_7c;
  undefined4 local_74;
  undefined4 local_3c;
  undefined4 local_34;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  void *pvStack_20;
  undefined *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  uint local_10;
  undefined4 local_c;
  
  puStack_1c = &DAT_00401ce6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffff38;
  local_14 = &DAT_00401548;
  local_10 = param_1 & 1;
  piVar3 = (int *)(param_1 & 0xfffffffe);
  local_c = 0;
  ExceptionList = &pvStack_20;
  (**(code **)(*piVar3 + 4))(piVar3);
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  __vbaOnError(1);
  uVar1 = __vbaStrCat(L"Help\\English\\Parachute.hlp",piVar3[0x13]);
  uVar6 = 8;
  uVar5 = 0x13;
  piVar4 = piVar3;
  uVar2 = (**(code **)(*piVar3 + 0x364))(piVar3,0x13,8,local_3c,uVar1,local_34);
  uVar2 = __vbaObjSet(&local_2c,uVar2);
  __vbaLateIdSt(uVar2,piVar4,uVar5,uVar6,local_3c,uVar1);
  __vbaFreeObj();
  __vbaFreeVar(local_34);
  uVar5 = 2;
  uVar6 = 0xb;
  uVar2 = 0x14;
  piVar4 = piVar3;
  uVar1 = (**(code **)(*piVar3 + 0x364))(piVar3,0x14,2,local_7c,0xb,local_74);
  uVar1 = __vbaObjSet(&local_2c,uVar1);
  __vbaLateIdSt(uVar1,piVar4,uVar2,uVar5,local_7c,uVar6);
  __vbaFreeObj();
  uVar1 = (**(code **)(*piVar3 + 0x364))(piVar3,0x23,0);
  uVar1 = __vbaObjSet(&local_2c,uVar1);
  __vbaLateIdCall(uVar1);
  __vbaFreeObj();
  __vbaExitProc();
  return;
}


// ---- FUN_004489a0 @ 004489a0

void __cdecl FUN_004489a0(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 local_98 [9];
  undefined4 local_74;
  undefined4 local_64;
  undefined4 local_54;
  undefined4 local_44;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28 [2];
  void *pvStack_20;
  undefined *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  uint local_10;
  undefined4 local_c;
  
  puStack_1c = &DAT_00401ce6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffff2c;
  local_14 = &DAT_00401570;
  local_10 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  local_c = 0;
  ExceptionList = &pvStack_20;
  (**(code **)(*piVar4 + 4))(piVar4);
  local_28[0] = 0;
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  local_44 = 0;
  local_54 = 0;
  local_64 = 0;
  local_74 = 0;
  local_98[0] = 0;
  __vbaOnError(1);
  iVar1 = (**(code **)(*piVar4 + 0x58))(piVar4,local_98);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar4,&DAT_00406734,0x58);
  }
  uVar8 = 1;
  uVar2 = __vbaStrToAnsi(&local_2c,&DAT_004082c4);
  uVar7 = 0;
  uVar3 = __vbaStrToAnsi(local_28,L"http://www.leo-usa.com");
  uVar6 = 0;
  uVar5 = local_98[0];
  FUN_0040698c();
  __vbaSetSystemError(uVar5,uVar6,uVar3,uVar7,uVar2,uVar8);
  __vbaFreeStrList(2,local_28,&local_2c);
  __vbaExitProc();
  return;
}


// ---- FUN_00448c10 @ 00448c10

void __cdecl FUN_00448c10(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 local_98 [9];
  undefined4 local_74;
  undefined4 local_64;
  undefined4 local_54;
  undefined4 local_44;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28 [2];
  void *pvStack_20;
  undefined *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  uint local_10;
  undefined4 local_c;
  
  puStack_1c = &DAT_00401ce6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffff2c;
  local_14 = &DAT_00401598;
  local_10 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  local_c = 0;
  ExceptionList = &pvStack_20;
  (**(code **)(*piVar4 + 4))(piVar4);
  local_28[0] = 0;
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  local_44 = 0;
  local_54 = 0;
  local_64 = 0;
  local_74 = 0;
  local_98[0] = 0;
  __vbaOnError(1);
  iVar1 = (**(code **)(*piVar4 + 0x58))(piVar4,local_98);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar4,&DAT_00406734,0x58);
  }
  uVar8 = 1;
  uVar2 = __vbaStrToAnsi(&local_2c,&DAT_004082c4);
  uVar7 = 0;
  uVar3 = __vbaStrToAnsi(local_28,L"mailto:support@leo-em.co.uk");
  uVar6 = 0;
  uVar5 = local_98[0];
  FUN_0040698c();
  __vbaSetSystemError(uVar5,uVar6,uVar3,uVar7,uVar2,uVar8);
  __vbaFreeStrList(2,local_28,&local_2c);
  __vbaExitProc();
  return;
}


// ---- FUN_00448e80 @ 00448e80

void __cdecl FUN_00448e80(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 local_98 [9];
  undefined4 local_74;
  undefined4 local_64;
  undefined4 local_54;
  undefined4 local_44;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28 [2];
  void *pvStack_20;
  undefined *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  uint local_10;
  undefined4 local_c;
  
  puStack_1c = &DAT_00401ce6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffff2c;
  local_14 = &DAT_004015c0;
  local_10 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  local_c = 0;
  ExceptionList = &pvStack_20;
  (**(code **)(*piVar4 + 4))(piVar4);
  local_28[0] = 0;
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  local_44 = 0;
  local_54 = 0;
  local_64 = 0;
  local_74 = 0;
  local_98[0] = 0;
  __vbaOnError(1);
  iVar1 = (**(code **)(*piVar4 + 0x58))(piVar4,local_98);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar4,&DAT_00406734,0x58);
  }
  uVar8 = 1;
  uVar2 = __vbaStrToAnsi(&local_2c,&DAT_004082c4);
  uVar7 = 0;
  uVar3 = __vbaStrToAnsi(local_28,L"http://www.leo-em.co.uk");
  uVar6 = 0;
  uVar5 = local_98[0];
  FUN_0040698c();
  __vbaSetSystemError(uVar5,uVar6,uVar3,uVar7,uVar2,uVar8);
  __vbaFreeStrList(2,local_28,&local_2c);
  __vbaExitProc();
  return;
}


// ---- FUN_004490f0 @ 004490f0

void __cdecl FUN_004490f0(uint param_1)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  short sVar4;
  int *piVar5;
  undefined2 extraout_var;
  bool bVar6;
  short local_9c [28];
  undefined4 uStack_64;
  int iStack_60;
  int *piStack_5c;
  int *piStack_58;
  undefined4 uStack_54;
  int *piStack_50;
  int **ppiStack_4c;
  int **ppiStack_48;
  int **ppiStack_44;
  int **ppiStack_40;
  short *psStack_3c;
  int *local_38;
  int *local_34;
  void *pvStack_24;
  undefined *puStack_20;
  undefined1 *local_1c;
  undefined *local_18;
  uint local_14;
  undefined4 local_10;
  undefined4 local_8;
  
  puStack_20 = &DAT_00401ce6;
  pvStack_24 = ExceptionList;
  ExceptionList = &pvStack_24;
  __vbaChkstk();
  local_1c = &stack0xffffffd0;
  local_18 = &DAT_004015e8;
  local_14 = param_1 & 1;
  piVar5 = (int *)(param_1 & 0xfffffffe);
  local_10 = 0;
  local_38 = (int *)0x449145;
  local_34 = piVar5;
  (**(code **)(*piVar5 + 4))();
  local_8 = 2;
  local_38 = (int *)0x1;
  psStack_3c = (short *)0x44915b;
  __vbaOnError();
  local_8 = 3;
  local_38 = (int *)0xffffffff;
  psStack_3c = (short *)0x44916a;
  __vbaOnError();
  local_8 = 4;
  psStack_3c = (short *)0x449180;
  local_38 = piVar5;
  psStack_3c = (short *)(**(code **)(*piVar5 + 0x310))();
  ppiStack_40 = &local_34;
  ppiStack_44 = (int **)0x44918b;
  piVar2 = (int *)__vbaObjSet();
  psStack_3c = local_9c;
  ppiStack_44 = (int **)0x4491aa;
  ppiStack_40 = (int **)piVar2;
  iVar3 = (**(code **)(*piVar2 + 0x4c))();
  if (iVar3 < 0) {
    ppiStack_44 = (int **)0x4c;
    ppiStack_48 = (int **)&DAT_004077a0;
    uStack_54 = 0x4491d6;
    piStack_50 = (int *)iVar3;
    ppiStack_4c = (int **)piVar2;
    __vbaHresultCheckObj();
  }
  if (!SBORROW2(local_9c[0],1)) {
    sVar4 = 0;
    ppiStack_44 = (int **)0x449218;
    __vbaFreeObj();
    do {
      if ((short)(local_9c[0] + -1) < sVar4) {
        ppiStack_44 = (int **)0x44954f;
        __vbaExitProc();
        return;
      }
      local_8 = 5;
      ppiStack_48 = (int **)0x449256;
      ppiStack_44 = (int **)piVar5;
      ppiStack_48 = (int **)(**(code **)(*piVar5 + 0x310))();
      ppiStack_4c = &local_34;
      piStack_50 = (int *)0x449261;
      piVar2 = (int *)__vbaObjSet();
      ppiStack_48 = &local_38;
      ppiStack_4c = (int **)CONCAT22(extraout_var,sVar4);
      uStack_54 = 0x449282;
      piStack_50 = piVar2;
      iVar3 = (**(code **)(*piVar2 + 0x40))();
      if (iVar3 < 0) {
        uStack_54 = 0x40;
        piStack_58 = (int *)&DAT_004077a0;
        uStack_64 = 0x4492ae;
        iStack_60 = iVar3;
        piStack_5c = piVar2;
        __vbaHresultCheckObj();
      }
      piVar2 = local_38;
      uStack_54 = 0;
      piStack_58 = local_38;
      piStack_5c = (int *)0x4492e0;
      piStack_50 = (int *)(**(code **)(*local_38 + 0xc4))();
      if ((int)piStack_50 < 0) {
        ppiStack_44 = (int **)0xc4;
        ppiStack_48 = (int **)&DAT_0040788c;
        ppiStack_4c = (int **)piVar2;
        uStack_54 = 0x44930f;
        __vbaHresultCheckObj();
      }
      ppiStack_44 = &local_38;
      ppiStack_48 = &local_34;
      ppiStack_4c = (int **)0x2;
      piStack_50 = (int *)0x449331;
      __vbaFreeObjList();
      local_8 = 6;
      bVar6 = SCARRY2(sVar4,1);
      sVar4 = sVar4 + 1;
    } while (!bVar6);
  }
  ppiStack_44 = (int **)0x4495c1;
  __vbaErrorOverflow();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ---- FUN_004495d0 @ 004495d0

void __cdecl FUN_004495d0(uint param_1)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  short sVar4;
  int *piVar5;
  undefined2 extraout_var;
  bool bVar6;
  short local_9c [28];
  undefined4 uStack_64;
  int iStack_60;
  int *piStack_5c;
  int *piStack_58;
  undefined4 uStack_54;
  int *piStack_50;
  int **ppiStack_4c;
  int **ppiStack_48;
  int **ppiStack_44;
  int **ppiStack_40;
  short *psStack_3c;
  int *local_38;
  int *local_34;
  void *pvStack_24;
  undefined *puStack_20;
  undefined1 *local_1c;
  undefined *local_18;
  uint local_14;
  undefined4 local_10;
  undefined4 local_8;
  
  puStack_20 = &DAT_00401ce6;
  pvStack_24 = ExceptionList;
  ExceptionList = &pvStack_24;
  __vbaChkstk();
  local_1c = &stack0xffffffd0;
  local_18 = &DAT_00401640;
  local_14 = param_1 & 1;
  piVar5 = (int *)(param_1 & 0xfffffffe);
  local_10 = 0;
  local_38 = (int *)0x449625;
  local_34 = piVar5;
  (**(code **)(*piVar5 + 4))();
  local_8 = 2;
  local_38 = (int *)0x1;
  psStack_3c = (short *)0x44963b;
  __vbaOnError();
  local_8 = 3;
  local_38 = (int *)0xffffffff;
  psStack_3c = (short *)0x44964a;
  __vbaOnError();
  local_8 = 4;
  psStack_3c = (short *)0x449660;
  local_38 = piVar5;
  psStack_3c = (short *)(**(code **)(*piVar5 + 0x310))();
  ppiStack_40 = &local_34;
  ppiStack_44 = (int **)0x44966b;
  piVar2 = (int *)__vbaObjSet();
  psStack_3c = local_9c;
  ppiStack_44 = (int **)0x44968a;
  ppiStack_40 = (int **)piVar2;
  iVar3 = (**(code **)(*piVar2 + 0x4c))();
  if (iVar3 < 0) {
    ppiStack_44 = (int **)0x4c;
    ppiStack_48 = (int **)&DAT_004077a0;
    uStack_54 = 0x4496b6;
    piStack_50 = (int *)iVar3;
    ppiStack_4c = (int **)piVar2;
    __vbaHresultCheckObj();
  }
  if (!SBORROW2(local_9c[0],1)) {
    sVar4 = 0;
    ppiStack_44 = (int **)0x4496f8;
    __vbaFreeObj();
    do {
      if ((short)(local_9c[0] + -1) < sVar4) {
        ppiStack_44 = (int **)0x449a2f;
        __vbaExitProc();
        return;
      }
      local_8 = 5;
      ppiStack_48 = (int **)0x449736;
      ppiStack_44 = (int **)piVar5;
      ppiStack_48 = (int **)(**(code **)(*piVar5 + 0x310))();
      ppiStack_4c = &local_34;
      piStack_50 = (int *)0x449741;
      piVar2 = (int *)__vbaObjSet();
      ppiStack_48 = &local_38;
      ppiStack_4c = (int **)CONCAT22(extraout_var,sVar4);
      uStack_54 = 0x449762;
      piStack_50 = piVar2;
      iVar3 = (**(code **)(*piVar2 + 0x40))();
      if (iVar3 < 0) {
        uStack_54 = 0x40;
        piStack_58 = (int *)&DAT_004077a0;
        uStack_64 = 0x44978e;
        iStack_60 = iVar3;
        piStack_5c = piVar2;
        __vbaHresultCheckObj();
      }
      piVar2 = local_38;
      uStack_54 = 0;
      piStack_58 = local_38;
      piStack_5c = (int *)0x4497c0;
      piStack_50 = (int *)(**(code **)(*local_38 + 0xc4))();
      if ((int)piStack_50 < 0) {
        ppiStack_44 = (int **)0xc4;
        ppiStack_48 = (int **)&DAT_0040788c;
        ppiStack_4c = (int **)piVar2;
        uStack_54 = 0x4497ef;
        __vbaHresultCheckObj();
      }
      ppiStack_44 = &local_38;
      ppiStack_48 = &local_34;
      ppiStack_4c = (int **)0x2;
      piStack_50 = (int *)0x449811;
      __vbaFreeObjList();
      local_8 = 6;
      bVar6 = SCARRY2(sVar4,1);
      sVar4 = sVar4 + 1;
    } while (!bVar6);
  }
  ppiStack_44 = (int **)0x449aa1;
  __vbaErrorOverflow();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ---- FUN_00449ab0 @ 00449ab0

void __cdecl FUN_00449ab0(uint param_1,undefined2 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  void *pvStack_20;
  undefined *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  uint local_10;
  undefined4 local_c;
  
  puStack_1c = &DAT_00401ce6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffff38;
  local_14 = &DAT_00401698;
  local_10 = param_1 & 1;
  piVar3 = (int *)(param_1 & 0xfffffffe);
  local_c = 0;
  ExceptionList = &pvStack_20;
  (**(code **)(*piVar3 + 4))(piVar3);
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_30 = (int *)0x0;
  __vbaOnError(1);
  uVar1 = (**(code **)(*piVar3 + 0x310))(piVar3);
  piVar3 = (int *)__vbaObjSet(&local_2c,uVar1);
  iVar2 = (**(code **)(*piVar3 + 0x40))
                    (piVar3,CONCAT22((short)((uint)&local_30 >> 0x10),*param_2),&local_30);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar3,&DAT_004077a0,0x40);
  }
  piVar3 = local_30;
  iVar2 = (**(code **)(*local_30 + 0xc4))(local_30,1);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar3,&DAT_0040788c,0xc4);
  }
  __vbaFreeObjList(2,&local_2c,&local_30);
  __vbaExitProc();
  return;
}


// ---- FUN_00449d20 @ 00449d20

void __cdecl FUN_00449d20(uint param_1)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  short sVar4;
  int *piVar5;
  undefined2 extraout_var;
  bool bVar6;
  short local_9c [28];
  undefined4 uStack_64;
  int iStack_60;
  int *piStack_5c;
  int *piStack_58;
  undefined4 uStack_54;
  int *piStack_50;
  int **ppiStack_4c;
  int **ppiStack_48;
  int **ppiStack_44;
  int **ppiStack_40;
  short *psStack_3c;
  int *local_38;
  int *local_34;
  void *pvStack_24;
  undefined *puStack_20;
  undefined1 *local_1c;
  undefined *local_18;
  uint local_14;
  undefined4 local_10;
  undefined4 local_8;
  
  puStack_20 = &DAT_00401ce6;
  pvStack_24 = ExceptionList;
  ExceptionList = &pvStack_24;
  __vbaChkstk();
  local_1c = &stack0xffffffd0;
  local_18 = &DAT_004016c0;
  local_14 = param_1 & 1;
  piVar5 = (int *)(param_1 & 0xfffffffe);
  local_10 = 0;
  local_38 = (int *)0x449d75;
  local_34 = piVar5;
  (**(code **)(*piVar5 + 4))();
  local_8 = 2;
  local_38 = (int *)0x1;
  psStack_3c = (short *)0x449d8b;
  __vbaOnError();
  local_8 = 3;
  local_38 = (int *)0xffffffff;
  psStack_3c = (short *)0x449d9a;
  __vbaOnError();
  local_8 = 4;
  psStack_3c = (short *)0x449db0;
  local_38 = piVar5;
  psStack_3c = (short *)(**(code **)(*piVar5 + 0x310))();
  ppiStack_40 = &local_34;
  ppiStack_44 = (int **)0x449dbb;
  piVar2 = (int *)__vbaObjSet();
  psStack_3c = local_9c;
  ppiStack_44 = (int **)0x449dda;
  ppiStack_40 = (int **)piVar2;
  iVar3 = (**(code **)(*piVar2 + 0x4c))();
  if (iVar3 < 0) {
    ppiStack_44 = (int **)0x4c;
    ppiStack_48 = (int **)&DAT_004077a0;
    uStack_54 = 0x449e06;
    piStack_50 = (int *)iVar3;
    ppiStack_4c = (int **)piVar2;
    __vbaHresultCheckObj();
  }
  if (!SBORROW2(local_9c[0],1)) {
    sVar4 = 0;
    ppiStack_44 = (int **)0x449e48;
    __vbaFreeObj();
    do {
      if ((short)(local_9c[0] + -1) < sVar4) {
        ppiStack_44 = (int **)0x44a17f;
        __vbaExitProc();
        return;
      }
      local_8 = 5;
      ppiStack_48 = (int **)0x449e86;
      ppiStack_44 = (int **)piVar5;
      ppiStack_48 = (int **)(**(code **)(*piVar5 + 0x310))();
      ppiStack_4c = &local_34;
      piStack_50 = (int *)0x449e91;
      piVar2 = (int *)__vbaObjSet();
      ppiStack_48 = &local_38;
      ppiStack_4c = (int **)CONCAT22(extraout_var,sVar4);
      uStack_54 = 0x449eb2;
      piStack_50 = piVar2;
      iVar3 = (**(code **)(*piVar2 + 0x40))();
      if (iVar3 < 0) {
        uStack_54 = 0x40;
        piStack_58 = (int *)&DAT_004077a0;
        uStack_64 = 0x449ede;
        iStack_60 = iVar3;
        piStack_5c = piVar2;
        __vbaHresultCheckObj();
      }
      piVar2 = local_38;
      uStack_54 = 0;
      piStack_58 = local_38;
      piStack_5c = (int *)0x449f10;
      piStack_50 = (int *)(**(code **)(*local_38 + 0xc4))();
      if ((int)piStack_50 < 0) {
        ppiStack_44 = (int **)0xc4;
        ppiStack_48 = (int **)&DAT_0040788c;
        ppiStack_4c = (int **)piVar2;
        uStack_54 = 0x449f3f;
        __vbaHresultCheckObj();
      }
      ppiStack_44 = &local_38;
      ppiStack_48 = &local_34;
      ppiStack_4c = (int **)0x2;
      piStack_50 = (int *)0x449f61;
      __vbaFreeObjList();
      local_8 = 6;
      bVar6 = SCARRY2(sVar4,1);
      sVar4 = sVar4 + 1;
    } while (!bVar6);
  }
  ppiStack_44 = (int **)0x44a1f1;
  __vbaErrorOverflow();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ---- FUN_0044a200 @ 0044a200

void __cdecl FUN_0044a200(uint param_1)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  short sVar4;
  int *piVar5;
  undefined2 extraout_var;
  bool bVar6;
  short local_9c [28];
  undefined4 uStack_64;
  int iStack_60;
  int *piStack_5c;
  int *piStack_58;
  undefined4 uStack_54;
  int *piStack_50;
  int **ppiStack_4c;
  int **ppiStack_48;
  int **ppiStack_44;
  int **ppiStack_40;
  short *psStack_3c;
  int *local_38;
  int *local_34;
  void *pvStack_24;
  undefined *puStack_20;
  undefined1 *local_1c;
  undefined *local_18;
  uint local_14;
  undefined4 local_10;
  undefined4 local_8;
  
  puStack_20 = &DAT_00401ce6;
  pvStack_24 = ExceptionList;
  ExceptionList = &pvStack_24;
  __vbaChkstk();
  local_1c = &stack0xffffffd0;
  local_18 = &DAT_00401718;
  local_14 = param_1 & 1;
  piVar5 = (int *)(param_1 & 0xfffffffe);
  local_10 = 0;
  local_38 = (int *)0x44a255;
  local_34 = piVar5;
  (**(code **)(*piVar5 + 4))();
  local_8 = 2;
  local_38 = (int *)0x1;
  psStack_3c = (short *)0x44a26b;
  __vbaOnError();
  local_8 = 3;
  local_38 = (int *)0xffffffff;
  psStack_3c = (short *)0x44a27a;
  __vbaOnError();
  local_8 = 4;
  psStack_3c = (short *)0x44a290;
  local_38 = piVar5;
  psStack_3c = (short *)(**(code **)(*piVar5 + 0x310))();
  ppiStack_40 = &local_34;
  ppiStack_44 = (int **)0x44a29b;
  piVar2 = (int *)__vbaObjSet();
  psStack_3c = local_9c;
  ppiStack_44 = (int **)0x44a2ba;
  ppiStack_40 = (int **)piVar2;
  iVar3 = (**(code **)(*piVar2 + 0x4c))();
  if (iVar3 < 0) {
    ppiStack_44 = (int **)0x4c;
    ppiStack_48 = (int **)&DAT_004077a0;
    uStack_54 = 0x44a2e6;
    piStack_50 = (int *)iVar3;
    ppiStack_4c = (int **)piVar2;
    __vbaHresultCheckObj();
  }
  if (!SBORROW2(local_9c[0],1)) {
    sVar4 = 0;
    ppiStack_44 = (int **)0x44a328;
    __vbaFreeObj();
    do {
      if ((short)(local_9c[0] + -1) < sVar4) {
        ppiStack_44 = (int **)0x44a65f;
        __vbaExitProc();
        return;
      }
      local_8 = 5;
      ppiStack_48 = (int **)0x44a366;
      ppiStack_44 = (int **)piVar5;
      ppiStack_48 = (int **)(**(code **)(*piVar5 + 0x310))();
      ppiStack_4c = &local_34;
      piStack_50 = (int *)0x44a371;
      piVar2 = (int *)__vbaObjSet();
      ppiStack_48 = &local_38;
      ppiStack_4c = (int **)CONCAT22(extraout_var,sVar4);
      uStack_54 = 0x44a392;
      piStack_50 = piVar2;
      iVar3 = (**(code **)(*piVar2 + 0x40))();
      if (iVar3 < 0) {
        uStack_54 = 0x40;
        piStack_58 = (int *)&DAT_004077a0;
        uStack_64 = 0x44a3be;
        iStack_60 = iVar3;
        piStack_5c = piVar2;
        __vbaHresultCheckObj();
      }
      piVar2 = local_38;
      uStack_54 = 0;
      piStack_58 = local_38;
      piStack_5c = (int *)0x44a3f0;
      piStack_50 = (int *)(**(code **)(*local_38 + 0xc4))();
      if ((int)piStack_50 < 0) {
        ppiStack_44 = (int **)0xc4;
        ppiStack_48 = (int **)&DAT_0040788c;
        ppiStack_4c = (int **)piVar2;
        uStack_54 = 0x44a41f;
        __vbaHresultCheckObj();
      }
      ppiStack_44 = &local_38;
      ppiStack_48 = &local_34;
      ppiStack_4c = (int **)0x2;
      piStack_50 = (int *)0x44a441;
      __vbaFreeObjList();
      local_8 = 6;
      bVar6 = SCARRY2(sVar4,1);
      sVar4 = sVar4 + 1;
    } while (!bVar6);
  }
  ppiStack_44 = (int **)0x44a6d1;
  __vbaErrorOverflow();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ---- FUN_0044a6e0 @ 0044a6e0

void __cdecl FUN_0044a6e0(int *param_1)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  short sVar4;
  bool bVar5;
  short local_9c [30];
  undefined4 uStack_60;
  int iStack_5c;
  int *piStack_58;
  int *piStack_54;
  undefined4 uStack_50;
  int *piStack_4c;
  int **ppiStack_48;
  int **ppiStack_44;
  int **ppiStack_40;
  int **ppiStack_3c;
  int *local_38;
  int *local_34;
  void *pvStack_24;
  undefined *puStack_20;
  undefined1 *local_1c;
  undefined *local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_8;
  
  puStack_20 = &DAT_00401ce6;
  pvStack_24 = ExceptionList;
  ExceptionList = &pvStack_24;
  __vbaChkstk();
  local_1c = &stack0xffffffd0;
  local_18 = &DAT_00401770;
  local_14 = 0;
  local_10 = 0;
  local_8 = 2;
  local_34 = (int *)0x1;
  local_38 = (int *)0x44a734;
  __vbaOnError();
  local_8 = 3;
  local_34 = (int *)0xffffffff;
  local_38 = (int *)0x44a743;
  __vbaOnError();
  local_8 = 4;
  local_34 = param_1;
  local_38 = (int *)0x44a759;
  local_38 = (int *)(**(code **)(*param_1 + 0x310))();
  ppiStack_3c = &local_34;
  ppiStack_40 = (int **)0x44a764;
  piVar2 = (int *)__vbaObjSet();
  local_38 = (int *)local_9c;
  ppiStack_40 = (int **)0x44a783;
  ppiStack_3c = (int **)piVar2;
  iVar3 = (**(code **)(*piVar2 + 0x4c))();
  if (iVar3 < 0) {
    ppiStack_40 = (int **)0x4c;
    ppiStack_44 = (int **)&DAT_004077a0;
    uStack_50 = 0x44a7af;
    piStack_4c = (int *)iVar3;
    ppiStack_48 = (int **)piVar2;
    __vbaHresultCheckObj();
  }
  if (!SBORROW2(local_9c[0],1)) {
    sVar4 = 0;
    ppiStack_40 = (int **)0x44a7f1;
    __vbaFreeObj();
    do {
      if ((short)(local_9c[0] + -1) < sVar4) {
        ppiStack_40 = (int **)0x44ab28;
        __vbaExitProc();
        return;
      }
      local_8 = 5;
      ppiStack_40 = (int **)param_1;
      ppiStack_44 = (int **)0x44a82f;
      ppiStack_44 = (int **)(**(code **)(*param_1 + 0x310))();
      ppiStack_48 = &local_34;
      piStack_4c = (int *)0x44a83a;
      piVar2 = (int *)__vbaObjSet();
      ppiStack_44 = &local_38;
      ppiStack_48 = (int **)CONCAT22((short)((uint)piVar2 >> 0x10),sVar4);
      uStack_50 = 0x44a85b;
      piStack_4c = piVar2;
      iVar3 = (**(code **)(*piVar2 + 0x40))();
      if (iVar3 < 0) {
        uStack_50 = 0x40;
        piStack_54 = (int *)&DAT_004077a0;
        uStack_60 = 0x44a887;
        iStack_5c = iVar3;
        piStack_58 = piVar2;
        __vbaHresultCheckObj();
      }
      piVar2 = local_38;
      uStack_50 = 0;
      piStack_54 = local_38;
      piStack_58 = (int *)0x44a8b9;
      piStack_4c = (int *)(**(code **)(*local_38 + 0xc4))();
      if ((int)piStack_4c < 0) {
        ppiStack_40 = (int **)0xc4;
        ppiStack_44 = (int **)&DAT_0040788c;
        ppiStack_48 = (int **)piVar2;
        uStack_50 = 0x44a8e8;
        __vbaHresultCheckObj();
      }
      ppiStack_40 = &local_38;
      ppiStack_44 = &local_34;
      ppiStack_48 = (int **)0x2;
      piStack_4c = (int *)0x44a90a;
      __vbaFreeObjList();
      local_8 = 6;
      bVar5 = SCARRY2(sVar4,1);
      sVar4 = sVar4 + 1;
    } while (!bVar5);
  }
  ppiStack_40 = (int **)0x44ab8d;
  __vbaErrorOverflow();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ---- FUN_0044ab90 @ 0044ab90

void __cdecl FUN_0044ab90(int *param_1)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  short sVar4;
  bool bVar5;
  short local_9c [30];
  undefined4 uStack_60;
  int iStack_5c;
  int *piStack_58;
  int *piStack_54;
  undefined4 uStack_50;
  int *piStack_4c;
  int **ppiStack_48;
  int **ppiStack_44;
  int **ppiStack_40;
  int **ppiStack_3c;
  int *local_38;
  int *local_34;
  void *pvStack_24;
  undefined *puStack_20;
  undefined1 *local_1c;
  undefined *local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_8;
  
  puStack_20 = &DAT_00401ce6;
  pvStack_24 = ExceptionList;
  ExceptionList = &pvStack_24;
  __vbaChkstk();
  local_1c = &stack0xffffffd0;
  local_18 = &DAT_004017c8;
  local_14 = 0;
  local_10 = 0;
  local_8 = 2;
  local_34 = (int *)0x1;
  local_38 = (int *)0x44abe4;
  __vbaOnError();
  local_8 = 3;
  local_34 = (int *)0xffffffff;
  local_38 = (int *)0x44abf3;
  __vbaOnError();
  local_8 = 4;
  local_34 = param_1;
  local_38 = (int *)0x44ac09;
  local_38 = (int *)(**(code **)(*param_1 + 0x310))();
  ppiStack_3c = &local_34;
  ppiStack_40 = (int **)0x44ac14;
  piVar2 = (int *)__vbaObjSet();
  local_38 = (int *)local_9c;
  ppiStack_40 = (int **)0x44ac33;
  ppiStack_3c = (int **)piVar2;
  iVar3 = (**(code **)(*piVar2 + 0x4c))();
  if (iVar3 < 0) {
    ppiStack_40 = (int **)0x4c;
    ppiStack_44 = (int **)&DAT_004077a0;
    uStack_50 = 0x44ac5f;
    piStack_4c = (int *)iVar3;
    ppiStack_48 = (int **)piVar2;
    __vbaHresultCheckObj();
  }
  if (!SBORROW2(local_9c[0],1)) {
    sVar4 = 0;
    ppiStack_40 = (int **)0x44aca1;
    __vbaFreeObj();
    do {
      if ((short)(local_9c[0] + -1) < sVar4) {
        ppiStack_40 = (int **)0x44afd8;
        __vbaExitProc();
        return;
      }
      local_8 = 5;
      ppiStack_40 = (int **)param_1;
      ppiStack_44 = (int **)0x44acdf;
      ppiStack_44 = (int **)(**(code **)(*param_1 + 0x310))();
      ppiStack_48 = &local_34;
      piStack_4c = (int *)0x44acea;
      piVar2 = (int *)__vbaObjSet();
      ppiStack_44 = &local_38;
      ppiStack_48 = (int **)CONCAT22((short)((uint)piVar2 >> 0x10),sVar4);
      uStack_50 = 0x44ad0b;
      piStack_4c = piVar2;
      iVar3 = (**(code **)(*piVar2 + 0x40))();
      if (iVar3 < 0) {
        uStack_50 = 0x40;
        piStack_54 = (int *)&DAT_004077a0;
        uStack_60 = 0x44ad37;
        iStack_5c = iVar3;
        piStack_58 = piVar2;
        __vbaHresultCheckObj();
      }
      piVar2 = local_38;
      uStack_50 = 0;
      piStack_54 = local_38;
      piStack_58 = (int *)0x44ad69;
      piStack_4c = (int *)(**(code **)(*local_38 + 0xc4))();
      if ((int)piStack_4c < 0) {
        ppiStack_40 = (int **)0xc4;
        ppiStack_44 = (int **)&DAT_0040788c;
        ppiStack_48 = (int **)piVar2;
        uStack_50 = 0x44ad98;
        __vbaHresultCheckObj();
      }
      ppiStack_40 = &local_38;
      ppiStack_44 = &local_34;
      ppiStack_48 = (int **)0x2;
      piStack_4c = (int *)0x44adba;
      __vbaFreeObjList();
      local_8 = 6;
      bVar5 = SCARRY2(sVar4,1);
      sVar4 = sVar4 + 1;
    } while (!bVar5);
  }
  ppiStack_40 = (int **)0x44b03d;
  __vbaErrorOverflow();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ---- FUN_0044b040 @ 0044b040

void __cdecl FUN_0044b040(uint param_1)

{
  int *piVar1;
  int iVar2;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  int *piVar3;
  int *piVar4;
  short sVar5;
  short sVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int *piVar9;
  int *piVar10;
  int *piStack_2e8;
  int *piStack_2e4;
  int *piStack_2e0;
  int iStack_2dc;
  undefined4 uStack_2d4;
  int iStack_2d0;
  int *piStack_2cc;
  int *piStack_2c8;
  void *pvStack_2c4;
  int *piStack_2c0;
  int *piStack_2bc;
  int **ppiStack_2b8;
  int **ppiStack_2b4;
  int *piStack_2b0;
  undefined4 *puStack_2ac;
  int *piStack_2a8;
  int *piStack_2a4;
  undefined4 uStack_2a0;
  int *piStack_29c;
  int *piStack_298;
  int *piStack_280;
  undefined4 uStack_27c;
  undefined4 auStack_260 [9];
  undefined4 uStack_23c;
  undefined4 uStack_22c;
  undefined4 uStack_21c;
  undefined4 uStack_20c;
  int *piStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  int iStack_1ec;
  int *piStack_1e8;
  int *piStack_1e4;
  undefined1 *puStack_1e0;
  int *piStack_1dc;
  int *piStack_1d8;
  int **ppiStack_1d4;
  int **ppiStack_1d0;
  int *piStack_1cc;
  undefined4 *puStack_1c8;
  int *piStack_1c4;
  int *piStack_1c0;
  undefined4 uStack_1bc;
  int *piStack_1b8;
  int *piStack_1b4;
  int *piStack_19c;
  undefined4 uStack_198;
  undefined4 auStack_17c [9];
  undefined4 uStack_158;
  undefined4 uStack_148;
  undefined4 uStack_138;
  undefined4 uStack_128;
  int *piStack_118;
  int aiStack_114 [4];
  int *piStack_104;
  int *piStack_100;
  undefined1 *puStack_fc;
  int *piStack_f8;
  int *piStack_f4;
  int **ppiStack_f0;
  int **ppiStack_ec;
  int *piStack_e8;
  undefined4 *puStack_e4;
  int *piStack_e0;
  int *piStack_dc;
  undefined4 local_98 [9];
  undefined4 local_74;
  undefined4 local_64;
  undefined4 local_54;
  undefined4 local_44;
  int *local_34;
  int local_30 [4];
  void *pvStack_20;
  undefined *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  uint local_10;
  undefined4 local_c;
  
  puStack_1c = &DAT_00401ce6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffff28;
  local_14 = &DAT_00401820;
  local_10 = param_1 & 1;
  piVar3 = (int *)(param_1 & 0xfffffffe);
  uVar7 = 0;
  local_c = 0;
  piStack_e0 = (int *)0x44b088;
  ExceptionList = &pvStack_20;
  piStack_dc = piVar3;
  (**(code **)(*piVar3 + 4))();
  local_30[2] = 0;
  local_30[1] = 0;
  local_30[0] = 0;
  local_34 = (int *)0x0;
  local_44 = 0;
  local_54 = 0;
  local_64 = 0;
  local_74 = 0;
  local_98[0] = 0;
  piStack_e0 = (int *)0x1;
  puStack_e4 = (undefined4 *)0x44b0ae;
  __vbaOnError();
  puStack_e4 = (undefined4 *)0x44b0b7;
  piStack_e0 = piVar3;
  puStack_e4 = (undefined4 *)(**(code **)(*piVar3 + 0x310))();
  piStack_e8 = local_30;
  ppiStack_ec = (int **)0x44b0c2;
  piVar1 = (int *)__vbaObjSet();
  puStack_e4 = local_98;
  ppiStack_ec = (int **)0x44b0d1;
  piStack_e8 = piVar1;
  iVar2 = (**(code **)(*piVar1 + 0x4c))();
  if (iVar2 < 0) {
    ppiStack_ec = (int **)0x4c;
    ppiStack_f0 = (int **)&DAT_004077a0;
    puStack_fc = (undefined1 *)0x44b0e6;
    piStack_f8 = (int *)iVar2;
    piStack_f4 = piVar1;
    __vbaHresultCheckObj();
  }
  sVar5 = (short)local_98[0] + -1;
  piVar1 = (int *)CONCAT22((short)((uint)piVar1 >> 0x10),sVar5);
  if (!SBORROW2((short)local_98[0],1)) {
    ppiStack_ec = (int **)0x44b110;
    __vbaFreeObj();
    uVar8 = uVar7;
    do {
      uVar7 = uVar8;
      sVar6 = (short)uVar7;
      if (sVar5 < sVar6) {
        ppiStack_ec = (int **)0x44b2cf;
        __vbaExitProc();
        return;
      }
      ppiStack_f0 = (int **)0x44b122;
      ppiStack_ec = (int **)piVar3;
      ppiStack_f0 = (int **)(**(code **)(*piVar3 + 0x310))();
      piStack_f4 = local_30;
      piStack_f8 = (int *)0x44b12d;
      piVar1 = (int *)__vbaObjSet();
      ppiStack_f0 = &local_34;
      puStack_fc = (undefined1 *)0x44b13a;
      piStack_f8 = piVar1;
      piStack_f4 = (int *)uVar7;
      iVar2 = (**(code **)(*piVar1 + 0x40))();
      if (iVar2 < 0) {
        puStack_fc = (undefined1 *)0x40;
        piStack_100 = (int *)&DAT_004077a0;
        aiStack_114[2] = 0x44b14f;
        aiStack_114[3] = iVar2;
        piStack_104 = piVar1;
        __vbaHresultCheckObj();
      }
      piVar1 = local_34;
      puStack_fc = (undefined1 *)0x0;
      piStack_100 = local_34;
      piStack_104 = (int *)0x44b15f;
      piStack_f8 = (int *)(**(code **)(*local_34 + 0xc4))();
      if ((int)piStack_f8 < 0) {
        ppiStack_ec = (int **)0xc4;
        ppiStack_f0 = (int **)&DAT_0040788c;
        piStack_f4 = piVar1;
        puStack_fc = (undefined1 *)0x44b177;
        __vbaHresultCheckObj();
      }
      ppiStack_ec = &local_34;
      ppiStack_f0 = (int **)local_30;
      piStack_f4 = (int *)0x2;
      piStack_f8 = (int *)0x44b187;
      __vbaFreeObjList();
      uVar8 = CONCAT22(extraout_var,sVar6 + 1);
    } while (!SCARRY2(sVar6,1));
  }
  ppiStack_ec = (int **)0x44b338;
  __vbaErrorOverflow();
  piStack_100 = (int *)&DAT_00401ce6;
  piStack_104 = ExceptionList;
  puStack_fc = (undefined1 *)&uStack_1bc;
  piStack_f8 = (int *)&DAT_00401848;
  piStack_f4 = (int *)((uint)piStack_e0 & 1);
  piVar4 = (int *)((uint)piStack_e0 & 0xfffffffe);
  uVar8 = 0;
  ppiStack_f0 = (int **)0x0;
  piStack_1c4 = (int *)0x44b388;
  ExceptionList = &piStack_104;
  piStack_1c0 = piVar4;
  uStack_1bc = uVar7;
  piStack_1b8 = piVar1;
  piStack_1b4 = piVar3;
  piStack_e8 = (int *)&stack0xfffffffc;
  piStack_e0 = piVar4;
  (**(code **)(*piVar4 + 4))();
  aiStack_114[2] = 0;
  aiStack_114[1] = 0;
  aiStack_114[0] = 0;
  piStack_118 = (int *)0x0;
  uStack_128 = 0;
  uStack_138 = 0;
  uStack_148 = 0;
  uStack_158 = 0;
  auStack_17c[0] = 0;
  piStack_1c4 = (int *)0x1;
  puStack_1c8 = (undefined4 *)0x44b3ae;
  __vbaOnError();
  puStack_1c8 = (undefined4 *)0x44b3b7;
  piStack_1c4 = piVar4;
  puStack_1c8 = (undefined4 *)(**(code **)(*piVar4 + 0x310))();
  piStack_1cc = aiStack_114;
  ppiStack_1d0 = (int **)0x44b3c2;
  piVar1 = (int *)__vbaObjSet();
  puStack_1c8 = auStack_17c;
  ppiStack_1d0 = (int **)0x44b3d1;
  piStack_1cc = piVar1;
  iVar2 = (**(code **)(*piVar1 + 0x4c))();
  if (iVar2 < 0) {
    ppiStack_1d0 = (int **)0x4c;
    ppiStack_1d4 = (int **)&DAT_004077a0;
    puStack_1e0 = (undefined1 *)0x44b3e6;
    piStack_1dc = (int *)iVar2;
    piStack_1d8 = piVar1;
    __vbaHresultCheckObj();
  }
  piVar1 = (int *)CONCAT22((short)((uint)piVar1 >> 0x10),(short)auStack_17c[0] + -1);
  if (!SBORROW2((short)auStack_17c[0],1)) {
    uStack_198 = 1;
    ppiStack_1d0 = (int **)0x44b410;
    piStack_19c = piVar1;
    __vbaFreeObj();
    piVar3 = piVar1;
    uVar7 = uVar8;
    do {
      uVar8 = uVar7;
      sVar5 = (short)uVar8;
      if ((short)piVar3 < sVar5) {
        ppiStack_1d0 = (int **)0x44b5cf;
        __vbaExitProc();
        return;
      }
      ppiStack_1d4 = (int **)0x44b422;
      ppiStack_1d0 = (int **)piVar4;
      ppiStack_1d4 = (int **)(**(code **)(*piVar4 + 0x310))();
      piStack_1d8 = aiStack_114;
      piStack_1dc = (int *)0x44b42d;
      piVar1 = (int *)__vbaObjSet();
      ppiStack_1d4 = &piStack_118;
      puStack_1e0 = (undefined1 *)0x44b43a;
      piStack_1dc = piVar1;
      piStack_1d8 = (int *)uVar8;
      iVar2 = (**(code **)(*piVar1 + 0x40))();
      if (iVar2 < 0) {
        puStack_1e0 = (undefined1 *)0x40;
        piStack_1e4 = (int *)&DAT_004077a0;
        uStack_1f0 = 0x44b44f;
        iStack_1ec = iVar2;
        piStack_1e8 = piVar1;
        __vbaHresultCheckObj();
      }
      piVar1 = piStack_118;
      puStack_1e0 = (undefined1 *)0x0;
      piStack_1e4 = piStack_118;
      piStack_1e8 = (int *)0x44b45f;
      piStack_1dc = (int *)(**(code **)(*piStack_118 + 0xc4))();
      if ((int)piStack_1dc < 0) {
        ppiStack_1d0 = (int **)0xc4;
        ppiStack_1d4 = (int **)&DAT_0040788c;
        piStack_1d8 = piVar1;
        puStack_1e0 = (undefined1 *)0x44b477;
        __vbaHresultCheckObj();
      }
      ppiStack_1d0 = &piStack_118;
      ppiStack_1d4 = (int **)aiStack_114;
      piStack_1d8 = (int *)0x2;
      piStack_1dc = (int *)0x44b487;
      __vbaFreeObjList();
      piVar3 = piStack_19c;
      uVar7 = CONCAT22(extraout_var_00,(short)uStack_198 + sVar5);
    } while (!SCARRY2((short)uStack_198,sVar5));
  }
  ppiStack_1d0 = (int **)0x44b638;
  __vbaErrorOverflow();
  piStack_1e4 = (int *)&DAT_00401ce6;
  piStack_1e8 = ExceptionList;
  puStack_1e0 = (undefined1 *)&uStack_2a0;
  piStack_1dc = (int *)&DAT_00401870;
  piStack_1d8 = (int *)((uint)piStack_1c4 & 1);
  piVar3 = (int *)((uint)piStack_1c4 & 0xfffffffe);
  piVar9 = (int *)0x0;
  ppiStack_1d4 = (int **)0x0;
  piStack_2a8 = (int *)0x44b688;
  ExceptionList = &piStack_1e8;
  piStack_2a4 = piVar3;
  uStack_2a0 = uVar8;
  piStack_29c = piVar1;
  piStack_298 = piVar4;
  piStack_1cc = (int *)&piStack_e8;
  piStack_1c4 = piVar3;
  (**(code **)(*piVar3 + 4))();
  uStack_1f0 = 0;
  uStack_1f4 = 0;
  uStack_1f8 = 0;
  piStack_1fc = (int *)0x0;
  uStack_20c = 0;
  uStack_21c = 0;
  uStack_22c = 0;
  uStack_23c = 0;
  auStack_260[0] = 0;
  piStack_2a8 = (int *)0x1;
  puStack_2ac = (undefined4 *)0x44b6ae;
  __vbaOnError();
  puStack_2ac = (undefined4 *)0x44b6b7;
  piStack_2a8 = piVar3;
  puStack_2ac = (undefined4 *)(**(code **)(*piVar3 + 0x310))();
  piStack_2b0 = &uStack_1f8;
  ppiStack_2b4 = (int **)0x44b6c2;
  piVar1 = (int *)__vbaObjSet();
  puStack_2ac = auStack_260;
  ppiStack_2b4 = (int **)0x44b6d1;
  piStack_2b0 = piVar1;
  iVar2 = (**(code **)(*piVar1 + 0x4c))();
  if (iVar2 < 0) {
    ppiStack_2b4 = (int **)0x4c;
    ppiStack_2b8 = (int **)&DAT_004077a0;
    pvStack_2c4 = (void *)0x44b6e6;
    piStack_2c0 = (int *)iVar2;
    piStack_2bc = piVar1;
    __vbaHresultCheckObj();
  }
  piVar1 = (int *)CONCAT22((short)((uint)piVar1 >> 0x10),(short)auStack_260[0] + -1);
  if (!SBORROW2((short)auStack_260[0],1)) {
    uStack_27c = 1;
    ppiStack_2b4 = (int **)0x44b710;
    piStack_280 = piVar1;
    __vbaFreeObj();
    piVar4 = piVar1;
    piVar10 = piVar9;
    do {
      piVar9 = piVar10;
      sVar5 = (short)piVar9;
      if ((short)piVar4 < sVar5) {
        ppiStack_2b4 = (int **)0x44b8cf;
        __vbaExitProc();
        return;
      }
      ppiStack_2b8 = (int **)0x44b722;
      ppiStack_2b4 = (int **)piVar3;
      ppiStack_2b8 = (int **)(**(code **)(*piVar3 + 0x310))();
      piStack_2bc = &uStack_1f8;
      piStack_2c0 = (int *)0x44b72d;
      piVar1 = (int *)__vbaObjSet();
      ppiStack_2b8 = &piStack_1fc;
      pvStack_2c4 = (void *)0x44b73a;
      piStack_2c0 = piVar1;
      piStack_2bc = piVar9;
      iVar2 = (**(code **)(*piVar1 + 0x40))();
      if (iVar2 < 0) {
        pvStack_2c4 = (void *)0x40;
        piStack_2c8 = (int *)&DAT_004077a0;
        uStack_2d4 = 0x44b74f;
        iStack_2d0 = iVar2;
        piStack_2cc = piVar1;
        __vbaHresultCheckObj();
      }
      piVar1 = piStack_1fc;
      pvStack_2c4 = (void *)0x0;
      piStack_2c8 = piStack_1fc;
      piStack_2cc = (int *)0x44b75f;
      piStack_2c0 = (int *)(**(code **)(*piStack_1fc + 0xc4))();
      if ((int)piStack_2c0 < 0) {
        ppiStack_2b4 = (int **)0xc4;
        ppiStack_2b8 = (int **)&DAT_0040788c;
        piStack_2bc = piVar1;
        pvStack_2c4 = (void *)0x44b777;
        __vbaHresultCheckObj();
      }
      ppiStack_2b4 = &piStack_1fc;
      ppiStack_2b8 = (int **)&uStack_1f8;
      piStack_2bc = (int *)0x2;
      piStack_2c0 = (int *)0x44b787;
      __vbaFreeObjList();
      piVar4 = piStack_280;
      piVar10 = (int *)CONCAT22(extraout_var_01,(short)uStack_27c + sVar5);
    } while (!SCARRY2((short)uStack_27c,sVar5));
  }
  ppiStack_2b4 = (int **)0x44b938;
  __vbaErrorOverflow();
  piStack_2c0 = (int *)&DAT_00401ce6;
  pvStack_2c4 = ExceptionList;
  piStack_2bc = (int *)&piStack_2e8;
  ppiStack_2b8 = (int **)&DAT_00401898;
  ppiStack_2b4 = (int **)((uint)piStack_2a8 & 1);
  piVar10 = (int *)((uint)piStack_2a8 & 0xfffffffe);
  ExceptionList = &pvStack_2c4;
  piVar4 = piVar10;
  piStack_2e8 = piVar9;
  piStack_2e4 = piVar1;
  piStack_2e0 = piVar3;
  piStack_2b0 = (int *)&piStack_1cc;
  piStack_2a8 = piVar10;
  (**(code **)(*piVar10 + 4))(piVar10);
  piStack_2c8 = (int *)0x0;
  __vbaStrCopy(piVar4);
  if (DAT_00451750 == (int *)0x0) {
    piStack_2e8 = (int *)&DAT_00451750;
    __vbaNew2(&DAT_00406724);
  }
  piVar1 = DAT_00451750;
  iStack_2dc = *DAT_00451750;
  piStack_2e8 = piVar10;
  piStack_2e8 = (int *)__vbaObjSetAddref(&piStack_2c8);
  iVar2 = (**(code **)(iStack_2dc + 0x10))(piVar1);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_00406714,0x10);
  }
  __vbaFreeObj();
  return;
}


// ---- FUN_0044b340 @ 0044b340

void __cdecl FUN_0044b340(uint param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  int *piVar4;
  int *piVar5;
  short sVar6;
  short sVar7;
  undefined4 uVar8;
  int *piVar9;
  int *piVar10;
  int *piStack_204;
  int *piStack_200;
  int *piStack_1fc;
  int iStack_1f8;
  undefined4 uStack_1f0;
  int iStack_1ec;
  int *piStack_1e8;
  int *piStack_1e4;
  void *pvStack_1e0;
  int *piStack_1dc;
  int *piStack_1d8;
  int **ppiStack_1d4;
  int **ppiStack_1d0;
  int *piStack_1cc;
  undefined4 *puStack_1c8;
  int *piStack_1c4;
  int *piStack_1c0;
  undefined4 uStack_1bc;
  int *piStack_1b8;
  int *piStack_1b4;
  int *piStack_19c;
  undefined4 uStack_198;
  undefined4 auStack_17c [9];
  undefined4 uStack_158;
  undefined4 uStack_148;
  undefined4 uStack_138;
  undefined4 uStack_128;
  int *piStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  int iStack_108;
  int *piStack_104;
  int *piStack_100;
  undefined1 *puStack_fc;
  int *piStack_f8;
  int *piStack_f4;
  int **ppiStack_f0;
  int **ppiStack_ec;
  int *piStack_e8;
  undefined4 *puStack_e4;
  int *piStack_e0;
  int *piStack_dc;
  undefined4 local_98 [9];
  undefined4 local_74;
  undefined4 local_64;
  undefined4 local_54;
  undefined4 local_44;
  int *local_34;
  int local_30 [4];
  void *pvStack_20;
  undefined *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  uint local_10;
  undefined4 local_c;
  
  puStack_1c = &DAT_00401ce6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffff28;
  local_14 = &DAT_00401848;
  local_10 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  uVar8 = 0;
  local_c = 0;
  piStack_e0 = (int *)0x44b388;
  ExceptionList = &pvStack_20;
  piStack_dc = piVar4;
  (**(code **)(*piVar4 + 4))();
  local_30[2] = 0;
  local_30[1] = 0;
  local_30[0] = 0;
  local_34 = (int *)0x0;
  local_44 = 0;
  local_54 = 0;
  local_64 = 0;
  local_74 = 0;
  local_98[0] = 0;
  piStack_e0 = (int *)0x1;
  puStack_e4 = (undefined4 *)0x44b3ae;
  __vbaOnError();
  puStack_e4 = (undefined4 *)0x44b3b7;
  piStack_e0 = piVar4;
  puStack_e4 = (undefined4 *)(**(code **)(*piVar4 + 0x310))();
  piStack_e8 = local_30;
  ppiStack_ec = (int **)0x44b3c2;
  piVar2 = (int *)__vbaObjSet();
  puStack_e4 = local_98;
  ppiStack_ec = (int **)0x44b3d1;
  piStack_e8 = piVar2;
  iVar3 = (**(code **)(*piVar2 + 0x4c))();
  if (iVar3 < 0) {
    ppiStack_ec = (int **)0x4c;
    ppiStack_f0 = (int **)&DAT_004077a0;
    puStack_fc = (undefined1 *)0x44b3e6;
    piStack_f8 = (int *)iVar3;
    piStack_f4 = piVar2;
    __vbaHresultCheckObj();
  }
  sVar6 = (short)local_98[0] + -1;
  piVar2 = (int *)CONCAT22((short)((uint)piVar2 >> 0x10),sVar6);
  if (!SBORROW2((short)local_98[0],1)) {
    ppiStack_ec = (int **)0x44b410;
    __vbaFreeObj();
    uVar1 = uVar8;
    do {
      uVar8 = uVar1;
      sVar7 = (short)uVar8;
      if (sVar6 < sVar7) {
        ppiStack_ec = (int **)0x44b5cf;
        __vbaExitProc();
        return;
      }
      ppiStack_f0 = (int **)0x44b422;
      ppiStack_ec = (int **)piVar4;
      ppiStack_f0 = (int **)(**(code **)(*piVar4 + 0x310))();
      piStack_f4 = local_30;
      piStack_f8 = (int *)0x44b42d;
      piVar2 = (int *)__vbaObjSet();
      ppiStack_f0 = &local_34;
      puStack_fc = (undefined1 *)0x44b43a;
      piStack_f8 = piVar2;
      piStack_f4 = (int *)uVar8;
      iVar3 = (**(code **)(*piVar2 + 0x40))();
      if (iVar3 < 0) {
        puStack_fc = (undefined1 *)0x40;
        piStack_100 = (int *)&DAT_004077a0;
        uStack_10c = 0x44b44f;
        iStack_108 = iVar3;
        piStack_104 = piVar2;
        __vbaHresultCheckObj();
      }
      piVar2 = local_34;
      puStack_fc = (undefined1 *)0x0;
      piStack_100 = local_34;
      piStack_104 = (int *)0x44b45f;
      piStack_f8 = (int *)(**(code **)(*local_34 + 0xc4))();
      if ((int)piStack_f8 < 0) {
        ppiStack_ec = (int **)0xc4;
        ppiStack_f0 = (int **)&DAT_0040788c;
        piStack_f4 = piVar2;
        puStack_fc = (undefined1 *)0x44b477;
        __vbaHresultCheckObj();
      }
      ppiStack_ec = &local_34;
      ppiStack_f0 = (int **)local_30;
      piStack_f4 = (int *)0x2;
      piStack_f8 = (int *)0x44b487;
      __vbaFreeObjList();
      uVar1 = CONCAT22(extraout_var,sVar7 + 1);
    } while (!SCARRY2(sVar7,1));
  }
  ppiStack_ec = (int **)0x44b638;
  __vbaErrorOverflow();
  piStack_100 = (int *)&DAT_00401ce6;
  piStack_104 = ExceptionList;
  puStack_fc = (undefined1 *)&uStack_1bc;
  piStack_f8 = (int *)&DAT_00401870;
  piStack_f4 = (int *)((uint)piStack_e0 & 1);
  piVar5 = (int *)((uint)piStack_e0 & 0xfffffffe);
  piVar9 = (int *)0x0;
  ppiStack_f0 = (int **)0x0;
  piStack_1c4 = (int *)0x44b688;
  ExceptionList = &piStack_104;
  piStack_1c0 = piVar5;
  uStack_1bc = uVar8;
  piStack_1b8 = piVar2;
  piStack_1b4 = piVar4;
  piStack_e8 = (int *)&stack0xfffffffc;
  piStack_e0 = piVar5;
  (**(code **)(*piVar5 + 4))();
  uStack_10c = 0;
  uStack_110 = 0;
  uStack_114 = 0;
  piStack_118 = (int *)0x0;
  uStack_128 = 0;
  uStack_138 = 0;
  uStack_148 = 0;
  uStack_158 = 0;
  auStack_17c[0] = 0;
  piStack_1c4 = (int *)0x1;
  puStack_1c8 = (undefined4 *)0x44b6ae;
  __vbaOnError();
  puStack_1c8 = (undefined4 *)0x44b6b7;
  piStack_1c4 = piVar5;
  puStack_1c8 = (undefined4 *)(**(code **)(*piVar5 + 0x310))();
  piStack_1cc = &uStack_114;
  ppiStack_1d0 = (int **)0x44b6c2;
  piVar2 = (int *)__vbaObjSet();
  puStack_1c8 = auStack_17c;
  ppiStack_1d0 = (int **)0x44b6d1;
  piStack_1cc = piVar2;
  iVar3 = (**(code **)(*piVar2 + 0x4c))();
  if (iVar3 < 0) {
    ppiStack_1d0 = (int **)0x4c;
    ppiStack_1d4 = (int **)&DAT_004077a0;
    pvStack_1e0 = (void *)0x44b6e6;
    piStack_1dc = (int *)iVar3;
    piStack_1d8 = piVar2;
    __vbaHresultCheckObj();
  }
  piVar2 = (int *)CONCAT22((short)((uint)piVar2 >> 0x10),(short)auStack_17c[0] + -1);
  if (!SBORROW2((short)auStack_17c[0],1)) {
    uStack_198 = 1;
    ppiStack_1d0 = (int **)0x44b710;
    piStack_19c = piVar2;
    __vbaFreeObj();
    piVar4 = piVar2;
    piVar10 = piVar9;
    do {
      piVar9 = piVar10;
      sVar6 = (short)piVar9;
      if ((short)piVar4 < sVar6) {
        ppiStack_1d0 = (int **)0x44b8cf;
        __vbaExitProc();
        return;
      }
      ppiStack_1d4 = (int **)0x44b722;
      ppiStack_1d0 = (int **)piVar5;
      ppiStack_1d4 = (int **)(**(code **)(*piVar5 + 0x310))();
      piStack_1d8 = &uStack_114;
      piStack_1dc = (int *)0x44b72d;
      piVar2 = (int *)__vbaObjSet();
      ppiStack_1d4 = &piStack_118;
      pvStack_1e0 = (void *)0x44b73a;
      piStack_1dc = piVar2;
      piStack_1d8 = piVar9;
      iVar3 = (**(code **)(*piVar2 + 0x40))();
      if (iVar3 < 0) {
        pvStack_1e0 = (void *)0x40;
        piStack_1e4 = (int *)&DAT_004077a0;
        uStack_1f0 = 0x44b74f;
        iStack_1ec = iVar3;
        piStack_1e8 = piVar2;
        __vbaHresultCheckObj();
      }
      piVar2 = piStack_118;
      pvStack_1e0 = (void *)0x0;
      piStack_1e4 = piStack_118;
      piStack_1e8 = (int *)0x44b75f;
      piStack_1dc = (int *)(**(code **)(*piStack_118 + 0xc4))();
      if ((int)piStack_1dc < 0) {
        ppiStack_1d0 = (int **)0xc4;
        ppiStack_1d4 = (int **)&DAT_0040788c;
        piStack_1d8 = piVar2;
        pvStack_1e0 = (void *)0x44b777;
        __vbaHresultCheckObj();
      }
      ppiStack_1d0 = &piStack_118;
      ppiStack_1d4 = (int **)&uStack_114;
      piStack_1d8 = (int *)0x2;
      piStack_1dc = (int *)0x44b787;
      __vbaFreeObjList();
      piVar4 = piStack_19c;
      piVar10 = (int *)CONCAT22(extraout_var_00,(short)uStack_198 + sVar6);
    } while (!SCARRY2((short)uStack_198,sVar6));
  }
  ppiStack_1d0 = (int **)0x44b938;
  __vbaErrorOverflow();
  piStack_1dc = (int *)&DAT_00401ce6;
  pvStack_1e0 = ExceptionList;
  piStack_1d8 = (int *)&piStack_204;
  ppiStack_1d4 = (int **)&DAT_00401898;
  ppiStack_1d0 = (int **)((uint)piStack_1c4 & 1);
  piVar10 = (int *)((uint)piStack_1c4 & 0xfffffffe);
  ExceptionList = &pvStack_1e0;
  piVar4 = piVar10;
  piStack_204 = piVar9;
  piStack_200 = piVar2;
  piStack_1fc = piVar5;
  piStack_1cc = (int *)&piStack_e8;
  piStack_1c4 = piVar10;
  (**(code **)(*piVar10 + 4))(piVar10);
  piStack_1e4 = (int *)0x0;
  __vbaStrCopy(piVar4);
  if (DAT_00451750 == (int *)0x0) {
    piStack_204 = (int *)&DAT_00451750;
    __vbaNew2(&DAT_00406724);
  }
  piVar2 = DAT_00451750;
  iStack_1f8 = *DAT_00451750;
  piStack_204 = piVar10;
  piStack_204 = (int *)__vbaObjSetAddref(&piStack_1e4);
  iVar3 = (**(code **)(iStack_1f8 + 0x10))(piVar2);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00406714,0x10);
  }
  __vbaFreeObj();
  return;
}


// ---- FUN_0044b640 @ 0044b640

void __cdecl FUN_0044b640(uint param_1)

{
  int *piVar1;
  int iVar2;
  undefined2 extraout_var;
  int *piVar3;
  short sVar4;
  short sVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piStack_120;
  int *piStack_11c;
  int *piStack_118;
  int iStack_114;
  undefined4 uStack_10c;
  int iStack_108;
  int *piStack_104;
  int *piStack_100;
  void *pvStack_fc;
  int *piStack_f8;
  int *piStack_f4;
  int **ppiStack_f0;
  int **ppiStack_ec;
  int *piStack_e8;
  undefined4 *puStack_e4;
  int *piStack_e0;
  int *piStack_dc;
  undefined4 local_98 [9];
  undefined4 local_74;
  undefined4 local_64;
  undefined4 local_54;
  undefined4 local_44;
  int *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  void *pvStack_20;
  undefined *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  uint local_10;
  undefined4 local_c;
  
  puStack_1c = &DAT_00401ce6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffff28;
  local_14 = &DAT_00401870;
  local_10 = param_1 & 1;
  piVar3 = (int *)(param_1 & 0xfffffffe);
  piVar6 = (int *)0x0;
  local_c = 0;
  piStack_e0 = (int *)0x44b688;
  ExceptionList = &pvStack_20;
  piStack_dc = piVar3;
  (**(code **)(*piVar3 + 4))();
  local_28 = 0;
  local_2c = 0;
  local_30 = 0;
  local_34 = (int *)0x0;
  local_44 = 0;
  local_54 = 0;
  local_64 = 0;
  local_74 = 0;
  local_98[0] = 0;
  piStack_e0 = (int *)0x1;
  puStack_e4 = (undefined4 *)0x44b6ae;
  __vbaOnError();
  puStack_e4 = (undefined4 *)0x44b6b7;
  piStack_e0 = piVar3;
  puStack_e4 = (undefined4 *)(**(code **)(*piVar3 + 0x310))();
  piStack_e8 = &local_30;
  ppiStack_ec = (int **)0x44b6c2;
  piVar1 = (int *)__vbaObjSet();
  puStack_e4 = local_98;
  ppiStack_ec = (int **)0x44b6d1;
  piStack_e8 = piVar1;
  iVar2 = (**(code **)(*piVar1 + 0x4c))();
  if (iVar2 < 0) {
    ppiStack_ec = (int **)0x4c;
    ppiStack_f0 = (int **)&DAT_004077a0;
    pvStack_fc = (void *)0x44b6e6;
    piStack_f8 = (int *)iVar2;
    piStack_f4 = piVar1;
    __vbaHresultCheckObj();
  }
  sVar4 = (short)local_98[0] + -1;
  piVar1 = (int *)CONCAT22((short)((uint)piVar1 >> 0x10),sVar4);
  if (!SBORROW2((short)local_98[0],1)) {
    ppiStack_ec = (int **)0x44b710;
    __vbaFreeObj();
    piVar8 = piVar6;
    do {
      piVar6 = piVar8;
      sVar5 = (short)piVar6;
      if (sVar4 < sVar5) {
        ppiStack_ec = (int **)0x44b8cf;
        __vbaExitProc();
        return;
      }
      ppiStack_f0 = (int **)0x44b722;
      ppiStack_ec = (int **)piVar3;
      ppiStack_f0 = (int **)(**(code **)(*piVar3 + 0x310))();
      piStack_f4 = &local_30;
      piStack_f8 = (int *)0x44b72d;
      piVar1 = (int *)__vbaObjSet();
      ppiStack_f0 = &local_34;
      pvStack_fc = (void *)0x44b73a;
      piStack_f8 = piVar1;
      piStack_f4 = piVar6;
      iVar2 = (**(code **)(*piVar1 + 0x40))();
      if (iVar2 < 0) {
        pvStack_fc = (void *)0x40;
        piStack_100 = (int *)&DAT_004077a0;
        uStack_10c = 0x44b74f;
        iStack_108 = iVar2;
        piStack_104 = piVar1;
        __vbaHresultCheckObj();
      }
      piVar1 = local_34;
      pvStack_fc = (void *)0x0;
      piStack_100 = local_34;
      piStack_104 = (int *)0x44b75f;
      piStack_f8 = (int *)(**(code **)(*local_34 + 0xc4))();
      if ((int)piStack_f8 < 0) {
        ppiStack_ec = (int **)0xc4;
        ppiStack_f0 = (int **)&DAT_0040788c;
        piStack_f4 = piVar1;
        pvStack_fc = (void *)0x44b777;
        __vbaHresultCheckObj();
      }
      ppiStack_ec = &local_34;
      ppiStack_f0 = (int **)&local_30;
      piStack_f4 = (int *)0x2;
      piStack_f8 = (int *)0x44b787;
      __vbaFreeObjList();
      piVar8 = (int *)CONCAT22(extraout_var,sVar5 + 1);
    } while (!SCARRY2(sVar5,1));
  }
  ppiStack_ec = (int **)0x44b938;
  __vbaErrorOverflow();
  piStack_f8 = (int *)&DAT_00401ce6;
  pvStack_fc = ExceptionList;
  piStack_f4 = (int *)&piStack_120;
  ppiStack_f0 = (int **)&DAT_00401898;
  ppiStack_ec = (int **)((uint)piStack_e0 & 1);
  piVar7 = (int *)((uint)piStack_e0 & 0xfffffffe);
  ExceptionList = &pvStack_fc;
  piVar8 = piVar7;
  piStack_120 = piVar6;
  piStack_11c = piVar1;
  piStack_118 = piVar3;
  piStack_e8 = (int *)&stack0xfffffffc;
  piStack_e0 = piVar7;
  (**(code **)(*piVar7 + 4))(piVar7);
  piStack_100 = (int *)0x0;
  __vbaStrCopy(piVar8);
  if (DAT_00451750 == (int *)0x0) {
    piStack_120 = (int *)&DAT_00451750;
    __vbaNew2(&DAT_00406724);
  }
  piVar1 = DAT_00451750;
  iStack_114 = *DAT_00451750;
  piStack_120 = piVar7;
  piStack_120 = (int *)__vbaObjSetAddref(&piStack_100);
  iVar2 = (**(code **)(iStack_114 + 0x10))(piVar1);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_00406714,0x10);
  }
  __vbaFreeObj();
  return;
}


// ---- FUN_0044b940 @ 0044b940

void __cdecl FUN_0044b940(uint param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 local_1c;
  void *pvStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_00401ce6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc4;
  local_c = &DAT_00401898;
  local_8 = param_1 & 1;
  piVar2 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar2 + 4))(piVar2);
  local_1c = 0;
  __vbaStrCopy(piVar2);
  if (DAT_00451750 == (int *)0x0) {
    __vbaNew2(&DAT_00406724);
  }
  piVar2 = DAT_00451750;
  iVar1 = *DAT_00451750;
  __vbaObjSetAddref(&local_1c);
  iVar1 = (**(code **)(iVar1 + 0x10))(piVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar2,&DAT_00406714,0x10);
  }
  __vbaFreeObj();
  return;
}


// ---- FUN_0044ba20 @ 0044ba20

void __cdecl FUN_0044ba20(uint param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_1c;
  void *pvStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_00401ce6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc4;
  local_c = &DAT_004018a8;
  local_8 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar4 + 4))(piVar4);
  local_1c = 0;
  if (DAT_00451750 == (int *)0x0) {
    __vbaNew2(&DAT_00406724,&DAT_00451750);
  }
  piVar1 = DAT_00451750;
  iVar3 = *DAT_00451750;
  uVar2 = __vbaObjSetAddref(&local_1c,piVar4);
  iVar3 = (**(code **)(iVar3 + 0x10))(piVar1,uVar2);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar1,&DAT_00406714,0x10);
  }
  __vbaFreeObj();
  return;
}


// ---- FUN_0044baf0 @ 0044baf0

void __cdecl FUN_0044baf0(uint param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 unaff_ESI;
  int *local_3c;
  int *local_38;
  int *piStack_34;
  void *pvStack_24;
  undefined *puStack_20;
  undefined1 *local_1c;
  undefined *local_18;
  uint local_14;
  undefined4 local_10;
  undefined4 local_8;
  
  puStack_20 = &DAT_00401ce6;
  pvStack_24 = ExceptionList;
  ExceptionList = &pvStack_24;
  __vbaChkstk();
  local_1c = &stack0xffffffd0;
  local_18 = &DAT_004018b8;
  local_14 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  local_10 = 0;
  local_38 = (int *)0x44bb45;
  piStack_34 = piVar4;
  (**(code **)(*piVar4 + 4))();
  local_8 = 2;
  local_38 = (int *)0x1;
  local_3c = (int *)0x44bb5b;
  __vbaOnError();
  local_8 = 3;
  local_3c = (int *)0x44bb71;
  local_38 = piVar4;
  local_3c = (int *)(**(code **)(*piVar4 + 0x304))();
  piVar1 = (int *)__vbaObjSet(&local_3c);
  local_3c = piVar4;
  uVar2 = (**(code **)(*piVar4 + 0x308))();
  piVar4 = (int *)__vbaObjSet(&local_38,uVar2);
  iVar3 = (**(code **)(*piVar4 + 0xa8))(piVar4,&stack0xffffffd4);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar4,&DAT_004085c4,0xa8);
  }
  iVar3 = (**(code **)(*piVar1 + 0xac))(piVar1,unaff_ESI);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar1,&DAT_004085d4,0xac);
  }
  __vbaFreeStr();
  __vbaFreeObjList(2,&local_38,&local_3c);
  __vbaExitProc();
  __vbaFreeStr(&LAB_0044c1aa);
  return;
}


// ---- FUN_0044c1d0 @ 0044c1d0

void __cdecl FUN_0044c1d0(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30 [4];
  void *pvStack_20;
  undefined *puStack_1c;
  undefined1 *local_18;
  undefined1 *local_14;
  uint local_10;
  undefined4 local_c;
  
  puStack_1c = &DAT_00401ce6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffff2c;
  local_14 = &LAB_00401948;
  local_10 = param_1 & 1;
  piVar3 = (int *)(param_1 & 0xfffffffe);
  local_c = 0;
  ExceptionList = &pvStack_20;
  (**(code **)(*piVar3 + 4))(piVar3);
  local_30[0] = 0;
  local_34 = 0;
  local_38 = 0;
  __vbaOnError(1);
  uVar1 = (**(code **)(*piVar3 + 0x304))(piVar3);
  piVar3 = (int *)__vbaObjSet(&local_38,uVar1);
  iVar2 = (**(code **)(*piVar3 + 0xa8))(piVar3,&local_34);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar3,&DAT_004085d4,0xa8);
  }
  local_34 = 0;
  __vbaVarMove();
  __vbaFreeObj();
  __vbaStrVarCopy(local_30);
  __vbaStrMove();
  __vbaExitProc();
  __vbaFreeVar(&LAB_0044c3af);
  return;
}


// ---- FUN_0044c3d0 @ 0044c3d0

void __cdecl FUN_0044c3d0(uint param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  void *pvStack_20;
  undefined *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  uint local_10;
  undefined4 local_c;
  
  puStack_1c = &DAT_00401ce6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffff34;
  local_14 = &DAT_00401970;
  local_10 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  local_c = 0;
  ExceptionList = &pvStack_20;
  (**(code **)(*piVar4 + 4))(piVar4);
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  __vbaOnError(1);
  uVar1 = (**(code **)(*piVar4 + 0x308))(piVar4);
  piVar2 = (int *)__vbaObjSet(&local_28,uVar1);
  iVar3 = (**(code **)(*piVar2 + 0x184))(piVar2);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_004085c4,0x184);
  }
  __vbaFreeObj();
  uVar1 = (**(code **)(*piVar4 + 0x304))(piVar4);
  piVar2 = (int *)__vbaObjSet(&local_28,uVar1);
  iVar3 = (**(code **)(*piVar2 + 0x194))(piVar2);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_004085d4,0x194);
  }
  __vbaFreeObj();
  rtcChangeDrive(&DAT_004087a0);
  uVar1 = (**(code **)(*piVar4 + 0x304))(piVar4);
  piVar2 = (int *)__vbaObjSet(&local_2c,uVar1);
  uVar1 = (**(code **)(*piVar4 + 0x308))(piVar4);
  piVar4 = (int *)__vbaObjSet(&local_28,uVar1);
  iVar3 = (**(code **)(*piVar4 + 0xa8))(piVar4,&local_24);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar4,&DAT_004085c4,0xa8);
  }
  iVar3 = (**(code **)(*piVar2 + 0xac))(piVar2,local_24);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_004085d4,0xac);
  }
  __vbaFreeStr();
  __vbaFreeObjList(2,&local_28,&local_2c);
  __vbaExitProc();
  return;
}


// ---- FUN_0044c670 @ 0044c670

undefined4 FUN_0044c670(uint param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_34;
  undefined4 local_2c;
  undefined4 local_24;
  undefined4 local_1c;
  void *local_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_00401ce6;
  local_18 = ExceptionList;
  local_10 = &stack0xffffffac;
  local_c = &DAT_00401998;
  local_8 = param_1 & 1;
  piVar3 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &local_18;
  (**(code **)(*piVar3 + 4))(piVar3);
  if (DAT_00451090 == (int *)0x0) {
    __vbaNew2(&DAT_00402d84,&DAT_00451090);
  }
  piVar1 = DAT_00451090;
  iVar2 = (**(code **)(*DAT_00451090 + 0x2b0))
                    (DAT_00451090,3,local_24,1,local_1c,9,local_34,piVar3,local_2c);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_00407040,0x2b0);
  }
  local_8 = 0;
  (**(code **)(*piVar3 + 8))(piVar3);
  ExceptionList = local_18;
  return local_8;
}


// ---- FUN_0044c760 @ 0044c760

void __cdecl FUN_0044c760(uint param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 local_1c;
  void *pvStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_00401ce6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc4;
  local_c = &DAT_004019a0;
  local_8 = param_1 & 1;
  piVar2 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar2 + 4))(piVar2);
  local_1c = 0;
  __vbaStrCopy(piVar2);
  if (DAT_00451750 == (int *)0x0) {
    __vbaNew2(&DAT_00406724);
  }
  piVar2 = DAT_00451750;
  iVar1 = *DAT_00451750;
  __vbaObjSetAddref(&local_1c);
  iVar1 = (**(code **)(iVar1 + 0x10))(piVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar2,&DAT_00406714,0x10);
  }
  __vbaFreeObj();
  return;
}


// ---- FUN_0044c840 @ 0044c840

void __cdecl FUN_0044c840(uint param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 local_a4 [9];
  undefined4 local_80;
  undefined4 local_70;
  undefined4 local_60;
  undefined4 local_50;
  undefined4 local_40;
  undefined4 local_30;
  undefined4 local_2c;
  void *pvStack_20;
  undefined *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  uint local_10;
  undefined4 local_c;
  
  puStack_1c = &DAT_00401ce6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffff30;
  local_14 = &DAT_004019b0;
  local_10 = param_1 & 1;
  piVar2 = (int *)(param_1 & 0xfffffffe);
  local_c = 0;
  ExceptionList = &pvStack_20;
  (**(code **)(*piVar2 + 4))(piVar2);
  local_2c = 0;
  local_30 = 0;
  local_40 = 0;
  local_50 = 0;
  local_60 = 0;
  local_70 = 0;
  local_80 = 0;
  local_a4[0] = 0;
  __vbaOnError(1);
  iVar1 = (**(code **)(*piVar2 + 0x58))(piVar2,local_a4);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar2,&DAT_00406ed0,0x58);
  }
  uVar4 = 1;
  uVar3 = local_a4[0];
  FUN_00407cdc();
  __vbaSetSystemError(uVar3,uVar4);
  iVar1 = (**(code **)(*piVar2 + 0x724))(piVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar2,&DAT_00407bf0,0x724);
  }
  __vbaExitProc();
  return;
}


// ---- FUN_0044ca20 @ 0044ca20

void __cdecl FUN_0044ca20(uint param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 local_a4 [9];
  undefined4 local_80;
  undefined4 local_70;
  undefined4 local_60;
  undefined4 local_50;
  undefined4 local_40;
  undefined4 local_30;
  undefined4 local_2c;
  void *pvStack_20;
  undefined *puStack_1c;
  undefined1 *local_18;
  undefined1 *local_14;
  uint local_10;
  undefined4 local_c;
  
  puStack_1c = &DAT_00401ce6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffff30;
  local_14 = &LAB_004019d8;
  local_10 = param_1 & 1;
  piVar2 = (int *)(param_1 & 0xfffffffe);
  local_c = 0;
  ExceptionList = &pvStack_20;
  (**(code **)(*piVar2 + 4))(piVar2);
  local_2c = 0;
  local_30 = 0;
  local_40 = 0;
  local_50 = 0;
  local_60 = 0;
  local_70 = 0;
  local_80 = 0;
  local_a4[0] = 0;
  __vbaOnError(1);
  iVar1 = (**(code **)(*piVar2 + 0x58))(piVar2,local_a4);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar2,&DAT_00406ed0,0x58);
  }
  uVar4 = 1;
  uVar3 = local_a4[0];
  FUN_00407c8c();
  __vbaSetSystemError(uVar3,uVar4);
  iVar1 = (**(code **)(*piVar2 + 0x724))(piVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar2,&DAT_00407bf0,0x724);
  }
  __vbaExitProc();
  return;
}


// ---- FUN_0044cc00 @ 0044cc00

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void __cdecl FUN_0044cc00(int ****param_1)

{
  int *piVar1;
  int ****ppppiVar2;
  short sVar3;
  int iVar4;
  undefined *puVar5;
  int ******ppppppiVar6;
  undefined1 *unaff_ESI;
  int local_b0;
  undefined2 local_ac;
  undefined2 local_a8 [18];
  undefined4 local_84;
  wchar_t *local_7c;
  undefined4 local_74 [2];
  undefined4 local_6c;
  undefined4 local_64;
  int iStack_60;
  int **local_5c;
  int ****ppppiStack_58;
  int ******local_54;
  int *****pppppiStack_50;
  int ****local_4c;
  int ****ppppiStack_48;
  int *local_44;
  int ****ppppiStack_40;
  undefined1 *local_3c;
  int *piStack_38;
  int ****local_34;
  void *pvStack_24;
  undefined *puStack_20;
  undefined1 *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_8;
  
  puStack_20 = &DAT_00401ce6;
  pvStack_24 = ExceptionList;
  ExceptionList = &pvStack_24;
  __vbaChkstk();
  local_1c = &stack0xffffffd0;
  local_18 = &LAB_00401a00;
  local_14 = 0;
  local_10 = 0;
  local_8 = 2;
  local_34 = (int ****)0x1;
  piStack_38 = (int *)0x44cc54;
  __vbaOnError();
  local_8 = 3;
  if (DAT_00451750 == (int *)0x0) {
    local_34 = (int ****)&DAT_00451750;
    piStack_38 = (int *)&DAT_00406724;
    local_3c = (undefined1 *)0x44cc74;
    __vbaNew2();
  }
  piVar1 = DAT_00451750;
  local_34 = (int ****)&local_34;
  local_3c = (undefined1 *)0x44ccae;
  piStack_38 = piVar1;
  iVar4 = (**(code **)(*DAT_00451750 + 0x14))();
  if (iVar4 < 0) {
    local_3c = (undefined1 *)0x14;
    ppppiStack_40 = (int ****)&DAT_00406714;
    local_4c = (int ****)0x44ccda;
    ppppiStack_48 = (int ****)iVar4;
    local_44 = piVar1;
    __vbaHresultCheckObj();
  }
  ppppiVar2 = local_34;
  local_3c = &stack0xffffffd4;
  ppppiStack_40 = local_34;
  local_44 = (int *)0x44cd0e;
  puVar5 = (undefined *)(*(code *)(*local_34)[0x4c])();
  if ((int)puVar5 < 0) {
    local_44 = (int *)0x130;
    ppppiStack_48 = (int ****)&DAT_00406dd0;
    local_4c = ppppiVar2;
    local_54 = (int ******)0x44cd3d;
    pppppiStack_50 = (int *****)puVar5;
    __vbaHresultCheckObj();
  }
  ppppiStack_48 = (int ****)0x44cd59;
  iVar4 = __vbaLenBstr();
  local_44 = (int *)0x44cd70;
  __vbaFreeStr();
  local_44 = (int *)0x44cd79;
  __vbaFreeObj();
  if (iVar4 == 0) {
    local_8 = 4;
    local_44 = (int *)&stack0xffffffd4;
    ppppiStack_48 = param_1;
    local_4c = (int ****)0x44cd9f;
    iVar4 = (*(code *)(*param_1)[0x14])();
    if (iVar4 < 0) {
      local_4c = (int ****)0x50;
      pppppiStack_50 = (int *****)&DAT_00406ed0;
      local_54 = (int ******)param_1;
      local_5c = (int **)0x44cdc8;
      ppppiStack_58 = (int ****)iVar4;
      __vbaHresultCheckObj();
    }
    local_6c = 0x80020004;
    local_74[0] = 10;
    local_5c = (int **)0x80020004;
    local_64 = 10;
    local_54 = (int ******)0x8;
    local_7c = L"Unable to display Help Contents. There is no Help associated with this project.";
    local_84 = 8;
    local_4c = (int ****)0x44ce30;
    __vbaVarDup();
    local_4c = (int ****)local_74;
    pppppiStack_50 = (int *****)&local_64;
    local_54 = (int ******)&local_54;
    ppppiStack_58 = (int ****)0x40;
    local_5c = &local_44;
    iStack_60 = 0x44ce48;
    rtcMsgBox();
    local_4c = (int ****)local_74;
    pppppiStack_50 = (int *****)&local_64;
    local_54 = (int ******)&local_54;
    ppppiStack_58 = (int ****)&local_44;
    local_5c = (int **)0x4;
    iStack_60 = 0x44ce60;
    __vbaFreeVarList();
  }
  else {
    local_8 = 6;
    local_44 = (int *)0xffffffff;
    ppppiStack_48 = (int ****)0x44ce77;
    __vbaOnError();
    local_8 = 7;
    local_44 = &local_b0;
    ppppiStack_48 = param_1;
    local_4c = (int ****)0x44ce91;
    iVar4 = (*(code *)(*param_1)[0x16])();
    if (iVar4 < 0) {
      local_4c = (int ****)0x58;
      pppppiStack_50 = (int *****)&DAT_00406ed0;
      local_54 = (int ******)param_1;
      local_5c = (int **)0x44ceba;
      ppppiStack_58 = (int ****)iVar4;
      __vbaHresultCheckObj();
    }
    if (DAT_00451750 == (int *)0x0) {
      local_4c = (int ****)&DAT_00451750;
      pppppiStack_50 = (int *****)&DAT_00406724;
      local_54 = (int ******)0x44cee5;
      __vbaNew2();
    }
    piVar1 = DAT_00451750;
    local_4c = (int ****)&local_34;
    local_54 = (int ******)0x44cf1f;
    pppppiStack_50 = (int *****)piVar1;
    iVar4 = (**(code **)(*DAT_00451750 + 0x14))();
    if (iVar4 < 0) {
      local_54 = (int ******)0x14;
      ppppiStack_58 = (int ****)&DAT_00406714;
      local_64 = 0x44cf4b;
      iStack_60 = iVar4;
      local_5c = (int **)piVar1;
      __vbaHresultCheckObj();
    }
    ppppiVar2 = local_34;
    local_54 = (int ******)&stack0xffffffd4;
    ppppiStack_58 = local_34;
    local_5c = (int **)0x44cf7f;
    local_4c = (int ****)(*(code *)(*local_34)[0x4c])();
    if ((int)local_4c < 0) {
      ppppiStack_40 = (int ****)0x130;
      local_44 = (int *)&DAT_00406dd0;
      ppppiStack_48 = ppppiVar2;
      pppppiStack_50 = (int *****)0x44cfae;
      __vbaHresultCheckObj();
    }
    local_a8[0] = 0;
    ppppiStack_40 = (int ****)local_a8;
    local_44 = (int *)0x3;
    local_4c = (int ****)&stack0xffffffd0;
    pppppiStack_50 = (int *****)0x44cfe0;
    ppppiStack_48 = (int ****)__vbaStrToAnsi();
    local_4c = (int ****)local_b0;
    pppppiStack_50 = (int *****)0x44cfed;
    local_ac = FUN_004069f8();
    pppppiStack_50 = (int *****)0x44cffa;
    __vbaSetSystemError();
    pppppiStack_50 = (int *****)&stack0xffffffd0;
    local_54 = (int ******)&stack0xffffffd4;
    ppppiStack_58 = (int ****)0x2;
    local_5c = (int **)0x44d015;
    __vbaFreeStrList();
    pppppiStack_50 = (int *****)0x44d021;
    __vbaFreeObj();
    local_8 = 8;
    pppppiStack_50 = (int *****)0x44d02e;
    local_3c = (undefined1 *)rtcErrObj();
    local_44 = (int *)0x9;
    pppppiStack_50 = (int *****)&local_44;
    local_54 = (int ******)0x44d042;
    sVar3 = __vbaBoolVarNull();
    pppppiStack_50 = (int *****)0x44d052;
    __vbaFreeVar();
    if (sVar3 != 0) {
      local_8 = 9;
      local_6c = 0x80020004;
      local_74[0] = 10;
      local_5c = (int **)0x80020004;
      local_64 = 10;
      local_54 = (int ******)0xa;
      local_4c = (int ****)0x44d098;
      local_4c = (int ****)rtcErrObj();
      pppppiStack_50 = &local_34;
      local_54 = (int ******)0x44d0a3;
      ppppppiVar6 = (int ******)__vbaObjSet();
      local_4c = (int ****)&stack0xffffffd4;
      local_54 = (int ******)0x44d0bf;
      pppppiStack_50 = (int *****)ppppppiVar6;
      ppppiStack_58 = (int ****)(*(code *)(*ppppppiVar6)[0xb])();
      if ((int)ppppiStack_58 < 0) {
        local_4c = (int ****)0x2c;
        pppppiStack_50 = (int *****)&DAT_00406dc0;
        local_5c = (int **)0x44d0eb;
        local_54 = ppppppiVar6;
        __vbaHresultCheckObj();
      }
      local_44 = (int *)0x8;
      local_4c = (int ****)local_74;
      pppppiStack_50 = (int *****)&local_64;
      local_54 = (int ******)&local_54;
      ppppiStack_58 = (int ****)0x0;
      local_5c = &local_44;
      iStack_60 = 0x44d135;
      local_3c = unaff_ESI;
      rtcMsgBox();
      local_4c = (int ****)0x44d13e;
      __vbaFreeObj();
      local_4c = (int ****)local_74;
      pppppiStack_50 = (int *****)&local_64;
      local_54 = (int ******)&local_54;
      ppppiStack_58 = (int ****)&local_44;
      local_5c = (int **)0x4;
      iStack_60 = 0x44d156;
      __vbaFreeVarList();
    }
  }
  local_4c = (int ****)0x44d268;
  __vbaExitProc();
  return;
}


// ---- FUN_0044d2c0 @ 0044d2c0

void __cdecl FUN_0044d2c0(uint param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_1c;
  void *pvStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_00401ce6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc4;
  local_c = &DAT_00401a70;
  local_8 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar4 + 4))(piVar4);
  local_1c = 0;
  if (DAT_00451750 == (int *)0x0) {
    __vbaNew2(&DAT_00406724,&DAT_00451750);
  }
  piVar1 = DAT_00451750;
  iVar3 = *DAT_00451750;
  uVar2 = __vbaObjSetAddref(&local_1c,piVar4);
  iVar3 = (**(code **)(iVar3 + 0x10))(piVar1,uVar2);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar1,&DAT_00406714,0x10);
  }
  __vbaFreeObj();
  return;
}


// ---- FUN_0044d390 @ 0044d390

void __cdecl FUN_0044d390(uint param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  void *pvStack_20;
  undefined *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  uint local_10;
  undefined4 local_c;
  
  puStack_1c = &DAT_00401ce6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffff34;
  local_14 = &DAT_00401a80;
  local_10 = param_1 & 1;
  piVar5 = (int *)(param_1 & 0xfffffffe);
  local_c = 0;
  ExceptionList = &pvStack_20;
  (**(code **)(*piVar5 + 4))(piVar5);
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  __vbaOnError(1);
  uVar1 = (**(code **)(*piVar5 + 0x318))(piVar5);
  piVar2 = (int *)__vbaObjSet(&local_28,uVar1);
  iVar3 = (**(code **)(*piVar2 + 0x184))(piVar2);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_004085c4,0x184);
  }
  __vbaFreeObj();
  uVar1 = (**(code **)(*piVar5 + 0x31c))(piVar5);
  piVar2 = (int *)__vbaObjSet(&local_28,uVar1);
  iVar3 = (**(code **)(*piVar2 + 0x194))(piVar2);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_004085d4,0x194);
  }
  __vbaFreeObj();
  rtcChangeDrive(&DAT_004087a0);
  uVar1 = (**(code **)(*piVar5 + 0x31c))(piVar5);
  piVar2 = (int *)__vbaObjSet(&local_2c,uVar1);
  uVar1 = (**(code **)(*piVar5 + 0x318))(piVar5);
  piVar4 = (int *)__vbaObjSet(&local_28,uVar1);
  iVar3 = (**(code **)(*piVar4 + 0xa8))(piVar4,&local_24);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar4,&DAT_004085c4,0xa8);
  }
  iVar3 = (**(code **)(*piVar2 + 0xac))(piVar2,local_24);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_004085d4,0xac);
  }
  __vbaFreeStr();
  __vbaFreeObjList(2,&local_28,&local_2c);
  iVar3 = (**(code **)(*piVar5 + 0x6f8))(piVar5);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar5,&DAT_00407bf0,0x6f8);
  }
  __vbaExitProc();
  return;
}


// ---- FUN_0044d650 @ 0044d650

void __cdecl FUN_0044d650(uint param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 unaff_ESI;
  int *local_3c;
  int *local_38;
  int *piStack_34;
  void *pvStack_24;
  undefined *puStack_20;
  undefined1 *local_1c;
  undefined *local_18;
  uint local_14;
  undefined4 local_10;
  undefined4 local_8;
  
  puStack_20 = &DAT_00401ce6;
  pvStack_24 = ExceptionList;
  ExceptionList = &pvStack_24;
  __vbaChkstk();
  local_1c = &stack0xffffffd0;
  local_18 = &DAT_00401aa8;
  local_14 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  local_10 = 0;
  local_38 = (int *)0x44d6a5;
  piStack_34 = piVar4;
  (**(code **)(*piVar4 + 4))();
  local_8 = 2;
  local_38 = (int *)0x1;
  local_3c = (int *)0x44d6bb;
  __vbaOnError();
  local_8 = 3;
  local_3c = (int *)0x44d6d1;
  local_38 = piVar4;
  local_3c = (int *)(**(code **)(*piVar4 + 0x31c))();
  piVar1 = (int *)__vbaObjSet(&local_3c);
  local_3c = piVar4;
  uVar2 = (**(code **)(*piVar4 + 0x318))();
  piVar4 = (int *)__vbaObjSet(&local_38,uVar2);
  iVar3 = (**(code **)(*piVar4 + 0xa8))(piVar4,&stack0xffffffd4);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar4,&DAT_004085c4,0xa8);
  }
  iVar3 = (**(code **)(*piVar1 + 0xac))(piVar1,unaff_ESI);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar1,&DAT_004085d4,0xac);
  }
  __vbaFreeStr();
  __vbaFreeObjList(2,&local_38,&local_3c);
  __vbaExitProc();
  __vbaFreeStr(&LAB_0044dd90);
  return;
}


// ---- FUN_0044ddc0 @ 0044ddc0

void __cdecl FUN_0044ddc0(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30 [4];
  void *pvStack_20;
  undefined *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  uint local_10;
  undefined4 local_c;
  
  puStack_1c = &DAT_00401ce6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffff2c;
  local_14 = &DAT_00401b38;
  local_10 = param_1 & 1;
  piVar3 = (int *)(param_1 & 0xfffffffe);
  local_c = 0;
  ExceptionList = &pvStack_20;
  (**(code **)(*piVar3 + 4))(piVar3);
  local_30[0] = 0;
  local_34 = 0;
  local_38 = 0;
  __vbaOnError(1);
  uVar1 = (**(code **)(*piVar3 + 0x31c))(piVar3);
  piVar3 = (int *)__vbaObjSet(&local_38,uVar1);
  iVar2 = (**(code **)(*piVar3 + 0xa8))(piVar3,&local_34);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar3,&DAT_004085d4,0xa8);
  }
  local_34 = 0;
  __vbaVarMove();
  __vbaFreeObj();
  __vbaStrVarCopy(local_30);
  __vbaStrMove();
  __vbaExitProc();
  __vbaFreeVar(&LAB_0044df9f);
  return;
}


// ---- FUN_0044dfc0 @ 0044dfc0

void __cdecl FUN_0044dfc0(int *param_1)

{
  code *pcVar1;
  short sVar2;
  short sVar3;
  int ***pppiVar4;
  int *piVar5;
  uint uVar6;
  int ***pppiVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined2 extraout_var;
  int **ppiVar11;
  code *pcVar12;
  undefined4 *unaff_ESI;
  int *piVar13;
  int iStack_29c;
  code *pcStack_298;
  code *pcStack_294;
  undefined4 uStack_254;
  undefined4 uStack_244;
  undefined4 uStack_234;
  undefined4 uStack_224;
  undefined4 uStack_214;
  undefined4 uStack_204;
  undefined4 uStack_200;
  void *pvStack_1fc;
  undefined *puStack_1f8;
  undefined1 *puStack_1f4;
  undefined *puStack_1f0;
  int **ppiStack_1ec;
  int ***pppiStack_1e8;
  int **ppiStack_1e4;
  int ***pppiStack_1e0;
  int **ppiStack_1dc;
  int **ppiStack_1d8;
  int **ppiStack_1d4;
  int *piStack_1d0;
  undefined4 auStack_1a0 [2];
  undefined *puStack_198;
  int *apiStack_190 [2];
  int **ppiStack_188;
  undefined4 uStack_180;
  undefined4 auStack_170 [4];
  undefined4 auStack_160 [4];
  int *apiStack_150 [4];
  undefined4 uStack_140;
  int *piStack_13c;
  int *piStack_138;
  int iStack_134;
  int *piStack_130;
  undefined4 uStack_12c;
  int **ppiStack_128;
  int **ppiStack_124;
  int *piStack_120;
  undefined4 *puStack_11c;
  int **ppiStack_118;
  int **ppiStack_114;
  undefined *puStack_110;
  int **ppiStack_10c;
  int **ppiStack_108;
  int *piStack_104;
  int *piStack_100;
  int **ppiStack_fc;
  int *piStack_f8;
  int *piStack_f4;
  int **local_98;
  undefined *local_90;
  undefined4 local_6c [2];
  undefined4 local_64;
  undefined4 local_5c [4];
  undefined4 local_4c;
  undefined4 local_48;
  int *local_44;
  uint local_40;
  undefined4 local_3c;
  int *local_38 [4];
  undefined4 local_28;
  undefined4 local_24;
  void *pvStack_20;
  undefined *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  puStack_1c = &DAT_00401ce6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffff10;
  local_14 = &DAT_00401b60;
  local_10 = 0;
  local_c = 0;
  piStack_f4 = param_1;
  piStack_f8 = (int *)0x44dffd;
  ExceptionList = &pvStack_20;
  (**(code **)(*param_1 + 4))();
  local_24 = 0;
  local_28 = 0;
  local_38[0] = (int *)0x0;
  local_3c = 0;
  local_44 = (int *)0x0;
  local_48 = 0;
  local_4c = 0;
  local_5c[0] = 0;
  local_6c[0] = 0;
  piStack_f8 = (int *)0x1;
  ppiStack_fc = (int **)0x44e02f;
  __vbaOnError();
  piStack_f8 = param_1;
  ppiStack_fc = (int **)0x44e038;
  ppiStack_fc = (int **)(**(code **)(*param_1 + 0x30c))();
  piStack_100 = &local_4c;
  piStack_104 = (int *)0x44e043;
  pppiVar4 = (int ***)__vbaObjSet();
  piStack_100 = (int *)0x44e04e;
  ppiStack_fc = (int **)pppiVar4;
  piVar5 = (int *)(*(code *)(*pppiVar4)[0x7a])();
  if ((int)piVar5 < 0) {
    piStack_100 = (int *)0x1e8;
    piStack_104 = (int *)&DAT_00407ef4;
    puStack_110 = (undefined *)0x44e066;
    ppiStack_10c = (int **)piVar5;
    ppiStack_108 = (int **)pppiVar4;
    __vbaHresultCheckObj();
  }
  piStack_100 = (int *)0x44e06f;
  __vbaFreeObj();
  piStack_100 = (int *)&DAT_00408a24;
  piStack_104 = (int *)0x44e07c;
  sVar2 = rtcAnsiValueBstr();
  piStack_100 = (int *)&DAT_00408a1c;
  piStack_104 = (undefined4 *)0x44e089;
  uVar6 = rtcAnsiValueBstr();
  do {
    local_40 = uVar6;
    if (sVar2 < (short)uVar6) {
      if ((short)local_24 == 0) {
        piStack_100 = (int *)0x44e283;
        __vbaVarCopy();
        piStack_100 = param_1;
        piStack_104 = (int *)0x44e28c;
        piStack_104 = (int *)(**(code **)(*param_1 + 0x30c))();
        ppiStack_108 = (int **)&local_4c;
        ppiStack_10c = (int **)0x44e297;
        pppiVar4 = (int ***)__vbaObjSet();
        piStack_104 = (int *)0xff;
        ppiStack_10c = (int **)0x44e2a4;
        ppiStack_108 = (int **)pppiVar4;
        pppiVar7 = (int ***)(*(code *)(*pppiVar4)[0x19])();
        if ((int)pppiVar7 < 0) {
          ppiStack_10c = (int **)0x64;
          puStack_110 = &DAT_00407ef4;
          puStack_11c = (undefined4 *)0x44e2b9;
          ppiStack_118 = (int **)pppiVar7;
          ppiStack_114 = (int **)pppiVar4;
          __vbaHresultCheckObj();
        }
        ppiStack_10c = (int **)0x44e2c2;
        __vbaFreeObj();
        ppiStack_10c = (int **)param_1;
        puStack_110 = (undefined *)0x44e2cb;
        puStack_110 = (undefined *)(**(code **)(*param_1 + 0x30c))();
        ppiStack_114 = (int **)&local_4c;
        ppiStack_118 = (int **)0x44e2d6;
        pppiVar4 = (int ***)__vbaObjSet();
        ppiVar11 = *pppiVar4;
        puStack_11c = (undefined4 *)0xa;
        ppiStack_118 = local_98;
        ppiStack_114 = (int **)0x80020004;
        puStack_110 = local_90;
        piStack_120 = (int *)local_38;
        ppiStack_124 = &local_44;
        ppiStack_128 = (int **)0x44e31a;
        piStack_120 = (int *)__vbaStrVarVal();
        ppiStack_128 = (int **)0x44e322;
        ppiStack_124 = (int **)pppiVar4;
        piVar5 = (int *)(*(code *)ppiVar11[0x7b])();
        if ((int)piVar5 < 0) {
          piStack_100 = (int *)0x1ec;
          piStack_104 = (int *)&DAT_00407ef4;
          puStack_110 = (undefined *)0x44e33c;
          ppiStack_10c = (int **)piVar5;
          ppiStack_108 = (int **)pppiVar4;
          __vbaHresultCheckObj();
        }
        piStack_100 = (int *)0x44e345;
        __vbaFreeStr();
        piStack_100 = (int *)0x44e34e;
        __vbaFreeObj();
      }
      piStack_100 = param_1;
      piStack_104 = (int *)0x44e357;
      piStack_104 = (int *)(**(code **)(*param_1 + 0x30c))();
      ppiStack_108 = (int **)&local_4c;
      ppiStack_10c = (int **)0x44e362;
      pppiVar4 = (int ***)__vbaObjSet();
      ppiVar11 = *pppiVar4;
      piStack_104 = (int *)local_38;
      ppiStack_108 = &local_44;
      ppiStack_10c = (int **)0x44e374;
      piStack_104 = (int *)__vbaStrVarVal();
      ppiStack_10c = (int **)0x44e37c;
      ppiStack_108 = (int **)pppiVar4;
      pppiVar7 = (int ***)(*(code *)ppiVar11[0x3f])();
      if ((int)pppiVar7 < 0) {
        ppiStack_10c = (int **)0xfc;
        puStack_110 = &DAT_00407ef4;
        puStack_11c = (undefined4 *)0x44e394;
        ppiStack_118 = (int **)pppiVar7;
        ppiStack_114 = (int **)pppiVar4;
        __vbaHresultCheckObj();
      }
      ppiStack_10c = (int **)0x44e39d;
      __vbaFreeStr();
      ppiStack_10c = (int **)0x44e3a6;
      __vbaFreeObj();
      ppiStack_10c = (int **)0x44e472;
      __vbaExitProc();
      ppiStack_10c = (int **)&LAB_0044e4ce;
      puStack_110 = (undefined *)0x44e4bf;
      __vbaFreeStr();
      puStack_110 = (undefined *)0x44e4c8;
      __vbaFreeVar();
      ppiStack_10c = (int **)0x44e4cd;
      __vbaFreeStr();
      return;
    }
    ppiVar11 = (int **)(int)(short)uVar6;
    piStack_104 = local_5c;
    ppiStack_108 = (int **)0x44e0a7;
    piStack_100 = (int *)ppiVar11;
    rtcVarBstrFromAnsi();
    pppiVar4 = (int ***)*param_1;
    piStack_100 = &local_48;
    piStack_104 = local_5c;
    ppiStack_108 = &local_44;
    ppiStack_10c = (int **)0x44e0bb;
    piStack_104 = (int *)__vbaStrVarVal();
    ppiStack_108 = (int **)param_1;
    ppiStack_10c = (int **)0x44e0c3;
    (*(code *)pppiVar4[0x1c8])();
    local_64 = local_48;
    local_48 = 0;
    local_6c[0] = 8;
    piStack_104 = (int *)0x44e0e3;
    __vbaVarMove();
    piStack_104 = (int *)0x44e0ec;
    __vbaFreeStr();
    piStack_104 = (int *)0x44e0f5;
    __vbaFreeVar();
    piStack_100 = (int *)local_38;
    piStack_104 = local_5c;
    ppiStack_108 = (int **)0x44e103;
    piStack_100 = (int *)__vbaLenVar();
    piStack_104 = (undefined4 *)0x44e10a;
    sVar3 = __vbaBoolVarNull();
    if (sVar3 != 0) {
      piStack_100 = param_1;
      piStack_104 = (int *)0x44e11c;
      piStack_104 = (int *)(**(code **)(*param_1 + 0x30c))();
      ppiStack_108 = (int **)&local_4c;
      ppiStack_10c = (int **)0x44e127;
      pppiVar4 = (int ***)__vbaObjSet();
      ppiStack_108 = (int **)local_5c;
      ppiStack_10c = (int **)0x44e148;
      piStack_104 = (int *)ppiVar11;
      rtcVarBstrFromAnsi();
      ppiVar11 = *pppiVar4;
      puStack_110 = (undefined *)0xa;
      ppiStack_10c = local_98;
      ppiStack_108 = (int **)0x80020004;
      piStack_104 = (int *)local_90;
      ppiStack_114 = (int **)local_5c;
      ppiStack_118 = local_38;
      puStack_11c = local_6c;
      piStack_120 = (int *)0x44e184;
      ppiStack_114 = (int **)__vbaVarCat();
      ppiStack_118 = &local_44;
      puStack_11c = (undefined4 *)0x44e18f;
      ppiStack_114 = (int **)__vbaStrVarVal();
      puStack_11c = (undefined4 *)0x44e197;
      ppiStack_118 = (int **)pppiVar4;
      pppiVar7 = (int ***)(*(code *)ppiVar11[0x7b])();
      if ((int)pppiVar7 < 0) {
        piStack_100 = (int *)0x1ec;
        piStack_104 = (int *)&DAT_00407ef4;
        puStack_110 = (undefined *)0x44e1af;
        ppiStack_10c = (int **)pppiVar7;
        ppiStack_108 = (int **)pppiVar4;
        __vbaHresultCheckObj();
      }
      piStack_100 = (int *)0x44e1b8;
      __vbaFreeStr();
      piStack_100 = (int *)0x44e1c1;
      __vbaFreeObj();
      piStack_100 = local_6c;
      piStack_104 = local_5c;
      ppiStack_108 = (int **)0x2;
      ppiStack_10c = (int **)0x44e1d1;
      __vbaFreeVarList();
      if (SCARRY2((short)local_24,1)) break;
      piStack_100 = param_1;
      piStack_104 = (int *)0x44e1ee;
      local_24 = CONCAT22(extraout_var,(short)local_24 + 1);
      piStack_104 = (int *)(**(code **)(*param_1 + 0x30c))();
      ppiStack_108 = (int **)&local_4c;
      ppiStack_10c = (int **)0x44e1f9;
      pppiVar4 = (int ***)__vbaObjSet();
      ppiVar11 = *pppiVar4;
      piStack_104 = (int *)local_38;
      ppiStack_108 = &local_44;
      ppiStack_10c = (int **)0x44e20b;
      piStack_104 = (int *)__vbaStrVarVal();
      ppiStack_10c = (int **)0x44e213;
      ppiStack_108 = (int **)pppiVar4;
      piVar5 = (int *)(*(code *)ppiVar11[0x3f])();
      if ((int)piVar5 < 0) {
        piStack_100 = (int *)0xfc;
        piStack_104 = (int *)&DAT_00407ef4;
        puStack_110 = (undefined *)0x44e22b;
        ppiStack_10c = (int **)piVar5;
        ppiStack_108 = (int **)pppiVar4;
        __vbaHresultCheckObj();
      }
      piStack_100 = (int *)0x44e234;
      __vbaFreeStr();
      piStack_100 = (int *)0x44e23d;
      __vbaFreeObj();
    }
    uVar6 = (uint)(ushort)((short)local_40 + 1);
  } while (!SCARRY2((short)local_40,1));
  piStack_100 = (int *)0x44e4f3;
  __vbaErrorOverflow();
  ppiStack_114 = (int **)&DAT_00401ce6;
  ppiStack_118 = ExceptionList;
  ppiStack_1dc = (int **)param_1;
  puStack_110 = (undefined *)&pppiStack_1e0;
  ppiStack_10c = (int **)&DAT_00401b88;
  ppiStack_108 = (int **)0x0;
  piStack_104 = (int *)0x0;
  piStack_120 = (int *)0x0;
  ppiStack_124 = (int **)0x0;
  ppiStack_128 = (int **)0x0;
  uStack_12c = 0;
  piStack_130 = (int *)0x0;
  iStack_134 = 0;
  piStack_138 = (int *)0x0;
  piStack_13c = (int *)0x0;
  uStack_140 = 0;
  apiStack_150[0] = (int *)0x0;
  auStack_160[0] = 0;
  auStack_170[0] = 0;
  uStack_180 = 0;
  apiStack_190[0] = (int *)0x0;
  auStack_1a0[0] = 0;
  ppiStack_1e4 = (int **)0x44e576;
  ExceptionList = &ppiStack_118;
  pppiStack_1e0 = pppiVar4;
  ppiStack_1d8 = ppiVar11;
  ppiStack_fc = (int **)&stack0xfffffffc;
  __vbaStrCopy();
  *unaff_ESI = 0;
  ppiStack_1dc = (int **)0x1;
  pppiStack_1e0 = (int ***)0x44e583;
  __vbaOnError();
  ppiStack_1dc = (int **)piStack_120;
  pppiStack_1e0 = (int ***)0x44e58f;
  iVar8 = __vbaLenBstr();
  if (iVar8 == 0) {
    ppiStack_1dc = (int **)0x44e9fd;
    __vbaExitProc();
  }
  else {
    ppiStack_188 = &piStack_120;
    apiStack_190[0] = (int *)0x4008;
    ppiStack_1dc = (int **)0x1;
    pppiStack_1e0 = (int ***)apiStack_190;
    ppiStack_1e4 = apiStack_150;
    pppiStack_1e8 = (int ***)0x44e5bd;
    rtcLeftCharVar();
    ppiStack_1d4 = apiStack_150;
    ppiStack_1d8 = (int **)auStack_160;
    ppiStack_1dc = (int **)0x44e5cb;
    rtcUpperCaseVar();
    puStack_198 = &DAT_00408a98;
    auStack_1a0[0] = 8;
    ppiStack_1d4 = (int **)auStack_160;
    ppiStack_1d8 = (int **)auStack_1a0;
    ppiStack_1dc = (int **)auStack_170;
    pppiStack_1e0 = (int ***)0x44e5f4;
    ppiStack_1d4 = (int **)__vbaVarCat();
    ppiStack_1d8 = (int **)0x44e5fd;
    __vbaStrVarMove();
    pcVar1 = __vbaStrMove_exref;
    ppiStack_1d4 = (int **)0x44e60a;
    __vbaStrMove();
    ppiStack_1d4 = (int **)auStack_170;
    ppiStack_1d8 = (int **)auStack_160;
    ppiStack_1dc = apiStack_150;
    pppiStack_1e0 = (int ***)0x3;
    ppiStack_1e4 = (int **)0x44e61e;
    __vbaFreeVarList();
    ppiStack_1d4 = (int **)0x104;
    ppiStack_1d8 = apiStack_150;
    ppiStack_1dc = (int **)0x44e630;
    rtcSpaceVar();
    ppiStack_1d4 = apiStack_150;
    ppiStack_1d8 = (int **)0x44e636;
    __vbaStrVarMove();
    ppiStack_1d4 = (int **)0x44e63d;
    __vbaStrMove();
    ppiStack_1d4 = (int **)0x44e646;
    __vbaFreeVar();
    piStack_1d0 = piStack_130;
    ppiStack_1d4 = (int **)0x44e64c;
    iStack_134 = __vbaLenBstr();
    pcVar12 = __vbaStrToAnsi_exref;
    piStack_1d0 = &iStack_134;
    ppiStack_1d4 = (int **)piStack_130;
    ppiStack_1d8 = &piStack_13c;
    ppiStack_1dc = (int **)0x44e663;
    ppiStack_1d4 = (int **)__vbaStrToAnsi();
    ppiStack_1d8 = ppiStack_128;
    ppiStack_1dc = &piStack_138;
    pppiStack_1e0 = (int ***)0x44e66e;
    ppiStack_1d8 = (int **)__vbaStrToAnsi();
    ppiStack_1dc = (int **)0x44e674;
    iVar8 = FUN_00407d28();
    ppiStack_1dc = (int **)0x44e67c;
    __vbaSetSystemError();
    ppiStack_1dc = (int **)piStack_138;
    pppiStack_1e0 = &ppiStack_128;
    ppiStack_1e4 = (int **)0x44e68a;
    __vbaStrToUnicode();
    ppiStack_1dc = (int **)piStack_13c;
    pppiStack_1e0 = (int ***)&piStack_130;
    ppiStack_1e4 = (int **)0x44e698;
    __vbaStrToUnicode();
    ppiStack_1dc = &piStack_13c;
    pppiStack_1e0 = (int ***)&piStack_138;
    ppiStack_1e4 = (int **)0x2;
    pppiStack_1e8 = (int ***)0x44e6a8;
    __vbaFreeStrList();
    if (iVar8 == 0xea) {
      ppiStack_1dc = (int **)iStack_134;
      pppiStack_1e0 = (int ***)apiStack_150;
      ppiStack_1e4 = (int **)0x44e6c1;
      rtcSpaceVar();
      ppiStack_1dc = apiStack_150;
      pppiStack_1e0 = (int ***)0x44e6cb;
      __vbaStrVarMove();
      ppiStack_1dc = (int **)0x44e6d2;
      __vbaStrMove();
      ppiStack_1dc = (int **)0x44e6db;
      __vbaFreeVar();
      ppiStack_1d8 = (int **)&iStack_134;
      ppiStack_1dc = (int **)piStack_130;
      pppiStack_1e0 = (int ***)&piStack_13c;
      ppiStack_1e4 = (int **)0x44e6e9;
      ppiStack_1dc = (int **)__vbaStrToAnsi();
      pppiStack_1e0 = (int ***)ppiStack_128;
      ppiStack_1e4 = &piStack_138;
      pppiStack_1e8 = (int ***)0x44e6f4;
      pppiStack_1e0 = (int ***)__vbaStrToAnsi();
      ppiStack_1e4 = (int **)0x44e6fa;
      iVar8 = FUN_00407d28();
      ppiStack_1e4 = (int **)0x44e702;
      __vbaSetSystemError();
      pcVar12 = __vbaStrToUnicode_exref;
      ppiStack_1e4 = (int **)piStack_138;
      pppiStack_1e8 = &ppiStack_128;
      ppiStack_1ec = (int **)0x44e712;
      __vbaStrToUnicode();
      ppiStack_1e4 = (int **)piStack_13c;
      pppiStack_1e8 = (int ***)&piStack_130;
      ppiStack_1ec = (int **)0x44e71c;
      __vbaStrToUnicode();
      ppiStack_1e4 = &piStack_13c;
      pppiStack_1e8 = (int ***)&piStack_138;
      ppiStack_1ec = (int **)0x2;
      puStack_1f0 = (undefined *)0x44e72c;
      __vbaFreeStrList();
    }
    if (iVar8 == 0) {
      ppiStack_188 = &piStack_130;
      apiStack_190[0] = (int *)0x4008;
      ppiStack_1e4 = (int **)0x1;
      pppiStack_1e8 = (int ***)piStack_130;
      ppiStack_1ec = (int **)&DAT_00408aa0;
      puStack_1f4 = (undefined1 *)0x44e75c;
      puStack_1f0 = (undefined *)iVar8;
      iVar9 = __vbaInStr();
      ppiStack_1e4 = (int **)(iVar9 + -1);
      if (SBORROW4(iVar9,1)) {
        ppiStack_1e4 = (int **)0x44ea8c;
        __vbaErrorOverflow();
        puStack_1f8 = &DAT_00401ce6;
        pvStack_1fc = ExceptionList;
        pcStack_298 = pcVar1;
        puStack_1f4 = (undefined1 *)&iStack_29c;
        puStack_1f0 = &DAT_00401bb0;
        ppiStack_1ec = (int **)((uint)ppiStack_1d8 & 1);
        piVar13 = (int *)((uint)ppiStack_1d8 & 0xfffffffe);
        pppiStack_1e8 = (int ***)0x0;
        ExceptionList = &pvStack_1fc;
        iStack_29c = iVar8;
        pcStack_294 = pcVar12;
        pppiStack_1e0 = &ppiStack_fc;
        ppiStack_1d8 = (int **)piVar13;
        (**(code **)(*piVar13 + 4))(piVar13);
        uStack_200 = 0;
        uStack_204 = 0;
        uStack_214 = 0;
        uStack_224 = 0;
        uStack_234 = 0;
        uStack_244 = 0;
        uStack_254 = 0;
        __vbaOnError(1);
        uVar10 = (**(code **)(*piVar13 + 0x30c))(piVar13);
        piVar5 = (int *)__vbaObjSet(&uStack_204,uVar10);
        iVar8 = (**(code **)(*piVar5 + 100))(piVar5,0);
        if (iVar8 < 0) {
          __vbaHresultCheckObj(iVar8,piVar5,&DAT_00407ef4,100);
        }
        __vbaFreeObj();
        iVar8 = (**(code **)(*piVar13 + 0x6f8))(piVar13);
        if (iVar8 < 0) {
          __vbaHresultCheckObj(iVar8,piVar13,&DAT_00407bf0,0x6f8);
        }
        uVar10 = (**(code **)(*piVar13 + 0x318))(piVar13);
        piVar5 = (int *)__vbaObjSet(&uStack_204,uVar10);
        iVar8 = (**(code **)(*piVar5 + 0x184))(piVar5);
        if (iVar8 < 0) {
          __vbaHresultCheckObj(iVar8,piVar5,&DAT_004085c4,0x184);
        }
        __vbaFreeObj();
        __vbaExitProc();
        return;
      }
      pppiStack_1e8 = (int ***)apiStack_190;
      ppiStack_1ec = apiStack_150;
      puStack_1f0 = (undefined *)0x44e777;
      rtcLeftCharVar();
      ppiStack_1e4 = apiStack_150;
      pppiStack_1e8 = (int ***)0x44e781;
      __vbaStrVarMove();
      ppiStack_1e4 = (int **)0x44e788;
      __vbaStrMove();
      ppiStack_1e4 = (int **)0x44e791;
      __vbaFreeVar();
      pppiStack_1e0 = (int ***)&DAT_00408a98;
      ppiStack_1e4 = ppiStack_124;
      pppiStack_1e8 = (int ***)0x44e7a0;
      __vbaStrCat();
      pppiStack_1e0 = (int ***)0x44e7a7;
      __vbaStrMove();
      pppiStack_1e0 = (int ***)0x44e7ad;
      __vbaExitProc();
    }
    else {
      if (iVar8 < 0x4b9) {
        if (iVar8 == 0x4b8) {
          ppiStack_1e4 = (int **)0x44e884;
          __vbaStrCopy();
          ppiStack_1dc = (int **)0x44e88a;
          __vbaExitProc();
          goto LAB_0044ea4e;
        }
        if (iVar8 == 0xea) {
          ppiStack_1e4 = (int **)0x44e866;
          __vbaStrCopy();
          ppiStack_1dc = (int **)0x44e86c;
          __vbaExitProc();
          goto LAB_0044ea4e;
        }
        if (iVar8 == 0x4b0) {
          ppiStack_1e4 = ppiStack_128;
          pppiStack_1e8 = (int ***)0x408aa8;
          ppiStack_1ec = (int **)0x44e82f;
          __vbaStrCat();
          ppiStack_1e4 = (int **)0x44e836;
          __vbaStrMove();
          ppiStack_1e4 = (int **)uStack_12c;
          pppiStack_1e8 = (int ***)0x408ab8;
          ppiStack_1ec = (int **)0x44e841;
          __vbaStrCat();
          ppiStack_1e4 = (int **)0x44e848;
          __vbaStrMove();
          ppiStack_1e4 = (int **)0x44e84e;
          __vbaExitProc();
          goto LAB_0044ea4e;
        }
        if (iVar8 == 0x4b1) {
          ppiStack_1e4 = ppiStack_128;
          pppiStack_1e8 = (int ***)0x408aa8;
          ppiStack_1ec = (int **)0x44e7f5;
          __vbaStrCat();
          ppiStack_1e4 = (int **)0x44e7fc;
          __vbaStrMove();
          ppiStack_1e4 = (int **)uStack_12c;
          pppiStack_1e8 = (int ***)0x408b5c;
          ppiStack_1ec = (int **)0x44e807;
          __vbaStrCat();
          ppiStack_1e4 = (int **)0x44e80e;
          __vbaStrMove();
          ppiStack_1e4 = (int **)0x44e814;
          __vbaExitProc();
          goto LAB_0044ea4e;
        }
      }
      else {
        if (iVar8 == 0x4c6) {
          ppiStack_1e4 = (int **)0x44e926;
          __vbaStrCopy();
          ppiStack_1dc = (int **)0x44e92c;
          __vbaExitProc();
          goto LAB_0044ea4e;
        }
        if (iVar8 == 0x8ca) {
          ppiStack_1e4 = ppiStack_128;
          pppiStack_1e8 = (int ***)0x408aa8;
          ppiStack_1ec = (int **)0x44e8ef;
          __vbaStrCat();
          ppiStack_1e4 = (int **)0x44e8f6;
          __vbaStrMove();
          ppiStack_1e4 = (int **)uStack_12c;
          pppiStack_1e8 = (int ***)0x408b08;
          ppiStack_1ec = (int **)0x44e901;
          __vbaStrCat();
          ppiStack_1e4 = (int **)0x44e908;
          __vbaStrMove();
          ppiStack_1e4 = (int **)0x44e90e;
          __vbaExitProc();
          goto LAB_0044ea4e;
        }
      }
      ppiStack_1e4 = (int **)0x408ce0;
      ppiStack_1ec = (int **)0x44e8b0;
      pppiStack_1e8 = (int ***)iVar8;
      __vbaStrI4();
      pppiStack_1e8 = (int ***)0x44e8b7;
      pppiStack_1e8 = (int ***)__vbaStrMove();
      ppiStack_1ec = (int **)0x44e8be;
      __vbaStrCat();
      ppiStack_1e4 = (int **)0x44e8c5;
      __vbaStrMove();
      ppiStack_1e4 = (int **)0x44e8ce;
      __vbaFreeStr();
      ppiStack_1e4 = (int **)0x44e8d4;
      __vbaExitProc();
    }
  }
LAB_0044ea4e:
  ppiStack_1dc = (int **)&LAB_0044ea69;
  pppiStack_1e0 = (int ***)0x44ea59;
  __vbaFreeStr();
  pppiStack_1e0 = (int ***)0x44ea5e;
  __vbaFreeStr();
  pppiStack_1e0 = (int ***)0x44ea63;
  __vbaFreeStr();
  pppiStack_1e0 = (int ***)0x44ea68;
  __vbaFreeStr();
  return;
}


// ---- FUN_0044e500 @ 0044e500

void __cdecl FUN_0044e500(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  code *pcVar7;
  int *piVar8;
  int iStack_1a4;
  code *pcStack_1a0;
  code *pcStack_19c;
  undefined4 uStack_15c;
  undefined4 uStack_14c;
  undefined4 uStack_13c;
  undefined4 uStack_12c;
  undefined4 uStack_11c;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  void *pvStack_104;
  undefined *puStack_100;
  undefined1 *puStack_fc;
  undefined *puStack_f8;
  undefined4 *puStack_f4;
  wchar_t *pwStack_f0;
  wchar_t *pwStack_ec;
  undefined4 local_98 [2];
  undefined4 *local_90;
  undefined4 local_88;
  undefined4 local_78;
  undefined4 local_68;
  undefined4 local_58 [4];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28 [2];
  void *pvStack_20;
  undefined *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  puStack_1c = &DAT_00401ce6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffff18;
  local_14 = &DAT_00401b88;
  local_10 = 0;
  local_c = 0;
  local_28[0] = 0;
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  local_38 = 0;
  local_3c = 0;
  local_40 = 0;
  local_44 = 0;
  local_48 = 0;
  local_58[0] = 0;
  local_68 = 0;
  local_78 = 0;
  local_88 = 0;
  local_98[0] = 0;
  pwStack_ec = (wchar_t *)0x44e576;
  ExceptionList = &pvStack_20;
  __vbaStrCopy();
  *param_3 = 0;
  __vbaOnError();
  iVar2 = __vbaLenBstr();
  if (iVar2 == 0) {
    __vbaExitProc();
  }
  else {
    local_90 = local_28;
    local_98[0] = 0x4008;
    pwStack_ec = (wchar_t *)local_58;
    pwStack_f0 = L"喍劬䖍傜ᗿႨ@藇､\xffff誘@藇｜\xffff\b";
    rtcLeftCharVar();
    rtcUpperCaseVar();
    __vbaVarCat();
    __vbaStrVarMove();
    pcVar1 = __vbaStrMove_exref;
    __vbaStrMove();
    pwStack_ec = L"쒃栐Ą";
    __vbaFreeVarList();
    rtcSpaceVar();
    __vbaStrVarMove();
    __vbaStrMove();
    __vbaFreeVar();
    local_3c = __vbaLenBstr();
    pcVar7 = __vbaStrToAnsi_exref;
    __vbaStrToAnsi();
    puVar3 = (undefined4 *)__vbaStrToAnsi();
    iVar2 = FUN_00407d28();
    __vbaSetSystemError();
    pwStack_ec = L"喋勀䖍僌ᗿფ@䶍净喍勄ɪᗿᄬ@쒃脌\xeaff";
    __vbaStrToUnicode();
    pwStack_ec = L"䶍净喍勄ɪᗿᄬ@쒃脌\xeaff";
    __vbaStrToUnicode();
    pwStack_ec = (wchar_t *)0x2;
    pwStack_f0 = L"쒃脌\xeaff";
    __vbaFreeStrList();
    if (iVar2 == 0xea) {
      pwStack_ec = 
      L"喍劬ᗿဨ@킋䶍ￌ跖걍ᗿဠ@䖍僈䶋凌喍勀폿譐푅赐쑍ｑ僓⻨ﮖ诿\xfff8倕䀐謀쑕赒푅譐\xe41d䀐＀诓쁍赑챕ｒ跓쁅赐쑍橑＂Ⱅ䀑茀ೄﾅ蔏\x80"
      ;
      rtcSpaceVar();
      __vbaStrVarMove();
      __vbaStrMove();
      __vbaFreeVar();
      puVar3 = &local_3c;
      pwStack_ec = 
      L"譐푅赐쑍ｑ僓⻨ﮖ诿\xfff8倕䀐謀쑕赒푅譐\xe41d䀐＀诓쁍赑챕ｒ跓쁅赐쑍橑＂Ⱅ䀑茀ೄﾅ蔏\x80"
      ;
      __vbaStrToAnsi();
      pwStack_ec = (wchar_t *)&local_40;
      pwStack_f0 = 
      L"\xe850阮\xfffb\xf88bᗿၐ@喋勄䖍僔ᶋფ@폿䶋净喍勌폿䖍僀䶍凄ɪᗿᄬ@쒃蔌࿿肅"
      ;
      __vbaStrToAnsi();
      pwStack_ec = 
      L"\xf88bᗿၐ@喋勄䖍僔ᶋფ@폿䶋净喍勌폿䖍僀䶍凄ɪᗿᄬ@쒃蔌࿿肅";
      iVar2 = FUN_00407d28();
      pwStack_ec = L"喋勄䖍僔ᶋფ@폿䶋净喍勌폿䖍僀䶍凄ɪᗿᄬ@쒃蔌࿿肅";
      __vbaSetSystemError();
      pcVar7 = __vbaStrToUnicode_exref;
      pwStack_ec = (wchar_t *)local_40;
      pwStack_f0 = (wchar_t *)&local_30;
      puStack_f4 = (undefined4 *)0x44e712;
      __vbaStrToUnicode();
      pwStack_ec = (wchar_t *)local_44;
      pwStack_f0 = (wchar_t *)&local_38;
      puStack_f4 = (undefined4 *)0x44e71c;
      __vbaStrToUnicode();
      pwStack_ec = (wchar_t *)&local_44;
      pwStack_f0 = (wchar_t *)&local_40;
      puStack_f4 = (undefined4 *)0x2;
      puStack_f8 = (undefined *)0x44e72c;
      __vbaFreeStrList();
    }
    if (iVar2 == 0) {
      local_90 = &local_38;
      local_98[0] = 0x4008;
      pwStack_ec = (wchar_t *)0x1;
      pwStack_f0 = (wchar_t *)local_38;
      puStack_f4 = (undefined4 *)&DAT_00408aa0;
      puStack_fc = (undefined1 *)0x44e75c;
      puStack_f8 = (undefined *)iVar2;
      iVar4 = __vbaInStr();
      pwStack_ec = (wchar_t *)(iVar4 + -1);
      if (SBORROW4(iVar4,1)) {
        pwStack_ec = L"邐邐譕菬ᓬ\xe668䀜搀¡";
        __vbaErrorOverflow();
        puStack_100 = &DAT_00401ce6;
        pvStack_104 = ExceptionList;
        pcStack_1a0 = pcVar1;
        puStack_fc = (undefined1 *)&iStack_1a4;
        puStack_f8 = &DAT_00401bb0;
        puStack_f4 = (undefined4 *)((uint)puVar3 & 1);
        piVar8 = (int *)((uint)puVar3 & 0xfffffffe);
        pwStack_f0 = (wchar_t *)0x0;
        ExceptionList = &pvStack_104;
        iStack_1a4 = iVar2;
        pcStack_19c = pcVar7;
        (**(code **)(*piVar8 + 4))(piVar8);
        uStack_108 = 0;
        uStack_10c = 0;
        uStack_11c = 0;
        uStack_12c = 0;
        uStack_13c = 0;
        uStack_14c = 0;
        uStack_15c = 0;
        __vbaOnError(1);
        uVar5 = (**(code **)(*piVar8 + 0x30c))(piVar8);
        piVar6 = (int *)__vbaObjSet(&uStack_10c,uVar5);
        iVar2 = (**(code **)(*piVar6 + 100))(piVar6,0);
        if (iVar2 < 0) {
          __vbaHresultCheckObj(iVar2,piVar6,&DAT_00407ef4,100);
        }
        __vbaFreeObj();
        iVar2 = (**(code **)(*piVar8 + 0x6f8))(piVar8);
        if (iVar2 < 0) {
          __vbaHresultCheckObj(iVar2,piVar8,&DAT_00407bf0,0x6f8);
        }
        uVar5 = (**(code **)(*piVar8 + 0x318))(piVar8);
        piVar6 = (int *)__vbaObjSet(&uStack_10c,uVar5);
        iVar2 = (**(code **)(*piVar6 + 0x184))(piVar6);
        if (iVar2 < 0) {
          __vbaHresultCheckObj(iVar2,piVar6,&DAT_004085c4,0x184);
        }
        __vbaFreeObj();
        __vbaExitProc();
        return;
      }
      pwStack_f0 = (wchar_t *)local_98;
      puStack_f4 = local_58;
      puStack_f8 = (undefined *)0x44e777;
      rtcLeftCharVar();
      pwStack_ec = (wchar_t *)local_58;
      pwStack_f0 = (wchar_t *)0x44e781;
      __vbaStrVarMove();
      pwStack_ec = 
      L"䶍ﾬ―䀐栀誘@䶋凘ᗿ၌@킋䶍￘ￖ怕䀐栀\xea69D韩\x02脀룿\x04ༀ톏";
      __vbaStrMove();
      pwStack_ec = (wchar_t *)0x44e791;
      __vbaFreeVar();
      pwStack_ec = (wchar_t *)local_2c;
      pwStack_f0 = L"킋䶍￘ￖ怕䀐栀\xea69D韩\x02脀룿\x04ༀ톏";
      __vbaStrCat();
      __vbaStrMove();
      __vbaExitProc();
    }
    else {
      if (iVar2 < 0x4b9) {
        if (iVar2 == 0x4b8) {
          pwStack_ec = L"ᗿၠ@楨䓪\xe900ƺ";
          __vbaStrCopy();
          __vbaExitProc();
          goto LAB_0044ea4e;
        }
        if (iVar2 == 0xea) {
          pwStack_ec = L"ᗿၠ@楨䓪\xe900ǘ";
          __vbaStrCopy();
          __vbaExitProc();
          goto LAB_0044ea4e;
        }
        if (iVar2 == 0x4b0) {
          pwStack_ec = (wchar_t *)local_30;
          pwStack_f0 = L" --> ";
          puStack_f4 = (undefined4 *)0x44e82f;
          __vbaStrCat();
          pwStack_ec = L"喋勐롨䂊＀诗跐큍훿ᗿၠ@楨䓪\xe900Ƕ";
          __vbaStrMove();
          pwStack_ec = (wchar_t *)local_34;
          pwStack_f0 = L"The specified device name is invalid.";
          puStack_f4 = (undefined4 *)0x44e841;
          __vbaStrCat();
          pwStack_ec = L"ᗿၠ@楨䓪\xe900Ƕ";
          __vbaStrMove();
          pwStack_ec = L"楨䓪\xe900Ƕ";
          __vbaExitProc();
          goto LAB_0044ea4e;
        }
        if (iVar2 == 0x4b1) {
          pwStack_ec = (wchar_t *)local_30;
          pwStack_f0 = L" --> ";
          puStack_f4 = (undefined4 *)0x44e7f5;
          __vbaStrCat();
          pwStack_ec = L"䖋僐屨䂋＀诗跐큍훿ᗿၠ@楨䓪\xe900Ȱ";
          __vbaStrMove();
          pwStack_ec = (wchar_t *)local_34;
          pwStack_f0 = L"The device is not currently connected but it is a remembered connection.";
          puStack_f4 = (undefined4 *)0x44e807;
          __vbaStrCat();
          pwStack_ec = L"ᗿၠ@楨䓪\xe900Ȱ";
          __vbaStrMove();
          pwStack_ec = L"楨䓪\xe900Ȱ";
          __vbaExitProc();
          goto LAB_0044ea4e;
        }
      }
      else {
        if (iVar2 == 0x4c6) {
          pwStack_ec = L"ᗿၠ@楨䓪\xe900Ę";
          __vbaStrCopy();
          __vbaExitProc();
          goto LAB_0044ea4e;
        }
        if (iVar2 == 0x8ca) {
          pwStack_ec = (wchar_t *)local_30;
          pwStack_f0 = L" --> ";
          puStack_f4 = (undefined4 *)0x44e8ef;
          __vbaStrCat();
          pwStack_ec = L"䶋凐ࡨ䂋＀诗跐큍훿ᗿၠ@楨䓪\xe900Ķ";
          __vbaStrMove();
          pwStack_ec = (wchar_t *)local_34;
          pwStack_f0 = L"This network connection does not exist.";
          puStack_f4 = (undefined4 *)0x44e901;
          __vbaStrCat();
          pwStack_ec = L"ᗿၠ@楨䓪\xe900Ķ";
          __vbaStrMove();
          pwStack_ec = L"楨䓪\xe900Ķ";
          __vbaExitProc();
          goto LAB_0044ea4e;
        }
      }
      pwStack_ec = L"Unknown error code: ";
      puStack_f4 = (undefined4 *)0x44e8b0;
      pwStack_f0 = (wchar_t *)iVar2;
      __vbaStrI4();
      pwStack_f0 = 
      L"ｐ䰕䀐謀跐큍훿䶍ￄ逕䀑＀怕䀐栀\xea69D烩\x01謀푅桐誨@㶋၌@\xd7ff킋䶍￐诖큍桑謈@\xd7ff킋䶍￐ￖ怕䀐栀\xea69D㛩\x01먀说@䶍￐␕䀑＀怕䀐栀\xea69Dᣩ\x01＀㠕䀑倀喍劼ᗿၬ@\xf08bڋ䶍凄ｖⱐ\xe2db삅ཽⱪ쁨䁭嘀ｐ吕䀐뤀\x04耂䶉뢄\n"
      ;
      pwStack_f0 = (wchar_t *)__vbaStrMove();
      puStack_f4 = (undefined4 *)0x44e8be;
      __vbaStrCat();
      pwStack_ec = 
      L"䶍ￄ逕䀑＀怕䀐栀\xea69D烩\x01謀푅桐誨@㶋၌@\xd7ff킋䶍￐诖큍桑謈@\xd7ff킋䶍￐ￖ怕䀐栀\xea69D㛩\x01먀说@䶍￐␕䀑＀怕䀐栀\xea69Dᣩ\x01＀㠕䀑倀喍劼ᗿၬ@\xf08bڋ䶍凄ｖⱐ\xe2db삅ཽⱪ쁨䁭嘀ｐ吕䀐뤀\x04耂䶉뢄\n"
      ;
      __vbaStrMove();
      pwStack_ec = L"ᗿၠ@楨䓪\xe900Ű";
      __vbaFreeStr();
      pwStack_ec = L"楨䓪\xe900Ű";
      __vbaExitProc();
    }
  }
LAB_0044ea4e:
  __vbaFreeStr();
  __vbaFreeStr();
  __vbaFreeStr();
  __vbaFreeStr();
  return;
}


// ---- FUN_0044ea90 @ 0044ea90

void __cdecl FUN_0044ea90(uint param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_28;
  undefined4 local_24;
  void *pvStack_20;
  undefined *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  uint local_10;
  undefined4 local_c;
  
  puStack_1c = &DAT_00401ce6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffff40;
  local_14 = &DAT_00401bb0;
  local_10 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  local_c = 0;
  ExceptionList = &pvStack_20;
  (**(code **)(*piVar4 + 4))(piVar4);
  local_24 = 0;
  local_28 = 0;
  __vbaOnError(1);
  uVar1 = (**(code **)(*piVar4 + 0x30c))(piVar4);
  piVar2 = (int *)__vbaObjSet(&local_28,uVar1);
  iVar3 = (**(code **)(*piVar2 + 100))(piVar2,0);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00407ef4,100);
  }
  __vbaFreeObj();
  iVar3 = (**(code **)(*piVar4 + 0x6f8))(piVar4);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar4,&DAT_00407bf0,0x6f8);
  }
  uVar1 = (**(code **)(*piVar4 + 0x318))(piVar4);
  piVar2 = (int *)__vbaObjSet(&local_28,uVar1);
  iVar3 = (**(code **)(*piVar2 + 0x184))(piVar2);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_004085c4,0x184);
  }
  __vbaFreeObj();
  __vbaExitProc();
  return;
}


// ---- FUN_0044eca0 @ 0044eca0

void __cdecl FUN_0044eca0(uint param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 local_1c;
  void *pvStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_00401ce6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc4;
  local_c = &DAT_00401bd8;
  local_8 = param_1 & 1;
  piVar2 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar2 + 4))(piVar2);
  local_1c = 0;
  __vbaStrCopy(piVar2);
  if (DAT_00451750 == (int *)0x0) {
    __vbaNew2(&DAT_00406724);
  }
  piVar2 = DAT_00451750;
  iVar1 = *DAT_00451750;
  __vbaObjSetAddref(&local_1c);
  iVar1 = (**(code **)(iVar1 + 0x10))(piVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar2,&DAT_00406714,0x10);
  }
  __vbaFreeObj();
  return;
}


// ---- FUN_0044ed80 @ 0044ed80

void __cdecl FUN_0044ed80(uint param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_1c;
  void *pvStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &DAT_00401ce6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc4;
  local_c = &DAT_00401be8;
  local_8 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar4 + 4))(piVar4);
  local_1c = 0;
  if (DAT_00451750 == (int *)0x0) {
    __vbaNew2(&DAT_00406724,&DAT_00451750);
  }
  piVar1 = DAT_00451750;
  iVar3 = *DAT_00451750;
  uVar2 = __vbaObjSetAddref(&local_1c,piVar4);
  iVar3 = (**(code **)(iVar3 + 0x10))(piVar1,uVar2);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar1,&DAT_00406714,0x10);
  }
  __vbaFreeObj();
  return;
}


// ---- FUN_0044ee50 @ 0044ee50

void __cdecl FUN_0044ee50(uint param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 unaff_ESI;
  int *local_3c;
  int *local_38;
  int *piStack_34;
  void *pvStack_24;
  undefined *puStack_20;
  undefined1 *local_1c;
  undefined *local_18;
  uint local_14;
  undefined4 local_10;
  undefined4 local_8;
  
  puStack_20 = &DAT_00401ce6;
  pvStack_24 = ExceptionList;
  ExceptionList = &pvStack_24;
  __vbaChkstk();
  local_1c = &stack0xffffffd0;
  local_18 = &DAT_00401bf8;
  local_14 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  local_10 = 0;
  local_38 = (int *)0x44eea5;
  piStack_34 = piVar4;
  (**(code **)(*piVar4 + 4))();
  local_8 = 2;
  local_38 = (int *)0x1;
  local_3c = (int *)0x44eebb;
  __vbaOnError();
  local_8 = 3;
  local_38 = (int *)&DAT_004087a0;
  local_3c = (int *)0x44eecd;
  rtcChangeDrive();
  local_8 = 4;
  local_3c = (int *)0x44eee3;
  local_38 = piVar4;
  local_3c = (int *)(**(code **)(*piVar4 + 0x30c))();
  piVar1 = (int *)__vbaObjSet(&local_3c);
  local_3c = piVar4;
  uVar2 = (**(code **)(*piVar4 + 0x308))();
  piVar4 = (int *)__vbaObjSet(&local_38,uVar2);
  iVar3 = (**(code **)(*piVar4 + 0xa8))(piVar4,&stack0xffffffd4);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar4,&DAT_004085c4,0xa8);
  }
  iVar3 = (**(code **)(*piVar1 + 0xac))(piVar1,unaff_ESI);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar1,&DAT_004085d4,0xac);
  }
  __vbaFreeStr();
  __vbaFreeObjList(2,&local_38,&local_3c);
  __vbaExitProc();
  __vbaFreeStr(&LAB_0044f5f5);
  return;
}


// ---- FUN_0044f620 @ 0044f620

void __cdecl FUN_0044f620(uint param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30 [4];
  void *pvStack_20;
  undefined *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  uint local_10;
  undefined4 local_c;
  
  puStack_1c = &DAT_00401ce6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffff24;
  local_14 = &DAT_00401c88;
  local_10 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  local_c = 0;
  ExceptionList = &pvStack_20;
  (**(code **)(*piVar4 + 4))(piVar4);
  local_30[0] = 0;
  local_34 = 0;
  local_38 = 0;
  local_3c = 0;
  local_40 = 0;
  __vbaOnError(1);
  uVar1 = (**(code **)(*piVar4 + 0x30c))(piVar4);
  piVar2 = (int *)__vbaObjSet(&local_3c,uVar1);
  iVar3 = (**(code **)(*piVar2 + 0xa8))(piVar2,&local_34);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_004085d4,0xa8);
  }
  local_34 = 0;
  __vbaVarMove();
  __vbaFreeObj();
  __vbaStrVarCopy(local_30);
  __vbaStrMove();
  uVar1 = (**(code **)(*piVar4 + 0x310))(piVar4);
  piVar2 = (int *)__vbaObjSet(&local_40,uVar1);
  uVar1 = (**(code **)(*piVar4 + 0x30c))(piVar4);
  piVar4 = (int *)__vbaObjSet(&local_3c,uVar1);
  iVar3 = (**(code **)(*piVar4 + 0xa8))(piVar4,&local_34);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar4,&DAT_004085d4,0xa8);
  }
  iVar3 = (**(code **)(*piVar2 + 0xac))(piVar2,local_34);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00408e28,0xac);
  }
  __vbaFreeStr();
  __vbaFreeObjList(2,&local_3c,&local_40);
  __vbaExitProc();
  __vbaFreeVar(&LAB_0044f90c);
  return;
}


// ---- FUN_0044f930 @ 0044f930

void __cdecl FUN_0044f930(uint param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  void *pvStack_20;
  undefined *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  uint local_10;
  undefined4 local_c;
  
  puStack_1c = &DAT_00401ce6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffff38;
  local_14 = &DAT_00401cb0;
  local_10 = param_1 & 1;
  piVar5 = (int *)(param_1 & 0xfffffffe);
  local_c = 0;
  ExceptionList = &pvStack_20;
  (**(code **)(*piVar5 + 4))(piVar5);
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_30 = 0;
  __vbaOnError(1);
  uVar1 = (**(code **)(*piVar5 + 0x308))(piVar5);
  piVar2 = (int *)__vbaObjSet(&local_2c,uVar1);
  iVar3 = (**(code **)(*piVar2 + 0x184))(piVar2);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_004085c4,0x184);
  }
  __vbaFreeObj();
  uVar1 = (**(code **)(*piVar5 + 0x30c))(piVar5);
  piVar2 = (int *)__vbaObjSet(&local_2c,uVar1);
  iVar3 = (**(code **)(*piVar2 + 0x194))(piVar2);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_004085d4,0x194);
  }
  __vbaFreeObj();
  uVar1 = (**(code **)(*piVar5 + 0x310))(piVar5);
  piVar2 = (int *)__vbaObjSet(&local_2c,uVar1);
  iVar3 = (**(code **)(*piVar2 + 0x1dc))(piVar2);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00408e28,0x1dc);
  }
  __vbaFreeObj();
  uVar1 = (**(code **)(*piVar5 + 0x30c))(piVar5);
  piVar2 = (int *)__vbaObjSet(&local_30,uVar1);
  uVar1 = (**(code **)(*piVar5 + 0x308))(piVar5);
  piVar4 = (int *)__vbaObjSet(&local_2c,uVar1);
  iVar3 = (**(code **)(*piVar4 + 0xa8))(piVar4,&local_24);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar4,&DAT_004085c4,0xa8);
  }
  iVar3 = (**(code **)(*piVar2 + 0xac))(piVar2,local_24);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_004085d4,0xac);
  }
  __vbaFreeStr();
  __vbaFreeObjList(2,&local_2c,&local_30);
  uVar1 = (**(code **)(*piVar5 + 0x310))(piVar5);
  piVar2 = (int *)__vbaObjSet(&local_30,uVar1);
  uVar1 = (**(code **)(*piVar5 + 0x30c))(piVar5);
  piVar5 = (int *)__vbaObjSet(&local_2c,uVar1);
  iVar3 = (**(code **)(*piVar5 + 0xa8))(piVar5,&local_24);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar5,&DAT_004085d4,0xa8);
  }
  iVar3 = (**(code **)(*piVar2 + 0xac))(piVar2,local_24);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00408e28,0xac);
  }
  __vbaFreeStr();
  __vbaFreeObjList(2,&local_2c,&local_30);
  __vbaExitProc();
  return;
}


