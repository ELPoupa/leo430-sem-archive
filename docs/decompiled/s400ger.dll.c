// Decompiled with Ghidra from s400ger.dll
// Format: New Executable (NE), image base 0000:0000

// ---- FUN_1000_0000 @ 1000:0000

/* Title:  S400GER.exe
   Format: New Executable (NE) Windows
   CRC:    00000000
   
   Program Entry Point (CS:IP):   0001:008e
   Initial Stack Pointer (SS:SP): 0000:0000
   Auto Data Segment Index:       0002
   Initial Heap Size:             0200
   Initial Stack Size:            0000
   Minimum Code Swap Size:        0000
   
   Linker Version:  5.60
   Target OS:       Windows
   Windows Version: 3.10
   
   Program Flags:     01
           Single Data
   Application Flags: 83
           Windows P.M. API
           Library Module
   Other Flags:       08
    */

undefined2 __stdcall16far FUN_1000_0000(void)

{
  undefined2 in_stack_0000000c;
  
                    /* Segment:    1
                       Offset:     00000ba0
                       Length:     07e2
                       Min Alloc:  07e2
                       Flags:      0d50
                           Code
                           Moveable
                           Preload
                           Impure (Non-shareable)
                        */
  FUN_1000_0168();
  DAT_1008_0174 = in_stack_0000000c;
  return 1;
}


// ---- WEP @ 1000:0020

undefined2 __stdcall16far WEP(void)

{
  FUN_1000_0168();
  return 1;
}


// ---- entry @ 1000:008e

void __cdecl16far entry(void)

{
  code *pcVar1;
  int iVar2;
  int in_CX;
  undefined2 in_BX;
  undefined2 unaff_SI;
  undefined2 unaff_DI;
  undefined2 unaff_CS;
  undefined2 uVar3;
  undefined2 uVar4;
  
  DAT_1008_0014 = 0x1008;
  uVar3 = unaff_CS;
  DAT_1008_0012 = unaff_DI;
  DAT_1008_0016 = in_CX;
  DAT_1008_0018 = in_BX;
  DAT_1008_001a = unaff_SI;
  if (in_CX != 0) {
    uVar3 = 0x16b0;
    iVar2 = LOCALINIT(unaff_CS,in_CX,0);
    if (iVar2 == 0) {
      return;
    }
  }
  LOCKSEGMENT(uVar3,0xffff);
  uVar4 = 0xcc;
  uVar3 = GETVERSION(0x16b0);
  DAT_1008_003c = CONCAT11((char)uVar3,(char)((uint)uVar3 >> 8));
  if ((DAT_1000_004a & 1) == 0) {
    pcVar1 = (code *)swi(0x21);
    DAT_1008_0040 = (*pcVar1)();
  }
  else {
    uVar4 = 0x1000;
    DAT_1008_0040 = DOS3CALL(0x1000);
  }
  DAT_1008_003e = CONCAT11((char)DAT_1008_0040,(char)((uint)DAT_1008_0040 >> 8));
  if ((DAT_1000_004a & 1) == 0) {
    DAT_1008_0043 = 0;
  }
  FUN_1000_01ce(uVar4);
  FUN_1000_02d6();
  DAT_1008_001c = DAT_1008_001c + '\x01';
  FUN_1000_01a2(DAT_1008_005c,DAT_1008_005e,DAT_1008_0060,DAT_1008_0062,DAT_1008_0064);
  return;
}


// ---- FUN_1000_0130 @ 1000:0130

undefined2 __stdcall16far FUN_1000_0130(void)

{
  return 1;
}


// ---- FUN_1000_0168 @ 1000:0168

/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Unable to track spacebase fully for stack */

void __cdecl16far FUN_1000_0168(void)

{
  int in_AX;
  undefined1 *puVar1;
  uint uVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  undefined2 in_stack_00000000;
  undefined2 in_stack_00000002;
  
  puVar1 = (undefined1 *)(in_AX + 1U & 0xfffe);
  if ((puVar1 < &stack0x0004) && (uVar2 = -((int)puVar1 - (int)&stack0x0004), *(uint *)0xa <= uVar2)
     ) {
    if (uVar2 < *(uint *)0xc) {
      *(uint *)0xc = uVar2;
    }
    *(undefined2 *)(uVar2 - 2) = in_stack_00000002;
    *(undefined2 *)(uVar2 - 4) = in_stack_00000000;
    return;
  }
  uVar3 = FUN_1000_03ba();
  if (*(int *)0x26 != -1) {
                    /* WARNING: Could not recover jumptable at 0x10000198. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulong)*(uint *)0x26)();
    return;
  }
  FUN_1000_0378();
  return;
}


// ---- FUN_1000_01a2 @ 1000:01a2

void __cdecl16far FUN_1000_01a2(void)

{
  FUN_1000_0000(DAT_1008_0018,DAT_1008_001a,DAT_1008_0016,DAT_1008_0014,DAT_1008_0012);
  return;
}


// ---- FUN_1000_01ce @ 1000:01ce

void __cdecl16far FUN_1000_01ce(void)

{
  int unaff_BP;
  int iVar1;
  bool bVar2;
  undefined2 uVar3;
  
  iVar1 = unaff_BP + 1;
  uVar3 = 0x1008;
  if (DAT_1008_008a != 0) {
    bVar2 = false;
    (*DAT_1008_0088)();
    if (bVar2) {
      FUN_1000_0418();
      return;
    }
  }
  FUN_1000_029e(uVar3,iVar1);
  FUN_1000_029e();
  FUN_1000_029e();
  return;
}


// ---- FUN_1000_0216 @ 1000:0216

undefined2 __cdecl16far FUN_1000_0216(void)

{
  DAT_1008_006d = 1;
  FUN_1000_029e();
  FUN_1000_029e();
  FUN_1000_029e();
  FUN_1000_029e();
  FUN_1000_06c4();
  FUN_1000_0460();
  return 0x100;
}


// ---- FUN_1000_029e @ 1000:029e

void __cdecl16near FUN_1000_029e(void)

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


// ---- FUN_1000_02b2 @ 1000:02b2

void __cdecl16far FUN_1000_02b2(void)

{
  FUN_1000_0401(0xfc);
  FUN_1000_0401(0xff);
  return;
}


// ---- FUN_1000_02d6 @ 1000:02d6

void __cdecl16far FUN_1000_02d6(void)

{
  char cVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  undefined4 uVar10;
  char *pcVar11;
  undefined2 *puVar12;
  
  uVar10 = GETDOSENVIRONMENT();
  iVar4 = (int)((ulong)uVar10 >> 0x10);
  if ((int)uVar10 != 0) {
    iVar4 = 0;
  }
  iVar7 = 0;
  pcVar8 = (char *)0x0;
  iVar3 = -1;
  if (iVar4 != 0) {
    cVar1 = *(char *)0x0;
    while (cVar1 != '\0') {
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar11 = pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (*pcVar11 != '\0');
      iVar7 = iVar7 + 1;
      pcVar11 = pcVar8;
      pcVar8 = pcVar8 + 1;
      cVar1 = *pcVar11;
    }
  }
  pcVar11 = (char *)FUN_1000_041e();
  uVar5 = (undefined2)((ulong)pcVar11 >> 0x10);
  pcVar9 = (char *)pcVar11;
  puVar12 = (undefined2 *)FUN_1000_041e();
  uVar6 = (undefined2)((ulong)puVar12 >> 0x10);
  DAT_1008_0062 = (undefined2 *)puVar12;
  pcVar8 = (char *)0x0;
  for (; DAT_1008_0064 = (undefined2)((ulong)puVar12 >> 0x10), puVar2 = (undefined2 *)puVar12,
      iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar2 = pcVar9;
    puVar2[1] = uVar5;
    do {
      pcVar11 = pcVar8;
      pcVar8 = pcVar8 + 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar9;
      pcVar9 = pcVar9 + 1;
      *pcVar11 = cVar1;
      puVar12 = (undefined2 *)CONCAT22(DAT_1008_0064,puVar2 + 2);
    } while (cVar1 != '\0');
  }
  *puVar2 = 0;
  puVar2[1] = 0;
  return;
}


// ---- FUN_1000_0378 @ 1000:0378

undefined2 FUN_1000_0378(void)

{
  char *pcVar1;
  undefined2 in_AX;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 uVar5;
  
  uVar5 = in_AX;
  FUN_1000_02b2();
  FUN_1000_0401(in_AX);
  pcVar2 = (char *)FUN_1000_03ca(uVar5);
  if (pcVar2 != (char *)0x0) {
    iVar3 = 9;
    if (*pcVar2 == 'M') {
      iVar3 = 0xf;
    }
    pcVar2 = pcVar2 + iVar3;
    iVar3 = 0x22;
    pcVar4 = pcVar2;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar1 = pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (*pcVar1 != '\r');
    pcVar4[-1] = '\0';
  }
  uVar5 = 0;
  FATALAPPEXIT(unaff_CS,pcVar2,0x1008);
  FATALEXIT(0x16b0,0xff,uVar5);
  if (___EXPORTEDSTUB != (code)0xb8) {
    return unaff_SS;
  }
  return uRam1000044d;
}


// ---- FUN_1000_03ba @ 1000:03ba

undefined2 __cdecl16far FUN_1000_03ba(void)

{
  undefined2 unaff_SS;
  
  if (___EXPORTEDSTUB != (code)0xb8) {
    return unaff_SS;
  }
  return uRam1000044d;
}


// ---- FUN_1000_03ca @ 1000:03ca

int * __stdcall16far FUN_1000_03ca(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  piVar3 = (int *)&DAT_1008_009c;
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


// ---- FUN_1000_0401 @ 1000:0401

undefined2 __stdcall16far FUN_1000_0401(void)

{
  return 0x1008;
}


// ---- FUN_1000_0418 @ 1000:0418

void FUN_1000_0418(void)

{
  FUN_1000_0378();
  return;
}


// ---- FUN_1000_041e @ 1000:041e

void __cdecl16near FUN_1000_041e(void)

{
  undefined2 uVar1;
  int iVar2;
  int in_DX;
  
  uVar1 = DAT_1008_0072;
  LOCK();
  DAT_1008_0072 = 0x1000;
  UNLOCK();
  iVar2 = FUN_1000_059b();
  DAT_1008_0072 = uVar1;
  if (in_DX != 0 || iVar2 != 0) {
    return;
  }
  FUN_1000_0378();
  return;
}


// ---- ___EXPORTEDSTUB @ 1000:044c

undefined2 __cdecl16far ___EXPORTEDSTUB(void)

{
  return 0;
}


// ---- FUN_1000_0460 @ 1000:0460

void __cdecl16near FUN_1000_0460(void)

{
  return;
}


// ---- FUN_1000_0462 @ 1000:0462

void __cdecl16near FUN_1000_0462(void)

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
    FUN_1000_0559();
    if ((*unaff_SI & 1) != 0) {
      in_CX = (in_CX - *unaff_SI) + -1;
    }
    uVar4 = *(uint *)(in_BX + 4);
    if (uVar4 != 0) {
      if (!CARRY2(in_CX + 2U,uVar4)) {
        uVar2 = FUN_1000_03ba();
        uVar4 = *(uint *)&DAT_1008_0072;
        if (uVar4 == 0x1000) goto LAB_1000_04b4;
        uVar5 = 0x8000;
        while (uVar4 <= uVar5) {
          uVar5 = uVar5 >> 1;
          if (uVar5 == 0) goto LAB_1000_04cd;
        }
        if (uVar5 < 8) goto LAB_1000_04cd;
        uVar4 = uVar5 << 1;
        goto LAB_1000_04b4;
      }
      uVar5 = 0xfff0;
      if (in_CX + 2U + uVar4 == 0) {
        while( true ) {
          bVar8 = false;
          iVar3 = FUN_1000_04f3();
          if (!bVar8) break;
          if (uVar5 == 0xfff0) {
            return;
          }
LAB_1000_04cd:
          uVar4 = 0x10;
LAB_1000_04b4:
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


// ---- FUN_1000_04f3 @ 1000:04f3

void __cdecl16near FUN_1000_04f3(void)

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
LAB_1000_054e:
    FUN_1000_0378();
    return;
  }
  iVar5 = *(int *)(in_BX + 6);
  uVar3 = 0;
  if (in_AX == 0) {
    if ((DAT_1000_004a & 0x10) != 0) {
      return;
    }
    uVar3 = 1;
  }
  uVar1 = 0x2002;
  if ((DAT_1000_004a & 1) == 0) {
    uVar1 = 0x2020;
  }
  iVar6 = iVar5;
  iVar2 = GLOBALREALLOC(0x1000,uVar1,in_AX,uVar3);
  if (iVar2 != 0) {
    if ((iVar2 != iVar5) || (lVar4 = GLOBALSIZE(0x16b0,iVar5,iVar6), lVar4 == 0))
    goto LAB_1000_054e;
    if ((*(byte *)(iVar5 + 2) & 4) != 0) {
      *(int *)(iVar5 + -2) = in_BX + -1;
    }
  }
  return;
}


// ---- FUN_1000_0559 @ 1000:0559

void __cdecl16near FUN_1000_0559(void)

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


// ---- FUN_1000_059b @ 1000:059b

undefined2 __cdecl16far FUN_1000_059b(uint param_1)

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
      if (*(int *)((int)(undefined4 *)&DAT_1008_0078 + 2) != 0) {
        pcVar4 = (code *)0x6d2;
        while( true ) {
          uVar3 = *(uint *)&DAT_1008_0082;
          uVar6 = (uint)((ulong)*(undefined4 *)&DAT_1008_007c >> 0x10);
          in_BX = (int)*(undefined4 *)&DAT_1008_007c;
          uVar10 = uVar6;
          do {
            do {
              unaff_CS = 0x1000;
              uVar9 = (*pcVar4)();
              if (!bVar7) {
                if (pcVar4 == (code *)0x6d2) goto LAB_1000_060c;
                goto LAB_1000_0609;
              }
              puVar1 = (undefined4 *)(in_BX + 0xe);
              in_BX = (int)*puVar1;
              bVar7 = uVar6 < uVar3;
              bVar8 = uVar6 != uVar3;
              uVar6 = (uint)((ulong)*puVar1 >> 0x10);
            } while (bVar8);
            uVar3 = *(uint *)((int)*(undefined4 *)&DAT_1008_007c + 0x14);
            uVar6 = (uint)((ulong)*(undefined4 *)&DAT_1008_0078 >> 0x10);
            in_BX = (int)*(undefined4 *)&DAT_1008_0078;
            bVar7 = uVar6 < uVar10;
            bVar8 = uVar6 != uVar10;
            uVar10 = uVar6;
          } while (bVar8);
          bVar7 = pcVar4 < (code *)0x462;
          if (pcVar4 == (code *)0x462) break;
          pcVar4 = (code *)0x462;
        }
      }
      FUN_1000_0642();
      if (!bVar7) {
LAB_1000_0609:
        uVar9 = FUN_1000_06d2();
LAB_1000_060c:
        *(undefined2 *)((int)(undefined4 *)&DAT_1008_007c + 2) = (int)((ulong)uVar9 >> 0x10);
        *(int *)&DAT_1008_007c = in_BX;
        return (int)uVar9;
      }
    }
    if (*(int *)&DAT_1008_0076 == 0 && *(int *)&DAT_1008_0074 == 0) {
      return 0;
    }
    iVar2 = (*(code *)*(undefined2 *)&DAT_1008_0074)(unaff_CS,param_1);
    if (iVar2 == 0) {
      return 0;
    }
  } while( true );
}


// ---- FUN_1000_0642 @ 1000:0642

void __cdecl16near FUN_1000_0642(void)

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
    if ((DAT_1000_004a & 0x10) != 0) {
      return;
    }
    iVar2 = 1;
  }
  uVar6 = 0;
  uVar7 = DAT_1000_004a;
  iVar1 = GLOBALALLOC(0x1000,uVar3,iVar2);
  if (iVar1 != 0) {
    if ((uVar6 & 1) != 0) {
      iVar2 = iVar1;
      uVar4 = GLOBALLOCK(0x16b0,iVar1,iVar1,uVar7);
      iVar1 = (int)((ulong)uVar4 >> 0x10);
      if (((int)uVar4 != 0) || (iVar1 == 0)) goto LAB_1000_06b9;
    }
    lVar5 = GLOBALSIZE(0x16b0,iVar1);
    if (lVar5 == 0) {
LAB_1000_06b9:
      FUN_1000_0378();
      return;
    }
    *(int *)0x6 = iVar2;
    *(undefined2 *)0x2 = *(undefined2 *)(unaff_DI + 0xc);
    FUN_1000_0778();
    FUN_1000_07ac();
  }
  return;
}


// ---- FUN_1000_06c4 @ 1000:06c4

void __cdecl16near FUN_1000_06c4(void)

{
  FUN_1000_074e();
  return;
}


// ---- FUN_1000_06d2 @ 1000:06d2

uint * __cdecl16near FUN_1000_06d2(void)

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
          if (CARRY2((uint)puVar1,uVar2)) goto LAB_1000_072b;
          puVar6 = (uint *)((int)puVar1 + uVar2) + 1;
          uVar3 = *(uint *)((int)puVar1 + uVar2);
          if ((uVar3 & 1) == 0) break;
          uVar3 = uVar3 + uVar2 + 2;
          *puVar7 = uVar3;
        }
      }
      if (puVar6 + -1 < puVar5) break;
      if (((uint)puVar5 & 1) != 0) goto LAB_1000_072b;
      puVar7 = (uint *)*(undefined2 *)(in_BX + 8);
      if ((uint *)*(undefined2 *)(in_BX + 10) == puVar7) goto LAB_1000_072b;
      puVar5 = (uint *)((int)*(undefined2 *)(in_BX + 10) + -1);
    }
    puVar7 = (uint *)((int)puVar6 + uVar3);
  } while (!CARRY2((uint)puVar6,uVar3));
LAB_1000_072b:
  puVar7 = (uint *)*(undefined2 *)(in_BX + 8);
  *(undefined2 *)(in_BX + 10) = puVar7;
  return puVar7;
}


// ---- FUN_1000_074e @ 1000:074e

void __cdecl16near FUN_1000_074e(void)

{
  undefined4 *puVar1;
  undefined4 *in_BX;
  int iVar2;
  undefined2 unaff_ES;
  int iVar3;
  undefined2 unaff_CS;
  int iVar4;
  
  iVar3 = (int)((ulong)*in_BX >> 0x10);
  iVar2 = (int)*in_BX;
  while (iVar3 != 0) {
    iVar4 = *(int *)(iVar2 + 6);
    puVar1 = (undefined4 *)(iVar2 + 0xe);
    iVar2 = iVar4;
    GLOBALUNLOCK(unaff_CS,iVar4,iVar4,(int)((ulong)*puVar1 >> 0x10),(int)*puVar1);
    unaff_CS = 0x16b0;
    iVar3 = iVar4;
    GLOBALFREE(0x16b0);
  }
  return;
}


// ---- FUN_1000_0778 @ 1000:0778

void __cdecl16near FUN_1000_0778(void)

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


// ---- FUN_1000_07ac @ 1000:07ac

void __cdecl16near FUN_1000_07ac(void)

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


// ---- FATALEXIT @ 16b0:0000

/* WARNING: Control flow encountered bad instruction data */

void FATALEXIT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETVERSION @ 16b0:0004

/* WARNING: Control flow encountered bad instruction data */

void GETVERSION(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LOCALINIT @ 16b0:0008

/* WARNING: Control flow encountered bad instruction data */

void LOCALINIT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GLOBALALLOC @ 16b0:000c

/* WARNING: Control flow encountered bad instruction data */

void GLOBALALLOC(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GLOBALREALLOC @ 16b0:0010

/* WARNING: Control flow encountered bad instruction data */

void GLOBALREALLOC(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GLOBALFREE @ 16b0:0014

/* WARNING: Control flow encountered bad instruction data */

void GLOBALFREE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GLOBALLOCK @ 16b0:0018

/* WARNING: Control flow encountered bad instruction data */

void GLOBALLOCK(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GLOBALUNLOCK @ 16b0:001c

/* WARNING: Control flow encountered bad instruction data */

void GLOBALUNLOCK(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GLOBALSIZE @ 16b0:0020

/* WARNING: Control flow encountered bad instruction data */

void GLOBALSIZE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LOCKSEGMENT @ 16b0:0024

/* WARNING: Control flow encountered bad instruction data */

void LOCKSEGMENT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETMODULEUSAGE @ 16b0:0028

/* WARNING: Control flow encountered bad instruction data */

void GETMODULEUSAGE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- INITTASK @ 16b0:002c

/* WARNING: Control flow encountered bad instruction data */

void INITTASK(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DOS3CALL @ 16b0:0030

/* WARNING: Control flow encountered bad instruction data */

void DOS3CALL(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETDOSENVIRONMENT @ 16b0:0034

/* WARNING: Control flow encountered bad instruction data */

void GETDOSENVIRONMENT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- FATALAPPEXIT @ 16b0:0038

/* WARNING: Control flow encountered bad instruction data */

void FATALAPPEXIT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- __WINFLAGS @ 16b0:003c

/* WARNING: Control flow encountered bad instruction data */

void __WINFLAGS(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


