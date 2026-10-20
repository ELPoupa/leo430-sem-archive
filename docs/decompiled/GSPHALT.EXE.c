// Decompiled with Ghidra from GSPHALT.EXE
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
  byte bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined2 extraout_DX;
  undefined2 extraout_DX_00;
  int iVar11;
  undefined2 *puVar12;
  int *piVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  uint uVar19;
  byte *pbVar20;
  int *piVar21;
  int *piVar22;
  int iVar23;
  undefined1 *puVar24;
  undefined2 unaff_ES;
  undefined2 uVar25;
  undefined4 uVar26;
  
  puVar12 = (undefined2 *)&DAT_111a_0080;
  uRam000101f8 = 0x111a;
  pcVar4 = (code *)swi(0x21);
  uVar26 = (*pcVar4)();
  uVar25 = s_Turbo_C___Copyright__c__1988_Bor_111a_0004._40_2_;
  iVar9 = DAT_111a_0002;
  iVar10 = (int)((ulong)uVar26 >> 0x10);
  *(undefined2 *)&DAT_111a_0092 = (int)uVar26;
  *(undefined2 *)&DAT_111a_0090 = unaff_ES;
  *(undefined2 *)(char *)&DAT_111a_008c = uVar25;
  *(int *)&DAT_111a_00ac = iVar9;
  *(undefined2 *)&DAT_111a_0096 = 0xffff;
  *(undefined2 *)((int)puVar12 + -2) = 0x2e;
  FUN_1000_0162();
  piVar5 = (int *)*(undefined4 *)&DAT_111a_008a;
  uVar25 = (undefined2)((ulong)piVar5 >> 0x10);
  piVar21 = (int *)piVar5;
  uVar8 = 0x7fff;
  piVar22 = piVar21;
  do {
    if (((*piVar22 == 0x3738) && (iVar11 = piVar22[1], (char)iVar11 == '=')) &&
       (*(int *)&DAT_111a_0096 = *(int *)&DAT_111a_0096 + 1,
       ((byte)((uint)iVar11 >> 8) & 0xdf) == 0x59)) {
      *(int *)&DAT_111a_0096 = *(int *)&DAT_111a_0096 + 1;
    }
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      piVar1 = piVar22;
      piVar22 = (int *)((int)piVar22 + 1);
    } while ((char)piVar5 != (char)*piVar1);
    if (uVar8 == 0) goto LAB_1000_00be;
    piVar21 = (int *)((int)piVar21 + 1);
  } while ((char)*piVar22 != (char)piVar5);
  *(int *)&DAT_111a_008a = -(uVar8 | 0x8000);
  *(uint *)&DAT_111a_008e = (int)piVar21 * 2 + 8U & 0xfff8;
  uVar19 = iVar9 - iVar10;
  uVar8 = *(uint *)&DAT_111a_028e;
  if (uVar8 < 0x200) {
    uVar8 = 0x200;
    *(undefined2 *)&DAT_111a_028e = 0x200;
  }
  if ((uVar8 < 0xfb06) && (!CARRY2(uVar8 + 0x4fa,*(uint *)&DAT_111a_028c))) {
    bVar7 = 4;
    uVar8 = (uVar8 + 0x4fa + *(uint *)&DAT_111a_028c >> 4) + 1;
    if (uVar8 <= uVar19) {
      if (((*(int *)&DAT_111a_028e == 0) || (*(int *)&DAT_111a_028c == 0)) &&
         (uVar8 = 0x1000, uVar19 < 0x1001)) {
        uVar8 = uVar19;
      }
      iVar11 = uVar8 + iVar10;
      *(int *)&DAT_111a_00a4 = iVar11;
      *(int *)&DAT_111a_00a8 = iVar11;
      iVar11 = iVar11 - *(int *)&DAT_111a_0090;
      piVar13 = (int *)((int)puVar12 + -2);
      *(uint *)((int)puVar12 + -2) = uVar8;
      pcVar4 = (code *)swi(0x21);
      (*pcVar4)();
      uVar25 = uRam000101f8;
      iVar23 = *piVar13 << (bVar7 & 0x1f);
      puVar24 = (undefined1 *)&DAT_111a_04b4;
      for (iVar9 = 0x46; iVar9 != 0; iVar9 = iVar9 + -1) {
        puVar2 = puVar24;
        puVar24 = puVar24 + 1;
        *puVar2 = 0;
      }
      *(undefined2 *)(iVar23 + -2) = 0x1000;
      pcVar3 = (code *)*(undefined2 *)&DAT_111a_04a6;
      puVar14 = (undefined1 *)(iVar23 + -4);
      *(undefined2 *)(iVar23 + -4) = 0xf8;
      (*pcVar3)();
      puVar15 = puVar14 + -2;
      *(undefined2 *)(puVar14 + -2) = 0xfb;
      FUN_1000_03f8();
      *(undefined2 *)(puVar15 + -2) = 0xfe;
      FUN_1000_04e3();
      pcVar4 = (code *)swi(0x1a);
      (*pcVar4)();
      *(undefined2 *)&DAT_111a_0098 = extraout_DX_00;
      *(int *)&DAT_111a_009a = iVar9;
      pcVar3 = (code *)*(undefined2 *)&DAT_111a_04aa;
      puVar16 = puVar15 + -2;
      *(undefined2 *)(puVar15 + -2) = 0x10e;
      (*pcVar3)();
      *(undefined2 *)(puVar16 + -2) = *(undefined2 *)&DAT_111a_0088;
      *(undefined2 *)(puVar16 + -4) = *(undefined2 *)&DAT_111a_0086;
      *(undefined2 *)(puVar16 + -6) = *(undefined2 *)&DAT_111a_0084;
      *(undefined2 *)(puVar16 + -8) = 0x11d;
      uVar25 = FUN_1000_01fa();
      *(undefined2 *)(puVar16 + -8) = uVar25;
      *(undefined2 *)(puVar16 + -10) = 0x121;
      FUN_1000_03c3();
      uVar25 = uRam000101f8;
      *(undefined2 *)(puVar16 + -10) = 0x129;
      FUN_1000_01a5();
      *(undefined2 *)(puVar16 + -10) = 0x1000;
      pcVar3 = (code *)*(undefined2 *)0x4a8;
      puVar17 = puVar16 + -0xc;
      *(undefined2 *)(puVar16 + -0xc) = 0x12e;
      (*pcVar3)();
      iVar9 = 0;
      pbVar20 = (byte *)0x0;
      iVar10 = 0x2f;
      do {
        iVar9 = CONCAT11((char)((uint)iVar9 >> 8) + CARRY1((byte)iVar9,*pbVar20),
                         (byte)iVar9 + *pbVar20);
        pbVar20 = pbVar20 + 1;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
      if (iVar9 != 0xd37) {
        *(undefined2 *)(puVar17 + -2) = 0x14f;
        FUN_1000_01da();
      }
      pcVar4 = (code *)swi(0x21);
      puVar24 = puVar17;
      (*pcVar4)();
      uVar25 = uRam000101f8;
      *(undefined2 *)(puVar24 + -2) = 0x1f1;
      FUN_1000_01da();
      *(undefined2 *)(puVar24 + -2) = 3;
      puVar18 = puVar24 + -4;
      *(undefined2 *)(puVar24 + -4) = 0x1f8;
      cVar6 = FUN_1000_0121();
      pbVar20[iVar11] = pbVar20[iVar11] + cVar6;
      *(undefined1 **)(puVar18 + -2) = puVar17;
      *(byte **)(puVar18 + -6) = pbVar20;
      *(undefined2 *)(puVar18 + -8) = 0x194;
      *(undefined2 *)(puVar18 + -10) = 0x1ae;
      *(undefined2 *)(puVar18 + -0xc) = 0x20c;
      FUN_1000_0a2b();
      *(undefined2 *)(puVar18 + -8) = 0x1b2;
      *(undefined2 *)(puVar18 + -10) = 0x216;
      FUN_1000_0a2b();
      *(undefined2 *)(puVar18 + -8) = 0xc300;
      *(undefined2 *)(puVar18 + -10) = 0xc000;
      *(undefined2 *)(puVar18 + -0xc) = 0x100;
      *(undefined2 *)(puVar18 + -0xe) = 0x224;
      FUN_1000_0265();
      for (iVar9 = 0; iVar9 < 1000; iVar9 = iVar9 + 1) {
        *(undefined1 **)(puVar18 + -8) = puVar18 + -4;
        *(undefined2 *)(puVar18 + -10) = 0xc000;
        *(undefined2 *)(puVar18 + -0xc) = 0x100;
        *(undefined2 *)(puVar18 + -0xe) = 0x238;
        FUN_1000_02c8();
        if ((*(uint *)(puVar18 + -4) & 0x10) != 0) {
          *(undefined2 *)(puVar18 + -8) = 0x1d0;
          *(undefined2 *)(puVar18 + -10) = 0x249;
          FUN_1000_0a2b();
          *(undefined2 *)(puVar18 + -8) = 0;
          *(undefined2 *)(puVar18 + -10) = 0x250;
          FUN_1000_03c3();
        }
      }
      *(undefined2 *)(puVar18 + -8) = 0x1eb;
      *(undefined2 *)(puVar18 + -10) = 0x260;
      FUN_1000_0a2b();
      return;
    }
  }
LAB_1000_00be:
  FUN_1000_01e2();
  return;
}


// ---- FUN_1000_0121 @ 1000:0121

void FUN_1000_0121(undefined1 *param_1)

{
  code *pcVar1;
  undefined2 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int in_BX;
  byte *pbVar6;
  
  uVar2 = uRam000101f8;
  FUN_1000_01a5();
  (*(code *)*(undefined2 *)0x4a8)(0x1000);
  iVar4 = 0;
  pbVar6 = (byte *)0x0;
  iVar5 = 0x2f;
  do {
    iVar4 = CONCAT11((char)((uint)iVar4 >> 8) + CARRY1((byte)iVar4,*pbVar6),(byte)iVar4 + *pbVar6);
    pbVar6 = pbVar6 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  if (iVar4 != 0xd37) {
    FUN_1000_01da();
  }
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  uVar2 = uRam000101f8;
  param_1 = (undefined1 *)0x1f1;
  FUN_1000_01da();
  param_1 = (undefined1 *)0x3;
  cVar3 = FUN_1000_0121();
  pbVar6[in_BX] = pbVar6[in_BX] + cVar3;
  param_1 = (undefined1 *)register0x00000010;
  FUN_1000_0a2b(0x1ae,0x194,pbVar6);
  FUN_1000_0a2b(0x1b2);
  FUN_1000_0265(0x100,0xc000,0xc300);
  for (iVar4 = 0; iVar4 < 1000; iVar4 = iVar4 + 1) {
    FUN_1000_02c8(0x100,0xc000,&stack0x0000);
    FUN_1000_0a2b(0x1d0);
    FUN_1000_03c3(0);
  }
  FUN_1000_0a2b(0x1eb);
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
  DAT_111a_0076 = unaff_ES;
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  DAT_111a_0078 = in_BX;
  DAT_111a_007a = unaff_ES;
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  DAT_111a_007c = in_BX;
  DAT_111a_007e = unaff_ES;
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  DAT_111a_0080 = in_BX;
  DAT_111a_0082 = unaff_ES;
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
  DAT_111a_0096 = 0;
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

void FUN_1000_01e2(void)

{
  undefined2 uVar1;
  char cVar2;
  int in_BX;
  int unaff_SI;
  int iVar3;
  uint uStack_4;
  
  uVar1 = uRam000101f8;
  FUN_1000_01da();
  uStack_4 = 0x1f8;
  cVar2 = FUN_1000_0121();
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  FUN_1000_0a2b(0x1ae,0x194);
  FUN_1000_0a2b(0x1b2);
  FUN_1000_0265(0x100,0xc000,0xc300);
  for (iVar3 = 0; iVar3 < 1000; iVar3 = iVar3 + 1) {
    FUN_1000_02c8(0x100,0xc000,&uStack_4);
    if ((uStack_4 & 0x10) != 0) {
      FUN_1000_0a2b(0x1d0);
      FUN_1000_03c3(0);
    }
  }
  FUN_1000_0a2b(0x1eb);
  return;
}


// ---- FUN_1000_01fa @ 1000:01fa

void __cdecl16near FUN_1000_01fa(void)

{
  int iVar1;
  uint local_4;
  
  FUN_1000_0a2b(0x1ae,0x194);
  FUN_1000_0a2b(0x1b2);
  FUN_1000_0265(0x100,0xc000,0xc300);
  for (iVar1 = 0; iVar1 < 1000; iVar1 = iVar1 + 1) {
    FUN_1000_02c8(0x100,0xc000,&local_4);
    if ((local_4 & 0x10) != 0) {
      FUN_1000_0a2b(0x1d0);
      FUN_1000_03c3(0);
    }
  }
  FUN_1000_0a2b(0x1eb);
  return;
}


// ---- FUN_1000_0265 @ 1000:0265

void __cdecl16near FUN_1000_0265(undefined2 param_1,byte param_2,undefined2 param_3)

{
  undefined1 uVar1;
  uint uVar2;
  
  uVar1 = FUN_1000_1176();
  out(0xa301,uVar1);
  out(0xa300,param_2 & 0xfc);
  uVar2 = FUN_1000_1176(uVar1,param_2 & 0xfc);
  *(undefined2 *)(uVar2 & 0x7fff) = param_3;
  return;
}


// ---- FUN_1000_02c8 @ 1000:02c8

void __cdecl16near FUN_1000_02c8(undefined2 param_1,byte param_2,undefined2 *param_3)

{
  undefined1 uVar1;
  uint uVar2;
  
  uVar1 = FUN_1000_1176();
  out(0xa301,uVar1);
  out(0xa300,param_2 & 0xfc);
  uVar2 = FUN_1000_1176(uVar1,param_2 & 0xfc);
  *param_3 = *(undefined2 *)(uVar2 & 0x7fff);
  return;
}


// ---- FUN_1000_0329 @ 1000:0329

void __cdecl16near FUN_1000_0329(undefined2 *param_1,undefined2 param_2,byte param_3,int param_4)

{
  undefined1 uVar1;
  undefined2 *puVar2;
  int iVar3;
  
  uVar1 = FUN_1000_1176();
  out(0xa301,uVar1);
  out(0xa300,param_3 & 0xfc);
  puVar2 = (undefined2 *)FUN_1000_1176();
  for (iVar3 = 0; iVar3 < param_4; iVar3 = iVar3 + 1) {
    *puVar2 = *param_1;
    puVar2 = puVar2 + 1;
  }
  return;
}


// ---- FUN_1000_0387 @ 1000:0387

undefined2 FUN_1000_0387(uint param_1)

{
  if ((int)param_1 < 0) {
    if (-param_1 < 0x23 || param_1 == 0xffdd) {
      DAT_111a_0094 = -param_1;
      DAT_111a_022a = 0xffff;
      return 0xffff;
    }
  }
  else if (param_1 < 0x59) goto LAB_1000_039a;
  param_1 = 0x57;
LAB_1000_039a:
  DAT_111a_022a = param_1;
  DAT_111a_0094 = (int)*(char *)(param_1 + 0x22c);
  return 0xffff;
}


// ---- FUN_1000_03c2 @ 1000:03c2

void __cdecl16near FUN_1000_03c2(void)

{
  return;
}


// ---- FUN_1000_03c3 @ 1000:03c3

void __cdecl16near FUN_1000_03c3(void)

{
  int iVar1;
  
  while (iVar1 = DAT_111a_0290 + -1, DAT_111a_0290 != 0) {
    DAT_111a_0290 = iVar1;
    (*(code *)*(undefined2 *)(iVar1 * 2 + 0x4b4))();
  }
  DAT_111a_0290 = iVar1;
  (*DAT_111a_0286)();
  (*DAT_111a_0288)();
  (*DAT_111a_028a)();
  FUN_1000_0121();
  return;
}


// ---- FUN_1000_03f8 @ 1000:03f8

/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_1000_03f8(void)

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
  
  DAT_1000_03f4 = 0x111a;
  pcVar9 = (char *)(DAT_111a_008a + 2);
  uVar6 = 1;
  uVar11 = DAT_111a_0090;
  DAT_1000_03f2 = in_stack_00000000;
  if (2 < DAT_111a_0092) {
    uVar6 = 0x7f;
    pcVar10 = pcVar9;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar1 = pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (*pcVar1 != '\0');
    if (uVar6 == 0) goto LAB_1000_04a9;
    uVar6 = uVar6 ^ 0x7f;
    uVar11 = DAT_111a_008c;
  }
  puVar5 = (undefined1 *)(*(byte *)&DAT_111a_0080 + 2 + uVar6 & 0xfffe);
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
LAB_1000_0465:
    *(undefined2 *)((int)auStack_4 + iVar3) = 0x468;
    bVar4 = FUN_1000_0481();
    iVar7 = extraout_DX;
    if (bVar12 || (bool)uVar13) {
      do {
        uVar11 = DAT_1000_03f4;
        if (bVar12) {
          iVar7 = *(int *)((int)auStack_4 + iVar3 + 2) + iVar7;
          *(uint *)&DAT_111a_0084 = uVar6;
          piVar8 = (int *)(&stack0x0000 + (uVar6 + 1) * -2);
          if (&stack0x0000 < (undefined1 *)((uVar6 + 1) * 2)) goto LAB_1000_04a9;
          *(undefined2 *)&DAT_111a_0086 = piVar8;
          goto LAB_1000_04c9;
        }
        *(undefined2 *)((int)auStack_4 + iVar3) = 0x46f;
        bVar4 = FUN_1000_0481();
        iVar7 = extraout_DX_00;
      } while (!bVar12 && !(bool)uVar13);
    }
    if ((bVar4 != 0x20) && (bVar4 != 0xd)) goto code_r0x00010479;
    goto LAB_1000_047d;
  }
LAB_1000_04a9:
  FUN_1000_01e2();
  return;
code_r0x00010479:
  bVar12 = bVar4 < 9;
  uVar13 = false;
  if (bVar4 == 9) {
LAB_1000_047d:
    bVar12 = false;
    uVar13 = true;
  }
  goto LAB_1000_0465;
  while( true ) {
    *piVar8 = (int)register0x00000010;
    piVar8 = piVar8 + 1;
    do {
      pcVar1 = (char *)register0x00000010;
      register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + 1);
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0 && *pcVar1 != '\0');
    if (*pcVar1 != '\0') break;
LAB_1000_04c9:
    if (iVar7 == 0) break;
  }
  *piVar8 = 0;
                    /* WARNING: Could not recover jumptable at 0x000104de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_1000_03f2)();
  return;
}


// ---- FUN_1000_0481 @ 1000:0481

int __cdecl16near FUN_1000_0481(void)

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


// ---- FUN_1000_04e3 @ 1000:04e3

void __cdecl16near FUN_1000_04e3(void)

{
  char *pcVar1;
  char *pcVar2;
  undefined2 uVar3;
  char *pcVar4;
  undefined2 *puVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  
  iVar6 = DAT_111a_008a;
  pcVar4 = (char *)FUN_1000_0632();
  uVar3 = DAT_111a_008c;
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
    puVar5 = (undefined2 *)FUN_1000_0632(DAT_111a_008e);
    DAT_111a_0088 = puVar5;
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


// ---- FUN_1000_052d @ 1000:052d

bool __cdecl16near FUN_1000_052d(undefined2 param_1)

{
  bool bVar1;
  
  bVar1 = DAT_111a_0290 != 0x20;
  if (bVar1) {
    *(undefined2 *)(DAT_111a_0290 * 2 + 0x4b4) = param_1;
    DAT_111a_0290 = DAT_111a_0290 + 1;
  }
  return !bVar1;
}


// ---- FUN_1000_0553 @ 1000:0553

void __cdecl16near FUN_1000_0553(int param_1)

{
  int iVar1;
  
  DAT_111a_04f6 = *(int *)(param_1 + 6);
  if (DAT_111a_04f6 == param_1) {
    DAT_111a_04f6 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 4);
    *(int *)(DAT_111a_04f6 + 4) = iVar1;
    *(int *)(iVar1 + 6) = DAT_111a_04f6;
  }
  return;
}


// ---- FUN_1000_0581 @ 1000:0581

int * __cdecl16near FUN_1000_0581(int *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
  *param_1 = *param_1 - param_2;
  piVar2 = (int *)(*param_1 + (int)param_1);
  *piVar2 = param_2 + 1;
  piVar2[1] = (int)param_1;
  piVar1 = piVar2;
  if (DAT_111a_04f4 != param_1) {
    *(undefined2 *)((int)piVar2 + param_2 + 2) = piVar2;
    piVar1 = DAT_111a_04f4;
  }
  DAT_111a_04f4 = piVar1;
  return piVar2 + 2;
}


// ---- FUN_1000_05bb @ 1000:05bb

int * __cdecl16near FUN_1000_05bb(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)FUN_1000_06c9(param_1,0);
  if (piVar1 == (int *)0xffff) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar1[1] = (int)DAT_111a_04f4;
    *piVar1 = param_1 + 1;
    piVar2 = piVar1 + 2;
    DAT_111a_04f4 = piVar1;
  }
  return piVar2;
}


// ---- FUN_1000_05f8 @ 1000:05f8

int * __cdecl16near FUN_1000_05f8(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_1000_06c9(param_1,0);
  if (piVar1 == (int *)0xffff) {
    piVar1 = (int *)0x0;
  }
  else {
    DAT_111a_04f4 = piVar1;
    DAT_111a_04f8 = piVar1;
    *piVar1 = param_1 + 1;
    piVar1 = piVar1 + 2;
  }
  return piVar1;
}


// ---- FUN_1000_0632 @ 1000:0632

uint * __cdecl16near FUN_1000_0632(uint param_1)

{
  uint *puVar1;
  uint uVar2;
  
  if ((param_1 == 0) || (0xfff4 < param_1)) {
    puVar1 = (uint *)0x0;
  }
  else {
    uVar2 = param_1 + 0xb & 0xfff8;
    if (DAT_111a_04f8 == 0) {
      puVar1 = (uint *)FUN_1000_05f8(uVar2);
    }
    else {
      puVar1 = DAT_111a_04f6;
      if (DAT_111a_04f6 != (uint *)0x0) {
        do {
          if (uVar2 + 0x28 <= *puVar1) {
            puVar1 = (uint *)FUN_1000_0581(puVar1,uVar2);
            return puVar1;
          }
          if (uVar2 <= *puVar1) {
            FUN_1000_0553(puVar1);
            *puVar1 = *puVar1 + 1;
            return puVar1 + 2;
          }
          puVar1 = (uint *)puVar1[3];
        } while (puVar1 != DAT_111a_04f6);
      }
      puVar1 = (uint *)FUN_1000_05bb(uVar2);
    }
  }
  return puVar1;
}


// ---- FUN_1000_06a5 @ 1000:06a5

undefined2 __cdecl16near FUN_1000_06a5(undefined1 *param_1)

{
  undefined2 uVar1;
  undefined1 auStack_102 [256];
  
  if (param_1 < auStack_102) {
    DAT_111a_009e = param_1;
    uVar1 = 0;
  }
  else {
    DAT_111a_0094 = 8;
    uVar1 = 0xffff;
  }
  return uVar1;
}


// ---- FUN_1000_06c9 @ 1000:06c9

uint __cdecl16near FUN_1000_06c9(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1 + DAT_111a_009e;
  if ((param_2 + (uint)CARRY2(param_1,DAT_111a_009e) + (uint)(0xfeff < uVar1) == 0) &&
     ((undefined1 *)(uVar1 + 0x100) < &stack0xfffe)) {
    LOCK();
    UNLOCK();
    uVar2 = DAT_111a_009e;
    DAT_111a_009e = uVar1;
  }
  else {
    DAT_111a_0094 = 8;
    uVar2 = 0xffff;
  }
  return uVar2;
}


// ---- FUN_1000_06fd @ 1000:06fd

void __cdecl16near FUN_1000_06fd(undefined2 param_1)

{
  FUN_1000_06a5(param_1);
  return;
}


// ---- FUN_1000_070b @ 1000:070b

void __cdecl16near FUN_1000_070b(int param_1)

{
  FUN_1000_06c9(param_1,param_1 >> 0xf);
  return;
}


// ---- FUN_1000_071d @ 1000:071d

/* WARNING: Removing unreachable block (ram,0x000107c7) */
/* WARNING: Removing unreachable block (ram,0x00010815) */

int __cdecl16near FUN_1000_071d(int param_1,char *param_2,int param_3)

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
  else if ((*(uint *)(param_1 * 2 + 0x3d2) & 0x8000) == 0) {
    puVar1 = (uint *)(param_1 * 2 + 0x3d2);
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
        iVar4 = FUN_1000_0830(param_1,local_84,iVar6);
        if (iVar4 != iVar6) {
          return ((param_3 - local_8a) + iVar4) - iVar6;
        }
        pcVar5 = local_84;
      }
    }
    iVar4 = (int)pcVar5 - (int)local_84;
    if ((iVar4 != 0) && (iVar6 = FUN_1000_0830(param_1,local_84,iVar4), iVar6 != iVar4)) {
      param_3 = (param_3 + iVar6) - iVar4;
    }
  }
  else {
    param_3 = FUN_1000_0830(param_1,param_2,param_3);
  }
  return param_3;
}


// ---- FUN_1000_0830 @ 1000:0830

undefined2 __cdecl16near FUN_1000_0830(int param_1)

{
  uint *puVar1;
  code *pcVar2;
  undefined2 uVar3;
  undefined1 uVar4;
  
  uVar4 = 0;
  if ((*(uint *)(param_1 * 2 + 0x3d2) & 0x800) != 0) {
    uVar4 = 0;
    FUN_1000_0876(param_1,0,0,2);
  }
  pcVar2 = (code *)swi(0x21);
  uVar3 = (*pcVar2)();
  if ((bool)uVar4) {
    uVar3 = FUN_1000_0387();
  }
  else {
    puVar1 = (uint *)(param_1 * 2 + 0x3d2);
    *puVar1 = *puVar1 | 0x1000;
  }
  return uVar3;
}


// ---- FUN_1000_0876 @ 1000:0876

void __cdecl16near FUN_1000_0876(int param_1)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  
  puVar1 = (uint *)(param_1 * 2 + 0x3d2);
  bVar3 = false;
  *puVar1 = *puVar1 & 0xfdff;
  pcVar2 = (code *)swi(0x21);
  (*pcVar2)();
  if (bVar3) {
    FUN_1000_0387();
  }
  return;
}


// ---- FUN_1000_08a1 @ 1000:08a1

char * FUN_1000_08a1(char param_1,char param_2,uint param_3,char *param_4,uint param_5,uint param_6)

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
    if (param_6 == 0) goto LAB_1000_08eb;
    do {
      uVar3 = (ulong)param_6;
      param_6 = param_6 / param_3;
      uVar3 = uVar3 % (ulong)param_3 << 0x10 | (ulong)param_5;
      param_5 = (uint)(uVar3 / param_3);
      *pbVar6 = (byte)(uVar3 % (ulong)param_3);
      pbVar6 = pbVar6 + 1;
    } while (param_6 != 0);
    while (param_5 != 0) {
LAB_1000_08eb:
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


// ---- FUN_1000_0920 @ 1000:0920

void __cdecl16near FUN_1000_0920(int param_1,undefined2 param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == 10) {
    iVar1 = param_1 >> 0xf;
  }
  else {
    iVar1 = 0;
  }
  FUN_1000_08a1(0x61,1,param_3,param_2,param_1,iVar1);
  return;
}


// ---- FUN_1000_0949 @ 1000:0949

void __cdecl16near
FUN_1000_0949(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  uint in_AX;
  
  FUN_1000_08a1(0x61,in_AX & 0xff00,param_4,param_3,param_1,param_2);
  return;
}


// ---- FUN_1000_0965 @ 1000:0965

void __cdecl16near
FUN_1000_0965(undefined2 param_1,undefined2 param_2,undefined2 param_3,int param_4)

{
  FUN_1000_08a1(0x61,param_4 == 10,param_4,param_3,param_1,param_2);
  return;
}


// ---- FUN_1000_098c @ 1000:098c

void FUN_1000_098c(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  FUN_1000_01e2();
  return;
}


// ---- FUN_1000_09ad @ 1000:09ad

undefined2 __cdecl16near FUN_1000_09ad(int *param_1)

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
      iVar2 = FUN_1000_071d((int)(char)param_1[2],iVar2,iVar3);
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


// ---- FUN_1000_0a2b @ 1000:0a2b

void __cdecl16near FUN_1000_0a2b(undefined2 param_1)

{
  FUN_1000_0c53(&stack0x0004,param_1,0x2a2,0xb61);
  return;
}


// ---- FUN_1000_0a44 @ 1000:0a44

void __cdecl16near FUN_1000_0a44(char param_1,int *param_2)

{
  *param_2 = *param_2 + -1;
  FUN_1000_0a5d((int)param_1,param_2);
  return;
}


// ---- FUN_1000_0a5d @ 1000:0a5d

uint __cdecl16near FUN_1000_0a5d(byte param_1,int *param_2)

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
         (((bVar2 == 10 || (bVar2 == 0xd)) && (iVar4 = FUN_1000_09ad(piVar3), iVar4 != 0)))) {
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
      iVar4 = FUN_1000_09ad(piVar3);
      if (iVar4 != 0) {
        return 0xffff;
      }
    }
  }
  if (((((bVar2 == 10) && ((piVar3[1] & 0x40U) == 0)) &&
       (iVar4 = FUN_1000_0830((int)(char)piVar3[2],0x42c,1), iVar4 != 1)) ||
      (iVar4 = FUN_1000_0830((int)(char)piVar3[2],&param_1,1), iVar4 != 1)) &&
     ((piVar3[1] & 0x200U) == 0)) {
    piVar3[1] = piVar3[1] | 0x10;
    return 0xffff;
  }
  return (uint)bVar2;
}


// ---- FUN_1000_0b4b @ 1000:0b4b

void __cdecl16near FUN_1000_0b4b(undefined2 param_1)

{
  FUN_1000_0a5d(param_1,0x2a2);
  return;
}


// ---- FUN_1000_0b61 @ 1000:0b61

uint FUN_1000_0b61(int *param_1,uint param_2,byte *param_3)

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
          uVar5 = FUN_1000_0a44(*(undefined2 *)param_3,param_1);
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
    else if ((*param_1 == 0) || (iVar3 = FUN_1000_09ad(param_1), iVar3 == 0)) {
      uVar4 = FUN_1000_0830((int)(char)param_1[2],param_3,param_2);
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
      iVar3 = FUN_1000_0a5d((int)(char)*param_3,param_1);
      uVar4 = uVar4 - 1;
      param_3 = param_3 + 1;
    } while (iVar3 != -1);
    param_2 = 0;
  }
  return param_2;
}


// ---- thunk_FUN_1000_098c @ 1000:0c24

void thunk_FUN_1000_098c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_111a_04ac)();
  return;
}


// ---- FUN_1000_0c28 @ 1000:0c28

void FUN_1000_0c28(undefined2 param_1)

{
  byte bVar1;
  undefined1 *unaff_DI;
  undefined2 unaff_ES;
  
  bVar1 = (byte)((uint)param_1 >> 8);
  *unaff_DI = *(undefined1 *)(ulong)((bVar1 >> 4) + 0x435);
  unaff_DI[1] = *(undefined1 *)(ulong)((bVar1 & 0xf) + 0x435);
  unaff_DI[2] = *(undefined1 *)(ulong)((byte)((byte)param_1 >> 4) + 0x435);
  unaff_DI[3] = *(undefined1 *)(ulong)(((byte)param_1 & 0xf) + 0x435);
  return;
}


// ---- FUN_1000_0c53 @ 1000:0c53

void FUN_1000_0c53(void)

{
  undefined2 unaff_SI;
  
  FUN_1000_0cad(unaff_SI);
  return;
}


// ---- FUN_1000_0c6c @ 1000:0c6c

void __cdecl16near FUN_1000_0c6c(void)

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


// ---- FUN_1000_0c79 @ 1000:0c79

void __cdecl16near FUN_1000_0c79(void)

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


// ---- FUN_1000_0c81 @ 1000:0c81

void __cdecl16near FUN_1000_0c81(void)

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


// ---- FUN_1000_0cad @ 1000:0cad

/* WARNING (jumptable): Unable to track spacebase fully for stack */

undefined2 FUN_1000_0cad(void)

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
LAB_1000_0cb6:
  pcVar19 = (char *)*(undefined2 *)(unaff_BP + -0x96);
LAB_1000_0cba:
  pcVar17 = (char *)*(undefined2 *)(unaff_BP + 6);
LAB_1000_0cbd:
  pcVar18 = pcVar17 + 1;
  cVar8 = *pcVar17;
  if (cVar8 == '\0') goto LAB_1000_1152;
  if (cVar8 == '%') {
    *(int *)(unaff_BP + -0x8a) = (int)pcVar18;
    pcVar1 = pcVar18;
    pcVar18 = pcVar17 + 2;
    cVar8 = *pcVar1;
    if (cVar8 != '%') goto code_r0x00010cdf;
  }
  *pcVar19 = cVar8;
  pcVar19 = pcVar19 + 1;
  pcVar1 = (char *)(unaff_BP + -0x55);
  cVar8 = *pcVar1;
  *pcVar1 = *pcVar1 + -1;
  pcVar17 = pcVar18;
  if (*pcVar1 == '\0' || SBORROW1(cVar8,'\x01') != *pcVar1 < '\0') {
    FUN_1000_0c81();
  }
  goto LAB_1000_0cbd;
code_r0x00010cdf:
  *(undefined2 *)(unaff_BP + -0x96) = pcVar19;
  uVar11 = 0;
  *(undefined2 *)(unaff_BP + -0x8c) = 0;
  *(undefined2 *)(unaff_BP + -0x98) = 0;
  *(undefined1 *)(unaff_BP + -0x8d) = 0;
  *(undefined2 *)(unaff_BP + -0x92) = 0xffff;
  *(undefined2 *)(unaff_BP + -0x90) = 0xffff;
  do {
    if (0x5f < (byte)(cVar8 - 0x20U)) goto switchD_1000_0d20_caseD_13;
    cVar4 = *(char *)((byte)(cVar8 - 0x20U) + 0x445);
    cVar15 = cVar4 * '\x02';
    bVar14 = (byte)(uVar11 >> 8);
    iVar24 = unaff_SS;
    switch(cVar4) {
    case '\0':
      if (bVar14 != 0) goto switchD_1000_0d20_caseD_13;
      if (*(char *)(unaff_BP + -0x8d) != '+') {
        *(char *)(unaff_BP + -0x8d) = cVar8;
      }
      break;
    case '\x01':
      if (bVar14 != 0) goto switchD_1000_0d20_caseD_13;
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
        if (bVar14 != 4) goto switchD_1000_0d20_caseD_13;
        *(undefined2 *)(unaff_BP + -0x90) = uVar10;
        uVar11 = 0x500;
      }
      break;
    case '\x03':
      if (bVar14 != 0) goto switchD_1000_0d20_caseD_13;
      *(uint *)(unaff_BP + -0x98) = *(uint *)(unaff_BP + -0x98) | 2;
      break;
    case '\x04':
      if (3 < bVar14) goto switchD_1000_0d20_caseD_13;
      uVar11 = 0x400;
      break;
    case '\x05':
switchD_1000_0d20_caseD_5:
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
switchD_1000_0d20_caseD_13:
          pcVar19 = (char *)*(undefined2 *)(unaff_BP + -0x8a);
          do {
            FUN_1000_0c79();
            pcVar1 = pcVar19;
            pcVar19 = pcVar19 + 1;
          } while (*pcVar1 != '\0');
LAB_1000_1152:
          if (*(char *)(unaff_BP + -0x55) < 'P') {
            FUN_1000_0c81();
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
      if (bVar14 != 0) goto switchD_1000_0d20_caseD_5;
      if ((*(uint *)(unaff_BP + -0x98) & 2) == 0) {
        *(uint *)(unaff_BP + -0x98) = *(uint *)(unaff_BP + -0x98) | 8;
        uVar11 = 0x100;
      }
      break;
    case '\n':
      goto switchD_1000_0d20_caseD_a;
    case '\v':
      uVar10 = CONCAT11(8,cVar15);
      goto LAB_1000_0e5a;
    case '\f':
      uVar10 = CONCAT11(10,cVar15);
      goto LAB_1000_0e5f;
    case '\r':
      uVar10 = CONCAT11(0x10,cVar8 + -0x17);
LAB_1000_0e5a:
      *(undefined1 *)(unaff_BP + -0x8d) = 0;
LAB_1000_0e5f:
      *(undefined1 *)(unaff_BP + -0x93) = 0;
      *(char *)(unaff_BP + -0x94) = cVar8;
      piVar23 = (int *)*(undefined2 *)(unaff_BP + 4);
      iVar16 = *piVar23;
      iVar12 = 0;
      goto LAB_1000_0e82;
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
        FUN_1000_0c28(uVar9,uVar10);
        puVar3 = puVar21;
        puVar21 = (undefined1 *)(unaff_BP + -0x87);
        *puVar3 = 0x3a;
      }
      FUN_1000_0c28();
      *puVar21 = 0;
      *(undefined1 *)(unaff_BP + -0x93) = 0;
      *(uint *)(unaff_BP + -0x98) = *(uint *)(unaff_BP + -0x98) & 0xfffb;
      puVar22 = (uint *)(unaff_BP + -0x88);
      uVar11 = (int)puVar21 - (int)puVar22;
      goto LAB_1000_1007;
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
      thunk_FUN_1000_098c(uVar9,uVar6 & 1,cVar8,unaff_BP + -0x87,uVar11,uVar10);
      *(int *)(unaff_BP + 4) = *(int *)(unaff_BP + 4) + *(int *)(unaff_BP + -4);
      puVar22 = (uint *)(unaff_BP + -0x87);
      goto LAB_1000_1007;
    case '\x10':
      *(undefined2 *)(unaff_BP + 6) = pcVar18;
      *(char *)(unaff_BP + -0x94) = cVar8;
      uVar11 = *(uint *)*(undefined2 *)(unaff_BP + 4);
      *(int *)(unaff_BP + 4) = *(int *)(unaff_BP + 4) + 2;
      puVar22 = (uint *)(unaff_BP + -0x87);
      *puVar22 = uVar11 & 0xff;
      uVar11 = 1;
      goto LAB_1000_1048;
    case '\x11':
      *(undefined2 *)(unaff_BP + 6) = pcVar18;
      *(char *)(unaff_BP + -0x94) = cVar8;
      if ((*(uint *)(unaff_BP + -0x98) & 0x20) == 0) {
        puVar22 = *(uint **)(undefined4 *)*(undefined2 *)(unaff_BP + 4);
        *(int *)(unaff_BP + 4) = *(int *)(unaff_BP + 4) + 2;
        iVar24 = 0x111a;
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
        iVar24 = 0x111a;
        puVar22 = (uint *)&DAT_111a_042e;
      }
      FUN_1000_0c6c();
      if (*(uint *)(unaff_BP + -0x90) < uVar11) {
        uVar11 = *(uint *)(unaff_BP + -0x90);
      }
      goto LAB_1000_1048;
    case '\x12':
      *(undefined2 *)(unaff_BP + 6) = pcVar18;
      if ((*(uint *)(unaff_BP + -0x98) & 0x20) == 0) {
        piVar23 = *(int **)(undefined4 *)*(undefined2 *)(unaff_BP + 4);
        *(int *)(unaff_BP + 4) = *(int *)(unaff_BP + 4) + 2;
        uVar10 = 0x111a;
      }
      else {
        piVar7 = (int *)*(undefined4 *)*(undefined2 *)(unaff_BP + 4);
        uVar10 = (undefined2)((ulong)piVar7 >> 0x10);
        piVar23 = (int *)piVar7;
        *(int *)(unaff_BP + 4) = *(int *)(unaff_BP + 4) + 4;
      }
      *piVar23 = (uint)(byte)(0x50 - *(char *)(unaff_BP + -0x55)) + *(int *)(unaff_BP + -0x58);
      goto LAB_1000_0cb6;
    default:
      goto switchD_1000_0d20_caseD_13;
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
switchD_1000_0d20_caseD_a:
  uVar10 = CONCAT11(10,cVar15);
  *(undefined1 *)(unaff_BP + -0x93) = 1;
  *(char *)(unaff_BP + -0x94) = cVar8;
  piVar23 = (int *)*(undefined2 *)(unaff_BP + 4);
  iVar16 = *piVar23;
  iVar12 = iVar16 >> 0xf;
LAB_1000_0e82:
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
          FUN_1000_0c79();
          iVar24 = iVar24 + -1;
        } while (iVar24 != 0);
      }
      goto LAB_1000_0cba;
    }
  }
  else {
    *(uint *)(unaff_BP + -0x98) = *(uint *)(unaff_BP + -0x98) | 4;
  }
  FUN_1000_08a1(uVar10,*(undefined1 *)(unaff_BP + -0x93),(char)((uint)uVar10 >> 8),puVar22,iVar16,
                iVar12);
  if (*(int *)(unaff_BP + -0x90) < 1) {
LAB_1000_1007:
    if (((*(uint *)(unaff_BP + -0x98) & 8) == 0) || (*(int *)(unaff_BP + -0x92) < 1))
    goto LAB_1000_1029;
  }
  FUN_1000_0c6c();
  if ((char)*puVar22 == '-') {
    uVar11 = uVar11 - 1;
  }
  if (extraout_DX - uVar11 != 0 && (int)uVar11 <= extraout_DX) {
    *(int *)(unaff_BP + -0x8c) = extraout_DX - uVar11;
  }
LAB_1000_1029:
  cVar8 = *(char *)(unaff_BP + -0x8d);
  if ((cVar8 != '\0') && ((char)*puVar22 != '-')) {
    piVar7 = (int *)(unaff_BP + -0x8c);
    iVar16 = *piVar7;
    *piVar7 = *piVar7 + -1;
    *(int *)(unaff_BP + -0x8c) = *(int *)(unaff_BP + -0x8c) + (uint)(iVar16 == 0);
    puVar22 = (uint *)((int)puVar22 + -1);
    *(char *)puVar22 = cVar8;
  }
  FUN_1000_0c6c();
LAB_1000_1048:
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
      FUN_1000_0c79();
    }
  }
  if ((*(uint *)(unaff_BP + -0x98) & 0x40) != 0) {
    FUN_1000_0c79();
    FUN_1000_0c79();
  }
  iVar13 = *(int *)(unaff_BP + -0x8c);
  if (0 < iVar13) {
    iVar12 = iVar12 - iVar13;
    iVar16 = iVar16 - iVar13;
    cVar8 = (char)*puVar22;
    if (((cVar8 == '-') || (cVar8 == ' ')) || (cVar8 == '+')) {
      puVar22 = (uint *)((int)puVar22 + 1);
      FUN_1000_0c79();
      iVar12 = iVar12 + -1;
      iVar16 = iVar16 + -1;
      iVar13 = extraout_DX_00;
    }
    for (; iVar13 != 0; iVar13 = iVar13 + -1) {
      FUN_1000_0c79();
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
        FUN_1000_0c81();
      }
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
  }
  if (0 < iVar16) {
    do {
      FUN_1000_0c79();
      iVar16 = iVar16 + -1;
    } while (iVar16 != 0);
  }
  goto LAB_1000_0cba;
}


// ---- FUN_1000_1176 @ 1000:1176

uint __cdecl16far FUN_1000_1176(void)

{
  uint in_AX;
  byte in_CL;
  uint in_DX;
  
  if (in_CL < 0x10) {
    return in_AX >> (in_CL & 0x1f) | in_DX << (0x10 - in_CL & 0x1f);
  }
  return in_DX >> (in_CL - 0x10 & 0x1f);
}


