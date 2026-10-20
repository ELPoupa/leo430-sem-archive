// Decompiled with Ghidra from EPROM.EXE
// Format: Old-style DOS Executable (MZ), image base 0000:0000

// ---- entry @ 1000:0000

/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */
/* WARNING: This function may have set the stack pointer */

void entry(void)

{
  int *piVar1;
  undefined1 *puVar2;
  code *pcVar3;
  code *pcVar4;
  int *piVar5;
  char cVar6;
  undefined1 uVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined2 extraout_DX;
  undefined2 extraout_DX_00;
  int iVar12;
  undefined2 *puVar13;
  int *piVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  uint uVar21;
  byte *pbVar22;
  int *piVar23;
  int *piVar24;
  int iVar25;
  undefined1 *puVar26;
  undefined2 unaff_ES;
  undefined2 uVar27;
  undefined4 uVar28;
  
  puVar13 = (undefined2 *)&DAT_1128_0080;
  uRam000101f8 = 0x1128;
  pcVar4 = (code *)swi(0x21);
  uVar28 = (*pcVar4)();
  uVar27 = s_Turbo_C___Copyright__c__1988_Bor_1128_0004._40_2_;
  iVar10 = DAT_1128_0002;
  iVar11 = (int)((ulong)uVar28 >> 0x10);
  *(undefined2 *)&DAT_1128_0092 = (int)uVar28;
  *(undefined2 *)&DAT_1128_0090 = unaff_ES;
  *(undefined2 *)(char *)&DAT_1128_008c = uVar27;
  *(int *)&DAT_1128_00ac = iVar10;
  *(undefined2 *)&DAT_1128_0096 = 0xffff;
  *(undefined2 *)((int)puVar13 + -2) = 0x2e;
  FUN_1000_0162();
  piVar5 = (int *)*(undefined4 *)&DAT_1128_008a;
  uVar27 = (undefined2)((ulong)piVar5 >> 0x10);
  piVar23 = (int *)piVar5;
  uVar9 = 0x7fff;
  piVar24 = piVar23;
  do {
    if (((*piVar24 == 0x3738) && (iVar12 = piVar24[1], (char)iVar12 == '=')) &&
       (*(int *)&DAT_1128_0096 = *(int *)&DAT_1128_0096 + 1,
       ((byte)((uint)iVar12 >> 8) & 0xdf) == 0x59)) {
      *(int *)&DAT_1128_0096 = *(int *)&DAT_1128_0096 + 1;
    }
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      piVar1 = piVar24;
      piVar24 = (int *)((int)piVar24 + 1);
    } while ((char)piVar5 != (char)*piVar1);
    if (uVar9 == 0) goto LAB_1000_00be;
    piVar23 = (int *)((int)piVar23 + 1);
  } while ((char)*piVar24 != (char)piVar5);
  *(int *)&DAT_1128_008a = -(uVar9 | 0x8000);
  *(uint *)&DAT_1128_008e = (int)piVar23 * 2 + 8U & 0xfff8;
  uVar21 = iVar10 - iVar11;
  uVar9 = *(uint *)&DAT_1128_02c8;
  if (uVar9 < 0x200) {
    uVar9 = 0x200;
    *(undefined2 *)&DAT_1128_02c8 = 0x200;
  }
  if ((uVar9 < 0xf9ca) && (!CARRY2(uVar9 + 0x636,*(uint *)&DAT_1128_02c6))) {
    bVar8 = 4;
    uVar9 = (uVar9 + 0x636 + *(uint *)&DAT_1128_02c6 >> 4) + 1;
    if (uVar9 <= uVar21) {
      if (((*(int *)&DAT_1128_02c8 == 0) || (*(int *)&DAT_1128_02c6 == 0)) &&
         (uVar9 = 0x1000, uVar21 < 0x1001)) {
        uVar9 = uVar21;
      }
      iVar12 = uVar9 + iVar11;
      *(int *)&DAT_1128_00a4 = iVar12;
      *(int *)&DAT_1128_00a8 = iVar12;
      iVar12 = iVar12 - *(int *)&DAT_1128_0090;
      piVar14 = (int *)((int)puVar13 + -2);
      *(uint *)((int)puVar13 + -2) = uVar9;
      pcVar4 = (code *)swi(0x21);
      (*pcVar4)();
      uVar27 = uRam000101f8;
      iVar25 = *piVar14 << (bVar8 & 0x1f);
      puVar26 = (undefined1 *)&DAT_1128_05f0;
      for (iVar10 = 0x46; iVar10 != 0; iVar10 = iVar10 + -1) {
        puVar2 = puVar26;
        puVar26 = puVar26 + 1;
        *puVar2 = 0;
      }
      *(undefined2 *)(iVar25 + -2) = 0x1000;
      pcVar3 = (code *)*(undefined2 *)&DAT_1128_05e2;
      puVar15 = (undefined1 *)(iVar25 + -4);
      *(undefined2 *)(iVar25 + -4) = 0xf8;
      (*pcVar3)();
      puVar16 = puVar15 + -2;
      *(undefined2 *)(puVar15 + -2) = 0xfb;
      FUN_1000_045c();
      *(undefined2 *)(puVar16 + -2) = 0xfe;
      FUN_1000_0547();
      pcVar4 = (code *)swi(0x1a);
      (*pcVar4)();
      *(undefined2 *)&DAT_1128_0098 = extraout_DX_00;
      *(int *)&DAT_1128_009a = iVar10;
      pcVar3 = (code *)*(undefined2 *)&DAT_1128_05e6;
      puVar17 = puVar16 + -2;
      *(undefined2 *)(puVar16 + -2) = 0x10e;
      (*pcVar3)();
      *(undefined2 *)(puVar17 + -2) = *(undefined2 *)&DAT_1128_0088;
      *(undefined2 *)(puVar17 + -4) = *(undefined2 *)&DAT_1128_0086;
      *(undefined2 *)(puVar17 + -6) = *(undefined2 *)&DAT_1128_0084;
      *(undefined2 *)(puVar17 + -8) = 0x11d;
      uVar27 = FUN_1000_01fa();
      *(undefined2 *)(puVar17 + -8) = uVar27;
      *(undefined2 *)(puVar17 + -10) = 0x121;
      FUN_1000_0427();
      uVar27 = uRam000101f8;
      *(undefined2 *)(puVar17 + -10) = 0x129;
      FUN_1000_01a5();
      *(undefined2 *)(puVar17 + -10) = 0x1000;
      pcVar3 = (code *)*(undefined2 *)0x5e4;
      puVar18 = puVar17 + -0xc;
      *(undefined2 *)(puVar17 + -0xc) = 0x12e;
      (*pcVar3)();
      iVar10 = 0;
      pbVar22 = (byte *)0x0;
      iVar11 = 0x2f;
      do {
        iVar10 = CONCAT11((char)((uint)iVar10 >> 8) + CARRY1((byte)iVar10,*pbVar22),
                          (byte)iVar10 + *pbVar22);
        pbVar22 = pbVar22 + 1;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
      if (iVar10 != 0xd37) {
        *(undefined2 *)(puVar18 + -2) = 0x14f;
        FUN_1000_01da();
      }
      pcVar4 = (code *)swi(0x21);
      puVar19 = puVar18;
      (*pcVar4)();
      uVar27 = uRam000101f8;
      *(undefined2 *)(puVar19 + -2) = 0x1f1;
      FUN_1000_01da();
      *(undefined2 *)(puVar19 + -2) = 3;
      puVar20 = puVar19 + -4;
      *(undefined2 *)(puVar19 + -4) = 0x1f8;
      cVar6 = FUN_1000_0121();
      pbVar22[iVar12] = pbVar22[iVar12] + cVar6;
      *(undefined1 **)(puVar20 + -2) = puVar18;
      *(byte **)(puVar20 + -0x1e) = pbVar22;
      *(undefined1 **)(puVar20 + -0x20) = puVar26;
      iVar10 = *(int *)(puVar20 + 4);
      *(undefined2 *)(puVar20 + -0x22) = 0x194;
      *(undefined2 *)(puVar20 + -0x24) = 0x1ac;
      *(undefined2 *)(puVar20 + -0x26) = 0x210;
      FUN_1000_0add();
      if (*(int *)(puVar20 + 2) != 2) {
        *(undefined2 *)(puVar20 + -0x22) = 0x1b0;
        *(undefined2 *)(puVar20 + -0x24) = 0x220;
        FUN_1000_0add();
        *(undefined2 *)(puVar20 + -0x22) = 1;
        *(undefined2 *)(puVar20 + -0x24) = 0x227;
        FUN_1000_0427();
      }
      iVar11 = 0;
      while( true ) {
        *(undefined2 *)(puVar20 + -0x22) = *(undefined2 *)(iVar10 + 2);
        *(undefined2 *)(puVar20 + -0x24) = 0x243;
        iVar12 = FUN_1000_09f0();
        if (iVar12 <= iVar11) break;
        *(int *)(puVar20 + -0x22) = (int)*(char *)(*(int *)(iVar10 + 2) + iVar11);
        *(undefined2 *)(puVar20 + -0x24) = 0x237;
        uVar7 = FUN_1000_1247();
        puVar20[iVar11 + -0x18] = uVar7;
        iVar11 = iVar11 + 1;
      }
      puVar20[iVar11 + -0x18] = 0;
      *(undefined2 *)(puVar20 + -0x1a) = 0x6050;
      *(undefined2 *)(puVar20 + -0x1c) = 0;
      *(undefined2 *)(puVar20 + -4) = 0;
      *(undefined2 *)(puVar20 + -0x22) = 0x1ce;
      *(undefined1 **)(puVar20 + -0x24) = puVar20 + -0x18;
      *(undefined2 *)(puVar20 + -0x26) = 0x267;
      iVar10 = FUN_1000_0a0d();
      if (iVar10 == 0) {
        *(undefined2 *)(puVar20 + -0x22) = *(undefined2 *)(puVar20 + -4);
        *(undefined2 *)(puVar20 + -0x24) = *(undefined2 *)(puVar20 + -0x1a);
        *(undefined2 *)(puVar20 + -0x26) = *(undefined2 *)(puVar20 + -0x1c);
        *(undefined2 *)(puVar20 + -0x28) = 0x27a;
        FUN_1000_02c9();
        *(undefined2 *)(puVar20 + -0x22) = 0x1d2;
        *(undefined2 *)(puVar20 + -0x24) = 0x284;
        FUN_1000_0add();
      }
      else {
        *(undefined2 *)(puVar20 + -0x22) = 0x202;
        *(undefined1 **)(puVar20 + -0x24) = puVar20 + -0x18;
        *(undefined2 *)(puVar20 + -0x26) = 0x293;
        iVar10 = FUN_1000_0a0d();
        if (iVar10 == 0) {
          *(undefined1 **)(puVar20 + -0x22) = puVar20 + -4;
          *(undefined2 *)(puVar20 + -0x24) = *(undefined2 *)(puVar20 + -0x1a);
          *(undefined2 *)(puVar20 + -0x26) = *(undefined2 *)(puVar20 + -0x1c);
          *(undefined2 *)(puVar20 + -0x28) = 0x2a7;
          FUN_1000_032c();
          *(undefined2 *)(puVar20 + -0x22) = 0x205;
          *(undefined2 *)(puVar20 + -0x24) = 0x2b1;
          FUN_1000_0add();
        }
        else {
          *(undefined2 *)(puVar20 + -0x22) = 0x234;
          *(undefined2 *)(puVar20 + -0x24) = 700;
          FUN_1000_0add();
          *(undefined2 *)(puVar20 + -0x22) = 1;
          *(undefined2 *)(puVar20 + -0x24) = 0x2c3;
          FUN_1000_0427();
        }
      }
      return;
    }
  }
LAB_1000_00be:
  FUN_1000_01e2();
  return;
}


// ---- FUN_1000_0121 @ 1000:0121

void FUN_1000_0121(undefined1 *param_1,undefined2 param_2,int param_3,int param_4)

{
  code *pcVar1;
  undefined2 uVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  int in_BX;
  byte *pbVar7;
  undefined2 unaff_SS;
  undefined1 auStack_14 [16];
  undefined2 uStack_4;
  undefined2 uStack_2;
  
  uVar2 = uRam000101f8;
  uStack_2 = 0x129;
  FUN_1000_01a5();
  uStack_2 = 0x1000;
  uStack_4 = 0x12e;
  (*(code *)*(undefined2 *)0x5e4)();
  iVar5 = 0;
  pbVar7 = (byte *)0x0;
  iVar6 = 0x2f;
  do {
    iVar5 = CONCAT11((char)((uint)iVar5 >> 8) + CARRY1((byte)iVar5,*pbVar7),(byte)iVar5 + *pbVar7);
    pbVar7 = pbVar7 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  if (iVar5 != 0xd37) {
    uStack_2 = 0x14f;
    FUN_1000_01da();
  }
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  uVar2 = uRam000101f8;
  param_1 = (undefined1 *)0x1f1;
  FUN_1000_01da();
  param_1 = (undefined1 *)0x3;
  cVar3 = FUN_1000_0121();
  pbVar7[in_BX] = pbVar7[in_BX] + cVar3;
  param_1 = (undefined1 *)register0x00000010;
  FUN_1000_0add(0x1ac,0x194);
  if (param_3 != 2) {
    FUN_1000_0add(0x1b0);
    FUN_1000_0427(1);
  }
  iVar5 = 0;
  while( true ) {
    iVar6 = FUN_1000_09f0(*(undefined2 *)(param_4 + 2));
    if (iVar6 <= iVar5) break;
    uVar4 = FUN_1000_1247((int)*(char *)(*(int *)(param_4 + 2) + iVar5));
    auStack_14[iVar5] = uVar4;
    iVar5 = iVar5 + 1;
  }
  auStack_14[iVar5] = 0;
  iVar5 = FUN_1000_0a0d(auStack_14,0x1ce);
  if (iVar5 == 0) {
    FUN_1000_02c9(0,0x6050,0);
    FUN_1000_0add(0x1d2);
  }
  else {
    iVar5 = FUN_1000_0a0d(auStack_14,0x202);
    if (iVar5 == 0) {
      FUN_1000_032c(0,0x6050,&stack0x0000);
      FUN_1000_0add(0x205);
    }
    else {
      FUN_1000_0add(0x234);
      FUN_1000_0427(1);
    }
  }
  return;
}


// ---- FUN_1000_0162 @ 1000:0162

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_1000_0162(void)

{
  code *pcVar1;
  undefined2 in_BX;
  undefined2 unaff_ES;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  unique0x10000025 = in_BX;
  DAT_1128_0076 = unaff_ES;
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  DAT_1128_0078 = in_BX;
  DAT_1128_007a = unaff_ES;
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  DAT_1128_007c = in_BX;
  DAT_1128_007e = unaff_ES;
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  DAT_1128_0080 = in_BX;
  DAT_1128_0082 = unaff_ES;
  (*pcVar1)();
  return;
}


// ---- FUN_1000_01a5 @ 1000:01a5

void __cdecl16near FUN_1000_01a5(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return;
}


// ---- FUN_1000_01d2 @ 1000:01d2

void __cdecl16far FUN_1000_01d2(void)

{
  DAT_1128_0096 = 0;
  return;
}


// ---- FUN_1000_01d9 @ 1000:01d9

void __cdecl16near FUN_1000_01d9(void)

{
  return;
}


// ---- FUN_1000_01da @ 1000:01da

void __cdecl16near FUN_1000_01da(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return;
}


// ---- FUN_1000_01e2 @ 1000:01e2

void FUN_1000_01e2(int param_1,int param_2)

{
  undefined2 uVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  int in_BX;
  int unaff_SI;
  int iVar5;
  undefined2 unaff_SS;
  undefined1 auStack_18 [20];
  undefined2 uStack_4;
  
  uVar1 = uRam000101f8;
  FUN_1000_01da();
  uStack_4 = 0x1f8;
  cVar2 = FUN_1000_0121();
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  FUN_1000_0add(0x1ac,0x194);
  if (param_1 != 2) {
    FUN_1000_0add(0x1b0);
    FUN_1000_0427(1);
  }
  iVar5 = 0;
  while( true ) {
    iVar4 = FUN_1000_09f0(*(undefined2 *)(param_2 + 2));
    if (iVar4 <= iVar5) break;
    uVar3 = FUN_1000_1247((int)*(char *)(*(int *)(param_2 + 2) + iVar5));
    auStack_18[iVar5] = uVar3;
    iVar5 = iVar5 + 1;
  }
  auStack_18[iVar5] = 0;
  uStack_4 = 0;
  iVar5 = FUN_1000_0a0d(auStack_18,0x1ce);
  if (iVar5 == 0) {
    FUN_1000_02c9(0,0x6050,uStack_4);
    FUN_1000_0add(0x1d2);
  }
  else {
    iVar5 = FUN_1000_0a0d(auStack_18,0x202);
    if (iVar5 == 0) {
      FUN_1000_032c(0,0x6050,&uStack_4);
      FUN_1000_0add(0x205);
    }
    else {
      FUN_1000_0add(0x234);
      FUN_1000_0427(1);
    }
  }
  return;
}


// ---- FUN_1000_01fa @ 1000:01fa

void __cdecl16near FUN_1000_01fa(int param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined2 unaff_SS;
  undefined1 local_18 [20];
  undefined2 local_4;
  
  FUN_1000_0add(0x1ac,0x194);
  if (param_1 != 2) {
    FUN_1000_0add(0x1b0);
    FUN_1000_0427(1);
  }
  iVar3 = 0;
  while( true ) {
    iVar2 = FUN_1000_09f0(*(undefined2 *)(param_2 + 2));
    if (iVar2 <= iVar3) break;
    uVar1 = FUN_1000_1247((int)*(char *)(*(int *)(param_2 + 2) + iVar3));
    local_18[iVar3] = uVar1;
    iVar3 = iVar3 + 1;
  }
  local_18[iVar3] = 0;
  local_4 = 0;
  iVar3 = FUN_1000_0a0d(local_18,0x1ce);
  if (iVar3 == 0) {
    FUN_1000_02c9(0,0x6050,local_4);
    FUN_1000_0add(0x1d2);
  }
  else {
    iVar3 = FUN_1000_0a0d(local_18,0x202);
    if (iVar3 == 0) {
      FUN_1000_032c(0,0x6050,&local_4);
      FUN_1000_0add(0x205);
    }
    else {
      FUN_1000_0add(0x234);
      FUN_1000_0427(1);
    }
  }
  return;
}


// ---- FUN_1000_02c9 @ 1000:02c9

void __cdecl16near FUN_1000_02c9(undefined2 param_1,byte param_2,undefined2 param_3)

{
  undefined1 uVar1;
  uint uVar2;
  
  uVar1 = FUN_1000_1228();
  out(0xa301,uVar1);
  out(0xa300,param_2 & 0xfc);
  uVar2 = FUN_1000_1228(uVar1,param_2 & 0xfc);
  *(undefined2 *)(uVar2 & 0x7fff) = param_3;
  return;
}


// ---- FUN_1000_032c @ 1000:032c

void __cdecl16near FUN_1000_032c(undefined2 param_1,byte param_2,undefined2 *param_3)

{
  undefined1 uVar1;
  uint uVar2;
  
  uVar1 = FUN_1000_1228();
  out(0xa301,uVar1);
  out(0xa300,param_2 & 0xfc);
  uVar2 = FUN_1000_1228(uVar1,param_2 & 0xfc);
  *param_3 = *(undefined2 *)(uVar2 & 0x7fff);
  return;
}


// ---- FUN_1000_038d @ 1000:038d

void __cdecl16near FUN_1000_038d(undefined2 *param_1,undefined2 param_2,byte param_3,int param_4)

{
  undefined1 uVar1;
  undefined2 *puVar2;
  int iVar3;
  
  uVar1 = FUN_1000_1228();
  out(0xa301,uVar1);
  out(0xa300,param_3 & 0xfc);
  puVar2 = (undefined2 *)FUN_1000_1228();
  for (iVar3 = 0; iVar3 < param_4; iVar3 = iVar3 + 1) {
    *puVar2 = *param_1;
    puVar2 = puVar2 + 1;
  }
  return;
}


// ---- FUN_1000_03eb @ 1000:03eb

undefined2 FUN_1000_03eb(uint param_1)

{
  if ((int)param_1 < 0) {
    if (-param_1 < 0x23 || param_1 == 0xffdd) {
      DAT_1128_0094 = -param_1;
      DAT_1128_0264 = 0xffff;
      return 0xffff;
    }
  }
  else if (param_1 < 0x59) goto LAB_1000_03fe;
  param_1 = 0x57;
LAB_1000_03fe:
  DAT_1128_0264 = param_1;
  DAT_1128_0094 = (int)*(char *)(param_1 + 0x266);
  return 0xffff;
}


// ---- FUN_1000_0426 @ 1000:0426

void __cdecl16near FUN_1000_0426(void)

{
  return;
}


// ---- FUN_1000_0427 @ 1000:0427

void __cdecl16near FUN_1000_0427(void)

{
  int iVar1;
  
  while (iVar1 = DAT_1128_02ca + -1, DAT_1128_02ca != 0) {
    DAT_1128_02ca = iVar1;
    (*(code *)*(undefined2 *)(iVar1 * 2 + 0x5f0))();
  }
  DAT_1128_02ca = iVar1;
  (*DAT_1128_02c0)();
  (*DAT_1128_02c2)();
  (*DAT_1128_02c4)();
  FUN_1000_0121();
  return;
}


// ---- FUN_1000_045c @ 1000:045c

/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_1000_045c(void)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  byte bVar4;
  undefined1 *puVar5;
  uint uVar6;
  int iVar7;
  int extraout_DX;
  int extraout_DX_00;
  int *piVar8;
  char *pcVar9;
  char *pcVar10;
  undefined2 uVar11;
  undefined2 unaff_SS;
  bool bVar12;
  undefined1 uVar13;
  code *in_stack_00000000;
  uint auStack_4 [2];
  
  DAT_1000_0458 = 0x1128;
  pcVar9 = (char *)(DAT_1128_008a + 2);
  uVar6 = 1;
  uVar11 = DAT_1128_0090;
  DAT_1000_0456 = in_stack_00000000;
  if (2 < DAT_1128_0092) {
    uVar6 = 0x7f;
    pcVar10 = pcVar9;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar1 = pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (*pcVar1 != '\0');
    if (uVar6 == 0) goto LAB_1000_050d;
    uVar6 = uVar6 ^ 0x7f;
    uVar11 = DAT_1128_008c;
  }
  puVar5 = (undefined1 *)(*(byte *)&DAT_1128_0080 + 2 + uVar6 & 0xfffe);
  iVar3 = -(int)puVar5;
  pcVar10 = &stack0x0000 + iVar3;
  if (puVar5 <= &stack0x0000) {
    *(uint *)((int)auStack_4 + iVar3 + 2) = uVar6;
    while (uVar6 - 1 != 0) {
      pcVar2 = pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar1 = pcVar9;
      pcVar9 = pcVar9 + 1;
      *pcVar2 = *pcVar1;
      uVar6 = uVar6 - 1;
    }
    bVar12 = false;
    *pcVar10 = '\0';
    uVar13 = uVar6 == 0;
LAB_1000_04c9:
    *(undefined2 *)((int)auStack_4 + iVar3) = 0x4cc;
    bVar4 = FUN_1000_04e5();
    iVar7 = extraout_DX;
    if (bVar12 || (bool)uVar13) {
      do {
        uVar11 = DAT_1000_0458;
        if (bVar12) {
          iVar7 = *(int *)((int)auStack_4 + iVar3 + 2) + iVar7;
          *(uint *)&DAT_1128_0084 = uVar6;
          piVar8 = (int *)(&stack0x0000 + (uVar6 + 1) * -2);
          if (&stack0x0000 < (undefined1 *)((uVar6 + 1) * 2)) goto LAB_1000_050d;
          *(undefined2 *)&DAT_1128_0086 = piVar8;
          goto LAB_1000_052d;
        }
        *(undefined2 *)((int)auStack_4 + iVar3) = 0x4d3;
        bVar4 = FUN_1000_04e5();
        iVar7 = extraout_DX_00;
      } while (!bVar12 && !(bool)uVar13);
    }
    if ((bVar4 != 0x20) && (bVar4 != 0xd)) goto code_r0x000104dd;
    goto LAB_1000_04e1;
  }
LAB_1000_050d:
  FUN_1000_01e2();
  return;
code_r0x000104dd:
  bVar12 = bVar4 < 9;
  uVar13 = false;
  if (bVar4 == 9) {
LAB_1000_04e1:
    bVar12 = false;
    uVar13 = true;
  }
  goto LAB_1000_04c9;
  while( true ) {
    *piVar8 = (int)register0x00000010;
    piVar8 = piVar8 + 1;
    do {
      pcVar1 = (char *)register0x00000010;
      register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + 1);
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0 && *pcVar1 != '\0');
    if (*pcVar1 != '\0') break;
LAB_1000_052d:
    if (iVar7 == 0) break;
  }
  *piVar8 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010542. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_1000_0456)();
  return;
}


// ---- FUN_1000_04e5 @ 1000:04e5

int __cdecl16near FUN_1000_04e5(void)

{
  char cVar1;
  undefined1 uVar2;
  int in_AX;
  int iVar3;
  int in_CX;
  char *unaff_SI;
  undefined1 *unaff_DI;
  undefined2 unaff_ES;
  
  uVar2 = (undefined1)in_AX;
  if (in_AX != 0) {
    *unaff_DI = uVar2;
  }
  iVar3 = in_AX << 8;
  if (in_CX != 0) {
    cVar1 = *unaff_SI;
    iVar3 = CONCAT11(uVar2,cVar1 + -0x22);
    if ((((char)(cVar1 + -0x22) != '\0') && (iVar3 = CONCAT11(uVar2,cVar1), cVar1 == '\\')) &&
       (unaff_SI[1] == '\"')) {
      iVar3 = CONCAT11(uVar2,unaff_SI[1]);
    }
  }
  return iVar3;
}


// ---- FUN_1000_0547 @ 1000:0547

void __cdecl16near FUN_1000_0547(void)

{
  char *pcVar1;
  char *pcVar2;
  undefined2 uVar3;
  char *pcVar4;
  undefined2 *puVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  
  iVar6 = DAT_1128_008a;
  pcVar4 = (char *)FUN_1000_0696();
  uVar3 = DAT_1128_008c;
  if (pcVar4 != (char *)0x0) {
    pcVar7 = (char *)0x0;
    pcVar8 = pcVar4;
    for (; iVar6 != 0; iVar6 = iVar6 + -1) {
      pcVar2 = pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar1 = pcVar7;
      pcVar7 = pcVar7 + 1;
      *pcVar2 = *pcVar1;
    }
    puVar5 = (undefined2 *)FUN_1000_0696(DAT_1128_008e);
    DAT_1128_0088 = puVar5;
    if (puVar5 != (undefined2 *)0x0) {
      iVar6 = -1;
      do {
        *puVar5 = pcVar4;
        puVar5 = puVar5 + 1;
        do {
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar1 = pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (*pcVar1 != '\0');
        if (*pcVar4 == '\0') {
          *puVar5 = 0;
          return;
        }
      } while( true );
    }
  }
  FUN_1000_01e2();
  return;
}


// ---- FUN_1000_0591 @ 1000:0591

bool __cdecl16near FUN_1000_0591(undefined2 param_1)

{
  bool bVar1;
  
  bVar1 = DAT_1128_02ca != 0x20;
  if (bVar1) {
    *(undefined2 *)(DAT_1128_02ca * 2 + 0x5f0) = param_1;
    DAT_1128_02ca = DAT_1128_02ca + 1;
  }
  return !bVar1;
}


// ---- FUN_1000_05b7 @ 1000:05b7

void __cdecl16near FUN_1000_05b7(int param_1)

{
  int iVar1;
  
  DAT_1128_0632 = *(int *)(param_1 + 6);
  if (DAT_1128_0632 == param_1) {
    DAT_1128_0632 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 4);
    *(int *)(DAT_1128_0632 + 4) = iVar1;
    *(int *)(iVar1 + 6) = DAT_1128_0632;
  }
  return;
}


// ---- FUN_1000_05e5 @ 1000:05e5

int * __cdecl16near FUN_1000_05e5(int *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
  *param_1 = *param_1 - param_2;
  piVar2 = (int *)(*param_1 + (int)param_1);
  *piVar2 = param_2 + 1;
  piVar2[1] = (int)param_1;
  piVar1 = piVar2;
  if (DAT_1128_0630 != param_1) {
    *(undefined2 *)((int)piVar2 + param_2 + 2) = piVar2;
    piVar1 = DAT_1128_0630;
  }
  DAT_1128_0630 = piVar1;
  return piVar2 + 2;
}


// ---- FUN_1000_061f @ 1000:061f

int * __cdecl16near FUN_1000_061f(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)FUN_1000_072d(param_1,0);
  if (piVar1 == (int *)0xffff) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar1[1] = (int)DAT_1128_0630;
    *piVar1 = param_1 + 1;
    piVar2 = piVar1 + 2;
    DAT_1128_0630 = piVar1;
  }
  return piVar2;
}


// ---- FUN_1000_065c @ 1000:065c

int * __cdecl16near FUN_1000_065c(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_1000_072d(param_1,0);
  if (piVar1 == (int *)0xffff) {
    piVar1 = (int *)0x0;
  }
  else {
    DAT_1128_0630 = piVar1;
    DAT_1128_0634 = piVar1;
    *piVar1 = param_1 + 1;
    piVar1 = piVar1 + 2;
  }
  return piVar1;
}


// ---- FUN_1000_0696 @ 1000:0696

uint * __cdecl16near FUN_1000_0696(uint param_1)

{
  uint *puVar1;
  uint uVar2;
  
  if ((param_1 == 0) || (0xfff4 < param_1)) {
    puVar1 = (uint *)0x0;
  }
  else {
    uVar2 = param_1 + 0xb & 0xfff8;
    if (DAT_1128_0634 == 0) {
      puVar1 = (uint *)FUN_1000_065c(uVar2);
    }
    else {
      puVar1 = DAT_1128_0632;
      if (DAT_1128_0632 != (uint *)0x0) {
        do {
          if (uVar2 + 0x28 <= *puVar1) {
            puVar1 = (uint *)FUN_1000_05e5(puVar1,uVar2);
            return puVar1;
          }
          if (uVar2 <= *puVar1) {
            FUN_1000_05b7(puVar1);
            *puVar1 = *puVar1 + 1;
            return puVar1 + 2;
          }
          puVar1 = (uint *)puVar1[3];
        } while (puVar1 != DAT_1128_0632);
      }
      puVar1 = (uint *)FUN_1000_061f(uVar2);
    }
  }
  return puVar1;
}


// ---- FUN_1000_0709 @ 1000:0709

undefined2 __cdecl16near FUN_1000_0709(undefined1 *param_1)

{
  undefined2 uVar1;
  undefined1 auStack_102 [256];
  
  if (param_1 < auStack_102) {
    DAT_1128_009e = param_1;
    uVar1 = 0;
  }
  else {
    DAT_1128_0094 = 8;
    uVar1 = 0xffff;
  }
  return uVar1;
}


// ---- FUN_1000_072d @ 1000:072d

uint __cdecl16near FUN_1000_072d(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1 + DAT_1128_009e;
  if ((param_2 + (uint)CARRY2(param_1,DAT_1128_009e) + (uint)(0xfeff < uVar1) == 0) &&
     ((undefined1 *)(uVar1 + 0x100) < &stack0xfffe)) {
    LOCK();
    UNLOCK();
    uVar2 = DAT_1128_009e;
    DAT_1128_009e = uVar1;
  }
  else {
    DAT_1128_0094 = 8;
    uVar2 = 0xffff;
  }
  return uVar2;
}


// ---- FUN_1000_0761 @ 1000:0761

void __cdecl16near FUN_1000_0761(undefined2 param_1)

{
  FUN_1000_0709(param_1);
  return;
}


// ---- FUN_1000_076f @ 1000:076f

void __cdecl16near FUN_1000_076f(int param_1)

{
  FUN_1000_072d(param_1,param_1 >> 0xf);
  return;
}


// ---- FUN_1000_0781 @ 1000:0781

/* WARNING: Removing unreachable block (ram,0x0001082b) */
/* WARNING: Removing unreachable block (ram,0x00010879) */

int __cdecl16near FUN_1000_0781(int param_1,char *param_2,int param_3)

{
  uint *puVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int local_8a;
  char *local_86;
  char local_84 [130];
  
  if (param_3 + 1U < 2) {
    param_3 = 0;
  }
  else if ((*(uint *)(param_1 * 2 + 0x50e) & 0x8000) == 0) {
    puVar1 = (uint *)(param_1 * 2 + 0x50e);
    *puVar1 = *puVar1 & 0xfdff;
    local_86 = param_2;
    local_8a = param_3;
    pcVar5 = local_84;
    while (local_8a != 0) {
      local_8a = local_8a + -1;
      pcVar2 = local_86 + 1;
      cVar3 = *local_86;
      if (cVar3 == '\n') {
        *pcVar5 = '\r';
        pcVar5 = pcVar5 + 1;
      }
      *pcVar5 = cVar3;
      pcVar5 = pcVar5 + 1;
      local_86 = pcVar2;
      if (0x7f < (int)pcVar5 - (int)local_84) {
        iVar6 = (int)pcVar5 - (int)local_84;
        iVar4 = FUN_1000_0894(param_1,local_84,iVar6);
        if (iVar4 != iVar6) {
          return ((param_3 - local_8a) + iVar4) - iVar6;
        }
        pcVar5 = local_84;
      }
    }
    iVar4 = (int)pcVar5 - (int)local_84;
    if ((iVar4 != 0) && (iVar6 = FUN_1000_0894(param_1,local_84,iVar4), iVar6 != iVar4)) {
      param_3 = (param_3 + iVar6) - iVar4;
    }
  }
  else {
    param_3 = FUN_1000_0894(param_1,param_2,param_3);
  }
  return param_3;
}


// ---- FUN_1000_0894 @ 1000:0894

undefined2 __cdecl16near FUN_1000_0894(int param_1)

{
  uint *puVar1;
  code *pcVar2;
  undefined2 uVar3;
  undefined1 uVar4;
  
  uVar4 = 0;
  if ((*(uint *)(param_1 * 2 + 0x50e) & 0x800) != 0) {
    uVar4 = 0;
    FUN_1000_08da(param_1,0,0,2);
  }
  pcVar2 = (code *)swi(0x21);
  uVar3 = (*pcVar2)();
  if ((bool)uVar4) {
    uVar3 = FUN_1000_03eb();
  }
  else {
    puVar1 = (uint *)(param_1 * 2 + 0x50e);
    *puVar1 = *puVar1 | 0x1000;
  }
  return uVar3;
}


// ---- FUN_1000_08da @ 1000:08da

void __cdecl16near FUN_1000_08da(int param_1)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  
  puVar1 = (uint *)(param_1 * 2 + 0x50e);
  bVar3 = false;
  *puVar1 = *puVar1 & 0xfdff;
  pcVar2 = (code *)swi(0x21);
  (*pcVar2)();
  if (bVar3) {
    FUN_1000_03eb();
  }
  return;
}


// ---- FUN_1000_0905 @ 1000:0905

char * FUN_1000_0905(char param_1,char param_2,uint param_3,char *param_4,uint param_5,uint param_6)

{
  char *pcVar1;
  byte bVar2;
  ulong uVar3;
  char cVar4;
  int iVar5;
  byte *pbVar6;
  char *pcVar7;
  bool bVar8;
  byte local_24 [34];
  
  pcVar7 = param_4;
  if ((param_3 < 0x25) && (1 < (byte)param_3)) {
    if (((int)param_6 < 0) && (param_2 != '\0')) {
      *param_4 = '-';
      pcVar7 = param_4 + 1;
      bVar8 = param_5 != 0;
      param_5 = -param_5;
      param_6 = -(uint)bVar8 - param_6;
    }
    pbVar6 = local_24;
    if (param_6 == 0) goto LAB_1000_094f;
    do {
      uVar3 = (ulong)param_6;
      param_6 = param_6 / param_3;
      uVar3 = uVar3 % (ulong)param_3 << 0x10 | (ulong)param_5;
      param_5 = (uint)(uVar3 / param_3);
      *pbVar6 = (byte)(uVar3 % (ulong)param_3);
      pbVar6 = pbVar6 + 1;
    } while (param_6 != 0);
    while (param_5 != 0) {
LAB_1000_094f:
      *pbVar6 = (byte)(param_5 % param_3);
      pbVar6 = pbVar6 + 1;
      param_5 = param_5 / param_3;
    }
    iVar5 = (int)pbVar6 - (int)local_24;
    do {
      pbVar6 = pbVar6 + -1;
      bVar2 = *pbVar6;
      if (bVar2 < 10) {
        cVar4 = bVar2 + 0x30;
      }
      else {
        cVar4 = (bVar2 - 10) + param_1;
      }
      pcVar1 = pcVar7;
      pcVar7 = pcVar7 + 1;
      *pcVar1 = cVar4;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  *pcVar7 = '\0';
  return param_4;
}


// ---- FUN_1000_0984 @ 1000:0984

void __cdecl16near FUN_1000_0984(int param_1,undefined2 param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == 10) {
    iVar1 = param_1 >> 0xf;
  }
  else {
    iVar1 = 0;
  }
  FUN_1000_0905(0x61,1,param_3,param_2,param_1,iVar1);
  return;
}


// ---- FUN_1000_09ad @ 1000:09ad

void __cdecl16near
FUN_1000_09ad(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  uint in_AX;
  
  FUN_1000_0905(0x61,in_AX & 0xff00,param_4,param_3,param_1,param_2);
  return;
}


// ---- FUN_1000_09c9 @ 1000:09c9

void __cdecl16near
FUN_1000_09c9(undefined2 param_1,undefined2 param_2,undefined2 param_3,int param_4)

{
  FUN_1000_0905(0x61,param_4 == 10,param_4,param_3,param_1,param_2);
  return;
}


// ---- FUN_1000_09f0 @ 1000:09f0

int __cdecl16near FUN_1000_09f0(char *param_1)

{
  char *pcVar1;
  uint uVar2;
  
  uVar2 = 0xffff;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar1 = param_1;
    param_1 = param_1 + 1;
  } while (*pcVar1 != '\0');
  return ~uVar2 - 1;
}


// ---- FUN_1000_0a0d @ 1000:0a0d

int __cdecl16near FUN_1000_0a0d(char *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  
  uVar3 = 0xffff;
  pcVar4 = param_2;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar1 = pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar1 != '\0');
  uVar3 = ~uVar3;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar2 = param_2;
    param_2 = param_2 + 1;
    pcVar1 = param_1;
    param_1 = param_1 + 1;
  } while (*pcVar1 == *pcVar2);
  return (uint)(byte)param_1[-1] - (uint)(byte)param_2[-1];
}


// ---- FUN_1000_0a3e @ 1000:0a3e

void FUN_1000_0a3e(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  FUN_1000_01e2();
  return;
}


// ---- FUN_1000_0a5f @ 1000:0a5f

undefined2 __cdecl16near FUN_1000_0a5f(int *param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  
  if ((int *)param_1[7] == param_1) {
    if (*param_1 < 0) {
      iVar3 = param_1[3] + *param_1 + 1;
      *param_1 = *param_1 - iVar3;
      iVar2 = param_1[4];
      param_1[5] = iVar2;
      iVar2 = FUN_1000_0781((int)(char)param_1[2],iVar2,iVar3);
      if ((iVar2 == iVar3) || ((param_1[1] & 0x200U) != 0)) {
        uVar1 = 0;
      }
      else {
        param_1[1] = param_1[1] | 0x10;
        uVar1 = 0xffff;
      }
    }
    else {
      if ((((param_1[1] & 8U) != 0) || (param_1[5] == (int)param_1 + 5)) &&
         (*param_1 = 0, param_1[5] == (int)param_1 + 5)) {
        param_1[5] = param_1[4];
      }
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0xffff;
  }
  return uVar1;
}


// ---- FUN_1000_0add @ 1000:0add

void __cdecl16near FUN_1000_0add(undefined2 param_1)

{
  FUN_1000_0d05(&stack0x0004,param_1,0x3de,0xc13);
  return;
}


// ---- FUN_1000_0af6 @ 1000:0af6

void __cdecl16near FUN_1000_0af6(char param_1,int *param_2)

{
  *param_2 = *param_2 + -1;
  FUN_1000_0b0f((int)param_1,param_2);
  return;
}


// ---- FUN_1000_0b0f @ 1000:0b0f

uint __cdecl16near FUN_1000_0b0f(byte param_1,int *param_2)

{
  int *piVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = param_2;
  bVar2 = param_1;
  while( true ) {
    piVar1 = piVar3;
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + 1;
    if (SCARRY2(iVar4,1) != *piVar1 < 0) {
      piVar3[5] = piVar3[5] + 1;
      *(byte *)(piVar3[5] + -1) = bVar2;
      if (((piVar3[1] & 8U) != 0) &&
         (((bVar2 == 10 || (bVar2 == 0xd)) && (iVar4 = FUN_1000_0a5f(piVar3), iVar4 != 0)))) {
        return 0xffff;
      }
      return (uint)bVar2;
    }
    *piVar3 = *piVar3 + -1;
    if (((piVar3[1] & 0x90U) != 0) || ((piVar3[1] & 2U) == 0)) {
      piVar3[1] = piVar3[1] | 0x10;
      return 0xffff;
    }
    piVar3[1] = piVar3[1] | 0x100;
    if (piVar3[3] == 0) break;
    if (*piVar3 == 0) {
      *piVar3 = -1 - piVar3[3];
    }
    else {
      iVar4 = FUN_1000_0a5f(piVar3);
      if (iVar4 != 0) {
        return 0xffff;
      }
    }
  }
  if (((((bVar2 == 10) && ((piVar3[1] & 0x40U) == 0)) &&
       (iVar4 = FUN_1000_0894((int)(char)piVar3[2],0x568,1), iVar4 != 1)) ||
      (iVar4 = FUN_1000_0894((int)(char)piVar3[2],&param_1,1), iVar4 != 1)) &&
     ((piVar3[1] & 0x200U) == 0)) {
    piVar3[1] = piVar3[1] | 0x10;
    return 0xffff;
  }
  return (uint)bVar2;
}


// ---- FUN_1000_0bfd @ 1000:0bfd

void __cdecl16near FUN_1000_0bfd(undefined2 param_1)

{
  FUN_1000_0b0f(param_1,0x3de);
  return;
}


// ---- FUN_1000_0c13 @ 1000:0c13

uint FUN_1000_0c13(int *param_1,uint param_2,byte *param_3)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = param_2;
  if ((param_1[1] & 8U) == 0) {
    if ((((param_1[1] & 0x40U) == 0) || (param_1[3] == 0)) || (param_2 <= (uint)param_1[3])) {
      do {
        if (uVar4 == 0) {
          return param_2;
        }
        piVar1 = param_1;
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + 1;
        if (SCARRY2(iVar3,1) == *piVar1 < 0) {
          uVar5 = FUN_1000_0af6(*(undefined2 *)param_3,param_1);
        }
        else {
          bVar2 = *param_3;
          param_1[5] = param_1[5] + 1;
          *(byte *)(param_1[5] + -1) = bVar2;
          uVar5 = (uint)bVar2;
        }
        param_3 = param_3 + 1;
        uVar4 = uVar4 - 1;
      } while (uVar5 != 0xffff);
      param_2 = 0;
    }
    else if ((*param_1 == 0) || (iVar3 = FUN_1000_0a5f(param_1), iVar3 == 0)) {
      uVar4 = FUN_1000_0894((int)(char)param_1[2],param_3,param_2);
      if (uVar4 < param_2) {
        param_2 = 0;
      }
    }
    else {
      param_2 = 0;
    }
  }
  else {
    do {
      if (uVar4 == 0) {
        return param_2;
      }
      iVar3 = FUN_1000_0b0f((int)(char)*param_3,param_1);
      uVar4 = uVar4 - 1;
      param_3 = param_3 + 1;
    } while (iVar3 != -1);
    param_2 = 0;
  }
  return param_2;
}


// ---- thunk_FUN_1000_0a3e @ 1000:0cd6

void thunk_FUN_1000_0a3e(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010cd6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_1128_05e8)();
  return;
}


// ---- FUN_1000_0cda @ 1000:0cda

void FUN_1000_0cda(undefined2 param_1)

{
  byte bVar1;
  undefined1 *unaff_DI;
  undefined2 unaff_ES;
  
  bVar1 = (byte)((uint)param_1 >> 8);
  *unaff_DI = *(undefined1 *)(ulong)((bVar1 >> 4) + 0x571);
  unaff_DI[1] = *(undefined1 *)(ulong)((bVar1 & 0xf) + 0x571);
  unaff_DI[2] = *(undefined1 *)(ulong)((byte)((byte)param_1 >> 4) + 0x571);
  unaff_DI[3] = *(undefined1 *)(ulong)(((byte)param_1 & 0xf) + 0x571);
  return;
}


// ---- FUN_1000_0d05 @ 1000:0d05

void FUN_1000_0d05(void)

{
  undefined2 unaff_SI;
  
  FUN_1000_0d5f(unaff_SI);
  return;
}


// ---- FUN_1000_0d1e @ 1000:0d1e

void __cdecl16near FUN_1000_0d1e(void)

{
  char *pcVar1;
  int iVar2;
  char *unaff_DI;
  undefined2 unaff_ES;
  
  iVar2 = -1;
  do {
    if (iVar2 == 0) {
      return;
    }
    iVar2 = iVar2 + -1;
    pcVar1 = unaff_DI;
    unaff_DI = unaff_DI + 1;
  } while (*pcVar1 != '\0');
  return;
}


// ---- FUN_1000_0d2b @ 1000:0d2b

void __cdecl16near FUN_1000_0d2b(void)

{
  char *pcVar1;
  char cVar2;
  undefined1 in_AL;
  int iVar3;
  int unaff_BP;
  undefined1 *unaff_DI;
  undefined2 unaff_SS;
  
  *unaff_DI = in_AL;
  pcVar1 = (char *)(unaff_BP + -0x55);
  cVar2 = *pcVar1;
  *pcVar1 = *pcVar1 + -1;
  if (*pcVar1 != '\0' && SBORROW1(cVar2,'\x01') == *pcVar1 < '\0') {
    iVar3 = (*(code *)*(undefined2 *)(unaff_BP + 10))
                      (*(undefined2 *)(unaff_BP + 8),unaff_DI + (1 - (unaff_BP + -0x54)),
                       unaff_BP + -0x54);
    if (iVar3 == 0) {
      *(undefined2 *)(unaff_BP + -2) = 1;
    }
    *(undefined1 *)(unaff_BP + -0x55) = 0x50;
    *(int *)(unaff_BP + -0x58) =
         (int)(unaff_DI + (1 - (unaff_BP + -0x54)) + *(int *)(unaff_BP + -0x58));
  }
  return;
}


// ---- FUN_1000_0d33 @ 1000:0d33

void __cdecl16near FUN_1000_0d33(void)

{
  int iVar1;
  int unaff_BP;
  int unaff_DI;
  int iVar2;
  undefined2 unaff_SS;
  
  iVar2 = unaff_DI - (unaff_BP + -0x54);
  iVar1 = (*(code *)*(undefined2 *)(unaff_BP + 10))
                    (*(undefined2 *)(unaff_BP + 8),iVar2,unaff_BP + -0x54);
  if (iVar1 == 0) {
    *(undefined2 *)(unaff_BP + -2) = 1;
  }
  *(undefined1 *)(unaff_BP + -0x55) = 0x50;
  *(int *)(unaff_BP + -0x58) = *(int *)(unaff_BP + -0x58) + iVar2;
  return;
}


// ---- FUN_1000_0d5f @ 1000:0d5f

/* WARNING (jumptable): Unable to track spacebase fully for stack */

undefined2 FUN_1000_0d5f(void)

{
  char *pcVar1;
  uint *puVar2;
  undefined1 *puVar3;
  char cVar4;
  undefined2 *puVar5;
  uint uVar6;
  int *piVar7;
  char cVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  uint uVar11;
  byte bVar14;
  int iVar12;
  int iVar13;
  int extraout_DX;
  int extraout_DX_00;
  int extraout_DX_01;
  char cVar15;
  int iVar16;
  int unaff_BP;
  char *pcVar17;
  char *pcVar18;
  char *pcVar19;
  int *piVar20;
  undefined1 *puVar21;
  uint *puVar22;
  int *piVar23;
  int iVar24;
  int unaff_SS;
  bool bVar25;
  
  *(int *)(unaff_BP + -0x96) = unaff_BP + -0x54;
LAB_1000_0d68:
  pcVar19 = (char *)*(undefined2 *)(unaff_BP + -0x96);
LAB_1000_0d6c:
  pcVar17 = (char *)*(undefined2 *)(unaff_BP + 6);
LAB_1000_0d6f:
  pcVar18 = pcVar17 + 1;
  cVar8 = *pcVar17;
  if (cVar8 == '\0') goto LAB_1000_1204;
  if (cVar8 == '%') {
    *(int *)(unaff_BP + -0x8a) = (int)pcVar18;
    pcVar1 = pcVar18;
    pcVar18 = pcVar17 + 2;
    cVar8 = *pcVar1;
    if (cVar8 != '%') goto code_r0x00010d91;
  }
  *pcVar19 = cVar8;
  pcVar19 = pcVar19 + 1;
  pcVar1 = (char *)(unaff_BP + -0x55);
  cVar8 = *pcVar1;
  *pcVar1 = *pcVar1 + -1;
  pcVar17 = pcVar18;
  if (*pcVar1 == '\0' || SBORROW1(cVar8,'\x01') != *pcVar1 < '\0') {
    FUN_1000_0d33();
  }
  goto LAB_1000_0d6f;
code_r0x00010d91:
  *(undefined2 *)(unaff_BP + -0x96) = pcVar19;
  uVar11 = 0;
  *(undefined2 *)(unaff_BP + -0x8c) = 0;
  *(undefined2 *)(unaff_BP + -0x98) = 0;
  *(undefined1 *)(unaff_BP + -0x8d) = 0;
  *(undefined2 *)(unaff_BP + -0x92) = 0xffff;
  *(undefined2 *)(unaff_BP + -0x90) = 0xffff;
  do {
    if (0x5f < (byte)(cVar8 - 0x20U)) goto switchD_1000_0dd2_caseD_13;
    cVar4 = *(char *)((byte)(cVar8 - 0x20U) + 0x581);
    cVar15 = cVar4 * '\x02';
    bVar14 = (byte)(uVar11 >> 8);
    iVar24 = unaff_SS;
    switch(cVar4) {
    case '\0':
      if (bVar14 != 0) goto switchD_1000_0dd2_caseD_13;
      if (*(char *)(unaff_BP + -0x8d) != '+') {
        *(char *)(unaff_BP + -0x8d) = cVar8;
      }
      break;
    case '\x01':
      if (bVar14 != 0) goto switchD_1000_0dd2_caseD_13;
      *(uint *)(unaff_BP + -0x98) = *(uint *)(unaff_BP + -0x98) | 1;
      break;
    case '\x02':
      uVar10 = *(undefined2 *)*(undefined2 *)(unaff_BP + 4);
      *(int *)(unaff_BP + 4) = *(int *)(unaff_BP + 4) + 2;
      if (bVar14 < 2) {
        *(undefined2 *)(unaff_BP + -0x92) = uVar10;
        uVar11 = 0x300;
      }
      else {
        if (bVar14 != 4) goto switchD_1000_0dd2_caseD_13;
        *(undefined2 *)(unaff_BP + -0x90) = uVar10;
        uVar11 = 0x500;
      }
      break;
    case '\x03':
      if (bVar14 != 0) goto switchD_1000_0dd2_caseD_13;
      *(uint *)(unaff_BP + -0x98) = *(uint *)(unaff_BP + -0x98) | 2;
      break;
    case '\x04':
      if (3 < bVar14) goto switchD_1000_0dd2_caseD_13;
      uVar11 = 0x400;
      break;
    case '\x05':
switchD_1000_0dd2_caseD_5:
      if (bVar14 < 3) {
        uVar11 = 0x200;
        LOCK();
        iVar24 = *(int *)(unaff_BP + -0x92);
        *(int *)(unaff_BP + -0x92) = (int)(char)(cVar8 + -0x30);
        UNLOCK();
        if (-1 < iVar24) {
          *(int *)(unaff_BP + -0x92) = *(int *)(unaff_BP + -0x92) + iVar24 * 10;
        }
      }
      else {
        if (bVar14 != 4) {
switchD_1000_0dd2_caseD_13:
          pcVar19 = (char *)*(undefined2 *)(unaff_BP + -0x8a);
          do {
            FUN_1000_0d2b();
            pcVar1 = pcVar19;
            pcVar19 = pcVar19 + 1;
          } while (*pcVar1 != '\0');
LAB_1000_1204:
          if (*(char *)(unaff_BP + -0x55) < 'P') {
            FUN_1000_0d33();
          }
          if (*(int *)(unaff_BP + -2) == 0) {
            uVar10 = *(undefined2 *)(unaff_BP + -0x58);
          }
          else {
            uVar10 = 0xffff;
          }
          return uVar10;
        }
        LOCK();
        iVar24 = *(int *)(unaff_BP + -0x90);
        *(int *)(unaff_BP + -0x90) = (int)(char)(cVar8 + -0x30);
        UNLOCK();
        if (-1 < iVar24) {
          *(int *)(unaff_BP + -0x90) = *(int *)(unaff_BP + -0x90) + iVar24 * 10;
        }
      }
      break;
    case '\x06':
      *(uint *)(unaff_BP + -0x98) = *(uint *)(unaff_BP + -0x98) | 0x10;
      uVar11 = 0x500;
      break;
    case '\a':
      *(uint *)(unaff_BP + -0x98) = *(uint *)(unaff_BP + -0x98) | 0x100;
      *(uint *)(unaff_BP + -0x98) = *(uint *)(unaff_BP + -0x98) & 0xffef;
      uVar11 = 0x500;
      break;
    case '\b':
      *(uint *)(unaff_BP + -0x98) = *(uint *)(unaff_BP + -0x98) & 0xffef;
      *(uint *)(unaff_BP + -0x98) = *(uint *)(unaff_BP + -0x98) | 0x80;
      uVar11 = 0x500;
      break;
    case '\t':
      if (bVar14 != 0) goto switchD_1000_0dd2_caseD_5;
      if ((*(uint *)(unaff_BP + -0x98) & 2) == 0) {
        *(uint *)(unaff_BP + -0x98) = *(uint *)(unaff_BP + -0x98) | 8;
        uVar11 = 0x100;
      }
      break;
    case '\n':
      goto switchD_1000_0dd2_caseD_a;
    case '\v':
      uVar10 = CONCAT11(8,cVar15);
      goto LAB_1000_0f0c;
    case '\f':
      uVar10 = CONCAT11(10,cVar15);
      goto LAB_1000_0f11;
    case '\r':
      uVar10 = CONCAT11(0x10,cVar8 + -0x17);
LAB_1000_0f0c:
      *(undefined1 *)(unaff_BP + -0x8d) = 0;
LAB_1000_0f11:
      *(undefined1 *)(unaff_BP + -0x93) = 0;
      *(char *)(unaff_BP + -0x94) = cVar8;
      piVar23 = (int *)*(undefined2 *)(unaff_BP + 4);
      iVar16 = *piVar23;
      iVar12 = 0;
      goto LAB_1000_0f34;
    case '\x0e':
      *(char *)(unaff_BP + -0x94) = cVar8;
      *(undefined2 *)(unaff_BP + 6) = pcVar18;
      puVar21 = (undefined1 *)(unaff_BP + -0x88);
      puVar5 = (undefined2 *)*(int *)(unaff_BP + 4);
      uVar10 = *puVar5;
      *(undefined2 *)(unaff_BP + 4) = puVar5 + 1;
      if ((*(uint *)(unaff_BP + -0x98) & 0x20) != 0) {
        uVar9 = puVar5[1];
        *(undefined2 *)(unaff_BP + 4) = puVar5 + 2;
        FUN_1000_0cda(uVar9,uVar10);
        puVar3 = puVar21;
        puVar21 = (undefined1 *)(unaff_BP + -0x87);
        *puVar3 = 0x3a;
      }
      FUN_1000_0cda();
      *puVar21 = 0;
      *(undefined1 *)(unaff_BP + -0x93) = 0;
      *(uint *)(unaff_BP + -0x98) = *(uint *)(unaff_BP + -0x98) & 0xfffb;
      puVar22 = (uint *)(unaff_BP + -0x88);
      uVar11 = (int)puVar21 - (int)puVar22;
      goto LAB_1000_10b9;
    case '\x0f':
      *(undefined2 *)(unaff_BP + 6) = pcVar18;
      *(char *)(unaff_BP + -0x94) = cVar8;
      uVar10 = *(undefined2 *)(unaff_BP + 4);
      uVar11 = *(uint *)(unaff_BP + -0x90);
      if ((int)uVar11 < 0) {
        uVar11 = 6;
      }
      uVar6 = *(uint *)(unaff_BP + -0x98);
      if ((*(uint *)(unaff_BP + -0x98) & 0x80) == 0) {
        if ((*(uint *)(unaff_BP + -0x98) & 0x100) == 0) {
          *(undefined2 *)(unaff_BP + -4) = 8;
          uVar9 = 6;
        }
        else {
          uVar9 = 8;
          *(undefined2 *)(unaff_BP + -4) = 10;
        }
      }
      else {
        uVar9 = 2;
        *(undefined2 *)(unaff_BP + -4) = 4;
      }
      thunk_FUN_1000_0a3e(uVar9,uVar6 & 1,cVar8,unaff_BP + -0x87,uVar11,uVar10);
      *(int *)(unaff_BP + 4) = *(int *)(unaff_BP + 4) + *(int *)(unaff_BP + -4);
      puVar22 = (uint *)(unaff_BP + -0x87);
      goto LAB_1000_10b9;
    case '\x10':
      *(undefined2 *)(unaff_BP + 6) = pcVar18;
      *(char *)(unaff_BP + -0x94) = cVar8;
      uVar11 = *(uint *)*(undefined2 *)(unaff_BP + 4);
      *(int *)(unaff_BP + 4) = *(int *)(unaff_BP + 4) + 2;
      puVar22 = (uint *)(unaff_BP + -0x87);
      *puVar22 = uVar11 & 0xff;
      uVar11 = 1;
      goto LAB_1000_10fa;
    case '\x11':
      *(undefined2 *)(unaff_BP + 6) = pcVar18;
      *(char *)(unaff_BP + -0x94) = cVar8;
      if ((*(uint *)(unaff_BP + -0x98) & 0x20) == 0) {
        puVar22 = *(uint **)(undefined4 *)*(undefined2 *)(unaff_BP + 4);
        *(int *)(unaff_BP + 4) = *(int *)(unaff_BP + 4) + 2;
        iVar24 = 0x1128;
        bVar25 = puVar22 == (uint *)0x0;
      }
      else {
        puVar2 = (uint *)*(undefined4 *)*(undefined2 *)(unaff_BP + 4);
        iVar24 = (int)((ulong)puVar2 >> 0x10);
        puVar22 = (uint *)puVar2;
        *(int *)(unaff_BP + 4) = *(int *)(unaff_BP + 4) + 4;
        bVar25 = iVar24 == 0 && puVar22 == (uint *)0x0;
      }
      if (bVar25) {
        iVar24 = 0x1128;
        puVar22 = (uint *)&DAT_1128_056a;
      }
      FUN_1000_0d1e();
      if (*(uint *)(unaff_BP + -0x90) < uVar11) {
        uVar11 = *(uint *)(unaff_BP + -0x90);
      }
      goto LAB_1000_10fa;
    case '\x12':
      *(undefined2 *)(unaff_BP + 6) = pcVar18;
      if ((*(uint *)(unaff_BP + -0x98) & 0x20) == 0) {
        piVar23 = *(int **)(undefined4 *)*(undefined2 *)(unaff_BP + 4);
        *(int *)(unaff_BP + 4) = *(int *)(unaff_BP + 4) + 2;
        uVar10 = 0x1128;
      }
      else {
        piVar7 = (int *)*(undefined4 *)*(undefined2 *)(unaff_BP + 4);
        uVar10 = (undefined2)((ulong)piVar7 >> 0x10);
        piVar23 = (int *)piVar7;
        *(int *)(unaff_BP + 4) = *(int *)(unaff_BP + 4) + 4;
      }
      *piVar23 = (uint)(byte)(0x50 - *(char *)(unaff_BP + -0x55)) + *(int *)(unaff_BP + -0x58);
      goto LAB_1000_0d68;
    default:
      goto switchD_1000_0dd2_caseD_13;
    case '\x16':
      *(uint *)(unaff_BP + -0x98) = *(uint *)(unaff_BP + -0x98) & 0xffdf;
      uVar11 = 0x500;
      break;
    case '\x17':
      *(uint *)(unaff_BP + -0x98) = *(uint *)(unaff_BP + -0x98) | 0x20;
      uVar11 = 0x500;
    }
    pcVar1 = pcVar18;
    pcVar18 = pcVar18 + 1;
    cVar8 = *pcVar1;
  } while( true );
switchD_1000_0dd2_caseD_a:
  uVar10 = CONCAT11(10,cVar15);
  *(undefined1 *)(unaff_BP + -0x93) = 1;
  *(char *)(unaff_BP + -0x94) = cVar8;
  piVar23 = (int *)*(undefined2 *)(unaff_BP + 4);
  iVar16 = *piVar23;
  iVar12 = iVar16 >> 0xf;
LAB_1000_0f34:
  piVar20 = piVar23 + 1;
  *(undefined2 *)(unaff_BP + 6) = pcVar18;
  if ((*(uint *)(unaff_BP + -0x98) & 0x10) != 0) {
    iVar12 = *piVar20;
    piVar20 = piVar23 + 2;
  }
  *(undefined2 *)(unaff_BP + 4) = piVar20;
  puVar22 = (uint *)(unaff_BP + -0x87);
  if ((iVar16 == 0) && (iVar12 == 0)) {
    if (*(int *)(unaff_BP + -0x90) == 0) {
      pcVar19 = (char *)*(undefined2 *)(unaff_BP + -0x96);
      iVar24 = *(int *)(unaff_BP + -0x92);
      if ((iVar24 != 0) && (iVar24 != -1)) {
        do {
          FUN_1000_0d2b();
          iVar24 = iVar24 + -1;
        } while (iVar24 != 0);
      }
      goto LAB_1000_0d6c;
    }
  }
  else {
    *(uint *)(unaff_BP + -0x98) = *(uint *)(unaff_BP + -0x98) | 4;
  }
  FUN_1000_0905(uVar10,*(undefined1 *)(unaff_BP + -0x93),(char)((uint)uVar10 >> 8),puVar22,iVar16,
                iVar12);
  if (*(int *)(unaff_BP + -0x90) < 1) {
LAB_1000_10b9:
    if (((*(uint *)(unaff_BP + -0x98) & 8) == 0) || (*(int *)(unaff_BP + -0x92) < 1))
    goto LAB_1000_10db;
  }
  FUN_1000_0d1e();
  if ((char)*puVar22 == '-') {
    uVar11 = uVar11 - 1;
  }
  if (extraout_DX - uVar11 != 0 && (int)uVar11 <= extraout_DX) {
    *(int *)(unaff_BP + -0x8c) = extraout_DX - uVar11;
  }
LAB_1000_10db:
  cVar8 = *(char *)(unaff_BP + -0x8d);
  if ((cVar8 != '\0') && ((char)*puVar22 != '-')) {
    piVar7 = (int *)(unaff_BP + -0x8c);
    iVar16 = *piVar7;
    *piVar7 = *piVar7 + -1;
    *(int *)(unaff_BP + -0x8c) = *(int *)(unaff_BP + -0x8c) + (uint)(iVar16 == 0);
    puVar22 = (uint *)((int)puVar22 + -1);
    *(char *)puVar22 = cVar8;
  }
  FUN_1000_0d1e();
LAB_1000_10fa:
  pcVar19 = (char *)*(undefined2 *)(unaff_BP + -0x96);
  iVar16 = *(int *)(unaff_BP + -0x92);
  if ((*(uint *)(unaff_BP + -0x98) & 5) == 5) {
    cVar8 = *(char *)(unaff_BP + -0x94);
    if (cVar8 == 'o') {
      if (*(int *)(unaff_BP + -0x8c) < 1) {
        *(undefined2 *)(unaff_BP + -0x8c) = 1;
      }
    }
    else if ((cVar8 == 'x') || (cVar8 == 'X')) {
      *(uint *)(unaff_BP + -0x98) = *(uint *)(unaff_BP + -0x98) | 0x40;
      iVar16 = iVar16 + -2;
      piVar7 = (int *)(unaff_BP + -0x8c);
      iVar12 = *piVar7;
      *piVar7 = *piVar7 + -2;
      if (SBORROW2(iVar12,2) != *piVar7 < 0) {
        *(undefined2 *)(unaff_BP + -0x8c) = 0;
      }
    }
  }
  iVar12 = uVar11 + *(int *)(unaff_BP + -0x8c);
  if ((*(uint *)(unaff_BP + -0x98) & 2) == 0) {
    for (; iVar12 < iVar16; iVar16 = iVar16 + -1) {
      FUN_1000_0d2b();
    }
  }
  if ((*(uint *)(unaff_BP + -0x98) & 0x40) != 0) {
    FUN_1000_0d2b();
    FUN_1000_0d2b();
  }
  iVar13 = *(int *)(unaff_BP + -0x8c);
  if (0 < iVar13) {
    iVar12 = iVar12 - iVar13;
    iVar16 = iVar16 - iVar13;
    cVar8 = (char)*puVar22;
    if (((cVar8 == '-') || (cVar8 == ' ')) || (cVar8 == '+')) {
      puVar22 = (uint *)((int)puVar22 + 1);
      FUN_1000_0d2b();
      iVar12 = iVar12 + -1;
      iVar16 = iVar16 + -1;
      iVar13 = extraout_DX_00;
    }
    for (; iVar13 != 0; iVar13 = iVar13 + -1) {
      FUN_1000_0d2b();
      iVar12 = extraout_DX_01;
    }
  }
  if (iVar12 != 0) {
    iVar16 = iVar16 - iVar12;
    do {
      puVar2 = puVar22;
      puVar22 = (uint *)((int)puVar22 + 1);
      *pcVar19 = (char)*puVar2;
      pcVar19 = pcVar19 + 1;
      pcVar1 = (char *)(unaff_BP + -0x55);
      cVar8 = *pcVar1;
      *pcVar1 = *pcVar1 + -1;
      if (*pcVar1 == '\0' || SBORROW1(cVar8,'\x01') != *pcVar1 < '\0') {
        FUN_1000_0d33();
      }
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
  }
  if (0 < iVar16) {
    do {
      FUN_1000_0d2b();
      iVar16 = iVar16 + -1;
    } while (iVar16 != 0);
  }
  goto LAB_1000_0d6c;
}


// ---- FUN_1000_1228 @ 1000:1228

uint __cdecl16far FUN_1000_1228(void)

{
  uint in_AX;
  byte in_CL;
  uint in_DX;
  
  if (in_CL < 0x10) {
    return in_AX >> (in_CL & 0x1f) | in_DX << (0x10 - in_CL & 0x1f);
  }
  return in_DX >> (in_CL - 0x10 & 0x1f);
}


// ---- FUN_1000_1247 @ 1000:1247

uint __cdecl16near FUN_1000_1247(uint param_1)

{
  if (param_1 == 0xffff) {
    param_1 = 0xffff;
  }
  else if ((*(byte *)((param_1 & 0xff) + 0x2cd) & 8) == 0) {
    param_1 = param_1 & 0xff;
  }
  else {
    param_1 = (param_1 & 0xff) - 0x20;
  }
  return param_1;
}


