// Decompiled with Ghidra from sem_init.exe
// Format: New Executable (NE), image base 0000:0000

// ---- entry @ 1000:0018

void entry(void)

{
  code *pcVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  uint in_CX;
  undefined2 in_BX;
  undefined2 unaff_SI;
  undefined2 unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_CS;
  bool bVar5;
  undefined4 uVar6;
  undefined2 uVar7;
  
  do {
    uVar6 = INITTASK(unaff_CS,0);
    iVar2 = (int)uVar6;
    if (iVar2 != 0) {
      bVar5 = in_CX < 0xff00;
      in_CX = in_CX + 0x100;
      DAT_1008_00ec = unaff_ES;
      if (bVar5) {
        uVar7 = 0x4b;
        DAT_1008_00b6 = in_CX;
        DAT_1008_00b8 = unaff_SI;
        DAT_1008_00ba = unaff_DI;
        DAT_1008_00bc = in_BX;
        DAT_1008_00be = unaff_ES;
        DAT_1008_00c0 = (int)((ulong)uVar6 >> 0x10);
        uVar3 = GETVERSION(0x1058);
        DAT_1008_00ee = CONCAT11((char)uVar3,(char)((uint)uVar3 >> 8));
        if ((DAT_1000_0010 & 1) == 0) {
          pcVar1 = (code *)swi(0x21);
          DAT_1008_00f2 = (*pcVar1)();
        }
        else {
          uVar7 = 0x1000;
          DAT_1008_00f2 = DOS3CALL(0x1000);
        }
        DAT_1008_00f0 = CONCAT11((char)DAT_1008_00f2,(char)((uint)DAT_1008_00f2 >> 8));
        if ((DAT_1000_0010 & 1) == 0) {
          DAT_1008_00f5 = 0;
        }
        WAITEVENT(0x1000,0,uVar7);
        iVar4 = INITAPP(0x1058,DAT_1008_00ba);
        iVar2 = 0;
        if (iVar4 != 0) {
          FUN_1000_00d4();
          FUN_1000_028c();
          FUN_1000_040a();
          FUN_1000_07a4();
          uVar3 = FUN_1000_00b8(DAT_1008_0126,DAT_1008_0128,DAT_1008_012a);
          FUN_1000_01a1(uVar3);
          FUN_1000_0491();
          return;
        }
      }
    }
    unaff_CS = 0x1058;
    FUN_1000_01a8(CONCAT11((char)((uint)iVar2 >> 8),0xff));
  } while( true );
}


// ---- FUN_1000_00b8 @ 1000:00b8

void __cdecl16near FUN_1000_00b8(void)

{
  FUN_1000_0fce(DAT_1008_00c0,DAT_1008_00bc,DAT_1008_00be,DAT_1008_00b8,DAT_1008_00ba);
  return;
}


// ---- FUN_1000_00d4 @ 1000:00d4

void __cdecl16near FUN_1000_00d4(void)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  undefined2 in_BX;
  byte *pbVar7;
  byte *pbVar8;
  undefined2 unaff_ES;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 unaff_SS;
  bool bVar11;
  
  uVar9 = 0x1000;
  if ((DAT_1000_0010 & 1) == 0) {
    pcVar5 = (code *)swi(0x21);
    (*pcVar5)();
  }
  else {
    uVar9 = 0x1058;
    DOS3CALL(0x1000);
  }
  uVar10 = 0x1000;
  DAT_1008_00d8._0_2_ = in_BX;
  DAT_1008_00d8._2_2_ = unaff_ES;
  if ((DAT_1000_0010 & 1) == 0) {
    pcVar5 = (code *)swi(0x21);
    (*pcVar5)();
  }
  else {
    uVar9 = 0x1000;
    uVar10 = 0x1058;
    DOS3CALL(0x1000);
  }
  if (*(int *)&DAT_1008_0620 != 0) {
    bVar11 = false;
    (*(code *)*(undefined2 *)&DAT_1008_061e)(uVar10,uVar9);
    if (bVar11) {
      FUN_1000_0286();
      return;
    }
    (*(code *)*(undefined2 *)&DAT_1008_061e)(uVar10);
  }
  iVar4 = *(int *)0x2c;
  if (iVar4 != 0) {
    pbVar8 = (byte *)0x0;
    do {
      if (*pbVar8 == 0) break;
      iVar6 = 0xd;
      pbVar7 = (byte *)s__C_FILE_INFO__1008_00ca;
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
        pbVar7 = (byte *)0xfe;
        goto LAB_1000_0171;
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
LAB_1000_0185:
  FUN_1000_025d();
  FUN_1000_024e();
  FUN_1000_025d();
  return;
LAB_1000_0171:
  pbVar1 = pbVar8;
  pbVar2 = pbVar8 + 1;
  if (*pbVar1 < 0x41) goto LAB_1000_0185;
  pbVar8 = pbVar8 + 2;
  if (*pbVar2 < 0x41) goto LAB_1000_0185;
  pbVar3 = pbVar7;
  pbVar7 = pbVar7 + 1;
  *pbVar3 = *pbVar2 + 0xbf | (*pbVar1 + 0xbf) * '\x10';
  goto LAB_1000_0171;
}


// ---- FUN_1000_01a1 @ 1000:01a1

void FUN_1000_01a1(void)

{
  FUN_1000_01c2();
  return;
}


// ---- FUN_1000_01a8 @ 1000:01a8

void FUN_1000_01a8(void)

{
  FUN_1000_01c2();
  return;
}


// ---- FUN_1000_01c2 @ 1000:01c2

void __cdecl16near FUN_1000_01c2(void)

{
  code *pcVar1;
  undefined2 in_CX;
  int unaff_BP;
  undefined2 unaff_SS;
  char cVar2;
  
  DAT_1008_0133 = (undefined1)((uint)in_CX >> 8);
  if ((char)in_CX == '\0') {
    FUN_1000_024e();
    FUN_1000_025d();
    FUN_1000_024e();
    FUN_1000_07a4(*(undefined2 *)(unaff_BP + 4));
  }
  cVar2 = (char)((uint)in_CX >> 8);
  FUN_1000_024e();
  FUN_1000_025d();
  FUN_1000_0225();
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


// ---- FUN_1000_0225 @ 1000:0225

void __cdecl16near FUN_1000_0225(void)

{
  code *pcVar1;
  
  if (DAT_1008_0620 != 0) {
    (*DAT_1008_061e)();
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


// ---- FUN_1000_024e @ 1000:024e

void __cdecl16near FUN_1000_024e(void)

{
  int *unaff_SI;
  int *unaff_DI;
  
  while (unaff_SI < unaff_DI) {
    unaff_DI = unaff_DI + -1;
    if ((code *)*unaff_DI != (code *)0x0) {
      (*(code *)*unaff_DI)();
    }
  }
  return;
}


// ---- FUN_1000_025d @ 1000:025d

void __cdecl16near FUN_1000_025d(void)

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


// ---- FUN_1000_0270 @ 1000:0270

void __cdecl16near FUN_1000_0270(void)

{
  FUN_1000_04fb(0xfc);
  FUN_1000_04fb(0xff);
  return;
}


// ---- FUN_1000_0286 @ 1000:0286

void FUN_1000_0286(void)

{
  FUN_1000_0491();
  return;
}


// ---- FUN_1000_028c @ 1000:028c

/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_1000_028c(void)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined2 *puVar7;
  char *pcVar8;
  char *pcVar9;
  int iVar10;
  char *pcVar11;
  undefined2 uVar12;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 uVar13;
  undefined4 uVar14;
  undefined2 in_stack_00000000;
  
  DAT_1008_0136 = in_stack_00000000;
  uVar14 = FUN_1000_052c();
  iVar6 = DAT_1008_00ba;
  DAT_1008_012e = (undefined2)((ulong)uVar14 >> 0x10);
  DAT_1008_012c = (int)uVar14;
  iVar3 = GETMODULEFILENAME(unaff_CS,0x104,uVar14);
  *(undefined1 *)(iVar6 + iVar3) = 0;
  iVar6 = 1;
  iVar3 = 1;
  pcVar8 = (char *)0x81;
LAB_1000_02c6:
  do {
    do {
      pcVar1 = pcVar8;
      pcVar8 = pcVar8 + 1;
      cVar2 = *pcVar1;
    } while (cVar2 == ' ');
  } while (cVar2 == '\t');
  if ((cVar2 != '\r') && (cVar2 != '\0')) {
    iVar3 = iVar3 + 1;
    do {
      pcVar8 = pcVar8 + -1;
LAB_1000_02d9:
      pcVar1 = pcVar8;
      pcVar8 = pcVar8 + 1;
      cVar2 = *pcVar1;
      if ((cVar2 == ' ') || (cVar2 == '\t')) goto LAB_1000_02c6;
      if ((cVar2 == '\r') || (cVar2 == '\0')) break;
      if (cVar2 == '\"') {
LAB_1000_0312:
        do {
          while( true ) {
            while( true ) {
              pcVar1 = pcVar8;
              pcVar8 = pcVar8 + 1;
              cVar2 = *pcVar1;
              if ((cVar2 == '\r') || (cVar2 == '\0')) goto LAB_1000_0342;
              if (cVar2 == '\"') goto LAB_1000_02d9;
              if (cVar2 == '\\') break;
              iVar6 = iVar6 + 1;
            }
            uVar4 = 0;
            do {
              pcVar11 = pcVar8;
              uVar4 = uVar4 + 1;
              pcVar8 = pcVar11 + 1;
            } while (*pcVar11 == '\\');
            if (*pcVar11 == '\"') break;
            iVar6 = iVar6 + uVar4;
            pcVar8 = pcVar11;
          }
          iVar6 = iVar6 + (uVar4 >> 1) + (uint)((uVar4 & 1) != 0);
        } while ((uVar4 & 1) != 0);
        goto LAB_1000_02d9;
      }
      if (cVar2 != '\\') {
        iVar6 = iVar6 + 1;
        goto LAB_1000_02d9;
      }
      uVar4 = 0;
      do {
        uVar4 = uVar4 + 1;
        pcVar1 = pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (*pcVar1 == '\\');
      if (*pcVar1 == '\"') {
        iVar6 = iVar6 + (uVar4 >> 1) + (uint)((uVar4 & 1) != 0);
        if ((uVar4 & 1) == 0) goto LAB_1000_0312;
        goto LAB_1000_02d9;
      }
      iVar6 = iVar6 + uVar4;
    } while( true );
  }
LAB_1000_0342:
  *(int *)&DAT_1008_0126 = iVar3;
  iVar10 = (iVar3 + 1) * 2;
  iVar6 = -(iVar6 + iVar3 + iVar10 + 1U & 0xfffe);
  *(int *)0x128 = (int)&stack0x0000 + iVar6;
  pcVar11 = &stack0x0000 + iVar10 + iVar6;
  *(undefined2 *)(&stack0xfffe + iVar6) = unaff_SS;
  uVar12 = *(undefined2 *)(&stack0xfffe + iVar6);
  *(int *)(&stack0x0000 + iVar6) = (int)*(undefined4 *)&DAT_1008_012c;
  puVar7 = (undefined2 *)(&stack0x0002 + iVar6);
  uVar13 = *(undefined2 *)&DAT_1008_00ec;
  pcVar8 = (char *)0x81;
LAB_1000_0376:
  do {
    do {
      pcVar1 = pcVar8;
      pcVar8 = pcVar8 + 1;
      cVar2 = *pcVar1;
    } while (cVar2 == ' ');
  } while (cVar2 == '\t');
  if ((cVar2 == '\r') || (cVar2 == '\0')) {
LAB_1000_03ff:
    *(undefined2 *)(&stack0xfffe + iVar6) = unaff_SS;
    uVar13 = *(undefined2 *)(&stack0xfffe + iVar6);
    *puVar7 = 0;
                    /* WARNING: Could not recover jumptable at 0x10000405. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*(undefined2 *)&DAT_1008_0136)();
    return;
  }
  *puVar7 = pcVar11;
  puVar7 = puVar7 + 1;
  do {
    pcVar8 = pcVar8 + -1;
LAB_1000_038d:
    pcVar1 = pcVar8;
    pcVar8 = pcVar8 + 1;
    cVar2 = *pcVar1;
    if ((cVar2 == ' ') || (cVar2 == '\t')) {
      pcVar1 = pcVar11;
      pcVar11 = pcVar11 + 1;
      *pcVar1 = '\0';
      goto LAB_1000_0376;
    }
    if ((cVar2 == '\r') || (cVar2 == '\0')) {
LAB_1000_03fc:
      *pcVar11 = '\0';
      goto LAB_1000_03ff;
    }
    pcVar9 = pcVar8;
    if (cVar2 == '\"') {
LAB_1000_03c9:
      while( true ) {
        pcVar8 = pcVar9 + 1;
        cVar2 = *pcVar9;
        if ((cVar2 == '\r') || (cVar2 == '\0')) goto LAB_1000_03fc;
        if (cVar2 == '\"') break;
        if (cVar2 == '\\') {
          uVar4 = 0;
          do {
            pcVar9 = pcVar8;
            uVar4 = uVar4 + 1;
            pcVar8 = pcVar9 + 1;
          } while (*pcVar9 == '\\');
          if (*pcVar9 == '\"') {
            for (uVar5 = uVar4 >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
              pcVar1 = pcVar11;
              pcVar11 = pcVar11 + 1;
              *pcVar1 = '\\';
            }
            if ((uVar4 & 1) == 0) break;
            pcVar1 = pcVar11;
            pcVar11 = pcVar11 + 1;
            *pcVar1 = '\"';
            pcVar9 = pcVar8;
          }
          else {
            for (; uVar4 != 0; uVar4 = uVar4 - 1) {
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
      goto LAB_1000_038d;
    }
    if (cVar2 != '\\') {
      pcVar1 = pcVar11;
      pcVar11 = pcVar11 + 1;
      *pcVar1 = cVar2;
      goto LAB_1000_038d;
    }
    uVar4 = 0;
    do {
      uVar4 = uVar4 + 1;
      pcVar1 = pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (*pcVar1 == '\\');
    if (*pcVar1 == '\"') {
      for (uVar5 = uVar4 >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
        pcVar1 = pcVar11;
        pcVar11 = pcVar11 + 1;
        *pcVar1 = '\\';
      }
      pcVar9 = pcVar8;
      if ((uVar4 & 1) == 0) goto LAB_1000_03c9;
      pcVar1 = pcVar11;
      pcVar11 = pcVar11 + 1;
      *pcVar1 = '\"';
      goto LAB_1000_038d;
    }
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      pcVar1 = pcVar11;
      pcVar11 = pcVar11 + 1;
      *pcVar1 = '\\';
    }
  } while( true );
}


// ---- FUN_1000_040a @ 1000:040a

void __cdecl16near FUN_1000_040a(void)

{
  int *piVar1;
  char *pcVar2;
  int *piVar3;
  char cVar4;
  undefined2 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  char *pcVar11;
  int *piVar12;
  undefined2 unaff_SS;
  bool bVar13;
  undefined4 uVar14;
  
  uVar14 = GETDOSENVIRONMENT();
  iVar7 = (int)((ulong)uVar14 >> 0x10);
  if ((int)uVar14 != 0) {
    iVar7 = 0;
  }
  iVar8 = 0;
  pcVar11 = (char *)0x0;
  iVar6 = -1;
  if (iVar7 != 0) {
    cVar4 = *(char *)0x0;
    while (cVar4 != '\0') {
      do {
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar2 = pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (*pcVar2 != '\0');
      iVar8 = iVar8 + 1;
      pcVar2 = pcVar11;
      pcVar11 = pcVar11 + 1;
      cVar4 = *pcVar2;
    }
  }
  pcVar11 = (char *)FUN_1000_052c();
  puVar5 = (undefined2 *)FUN_1000_052c();
  piVar9 = (int *)0x0;
  DAT_1008_012a = puVar5;
  do {
    if (iVar8 == 0) {
      *puVar5 = 0;
      return;
    }
    bVar13 = *piVar9 == *(int *)s__C_FILE_INFO__1008_00ca;
    if (bVar13) {
      piVar12 = (int *)s__C_FILE_INFO__1008_00ca;
      iVar6 = 6;
      piVar10 = piVar9;
      do {
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        piVar3 = piVar12;
        piVar12 = piVar12 + 1;
        piVar1 = piVar10;
        piVar10 = piVar10 + 1;
        bVar13 = *piVar1 == *piVar3;
      } while (bVar13);
      if (!bVar13) goto LAB_1000_0479;
    }
    else {
LAB_1000_0479:
      *puVar5 = pcVar11;
      puVar5 = puVar5 + 1;
    }
    do {
      piVar1 = piVar9;
      piVar9 = (int *)((int)piVar9 + 1);
      iVar6 = *piVar1;
      pcVar2 = pcVar11;
      pcVar11 = pcVar11 + 1;
      *pcVar2 = (char)iVar6;
    } while ((char)iVar6 != '\0');
    iVar8 = iVar8 + -1;
  } while( true );
}


// ---- FUN_1000_0491 @ 1000:0491

int * FUN_1000_0491(void)

{
  int *piVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  char *pcVar7;
  undefined2 unaff_CS;
  
  FUN_1000_0270();
  FUN_1000_04fb();
  pcVar3 = (char *)FUN_1000_04d0();
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
  FATALAPPEXIT(unaff_CS,pcVar3,0x1008);
  FATALEXIT(0x1058,0xff);
  piVar5 = (int *)&DAT_1008_0632;
  do {
    piVar1 = piVar5;
    piVar5 = piVar5 + 1;
    piVar6 = piVar5;
    if ((*piVar1 == 0) || (piVar6 = (int *)0x0, *piVar1 == -1)) {
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


// ---- FUN_1000_04d0 @ 1000:04d0

int * FUN_1000_04d0(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  piVar3 = (int *)&DAT_1008_0632;
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


// ---- FUN_1000_04fb @ 1000:04fb

void FUN_1000_04fb(undefined2 param_1)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  undefined2 unaff_ES;
  
  if (DAT_1008_013e != 0) {
    pcVar2 = (char *)FUN_1000_04d0(param_1);
    if (pcVar2 != (char *)0x0) {
      iVar3 = -1;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar1 = pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (*pcVar1 != '\0');
      FUN_1000_07a9();
    }
  }
  return;
}


// ---- FUN_1000_052c @ 1000:052c

void __cdecl16near FUN_1000_052c(void)

{
  undefined2 uVar1;
  int iVar2;
  
  uVar1 = DAT_1008_0138;
  LOCK();
  DAT_1008_0138 = 0x1000;
  UNLOCK();
  iVar2 = FUN_1000_07b0();
  DAT_1008_0138 = uVar1;
  if (iVar2 != 0) {
    return;
  }
  FUN_1000_0491();
  return;
}


// ---- FUN_1000_066a @ 1000:066a

int __cdecl16near FUN_1000_066a(char *param_1)

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


// ---- FUN_1000_0686 @ 1000:0686

void __cdecl16near FUN_1000_0686(void)

{
  uint in_CX;
  uint uVar1;
  
  for (uVar1 = in_CX & 0xff; uVar1 != 0; uVar1 = uVar1 - 1) {
  }
  return;
}


// ---- FUN_1000_0692 @ 1000:0692

void FUN_1000_0692(undefined2 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1000_0686();
  *param_1 = (int)uVar1;
  param_1[1] = (int)((ulong)uVar1 >> 0x10);
  return;
}


// ---- FUN_1000_06ae @ 1000:06ae

char * __cdecl16far FUN_1000_06ae(char *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  for (pcVar2 = (char *)param_1; cVar1 = *pcVar2, cVar1 != '\0'; pcVar2 = pcVar2 + 1) {
    if ((byte)(cVar1 + 0x9fU) < 0x1a) {
      *pcVar2 = cVar1 + -0x20;
    }
  }
  return (char *)param_1;
}


// ---- FUN_1000_06d2 @ 1000:06d2

int __cdecl16far FUN_1000_06d2(byte *param_1,char *param_2)

{
  byte *pbVar1;
  char *pcVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  byte *pbVar7;
  char *pcVar8;
  byte *pbVar9;
  undefined2 uVar10;
  bool bVar11;
  bool bVar12;
  
  pbVar7 = (byte *)param_1;
  uVar10 = (undefined2)((ulong)param_2 >> 0x10);
  pcVar8 = (char *)param_2;
  iVar4 = 0;
  uVar5 = 0xffff;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar2 = pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (*pcVar2 != '\0');
  pcVar6 = (char *)~uVar5;
  bVar11 = pcVar8 < pcVar6;
  pbVar9 = (byte *)(pcVar8 + -(int)pcVar6);
  bVar12 = pbVar9 == (byte *)0x0;
  do {
    if (pcVar6 == (char *)0x0) break;
    pcVar6 = pcVar6 + -1;
    pbVar3 = pbVar9;
    pbVar9 = pbVar9 + 1;
    pbVar1 = pbVar7;
    pbVar7 = pbVar7 + 1;
    bVar11 = *pbVar1 < *pbVar3;
    bVar12 = *pbVar1 == *pbVar3;
  } while (bVar12);
  if (!bVar12) {
    iVar4 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
  }
  return iVar4;
}


// ---- FUN_1000_06fc @ 1000:06fc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * __cdecl16far FUN_1000_06fc(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  undefined2 unaff_SS;
  byte local_22 [32];
  
  pbVar5 = local_22;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    pbVar2 = pbVar5;
    pbVar5 = pbVar5 + 2;
    pbVar2[0] = 0;
    pbVar2[1] = 0;
  }
  pbVar5 = (byte *)param_2;
  while( true ) {
    pbVar2 = pbVar5;
    pbVar5 = pbVar5 + 1;
    bVar1 = *pbVar2;
    if (bVar1 == 0) break;
    local_22[bVar1 >> 3] = local_22[bVar1 >> 3] | '\x01' << (bVar1 & 7);
  }
  iVar4 = (int)((ulong)param_1 >> 0x10);
  pbVar5 = (byte *)param_1;
  if (iVar4 == 0 && (byte *)param_1 == (byte *)0x0) {
    iVar4 = (int)((ulong)_DAT_1008_013a >> 0x10);
    pbVar5 = (byte *)_DAT_1008_013a;
  }
  do {
    DAT_1008_013a = pbVar5;
    bVar1 = *DAT_1008_013a;
    if (bVar1 == 0) {
      _DAT_1008_013a = (byte *)CONCAT22(iVar4,DAT_1008_013a);
      return (byte *)0x0;
    }
    pbVar5 = DAT_1008_013a + 1;
  } while (('\x01' << (bVar1 & 7) & local_22[bVar1 >> 3]) != 0);
  do {
    pbVar3 = pbVar5;
    bVar1 = *pbVar3;
    DAT_1008_013c = iVar4;
    if (bVar1 == 0) goto LAB_1000_0794;
    pbVar5 = pbVar3 + 1;
  } while (('\x01' << (bVar1 & 7) & local_22[bVar1 >> 3]) == 0);
  *pbVar3 = 0;
  pbVar3 = pbVar3 + 1;
LAB_1000_0794:
  pbVar5 = DAT_1008_013a;
  LOCK();
  _DAT_1008_013a = (byte *)CONCAT22(DAT_1008_013c,pbVar3);
  UNLOCK();
  return pbVar5;
}


// ---- FUN_1000_07a4 @ 1000:07a4

void __cdecl16near FUN_1000_07a4(void)

{
  return;
}


// ---- FUN_1000_07a9 @ 1000:07a9

void FUN_1000_07a9(void)

{
  FUN_1000_0491();
  return;
}


// ---- FUN_1000_07b0 @ 1000:07b0

int __cdecl16near FUN_1000_07b0(int param_1)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined2 uVar2;
  
  if (param_1 == 0) {
    param_1 = 1;
  }
  while( true ) {
    LOCKSEGMENT(unaff_CS,0xffff);
    uVar2 = 0x20;
    iVar1 = LOCALALLOC(0x1058,param_1);
    UNLOCKSEGMENT(0x1058,0xffff,uVar2);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (DAT_1008_0140 == (code *)0x0) break;
    unaff_CS = 0x1000;
    iVar1 = (*DAT_1008_0140)(param_1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 0;
}


// ---- FUN_1000_0804 @ 1000:0804

void __cdecl16near FUN_1000_0804(int param_1)

{
  if (param_1 != 0) {
    LOCALFREE();
  }
  return;
}


// ---- FUN_1000_081a @ 1000:081a

undefined2 __cdecl16near FUN_1000_081a(int param_1,int param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  
  if (param_1 == 0) {
    uVar1 = FUN_1000_07b0(param_2);
  }
  else if (param_2 == 0) {
    FUN_1000_0804(param_1);
    uVar1 = 0;
  }
  else {
    uVar2 = 0xffff;
    LOCKSEGMENT();
    if (param_2 == 0) {
      param_2 = 1;
    }
    uVar1 = LOCALREALLOC(0x1058,0x62,param_2);
    UNLOCKSEGMENT(0x1058,0xffff,param_1,uVar2);
  }
  return uVar1;
}


// ---- FUN_1000_087e @ 1000:087e

void __cdecl16near FUN_1000_087e(void)

{
  LOCALSIZE();
  return;
}


// ---- DDE_CONTROL @ 1000:088e

undefined2 __stdcall16far DDE_CONTROL(void)

{
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  int in_stack_00000010;
  int in_stack_00000012;
  int in_stack_00000014;
  int in_stack_00000016;
  int in_stack_0000001c;
  int in_stack_0000001e;
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  if (in_stack_0000001e == 0x1062) {
    if ((in_stack_00000014 == *(int *)&DAT_1008_8942) &&
       (in_stack_00000016 == *(int *)&DAT_1008_8944)) {
      return 1;
    }
    return 0;
  }
  if (in_stack_0000001e != 0x20b0) {
    if (in_stack_0000001e != 0x20e2) {
      if ((in_stack_0000001e == -0x7f3e) && (*(int *)&DAT_1008_8940 == 4)) {
        *(undefined2 *)&DAT_1008_8940 = 5;
      }
      return 0;
    }
    uVar3 = 0;
    uVar2 = 0x10;
    iVar1 = 0;
    in_stack_00000012 = 0;
    goto LAB_1000_0970;
  }
  if (in_stack_00000014 != *(int *)&DAT_1008_8942) {
    return 0;
  }
  if (in_stack_00000016 != *(int *)&DAT_1008_8944) {
    return 0;
  }
  if (in_stack_00000010 != *(int *)&DAT_1008_8946) {
    return 0;
  }
  if (in_stack_00000012 != *(int *)&DAT_1008_8948) {
    return 0;
  }
  if (in_stack_0000001c != 1) {
    return 0;
  }
  uVar2 = unaff_CS;
  switch(*(undefined2 *)&DAT_1008_8940) {
  case 1:
    uVar2 = 0x1000;
    break;
  case 2:
    uVar2 = 0x1000;
    break;
  case 3:
switchD_1000_090d_caseD_3:
    uVar2 = 0x1000;
    break;
  case 4:
  case 5:
    if (*(int *)&DAT_1008_894c == 0) goto switchD_1000_090d_caseD_3;
  case 0:
    uVar2 = 0x1000;
  }
  unaff_CS = 0x1058;
  _WSPRINTF(uVar2,0x77c);
  uVar3 = 0x77c;
  iVar1 = FUN_1000_066a(0x77c,0x77c);
  iVar1 = iVar1 + 1;
  uVar2 = 0;
  in_stack_0000001c = in_stack_00000010;
LAB_1000_0970:
  uVar2 = Ordinal_14(unaff_CS,0,in_stack_0000001c,in_stack_00000012,0,0,iVar1,uVar2,uVar3);
  return uVar2;
}


// ---- FUN_1000_09d6 @ 1000:09d6

int __cdecl16near FUN_1000_09d6(void)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined2 uVar4;
  uint uVar5;
  
  uVar5 = DAT_1008_8918;
  uVar4 = DAT_1008_893c;
  DAT_1008_8932 = GLOBALLOCK();
  DAT_1008_892e = GLOBALLOCK(0x1058,DAT_1008_893e,uVar4);
  if (DAT_1008_0012 == 1) {
    iVar3 = FUN_1000_0bfa();
    if (iVar3 == 0) {
      iVar3 = 0;
      uVar1 = DAT_1008_892e;
      goto LAB_1000_0af3;
    }
    Ordinal_101(0x1058,0xa4,0,8,0,0x6040);
    uVar5 = 0;
    do {
      FUN_1000_0ee4(uVar5,*(undefined1 *)((int)DAT_1008_8932 + uVar5));
      uVar5 = uVar5 + 1;
    } while (uVar5 < 0x800);
    FUN_1000_0ee4(3,0x3f);
    Ordinal_101(0x1058,0xa5,0,8,0,0x6040);
    DAT_1008_0012 = 2;
  }
  else if (DAT_1008_0012 == 2) {
    uVar1 = DAT_1008_892e;
    if (DAT_1008_0014 == 0) {
      cVar2 = FUN_1000_0f32(0x401);
      if (cVar2 != '\x02') {
        return 2;
      }
      DAT_1008_0014 = 1;
      uVar1 = DAT_1008_892e;
    }
    while( true ) {
      DAT_1008_892e._2_2_ = (undefined2)((ulong)uVar1 >> 0x10);
      DAT_1008_892e._0_2_ = (int)uVar1;
      DAT_1008_892e = uVar1;
      if (uVar5 <= DAT_1008_0010) break;
      if (DAT_1008_0010 < 0x1000) {
        iVar3 = (int)DAT_1008_8932 + DAT_1008_0010;
        uVar4 = DAT_1008_8932._2_2_;
      }
      else {
        iVar3 = CONCAT11((char)((int)DAT_1008_892e + DAT_1008_0010 >> 8) + -0x80,
                         (char)((int)DAT_1008_892e + DAT_1008_0010));
        uVar4 = DAT_1008_892e._2_2_;
      }
      FUN_1000_0f5e(DAT_1008_0010 >> 2,iVar3,uVar4);
      DAT_1008_0010 = CONCAT11(DAT_1008_0010._1_1_ + '\x04',(undefined1)DAT_1008_0010);
      uVar1 = DAT_1008_892e;
      if (DAT_1008_0010 == 0x1000) {
        DAT_1008_0010 = 0x8000;
      }
    }
    FUN_1000_0d5e();
    DAT_1008_0012 = 3;
  }
  else if (DAT_1008_0012 == 3) {
    DAT_1008_0012 = 4;
  }
  GLOBALUNLOCK(0x1058,DAT_1008_893c);
  GLOBALUNLOCK(0x1058,DAT_1008_893e);
  iVar3 = DAT_1008_0012;
  uVar1 = DAT_1008_892e;
LAB_1000_0af3:
  DAT_1008_892e._2_2_ = (undefined2)((ulong)uVar1 >> 0x10);
  DAT_1008_892e._0_2_ = (int)uVar1;
  return iVar3;
}


// ---- FUN_1000_0af6 @ 1000:0af6

void __cdecl16near FUN_1000_0af6(char *param_1)

{
  char *pcVar1;
  undefined1 uVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  long lVar6;
  undefined4 local_10;
  uint local_6;
  int local_4;
  
  while (pcVar4 = (char *)param_1, *param_1 != '\0') {
    pcVar3 = (char *)local_10;
    pcVar5 = (char *)&DAT_1008_07a4;
    for (; *pcVar4 != '\n'; pcVar4 = pcVar4 + 1) {
      if (*pcVar4 == '/') {
        local_10 = (char *)0x10080000;
        pcVar3 = pcVar5;
      }
      *pcVar5 = *pcVar4;
      pcVar5 = pcVar5 + 1;
    }
    local_10 = (char *)CONCAT22(local_10._2_2_,pcVar3);
    pcVar1 = local_10;
    *pcVar5 = '\0';
    FUN_1000_06ae(0x7a4,0x1008);
    local_10 = (char *)CONCAT22(local_10._2_2_,pcVar3 + 1);
    *pcVar1 = '\0';
    param_1 = (char *)CONCAT22(param_1._2_2_,pcVar4 + 1);
    lVar6 = FUN_1000_0cf8(0x7a4,0x1008);
    uVar2 = FUN_1000_0cf8(pcVar3 + 1,local_10._2_2_);
    if (lVar6 == 0xd9f) {
      lVar6 = 0xd9f;
    }
    local_4 = (int)((ulong)lVar6 >> 0x10);
    local_6 = (uint)lVar6;
    if ((local_4 == 0) && (local_6 < 0x8000)) {
      *(undefined1 *)(local_6 + (int)DAT_1008_8932) = uVar2;
      if (DAT_1008_8936 < local_6) {
        DAT_1008_8936 = local_6;
      }
    }
    else {
      *(undefined1 *)((int)DAT_1008_892e + local_6 + -0x8000) = uVar2;
      if ((local_4 != 0) || (DAT_1008_8918 < local_6)) {
        DAT_1008_8918 = local_6;
      }
    }
  }
  return;
}


// ---- FUN_1000_0bfa @ 1000:0bfa

undefined2 __cdecl16near FUN_1000_0bfa(void)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  bool bVar2;
  long lVar3;
  int iVar4;
  undefined2 uVar5;
  undefined1 local_98 [136];
  int local_10;
  uint local_e;
  undefined2 local_c;
  uint local_a;
  int local_8;
  uint local_6;
  int local_4;
  
  DAT_1008_8936 = 0;
  DAT_1008_8918 = 0;
  GETWINDOWSDIRECTORY(unaff_CS,0x4f,0x7f4);
  iVar1 = LSTRLEN(0x1058,0x7f4);
  if (*(char *)(iVar1 + 0x7f3) != '\\') {
    LSTRCAT(0x1058,0x17c,0x1008,0x7f4);
  }
  LSTRCAT(0x1058,0x17e,0x1008,0x7f4);
  uVar5 = 0x1008;
  iVar1 = OPENFILE(0x1058,0,local_98,unaff_SS,0x7f4);
  local_10 = iVar1;
  if (iVar1 == -1) {
    return 0;
  }
  while( true ) {
    iVar4 = iVar1;
    local_a = _LREAD(0x1058,0x4000,0x844,0x1008);
    local_8 = 0;
    if (local_a == 0) break;
    local_4 = 0;
    local_c = 0;
    local_e = local_a;
    local_6 = local_a;
    if (local_a == 0x4000) {
      for (; local_4 != 0 || local_6 != 0; local_4 = local_4 - (uint)bVar2) {
        if (*(char *)(local_6 + 0x843) == '\n') {
          lVar3 = _LLSEEK(0x1058,1,local_6 + 0xc000,local_4 - (uint)(local_6 < 0x4000));
          if (lVar3 == -1) {
            return 0;
          }
          break;
        }
        bVar2 = local_6 == 0;
        local_6 = local_6 - 1;
      }
    }
    *(undefined1 *)(local_6 + 0x844) = 0;
    iVar4 = 0x1008;
    FUN_1000_0af6(0x844,0x1008,uVar5);
    if ((local_a != 0x4000) || (local_8 != 0)) break;
  }
  _LCLOSE(0x1058,iVar1,iVar4);
  return 1;
}


// ---- FUN_1000_0cf8 @ 1000:0cf8

undefined4 __cdecl16near FUN_1000_0cf8(char *param_1,undefined2 param_2)

{
  uint uVar1;
  bool bVar2;
  uint local_6;
  int local_4;
  
  local_4 = 0;
  local_6 = 0;
  do {
    if (*param_1 == '\0') {
      return CONCAT22(local_4,local_6);
    }
    if ((*param_1 < '0') || ('9' < *param_1)) {
      if (('@' < *param_1) && (*param_1 < 'G')) {
        FUN_1000_0692(&local_6,4);
        uVar1 = (int)*param_1 - 0x37;
        goto LAB_1000_0d47;
      }
    }
    else {
      FUN_1000_0692(&local_6,4);
      uVar1 = (int)*param_1 - 0x30;
LAB_1000_0d47:
      bVar2 = CARRY2(local_6,uVar1);
      local_6 = local_6 + uVar1;
      local_4 = local_4 + ((int)uVar1 >> 0xf) + (uint)bVar2;
    }
    param_1 = param_1 + 1;
  } while( true );
}


// ---- FUN_1000_0d5e @ 1000:0d5e

void __cdecl16near FUN_1000_0d5e(void)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  int extraout_DX;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined4 uVar5;
  undefined2 uVar6;
  int iVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined1 local_9a [136];
  int local_12;
  int local_e;
  char local_b;
  undefined2 local_a;
  undefined2 local_8;
  char *local_6;
  int local_4;
  
  GETWINDOWSDIRECTORY(unaff_CS,0x4f,0x4846);
  iVar1 = LSTRLEN(0x1058,0x4846);
  if (*(char *)(iVar1 + 0x4845) != '\\') {
    LSTRCAT(0x1058,0x17c,0x1008,0x4846);
  }
  uVar9 = 0x1008;
  LSTRCAT(0x1058,0x188,0x1008,0x4846);
  uVar8 = 0x1008;
  local_12 = OPENFILE(0x1058,0,local_9a,unaff_SS,0x4846);
  if (local_12 != -1) {
    iVar1 = local_12;
    uVar5 = _LREAD(0x1058,0x4000,0x4896,0x1008);
    local_4 = (int)((ulong)uVar5 >> 0x10);
    iVar7 = (int)uVar5;
    if (iVar7 != 0) {
      *(undefined1 *)(iVar7 + 0x4896) = 0;
      *(undefined1 *)(iVar7 + 0x4897) = 0;
      pcVar2 = (char *)FUN_1000_06fc(0x4896,0x1008,0x196,0x1008,iVar1,uVar8,uVar9);
      local_6 = pcVar2;
      for (; (local_4 != 0 || pcVar2 != (char *)0x0 && (*pcVar2 != '\x1a'));
          pcVar2 = (char *)FUN_1000_06fc(pcVar2 + iVar4 + 1,local_4,iVar1,uVar9,uVar6,iVar7)) {
        uVar8 = 0x1008;
        LSTRCPY(0x1000,pcVar2,local_4,0x8896);
        iVar1 = extraout_DX;
        FUN_1000_06ae(0x8896,0x1008,uVar8);
        iVar7 = 0x1008;
        uVar8 = 0x1000;
        pcVar3 = (char *)FUN_1000_06fc(0x8896,0x1008,0x19a,0x1008);
        local_e = iVar1;
        if (*pcVar3 != ';') {
          if (*pcVar3 == 'A') {
            iVar7 = 0xeb2;
            FUN_1000_0f52();
          }
          else {
            uVar5 = FUN_1000_0cf8(pcVar3,iVar1);
            iVar4 = (int)((ulong)uVar5 >> 0x10);
            local_8 = (undefined2)uVar5;
            iVar7 = 0x1008;
            uVar8 = 0x1000;
            iVar1 = FUN_1000_06fc(0,0,0x19e,0x1008);
            local_e = iVar4;
            if (iVar4 == 0 && iVar1 == 0) {
              local_b = '\0';
            }
            else {
              uVar8 = 0x1058;
              iVar7 = LSTRLEN(0x1000,iVar1);
              local_b = *(char *)(iVar7 + iVar1 + -1);
              iVar7 = iVar4;
            }
            local_a = FUN_1000_0cf8(iVar1,local_e,iVar7);
            if (local_b == 'W') {
              FUN_1000_0f0c(local_8,local_a);
            }
            else {
              FUN_1000_0ee4(local_8,local_a);
            }
          }
        }
        uVar6 = 0x1008;
        uVar9 = 0x196;
        iVar1 = local_4;
        iVar4 = LSTRLEN(uVar8,pcVar2);
      }
      _LCLOSE(0x1000,local_12);
    }
  }
  return;
}


// ---- FUN_1000_0ee4 @ 1000:0ee4

void __cdecl16near FUN_1000_0ee4(void)

{
  FUN_1000_0686();
  Ordinal_101();
  return;
}


// ---- FUN_1000_0f0c @ 1000:0f0c

void __cdecl16near FUN_1000_0f0c(int param_1,undefined2 param_2)

{
  undefined1 uVar1;
  
  FUN_1000_0ee4(param_1,param_2);
  uVar1 = (undefined1)((uint)param_2 >> 8);
  FUN_1000_0ee4(param_1 + 1,CONCAT11(uVar1,uVar1));
  return;
}


// ---- FUN_1000_0f32 @ 1000:0f32

void __cdecl16near FUN_1000_0f32(void)

{
  FUN_1000_0686();
  Ordinal_100();
  return;
}


// ---- FUN_1000_0f52 @ 1000:0f52

void __cdecl16near FUN_1000_0f52(void)

{
  char cVar1;
  
  do {
    cVar1 = FUN_1000_0f32(0x400);
  } while (cVar1 != '\0');
  return;
}


// ---- FUN_1000_0f5e @ 1000:0f5e

void __cdecl16near FUN_1000_0f5e(undefined2 param_1,int param_2,undefined2 param_3)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < 0x400; uVar1 = uVar1 + 1) {
    FUN_1000_0ee4(uVar1,*(undefined1 *)(param_2 + uVar1));
  }
  FUN_1000_0ee4(0x402,0);
  FUN_1000_0ee4(0x403,1);
  FUN_1000_0ee4(0x404,1);
  FUN_1000_0f0c(0x405,param_1);
  FUN_1000_0f0c(0x407,0x100);
  FUN_1000_0ee4(0x400,1);
  FUN_1000_0f52();
  return;
}


// ---- FUN_1000_0fce @ 1000:0fce

bool FUN_1000_0fce(void)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined4 uVar2;
  int in_stack_00000008;
  undefined2 in_stack_0000000a;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 *puVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 in_stack_0000ffc2;
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
  undefined2 local_16;
  undefined1 local_14 [18];
  
  DAT_1008_8940 = 0xffff;
  DAT_1008_894c = 0;
  if (in_stack_00000008 == 0) {
    LOADSTRING(unaff_CS,0x14,0x891a,0x1008,0);
    LOADSTRING(0x1058,0x28,0x88f0,0x1008,1);
    LSTRCAT(0x1058,0x1a2,0x1008,0x88f0);
    local_2e = 0;
    local_2c = 0x132a;
    local_2a = 0x1000;
    local_28 = 0;
    local_26 = 0;
    local_24 = in_stack_0000000a;
    local_22 = LOADICON(0x1058,0x1a6,0x1008);
    local_20 = LOADCURSOR(0x1058,0x7f02,0);
    local_1e = 0;
    local_1a = 0;
    local_1c = 0;
    local_18 = 0x891a;
    local_16 = 0x1008;
    unaff_CS = 0x1058;
    in_stack_0000ffc2 = unaff_SS;
    REGISTERCLASS(0x1058,&local_2e);
  }
  uVar8 = 0;
  uVar6 = 0;
  DAT_1008_894a =
       CREATEWINDOW(unaff_CS,0,0,in_stack_0000000a,0,0,0x8000,0x8000,0x8000,0x8000,0,0xcf,0x88f0,
                    0x1008,0x891a,0x1008,in_stack_0000ffc2);
  if (in_stack_00000008 == 0) {
    uVar3 = GETSYSTEMMENU(0x1058,0);
    REMOVEMENU(0x1058,0x400,0);
    REMOVEMENU(0x1058,0x400,1);
    uVar4 = uVar3;
    REMOVEMENU(0x1058,0x400,1);
    uVar8 = uVar3;
    REMOVEMENU(0x1058,0x400,1);
    uVar6 = uVar3;
    REMOVEMENU(0x1058,0x400,1);
    REMOVEMENU(0x1058,0x400,1);
    DRAWMENUBAR(0x1058,DAT_1008_894a,uVar3,uVar6,uVar8,uVar4);
    DAT_1008_893c = GLOBALALLOC(0x1058,0x8000,0);
    uVar4 = 2;
    DAT_1008_893e = GLOBALALLOC(0x1058,0x8000,0);
    if ((DAT_1008_893c == 0) || (DAT_1008_893e == 0)) {
      uVar8 = 0x1008;
      uVar6 = 0x1f0;
      goto LAB_1000_1316;
    }
    uVar3 = 0x1008;
    DAT_1008_8d50 = REGISTERWINDOWMESSAGE(0x1058,0x21a);
    if (DAT_1008_8d50 == 0) {
      uVar6 = 0x1008;
      uVar8 = DAT_1008_894a;
LAB_1000_1151:
      uVar4 = 0x22c;
      uVar3 = 0x10;
      goto LAB_1000_131c;
    }
    uVar8 = 0x1008;
    DAT_1008_8d52 = REGISTERWINDOWMESSAGE(0x1058,0x26a);
    uVar6 = DAT_1008_894a;
    if (DAT_1008_8d52 == 0) goto LAB_1000_1151;
    DAT_1008_893a = 0;
    DAT_1008_8938 = 0;
    uVar7 = 0x1008;
    puVar5 = (undefined2 *)&DAT_1008_8938;
    uVar6 = 0x1000;
    DAT_1008_8d4e = in_stack_0000000a;
    uVar2 = MAKEPROCINSTANCE(0x1058,in_stack_0000000a,0x88e);
    iVar1 = Ordinal_2(0x1058,0,0,0x8020,0,uVar2,uVar6,puVar5,uVar7,uVar8,uVar3,uVar4);
    if (iVar1 == 0) {
      uVar2 = Ordinal_21(0x1058,0x3ec,0x2b6,0x1008,DAT_1008_8938,DAT_1008_893a);
      DAT_1008_8d56 = (undefined2)((ulong)uVar2 >> 0x10);
      DAT_1008_8d54 = (undefined2)uVar2;
      uVar2 = Ordinal_21(0x1058,0x3ec,0x2c6,0x1008,DAT_1008_8938,DAT_1008_893a);
      DAT_1008_8944 = (undefined2)((ulong)uVar2 >> 0x10);
      DAT_1008_8942 = (undefined2)uVar2;
      uVar2 = Ordinal_21(0x1058,0x3ec,0x2d6,0x1008,DAT_1008_8938,DAT_1008_893a);
      DAT_1008_8948 = (undefined2)((ulong)uVar2 >> 0x10);
      DAT_1008_8946 = (undefined2)uVar2;
      Ordinal_27(0x1058,1,0,0,DAT_1008_8d54,DAT_1008_8d56,DAT_1008_8938,DAT_1008_893a);
      uVar8 = 0x1008;
      uVar6 = 0x2de;
      iVar1 = FINDWINDOW(0x1058,0,0,0x2de);
      if (iVar1 == 0) {
        uVar6 = 0x1008;
        WINEXEC(0x1058,8,0x2ec);
      }
      uVar4 = DAT_1008_894a;
      iVar1 = SETTIMER(0x1058,0,0,0xfa,1);
      uVar3 = DAT_1008_894a;
      if (iVar1 == 0) {
        MESSAGEBOX(0x1058,0x30,0x22c,0x1008,0x2f8,0x1008);
      }
      else {
        SHOWWINDOW(0x1058,7);
        uVar7 = DAT_1008_894a;
        UPDATEWINDOW(0x1058,DAT_1008_894a,uVar3,uVar4,uVar6,uVar8);
        while (iVar1 = GETMESSAGE(0x1058,0,0,0,local_14,unaff_SS,uVar7), iVar1 != 0) {
          uVar7 = unaff_SS;
          TRANSLATEMESSAGE(0x1058,local_14);
          DISPATCHMESSAGE(0x1058,local_14);
        }
      }
      Ordinal_27(0x1058,2,0,0,0,0,DAT_1008_8938,DAT_1008_893a,uVar3);
      Ordinal_22(0x1058,DAT_1008_8d54,DAT_1008_8d56,DAT_1008_8938,DAT_1008_893a);
      Ordinal_22(0x1058,DAT_1008_8942,DAT_1008_8944,DAT_1008_8938,DAT_1008_893a);
      Ordinal_22(0x1058,DAT_1008_8946,DAT_1008_8948,DAT_1008_8938,DAT_1008_893a);
      Ordinal_3(0x1058,DAT_1008_8938,DAT_1008_893a);
      GLOBALFREE(0x1058,DAT_1008_893c);
      GLOBALFREE(0x1058,DAT_1008_893e);
      return DAT_1008_894c == 0;
    }
    uVar8 = 0x1008;
    uVar6 = 0x29c;
    uVar4 = 0x22c;
  }
  else {
LAB_1000_1316:
    uVar4 = 0x1b8;
  }
  uVar3 = 0x30;
LAB_1000_131c:
  MESSAGEBOX(0x1058,uVar3,uVar4,0x1008,uVar6,uVar8);
  return false;
}


// ---- WNDPROC @ 1000:132a

undefined2 __stdcall16far
WNDPROC(undefined2 *param_1,undefined2 param_2,undefined2 param_3,int param_4,undefined2 param_5)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 uVar2;
  
  uVar2 = 0x1008;
  if (param_4 == 2) {
LAB_1000_1442:
    POSTQUITMESSAGE(unaff_CS,0,uVar2);
    return 0;
  }
  if (param_4 == 0x10) {
    MESSAGEBOX(unaff_CS,0x30,0x5d6,unaff_SS,0x5ea,unaff_SS);
    return 0;
  }
  if (param_4 == 0x13) {
    return 0;
  }
  if (param_4 != 0x113) {
    if (*(int *)&DAT_1008_8d50 == param_4) {
      if ((*(int *)&DAT_1008_8940 == 4) || (*(int *)&DAT_1008_8940 == 5)) {
        *param_1 = 1;
      }
      else {
        *param_1 = 0;
      }
    }
    else {
      if (*(int *)&DAT_1008_8d52 != param_4) {
        uVar2 = DEFWINDOWPROC(unaff_CS,param_1,param_2,param_3,param_4);
        return uVar2;
      }
      POSTQUITMESSAGE();
    }
    return 1;
  }
  switch(*(undefined2 *)&DAT_1008_8940) {
  case 0:
    FUN_1000_14b2(0x32e);
    *(undefined2 *)&DAT_1008_894c = 1;
    break;
  case 1:
    goto LAB_1000_1465;
  case 2:
LAB_1000_1465:
    uVar2 = 0x56a;
LAB_1000_1469:
    FUN_1000_14b2(uVar2);
    uVar2 = FUN_1000_09d6();
LAB_1000_13fc:
    *(undefined2 *)&DAT_1008_8940 = uVar2;
    break;
  case 3:
    uVar2 = 0x59c;
    goto LAB_1000_1469;
  case 4:
    FUN_1000_14b2(0x1a6);
    break;
  case 5:
    KILLTIMER(0x1000,1);
    SHOWWINDOW(0x1058,0);
    break;
  case 0xffff:
    FUN_1000_14b2(0x32e);
    iVar1 = Ordinal_2(0x1000);
    uVar2 = 1;
    if (iVar1 != 1) {
      *(undefined2 *)&DAT_1008_8940 = 0;
      if (iVar1 == -2) {
        uVar2 = 0x400;
      }
      else if (iVar1 == -1) {
        uVar2 = 0x340;
      }
      else {
        uVar2 = 0x4c0;
      }
      LSTRCPY(0x1058,uVar2,unaff_SS,0x894e);
      unaff_CS = 0x1058;
      MESSAGEBOX(0x1058,0x10,0x53e,unaff_SS,0x894e,unaff_SS);
      uVar2 = param_5;
      goto LAB_1000_1442;
    }
    goto LAB_1000_13fc;
  }
  return 0;
}


// ---- FUN_1000_14b2 @ 1000:14b2

void __cdecl16near
FUN_1000_14b2(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  iVar1 = FUN_1000_06d2(param_1,param_2,0x16,0x1008);
  if (iVar1 != 0) {
    uVar3 = DAT_1008_8d4e;
    uVar2 = LOADICON(0x1000,param_1,param_2);
    uVar3 = GETDC(0x1058,0,uVar3);
    uVar4 = SETMAPMODE(0x1058,1);
    GETWINDOWRECT(0x1058,(undefined2 *)&DAT_1008_88e6,0x1008);
    DRAWICON(0x1058,uVar2,DAT_1008_88e8 + 2,DAT_1008_88e6 + 2);
    SETMAPMODE(0x1058,uVar4);
    RELEASEDC(0x1058,uVar3);
  }
  uVar3 = 0x1000;
  iVar1 = FUN_1000_06d2(param_3,param_4,0x66,0x1008);
  if (iVar1 != 0) {
    uVar3 = 0x1058;
    SETWINDOWTEXT(0x1000,param_3,param_4,DAT_1008_894a);
  }
  LSTRCPY(uVar3,param_1,param_2,0x16);
  LSTRCPY(0x1058,param_3,param_4,0x66);
  return;
}


// ---- Ordinal_2 @ 1058:0000

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_100 @ 1058:0004

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_100(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_101 @ 1058:0008

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_101(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- FATALEXIT @ 1058:000c

/* WARNING: Control flow encountered bad instruction data */

void FATALEXIT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETVERSION @ 1058:0010

/* WARNING: Control flow encountered bad instruction data */

void GETVERSION(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LOCALALLOC @ 1058:0014

/* WARNING: Control flow encountered bad instruction data */

void LOCALALLOC(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LOCALREALLOC @ 1058:0018

/* WARNING: Control flow encountered bad instruction data */

void LOCALREALLOC(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LOCALFREE @ 1058:001c

/* WARNING: Control flow encountered bad instruction data */

void LOCALFREE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LOCALSIZE @ 1058:0020

/* WARNING: Control flow encountered bad instruction data */

void LOCALSIZE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GLOBALALLOC @ 1058:0024

/* WARNING: Control flow encountered bad instruction data */

void GLOBALALLOC(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GLOBALREALLOC @ 1058:0028

/* WARNING: Control flow encountered bad instruction data */

void GLOBALREALLOC(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GLOBALFREE @ 1058:002c

/* WARNING: Control flow encountered bad instruction data */

void GLOBALFREE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GLOBALLOCK @ 1058:0030

/* WARNING: Control flow encountered bad instruction data */

void GLOBALLOCK(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GLOBALUNLOCK @ 1058:0034

/* WARNING: Control flow encountered bad instruction data */

void GLOBALUNLOCK(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GLOBALSIZE @ 1058:0038

/* WARNING: Control flow encountered bad instruction data */

void GLOBALSIZE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LOCKSEGMENT @ 1058:003c

/* WARNING: Control flow encountered bad instruction data */

void LOCKSEGMENT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- UNLOCKSEGMENT @ 1058:0040

/* WARNING: Control flow encountered bad instruction data */

void UNLOCKSEGMENT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- WAITEVENT @ 1058:0044

/* WARNING: Control flow encountered bad instruction data */

void WAITEVENT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETMODULEFILENAME @ 1058:0048

/* WARNING: Control flow encountered bad instruction data */

void GETMODULEFILENAME(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- MAKEPROCINSTANCE @ 1058:004c

/* WARNING: Control flow encountered bad instruction data */

void MAKEPROCINSTANCE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- OPENFILE @ 1058:0050

/* WARNING: Control flow encountered bad instruction data */

void OPENFILE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- _LCLOSE @ 1058:0054

/* WARNING: Control flow encountered bad instruction data */

void _LCLOSE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- _LREAD @ 1058:0058

/* WARNING: Control flow encountered bad instruction data */

void _LREAD(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- _LLSEEK @ 1058:005c

/* WARNING: Control flow encountered bad instruction data */

void _LLSEEK(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LSTRCPY @ 1058:0060

/* WARNING: Control flow encountered bad instruction data */

void LSTRCPY(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LSTRCAT @ 1058:0064

/* WARNING: Control flow encountered bad instruction data */

void LSTRCAT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LSTRLEN @ 1058:0068

/* WARNING: Control flow encountered bad instruction data */

void LSTRLEN(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- INITTASK @ 1058:006c

/* WARNING: Control flow encountered bad instruction data */

void INITTASK(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DOS3CALL @ 1058:0070

/* WARNING: Control flow encountered bad instruction data */

void DOS3CALL(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETDOSENVIRONMENT @ 1058:0074

/* WARNING: Control flow encountered bad instruction data */

void GETDOSENVIRONMENT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETWINDOWSDIRECTORY @ 1058:0078

/* WARNING: Control flow encountered bad instruction data */

void GETWINDOWSDIRECTORY(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- FATALAPPEXIT @ 1058:007c

/* WARNING: Control flow encountered bad instruction data */

void FATALAPPEXIT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- WINEXEC @ 1058:0080

/* WARNING: Control flow encountered bad instruction data */

void WINEXEC(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- __WINFLAGS @ 1058:0084

/* WARNING: Control flow encountered bad instruction data */

void __WINFLAGS(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SETMAPMODE @ 1058:0088

/* WARNING: Control flow encountered bad instruction data */

void SETMAPMODE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- MESSAGEBOX @ 1058:008c

/* WARNING: Control flow encountered bad instruction data */

void MESSAGEBOX(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- INITAPP @ 1058:0090

/* WARNING: Control flow encountered bad instruction data */

void INITAPP(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- POSTQUITMESSAGE @ 1058:0094

/* WARNING: Control flow encountered bad instruction data */

void POSTQUITMESSAGE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SETTIMER @ 1058:0098

/* WARNING: Control flow encountered bad instruction data */

void SETTIMER(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- KILLTIMER @ 1058:009c

/* WARNING: Control flow encountered bad instruction data */

void KILLTIMER(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETWINDOWRECT @ 1058:00a0

/* WARNING: Control flow encountered bad instruction data */

void GETWINDOWRECT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SETWINDOWTEXT @ 1058:00a4

/* WARNING: Control flow encountered bad instruction data */

void SETWINDOWTEXT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- CREATEWINDOW @ 1058:00a8

/* WARNING: Control flow encountered bad instruction data */

void CREATEWINDOW(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SHOWWINDOW @ 1058:00ac

/* WARNING: Control flow encountered bad instruction data */

void SHOWWINDOW(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- FINDWINDOW @ 1058:00b0

/* WARNING: Control flow encountered bad instruction data */

void FINDWINDOW(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- REGISTERCLASS @ 1058:00b4

/* WARNING: Control flow encountered bad instruction data */

void REGISTERCLASS(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETDC @ 1058:00b8

/* WARNING: Control flow encountered bad instruction data */

void GETDC(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- RELEASEDC @ 1058:00bc

/* WARNING: Control flow encountered bad instruction data */

void RELEASEDC(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DRAWICON @ 1058:00c0

/* WARNING: Control flow encountered bad instruction data */

void DRAWICON(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DEFWINDOWPROC @ 1058:00c4

/* WARNING: Control flow encountered bad instruction data */

void DEFWINDOWPROC(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETMESSAGE @ 1058:00c8

/* WARNING: Control flow encountered bad instruction data */

void GETMESSAGE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- TRANSLATEMESSAGE @ 1058:00cc

/* WARNING: Control flow encountered bad instruction data */

void TRANSLATEMESSAGE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DISPATCHMESSAGE @ 1058:00d0

/* WARNING: Control flow encountered bad instruction data */

void DISPATCHMESSAGE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- REGISTERWINDOWMESSAGE @ 1058:00d4

/* WARNING: Control flow encountered bad instruction data */

void REGISTERWINDOWMESSAGE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- UPDATEWINDOW @ 1058:00d8

/* WARNING: Control flow encountered bad instruction data */

void UPDATEWINDOW(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETSYSTEMMENU @ 1058:00dc

/* WARNING: Control flow encountered bad instruction data */

void GETSYSTEMMENU(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DRAWMENUBAR @ 1058:00e0

/* WARNING: Control flow encountered bad instruction data */

void DRAWMENUBAR(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LOADCURSOR @ 1058:00e4

/* WARNING: Control flow encountered bad instruction data */

void LOADCURSOR(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LOADICON @ 1058:00e8

/* WARNING: Control flow encountered bad instruction data */

void LOADICON(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LOADSTRING @ 1058:00ec

/* WARNING: Control flow encountered bad instruction data */

void LOADSTRING(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- REMOVEMENU @ 1058:00f0

/* WARNING: Control flow encountered bad instruction data */

void REMOVEMENU(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- _WSPRINTF @ 1058:00f4

/* WARNING: Control flow encountered bad instruction data */

void _WSPRINTF(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_2 @ 1058:00f8

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_2(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_3 @ 1058:00fc

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_3(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_14 @ 1058:0100

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_14(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_21 @ 1058:0104

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_21(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_22 @ 1058:0108

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_22(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Ordinal_27 @ 1058:010c

/* WARNING: Control flow encountered bad instruction data */

void Ordinal_27(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


