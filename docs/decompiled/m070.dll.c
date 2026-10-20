// Decompiled with Ghidra from m070.dll
// Format: New Executable (NE), image base 0000:0000

// ---- entry @ 1000:0054

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
  
  DAT_1008_1006 = (undefined2 *)&DAT_1008_1008;
  uVar3 = unaff_CS;
  DAT_1008_1004 = unaff_DI;
  DAT_1008_1008 = in_CX;
  DAT_1008_100a = in_BX;
  DAT_1008_100c = unaff_SI;
  if (in_CX != 0) {
    uVar3 = 0x1010;
    iVar2 = LOCALINIT(unaff_CS,in_CX,0);
    if (iVar2 == 0) {
      return;
    }
  }
  LOCKSEGMENT(uVar3,0xffff);
  uVar4 = 0x92;
  uVar3 = GETVERSION(0x1010);
  DAT_1008_102a = CONCAT11((char)uVar3,(char)((uint)uVar3 >> 8));
  if ((DAT_1000_0010 & 1) == 0) {
    pcVar1 = (code *)swi(0x21);
    DAT_1008_102e = (*pcVar1)();
  }
  else {
    uVar4 = 0x1000;
    DAT_1008_102e = DOS3CALL(0x1000);
  }
  DAT_1008_102c = CONCAT11((char)DAT_1008_102e,(char)((uint)DAT_1008_102e >> 8));
  if ((DAT_1000_0010 & 1) == 0) {
    DAT_1008_1031 = 0;
  }
  FUN_1000_013a(uVar4);
  FUN_1000_0242();
  DAT_1008_100e = DAT_1008_100e + '\x01';
  FUN_1000_010e(DAT_1008_104a,DAT_1008_104c,DAT_1008_104e,DAT_1008_1050,DAT_1008_1052);
  return;
}


// ---- FUN_1000_00f6 @ 1000:00f6

undefined2 __stdcall16far FUN_1000_00f6(void)

{
  return 1;
}


// ---- FUN_1000_010e @ 1000:010e

void __cdecl16far FUN_1000_010e(void)

{
  FUN_1000_0828(DAT_1008_100a,DAT_1008_100c,DAT_1008_1008,DAT_1008_1006,DAT_1008_1004);
  return;
}


// ---- FUN_1000_013a @ 1000:013a

void __cdecl16far FUN_1000_013a(void)

{
  int unaff_BP;
  int iVar1;
  bool bVar2;
  undefined2 *puVar3;
  
  iVar1 = unaff_BP + 1;
  puVar3 = (undefined2 *)&DAT_1008_1008;
  if (DAT_1008_1078 != 0) {
    bVar2 = false;
    (*DAT_1008_1076)();
    if (bVar2) {
      FUN_1000_0328();
      return;
    }
  }
  FUN_1000_020a(puVar3,iVar1);
  FUN_1000_020a();
  FUN_1000_020a();
  return;
}


// ---- FUN_1000_0182 @ 1000:0182

undefined2 __cdecl16far FUN_1000_0182(void)

{
  DAT_1008_105b = 1;
  FUN_1000_020a();
  FUN_1000_020a();
  FUN_1000_020a();
  FUN_1000_020a();
  FUN_1000_0630();
  FUN_1000_036c();
  return 0x100;
}


// ---- FUN_1000_020a @ 1000:020a

void __cdecl16near FUN_1000_020a(void)

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


// ---- FUN_1000_021e @ 1000:021e

void __cdecl16far FUN_1000_021e(void)

{
  FUN_1000_0311(0xfc);
  FUN_1000_0311(0xff);
  return;
}


// ---- FUN_1000_0242 @ 1000:0242

void __cdecl16far FUN_1000_0242(void)

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
  pcVar11 = (char *)FUN_1000_032e();
  uVar5 = (undefined2)((ulong)pcVar11 >> 0x10);
  pcVar9 = (char *)pcVar11;
  puVar12 = (undefined2 *)FUN_1000_032e();
  uVar6 = (undefined2)((ulong)puVar12 >> 0x10);
  DAT_1008_1050 = (undefined2 *)puVar12;
  pcVar8 = (char *)0x0;
  for (; DAT_1008_1052 = (undefined2)((ulong)puVar12 >> 0x10), puVar2 = (undefined2 *)puVar12,
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
      puVar12 = (undefined2 *)CONCAT22(DAT_1008_1052,puVar2 + 2);
    } while (cVar1 != '\0');
  }
  *puVar2 = 0;
  puVar2[1] = 0;
  return;
}


// ---- FUN_1000_02da @ 1000:02da

int * __stdcall16far FUN_1000_02da(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  piVar3 = (int *)&DAT_1008_108a;
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


// ---- FUN_1000_0311 @ 1000:0311

undefined2 * __stdcall16far FUN_1000_0311(void)

{
  return (undefined2 *)&DAT_1008_1008;
}


// ---- FUN_1000_0328 @ 1000:0328

void FUN_1000_0328(void)

{
  FUN_1000_0378();
  return;
}


// ---- FUN_1000_032e @ 1000:032e

void __cdecl16near FUN_1000_032e(void)

{
  undefined2 uVar1;
  int iVar2;
  int in_DX;
  
  uVar1 = DAT_1008_1060;
  LOCK();
  DAT_1008_1060 = 0x1000;
  UNLOCK();
  iVar2 = FUN_1000_0507();
  DAT_1008_1060 = uVar1;
  if (in_DX != 0 || iVar2 != 0) {
    return;
  }
  FUN_1000_0378();
  return;
}


// ---- FUN_1000_035c @ 1000:035c

undefined2 __cdecl16far FUN_1000_035c(void)

{
  undefined2 unaff_SS;
  
  if (___EXPORTEDSTUB != (code)0xb8) {
    return unaff_SS;
  }
  return uRam100004d3;
}


// ---- FUN_1000_036c @ 1000:036c

void __cdecl16near FUN_1000_036c(void)

{
  return;
}


// ---- FUN_1000_0378 @ 1000:0378

uint __cdecl16near FUN_1000_0378(void)

{
  char *pcVar1;
  int *piVar2;
  undefined2 in_AX;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  int in_CX;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint *unaff_SI;
  undefined2 *puVar9;
  char *unaff_DI;
  undefined2 unaff_CS;
  bool bVar10;
  undefined2 uVar11;
  
  uVar11 = in_AX;
  FUN_1000_021e();
  FUN_1000_0311(in_AX);
  pcVar3 = (char *)FUN_1000_02da(uVar11);
  iVar8 = 0;
  if (pcVar3 != (char *)0x0) {
    iVar4 = 9;
    if (*pcVar3 == 'M') {
      iVar4 = 0xf;
    }
    pcVar3 = pcVar3 + iVar4;
    in_CX = 0x22;
    unaff_DI = pcVar3;
    do {
      if (in_CX == 0) break;
      in_CX = in_CX + -1;
      pcVar1 = unaff_DI;
      unaff_DI = unaff_DI + 1;
    } while (*pcVar1 != '\r');
    unaff_DI[-1] = '\0';
  }
  uVar11 = 0;
  FATALAPPEXIT(unaff_CS,pcVar3,(undefined2 *)&DAT_1008_1008);
  uVar5 = FATALEXIT(0x1010,0xff,uVar11);
  if ((*(byte *)(iVar8 + 2) & 1) != 0) {
    FUN_1000_04b1(unaff_DI,in_CX);
    uVar5 = *unaff_SI;
    if ((uVar5 & 1) != 0) {
      in_CX = (in_CX - uVar5) + -1;
    }
    uVar7 = *(uint *)(iVar8 + 4);
    if (uVar7 != 0) {
      if (!CARRY2(in_CX + 2U,uVar7)) {
        uVar11 = FUN_1000_035c();
        uVar5 = *(uint *)&DAT_1008_1060;
        if (uVar5 == 0x1000) goto LAB_1000_040c;
        uVar7 = 0x8000;
        while (uVar5 <= uVar7) {
          uVar7 = uVar7 >> 1;
          if (uVar7 == 0) goto LAB_1000_0425;
        }
        if (uVar7 < 8) goto LAB_1000_0425;
        uVar5 = uVar7 << 1;
        goto LAB_1000_040c;
      }
      uVar5 = 0;
      uVar6 = 0xfff0;
      if (in_CX + 2U + uVar7 == 0) {
        while( true ) {
          bVar10 = false;
          uVar5 = FUN_1000_044b();
          if (!bVar10) break;
          if (uVar6 == 0xfff0) {
            return uVar5;
          }
LAB_1000_0425:
          uVar5 = 0x10;
LAB_1000_040c:
          uVar6 = ~(uVar5 - 1);
        }
        iVar4 = uVar5 - *(int *)(iVar8 + 4);
        *(uint *)(iVar8 + 4) = uVar5;
        *(undefined2 *)(iVar8 + 10) = unaff_SI;
        piVar2 = (int *)*(int *)(iVar8 + 0xc);
        *piVar2 = iVar4 + -1;
        puVar9 = (undefined2 *)((int)piVar2 + iVar4);
        *puVar9 = 0xfffe;
        *(undefined2 *)(iVar8 + 0xc) = puVar9;
      }
    }
  }
  return uVar5;
}


// ---- FUN_1000_03ba @ 1000:03ba

void __cdecl16near FUN_1000_03ba(void)

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
    FUN_1000_04b1();
    if ((*unaff_SI & 1) != 0) {
      in_CX = (in_CX - *unaff_SI) + -1;
    }
    uVar4 = *(uint *)(in_BX + 4);
    if (uVar4 != 0) {
      if (!CARRY2(in_CX + 2U,uVar4)) {
        uVar2 = FUN_1000_035c();
        uVar4 = *(uint *)&DAT_1008_1060;
        if (uVar4 == 0x1000) goto LAB_1000_040c;
        uVar5 = 0x8000;
        while (uVar4 <= uVar5) {
          uVar5 = uVar5 >> 1;
          if (uVar5 == 0) goto LAB_1000_0425;
        }
        if (uVar5 < 8) goto LAB_1000_0425;
        uVar4 = uVar5 << 1;
        goto LAB_1000_040c;
      }
      uVar5 = 0xfff0;
      if (in_CX + 2U + uVar4 == 0) {
        while( true ) {
          bVar8 = false;
          iVar3 = FUN_1000_044b();
          if (!bVar8) break;
          if (uVar5 == 0xfff0) {
            return;
          }
LAB_1000_0425:
          uVar4 = 0x10;
LAB_1000_040c:
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


// ---- FUN_1000_044b @ 1000:044b

void __cdecl16near FUN_1000_044b(void)

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
LAB_1000_04a6:
    FUN_1000_0378();
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
  uVar1 = 0x2002;
  if ((DAT_1000_0010 & 1) == 0) {
    uVar1 = 0x2020;
  }
  iVar6 = iVar5;
  iVar2 = GLOBALREALLOC(0x1000,uVar1,in_AX,uVar3);
  if (iVar2 != 0) {
    if ((iVar2 != iVar5) || (lVar4 = GLOBALSIZE(0x1010,iVar5,iVar6), lVar4 == 0))
    goto LAB_1000_04a6;
    if ((*(byte *)(iVar5 + 2) & 4) != 0) {
      *(int *)(iVar5 + -2) = in_BX + -1;
    }
  }
  return;
}


// ---- FUN_1000_04b1 @ 1000:04b1

void __cdecl16near FUN_1000_04b1(void)

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


// ---- ___EXPORTEDSTUB @ 1000:04d2

undefined2 __cdecl16far ___EXPORTEDSTUB(void)

{
  return 0;
}


// ---- FUN_1000_04e6 @ 1000:04e6

undefined2 * __cdecl16far FUN_1000_04e6(undefined4 param_1)

{
  byte *pbVar1;
  int iVar2;
  
  iVar2 = (int)((ulong)param_1 >> 0x10);
  if (iVar2 != 0) {
    pbVar1 = (byte *)((int)param_1 + -2);
    *pbVar1 = *pbVar1 | 1;
  }
  return (undefined2 *)&DAT_1008_1008;
}


// ---- FUN_1000_0507 @ 1000:0507

undefined2 __cdecl16far FUN_1000_0507(uint param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int in_BX;
  uint uVar3;
  code *pcVar4;
  undefined2 unaff_CS;
  undefined2 *puVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  undefined4 uVar9;
  uint uVar10;
  
  puVar5 = (undefined2 *)&DAT_1008_1008;
  do {
    if (param_1 < 0xffe7) {
      bVar7 = false;
      if (*(int *)((int)(undefined4 *)&DAT_1008_1066 + 2) != 0) {
        pcVar4 = (code *)0x63e;
        while( true ) {
          uVar3 = *(uint *)&DAT_1008_1070;
          uVar6 = (uint)((ulong)*(undefined4 *)&DAT_1008_106a >> 0x10);
          in_BX = (int)*(undefined4 *)&DAT_1008_106a;
          uVar10 = uVar6;
          do {
            do {
              unaff_CS = 0x1000;
              uVar9 = (*pcVar4)();
              if (!bVar7) {
                if (pcVar4 == (code *)0x63e) goto LAB_1000_0578;
                goto LAB_1000_0575;
              }
              puVar1 = (undefined4 *)(in_BX + 0xe);
              in_BX = (int)*puVar1;
              bVar7 = uVar6 < uVar3;
              bVar8 = uVar6 != uVar3;
              uVar6 = (uint)((ulong)*puVar1 >> 0x10);
            } while (bVar8);
            uVar3 = *(uint *)((int)*(undefined4 *)&DAT_1008_106a + 0x14);
            uVar6 = (uint)((ulong)*(undefined4 *)&DAT_1008_1066 >> 0x10);
            in_BX = (int)*(undefined4 *)&DAT_1008_1066;
            bVar7 = uVar6 < uVar10;
            bVar8 = uVar6 != uVar10;
            uVar10 = uVar6;
          } while (bVar8);
          bVar7 = pcVar4 < (code *)0x3ba;
          if (pcVar4 == (code *)0x3ba) break;
          pcVar4 = (code *)0x3ba;
        }
      }
      FUN_1000_05ae();
      if (!bVar7) {
LAB_1000_0575:
        uVar9 = FUN_1000_063e();
LAB_1000_0578:
        *(undefined2 *)((int)(undefined4 *)&DAT_1008_106a + 2) = (int)((ulong)uVar9 >> 0x10);
        *(int *)&DAT_1008_106a = in_BX;
        return (int)uVar9;
      }
    }
    if (*(int *)&DAT_1008_1064 == 0 && *(int *)&DAT_1008_1062 == 0) {
      return 0;
    }
    iVar2 = (*(code *)*(undefined2 *)&DAT_1008_1062)(unaff_CS,param_1);
    if (iVar2 == 0) {
      return 0;
    }
  } while( true );
}


// ---- FUN_1000_05ae @ 1000:05ae

void __cdecl16near FUN_1000_05ae(void)

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
      uVar4 = GLOBALLOCK(0x1010,iVar1,iVar1,uVar7);
      iVar1 = (int)((ulong)uVar4 >> 0x10);
      if (((int)uVar4 != 0) || (iVar1 == 0)) goto LAB_1000_0625;
    }
    lVar5 = GLOBALSIZE(0x1010,iVar1);
    if (lVar5 == 0) {
LAB_1000_0625:
      FUN_1000_0378();
      return;
    }
    *(int *)0x6 = iVar2;
    *(undefined2 *)&DAT_1008_0002 = *(undefined2 *)(unaff_DI + 0xc);
    FUN_1000_06e4();
    FUN_1000_0718();
  }
  return;
}


// ---- FUN_1000_0630 @ 1000:0630

void __cdecl16near FUN_1000_0630(void)

{
  FUN_1000_06ba();
  return;
}


// ---- FUN_1000_063e @ 1000:063e

uint * __cdecl16near FUN_1000_063e(void)

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
          if (CARRY2((uint)puVar1,uVar2)) goto LAB_1000_0697;
          puVar6 = (uint *)((int)puVar1 + uVar2) + 1;
          uVar3 = *(uint *)((int)puVar1 + uVar2);
          if ((uVar3 & 1) == 0) break;
          uVar3 = uVar3 + uVar2 + 2;
          *puVar7 = uVar3;
        }
      }
      if (puVar6 + -1 < puVar5) break;
      if (((uint)puVar5 & 1) != 0) goto LAB_1000_0697;
      puVar7 = (uint *)*(undefined2 *)(in_BX + 8);
      if ((uint *)*(undefined2 *)(in_BX + 10) == puVar7) goto LAB_1000_0697;
      puVar5 = (uint *)((int)*(undefined2 *)(in_BX + 10) + -1);
    }
    puVar7 = (uint *)((int)puVar6 + uVar3);
  } while (!CARRY2((uint)puVar6,uVar3));
LAB_1000_0697:
  puVar7 = (uint *)*(undefined2 *)(in_BX + 8);
  *(undefined2 *)(in_BX + 10) = puVar7;
  return puVar7;
}


// ---- FUN_1000_06ba @ 1000:06ba

void __cdecl16near FUN_1000_06ba(void)

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
    unaff_CS = 0x1010;
    iVar3 = iVar4;
    GLOBALFREE(0x1010);
  }
  return;
}


// ---- FUN_1000_06e4 @ 1000:06e4

void __cdecl16near FUN_1000_06e4(void)

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
  *in_BX = (undefined2 *)&DAT_1008_1008;
  in_BX[4] = piVar1;
  in_BX[5] = piVar1;
  in_BX[7] = 0;
  in_BX[8] = 0;
  in_BX[9] = 0;
  in_BX[10] = 0;
  return;
}


// ---- FUN_1000_0718 @ 1000:0718

void __cdecl16near FUN_1000_0718(void)

{
  int in_BX;
  int iVar1;
  int *unaff_DI;
  undefined2 unaff_ES;
  undefined2 uVar2;
  
  if (unaff_DI[1] == 0) {
    unaff_DI[1] = (int)(undefined2 *)&DAT_1008_1008;
    *unaff_DI = in_BX;
  }
  else {
    uVar2 = (undefined2)((ulong)*(undefined4 *)(unaff_DI + 4) >> 0x10);
    iVar1 = (int)*(undefined4 *)(unaff_DI + 4);
    *(undefined2 *)(iVar1 + 0x10) = (undefined2 *)&DAT_1008_1008;
    *(int *)(iVar1 + 0xe) = in_BX;
    *(undefined2 *)(in_BX + 0x14) = uVar2;
    *(int *)(in_BX + 0x12) = iVar1;
  }
  unaff_DI[5] = (int)(undefined2 *)&DAT_1008_1008;
  unaff_DI[4] = in_BX;
  unaff_DI[3] = (int)(undefined2 *)&DAT_1008_1008;
  unaff_DI[2] = in_BX;
  return;
}


// ---- COMMAND_NAME_STRING @ 1000:0750

void __stdcall16far
COMMAND_NAME_STRING(undefined2 param_1,undefined2 param_2,undefined2 param_3,int param_4)

{
  HLEOUIFLANGUAGE();
  LOADSTRING(0x1010,param_1,param_2,param_3,param_4 + 0xbbc);
  return;
}


// ---- STATE_NAME_STRING @ 1000:077a

void __stdcall16far
STATE_NAME_STRING(undefined2 param_1,undefined2 param_2,undefined2 param_3,int param_4)

{
  HLEOUIFLANGUAGE();
  LOADSTRING(0x1010,param_1,param_2,param_3,param_4 + 0xa5c);
  return;
}


// ---- STATE_VALUE_STRING @ 1000:07a4

void __stdcall16far
STATE_VALUE_STRING(undefined2 param_1,undefined2 param_2,undefined2 param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  
  HLEOUIFLANGUAGE();
  uVar1 = *(undefined4 *)(param_5 * 4 + 0xa7e);
  LOADSTRING(0x1010,param_1,param_2,param_3,*(undefined2 *)((int)uVar1 + param_4 * 2));
  return;
}


// ---- PARAMETER_NAME_STRING @ 1000:07da

void __stdcall16far
PARAMETER_NAME_STRING(undefined2 param_1,undefined2 param_2,undefined2 param_3,int param_4)

{
  HLEOUIFLANGUAGE();
  LOADSTRING(0x1010,param_1,param_2,param_3,param_4 + 0x898);
  return;
}


// ---- STATE_VALUE_RESID @ 1000:0804

void __stdcall16far STATE_VALUE_RESID(void)

{
  return;
}


// ---- FUN_1000_0828 @ 1000:0828

undefined2 __stdcall16far FUN_1000_0828(void)

{
  return 1;
}


// ---- WEP @ 1000:083a

undefined2 __stdcall16far WEP(void)

{
  return 1;
}


// ---- LEOACC_REPORTID @ 1000:084c

void __cdecl16far LEOACC_REPORTID(void)

{
  undefined2 unaff_CS;
  
  UIF_MESSAGE(unaff_CS,0x8a2,0x1000);
  return;
}


// ---- INITIALISE_LEOACC_CONTROLLER_DATA @ 1000:0866

void __cdecl16far INITIALISE_LEOACC_CONTROLLER_DATA(void)

{
  LEOACC_REPORTID((undefined2 *)&DAT_1008_1008);
  return;
}


// ---- INITIALISE_LEOACC_CONTROLLER @ 1000:0878

undefined2 __cdecl16far INITIALISE_LEOACC_CONTROLLER(void)

{
  return 0;
}


// ---- LEOACC_CONTROLLER_SHUTDOWN @ 1000:0886

undefined2 __cdecl16far LEOACC_CONTROLLER_SHUTDOWN(void)

{
  return 0;
}


// ---- LEOACC_TIMER_TICK @ 1000:0894

undefined2 * __stdcall16far LEOACC_TIMER_TICK(void)

{
  return (undefined2 *)&DAT_1008_1008;
}


// ---- FUN_1000_08cc @ 1000:08cc

void __cdecl16far FUN_1000_08cc(int param_1)

{
  undefined2 unaff_CS;
  
  SEND_UIF_MESSAGE(unaff_CS,param_1,param_1 >> 0xf,DAT_1008_285c);
  return;
}


// ---- ACCOUNTINGMESSAGE @ 1000:08ea

void __stdcall16far ACCOUNTINGMESSAGE(undefined2 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_CS;
  
  iVar1 = FINDWINDOW(unaff_CS,0x1028,0x1000,0x1040);
  if (iVar1 != 0) {
    uVar2 = REGISTERWINDOWMESSAGE(0x1010,(undefined2 *)&DAT_1008_104c);
    POSTMESSAGE(0x1010,0,0,param_1,uVar2);
  }
  return;
}


// ---- CLEARMENULIST @ 1000:0928

void __cdecl16far CLEARMENULIST(void)

{
  undefined2 local_4;
  
  local_4 = 0;
  do {
    *(undefined2 *)(local_4 * 2 + 0x2c50) = 0;
    local_4 = local_4 + 1;
  } while (local_4 < 200);
  return;
}


// ---- DISABLEMENUITEM @ 1000:0950

undefined2 __stdcall16far DISABLEMENUITEM(int param_1)

{
  int local_4;
  
  local_4 = 0;
  while( true ) {
    if (199 < local_4) {
      return 0xffff;
    }
    if (*(int *)(local_4 * 2 + 0x2c50) == param_1) break;
    if (*(int *)(local_4 * 2 + 0x2c50) == 0) {
      *(int *)(local_4 * 2 + 0x2c50) = param_1;
      return 0;
    }
    local_4 = local_4 + 1;
  }
  return 0;
}


// ---- MENUITEMSTATE @ 1000:0998

undefined2 __stdcall16far MENUITEMSTATE(int param_1)

{
  int local_4;
  
  local_4 = 0;
  while( true ) {
    if (199 < local_4) {
      return 0;
    }
    if (*(int *)(local_4 * 2 + 0x2c50) == param_1) break;
    if (*(int *)(local_4 * 2 + 0x2c50) == 0) {
      return 0;
    }
    local_4 = local_4 + 1;
  }
  return 1;
}


// ---- SETIMAGEDIR @ 1000:09da

void __stdcall16far SETIMAGEDIR(undefined2 param_1)

{
  DAT_1008_1000 = param_1;
  return;
}


// ---- IMAGEDIRENABLED @ 1000:09ee

undefined2 __cdecl16far IMAGEDIRENABLED(void)

{
  return DAT_1008_1000;
}


// ---- INITPANELTABLE @ 1000:09fe

void __cdecl16far INITPANELTABLE(void)

{
  int local_4;
  
  DAT_1008_1162 = 1;
  local_4 = 0;
  do {
    *(undefined2 *)(local_4 * 0x62 + 0x1164) = 0;
    local_4 = local_4 + 1;
  } while (local_4 < 0x3c);
  DAT_1008_0ffe = 1;
  FUN_1000_08cc(3,(undefined2 *)&DAT_1008_1008);
  return;
}


// ---- LOADPANELVISTABLE @ 1000:0a38

undefined2 __cdecl16far LOADPANELVISTABLE(void)

{
  int iVar1;
  int iVar2;
  undefined2 unaff_CS;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  
  uVar3 = GETLEOPATH();
  LSTRCPY(0x1010,uVar3,unaff_CS);
  puVar8 = (undefined2 *)&DAT_1008_1008;
  LSTRCAT(0x1010,0x1058,0x1000,0x2de0);
  puVar7 = (undefined2 *)&DAT_1008_1008;
  iVar1 = _LOPEN(0x1010,0,0x2de0);
  if (iVar1 < 0) {
    puVar6 = (undefined2 *)&DAT_1008_1008;
    iVar1 = _LCREAT(0x1010,0,0x2de0);
    if (-1 < iVar1) {
      _LCLOSE(0x1010,iVar1,puVar6,puVar7,puVar8);
    }
    pcVar4 = (char *)s_R6000___stack_overflow_1008_108c + 2;
  }
  else {
    iVar5 = iVar1;
    iVar2 = _LREAD(0x1010,0x16fa,(undefined2 *)&DAT_1008_1162,(undefined2 *)&DAT_1008_1008);
    _LCLOSE(0x1010,iVar1,iVar5,puVar7,puVar8);
    if (iVar2 == 0x16fa) {
      if (DAT_1008_1162 == 1) {
        DAT_1008_0ffe = 1;
        FUN_1000_08cc(3);
        return 0;
      }
      pcVar4 = (char *)&DAT_1008_1064;
    }
    else {
      pcVar4 = (char *)&DAT_1008_107a;
    }
  }
  MESSAGEBOX(0x1010,0x30,0x2de0,(undefined2 *)&DAT_1008_1008,pcVar4,0x1000);
  return 1;
}


// ---- SAVEPANELVISTABLE @ 1000:0aee

void __cdecl16far SAVEPANELVISTABLE(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 unaff_CS;
  undefined4 uVar4;
  char *pcVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  
  uVar4 = GETLEOPATH();
  LSTRCPY(0x1010,uVar4,unaff_CS);
  puVar7 = (undefined2 *)&DAT_1008_1008;
  LSTRCAT(0x1010,0x1058,0x1000,12000);
  puVar6 = (undefined2 *)&DAT_1008_1008;
  iVar1 = _LOPEN(0x1010,1,12000);
  if (iVar1 < 0) {
    iVar1 = 0x1000;
    pcVar5 = (char *)s_R6009___not_enough_space_for_env_1008_10c9 + 1;
  }
  else {
    iVar3 = iVar1;
    iVar2 = _LWRITE(0x1010,0x16fa,(undefined2 *)&DAT_1008_1162,(undefined2 *)&DAT_1008_1008);
    if (iVar2 == 0x16fa) {
      iVar3 = _LCLOSE(0x1010,iVar1,iVar3,puVar6,puVar7);
      if (-1 < iVar3) {
        return;
      }
      pcVar5 = (char *)0x0;
    }
    else {
      _LCLOSE(0x1010,iVar1,iVar3,puVar6,puVar7);
      pcVar5 = (char *)0x0;
    }
  }
  MESSAGEBOX(0x1010,0x30,12000,(undefined2 *)&DAT_1008_1008,pcVar5,iVar1);
  return;
}


// ---- REGISTERLEOPANEL @ 1000:0b7c

int __stdcall16far REGISTERLEOPANEL(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined2 unaff_CS;
  int local_4;
  
  iVar1 = LSTRLEN(unaff_CS,(int)param_2);
  if (0x20 < iVar1) {
    *(undefined1 *)((int)param_2 + 0x20) = 0;
  }
  iVar1 = LSTRLEN(0x1010,(int)param_1);
  if (0x40 < iVar1) {
    *(undefined1 *)((int)param_1 + 0x40) = 0;
  }
  local_4 = 0;
  while( true ) {
    if (0x3b < local_4) {
      local_4 = 0;
      while( true ) {
        if (0x3b < local_4) {
          MESSAGEBOX(0x1010,0x30,(int)param_1,param_1._2_2_,
                     (char *)s_R6009___not_enough_space_for_env_1008_10c9 + 0x15,0x1000);
          return -1;
        }
        iVar1 = local_4 * 0x62;
        if (*(int *)(iVar1 + 0x1164) == 0) break;
        local_4 = local_4 + 1;
      }
      LSTRCPY(0x1010,(int)param_2,param_2._2_2_,iVar1 + 0x1166);
      LSTRCPY(0x1010,(int)param_1,param_1._2_2_,iVar1 + 0x1186);
      *(undefined2 *)(iVar1 + 0x1164) = 1;
      return local_4;
    }
    iVar1 = local_4 * 0x62;
    if ((*(int *)(iVar1 + 0x1164) != 0) &&
       (iVar2 = LSTRCMPI(0x1010,iVar1 + 0x1166,(undefined2 *)&DAT_1008_1008,(int)param_2),
       iVar2 == 0)) break;
    local_4 = local_4 + 1;
  }
  LSTRCPY(0x1010,(int)param_1,param_1._2_2_,iVar1 + 0x1186);
  return local_4;
}


// ---- ISPANELVISIBLE @ 1000:0c6c

undefined2 __stdcall16far ISPANELVISIBLE(int param_1)

{
  undefined2 uVar1;
  
  if ((param_1 < 0) || (0x3b < param_1)) {
    uVar1 = 400;
  }
  else if (*(int *)(param_1 * 0x62 + 0x1164) < DAT_1008_285c) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


// ---- READPANELTABLEENTRY @ 1000:0ca0

undefined2 __stdcall16far
READPANELTABLEENTRY(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
                   int param_5)

{
  undefined2 uVar1;
  undefined2 unaff_CS;
  
  if ((param_5 < 0) || (0x3b < param_5)) {
    uVar1 = 0xffff;
  }
  else {
    param_5 = param_5 * 0x62;
    LSTRCPY(unaff_CS,param_5 + 0x1166,(undefined2 *)&DAT_1008_1008,param_3);
    LSTRCPY(0x1010,param_5 + 0x1186,(undefined2 *)&DAT_1008_1008,param_1);
    uVar1 = *(undefined2 *)(param_5 + 0x1164);
  }
  return uVar1;
}


// ---- SETPANELVIS @ 1000:0cf2

undefined2 __stdcall16far SETPANELVIS(undefined2 param_1,int param_2)

{
  undefined2 uVar1;
  
  if ((param_2 < 0) || (0x3b < param_2)) {
    uVar1 = 0xffff;
  }
  else {
    *(undefined2 *)(param_2 * 0x62 + 0x1164) = param_1;
    DAT_1008_0ffe = 1;
    FUN_1000_08cc(3,(undefined2 *)&DAT_1008_1008);
    uVar1 = 0;
  }
  return uVar1;
}


// ---- READMAXPANELS @ 1000:0d2c

undefined2 __cdecl16far READMAXPANELS(void)

{
  return 0x3c;
}


// ---- SETSTATEVIS @ 1000:0d3c

void __stdcall16far SETSTATEVIS(undefined1 param_1,int param_2)

{
  if (param_2 < 0x161) {
    *(undefined1 *)(param_2 + 0x2a24) = param_1;
  }
  DAT_1008_0ffe = 1;
  FUN_1000_08cc(1,(undefined2 *)&DAT_1008_1008);
  return;
}


// ---- SETVALUEVIS @ 1000:0d68

void __stdcall16far SETVALUEVIS(undefined1 param_1,int param_2)

{
  if (param_2 < 0x1c5) {
    *(undefined1 *)(param_2 + 0x285e) = param_1;
  }
  DAT_1008_0ffe = 1;
  FUN_1000_08cc(1,(undefined2 *)&DAT_1008_1008);
  return;
}


// ---- SETCOMMANDVIS @ 1000:0d94

void __stdcall16far SETCOMMANDVIS(undefined1 param_1,int param_2)

{
  if (param_2 < 0xca) {
    *(undefined1 *)(param_2 + 0x2b86) = param_1;
  }
  DAT_1008_0ffe = 1;
  FUN_1000_08cc(1,(undefined2 *)&DAT_1008_1008);
  return;
}


// ---- GETSTATEVIS @ 1000:0dc0

int __stdcall16far GETSTATEVIS(int param_1)

{
  int iVar1;
  
  if (param_1 < 0x161) {
    iVar1 = (int)*(char *)(param_1 + 0x2a24);
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}


// ---- GETVALUEVIS @ 1000:0de2

int __stdcall16far GETVALUEVIS(int param_1)

{
  int iVar1;
  
  if (param_1 < 0x1c5) {
    iVar1 = (int)*(char *)(param_1 + 0x285e);
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}


// ---- GETCOMMANDVIS @ 1000:0e04

int __stdcall16far GETCOMMANDVIS(int param_1)

{
  int iVar1;
  
  if (param_1 < 0xca) {
    iVar1 = (int)*(char *)(param_1 + 0x2b86);
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}


// ---- SETVISMODE @ 1000:0e26

void __stdcall16far SETVISMODE(undefined2 param_1)

{
  DAT_1008_285c = param_1;
  FUN_1000_08cc(2,(undefined2 *)&DAT_1008_1008);
  return;
}


// ---- ISAVISIBLE @ 1000:0e42

undefined2 __stdcall16far ISAVISIBLE(int param_1)

{
  undefined2 uVar1;
  
  if (param_1 < 0x1c5) {
    if (*(char *)(param_1 + 0x285e) < DAT_1008_285c) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 400;
  }
  return uVar1;
}


// ---- ISDVISIBLE @ 1000:0e72

undefined2 __stdcall16far ISDVISIBLE(int param_1)

{
  undefined2 uVar1;
  
  if (param_1 < 0x161) {
    if (*(char *)(param_1 + 0x2a24) < DAT_1008_285c) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 400;
  }
  return uVar1;
}


// ---- ISCVISIBLE @ 1000:0ea2

undefined2 __stdcall16far ISCVISIBLE(int param_1)

{
  undefined2 uVar1;
  
  if (param_1 < 0xca) {
    if (*(char *)(param_1 + 0x2b86) < DAT_1008_285c) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 400;
  }
  return uVar1;
}


// ---- LOADVISTABLES @ 1000:0ed2

undefined2 __cdecl16far LOADVISTABLES(void)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  int local_818 [4];
  undefined1 auStack_810 [912];
  undefined1 auStack_480 [722];
  undefined1 auStack_1ae [422];
  int local_8;
  int local_6;
  int local_4;
  
  uVar2 = GETLEOPATH();
  LSTRCPY(0x1010,uVar2,unaff_CS);
  puVar6 = (undefined2 *)&DAT_1008_1008;
  LSTRCAT(0x1010,(char *)s_R6018___unexpected_heap_error_1008_10f7 + 0xd,0x1000,0x2fe0);
  puVar5 = (undefined2 *)&DAT_1008_1008;
  iVar1 = _LOPEN(0x1010,0,0x2fe0);
  local_8 = iVar1;
  if (iVar1 < 0) {
    iVar4 = 0x1000;
    pcVar3 = (char *)s_R6000___stack_overflow_1008_108c + 2;
  }
  else {
    local_4 = _LREAD(0x1010,0x810,local_818,unaff_SS);
    iVar4 = local_8;
    _LCLOSE(0x1010,local_8,iVar1,puVar5,puVar6);
    if (local_4 == 0x810) {
      if (local_818[0] == 0) {
        local_6 = 0;
        do {
          *(undefined1 *)(local_6 + 0x285e) = auStack_810[local_6 * 2];
          local_6 = local_6 + 1;
        } while (local_6 < 0x1c5);
        local_6 = 0;
        do {
          *(undefined1 *)(local_6 + 0x2a24) = auStack_480[local_6 * 2];
          local_6 = local_6 + 1;
        } while (local_6 < 0x161);
        local_6 = 0;
        do {
          *(undefined1 *)(local_6 + 0x2b86) = auStack_1ae[local_6 * 2];
          local_6 = local_6 + 1;
        } while (local_6 < 0xca);
        DAT_1008_0ffe = 1;
        FUN_1000_08cc(1);
        return 0;
      }
      pcVar3 = (char *)0x0;
    }
    else {
      pcVar3 = (char *)0x0;
    }
  }
  MESSAGEBOX(0x1010,0x30,0x2fe0,(undefined2 *)&DAT_1008_1008,pcVar3,iVar4);
  return 1;
}


// ---- VISCHANGED @ 1000:0fe2

undefined2 __cdecl16far VISCHANGED(void)

{
  undefined2 uVar1;
  
  uVar1 = DAT_1008_0ffe;
  DAT_1008_0ffe = 0;
  return uVar1;
}


// ---- LEO_AP @ 1000:0ff8

undefined2 __cdecl16far LEO_AP(void)

{
  return 0x1c4;
}


// ---- LEO_DP @ 1000:1008

undefined2 __cdecl16far LEO_DP(void)

{
  return 0x160;
}


// ---- LEO_CMD @ 1000:1018

undefined2 __cdecl16far LEO_CMD(void)

{
  return 0xc9;
}


// ---- SHOW_HP_PANEL @ 1000:1130

void __stdcall16far SHOW_HP_PANEL(int param_1)

{
  if (param_1 == 1) {
    HP_SHOW_PANEL();
  }
  else {
    HP_SHOW_SERVICE_PANEL();
  }
  return;
}


// ---- SERVICEDONGLEPRESENT @ 1000:1150

undefined2 __cdecl16far SERVICEDONGLEPRESENT(void)

{
  return 0;
}


// ---- LEOCHECKDONGLE @ 1000:115e

undefined2 __cdecl16far LEOCHECKDONGLE(void)

{
  return 0;
}


// ---- FATALEXIT @ 1010:0000

/* WARNING: Control flow encountered bad instruction data */

void FATALEXIT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETVERSION @ 1010:0004

/* WARNING: Control flow encountered bad instruction data */

void GETVERSION(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LOCALINIT @ 1010:0008

/* WARNING: Control flow encountered bad instruction data */

void LOCALINIT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GLOBALALLOC @ 1010:000c

/* WARNING: Control flow encountered bad instruction data */

void GLOBALALLOC(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GLOBALREALLOC @ 1010:0010

/* WARNING: Control flow encountered bad instruction data */

void GLOBALREALLOC(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GLOBALFREE @ 1010:0014

/* WARNING: Control flow encountered bad instruction data */

void GLOBALFREE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GLOBALLOCK @ 1010:0018

/* WARNING: Control flow encountered bad instruction data */

void GLOBALLOCK(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GLOBALUNLOCK @ 1010:001c

/* WARNING: Control flow encountered bad instruction data */

void GLOBALUNLOCK(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GLOBALSIZE @ 1010:0020

/* WARNING: Control flow encountered bad instruction data */

void GLOBALSIZE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LOCKSEGMENT @ 1010:0024

/* WARNING: Control flow encountered bad instruction data */

void LOCKSEGMENT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETMODULEUSAGE @ 1010:0028

/* WARNING: Control flow encountered bad instruction data */

void GETMODULEUSAGE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- _LCLOSE @ 1010:002c

/* WARNING: Control flow encountered bad instruction data */

void _LCLOSE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- _LREAD @ 1010:0030

/* WARNING: Control flow encountered bad instruction data */

void _LREAD(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- _LCREAT @ 1010:0034

/* WARNING: Control flow encountered bad instruction data */

void _LCREAT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- _LOPEN @ 1010:0038

/* WARNING: Control flow encountered bad instruction data */

void _LOPEN(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- _LWRITE @ 1010:003c

/* WARNING: Control flow encountered bad instruction data */

void _LWRITE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LSTRCPY @ 1010:0040

/* WARNING: Control flow encountered bad instruction data */

void LSTRCPY(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LSTRCAT @ 1010:0044

/* WARNING: Control flow encountered bad instruction data */

void LSTRCAT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LSTRLEN @ 1010:0048

/* WARNING: Control flow encountered bad instruction data */

void LSTRLEN(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- INITTASK @ 1010:004c

/* WARNING: Control flow encountered bad instruction data */

void INITTASK(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DOS3CALL @ 1010:0050

/* WARNING: Control flow encountered bad instruction data */

void DOS3CALL(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETDOSENVIRONMENT @ 1010:0054

/* WARNING: Control flow encountered bad instruction data */

void GETDOSENVIRONMENT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- FATALAPPEXIT @ 1010:0058

/* WARNING: Control flow encountered bad instruction data */

void FATALAPPEXIT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- __WINFLAGS @ 1010:005c

/* WARNING: Control flow encountered bad instruction data */

void __WINFLAGS(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- MESSAGEBOX @ 1010:0060

/* WARNING: Control flow encountered bad instruction data */

void MESSAGEBOX(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- FINDWINDOW @ 1010:0064

/* WARNING: Control flow encountered bad instruction data */

void FINDWINDOW(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- POSTMESSAGE @ 1010:0068

/* WARNING: Control flow encountered bad instruction data */

void POSTMESSAGE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- REGISTERWINDOWMESSAGE @ 1010:006c

/* WARNING: Control flow encountered bad instruction data */

void REGISTERWINDOWMESSAGE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LOADSTRING @ 1010:0070

/* WARNING: Control flow encountered bad instruction data */

void LOADSTRING(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LSTRCMPI @ 1010:0074

/* WARNING: Control flow encountered bad instruction data */

void LSTRCMPI(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- UIF_MESSAGE @ 1010:0078

/* WARNING: Control flow encountered bad instruction data */

void UIF_MESSAGE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- HLEOUIFLANGUAGE @ 1010:007c

/* WARNING: Control flow encountered bad instruction data */

void HLEOUIFLANGUAGE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SEND_UIF_MESSAGE @ 1010:0080

/* WARNING: Control flow encountered bad instruction data */

void SEND_UIF_MESSAGE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETLEOPATH @ 1010:0084

/* WARNING: Control flow encountered bad instruction data */

void GETLEOPATH(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- HP_SHOW_PANEL @ 1010:0088

/* WARNING: Control flow encountered bad instruction data */

void HP_SHOW_PANEL(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- HP_SHOW_SERVICE_PANEL @ 1010:008c

/* WARNING: Control flow encountered bad instruction data */

void HP_SHOW_SERVICE_PANEL(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


