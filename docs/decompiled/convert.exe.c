// Decompiled with Ghidra from convert.exe
// Format: New Executable (NE), image base 0000:0000

// ---- FUN_1000_0012 @ 1000:0012

void FUN_1000_0012(void)

{
  code *pcVar1;
  undefined2 uVar2;
  int iVar3;
  uint in_CX;
  undefined2 in_BX;
  undefined2 unaff_SI;
  undefined2 unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_CS;
  bool bVar4;
  undefined4 uVar5;
  undefined2 uVar6;
  
  do {
    do {
      FUN_1000_01f5(unaff_CS,0xff);
      unaff_CS = 0x1020;
      uVar5 = INITTASK();
    } while ((int)uVar5 == 0);
    bVar4 = 0xfeff < in_CX;
    in_CX = in_CX + 0x100;
    DAT_1008_0168 = unaff_ES;
  } while (bVar4);
  DAT_1008_0132 = in_CX;
  DAT_1008_0134 = unaff_SI;
  DAT_1008_0136 = unaff_DI;
  DAT_1008_0138 = in_BX;
  DAT_1008_013a = unaff_ES;
  DAT_1008_013c = (int)((ulong)uVar5 >> 0x10);
  LOCKSEGMENT(0x1020,0xffff);
  uVar6 = 0x56;
  uVar2 = GETVERSION(0x1020);
  DAT_1008_016a = CONCAT11((char)uVar2,(char)((uint)uVar2 >> 8));
  if ((DAT_1000_0010 & 1) == 0) {
    pcVar1 = (code *)swi(0x21);
    DAT_1008_016e = (*pcVar1)();
  }
  else {
    uVar6 = 0x1000;
    DAT_1008_016e = DOS3CALL(0x1000);
  }
  DAT_1008_016c = CONCAT11((char)DAT_1008_016e,(char)((uint)DAT_1008_016e >> 8));
  if ((DAT_1000_0010 & 1) == 0) {
    DAT_1008_0171 = 0;
  }
  WAITEVENT(0x1000,0,uVar6);
  iVar3 = INITAPP(0x1020,DAT_1008_0136);
  if (iVar3 == 0) {
    FUN_1000_0012();
    return;
  }
  FUN_1000_0104();
  FUN_1000_02ec(0x1000);
  FUN_1000_0496();
  FUN_1000_1d72();
  uVar2 = FUN_1000_00d8(DAT_1008_01a2,DAT_1008_01a4,DAT_1008_01a6,DAT_1008_01a8,DAT_1008_01aa);
  FUN_1000_01e7(0x1000,uVar2);
  FUN_1000_055a();
  return;
}


// ---- entry @ 1000:001a

void entry(void)

{
  code *pcVar1;
  undefined2 uVar2;
  int iVar3;
  uint in_CX;
  undefined2 in_BX;
  undefined2 unaff_SI;
  undefined2 unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_CS;
  bool bVar4;
  undefined4 uVar5;
  undefined2 uVar6;
  
  do {
    uVar5 = INITTASK(unaff_CS,0);
    if ((int)uVar5 != 0) {
      bVar4 = in_CX < 0xff00;
      in_CX = in_CX + 0x100;
      DAT_1008_0168 = unaff_ES;
      if (bVar4) {
        DAT_1008_0132 = in_CX;
        DAT_1008_0134 = unaff_SI;
        DAT_1008_0136 = unaff_DI;
        DAT_1008_0138 = in_BX;
        DAT_1008_013a = unaff_ES;
        DAT_1008_013c = (int)((ulong)uVar5 >> 0x10);
        LOCKSEGMENT(0x1020,0xffff);
        uVar6 = 0x56;
        uVar2 = GETVERSION(0x1020);
        DAT_1008_016a = CONCAT11((char)uVar2,(char)((uint)uVar2 >> 8));
        if ((DAT_1000_0010 & 1) == 0) {
          pcVar1 = (code *)swi(0x21);
          DAT_1008_016e = (*pcVar1)();
        }
        else {
          uVar6 = 0x1000;
          DAT_1008_016e = DOS3CALL(0x1000);
        }
        DAT_1008_016c = CONCAT11((char)DAT_1008_016e,(char)((uint)DAT_1008_016e >> 8));
        if ((DAT_1000_0010 & 1) == 0) {
          DAT_1008_0171 = 0;
        }
        WAITEVENT(0x1000,0,uVar6);
        iVar3 = INITAPP(0x1020,DAT_1008_0136);
        if (iVar3 == 0) {
          FUN_1000_0012();
          return;
        }
        FUN_1000_0104();
        FUN_1000_02ec(0x1000);
        FUN_1000_0496();
        FUN_1000_1d72();
        uVar2 = FUN_1000_00d8(DAT_1008_01a2,DAT_1008_01a4,DAT_1008_01a6,DAT_1008_01a8,DAT_1008_01aa)
        ;
        FUN_1000_01e7(0x1000,uVar2);
        FUN_1000_055a();
        return;
      }
    }
    unaff_CS = 0x1000;
    FUN_1000_01f5(0x1020,0xff);
  } while( true );
}


// ---- FUN_1000_00d8 @ 1000:00d8

void __cdecl16far FUN_1000_00d8(void)

{
  FUN_1000_1fb0(DAT_1008_013c,DAT_1008_0138,DAT_1008_013a,DAT_1008_0134,DAT_1008_0136);
  return;
}


// ---- FUN_1000_0104 @ 1000:0104

void __cdecl16far FUN_1000_0104(void)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  undefined2 in_BX;
  int unaff_BP;
  byte *pbVar7;
  byte *pbVar8;
  undefined2 unaff_ES;
  undefined2 uVar9;
  undefined2 uVar10;
  bool bVar11;
  
  uVar9 = 0x1000;
  if ((DAT_1000_0010 & 1) == 0) {
    pcVar5 = (code *)swi(0x21);
    (*pcVar5)(unaff_BP + 1);
  }
  else {
    uVar9 = 0x1020;
    DOS3CALL(0x1000,0x1008);
  }
  uVar10 = 0x1000;
  DAT_1008_0154 = in_BX;
  DAT_1008_0156 = unaff_ES;
  if ((DAT_1000_0010 & 1) == 0) {
    pcVar5 = (code *)swi(0x21);
    (*pcVar5)();
  }
  else {
    uVar9 = 0x1000;
    uVar10 = 0x1020;
    DOS3CALL(0x1000);
  }
  uVar9 = FUN_1000_063e(uVar9);
  if (*(int *)&DAT_1008_0394 != 0) {
    bVar11 = false;
    (*(code *)*(undefined2 *)&DAT_1008_0392)(uVar10);
    if (bVar11) {
      FUN_1000_02e6();
      return;
    }
    (*(code *)*(undefined2 *)&DAT_1008_0392)(uVar10);
  }
  iVar4 = *(int *)0x2c;
  if (iVar4 != 0) {
    pbVar8 = (byte *)0x0;
    do {
      if (*pbVar8 == 0) break;
      iVar6 = 0xd;
      pbVar7 = (byte *)s__C_FILE_INFO__1008_0146;
      bVar11 = false;
      do {
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pbVar3 = pbVar8;
        pbVar8 = pbVar8 + 1;
        pbVar1 = pbVar7;
        pbVar7 = pbVar7 + 1;
        bVar11 = *pbVar1 == *pbVar3;
      } while (bVar11);
      if (bVar11) {
        pbVar7 = (byte *)0x17a;
        goto LAB_1000_01af;
      }
      iVar6 = 0x7fff;
      bVar11 = true;
      do {
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pbVar1 = pbVar8;
        pbVar8 = pbVar8 + 1;
        bVar11 = *pbVar1 == 0;
      } while (!bVar11);
    } while (bVar11);
  }
LAB_1000_01c3:
  FUN_1000_02ae();
  FUN_1000_02ae();
  FUN_1000_02ae();
  return;
LAB_1000_01af:
  pbVar1 = pbVar8;
  pbVar2 = pbVar8 + 1;
  if (*pbVar1 < 0x41) goto LAB_1000_01c3;
  pbVar8 = pbVar8 + 2;
  if (*pbVar2 < 0x41) goto LAB_1000_01c3;
  pbVar3 = pbVar7;
  pbVar7 = pbVar7 + 1;
  *pbVar3 = *pbVar2 + 0xbf | (*pbVar1 + 0xbf) * '\x10';
  goto LAB_1000_01af;
}


// ---- FUN_1000_01e7 @ 1000:01e7

void FUN_1000_01e7(void)

{
  FUN_1000_0224();
  return;
}


// ---- FUN_1000_01f5 @ 1000:01f5

void FUN_1000_01f5(void)

{
  FUN_1000_0224();
  return;
}


// ---- FUN_1000_0224 @ 1000:0224

void __cdecl16far FUN_1000_0224(void)

{
  code *pcVar1;
  undefined2 in_CX;
  int unaff_BP;
  undefined2 unaff_SS;
  char cVar2;
  
  DAT_1008_01b3 = (undefined1)((uint)in_CX >> 8);
  if ((char)in_CX == '\0') {
    FUN_1000_02ae();
    FUN_1000_02ae();
    FUN_1000_1d72(*(undefined2 *)(unaff_BP + 6));
  }
  cVar2 = (char)((uint)in_CX >> 8);
  FUN_1000_02ae();
  FUN_1000_02ae();
  FUN_1000_0285();
  if (cVar2 == '\0') {
    if ((DAT_1000_0010 & 1) == 0) {
      pcVar1 = (code *)swi(0x21);
      (*pcVar1)();
    }
    else {
      DOS3CALL(0x1000);
    }
  }
  return;
}


// ---- FUN_1000_0285 @ 1000:0285

void __cdecl16near FUN_1000_0285(void)

{
  code *pcVar1;
  
  if (DAT_1008_0394 != 0) {
    (*DAT_1008_0392)();
  }
  if ((DAT_1000_0010 & 1) == 0) {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
  }
  else {
    DOS3CALL(0x1000,0x1008);
  }
  return;
}


// ---- FUN_1000_02ae @ 1000:02ae

void __cdecl16near FUN_1000_02ae(void)

{
  int *piVar1;
  int *unaff_SI;
  int *unaff_DI;
  int *piVar2;
  
  while (unaff_SI < unaff_DI) {
    piVar2 = unaff_DI + -2;
    piVar1 = unaff_DI + -1;
    unaff_DI = piVar2;
    if (*piVar2 != 0 || *piVar1 != 0) {
      (*(code *)*piVar2)();
    }
  }
  return;
}


// ---- FUN_1000_02c2 @ 1000:02c2

void __cdecl16far FUN_1000_02c2(void)

{
  FUN_1000_05d3(0xfc);
  FUN_1000_05d3(0xff);
  return;
}


// ---- FUN_1000_02e6 @ 1000:02e6

void FUN_1000_02e6(void)

{
  FUN_1000_055a();
  return;
}


// ---- FUN_1000_02ec @ 1000:02ec

/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_1000_02ec(int param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  undefined2 uVar4;
  uint uVar5;
  uint uVar6;
  undefined2 *puVar7;
  char *pcVar8;
  char *pcVar9;
  int iVar10;
  char *pcVar11;
  undefined2 uVar12;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 in_stack_00000000;
  int aiStack_4 [2];
  
  DAT_1008_01ba = param_1;
  param_1 = 0x2fd;
  DAT_1008_01b8 = in_stack_00000000;
  DAT_1008_01ac = FUN_1000_0610();
  param_1 = (int)((ulong)DAT_1008_01ac >> 0x10);
  uVar4 = (undefined2)DAT_1008_01ac;
  aiStack_4[1] = DAT_1008_0136;
  aiStack_4[0] = param_1;
  iVar3 = GETMODULEFILENAME(unaff_CS,0x104,uVar4);
  *(undefined1 *)(aiStack_4[1] + iVar3) = 0;
  iVar3 = 1;
  DAT_1008_01a2 = 1;
  pcVar8 = (char *)0x81;
LAB_1000_032c:
  do {
    do {
      pcVar1 = pcVar8;
      pcVar8 = pcVar8 + 1;
      cVar2 = *pcVar1;
    } while (cVar2 == ' ');
  } while (cVar2 == '\t');
  if ((cVar2 != '\r') && (cVar2 != '\0')) {
    DAT_1008_01a2 = DAT_1008_01a2 + 1;
    do {
      pcVar8 = pcVar8 + -1;
LAB_1000_033f:
      pcVar1 = pcVar8;
      pcVar8 = pcVar8 + 1;
      cVar2 = *pcVar1;
      if ((cVar2 == ' ') || (cVar2 == '\t')) goto LAB_1000_032c;
      if ((cVar2 == '\r') || (cVar2 == '\0')) break;
      if (cVar2 == '\"') {
LAB_1000_0378:
        do {
          while( true ) {
            while( true ) {
              pcVar1 = pcVar8;
              pcVar8 = pcVar8 + 1;
              cVar2 = *pcVar1;
              if ((cVar2 == '\r') || (cVar2 == '\0')) goto LAB_1000_03a8;
              if (cVar2 == '\"') goto LAB_1000_033f;
              if (cVar2 == '\\') break;
              iVar3 = iVar3 + 1;
            }
            uVar5 = 0;
            do {
              pcVar11 = pcVar8;
              uVar5 = uVar5 + 1;
              pcVar8 = pcVar11 + 1;
            } while (*pcVar11 == '\\');
            if (*pcVar11 == '\"') break;
            iVar3 = iVar3 + uVar5;
            pcVar8 = pcVar11;
          }
          iVar3 = iVar3 + (uVar5 >> 1) + (uint)((uVar5 & 1) != 0);
        } while ((uVar5 & 1) != 0);
        goto LAB_1000_033f;
      }
      if (cVar2 != '\\') {
        iVar3 = iVar3 + 1;
        goto LAB_1000_033f;
      }
      uVar5 = 0;
      do {
        uVar5 = uVar5 + 1;
        pcVar1 = pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (*pcVar1 == '\\');
      if (*pcVar1 == '\"') {
        iVar3 = iVar3 + (uVar5 >> 1) + (uint)((uVar5 & 1) != 0);
        if ((uVar5 & 1) == 0) goto LAB_1000_0378;
        goto LAB_1000_033f;
      }
      iVar3 = iVar3 + uVar5;
    } while( true );
  }
LAB_1000_03a8:
  iVar10 = (DAT_1008_01a2 + 1) * 4;
  iVar3 = -(iVar3 + DAT_1008_01a2 + iVar10 + 1U & 0xfffe);
  DAT_1008_01a4 = (undefined1 *)((int)&param_1 + iVar3);
  pcVar11 = (char *)((int)&param_1 + iVar10 + iVar3);
  *(undefined2 *)(&stack0x0000 + iVar3) = unaff_SS;
  uVar12 = *(undefined2 *)(&stack0x0000 + iVar3);
  *(undefined2 *)((int)&param_1 + iVar3) = (undefined2)DAT_1008_01ac;
  *(undefined2 *)(&stack0x0004 + iVar3) = DAT_1008_01ac._2_2_;
  puVar7 = (undefined2 *)(&stack0x0006 + iVar3);
  *(int *)((int)&stack0x0000 + iVar3) = (int)&param_1 + iVar3;
  *(undefined2 *)((int)aiStack_4 + iVar3 + 2) = 0x1020;
  *(undefined2 *)((int)aiStack_4 + iVar3) = 0x3df;
  DAT_1008_01a6 = unaff_SS;
  uVar4 = FUN_1000_063e();
  uVar4 = *(undefined2 *)&DAT_1008_0168;
  pcVar8 = (char *)0x81;
LAB_1000_03ee:
  do {
    do {
      pcVar1 = pcVar8;
      pcVar8 = pcVar8 + 1;
      cVar2 = *pcVar1;
    } while (cVar2 == ' ');
  } while (cVar2 == '\t');
  if ((cVar2 == '\r') || (cVar2 == '\0')) {
LAB_1000_0481:
    *(undefined2 *)(&stack0x0000 + iVar3) = 0x1020;
    *(undefined2 *)((int)aiStack_4 + iVar3 + 2) = 0x485;
    uVar4 = FUN_1000_063e();
    *puVar7 = 0;
    puVar7[1] = 0;
                    /* WARNING: Could not recover jumptable at 0x10000492. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulong)*(uint *)&DAT_1008_01b8)();
    return;
  }
  *puVar7 = pcVar11;
  puVar7[1] = unaff_SS;
  puVar7 = puVar7 + 2;
  do {
    pcVar8 = pcVar8 + -1;
LAB_1000_040f:
    pcVar1 = pcVar8;
    pcVar8 = pcVar8 + 1;
    cVar2 = *pcVar1;
    if ((cVar2 == ' ') || (cVar2 == '\t')) {
      pcVar1 = pcVar11;
      pcVar11 = pcVar11 + 1;
      *pcVar1 = '\0';
      goto LAB_1000_03ee;
    }
    if ((cVar2 == '\r') || (cVar2 == '\0')) {
LAB_1000_047e:
      *pcVar11 = '\0';
      goto LAB_1000_0481;
    }
    pcVar9 = pcVar8;
    if (cVar2 == '\"') {
LAB_1000_044b:
      while( true ) {
        pcVar8 = pcVar9 + 1;
        cVar2 = *pcVar9;
        if ((cVar2 == '\r') || (cVar2 == '\0')) goto LAB_1000_047e;
        if (cVar2 == '\"') break;
        if (cVar2 == '\\') {
          uVar5 = 0;
          do {
            pcVar9 = pcVar8;
            uVar5 = uVar5 + 1;
            pcVar8 = pcVar9 + 1;
          } while (*pcVar9 == '\\');
          if (*pcVar9 == '\"') {
            for (uVar6 = uVar5 >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
              pcVar1 = pcVar11;
              pcVar11 = pcVar11 + 1;
              *pcVar1 = '\\';
            }
            if ((uVar5 & 1) == 0) break;
            pcVar1 = pcVar11;
            pcVar11 = pcVar11 + 1;
            *pcVar1 = '\"';
            pcVar9 = pcVar8;
          }
          else {
            for (; uVar5 != 0; uVar5 = uVar5 - 1) {
              pcVar1 = pcVar11;
              pcVar11 = pcVar11 + 1;
              *pcVar1 = '\\';
            }
          }
        }
        else {
          pcVar1 = pcVar11;
          pcVar11 = pcVar11 + 1;
          *pcVar1 = cVar2;
          pcVar9 = pcVar8;
        }
      }
      goto LAB_1000_040f;
    }
    if (cVar2 != '\\') {
      pcVar1 = pcVar11;
      pcVar11 = pcVar11 + 1;
      *pcVar1 = cVar2;
      goto LAB_1000_040f;
    }
    uVar5 = 0;
    do {
      uVar5 = uVar5 + 1;
      pcVar1 = pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (*pcVar1 == '\\');
    if (*pcVar1 == '\"') {
      for (uVar6 = uVar5 >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
        pcVar1 = pcVar11;
        pcVar11 = pcVar11 + 1;
        *pcVar1 = '\\';
      }
      pcVar9 = pcVar8;
      if ((uVar5 & 1) == 0) goto LAB_1000_044b;
      pcVar1 = pcVar11;
      pcVar11 = pcVar11 + 1;
      *pcVar1 = '\"';
      goto LAB_1000_040f;
    }
    for (; uVar5 != 0; uVar5 = uVar5 - 1) {
      pcVar1 = pcVar11;
      pcVar11 = pcVar11 + 1;
      *pcVar1 = '\\';
    }
  } while( true );
}


// ---- FUN_1000_0496 @ 1000:0496

void __cdecl16far FUN_1000_0496(void)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  undefined2 *puVar4;
  int iVar5;
  int iVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  char *pcVar12;
  int *piVar13;
  bool bVar14;
  undefined4 uVar15;
  char *pcVar16;
  undefined2 *puVar17;
  
  uVar15 = GETDOSENVIRONMENT();
  iVar6 = (int)((ulong)uVar15 >> 0x10);
  if ((int)uVar15 != 0) {
    iVar6 = 0;
  }
  iVar9 = 0;
  pcVar12 = (char *)0x0;
  iVar5 = -1;
  if (iVar6 != 0) {
    cVar3 = *(char *)0x0;
    while (cVar3 != '\0') {
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar16 = pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (*pcVar16 != '\0');
      iVar9 = iVar9 + 1;
      pcVar16 = pcVar12;
      pcVar12 = pcVar12 + 1;
      cVar3 = *pcVar16;
    }
  }
  pcVar16 = (char *)FUN_1000_0610();
  uVar7 = (undefined2)((ulong)pcVar16 >> 0x10);
  pcVar12 = (char *)pcVar16;
  puVar17 = (undefined2 *)FUN_1000_0610();
  uVar8 = (undefined2)((ulong)puVar17 >> 0x10);
  DAT_1008_01a8 = (undefined2 *)puVar17;
  piVar10 = (int *)0x0;
  do {
    DAT_1008_01aa = (undefined2)((ulong)puVar17 >> 0x10);
    puVar4 = (undefined2 *)puVar17;
    if (iVar9 == 0) {
      *puVar4 = 0;
      puVar4[1] = 0;
      return;
    }
    bVar14 = *piVar10 == s__C_FILE_INFO__1008_0146._0_2_;
    if (bVar14) {
      piVar13 = (int *)s__C_FILE_INFO__1008_0146;
      iVar5 = 6;
      piVar11 = piVar10;
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        piVar2 = piVar13;
        piVar13 = piVar13 + 1;
        piVar1 = piVar11;
        piVar11 = piVar11 + 1;
        bVar14 = *piVar1 == *piVar2;
      } while (bVar14);
      if (!bVar14) goto LAB_1000_0527;
    }
    else {
LAB_1000_0527:
      *puVar4 = pcVar12;
      puVar4[1] = uVar7;
      puVar17 = (undefined2 *)CONCAT22(DAT_1008_01aa,puVar4 + 2);
    }
    do {
      DAT_1008_01aa = (undefined2)((ulong)puVar17 >> 0x10);
      piVar1 = piVar10;
      piVar10 = (int *)((int)piVar10 + 1);
      iVar5 = *piVar1;
      pcVar16 = pcVar12;
      pcVar12 = pcVar12 + 1;
      *pcVar16 = (char)iVar5;
      puVar17 = (undefined2 *)CONCAT22(DAT_1008_01aa,(undefined2 *)puVar17);
    } while ((char)iVar5 != '\0');
    iVar9 = iVar9 + -1;
  } while( true );
}


// ---- FUN_1000_055a @ 1000:055a

int * FUN_1000_055a(void)

{
  int *piVar1;
  char *pcVar2;
  undefined2 in_AX;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  char *pcVar7;
  undefined2 unaff_CS;
  int in_stack_00000000;
  undefined2 uVar8;
  
  uVar8 = in_AX;
  FUN_1000_02c2();
  FUN_1000_05d3(in_AX);
  pcVar3 = (char *)FUN_1000_059c(uVar8);
  if (pcVar3 != (char *)0x0) {
    iVar4 = 9;
    if (*pcVar3 == 'M') {
      iVar4 = 0xf;
    }
    pcVar3 = pcVar3 + iVar4;
    iVar4 = 0x22;
    pcVar7 = pcVar3;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar2 = pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (*pcVar2 != '\r');
    pcVar7[-1] = '\0';
  }
  uVar8 = 0;
  FATALAPPEXIT(unaff_CS,pcVar3,0x1008);
  FATALEXIT(0x1020,0xff,uVar8);
  piVar5 = (int *)&DAT_1008_04a2;
  do {
    piVar1 = piVar5;
    piVar5 = piVar5 + 1;
    piVar6 = piVar5;
    if ((*piVar1 == in_stack_00000000) || (piVar6 = (int *)0x0, *piVar1 == -1)) {
      return piVar6;
    }
    iVar4 = -1;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      piVar1 = piVar5;
      piVar5 = (int *)((int)piVar5 + 1);
    } while ((char)*piVar1 != '\0');
  } while( true );
}


// ---- FUN_1000_059c @ 1000:059c

int * __stdcall16far FUN_1000_059c(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  piVar3 = (int *)&DAT_1008_04a2;
  do {
    piVar1 = piVar3;
    piVar3 = piVar3 + 1;
    piVar4 = piVar3;
    if ((*piVar1 == param_1) || (piVar4 = (int *)0x0, *piVar1 == -1)) {
      return piVar4;
    }
    iVar2 = -1;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      piVar1 = piVar3;
      piVar3 = (int *)((int)piVar3 + 1);
    } while ((char)*piVar1 != '\0');
  } while( true );
}


// ---- FUN_1000_05d3 @ 1000:05d3

void __stdcall16far FUN_1000_05d3(undefined2 param_1)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  undefined2 unaff_ES;
  
  if (DAT_1008_037c != 0) {
    pcVar2 = (char *)FUN_1000_059c(param_1);
    if (pcVar2 != (char *)0x0) {
      iVar3 = -1;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar1 = pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (*pcVar1 != '\0');
      FUN_1000_1d77();
    }
  }
  return;
}


// ---- FUN_1000_0610 @ 1000:0610

void __cdecl16near FUN_1000_0610(void)

{
  undefined2 uVar1;
  int iVar2;
  int in_DX;
  
  uVar1 = DAT_1008_01bc;
  LOCK();
  DAT_1008_01bc = 0x1000;
  UNLOCK();
  iVar2 = FUN_1000_1d9f();
  DAT_1008_01bc = uVar1;
  if (in_DX != 0 || iVar2 != 0) {
    return;
  }
  FUN_1000_055a();
  return;
}


// ---- FUN_1000_063e @ 1000:063e

undefined2 __cdecl16far FUN_1000_063e(void)

{
  undefined2 unaff_SS;
  
  if (___EXPORTEDSTUB != (code)0xb8) {
    return unaff_SS;
  }
  return uRam1000064f;
}


// ---- ___EXPORTEDSTUB @ 1000:064e

undefined2 __cdecl16far ___EXPORTEDSTUB(void)

{
  return 0;
}


// ---- FUN_1000_0662 @ 1000:0662

void __cdecl16near FUN_1000_0662(void)

{
  int *piVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  int in_CX;
  uint uVar5;
  int iVar6;
  int in_BX;
  uint *unaff_SI;
  undefined2 *puVar7;
  bool bVar8;
  
  if ((*(byte *)(in_BX + 2) & 1) != 0) {
    FUN_1000_0759();
    if ((*unaff_SI & 1) != 0) {
      in_CX = (in_CX - *unaff_SI) + -1;
    }
    uVar4 = *(uint *)(in_BX + 4);
    if (uVar4 != 0) {
      if (!CARRY2(in_CX + 2U,uVar4)) {
        uVar2 = FUN_1000_063e();
        uVar4 = *(uint *)&DAT_1008_01bc;
        if (uVar4 == 0x1000) goto LAB_1000_06b4;
        uVar5 = 0x8000;
        while (uVar4 <= uVar5) {
          uVar5 = uVar5 >> 1;
          if (uVar5 == 0) goto LAB_1000_06cd;
        }
        if (uVar5 < 8) goto LAB_1000_06cd;
        uVar4 = uVar5 << 1;
        goto LAB_1000_06b4;
      }
      uVar5 = 0xfff0;
      if (in_CX + 2U + uVar4 == 0) {
        while( true ) {
          bVar8 = false;
          iVar3 = FUN_1000_06f3();
          if (!bVar8) break;
          if (uVar5 == 0xfff0) {
            return;
          }
LAB_1000_06cd:
          uVar4 = 0x10;
LAB_1000_06b4:
          uVar5 = ~(uVar4 - 1);
        }
        iVar6 = iVar3 - *(int *)(in_BX + 4);
        *(int *)(in_BX + 4) = iVar3;
        *(undefined2 *)(in_BX + 10) = unaff_SI;
        piVar1 = (int *)*(int *)(in_BX + 0xc);
        *piVar1 = iVar6 + -1;
        puVar7 = (undefined2 *)((int)piVar1 + iVar6);
        *puVar7 = 0xfffe;
        *(undefined2 *)(in_BX + 0xc) = puVar7;
      }
    }
  }
  return;
}


// ---- FUN_1000_06f3 @ 1000:06f3

void __cdecl16near FUN_1000_06f3(void)

{
  int in_AX;
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  int in_BX;
  long lVar4;
  int iVar5;
  int iVar6;
  
  if ((*(byte *)(in_BX + 2) & 4) != 0) {
LAB_1000_074e:
    FUN_1000_055a();
    return;
  }
  iVar5 = *(int *)(in_BX + 6);
  uVar3 = 0;
  if (in_AX == 0) {
    if ((DAT_1000_0010 & 0x10) != 0) {
      return;
    }
    uVar3 = 1;
  }
  uVar1 = 2;
  if ((DAT_1000_0010 & 1) == 0) {
    uVar1 = 0x20;
  }
  iVar6 = iVar5;
  iVar2 = GLOBALREALLOC(0x1000,uVar1,in_AX,uVar3);
  if (iVar2 != 0) {
    if ((iVar2 != iVar5) || (lVar4 = GLOBALSIZE(0x1020,iVar5,iVar6), lVar4 == 0))
    goto LAB_1000_074e;
    if ((*(byte *)(iVar5 + 2) & 4) != 0) {
      *(int *)(iVar5 + -2) = in_BX + -1;
    }
  }
  return;
}


// ---- FUN_1000_0759 @ 1000:0759

void __cdecl16near FUN_1000_0759(void)

{
  int in_BX;
  uint *puVar1;
  
  puVar1 = (uint *)*(undefined2 *)(in_BX + 10);
  if (puVar1 == (uint *)*(undefined2 *)(in_BX + 0xc)) {
    puVar1 = (uint *)*(undefined2 *)(in_BX + 8);
  }
  while( true ) {
    if (*puVar1 == 0xfffe) break;
    puVar1 = (uint *)((int)puVar1 + (*puVar1 & 0xfffe) + 2);
  }
  return;
}


// ---- FUN_1000_077a @ 1000:077a

uint __cdecl16far FUN_1000_077a(char *param_1)

{
  char *pcVar1;
  uint uVar2;
  char *pcVar3;
  bool bVar4;
  
  pcVar3 = (char *)param_1;
  bVar4 = true;
  uVar2 = 0xffff;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar1 = pcVar3;
    pcVar3 = pcVar3 + 1;
    bVar4 = *pcVar1 == '\0';
  } while (!bVar4);
  uVar2 = ~uVar2;
  if (bVar4) {
    uVar2 = uVar2 - 1;
  }
  return uVar2;
}


// ---- FUN_1000_0794 @ 1000:0794

undefined2 * __cdecl16far FUN_1000_0794(char *param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 in_DX;
  undefined2 uVar3;
  
  while (uVar3 = (undefined2)((ulong)param_1 >> 0x10), (*(byte *)(*param_1 + 0x1e1) & 8) != 0) {
    param_1 = (char *)CONCAT22(uVar3,(char *)param_1 + 1);
  }
  uVar1 = FUN_1000_077a((char *)param_1,uVar3,0,0);
  iVar2 = FUN_1000_1c80((char *)param_1,uVar3,uVar1);
  DAT_1008_4dd4 = *(undefined2 *)(iVar2 + 8);
  DAT_1008_4dd6 = *(undefined2 *)(iVar2 + 10);
  DAT_1008_4dd8 = *(undefined2 *)(iVar2 + 0xc);
  DAT_1008_4dda = *(undefined2 *)(iVar2 + 0xe);
  return (undefined2 *)&DAT_1008_4dd4;
}


// ---- FUN_1000_07f2 @ 1000:07f2

void __cdecl16far FUN_1000_07f2(char *param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined4 local_c;
  undefined4 local_8;
  
  uVar5 = (undefined2)((ulong)param_3 >> 0x10);
  iVar3 = (int)param_3;
  local_c = (char *)CONCAT22(*(undefined2 *)(iVar3 + 8),(char *)*(undefined2 *)(iVar3 + 6));
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  pcVar4 = (char *)param_1;
  *param_1 = '0';
  local_8 = (char *)CONCAT22(uVar6,pcVar4 + 1);
  for (; pcVar2 = local_8, 0 < param_2; param_2 = param_2 + -1) {
    if (*local_c == '\0') {
      cVar1 = '0';
    }
    else {
      cVar1 = *local_c;
      local_c = (char *)CONCAT22(local_c._2_2_,(char *)local_c + 1);
    }
    local_8 = (char *)CONCAT22(local_8._2_2_,(char *)local_8 + 1);
    *pcVar2 = cVar1;
  }
  *local_8 = '\0';
  if ((-1 < param_2) && ('4' < *local_c)) {
    while( true ) {
      local_8 = (char *)CONCAT22(local_8._2_2_,(char *)local_8 + -1);
      if (*local_8 != '9') break;
      *local_8 = '0';
    }
    *local_8 = *local_8 + '\x01';
  }
  if (*param_1 == '1') {
    *(int *)(iVar3 + 2) = *(int *)(iVar3 + 2) + 1;
  }
  else {
    FUN_1000_08da(pcVar4,uVar6,pcVar4 + 1,uVar6);
  }
  return;
}


// ---- FUN_1000_08a0 @ 1000:08a0

undefined4 __stdcall16far FUN_1000_08a0(uint param_1,uint param_2,uint param_3,uint param_4)

{
  return CONCAT22(((param_2 >> 8) - (param_4 >> 8)) - (uint)(param_1 < param_3),param_1 - param_3);
}


// ---- FUN_1000_08c0 @ 1000:08c0

uint __cdecl16far FUN_1000_08c0(char *param_1)

{
  char *pcVar1;
  uint uVar2;
  char *pcVar3;
  bool bVar4;
  
  pcVar3 = (char *)param_1;
  bVar4 = true;
  uVar2 = 0xffff;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar1 = pcVar3;
    pcVar3 = pcVar3 + 1;
    bVar4 = *pcVar1 == '\0';
  } while (!bVar4);
  uVar2 = ~uVar2;
  if (bVar4) {
    uVar2 = uVar2 - 1;
  }
  return uVar2;
}


// ---- FUN_1000_08da @ 1000:08da

void __cdecl16far FUN_1000_08da(char *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  bool bVar9;
  
  uVar8 = (undefined2)((ulong)param_2 >> 0x10);
  pcVar5 = (char *)param_2;
  bVar9 = true;
  uVar3 = 0xffff;
  pcVar6 = pcVar5;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar1 = pcVar6;
    pcVar6 = pcVar6 + 1;
    bVar9 = *pcVar1 == '\0';
  } while (!bVar9);
  uVar3 = ~uVar3;
  uVar7 = (undefined2)((ulong)param_1 >> 0x10);
  pcVar6 = (char *)param_1;
  if (bVar9) {
    if (((ulong)param_1 & 1) != 0) {
      pcVar6 = pcVar6 + 1;
      pcVar5 = pcVar5 + 1;
      *param_1 = *param_2;
      uVar3 = uVar3 - 1;
    }
  }
  else {
    pcVar6 = pcVar6 + 2;
    pcVar5 = pcVar5 + 2;
    *(undefined2 *)param_1 = *(undefined2 *)param_2;
    uVar3 = uVar3 - 1;
  }
  for (uVar4 = uVar3 >> 1; uVar4 != 0; uVar4 = uVar4 - 1) {
    pcVar2 = pcVar6;
    pcVar6 = pcVar6 + 2;
    pcVar1 = pcVar5;
    pcVar5 = pcVar5 + 2;
    *(undefined2 *)pcVar2 = *(undefined2 *)pcVar1;
  }
  for (uVar3 = (uint)((uVar3 & 1) != 0); uVar3 != 0; uVar3 = uVar3 - 1) {
    pcVar2 = pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar1 = pcVar5;
    pcVar5 = pcVar5 + 1;
    *pcVar2 = *pcVar1;
  }
  return;
}


// ---- FUN_1000_0916 @ 1000:0916

undefined2 * __cdecl16far FUN_1000_0916(undefined2 *param_1,undefined1 param_2,uint param_3)

{
  undefined2 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined2 *puVar5;
  int iVar6;
  
  if (param_3 != 0) {
    iVar6 = (int)((ulong)param_1 >> 0x10);
    uVar2 = -(int)(undefined2 *)param_1;
    uVar4 = 0;
    uVar3 = param_3;
    if (uVar2 != 0) {
      uVar3 = (uVar2 - param_3 & -(uint)(uVar2 < param_3)) + param_3;
      uVar4 = param_3 - uVar3;
    }
    puVar5 = (undefined2 *)param_1;
    for (uVar2 = uVar3 >> 1; uVar2 != 0; uVar2 = uVar2 - 1) {
      puVar1 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar1 = CONCAT11(param_2,param_2);
    }
    for (uVar3 = (uint)((uVar3 & 1) != 0); uVar3 != 0; uVar3 = uVar3 - 1) {
      puVar1 = puVar5;
      puVar5 = (undefined2 *)((int)puVar5 + 1);
      *(undefined1 *)puVar1 = param_2;
    }
    if (uVar4 != 0) {
      for (uVar3 = uVar4 >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
        puVar1 = puVar5;
        puVar5 = puVar5 + 1;
        *puVar1 = CONCAT11(param_2,param_2);
      }
      for (uVar4 = (uint)((uVar4 & 1) != 0); uVar4 != 0; uVar4 = uVar4 - 1) {
        puVar1 = puVar5;
        puVar5 = (undefined2 *)((int)puVar5 + 1);
        *(undefined1 *)puVar1 = param_2;
      }
    }
  }
  return (undefined2 *)param_1;
}


// ---- FUN_1000_095e @ 1000:095e

undefined2 * __cdecl16far FUN_1000_095e(undefined2 *param_1,undefined2 *param_2,uint param_3)

{
  undefined1 *puVar1;
  undefined2 *puVar2;
  undefined1 *puVar3;
  undefined2 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined2 *puVar8;
  undefined1 *puVar9;
  undefined2 *puVar10;
  undefined1 *puVar11;
  undefined2 *puVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  
  puVar10 = (undefined2 *)param_1;
  if (param_3 != 0) {
    iVar14 = (int)((ulong)param_2 >> 0x10);
    puVar8 = (undefined2 *)param_2;
    iVar13 = (int)((ulong)param_1 >> 0x10);
    lVar15 = FUN_1000_08a0(puVar10,iVar13,puVar8,iVar14);
    puVar12 = puVar10;
    if ((lVar15 < 0) || ((uint)((uint)lVar15 < param_3) <= (uint)((ulong)lVar15 >> 0x10))) {
      while( true ) {
        uVar6 = ~(uint)puVar12;
        uVar6 = ((param_3 - 1) - uVar6 & -(uint)(param_3 - 1 < uVar6)) + uVar6;
        uVar7 = ~(uint)puVar8;
        uVar6 = (uVar6 - uVar7 & -(uint)(uVar6 < uVar7)) + uVar7 + 1;
        param_3 = param_3 - uVar6;
        for (uVar7 = uVar6 >> 1; uVar7 != 0; uVar7 = uVar7 - 1) {
          puVar4 = puVar12;
          puVar12 = puVar12 + 1;
          puVar2 = puVar8;
          puVar8 = puVar8 + 1;
          *puVar4 = *puVar2;
        }
        for (uVar6 = (uint)((uVar6 & 1) != 0); uVar6 != 0; uVar6 = uVar6 - 1) {
          puVar4 = puVar12;
          puVar12 = (undefined2 *)((int)puVar12 + 1);
          puVar2 = puVar8;
          puVar8 = (undefined2 *)((int)puVar8 + 1);
          *(undefined1 *)puVar4 = *(undefined1 *)puVar2;
        }
        if (param_3 == 0) break;
        if (puVar8 == (undefined2 *)0x0) {
          iVar14 = iVar14 + 0x4c;
        }
        if (puVar12 == (undefined2 *)0x0) {
          iVar13 = iVar13 + 0x4c;
        }
      }
    }
    else {
      uVar6 = param_3 - 1;
      puVar9 = (undefined1 *)((int)puVar8 + uVar6);
      if (CARRY2((uint)puVar8,uVar6)) {
        iVar14 = iVar14 + 0x4c;
      }
      puVar11 = (undefined1 *)((int)puVar10 + uVar6);
      if (CARRY2((uint)puVar10,uVar6)) {
        iVar13 = iVar13 + 0x4c;
      }
      while( true ) {
        puVar5 = puVar9 + ((int)(puVar11 +
                                ((int)(param_3 - 1) - (int)puVar11 &
                                -(uint)((undefined1 *)(param_3 - 1) < puVar11))) - (int)puVar9 &
                          -(uint)(puVar11 + ((int)(param_3 - 1) - (int)puVar11 &
                                            -(uint)((undefined1 *)(param_3 - 1) < puVar11)) < puVar9
                                 )) + 1;
        param_3 = param_3 - (int)puVar5;
        for (; puVar5 != (undefined1 *)0x0; puVar5 = puVar5 + -1) {
          puVar3 = puVar11;
          puVar11 = puVar11 + -1;
          puVar1 = puVar9;
          puVar9 = puVar9 + -1;
          *puVar3 = *puVar1;
        }
        if (param_3 == 0) break;
        if (puVar9 == (undefined1 *)0xffff) {
          iVar14 = iVar14 + -0x4c;
        }
        if (puVar11 == (undefined1 *)0xffff) {
          iVar13 = iVar13 + -0x4c;
        }
      }
    }
  }
  return puVar10;
}


// ---- FUN_1000_0a76 @ 1000:0a76

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined4 __cdecl16near FUN_1000_0a76(void)

{
  undefined2 *puVar1;
  char *pcVar2;
  double *pdVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  bool bVar13;
  unkbyte10 Var14;
  unkbyte10 Var15;
  char *pcVar16;
  byte bVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  undefined2 uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  undefined2 *unaff_SI;
  uint uVar28;
  uint uVar29;
  double *pdVar30;
  char *pcVar31;
  bool bVar32;
  bool bVar33;
  bool bVar34;
  undefined2 in_FPUControlWord;
  longdouble lVar35;
  
  pdVar30 = (double *)&DAT_1008_02e2;
  for (iVar18 = 4; Var14 = _DAT_1008_02e2, iVar18 != 0; iVar18 = iVar18 + -1) {
    pdVar3 = pdVar30;
    pdVar30 = (double *)((int)pdVar30 + 2);
    puVar1 = unaff_SI;
    unaff_SI = unaff_SI + 1;
    *(undefined2 *)pdVar3 = *puVar1;
  }
  uVar19 = DAT_1008_02e2._6_2_;
                    /* WARNING: Ignoring partial resolution of indirect */
  DAT_1008_02e2._7_1_ = DAT_1008_02e2._7_1_ & 0x7f;
  Var15 = _DAT_1008_02e2;
  DAT_1008_02e2 = ABS((double)Var14);
  uVar24 = 0x20;
  if (((DAT_1008_02e2._0_2_ == 0 && DAT_1008_02e2._2_2_ == 0) && DAT_1008_02e2._4_2_ == 0) &&
      DAT_1008_02e2._6_2_ == 0) {
    DAT_1008_02ee = 0x3001;
    _DAT_1008_02e2 = (longdouble)Var15;
    return 1;
  }
  if ((int)uVar19 < 0) {
    uVar24 = 0x2d;
  }
  if ((~uVar19 & 0x7ff0) == 0) {
    _DAT_1008_02e2 = (longdouble)Var15;
    return 0x10000;
  }
  DAT_1008_031b = (undefined1)in_FPUControlWord;
  DAT_1008_031d._0_1_ = DAT_1008_031b;
  lVar35 = (longdouble)DAT_1008_02e2;
  DAT_1008_02e2._7_1_ = (byte)((unkuint10)lVar35 >> 0x38);
  DAT_1008_02ea = (uint)((unkuint10)lVar35 >> 0x40);
  lVar12 = (ulong)DAT_1008_02ea * 0x4d10 + (ulong)((DAT_1008_02ea >> 8) * 0x4d);
  uVar19 = (uint)lVar12;
  iVar18 = ((int)((ulong)lVar12 >> 0x10) + (uint)CARRY2(uVar19,(uint)DAT_1008_02e2._7_1_ * 0x9a) +
           -0x1343) - (uint)(uVar19 + (uint)DAT_1008_02e2._7_1_ * 0x9a < 0x12f4);
  _DAT_1008_02e2 = lVar35;
  _DAT_1008_031b = in_FPUControlWord;
  FUN_1000_0d37(iVar18,uVar24);
  DAT_1008_0319 =
       (uint)(_DAT_1000_0a28 < lVar35) << 8 | (uint)(NAN(_DAT_1000_0a28) || NAN(lVar35)) << 10 |
       (uint)(_DAT_1000_0a28 == lVar35) << 0xe;
  if (_DAT_1000_0a28 < lVar35 || (_DAT_1000_0a28 == lVar35) != 0) {
    iVar18 = iVar18 + 1;
    lVar35 = _DAT_1000_0a32 * lVar35;
  }
  DAT_1008_02e2._0_2_ = SUB102(lVar35,0);
  DAT_1008_02e2._2_2_ = (uint)((unkuint10)lVar35 >> 0x10);
  DAT_1008_02e2._4_2_ = (uint)((unkuint10)lVar35 >> 0x20);
  DAT_1008_02e2._6_2_ = (uint)((unkuint10)lVar35 >> 0x30);
  DAT_1008_02ea = (uint)((unkuint10)lVar35 >> 0x40);
  bVar32 = false;
  bVar17 = 0;
  for (iVar20 = -(DAT_1008_02ea + 0xc002); iVar20 != 0; iVar20 = iVar20 + -1) {
    uVar19 = DAT_1008_02e2._6_2_ & 1;
    DAT_1008_02e2._6_2_ = DAT_1008_02e2._6_2_ >> 1;
    bVar32 = (bVar17 & 1) != 0;
    bVar17 = (byte)(CONCAT11((DAT_1008_02e2._0_2_ & 1) != 0,bVar17) >> 1);
    DAT_1008_02e2._0_2_ = (uint)(CONCAT12((DAT_1008_02e2._2_2_ & 1) != 0,DAT_1008_02e2._0_2_) >> 1);
    DAT_1008_02e2._2_2_ = (uint)(CONCAT12((DAT_1008_02e2._4_2_ & 1) != 0,DAT_1008_02e2._2_2_) >> 1);
    DAT_1008_02e2._4_2_ = (uint)(CONCAT12(uVar19 != 0,DAT_1008_02e2._4_2_) >> 1);
  }
  uVar28 = DAT_1008_02e2._0_2_ + 0x39a + (uint)bVar32;
  uVar19 = (uint)(0xfc65 < DAT_1008_02e2._0_2_ || CARRY2(DAT_1008_02e2._0_2_ + 0x39a,(uint)bVar32));
  uVar26 = DAT_1008_02e2._2_2_ + uVar19;
  uVar19 = (uint)CARRY2(DAT_1008_02e2._2_2_,uVar19);
  uVar22 = DAT_1008_02e2._4_2_ + uVar19;
  uVar19 = DAT_1008_02e2._6_2_ + CARRY2(DAT_1008_02e2._4_2_,uVar19);
  iVar20 = 0x10;
  pcVar16 = (char *)((int)(undefined2 *)&DAT_1008_02ee + 1);
  _DAT_1008_02e2 = lVar35;
  do {
    pcVar31 = pcVar16;
    iVar21 = iVar20;
    bVar33 = (int)((uint)bVar17 << 8) < 0;
    uVar8 = (ulong)CONCAT12(bVar33,uVar28) << 1;
    bVar32 = (uVar8 & 0x10000) != 0;
    uVar9 = (ulong)CONCAT12(bVar32,uVar26) << 1;
    bVar34 = (uVar9 & 0x10000) != 0;
    uVar10 = (ulong)CONCAT12(bVar34,uVar22) << 1;
    bVar13 = (uVar10 & 0x10000) != 0;
    uVar11 = (ulong)CONCAT12(bVar13,uVar19) << 1;
    uVar29 = (uint)((uVar8 & 0xffff | (ulong)bVar33) << 1) | (uint)((char)(bVar17 * '\x02') < '\0');
    uVar27 = (uint)((uVar9 & 0xffff | (ulong)bVar32) << 1) | (uint)((uVar8 & 0x8000) != 0);
    uVar23 = (uint)((uVar10 & 0xffff | (ulong)bVar34) << 1) | (uint)((uVar9 & 0x8000) != 0);
    uVar25 = (uint)((uVar11 & 0xffff | (ulong)bVar13) << 1) | (uint)((uVar10 & 0x8000) != 0);
    uVar4 = (uint)CARRY1(bVar17 * '\x04',bVar17);
    uVar5 = uVar29 + uVar28;
    uVar29 = (uint)(CARRY2(uVar29,uVar28) || CARRY2(uVar5,uVar4));
    uVar6 = uVar27 + uVar26;
    uVar27 = (uint)(CARRY2(uVar27,uVar26) || CARRY2(uVar6,uVar29));
    uVar7 = uVar23 + uVar22;
    uVar23 = (uint)(CARRY2(uVar23,uVar22) || CARRY2(uVar7,uVar27));
    bVar34 = CARRY2(uVar25,uVar19);
    uVar25 = uVar25 + uVar19;
    bVar32 = (char)(bVar17 * '\x05') < '\0';
    bVar17 = bVar17 * '\n';
    uVar8 = (ulong)CONCAT12(bVar32,uVar5 + uVar4) << 1;
    uVar28 = (uint)uVar8 | (uint)bVar32;
    bVar32 = (uVar8 & 0x10000) != 0;
    uVar8 = (ulong)CONCAT12(bVar32,uVar6 + uVar29) << 1;
    uVar26 = (uint)uVar8 | (uint)bVar32;
    bVar32 = (uVar8 & 0x10000) != 0;
    uVar8 = (ulong)CONCAT12(bVar32,uVar7 + uVar27) << 1;
    uVar22 = (uint)uVar8 | (uint)bVar32;
    bVar32 = (uVar8 & 0x10000) != 0;
    uVar8 = (ulong)CONCAT12(bVar32,uVar25 + uVar23) << 1;
    uVar19 = (uint)uVar8 | (uint)bVar32;
    *pcVar31 = (((((uVar11 & 0x10000) != 0) << 1 | (uVar11 & 0x8000) != 0) +
                (bVar34 || CARRY2(uVar25,uVar23))) * '\x02' | (uVar8 & 0x10000) != 0) + 0x30;
    iVar20 = iVar21 + -1;
    pcVar16 = pcVar31 + 1;
  } while (iVar20 != 0);
  iVar21 = iVar21 + -2;
  do {
    if (iVar21 == 0) break;
    iVar21 = iVar21 + -1;
    pcVar2 = pcVar31;
    pcVar31 = pcVar31 + -1;
  } while (*pcVar2 == '0');
  DAT_1008_02ee = CONCAT11(DAT_1008_02ee._1_1_,(char)iVar21 + '\x12');
  return CONCAT22(iVar18,1);
}


// ---- FUN_1000_0d37 @ 1000:0d37

void __cdecl16near FUN_1000_0d37(void)

{
  uint unaff_DI;
  uint uStack_2;
  
  uStack_2 = unaff_DI;
  if ((int)unaff_DI < 0) {
    uStack_2 = -unaff_DI;
  }
  for (; uStack_2 != 0; uStack_2 = uStack_2 >> 3) {
  }
  return;
}


// ---- FUN_1000_102c @ 1000:102c

void FUN_1000_102c(int param_1,uint param_2,undefined2 *param_3)

{
  uint uVar1;
  undefined2 uVar2;
  unkbyte10 in_ST0;
  uint uStack_e;
  code *local_8;
  
  if (param_2 != 0) {
    if ((int)param_2 < 0) {
      param_2 = -param_2;
    }
    local_8 = (code *)0x10ca;
    uVar2 = (undefined2)((ulong)param_3 >> 0x10);
    uStack_e = param_2;
    if (param_1 == 0) {
      local_8 = (code *)0x10c0;
      in_ST0 = *(unkbyte10 *)((undefined2 *)param_3 + 1);
    }
    while (uStack_e != 0) {
      uVar1 = uStack_e & 7;
      uStack_e = uStack_e >> 3;
      if (uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x10001096. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*local_8)();
        return;
      }
    }
    if (param_1 == 0) {
      *(unkbyte10 *)((undefined2 *)param_3 + 1) = in_ST0;
      *param_3 = 0;
    }
  }
  return;
}


// ---- FUN_1000_1286 @ 1000:1286

uint * FUN_1000_1286(uint *param_1,int param_2,byte *param_3)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  byte bVar9;
  uint uVar8;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  uint uVar13;
  uint uVar14;
  undefined2 unaff_SS;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  undefined4 uVar18;
  int local_e;
  
  local_e = param_2;
  pbVar12 = (byte *)param_3;
  uVar3 = 0;
  uVar14 = 0;
  uVar10 = 0;
  uVar5 = 0;
  uVar8 = (uint)*param_3;
  while( true ) {
    pbVar12 = pbVar12 + 1;
    local_e = local_e + -1;
    if (local_e == 0) break;
    uVar13 = uVar5;
    uVar6 = uVar10;
    FUN_1000_1334();
    uVar18 = FUN_1000_1334();
    uVar8 = (uint)CARRY2((uint)((ulong)uVar18 >> 0x10),uVar8);
    uVar4 = uVar13 + uVar5 + uVar8;
    uVar13 = (uint)(CARRY2(uVar13,uVar5) || CARRY2(uVar13 + uVar5,uVar8));
    bVar17 = CARRY2(uVar6,uVar10);
    uVar6 = uVar6 + uVar10;
    uVar11 = uVar6 + uVar13;
    bVar15 = CARRY2((uint)uVar18,uVar3);
    uVar1 = (uint)uVar18 + uVar3;
    uVar18 = FUN_1000_1334();
    bVar7 = (byte)((ulong)uVar18 >> 0x10);
    bVar16 = CARRY1(bVar7,*pbVar12);
    bVar9 = (byte)((ulong)uVar18 >> 0x18);
    uVar8 = CONCAT11(bVar9 + bVar16,bVar7 + *pbVar12);
    uVar10 = (uint)CARRY1(bVar9,bVar16);
    uVar5 = uVar4 + uVar10;
    uVar3 = (uint)CARRY2(uVar4,uVar10);
    uVar10 = uVar11 + uVar3;
    uVar4 = (uint)CARRY2(uVar11,uVar3);
    uVar3 = (uint)uVar18 + uVar4;
    uVar14 = uVar14 * 2 + (uint)(bVar15 || CARRY2(uVar1,(uint)(bVar17 || CARRY2(uVar6,uVar13)))) +
             (uint)CARRY2((uint)uVar18,uVar4);
  }
  uVar13 = 0x404e;
  while (uVar6 = uVar5, uVar4 = uVar3, uVar14 == 0) {
    uVar13 = uVar13 - 0x10;
    uVar3 = uVar10;
    uVar5 = uVar8;
    uVar8 = 0;
    uVar10 = uVar6;
    uVar14 = uVar4;
  }
  for (; -1 < (int)uVar14; uVar14 = uVar14 << 1 | (uint)((uVar2 & 0x10000) != 0)) {
    bVar17 = (int)uVar8 < 0;
    uVar8 = uVar8 << 1;
    uVar2 = (ulong)CONCAT12(bVar17,uVar6) << 1;
    uVar6 = (uint)uVar2 | (uint)bVar17;
    bVar17 = (uVar2 & 0x10000) != 0;
    uVar2 = (ulong)CONCAT12(bVar17,uVar10) << 1;
    uVar10 = (uint)uVar2 | (uint)bVar17;
    bVar17 = (uVar2 & 0x10000) != 0;
    uVar2 = (ulong)CONCAT12(bVar17,uVar4) << 1;
    uVar4 = (uint)uVar2 | (uint)bVar17;
    uVar13 = uVar13 - 1;
  }
  param_1[5] = uVar13;
  param_1[4] = uVar14;
  param_1[3] = uVar4;
  param_1[2] = uVar10;
  param_1[1] = uVar6;
  *param_1 = uVar8;
  return param_1;
}


// ---- FUN_1000_1334 @ 1000:1334

undefined4 __cdecl16near FUN_1000_1334(void)

{
  int in_AX;
  int in_DX;
  uint in_BX;
  
  return CONCAT22(in_DX << 1,in_AX << 1 | (uint)((in_BX & 0x8000) != 0));
}


// ---- FUN_1000_1340 @ 1000:1340

/* WARNING: Removing unreachable block (ram,0x10001396) */
/* WARNING: Removing unreachable block (ram,0x1000139f) */

int FUN_1000_1340(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
                 undefined2 param_5,double *param_6)

{
  int iVar1;
  undefined2 unaff_SS;
  longdouble local_c;
  
  iVar1 = FUN_1000_13a8(param_1,param_2,param_3,param_4,param_5,&local_c,unaff_SS);
  *param_6 = (double)local_c;
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  return iVar1;
}


// ---- FUN_1000_13a8 @ 1000:13a8

uint FUN_1000_13a8(undefined2 param_1,byte *param_2,int *param_3,uint *param_4)

{
  byte *pbVar1;
  char *pcVar2;
  uint *puVar3;
  bool bVar4;
  int iVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  char *pcVar10;
  byte *pbVar11;
  uint *puVar12;
  undefined2 uVar13;
  undefined2 unaff_SS;
  int iVar14;
  bool bVar15;
  char local_36 [26];
  uint local_1c;
  uint local_1a;
  int local_18;
  uint local_16;
  byte *local_14;
  int local_12;
  uint local_10;
  uint local_e;
  uint local_c;
  uint local_a;
  uint local_8;
  uint local_6;
  uint local_4;
  
  iVar14 = (int)((ulong)param_2 >> 0x10);
  local_14 = (byte *)param_2;
  local_10 = 0;
  local_12 = iVar14;
  local_16 = 0;
  local_1a = 0;
  local_18 = 0;
  local_1c = 0x19;
  pcVar10 = local_36;
  pbVar11 = local_14;
  do {
    do {
      pbVar9 = pbVar11;
      pbVar11 = pbVar9 + 1;
      bVar6 = *pbVar9;
    } while (bVar6 == 0x20);
  } while (((bVar6 == 9) || (bVar6 == 10)) || (bVar6 == 0xd));
  puVar12 = (uint *)param_4;
  uVar13 = (undefined2)((ulong)param_4 >> 0x10);
  if (bVar6 != 0) {
    if (bVar6 == 0x2b) {
LAB_1000_13f7:
      pbVar1 = pbVar11;
      pbVar11 = pbVar9 + 2;
      bVar6 = *pbVar1;
    }
    else if (bVar6 == 0x2d) {
      local_16 = 0x8000;
      goto LAB_1000_13f7;
    }
    if ((0x2f < bVar6) && (bVar6 < 0x3a)) {
      while (bVar6 == 0x30) {
        pbVar1 = pbVar11;
        pbVar11 = pbVar11 + 1;
        bVar6 = *pbVar1;
      }
      if (bVar6 != 0) {
        iVar5 = local_18;
        if (bVar6 != 0x2e) {
          while ((0x2f < bVar6 && (bVar6 < 0x3a))) {
            pcVar2 = pcVar10;
            pcVar10 = pcVar10 + 1;
            *pcVar2 = bVar6 - 0x30;
            local_1c = local_1c + -1;
            iVar5 = local_18;
            if (local_1c == 0) goto LAB_1000_1445;
            pbVar1 = pbVar11;
            pbVar11 = pbVar11 + 1;
            bVar6 = *pbVar1;
          }
          if (bVar6 == 0x2e) {
            do {
              pbVar1 = pbVar11;
              pbVar11 = pbVar11 + 1;
              bVar6 = *pbVar1;
LAB_1000_145f:
              if ((bVar6 < 0x30) || (0x39 < bVar6)) goto LAB_1000_147b;
              pcVar2 = pcVar10;
              pcVar10 = pcVar10 + 1;
              *pcVar2 = bVar6 - 0x30;
              local_18 = local_18 + -1;
              local_1c = local_1c + -1;
            } while (local_1c != 0);
            goto LAB_1000_1472;
          }
          goto LAB_1000_147b;
        }
        do {
          local_18 = iVar5;
          bVar6 = *pbVar11;
LAB_1000_1424:
          pbVar11 = pbVar11 + 1;
          iVar5 = local_18 + -1;
        } while (bVar6 == 0x30);
        if (bVar6 != 0) goto LAB_1000_145f;
      }
      local_14 = pbVar11 + -1;
      goto LAB_1000_15dd;
    }
    if ((bVar6 == 0x2e) && ((bVar6 = *pbVar11, 0x2f < bVar6 && (bVar6 < 0x3a)))) goto LAB_1000_1424;
  }
  local_10 = 4;
  goto LAB_1000_15dd;
  while (iVar5 = local_18 + 1, bVar6 < 0x3a) {
LAB_1000_1445:
    local_18 = iVar5;
    pbVar1 = pbVar11;
    pbVar11 = pbVar11 + 1;
    bVar6 = *pbVar1;
    if (bVar6 < 0x30) break;
  }
  if (bVar6 == 0x2e) {
LAB_1000_1472:
    do {
      pbVar1 = pbVar11;
      pbVar11 = pbVar11 + 1;
      bVar6 = *pbVar1;
      if (bVar6 < 0x30) break;
    } while (bVar6 < 0x3a);
  }
LAB_1000_147b:
  local_1c = 0x19 - local_1c;
  local_14 = pbVar11 + -1;
  if ((((bVar6 == 0x45) || (bVar6 == 0x65)) || (bVar6 == 0x44)) || (bVar6 == 100)) {
    pbVar9 = pbVar11 + 1;
    bVar6 = *pbVar11;
    if (bVar6 == 0x2b) {
LAB_1000_14aa:
      pbVar1 = pbVar9;
      pbVar9 = pbVar11 + 2;
      bVar6 = *pbVar1;
    }
    else if (bVar6 == 0x2d) {
      local_1a = 0xffff;
      goto LAB_1000_14aa;
    }
    if ((0x2f < bVar6) && (bVar6 < 0x3a)) {
      uVar7 = bVar6 - 0x30;
      uVar8 = uVar7;
      do {
        pbVar1 = pbVar9;
        pbVar9 = pbVar9 + 1;
        bVar6 = *pbVar1;
        if ((bVar6 < 0x30) || (0x39 < bVar6)) goto LAB_1000_14e1;
        if (0x666 < uVar8) break;
        uVar7 = CONCAT11((char)(uVar7 >> 8),bVar6 - 0x30) + uVar8 * 2;
        uVar8 = uVar8 * 8 + uVar7;
      } while (-1 < (int)uVar8);
      uVar8 = 0x3fff;
      do {
        pbVar1 = pbVar9;
        pbVar9 = pbVar9 + 1;
        if (*pbVar1 < 0x30) break;
      } while (*pbVar1 < 0x3a);
LAB_1000_14e1:
      local_18 = local_18 + ((uVar8 ^ local_1a) - local_1a);
      local_14 = pbVar9 + -1;
    }
  }
  if (local_1c != 0) {
    *pcVar10 = '\0';
    pbVar11 = (byte *)(pcVar10 + -1);
    if (local_1c < 0x19) {
      if (local_18 != 0) goto LAB_1000_1528;
    }
    else {
      bVar6 = *pbVar11;
      *pbVar11 = 0;
      local_1c = local_1c - 1;
      local_18 = local_18 + 1;
      pbVar11 = (byte *)(pcVar10 + -2);
      if (bVar6 < 5) {
LAB_1000_1528:
        for (; *pbVar11 == 0; pbVar11 = pbVar11 + -1) {
          local_1c = local_1c - 1;
          local_18 = local_18 + 1;
        }
      }
      else {
        *pbVar11 = *pbVar11 + 1;
      }
    }
    FUN_1000_1286(&local_e,local_1c,local_36,unaff_SS);
    if (local_18 == 0) {
LAB_1000_1562:
      if ((0x7fff < local_e) && ((0x8000 < local_e || ((local_c & 1) != 0)))) {
        bVar15 = 0xfffe < local_c;
        local_c = local_c + 1;
        bVar4 = CARRY2(local_a,(uint)bVar15);
        local_a = local_a + bVar15;
        uVar8 = (uint)bVar4;
        bVar4 = CARRY2(local_8,uVar8);
        local_8 = local_8 + uVar8;
        uVar8 = (uint)bVar4;
        bVar4 = CARRY2(local_6,uVar8);
        local_6 = local_6 + uVar8;
        if (bVar4) {
          local_6 = local_6 | 0x8000;
          local_4 = local_4 + 1;
        }
      }
      if (local_4 < 0x7fff) {
        if ((local_4 != 0) || (((local_6 != 0 || local_8 != 0) || local_a != 0) || local_c != 0)) {
          puVar12[3] = local_6;
          puVar12[2] = local_8;
          puVar12[1] = local_a;
          *param_4 = local_c;
          puVar12[4] = local_4 | local_16;
          goto LAB_1000_15bf;
        }
LAB_1000_15e9:
        local_10 = local_10 | 1;
        goto LAB_1000_15dd;
      }
    }
    else if (local_18 < 0x1450) {
      if (-0x1450 < local_18) {
        FUN_1000_102c(param_1,local_18,&local_e,unaff_SS);
        goto LAB_1000_1562;
      }
      goto LAB_1000_15e9;
    }
    local_10 = local_10 | 2;
    puVar12[4] = local_16 | 0x7fff;
    puVar12[3] = 0x8000;
    puVar12[2] = 0;
    puVar12[1] = 0;
    *param_4 = 0;
    goto LAB_1000_15bf;
  }
LAB_1000_15dd:
  for (iVar14 = 5; iVar14 != 0; iVar14 = iVar14 + -1) {
    puVar3 = puVar12;
    puVar12 = puVar12 + 1;
    *puVar3 = 0;
  }
LAB_1000_15bf:
  *param_3 = (int)local_14;
  ((int *)param_3)[1] = local_12;
  return local_10;
}


// ---- FUN_1000_1686 @ 1000:1686

undefined2 __cdecl16far FUN_1000_1686(char *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined4 local_8;
  
  uVar5 = 0x1008;
  while( true ) {
    uVar6 = (undefined2)((ulong)param_1 >> 0x10);
    if ((*param_1 == '\0') || (*param_1 == '.')) break;
    param_1 = (char *)CONCAT22(uVar6,(char *)param_1 + 1);
  }
  if (*param_1 != '\0') {
    do {
      pcVar2 = (char *)param_1;
      param_1._0_2_ = pcVar2 + 1;
      pcVar3 = (char *)param_1;
      if ((*(char *)param_1 == '\0') || (*(char *)param_1 == 'e')) break;
    } while (*(char *)param_1 != 'E');
    param_1 = (char *)CONCAT22(uVar6,pcVar2);
    local_8 = (char *)CONCAT22(uVar6,pcVar3);
    while( true ) {
      if (*(char *)param_1 != '0') break;
      param_1 = (char *)CONCAT22(param_1._2_2_,(char *)param_1 + -1);
    }
    if (*(char *)param_1 == '.') {
      param_1 = (char *)CONCAT22(param_1._2_2_,(char *)param_1 + -1);
    }
    do {
      pcVar4 = local_8;
      local_8 = (char *)CONCAT22(local_8._2_2_,(char *)local_8 + 1);
      cVar1 = *pcVar4;
      param_1 = (char *)CONCAT22(param_1._2_2_,(char *)param_1 + 1);
      *param_1 = cVar1;
      uVar5 = CONCAT11((char)((uint)uVar5 >> 8),cVar1);
    } while (cVar1 != '\0');
  }
  return uVar5;
}


// ---- FUN_1000_170a @ 1000:170a

bool __cdecl16far FUN_1000_170a(double *param_1)

{
  return DAT_1008_0492 <= *param_1;
}


// ---- FUN_1000_1742 @ 1000:1742

void __cdecl16far FUN_1000_1742(int param_1,float *param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 *puVar1;
  double *pdVar2;
  undefined2 in_DX;
  float *pfVar3;
  undefined2 uVar4;
  
  if (param_1 == 0) {
    pdVar2 = (double *)FUN_1000_0794(param_3,param_4);
    *param_2 = (float)*pdVar2;
  }
  else {
    puVar1 = (undefined2 *)FUN_1000_0794(param_3,param_4);
    uVar4 = (undefined2)((ulong)param_2 >> 0x10);
    pfVar3 = (float *)param_2;
    *(undefined2 *)param_2 = *puVar1;
    *(undefined2 *)((int)pfVar3 + 2) = puVar1[1];
    *(undefined2 *)(pfVar3 + 1) = puVar1[2];
    *(undefined2 *)((int)pfVar3 + 6) = puVar1[3];
  }
  return;
}


// ---- FUN_1000_179a @ 1000:179a

undefined1 * __cdecl16far
FUN_1000_179a(undefined2 *param_1,undefined1 *param_2,undefined2 param_3,int param_4,int param_5)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined2 in_DX;
  undefined2 *puVar3;
  int iVar4;
  undefined2 uVar5;
  undefined4 local_c;
  undefined4 local_8;
  
  if (DAT_1008_0336 == '\0') {
    uVar5 = (undefined2)((ulong)param_1 >> 0x10);
    puVar3 = (undefined2 *)param_1;
    piVar1 = (int *)FUN_1000_1ce4(*param_1,puVar3[1],puVar3[2],puVar3[3]);
    local_8 = (int *)CONCAT22(in_DX,piVar1);
    FUN_1000_07f2(param_2 + (uint)(0 < param_4) + (uint)(*local_8 == 0x2d),param_3,param_4 + 1,
                  piVar1,in_DX);
  }
  else {
    local_8 = (int *)CONCAT22(DAT_1008_086e,DAT_1008_086c);
    FUN_1000_1c4c(0 < param_4,param_2 + (*DAT_1008_086c == 0x2d),param_3);
  }
  puVar2 = param_2;
  if (*local_8 == 0x2d) {
    *param_2 = 0x2d;
    puVar2 = param_2 + 1;
  }
  local_c = (char *)CONCAT22(param_3,puVar2);
  if (0 < param_4) {
    *local_c = puVar2[1];
    local_c = (char *)CONCAT22(param_3,puVar2 + 1);
    puVar2[1] = 0x2e;
  }
  puVar2 = (undefined1 *)
           FUN_1000_08da((undefined1 *)local_c + param_4 + (uint)(DAT_1008_0336 == '\0'),
                         local_c._2_2_,0x33b,0x1008);
  local_c = (char *)CONCAT22(local_c._2_2_,puVar2);
  if (param_5 != 0) {
    *local_c = 0x45;
  }
  local_c = (char *)CONCAT22(local_c._2_2_,puVar2 + 1);
  uVar5 = (undefined2)((ulong)local_8 >> 0x10);
  if (**(char **)((int *)local_8 + 3) != '0') {
    iVar4 = ((int *)local_8)[1] + -1;
    if (iVar4 < 0) {
      iVar4 = -iVar4;
      *local_c = 0x2d;
    }
    local_c = (char *)CONCAT22(local_c._2_2_,puVar2 + 2);
    if (99 < iVar4) {
      *local_c = *local_c + (char)(iVar4 / 100);
      iVar4 = iVar4 % 100;
    }
    local_c = (char *)CONCAT22(local_c._2_2_,puVar2 + 3);
    if (9 < iVar4) {
      *local_c = *local_c + (char)(iVar4 / 10);
      iVar4 = iVar4 % 10;
    }
    local_c = (char *)CONCAT22(local_c._2_2_,puVar2 + 4);
    *local_c = *local_c + (char)iVar4;
  }
  return param_2;
}


// ---- FUN_1000_1932 @ 1000:1932

void __cdecl16far
FUN_1000_1932(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5,undefined2 param_6)

{
  DAT_1008_0336 = 1;
  FUN_1000_179a(param_1,param_2,param_3,param_4,param_5,param_6);
  DAT_1008_0336 = 0;
  return;
}


// ---- FUN_1000_1966 @ 1000:1966

undefined1 * __cdecl16far
FUN_1000_1966(undefined2 *param_1,undefined1 *param_2,undefined2 param_3,int param_4)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined2 in_DX;
  undefined2 *puVar4;
  int *piVar5;
  undefined2 uVar6;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar3 = DAT_1008_0338;
  if (DAT_1008_0336 == '\0') {
    uVar6 = (undefined2)((ulong)param_1 >> 0x10);
    puVar4 = (undefined2 *)param_1;
    piVar5 = (int *)FUN_1000_1ce4(*param_1,puVar4[1],puVar4[2],puVar4[3]);
    local_8 = (int *)CONCAT22(in_DX,piVar5);
    FUN_1000_07f2(param_2 + (*local_8 == 0x2d),param_3,piVar5[1] + param_4,piVar5,in_DX);
  }
  else {
    local_8 = (int *)CONCAT22(DAT_1008_086e,DAT_1008_086c);
    iVar1 = *DAT_1008_086c;
    if (param_4 == DAT_1008_0338) {
      param_2[DAT_1008_0338 + (uint)(iVar1 == 0x2d)] = 0x30;
      param_2[iVar3 + (uint)(iVar1 == 0x2d) + 1] = 0;
    }
  }
  puVar2 = param_2;
  if (*local_8 == 0x2d) {
    *param_2 = 0x2d;
    puVar2 = param_2 + 1;
  }
  local_c = (undefined1 *)CONCAT22(param_3,puVar2);
  uVar6 = (undefined2)((ulong)local_8 >> 0x10);
  piVar5 = (int *)local_8;
  if (piVar5[1] < 1) {
    FUN_1000_1c4c(1,puVar2,param_3);
    puVar2 = puVar2 + 1;
    *local_c = 0x30;
  }
  else {
    puVar2 = puVar2 + piVar5[1];
  }
  local_c = (undefined1 *)CONCAT22(param_3,puVar2);
  if (0 < param_4) {
    FUN_1000_1c4c(1,puVar2,param_3);
    *local_c = 0x2e;
    if (piVar5[1] < 0) {
      if (DAT_1008_0336 == '\0') {
        iVar3 = -piVar5[1];
        if (-param_4 != piVar5[1] && param_4 <= iVar3) {
          iVar3 = param_4;
        }
      }
      else {
        iVar3 = -piVar5[1];
      }
      FUN_1000_1c4c(iVar3,puVar2 + 1,param_3);
      FUN_1000_0916(puVar2 + 1,param_3,0x30,iVar3);
    }
  }
  return param_2;
}


// ---- FUN_1000_1acc @ 1000:1acc

void __cdecl16far
FUN_1000_1acc(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5)

{
  DAT_1008_0336 = 1;
  FUN_1000_1966(param_1,param_2,param_3,param_4,param_5);
  DAT_1008_0336 = 0;
  return;
}


// ---- FUN_1000_1afe @ 1000:1afe

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far
FUN_1000_1afe(undefined2 *param_1,int param_2,undefined2 param_3,int param_4,undefined2 param_5)

{
  char *pcVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  undefined2 in_DX;
  undefined2 *puVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined4 local_8;
  
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  puVar5 = (undefined2 *)param_1;
  piVar2 = (int *)FUN_1000_1ce4(*param_1,puVar5[1],puVar5[2],puVar5[3]);
  _DAT_1008_086c = (int *)CONCAT22(in_DX,piVar2);
  DAT_1008_0338 = piVar2[1] + -1;
  pcVar3 = (char *)((uint)(*_DAT_1008_086c == 0x2d) + param_2);
  local_8 = (char *)CONCAT22(param_3,pcVar3);
  FUN_1000_07f2(pcVar3,param_3,param_4,piVar2,in_DX);
  iVar4 = ((int *)_DAT_1008_086c)[1] + -1;
  DAT_1008_033a = DAT_1008_0338 < iVar4;
  DAT_1008_0338 = iVar4;
  if ((iVar4 < -4) || (param_4 <= iVar4)) {
    FUN_1000_1932(puVar5,uVar6,param_2,param_3,param_4,param_5);
  }
  else {
    if ((bool)DAT_1008_033a) {
      do {
        pcVar1 = local_8;
        uVar7 = (undefined2)((ulong)local_8 >> 0x10);
        pcVar3 = (char *)local_8;
        local_8 = (char *)CONCAT22(uVar7,(char *)local_8 + 1);
      } while (*pcVar1 != '\0');
      pcVar3[-1] = '\0';
    }
    FUN_1000_1acc(puVar5,uVar6,param_2,param_3,param_4);
  }
  return;
}


// ---- FUN_1000_1bde @ 1000:1bde

void __cdecl16far
FUN_1000_1bde(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             int param_5,undefined2 param_6,undefined2 param_7)

{
  int unaff_BP;
  
  if ((param_5 == 0x65) || (param_5 == 0x45)) {
    FUN_1000_179a(param_1,param_2,param_3,param_4,param_6,param_7);
  }
  else if (param_5 == 0x66) {
    FUN_1000_1966(param_1,param_2,param_3,param_4,param_6);
  }
  else {
    FUN_1000_1afe(param_1,param_2,param_3,param_4,param_6,param_7,0x1008,unaff_BP + 1);
  }
  return;
}


// ---- FUN_1000_1c4c @ 1000:1c4c

void FUN_1000_1c4c(int param_1,int param_2,undefined2 param_3)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = FUN_1000_08c0(param_2,param_3);
    FUN_1000_095e(param_2 + param_1,param_3,param_2,param_3,iVar1 + 1);
  }
  return;
}


// ---- FUN_1000_1c80 @ 1000:1c80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __cdecl16far FUN_1000_1c80(int param_1,undefined2 param_2)

{
  uint uVar1;
  int unaff_BP;
  undefined2 unaff_SS;
  int local_8 [2];
  undefined2 local_4;
  int iStack_2;
  
  iStack_2 = unaff_BP + 1;
  local_4 = 0x1008;
  uVar1 = FUN_1000_1340(0,param_1,param_2,local_8,unaff_SS,0x878,0x1008);
  DAT_1008_0872 = local_8[0] - param_1;
  DAT_1008_0871 = 0;
  if ((uVar1 & 4) != 0) {
    DAT_1008_0871 = 2;
  }
  if ((uVar1 & 1) != 0) {
    DAT_1008_0871 = DAT_1008_0871 | 1;
  }
  DAT_1008_0870 = (uVar1 & 2) != 0;
  return 0x870;
}


// ---- FUN_1000_1ce4 @ 1000:1ce4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __cdecl16far
FUN_1000_1ce4(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  uint in_BX;
  int unaff_BP;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  int iStack_2;
  
  iStack_2 = unaff_BP + 1;
  _DAT_1008_034c = param_1;
  _DAT_1008_034e = param_2;
  DAT_1008_0350 = param_3;
  DAT_1008_0352 = param_4;
  uVar6 = FUN_1000_0a76(&iStack_2);
  puVar5 = (undefined1 *)&DAT_1008_0354;
  puVar4 = (undefined1 *)&DAT_1008_034d;
  for (iVar3 = (int)DAT_1008_034c; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  *puVar5 = 0;
  DAT_1008_0342 = in_BX & 0xff;
  DAT_1008_0344 = (int)((ulong)uVar6 >> 0x10);
  DAT_1008_0346 = (int)uVar6;
  DAT_1008_0348 = 0x354;
  DAT_1008_034a = 0x1008;
  return 0x342;
}


// ---- FUN_1000_1d72 @ 1000:1d72

void __cdecl16near FUN_1000_1d72(void)

{
  return;
}


// ---- FUN_1000_1d77 @ 1000:1d77

void FUN_1000_1d77(void)

{
  FUN_1000_055a();
  return;
}


// ---- FUN_1000_1d9f @ 1000:1d9f

undefined2 __cdecl16far FUN_1000_1d9f(uint param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int in_BX;
  uint uVar3;
  code *pcVar4;
  undefined2 unaff_CS;
  undefined2 uVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  undefined4 uVar9;
  uint uVar10;
  
  uVar5 = 0x1008;
  do {
    if (param_1 < 0xffe7) {
      bVar7 = false;
      if (*(int *)((int)(undefined4 *)&DAT_1008_0382 + 2) != 0) {
        pcVar4 = (code *)0x1eb0;
        while( true ) {
          uVar3 = *(uint *)&DAT_1008_038c;
          uVar6 = (uint)((ulong)*(undefined4 *)&DAT_1008_0386 >> 0x10);
          in_BX = (int)*(undefined4 *)&DAT_1008_0386;
          uVar10 = uVar6;
          do {
            do {
              unaff_CS = 0x1000;
              uVar9 = (*pcVar4)();
              if (!bVar7) {
                if (pcVar4 == (code *)0x1eb0) goto LAB_1000_1e10;
                goto LAB_1000_1e0d;
              }
              puVar1 = (undefined4 *)(in_BX + 0xe);
              in_BX = (int)*puVar1;
              bVar7 = uVar6 < uVar3;
              bVar8 = uVar6 != uVar3;
              uVar6 = (uint)((ulong)*puVar1 >> 0x10);
            } while (bVar8);
            uVar3 = *(uint *)((int)*(undefined4 *)&DAT_1008_0386 + 0x14);
            uVar6 = (uint)((ulong)*(undefined4 *)&DAT_1008_0382 >> 0x10);
            in_BX = (int)*(undefined4 *)&DAT_1008_0382;
            bVar7 = uVar6 < uVar10;
            bVar8 = uVar6 != uVar10;
            uVar10 = uVar6;
          } while (bVar8);
          bVar7 = pcVar4 < (char *)s_M6103__MATH___floating_point_err_1008_064d + 0x15;
          if (pcVar4 == (code *)((char *)s_M6103__MATH___floating_point_err_1008_064d + 0x15))
          break;
          pcVar4 = (code *)((char *)s_M6103__MATH___floating_point_err_1008_064d + 0x15);
        }
      }
      FUN_1000_1f2c();
      if (!bVar7) {
LAB_1000_1e0d:
        uVar9 = FUN_1000_1eb0();
LAB_1000_1e10:
        *(undefined2 *)((int)(undefined4 *)&DAT_1008_0386 + 2) = (int)((ulong)uVar9 >> 0x10);
        *(int *)&DAT_1008_0386 = in_BX;
        return (int)uVar9;
      }
    }
    if (*(int *)&DAT_1008_0380 == 0 && *(int *)&DAT_1008_037e == 0) {
      return 0;
    }
    iVar2 = (*(code *)*(undefined2 *)&DAT_1008_037e)(unaff_CS,param_1);
    if (iVar2 == 0) {
      return 0;
    }
  } while( true );
}


// ---- FUN_1000_1e46 @ 1000:1e46

void __cdecl16near FUN_1000_1e46(void)

{
  int *piVar1;
  int in_AX;
  undefined2 *in_BX;
  undefined2 *puVar2;
  
  in_BX[2] = in_AX + (int)in_BX;
  puVar2 = (undefined2 *)(in_AX + (int)in_BX + -2);
  piVar1 = in_BX + 0xb;
  *puVar2 = 0xfffe;
  in_BX[6] = puVar2;
  *piVar1 = in_AX + -0x19;
  *in_BX = 0x1008;
  in_BX[4] = piVar1;
  in_BX[5] = piVar1;
  in_BX[7] = 0;
  in_BX[8] = 0;
  in_BX[9] = 0;
  in_BX[10] = 0;
  return;
}


// ---- FUN_1000_1e7a @ 1000:1e7a

void __cdecl16near FUN_1000_1e7a(void)

{
  int in_BX;
  int iVar1;
  int *unaff_DI;
  undefined2 unaff_ES;
  undefined2 uVar2;
  
  if (unaff_DI[1] == 0) {
    unaff_DI[1] = 0x1008;
    *unaff_DI = in_BX;
  }
  else {
    uVar2 = (undefined2)((ulong)*(undefined4 *)(unaff_DI + 4) >> 0x10);
    iVar1 = (int)*(undefined4 *)(unaff_DI + 4);
    *(undefined2 *)(iVar1 + 0x10) = 0x1008;
    *(int *)(iVar1 + 0xe) = in_BX;
    *(undefined2 *)(in_BX + 0x14) = uVar2;
    *(int *)(in_BX + 0x12) = iVar1;
  }
  unaff_DI[5] = 0x1008;
  unaff_DI[4] = in_BX;
  unaff_DI[3] = 0x1008;
  unaff_DI[2] = in_BX;
  return;
}


// ---- FUN_1000_1eb0 @ 1000:1eb0

uint * __cdecl16near FUN_1000_1eb0(void)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int in_CX;
  uint uVar4;
  int in_BX;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  
  uVar4 = in_CX + 1U & 0xfffe;
  puVar7 = (uint *)*(undefined2 *)(in_BX + 10);
  puVar5 = (uint *)*(undefined2 *)(in_BX + 0xc);
  do {
    while( true ) {
      puVar1 = puVar7 + 1;
      uVar3 = *puVar7;
      puVar6 = puVar1;
      if ((uVar3 & 1) != 0) {
        while( true ) {
          uVar2 = uVar3 - 1;
          if (uVar4 <= uVar2) {
            *puVar7 = uVar4;
            puVar7 = puVar1;
            if (uVar2 != uVar4) {
              *(int *)((int)puVar1 + uVar4) = (uVar2 - uVar4) + -1;
              puVar7 = (uint *)((int)((int)puVar1 + uVar4) - uVar4);
            }
            *(int *)(in_BX + 10) = (int)puVar7 + uVar4;
            return puVar1;
          }
          if (CARRY2((uint)puVar1,uVar2)) goto LAB_1000_1f09;
          puVar6 = (uint *)((int)puVar1 + uVar2) + 1;
          uVar3 = *(uint *)((int)puVar1 + uVar2);
          if ((uVar3 & 1) == 0) break;
          uVar3 = uVar3 + uVar2 + 2;
          *puVar7 = uVar3;
        }
      }
      if (puVar6 + -1 < puVar5) break;
      if (((uint)puVar5 & 1) != 0) goto LAB_1000_1f09;
      puVar7 = (uint *)*(undefined2 *)(in_BX + 8);
      if ((uint *)*(undefined2 *)(in_BX + 10) == puVar7) goto LAB_1000_1f09;
      puVar5 = (uint *)((int)*(undefined2 *)(in_BX + 10) + -1);
    }
    puVar7 = (uint *)((int)puVar6 + uVar3);
  } while (!CARRY2((uint)puVar6,uVar3));
LAB_1000_1f09:
  puVar7 = (uint *)*(undefined2 *)(in_BX + 8);
  *(undefined2 *)(in_BX + 10) = puVar7;
  return puVar7;
}


// ---- FUN_1000_1f2c @ 1000:1f2c

void __cdecl16near FUN_1000_1f2c(void)

{
  int iVar1;
  int in_CX;
  int iVar2;
  uint uVar3;
  int unaff_DI;
  undefined4 uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  
  uVar3 = in_CX + 0x1019U & 0xf000;
  iVar2 = 0;
  if (uVar3 == 0) {
    if ((DAT_1000_0010 & 0x10) != 0) {
      return;
    }
    iVar2 = 1;
  }
  uVar6 = 0;
  uVar7 = DAT_1000_0010;
  iVar1 = GLOBALALLOC(0x1000,uVar3,iVar2);
  if (iVar1 != 0) {
    if ((uVar6 & 1) != 0) {
      iVar2 = iVar1;
      uVar4 = GLOBALLOCK(0x1020,iVar1,iVar1,uVar7);
      iVar1 = (int)((ulong)uVar4 >> 0x10);
      if (((int)uVar4 != 0) || (iVar1 == 0)) goto LAB_1000_1fa3;
    }
    lVar5 = GLOBALSIZE(0x1020,iVar1);
    if (lVar5 == 0) {
LAB_1000_1fa3:
      FUN_1000_055a();
      return;
    }
    *(int *)0x6 = iVar2;
    *(undefined2 *)0x2 = *(undefined2 *)(unaff_DI + 0xc);
    FUN_1000_1e46();
    FUN_1000_1e7a();
  }
  return;
}


// ---- FUN_1000_1fb0 @ 1000:1fb0

undefined2 __stdcall16far
FUN_1000_1fb0(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 uVar3;
  undefined2 local_2e;
  undefined2 local_2c;
  undefined2 local_2a;
  undefined2 local_28;
  undefined2 local_26;
  undefined2 local_24;
  undefined2 local_22;
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  undefined1 local_14 [4];
  undefined2 local_10;
  
  *(undefined2 *)0x4ddc = param_4;
  uVar1 = CREATESOLIDBRUSH(unaff_CS,0xc0c0);
  *(undefined2 *)0x2eb6 = uVar1;
  uVar1 = CREATEPEN(0x1020,0x8080,0x80,1);
  *(undefined2 *)0x270c = uVar1;
  if (*(int *)0x4ddc == 0) {
    local_2e = 3;
    local_2c = 0x20de;
    local_2a = 0x1000;
    local_28 = 0;
    local_26 = 0;
    local_24 = param_5;
    local_22 = LOADICON(0x1020,0x9fde,0x1000);
    local_20 = LOADCURSOR(0x1020,0x7f00,0);
    local_1e = *(undefined2 *)0x2eb6;
    local_1a = 0;
    local_1c = 0;
    local_18 = 0xe2;
    REGISTERCLASS(0x1020,&local_2e);
  }
  *(undefined2 *)0x4dce = param_5;
  uVar1 = 0x1000;
  _WSPRINTF(0x1020,0x92);
  uVar1 = CREATEWINDOW(0x1020,0,0,*(undefined2 *)0x4dce,0,0,*(undefined2 *)0x104,
                       *(undefined2 *)0x106,0,0,0,0x80c0,0x92,unaff_SS,0xe2,unaff_SS,uVar1);
  *(undefined2 *)0x114c = uVar1;
  if (*(int *)0x10 != 0) {
    SHOWWINDOW(0x1020,param_1);
    uVar3 = *(undefined2 *)0x114c;
    UPDATEWINDOW(0x1020,uVar3,uVar1);
    while( true ) {
      iVar2 = GETMESSAGE(0x1020,0,0,0,local_14,unaff_SS,uVar3);
      if (iVar2 == 0) break;
      uVar3 = unaff_SS;
      TRANSLATEMESSAGE(0x1020,local_14);
      DISPATCHMESSAGE(0x1020,local_14);
    }
  }
  return local_10;
}


// ---- WNDPROC @ 1000:20de

undefined2 __stdcall16far
WNDPROC(undefined2 param_1,int param_2,int param_3,int param_4,undefined2 param_5)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined2 uVar2;
  undefined2 unaff_SS;
  
  if (param_4 == 1) {
    uVar2 = param_5;
    iVar1 = SETTIMER(unaff_CS,0,0,0x32,1);
    if (iVar1 != 0) {
      uVar2 = CREATEWINDOW(0x1020,0,0,*(undefined2 *)0x4dce,1,param_5,*(int *)0x10e - *(int *)0x10a,
                           *(int *)0x10c - *(int *)0x108,*(undefined2 *)0x10a,*(undefined2 *)0x108,1
                           ,0x5000,0xa02c,0x1000,0xa048,0x1000,uVar2);
      *(undefined2 *)0x4e06 = uVar2;
      *(undefined2 *)0x10 = 1;
      FUN_1000_2208(1,0xf,0,param_5);
      return 0;
    }
    uVar2 = 0x1000;
    FUN_1000_2316(0xa016,0x1000);
    *(undefined2 *)0x10 = 0;
  }
  else if (param_4 == 2) {
    UNREGISTERCLASS(unaff_CS,*(undefined2 *)0x4dce,0xe2);
    DELETEOBJECT(0x1020,*(undefined2 *)0x2eb6);
    uVar2 = 0x1020;
    DELETEOBJECT(0x1020,*(undefined2 *)0x270c);
  }
  else {
    if (param_4 == 0x19) {
      if (param_2 == 6) {
        SETBKCOLOR(unaff_CS,0xc0c0,0xc0);
      }
      else {
        if (param_2 != 3) goto LAB_1000_21ed;
        GETSTOCKOBJECT();
      }
      return *(undefined2 *)0x2eb6;
    }
    if ((param_4 != 0x113) || (param_3 != 1)) {
LAB_1000_21ed:
      uVar2 = DEFWINDOWPROC(unaff_CS,param_1,param_2,param_3,param_4);
      return uVar2;
    }
    KILLTIMER(unaff_CS,1);
    uVar2 = 0x1000;
    FUN_1000_233e(param_5);
  }
  POSTQUITMESSAGE(uVar2,0);
  return 0;
}


// ---- FUN_1000_2208 @ 1000:2208

void __stdcall16far FUN_1000_2208(int param_1,int param_2,int param_3,undefined2 param_4)

{
  int iVar1;
  int iVar2;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 uVar3;
  int local_a;
  int local_8;
  int local_6;
  int local_4;
  
  uVar3 = 0x1008;
  GETWINDOWRECT(unaff_CS,&local_a,unaff_SS);
  iVar1 = GETSYSTEMMETRICS(0x1020,0,param_4,uVar3);
  iVar2 = GETSYSTEMMETRICS(0x1020,1);
  SETWINDOWPOS(0x1020,1,0,0,(iVar2 / 100) * param_2 + ((local_8 - local_4) + iVar2) / 2,
               (iVar1 / 100) * param_3 + ((local_a - local_6) + iVar1) / 2,-(uint)(param_1 != 0));
  return;
}


// ---- FUN_1000_2288 @ 1000:2288

/* WARNING: Removing unreachable block (ram,0x100022d3) */

void __cdecl16far
FUN_1000_2288(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  int iVar1;
  undefined2 unaff_SS;
  ulong uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined1 local_1c [18];
  ulong local_a;
  ulong local_6;
  
  uVar4 = 0x1008;
  local_a = GETTICKCOUNT();
  local_6 = local_a + CONCAT22(param_2,param_1);
  uVar3 = param_4;
  iVar1 = LSTRLEN(0x1020,param_3);
  uVar2 = local_a;
  if (iVar1 != 0) {
    SETWINDOWTEXT(0x1020,param_3,param_4,*(undefined2 *)0x4e06,uVar3,uVar4);
    uVar2 = local_a;
  }
  while (uVar2 <= local_6) {
    while( true ) {
      local_a = uVar2;
      iVar1 = PEEKMESSAGE(0x1020,1,0,0,0,local_1c,unaff_SS);
      if (iVar1 == 0) break;
      TRANSLATEMESSAGE(0x1020,local_1c);
      DISPATCHMESSAGE(0x1020,local_1c);
      uVar2 = local_a;
    }
    uVar2 = GETTICKCOUNT(0x1020);
  }
  return;
}


// ---- FUN_1000_2316 @ 1000:2316

void __cdecl16far FUN_1000_2316(undefined2 param_1,undefined2 param_2)

{
  MESSAGEBEEP();
  MESSAGEBOX(0x1020,0x10,0,0,param_1,param_2);
  return;
}


// ---- FUN_1000_233e @ 1000:233e

void __cdecl16far FUN_1000_233e(void)

{
  char cVar1;
  int iVar2;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  
  iVar2 = _LOPEN(unaff_CS,0,0x110);
  *(int *)0x4e08 = iVar2;
  if (iVar2 < 0) {
    iVar2 = _LOPEN(0x1020,0,0x120);
    *(int *)0x4e08 = iVar2;
    if (iVar2 < 0) {
      FUN_1000_2316(0xa342,0x1000);
      return;
    }
    cVar1 = FUN_1000_7a42();
    *(char *)0x2252 = cVar1;
    if (cVar1 == '\x06') {
LAB_1000_2572:
      FUN_1000_2288(0x5dc,0);
      FUN_1000_302c();
      return;
    }
    if (*(char *)0x2252 == '\x05') {
      FUN_1000_2288(0x5dc,0,0xa2d6,0x1000);
      FUN_1000_30e2();
      return;
    }
    if (*(char *)0x2252 == '\x04') {
      FUN_1000_2288(0x5dc,0,0xa2fa,0x1000);
      FUN_1000_3198();
      return;
    }
    if (*(char *)0x2252 == '\x03') {
      FUN_1000_2288(0x5dc,0,0xa31e,0x1000);
      FUN_1000_324e();
      return;
    }
  }
  else {
    cVar1 = FUN_1000_7a42();
    *(char *)0x2252 = cVar1;
    if (cVar1 == '\x16') {
      FUN_1000_2288(0x5dc,0,0xa050,0x1000);
      goto LAB_1000_237a;
    }
    if (*(char *)0x2252 == '\x15') {
      FUN_1000_2288(0x5dc,0,0xa076,0x1000);
      FUN_1000_2638();
      return;
    }
    if (*(char *)0x2252 == '\x14') {
      FUN_1000_2288(0x5dc,0,0xa09a,0x1000);
      FUN_1000_26ee();
      return;
    }
    if (*(char *)0x2252 == '\x13') {
      FUN_1000_2288(0x5dc,0,0xa0be,0x1000);
      FUN_1000_27a4();
      return;
    }
    if (*(char *)0x2252 == '\x12') {
      FUN_1000_2288(0x5dc,0,0xa0e2,0x1000);
      FUN_1000_285a();
      return;
    }
    if (*(char *)0x2252 == '\x11') {
      FUN_1000_2288(0x5dc,0,0xa106,0x1000);
      FUN_1000_2910();
      return;
    }
    if (*(char *)0x2252 == '\x10') {
      FUN_1000_2288(0x5dc,0,0xa12a,0x1000);
      FUN_1000_29c6();
      return;
    }
    if (*(char *)0x2252 == '\x0f') {
      FUN_1000_2288(0x5dc,0,0xa14e,0x1000);
      FUN_1000_2a7c();
      return;
    }
    if (*(char *)0x2252 == '\x0e') {
      FUN_1000_2288(0x5dc,0,0xa172,0x1000);
      FUN_1000_2b32();
      return;
    }
    if (*(char *)0x2252 == '\r') {
      FUN_1000_2288(0x5dc,0,0xa196,0x1000);
      FUN_1000_2be8();
      return;
    }
    if (*(char *)0x2252 == '\f') {
      FUN_1000_2288(0x5dc,0,0xa1ba,0x1000);
      FUN_1000_2c9e();
      return;
    }
    if (*(char *)0x2252 == '\v') {
      FUN_1000_2288(0x5dc,0,0xa1de,0x1000);
      FUN_1000_2d54();
      return;
    }
    if (*(char *)0x2252 == '\n') {
      FUN_1000_2288(0x5dc,0,0xa202,0x1000);
      FUN_1000_2e0a();
      return;
    }
    if (*(char *)0x2252 == '\t') {
      FUN_1000_2288(0x5dc,0,0xa226,0x1000);
      FUN_1000_2ec0();
      return;
    }
    if (*(char *)0x2252 == '\b') {
      FUN_1000_2288(0x5dc,0,0xa24a,0x1000);
      FUN_1000_2f76();
      return;
    }
    if (*(char *)0x2252 == '\a') goto LAB_1000_2572;
  }
  FUN_1000_2316(0xa292,0x1000);
LAB_1000_237a:
  _LCLOSE(0x1000,*(undefined2 *)0x4e08);
  return;
}


// ---- FUN_1000_2638 @ 1000:2638

void __cdecl16far FUN_1000_2638(void)

{
  char cVar1;
  int iVar2;
  undefined2 unaff_SS;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  cVar1 = FUN_1000_3304(0x314c);
  if (cVar1 == '\0') {
    cVar1 = FUN_1000_361c(0x314c);
    if (cVar1 == '\0') {
      _LCLOSE(0x1000,*(undefined2 *)0x4e08,uVar3);
      iVar2 = _LCREAT(0x1020,0,0x110);
      *(int *)0x4e08 = iVar2;
      if (iVar2 < 0) {
LAB_1000_2690:
        FUN_1000_2316(0xa3a8,0x1000);
        return;
      }
      _LCLOSE(0x1020,iVar2);
      iVar2 = _LOPEN(0x1020,2,0x110);
      *(int *)0x4e08 = iVar2;
      if (iVar2 < 0) goto LAB_1000_2690;
      FUN_1000_3e7c(0x314c);
      FUN_1000_3d8e(0x1c30);
      FUN_1000_3c70(0x1c30);
      goto LAB_1000_26de;
    }
    uVar3 = 0xa37a;
  }
  else {
    uVar3 = 0xa35e;
  }
  FUN_1000_2316(uVar3,0x1000);
LAB_1000_26de:
  _LCLOSE(0x1000,*(undefined2 *)0x4e08);
  return;
}


// ---- FUN_1000_26ee @ 1000:26ee

void __cdecl16far FUN_1000_26ee(void)

{
  char cVar1;
  int iVar2;
  undefined2 unaff_SS;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  cVar1 = FUN_1000_3330(0x3746);
  if (cVar1 == '\0') {
    cVar1 = FUN_1000_3676(0x3746);
    if (cVar1 == '\0') {
      _LCLOSE(0x1000,*(undefined2 *)0x4e08,uVar3);
      iVar2 = _LCREAT(0x1020,0,0x110);
      *(int *)0x4e08 = iVar2;
      if (iVar2 < 0) {
LAB_1000_2746:
        FUN_1000_2316(0xa3a8,0x1000);
        return;
      }
      _LCLOSE(0x1020,iVar2);
      iVar2 = _LOPEN(0x1020,2,0x110);
      *(int *)0x4e08 = iVar2;
      if (iVar2 < 0) goto LAB_1000_2746;
      FUN_1000_41e8(0x3746);
      FUN_1000_3d8e(0x1c30);
      FUN_1000_3c70(0x1c30);
      goto LAB_1000_2794;
    }
    uVar3 = 0xa37a;
  }
  else {
    uVar3 = 0xa35e;
  }
  FUN_1000_2316(uVar3,0x1000);
LAB_1000_2794:
  _LCLOSE(0x1000,*(undefined2 *)0x4e08);
  return;
}


// ---- FUN_1000_27a4 @ 1000:27a4

void __cdecl16far FUN_1000_27a4(void)

{
  char cVar1;
  int iVar2;
  undefined2 unaff_SS;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  cVar1 = FUN_1000_335c(0x44ab);
  if (cVar1 == '\0') {
    cVar1 = FUN_1000_36d0(0x44ab);
    if (cVar1 == '\0') {
      _LCLOSE(0x1000,*(undefined2 *)0x4e08,uVar3);
      iVar2 = _LCREAT(0x1020,0,0x110);
      *(int *)0x4e08 = iVar2;
      if (iVar2 < 0) {
LAB_1000_27fc:
        FUN_1000_2316(0xa3a8,0x1000);
        return;
      }
      _LCLOSE(0x1020,iVar2);
      iVar2 = _LOPEN(0x1020,2,0x110);
      *(int *)0x4e08 = iVar2;
      if (iVar2 < 0) goto LAB_1000_27fc;
      FUN_1000_4546(0x44ab);
      FUN_1000_3d8e(0x1c30);
      FUN_1000_3c70(0x1c30);
      goto LAB_1000_284a;
    }
    uVar3 = 0xa37a;
  }
  else {
    uVar3 = 0xa35e;
  }
  FUN_1000_2316(uVar3,0x1000);
LAB_1000_284a:
  _LCLOSE(0x1000,*(undefined2 *)0x4e08);
  return;
}


// ---- FUN_1000_285a @ 1000:285a

void __cdecl16far FUN_1000_285a(void)

{
  char cVar1;
  int iVar2;
  undefined2 unaff_SS;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  cVar1 = FUN_1000_3388(0x493a);
  if (cVar1 == '\0') {
    cVar1 = FUN_1000_372a(0x493a);
    if (cVar1 == '\0') {
      _LCLOSE(0x1000,*(undefined2 *)0x4e08,uVar3);
      iVar2 = _LCREAT(0x1020,0,0x110);
      *(int *)0x4e08 = iVar2;
      if (iVar2 < 0) {
LAB_1000_28b2:
        FUN_1000_2316(0xa3a8,0x1000);
        return;
      }
      _LCLOSE(0x1020,iVar2);
      iVar2 = _LOPEN(0x1020,2,0x110);
      *(int *)0x4e08 = iVar2;
      if (iVar2 < 0) goto LAB_1000_28b2;
      FUN_1000_489e(0x493a);
      FUN_1000_3d8e(0x1c30);
      FUN_1000_3c70(0x1c30);
      goto LAB_1000_2900;
    }
    uVar3 = 0xa37a;
  }
  else {
    uVar3 = 0xa35e;
  }
  FUN_1000_2316(uVar3,0x1000);
LAB_1000_2900:
  _LCLOSE(0x1000,*(undefined2 *)0x4e08);
  return;
}


// ---- FUN_1000_2910 @ 1000:2910

void __cdecl16far FUN_1000_2910(void)

{
  char cVar1;
  int iVar2;
  undefined2 unaff_SS;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  cVar1 = FUN_1000_33b4(0x3d05);
  if (cVar1 == '\0') {
    cVar1 = FUN_1000_3784(0x3d05);
    if (cVar1 == '\0') {
      _LCLOSE(0x1000,*(undefined2 *)0x4e08,uVar3);
      iVar2 = _LCREAT(0x1020,0,0x110);
      *(int *)0x4e08 = iVar2;
      if (iVar2 < 0) {
LAB_1000_2968:
        FUN_1000_2316(0xa3a8,0x1000);
        return;
      }
      _LCLOSE(0x1020,iVar2);
      iVar2 = _LOPEN(0x1020,2,0x110);
      *(int *)0x4e08 = iVar2;
      if (iVar2 < 0) goto LAB_1000_2968;
      FUN_1000_4bf4(0x3d05);
      FUN_1000_3d8e(0x1c30);
      FUN_1000_3c70(0x1c30);
      goto LAB_1000_29b6;
    }
    uVar3 = 0xa37a;
  }
  else {
    uVar3 = 0xa35e;
  }
  FUN_1000_2316(uVar3,0x1000);
LAB_1000_29b6:
  _LCLOSE(0x1000,*(undefined2 *)0x4e08);
  return;
}


// ---- FUN_1000_29c6 @ 1000:29c6

void __cdecl16far FUN_1000_29c6(void)

{
  char cVar1;
  int iVar2;
  undefined2 unaff_SS;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  cVar1 = FUN_1000_33e0(0x40ec);
  if (cVar1 == '\0') {
    cVar1 = FUN_1000_37de(0x40ec);
    if (cVar1 == '\0') {
      _LCLOSE(0x1000,*(undefined2 *)0x4e08,uVar3);
      iVar2 = _LCREAT(0x1020,0,0x110);
      *(int *)0x4e08 = iVar2;
      if (iVar2 < 0) {
LAB_1000_2a1e:
        FUN_1000_2316(0xa3a8,0x1000);
        return;
      }
      _LCLOSE(0x1020,iVar2);
      iVar2 = _LOPEN(0x1020,2,0x110);
      *(int *)0x4e08 = iVar2;
      if (iVar2 < 0) goto LAB_1000_2a1e;
      FUN_1000_4f4a(0x40ec);
      FUN_1000_3d8e(0x1c30);
      FUN_1000_3c70(0x1c30);
      goto LAB_1000_2a6c;
    }
    uVar3 = 0xa37a;
  }
  else {
    uVar3 = 0xa35e;
  }
  FUN_1000_2316(uVar3,0x1000);
LAB_1000_2a6c:
  _LCLOSE(0x1000,*(undefined2 *)0x4e08);
  return;
}


// ---- FUN_1000_2a7c @ 1000:2a7c

void __cdecl16far FUN_1000_2a7c(void)

{
  char cVar1;
  int iVar2;
  undefined2 unaff_SS;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  cVar1 = FUN_1000_340c(0x114e);
  if (cVar1 == '\0') {
    cVar1 = FUN_1000_3838(0x114e);
    if (cVar1 == '\0') {
      _LCLOSE(0x1000,*(undefined2 *)0x4e08,uVar3);
      iVar2 = _LCREAT(0x1020,0,0x110);
      *(int *)0x4e08 = iVar2;
      if (iVar2 < 0) {
LAB_1000_2ad4:
        FUN_1000_2316(0xa3a8,0x1000);
        return;
      }
      _LCLOSE(0x1020,iVar2);
      iVar2 = _LOPEN(0x1020,2,0x110);
      *(int *)0x4e08 = iVar2;
      if (iVar2 < 0) goto LAB_1000_2ad4;
      FUN_1000_529a(0x114e);
      FUN_1000_3d8e(0x1c30);
      FUN_1000_3c70(0x1c30);
      goto LAB_1000_2b22;
    }
    uVar3 = 0xa37a;
  }
  else {
    uVar3 = 0xa35e;
  }
  FUN_1000_2316(uVar3,0x1000);
LAB_1000_2b22:
  _LCLOSE(0x1000,*(undefined2 *)0x4e08);
  return;
}


// ---- FUN_1000_2b32 @ 1000:2b32

void __cdecl16far FUN_1000_2b32(void)

{
  char cVar1;
  int iVar2;
  undefined2 unaff_SS;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  cVar1 = FUN_1000_3438(0x150a);
  if (cVar1 == '\0') {
    cVar1 = FUN_1000_3892(0x150a);
    if (cVar1 == '\0') {
      _LCLOSE(0x1000,*(undefined2 *)0x4e08,uVar3);
      iVar2 = _LCREAT(0x1020,0,0x110);
      *(int *)0x4e08 = iVar2;
      if (iVar2 < 0) {
LAB_1000_2b8a:
        FUN_1000_2316(0xa3a8,0x1000);
        return;
      }
      _LCLOSE(0x1020,iVar2);
      iVar2 = _LOPEN(0x1020,2,0x110);
      *(int *)0x4e08 = iVar2;
      if (iVar2 < 0) goto LAB_1000_2b8a;
      FUN_1000_55e4(0x150a);
      FUN_1000_3d8e(0x1c30);
      FUN_1000_3c70(0x1c30);
      goto LAB_1000_2bd8;
    }
    uVar3 = 0xa37a;
  }
  else {
    uVar3 = 0xa35e;
  }
  FUN_1000_2316(uVar3,0x1000);
LAB_1000_2bd8:
  _LCLOSE(0x1000,*(undefined2 *)0x4e08);
  return;
}


// ---- FUN_1000_2be8 @ 1000:2be8

void __cdecl16far FUN_1000_2be8(void)

{
  char cVar1;
  int iVar2;
  undefined2 unaff_SS;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  cVar1 = FUN_1000_3464(0x18b6);
  if (cVar1 == '\0') {
    cVar1 = FUN_1000_38ec(0x18b6);
    if (cVar1 == '\0') {
      _LCLOSE(0x1000,*(undefined2 *)0x4e08,uVar3);
      iVar2 = _LCREAT(0x1020,0,0x110);
      *(int *)0x4e08 = iVar2;
      if (iVar2 < 0) {
LAB_1000_2c40:
        FUN_1000_2316(0xa3a8,0x1000);
        return;
      }
      _LCLOSE(0x1020,iVar2);
      iVar2 = _LOPEN(0x1020,2,0x110);
      *(int *)0x4e08 = iVar2;
      if (iVar2 < 0) goto LAB_1000_2c40;
      FUN_1000_5928(0x18b6);
      FUN_1000_3d8e(0x1c30);
      FUN_1000_3c70(0x1c30);
      goto LAB_1000_2c8e;
    }
    uVar3 = 0xa37a;
  }
  else {
    uVar3 = 0xa35e;
  }
  FUN_1000_2316(uVar3,0x1000);
LAB_1000_2c8e:
  _LCLOSE(0x1000,*(undefined2 *)0x4e08);
  return;
}


// ---- FUN_1000_2c9e @ 1000:2c9e

void __cdecl16far FUN_1000_2c9e(void)

{
  char cVar1;
  int iVar2;
  undefined2 unaff_SS;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  cVar1 = FUN_1000_3490(0x880);
  if (cVar1 == '\0') {
    cVar1 = FUN_1000_3946(0x880);
    if (cVar1 == '\0') {
      _LCLOSE(0x1000,*(undefined2 *)0x4e08,uVar3);
      iVar2 = _LCREAT(0x1020,0,0x110);
      *(int *)0x4e08 = iVar2;
      if (iVar2 < 0) {
LAB_1000_2cf6:
        FUN_1000_2316(0xa3a8,0x1000);
        return;
      }
      _LCLOSE(0x1020,iVar2);
      iVar2 = _LOPEN(0x1020,2,0x110);
      *(int *)0x4e08 = iVar2;
      if (iVar2 < 0) goto LAB_1000_2cf6;
      FUN_1000_5c58(0x880);
      FUN_1000_3d8e(0x1c30);
      FUN_1000_3c70(0x1c30);
      goto LAB_1000_2d44;
    }
    uVar3 = 0xa37a;
  }
  else {
    uVar3 = 0xa35e;
  }
  FUN_1000_2316(uVar3,0x1000);
LAB_1000_2d44:
  _LCLOSE(0x1000,*(undefined2 *)0x4e08);
  return;
}


// ---- FUN_1000_2d54 @ 1000:2d54

void __cdecl16far FUN_1000_2d54(void)

{
  char cVar1;
  int iVar2;
  undefined2 unaff_SS;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  cVar1 = FUN_1000_34bc(0xbd0);
  if (cVar1 == '\0') {
    cVar1 = FUN_1000_39a0(0xbd0);
    if (cVar1 == '\0') {
      _LCLOSE(0x1000,*(undefined2 *)0x4e08,uVar3);
      iVar2 = _LCREAT(0x1020,0,0x110);
      *(int *)0x4e08 = iVar2;
      if (iVar2 < 0) {
LAB_1000_2dac:
        FUN_1000_2316(0xa3a8,0x1000);
        return;
      }
      _LCLOSE(0x1020,iVar2);
      iVar2 = _LOPEN(0x1020,2,0x110);
      *(int *)0x4e08 = iVar2;
      if (iVar2 < 0) goto LAB_1000_2dac;
      FUN_1000_5faa(0xbd0);
      FUN_1000_3d8e(0x1c30);
      FUN_1000_3c70(0x1c30);
      goto LAB_1000_2dfa;
    }
    uVar3 = 0xa37a;
  }
  else {
    uVar3 = 0xa35e;
  }
  FUN_1000_2316(uVar3,0x1000);
LAB_1000_2dfa:
  _LCLOSE(0x1000,*(undefined2 *)0x4e08);
  return;
}


// ---- FUN_1000_2e0a @ 1000:2e0a

void __cdecl16far FUN_1000_2e0a(void)

{
  char cVar1;
  int iVar2;
  undefined2 unaff_SS;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  cVar1 = FUN_1000_34e8(0xea4);
  if (cVar1 == '\0') {
    cVar1 = FUN_1000_39fa(0xea4);
    if (cVar1 == '\0') {
      _LCLOSE(0x1000,*(undefined2 *)0x4e08,uVar3);
      iVar2 = _LCREAT(0x1020,0,0x110);
      *(int *)0x4e08 = iVar2;
      if (iVar2 < 0) {
LAB_1000_2e62:
        FUN_1000_2316(0xa3a8,0x1000);
        return;
      }
      _LCLOSE(0x1020,iVar2);
      iVar2 = _LOPEN(0x1020,2,0x110);
      *(int *)0x4e08 = iVar2;
      if (iVar2 < 0) goto LAB_1000_2e62;
      FUN_1000_62ee(0xea4);
      FUN_1000_3d8e(0x1c30);
      FUN_1000_3c70(0x1c30);
      goto LAB_1000_2eb0;
    }
    uVar3 = 0xa37a;
  }
  else {
    uVar3 = 0xa35e;
  }
  FUN_1000_2316(uVar3,0x1000);
LAB_1000_2eb0:
  _LCLOSE(0x1000,*(undefined2 *)0x4e08);
  return;
}


// ---- FUN_1000_2ec0 @ 1000:2ec0

void __cdecl16far FUN_1000_2ec0(void)

{
  char cVar1;
  int iVar2;
  undefined2 unaff_SS;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  cVar1 = FUN_1000_3514(0x2c16);
  if (cVar1 == '\0') {
    cVar1 = FUN_1000_3a54(0x2c16);
    if (cVar1 == '\0') {
      _LCLOSE(0x1000,*(undefined2 *)0x4e08,uVar3);
      iVar2 = _LCREAT(0x1020,0,0x110);
      *(int *)0x4e08 = iVar2;
      if (iVar2 < 0) {
LAB_1000_2f18:
        FUN_1000_2316(0xa3a8,0x1000);
        return;
      }
      _LCLOSE(0x1020,iVar2);
      iVar2 = _LOPEN(0x1020,2,0x110);
      *(int *)0x4e08 = iVar2;
      if (iVar2 < 0) goto LAB_1000_2f18;
      FUN_1000_6638(0x2c16);
      FUN_1000_3d8e(0x1c30);
      FUN_1000_3c70(0x1c30);
      goto LAB_1000_2f66;
    }
    uVar3 = 0xa37a;
  }
  else {
    uVar3 = 0xa35e;
  }
  FUN_1000_2316(uVar3,0x1000);
LAB_1000_2f66:
  _LCLOSE(0x1000,*(undefined2 *)0x4e08);
  return;
}


// ---- FUN_1000_2f76 @ 1000:2f76

void __cdecl16far FUN_1000_2f76(void)

{
  char cVar1;
  int iVar2;
  undefined2 unaff_SS;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  cVar1 = FUN_1000_3540(0x2eb8);
  if (cVar1 == '\0') {
    cVar1 = FUN_1000_3aae(0x2eb8);
    if (cVar1 == '\0') {
      _LCLOSE(0x1000,*(undefined2 *)0x4e08,uVar3);
      iVar2 = _LCREAT(0x1020,0,0x110);
      *(int *)0x4e08 = iVar2;
      if (iVar2 < 0) {
LAB_1000_2fce:
        FUN_1000_2316(0xa3a8,0x1000);
        return;
      }
      _LCLOSE(0x1020,iVar2);
      iVar2 = _LOPEN(0x1020,2,0x110);
      *(int *)0x4e08 = iVar2;
      if (iVar2 < 0) goto LAB_1000_2fce;
      FUN_1000_697c(0x2eb8);
      FUN_1000_3d8e(0x1c30);
      FUN_1000_3c70(0x1c30);
      goto LAB_1000_301c;
    }
    uVar3 = 0xa37a;
  }
  else {
    uVar3 = 0xa35e;
  }
  FUN_1000_2316(uVar3,0x1000);
LAB_1000_301c:
  _LCLOSE(0x1000,*(undefined2 *)0x4e08);
  return;
}


// ---- FUN_1000_302c @ 1000:302c

void __cdecl16far FUN_1000_302c(void)

{
  char cVar1;
  int iVar2;
  undefined2 unaff_SS;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  cVar1 = FUN_1000_356c(0x2474);
  if (cVar1 == '\0') {
    cVar1 = FUN_1000_3b08(0x2474);
    if (cVar1 == '\0') {
      _LCLOSE(0x1000,*(undefined2 *)0x4e08,uVar3);
      iVar2 = _LCREAT(0x1020,0,0x110);
      *(int *)0x4e08 = iVar2;
      if (iVar2 < 0) {
LAB_1000_3084:
        FUN_1000_2316(0xa3a8,0x1000);
        return;
      }
      _LCLOSE(0x1020,iVar2);
      iVar2 = _LOPEN(0x1020,2,0x110);
      *(int *)0x4e08 = iVar2;
      if (iVar2 < 0) goto LAB_1000_3084;
      FUN_1000_6c9e(0x2474);
      FUN_1000_3d8e(0x1c30);
      FUN_1000_3c70(0x1c30);
      goto LAB_1000_30d2;
    }
    uVar3 = 0xa37a;
  }
  else {
    uVar3 = 0xa35e;
  }
  FUN_1000_2316(uVar3,0x1000);
LAB_1000_30d2:
  _LCLOSE(0x1000,*(undefined2 *)0x4e08);
  return;
}


// ---- FUN_1000_30e2 @ 1000:30e2

void __cdecl16far FUN_1000_30e2(void)

{
  char cVar1;
  int iVar2;
  undefined2 unaff_SS;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  cVar1 = FUN_1000_3598(0x270e);
  if (cVar1 == '\0') {
    cVar1 = FUN_1000_3b62(0x270e);
    if (cVar1 == '\0') {
      _LCLOSE(0x1000,*(undefined2 *)0x4e08,uVar3);
      iVar2 = _LCREAT(0x1020,0,0x110);
      *(int *)0x4e08 = iVar2;
      if (iVar2 < 0) {
LAB_1000_313a:
        FUN_1000_2316(0xa3a8,0x1000);
        return;
      }
      _LCLOSE(0x1020,iVar2);
      iVar2 = _LOPEN(0x1020,2,0x110);
      *(int *)0x4e08 = iVar2;
      if (iVar2 < 0) goto LAB_1000_313a;
      FUN_1000_6f96(0x270e);
      FUN_1000_3d8e(0x1c30);
      FUN_1000_3c70(0x1c30);
      goto LAB_1000_3188;
    }
    uVar3 = 0xa37a;
  }
  else {
    uVar3 = 0xa35e;
  }
  FUN_1000_2316(uVar3,0x1000);
LAB_1000_3188:
  _LCLOSE(0x1000,*(undefined2 *)0x4e08);
  return;
}


// ---- FUN_1000_3198 @ 1000:3198

void __cdecl16far FUN_1000_3198(void)

{
  char cVar1;
  int iVar2;
  undefined2 unaff_SS;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  cVar1 = FUN_1000_35c4(0x2997);
  if (cVar1 == '\0') {
    cVar1 = FUN_1000_3bbc(0x2997);
    if (cVar1 == '\0') {
      _LCLOSE(0x1000,*(undefined2 *)0x4e08,uVar3);
      iVar2 = _LCREAT(0x1020,0,0x110);
      *(int *)0x4e08 = iVar2;
      if (iVar2 < 0) {
LAB_1000_31f0:
        FUN_1000_2316(0xa3a8,0x1000);
        return;
      }
      _LCLOSE(0x1020,iVar2);
      iVar2 = _LOPEN(0x1020,2,0x110);
      *(int *)0x4e08 = iVar2;
      if (iVar2 < 0) goto LAB_1000_31f0;
      FUN_1000_72a6(0x2997);
      FUN_1000_3d8e(0x1c30);
      FUN_1000_3c70(0x1c30);
      goto LAB_1000_323e;
    }
    uVar3 = 0xa37a;
  }
  else {
    uVar3 = 0xa35e;
  }
  FUN_1000_2316(uVar3,0x1000);
LAB_1000_323e:
  _LCLOSE(0x1000,*(undefined2 *)0x4e08);
  return;
}


// ---- FUN_1000_324e @ 1000:324e

void __cdecl16far FUN_1000_324e(void)

{
  char cVar1;
  int iVar2;
  undefined2 unaff_SS;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  cVar1 = FUN_1000_35f0(0x2256);
  if (cVar1 == '\0') {
    cVar1 = FUN_1000_3c16(0x2256);
    if (cVar1 == '\0') {
      _LCLOSE(0x1000,*(undefined2 *)0x4e08,uVar3);
      iVar2 = _LCREAT(0x1020,0,0x110);
      *(int *)0x4e08 = iVar2;
      if (iVar2 < 0) {
LAB_1000_32a6:
        FUN_1000_2316(0xa3a8,0x1000);
        return;
      }
      _LCLOSE(0x1020,iVar2);
      iVar2 = _LOPEN(0x1020,2,0x110);
      *(int *)0x4e08 = iVar2;
      if (iVar2 < 0) goto LAB_1000_32a6;
      FUN_1000_75a4(0x2256);
      FUN_1000_3d8e(0x1c30);
      FUN_1000_3c70(0x1c30);
      goto LAB_1000_32f4;
    }
    uVar3 = 0xa37a;
  }
  else {
    uVar3 = 0xa35e;
  }
  FUN_1000_2316(uVar3,0x1000);
LAB_1000_32f4:
  _LCLOSE(0x1000,*(undefined2 *)0x4e08);
  return;
}


// ---- FUN_1000_3304 @ 1000:3304

undefined2 __cdecl16far FUN_1000_3304(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  
  iVar1 = _LREAD(unaff_CS,0x5fa,param_1,param_2);
  *(int *)0x2472 = iVar1;
  if (iVar1 != 0x5fa) {
    return 1;
  }
  return 0;
}


// ---- FUN_1000_3330 @ 1000:3330

undefined2 __cdecl16far FUN_1000_3330(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  
  iVar1 = _LREAD(unaff_CS,0x5bf,param_1,param_2);
  *(int *)0x2472 = iVar1;
  if (iVar1 != 0x5bf) {
    return 1;
  }
  return 0;
}


// ---- FUN_1000_335c @ 1000:335c

undefined2 __cdecl16far FUN_1000_335c(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  
  iVar1 = _LREAD(unaff_CS,0x48f,param_1,param_2);
  *(int *)0x2472 = iVar1;
  if (iVar1 != 0x48f) {
    return 1;
  }
  return 0;
}


// ---- FUN_1000_3388 @ 1000:3388

undefined2 __cdecl16far FUN_1000_3388(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  
  iVar1 = _LREAD(unaff_CS,0x48e,param_1,param_2);
  *(int *)0x2472 = iVar1;
  if (iVar1 != 0x48e) {
    return 1;
  }
  return 0;
}


// ---- FUN_1000_33b4 @ 1000:33b4

undefined2 __cdecl16far FUN_1000_33b4(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  
  iVar1 = _LREAD(unaff_CS,999,param_1,param_2);
  *(int *)0x2472 = iVar1;
  if (iVar1 != 999) {
    return 1;
  }
  return 0;
}


// ---- FUN_1000_33e0 @ 1000:33e0

undefined2 __cdecl16far FUN_1000_33e0(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  
  iVar1 = _LREAD(unaff_CS,0x3bf,param_1,param_2);
  *(int *)0x2472 = iVar1;
  if (iVar1 != 0x3bf) {
    return 1;
  }
  return 0;
}


// ---- FUN_1000_340c @ 1000:340c

undefined2 __cdecl16far FUN_1000_340c(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  
  iVar1 = _LREAD(unaff_CS,0x3ba,param_1,param_2);
  *(int *)0x2472 = iVar1;
  if (iVar1 != 0x3ba) {
    return 1;
  }
  return 0;
}


// ---- FUN_1000_3438 @ 1000:3438

undefined2 __cdecl16far FUN_1000_3438(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  
  iVar1 = _LREAD(unaff_CS,0x3ac,param_1,param_2);
  *(int *)0x2472 = iVar1;
  if (iVar1 != 0x3ac) {
    return 1;
  }
  return 0;
}


// ---- FUN_1000_3464 @ 1000:3464

undefined2 __cdecl16far FUN_1000_3464(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  
  iVar1 = _LREAD(unaff_CS,0x358,param_1,param_2);
  *(int *)0x2472 = iVar1;
  if (iVar1 != 0x358) {
    return 1;
  }
  return 0;
}


// ---- FUN_1000_3490 @ 1000:3490

undefined2 __cdecl16far FUN_1000_3490(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  
  iVar1 = _LREAD(unaff_CS,0x350,param_1,param_2);
  *(int *)0x2472 = iVar1;
  if (iVar1 != 0x350) {
    return 1;
  }
  return 0;
}


// ---- FUN_1000_34bc @ 1000:34bc

undefined2 __cdecl16far FUN_1000_34bc(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  
  iVar1 = _LREAD(unaff_CS,0x2d4,param_1,param_2);
  *(int *)0x2472 = iVar1;
  if (iVar1 != 0x2d4) {
    return 1;
  }
  return 0;
}


// ---- FUN_1000_34e8 @ 1000:34e8

undefined2 __cdecl16far FUN_1000_34e8(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  
  iVar1 = _LREAD(unaff_CS,0x2a7,param_1,param_2);
  *(int *)0x2472 = iVar1;
  if (iVar1 != 0x2a7) {
    return 1;
  }
  return 0;
}


// ---- FUN_1000_3514 @ 1000:3514

undefined2 __cdecl16far FUN_1000_3514(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  
  iVar1 = _LREAD(unaff_CS,0x29f,param_1,param_2);
  *(int *)0x2472 = iVar1;
  if (iVar1 != 0x29f) {
    return 1;
  }
  return 0;
}


// ---- FUN_1000_3540 @ 1000:3540

undefined2 __cdecl16far FUN_1000_3540(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  
  iVar1 = _LREAD(unaff_CS,0x293,param_1,param_2);
  *(int *)0x2472 = iVar1;
  if (iVar1 != 0x293) {
    return 1;
  }
  return 0;
}


// ---- FUN_1000_356c @ 1000:356c

undefined2 __cdecl16far FUN_1000_356c(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  
  iVar1 = _LREAD(unaff_CS,0x28d,param_1,param_2);
  *(int *)0x2472 = iVar1;
  if (iVar1 != 0x28d) {
    return 1;
  }
  return 0;
}


// ---- FUN_1000_3598 @ 1000:3598

undefined2 __cdecl16far FUN_1000_3598(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  
  iVar1 = _LREAD(unaff_CS,0x289,param_1,param_2);
  *(int *)0x2472 = iVar1;
  if (iVar1 != 0x289) {
    return 1;
  }
  return 0;
}


// ---- FUN_1000_35c4 @ 1000:35c4

undefined2 __cdecl16far FUN_1000_35c4(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  
  iVar1 = _LREAD(unaff_CS,0x27f,param_1,param_2);
  *(int *)0x2472 = iVar1;
  if (iVar1 != 0x27f) {
    return 1;
  }
  return 0;
}


// ---- FUN_1000_35f0 @ 1000:35f0

undefined2 __cdecl16far FUN_1000_35f0(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  
  iVar1 = _LREAD(unaff_CS,0x21c,param_1,param_2);
  *(int *)0x2472 = iVar1;
  if (iVar1 != 0x21c) {
    return 1;
  }
  return 0;
}


// ---- FUN_1000_361c @ 1000:361c

int __cdecl16far FUN_1000_361c(byte *param_1,undefined2 param_2)

{
  byte bVar2;
  int iVar1;
  uint uVar3;
  byte *pbVar4;
  int local_6;
  
  local_6 = 0;
  uVar3 = 0;
  pbVar4 = param_1;
  do {
    local_6 = local_6 + (uint)*pbVar4;
    uVar3 = uVar3 + 1;
    pbVar4 = pbVar4 + 1;
  } while (uVar3 < 0x5fa);
  iVar1 = (local_6 - (uint)param_1[3]) - (uint)param_1[4];
  bVar2 = (byte)((uint)iVar1 >> 8);
  if (*(int *)(param_1 + 3) == iVar1) {
    iVar1 = (uint)bVar2 << 8;
  }
  else {
    iVar1 = CONCAT11(bVar2,1);
  }
  return iVar1;
}


// ---- FUN_1000_3676 @ 1000:3676

int __cdecl16far FUN_1000_3676(byte *param_1,undefined2 param_2)

{
  byte bVar2;
  int iVar1;
  uint uVar3;
  byte *pbVar4;
  int local_6;
  
  local_6 = 0;
  uVar3 = 0;
  pbVar4 = param_1;
  do {
    local_6 = local_6 + (uint)*pbVar4;
    uVar3 = uVar3 + 1;
    pbVar4 = pbVar4 + 1;
  } while (uVar3 < 0x5bf);
  iVar1 = (local_6 - (uint)param_1[3]) - (uint)param_1[4];
  bVar2 = (byte)((uint)iVar1 >> 8);
  if (*(int *)(param_1 + 3) == iVar1) {
    iVar1 = (uint)bVar2 << 8;
  }
  else {
    iVar1 = CONCAT11(bVar2,1);
  }
  return iVar1;
}


// ---- FUN_1000_36d0 @ 1000:36d0

int __cdecl16far FUN_1000_36d0(byte *param_1,undefined2 param_2)

{
  byte bVar2;
  int iVar1;
  uint uVar3;
  byte *pbVar4;
  int local_6;
  
  local_6 = 0;
  uVar3 = 0;
  pbVar4 = param_1;
  do {
    local_6 = local_6 + (uint)*pbVar4;
    uVar3 = uVar3 + 1;
    pbVar4 = pbVar4 + 1;
  } while (uVar3 < 0x48f);
  iVar1 = (local_6 - (uint)param_1[3]) - (uint)param_1[4];
  bVar2 = (byte)((uint)iVar1 >> 8);
  if (*(int *)(param_1 + 3) == iVar1) {
    iVar1 = (uint)bVar2 << 8;
  }
  else {
    iVar1 = CONCAT11(bVar2,1);
  }
  return iVar1;
}


// ---- FUN_1000_372a @ 1000:372a

int __cdecl16far FUN_1000_372a(byte *param_1,undefined2 param_2)

{
  byte bVar2;
  int iVar1;
  uint uVar3;
  byte *pbVar4;
  int local_6;
  
  local_6 = 0;
  uVar3 = 0;
  pbVar4 = param_1;
  do {
    local_6 = local_6 + (uint)*pbVar4;
    uVar3 = uVar3 + 1;
    pbVar4 = pbVar4 + 1;
  } while (uVar3 < 0x48e);
  iVar1 = (local_6 - (uint)param_1[3]) - (uint)param_1[4];
  bVar2 = (byte)((uint)iVar1 >> 8);
  if (*(int *)(param_1 + 3) == iVar1) {
    iVar1 = (uint)bVar2 << 8;
  }
  else {
    iVar1 = CONCAT11(bVar2,1);
  }
  return iVar1;
}


// ---- FUN_1000_3784 @ 1000:3784

int __cdecl16far FUN_1000_3784(byte *param_1,undefined2 param_2)

{
  byte bVar2;
  int iVar1;
  uint uVar3;
  byte *pbVar4;
  int local_6;
  
  local_6 = 0;
  uVar3 = 0;
  pbVar4 = param_1;
  do {
    local_6 = local_6 + (uint)*pbVar4;
    uVar3 = uVar3 + 1;
    pbVar4 = pbVar4 + 1;
  } while (uVar3 < 999);
  iVar1 = (local_6 - (uint)param_1[3]) - (uint)param_1[4];
  bVar2 = (byte)((uint)iVar1 >> 8);
  if (*(int *)(param_1 + 3) == iVar1) {
    iVar1 = (uint)bVar2 << 8;
  }
  else {
    iVar1 = CONCAT11(bVar2,1);
  }
  return iVar1;
}


// ---- FUN_1000_37de @ 1000:37de

int __cdecl16far FUN_1000_37de(byte *param_1,undefined2 param_2)

{
  byte bVar2;
  int iVar1;
  uint uVar3;
  byte *pbVar4;
  int local_6;
  
  local_6 = 0;
  uVar3 = 0;
  pbVar4 = param_1;
  do {
    local_6 = local_6 + (uint)*pbVar4;
    uVar3 = uVar3 + 1;
    pbVar4 = pbVar4 + 1;
  } while (uVar3 < 0x3bf);
  iVar1 = (local_6 - (uint)param_1[3]) - (uint)param_1[4];
  bVar2 = (byte)((uint)iVar1 >> 8);
  if (*(int *)(param_1 + 3) == iVar1) {
    iVar1 = (uint)bVar2 << 8;
  }
  else {
    iVar1 = CONCAT11(bVar2,1);
  }
  return iVar1;
}


// ---- FUN_1000_3838 @ 1000:3838

int __cdecl16far FUN_1000_3838(byte *param_1,undefined2 param_2)

{
  byte bVar2;
  int iVar1;
  uint uVar3;
  byte *pbVar4;
  int local_6;
  
  local_6 = 0;
  uVar3 = 0;
  pbVar4 = param_1;
  do {
    local_6 = local_6 + (uint)*pbVar4;
    uVar3 = uVar3 + 1;
    pbVar4 = pbVar4 + 1;
  } while (uVar3 < 0x3ba);
  iVar1 = (local_6 - (uint)param_1[3]) - (uint)param_1[4];
  bVar2 = (byte)((uint)iVar1 >> 8);
  if (*(int *)(param_1 + 3) == iVar1) {
    iVar1 = (uint)bVar2 << 8;
  }
  else {
    iVar1 = CONCAT11(bVar2,1);
  }
  return iVar1;
}


// ---- FUN_1000_3892 @ 1000:3892

int __cdecl16far FUN_1000_3892(byte *param_1,undefined2 param_2)

{
  byte bVar2;
  int iVar1;
  uint uVar3;
  byte *pbVar4;
  int local_6;
  
  local_6 = 0;
  uVar3 = 0;
  pbVar4 = param_1;
  do {
    local_6 = local_6 + (uint)*pbVar4;
    uVar3 = uVar3 + 1;
    pbVar4 = pbVar4 + 1;
  } while (uVar3 < 0x3ac);
  iVar1 = (local_6 - (uint)param_1[3]) - (uint)param_1[4];
  bVar2 = (byte)((uint)iVar1 >> 8);
  if (*(int *)(param_1 + 3) == iVar1) {
    iVar1 = (uint)bVar2 << 8;
  }
  else {
    iVar1 = CONCAT11(bVar2,1);
  }
  return iVar1;
}


// ---- FUN_1000_38ec @ 1000:38ec

int __cdecl16far FUN_1000_38ec(byte *param_1,undefined2 param_2)

{
  byte bVar2;
  int iVar1;
  uint uVar3;
  byte *pbVar4;
  int local_6;
  
  local_6 = 0;
  uVar3 = 0;
  pbVar4 = param_1;
  do {
    local_6 = local_6 + (uint)*pbVar4;
    uVar3 = uVar3 + 1;
    pbVar4 = pbVar4 + 1;
  } while (uVar3 < 0x358);
  iVar1 = (local_6 - (uint)param_1[3]) - (uint)param_1[4];
  bVar2 = (byte)((uint)iVar1 >> 8);
  if (*(int *)(param_1 + 3) == iVar1) {
    iVar1 = (uint)bVar2 << 8;
  }
  else {
    iVar1 = CONCAT11(bVar2,1);
  }
  return iVar1;
}


// ---- FUN_1000_3946 @ 1000:3946

int __cdecl16far FUN_1000_3946(byte *param_1,undefined2 param_2)

{
  byte bVar2;
  int iVar1;
  uint uVar3;
  byte *pbVar4;
  int local_6;
  
  local_6 = 0;
  uVar3 = 0;
  pbVar4 = param_1;
  do {
    local_6 = local_6 + (uint)*pbVar4;
    uVar3 = uVar3 + 1;
    pbVar4 = pbVar4 + 1;
  } while (uVar3 < 0x350);
  iVar1 = (local_6 - (uint)param_1[3]) - (uint)param_1[4];
  bVar2 = (byte)((uint)iVar1 >> 8);
  if (*(int *)(param_1 + 3) == iVar1) {
    iVar1 = (uint)bVar2 << 8;
  }
  else {
    iVar1 = CONCAT11(bVar2,1);
  }
  return iVar1;
}


// ---- FUN_1000_39a0 @ 1000:39a0

int __cdecl16far FUN_1000_39a0(byte *param_1,undefined2 param_2)

{
  byte bVar2;
  int iVar1;
  uint uVar3;
  byte *pbVar4;
  int local_6;
  
  local_6 = 0;
  uVar3 = 0;
  pbVar4 = param_1;
  do {
    local_6 = local_6 + (uint)*pbVar4;
    uVar3 = uVar3 + 1;
    pbVar4 = pbVar4 + 1;
  } while (uVar3 < 0x2d4);
  iVar1 = (local_6 - (uint)param_1[3]) - (uint)param_1[4];
  bVar2 = (byte)((uint)iVar1 >> 8);
  if (*(int *)(param_1 + 3) == iVar1) {
    iVar1 = (uint)bVar2 << 8;
  }
  else {
    iVar1 = CONCAT11(bVar2,1);
  }
  return iVar1;
}


// ---- FUN_1000_39fa @ 1000:39fa

int __cdecl16far FUN_1000_39fa(byte *param_1,undefined2 param_2)

{
  byte bVar2;
  int iVar1;
  uint uVar3;
  byte *pbVar4;
  int local_6;
  
  local_6 = 0;
  uVar3 = 0;
  pbVar4 = param_1;
  do {
    local_6 = local_6 + (uint)*pbVar4;
    uVar3 = uVar3 + 1;
    pbVar4 = pbVar4 + 1;
  } while (uVar3 < 0x2a7);
  iVar1 = (local_6 - (uint)param_1[3]) - (uint)param_1[4];
  bVar2 = (byte)((uint)iVar1 >> 8);
  if (*(int *)(param_1 + 3) == iVar1) {
    iVar1 = (uint)bVar2 << 8;
  }
  else {
    iVar1 = CONCAT11(bVar2,1);
  }
  return iVar1;
}


// ---- FUN_1000_3a54 @ 1000:3a54

int __cdecl16far FUN_1000_3a54(byte *param_1,undefined2 param_2)

{
  byte bVar2;
  int iVar1;
  uint uVar3;
  byte *pbVar4;
  int local_6;
  
  local_6 = 0;
  uVar3 = 0;
  pbVar4 = param_1;
  do {
    local_6 = local_6 + (uint)*pbVar4;
    uVar3 = uVar3 + 1;
    pbVar4 = pbVar4 + 1;
  } while (uVar3 < 0x29f);
  iVar1 = (local_6 - (uint)param_1[3]) - (uint)param_1[4];
  bVar2 = (byte)((uint)iVar1 >> 8);
  if (*(int *)(param_1 + 3) == iVar1) {
    iVar1 = (uint)bVar2 << 8;
  }
  else {
    iVar1 = CONCAT11(bVar2,1);
  }
  return iVar1;
}


// ---- FUN_1000_3aae @ 1000:3aae

int __cdecl16far FUN_1000_3aae(byte *param_1,undefined2 param_2)

{
  byte bVar2;
  int iVar1;
  uint uVar3;
  byte *pbVar4;
  int local_6;
  
  local_6 = 0;
  uVar3 = 0;
  pbVar4 = param_1;
  do {
    local_6 = local_6 + (uint)*pbVar4;
    uVar3 = uVar3 + 1;
    pbVar4 = pbVar4 + 1;
  } while (uVar3 < 0x293);
  iVar1 = (local_6 - (uint)param_1[3]) - (uint)param_1[4];
  bVar2 = (byte)((uint)iVar1 >> 8);
  if (*(int *)(param_1 + 3) == iVar1) {
    iVar1 = (uint)bVar2 << 8;
  }
  else {
    iVar1 = CONCAT11(bVar2,1);
  }
  return iVar1;
}


// ---- FUN_1000_3b08 @ 1000:3b08

int __cdecl16far FUN_1000_3b08(byte *param_1,undefined2 param_2)

{
  byte bVar2;
  int iVar1;
  uint uVar3;
  byte *pbVar4;
  int local_6;
  
  local_6 = 0;
  uVar3 = 0;
  pbVar4 = param_1;
  do {
    local_6 = local_6 + (uint)*pbVar4;
    uVar3 = uVar3 + 1;
    pbVar4 = pbVar4 + 1;
  } while (uVar3 < 0x28d);
  iVar1 = (local_6 - (uint)param_1[3]) - (uint)param_1[4];
  bVar2 = (byte)((uint)iVar1 >> 8);
  if (*(int *)(param_1 + 3) == iVar1) {
    iVar1 = (uint)bVar2 << 8;
  }
  else {
    iVar1 = CONCAT11(bVar2,1);
  }
  return iVar1;
}


// ---- FUN_1000_3b62 @ 1000:3b62

int __cdecl16far FUN_1000_3b62(byte *param_1,undefined2 param_2)

{
  byte bVar2;
  int iVar1;
  uint uVar3;
  byte *pbVar4;
  int local_6;
  
  local_6 = 0;
  uVar3 = 0;
  pbVar4 = param_1;
  do {
    local_6 = local_6 + (uint)*pbVar4;
    uVar3 = uVar3 + 1;
    pbVar4 = pbVar4 + 1;
  } while (uVar3 < 0x289);
  iVar1 = (local_6 - (uint)param_1[3]) - (uint)param_1[4];
  bVar2 = (byte)((uint)iVar1 >> 8);
  if (*(int *)(param_1 + 3) == iVar1) {
    iVar1 = (uint)bVar2 << 8;
  }
  else {
    iVar1 = CONCAT11(bVar2,1);
  }
  return iVar1;
}


// ---- FUN_1000_3bbc @ 1000:3bbc

int __cdecl16far FUN_1000_3bbc(byte *param_1,undefined2 param_2)

{
  byte bVar2;
  int iVar1;
  uint uVar3;
  byte *pbVar4;
  int local_6;
  
  local_6 = 0;
  uVar3 = 0;
  pbVar4 = param_1;
  do {
    local_6 = local_6 + (uint)*pbVar4;
    uVar3 = uVar3 + 1;
    pbVar4 = pbVar4 + 1;
  } while (uVar3 < 0x27f);
  iVar1 = (local_6 - (uint)param_1[3]) - (uint)param_1[4];
  bVar2 = (byte)((uint)iVar1 >> 8);
  if (*(int *)(param_1 + 3) == iVar1) {
    iVar1 = (uint)bVar2 << 8;
  }
  else {
    iVar1 = CONCAT11(bVar2,1);
  }
  return iVar1;
}


// ---- FUN_1000_3c16 @ 1000:3c16

int __cdecl16far FUN_1000_3c16(byte *param_1,undefined2 param_2)

{
  byte bVar2;
  int iVar1;
  uint uVar3;
  byte *pbVar4;
  int local_6;
  
  local_6 = 0;
  uVar3 = 0;
  pbVar4 = param_1;
  do {
    local_6 = local_6 + (uint)*pbVar4;
    uVar3 = uVar3 + 1;
    pbVar4 = pbVar4 + 1;
  } while (uVar3 < 0x21c);
  iVar1 = (local_6 - (uint)param_1[3]) - (uint)param_1[4];
  bVar2 = (byte)((uint)iVar1 >> 8);
  if (*(int *)(param_1 + 3) == iVar1) {
    iVar1 = (uint)bVar2 << 8;
  }
  else {
    iVar1 = CONCAT11(bVar2,1);
  }
  return iVar1;
}


// ---- FUN_1000_3c70 @ 1000:3c70

void __cdecl16far FUN_1000_3c70(int param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  
  iVar1 = _LWRITE(unaff_CS,5,param_1,param_2);
  *(int *)0x4dc8 = iVar1;
  if (iVar1 == 5) {
    iVar1 = _LWRITE(0x1020,0xc,param_1 + 5,param_2);
    *(int *)0x4dc8 = iVar1;
    if (iVar1 == 0xc) {
      iVar1 = _LWRITE(0x1020,0x16,param_1 + 0x11,param_2);
      *(int *)0x4dc8 = iVar1;
      if (iVar1 == 0x16) {
        iVar1 = _LWRITE(0x1020,0x3a8,param_1 + 0x27,param_2);
        *(int *)0x4dc8 = iVar1;
        if (iVar1 == 0x3a8) {
          iVar1 = _LWRITE(0x1020,0x1db,param_1 + 0x3cf,param_2);
          *(int *)0x4dc8 = iVar1;
          if (iVar1 == 0x1db) {
            uVar5 = *(undefined2 *)0x4e08;
            iVar1 = _LWRITE(0x1020,1,param_1 + 0x5aa,param_2);
            *(int *)0x4dc8 = iVar1;
            if (iVar1 == 1) {
              uVar4 = *(undefined2 *)0x4e08;
              iVar1 = _LWRITE(0x1020,1,param_1 + 0x5ab,param_2);
              *(int *)0x4dc8 = iVar1;
              if (iVar1 == 1) {
                uVar3 = *(undefined2 *)0x4e08;
                iVar1 = _LWRITE(0x1020,5,param_1 + 0x5ac,param_2);
                *(int *)0x4dc8 = iVar1;
                if (iVar1 == 5) {
                  uVar2 = *(undefined2 *)0x4e08;
                  iVar1 = _LWRITE(0x1020,0x6e,param_1 + 0x5b1,param_2);
                  *(int *)0x4dc8 = iVar1;
                  if (iVar1 == 0x6e) {
                    FUN_1000_2288(0x5dc,0,0xa3c0,0x1000,uVar2,uVar3,uVar4,uVar5);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}


// ---- FUN_1000_3d8e @ 1000:3d8e

void __cdecl16far FUN_1000_3d8e(int param_1,undefined2 param_2)

{
  uint uVar1;
  undefined2 local_6;
  
  local_6 = 0;
  for (uVar1 = 0; uVar1 < 3; uVar1 = uVar1 + 1) {
    local_6 = local_6 + (uint)*(byte *)(param_1 + uVar1);
  }
  uVar1 = 0;
  do {
    local_6 = local_6 + (uint)*(byte *)(param_1 + uVar1 + 5);
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0xc);
  uVar1 = 0;
  do {
    local_6 = local_6 + (uint)*(byte *)(param_1 + uVar1 + 0x11);
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x16);
  uVar1 = 0;
  do {
    local_6 = local_6 + (uint)*(byte *)(param_1 + uVar1 + 0x27);
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x3a8);
  uVar1 = 0;
  do {
    local_6 = local_6 + (uint)*(byte *)(param_1 + uVar1 + 0x3cf);
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x1db);
  local_6 = local_6 + (uint)*(byte *)(param_1 + 0x5aa) + (uint)*(byte *)(param_1 + 0x5ab);
  uVar1 = 0;
  do {
    local_6 = local_6 + (uint)*(byte *)(param_1 + uVar1 + 0x5ac);
    uVar1 = uVar1 + 1;
  } while (uVar1 < 5);
  uVar1 = 0;
  do {
    local_6 = local_6 + (uint)*(byte *)(param_1 + uVar1 + 0x5b1);
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x6e);
  *(int *)(param_1 + 3) = local_6;
  return;
}


// ---- FUN_1000_3e7c @ 1000:3e7c

void __cdecl16far FUN_1000_3e7c(int param_1,undefined2 param_2,int param_3,undefined2 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = param_3 + 5;
  FUN_1000_9f50(iVar4,param_4,0x1008);
  iVar2 = param_3 + 0x11;
  FUN_1000_9fa2(iVar2,param_4);
  iVar3 = param_3 + 0x5b1;
  FUN_1000_9ea6(iVar3,param_4);
  FUN_1000_8230(param_3,param_4,param_1,param_2);
  iVar1 = param_1 + 5;
  FUN_1000_817e(iVar4,param_4,iVar1,param_2);
  FUN_1000_81be(iVar4,param_4,iVar1,param_2);
  FUN_1000_81d8(iVar4,param_4,iVar1,param_2);
  FUN_1000_7a96(iVar2,param_4,param_1 + 0xe,param_2);
  FUN_1000_7a7c(iVar2,param_4,param_1 + 0xe,param_2);
  iVar1 = param_1 + 0x1a;
  iVar2 = param_3 + 0x27;
  FUN_1000_7b18(iVar2,param_4,iVar1,param_2);
  FUN_1000_7e36(iVar2,param_4,iVar1,param_2);
  FUN_1000_825c(iVar2,param_4,iVar1,param_2);
  FUN_1000_82b6(iVar2,param_4,iVar1,param_2);
  FUN_1000_82dc(iVar2,param_4,iVar1,param_2);
  FUN_1000_8302(iVar2,param_4,iVar1,param_2);
  FUN_1000_8328(iVar2,param_4,iVar1,param_2);
  FUN_1000_8372(iVar2,param_4,iVar1,param_2);
  FUN_1000_84a4(iVar2,param_4,iVar1,param_2);
  FUN_1000_8520(iVar2,param_4,iVar1,param_2);
  FUN_1000_863e(iVar2,param_4,iVar1,param_2);
  FUN_1000_86b0(iVar2,param_4,iVar1,param_2);
  FUN_1000_87bc(iVar2,param_4,iVar1,param_2);
  FUN_1000_88a4(iVar2,param_4,iVar1,param_2);
  FUN_1000_89e0(iVar2,param_4,iVar1,param_2);
  iVar1 = param_1 + 0x3c2;
  iVar2 = param_3 + 0x3cf;
  FUN_1000_8abe(iVar2,param_4,iVar1,param_2);
  FUN_1000_8c6c(iVar2,param_4,iVar1,param_2);
  FUN_1000_8c88(iVar2,param_4,iVar1,param_2);
  FUN_1000_8ca4(iVar2,param_4,iVar1,param_2);
  FUN_1000_8fdc(iVar2,param_4,iVar1,param_2);
  FUN_1000_8a2a(param_3 + 0x5aa,param_4,param_1 + 0x59d,param_2);
  FUN_1000_8a42(param_3 + 0x5ab,param_4,param_1 + 0x59e,param_2);
  FUN_1000_8a5a(param_3 + 0x5ac,param_4,param_1 + 0x59f,param_2);
  FUN_1000_8a72(param_3 + 0x5ac,param_4,param_1 + 0x59f,param_2);
  param_1 = param_1 + 0x5a4;
  FUN_1000_9040(iVar3,param_4,param_1,param_2);
  FUN_1000_9092(iVar3,param_4,param_1,param_2);
  FUN_1000_90d4(iVar3,param_4,param_1,param_2);
  FUN_1000_911c(iVar3,param_4,param_1,param_2);
  FUN_1000_915e(iVar3,param_4,param_1,param_2);
  FUN_1000_9238(iVar3,param_4,param_1,param_2);
  return;
}


// ---- FUN_1000_41e8 @ 1000:41e8

void __cdecl16far FUN_1000_41e8(int param_1,undefined2 param_2,int param_3,undefined2 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = param_3 + 5;
  FUN_1000_9f50(iVar6,param_4,0x1008);
  iVar2 = param_3 + 0x11;
  FUN_1000_9fa2(iVar2,param_4);
  iVar3 = param_3 + 0x5b1;
  FUN_1000_9ea6(iVar3,param_4);
  iVar4 = param_3 + 0x27;
  FUN_1000_9c78(iVar4,param_4);
  iVar5 = param_3 + 0x3cf;
  FUN_1000_92f8(iVar5,param_4);
  FUN_1000_8230(param_3,param_4,param_1,param_2);
  iVar1 = param_1 + 5;
  FUN_1000_817e(iVar6,param_4,iVar1,param_2);
  FUN_1000_81be(iVar6,param_4,iVar1,param_2);
  FUN_1000_81d8(iVar6,param_4,iVar1,param_2);
  FUN_1000_7a96(iVar2,param_4,param_1 + 0xe,param_2);
  FUN_1000_7a7c(iVar2,param_4,param_1 + 0xe,param_2);
  iVar1 = param_1 + 0x1a;
  FUN_1000_7b18(iVar4,param_4,iVar1,param_2);
  FUN_1000_7e36(iVar4,param_4,iVar1,param_2);
  FUN_1000_825c(iVar4,param_4,iVar1,param_2);
  FUN_1000_82b6(iVar4,param_4,iVar1,param_2);
  FUN_1000_82dc(iVar4,param_4,iVar1,param_2);
  FUN_1000_8302(iVar4,param_4,iVar1,param_2);
  FUN_1000_8328(iVar4,param_4,iVar1,param_2);
  FUN_1000_8372(iVar4,param_4,iVar1,param_2);
  FUN_1000_84a4(iVar4,param_4,iVar1,param_2);
  FUN_1000_8520(iVar4,param_4,iVar1,param_2);
  FUN_1000_863e(iVar4,param_4,iVar1,param_2);
  FUN_1000_86b0(iVar4,param_4,iVar1,param_2);
  FUN_1000_87bc(iVar4,param_4,iVar1,param_2);
  FUN_1000_88a4(iVar4,param_4,iVar1,param_2);
  iVar1 = param_1 + 0x3ba;
  FUN_1000_8d4c(iVar5,param_4,iVar1,param_2);
  FUN_1000_8efc(iVar5,param_4,iVar1,param_2);
  FUN_1000_8f18(iVar5,param_4,iVar1,param_2);
  FUN_1000_8f34(iVar5,param_4,iVar1,param_2);
  FUN_1000_8a2a(param_3 + 0x5aa,param_4,param_1 + 0x562,param_2);
  FUN_1000_8a42(param_3 + 0x5ab,param_4,param_1 + 0x563,param_2);
  FUN_1000_8a5a(param_3 + 0x5ac,param_4,param_1 + 0x564,param_2);
  FUN_1000_8a72(param_3 + 0x5ac,param_4,param_1 + 0x564,param_2);
  param_1 = param_1 + 0x569;
  FUN_1000_9040(iVar3,param_4,param_1,param_2);
  FUN_1000_9092(iVar3,param_4,param_1,param_2);
  FUN_1000_90d4(iVar3,param_4,param_1,param_2);
  FUN_1000_911c(iVar3,param_4,param_1,param_2);
  FUN_1000_915e(iVar3,param_4,param_1,param_2);
  FUN_1000_9238(iVar3,param_4,param_1,param_2);
  return;
}


// ---- FUN_1000_4546 @ 1000:4546

void __cdecl16far FUN_1000_4546(int param_1,undefined2 param_2,int param_3,undefined2 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = param_3 + 5;
  FUN_1000_9f50(iVar6,param_4,0x1008);
  iVar2 = param_3 + 0x11;
  FUN_1000_9fa2(iVar2,param_4);
  iVar3 = param_3 + 0x5b1;
  FUN_1000_9ea6(iVar3,param_4);
  iVar4 = param_3 + 0x27;
  FUN_1000_9c78(iVar4,param_4);
  iVar5 = param_3 + 0x3cf;
  FUN_1000_92f8(iVar5,param_4);
  FUN_1000_9960(iVar4,param_4);
  FUN_1000_8230(param_3,param_4,param_1,param_2);
  iVar1 = param_1 + 5;
  FUN_1000_817e(iVar6,param_4,iVar1,param_2);
  FUN_1000_81be(iVar6,param_4,iVar1,param_2);
  FUN_1000_81d8(iVar6,param_4,iVar1,param_2);
  FUN_1000_7a96(iVar2,param_4,param_1 + 0xe,param_2);
  FUN_1000_7a7c(iVar2,param_4,param_1 + 0xe,param_2);
  iVar1 = param_1 + 0x1a;
  FUN_1000_7b18(iVar4,param_4,iVar1,param_2);
  FUN_1000_7e36(iVar4,param_4,iVar1,param_2);
  FUN_1000_825c(iVar4,param_4,iVar1,param_2);
  FUN_1000_82b6(iVar4,param_4,iVar1,param_2);
  FUN_1000_82dc(iVar4,param_4,iVar1,param_2);
  FUN_1000_8302(iVar4,param_4,iVar1,param_2);
  FUN_1000_8328(iVar4,param_4,iVar1,param_2);
  FUN_1000_8372(iVar4,param_4,iVar1,param_2);
  FUN_1000_84a4(iVar4,param_4,iVar1,param_2);
  FUN_1000_8520(iVar4,param_4,iVar1,param_2);
  FUN_1000_863e(iVar4,param_4,iVar1,param_2);
  FUN_1000_86b0(iVar4,param_4,iVar1,param_2);
  FUN_1000_87bc(iVar4,param_4,iVar1,param_2);
  iVar1 = param_1 + 0x28a;
  FUN_1000_8d4c(iVar5,param_4,iVar1,param_2);
  FUN_1000_8efc(iVar5,param_4,iVar1,param_2);
  FUN_1000_8f18(iVar5,param_4,iVar1,param_2);
  FUN_1000_8f34(iVar5,param_4,iVar1,param_2);
  FUN_1000_8a2a(param_3 + 0x5aa,param_4,param_1 + 0x432,param_2);
  FUN_1000_8a42(param_3 + 0x5ab,param_4,param_1 + 0x433,param_2);
  FUN_1000_8a5a(param_3 + 0x5ac,param_4,param_1 + 0x434,param_2);
  FUN_1000_8a72(param_3 + 0x5ac,param_4,param_1 + 0x434,param_2);
  param_1 = param_1 + 0x439;
  FUN_1000_9040(iVar3,param_4,param_1,param_2);
  FUN_1000_9092(iVar3,param_4,param_1,param_2);
  FUN_1000_90d4(iVar3,param_4,param_1,param_2);
  FUN_1000_911c(iVar3,param_4,param_1,param_2);
  FUN_1000_915e(iVar3,param_4,param_1,param_2);
  FUN_1000_9238(iVar3,param_4,param_1,param_2);
  return;
}


// ---- FUN_1000_489e @ 1000:489e

void __cdecl16far FUN_1000_489e(int param_1,undefined2 param_2,int param_3,undefined2 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 extraout_AH;
  int iVar6;
  
  iVar6 = param_3 + 5;
  FUN_1000_9f50(iVar6,param_4,0x1008);
  iVar2 = param_3 + 0x11;
  FUN_1000_9fa2(iVar2,param_4);
  iVar3 = param_3 + 0x5b1;
  FUN_1000_9ea6(iVar3,param_4);
  iVar4 = param_3 + 0x27;
  FUN_1000_9c78(iVar4,param_4);
  iVar5 = param_3 + 0x3cf;
  FUN_1000_92f8(iVar5,param_4);
  FUN_1000_8230(param_3,param_4,param_1,param_2);
  iVar1 = param_1 + 5;
  FUN_1000_817e(iVar6,param_4,iVar1,param_2);
  FUN_1000_81be(iVar6,param_4,iVar1,param_2);
  FUN_1000_81d8(iVar6,param_4,iVar1,param_2);
  FUN_1000_7a96(iVar2,param_4,param_1 + 0xe,param_2);
  FUN_1000_9f72(iVar2,param_4,CONCAT11(extraout_AH,*(undefined1 *)(param_3 + 0x507)));
  iVar1 = param_1 + 0x19;
  FUN_1000_7b18(iVar4,param_4,iVar1,param_2);
  FUN_1000_7e36(iVar4,param_4,iVar1,param_2);
  FUN_1000_825c(iVar4,param_4,iVar1,param_2);
  FUN_1000_82b6(iVar4,param_4,iVar1,param_2);
  FUN_1000_82dc(iVar4,param_4,iVar1,param_2);
  FUN_1000_8302(iVar4,param_4,iVar1,param_2);
  FUN_1000_8328(iVar4,param_4,iVar1,param_2);
  FUN_1000_8372(iVar4,param_4,iVar1,param_2);
  FUN_1000_84a4(iVar4,param_4,iVar1,param_2);
  FUN_1000_8520(iVar4,param_4,iVar1,param_2);
  FUN_1000_863e(iVar4,param_4,iVar1,param_2);
  FUN_1000_86b0(iVar4,param_4,iVar1,param_2);
  FUN_1000_87bc(iVar4,param_4,iVar1,param_2);
  FUN_1000_9960(iVar4,param_4);
  iVar1 = param_1 + 0x289;
  FUN_1000_8d4c(iVar5,param_4,iVar1,param_2);
  FUN_1000_8efc(iVar5,param_4,iVar1,param_2);
  FUN_1000_8f18(iVar5,param_4,iVar1,param_2);
  FUN_1000_8f34(iVar5,param_4,iVar1,param_2);
  FUN_1000_8a2a(param_3 + 0x5aa,param_4,param_1 + 0x431,param_2);
  FUN_1000_8a42(param_3 + 0x5ab,param_4,param_1 + 0x432,param_2);
  FUN_1000_8a5a(param_3 + 0x5ac,param_4,param_1 + 0x433,param_2);
  FUN_1000_8a72(param_3 + 0x5ac,param_4,param_1 + 0x433,param_2);
  param_1 = param_1 + 0x438;
  FUN_1000_9040(iVar3,param_4,param_1,param_2);
  FUN_1000_9092(iVar3,param_4,param_1,param_2);
  FUN_1000_90d4(iVar3,param_4,param_1,param_2);
  FUN_1000_911c(iVar3,param_4,param_1,param_2);
  FUN_1000_915e(iVar3,param_4,param_1,param_2);
  FUN_1000_9238(iVar3,param_4,param_1,param_2);
  return;
}


// ---- FUN_1000_4bf4 @ 1000:4bf4

void __cdecl16far FUN_1000_4bf4(int param_1,undefined2 param_2,int param_3,undefined2 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 extraout_AH;
  undefined1 extraout_AH_00;
  int iVar6;
  
  iVar6 = param_3 + 5;
  FUN_1000_9f50(iVar6,param_4,0x1008);
  iVar2 = param_3 + 0x11;
  FUN_1000_9fa2(iVar2,param_4);
  iVar3 = param_3 + 0x5b1;
  FUN_1000_9ea6(iVar3,param_4);
  iVar4 = param_3 + 0x27;
  FUN_1000_9c78(iVar4,param_4);
  iVar5 = param_3 + 0x3cf;
  FUN_1000_92f8(iVar5,param_4);
  FUN_1000_9f72(iVar2,param_4,CONCAT11(extraout_AH,*(undefined1 *)(param_3 + 0x507)));
  FUN_1000_8230(param_3,param_4,param_1,param_2);
  iVar1 = param_1 + 5;
  FUN_1000_817e(iVar6,param_4,iVar1,param_2);
  FUN_1000_81be(iVar6,param_4,iVar1,param_2);
  FUN_1000_81d8(iVar6,param_4,iVar1,param_2);
  FUN_1000_7a96(iVar2,param_4,param_1 + 0xe,param_2);
  iVar1 = param_1 + 0x19;
  FUN_1000_7b18(iVar4,param_4,iVar1,param_2);
  FUN_1000_7e36(iVar4,param_4,iVar1,param_2);
  FUN_1000_825c(iVar4,param_4,iVar1,param_2);
  FUN_1000_82b6(iVar4,param_4,iVar1,param_2);
  FUN_1000_82dc(iVar4,param_4,iVar1,param_2);
  FUN_1000_8302(iVar4,param_4,iVar1,param_2);
  FUN_1000_8328(iVar4,param_4,iVar1,param_2);
  FUN_1000_8372(iVar4,param_4,iVar1,param_2);
  FUN_1000_84a4(iVar4,param_4,iVar1,param_2);
  FUN_1000_8520(iVar4,param_4,iVar1,param_2);
  FUN_1000_863e(iVar4,param_4,iVar1,param_2);
  FUN_1000_86b0(iVar4,param_4,iVar1,param_2);
  FUN_1000_9896(iVar4,param_4,CONCAT11(extraout_AH_00,*(undefined1 *)(param_3 + 0x507)));
  FUN_1000_9960(iVar4,param_4);
  iVar1 = param_1 + 0x1e4;
  FUN_1000_8d4c(iVar5,param_4,iVar1,param_2);
  FUN_1000_8efc(iVar5,param_4,iVar1,param_2);
  FUN_1000_8f18(iVar5,param_4,iVar1,param_2);
  FUN_1000_8f34(iVar5,param_4,iVar1,param_2);
  FUN_1000_8a2a(param_3 + 0x5aa,param_4,param_1 + 0x38c,param_2);
  FUN_1000_8a42(param_3 + 0x5ab,param_4,param_1 + 0x38d,param_2);
  FUN_1000_8a5a(param_3 + 0x5ac,param_4,param_1 + 0x38e,param_2);
  FUN_1000_8a72(param_3 + 0x5ac,param_4,param_1 + 0x38e,param_2);
  param_1 = param_1 + 0x393;
  FUN_1000_9040(iVar3,param_4,param_1,param_2);
  FUN_1000_9092(iVar3,param_4,param_1,param_2);
  FUN_1000_90d4(iVar3,param_4,param_1,param_2);
  FUN_1000_911c(iVar3,param_4,param_1,param_2);
  FUN_1000_915e(iVar3,param_4,param_1,param_2);
  FUN_1000_9e88(iVar3,param_4);
  return;
}


// ---- FUN_1000_4f4a @ 1000:4f4a

void __cdecl16far FUN_1000_4f4a(int param_1,undefined2 param_2,int param_3,undefined2 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 extraout_AH;
  undefined1 extraout_AH_00;
  int iVar6;
  
  iVar6 = param_3 + 5;
  FUN_1000_9f50(iVar6,param_4,0x1008);
  iVar2 = param_3 + 0x11;
  FUN_1000_9fa2(iVar2,param_4);
  iVar3 = param_3 + 0x5b1;
  FUN_1000_9ea6(iVar3,param_4);
  iVar4 = param_3 + 0x27;
  FUN_1000_9c78(iVar4,param_4);
  iVar5 = param_3 + 0x3cf;
  FUN_1000_92f8(iVar5,param_4);
  FUN_1000_9f72(iVar2,param_4,CONCAT11(extraout_AH,*(undefined1 *)(param_3 + 0x507)));
  FUN_1000_8230(param_3,param_4,param_1,param_2);
  iVar1 = param_1 + 5;
  FUN_1000_817e(iVar6,param_4,iVar1,param_2);
  FUN_1000_81be(iVar6,param_4,iVar1,param_2);
  FUN_1000_81d8(iVar6,param_4,iVar1,param_2);
  FUN_1000_7a96(iVar2,param_4,param_1 + 0xe,param_2);
  iVar1 = param_1 + 0x19;
  FUN_1000_7b18(iVar4,param_4,iVar1,param_2);
  FUN_1000_7e36(iVar4,param_4,iVar1,param_2);
  FUN_1000_825c(iVar4,param_4,iVar1,param_2);
  FUN_1000_82b6(iVar4,param_4,iVar1,param_2);
  FUN_1000_82dc(iVar4,param_4,iVar1,param_2);
  FUN_1000_8302(iVar4,param_4,iVar1,param_2);
  FUN_1000_8328(iVar4,param_4,iVar1,param_2);
  FUN_1000_8372(iVar4,param_4,iVar1,param_2);
  FUN_1000_84a4(iVar4,param_4,iVar1,param_2);
  FUN_1000_8520(iVar4,param_4,iVar1,param_2);
  FUN_1000_863e(iVar4,param_4,iVar1,param_2);
  FUN_1000_97da(iVar4,param_4);
  FUN_1000_9896(iVar4,param_4,CONCAT11(extraout_AH_00,*(undefined1 *)(param_3 + 0x507)));
  FUN_1000_9960(iVar4,param_4);
  iVar1 = param_1 + 0x1bc;
  FUN_1000_8d4c(iVar5,param_4,iVar1,param_2);
  FUN_1000_8efc(iVar5,param_4,iVar1,param_2);
  FUN_1000_8f18(iVar5,param_4,iVar1,param_2);
  FUN_1000_8f34(iVar5,param_4,iVar1,param_2);
  FUN_1000_8a2a(param_3 + 0x5aa,param_4,param_1 + 0x364,param_2);
  FUN_1000_8a42(param_3 + 0x5ab,param_4,param_1 + 0x365,param_2);
  FUN_1000_8a5a(param_3 + 0x5ac,param_4,param_1 + 0x366,param_2);
  FUN_1000_8a72(param_3 + 0x5ac,param_4,param_1 + 0x366,param_2);
  param_1 = param_1 + 0x36b;
  FUN_1000_9040(iVar3,param_4,param_1,param_2);
  FUN_1000_9092(iVar3,param_4,param_1,param_2);
  FUN_1000_90d4(iVar3,param_4,param_1,param_2);
  FUN_1000_911c(iVar3,param_4,param_1,param_2);
  FUN_1000_915e(iVar3,param_4,param_1,param_2);
  FUN_1000_9e88(iVar3,param_4);
  return;
}


// ---- FUN_1000_529a @ 1000:529a

void __cdecl16far FUN_1000_529a(int param_1,undefined2 param_2,int param_3,undefined2 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 extraout_AH;
  undefined1 extraout_AH_00;
  int iVar5;
  
  iVar5 = param_3 + 5;
  FUN_1000_9f50(iVar5,param_4,0x1008);
  iVar1 = param_3 + 0x11;
  FUN_1000_9fa2(iVar1,param_4);
  iVar2 = param_3 + 0x5b1;
  FUN_1000_9ea6(iVar2,param_4);
  iVar3 = param_3 + 0x27;
  FUN_1000_9c78(iVar3,param_4);
  iVar4 = param_3 + 0x3cf;
  FUN_1000_92f8(iVar4,param_4);
  FUN_1000_9f72(iVar1,param_4,CONCAT11(extraout_AH,*(undefined1 *)(param_3 + 0x507)));
  FUN_1000_8230(param_3,param_4,param_1,param_2);
  FUN_1000_817e(iVar5,param_4,param_1 + 5,param_2);
  FUN_1000_81be(iVar5,param_4,param_1 + 5,param_2);
  FUN_1000_9f26(iVar5,param_4);
  FUN_1000_7a96(iVar1,param_4,param_1 + 9,param_2);
  iVar1 = param_1 + 0x14;
  FUN_1000_7b18(iVar3,param_4,iVar1,param_2);
  FUN_1000_7e36(iVar3,param_4,iVar1,param_2);
  FUN_1000_825c(iVar3,param_4,iVar1,param_2);
  FUN_1000_82b6(iVar3,param_4,iVar1,param_2);
  FUN_1000_82dc(iVar3,param_4,iVar1,param_2);
  FUN_1000_8302(iVar3,param_4,iVar1,param_2);
  FUN_1000_8328(iVar3,param_4,iVar1,param_2);
  FUN_1000_8372(iVar3,param_4,iVar1,param_2);
  FUN_1000_84a4(iVar3,param_4,iVar1,param_2);
  FUN_1000_8520(iVar3,param_4,iVar1,param_2);
  FUN_1000_863e(iVar3,param_4,iVar1,param_2);
  FUN_1000_97da(iVar3,param_4);
  FUN_1000_9896(iVar3,param_4,CONCAT11(extraout_AH_00,*(undefined1 *)(param_3 + 0x507)));
  FUN_1000_9960(iVar3,param_4);
  iVar1 = param_1 + 0x1b7;
  FUN_1000_8d4c(iVar4,param_4,iVar1,param_2);
  FUN_1000_8efc(iVar4,param_4,iVar1,param_2);
  FUN_1000_8f18(iVar4,param_4,iVar1,param_2);
  FUN_1000_8f34(iVar4,param_4,iVar1,param_2);
  FUN_1000_8a2a(param_3 + 0x5aa,param_4,param_1 + 0x35f,param_2);
  FUN_1000_8a42(param_3 + 0x5ab,param_4,param_1 + 0x360,param_2);
  FUN_1000_8a5a(param_3 + 0x5ac,param_4,param_1 + 0x361,param_2);
  FUN_1000_8a72(param_3 + 0x5ac,param_4,param_1 + 0x361,param_2);
  param_1 = param_1 + 0x366;
  FUN_1000_9040(iVar2,param_4,param_1,param_2);
  FUN_1000_9092(iVar2,param_4,param_1,param_2);
  FUN_1000_90d4(iVar2,param_4,param_1,param_2);
  FUN_1000_911c(iVar2,param_4,param_1,param_2);
  FUN_1000_915e(iVar2,param_4,param_1,param_2);
  FUN_1000_9e88(iVar2,param_4);
  return;
}


// ---- FUN_1000_55e4 @ 1000:55e4

void __cdecl16far FUN_1000_55e4(int param_1,undefined2 param_2,int param_3,undefined2 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 extraout_AH;
  undefined1 extraout_AH_00;
  int iVar5;
  
  iVar5 = param_3 + 5;
  FUN_1000_9f50(iVar5,param_4,0x1008);
  iVar1 = param_3 + 0x11;
  FUN_1000_9fa2(iVar1,param_4);
  iVar2 = param_3 + 0x5b1;
  FUN_1000_9ea6(iVar2,param_4);
  iVar3 = param_3 + 0x27;
  FUN_1000_9c78(iVar3,param_4);
  iVar4 = param_3 + 0x3cf;
  FUN_1000_92f8(iVar4,param_4);
  FUN_1000_9f72(iVar1,param_4,CONCAT11(extraout_AH,*(undefined1 *)(param_3 + 0x507)));
  FUN_1000_8230(param_3,param_4,param_1,param_2);
  FUN_1000_817e(iVar5,param_4,param_1 + 5,param_2);
  FUN_1000_81be(iVar5,param_4,param_1 + 5,param_2);
  FUN_1000_9f26(iVar5,param_4);
  FUN_1000_7a96(iVar1,param_4,param_1 + 9,param_2);
  iVar1 = param_1 + 0x14;
  FUN_1000_7b18(iVar3,param_4,iVar1,param_2);
  FUN_1000_7e36(iVar3,param_4,iVar1,param_2);
  FUN_1000_825c(iVar3,param_4,iVar1,param_2);
  FUN_1000_82b6(iVar3,param_4,iVar1,param_2);
  FUN_1000_82dc(iVar3,param_4,iVar1,param_2);
  FUN_1000_8302(iVar3,param_4,iVar1,param_2);
  FUN_1000_8328(iVar3,param_4,iVar1,param_2);
  FUN_1000_8372(iVar3,param_4,iVar1,param_2);
  FUN_1000_84a4(iVar3,param_4,iVar1,param_2);
  FUN_1000_8520(iVar3,param_4,iVar1,param_2);
  FUN_1000_978e(iVar3,param_4);
  FUN_1000_97da(iVar3,param_4);
  FUN_1000_9896(iVar3,param_4,CONCAT11(extraout_AH_00,*(undefined1 *)(param_3 + 0x507)));
  FUN_1000_9960(iVar3,param_4);
  iVar1 = param_1 + 0x1a9;
  FUN_1000_8d4c(iVar4,param_4,iVar1,param_2);
  FUN_1000_8efc(iVar4,param_4,iVar1,param_2);
  FUN_1000_8f18(iVar4,param_4,iVar1,param_2);
  FUN_1000_8f34(iVar4,param_4,iVar1,param_2);
  FUN_1000_8a2a(param_3 + 0x5aa,param_4,param_1 + 0x351,param_2);
  FUN_1000_8a42(param_3 + 0x5ab,param_4,param_1 + 0x352,param_2);
  FUN_1000_8a5a(param_3 + 0x5ac,param_4,param_1 + 0x353,param_2);
  FUN_1000_8a72(param_3 + 0x5ac,param_4,param_1 + 0x353,param_2);
  param_1 = param_1 + 0x358;
  FUN_1000_9040(iVar2,param_4,param_1,param_2);
  FUN_1000_9092(iVar2,param_4,param_1,param_2);
  FUN_1000_90d4(iVar2,param_4,param_1,param_2);
  FUN_1000_911c(iVar2,param_4,param_1,param_2);
  FUN_1000_915e(iVar2,param_4,param_1,param_2);
  FUN_1000_9e88(iVar2,param_4);
  return;
}


// ---- FUN_1000_5928 @ 1000:5928

void __cdecl16far FUN_1000_5928(int param_1,undefined2 param_2,int param_3,undefined2 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 extraout_AH;
  undefined1 extraout_AH_00;
  int iVar5;
  
  iVar5 = param_3 + 5;
  FUN_1000_9f50(iVar5,param_4,0x1008);
  iVar1 = param_3 + 0x11;
  FUN_1000_9fa2(iVar1,param_4);
  iVar2 = param_3 + 0x5b1;
  FUN_1000_9ea6(iVar2,param_4);
  iVar3 = param_3 + 0x27;
  FUN_1000_9c78(iVar3,param_4);
  iVar4 = param_3 + 0x3cf;
  FUN_1000_92f8(iVar4,param_4);
  FUN_1000_9f72(iVar1,param_4,CONCAT11(extraout_AH,*(undefined1 *)(param_3 + 0x507)));
  FUN_1000_8230(param_3,param_4,param_1,param_2);
  FUN_1000_817e(iVar5,param_4,param_1 + 5,param_2);
  FUN_1000_9f12(iVar5,param_4);
  FUN_1000_9f26(iVar5,param_4);
  FUN_1000_7a96(iVar1,param_4,param_1 + 8,param_2);
  iVar1 = param_1 + 0x13;
  FUN_1000_7b18(iVar3,param_4,iVar1,param_2);
  FUN_1000_7e36(iVar3,param_4,iVar1,param_2);
  FUN_1000_825c(iVar3,param_4,iVar1,param_2);
  FUN_1000_82b6(iVar3,param_4,iVar1,param_2);
  FUN_1000_82dc(iVar3,param_4,iVar1,param_2);
  FUN_1000_8302(iVar3,param_4,iVar1,param_2);
  FUN_1000_8328(iVar3,param_4,iVar1,param_2);
  FUN_1000_8372(iVar3,param_4,iVar1,param_2);
  FUN_1000_84a4(iVar3,param_4,iVar1,param_2);
  FUN_1000_96ce(iVar3,param_4);
  FUN_1000_978e(iVar3,param_4);
  FUN_1000_97da(iVar3,param_4);
  FUN_1000_9896(iVar3,param_4,CONCAT11(extraout_AH_00,*(undefined1 *)(param_3 + 0x507)));
  FUN_1000_9960(iVar3,param_4);
  iVar1 = param_1 + 0x17e;
  FUN_1000_8d4c(iVar4,param_4,iVar1,param_2);
  FUN_1000_8efc(iVar4,param_4,iVar1,param_2);
  FUN_1000_8f18(iVar4,param_4,iVar1,param_2);
  FUN_1000_8f34(iVar4,param_4,iVar1,param_2);
  FUN_1000_8a2a(param_3 + 0x5aa,param_4,param_1 + 0x326,param_2);
  FUN_1000_8a42(param_3 + 0x5ab,param_4,param_1 + 0x327,param_2);
  FUN_1000_8a5a(param_3 + 0x5ac,param_4,param_1 + 0x328,param_2);
  FUN_1000_8a72(param_3 + 0x5ac,param_4,param_1 + 0x328,param_2);
  param_1 = param_1 + 0x32d;
  FUN_1000_9040(iVar2,param_4,param_1,param_2);
  FUN_1000_9092(iVar2,param_4,param_1,param_2);
  FUN_1000_90d4(iVar2,param_4,param_1,param_2);
  FUN_1000_911c(iVar2,param_4,param_1,param_2);
  FUN_1000_9dd6(iVar2,param_4);
  FUN_1000_9e88(iVar2,param_4);
  return;
}


// ---- FUN_1000_5c58 @ 1000:5c58

void __cdecl16far FUN_1000_5c58(int param_1,undefined2 param_2,int param_3,undefined2 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 extraout_AH;
  undefined1 extraout_AH_00;
  
  iVar1 = param_3 + 5;
  FUN_1000_9f50(iVar1,param_4,0x1008);
  iVar2 = param_3 + 0x11;
  FUN_1000_9fa2(iVar2,param_4);
  FUN_1000_9ea6(param_3 + 0x5b1,param_4);
  iVar3 = param_3 + 0x27;
  FUN_1000_9c78(iVar3,param_4);
  iVar4 = param_3 + 0x3cf;
  FUN_1000_92f8(iVar4,param_4);
  FUN_1000_9f72(iVar2,param_4,CONCAT11(extraout_AH,*(undefined1 *)(param_3 + 0x507)));
  FUN_1000_8230(param_3,param_4,param_1,param_2);
  FUN_1000_817e(iVar1,param_4,param_1 + 5,param_2);
  FUN_1000_9f12(iVar1,param_4);
  FUN_1000_9f26(iVar1,param_4);
  FUN_1000_7a96(iVar2,param_4,param_1 + 8,param_2);
  iVar1 = param_1 + 0x13;
  FUN_1000_7b18(iVar3,param_4,iVar1,param_2);
  FUN_1000_7e36(iVar3,param_4,iVar1,param_2);
  FUN_1000_825c(iVar3,param_4,iVar1,param_2);
  FUN_1000_82b6(iVar3,param_4,iVar1,param_2);
  FUN_1000_82dc(iVar3,param_4,iVar1,param_2);
  FUN_1000_8302(iVar3,param_4,iVar1,param_2);
  FUN_1000_8328(iVar3,param_4,iVar1,param_2);
  FUN_1000_8372(iVar3,param_4,iVar1,param_2);
  FUN_1000_84a4(iVar3,param_4,iVar1,param_2);
  FUN_1000_96ce(iVar3,param_4);
  FUN_1000_978e(iVar3,param_4);
  FUN_1000_97da(iVar3,param_4);
  FUN_1000_9896(iVar3,param_4,CONCAT11(extraout_AH_00,*(undefined1 *)(param_3 + 0x507)));
  FUN_1000_9960(iVar3,param_4);
  iVar1 = param_1 + 0x17e;
  FUN_1000_8d4c(iVar4,param_4,iVar1,param_2);
  FUN_1000_8efc(iVar4,param_4,iVar1,param_2);
  FUN_1000_8f18(iVar4,param_4,iVar1,param_2);
  FUN_1000_8f34(iVar4,param_4,iVar1,param_2);
  FUN_1000_8a2a(param_3 + 0x5aa,param_4,param_1 + 0x326,param_2);
  FUN_1000_8a42(param_3 + 0x5ab,param_4,param_1 + 0x327,param_2);
  FUN_1000_8a5a(param_3 + 0x5ac,param_4,param_1 + 0x328,param_2);
  if ((*(char *)(param_3 + 0x507) == '\0') || (*(char *)(param_3 + 0x507) == '\x02')) {
    FUN_1000_9cac(param_3 + 0x5ac,param_4);
  }
  else {
    FUN_1000_9cd4(param_3 + 0x5ac,param_4);
  }
  param_1 = param_1 + 0x32d;
  param_3 = param_3 + 0x5b1;
  FUN_1000_9040(param_3,param_4,param_1,param_2);
  FUN_1000_9092(param_3,param_4,param_1,param_2);
  FUN_1000_90d4(param_3,param_4,param_1,param_2);
  FUN_1000_9dac(param_3,param_4);
  FUN_1000_9dd6(param_3,param_4);
  FUN_1000_9e88(param_3,param_4);
  return;
}


// ---- FUN_1000_5faa @ 1000:5faa

void __cdecl16far FUN_1000_5faa(int param_1,undefined2 param_2,int param_3,undefined2 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 extraout_AH;
  undefined1 extraout_AH_00;
  
  iVar1 = param_3 + 5;
  FUN_1000_9f50(iVar1,param_4,0x1008);
  iVar2 = param_3 + 0x11;
  FUN_1000_9fa2(iVar2,param_4);
  FUN_1000_9ea6(param_3 + 0x5b1,param_4);
  iVar3 = param_3 + 0x27;
  FUN_1000_9c78(iVar3,param_4);
  iVar4 = param_3 + 0x3cf;
  FUN_1000_92f8(iVar4,param_4);
  FUN_1000_9f72(iVar2,param_4,CONCAT11(extraout_AH,*(undefined1 *)(param_3 + 0x507)));
  FUN_1000_8230(param_3,param_4,param_1,param_2);
  FUN_1000_817e(iVar1,param_4,param_1 + 5,param_2);
  FUN_1000_9f12(iVar1,param_4);
  FUN_1000_9f26(iVar1,param_4);
  FUN_1000_7a96(iVar2,param_4,param_1 + 8,param_2);
  iVar1 = param_1 + 0x13;
  FUN_1000_7b18(iVar3,param_4,iVar1,param_2);
  FUN_1000_7e36(iVar3,param_4,iVar1,param_2);
  FUN_1000_825c(iVar3,param_4,iVar1,param_2);
  FUN_1000_82b6(iVar3,param_4,iVar1,param_2);
  FUN_1000_82dc(iVar3,param_4,iVar1,param_2);
  FUN_1000_8302(iVar3,param_4,iVar1,param_2);
  FUN_1000_8328(iVar3,param_4,iVar1,param_2);
  FUN_1000_8372(iVar3,param_4,iVar1,param_2);
  FUN_1000_9678(iVar3,param_4);
  FUN_1000_96ce(iVar3,param_4);
  FUN_1000_978e(iVar3,param_4);
  FUN_1000_97da(iVar3,param_4);
  FUN_1000_9896(iVar3,param_4,CONCAT11(extraout_AH_00,*(undefined1 *)(param_3 + 0x507)));
  FUN_1000_9960(iVar3,param_4);
  iVar1 = param_1 + 0x16e;
  FUN_1000_8d4c(iVar4,param_4,iVar1,param_2);
  FUN_1000_8efc(iVar4,param_4,iVar1,param_2);
  FUN_1000_8f18(iVar4,param_4,iVar1,param_2);
  FUN_1000_9296(iVar4,param_4);
  FUN_1000_8a2a(param_3 + 0x5aa,param_4,param_1 + 0x2c2,param_2);
  FUN_1000_8a42(param_3 + 0x5ab,param_4,param_1 + 0x2c3,param_2);
  FUN_1000_8a5a(param_3 + 0x5ac,param_4,param_1 + 0x2c4,param_2);
  if ((*(char *)(param_3 + 0x507) == '\0') || (*(char *)(param_3 + 0x507) == '\x02')) {
    FUN_1000_9cac(param_3 + 0x5ac,param_4);
  }
  else {
    FUN_1000_9cd4(param_3 + 0x5ac,param_4);
  }
  param_3 = param_3 + 0x5b1;
  FUN_1000_9040(param_3,param_4,param_1 + 0x2c5,param_2);
  FUN_1000_9092(param_3,param_4,param_1 + 0x2c5,param_2);
  FUN_1000_9d50(param_3,param_4);
  FUN_1000_9dac(param_3,param_4);
  FUN_1000_9dd6(param_3,param_4);
  FUN_1000_9e88(param_3,param_4);
  return;
}


// ---- FUN_1000_62ee @ 1000:62ee

void __cdecl16far FUN_1000_62ee(int param_1,undefined2 param_2,int param_3,undefined2 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 extraout_AH;
  undefined1 extraout_AH_00;
  
  iVar1 = param_3 + 5;
  FUN_1000_9f50(iVar1,param_4,0x1008);
  iVar2 = param_3 + 0x11;
  FUN_1000_9fa2(iVar2,param_4);
  FUN_1000_9ea6(param_3 + 0x5b1,param_4);
  iVar3 = param_3 + 0x27;
  FUN_1000_9c78(iVar3,param_4);
  iVar4 = param_3 + 0x3cf;
  FUN_1000_92f8(iVar4,param_4);
  FUN_1000_9f72(iVar2,param_4,CONCAT11(extraout_AH,*(undefined1 *)(param_3 + 0x507)));
  FUN_1000_8230(param_3,param_4,param_1,param_2);
  FUN_1000_817e(iVar1,param_4,param_1 + 5,param_2);
  FUN_1000_9f12(iVar1,param_4);
  FUN_1000_9f26(iVar1,param_4);
  FUN_1000_7a96(iVar2,param_4,param_1 + 8,param_2);
  iVar1 = param_1 + 0x13;
  FUN_1000_7b18(iVar3,param_4,iVar1,param_2);
  FUN_1000_7e36(iVar3,param_4,iVar1,param_2);
  FUN_1000_825c(iVar3,param_4,iVar1,param_2);
  FUN_1000_82b6(iVar3,param_4,iVar1,param_2);
  FUN_1000_82dc(iVar3,param_4,iVar1,param_2);
  FUN_1000_8302(iVar3,param_4,iVar1,param_2);
  FUN_1000_8328(iVar3,param_4,iVar1,param_2);
  FUN_1000_95a6(iVar3,param_4);
  FUN_1000_9678(iVar3,param_4);
  FUN_1000_96ce(iVar3,param_4);
  FUN_1000_978e(iVar3,param_4);
  FUN_1000_97da(iVar3,param_4);
  FUN_1000_9896(iVar3,param_4,CONCAT11(extraout_AH_00,*(undefined1 *)(param_3 + 0x507)));
  FUN_1000_9960(iVar3,param_4);
  iVar1 = param_1 + 0x141;
  FUN_1000_8d4c(iVar4,param_4,iVar1,param_2);
  FUN_1000_8efc(iVar4,param_4,iVar1,param_2);
  FUN_1000_8f18(iVar4,param_4,iVar1,param_2);
  FUN_1000_9296(iVar4,param_4);
  FUN_1000_8a2a(param_3 + 0x5aa,param_4,param_1 + 0x295,param_2);
  FUN_1000_8a42(param_3 + 0x5ab,param_4,param_1 + 0x296,param_2);
  if ((*(char *)(param_3 + 0x507) == '\0') || (*(char *)(param_3 + 0x507) == '\x02')) {
    FUN_1000_9d0e(param_3 + 0x5ac,param_4);
    FUN_1000_9cac(param_3 + 0x5ac,param_4);
  }
  else {
    FUN_1000_9cfc(param_3 + 0x5ac,param_4);
    FUN_1000_9cd4(param_3 + 0x5ac,param_4);
  }
  param_3 = param_3 + 0x5b1;
  FUN_1000_9040(param_3,param_4,param_1 + 0x298,param_2);
  FUN_1000_9092(param_3,param_4,param_1 + 0x298,param_2);
  FUN_1000_9d50(param_3,param_4);
  FUN_1000_9dac(param_3,param_4);
  FUN_1000_9dd6(param_3,param_4);
  FUN_1000_9e88(param_3,param_4);
  return;
}


// ---- FUN_1000_6638 @ 1000:6638

void __cdecl16far FUN_1000_6638(int param_1,undefined2 param_2,int param_3,undefined2 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 extraout_AH;
  undefined1 extraout_AH_00;
  
  iVar1 = param_3 + 5;
  FUN_1000_9f50(iVar1,param_4,0x1008);
  iVar2 = param_3 + 0x11;
  FUN_1000_9fa2(iVar2,param_4);
  FUN_1000_9ea6(param_3 + 0x5b1,param_4);
  iVar3 = param_3 + 0x27;
  FUN_1000_9c78(iVar3,param_4);
  iVar4 = param_3 + 0x3cf;
  FUN_1000_92f8(iVar4,param_4);
  FUN_1000_9f72(iVar2,param_4,CONCAT11(extraout_AH,*(undefined1 *)(param_3 + 0x507)));
  FUN_1000_8230(param_3,param_4,param_1,param_2);
  FUN_1000_817e(iVar1,param_4,param_1 + 5,param_2);
  FUN_1000_9f12(iVar1,param_4);
  FUN_1000_9f26(iVar1,param_4);
  FUN_1000_7a96(iVar2,param_4,param_1 + 8,param_2);
  iVar1 = param_1 + 0x13;
  FUN_1000_7b18(iVar3,param_4,iVar1,param_2);
  FUN_1000_7e36(iVar3,param_4,iVar1,param_2);
  FUN_1000_825c(iVar3,param_4,iVar1,param_2);
  FUN_1000_82b6(iVar3,param_4,iVar1,param_2);
  FUN_1000_82dc(iVar3,param_4,iVar1,param_2);
  FUN_1000_8302(iVar3,param_4,iVar1,param_2);
  FUN_1000_9572(iVar3,param_4);
  FUN_1000_95a6(iVar3,param_4);
  FUN_1000_9678(iVar3,param_4);
  FUN_1000_96ce(iVar3,param_4);
  FUN_1000_978e(iVar3,param_4);
  FUN_1000_97da(iVar3,param_4);
  FUN_1000_9896(iVar3,param_4,CONCAT11(extraout_AH_00,*(undefined1 *)(param_3 + 0x507)));
  FUN_1000_9960(iVar3,param_4);
  iVar1 = param_1 + 0x139;
  FUN_1000_8d4c(iVar4,param_4,iVar1,param_2);
  FUN_1000_8efc(iVar4,param_4,iVar1,param_2);
  FUN_1000_8f18(iVar4,param_4,iVar1,param_2);
  FUN_1000_9296(iVar4,param_4);
  FUN_1000_8a2a(param_3 + 0x5aa,param_4,param_1 + 0x28d,param_2);
  FUN_1000_8a42(param_3 + 0x5ab,param_4,param_1 + 0x28e,param_2);
  if ((*(char *)(param_3 + 0x507) == '\0') || (*(char *)(param_3 + 0x507) == '\x02')) {
    FUN_1000_9d0e(param_3 + 0x5ac,param_4);
    FUN_1000_9cac(param_3 + 0x5ac,param_4);
  }
  else {
    FUN_1000_9cfc(param_3 + 0x5ac,param_4);
    FUN_1000_9cd4(param_3 + 0x5ac,param_4);
  }
  param_3 = param_3 + 0x5b1;
  FUN_1000_9040(param_3,param_4,param_1 + 0x290,param_2);
  FUN_1000_9092(param_3,param_4,param_1 + 0x290,param_2);
  FUN_1000_9d50(param_3,param_4);
  FUN_1000_9dac(param_3,param_4);
  FUN_1000_9dd6(param_3,param_4);
  FUN_1000_9e88(param_3,param_4);
  return;
}


// ---- FUN_1000_697c @ 1000:697c

void __cdecl16far FUN_1000_697c(int param_1,undefined2 param_2,int param_3,undefined2 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 extraout_AH;
  undefined1 extraout_AH_00;
  
  iVar1 = param_3 + 5;
  FUN_1000_9f50(iVar1,param_4,0x1008);
  iVar2 = param_3 + 0x11;
  FUN_1000_9fa2(iVar2,param_4);
  FUN_1000_9ea6(param_3 + 0x5b1,param_4);
  iVar3 = param_3 + 0x27;
  FUN_1000_9c78(iVar3,param_4);
  iVar4 = param_3 + 0x3cf;
  FUN_1000_92f8(iVar4,param_4);
  FUN_1000_9f72(iVar2,param_4,CONCAT11(extraout_AH,*(undefined1 *)(param_3 + 0x507)));
  FUN_1000_8230(param_3,param_4,param_1,param_2);
  FUN_1000_817e(iVar1,param_4,param_1 + 5,param_2);
  FUN_1000_9f12(iVar1,param_4);
  FUN_1000_9f26(iVar1,param_4);
  FUN_1000_7a96(iVar2,param_4,param_1 + 8,param_2);
  iVar1 = param_1 + 0x13;
  FUN_1000_7b18(iVar3,param_4,iVar1,param_2);
  FUN_1000_7e36(iVar3,param_4,iVar1,param_2);
  FUN_1000_825c(iVar3,param_4,iVar1,param_2);
  FUN_1000_82b6(iVar3,param_4,iVar1,param_2);
  FUN_1000_82dc(iVar3,param_4,iVar1,param_2);
  FUN_1000_9552(iVar3,param_4);
  FUN_1000_9572(iVar3,param_4);
  FUN_1000_95a6(iVar3,param_4);
  FUN_1000_9678(iVar3,param_4);
  FUN_1000_96ce(iVar3,param_4);
  FUN_1000_978e(iVar3,param_4);
  FUN_1000_97da(iVar3,param_4);
  FUN_1000_9896(iVar3,param_4,CONCAT11(extraout_AH_00,*(undefined1 *)(param_3 + 0x507)));
  FUN_1000_9960(iVar3,param_4);
  iVar1 = param_1 + 0x135;
  FUN_1000_8d4c(iVar4,param_4,iVar1,param_2);
  FUN_1000_8efc(iVar4,param_4,iVar1,param_2);
  FUN_1000_8f18(iVar4,param_4,iVar1,param_2);
  FUN_1000_9296(iVar4,param_4);
  FUN_1000_8a2a(param_3 + 0x5aa,param_4,param_1 + 0x289,param_2);
  FUN_1000_8a42(param_3 + 0x5ab,param_4,param_1 + 0x28a,param_2);
  if ((*(char *)(param_3 + 0x507) == '\0') || (*(char *)(param_3 + 0x507) == '\x02')) {
    FUN_1000_9d0e(param_3 + 0x5ac,param_4);
    FUN_1000_9cac(param_3 + 0x5ac,param_4);
  }
  else {
    FUN_1000_9cfc(param_3 + 0x5ac,param_4);
    FUN_1000_9cd4(param_3 + 0x5ac,param_4);
  }
  param_3 = param_3 + 0x5b1;
  FUN_1000_9040(param_3,param_4,param_1 + 0x28c,param_2);
  FUN_1000_9d20(param_3,param_4);
  FUN_1000_9d50(param_3,param_4);
  FUN_1000_9dac(param_3,param_4);
  FUN_1000_9dd6(param_3,param_4);
  FUN_1000_9e88(param_3,param_4);
  return;
}


// ---- FUN_1000_6c9e @ 1000:6c9e

void __cdecl16far FUN_1000_6c9e(int param_1,undefined2 param_2,int param_3,undefined2 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 extraout_AH;
  undefined1 extraout_AH_00;
  
  iVar1 = param_3 + 5;
  FUN_1000_9f50(iVar1,param_4,0x1008);
  iVar2 = param_3 + 0x11;
  FUN_1000_9fa2(iVar2,param_4);
  FUN_1000_9ea6(param_3 + 0x5b1,param_4);
  iVar3 = param_3 + 0x27;
  FUN_1000_9c78(iVar3,param_4);
  iVar4 = param_3 + 0x3cf;
  FUN_1000_92f8(iVar4,param_4);
  FUN_1000_9f72(iVar2,param_4,CONCAT11(extraout_AH,*(undefined1 *)(param_3 + 0x507)));
  FUN_1000_8230(param_3,param_4,param_1,param_2);
  FUN_1000_817e(iVar1,param_4,param_1 + 5,param_2);
  FUN_1000_9f12(iVar1,param_4);
  FUN_1000_9f26(iVar1,param_4);
  FUN_1000_7a96(iVar2,param_4,param_1 + 8,param_2);
  iVar1 = param_1 + 0x13;
  FUN_1000_7b18(iVar3,param_4,iVar1,param_2);
  FUN_1000_7e36(iVar3,param_4,iVar1,param_2);
  FUN_1000_825c(iVar3,param_4,iVar1,param_2);
  FUN_1000_82b6(iVar3,param_4,iVar1,param_2);
  FUN_1000_9532(iVar3,param_4);
  FUN_1000_9552(iVar3,param_4);
  FUN_1000_9572(iVar3,param_4);
  FUN_1000_95a6(iVar3,param_4);
  FUN_1000_9678(iVar3,param_4);
  FUN_1000_96ce(iVar3,param_4);
  FUN_1000_978e(iVar3,param_4);
  FUN_1000_97da(iVar3,param_4);
  FUN_1000_9896(iVar3,param_4,CONCAT11(extraout_AH_00,*(undefined1 *)(param_3 + 0x507)));
  FUN_1000_9960(iVar3,param_4);
  FUN_1000_8d4c(iVar4,param_4,param_1 + 0x131,param_2);
  FUN_1000_8efc(iVar4,param_4,param_1 + 0x131,param_2);
  FUN_1000_9280(iVar4,param_4);
  FUN_1000_9296(iVar4,param_4);
  FUN_1000_8a2a(param_3 + 0x5aa,param_4,param_1 + 0x283,param_2);
  FUN_1000_8a42(param_3 + 0x5ab,param_4,param_1 + 0x284,param_2);
  if ((*(char *)(param_3 + 0x507) == '\0') || (*(char *)(param_3 + 0x507) == '\x02')) {
    FUN_1000_9d0e(param_3 + 0x5ac,param_4);
    FUN_1000_9cac(param_3 + 0x5ac,param_4);
  }
  else {
    FUN_1000_9cfc(param_3 + 0x5ac,param_4);
    FUN_1000_9cd4(param_3 + 0x5ac,param_4);
  }
  param_3 = param_3 + 0x5b1;
  FUN_1000_9040(param_3,param_4,param_1 + 0x286,param_2);
  FUN_1000_9d20(param_3,param_4);
  FUN_1000_9d50(param_3,param_4);
  return;
}


// ---- FUN_1000_6f96 @ 1000:6f96

void __cdecl16far FUN_1000_6f96(int param_1,undefined2 param_2,int param_3,undefined2 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 extraout_AH;
  undefined1 extraout_AH_00;
  
  iVar1 = param_3 + 5;
  FUN_1000_9f50(iVar1,param_4,0x1008);
  iVar2 = param_3 + 0x11;
  FUN_1000_9fa2(iVar2,param_4);
  FUN_1000_9ea6(param_3 + 0x5b1,param_4);
  iVar3 = param_3 + 0x27;
  FUN_1000_9c78(iVar3,param_4);
  iVar4 = param_3 + 0x3cf;
  FUN_1000_92f8(iVar4,param_4);
  FUN_1000_9f72(iVar2,param_4,CONCAT11(extraout_AH,*(undefined1 *)(param_3 + 0x507)));
  FUN_1000_8230(param_3,param_4,param_1,param_2);
  FUN_1000_817e(iVar1,param_4,param_1 + 5,param_2);
  FUN_1000_9f12(iVar1,param_4);
  FUN_1000_9f26(iVar1,param_4);
  FUN_1000_7a96(iVar2,param_4,param_1 + 8,param_2);
  iVar1 = param_1 + 0x13;
  FUN_1000_7b18(iVar3,param_4,iVar1,param_2);
  FUN_1000_7e36(iVar3,param_4,iVar1,param_2);
  FUN_1000_825c(iVar3,param_4,iVar1,param_2);
  FUN_1000_9512(iVar3,param_4);
  FUN_1000_9532(iVar3,param_4);
  FUN_1000_9552(iVar3,param_4);
  FUN_1000_9572(iVar3,param_4);
  FUN_1000_95a6(iVar3,param_4);
  FUN_1000_9678(iVar3,param_4);
  FUN_1000_96ce(iVar3,param_4);
  FUN_1000_978e(iVar3,param_4);
  FUN_1000_97da(iVar3,param_4);
  FUN_1000_9896(iVar3,param_4,CONCAT11(extraout_AH_00,*(undefined1 *)(param_3 + 0x507)));
  FUN_1000_9960(iVar3,param_4);
  FUN_1000_8d4c(iVar4,param_4,param_1 + 0x12d,param_2);
  FUN_1000_8efc(iVar4,param_4,param_1 + 0x12d,param_2);
  FUN_1000_9280(iVar4,param_4);
  FUN_1000_9296(iVar4,param_4);
  FUN_1000_8a2a(param_3 + 0x5aa,param_4,param_1 + 0x27f,param_2);
  FUN_1000_8a42(param_3 + 0x5ab,param_4,param_1 + 0x280,param_2);
  if ((*(char *)(param_3 + 0x507) == '\0') || (*(char *)(param_3 + 0x507) == '\x02')) {
    FUN_1000_9d0e(param_3 + 0x5ac,param_4);
    FUN_1000_9cac(param_3 + 0x5ac,param_4);
  }
  else {
    FUN_1000_9cfc(param_3 + 0x5ac,param_4);
    FUN_1000_9cd4(param_3 + 0x5ac,param_4);
  }
  param_3 = param_3 + 0x5b1;
  FUN_1000_9040(param_3,param_4,param_1 + 0x282,param_2);
  FUN_1000_9d20(param_3,param_4);
  FUN_1000_9d50(param_3,param_4);
  FUN_1000_9dac(param_3,param_4);
  FUN_1000_9dd6(param_3,param_4);
  FUN_1000_9e88(param_3,param_4);
  return;
}


// ---- FUN_1000_72a6 @ 1000:72a6

void __cdecl16far FUN_1000_72a6(int param_1,undefined2 param_2,int param_3,undefined2 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 extraout_AH;
  undefined1 extraout_AH_00;
  
  iVar1 = param_3 + 5;
  FUN_1000_9f50(iVar1,param_4,0x1008);
  iVar2 = param_3 + 0x11;
  FUN_1000_9fa2(iVar2,param_4);
  FUN_1000_9ea6(param_3 + 0x5b1,param_4);
  iVar3 = param_3 + 0x27;
  FUN_1000_9c78(iVar3,param_4);
  iVar4 = param_3 + 0x3cf;
  FUN_1000_92f8(iVar4,param_4);
  FUN_1000_9f72(iVar2,param_4,CONCAT11(extraout_AH,*(undefined1 *)(param_3 + 0x507)));
  FUN_1000_8230(param_3,param_4,param_1,param_2);
  FUN_1000_817e(iVar1,param_4,param_1 + 5,param_2);
  FUN_1000_9f12(iVar1,param_4);
  FUN_1000_9f26(iVar1,param_4);
  FUN_1000_7a96(iVar2,param_4,param_1 + 8,param_2);
  FUN_1000_7b18(iVar3,param_4,param_1 + 0x13,param_2);
  FUN_1000_7e36(iVar3,param_4,param_1 + 0x13,param_2);
  FUN_1000_94d8(iVar3,param_4);
  FUN_1000_9512(iVar3,param_4);
  FUN_1000_9532(iVar3,param_4);
  FUN_1000_9552(iVar3,param_4);
  FUN_1000_9572(iVar3,param_4);
  FUN_1000_95a6(iVar3,param_4);
  FUN_1000_9678(iVar3,param_4);
  FUN_1000_96ce(iVar3,param_4);
  FUN_1000_978e(iVar3,param_4);
  FUN_1000_97da(iVar3,param_4);
  FUN_1000_9896(iVar3,param_4,CONCAT11(extraout_AH_00,*(undefined1 *)(param_3 + 0x507)));
  FUN_1000_9960(iVar3,param_4);
  FUN_1000_8d4c(iVar4,param_4,param_1 + 0x124,param_2);
  FUN_1000_926c(iVar4,param_4);
  FUN_1000_9280(iVar4,param_4);
  FUN_1000_9296(iVar4,param_4);
  FUN_1000_8a2a(param_3 + 0x5aa,param_4,param_1 + 0x275,param_2);
  FUN_1000_8a42(param_3 + 0x5ab,param_4,param_1 + 0x276,param_2);
  if ((*(char *)(param_3 + 0x507) == '\0') || (*(char *)(param_3 + 0x507) == '\x02')) {
    FUN_1000_9d0e(param_3 + 0x5ac,param_4);
    FUN_1000_9cac(param_3 + 0x5ac,param_4);
  }
  else {
    FUN_1000_9cfc(param_3 + 0x5ac,param_4);
    FUN_1000_9cd4(param_3 + 0x5ac,param_4);
  }
  param_3 = param_3 + 0x5b1;
  FUN_1000_9040(param_3,param_4,param_1 + 0x278,param_2);
  FUN_1000_9d20(param_3,param_4);
  FUN_1000_9d50(param_3,param_4);
  FUN_1000_9dac(param_3,param_4);
  FUN_1000_9dd6(param_3,param_4);
  FUN_1000_9e88(param_3,param_4);
  return;
}


// ---- FUN_1000_75a4 @ 1000:75a4

void __cdecl16far FUN_1000_75a4(int param_1,undefined2 param_2,int param_3,undefined2 param_4)

{
  undefined2 uVar1;
  undefined1 extraout_AH;
  int iVar2;
  undefined1 extraout_AH_00;
  undefined4 local_6;
  
  local_6 = (undefined1 *)CONCAT22(param_4,(undefined1 *)(param_3 + 5));
  FUN_1000_9f50((undefined1 *)(param_3 + 5),param_4,0x1008);
  FUN_1000_9fa2(param_3 + 0x11,param_4);
  FUN_1000_9ea6(param_3 + 0x5b1,param_4);
  FUN_1000_9c78(param_3 + 0x27,param_4);
  FUN_1000_92f8(param_3 + 0x3cf,param_4);
  FUN_1000_9f72(param_3 + 0x11,param_4,CONCAT11(extraout_AH,*(undefined1 *)(param_3 + 0x507)));
  FUN_1000_8230(param_3,param_4,param_1,param_2);
  *local_6 = *(undefined1 *)(param_1 + 5);
  if (*(char *)(param_1 + 6) == '\0') {
    *(undefined1 *)(param_3 + 6) = 0;
  }
  else {
    if (*(char *)(param_1 + 6) != '\x01') {
      *(undefined1 *)(param_3 + 6) = 1;
      *(undefined1 *)(param_3 + 7) = 1;
      goto LAB_1000_7685;
    }
    *(undefined1 *)(param_3 + 6) = 1;
  }
  *(undefined1 *)(param_3 + 7) = 0;
LAB_1000_7685:
  FUN_1000_9f12(param_3 + 5,param_4);
  FUN_1000_9f26(param_3 + 5,param_4);
  FUN_1000_7a96(param_3 + 0x11,param_4,param_1 + 7,param_2);
  iVar2 = param_3 + 0x27;
  FUN_1000_7b18(iVar2,param_4,param_1 + 0x12,param_2);
  uVar1 = *(undefined2 *)(param_1 + 0xa2);
  *(undefined2 *)(param_3 + 0xb5) = *(undefined2 *)(param_1 + 0xa0);
  *(undefined2 *)(param_3 + 0xb7) = uVar1;
  uVar1 = *(undefined2 *)(param_1 + 0xa6);
  *(undefined2 *)(param_3 + 0xc9) = *(undefined2 *)(param_1 + 0xa4);
  *(undefined2 *)(param_3 + 0xcb) = uVar1;
  uVar1 = *(undefined2 *)(param_1 + 0xa2);
  *(undefined2 *)(param_3 + 0xb9) = *(undefined2 *)(param_1 + 0xa0);
  *(undefined2 *)(param_3 + 0xbb) = uVar1;
  uVar1 = *(undefined2 *)(param_1 + 0xa6);
  *(undefined2 *)(param_3 + 0xcd) = *(undefined2 *)(param_1 + 0xa4);
  *(undefined2 *)(param_3 + 0xcf) = uVar1;
  uVar1 = *(undefined2 *)(param_1 + 0xa2);
  *(undefined2 *)(param_3 + 0xbd) = *(undefined2 *)(param_1 + 0xa0);
  *(undefined2 *)(param_3 + 0xbf) = uVar1;
  uVar1 = *(undefined2 *)(param_1 + 0xa6);
  *(undefined2 *)(param_3 + 0xd1) = *(undefined2 *)(param_1 + 0xa4);
  *(undefined2 *)(param_3 + 0xd3) = uVar1;
  uVar1 = *(undefined2 *)(param_1 + 0xa2);
  *(undefined2 *)(param_3 + 0xc1) = *(undefined2 *)(param_1 + 0xa0);
  *(undefined2 *)(param_3 + 0xc3) = uVar1;
  uVar1 = *(undefined2 *)(param_1 + 0xa6);
  *(undefined2 *)(param_3 + 0xd5) = *(undefined2 *)(param_1 + 0xa4);
  *(undefined2 *)(param_3 + 0xd7) = uVar1;
  uVar1 = *(undefined2 *)(param_1 + 0xa2);
  *(undefined2 *)(param_3 + 0xc5) = *(undefined2 *)(param_1 + 0xa0);
  *(undefined2 *)(param_3 + 199) = uVar1;
  uVar1 = *(undefined2 *)(param_1 + 0xa6);
  *(undefined2 *)(param_3 + 0xd9) = *(undefined2 *)(param_1 + 0xa4);
  *(undefined2 *)(param_3 + 0xdb) = uVar1;
  uVar1 = *(undefined2 *)(param_1 + 0xaa);
  *(undefined2 *)(param_3 + 0xdd) = *(undefined2 *)(param_1 + 0xa8);
  *(undefined2 *)(param_3 + 0xdf) = uVar1;
  uVar1 = *(undefined2 *)(param_1 + 0xae);
  *(undefined2 *)(param_3 + 0xe1) = *(undefined2 *)(param_1 + 0xac);
  *(undefined2 *)(param_3 + 0xe3) = uVar1;
  uVar1 = *(undefined2 *)(param_1 + 0xb2);
  *(undefined2 *)(param_3 + 0xe5) = *(undefined2 *)(param_1 + 0xb0);
  *(undefined2 *)(param_3 + 0xe7) = uVar1;
  uVar1 = *(undefined2 *)(param_1 + 0xb6);
  *(undefined2 *)(param_3 + 0xe9) = *(undefined2 *)(param_1 + 0xb4);
  *(undefined2 *)(param_3 + 0xeb) = uVar1;
  FUN_1000_9394(iVar2,param_4);
  FUN_1000_94d8(iVar2,param_4);
  FUN_1000_9512(iVar2,param_4);
  FUN_1000_9532(iVar2,param_4);
  FUN_1000_9552(iVar2,param_4);
  FUN_1000_9572(iVar2,param_4);
  FUN_1000_95a6(iVar2,param_4);
  FUN_1000_9678(iVar2,param_4);
  FUN_1000_96ce(iVar2,param_4);
  FUN_1000_978e(iVar2,param_4);
  FUN_1000_97da(iVar2,param_4);
  FUN_1000_9896(iVar2,param_4,CONCAT11(extraout_AH_00,*(undefined1 *)(param_3 + 0x507)));
  FUN_1000_9960(iVar2,param_4);
  iVar2 = param_3 + 0x3cf;
  FUN_1000_8d4c(iVar2,param_4,param_1 + 0xc1,param_2);
  FUN_1000_926c(iVar2,param_4);
  FUN_1000_9280(iVar2,param_4);
  FUN_1000_9296(iVar2,param_4);
  FUN_1000_8a2a(param_3 + 0x5aa,param_4,param_1 + 0x212,param_2);
  FUN_1000_8a42(param_3 + 0x5ab,param_4,param_1 + 0x213,param_2);
  if ((*(char *)(param_3 + 0x507) == '\0') || (*(char *)(param_3 + 0x507) == '\x02')) {
    FUN_1000_9d0e(param_3 + 0x5ac,param_4);
    FUN_1000_9cac(param_3 + 0x5ac,param_4);
  }
  else {
    FUN_1000_9cfc(param_3 + 0x5ac,param_4);
    FUN_1000_9cd4(param_3 + 0x5ac,param_4);
  }
  param_3 = param_3 + 0x5b1;
  FUN_1000_9040(param_3,param_4,param_1 + 0x215,param_2);
  FUN_1000_9d20(param_3,param_4);
  FUN_1000_9d50(param_3,param_4);
  FUN_1000_9dac(param_3,param_4);
  FUN_1000_9dd6(param_3,param_4);
  FUN_1000_9e88(param_3,param_4);
  return;
}


// ---- FUN_1000_7a42 @ 1000:7a42

undefined1 __cdecl16far FUN_1000_7a42(void)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  
  iVar1 = _LREAD(unaff_CS,1,0x2702,unaff_SS);
  *(int *)0x2472 = iVar1;
  if (iVar1 != 1) {
    return 0xff;
  }
  _LLSEEK(0x1020,0,0,0);
  return *(undefined1 *)0x2702;
}


// ---- FUN_1000_7a7c @ 1000:7a7c

void __cdecl16far FUN_1000_7a7c(undefined4 param_1,undefined4 param_2)

{
  *(undefined1 *)((int)param_1 + 0xb) = *(undefined1 *)((int)param_2 + 0xb);
  return;
}


// ---- FUN_1000_7a96 @ 1000:7a96

void __cdecl16far
FUN_1000_7a96(undefined2 *param_1,undefined2 param_2,undefined2 *param_3,undefined2 param_4)

{
  undefined2 uVar1;
  
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_3 + 2);
  *(undefined1 *)((int)param_1 + 5) = *(undefined1 *)((int)param_3 + 5);
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_3 + 3);
  *(undefined1 *)((int)param_1 + 7) = *(undefined1 *)((int)param_3 + 7);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_3 + 4);
  *(undefined1 *)((int)param_1 + 9) = *(undefined1 *)((int)param_3 + 9);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_3 + 5);
  uVar1 = param_3[1];
  *param_1 = *param_3;
  param_1[1] = uVar1;
  return;
}


// ---- FUN_1000_7b18 @ 1000:7b18

void __cdecl16far
FUN_1000_7b18(undefined1 *param_1,undefined2 param_2,undefined1 *param_3,undefined2 param_4)

{
  undefined2 uVar1;
  
  *param_1 = *param_3;
  param_1[1] = param_3[1];
  uVar1 = *(undefined2 *)(param_3 + 4);
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_3 + 2);
  *(undefined2 *)(param_1 + 4) = uVar1;
  uVar1 = *(undefined2 *)(param_3 + 8);
  *(undefined2 *)(param_1 + 6) = *(undefined2 *)(param_3 + 6);
  *(undefined2 *)(param_1 + 8) = uVar1;
  uVar1 = *(undefined2 *)(param_3 + 0xc);
  *(undefined2 *)(param_1 + 10) = *(undefined2 *)(param_3 + 10);
  *(undefined2 *)(param_1 + 0xc) = uVar1;
  uVar1 = *(undefined2 *)(param_3 + 0x10);
  *(undefined2 *)(param_1 + 0xe) = *(undefined2 *)(param_3 + 0xe);
  *(undefined2 *)(param_1 + 0x10) = uVar1;
  uVar1 = *(undefined2 *)(param_3 + 0x14);
  *(undefined2 *)(param_1 + 0x12) = *(undefined2 *)(param_3 + 0x12);
  *(undefined2 *)(param_1 + 0x14) = uVar1;
  uVar1 = *(undefined2 *)(param_3 + 0x18);
  *(undefined2 *)(param_1 + 0x16) = *(undefined2 *)(param_3 + 0x16);
  *(undefined2 *)(param_1 + 0x18) = uVar1;
  uVar1 = *(undefined2 *)(param_3 + 0x1c);
  *(undefined2 *)(param_1 + 0x1a) = *(undefined2 *)(param_3 + 0x1a);
  *(undefined2 *)(param_1 + 0x1c) = uVar1;
  uVar1 = *(undefined2 *)(param_3 + 0x20);
  *(undefined2 *)(param_1 + 0x1e) = *(undefined2 *)(param_3 + 0x1e);
  *(undefined2 *)(param_1 + 0x20) = uVar1;
  uVar1 = *(undefined2 *)(param_3 + 0x24);
  *(undefined2 *)(param_1 + 0x22) = *(undefined2 *)(param_3 + 0x22);
  *(undefined2 *)(param_1 + 0x24) = uVar1;
  uVar1 = *(undefined2 *)(param_3 + 0x28);
  *(undefined2 *)(param_1 + 0x26) = *(undefined2 *)(param_3 + 0x26);
  *(undefined2 *)(param_1 + 0x28) = uVar1;
  uVar1 = *(undefined2 *)(param_3 + 0x2c);
  *(undefined2 *)(param_1 + 0x2a) = *(undefined2 *)(param_3 + 0x2a);
  *(undefined2 *)(param_1 + 0x2c) = uVar1;
  uVar1 = *(undefined2 *)(param_3 + 0x30);
  *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(param_3 + 0x2e);
  *(undefined2 *)(param_1 + 0x30) = uVar1;
  uVar1 = *(undefined2 *)(param_3 + 0x34);
  *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(param_3 + 0x32);
  *(undefined2 *)(param_1 + 0x34) = uVar1;
  uVar1 = *(undefined2 *)(param_3 + 0x38);
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_3 + 0x36);
  *(undefined2 *)(param_1 + 0x38) = uVar1;
  uVar1 = *(undefined2 *)(param_3 + 0x3c);
  *(undefined2 *)(param_1 + 0x3a) = *(undefined2 *)(param_3 + 0x3a);
  *(undefined2 *)(param_1 + 0x3c) = uVar1;
  uVar1 = *(undefined2 *)(param_3 + 0x40);
  *(undefined2 *)(param_1 + 0x3e) = *(undefined2 *)(param_3 + 0x3e);
  *(undefined2 *)(param_1 + 0x40) = uVar1;
  uVar1 = *(undefined2 *)(param_3 + 0x44);
  *(undefined2 *)(param_1 + 0x42) = *(undefined2 *)(param_3 + 0x42);
  *(undefined2 *)(param_1 + 0x44) = uVar1;
  uVar1 = *(undefined2 *)(param_3 + 0x48);
  *(undefined2 *)(param_1 + 0x46) = *(undefined2 *)(param_3 + 0x46);
  *(undefined2 *)(param_1 + 0x48) = uVar1;
  uVar1 = *(undefined2 *)(param_3 + 0x4c);
  *(undefined2 *)(param_1 + 0x4a) = *(undefined2 *)(param_3 + 0x4a);
  *(undefined2 *)(param_1 + 0x4c) = uVar1;
  uVar1 = *(undefined2 *)(param_3 + 0x50);
  *(undefined2 *)(param_1 + 0x4e) = *(undefined2 *)(param_3 + 0x4e);
  *(undefined2 *)(param_1 + 0x50) = uVar1;
  uVar1 = *(undefined2 *)(param_3 + 0x54);
  *(undefined2 *)(param_1 + 0x52) = *(undefined2 *)(param_3 + 0x52);
  *(undefined2 *)(param_1 + 0x54) = uVar1;
  *(undefined2 *)(param_1 + 0x56) = *(undefined2 *)(param_3 + 0x56);
  *(undefined2 *)(param_1 + 0x58) = *(undefined2 *)(param_3 + 0x58);
  *(undefined2 *)(param_1 + 0x5a) = *(undefined2 *)(param_3 + 0x5a);
  *(undefined2 *)(param_1 + 0x5c) = *(undefined2 *)(param_3 + 0x5c);
  *(undefined2 *)(param_1 + 0x5e) = *(undefined2 *)(param_3 + 0x5e);
  *(undefined2 *)(param_1 + 0x60) = *(undefined2 *)(param_3 + 0x60);
  *(undefined2 *)(param_1 + 0x62) = *(undefined2 *)(param_3 + 0x62);
  *(undefined2 *)(param_1 + 100) = *(undefined2 *)(param_3 + 100);
  *(undefined2 *)(param_1 + 0x66) = *(undefined2 *)(param_3 + 0x66);
  *(undefined2 *)(param_1 + 0x68) = *(undefined2 *)(param_3 + 0x68);
  *(undefined2 *)(param_1 + 0x6a) = *(undefined2 *)(param_3 + 0x6a);
  *(undefined2 *)(param_1 + 0x6c) = *(undefined2 *)(param_3 + 0x6c);
  *(undefined2 *)(param_1 + 0x6e) = *(undefined2 *)(param_3 + 0x6e);
  *(undefined2 *)(param_1 + 0x70) = *(undefined2 *)(param_3 + 0x70);
  *(undefined2 *)(param_1 + 0x72) = *(undefined2 *)(param_3 + 0x72);
  *(undefined2 *)(param_1 + 0x74) = *(undefined2 *)(param_3 + 0x74);
  uVar1 = *(undefined2 *)(param_3 + 0x78);
  *(undefined2 *)(param_1 + 0x76) = *(undefined2 *)(param_3 + 0x76);
  *(undefined2 *)(param_1 + 0x78) = uVar1;
  uVar1 = *(undefined2 *)(param_3 + 0x7c);
  *(undefined2 *)(param_1 + 0x7a) = *(undefined2 *)(param_3 + 0x7a);
  *(undefined2 *)(param_1 + 0x7c) = uVar1;
  uVar1 = *(undefined2 *)(param_3 + 0x80);
  *(undefined2 *)(param_1 + 0x7e) = *(undefined2 *)(param_3 + 0x7e);
  *(undefined2 *)(param_1 + 0x80) = uVar1;
  uVar1 = *(undefined2 *)(param_3 + 0x84);
  *(undefined2 *)(param_1 + 0x82) = *(undefined2 *)(param_3 + 0x82);
  *(undefined2 *)(param_1 + 0x84) = uVar1;
  uVar1 = *(undefined2 *)(param_3 + 0x88);
  *(undefined2 *)(param_1 + 0x86) = *(undefined2 *)(param_3 + 0x86);
  *(undefined2 *)(param_1 + 0x88) = uVar1;
  uVar1 = *(undefined2 *)(param_3 + 0x8c);
  *(undefined2 *)(param_1 + 0x8a) = *(undefined2 *)(param_3 + 0x8a);
  *(undefined2 *)(param_1 + 0x8c) = uVar1;
  return;
}


// ---- FUN_1000_7e36 @ 1000:7e36

void __cdecl16far FUN_1000_7e36(int param_1,undefined2 param_2,int param_3,undefined2 param_4)

{
  undefined2 uVar1;
  
  uVar1 = *(undefined2 *)(param_3 + 0x90);
  *(undefined2 *)(param_1 + 0x8e) = *(undefined2 *)(param_3 + 0x8e);
  *(undefined2 *)(param_1 + 0x90) = uVar1;
  uVar1 = *(undefined2 *)(param_3 + 0xa4);
  *(undefined2 *)(param_1 + 0xa2) = *(undefined2 *)(param_3 + 0xa2);
  *(undefined2 *)(param_1 + 0xa4) = uVar1;
  uVar1 = *(undefined2 *)(param_3 + 0x94);
  *(undefined2 *)(param_1 + 0x92) = *(undefined2 *)(param_3 + 0x92);
  *(undefined2 *)(param_1 + 0x94) = uVar1;
  uVar1 = *(undefined2 *)(param_3 + 0xa8);
  *(undefined2 *)(param_1 + 0xa6) = *(undefined2 *)(param_3 + 0xa6);
  *(undefined2 *)(param_1 + 0xa8) = uVar1;
  uVar1 = *(undefined2 *)(param_3 + 0x98);
  *(undefined2 *)(param_1 + 0x96) = *(undefined2 *)(param_3 + 0x96);
  *(undefined2 *)(param_1 + 0x98) = uVar1;
  uVar1 = *(undefined2 *)(param_3 + 0xac);
  *(undefined2 *)(param_1 + 0xaa) = *(undefined2 *)(param_3 + 0xaa);
  *(undefined2 *)(param_1 + 0xac) = uVar1;
  uVar1 = *(undefined2 *)(param_3 + 0x9c);
  *(undefined2 *)(param_1 + 0x9a) = *(undefined2 *)(param_3 + 0x9a);
  *(undefined2 *)(param_1 + 0x9c) = uVar1;
  uVar1 = *(undefined2 *)(param_3 + 0xb0);
  *(undefined2 *)(param_1 + 0xae) = *(undefined2 *)(param_3 + 0xae);
  *(undefined2 *)(param_1 + 0xb0) = uVar1;
  uVar1 = *(undefined2 *)(param_3 + 0xa0);
  *(undefined2 *)(param_1 + 0x9e) = *(undefined2 *)(param_3 + 0x9e);
  *(undefined2 *)(param_1 + 0xa0) = uVar1;
  uVar1 = *(undefined2 *)(param_3 + 0xb4);
  *(undefined2 *)(param_1 + 0xb2) = *(undefined2 *)(param_3 + 0xb2);
  *(undefined2 *)(param_1 + 0xb4) = uVar1;
  uVar1 = *(undefined2 *)(param_3 + 0xb8);
  *(undefined2 *)(param_1 + 0xb6) = *(undefined2 *)(param_3 + 0xb6);
  *(undefined2 *)(param_1 + 0xb8) = uVar1;
  uVar1 = *(undefined2 *)(param_3 + 0xbc);
  *(undefined2 *)(param_1 + 0xba) = *(undefined2 *)(param_3 + 0xba);
  *(undefined2 *)(param_1 + 0xbc) = uVar1;
  uVar1 = *(undefined2 *)(param_3 + 0xc0);
  *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_3 + 0xbe);
  *(undefined2 *)(param_1 + 0xc0) = uVar1;
  uVar1 = *(undefined2 *)(param_3 + 0xc4);
  *(undefined2 *)(param_1 + 0xc2) = *(undefined2 *)(param_3 + 0xc2);
  *(undefined2 *)(param_1 + 0xc4) = uVar1;
  *(undefined1 *)(param_1 + 0xc6) = *(undefined1 *)(param_3 + 0xc6);
  uVar1 = *(undefined2 *)(param_3 + 0xc9);
  *(undefined2 *)(param_1 + 199) = *(undefined2 *)(param_3 + 199);
  *(undefined2 *)(param_1 + 0xc9) = uVar1;
  uVar1 = *(undefined2 *)(param_3 + 0xcd);
  *(undefined2 *)(param_1 + 0xcb) = *(undefined2 *)(param_3 + 0xcb);
  *(undefined2 *)(param_1 + 0xcd) = uVar1;
  uVar1 = *(undefined2 *)(param_3 + 0xd1);
  *(undefined2 *)(param_1 + 0xcf) = *(undefined2 *)(param_3 + 0xcf);
  *(undefined2 *)(param_1 + 0xd1) = uVar1;
  uVar1 = *(undefined2 *)(param_3 + 0xd5);
  *(undefined2 *)(param_1 + 0xd3) = *(undefined2 *)(param_3 + 0xd3);
  *(undefined2 *)(param_1 + 0xd5) = uVar1;
  uVar1 = *(undefined2 *)(param_3 + 0xd9);
  *(undefined2 *)(param_1 + 0xd7) = *(undefined2 *)(param_3 + 0xd7);
  *(undefined2 *)(param_1 + 0xd9) = uVar1;
  *(undefined2 *)(param_1 + 0xdb) = *(undefined2 *)(param_3 + 0xdb);
  uVar1 = *(undefined2 *)(param_3 + 0xdf);
  *(undefined2 *)(param_1 + 0xdd) = *(undefined2 *)(param_3 + 0xdd);
  *(undefined2 *)(param_1 + 0xdf) = uVar1;
  uVar1 = *(undefined2 *)(param_3 + 0xe3);
  *(undefined2 *)(param_1 + 0xe1) = *(undefined2 *)(param_3 + 0xe1);
  *(undefined2 *)(param_1 + 0xe3) = uVar1;
  uVar1 = *(undefined2 *)(param_3 + 0xe7);
  *(undefined2 *)(param_1 + 0xe5) = *(undefined2 *)(param_3 + 0xe5);
  *(undefined2 *)(param_1 + 0xe7) = uVar1;
  *(undefined2 *)(param_1 + 0xe9) = *(undefined2 *)(param_3 + 0xe9);
  uVar1 = *(undefined2 *)(param_3 + 0xed);
  *(undefined2 *)(param_1 + 0xeb) = *(undefined2 *)(param_3 + 0xeb);
  *(undefined2 *)(param_1 + 0xed) = uVar1;
  uVar1 = *(undefined2 *)(param_3 + 0xf1);
  *(undefined2 *)(param_1 + 0xef) = *(undefined2 *)(param_3 + 0xef);
  *(undefined2 *)(param_1 + 0xf1) = uVar1;
  uVar1 = *(undefined2 *)(param_3 + 0xf5);
  *(undefined2 *)(param_1 + 0xf3) = *(undefined2 *)(param_3 + 0xf3);
  *(undefined2 *)(param_1 + 0xf5) = uVar1;
  *(undefined2 *)(param_1 + 0xf7) = *(undefined2 *)(param_3 + 0xf7);
  uVar1 = *(undefined2 *)(param_3 + 0xfb);
  *(undefined2 *)(param_1 + 0xf9) = *(undefined2 *)(param_3 + 0xf9);
  *(undefined2 *)(param_1 + 0xfb) = uVar1;
  uVar1 = *(undefined2 *)(param_3 + 0xff);
  *(undefined2 *)(param_1 + 0xfd) = *(undefined2 *)(param_3 + 0xfd);
  *(undefined2 *)(param_1 + 0xff) = uVar1;
  uVar1 = *(undefined2 *)(param_3 + 0x103);
  *(undefined2 *)(param_1 + 0x101) = *(undefined2 *)(param_3 + 0x101);
  *(undefined2 *)(param_1 + 0x103) = uVar1;
  *(undefined2 *)(param_1 + 0x105) = *(undefined2 *)(param_3 + 0x105);
  *(undefined2 *)(param_1 + 0x107) = *(undefined2 *)(param_3 + 0x107);
  *(undefined2 *)(param_1 + 0x109) = *(undefined2 *)(param_3 + 0x109);
  *(undefined2 *)(param_1 + 0x10b) = *(undefined2 *)(param_3 + 0x10b);
  *(undefined2 *)(param_1 + 0x10d) = *(undefined2 *)(param_3 + 0x10d);
  *(undefined2 *)(param_1 + 0x10f) = *(undefined2 *)(param_3 + 0x10f);
  return;
}


// ---- FUN_1000_817e @ 1000:817e

void __cdecl16far
FUN_1000_817e(undefined1 *param_1,undefined2 param_2,undefined1 *param_3,undefined2 param_4)

{
  *param_1 = *param_3;
  param_1[1] = param_3[1];
  param_1[2] = param_3[2];
  return;
}


// ---- FUN_1000_81be @ 1000:81be

void __cdecl16far FUN_1000_81be(undefined4 param_1,undefined4 param_2)

{
  *(undefined1 *)((int)param_1 + 3) = *(undefined1 *)((int)param_2 + 3);
  return;
}


// ---- FUN_1000_81d8 @ 1000:81d8

void __cdecl16far FUN_1000_81d8(int param_1,undefined2 param_2,int param_3,undefined2 param_4)

{
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_3 + 4);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_3 + 5);
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_3 + 6);
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_3 + 7);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_3 + 8);
  return;
}


// ---- FUN_1000_8230 @ 1000:8230

void __cdecl16far FUN_1000_8230(undefined1 *param_1,undefined2 param_2,undefined4 param_3)

{
  *param_1 = 0x16;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)((int)param_3 + 1);
  *(undefined2 *)(param_1 + 3) = 0;
  return;
}


// ---- FUN_1000_825c @ 1000:825c

void __cdecl16far FUN_1000_825c(int param_1,undefined2 param_2,int param_3,undefined2 param_4)

{
  undefined2 uVar1;
  
  *(undefined1 *)(param_1 + 0x111) = *(undefined1 *)(param_3 + 0x111);
  uVar1 = *(undefined2 *)(param_3 + 0x114);
  *(undefined2 *)(param_1 + 0x112) = *(undefined2 *)(param_3 + 0x112);
  *(undefined2 *)(param_1 + 0x114) = uVar1;
  uVar1 = *(undefined2 *)(param_3 + 0x118);
  *(undefined2 *)(param_1 + 0x116) = *(undefined2 *)(param_3 + 0x116);
  *(undefined2 *)(param_1 + 0x118) = uVar1;
  return;
}


// ---- FUN_1000_82b6 @ 1000:82b6

void __cdecl16far FUN_1000_82b6(undefined4 param_1,undefined4 param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar2 = (undefined2)((ulong)param_2 >> 0x10);
  uVar1 = *(undefined2 *)((int)param_2 + 0x11c);
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  *(undefined2 *)((int)param_1 + 0x11a) = *(undefined2 *)((int)param_2 + 0x11a);
  *(undefined2 *)((int)param_1 + 0x11c) = uVar1;
  return;
}


// ---- FUN_1000_82dc @ 1000:82dc

void __cdecl16far FUN_1000_82dc(undefined4 param_1,undefined4 param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar2 = (undefined2)((ulong)param_2 >> 0x10);
  uVar1 = *(undefined2 *)((int)param_2 + 0x120);
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  *(undefined2 *)((int)param_1 + 0x11e) = *(undefined2 *)((int)param_2 + 0x11e);
  *(undefined2 *)((int)param_1 + 0x120) = uVar1;
  return;
}


// ---- FUN_1000_8302 @ 1000:8302

void __cdecl16far FUN_1000_8302(undefined4 param_1,undefined4 param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar2 = (undefined2)((ulong)param_2 >> 0x10);
  uVar1 = *(undefined2 *)((int)param_2 + 0x124);
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  *(undefined2 *)((int)param_1 + 0x122) = *(undefined2 *)((int)param_2 + 0x122);
  *(undefined2 *)((int)param_1 + 0x124) = uVar1;
  return;
}


// ---- FUN_1000_8328 @ 1000:8328

void __cdecl16far FUN_1000_8328(int param_1,undefined2 param_2,int param_3,undefined2 param_4)

{
  undefined2 uVar1;
  
  uVar1 = *(undefined2 *)(param_3 + 0x128);
  *(undefined2 *)(param_1 + 0x126) = *(undefined2 *)(param_3 + 0x126);
  *(undefined2 *)(param_1 + 0x128) = uVar1;
  uVar1 = *(undefined2 *)(param_3 + 300);
  *(undefined2 *)(param_1 + 0x12a) = *(undefined2 *)(param_3 + 0x12a);
  *(undefined2 *)(param_1 + 300) = uVar1;
  return;
}


// ---- FUN_1000_8372 @ 1000:8372

void __cdecl16far FUN_1000_8372(int param_1,undefined2 param_2,int param_3,undefined2 param_4)

{
  undefined2 uVar1;
  
  *(undefined1 *)(param_1 + 0x12e) = *(undefined1 *)(param_3 + 0x12e);
  uVar1 = *(undefined2 *)(param_3 + 0x131);
  *(undefined2 *)(param_1 + 0x12f) = *(undefined2 *)(param_3 + 0x12f);
  *(undefined2 *)(param_1 + 0x131) = uVar1;
  uVar1 = *(undefined2 *)(param_3 + 0x135);
  *(undefined2 *)(param_1 + 0x133) = *(undefined2 *)(param_3 + 0x133);
  *(undefined2 *)(param_1 + 0x135) = uVar1;
  uVar1 = *(undefined2 *)(param_3 + 0x139);
  *(undefined2 *)(param_1 + 0x137) = *(undefined2 *)(param_3 + 0x137);
  *(undefined2 *)(param_1 + 0x139) = uVar1;
  uVar1 = *(undefined2 *)(param_3 + 0x13d);
  *(undefined2 *)(param_1 + 0x13b) = *(undefined2 *)(param_3 + 0x13b);
  *(undefined2 *)(param_1 + 0x13d) = uVar1;
  uVar1 = *(undefined2 *)(param_3 + 0x141);
  *(undefined2 *)(param_1 + 0x13f) = *(undefined2 *)(param_3 + 0x13f);
  *(undefined2 *)(param_1 + 0x141) = uVar1;
  uVar1 = *(undefined2 *)(param_3 + 0x145);
  *(undefined2 *)(param_1 + 0x143) = *(undefined2 *)(param_3 + 0x143);
  *(undefined2 *)(param_1 + 0x145) = uVar1;
  uVar1 = *(undefined2 *)(param_3 + 0x149);
  *(undefined2 *)(param_1 + 0x147) = *(undefined2 *)(param_3 + 0x147);
  *(undefined2 *)(param_1 + 0x149) = uVar1;
  uVar1 = *(undefined2 *)(param_3 + 0x14d);
  *(undefined2 *)(param_1 + 0x14b) = *(undefined2 *)(param_3 + 0x14b);
  *(undefined2 *)(param_1 + 0x14d) = uVar1;
  uVar1 = *(undefined2 *)(param_3 + 0x151);
  *(undefined2 *)(param_1 + 0x14f) = *(undefined2 *)(param_3 + 0x14f);
  *(undefined2 *)(param_1 + 0x151) = uVar1;
  uVar1 = *(undefined2 *)(param_3 + 0x155);
  *(undefined2 *)(param_1 + 0x153) = *(undefined2 *)(param_3 + 0x153);
  *(undefined2 *)(param_1 + 0x155) = uVar1;
  uVar1 = *(undefined2 *)(param_3 + 0x159);
  *(undefined2 *)(param_1 + 0x157) = *(undefined2 *)(param_3 + 0x157);
  *(undefined2 *)(param_1 + 0x159) = uVar1;
  return;
}


// ---- FUN_1000_84a4 @ 1000:84a4

void __cdecl16far FUN_1000_84a4(int param_1,undefined2 param_2,int param_3,undefined2 param_4)

{
  undefined2 uVar1;
  
  uVar1 = *(undefined2 *)(param_3 + 0x15d);
  *(undefined2 *)(param_1 + 0x15b) = *(undefined2 *)(param_3 + 0x15b);
  *(undefined2 *)(param_1 + 0x15d) = uVar1;
  uVar1 = *(undefined2 *)(param_3 + 0x161);
  *(undefined2 *)(param_1 + 0x15f) = *(undefined2 *)(param_3 + 0x15f);
  *(undefined2 *)(param_1 + 0x161) = uVar1;
  uVar1 = *(undefined2 *)(param_3 + 0x165);
  *(undefined2 *)(param_1 + 0x163) = *(undefined2 *)(param_3 + 0x163);
  *(undefined2 *)(param_1 + 0x165) = uVar1;
  uVar1 = *(undefined2 *)(param_3 + 0x169);
  *(undefined2 *)(param_1 + 0x167) = *(undefined2 *)(param_3 + 0x167);
  *(undefined2 *)(param_1 + 0x169) = uVar1;
  return;
}


// ---- FUN_1000_8520 @ 1000:8520

void __cdecl16far FUN_1000_8520(int param_1,undefined2 param_2,int param_3,undefined2 param_4)

{
  undefined2 uVar1;
  
  uVar1 = *(undefined2 *)(param_3 + 0x16d);
  *(undefined2 *)(param_1 + 0x16b) = *(undefined2 *)(param_3 + 0x16b);
  *(undefined2 *)(param_1 + 0x16d) = uVar1;
  uVar1 = *(undefined2 *)(param_3 + 0x171);
  *(undefined2 *)(param_1 + 0x16f) = *(undefined2 *)(param_3 + 0x16f);
  *(undefined2 *)(param_1 + 0x171) = uVar1;
  uVar1 = *(undefined2 *)(param_3 + 0x175);
  *(undefined2 *)(param_1 + 0x173) = *(undefined2 *)(param_3 + 0x173);
  *(undefined2 *)(param_1 + 0x175) = uVar1;
  *(undefined2 *)(param_1 + 0x177) = *(undefined2 *)(param_3 + 0x177);
  uVar1 = *(undefined2 *)(param_3 + 0x17b);
  *(undefined2 *)(param_1 + 0x179) = *(undefined2 *)(param_3 + 0x179);
  *(undefined2 *)(param_1 + 0x17b) = uVar1;
  uVar1 = *(undefined2 *)(param_3 + 0x17f);
  *(undefined2 *)(param_1 + 0x17d) = *(undefined2 *)(param_3 + 0x17d);
  *(undefined2 *)(param_1 + 0x17f) = uVar1;
  uVar1 = *(undefined2 *)(param_3 + 0x183);
  *(undefined2 *)(param_1 + 0x181) = *(undefined2 *)(param_3 + 0x181);
  *(undefined2 *)(param_1 + 0x183) = uVar1;
  *(undefined2 *)(param_1 + 0x185) = *(undefined2 *)(param_3 + 0x185);
  uVar1 = *(undefined2 *)(param_3 + 0x189);
  *(undefined2 *)(param_1 + 0x187) = *(undefined2 *)(param_3 + 0x187);
  *(undefined2 *)(param_1 + 0x189) = uVar1;
  uVar1 = *(undefined2 *)(param_3 + 0x18d);
  *(undefined2 *)(param_1 + 0x18b) = *(undefined2 *)(param_3 + 0x18b);
  *(undefined2 *)(param_1 + 0x18d) = uVar1;
  uVar1 = *(undefined2 *)(param_3 + 0x191);
  *(undefined2 *)(param_1 + 399) = *(undefined2 *)(param_3 + 399);
  *(undefined2 *)(param_1 + 0x191) = uVar1;
  *(undefined2 *)(param_1 + 0x193) = *(undefined2 *)(param_3 + 0x193);
  return;
}


// ---- FUN_1000_863e @ 1000:863e

void __cdecl16far FUN_1000_863e(int param_1,undefined2 param_2,int param_3,undefined2 param_4)

{
  undefined2 uVar1;
  
  uVar1 = *(undefined2 *)(param_3 + 0x197);
  *(undefined2 *)(param_1 + 0x195) = *(undefined2 *)(param_3 + 0x195);
  *(undefined2 *)(param_1 + 0x197) = uVar1;
  uVar1 = *(undefined2 *)(param_3 + 0x19b);
  *(undefined2 *)(param_1 + 0x199) = *(undefined2 *)(param_3 + 0x199);
  *(undefined2 *)(param_1 + 0x19b) = uVar1;
  uVar1 = *(undefined2 *)(param_3 + 0x19f);
  *(undefined2 *)(param_1 + 0x19d) = *(undefined2 *)(param_3 + 0x19d);
  *(undefined2 *)(param_1 + 0x19f) = uVar1;
  *(undefined2 *)(param_1 + 0x1a1) = *(undefined2 *)(param_3 + 0x1a1);
  return;
}


// ---- FUN_1000_86b0 @ 1000:86b0

void __cdecl16far FUN_1000_86b0(int param_1,undefined2 param_2,int param_3,undefined2 param_4)

{
  undefined2 uVar1;
  
  uVar1 = *(undefined2 *)(param_3 + 0x1a5);
  *(undefined2 *)(param_1 + 0x1a3) = *(undefined2 *)(param_3 + 0x1a3);
  *(undefined2 *)(param_1 + 0x1a5) = uVar1;
  uVar1 = *(undefined2 *)(param_3 + 0x1a9);
  *(undefined2 *)(param_1 + 0x1a7) = *(undefined2 *)(param_3 + 0x1a7);
  *(undefined2 *)(param_1 + 0x1a9) = uVar1;
  uVar1 = *(undefined2 *)(param_3 + 0x1ad);
  *(undefined2 *)(param_1 + 0x1ab) = *(undefined2 *)(param_3 + 0x1ab);
  *(undefined2 *)(param_1 + 0x1ad) = uVar1;
  uVar1 = *(undefined2 *)(param_3 + 0x1b1);
  *(undefined2 *)(param_1 + 0x1af) = *(undefined2 *)(param_3 + 0x1af);
  *(undefined2 *)(param_1 + 0x1b1) = uVar1;
  uVar1 = *(undefined2 *)(param_3 + 0x1b5);
  *(undefined2 *)(param_1 + 0x1b3) = *(undefined2 *)(param_3 + 0x1b3);
  *(undefined2 *)(param_1 + 0x1b5) = uVar1;
  uVar1 = *(undefined2 *)(param_3 + 0x1b9);
  *(undefined2 *)(param_1 + 0x1b7) = *(undefined2 *)(param_3 + 0x1b7);
  *(undefined2 *)(param_1 + 0x1b9) = uVar1;
  uVar1 = *(undefined2 *)(param_3 + 0x1bd);
  *(undefined2 *)(param_1 + 0x1bb) = *(undefined2 *)(param_3 + 0x1bb);
  *(undefined2 *)(param_1 + 0x1bd) = uVar1;
  uVar1 = *(undefined2 *)(param_3 + 0x1c1);
  *(undefined2 *)(param_1 + 0x1bf) = *(undefined2 *)(param_3 + 0x1bf);
  *(undefined2 *)(param_1 + 0x1c1) = uVar1;
  uVar1 = *(undefined2 *)(param_3 + 0x1c5);
  *(undefined2 *)(param_1 + 0x1c3) = *(undefined2 *)(param_3 + 0x1c3);
  *(undefined2 *)(param_1 + 0x1c5) = uVar1;
  uVar1 = *(undefined2 *)(param_3 + 0x1c9);
  *(undefined2 *)(param_1 + 0x1c7) = *(undefined2 *)(param_3 + 0x1c7);
  *(undefined2 *)(param_1 + 0x1c9) = uVar1;
  return;
}


// ---- FUN_1000_87bc @ 1000:87bc

void __cdecl16far FUN_1000_87bc(int param_1,undefined2 param_2,int param_3,undefined2 param_4)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  int iVar5;
  
  *(undefined1 *)(param_1 + 0x1cb) = *(undefined1 *)(param_3 + 0x1cb);
  *(undefined2 *)(param_1 + 0x1cc) = *(undefined2 *)(param_3 + 0x1cc);
  *(undefined2 *)(param_1 + 0x1ce) = *(undefined2 *)(param_3 + 0x1ce);
  iVar5 = 0;
  do {
    iVar2 = iVar5 * 4;
    puVar3 = (undefined2 *)(param_3 + 0x1d0 + iVar2);
    uVar1 = puVar3[1];
    iVar4 = iVar2 + param_1;
    *(undefined2 *)(iVar4 + 0x1d0) = *puVar3;
    *(undefined2 *)(iVar4 + 0x1d2) = uVar1;
    puVar3 = (undefined2 *)(param_3 + 0x1f8 + iVar2);
    uVar1 = puVar3[1];
    *(undefined2 *)(iVar4 + 0x1f8) = *puVar3;
    *(undefined2 *)(iVar4 + 0x1fa) = uVar1;
    puVar3 = (undefined2 *)(param_3 + 0x220 + iVar2);
    uVar1 = puVar3[1];
    *(undefined2 *)(iVar4 + 0x220) = *puVar3;
    *(undefined2 *)(iVar4 + 0x222) = uVar1;
    puVar3 = (undefined2 *)(param_3 + 0x248 + iVar2);
    uVar1 = puVar3[1];
    *(undefined2 *)(iVar4 + 0x248) = *puVar3;
    *(undefined2 *)(iVar4 + 0x24a) = uVar1;
    iVar5 = iVar5 + 1;
  } while (iVar5 < 10);
  return;
}


// ---- FUN_1000_88a4 @ 1000:88a4

void __cdecl16far FUN_1000_88a4(int param_1,undefined2 param_2,int param_3,undefined2 param_4)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  for (iVar2 = 0; iVar2 < 8; iVar2 = iVar2 + 1) {
    iVar3 = iVar2 * 0x26 + param_3;
    iVar4 = param_1 + iVar2 * 0x26;
    *(undefined2 *)(iVar4 + 0x294) = *(undefined2 *)(iVar3 + 0x294);
    uVar1 = *(undefined2 *)(iVar3 + 0x276);
    *(undefined2 *)(iVar4 + 0x274) = *(undefined2 *)(iVar3 + 0x274);
    *(undefined2 *)(iVar4 + 0x276) = uVar1;
    uVar1 = *(undefined2 *)(iVar3 + 0x27a);
    *(undefined2 *)(iVar4 + 0x278) = *(undefined2 *)(iVar3 + 0x278);
    *(undefined2 *)(iVar4 + 0x27a) = uVar1;
    uVar1 = *(undefined2 *)(iVar3 + 0x27e);
    *(undefined2 *)(iVar4 + 0x27c) = *(undefined2 *)(iVar3 + 0x27c);
    *(undefined2 *)(iVar4 + 0x27e) = uVar1;
    uVar1 = *(undefined2 *)(iVar3 + 0x282);
    *(undefined2 *)(iVar4 + 0x280) = *(undefined2 *)(iVar3 + 0x280);
    *(undefined2 *)(iVar4 + 0x282) = uVar1;
    uVar1 = *(undefined2 *)(iVar3 + 0x286);
    *(undefined2 *)(iVar4 + 0x284) = *(undefined2 *)(iVar3 + 0x284);
    *(undefined2 *)(iVar4 + 0x286) = uVar1;
    uVar1 = *(undefined2 *)(iVar3 + 0x28a);
    *(undefined2 *)(iVar4 + 0x288) = *(undefined2 *)(iVar3 + 0x288);
    *(undefined2 *)(iVar4 + 0x28a) = uVar1;
    uVar1 = *(undefined2 *)(iVar3 + 0x28e);
    *(undefined2 *)(iVar4 + 0x28c) = *(undefined2 *)(iVar3 + 0x28c);
    *(undefined2 *)(iVar4 + 0x28e) = uVar1;
    uVar1 = *(undefined2 *)(iVar3 + 0x292);
    *(undefined2 *)(iVar4 + 0x290) = *(undefined2 *)(iVar3 + 0x290);
    *(undefined2 *)(iVar4 + 0x292) = uVar1;
    uVar1 = *(undefined2 *)(iVar3 + 0x272);
    *(undefined2 *)(iVar4 + 0x270) = *(undefined2 *)(iVar3 + 0x270);
    *(undefined2 *)(iVar4 + 0x272) = uVar1;
  }
  return;
}


// ---- FUN_1000_89e0 @ 1000:89e0

void __cdecl16far FUN_1000_89e0(int param_1,undefined2 param_2,int param_3,undefined2 param_4)

{
  undefined2 uVar1;
  
  uVar1 = *(undefined2 *)(param_3 + 0x3a2);
  *(undefined2 *)(param_1 + 0x3a0) = *(undefined2 *)(param_3 + 0x3a0);
  *(undefined2 *)(param_1 + 0x3a2) = uVar1;
  uVar1 = *(undefined2 *)(param_3 + 0x3a6);
  *(undefined2 *)(param_1 + 0x3a4) = *(undefined2 *)(param_3 + 0x3a4);
  *(undefined2 *)(param_1 + 0x3a6) = uVar1;
  return;
}


// ---- FUN_1000_8a2a @ 1000:8a2a

void __cdecl16far FUN_1000_8a2a(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  return;
}


// ---- FUN_1000_8a42 @ 1000:8a42

void __cdecl16far FUN_1000_8a42(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  return;
}


// ---- FUN_1000_8a5a @ 1000:8a5a

void __cdecl16far FUN_1000_8a5a(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  return;
}


// ---- FUN_1000_8a72 @ 1000:8a72

void __cdecl16far FUN_1000_8a72(int param_1,undefined2 param_2,int param_3,undefined2 param_4)

{
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_3 + 1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_3 + 2);
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_3 + 3);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_3 + 4);
  return;
}


// ---- FUN_1000_8abe @ 1000:8abe

void __cdecl16far FUN_1000_8abe(undefined4 param_1,int param_2,undefined2 param_3)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined2 uVar6;
  
  iVar5 = 0;
  do {
    iVar4 = 0;
    do {
      iVar1 = iVar5 * 0x12 + param_2;
      uVar6 = (undefined2)((ulong)param_1 >> 0x10);
      iVar2 = (int)param_1;
      *(undefined1 *)(iVar2 + iVar5 * 0x12 + iVar4) = *(undefined1 *)(iVar1 + iVar4);
      pcVar3 = (char *)(iVar1 + iVar4);
      iVar4 = iVar4 + 1;
    } while (*pcVar3 != '\0');
    iVar4 = iVar5 * 0x12 + param_2;
    iVar1 = iVar2 + iVar5 * 0x12;
    *(undefined1 *)(iVar1 + 10) = *(undefined1 *)(iVar4 + 10);
    *(undefined1 *)(iVar1 + 0xb) = *(undefined1 *)(iVar4 + 0xb);
    *(undefined1 *)(iVar1 + 0xc) = *(undefined1 *)(iVar4 + 0xc);
    *(undefined1 *)(iVar1 + 0xd) = *(undefined1 *)(iVar4 + 0xd);
    *(undefined1 *)(iVar1 + 0xe) = *(undefined1 *)(iVar4 + 0xe);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x11);
  *(undefined1 *)(iVar2 + 0x132) = *(undefined1 *)(param_2 + 0x132);
  *(undefined1 *)(iVar2 + 0x133) = *(undefined1 *)(param_2 + 0x133);
  *(undefined1 *)(iVar2 + 0x134) = *(undefined1 *)(param_2 + 0x134);
  *(undefined1 *)(iVar2 + 0x135) = *(undefined1 *)(param_2 + 0x135);
  *(undefined1 *)(iVar2 + 0x136) = *(undefined1 *)(param_2 + 0x136);
  *(undefined1 *)(iVar2 + 0x137) = *(undefined1 *)(param_2 + 0x137);
  *(undefined2 *)(iVar2 + 0x178) = *(undefined2 *)(param_2 + 0x178);
  for (iVar5 = 0; iVar5 < 0x40; iVar5 = iVar5 + 1) {
    *(undefined1 *)(iVar2 + iVar5 + 0x138) = *(undefined1 *)(param_2 + iVar5 + 0x138);
  }
  *(undefined1 *)(iVar2 + 0x17a) = *(undefined1 *)(param_2 + 0x17a);
  *(undefined1 *)(iVar2 + 0x17b) = *(undefined1 *)(param_2 + 0x17b);
  *(undefined2 *)(iVar2 + 0x17c) = *(undefined2 *)(param_2 + 0x17c);
  *(undefined2 *)(iVar2 + 0x17e) = *(undefined2 *)(param_2 + 0x17e);
  *(undefined2 *)(iVar2 + 0x180) = *(undefined2 *)(param_2 + 0x180);
  *(undefined2 *)(iVar2 + 0x182) = *(undefined2 *)(param_2 + 0x182);
  return;
}


// ---- FUN_1000_8c6c @ 1000:8c6c

void __cdecl16far FUN_1000_8c6c(undefined4 param_1,undefined4 param_2)

{
  *(undefined1 *)((int)param_1 + 0x184) = *(undefined1 *)((int)param_2 + 0x184);
  return;
}


// ---- FUN_1000_8c88 @ 1000:8c88

void __cdecl16far FUN_1000_8c88(undefined4 param_1,undefined4 param_2)

{
  *(undefined2 *)((int)param_1 + 0x185) = *(undefined2 *)((int)param_2 + 0x185);
  return;
}


// ---- FUN_1000_8ca4 @ 1000:8ca4

void __cdecl16far FUN_1000_8ca4(int param_1,undefined2 param_2,int param_3,undefined2 param_4)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  for (iVar4 = 0; iVar4 < 0x40; iVar4 = iVar4 + 1) {
    *(undefined1 *)(param_1 + iVar4 + 0x187) = *(undefined1 *)(param_3 + iVar4 + 0x187);
  }
  uVar1 = *(undefined2 *)(param_3 + 0x1c9);
  *(undefined2 *)(param_1 + 0x1c7) = *(undefined2 *)(param_3 + 0x1c7);
  *(undefined2 *)(param_1 + 0x1c9) = uVar1;
  uVar1 = *(undefined2 *)(param_3 + 0x1cd);
  *(undefined2 *)(param_1 + 0x1cb) = *(undefined2 *)(param_3 + 0x1cb);
  *(undefined2 *)(param_1 + 0x1cd) = uVar1;
  uVar1 = *(undefined2 *)(param_3 + 0x1d1);
  *(undefined2 *)(param_1 + 0x1cf) = *(undefined2 *)(param_3 + 0x1cf);
  *(undefined2 *)(param_1 + 0x1d1) = uVar1;
  iVar4 = 0;
  do {
    iVar2 = param_3 + iVar4;
    iVar3 = param_1 + iVar4;
    iVar4 = iVar4 + 1;
    *(undefined1 *)(iVar3 + 0x1d3) = *(undefined1 *)(iVar2 + 0x1d3);
  } while (iVar4 < 8);
  return;
}


// ---- FUN_1000_8d4c @ 1000:8d4c

void __cdecl16far FUN_1000_8d4c(int param_1,undefined2 param_2,int param_3,undefined2 param_4)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  do {
    iVar3 = 0;
    do {
      iVar1 = iVar4 * 0xf + param_3;
      *(undefined1 *)(iVar4 * 0x12 + param_1 + iVar3) = *(undefined1 *)(iVar1 + iVar3);
      pcVar2 = (char *)(iVar3 + iVar1);
      iVar3 = iVar3 + 1;
    } while (*pcVar2 != '\0');
    iVar3 = iVar4 * 0xf + param_3;
    iVar1 = iVar4 * 0x12 + param_1;
    *(undefined1 *)(iVar1 + 10) = *(undefined1 *)(iVar3 + 10);
    *(undefined1 *)(iVar1 + 0xb) = *(undefined1 *)(iVar3 + 0xb);
    *(undefined1 *)(iVar1 + 0xc) = *(undefined1 *)(iVar3 + 0xc);
    *(undefined1 *)(iVar1 + 0xd) = *(undefined1 *)(iVar3 + 0xd);
    iVar4 = iVar4 + 1;
    *(undefined1 *)(iVar1 + 0xe) = *(undefined1 *)(iVar3 + 0xe);
  } while (iVar4 < 0x11);
  *(undefined1 *)(param_1 + 0x132) = *(undefined1 *)(param_3 + 0xff);
  *(undefined1 *)(param_1 + 0x133) = *(undefined1 *)(param_3 + 0x100);
  *(undefined1 *)(param_1 + 0x134) = *(undefined1 *)(param_3 + 0x101);
  *(undefined1 *)(param_1 + 0x135) = *(undefined1 *)(param_3 + 0x102);
  *(undefined1 *)(param_1 + 0x136) = *(undefined1 *)(param_3 + 0x103);
  *(undefined1 *)(param_1 + 0x137) = *(undefined1 *)(param_3 + 0x104);
  *(undefined2 *)(param_1 + 0x178) = *(undefined2 *)(param_3 + 0x145);
  for (iVar4 = 0; iVar4 < 0x40; iVar4 = iVar4 + 1) {
    *(undefined1 *)(param_1 + iVar4 + 0x138) = *(undefined1 *)(param_3 + iVar4 + 0x105);
  }
  *(undefined1 *)(param_1 + 0x17a) = *(undefined1 *)(param_3 + 0x147);
  *(undefined1 *)(param_1 + 0x17b) = *(undefined1 *)(param_3 + 0x148);
  *(undefined2 *)(param_1 + 0x17c) = *(undefined2 *)(param_3 + 0x149);
  *(undefined2 *)(param_1 + 0x17e) = *(undefined2 *)(param_3 + 0x14b);
  *(undefined2 *)(param_1 + 0x180) = *(undefined2 *)(param_3 + 0x14d);
  *(undefined2 *)(param_1 + 0x182) = *(undefined2 *)(param_3 + 0x14f);
  return;
}


// ---- FUN_1000_8efc @ 1000:8efc

void __cdecl16far FUN_1000_8efc(undefined4 param_1,undefined4 param_2)

{
  *(undefined1 *)((int)param_1 + 0x184) = *(undefined1 *)((int)param_2 + 0x151);
  return;
}


// ---- FUN_1000_8f18 @ 1000:8f18

void __cdecl16far FUN_1000_8f18(undefined4 param_1,undefined4 param_2)

{
  *(undefined2 *)((int)param_1 + 0x185) = *(undefined2 *)((int)param_2 + 0x152);
  return;
}


// ---- FUN_1000_8f34 @ 1000:8f34

void __cdecl16far FUN_1000_8f34(int param_1,undefined2 param_2,int param_3,undefined2 param_4)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  for (iVar4 = 0; iVar4 < 0x40; iVar4 = iVar4 + 1) {
    *(undefined1 *)(param_1 + iVar4 + 0x187) = *(undefined1 *)(param_3 + iVar4 + 0x154);
  }
  uVar1 = *(undefined2 *)(param_3 + 0x196);
  *(undefined2 *)(param_1 + 0x1c7) = *(undefined2 *)(param_3 + 0x194);
  *(undefined2 *)(param_1 + 0x1c9) = uVar1;
  uVar1 = *(undefined2 *)(param_3 + 0x19a);
  *(undefined2 *)(param_1 + 0x1cb) = *(undefined2 *)(param_3 + 0x198);
  *(undefined2 *)(param_1 + 0x1cd) = uVar1;
  uVar1 = *(undefined2 *)(param_3 + 0x19e);
  *(undefined2 *)(param_1 + 0x1cf) = *(undefined2 *)(param_3 + 0x19c);
  *(undefined2 *)(param_1 + 0x1d1) = uVar1;
  iVar4 = 0;
  do {
    iVar2 = param_3 + iVar4;
    iVar3 = param_1 + iVar4;
    iVar4 = iVar4 + 1;
    *(undefined1 *)(iVar3 + 0x1d3) = *(undefined1 *)(iVar2 + 0x1a0);
  } while (iVar4 < 8);
  return;
}


// ---- FUN_1000_8fdc @ 1000:8fdc

void __cdecl16far FUN_1000_8fdc(int param_1,undefined2 param_2,int param_3,undefined2 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  for (iVar3 = 1; iVar3 < 0x12; iVar3 = iVar3 + 1) {
    iVar1 = iVar3 * 0x12 + param_3;
    iVar2 = param_1 + iVar3 * 0x12;
    *(undefined1 *)(iVar2 + -3) = *(undefined1 *)(iVar1 + -3);
    *(undefined1 *)(iVar2 + -2) = *(undefined1 *)(iVar1 + -2);
    *(undefined1 *)(iVar2 + -1) = *(undefined1 *)(iVar1 + -1);
  }
  return;
}


// ---- FUN_1000_9040 @ 1000:9040

void __cdecl16far
FUN_1000_9040(undefined2 *param_1,undefined2 param_2,undefined2 *param_3,undefined2 param_4)

{
  undefined2 uVar1;
  
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_3 + 2);
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_3 + 3);
  *(undefined1 *)((int)param_1 + 5) = *(undefined1 *)((int)param_3 + 5);
  uVar1 = param_3[1];
  *param_1 = *param_3;
  param_1[1] = uVar1;
  return;
}


// ---- FUN_1000_9092 @ 1000:9092

void __cdecl16far FUN_1000_9092(int param_1,undefined2 param_2,int param_3,undefined2 param_4)

{
  undefined2 uVar1;
  
  uVar1 = *(undefined2 *)(param_3 + 9);
  *(undefined2 *)(param_1 + 7) = *(undefined2 *)(param_3 + 7);
  *(undefined2 *)(param_1 + 9) = uVar1;
  uVar1 = *(undefined2 *)(param_3 + 0xd);
  *(undefined2 *)(param_1 + 0xb) = *(undefined2 *)(param_3 + 0xb);
  *(undefined2 *)(param_1 + 0xd) = uVar1;
  return;
}


// ---- FUN_1000_90d4 @ 1000:90d4

void __cdecl16far FUN_1000_90d4(int param_1,undefined2 param_2,int param_3,undefined2 param_4)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  for (iVar2 = 0; iVar2 < 5; iVar2 = iVar2 + 1) {
    iVar3 = iVar2 * 4 + param_3;
    uVar1 = *(undefined2 *)(iVar3 + 0x11);
    iVar4 = iVar2 * 4 + param_1;
    *(undefined2 *)(iVar4 + 0xf) = *(undefined2 *)(iVar3 + 0xf);
    *(undefined2 *)(iVar4 + 0x11) = uVar1;
  }
  return;
}


// ---- FUN_1000_911c @ 1000:911c

void __cdecl16far FUN_1000_911c(int param_1,undefined2 param_2,int param_3,undefined2 param_4)

{
  undefined2 uVar1;
  
  uVar1 = *(undefined2 *)(param_3 + 0x25);
  *(undefined2 *)(param_1 + 0x23) = *(undefined2 *)(param_3 + 0x23);
  *(undefined2 *)(param_1 + 0x25) = uVar1;
  uVar1 = *(undefined2 *)(param_3 + 0x29);
  *(undefined2 *)(param_1 + 0x27) = *(undefined2 *)(param_3 + 0x27);
  *(undefined2 *)(param_1 + 0x29) = uVar1;
  return;
}


// ---- FUN_1000_915e @ 1000:915e

void __cdecl16far
FUN_1000_915e(undefined2 *param_1,undefined2 param_2,undefined2 *param_3,undefined2 param_4)

{
  undefined2 uVar1;
  int iVar2;
  
  uVar1 = *(undefined2 *)((int)param_3 + 0x2d);
  *(undefined2 *)((int)param_1 + 0x2b) = *(undefined2 *)((int)param_3 + 0x2b);
  *(undefined2 *)((int)param_1 + 0x2d) = uVar1;
  uVar1 = *(undefined2 *)((int)param_3 + 0x31);
  *(undefined2 *)((int)param_1 + 0x2f) = *(undefined2 *)((int)param_3 + 0x2f);
  *(undefined2 *)((int)param_1 + 0x31) = uVar1;
  uVar1 = *(undefined2 *)((int)param_3 + 0x35);
  *(undefined2 *)((int)param_1 + 0x33) = *(undefined2 *)((int)param_3 + 0x33);
  *(undefined2 *)((int)param_1 + 0x35) = uVar1;
  uVar1 = *(undefined2 *)((int)param_3 + 0x39);
  *(undefined2 *)((int)param_1 + 0x37) = *(undefined2 *)((int)param_3 + 0x37);
  *(undefined2 *)((int)param_1 + 0x39) = uVar1;
  uVar1 = *(undefined2 *)((int)param_3 + 0x3d);
  *(undefined2 *)((int)param_1 + 0x3b) = *(undefined2 *)((int)param_3 + 0x3b);
  *(undefined2 *)((int)param_1 + 0x3d) = uVar1;
  iVar2 = 0;
  do {
    uVar1 = param_3[iVar2 * 2 + 0x21];
    param_1[iVar2 * 2 + 0x20] = param_3[iVar2 * 2 + 0x20];
    param_1[iVar2 * 2 + 0x21] = uVar1;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 5);
  uVar1 = param_3[1];
  *param_1 = *param_3;
  param_1[1] = uVar1;
  *(undefined1 *)((int)param_1 + 0x3f) = *(undefined1 *)((int)param_3 + 0x3f);
  return;
}


// ---- FUN_1000_9238 @ 1000:9238

void __cdecl16far FUN_1000_9238(int param_1,undefined2 param_2,int param_3,undefined2 param_4)

{
  *(undefined1 *)(param_1 + 0x54) = *(undefined1 *)(param_3 + 0x54);
  *(undefined1 *)(param_1 + 0x55) = *(undefined1 *)(param_3 + 0x55);
  return;
}


// ---- FUN_1000_926c @ 1000:926c

void __cdecl16far FUN_1000_926c(undefined4 param_1)

{
  *(undefined1 *)((int)param_1 + 0x184) = 1;
  return;
}


// ---- FUN_1000_9280 @ 1000:9280

void __cdecl16far FUN_1000_9280(undefined4 param_1)

{
  *(undefined2 *)((int)param_1 + 0x185) = 0;
  return;
}


// ---- FUN_1000_9296 @ 1000:9296

void __cdecl16far FUN_1000_9296(int param_1,undefined2 param_2)

{
  int iVar1;
  int iVar2;
  
  for (iVar1 = 0; iVar1 < 0x40; iVar1 = iVar1 + 1) {
    *(undefined1 *)(param_1 + iVar1 + 0x187) = 0;
  }
  *(undefined2 *)(param_1 + 0x1c9) = 0;
  *(undefined2 *)(param_1 + 0x1c7) = 0;
  *(undefined2 *)(param_1 + 0x1cd) = 0;
  *(undefined2 *)(param_1 + 0x1cb) = 0;
  *(undefined2 *)(param_1 + 0x1d1) = 0;
  *(undefined2 *)(param_1 + 0x1cf) = 0;
  iVar1 = 0;
  do {
    iVar2 = param_1 + iVar1;
    iVar1 = iVar1 + 1;
    *(undefined1 *)(iVar2 + 0x1d3) = 0;
  } while (iVar1 < 8);
  return;
}


// ---- FUN_1000_92f8 @ 1000:92f8

void __cdecl16far FUN_1000_92f8(int param_1,undefined2 param_2)

{
  int iVar1;
  int iVar2;
  
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(undefined1 *)(param_1 + 0x69) = 0;
  *(undefined1 *)(param_1 + 0x45) = 0;
  *(undefined1 *)(param_1 + 0x7b) = 0;
  *(undefined1 *)(param_1 + 0x33) = 0;
  *(undefined1 *)(param_1 + 0x57) = 0;
  *(undefined1 *)(param_1 + 0x8d) = 1;
  *(undefined1 *)(param_1 + 0x10) = 1;
  *(undefined1 *)(param_1 + 0x22) = 1;
  *(undefined1 *)(param_1 + 0x6a) = 1;
  *(undefined1 *)(param_1 + 0x46) = 1;
  *(undefined1 *)(param_1 + 0x7c) = 1;
  *(undefined1 *)(param_1 + 0x34) = 1;
  *(undefined1 *)(param_1 + 0x58) = 1;
  *(undefined1 *)(param_1 + 0x8e) = 1;
  *(undefined1 *)(param_1 + 0x11) = 1;
  *(undefined1 *)(param_1 + 0x23) = 1;
  *(undefined1 *)(param_1 + 0x6b) = 1;
  *(undefined1 *)(param_1 + 0x47) = 1;
  *(undefined1 *)(param_1 + 0x7d) = 1;
  *(undefined1 *)(param_1 + 0x35) = 1;
  *(undefined1 *)(param_1 + 0x59) = 1;
  *(undefined1 *)(param_1 + 0x8f) = 1;
  iVar2 = 9;
  do {
    iVar1 = iVar2 * 0x12 + param_1;
    *(undefined1 *)(iVar1 + -3) = 0;
    *(undefined1 *)(iVar1 + -2) = 1;
    *(undefined1 *)(iVar1 + -1) = 1;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x12);
  return;
}


// ---- FUN_1000_9394 @ 1000:9394

void __cdecl16far FUN_1000_9394(int param_1,undefined2 param_2)

{
  undefined2 uVar1;
  undefined2 unaff_SS;
  
  *(undefined1 *)(param_1 + 0xc6) = 0;
  uVar1 = *(undefined2 *)0x3a4;
  *(undefined2 *)(param_1 + 199) = *(undefined2 *)0x3a2;
  *(undefined2 *)(param_1 + 0xc9) = uVar1;
  uVar1 = *(undefined2 *)0x3a4;
  *(undefined2 *)(param_1 + 0xcb) = *(undefined2 *)0x3a2;
  *(undefined2 *)(param_1 + 0xcd) = uVar1;
  uVar1 = *(undefined2 *)0x3a8;
  *(undefined2 *)(param_1 + 0xcf) = *(undefined2 *)0x3a6;
  *(undefined2 *)(param_1 + 0xd1) = uVar1;
  uVar1 = *(undefined2 *)0x3ac;
  *(undefined2 *)(param_1 + 0xd3) = *(undefined2 *)0x3aa;
  *(undefined2 *)(param_1 + 0xd5) = uVar1;
  uVar1 = *(undefined2 *)0x3b0;
  *(undefined2 *)(param_1 + 0xd7) = *(undefined2 *)0x3ae;
  *(undefined2 *)(param_1 + 0xd9) = uVar1;
  *(undefined2 *)(param_1 + 0xdb) = 1;
  uVar1 = *(undefined2 *)0x3b4;
  *(undefined2 *)(param_1 + 0xdd) = *(undefined2 *)0x3b2;
  *(undefined2 *)(param_1 + 0xdf) = uVar1;
  uVar1 = *(undefined2 *)0x3ac;
  *(undefined2 *)(param_1 + 0xe1) = *(undefined2 *)0x3aa;
  *(undefined2 *)(param_1 + 0xe3) = uVar1;
  uVar1 = *(undefined2 *)0x3b8;
  *(undefined2 *)(param_1 + 0xe5) = *(undefined2 *)0x3b6;
  *(undefined2 *)(param_1 + 0xe7) = uVar1;
  *(undefined2 *)(param_1 + 0xe9) = 1;
  uVar1 = *(undefined2 *)0x3b4;
  *(undefined2 *)(param_1 + 0xeb) = *(undefined2 *)0x3b2;
  *(undefined2 *)(param_1 + 0xed) = uVar1;
  uVar1 = *(undefined2 *)0x3ac;
  *(undefined2 *)(param_1 + 0xef) = *(undefined2 *)0x3aa;
  *(undefined2 *)(param_1 + 0xf1) = uVar1;
  uVar1 = *(undefined2 *)0x3bc;
  *(undefined2 *)(param_1 + 0xf3) = *(undefined2 *)0x3ba;
  *(undefined2 *)(param_1 + 0xf5) = uVar1;
  *(undefined2 *)(param_1 + 0xf7) = 1;
  uVar1 = *(undefined2 *)0x3c0;
  *(undefined2 *)(param_1 + 0xf9) = *(undefined2 *)0x3be;
  *(undefined2 *)(param_1 + 0xfb) = uVar1;
  uVar1 = *(undefined2 *)0x3ac;
  *(undefined2 *)(param_1 + 0xfd) = *(undefined2 *)0x3aa;
  *(undefined2 *)(param_1 + 0xff) = uVar1;
  uVar1 = *(undefined2 *)0x3c4;
  *(undefined2 *)(param_1 + 0x101) = *(undefined2 *)0x3c2;
  *(undefined2 *)(param_1 + 0x103) = uVar1;
  *(undefined2 *)(param_1 + 0x105) = 1;
  *(undefined2 *)(param_1 + 0x107) = 0x3e;
  *(undefined2 *)(param_1 + 0x109) = 0xffb0;
  *(undefined2 *)(param_1 + 0x10b) = 0xb00;
  *(undefined2 *)(param_1 + 0x10d) = 0xf0;
  *(undefined2 *)(param_1 + 0x10f) = 0;
  return;
}


// ---- FUN_1000_94d8 @ 1000:94d8

void __cdecl16far FUN_1000_94d8(int param_1,undefined2 param_2)

{
  undefined2 uVar1;
  undefined2 unaff_SS;
  
  *(undefined1 *)(param_1 + 0x111) = 1;
  uVar1 = *(undefined2 *)0x3c8;
  *(undefined2 *)(param_1 + 0x112) = *(undefined2 *)0x3c6;
  *(undefined2 *)(param_1 + 0x114) = uVar1;
  uVar1 = *(undefined2 *)0x3cc;
  *(undefined2 *)(param_1 + 0x116) = *(undefined2 *)0x3ca;
  *(undefined2 *)(param_1 + 0x118) = uVar1;
  return;
}


// ---- FUN_1000_9512 @ 1000:9512

void __cdecl16far FUN_1000_9512(undefined4 param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  
  uVar1 = *(undefined2 *)0x3d0;
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  *(undefined2 *)((int)param_1 + 0x11a) = *(undefined2 *)0x3ce;
  *(undefined2 *)((int)param_1 + 0x11c) = uVar1;
  return;
}


// ---- FUN_1000_9532 @ 1000:9532

void __cdecl16far FUN_1000_9532(undefined4 param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  
  uVar1 = *(undefined2 *)0x3d4;
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  *(undefined2 *)((int)param_1 + 0x11e) = *(undefined2 *)0x3d2;
  *(undefined2 *)((int)param_1 + 0x120) = uVar1;
  return;
}


// ---- FUN_1000_9552 @ 1000:9552

void __cdecl16far FUN_1000_9552(undefined4 param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  
  uVar1 = *(undefined2 *)0x3c8;
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  *(undefined2 *)((int)param_1 + 0x122) = *(undefined2 *)0x3c6;
  *(undefined2 *)((int)param_1 + 0x124) = uVar1;
  return;
}


// ---- FUN_1000_9572 @ 1000:9572

void __cdecl16far FUN_1000_9572(int param_1,undefined2 param_2)

{
  undefined2 uVar1;
  undefined2 unaff_SS;
  
  uVar1 = *(undefined2 *)0x3cc;
  *(undefined2 *)(param_1 + 0x126) = *(undefined2 *)0x3ca;
  *(undefined2 *)(param_1 + 0x128) = uVar1;
  uVar1 = *(undefined2 *)0x3cc;
  *(undefined2 *)(param_1 + 0x12a) = *(undefined2 *)0x3ca;
  *(undefined2 *)(param_1 + 300) = uVar1;
  return;
}


// ---- FUN_1000_95a6 @ 1000:95a6

void __cdecl16far FUN_1000_95a6(int param_1,undefined2 param_2)

{
  undefined2 uVar1;
  undefined2 unaff_SS;
  
  *(undefined1 *)(param_1 + 0x12e) = 0;
  uVar1 = *(undefined2 *)0x3d8;
  *(undefined2 *)(param_1 + 0x12f) = *(undefined2 *)0x3d6;
  *(undefined2 *)(param_1 + 0x131) = uVar1;
  uVar1 = *(undefined2 *)0x3c8;
  *(undefined2 *)(param_1 + 0x133) = *(undefined2 *)0x3c6;
  *(undefined2 *)(param_1 + 0x135) = uVar1;
  uVar1 = *(undefined2 *)0x3c8;
  *(undefined2 *)(param_1 + 0x137) = *(undefined2 *)0x3c6;
  *(undefined2 *)(param_1 + 0x139) = uVar1;
  uVar1 = *(undefined2 *)0x3c8;
  *(undefined2 *)(param_1 + 0x13b) = *(undefined2 *)0x3c6;
  *(undefined2 *)(param_1 + 0x13d) = uVar1;
  uVar1 = *(undefined2 *)0x3c8;
  *(undefined2 *)(param_1 + 0x13f) = *(undefined2 *)0x3c6;
  *(undefined2 *)(param_1 + 0x141) = uVar1;
  uVar1 = *(undefined2 *)0x3c8;
  *(undefined2 *)(param_1 + 0x143) = *(undefined2 *)0x3c6;
  *(undefined2 *)(param_1 + 0x145) = uVar1;
  uVar1 = *(undefined2 *)0x3c8;
  *(undefined2 *)(param_1 + 0x147) = *(undefined2 *)0x3c6;
  *(undefined2 *)(param_1 + 0x149) = uVar1;
  uVar1 = *(undefined2 *)0x3c8;
  *(undefined2 *)(param_1 + 0x14b) = *(undefined2 *)0x3c6;
  *(undefined2 *)(param_1 + 0x14d) = uVar1;
  uVar1 = *(undefined2 *)0x3c8;
  *(undefined2 *)(param_1 + 0x14f) = *(undefined2 *)0x3c6;
  *(undefined2 *)(param_1 + 0x151) = uVar1;
  uVar1 = *(undefined2 *)0x3c8;
  *(undefined2 *)(param_1 + 0x153) = *(undefined2 *)0x3c6;
  *(undefined2 *)(param_1 + 0x155) = uVar1;
  uVar1 = *(undefined2 *)0x3c8;
  *(undefined2 *)(param_1 + 0x157) = *(undefined2 *)0x3c6;
  *(undefined2 *)(param_1 + 0x159) = uVar1;
  return;
}


// ---- FUN_1000_9678 @ 1000:9678

void __cdecl16far FUN_1000_9678(int param_1,undefined2 param_2)

{
  undefined2 uVar1;
  undefined2 unaff_SS;
  
  uVar1 = *(undefined2 *)0x3c8;
  *(undefined2 *)(param_1 + 0x15b) = *(undefined2 *)0x3c6;
  *(undefined2 *)(param_1 + 0x15d) = uVar1;
  uVar1 = *(undefined2 *)0x3c8;
  *(undefined2 *)(param_1 + 0x15f) = *(undefined2 *)0x3c6;
  *(undefined2 *)(param_1 + 0x161) = uVar1;
  uVar1 = *(undefined2 *)0x3c8;
  *(undefined2 *)(param_1 + 0x163) = *(undefined2 *)0x3c6;
  *(undefined2 *)(param_1 + 0x165) = uVar1;
  uVar1 = *(undefined2 *)0x3c8;
  *(undefined2 *)(param_1 + 0x167) = *(undefined2 *)0x3c6;
  *(undefined2 *)(param_1 + 0x169) = uVar1;
  return;
}


// ---- FUN_1000_96ce @ 1000:96ce

void __cdecl16far FUN_1000_96ce(int param_1,undefined2 param_2)

{
  undefined2 uVar1;
  undefined2 unaff_SS;
  
  uVar1 = *(undefined2 *)0x3c0;
  *(undefined2 *)(param_1 + 0x16b) = *(undefined2 *)0x3be;
  *(undefined2 *)(param_1 + 0x16d) = uVar1;
  uVar1 = *(undefined2 *)0x3dc;
  *(undefined2 *)(param_1 + 0x16f) = *(undefined2 *)0x3da;
  *(undefined2 *)(param_1 + 0x171) = uVar1;
  uVar1 = *(undefined2 *)0x3e0;
  *(undefined2 *)(param_1 + 0x173) = *(undefined2 *)0x3de;
  *(undefined2 *)(param_1 + 0x175) = uVar1;
  *(undefined2 *)(param_1 + 0x177) = 1;
  uVar1 = *(undefined2 *)0x3a8;
  *(undefined2 *)(param_1 + 0x179) = *(undefined2 *)0x3a6;
  *(undefined2 *)(param_1 + 0x17b) = uVar1;
  uVar1 = *(undefined2 *)0x3dc;
  *(undefined2 *)(param_1 + 0x17d) = *(undefined2 *)0x3da;
  *(undefined2 *)(param_1 + 0x17f) = uVar1;
  uVar1 = *(undefined2 *)0x3e4;
  *(undefined2 *)(param_1 + 0x181) = *(undefined2 *)0x3e2;
  *(undefined2 *)(param_1 + 0x183) = uVar1;
  *(undefined2 *)(param_1 + 0x185) = 1;
  uVar1 = *(undefined2 *)0x3e8;
  *(undefined2 *)(param_1 + 0x187) = *(undefined2 *)0x3e6;
  *(undefined2 *)(param_1 + 0x189) = uVar1;
  uVar1 = *(undefined2 *)0x3dc;
  *(undefined2 *)(param_1 + 0x18b) = *(undefined2 *)0x3da;
  *(undefined2 *)(param_1 + 0x18d) = uVar1;
  uVar1 = *(undefined2 *)0x3ec;
  *(undefined2 *)(param_1 + 399) = *(undefined2 *)0x3ea;
  *(undefined2 *)(param_1 + 0x191) = uVar1;
  *(undefined2 *)(param_1 + 0x193) = 1;
  return;
}


// ---- FUN_1000_978e @ 1000:978e

void __cdecl16far FUN_1000_978e(int param_1,undefined2 param_2)

{
  undefined2 uVar1;
  undefined2 unaff_SS;
  
  uVar1 = *(undefined2 *)0x3e8;
  *(undefined2 *)(param_1 + 0x195) = *(undefined2 *)0x3e6;
  *(undefined2 *)(param_1 + 0x197) = uVar1;
  uVar1 = *(undefined2 *)0x3f0;
  *(undefined2 *)(param_1 + 0x199) = *(undefined2 *)0x3ee;
  *(undefined2 *)(param_1 + 0x19b) = uVar1;
  uVar1 = *(undefined2 *)0x3f4;
  *(undefined2 *)(param_1 + 0x19d) = *(undefined2 *)0x3f2;
  *(undefined2 *)(param_1 + 0x19f) = uVar1;
  *(undefined2 *)(param_1 + 0x1a1) = 1;
  return;
}


// ---- FUN_1000_97da @ 1000:97da

void __cdecl16far FUN_1000_97da(int param_1,undefined2 param_2)

{
  undefined2 uVar1;
  undefined2 unaff_SS;
  
  uVar1 = *(undefined2 *)0x3c8;
  *(undefined2 *)(param_1 + 0x1a3) = *(undefined2 *)0x3c6;
  *(undefined2 *)(param_1 + 0x1a5) = uVar1;
  uVar1 = *(undefined2 *)0x3c8;
  *(undefined2 *)(param_1 + 0x1a7) = *(undefined2 *)0x3c6;
  *(undefined2 *)(param_1 + 0x1a9) = uVar1;
  uVar1 = *(undefined2 *)0x3c8;
  *(undefined2 *)(param_1 + 0x1ab) = *(undefined2 *)0x3c6;
  *(undefined2 *)(param_1 + 0x1ad) = uVar1;
  uVar1 = *(undefined2 *)0x3c8;
  *(undefined2 *)(param_1 + 0x1af) = *(undefined2 *)0x3c6;
  *(undefined2 *)(param_1 + 0x1b1) = uVar1;
  uVar1 = *(undefined2 *)0x3c8;
  *(undefined2 *)(param_1 + 0x1b3) = *(undefined2 *)0x3c6;
  *(undefined2 *)(param_1 + 0x1b5) = uVar1;
  uVar1 = *(undefined2 *)0x3c8;
  *(undefined2 *)(param_1 + 0x1b7) = *(undefined2 *)0x3c6;
  *(undefined2 *)(param_1 + 0x1b9) = uVar1;
  uVar1 = *(undefined2 *)0x3c8;
  *(undefined2 *)(param_1 + 0x1bb) = *(undefined2 *)0x3c6;
  *(undefined2 *)(param_1 + 0x1bd) = uVar1;
  uVar1 = *(undefined2 *)0x3c8;
  *(undefined2 *)(param_1 + 0x1bf) = *(undefined2 *)0x3c6;
  *(undefined2 *)(param_1 + 0x1c1) = uVar1;
  uVar1 = *(undefined2 *)0x3c8;
  *(undefined2 *)(param_1 + 0x1c3) = *(undefined2 *)0x3c6;
  *(undefined2 *)(param_1 + 0x1c5) = uVar1;
  uVar1 = *(undefined2 *)0x3c8;
  *(undefined2 *)(param_1 + 0x1c7) = *(undefined2 *)0x3c6;
  *(undefined2 *)(param_1 + 0x1c9) = uVar1;
  return;
}


// ---- FUN_1000_9896 @ 1000:9896

void __cdecl16far FUN_1000_9896(int param_1,undefined2 param_2,char param_3)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined2 unaff_SS;
  
  if (param_3 == '\x04') {
    *(undefined1 *)(param_1 + 0x1cb) = 1;
    uVar1 = *(undefined2 *)0x3f8;
    *(undefined2 *)(param_1 + 0x16b) = *(undefined2 *)0x3f6;
    *(undefined2 *)(param_1 + 0x16d) = uVar1;
    uVar1 = *(undefined2 *)0x3f8;
    *(undefined2 *)(param_1 + 0x179) = *(undefined2 *)0x3f6;
    *(undefined2 *)(param_1 + 0x17b) = uVar1;
    uVar1 = *(undefined2 *)0x3f8;
    *(undefined2 *)(param_1 + 0x187) = *(undefined2 *)0x3f6;
    *(undefined2 *)(param_1 + 0x189) = uVar1;
  }
  else {
    *(undefined1 *)(param_1 + 0x1cb) = 0;
  }
  *(undefined2 *)(param_1 + 0x1cc) = 0x200;
  *(undefined2 *)(param_1 + 0x1ce) = 0x180;
  iVar2 = 0;
  do {
    uVar1 = *(undefined2 *)0x3c8;
    iVar3 = iVar2 * 4 + param_1;
    *(undefined2 *)(iVar3 + 0x1d0) = *(undefined2 *)0x3c6;
    *(undefined2 *)(iVar3 + 0x1d2) = uVar1;
    uVar1 = *(undefined2 *)0x3c8;
    *(undefined2 *)(iVar3 + 0x1f8) = *(undefined2 *)0x3c6;
    *(undefined2 *)(iVar3 + 0x1fa) = uVar1;
    uVar1 = *(undefined2 *)0x3c8;
    *(undefined2 *)(iVar3 + 0x220) = *(undefined2 *)0x3c6;
    *(undefined2 *)(iVar3 + 0x222) = uVar1;
    uVar1 = *(undefined2 *)0x3c8;
    *(undefined2 *)(iVar3 + 0x248) = *(undefined2 *)0x3c6;
    *(undefined2 *)(iVar3 + 0x24a) = uVar1;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 10);
  return;
}


// ---- FUN_1000_9960 @ 1000:9960

void __cdecl16far FUN_1000_9960(int param_1,undefined2 param_2)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined2 unaff_SS;
  
  for (iVar3 = 0; iVar3 < 8; iVar3 = iVar3 + 1) {
    iVar2 = iVar3 * 0x26 + param_1;
    *(int *)(iVar2 + 0x294) = iVar3;
    uVar1 = *(undefined2 *)0x3c8;
    *(undefined2 *)(iVar2 + 0x284) = *(undefined2 *)0x3c6;
    *(undefined2 *)(iVar2 + 0x286) = uVar1;
    uVar1 = *(undefined2 *)0x3c8;
    *(undefined2 *)(iVar2 + 0x288) = *(undefined2 *)0x3c6;
    *(undefined2 *)(iVar2 + 0x28a) = uVar1;
    uVar1 = *(undefined2 *)0x3c8;
    *(undefined2 *)(iVar2 + 0x28c) = *(undefined2 *)0x3c6;
    *(undefined2 *)(iVar2 + 0x28e) = uVar1;
    uVar1 = *(undefined2 *)0x3c8;
    *(undefined2 *)(iVar2 + 0x290) = *(undefined2 *)0x3c6;
    *(undefined2 *)(iVar2 + 0x292) = uVar1;
  }
  uVar1 = *(undefined2 *)0x3c8;
  *(undefined2 *)(param_1 + 0x270) = *(undefined2 *)0x3c6;
  *(undefined2 *)(param_1 + 0x272) = uVar1;
  uVar1 = *(undefined2 *)0x3c8;
  *(undefined2 *)(param_1 + 0x274) = *(undefined2 *)0x3c6;
  *(undefined2 *)(param_1 + 0x276) = uVar1;
  uVar1 = *(undefined2 *)0x3c8;
  *(undefined2 *)(param_1 + 0x278) = *(undefined2 *)0x3c6;
  *(undefined2 *)(param_1 + 0x27a) = uVar1;
  uVar1 = *(undefined2 *)0x3c8;
  *(undefined2 *)(param_1 + 0x27c) = *(undefined2 *)0x3c6;
  *(undefined2 *)(param_1 + 0x27e) = uVar1;
  uVar1 = *(undefined2 *)0x3c8;
  *(undefined2 *)(param_1 + 0x280) = *(undefined2 *)0x3c6;
  *(undefined2 *)(param_1 + 0x282) = uVar1;
  uVar1 = *(undefined2 *)0x3b4;
  *(undefined2 *)(param_1 + 0x296) = *(undefined2 *)0x3b2;
  *(undefined2 *)(param_1 + 0x298) = uVar1;
  uVar1 = *(undefined2 *)0x3c8;
  *(undefined2 *)(param_1 + 0x29a) = *(undefined2 *)0x3c6;
  *(undefined2 *)(param_1 + 0x29c) = uVar1;
  uVar1 = *(undefined2 *)0x3c8;
  *(undefined2 *)(param_1 + 0x29e) = *(undefined2 *)0x3c6;
  *(undefined2 *)(param_1 + 0x2a0) = uVar1;
  uVar1 = *(undefined2 *)0x3fc;
  *(undefined2 *)(param_1 + 0x2a2) = *(undefined2 *)0x3fa;
  *(undefined2 *)(param_1 + 0x2a4) = uVar1;
  uVar1 = *(undefined2 *)0x400;
  *(undefined2 *)(param_1 + 0x2a6) = *(undefined2 *)0x3fe;
  *(undefined2 *)(param_1 + 0x2a8) = uVar1;
  uVar1 = *(undefined2 *)0x404;
  *(undefined2 *)(param_1 + 700) = *(undefined2 *)0x402;
  *(undefined2 *)(param_1 + 0x2be) = uVar1;
  uVar1 = *(undefined2 *)0x408;
  *(undefined2 *)(param_1 + 0x2c0) = *(undefined2 *)0x406;
  *(undefined2 *)(param_1 + 0x2c2) = uVar1;
  uVar1 = *(undefined2 *)0x40c;
  *(undefined2 *)(param_1 + 0x2c4) = *(undefined2 *)0x40a;
  *(undefined2 *)(param_1 + 0x2c6) = uVar1;
  uVar1 = *(undefined2 *)0x410;
  *(undefined2 *)(param_1 + 0x2c8) = *(undefined2 *)0x40e;
  *(undefined2 *)(param_1 + 0x2ca) = uVar1;
  uVar1 = *(undefined2 *)0x414;
  *(undefined2 *)(param_1 + 0x2cc) = *(undefined2 *)0x412;
  *(undefined2 *)(param_1 + 0x2ce) = uVar1;
  uVar1 = *(undefined2 *)0x418;
  *(undefined2 *)(param_1 + 0x2e2) = *(undefined2 *)0x416;
  *(undefined2 *)(param_1 + 0x2e4) = uVar1;
  uVar1 = *(undefined2 *)0x41c;
  *(undefined2 *)(param_1 + 0x2e6) = *(undefined2 *)0x41a;
  *(undefined2 *)(param_1 + 0x2e8) = uVar1;
  uVar1 = *(undefined2 *)0x420;
  *(undefined2 *)(param_1 + 0x2ea) = *(undefined2 *)0x41e;
  *(undefined2 *)(param_1 + 0x2ec) = uVar1;
  uVar1 = *(undefined2 *)0x424;
  *(undefined2 *)(param_1 + 0x2ee) = *(undefined2 *)0x422;
  *(undefined2 *)(param_1 + 0x2f0) = uVar1;
  uVar1 = *(undefined2 *)0x428;
  *(undefined2 *)(param_1 + 0x2f2) = *(undefined2 *)0x426;
  *(undefined2 *)(param_1 + 0x2f4) = uVar1;
  uVar1 = *(undefined2 *)0x3c0;
  *(undefined2 *)(param_1 + 0x308) = *(undefined2 *)0x3be;
  *(undefined2 *)(param_1 + 0x30a) = uVar1;
  uVar1 = *(undefined2 *)0x42c;
  *(undefined2 *)(param_1 + 0x30c) = *(undefined2 *)0x42a;
  *(undefined2 *)(param_1 + 0x30e) = uVar1;
  uVar1 = *(undefined2 *)0x430;
  *(undefined2 *)(param_1 + 0x310) = *(undefined2 *)0x42e;
  *(undefined2 *)(param_1 + 0x312) = uVar1;
  uVar1 = *(undefined2 *)0x434;
  *(undefined2 *)(param_1 + 0x314) = *(undefined2 *)0x432;
  *(undefined2 *)(param_1 + 0x316) = uVar1;
  uVar1 = *(undefined2 *)0x438;
  *(undefined2 *)(param_1 + 0x318) = *(undefined2 *)0x436;
  *(undefined2 *)(param_1 + 0x31a) = uVar1;
  uVar1 = *(undefined2 *)0x43c;
  *(undefined2 *)(param_1 + 0x32e) = *(undefined2 *)0x43a;
  *(undefined2 *)(param_1 + 0x330) = uVar1;
  uVar1 = *(undefined2 *)0x440;
  *(undefined2 *)(param_1 + 0x332) = *(undefined2 *)0x43e;
  *(undefined2 *)(param_1 + 0x334) = uVar1;
  uVar1 = *(undefined2 *)0x444;
  *(undefined2 *)(param_1 + 0x336) = *(undefined2 *)0x442;
  *(undefined2 *)(param_1 + 0x338) = uVar1;
  uVar1 = *(undefined2 *)0x448;
  *(undefined2 *)(param_1 + 0x33a) = *(undefined2 *)0x446;
  *(undefined2 *)(param_1 + 0x33c) = uVar1;
  uVar1 = *(undefined2 *)0x44c;
  *(undefined2 *)(param_1 + 0x33e) = *(undefined2 *)0x44a;
  *(undefined2 *)(param_1 + 0x340) = uVar1;
  uVar1 = *(undefined2 *)0x450;
  *(undefined2 *)(param_1 + 0x354) = *(undefined2 *)0x44e;
  *(undefined2 *)(param_1 + 0x356) = uVar1;
  uVar1 = *(undefined2 *)0x454;
  *(undefined2 *)(param_1 + 0x358) = *(undefined2 *)0x452;
  *(undefined2 *)(param_1 + 0x35a) = uVar1;
  uVar1 = *(undefined2 *)0x458;
  *(undefined2 *)(param_1 + 0x35c) = *(undefined2 *)0x456;
  *(undefined2 *)(param_1 + 0x35e) = uVar1;
  uVar1 = *(undefined2 *)0x45c;
  *(undefined2 *)(param_1 + 0x360) = *(undefined2 *)0x45a;
  *(undefined2 *)(param_1 + 0x362) = uVar1;
  uVar1 = *(undefined2 *)0x460;
  *(undefined2 *)(param_1 + 0x364) = *(undefined2 *)0x45e;
  *(undefined2 *)(param_1 + 0x366) = uVar1;
  uVar1 = *(undefined2 *)0x450;
  *(undefined2 *)(param_1 + 0x37a) = *(undefined2 *)0x44e;
  *(undefined2 *)(param_1 + 0x37c) = uVar1;
  uVar1 = *(undefined2 *)0x454;
  *(undefined2 *)(param_1 + 0x37e) = *(undefined2 *)0x452;
  *(undefined2 *)(param_1 + 0x380) = uVar1;
  uVar1 = *(undefined2 *)0x458;
  *(undefined2 *)(param_1 + 0x382) = *(undefined2 *)0x456;
  *(undefined2 *)(param_1 + 900) = uVar1;
  uVar1 = *(undefined2 *)0x45c;
  *(undefined2 *)(param_1 + 0x386) = *(undefined2 *)0x45a;
  *(undefined2 *)(param_1 + 0x388) = uVar1;
  uVar1 = *(undefined2 *)0x460;
  *(undefined2 *)(param_1 + 0x38a) = *(undefined2 *)0x45e;
  *(undefined2 *)(param_1 + 0x38c) = uVar1;
  return;
}


// ---- FUN_1000_9c78 @ 1000:9c78

void __cdecl16far FUN_1000_9c78(int param_1,undefined2 param_2)

{
  undefined2 uVar1;
  undefined2 unaff_SS;
  
  uVar1 = *(undefined2 *)0x3cc;
  *(undefined2 *)(param_1 + 0x3a0) = *(undefined2 *)0x3ca;
  *(undefined2 *)(param_1 + 0x3a2) = uVar1;
  uVar1 = *(undefined2 *)0x3cc;
  *(undefined2 *)(param_1 + 0x3a4) = *(undefined2 *)0x3ca;
  *(undefined2 *)(param_1 + 0x3a6) = uVar1;
  return;
}


// ---- FUN_1000_9cac @ 1000:9cac

void __cdecl16far FUN_1000_9cac(int param_1,undefined2 param_2)

{
  *(undefined1 *)(param_1 + 1) = 1;
  *(undefined1 *)(param_1 + 2) = 2;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}


// ---- FUN_1000_9cd4 @ 1000:9cd4

void __cdecl16far FUN_1000_9cd4(int param_1,undefined2 param_2)

{
  *(undefined1 *)(param_1 + 1) = 2;
  *(undefined1 *)(param_1 + 2) = 2;
  *(undefined1 *)(param_1 + 3) = 1;
  *(undefined1 *)(param_1 + 4) = 1;
  return;
}


// ---- FUN_1000_9cfc @ 1000:9cfc

void __cdecl16far FUN_1000_9cfc(undefined1 *param_1)

{
  *param_1 = 1;
  return;
}


// ---- FUN_1000_9d0e @ 1000:9d0e

void __cdecl16far FUN_1000_9d0e(undefined1 *param_1)

{
  *param_1 = 0;
  return;
}


// ---- FUN_1000_9d20 @ 1000:9d20

void __cdecl16far FUN_1000_9d20(int param_1,undefined2 param_2)

{
  undefined2 uVar1;
  undefined2 unaff_SS;
  
  uVar1 = *(undefined2 *)0x3cc;
  *(undefined2 *)(param_1 + 7) = *(undefined2 *)0x3ca;
  *(undefined2 *)(param_1 + 9) = uVar1;
  uVar1 = *(undefined2 *)0x464;
  *(undefined2 *)(param_1 + 0xb) = *(undefined2 *)0x462;
  *(undefined2 *)(param_1 + 0xd) = uVar1;
  return;
}


// ---- FUN_1000_9d50 @ 1000:9d50

void __cdecl16far FUN_1000_9d50(int param_1,undefined2 param_2)

{
  undefined2 uVar1;
  undefined2 unaff_SS;
  
  uVar1 = *(undefined2 *)0x3c8;
  *(undefined2 *)(param_1 + 0xf) = *(undefined2 *)0x3c6;
  *(undefined2 *)(param_1 + 0x11) = uVar1;
  uVar1 = *(undefined2 *)0x3c8;
  *(undefined2 *)(param_1 + 0x13) = *(undefined2 *)0x3c6;
  *(undefined2 *)(param_1 + 0x15) = uVar1;
  uVar1 = *(undefined2 *)0x3c8;
  *(undefined2 *)(param_1 + 0x17) = *(undefined2 *)0x3c6;
  *(undefined2 *)(param_1 + 0x19) = uVar1;
  uVar1 = *(undefined2 *)0x3c8;
  *(undefined2 *)(param_1 + 0x1b) = *(undefined2 *)0x3c6;
  *(undefined2 *)(param_1 + 0x1d) = uVar1;
  uVar1 = *(undefined2 *)0x3c8;
  *(undefined2 *)(param_1 + 0x1f) = *(undefined2 *)0x3c6;
  *(undefined2 *)(param_1 + 0x21) = uVar1;
  return;
}


// ---- FUN_1000_9dac @ 1000:9dac

void __cdecl16far FUN_1000_9dac(int param_1,undefined2 param_2)

{
  undefined2 uVar1;
  undefined2 unaff_SS;
  
  uVar1 = *(undefined2 *)0x3c8;
  *(undefined2 *)(param_1 + 0x23) = *(undefined2 *)0x3c6;
  *(undefined2 *)(param_1 + 0x25) = uVar1;
  *(undefined2 *)(param_1 + 0x29) = 0;
  *(undefined2 *)(param_1 + 0x27) = 0;
  return;
}


// ---- FUN_1000_9dd6 @ 1000:9dd6

void __cdecl16far FUN_1000_9dd6(undefined2 *param_1,undefined2 param_2)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 unaff_SS;
  
  uVar2 = *(undefined2 *)0x468;
  *(undefined2 *)((int)param_1 + 0x2b) = *(undefined2 *)0x466;
  *(undefined2 *)((int)param_1 + 0x2d) = uVar2;
  uVar2 = *(undefined2 *)0x46c;
  *(undefined2 *)((int)param_1 + 0x2f) = *(undefined2 *)0x46a;
  *(undefined2 *)((int)param_1 + 0x31) = uVar2;
  uVar2 = *(undefined2 *)0x470;
  *(undefined2 *)((int)param_1 + 0x33) = *(undefined2 *)0x46e;
  *(undefined2 *)((int)param_1 + 0x35) = uVar2;
  uVar2 = *(undefined2 *)0x474;
  *(undefined2 *)((int)param_1 + 0x37) = *(undefined2 *)0x472;
  *(undefined2 *)((int)param_1 + 0x39) = uVar2;
  uVar2 = *(undefined2 *)0x478;
  *(undefined2 *)((int)param_1 + 0x3b) = *(undefined2 *)0x476;
  *(undefined2 *)((int)param_1 + 0x3d) = uVar2;
  iVar3 = 0;
  do {
    uVar2 = *(undefined2 *)0x3c8;
    param_1[iVar3 * 2 + 0x20] = *(undefined2 *)0x3c6;
    param_1[iVar3 * 2 + 0x21] = uVar2;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 5);
  uVar2 = param_1[1];
  cVar1 = *(char *)(param_1 + 2);
  param_1[cVar1 * 2 + 0x20] = *param_1;
  param_1[cVar1 * 2 + 0x21] = uVar2;
  uVar2 = *(undefined2 *)0x3c8;
  *param_1 = *(undefined2 *)0x3c6;
  param_1[1] = uVar2;
  *(undefined1 *)((int)param_1 + 0x3f) = 0;
  return;
}


// ---- FUN_1000_9e88 @ 1000:9e88

void __cdecl16far FUN_1000_9e88(int param_1,undefined2 param_2)

{
  *(undefined1 *)(param_1 + 0x54) = 2;
  *(undefined1 *)(param_1 + 0x55) = 0;
  return;
}


// ---- FUN_1000_9ea6 @ 1000:9ea6

void __cdecl16far FUN_1000_9ea6(int param_1,undefined2 param_2)

{
  undefined2 uVar1;
  undefined2 unaff_SS;
  
  uVar1 = *(undefined2 *)0x46c;
  *(undefined2 *)(param_1 + 0x56) = *(undefined2 *)0x46a;
  *(undefined2 *)(param_1 + 0x58) = uVar1;
  uVar1 = *(undefined2 *)0x47c;
  *(undefined2 *)(param_1 + 0x5a) = *(undefined2 *)0x47a;
  *(undefined2 *)(param_1 + 0x5c) = uVar1;
  uVar1 = *(undefined2 *)0x480;
  *(undefined2 *)(param_1 + 0x5e) = *(undefined2 *)0x47e;
  *(undefined2 *)(param_1 + 0x60) = uVar1;
  uVar1 = *(undefined2 *)0x484;
  *(undefined2 *)(param_1 + 0x62) = *(undefined2 *)0x482;
  *(undefined2 *)(param_1 + 100) = uVar1;
  uVar1 = *(undefined2 *)0x488;
  *(undefined2 *)(param_1 + 0x66) = *(undefined2 *)0x486;
  *(undefined2 *)(param_1 + 0x68) = uVar1;
  uVar1 = *(undefined2 *)0x48c;
  *(undefined2 *)(param_1 + 0x6a) = *(undefined2 *)0x48a;
  *(undefined2 *)(param_1 + 0x6c) = uVar1;
  return;
}


// ---- FUN_1000_9f12 @ 1000:9f12

void __cdecl16far FUN_1000_9f12(undefined4 param_1)

{
  *(undefined1 *)((int)param_1 + 3) = 0;
  return;
}


// ---- FUN_1000_9f26 @ 1000:9f26

void __cdecl16far FUN_1000_9f26(int param_1,undefined2 param_2)

{
  *(undefined1 *)(param_1 + 4) = 3;
  *(undefined1 *)(param_1 + 5) = 3;
  *(undefined1 *)(param_1 + 6) = 3;
  *(undefined1 *)(param_1 + 7) = 3;
  *(undefined1 *)(param_1 + 8) = 3;
  return;
}


// ---- FUN_1000_9f50 @ 1000:9f50

void __cdecl16far FUN_1000_9f50(int param_1,undefined2 param_2)

{
  *(undefined1 *)(param_1 + 9) = 3;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  return;
}


// ---- FUN_1000_9f72 @ 1000:9f72

void __cdecl16far FUN_1000_9f72(undefined4 param_1,char param_2)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  if (((param_2 != '\x01') && (param_2 != '\x05')) && (param_2 != '\x06')) {
    *(undefined1 *)((int)param_1 + 0xb) = 0;
    return;
  }
  *(undefined1 *)((int)param_1 + 0xb) = 1;
  return;
}


// ---- FUN_1000_9fa2 @ 1000:9fa2

void __cdecl16far FUN_1000_9fa2(int param_1,undefined2 param_2)

{
  undefined2 uVar1;
  undefined2 unaff_SS;
  
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0xd) = 1;
  uVar1 = *(undefined2 *)0x490;
  *(undefined2 *)(param_1 + 0xe) = *(undefined2 *)0x48e;
  *(undefined2 *)(param_1 + 0x10) = uVar1;
  uVar1 = *(undefined2 *)0x474;
  *(undefined2 *)(param_1 + 0x12) = *(undefined2 *)0x472;
  *(undefined2 *)(param_1 + 0x14) = uVar1;
  return;
}


// ---- FATALEXIT @ 1020:0000

/* WARNING: Control flow encountered bad instruction data */

void FATALEXIT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETVERSION @ 1020:0004

/* WARNING: Control flow encountered bad instruction data */

void GETVERSION(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GLOBALALLOC @ 1020:0008

/* WARNING: Control flow encountered bad instruction data */

void GLOBALALLOC(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GLOBALREALLOC @ 1020:000c

/* WARNING: Control flow encountered bad instruction data */

void GLOBALREALLOC(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GLOBALLOCK @ 1020:0010

/* WARNING: Control flow encountered bad instruction data */

void GLOBALLOCK(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GLOBALSIZE @ 1020:0014

/* WARNING: Control flow encountered bad instruction data */

void GLOBALSIZE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LOCKSEGMENT @ 1020:0018

/* WARNING: Control flow encountered bad instruction data */

void LOCKSEGMENT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- WAITEVENT @ 1020:001c

/* WARNING: Control flow encountered bad instruction data */

void WAITEVENT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETMODULEFILENAME @ 1020:0020

/* WARNING: Control flow encountered bad instruction data */

void GETMODULEFILENAME(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- _LCLOSE @ 1020:0024

/* WARNING: Control flow encountered bad instruction data */

void _LCLOSE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- _LREAD @ 1020:0028

/* WARNING: Control flow encountered bad instruction data */

void _LREAD(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- _LCREAT @ 1020:002c

/* WARNING: Control flow encountered bad instruction data */

void _LCREAT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- _LLSEEK @ 1020:0030

/* WARNING: Control flow encountered bad instruction data */

void _LLSEEK(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- _LOPEN @ 1020:0034

/* WARNING: Control flow encountered bad instruction data */

void _LOPEN(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- _LWRITE @ 1020:0038

/* WARNING: Control flow encountered bad instruction data */

void _LWRITE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LSTRLEN @ 1020:003c

/* WARNING: Control flow encountered bad instruction data */

void LSTRLEN(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- INITTASK @ 1020:0040

/* WARNING: Control flow encountered bad instruction data */

void INITTASK(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DOS3CALL @ 1020:0044

/* WARNING: Control flow encountered bad instruction data */

void DOS3CALL(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- __AHSHIFT @ 1020:0048

/* WARNING: Control flow encountered bad instruction data */

void __AHSHIFT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- __AHINCR @ 1020:004c

/* WARNING: Control flow encountered bad instruction data */

void __AHINCR(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETDOSENVIRONMENT @ 1020:0050

/* WARNING: Control flow encountered bad instruction data */

void GETDOSENVIRONMENT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- FATALAPPEXIT @ 1020:0054

/* WARNING: Control flow encountered bad instruction data */

void FATALAPPEXIT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- __WINFLAGS @ 1020:0058

/* WARNING: Control flow encountered bad instruction data */

void __WINFLAGS(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SETBKCOLOR @ 1020:005c

/* WARNING: Control flow encountered bad instruction data */

void SETBKCOLOR(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- CREATEPEN @ 1020:0060

/* WARNING: Control flow encountered bad instruction data */

void CREATEPEN(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- CREATESOLIDBRUSH @ 1020:0064

/* WARNING: Control flow encountered bad instruction data */

void CREATESOLIDBRUSH(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DELETEOBJECT @ 1020:0068

/* WARNING: Control flow encountered bad instruction data */

void DELETEOBJECT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETSTOCKOBJECT @ 1020:006c

/* WARNING: Control flow encountered bad instruction data */

void GETSTOCKOBJECT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- MESSAGEBOX @ 1020:0070

/* WARNING: Control flow encountered bad instruction data */

void MESSAGEBOX(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- INITAPP @ 1020:0074

/* WARNING: Control flow encountered bad instruction data */

void INITAPP(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- POSTQUITMESSAGE @ 1020:0078

/* WARNING: Control flow encountered bad instruction data */

void POSTQUITMESSAGE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SETTIMER @ 1020:007c

/* WARNING: Control flow encountered bad instruction data */

void SETTIMER(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- KILLTIMER @ 1020:0080

/* WARNING: Control flow encountered bad instruction data */

void KILLTIMER(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETTICKCOUNT @ 1020:0084

/* WARNING: Control flow encountered bad instruction data */

void GETTICKCOUNT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETWINDOWRECT @ 1020:0088

/* WARNING: Control flow encountered bad instruction data */

void GETWINDOWRECT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SETWINDOWTEXT @ 1020:008c

/* WARNING: Control flow encountered bad instruction data */

void SETWINDOWTEXT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- CREATEWINDOW @ 1020:0090

/* WARNING: Control flow encountered bad instruction data */

void CREATEWINDOW(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SHOWWINDOW @ 1020:0094

/* WARNING: Control flow encountered bad instruction data */

void SHOWWINDOW(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- REGISTERCLASS @ 1020:0098

/* WARNING: Control flow encountered bad instruction data */

void REGISTERCLASS(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- MESSAGEBEEP @ 1020:009c

/* WARNING: Control flow encountered bad instruction data */

void MESSAGEBEEP(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DEFWINDOWPROC @ 1020:00a0

/* WARNING: Control flow encountered bad instruction data */

void DEFWINDOWPROC(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETMESSAGE @ 1020:00a4

/* WARNING: Control flow encountered bad instruction data */

void GETMESSAGE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- PEEKMESSAGE @ 1020:00a8

/* WARNING: Control flow encountered bad instruction data */

void PEEKMESSAGE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- TRANSLATEMESSAGE @ 1020:00ac

/* WARNING: Control flow encountered bad instruction data */

void TRANSLATEMESSAGE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DISPATCHMESSAGE @ 1020:00b0

/* WARNING: Control flow encountered bad instruction data */

void DISPATCHMESSAGE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- UPDATEWINDOW @ 1020:00b4

/* WARNING: Control flow encountered bad instruction data */

void UPDATEWINDOW(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LOADCURSOR @ 1020:00b8

/* WARNING: Control flow encountered bad instruction data */

void LOADCURSOR(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LOADICON @ 1020:00bc

/* WARNING: Control flow encountered bad instruction data */

void LOADICON(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETSYSTEMMETRICS @ 1020:00c0

/* WARNING: Control flow encountered bad instruction data */

void GETSYSTEMMETRICS(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SETWINDOWPOS @ 1020:00c4

/* WARNING: Control flow encountered bad instruction data */

void SETWINDOWPOS(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- UNREGISTERCLASS @ 1020:00c8

/* WARNING: Control flow encountered bad instruction data */

void UNREGISTERCLASS(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- _WSPRINTF @ 1020:00cc

/* WARNING: Control flow encountered bad instruction data */

void _WSPRINTF(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- __FPMATH @ 1020:00d0

/* WARNING: Control flow encountered bad instruction data */

void __FPMATH(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


