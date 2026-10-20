// Decompiled with Ghidra from m400.dll
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
  
  DAT_1008_0026 = 0x1008;
  uVar3 = unaff_CS;
  DAT_1008_0024 = unaff_DI;
  DAT_1008_0028 = in_CX;
  DAT_1008_002a = in_BX;
  DAT_1008_002c = unaff_SI;
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
  DAT_1008_005e = CONCAT11((char)uVar3,(char)((uint)uVar3 >> 8));
  if ((DAT_1000_0010 & 1) == 0) {
    pcVar1 = (code *)swi(0x21);
    DAT_1008_0062 = (*pcVar1)();
  }
  else {
    uVar4 = 0x1000;
    DAT_1008_0062 = DOS3CALL(0x1000);
  }
  DAT_1008_0060 = CONCAT11((char)DAT_1008_0062,(char)((uint)DAT_1008_0062 >> 8));
  if ((DAT_1000_0010 & 1) == 0) {
    DAT_1008_0065 = 0;
  }
  FUN_1000_018c(uVar4);
  FUN_1000_0294();
  DAT_1008_002e = DAT_1008_002e + '\x01';
  FUN_1000_0160(DAT_1008_007e,DAT_1008_0080,DAT_1008_0082,DAT_1008_0084,DAT_1008_0086);
  return;
}


// ---- FUN_1000_00f6 @ 1000:00f6

undefined2 __stdcall16far FUN_1000_00f6(void)

{
  return 1;
}


// ---- FUN_1000_010e @ 1000:010e

undefined2 __cdecl16far FUN_1000_010e(void)

{
  longdouble in_ST0;
  undefined2 local_10;
  
  local_10 = (undefined2)(sqword)ROUND(in_ST0);
  return local_10;
}


// ---- FUN_1000_0160 @ 1000:0160

void __cdecl16far FUN_1000_0160(void)

{
  FUN_1000_1d90(DAT_1008_002a,DAT_1008_002c,DAT_1008_0028,DAT_1008_0026,DAT_1008_0024);
  return;
}


// ---- FUN_1000_018c @ 1000:018c

void __cdecl16far FUN_1000_018c(void)

{
  char *pcVar1;
  char *pcVar2;
  int unaff_BP;
  int iVar3;
  char *pcVar4;
  undefined2 unaff_CS;
  bool bVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  
  iVar3 = unaff_BP + 1;
  uVar7 = 0x1008;
  if (DAT_1008_0256 != 0) {
    bVar5 = false;
    (*DAT_1008_0254)();
    if (bVar5) {
      do {
        uVar6 = 2;
        uVar7 = 2;
        FUN_1000_0270(2,2);
        FUN_1000_09f7(uVar7);
        pcVar2 = (char *)FUN_1000_09c0(uVar6);
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
        uVar7 = 0;
        FATALAPPEXIT(unaff_CS,pcVar2,0x1008);
        unaff_CS = 0x1010;
        FATALEXIT(0x1010,0xff,uVar7);
      } while( true );
    }
  }
  FUN_1000_025c(uVar7,iVar3);
  FUN_1000_025c();
  FUN_1000_025c();
  return;
}


// ---- FUN_1000_01d4 @ 1000:01d4

undefined2 __cdecl16far FUN_1000_01d4(void)

{
  DAT_1008_008f = 1;
  FUN_1000_025c();
  FUN_1000_025c();
  FUN_1000_025c();
  FUN_1000_025c();
  FUN_1000_1434();
  FUN_1000_0a9e();
  return 0x100;
}


// ---- FUN_1000_025c @ 1000:025c

void __cdecl16near FUN_1000_025c(void)

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

void __cdecl16far FUN_1000_0270(void)

{
  FUN_1000_09f7(0xfc);
  FUN_1000_09f7(0xff);
  return;
}


// ---- FUN_1000_0294 @ 1000:0294

void __cdecl16far FUN_1000_0294(void)

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
  pcVar11 = (char *)FUN_1000_0a60();
  uVar5 = (undefined2)((ulong)pcVar11 >> 0x10);
  pcVar9 = (char *)pcVar11;
  puVar12 = (undefined2 *)FUN_1000_0a60();
  uVar6 = (undefined2)((ulong)puVar12 >> 0x10);
  DAT_1008_0084 = (undefined2 *)puVar12;
  pcVar8 = (char *)0x0;
  for (; DAT_1008_0086 = (undefined2)((ulong)puVar12 >> 0x10), puVar2 = (undefined2 *)puVar12,
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
      puVar12 = (undefined2 *)CONCAT22(DAT_1008_0086,puVar2 + 2);
    } while (cVar1 != '\0');
  }
  *puVar2 = 0;
  puVar2[1] = 0;
  return;
}


// ---- FUN_1000_03a2 @ 1000:03a2

undefined2 __cdecl16far FUN_1000_03a2(char *param_1)

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


// ---- FUN_1000_0426 @ 1000:0426

bool __cdecl16far FUN_1000_0426(double *param_1)

{
  return DAT_1008_02c4 <= *param_1;
}


// ---- FUN_1000_045e @ 1000:045e

void __cdecl16far FUN_1000_045e(int param_1,float *param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 *puVar1;
  double *pdVar2;
  undefined2 in_DX;
  float *pfVar3;
  undefined2 uVar4;
  
  if (param_1 == 0) {
    pdVar2 = (double *)FUN_1000_0aa0(param_3,param_4);
    *param_2 = (float)*pdVar2;
  }
  else {
    puVar1 = (undefined2 *)FUN_1000_0aa0(param_3,param_4);
    uVar4 = (undefined2)((ulong)param_2 >> 0x10);
    pfVar3 = (float *)param_2;
    *(undefined2 *)param_2 = *puVar1;
    *(undefined2 *)((int)pfVar3 + 2) = puVar1[1];
    *(undefined2 *)(pfVar3 + 1) = puVar1[2];
    *(undefined2 *)((int)pfVar3 + 6) = puVar1[3];
  }
  return;
}


// ---- FUN_1000_04b6 @ 1000:04b6

undefined1 * __cdecl16far
FUN_1000_04b6(undefined2 *param_1,undefined1 *param_2,undefined2 param_3,int param_4,int param_5)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined2 in_DX;
  undefined2 *puVar3;
  int iVar4;
  undefined2 uVar5;
  undefined4 local_c;
  undefined4 local_8;
  
  if (DAT_1008_00b6 == '\0') {
    uVar5 = (undefined2)((ulong)param_1 >> 0x10);
    puVar3 = (undefined2 *)param_1;
    piVar1 = (int *)FUN_1000_0d14(*param_1,puVar3[1],puVar3[2],puVar3[3]);
    local_8 = (int *)CONCAT22(in_DX,piVar1);
    FUN_1000_0afe(param_2 + (uint)(0 < param_4) + (uint)(*local_8 == 0x2d),param_3,param_4 + 1,
                  piVar1,in_DX);
  }
  else {
    local_8 = (int *)CONCAT22(DAT_1008_063c,DAT_1008_063a);
    FUN_1000_0968(0 < param_4,param_2 + (*DAT_1008_063a == 0x2d),param_3);
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
           FUN_1000_0bc6((undefined1 *)local_c + param_4 + (uint)(DAT_1008_00b6 == '\0'),
                         local_c._2_2_,0xbb,0x1008);
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


// ---- FUN_1000_064e @ 1000:064e

void __cdecl16far
FUN_1000_064e(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5,undefined2 param_6)

{
  DAT_1008_00b6 = 1;
  FUN_1000_04b6(param_1,param_2,param_3,param_4,param_5,param_6);
  DAT_1008_00b6 = 0;
  return;
}


// ---- FUN_1000_0682 @ 1000:0682

undefined1 * __cdecl16far
FUN_1000_0682(undefined2 *param_1,undefined1 *param_2,undefined2 param_3,int param_4)

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
  
  iVar3 = DAT_1008_00b8;
  if (DAT_1008_00b6 == '\0') {
    uVar6 = (undefined2)((ulong)param_1 >> 0x10);
    puVar4 = (undefined2 *)param_1;
    piVar5 = (int *)FUN_1000_0d14(*param_1,puVar4[1],puVar4[2],puVar4[3]);
    local_8 = (int *)CONCAT22(in_DX,piVar5);
    FUN_1000_0afe(param_2 + (*local_8 == 0x2d),param_3,piVar5[1] + param_4,piVar5,in_DX);
  }
  else {
    local_8 = (int *)CONCAT22(DAT_1008_063c,DAT_1008_063a);
    iVar1 = *DAT_1008_063a;
    if (param_4 == DAT_1008_00b8) {
      param_2[DAT_1008_00b8 + (uint)(iVar1 == 0x2d)] = 0x30;
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
    FUN_1000_0968(1,puVar2,param_3);
    puVar2 = puVar2 + 1;
    *local_c = 0x30;
  }
  else {
    puVar2 = puVar2 + piVar5[1];
  }
  local_c = (undefined1 *)CONCAT22(param_3,puVar2);
  if (0 < param_4) {
    FUN_1000_0968(1,puVar2,param_3);
    *local_c = 0x2e;
    if (piVar5[1] < 0) {
      if (DAT_1008_00b6 == '\0') {
        iVar3 = -piVar5[1];
        if (-param_4 != piVar5[1] && param_4 <= iVar3) {
          iVar3 = param_4;
        }
      }
      else {
        iVar3 = -piVar5[1];
      }
      FUN_1000_0968(iVar3,puVar2 + 1,param_3);
      FUN_1000_0c02(puVar2 + 1,param_3,0x30,iVar3);
    }
  }
  return param_2;
}


// ---- FUN_1000_07e8 @ 1000:07e8

void __cdecl16far
FUN_1000_07e8(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5)

{
  DAT_1008_00b6 = 1;
  FUN_1000_0682(param_1,param_2,param_3,param_4,param_5);
  DAT_1008_00b6 = 0;
  return;
}


// ---- FUN_1000_081a @ 1000:081a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far
FUN_1000_081a(undefined2 *param_1,int param_2,undefined2 param_3,int param_4,undefined2 param_5)

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
  piVar2 = (int *)FUN_1000_0d14(*param_1,puVar5[1],puVar5[2],puVar5[3]);
  _DAT_1008_063a = (int *)CONCAT22(in_DX,piVar2);
  DAT_1008_00b8 = piVar2[1] + -1;
  pcVar3 = (char *)((uint)(*_DAT_1008_063a == 0x2d) + param_2);
  local_8 = (char *)CONCAT22(param_3,pcVar3);
  FUN_1000_0afe(pcVar3,param_3,param_4,piVar2,in_DX);
  iVar4 = ((int *)_DAT_1008_063a)[1] + -1;
  DAT_1008_00ba = DAT_1008_00b8 < iVar4;
  DAT_1008_00b8 = iVar4;
  if ((iVar4 < -4) || (param_4 <= iVar4)) {
    FUN_1000_064e(puVar5,uVar6,param_2,param_3,param_4,param_5);
  }
  else {
    if ((bool)DAT_1008_00ba) {
      do {
        pcVar1 = local_8;
        uVar7 = (undefined2)((ulong)local_8 >> 0x10);
        pcVar3 = (char *)local_8;
        local_8 = (char *)CONCAT22(uVar7,(char *)local_8 + 1);
      } while (*pcVar1 != '\0');
      pcVar3[-1] = '\0';
    }
    FUN_1000_07e8(puVar5,uVar6,param_2,param_3,param_4);
  }
  return;
}


// ---- FUN_1000_08fa @ 1000:08fa

void __cdecl16far
FUN_1000_08fa(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             int param_5,undefined2 param_6,undefined2 param_7)

{
  int unaff_BP;
  
  if ((param_5 == 0x65) || (param_5 == 0x45)) {
    FUN_1000_04b6(param_1,param_2,param_3,param_4,param_6,param_7);
  }
  else if (param_5 == 0x66) {
    FUN_1000_0682(param_1,param_2,param_3,param_4,param_6);
  }
  else {
    FUN_1000_081a(param_1,param_2,param_3,param_4,param_6,param_7,0x1008,unaff_BP + 1);
  }
  return;
}


// ---- FUN_1000_0968 @ 1000:0968

void FUN_1000_0968(int param_1,int param_2,undefined2 param_3)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = FUN_1000_0bac(param_2,param_3);
    FUN_1000_0c4a(param_2 + param_1,param_3,param_2,param_3,iVar1 + 1);
  }
  return;
}


// ---- FUN_1000_09c0 @ 1000:09c0

int * __stdcall16far FUN_1000_09c0(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  piVar3 = (int *)&DAT_1008_02d4;
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


// ---- FUN_1000_09f7 @ 1000:09f7

undefined2 __stdcall16far FUN_1000_09f7(void)

{
  return 0x1008;
}


// ---- FUN_1000_0a18 @ 1000:0a18

void FUN_1000_0a18(void)

{
  char *pcVar1;
  undefined2 in_AX;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  undefined2 unaff_CS;
  undefined2 uVar5;
  
  do {
    uVar5 = in_AX;
    FUN_1000_0270(in_AX,in_AX);
    FUN_1000_09f7(in_AX);
    pcVar2 = (char *)FUN_1000_09c0(uVar5);
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
    unaff_CS = 0x1010;
    FATALEXIT(0x1010,0xff,uVar5);
    in_AX = 2;
  } while( true );
}


// ---- FUN_1000_0a60 @ 1000:0a60

void __cdecl16near FUN_1000_0a60(void)

{
  undefined2 uVar1;
  int iVar2;
  int in_DX;
  
  uVar1 = DAT_1008_01ea;
  LOCK();
  DAT_1008_01ea = 0x1000;
  UNLOCK();
  iVar2 = FUN_1000_10e9();
  DAT_1008_01ea = uVar1;
  if (in_DX != 0 || iVar2 != 0) {
    return;
  }
  FUN_1000_0a18();
  return;
}


// ---- FUN_1000_0a8e @ 1000:0a8e

undefined2 __cdecl16far FUN_1000_0a8e(void)

{
  undefined2 unaff_SS;
  
  if (___EXPORTEDSTUB != (code)0xb8) {
    return unaff_SS;
  }
  return uRam10000e83;
}


// ---- FUN_1000_0a9e @ 1000:0a9e

void __cdecl16near FUN_1000_0a9e(void)

{
  return;
}


// ---- FUN_1000_0aa0 @ 1000:0aa0

undefined2 __cdecl16far FUN_1000_0aa0(char *param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 in_DX;
  undefined2 uVar3;
  
  while (uVar3 = (undefined2)((ulong)param_1 >> 0x10), (*(byte *)(*param_1 + 0xc3) & 8) != 0) {
    param_1 = (char *)CONCAT22(uVar3,(char *)param_1 + 1);
  }
  uVar1 = FUN_1000_0e96((char *)param_1,uVar3,0,0);
  iVar2 = FUN_1000_1064((char *)param_1,uVar3,uVar1);
  DAT_1008_0650 = *(undefined2 *)(iVar2 + 8);
  DAT_1008_0652 = *(undefined2 *)(iVar2 + 10);
  DAT_1008_0654 = *(undefined2 *)(iVar2 + 0xc);
  DAT_1008_0656 = *(undefined2 *)(iVar2 + 0xe);
  return 0x650;
}


// ---- FUN_1000_0afe @ 1000:0afe

void __cdecl16far FUN_1000_0afe(char *param_1,int param_2,undefined4 param_3)

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
    FUN_1000_0bc6(pcVar4,uVar6,pcVar4 + 1,uVar6);
  }
  return;
}


// ---- FUN_1000_0bac @ 1000:0bac

uint __cdecl16far FUN_1000_0bac(char *param_1)

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


// ---- FUN_1000_0bc6 @ 1000:0bc6

void __cdecl16far FUN_1000_0bc6(char *param_1,char *param_2)

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


// ---- FUN_1000_0c02 @ 1000:0c02

undefined2 * __cdecl16far FUN_1000_0c02(undefined2 *param_1,undefined1 param_2,uint param_3)

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


// ---- FUN_1000_0c4a @ 1000:0c4a

undefined2 * __cdecl16far FUN_1000_0c4a(undefined2 *param_1,undefined2 *param_2,uint param_3)

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
    lVar15 = FUN_1000_0eb0(puVar10,iVar13,puVar8,iVar14);
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
          iVar14 = iVar14 + 0x104;
        }
        if (puVar12 == (undefined2 *)0x0) {
          iVar13 = iVar13 + 0x104;
        }
      }
    }
    else {
      uVar6 = param_3 - 1;
      puVar9 = (undefined1 *)((int)puVar8 + uVar6);
      if (CARRY2((uint)puVar8,uVar6)) {
        iVar14 = iVar14 + 0x104;
      }
      puVar11 = (undefined1 *)((int)puVar10 + uVar6);
      if (CARRY2((uint)puVar10,uVar6)) {
        iVar13 = iVar13 + 0x104;
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
          iVar14 = iVar14 + -0x104;
        }
        if (puVar11 == (undefined1 *)0xffff) {
          iVar13 = iVar13 + -0x104;
        }
      }
    }
  }
  return puVar10;
}


// ---- FUN_1000_0d14 @ 1000:0d14

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __cdecl16far
FUN_1000_0d14(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

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
  _DAT_1008_01ce = param_1;
  _DAT_1008_01d0 = param_2;
  DAT_1008_01d2 = param_3;
  DAT_1008_01d4 = param_4;
  uVar6 = FUN_1000_0f1e(&iStack_2);
  puVar5 = (undefined1 *)&DAT_1008_01d6;
  puVar4 = (undefined1 *)&DAT_1008_01cf;
  for (iVar3 = (int)DAT_1008_01ce; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  *puVar5 = 0;
  DAT_1008_01c4 = in_BX & 0xff;
  DAT_1008_01c6 = (int)((ulong)uVar6 >> 0x10);
  DAT_1008_01c8 = (int)uVar6;
  DAT_1008_01ca = 0x1d6;
  DAT_1008_01cc = 0x1008;
  return 0x1c4;
}


// ---- FUN_1000_0d6a @ 1000:0d6a

void __cdecl16near FUN_1000_0d6a(void)

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
    FUN_1000_0e61();
    if ((*unaff_SI & 1) != 0) {
      in_CX = (in_CX - *unaff_SI) + -1;
    }
    uVar4 = *(uint *)(in_BX + 4);
    if (uVar4 != 0) {
      if (!CARRY2(in_CX + 2U,uVar4)) {
        uVar2 = FUN_1000_0a8e();
        uVar4 = *(uint *)&DAT_1008_01ea;
        if (uVar4 == 0x1000) goto LAB_1000_0dbc;
        uVar5 = 0x8000;
        while (uVar4 <= uVar5) {
          uVar5 = uVar5 >> 1;
          if (uVar5 == 0) goto LAB_1000_0dd5;
        }
        if (uVar5 < 8) goto LAB_1000_0dd5;
        uVar4 = uVar5 << 1;
        goto LAB_1000_0dbc;
      }
      uVar5 = 0xfff0;
      if (in_CX + 2U + uVar4 == 0) {
        while( true ) {
          bVar8 = false;
          iVar3 = FUN_1000_0dfb();
          if (!bVar8) break;
          if (uVar5 == 0xfff0) {
            return;
          }
LAB_1000_0dd5:
          uVar4 = 0x10;
LAB_1000_0dbc:
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


// ---- FUN_1000_0dfb @ 1000:0dfb

void __cdecl16near FUN_1000_0dfb(void)

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
LAB_1000_0e56:
    FUN_1000_0a18();
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
    goto LAB_1000_0e56;
    if ((*(byte *)(iVar5 + 2) & 4) != 0) {
      *(int *)(iVar5 + -2) = in_BX + -1;
    }
  }
  return;
}


// ---- FUN_1000_0e61 @ 1000:0e61

void __cdecl16near FUN_1000_0e61(void)

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


// ---- ___EXPORTEDSTUB @ 1000:0e82

undefined2 __cdecl16far ___EXPORTEDSTUB(void)

{
  return 0;
}


// ---- FUN_1000_0e96 @ 1000:0e96

uint __cdecl16far FUN_1000_0e96(char *param_1)

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


// ---- FUN_1000_0eb0 @ 1000:0eb0

undefined4 __stdcall16far FUN_1000_0eb0(uint param_1,int param_2,uint param_3,int param_4)

{
  return CONCAT22((param_2 - param_4) - (uint)(param_1 < param_3),param_1 - param_3);
}


// ---- FUN_1000_0f1e @ 1000:0f1e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined4 __cdecl16near FUN_1000_0f1e(void)

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
  
  pdVar30 = (double *)&DAT_1008_01ec;
  for (iVar18 = 4; Var14 = _DAT_1008_01ec, iVar18 != 0; iVar18 = iVar18 + -1) {
    pdVar3 = pdVar30;
    pdVar30 = (double *)((int)pdVar30 + 2);
    puVar1 = unaff_SI;
    unaff_SI = unaff_SI + 1;
    *(undefined2 *)pdVar3 = *puVar1;
  }
  uVar19 = DAT_1008_01ec._6_2_;
                    /* WARNING: Ignoring partial resolution of indirect */
  DAT_1008_01ec._7_1_ = DAT_1008_01ec._7_1_ & 0x7f;
  Var15 = _DAT_1008_01ec;
  DAT_1008_01ec = ABS((double)Var14);
  uVar24 = 0x20;
  if (((DAT_1008_01ec._0_2_ == 0 && DAT_1008_01ec._2_2_ == 0) && DAT_1008_01ec._4_2_ == 0) &&
      DAT_1008_01ec._6_2_ == 0) {
    DAT_1008_01f8 = 0x3001;
    _DAT_1008_01ec = (longdouble)Var15;
    return 1;
  }
  if ((int)uVar19 < 0) {
    uVar24 = 0x2d;
  }
  if ((~uVar19 & 0x7ff0) == 0) {
    _DAT_1008_01ec = (longdouble)Var15;
    return 0x10000;
  }
  DAT_1008_0225 = (undefined1)in_FPUControlWord;
  DAT_1008_0227._0_1_ = DAT_1008_0225;
  lVar35 = (longdouble)DAT_1008_01ec;
  DAT_1008_01ec._7_1_ = (byte)((unkuint10)lVar35 >> 0x38);
  DAT_1008_01f4 = (uint)((unkuint10)lVar35 >> 0x40);
  lVar12 = (ulong)DAT_1008_01f4 * 0x4d10 + (ulong)((DAT_1008_01f4 >> 8) * 0x4d);
  uVar19 = (uint)lVar12;
  iVar18 = ((int)((ulong)lVar12 >> 0x10) + (uint)CARRY2(uVar19,(uint)DAT_1008_01ec._7_1_ * 0x9a) +
           -0x1343) - (uint)(uVar19 + (uint)DAT_1008_01ec._7_1_ * 0x9a < 0x12f4);
  _DAT_1008_01ec = lVar35;
  _DAT_1008_0225 = in_FPUControlWord;
  FUN_1000_130c(iVar18,uVar24);
  DAT_1008_0223 =
       (uint)(_DAT_1000_0ed0 < lVar35) << 8 | (uint)(NAN(_DAT_1000_0ed0) || NAN(lVar35)) << 10 |
       (uint)(_DAT_1000_0ed0 == lVar35) << 0xe;
  if (_DAT_1000_0ed0 < lVar35 || (_DAT_1000_0ed0 == lVar35) != 0) {
    iVar18 = iVar18 + 1;
    lVar35 = _DAT_1000_0eda * lVar35;
  }
  DAT_1008_01ec._0_2_ = SUB102(lVar35,0);
  DAT_1008_01ec._2_2_ = (uint)((unkuint10)lVar35 >> 0x10);
  DAT_1008_01ec._4_2_ = (uint)((unkuint10)lVar35 >> 0x20);
  DAT_1008_01ec._6_2_ = (uint)((unkuint10)lVar35 >> 0x30);
  DAT_1008_01f4 = (uint)((unkuint10)lVar35 >> 0x40);
  bVar32 = false;
  bVar17 = 0;
  for (iVar20 = -(DAT_1008_01f4 + 0xc002); iVar20 != 0; iVar20 = iVar20 + -1) {
    uVar19 = DAT_1008_01ec._6_2_ & 1;
    DAT_1008_01ec._6_2_ = DAT_1008_01ec._6_2_ >> 1;
    bVar32 = (bVar17 & 1) != 0;
    bVar17 = (byte)(CONCAT11((DAT_1008_01ec._0_2_ & 1) != 0,bVar17) >> 1);
    DAT_1008_01ec._0_2_ = (uint)(CONCAT12((DAT_1008_01ec._2_2_ & 1) != 0,DAT_1008_01ec._0_2_) >> 1);
    DAT_1008_01ec._2_2_ = (uint)(CONCAT12((DAT_1008_01ec._4_2_ & 1) != 0,DAT_1008_01ec._2_2_) >> 1);
    DAT_1008_01ec._4_2_ = (uint)(CONCAT12(uVar19 != 0,DAT_1008_01ec._4_2_) >> 1);
  }
  uVar28 = DAT_1008_01ec._0_2_ + 0x39a + (uint)bVar32;
  uVar19 = (uint)(0xfc65 < DAT_1008_01ec._0_2_ || CARRY2(DAT_1008_01ec._0_2_ + 0x39a,(uint)bVar32));
  uVar26 = DAT_1008_01ec._2_2_ + uVar19;
  uVar19 = (uint)CARRY2(DAT_1008_01ec._2_2_,uVar19);
  uVar22 = DAT_1008_01ec._4_2_ + uVar19;
  uVar19 = DAT_1008_01ec._6_2_ + CARRY2(DAT_1008_01ec._4_2_,uVar19);
  iVar20 = 0x10;
  pcVar16 = (char *)((int)(undefined2 *)&DAT_1008_01f8 + 1);
  _DAT_1008_01ec = lVar35;
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
  DAT_1008_01f8 = CONCAT11(DAT_1008_01f8._1_1_,(char)iVar21 + '\x12');
  return CONCAT22(iVar18,1);
}


// ---- FUN_1000_1064 @ 1000:1064

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __cdecl16far FUN_1000_1064(int param_1,undefined2 param_2)

{
  uint uVar1;
  int unaff_BP;
  undefined2 unaff_SS;
  int local_8 [2];
  undefined2 local_4;
  int iStack_2;
  
  iStack_2 = unaff_BP + 1;
  local_4 = 0x1008;
  uVar1 = FUN_1000_134a(0,param_1,param_2,local_8,unaff_SS,0x646,0x1008);
  DAT_1008_0640 = local_8[0] - param_1;
  DAT_1008_063f = 0;
  if ((uVar1 & 4) != 0) {
    DAT_1008_063f = 2;
  }
  if ((uVar1 & 1) != 0) {
    DAT_1008_063f = DAT_1008_063f | 1;
  }
  DAT_1008_063e = (uVar1 & 2) != 0;
  return 0x63e;
}


// ---- FUN_1000_10c8 @ 1000:10c8

undefined2 __cdecl16far FUN_1000_10c8(undefined4 param_1)

{
  byte *pbVar1;
  int iVar2;
  
  iVar2 = (int)((ulong)param_1 >> 0x10);
  if (iVar2 != 0) {
    pbVar1 = (byte *)((int)param_1 + -2);
    *pbVar1 = *pbVar1 | 1;
  }
  return 0x1008;
}


// ---- FUN_1000_10e9 @ 1000:10e9

undefined2 __cdecl16far FUN_1000_10e9(uint param_1)

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
      if (*(int *)((int)(undefined4 *)&DAT_1008_0244 + 2) != 0) {
        pcVar4 = (code *)0x1442;
        while( true ) {
          uVar3 = *(uint *)&DAT_1008_024e;
          uVar6 = (uint)((ulong)*(undefined4 *)&DAT_1008_0248 >> 0x10);
          in_BX = (int)*(undefined4 *)&DAT_1008_0248;
          uVar10 = uVar6;
          do {
            do {
              unaff_CS = 0x1000;
              uVar9 = (*pcVar4)();
              if (!bVar7) {
                if (pcVar4 == (code *)0x1442) goto LAB_1000_115a;
                goto LAB_1000_1157;
              }
              puVar1 = (undefined4 *)(in_BX + 0xe);
              in_BX = (int)*puVar1;
              bVar7 = uVar6 < uVar3;
              bVar8 = uVar6 != uVar3;
              uVar6 = (uint)((ulong)*puVar1 >> 0x10);
            } while (bVar8);
            uVar3 = *(uint *)((int)*(undefined4 *)&DAT_1008_0248 + 0x14);
            uVar6 = (uint)((ulong)*(undefined4 *)&DAT_1008_0244 >> 0x10);
            in_BX = (int)*(undefined4 *)&DAT_1008_0244;
            bVar7 = uVar6 < uVar10;
            bVar8 = uVar6 != uVar10;
            uVar10 = uVar6;
          } while (bVar8);
          bVar7 = pcVar4 < (code *)0xd6a;
          if (pcVar4 == (code *)0xd6a) break;
          pcVar4 = (code *)0xd6a;
        }
      }
      FUN_1000_13b2();
      if (!bVar7) {
LAB_1000_1157:
        uVar9 = FUN_1000_1442();
LAB_1000_115a:
        *(undefined2 *)((int)(undefined4 *)&DAT_1008_0248 + 2) = (int)((ulong)uVar9 >> 0x10);
        *(int *)&DAT_1008_0248 = in_BX;
        return (int)uVar9;
      }
    }
    if (*(int *)&DAT_1008_0238 == 0 && *(int *)&DAT_1008_0236 == 0) {
      return 0;
    }
    iVar2 = (*(code *)*(undefined2 *)&DAT_1008_0236)(unaff_CS,param_1);
    if (iVar2 == 0) {
      return 0;
    }
  } while( true );
}


// ---- FUN_1000_130c @ 1000:130c

void __cdecl16near FUN_1000_130c(void)

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


// ---- FUN_1000_134a @ 1000:134a

/* WARNING: Removing unreachable block (ram,0x100013a0) */
/* WARNING: Removing unreachable block (ram,0x100013a9) */

int FUN_1000_134a(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
                 undefined2 param_5,double *param_6)

{
  int iVar1;
  undefined2 unaff_SS;
  longdouble local_c;
  
  iVar1 = FUN_1000_14be(param_1,param_2,param_3,param_4,param_5,&local_c,unaff_SS);
  *param_6 = (double)local_c;
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  return iVar1;
}


// ---- FUN_1000_13b2 @ 1000:13b2

void __cdecl16near FUN_1000_13b2(void)

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
      if (((int)uVar4 != 0) || (iVar1 == 0)) goto LAB_1000_1429;
    }
    lVar5 = GLOBALSIZE(0x1010,iVar1);
    if (lVar5 == 0) {
LAB_1000_1429:
      FUN_1000_0a18();
      return;
    }
    *(int *)0x6 = iVar2;
    *(undefined2 *)0x2 = *(undefined2 *)(unaff_DI + 0xc);
    FUN_1000_1750();
    FUN_1000_1784();
  }
  return;
}


// ---- FUN_1000_1434 @ 1000:1434

void __cdecl16near FUN_1000_1434(void)

{
  FUN_1000_1726();
  return;
}


// ---- FUN_1000_1442 @ 1000:1442

uint * __cdecl16near FUN_1000_1442(void)

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
          if (CARRY2((uint)puVar1,uVar2)) goto LAB_1000_149b;
          puVar6 = (uint *)((int)puVar1 + uVar2) + 1;
          uVar3 = *(uint *)((int)puVar1 + uVar2);
          if ((uVar3 & 1) == 0) break;
          uVar3 = uVar3 + uVar2 + 2;
          *puVar7 = uVar3;
        }
      }
      if (puVar6 + -1 < puVar5) break;
      if (((uint)puVar5 & 1) != 0) goto LAB_1000_149b;
      puVar7 = (uint *)*(undefined2 *)(in_BX + 8);
      if ((uint *)*(undefined2 *)(in_BX + 10) == puVar7) goto LAB_1000_149b;
      puVar5 = (uint *)((int)*(undefined2 *)(in_BX + 10) + -1);
    }
    puVar7 = (uint *)((int)puVar6 + uVar3);
  } while (!CARRY2((uint)puVar6,uVar3));
LAB_1000_149b:
  puVar7 = (uint *)*(undefined2 *)(in_BX + 8);
  *(undefined2 *)(in_BX + 10) = puVar7;
  return puVar7;
}


// ---- FUN_1000_14be @ 1000:14be

uint FUN_1000_14be(undefined2 param_1,byte *param_2,int *param_3,uint *param_4)

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
LAB_1000_150d:
      pbVar1 = pbVar11;
      pbVar11 = pbVar9 + 2;
      bVar6 = *pbVar1;
    }
    else if (bVar6 == 0x2d) {
      local_16 = 0x8000;
      goto LAB_1000_150d;
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
            if (local_1c == 0) goto LAB_1000_155b;
            pbVar1 = pbVar11;
            pbVar11 = pbVar11 + 1;
            bVar6 = *pbVar1;
          }
          if (bVar6 == 0x2e) {
            do {
              pbVar1 = pbVar11;
              pbVar11 = pbVar11 + 1;
              bVar6 = *pbVar1;
LAB_1000_1575:
              if ((bVar6 < 0x30) || (0x39 < bVar6)) goto LAB_1000_1591;
              pcVar2 = pcVar10;
              pcVar10 = pcVar10 + 1;
              *pcVar2 = bVar6 - 0x30;
              local_18 = local_18 + -1;
              local_1c = local_1c + -1;
            } while (local_1c != 0);
            goto LAB_1000_1588;
          }
          goto LAB_1000_1591;
        }
        do {
          local_18 = iVar5;
          bVar6 = *pbVar11;
LAB_1000_153a:
          pbVar11 = pbVar11 + 1;
          iVar5 = local_18 + -1;
        } while (bVar6 == 0x30);
        if (bVar6 != 0) goto LAB_1000_1575;
      }
      local_14 = pbVar11 + -1;
      goto LAB_1000_16f3;
    }
    if ((bVar6 == 0x2e) && ((bVar6 = *pbVar11, 0x2f < bVar6 && (bVar6 < 0x3a)))) goto LAB_1000_153a;
  }
  local_10 = 4;
  goto LAB_1000_16f3;
  while (iVar5 = local_18 + 1, bVar6 < 0x3a) {
LAB_1000_155b:
    local_18 = iVar5;
    pbVar1 = pbVar11;
    pbVar11 = pbVar11 + 1;
    bVar6 = *pbVar1;
    if (bVar6 < 0x30) break;
  }
  if (bVar6 == 0x2e) {
LAB_1000_1588:
    do {
      pbVar1 = pbVar11;
      pbVar11 = pbVar11 + 1;
      bVar6 = *pbVar1;
      if (bVar6 < 0x30) break;
    } while (bVar6 < 0x3a);
  }
LAB_1000_1591:
  local_1c = 0x19 - local_1c;
  local_14 = pbVar11 + -1;
  if ((((bVar6 == 0x45) || (bVar6 == 0x65)) || (bVar6 == 0x44)) || (bVar6 == 100)) {
    pbVar9 = pbVar11 + 1;
    bVar6 = *pbVar11;
    if (bVar6 == 0x2b) {
LAB_1000_15c0:
      pbVar1 = pbVar9;
      pbVar9 = pbVar11 + 2;
      bVar6 = *pbVar1;
    }
    else if (bVar6 == 0x2d) {
      local_1a = 0xffff;
      goto LAB_1000_15c0;
    }
    if ((0x2f < bVar6) && (bVar6 < 0x3a)) {
      uVar7 = bVar6 - 0x30;
      uVar8 = uVar7;
      do {
        pbVar1 = pbVar9;
        pbVar9 = pbVar9 + 1;
        bVar6 = *pbVar1;
        if ((bVar6 < 0x30) || (0x39 < bVar6)) goto LAB_1000_15f7;
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
LAB_1000_15f7:
      local_18 = local_18 + ((uVar8 ^ local_1a) - local_1a);
      local_14 = pbVar9 + -1;
    }
  }
  if (local_1c != 0) {
    *pcVar10 = '\0';
    pbVar11 = (byte *)(pcVar10 + -1);
    if (local_1c < 0x19) {
      if (local_18 != 0) goto LAB_1000_163e;
    }
    else {
      bVar6 = *pbVar11;
      *pbVar11 = 0;
      local_1c = local_1c - 1;
      local_18 = local_18 + 1;
      pbVar11 = (byte *)(pcVar10 + -2);
      if (bVar6 < 5) {
LAB_1000_163e:
        for (; *pbVar11 == 0; pbVar11 = pbVar11 + -1) {
          local_1c = local_1c - 1;
          local_18 = local_18 + 1;
        }
      }
      else {
        *pbVar11 = *pbVar11 + 1;
      }
    }
    FUN_1000_1ccc(&local_e,local_1c,local_36,unaff_SS);
    if (local_18 == 0) {
LAB_1000_1678:
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
          goto LAB_1000_16d5;
        }
LAB_1000_16ff:
        local_10 = local_10 | 1;
        goto LAB_1000_16f3;
      }
    }
    else if (local_18 < 0x1450) {
      if (-0x1450 < local_18) {
        FUN_1000_1a72(param_1,local_18,&local_e,unaff_SS);
        goto LAB_1000_1678;
      }
      goto LAB_1000_16ff;
    }
    local_10 = local_10 | 2;
    puVar12[4] = local_16 | 0x7fff;
    puVar12[3] = 0x8000;
    puVar12[2] = 0;
    puVar12[1] = 0;
    *param_4 = 0;
    goto LAB_1000_16d5;
  }
LAB_1000_16f3:
  for (iVar14 = 5; iVar14 != 0; iVar14 = iVar14 + -1) {
    puVar3 = puVar12;
    puVar12 = puVar12 + 1;
    *puVar3 = 0;
  }
LAB_1000_16d5:
  *param_3 = (int)local_14;
  ((int *)param_3)[1] = local_12;
  return local_10;
}


// ---- FUN_1000_1726 @ 1000:1726

void __cdecl16near FUN_1000_1726(void)

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


// ---- FUN_1000_1750 @ 1000:1750

void __cdecl16near FUN_1000_1750(void)

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


// ---- FUN_1000_1784 @ 1000:1784

void __cdecl16near FUN_1000_1784(void)

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


// ---- FUN_1000_1a72 @ 1000:1a72

void FUN_1000_1a72(int param_1,uint param_2,undefined2 *param_3)

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
    local_8 = (code *)0x1b10;
    uVar2 = (undefined2)((ulong)param_3 >> 0x10);
    uStack_e = param_2;
    if (param_1 == 0) {
      local_8 = (code *)0x1b06;
      in_ST0 = *(unkbyte10 *)((undefined2 *)param_3 + 1);
    }
    while (uStack_e != 0) {
      uVar1 = uStack_e & 7;
      uStack_e = uStack_e >> 3;
      if (uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x10001adc. Too many branches */
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


// ---- FUN_1000_1ccc @ 1000:1ccc

uint * FUN_1000_1ccc(uint *param_1,int param_2,byte *param_3)

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
    FUN_1000_1d7a();
    uVar18 = FUN_1000_1d7a();
    uVar8 = (uint)CARRY2((uint)((ulong)uVar18 >> 0x10),uVar8);
    uVar4 = uVar13 + uVar5 + uVar8;
    uVar13 = (uint)(CARRY2(uVar13,uVar5) || CARRY2(uVar13 + uVar5,uVar8));
    bVar17 = CARRY2(uVar6,uVar10);
    uVar6 = uVar6 + uVar10;
    uVar11 = uVar6 + uVar13;
    bVar15 = CARRY2((uint)uVar18,uVar3);
    uVar1 = (uint)uVar18 + uVar3;
    uVar18 = FUN_1000_1d7a();
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


// ---- FUN_1000_1d7a @ 1000:1d7a

undefined4 __cdecl16near FUN_1000_1d7a(void)

{
  int in_AX;
  int in_DX;
  uint in_BX;
  
  return CONCAT22(in_DX << 1,in_AX << 1 | (uint)((in_BX & 0x8000) != 0));
}


// ---- FUN_1000_1d90 @ 1000:1d90

undefined2 __stdcall16far FUN_1000_1d90(void)

{
  return 1;
}


// ---- WEP @ 1000:1da2

undefined2 __stdcall16far WEP(void)

{
  return 1;
}


// ---- MODE_REPORTID @ 1000:1db4

void __cdecl16far MODE_REPORTID(void)

{
  undefined2 unaff_CS;
  
  UIF_MESSAGE(unaff_CS,0x20f4,0x1000);
  return;
}


// ---- INITIALISE_MODE_CONTROLLER_DATA @ 1000:1dce

void __cdecl16far INITIALISE_MODE_CONTROLLER_DATA(void)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  M007_PUTHIGH(unaff_CS,DAT_1008_0264,DAT_1008_0266);
  M007_PUTLOW(0x1010,DAT_1008_0268,DAT_1008_026a);
  M007_PUTVALUE(0x1010,DAT_1008_026c,DAT_1008_026e);
  M007_PUTHIGH(0x1010,DAT_1008_0270,DAT_1008_0272);
  M007_PUTLOW(0x1010,DAT_1008_0274,DAT_1008_0276);
  M007_PUTVALUE(0x1010,DAT_1008_0264,DAT_1008_0266);
  M007_PUTHIGH(0x1010,DAT_1008_0278,DAT_1008_027a);
  M007_PUTLOW(0x1010,DAT_1008_027c,DAT_1008_027e);
  M007_PUTVALUE(0x1010,DAT_1008_0280,DAT_1008_0282);
  M007_PUTVALUE(0x1010,DAT_1008_0284,DAT_1008_0286);
  M007_PUTVALUE(0x1010,DAT_1008_0264,DAT_1008_0266);
  M007_PUTVALUE(0x1010,DAT_1008_0280,DAT_1008_0282);
  M007_PUTVALUE(0x1010,DAT_1008_0274,DAT_1008_0276);
  M007_PUTVALUE(0x1010,DAT_1008_027c,DAT_1008_027e);
  M007_PUTVALUE(0x1010,DAT_1008_0274,DAT_1008_0276);
  M007_PUTVALUE(0x1010,DAT_1008_027c,DAT_1008_027e);
  M007_PUTVALUE(0x1010,DAT_1008_027c,DAT_1008_027e);
  M007_PUTVALUE(0x1010,DAT_1008_0288,DAT_1008_028a);
  M007_PUTVALUE(0x1010,DAT_1008_0288,DAT_1008_028a);
  M007_PUTVALUE(0x1010,DAT_1008_0288,DAT_1008_028a);
  M007_PUTVALUE(0x1010,DAT_1008_0288,DAT_1008_028a);
  M007_PUTVALUE(0x1010,DAT_1008_0288,DAT_1008_028a);
  M007_PUTVALUE(0x1010,DAT_1008_0288,DAT_1008_028a);
  M007_PUTVALUE(0x1010,DAT_1008_0288,DAT_1008_028a);
  M007_PUTVALUE(0x1010,DAT_1008_0288,DAT_1008_028a);
  M007_PUTVALUE(0x1010,DAT_1008_0264,DAT_1008_0266);
  M007_PUTLOW(0x1010,DAT_1008_0288,DAT_1008_028a);
  M007_PUTLOW(0x1010,DAT_1008_028c,DAT_1008_028e);
  M007_PUTLOW(0x1010,DAT_1008_0288,DAT_1008_028a);
  M007_PUTHIGH(0x1010,DAT_1008_0290,DAT_1008_0292);
  M007_PUTHIGH(0x1010,DAT_1008_0294,DAT_1008_0296);
  M007_PUTHIGH(0x1010,DAT_1008_0270,DAT_1008_0272);
  M007_PUTHIGH(0x1010,DAT_1008_0294,DAT_1008_0296);
  M007_PUTHIGH(0x1010,DAT_1008_0270,DAT_1008_0272);
  M007_PUTHIGH(0x1010,DAT_1008_0294,DAT_1008_0296);
  M007_PUTHIGH(0x1010,DAT_1008_0270,DAT_1008_0272);
  M007_PUTHIGH(0x1010,DAT_1008_0294,DAT_1008_0296);
  M007_PUTHIGH(0x1010,DAT_1008_0298,DAT_1008_029a);
  M007_PUTHIGH(0x1010,DAT_1008_029c,DAT_1008_029e);
  uVar4 = 0x4e;
  M007_PUTHIGH(0x1010,DAT_1008_0294,DAT_1008_0296);
  uVar3 = 0x4f;
  M007_PUTHIGH(0x1010,DAT_1008_0270,DAT_1008_0272);
  uVar2 = 0x3a;
  M007_PUTVALUE(0x1010,DAT_1008_026c,DAT_1008_026e);
  uVar1 = 0x3b;
  M007_PUTVALUE(0x1010,DAT_1008_027c,DAT_1008_027e);
  MODE_REPORTID(uVar1,uVar2,uVar3,uVar4);
  return;
}


// ---- INITIALISE_MODE_CONTROLLER @ 1000:2076

undefined2 __cdecl16far INITIALISE_MODE_CONTROLLER(void)

{
  int iVar1;
  
  iVar1 = M007_GETSTATE();
  if (iVar1 == 2) {
    M007_PUTLOW(0x1010,DAT_1008_02a0,DAT_1008_02a2);
  }
  return 0;
}


// ---- MODE_CONTROLLER_SHUTDOWN @ 1000:20a0

undefined2 __cdecl16far MODE_CONTROLLER_SHUTDOWN(void)

{
  return 0;
}


// ---- MODE_TIMER_TICK @ 1000:20ae

undefined2 __stdcall16far MODE_TIMER_TICK(void)

{
  return 0x1008;
}


// ---- RESTORE_MODES_CONFIG @ 1000:20bc

undefined2 __stdcall16far RESTORE_MODES_CONFIG(void)

{
  return 0x1008;
}


// ---- GET_MODES_CONFIG @ 1000:20ca

undefined2 __stdcall16far GET_MODES_CONFIG(void)

{
  return 0x1008;
}


// ---- MODE_CONTROLLER_SUSPEND @ 1000:20d8

undefined2 __cdecl16far MODE_CONTROLLER_SUSPEND(void)

{
  return 0;
}


// ---- MODE_CONTROLLER_REMOVE @ 1000:20e6

undefined2 __cdecl16far MODE_CONTROLLER_REMOVE(void)

{
  return 0;
}


// ---- FUN_1000_2112 @ 1000:2112

void __cdecl16far FUN_1000_2112(void)

{
  int iVar1;
  
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    SWITCHCROSSHAIRS(0);
    SWITCHCROSSHAIRS(1);
  }
  return;
}


// ---- FUN_1000_2138 @ 1000:2138

void __cdecl16far FUN_1000_2138(undefined2 param_1)

{
  undefined2 unaff_CS;
  
  switch(param_1) {
  case 0:
    unaff_CS = 0x1000;
    DOCOMMANDMODE_NORMAL();
    break;
  case 1:
    unaff_CS = 0x1000;
    DOCOMMANDMODE_SPLIT();
    break;
  case 2:
    unaff_CS = 0x1000;
    DOCOMMANDMODE_QUAD();
    break;
  case 3:
    unaff_CS = 0x1000;
    DOCOMMANDMODE_EMISSION();
    break;
  case 4:
    unaff_CS = 0x1000;
    DOCOMMANDMODE_SMALL();
    break;
  case 5:
    unaff_CS = 0x1000;
    DOCOMMANDMODE_REDUCED(0x1008);
  }
  if (DAT_1008_0018 == 1) {
    SWITCHDYNFOCUS(unaff_CS,1);
    DAT_1008_0018 = 0;
  }
  return;
}


// ---- DRAWZOOMBOX @ 1000:21a0

undefined2 __cdecl16far DRAWZOOMBOX(void)

{
  return 0x1008;
}


// ---- DOTEMPNORMALMODE @ 1000:21ac

void __cdecl16far DOTEMPNORMALMODE(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1008;
  uVar1 = 0x1e;
  DAT_1008_0630 = M007_GETSTATE();
  DAT_1008_0632 = M007_GETSTATE(0x1010,0x1f,uVar1,uVar2);
  DAT_1008_0634 = M007_GETSTATE(0x1010,0x20);
  DOCOMMANDMODE_NORMAL();
  return;
}


// ---- UNDOTEMPNORMALMODE @ 1000:21dc

void __cdecl16far UNDOTEMPNORMALMODE(void)

{
  FUN_1000_2138(DAT_1008_0630,0x1008);
  if (DAT_1008_0632 == 1) {
    SWITCHZOOM(1);
  }
  if (DAT_1008_0634 == 1) {
    SWITCHWINDOWING(0x1000,1);
  }
  return;
}


// ---- FUN_1000_220e @ 1000:220e

void __cdecl16far FUN_1000_220e(undefined2 param_1)

{
  switch(param_1) {
  case 0:
    DOCOMMANDSCANRATE0(0x1000);
    break;
  case 1:
    DOCOMMANDSCANRATE1(0x1000);
    break;
  case 2:
    DOCOMMANDSCANRATE2(0x1000);
    break;
  case 3:
    DOCOMMANDSCANRATE3(0x1000);
    break;
  case 4:
    DOCOMMANDSCANRATE4(0x1000);
    break;
  case 5:
    DOCOMMANDSCANRATE5(0x1000);
    break;
  case 6:
    DOCOMMANDSCANRATE6(0x1000);
    break;
  case 7:
    DOCOMMANDSCANRATE7(0x1000);
    break;
  case 8:
    DOCOMMANDSCANRATE8(0x1000);
    break;
  case 9:
    DOCOMMANDSCANRATE9(0x1000);
    break;
  case 10:
    DOCOMMANDSCANRATE10(0x1000);
    break;
  case 0xb:
    DOCOMMANDSCANRATE11(0x1000);
    return;
  case 0xc:
    DOCOMMANDSCANRATE12(0x1000);
    return;
  case 0xd:
    DOCOMMANDSCANRATE13(0x1000);
    return;
  case 0xe:
    DOCOMMANDSCANRATE14(0x1000);
    return;
  case 0xf:
    DOCOMMANDSCANRATE15(0x1000,0x1008);
    return;
  }
  return;
}


// ---- FUN_1000_22c6 @ 1000:22c6

void __cdecl16far FUN_1000_22c6(void)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar4 = 0x1008;
  uVar3 = 0x11;
  iVar1 = M007_GETSTATE();
  iVar2 = M007_GETSTATE(0x1010,0xad,uVar3,uVar4);
  if (iVar2 <= iVar1) {
    return;
  }
  uVar3 = 0x22ed;
  iVar1 = M007_GETSTATE(0x1010,0xad);
  if (iVar1 == 1) {
    iVar1 = COMMANDENABLE(0x1010,0x1e);
    if (iVar1 == 0) {
      DOCOMMANDSCANRATE1(0x1010);
      return;
    }
LAB_1000_2301:
    uVar3 = 0x1f;
    iVar1 = COMMANDENABLE(0x1010,0x1f);
    if (iVar1 == 0) {
      DOCOMMANDSCANRATE2(0x1010);
      return;
    }
  }
  else {
    if (iVar1 == 2) goto LAB_1000_2301;
    if (iVar1 != 3) {
      if (iVar1 != 4) {
        return;
      }
      goto LAB_1000_2325;
    }
  }
  iVar1 = COMMANDENABLE(0x1010,0x20,uVar3);
  if (iVar1 == 0) {
    DOCOMMANDSCANRATE3(0x1010);
    return;
  }
LAB_1000_2325:
  iVar1 = COMMANDENABLE(0x1010,0x21);
  if (iVar1 == 0) {
    DOCOMMANDSCANRATE4(0x1010);
  }
  else {
    DOCOMMANDSCANRATE5(0x1010);
  }
  return;
}


// ---- FUN_1000_234e @ 1000:234e

void __cdecl16far FUN_1000_234e(void)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  
  if (DAT_1008_0010 == 0) {
    return;
  }
  if (DAT_1008_0012 == '\0') {
    if (DAT_1008_0014 < (float)DAT_1008_02a4) {
      M007_PUTVALUE(unaff_CS,1.0 / DAT_1008_0014);
      M007_PUTVALUE(0x1010,1.0 / DAT_1008_0014);
      M007_PUTVALUE(0x1010,DAT_1008_02ac,DAT_1008_02ae);
      uVar1 = DAT_1008_02ac;
      uVar2 = DAT_1008_02ae;
      goto LAB_1000_245c;
    }
    M007_PUTVALUE(unaff_CS,DAT_1008_02ac,DAT_1008_02ae);
    M007_PUTVALUE(0x1010,DAT_1008_02ac,DAT_1008_02ae);
    M007_PUTVALUE(0x1010,DAT_1008_0014._0_2_,DAT_1008_0014._2_2_);
  }
  else {
    if (DAT_1008_0014 < (float)DAT_1008_02a4) {
      M007_PUTVALUE(unaff_CS,1.0 / DAT_1008_0014);
      uVar1 = DAT_1008_02ac;
      uVar2 = DAT_1008_02ae;
      goto LAB_1000_245c;
    }
    M007_PUTVALUE(unaff_CS,DAT_1008_02ac,DAT_1008_02ae);
  }
  uVar1 = DAT_1008_0014._0_2_;
  uVar2 = DAT_1008_0014._2_2_;
LAB_1000_245c:
  M007_PUTVALUE(0x1010,uVar1,uVar2);
  return;
}


// ---- POINTASZONE @ 1000:2464

int __stdcall16far POINTASZONE(int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  int local_4;
  
  uVar4 = 0x1008;
  if ((((param_3 < 0) || (0x3ff < param_3)) || (param_2 < 0)) || (0x2ff < param_2)) {
    local_4 = -1;
  }
  else {
    uVar3 = 0x20;
    iVar2 = M007_GETSTATE();
    if (iVar2 == 1) {
      cVar1 = POINTINWINDOW(0x1010,param_2);
      local_4 = (int)cVar1;
    }
    else {
      iVar2 = M007_GETSTATE(0x1010,0x75,uVar3,uVar4);
      if (iVar2 == 0) {
        local_4 = 0;
      }
      else {
        local_4 = 4;
      }
      if (param_1 == 1) {
        if (param_3 < 0x200) {
          return local_4;
        }
      }
      else {
        if (param_1 != 2) {
          return local_4;
        }
        if (param_3 < 0x200) {
          if (param_2 < 0x180) {
            return local_4;
          }
          return local_4 + 2;
        }
        if (0x17f < param_2) {
          return local_4 + 3;
        }
      }
      local_4 = local_4 + 1;
    }
  }
  return local_4;
}


// ---- FUN_1000_250c @ 1000:250c

void __cdecl16far FUN_1000_250c(void)

{
  undefined2 uVar1;
  
  uVar1 = 0x1008;
  SWITCHZOOM(0);
  SWITCHSPOT(0);
  SWITCHLINE_SCAN(0);
  SWITCHWINDOWING(0x1000,0,uVar1);
  return;
}


// ---- FUN_1000_2534 @ 1000:2534

void __cdecl16far FUN_1000_2534(void)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1008;
  SETXYCROSS(DAT_1008_02b4,DAT_1008_02b6,DAT_1008_02b0,DAT_1008_02b2);
  iVar1 = M007_GETSTATE(0x1000,0x1e,uVar2);
  if (iVar1 == 3) {
    SETEOEMISSION(0x1010,DAT_1008_02b8);
  }
  return;
}


// ---- SWITCHHIGH_RES @ 1000:256e

void __stdcall16far SWITCHHIGH_RES(undefined2 param_1)

{
  undefined2 unaff_CS;
  
  M007_PUTSTATE(unaff_CS,param_1);
  return;
}


// ---- SWITCHFREEZE_BLANKS @ 1000:2586

void __stdcall16far SWITCHFREEZE_BLANKS(undefined2 param_1)

{
  undefined2 unaff_CS;
  
  M007_PUTSTATE(unaff_CS,param_1);
  return;
}


// ---- DOCOMMANDMODE_TV @ 1000:25a0

undefined2 __cdecl16far DOCOMMANDMODE_TV(void)

{
  return 0x1008;
}


// ---- DOCOMMANDMODE_NORMAL @ 1000:25ac

void __cdecl16far DOCOMMANDMODE_NORMAL(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  
  FUN_1000_250c(0x1008);
  iVar1 = M007_GETSTATE(0x1000,0xcd);
  if (iVar1 == 1) {
    STOP_FEATURESCAN(0x1010);
  }
  FUN_1000_2534();
  uVar5 = 0xad;
  M007_PUTSTATE(0x1000,0);
  uVar4 = 0x1e;
  M007_PUTSTATE(0x1010,0);
  DAT_1008_0012 = 1;
  FUN_1000_234e(uVar4,uVar5);
  DOCOMMANDUNFREEZE_ALL(0x1000);
  uVar4 = 0;
  SETEOCOLUMNSCAN(0x1010,0x300,0x400,0,0);
  Z130_UPDATE_DETECTORS(0x1010,uVar4);
  UPDATE_DETECTORS(0x1010);
  FUN_1000_2112();
  uVar3 = 0x2618;
  uVar2 = M007_GETSTATE(0x1000,100);
  if ((uVar2 & 3) != 0) {
    uVar3 = M007_GETSTATE(0x1010,100);
    uVar3 = uVar3 & 4;
    SWITCHZONE(0x1010,uVar3);
  }
  CHECKFORBEAMBLANKING(0x1010,uVar3);
  return;
}


// ---- DOCOMMANDMODE_SPLIT @ 1000:2634

void __cdecl16far DOCOMMANDMODE_SPLIT(void)

{
  uint uVar1;
  uint uVar2;
  undefined2 uVar3;
  
  FUN_1000_250c(0x1008);
  FUN_1000_2534();
  uVar3 = 0xad;
  M007_PUTSTATE(0x1000,1);
  FUN_1000_22c6(uVar3);
  uVar3 = 0x1e;
  M007_PUTSTATE(0x1000,1);
  DAT_1008_0012 = 0;
  FUN_1000_234e(uVar3);
  DOCOMMANDUNFREEZE_ALL(0x1000);
  uVar3 = 1;
  SETEOCOLUMNSCAN(0x1010,0x300,0x200,0,0);
  Z130_UPDATE_DETECTORS(0x1010,uVar3);
  UPDATE_DETECTORS(0x1010);
  FUN_1000_2112();
  uVar2 = 0x2695;
  uVar1 = M007_GETSTATE(0x1000,100);
  if ((uVar1 & 1) != 0) {
    uVar2 = M007_GETSTATE(0x1010,100);
    uVar2 = uVar2 & 4;
    SWITCHZONE(0x1010,uVar2);
  }
  CHECKFORBEAMBLANKING(0x1010,uVar2);
  return;
}


// ---- DOCOMMANDMODE_QUAD @ 1000:26b2

void __cdecl16far DOCOMMANDMODE_QUAD(void)

{
  undefined2 uVar1;
  
  FUN_1000_250c(0x1008);
  FUN_1000_2534();
  uVar1 = 0xad;
  M007_PUTSTATE(0x1000,1);
  FUN_1000_22c6(uVar1);
  uVar1 = 0x1e;
  M007_PUTSTATE(0x1000,2);
  DOCOMMANDUNFREEZE_ALL(0x1010,uVar1);
  uVar1 = 2;
  SETEOCOLUMNSCAN(0x1010,0x180,0x200,0,0);
  FUN_1000_2112(uVar1);
  Z130_UPDATE_DETECTORS(0x1000);
  UPDATE_DETECTORS(0x1010);
  CHECKFORBEAMBLANKING(0x1010);
  return;
}


// ---- DOCOMMANDMODE_SMALL @ 1000:270a

void __cdecl16far DOCOMMANDMODE_SMALL(void)

{
  undefined2 uVar1;
  
  FUN_1000_250c(0x1008);
  FUN_1000_2534();
  uVar1 = 0xad;
  M007_PUTSTATE(0x1000,1);
  FUN_1000_22c6(uVar1);
  uVar1 = 0x1e;
  M007_PUTSTATE(0x1000,4);
  DOCOMMANDUNFREEZE_ALL(0x1010,uVar1);
  uVar1 = 0;
  SETEOCOLUMNSCAN(0x1010,0x180,0x200,0xc0,0x100);
  FUN_1000_2112(uVar1);
  Z130_UPDATE_DETECTORS(0x1000);
  UPDATE_DETECTORS(0x1010);
  CHECKFORBEAMBLANKING(0x1010);
  return;
}


// ---- DOCOMMANDMODE_REDUCED @ 1000:2764

void __cdecl16far DOCOMMANDMODE_REDUCED(void)

{
  int iVar1;
  uint uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined4 local_1e;
  undefined4 local_1a;
  undefined4 local_16;
  undefined4 *local_12;
  undefined4 *puStack_10;
  undefined4 *local_e;
  undefined4 **local_c;
  undefined2 local_a;
  int local_8;
  int local_6;
  undefined2 local_4;
  
  uVar4 = 0x1008;
  uVar3 = 0x11;
  iVar1 = ISLICENCED();
  if (iVar1 != 1) {
    iVar1 = M007_GETSTATE(0x1010,0xa5,uVar3,uVar4);
    if (iVar1 != 1) {
      uVar3 = 0x1000;
      DOCOMMANDMODE_SMALL();
      goto LAB_1000_2915;
    }
  }
  local_a = 0x1010;
  local_c = (undefined4 **)0x278b;
  FUN_1000_250c();
  local_a = 0x1000;
  local_c = (undefined4 **)0x2790;
  FUN_1000_2534();
  local_4 = 0x40;
  local_a = 0x4c;
  local_c = &local_12;
  local_e = (undefined4 *)0x1000;
  puStack_10 = (undefined4 *)0x27a0;
  M007_GETVALUE();
  local_c = (undefined4 **)0x1010;
  local_e = (undefined4 *)0x27ab;
  local_6 = FUN_1000_010e();
  local_c = (undefined4 **)0x4d;
  local_e = &local_16;
  puStack_10 = (undefined4 *)0x1000;
  local_12 = (undefined4 *)0x27b9;
  M007_GETVALUE();
  local_e = (undefined4 *)0x1010;
  puStack_10 = (undefined4 *)0x27c4;
  local_8 = FUN_1000_010e();
  local_e = (undefined4 *)0x4e;
  puStack_10 = &local_1a;
  local_12 = (undefined4 *)0x1000;
  local_16 = (float)CONCAT22(0x27d2,(undefined2)local_16);
  M007_GETVALUE();
  puStack_10 = (undefined4 *)0x1010;
  local_12 = (undefined4 *)0x27dd;
  local_c = (undefined4 **)FUN_1000_010e();
  puStack_10 = (undefined4 *)0x4f;
  local_12 = &local_1e;
  local_16 = 2.52743e-29;
  M007_GETVALUE();
  local_12 = (undefined4 *)0x1010;
  local_16 = (float)CONCAT22(0x27f6,(undefined2)local_16);
  local_e = (undefined4 *)FUN_1000_010e();
  local_c = (undefined4 **)(((int)((int)local_c + ((int)local_c >> 0xf & 0xfU)) >> 4) * 0x10);
  if ((int)local_c < 0x40) {
    local_c = (undefined4 **)0x40;
  }
  local_12 = (undefined4 *)0x4e;
  local_16 = (float)(int)local_c;
  local_1a = 2.5274493e-29;
  M007_PUTVALUE();
  if ((int)local_c < 0x400) {
    if ((int)local_c < 0x200) {
      if ((int)local_c < 0x100) {
        if ((int)local_c < 0x80) {
          local_16 = 1.5887546e-38;
        }
        else {
          local_16 = 1.5887545e-38;
        }
      }
      else {
        local_16 = 1.5887544e-38;
      }
    }
    else {
      local_16 = 1.5887542e-38;
    }
  }
  else {
    local_16 = 1.5887541e-38;
  }
  local_1a = 2.8430135e-29;
  M007_PUTSTATE();
  local_16._0_2_ = 0x1010;
  local_1a = (float)CONCAT22(0x2872,(undefined2)local_1a);
  FUN_1000_22c6();
  local_a = 0x10;
  local_6 = ((int)(local_6 + (local_6 >> 0xf & 0xfU)) >> 4) * 0x10;
  if (0x400 < local_6 + (int)local_c) {
    local_6 = 0x400 - (int)local_c;
  }
  if (0x300 < (int)local_e + local_8) {
    local_8 = 0x300 - (int)local_e;
  }
  local_16 = (float)CONCAT22(local_16._2_2_,0x4c);
  local_1a = (float)local_6;
  local_1e = (float)local_8;
  M007_PUTXY(0x1000);
  local_1a._2_2_ = 0x1e;
  local_1a._0_2_ = 5;
  local_1e = 2.8430463e-29;
  M007_PUTSTATE();
  local_1a = (float)CONCAT22(local_1a._2_2_,0x1010);
  local_1e = (float)CONCAT22(0x28df,(undefined2)local_1e);
  DOCOMMANDUNFREEZE_ALL();
  local_1e._2_2_ = 0x144;
  local_1e._0_2_ = 0x1010;
  M007_GETSTATE();
  local_1e = (float)((ulong)local_1e._2_2_ << 0x10);
  SETEOCOLUMNSCAN(0x1010,local_e,local_c,local_8,local_6);
  FUN_1000_2112();
  Z130_UPDATE_DETECTORS(0x1000);
  UPDATE_DETECTORS(0x1010);
  uVar3 = 0x1010;
  CHECKFORBEAMBLANKING(0x1010);
LAB_1000_2915:
  uVar2 = M007_GETSTATE(uVar3,100);
  if ((uVar2 & 3) != 0) {
    uVar2 = M007_GETSTATE(0x1010,100);
    SWITCHZONE(0x1010,uVar2 & 4);
  }
  return;
}


// ---- REDUCEDRASTER @ 1000:2934

void __stdcall16far REDUCEDRASTER(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar4 = 0x1008;
  uVar3 = 0x1e;
  iVar1 = M007_GETSTATE();
  if ((iVar1 == 5) && (iVar1 = M007_GETSTATE(0x1010,0x77,uVar3,uVar4), iVar1 == 0)) {
    if (param_2 < 0x40) {
      param_2 = 0x40;
    }
    if (param_2 < 0x400) {
      if (param_2 < 0x200) {
        if (param_2 < 0x100) {
          if (param_2 < 0x80) {
            uVar3 = 4;
          }
          else {
            uVar3 = 3;
          }
        }
        else {
          uVar3 = 2;
        }
      }
      else {
        uVar3 = 1;
      }
    }
    else {
      uVar3 = 0;
    }
    uVar4 = 0xad;
    M007_PUTSTATE(0x1010,uVar3);
    FUN_1000_22c6(uVar4);
    param_4 = ((int)(param_4 + (param_4 >> 0xf & 0xfU)) >> 4) * 0x10;
    if (0x400 < param_4 + param_2) {
      param_4 = 0x400 - param_2;
    }
    if (0x300 < param_1 + param_3) {
      param_3 = 0x300 - param_1;
    }
    uVar2 = 0x4c;
    M007_PUTXY(0x1000,(float)param_3,(float)param_4);
    uVar4 = 0x4f;
    M007_PUTVALUE(0x1010,(float)param_1);
    uVar3 = 0x4e;
    M007_PUTVALUE(0x1010,(float)param_2);
    FUN_1000_2534(uVar3,uVar4,uVar2);
    M007_GETSTATE(0x1000,0x144);
    SETEOCOLUMNSCAN(0x1010,param_1,param_2,param_3,param_4);
  }
  return;
}


// ---- TEMPREDUCEDRASTER @ 1000:2a54

void __stdcall16far TEMPREDUCEDRASTER(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  undefined2 local_4;
  
  uVar3 = 0x1008;
  local_4 = ((int)(param_4 + (param_4 >> 0xf & 0xfU)) >> 4) * 0x10;
  local_8 = ((int)(param_2 + (param_2 >> 0xf & 0xfU)) >> 4) * 0x10;
  if (local_8 < 0x40) {
    local_8 = 0x40;
  }
  if (0x400 < local_8) {
    local_8 = 0x400;
  }
  local_6 = param_3;
  local_a = param_1;
  if (param_1 < 1) {
    local_a = 1;
  }
  if (0x400 < local_8 + local_4) {
    local_4 = 0x400 - local_8;
  }
  if (0x300 < local_a + param_3) {
    local_6 = 0x300 - local_a;
  }
  uVar2 = 0x1f;
  iVar1 = M007_GETSTATE();
  if (iVar1 == 1) {
    DRAWZOOMBOX(uVar2,uVar3);
  }
  FUN_1000_250c();
  M007_GETSTATE(0x1000,0x144);
  uVar3 = 0;
  SETEOCOLUMNSCAN(0x1010,local_a,local_8,local_6,local_4);
  CHECKFORBEAMBLANKING(0x1010,uVar3);
  return;
}


// ---- SETXYRED_RASTER_POSN @ 1000:2b10

void __stdcall16far
SETXYRED_RASTER_POSN(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x4c;
  M007_PUTXY(unaff_CS,param_1,param_2,param_3,param_4);
  iVar1 = M007_GETSTATE(0x1010,0x144,uVar2,uVar3);
  if (iVar1 == 0) {
    iVar1 = M007_GETSTATE(0x1010,0x1e);
    if (iVar1 == 5) {
      DOCOMMANDMODE_REDUCED();
    }
  }
  return;
}


// ---- SETRED_RASTER_W @ 1000:2b4e

void __stdcall16far SETRED_RASTER_W(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x4e;
  M007_PUTVALUE(unaff_CS,param_1,param_2);
  iVar1 = M007_GETSTATE(0x1010,0x144,uVar2,uVar3);
  if (iVar1 == 0) {
    iVar1 = M007_GETSTATE(0x1010,0x1e);
    if (iVar1 == 5) {
      DOCOMMANDMODE_REDUCED();
    }
  }
  return;
}


// ---- SETRED_RASTER_H @ 1000:2b86

void __stdcall16far SETRED_RASTER_H(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x4f;
  M007_PUTVALUE(unaff_CS,param_1,param_2);
  iVar1 = M007_GETSTATE(0x1010,0x144,uVar2,uVar3);
  if (iVar1 == 0) {
    iVar1 = M007_GETSTATE(0x1010,0x1e);
    if (iVar1 == 5) {
      DOCOMMANDMODE_REDUCED();
    }
  }
  return;
}


// ---- SWITCHZOOM @ 1000:2bbe

void __stdcall16far SWITCHZOOM(int param_1)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined1 local_e [4];
  undefined1 local_a [4];
  undefined1 local_6 [4];
  
  if (param_1 == 1) {
    if (DAT_1008_001c != 0 || DAT_1008_001a != 0) {
      DAT_1008_001c = 0;
      DAT_1008_001a = 0;
    }
    uVar7 = 0;
    SWITCHWINDOWING();
    SWITCHLINE_SCAN(0);
    SWITCHSPOT(0);
    iVar1 = M007_GETSTATE(0x1000,0x144,uVar7);
    if (iVar1 == 0) {
      unaff_CS = 0x1010;
      iVar1 = M007_GETSTATE(0x1010,0x1e);
      if (iVar1 != 1) {
        unaff_CS = 0x1000;
        DOCOMMANDMODE_SPLIT();
      }
    }
    else {
      unaff_CS = 0x1010;
      M007_PUTSTATE(0x1010,1);
    }
  }
  iVar1 = M007_GETSTATE(unaff_CS,0x1f);
  if (iVar1 != param_1) {
    uVar7 = 0x1f;
    M007_PUTSTATE(0x1010,param_1);
    if (param_1 == 0) {
      SETEOZOOM(0x1010,0,0,DAT_1008_02ac);
      DAT_1008_0010 = 0;
      M007_PUTVALUE(0x1010,DAT_1008_02ac,DAT_1008_02ae);
      M007_PUTVALUE(0x1010,DAT_1008_02ac,DAT_1008_02ae);
      M007_PUTVALUE(0x1010,DAT_1008_02ac,DAT_1008_02ae);
      M007_PUTVALUE(0x1010,DAT_1008_02ac,DAT_1008_02ae);
      M007_PUTVALUE(0x1010,DAT_1008_02ac,DAT_1008_02ae);
      M007_PUTVALUE(0x1010,DAT_1008_02ac,DAT_1008_02ae);
      M007_PUTVALUE(0x1010,DAT_1008_02ac,DAT_1008_02ae);
      M007_PUTVALUE(0x1010,DAT_1008_02ac,DAT_1008_02ae);
    }
    else {
      uVar6 = 0x43;
      puVar2 = (undefined2 *)M007_GETVALUE(0x1010,local_e);
      uVar3 = puVar2[1];
      uVar4 = *puVar2;
      uVar5 = 0x3a;
      M007_GETVALUE(0x1010,local_a);
      uVar7 = FUN_1000_010e(uVar5,uVar4,uVar3,uVar6,uVar7);
      uVar4 = 0x3b;
      M007_GETVALUE(0x1000,local_6);
      uVar3 = FUN_1000_010e(uVar4,uVar7);
      SETEOZOOM(0x1000,uVar3,uVar4,uVar7);
      DAT_1008_0010 = 1;
      FUN_1000_234e();
    }
  }
  return;
}


// ---- SETZOOMBOX @ 1000:2d2c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __stdcall16far SETZOOMBOX(int param_1,int param_2,float param_3)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined1 local_a [4];
  undefined1 local_6 [4];
  
  uVar6 = 0x1008;
  uVar5 = 0xe6;
  pfVar2 = (float *)M007_GETVALUE(unaff_CS,local_a);
  fVar1 = *pfVar2 * DAT_1008_02bc;
  uVar4 = 0;
  pfVar2 = (float *)M007_GETVALUE(0x1010,local_6);
  if ((*pfVar2 < fVar1) && (param_3 < _DAT_1008_02ac)) {
    param_3 = _DAT_1008_02ac;
  }
  iVar3 = M007_GETSTATE(0x1010,0x1f,uVar4,uVar5,uVar6);
  if (iVar3 == 1) {
    uVar4 = 0x43;
    M007_PUTVALUE();
    SETXYZOOMPOS((float)param_1,(float)param_2);
    DAT_1008_0014 = param_3;
    FUN_1000_234e(uVar4);
  }
  return;
}


// ---- SETZOOM_FACTOR @ 1000:2dea

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __stdcall16far SETZOOM_FACTOR(float param_1)

{
  float *pfVar1;
  int iVar2;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  float fVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  float local_e;
  undefined1 local_a [4];
  float local_6;
  
  uVar7 = 0x1008;
  uVar6 = 0xe6;
  pfVar1 = (float *)M007_GETVALUE(unaff_CS,local_a);
  local_e = *pfVar1 * DAT_1008_02bc;
  uVar5 = 0;
  pfVar1 = (float *)M007_GETVALUE(0x1010,&local_6);
  if ((*pfVar1 < local_e) && (param_1 < _DAT_1008_02ac)) {
    param_1 = _DAT_1008_02ac;
  }
  uVar4 = 0x43;
  local_6 = param_1;
  M007_PUTVALUE();
  iVar2 = M007_GETSTATE(0x1010,0x1f,uVar4,uVar5,uVar6,uVar7);
  if (iVar2 == 1) {
    uVar5 = 0x3a;
    M007_GETVALUE(0x1010,local_a);
    iVar2 = FUN_1000_010e(uVar5);
    fVar3 = (float)iVar2;
    uVar5 = 0x3b;
    M007_GETVALUE(0x1000,&local_e);
    iVar2 = FUN_1000_010e(uVar5,fVar3);
    SETXYZOOMPOS((float)iVar2,uVar5);
    DAT_1008_0014 = local_6;
    FUN_1000_234e();
  }
  return;
}


// ---- SETXYZOOMPOS @ 1000:2edc

void __stdcall16far SETXYZOOMPOS(float param_1,float param_2)

{
  float fVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 local_12;
  undefined2 uStack_10;
  undefined4 local_e;
  undefined4 local_a;
  int local_6;
  int local_4;
  
  uVar6 = 0x1008;
  uVar5 = 0x43;
  puVar2 = (undefined2 *)M007_GETVALUE(unaff_CS,&local_e);
  local_a = (float)CONCAT22(puVar2[1],*puVar2);
  iVar3 = M007_GETSTATE(0x1010,0x1e,uVar5,uVar6);
  if (iVar3 == 0) {
    local_4 = 0x400;
  }
  else {
    local_4 = 0x200;
  }
  local_6 = 0x2ff;
  local_e = local_a;
  if ((float)DAT_1008_02a4 < local_a) {
    DAT_1008_0636 = FUN_1000_010e();
  }
  else {
    DAT_1008_0636 = FUN_1000_010e();
  }
  DAT_1008_0638 = FUN_1000_010e();
  if ((float)local_4 < param_2 + (float)DAT_1008_0636) {
    param_2 = (float)(local_4 - DAT_1008_0636);
  }
  if ((float)local_6 < param_1 + (float)DAT_1008_0638) {
    param_1 = (float)(local_6 - DAT_1008_0638);
  }
  uVar4 = 0x3a;
  local_e = param_2;
  fVar1 = local_e;
  local_e._2_2_ = (undefined2)((ulong)param_2 >> 0x10);
  uVar6 = local_e._2_2_;
  local_e._0_2_ = SUB42(param_2,0);
  uVar5 = (undefined2)local_e;
  uStack_10 = (undefined2)((ulong)param_1 >> 0x10);
  local_12 = SUB42(param_1,0);
  local_e = fVar1;
  M007_PUTXY(0x1000,local_12,uStack_10,uVar5,uVar6);
  iVar3 = M007_GETSTATE(0x1010,0x1f,uVar4);
  if (iVar3 == 1) {
    uVar5 = (undefined2)local_a;
    uVar6 = FUN_1000_010e((undefined2)local_a,local_a._2_2_);
    uVar4 = FUN_1000_010e(uVar6);
    SETEOZOOM(0x1000,uVar4,uVar6,uVar5);
  }
  return;
}


// ---- SWITCHSPOT @ 1000:3024

void __stdcall16far SWITCHSPOT(int param_1)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined1 local_a [4];
  undefined1 local_6 [4];
  
  uVar6 = 0x1008;
  uVar5 = 0x21;
  uVar3 = 0x1010;
  iVar1 = M007_GETSTATE();
  if (iVar1 != param_1) {
    if (param_1 == 1) {
      SWITCHWINDOWING(0x1010,0,uVar5,uVar6);
      SWITCHLINE_SCAN(0);
      uVar3 = 0x1000;
      SWITCHZOOM(0);
    }
    uVar5 = 0x21;
    M007_PUTSTATE(uVar3,param_1);
    if (param_1 == 1) {
      DAT_1008_062c = M007_GETSTATE(0x1010,0x11);
      DAT_1008_062e = M007_GETSTATE(0x1010,0x6e);
      SWITCHAUTO_VIDEO(0x1010,0);
      DAT_1008_0018 = M007_GETSTATE(0x1010,0x18);
      SWITCHDYNFOCUS(0x1010,0);
      FUN_1000_2534();
      uVar5 = 4;
      uVar3 = 0x44;
      M007_GETVALUE(0x1000,local_a);
      uVar6 = FUN_1000_010e(uVar3,uVar5);
      uVar4 = 0x45;
      M007_GETVALUE(0x1000,local_6);
      uVar6 = FUN_1000_010e(uVar4,uVar6);
      SETEOCOLUMNSCAN(0x1000,0,0,uVar6,uVar4);
      START_SPOT_DATA(0x1010);
    }
    else {
      SWITCHEXT_SPOT_CONTROL(0x1010,0,uVar5);
      STOP_SPOT_DATA(0x1010);
      uVar3 = M007_GETSTATE(0x1010,0x1e);
      FUN_1000_2138(uVar3);
      FUN_1000_220e(DAT_1008_062c);
      SWITCHAUTO_VIDEO(0x1000,DAT_1008_062e);
      DOCOMMANDSCM_IMAGE(0x1010);
      uVar5 = 0;
      puVar2 = (undefined2 *)M007_GETVALUE(0x1010,local_a);
      uVar3 = puVar2[1];
      SETMAG(0x1010,*puVar2);
    }
    Z130_UPDATE_DETECTORS(0x1010,uVar3,uVar5);
    UPDATE_DETECTORS(0x1010);
  }
  return;
}


// ---- SETXYSPOT_POSN @ 1000:3134

void __stdcall16far SETXYSPOT_POSN(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 local_a;
  undefined2 uStack_8;
  undefined2 local_6;
  undefined2 uStack_4;
  
  uVar3 = 0x1008;
  uVar2 = 0x44;
  uStack_4 = (undefined2)((ulong)param_2 >> 0x10);
  local_6 = (undefined2)param_2;
  uStack_8 = (undefined2)((ulong)param_1 >> 0x10);
  local_a = (undefined2)param_1;
  M007_PUTXY(unaff_CS,local_a,uStack_8,local_6,uStack_4);
  iVar1 = M007_GETSTATE(0x1010,0x21,uVar2,uVar3);
  if (iVar1 == 1) {
    uVar2 = FUN_1000_010e(4);
    uVar3 = FUN_1000_010e(uVar2);
    SETEOCOLUMNSCAN(0x1000,0,0,uVar3,uVar2);
  }
  return;
}


// ---- SWITCHXRAY_LINESCAN @ 1000:3194

void __stdcall16far SWITCHXRAY_LINESCAN(int param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined1 local_c [4];
  undefined1 local_8 [4];
  int local_4;
  
  uVar5 = 0x1008;
  uVar4 = 199;
  iVar1 = M007_GETSTATE();
  if (iVar1 != param_1) {
    if (param_1 == 1) {
      uVar2 = 0x1010;
      iVar1 = M007_GETSTATE(0x1010,0x1e,uVar4,uVar5);
      if (iVar1 != 0) {
        uVar2 = 0x1000;
        DOCOMMANDMODE_NORMAL();
      }
      SWITCHWINDOWING(uVar2,0);
      SWITCHSPOT(0);
      SWITCHZOOM(0);
      DAT_1008_062e = M007_GETSTATE(0x1000,0x6e);
      SWITCHAUTO_VIDEO(0x1010,0);
      DAT_1008_0018 = M007_GETSTATE(0x1010,0x18);
      SWITCHDYNFOCUS(0x1010,0);
      DAT_1008_062c = M007_GETSTATE(0x1010,0x11);
      iVar1 = M007_GETSTATE(0x1010,0x11);
      if (iVar1 < 10) {
        DOCOMMANDSCANRATE10(0x1010);
      }
    }
    uVar4 = 199;
    M007_PUTSTATE(0x1010,param_1);
    if (param_1 == 1) {
      iVar1 = M007_GETSTATE(0x1010,0x1e,uVar4);
      if (iVar1 == 0) {
        local_4 = 0x400;
      }
      else {
        local_4 = 0x200;
      }
      uVar4 = 0x48;
      M007_PUTVALUE(0x1010,(float)local_4);
      FUN_1000_2534(uVar4);
      uVar3 = 0x30046;
      M007_GETVALUE(0x1000,local_c);
      uVar4 = FUN_1000_010e(uVar3);
      uVar5 = 0x47;
      M007_GETVALUE(0x1000,local_8);
      uVar4 = FUN_1000_010e(uVar5,uVar4);
      SETEOCOLUMNSCAN(0x1000,0,local_4,uVar4,uVar5);
    }
    else {
      iVar1 = M007_GETSTATE(0x1010,0xc1,uVar4);
      if (iVar1 == 1) {
        DOCOMMANDXRAY_STOP(0x1010);
      }
      uVar4 = M007_GETSTATE(0x1010,0x1e);
      FUN_1000_2138(uVar4);
      FUN_1000_220e(DAT_1008_062c);
      SWITCHAUTO_VIDEO(0x1000,DAT_1008_062e);
      SWITCHLUT_MODE(0x1010,0);
    }
    UPDATE_DETECTORS(0x1010);
    SWITCHPROFILE(0x1010,param_1);
  }
  return;
}


// ---- SWITCHLINE_SCAN @ 1000:32e0

void __stdcall16far SWITCHLINE_SCAN(int param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined1 local_c [4];
  undefined1 local_8 [4];
  int local_4;
  
  uVar5 = 0x1008;
  uVar4 = 0x22;
  iVar1 = M007_GETSTATE();
  if (iVar1 != param_1) {
    if (param_1 == 1) {
      SWITCHWINDOWING(0x1010,0,uVar4,uVar5);
      SWITCHSPOT(0);
      SWITCHZOOM(0);
      DAT_1008_062e = M007_GETSTATE(0x1000,0x6e);
      SWITCHAUTO_VIDEO(0x1010,0);
      DAT_1008_0018 = M007_GETSTATE(0x1010,0x18);
      SWITCHDYNFOCUS(0x1010,0);
    }
    uVar4 = 0x22;
    M007_PUTSTATE(0x1010,param_1);
    if (param_1 == 1) {
      iVar1 = M007_GETSTATE(0x1010,0x1e,uVar4);
      if (iVar1 == 0) {
        local_4 = 0x400;
      }
      else {
        local_4 = 0x200;
      }
      uVar4 = 0x48;
      M007_PUTVALUE(0x1010,(float)local_4);
      FUN_1000_2534(uVar4);
      uVar3 = 0x30046;
      M007_GETVALUE(0x1000,local_c);
      uVar5 = FUN_1000_010e(uVar3);
      uVar2 = 0x47;
      M007_GETVALUE(0x1000,local_8);
      uVar5 = FUN_1000_010e(uVar2,uVar5);
      SETEOCOLUMNSCAN(0x1000,0,local_4,uVar5,uVar2);
    }
    else {
      uVar4 = M007_GETSTATE(0x1010,0x1e,uVar4);
      FUN_1000_2138(uVar4);
      uVar4 = DAT_1008_062e;
      SWITCHAUTO_VIDEO();
    }
    uVar5 = 0x1010;
    Z130_UPDATE_DETECTORS();
    UPDATE_DETECTORS(0x1010,uVar5,uVar4);
    SWITCHPROFILE(0x1010,param_1);
  }
  return;
}


// ---- SETXYLINE_POSN @ 1000:33e2

void __stdcall16far
SETXYLINE_POSN(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined1 local_6 [4];
  
  uVar4 = 0x1008;
  uVar3 = 0x46;
  M007_PUTXY(unaff_CS,param_1,param_2,param_3,param_4);
  iVar1 = M007_GETSTATE(0x1010,0x22,uVar3,uVar4);
  if ((iVar1 != 1) && (iVar1 = M007_GETSTATE(0x1010,199), iVar1 != 1)) {
    return;
  }
  uVar3 = FUN_1000_010e(3);
  uVar3 = FUN_1000_010e(uVar3);
  uVar2 = 0x48;
  M007_GETVALUE(0x1000,local_6);
  uVar4 = FUN_1000_010e(uVar2,uVar3);
  SETEOCOLUMNSCAN(0x1000,0,uVar4,uVar2,uVar3);
  return;
}


// ---- SETLINE_LENGTH @ 1000:344e

void __stdcall16far SETLINE_LENGTH(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined1 local_a [4];
  undefined1 local_6 [4];
  
  uVar4 = 0x1008;
  uVar3 = 0x48;
  M007_PUTVALUE(unaff_CS,param_1,param_2);
  iVar1 = M007_GETSTATE(0x1010,0x22,uVar3,uVar4);
  if ((iVar1 != 1) && (iVar1 = M007_GETSTATE(0x1010,199), iVar1 != 1)) {
    return;
  }
  uVar4 = 3;
  uVar3 = 0x46;
  M007_GETVALUE(0x1010,local_a);
  uVar3 = FUN_1000_010e(uVar3,uVar4);
  uVar2 = 0x47;
  M007_GETVALUE(0x1000,local_6);
  uVar3 = FUN_1000_010e(uVar2,uVar3);
  uVar4 = FUN_1000_010e(uVar3);
  SETEOCOLUMNSCAN(0x1000,0,uVar4,uVar3,uVar2);
  return;
}


// ---- SWITCHSTEREO @ 1000:34c0

void __stdcall16far SWITCHSTEREO(undefined2 param_1)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1008;
  uVar1 = 0x24;
  M007_PUTSTATE(unaff_CS,param_1);
  SETEOSTEREO(0x1010,param_1,uVar1,uVar2);
  return;
}


// ---- SWITCHDISPLAY_CHANNELS @ 1000:34e0

void __stdcall16far SWITCHDISPLAY_CHANNELS(undefined2 param_1)

{
  undefined2 unaff_CS;
  
  M007_PUTSTATE(unaff_CS,param_1);
  return;
}


// ---- DOCOMMANDMODE_EMISSION @ 1000:34f8

void __cdecl16far DOCOMMANDMODE_EMISSION(void)

{
  int iVar1;
  int *piVar2;
  undefined2 *puVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  undefined4 uVar5;
  
  FUN_1000_250c(0x1008);
  iVar1 = M007_GETSTATE(0x1000,0x1e);
  if (iVar1 != 1) {
    iVar1 = M007_GETSTATE(0x1010,0x1e);
    if (iVar1 != 2) {
      iVar1 = M007_GETSTATE(0x1010,0x1e);
      if (iVar1 != 5) {
        iVar1 = M007_GETSTATE(0x1010,0x1e);
        if (iVar1 != 4) {
          uVar4 = 0x1010;
          iVar1 = M007_GETSTATE(0x1010,0x1e);
          if (iVar1 != 6) goto LAB_1000_3546;
        }
      }
    }
  }
  uVar4 = 0x1000;
  DOCOMMANDMODE_NORMAL();
LAB_1000_3546:
  DOCOMMANDUNFREEZE_ALL(uVar4);
  M007_PUTSTATE();
  piVar2 = (int *)GET_EMISSION_CENTRE();
  SETXYCROSS((float)piVar2[1],(float)*piVar2);
  uVar4 = 0x15;
  puVar3 = (undefined2 *)M007_GETVALUE();
  uVar5 = CONCAT22(uVar4,puVar3[1]);
  SETEOEMISSION(0x1010,*puVar3);
  uVar4 = 0x1010;
  Z130_UPDATE_DETECTORS();
  UPDATE_DETECTORS(0x1010,uVar4,uVar5);
  CHECKFORBEAMBLANKING(0x1010);
  return;
}


// ---- SETEMISSIONZOOM @ 1000:35b8

void __stdcall16far SETEMISSIONZOOM(undefined4 param_1)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined2 uStack_4;
  
  uStack_4 = (undefined2)((ulong)param_1 >> 0x10);
  M007_PUTVALUE(unaff_CS,(int)param_1,uStack_4);
  iVar1 = M007_GETSTATE();
  if (iVar1 == 3) {
    SETEOEMISSION(0x1010);
  }
  return;
}


// ---- SWITCH7BIT @ 1000:35fe

void __stdcall16far SWITCH7BIT(undefined2 param_1)

{
  undefined1 extraout_AH;
  undefined2 unaff_CS;
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1008;
  uVar1 = 0xbb;
  M007_PUTSTATE(unaff_CS,param_1);
  M007_GETSTATE(0x1010,0x75,uVar1,uVar2);
  SEVENBITMODE(0x1010,CONCAT11(extraout_AH,(undefined1)param_1));
  return;
}


// ---- SWITCHCROSSHAIRS @ 1000:3628

void __stdcall16far SWITCHCROSSHAIRS(undefined2 param_1)

{
  undefined2 unaff_CS;
  
  M007_PUTSTATE(unaff_CS,param_1);
  return;
}


// ---- SWITCHGRATICULE @ 1000:3642

void __stdcall16far SWITCHGRATICULE(undefined2 param_1)

{
  undefined2 unaff_CS;
  
  M007_PUTSTATE(unaff_CS,param_1);
  return;
}


// ---- SETXYCROSS @ 1000:365c

void __stdcall16far
SETXYCROSS(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar4 = 0x1008;
  uVar3 = 0xd0;
  M007_PUTXY(unaff_CS,param_1,param_2,param_3,param_4);
  uVar2 = 0x1010;
  iVar1 = M007_GETSTATE(0x1010,0x10b,uVar3,uVar4);
  if (iVar1 == 1) {
    SWITCHCROSSHAIRS(0);
    uVar2 = 0x1000;
    SWITCHCROSSHAIRS(1);
  }
  iVar1 = M007_GETSTATE(uVar2,0x10c);
  if (iVar1 == 1) {
    SWITCHGRATICULE(0);
    SWITCHGRATICULE(1);
  }
  return;
}


// ---- SETGRAT_SPACE @ 1000:36b0

void __stdcall16far SETGRAT_SPACE(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1008;
  uVar2 = 0x144;
  M007_PUTVALUE(unaff_CS,param_1,param_2);
  iVar1 = M007_GETSTATE(0x1010,0x10c,uVar2,uVar3);
  if (iVar1 == 1) {
    SWITCHGRATICULE(0);
    SWITCHGRATICULE(1);
  }
  return;
}


// ---- __FPMATH @ 1010:0000

/* WARNING: Control flow encountered bad instruction data */

void __FPMATH(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- COMMANDENABLE @ 1010:0004

/* WARNING: Control flow encountered bad instruction data */

void COMMANDENABLE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- M007_PUTVALUE @ 1010:0008

/* WARNING: Control flow encountered bad instruction data */

void M007_PUTVALUE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- M007_GETVALUE @ 1010:000c

/* WARNING: Control flow encountered bad instruction data */

void M007_GETVALUE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- M007_PUTLOW @ 1010:0010

/* WARNING: Control flow encountered bad instruction data */

void M007_PUTLOW(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- M007_PUTHIGH @ 1010:0014

/* WARNING: Control flow encountered bad instruction data */

void M007_PUTHIGH(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- M007_PUTSTATE @ 1010:0018

/* WARNING: Control flow encountered bad instruction data */

void M007_PUTSTATE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- M007_GETSTATE @ 1010:001c

/* WARNING: Control flow encountered bad instruction data */

void M007_GETSTATE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- UIF_MESSAGE @ 1010:0020

/* WARNING: Control flow encountered bad instruction data */

void UIF_MESSAGE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- M007_PUTXY @ 1010:0024

/* WARNING: Control flow encountered bad instruction data */

void M007_PUTXY(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- ISLICENCED @ 1010:0028

/* WARNING: Control flow encountered bad instruction data */

void ISLICENCED(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SETMAG @ 1010:002c

/* WARNING: Control flow encountered bad instruction data */

void SETMAG(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SWITCHDYNFOCUS @ 1010:0030

/* WARNING: Control flow encountered bad instruction data */

void SWITCHDYNFOCUS(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SETEOCOLUMNSCAN @ 1010:0034

/* WARNING: Control flow encountered bad instruction data */

void SETEOCOLUMNSCAN(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SETEOEMISSION @ 1010:0038

/* WARNING: Control flow encountered bad instruction data */

void SETEOEMISSION(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SETEOZOOM @ 1010:003c

/* WARNING: Control flow encountered bad instruction data */

void SETEOZOOM(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SETEOSTEREO @ 1010:0040

/* WARNING: Control flow encountered bad instruction data */

void SETEOSTEREO(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DOCOMMANDSCANRATE0 @ 1010:0044

/* WARNING: Control flow encountered bad instruction data */

void DOCOMMANDSCANRATE0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DOCOMMANDSCANRATE1 @ 1010:0048

/* WARNING: Control flow encountered bad instruction data */

void DOCOMMANDSCANRATE1(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DOCOMMANDSCANRATE2 @ 1010:004c

/* WARNING: Control flow encountered bad instruction data */

void DOCOMMANDSCANRATE2(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DOCOMMANDSCANRATE3 @ 1010:0050

/* WARNING: Control flow encountered bad instruction data */

void DOCOMMANDSCANRATE3(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DOCOMMANDSCANRATE4 @ 1010:0054

/* WARNING: Control flow encountered bad instruction data */

void DOCOMMANDSCANRATE4(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DOCOMMANDSCANRATE5 @ 1010:0058

/* WARNING: Control flow encountered bad instruction data */

void DOCOMMANDSCANRATE5(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DOCOMMANDSCANRATE6 @ 1010:005c

/* WARNING: Control flow encountered bad instruction data */

void DOCOMMANDSCANRATE6(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DOCOMMANDSCANRATE7 @ 1010:0060

/* WARNING: Control flow encountered bad instruction data */

void DOCOMMANDSCANRATE7(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DOCOMMANDSCANRATE8 @ 1010:0064

/* WARNING: Control flow encountered bad instruction data */

void DOCOMMANDSCANRATE8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DOCOMMANDSCANRATE9 @ 1010:0068

/* WARNING: Control flow encountered bad instruction data */

void DOCOMMANDSCANRATE9(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DOCOMMANDSCANRATE10 @ 1010:006c

/* WARNING: Control flow encountered bad instruction data */

void DOCOMMANDSCANRATE10(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DOCOMMANDSCANRATE11 @ 1010:0070

/* WARNING: Control flow encountered bad instruction data */

void DOCOMMANDSCANRATE11(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DOCOMMANDSCANRATE12 @ 1010:0074

/* WARNING: Control flow encountered bad instruction data */

void DOCOMMANDSCANRATE12(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DOCOMMANDSCANRATE13 @ 1010:0078

/* WARNING: Control flow encountered bad instruction data */

void DOCOMMANDSCANRATE13(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DOCOMMANDSCANRATE14 @ 1010:007c

/* WARNING: Control flow encountered bad instruction data */

void DOCOMMANDSCANRATE14(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DOCOMMANDSCANRATE15 @ 1010:0080

/* WARNING: Control flow encountered bad instruction data */

void DOCOMMANDSCANRATE15(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SEVENBITMODE @ 1010:0084

/* WARNING: Control flow encountered bad instruction data */

void SEVENBITMODE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- STOP_FEATURESCAN @ 1010:0088

/* WARNING: Control flow encountered bad instruction data */

void STOP_FEATURESCAN(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GET_EMISSION_CENTRE @ 1010:008c

/* WARNING: Control flow encountered bad instruction data */

void GET_EMISSION_CENTRE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- CHECKFORBEAMBLANKING @ 1010:0090

/* WARNING: Control flow encountered bad instruction data */

void CHECKFORBEAMBLANKING(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SWITCHPROFILE @ 1010:0094

/* WARNING: Control flow encountered bad instruction data */

void SWITCHPROFILE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DOCOMMANDXRAY_STOP @ 1010:0098

/* WARNING: Control flow encountered bad instruction data */

void DOCOMMANDXRAY_STOP(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SWITCHLUT_MODE @ 1010:009c

/* WARNING: Control flow encountered bad instruction data */

void SWITCHLUT_MODE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SWITCHZONE @ 1010:00a0

/* WARNING: Control flow encountered bad instruction data */

void SWITCHZONE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SWITCHAUTO_VIDEO @ 1010:00a4

/* WARNING: Control flow encountered bad instruction data */

void SWITCHAUTO_VIDEO(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DOCOMMANDUNFREEZE_ALL @ 1010:00a8

/* WARNING: Control flow encountered bad instruction data */

void DOCOMMANDUNFREEZE_ALL(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- UPDATE_DETECTORS @ 1010:00ac

/* WARNING: Control flow encountered bad instruction data */

void UPDATE_DETECTORS(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DOCOMMANDSCM_IMAGE @ 1010:00b0

/* WARNING: Control flow encountered bad instruction data */

void DOCOMMANDSCM_IMAGE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- POINTINWINDOW @ 1010:00b4

/* WARNING: Control flow encountered bad instruction data */

void POINTINWINDOW(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SWITCHWINDOWING @ 1010:00b8

/* WARNING: Control flow encountered bad instruction data */

void SWITCHWINDOWING(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- START_SPOT_DATA @ 1010:00bc

/* WARNING: Control flow encountered bad instruction data */

void START_SPOT_DATA(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- STOP_SPOT_DATA @ 1010:00c0

/* WARNING: Control flow encountered bad instruction data */

void STOP_SPOT_DATA(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- SWITCHEXT_SPOT_CONTROL @ 1010:00c4

/* WARNING: Control flow encountered bad instruction data */

void SWITCHEXT_SPOT_CONTROL(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- Z130_UPDATE_DETECTORS @ 1010:00c8

/* WARNING: Control flow encountered bad instruction data */

void Z130_UPDATE_DETECTORS(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- FATALEXIT @ 1010:00cc

/* WARNING: Control flow encountered bad instruction data */

void FATALEXIT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETVERSION @ 1010:00d0

/* WARNING: Control flow encountered bad instruction data */

void GETVERSION(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LOCALINIT @ 1010:00d4

/* WARNING: Control flow encountered bad instruction data */

void LOCALINIT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GLOBALALLOC @ 1010:00d8

/* WARNING: Control flow encountered bad instruction data */

void GLOBALALLOC(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GLOBALREALLOC @ 1010:00dc

/* WARNING: Control flow encountered bad instruction data */

void GLOBALREALLOC(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GLOBALFREE @ 1010:00e0

/* WARNING: Control flow encountered bad instruction data */

void GLOBALFREE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GLOBALLOCK @ 1010:00e4

/* WARNING: Control flow encountered bad instruction data */

void GLOBALLOCK(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GLOBALUNLOCK @ 1010:00e8

/* WARNING: Control flow encountered bad instruction data */

void GLOBALUNLOCK(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GLOBALSIZE @ 1010:00ec

/* WARNING: Control flow encountered bad instruction data */

void GLOBALSIZE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- LOCKSEGMENT @ 1010:00f0

/* WARNING: Control flow encountered bad instruction data */

void LOCKSEGMENT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETMODULEUSAGE @ 1010:00f4

/* WARNING: Control flow encountered bad instruction data */

void GETMODULEUSAGE(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- INITTASK @ 1010:00f8

/* WARNING: Control flow encountered bad instruction data */

void INITTASK(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- DOS3CALL @ 1010:00fc

/* WARNING: Control flow encountered bad instruction data */

void DOS3CALL(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- __AHSHIFT @ 1010:0100

/* WARNING: Control flow encountered bad instruction data */

void __AHSHIFT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- __AHINCR @ 1010:0104

/* WARNING: Control flow encountered bad instruction data */

void __AHINCR(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- GETDOSENVIRONMENT @ 1010:0108

/* WARNING: Control flow encountered bad instruction data */

void GETDOSENVIRONMENT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- FATALAPPEXIT @ 1010:010c

/* WARNING: Control flow encountered bad instruction data */

void FATALAPPEXIT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ---- __WINFLAGS @ 1010:0110

/* WARNING: Control flow encountered bad instruction data */

void __WINFLAGS(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


